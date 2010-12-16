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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001a70b };

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
0x4fb7,	// (0x0001f6c2) Screen

0x4fc3,	// (0x0001f6ce) application_window

0x4fcf,	// (0x0001f6da) area_bottom_pane_ParamLimits

0x4fcf,	// (0x0001f6da) area_bottom_pane

0x37ad,	// (0x0001deb8) area_top_pane_ParamLimits

0x37ad,	// (0x0001deb8) area_top_pane

0x3811,	// (0x0001df1c) call_video_uplink_pane_ParamLimits

0x3811,	// (0x0001df1c) call_video_uplink_pane

0x3850,	// (0x0001df5b) main_pane_ParamLimits

0x3850,	// (0x0001df5b) main_pane

0xe45b,	// (0x00028b66) context_pane

0x76b7,	// (0x00021dc2) navi_pane

0x76dd,	// (0x00021de8) popup_cale_events_window_ParamLimits

0x76dd,	// (0x00021de8) popup_cale_events_window

0xe46e,	// (0x00028b79) popup_mup_playback_window

0x76f5,	// (0x00021e00) signal_pane

0xc5c1,	// (0x00026ccc) main_browser_pane

0xc7d2,	// (0x00026edd) main_burst_pane

0x3dcc,	// (0x0001e4d7) main_calc_pane

0xe441,	// (0x00028b4c) main_cale_day_pane

0x51ec,	// (0x0001f8f7) main_cale_month_pane

0xe441,	// (0x00028b4c) main_cale_week_pane

0xc7d2,	// (0x00026edd) main_call_pane

0xc24f,	// (0x0002695a) main_call_poc_pane

0xc7d2,	// (0x00026edd) main_camera_pane

0xc7d2,	// (0x00026edd) main_chi_dic_pane

0xcf32,	// (0x0002763d) main_clock_pane

0xc24f,	// (0x0002695a) main_fmradio_pane

0xc7d2,	// (0x00026edd) main_graph_messa_pane

0xc24f,	// (0x0002695a) main_help_pane

0xc5c1,	// (0x00026ccc) main_im_pane

0xc4aa,	// (0x00026bb5) main_image_pane_ParamLimits

0xc4aa,	// (0x00026bb5) main_image_pane

0xc24f,	// (0x0002695a) main_location2_pane

0xc7d2,	// (0x00026edd) main_location_pane

0xc4aa,	// (0x00026bb5) main_messa_pane

0xc24f,	// (0x0002695a) main_mp2_pane

0xc7d2,	// (0x00026edd) main_mp_pane

0xc24f,	// (0x0002695a) main_msg_pane

0xc24f,	// (0x0002695a) main_mup_eq_pane

0xc24f,	// (0x0002695a) main_mup_pane

0xc5c1,	// (0x00026ccc) main_notes_pane

0xc24f,	// (0x0002695a) main_pec_pane

0xc24f,	// (0x0002695a) main_phob_pane

0xc24f,	// (0x0002695a) main_pinb_pane

0xc24f,	// (0x0002695a) main_postcard_pane

0xc24f,	// (0x0002695a) main_qdial_pane

0xc7d2,	// (0x00026edd) main_skin_pane

0xc24f,	// (0x0002695a) main_smil2_pane

0xc7d2,	// (0x00026edd) main_smil_pane

0xc7d2,	// (0x00026edd) main_video_pane

0xc7d2,	// (0x00026edd) main_video_tele_pane

0xc4aa,	// (0x00026bb5) main_viewer_pane_ParamLimits

0xc4aa,	// (0x00026bb5) main_viewer_pane

0xc7d2,	// (0x00026edd) main_vorec_pane

0x3e18,	// (0x0001e523) popup_blid_sat_info_window_ParamLimits

0x3e18,	// (0x0001e523) popup_blid_sat_info_window

0x3e38,	// (0x0001e543) popup_dyc_status_message_window_ParamLimits

0x3e38,	// (0x0001e543) popup_dyc_status_message_window

0x3e46,	// (0x0001e551) popup_grid_large_graphic_window_ParamLimits

0x3e46,	// (0x0001e551) popup_grid_large_graphic_window

0x3ed5,	// (0x0001e5e0) popup_loc_request_window_ParamLimits

0x3ed5,	// (0x0001e5e0) popup_loc_request_window

0x3f22,	// (0x0001e62d) popup_wml_address_window_ParamLimits

0x3f22,	// (0x0001e62d) popup_wml_address_window

0x7599,	// (0x00021ca4) call_muted_g1

0x7286,	// (0x00021991) popup_call_audio_conf_window_ParamLimits

0x7286,	// (0x00021991) popup_call_audio_conf_window

0x75a9,	// (0x00021cb4) popup_call_audio_first_window_ParamLimits

0x75a9,	// (0x00021cb4) popup_call_audio_first_window

0x75e9,	// (0x00021cf4) popup_call_audio_in_window_ParamLimits

0x75e9,	// (0x00021cf4) popup_call_audio_in_window

0x760d,	// (0x00021d18) popup_call_audio_out_window_ParamLimits

0x760d,	// (0x00021d18) popup_call_audio_out_window

0x762f,	// (0x00021d3a) popup_call_audio_second_window_ParamLimits

0x762f,	// (0x00021d3a) popup_call_audio_second_window

0x765f,	// (0x00021d6a) popup_call_audio_wait_window_ParamLimits

0x765f,	// (0x00021d6a) popup_call_audio_wait_window

0x7680,	// (0x00021d8b) popup_number_entry_window_ParamLimits

0x7680,	// (0x00021d8b) popup_number_entry_window

0xbe2e,	// (0x00026539) bg_popup_call_pane_cp05_ParamLimits

0xbe2e,	// (0x00026539) bg_popup_call_pane_cp05

0xbe4e,	// (0x00026559) popup_number_entry_window_t1

0xbe61,	// (0x0002656c) popup_number_entry_window_t2

0xbe73,	// (0x0002657e) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00029728) popup_number_entry_window_t

0xbe85,	// (0x00026590) text_title_cp2

0xbe98,	// (0x000265a3) bg_popup_call_pane_cp_ParamLimits

0xbe98,	// (0x000265a3) bg_popup_call_pane_cp

0xbea6,	// (0x000265b1) call_thumbnail_pane

0xbeae,	// (0x000265b9) popup_call_audio_in_window_g1_ParamLimits

0xbeae,	// (0x000265b9) popup_call_audio_in_window_g1

0xbeba,	// (0x000265c5) popup_call_audio_in_window_g2_ParamLimits

0xbeba,	// (0x000265c5) popup_call_audio_in_window_g2

0xbec6,	// (0x000265d1) popup_call_audio_in_window_g3_ParamLimits

0xbec6,	// (0x000265d1) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00029731) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00029731) popup_call_audio_in_window_g

0xbed2,	// (0x000265dd) popup_call_audio_in_window_t1_ParamLimits

0xbed2,	// (0x000265dd) popup_call_audio_in_window_t1

0xbeee,	// (0x000265f9) popup_call_audio_in_window_t2_ParamLimits

0xbeee,	// (0x000265f9) popup_call_audio_in_window_t2

0xbf0a,	// (0x00026615) popup_call_audio_in_window_t3_ParamLimits

0xbf0a,	// (0x00026615) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00029738) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00029738) popup_call_audio_in_window_t

0xbe98,	// (0x000265a3) bg_popup_call_pane_cp01_ParamLimits

0xbe98,	// (0x000265a3) bg_popup_call_pane_cp01

0xbea6,	// (0x000265b1) call_thumbnail_pane_cp02

0xbf1d,	// (0x00026628) call_type_pane_cp022

0xbf25,	// (0x00026630) popup_call_audio_out_window_g1_ParamLimits

0xbf25,	// (0x00026630) popup_call_audio_out_window_g1

0xbf37,	// (0x00026642) popup_call_audio_out_window_g2_ParamLimits

0xbf37,	// (0x00026642) popup_call_audio_out_window_g2

0xbf43,	// (0x0002664e) popup_call_audio_out_window_g3_ParamLimits

0xbf43,	// (0x0002664e) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0002973f) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0002973f) popup_call_audio_out_window_g

0xbf55,	// (0x00026660) popup_call_audio_out_window_t1_ParamLimits

0xbf55,	// (0x00026660) popup_call_audio_out_window_t1

0xbf6d,	// (0x00026678) popup_call_audio_out_window_t2_ParamLimits

0xbf6d,	// (0x00026678) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00029746) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00029746) popup_call_audio_out_window_t

0xbf82,	// (0x0002668d) bg_popup_call_pane_ParamLimits

0xbf82,	// (0x0002668d) bg_popup_call_pane

0x504c,	// (0x0001f757) call_thumbnail_pane_cp_ParamLimits

0x504c,	// (0x0001f757) call_thumbnail_pane_cp

0xc006,	// (0x00026711) call_type_pane_cp01_ParamLimits

0xc006,	// (0x00026711) call_type_pane_cp01

0xc04a,	// (0x00026755) popup_call_audio_first_window_g1_ParamLimits

0xc04a,	// (0x00026755) popup_call_audio_first_window_g1

0xc096,	// (0x000267a1) popup_call_audio_first_window_g2_ParamLimits

0xc096,	// (0x000267a1) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0002974b) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0002974b) popup_call_audio_first_window_g

0xc0da,	// (0x000267e5) popup_call_audio_first_window_t1_ParamLimits

0xc0da,	// (0x000267e5) popup_call_audio_first_window_t1

0xc194,	// (0x0002689f) popup_call_audio_first_window_t4_ParamLimits

0xc194,	// (0x0002689f) popup_call_audio_first_window_t4

0xc220,	// (0x0002692b) popup_call_audio_first_window_t5_ParamLimits

0xc220,	// (0x0002692b) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00029750) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00029750) popup_call_audio_first_window_t

0xc24f,	// (0x0002695a) bg_popup_call_pane_cp02

0xc259,	// (0x00026964) call_type_pane_cp023

0xc261,	// (0x0002696c) popup_call_audio_wait_window_g1

0xc269,	// (0x00026974) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00029757) popup_call_audio_wait_window_g

0xc271,	// (0x0002697c) popup_call_audio_wait_window_t3

0xc27f,	// (0x0002698a) bg_popup_call_pane_cp03_ParamLimits

0xc27f,	// (0x0002698a) bg_popup_call_pane_cp03

0xc2df,	// (0x000269ea) call_thumbnail_pane_cp011_ParamLimits

0xc2df,	// (0x000269ea) call_thumbnail_pane_cp011

0xc2eb,	// (0x000269f6) call_type_pane_cp034_ParamLimits

0xc2eb,	// (0x000269f6) call_type_pane_cp034

0xc327,	// (0x00026a32) popup_call_audio_second_window_g1_ParamLimits

0xc327,	// (0x00026a32) popup_call_audio_second_window_g1

0xc363,	// (0x00026a6e) popup_call_audio_second_window_g2_ParamLimits

0xc363,	// (0x00026a6e) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0002975c) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0002975c) popup_call_audio_second_window_g

0xc39f,	// (0x00026aaa) popup_call_audio_second_window_t1_ParamLimits

0xc39f,	// (0x00026aaa) popup_call_audio_second_window_t1

0xc420,	// (0x00026b2b) popup_call_audio_second_window_t2_ParamLimits

0xc420,	// (0x00026b2b) popup_call_audio_second_window_t2

0xc456,	// (0x00026b61) popup_call_audio_second_window_t3_ParamLimits

0xc456,	// (0x00026b61) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00029761) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00029761) popup_call_audio_second_window_t

0xc24f,	// (0x0002695a) bg_popup_call_pane_cp04

0xc48c,	// (0x00026b97) list_conf_pane

0xc494,	// (0x00026b9f) popup_call_audio_conf_window_t1

0xc4a2,	// (0x00026bad) call_thumbnail_pane_g1

0xc4aa,	// (0x00026bb5) bg_pinb_pane_ParamLimits

0xc4aa,	// (0x00026bb5) bg_pinb_pane

0xc4b8,	// (0x00026bc3) find_pinb_pane

0xc4aa,	// (0x00026bb5) listscroll_pinb_pane_ParamLimits

0xc4aa,	// (0x00026bb5) listscroll_pinb_pane

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g1

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g2

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g3

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g4

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g5

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g6

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g7

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g8

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g9

0xc4c2,	// (0x00026bcd) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00029768) pinb_bg_pane_g

0xbe24,	// (0x0002652f) grid_pinb_pane

0xbe24,	// (0x0002652f) list_pinb_pane

0xc186,	// (0x00026891) scroll_pane_cp01_ParamLimits

0xc186,	// (0x00026891) scroll_pane_cp01

0xc4cc,	// (0x00026bd7) find_pinb_pane_g1_ParamLimits

0xc4cc,	// (0x00026bd7) find_pinb_pane_g1

0xc4e4,	// (0x00026bef) find_pinb_pane_t1

0xc4f6,	// (0x00026c01) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00029782) find_pinb_pane_t

0xc50b,	// (0x00026c16) input_focus_pane_cp01_ParamLimits

0xc50b,	// (0x00026c16) input_focus_pane_cp01

0xc517,	// (0x00026c22) cell_pinb_pane_ParamLimits

0xc517,	// (0x00026c22) cell_pinb_pane

0xc525,	// (0x00026c30) cell_pinb_pane_g1_ParamLimits

0xc525,	// (0x00026c30) cell_pinb_pane_g1

0xc533,	// (0x00026c3e) cell_pinb_pane_g2_ParamLimits

0xc533,	// (0x00026c3e) cell_pinb_pane_g2

0xc533,	// (0x00026c3e) cell_pinb_pane_g3_ParamLimits

0xc533,	// (0x00026c3e) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00029787) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00029787) cell_pinb_pane_g

0xc24f,	// (0x0002695a) grid_highlight_pane_cp01

0xc517,	// (0x00026c22) list_pinb_item_pane_ParamLimits

0xc517,	// (0x00026c22) list_pinb_item_pane

0xbe24,	// (0x0002652f) list_highlight_pane_cp02

0xc541,	// (0x00026c4c) list_pinb_item_pane_g1_ParamLimits

0xc541,	// (0x00026c4c) list_pinb_item_pane_g1

0xc533,	// (0x00026c3e) list_pinb_item_pane_g2_ParamLimits

0xc533,	// (0x00026c3e) list_pinb_item_pane_g2

0xc525,	// (0x00026c30) list_pinb_item_pane_g3_ParamLimits

0xc525,	// (0x00026c30) list_pinb_item_pane_g3

0xc533,	// (0x00026c3e) list_pinb_item_pane_g4_ParamLimits

0xc533,	// (0x00026c3e) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0002978e) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0002978e) list_pinb_item_pane_g

0xc54f,	// (0x00026c5a) list_pinb_item_pane_t1_ParamLimits

0xc54f,	// (0x00026c5a) list_pinb_item_pane_t1

0x3a3d,	// (0x0001e148) calc_display_pane

0x3a5b,	// (0x0001e166) calc_paper_pane

0x3a77,	// (0x0001e182) grid_calc_pane

0xbe24,	// (0x0002652f) bg_list_pane_cp01

0xc563,	// (0x00026c6e) clock_g1

0xc563,	// (0x00026c6e) clock_g2

0x0001,

0xf08c,	// (0x00029797) clock_g

0xc56d,	// (0x00026c78) clock_t1_ParamLimits

0xc56d,	// (0x00026c78) clock_t1

0xc581,	// (0x00026c8c) clock_t2_ParamLimits

0xc581,	// (0x00026c8c) clock_t2

0xc581,	// (0x00026c8c) clock_t3_ParamLimits

0xc581,	// (0x00026c8c) clock_t3

0xc581,	// (0x00026c8c) clock_t4_ParamLimits

0xc581,	// (0x00026c8c) clock_t4

0xc56d,	// (0x00026c78) clock_t5_ParamLimits

0xc56d,	// (0x00026c78) clock_t5

0xc581,	// (0x00026c8c) clock_t6_ParamLimits

0xc581,	// (0x00026c8c) clock_t6

0xc581,	// (0x00026c8c) clock_t7_ParamLimits

0xc581,	// (0x00026c8c) clock_t7

0xc581,	// (0x00026c8c) clock_t8_ParamLimits

0xc581,	// (0x00026c8c) clock_t8

0xc581,	// (0x00026c8c) clock_t9_ParamLimits

0xc581,	// (0x00026c8c) clock_t9

0x0008,

0xf091,	// (0x0002979c) clock_t_ParamLimits

0xf091,	// (0x0002979c) clock_t

0xbe24,	// (0x0002652f) popup_clock_analogue_window_cp02

0xbe24,	// (0x0002652f) popup_clock_digital_window_cp01

0xc24f,	// (0x0002695a) listscroll_help_pane

0xc24f,	// (0x0002695a) phob_pre_status_pane

0xc595,	// (0x00026ca0) grid_qdial_pane

0xc4aa,	// (0x00026bb5) listscroll_mce_pane

0xc4aa,	// (0x00026bb5) bg_notes_pane

0xc59f,	// (0x00026caa) list_notes_pane

0x5070,	// (0x0001f77b) scroll_pane_cp06

0xc5ad,	// (0x00026cb8) bg_calc_paper_pane

0x3aa3,	// (0x0001e1ae) list_calc_pane

0xc5c1,	// (0x00026ccc) bg_calc_display_pane

0x3abd,	// (0x0001e1c8) calc_display_pane_t1

0x3ad2,	// (0x0001e1dd) calc_display_pane_t2

0x3ae7,	// (0x0001e1f2) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x000297af) calc_display_pane_t

0x3af9,	// (0x0001e204) cell_calc_pane_ParamLimits

0x3af9,	// (0x0001e204) cell_calc_pane

0xc5cd,	// (0x00026cd8) bg_calc_paper_pane_g1

0xc5d9,	// (0x00026ce4) bg_calc_paper_pane_g2

0xc5e5,	// (0x00026cf0) bg_calc_paper_pane_g3

0xc5f1,	// (0x00026cfc) bg_calc_paper_pane_g4

0xc5fd,	// (0x00026d08) bg_calc_paper_pane_g5

0x507f,	// (0x0001f78a) bg_calc_paper_pane_g6

0x5090,	// (0x0001f79b) bg_calc_paper_pane_g7

0x50a1,	// (0x0001f7ac) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x000297b6) bg_calc_paper_pane_g

0x50b2,	// (0x0001f7bd) calc_bg_paper_pane_g9

0x50c3,	// (0x0001f7ce) list_calc_item_pane_ParamLimits

0x50c3,	// (0x0001f7ce) list_calc_item_pane

0xc609,	// (0x00026d14) list_calc_item_pane_g1

0x3b26,	// (0x0001e231) list_calc_item_pane_t1_ParamLimits

0x3b26,	// (0x0001e231) list_calc_item_pane_t1

0x3b38,	// (0x0001e243) list_calc_item_pane_t2_ParamLimits

0x3b38,	// (0x0001e243) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x000297c7) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x000297c7) list_calc_item_pane_t

0xc4c2,	// (0x00026bcd) cell_calc_pane_g1

0xc616,	// (0x00026d21) grid_highlight_pane_cp02

0x50f0,	// (0x0001f7fb) bg_calc_display_pane_g1

0x3b68,	// (0x0001e273) bg_calc_display_pane_g2

0x50f9,	// (0x0001f804) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x000297d1) bg_calc_display_pane_g

0x3b72,	// (0x0001e27d) cell_qdial_pane_ParamLimits

0x3b72,	// (0x0001e27d) cell_qdial_pane

0x5102,	// (0x0001f80d) cell_qdial_pane_g1_ParamLimits

0x5102,	// (0x0001f80d) cell_qdial_pane_g1

0x510f,	// (0x0001f81a) cell_qdial_pane_g2_ParamLimits

0x510f,	// (0x0001f81a) cell_qdial_pane_g2

0xc638,	// (0x00026d43) cell_qdial_pane_g3_ParamLimits

0xc638,	// (0x00026d43) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x000297d8) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x000297d8) cell_qdial_pane_g

0x512c,	// (0x0001f837) cell_qdial_pane_t1_ParamLimits

0x512c,	// (0x0001f837) cell_qdial_pane_t1

0x5144,	// (0x0001f84f) cell_qdial_pane_t2_ParamLimits

0x5144,	// (0x0001f84f) cell_qdial_pane_t2

0x5157,	// (0x0001f862) cell_qdial_pane_t3_ParamLimits

0x5157,	// (0x0001f862) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x000297e1) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x000297e1) cell_qdial_pane_t

0xc24f,	// (0x0002695a) grid_highlight_pane_cp04

0xc644,	// (0x00026d4f) thumbnail_qdial_pane_ParamLimits

0xc644,	// (0x00026d4f) thumbnail_qdial_pane

0xc6a0,	// (0x00026dab) list_help_pane

0xc6a9,	// (0x00026db4) scroll_pane_cp02

0x516a,	// (0x0001f875) help_list_pane_t1_ParamLimits

0x516a,	// (0x0001f875) help_list_pane_t1

0xc6b2,	// (0x00026dbd) bg_notes_pane_g2

0xc6ba,	// (0x00026dc5) bg_notes_pane_g3

0xc6c2,	// (0x00026dcd) notes_bg_pane_g1

0xc6ca,	// (0x00026dd5) notes_bg_pane_g4

0xc6d2,	// (0x00026ddd) notes_bg_pane_g5

0xc6da,	// (0x00026de5) notes_bg_pane_g6

0xc6e2,	// (0x00026ded) notes_bg_pane_g7

0xc6ea,	// (0x00026df5) notes_bg_pane_g8

0xc6f2,	// (0x00026dfd) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x000297ff) notes_bg_pane_g

0x51a4,	// (0x0001f8af) list_notes_text_pane_ParamLimits

0x51a4,	// (0x0001f8af) list_notes_text_pane

0xc6fa,	// (0x00026e05) list_notes_text_pane_g1

0xc703,	// (0x00026e0e) list_notes_text_pane_t1

0x51ec,	// (0x0001f8f7) listscroll_cale_week_pane

0x5211,	// (0x0001f91c) bg_cale_heading_pane

0xc734,	// (0x00026e3f) bg_cale_pane_cp01

0x5233,	// (0x0001f93e) cale_week_corner_pane

0x524d,	// (0x0001f958) cale_week_day_heading_pane

0x526f,	// (0x0001f97a) cale_week_scroll_pane_g1

0x528c,	// (0x0001f997) cale_week_scroll_pane_g2

0x529f,	// (0x0001f9aa) cale_week_scroll_pane_g3

0x52b2,	// (0x0001f9bd) cale_week_scroll_pane_g4

0x52c5,	// (0x0001f9d0) cale_week_scroll_pane_g5

0x52d8,	// (0x0001f9e3) cale_week_scroll_pane_g6

0x52eb,	// (0x0001f9f6) cale_week_scroll_pane_g7

0x5300,	// (0x0001fa0b) cale_week_scroll_pane_g8

0x5315,	// (0x0001fa20) cale_week_scroll_pane_g9

0x5328,	// (0x0001fa33) cale_week_scroll_pane_g10

0x533b,	// (0x0001fa46) cale_week_scroll_pane_g11

0x534e,	// (0x0001fa59) cale_week_scroll_pane_g12

0x5365,	// (0x0001fa70) cale_week_scroll_pane_g13

0x5380,	// (0x0001fa8b) cale_week_scroll_pane_g14

0x539b,	// (0x0001faa6) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0002980e) cale_week_scroll_pane_g

0x53cb,	// (0x0001fad6) cale_week_time_pane

0x53e0,	// (0x0001faeb) grid_cale_week_pane

0xc763,	// (0x00026e6e) scroll_pane_cp08

0x53ff,	// (0x0001fb0a) cell_cale_week_pane_ParamLimits

0x53ff,	// (0x0001fb0a) cell_cale_week_pane

0x5461,	// (0x0001fb6c) cale_week_day_heading_pane_t1

0x547c,	// (0x0001fb87) cale_week_day_heading_pane_t2

0x5497,	// (0x0001fba2) cale_week_day_heading_pane_t3

0x54b2,	// (0x0001fbbd) cale_week_day_heading_pane_t4

0x54cd,	// (0x0001fbd8) cale_week_day_heading_pane_t5

0x54e8,	// (0x0001fbf3) cale_week_day_heading_pane_t6

0x5503,	// (0x0001fc0e) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0002982f) cale_week_day_heading_pane_t

0xc780,	// (0x00026e8b) bg_cale_side_pane

0x3b8f,	// (0x0001e29a) cale_week_time_pane_t1

0x3ba9,	// (0x0001e2b4) cale_week_time_pane_t2

0x3bc3,	// (0x0001e2ce) cale_week_time_pane_t3

0x3bdd,	// (0x0001e2e8) cale_week_time_pane_t4

0x3bf7,	// (0x0001e302) cale_week_time_pane_t5

0x3c11,	// (0x0001e31c) cale_week_time_pane_t6

0x3c31,	// (0x0001e33c) cale_week_time_pane_t7

0x3c53,	// (0x0001e35e) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0002983e) cale_week_time_pane_t

0x551e,	// (0x0001fc29) cell_cale_week_pane_g2

0x5542,	// (0x0001fc4d) cell_cale_week_pane_g3_ParamLimits

0x5542,	// (0x0001fc4d) cell_cale_week_pane_g3

0xc78e,	// (0x00026e99) grid_highlight_pane_cp07

0xc796,	// (0x00026ea1) listscroll_gms_pane

0xc7a0,	// (0x00026eab) grid_gms_pane

0xc7a9,	// (0x00026eb4) listscroll_gms_pane_g1

0xc7b1,	// (0x00026ebc) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0002984f) listscroll_gms_pane_g

0x555a,	// (0x0001fc65) scroll_pane_cp010

0x5565,	// (0x0001fc70) cell_gms_pane_ParamLimits

0x5565,	// (0x0001fc70) cell_gms_pane

0x5575,	// (0x0001fc80) cell_gms_pane_g1

0xc7b9,	// (0x00026ec4) cell_gms_pane_g2

0xc6fa,	// (0x00026e05) cell_gms_pane_g3

0xc7c1,	// (0x00026ecc) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00029854) cell_gms_pane_g

0xc7ca,	// (0x00026ed5) grid_highlight_pane_cp09

0x751d,	// (0x00021c28) phob_pre_status_pane_g1

0x7525,	// (0x00021c30) phob_pre_status_pane_g2

0x752d,	// (0x00021c38) phob_pre_status_pane_g3

0x7535,	// (0x00021c40) phob_pre_status_pane_g4

0x0004,

0xf502,	// (0x00029c0d) phob_pre_status_pane_g

0x7545,	// (0x00021c50) phob_pre_status_pane_t1

0x7555,	// (0x00021c60) phob_pre_status_pane_t2

0x7565,	// (0x00021c70) phob_pre_status_pane_t3

0x0002,

0xf50d,	// (0x00029c18) phob_pre_status_pane_t

0xc7d2,	// (0x00026edd) bg_list_pane_cp05

0x5585,	// (0x0001fc90) grid_vorec_pane

0x558f,	// (0x0001fc9a) vorec_t1

0x559d,	// (0x0001fca8) vorec_t2

0x55ab,	// (0x0001fcb6) vorec_t3

0x55b9,	// (0x0001fcc4) vorec_t4

0x4f92,	// (0x0001f69d) vorec_t5

0x4fa0,	// (0x0001f6ab) vorec_t6

0x0004,

0xf152,	// (0x0002985d) vorec_t

0x4fae,	// (0x0001f6b9) wait_bar_pane_cp01

0x55d5,	// (0x0001fce0) cell_vorec_pane_ParamLimits

0x55d5,	// (0x0001fce0) cell_vorec_pane

0x3c77,	// (0x0001e382) cell_vorec_pane_g1

0xc24f,	// (0x0002695a) grid_highlight_pane_cp05

0xc517,	// (0x00026c22) cams_zoom_pane

0xc517,	// (0x00026c22) image_vga_pane

0xc533,	// (0x00026c3e) main_camera_pane_g1

0xc533,	// (0x00026c3e) main_camera_pane_g2

0xc533,	// (0x00026c3e) main_camera_pane_g3

0xc533,	// (0x00026c3e) main_camera_pane_g4

0xc533,	// (0x00026c3e) main_camera_pane_g5

0xc533,	// (0x00026c3e) main_camera_pane_g6

0xc533,	// (0x00026c3e) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00029868) main_camera_pane_g

0xc581,	// (0x00026c8c) main_camera_pane_t1

0xc581,	// (0x00026c8c) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00029879) main_camera_pane_t

0x55e8,	// (0x0001fcf3) cams_zoom_pane_cp_ParamLimits

0x55e8,	// (0x0001fcf3) cams_zoom_pane_cp

0x5616,	// (0x0001fd21) image_cif_pane_ParamLimits

0x5616,	// (0x0001fd21) image_cif_pane

0xbe24,	// (0x0002652f) image_subqcif_pane

0x5624,	// (0x0001fd2f) main_video_pane_g1_ParamLimits

0x5624,	// (0x0001fd2f) main_video_pane_g1

0x564c,	// (0x0001fd57) main_video_pane_g2_ParamLimits

0x564c,	// (0x0001fd57) main_video_pane_g2

0x567f,	// (0x0001fd8a) main_video_pane_g3_ParamLimits

0x567f,	// (0x0001fd8a) main_video_pane_g3

0x567f,	// (0x0001fd8a) main_video_pane_g4_ParamLimits

0x567f,	// (0x0001fd8a) main_video_pane_g4

0x56ad,	// (0x0001fdb8) main_video_pane_g5_ParamLimits

0x56ad,	// (0x0001fdb8) main_video_pane_g5

0xc7da,	// (0x00026ee5) main_video_pane_g6_ParamLimits

0xc7da,	// (0x00026ee5) main_video_pane_g6

0x0006,

0xf173,	// (0x0002987e) main_video_pane_g_ParamLimits

0xf173,	// (0x0002987e) main_video_pane_g

0x56c9,	// (0x0001fdd4) main_video_pane_t1_ParamLimits

0x56c9,	// (0x0001fdd4) main_video_pane_t1

0xc563,	// (0x00026c6e) cams_zoom_pane_g1

0xc563,	// (0x00026c6e) cams_zoom_pane_g2

0xc563,	// (0x00026c6e) cams_zoom_pane_g3

0xc563,	// (0x00026c6e) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0002988d) cams_zoom_pane_g

0xc517,	// (0x00026c22) grid_cams_pane

0xc517,	// (0x00026c22) linegrid_cams_pane

0x5703,	// (0x0001fe0e) cell_cams_pane_ParamLimits

0x5703,	// (0x0001fe0e) cell_cams_pane

0xbe24,	// (0x0002652f) cams_burst_image_pane

0xc563,	// (0x00026c6e) cell_cams_pane_g1

0xbe24,	// (0x0002652f) grid_highlight_pane_cp03

0xc4c2,	// (0x00026bcd) mp_bg_pane_g1

0xbe24,	// (0x0002652f) bg_list_pane_cp03

0xbe24,	// (0x0002652f) bg_mp_pane

0xbe24,	// (0x0002652f) grid_mp_pane

0xc563,	// (0x00026c6e) media_player_g1

0xccbb,	// (0x000273c6) media_player_t1

0xccbb,	// (0x000273c6) media_player_t2

0xccbb,	// (0x000273c6) media_player_t3

0xccbb,	// (0x000273c6) media_player_t4

0xccbb,	// (0x000273c6) media_player_t5

0xccbb,	// (0x000273c6) media_player_t6

0xccbb,	// (0x000273c6) media_player_t7

0x0006,

0xf4ec,	// (0x00029bf7) media_player_t

0xbe24,	// (0x0002652f) wait_bar_pane_cp02

0xf4d1,	// (0x00029bdc) main_usb_pane_t

0xcf32,	// (0x0002763d) cell_mp_pane

0xc4c2,	// (0x00026bcd) cell_mp_pane_g1

0xc24f,	// (0x0002695a) grid_highlight_pane_cp06

0xc7f4,	// (0x00026eff) grid_skin_colour_pane

0xc7fc,	// (0x00026f07) list_highlight_pane_cp03

0x5718,	// (0x0001fe23) skin_g1

0xc804,	// (0x00026f0f) skin_t1

0xc813,	// (0x00026f1e) skin_t2

0x0001,

0xf1b0,	// (0x000298bb) skin_t

0x5722,	// (0x0001fe2d) cell_skin_colour_pane_ParamLimits

0x5722,	// (0x0001fe2d) cell_skin_colour_pane

0xc821,	// (0x00026f2c) cell_skin_colour_pane_g1

0x57a6,	// (0x0001feb1) call_video_g1_ParamLimits

0x57a6,	// (0x0001feb1) call_video_g1

0x57b6,	// (0x0001fec1) call_video_g2_ParamLimits

0x57b6,	// (0x0001fec1) call_video_g2

0x0001,

0xf1b5,	// (0x000298c0) call_video_g_ParamLimits

0xf1b5,	// (0x000298c0) call_video_g

0x5810,	// (0x0001ff1b) call_video_uplink_pane_cp1_ParamLimits

0x5810,	// (0x0001ff1b) call_video_uplink_pane_cp1

0xc833,	// (0x00026f3e) call_video_uplink_pane_cp2

0x58dc,	// (0x0001ffe7) video_down_crop_pane_ParamLimits

0x58dc,	// (0x0001ffe7) video_down_crop_pane

0x59ce,	// (0x000200d9) video_down_pane_ParamLimits

0x59ce,	// (0x000200d9) video_down_pane

0xc83b,	// (0x00026f46) video_down_subqcif_pane_ParamLimits

0xc83b,	// (0x00026f46) video_down_subqcif_pane

0xc853,	// (0x00026f5e) video_down_subqcif_pane_cp_ParamLimits

0xc853,	// (0x00026f5e) video_down_subqcif_pane_cp

0xc879,	// (0x00026f84) im_reading_pane_ParamLimits

0xc879,	// (0x00026f84) im_reading_pane

0x5aee,	// (0x000201f9) im_writing_pane_ParamLimits

0x5aee,	// (0x000201f9) im_writing_pane

0x5b0c,	// (0x00020217) im_reading_pane_t1

0xc893,	// (0x00026f9e) list_im_pane

0xc8a4,	// (0x00026faf) scroll_pane_cp07

0x5b64,	// (0x0002026f) im_writing_pane_t1_ParamLimits

0x5b64,	// (0x0002026f) im_writing_pane_t1

0xc8bd,	// (0x00026fc8) im_writing_pane_t2_ParamLimits

0xc8bd,	// (0x00026fc8) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x000298ca) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x000298ca) im_writing_pane_t

0xc24f,	// (0x0002695a) input_focus_pane_cp04

0xc24f,	// (0x0002695a) input_focus_pane_cp05

0x5b76,	// (0x00020281) list_im_single_pane_ParamLimits

0x5b76,	// (0x00020281) list_im_single_pane

0x5b9d,	// (0x000202a8) list_single_im_pane_t1

0xc7d2,	// (0x00026edd) blid_accuracy_pane

0xc7d2,	// (0x00026edd) blid_compass_pane

0xe3f9,	// (0x00028b04) main_location_t1

0xe3f9,	// (0x00028b04) main_location_t2

0xe3f9,	// (0x00028b04) main_location_t3

0x0002,

0xf4fb,	// (0x00029c06) main_location_t

0xc24f,	// (0x0002695a) aid_levels_location

0xc4c2,	// (0x00026bcd) blid_accuracy_pane_g1

0xc4c2,	// (0x00026bcd) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x0002991e) blid_accuracy_pane_g

0xc905,	// (0x00027010) wml_content_pane

0xc943,	// (0x0002704e) wml_button_pane_ParamLimits

0xc943,	// (0x0002704e) wml_button_pane

0x5bac,	// (0x000202b7) wml_list_single_large_pane_ParamLimits

0x5bac,	// (0x000202b7) wml_list_single_large_pane

0x5bd7,	// (0x000202e2) wml_list_single_medium_pane_ParamLimits

0x5bd7,	// (0x000202e2) wml_list_single_medium_pane

0x5c09,	// (0x00020314) wml_list_single_small_pane_ParamLimits

0x5c09,	// (0x00020314) wml_list_single_small_pane

0xc957,	// (0x00027062) wml_selection_box_pane_ParamLimits

0xc957,	// (0x00027062) wml_selection_box_pane

0xc96a,	// (0x00027075) wml_list_single_pane_t1

0xc979,	// (0x00027084) wml_list_single_medium_pane_t1

0xc988,	// (0x00027093) wml_list_single_large_pane_t1

0xc997,	// (0x000270a2) input_focus_pane_cp02_ParamLimits

0xc997,	// (0x000270a2) input_focus_pane_cp02

0xc9aa,	// (0x000270b5) wml_selection_box_pane_g1

0xc9b3,	// (0x000270be) wml_selection_box_pane_t1_ParamLimits

0xc9b3,	// (0x000270be) wml_selection_box_pane_t1

0xc4aa,	// (0x00026bb5) bg_wml_button_pane_ParamLimits

0xc4aa,	// (0x00026bb5) bg_wml_button_pane

0xc9cb,	// (0x000270d6) wml_button_pane_g1

0xc9d3,	// (0x000270de) wml_button_pane_t1

0xc9cb,	// (0x000270d6) wml_button_bg_pane_g1

0xc9e3,	// (0x000270ee) wml_button_bg_pane_g2

0xc9eb,	// (0x000270f6) wml_button_bg_pane_g3

0xc9f3,	// (0x000270fe) wml_button_bg_pane_g4

0xc9fb,	// (0x00027106) wml_button_bg_pane_g5

0xca03,	// (0x0002710e) wml_button_bg_pane_g6

0xca0b,	// (0x00027116) wml_button_bg_pane_g7

0xca13,	// (0x0002711e) wml_button_bg_pane_g8

0xca1b,	// (0x00027126) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x000298cf) wml_button_bg_pane_g

0x5c46,	// (0x00020351) bg_list_pane_cp02

0xca23,	// (0x0002712e) mce_header_pane_ParamLimits

0xca23,	// (0x0002712e) mce_header_pane

0xca39,	// (0x00027144) mce_icon_pane

0xca39,	// (0x00027144) mce_image_pane

0xca42,	// (0x0002714d) mce_text_pane_ParamLimits

0xca42,	// (0x0002714d) mce_text_pane

0x5c50,	// (0x0002035b) scroll_pane_cp03

0xc93b,	// (0x00027046) scroll_pane_cp04

0xca55,	// (0x00027160) scroll_pane_cp05_ParamLimits

0xca55,	// (0x00027160) scroll_pane_cp05

0x5c5a,	// (0x00020365) mce_header_field_pane_ParamLimits

0x5c5a,	// (0x00020365) mce_header_field_pane

0x5c7a,	// (0x00020385) mce_header_field_pane_2_ParamLimits

0x5c7a,	// (0x00020385) mce_header_field_pane_2

0x5c90,	// (0x0002039b) mce_header_field_pane_3

0x5c98,	// (0x000203a3) list_single_mce_message_pane_ParamLimits

0x5c98,	// (0x000203a3) list_single_mce_message_pane

0x5cc6,	// (0x000203d1) list_single_mce_smart_pane_ParamLimits

0x5cc6,	// (0x000203d1) list_single_mce_smart_pane

0xca61,	// (0x0002716c) input_focus_pane_cp03

0xca6a,	// (0x00027175) list_header_data_pane

0x5cff,	// (0x0002040a) mce_header_field_pane_t1

0x5d0d,	// (0x00020418) list_single_mce_header_pane_ParamLimits

0x5d0d,	// (0x00020418) list_single_mce_header_pane

0xca72,	// (0x0002717d) list_single_mce_header_pane_t1

0xca81,	// (0x0002718c) list_single_mce_message_pane_g1

0xca89,	// (0x00027194) list_single_mce_message_pane_t1

0x5d63,	// (0x0002046e) bg_cale_heading_pane_cp01_ParamLimits

0x5d63,	// (0x0002046e) bg_cale_heading_pane_cp01

0xca97,	// (0x000271a2) bg_cale_pane_cp02_ParamLimits

0xca97,	// (0x000271a2) bg_cale_pane_cp02

0x5db1,	// (0x000204bc) cale_month_corner_pane

0x5dd0,	// (0x000204db) cale_month_day_heading_pane_ParamLimits

0x5dd0,	// (0x000204db) cale_month_day_heading_pane

0x5e36,	// (0x00020541) cale_month_pane_g1_ParamLimits

0x5e36,	// (0x00020541) cale_month_pane_g1

0x5e79,	// (0x00020584) cale_month_pane_g2_ParamLimits

0x5e79,	// (0x00020584) cale_month_pane_g2

0x5eb3,	// (0x000205be) cale_month_pane_g3_ParamLimits

0x5eb3,	// (0x000205be) cale_month_pane_g3

0x5f03,	// (0x0002060e) cale_month_pane_g4_ParamLimits

0x5f03,	// (0x0002060e) cale_month_pane_g4

0x5f53,	// (0x0002065e) cale_month_pane_g5_ParamLimits

0x5f53,	// (0x0002065e) cale_month_pane_g5

0x5fa3,	// (0x000206ae) cale_month_pane_g6_ParamLimits

0x5fa3,	// (0x000206ae) cale_month_pane_g6

0x5ff3,	// (0x000206fe) cale_month_pane_g7_ParamLimits

0x5ff3,	// (0x000206fe) cale_month_pane_g7

0x605b,	// (0x00020766) cale_month_pane_g8_ParamLimits

0x605b,	// (0x00020766) cale_month_pane_g8

0x60c3,	// (0x000207ce) cale_month_pane_g9_ParamLimits

0x60c3,	// (0x000207ce) cale_month_pane_g9

0x6121,	// (0x0002082c) cale_month_pane_g10_ParamLimits

0x6121,	// (0x0002082c) cale_month_pane_g10

0x617f,	// (0x0002088a) cale_month_pane_g11_ParamLimits

0x617f,	// (0x0002088a) cale_month_pane_g11

0x61d3,	// (0x000208de) cale_month_pane_g12_ParamLimits

0x61d3,	// (0x000208de) cale_month_pane_g12

0x6229,	// (0x00020934) cale_month_pane_g13_ParamLimits

0x6229,	// (0x00020934) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x000298e2) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x000298e2) cale_month_pane_g

0x627f,	// (0x0002098a) cale_month_week_pane

0x62a3,	// (0x000209ae) grid_cale_month_pane_ParamLimits

0x62a3,	// (0x000209ae) grid_cale_month_pane

0x6300,	// (0x00020a0b) cale_month_day_heading_pane_t1

0x6386,	// (0x00020a91) cale_month_day_heading_pane_t2

0x63ff,	// (0x00020b0a) cale_month_day_heading_pane_t3

0x6478,	// (0x00020b83) cale_month_day_heading_pane_t4

0x64f1,	// (0x00020bfc) cale_month_day_heading_pane_t5

0x656a,	// (0x00020c75) cale_month_day_heading_pane_t6

0x65e3,	// (0x00020cee) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x000298fd) cale_month_day_heading_pane_t

0xc780,	// (0x00026e8b) bg_cale_side_pane_cp01

0x6674,	// (0x00020d7f) cale_month_week_pane_t1

0x668d,	// (0x00020d98) cale_month_week_pane_t2

0x66a6,	// (0x00020db1) cale_month_week_pane_t3

0x66bf,	// (0x00020dca) cale_month_week_pane_t4

0x66da,	// (0x00020de5) cale_month_week_pane_t5

0x66fb,	// (0x00020e06) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0002990c) cale_month_week_pane_t

0x671c,	// (0x00020e27) cell_cale_month_pane_ParamLimits

0x671c,	// (0x00020e27) cell_cale_month_pane

0x3c81,	// (0x0001e38c) cell_cale_month_pane_g1

0x3c8d,	// (0x0001e398) cell_cale_month_pane_t1_ParamLimits

0x3c8d,	// (0x0001e398) cell_cale_month_pane_t1

0xc78e,	// (0x00026e99) grid_highlight_pane_cp08

0xc4c2,	// (0x00026bcd) main_smil_g1

0x6842,	// (0x00020f4d) smil_status_pane

0xcad6,	// (0x000271e1) smil_text_pane

0xc6f2,	// (0x00026dfd) bg_popup_call3_rect_pane_g8

0xc6ea,	// (0x00026df5) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x00029923) bg_popup_call3_rect_pane_g

0xe4d0,	// (0x00028bdb) smil_status_volume_pane_g1

0xcae0,	// (0x000271eb) smil_status_pane_t1

0x3f57,	// (0x0001e662) volume_smil_pane

0xcaf7,	// (0x00027202) list_smil_text_pane

0x6855,	// (0x00020f60) scroll_pane_cp011

0x6860,	// (0x00020f6b) smil_text_list_pane_t1_ParamLimits

0x6860,	// (0x00020f6b) smil_text_list_pane_t1

0x3cb9,	// (0x0001e3c4) aid_volume_smil_ParamLimits

0x3cb9,	// (0x0001e3c4) aid_volume_smil

0xc4c2,	// (0x00026bcd) smil_volume_pane_g1

0xc4c2,	// (0x00026bcd) smil_volume_pane_g2

0x0001,

0xf213,	// (0x0002991e) smil_volume_pane_g

0x51ec,	// (0x0001f8f7) listscroll_cale_day_pane

0xcb01,	// (0x0002720c) bg_cale_pane

0xcb19,	// (0x00027224) list_cale_pane

0xcb3c,	// (0x00027247) scroll_pane_cp09

0xc6c2,	// (0x00026dcd) cale_bg_pane_g1

0xc6ba,	// (0x00026dc5) cale_bg_pane_g2

0xc6b2,	// (0x00026dbd) cale_bg_pane_g3

0xc6d2,	// (0x00026ddd) cale_bg_pane_g4

0xc6ca,	// (0x00026dd5) cale_bg_pane_g5

0xc6da,	// (0x00026de5) cale_bg_pane_g6

0xc6e2,	// (0x00026ded) cale_bg_pane_g7

0xc6f2,	// (0x00026dfd) cale_bg_pane_g8

0xc6ea,	// (0x00026df5) cale_bg_pane_g9

0x0008,

0xf218,	// (0x00029923) cale_bg_pane_g

0x68f5,	// (0x00021000) list_cale_time_pane_ParamLimits

0x68f5,	// (0x00021000) list_cale_time_pane

0xcb4d,	// (0x00027258) list_cale_time_pane_g1_ParamLimits

0xcb4d,	// (0x00027258) list_cale_time_pane_g1

0xcb59,	// (0x00027264) list_cale_time_pane_g2_ParamLimits

0xcb59,	// (0x00027264) list_cale_time_pane_g2

0x691d,	// (0x00021028) list_cale_time_pane_g3_ParamLimits

0x691d,	// (0x00021028) list_cale_time_pane_g3

0x692b,	// (0x00021036) list_cale_time_pane_g4_ParamLimits

0x692b,	// (0x00021036) list_cale_time_pane_g4

0x6939,	// (0x00021044) list_cale_time_pane_g5_ParamLimits

0x6939,	// (0x00021044) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x00029936) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x00029936) list_cale_time_pane_g

0xcb73,	// (0x0002727e) list_cale_time_pane_t1_ParamLimits

0xcb73,	// (0x0002727e) list_cale_time_pane_t1

0xcb9b,	// (0x000272a6) list_cale_time_pane_t2_ParamLimits

0xcb9b,	// (0x000272a6) list_cale_time_pane_t2

0x6b9d,	// (0x000212a8) aid_blid_cardinal_pane

0x6bdf,	// (0x000212ea) compass_pane_t4

0xcbc3,	// (0x000272ce) list_cale_time_pane_t4_ParamLimits

0xcbc3,	// (0x000272ce) list_cale_time_pane_t4

0x6bed,	// (0x000212f8) compass_pane_t5

0x6bfd,	// (0x00021308) compass_pane_t6

0x6c0b,	// (0x00021316) compass_pane_t7

0xd04c,	// (0x00027757) navi_pane_cc_t1

0xd229,	// (0x00027934) aid_phob_thumbnail_center_pane

0x7063,	// (0x0002176e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x00029943) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x00029943) list_cale_time_pane_t

0xbe98,	// (0x000265a3) bg_popup_window_pane_cp02_ParamLimits

0xbe98,	// (0x000265a3) bg_popup_window_pane_cp02

0xcbeb,	// (0x000272f6) heading_pane_cp01_ParamLimits

0xcbeb,	// (0x000272f6) heading_pane_cp01

0xcbf7,	// (0x00027302) loc_req_pane_ParamLimits

0xcbf7,	// (0x00027302) loc_req_pane

0xcc09,	// (0x00027314) loc_type_pane_ParamLimits

0xcc09,	// (0x00027314) loc_type_pane

0xcc1b,	// (0x00027326) loc_type_pane_t1_ParamLimits

0xcc1b,	// (0x00027326) loc_type_pane_t1

0xcc2d,	// (0x00027338) loc_type_pane_t2_ParamLimits

0xcc2d,	// (0x00027338) loc_type_pane_t2

0xcc3f,	// (0x0002734a) loc_type_pane_t3_ParamLimits

0xcc3f,	// (0x0002734a) loc_type_pane_t3

0x0002,

0xf23f,	// (0x0002994a) loc_type_pane_t_ParamLimits

0xf23f,	// (0x0002994a) loc_type_pane_t

0xcc51,	// (0x0002735c) list_loc_req_pane

0xcc5b,	// (0x00027366) scroll_pane_cp012

0x6947,	// (0x00021052) list_single_loc_request_popup_menu_pane_ParamLimits

0x6947,	// (0x00021052) list_single_loc_request_popup_menu_pane

0xcc66,	// (0x00027371) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcc66,	// (0x00027371) list_single_loc_request_popup_menu_pane_g1

0xcc72,	// (0x0002737d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcc72,	// (0x0002737d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x00029951) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x00029951) list_single_loc_request_popup_menu_pane_g

0xcc7e,	// (0x00027389) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcc7e,	// (0x00027389) list_single_loc_request_popup_menu_pane_t1

0x695f,	// (0x0002106a) bg_popup_window_pane_cp03_ParamLimits

0x695f,	// (0x0002106a) bg_popup_window_pane_cp03

0x696d,	// (0x00021078) heading_loc_req_pane_ParamLimits

0x696d,	// (0x00021078) heading_loc_req_pane

0x6979,	// (0x00021084) popup_dyc_status_message_window_g1_ParamLimits

0x6979,	// (0x00021084) popup_dyc_status_message_window_g1

0x6985,	// (0x00021090) popup_dyc_status_message_window_t1_ParamLimits

0x6985,	// (0x00021090) popup_dyc_status_message_window_t1

0x6997,	// (0x000210a2) popup_dyc_status_message_window_t2_ParamLimits

0x6997,	// (0x000210a2) popup_dyc_status_message_window_t2

0x69a9,	// (0x000210b4) popup_dyc_status_message_window_t3_ParamLimits

0x69a9,	// (0x000210b4) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x00029956) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x00029956) popup_dyc_status_message_window_t

0xc24f,	// (0x0002695a) bg_heading_pane_cp01

0xcc94,	// (0x0002739f) heading_loc_req_pane_g1

0xcc9c,	// (0x000273a7) heading_loc_req_pane_g2

0xcca4,	// (0x000273af) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x0002995d) heading_loc_req_pane_g

0xccac,	// (0x000273b7) heading_loc_req_pane_t1

0xcccb,	// (0x000273d6) bg_popup_sub_pane_cp01_ParamLimits

0xcccb,	// (0x000273d6) bg_popup_sub_pane_cp01

0xccd9,	// (0x000273e4) popup_cale_events_window_g1_ParamLimits

0xccd9,	// (0x000273e4) popup_cale_events_window_g1

0xccf9,	// (0x00027404) popup_cale_events_window_g2_ParamLimits

0xccf9,	// (0x00027404) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x0002997f) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x0002997f) popup_cale_events_window_g

0xcd19,	// (0x00027424) popup_cale_events_window_t1_ParamLimits

0xcd19,	// (0x00027424) popup_cale_events_window_t1

0xcd2b,	// (0x00027436) popup_cale_events_window_t2_ParamLimits

0xcd2b,	// (0x00027436) popup_cale_events_window_t2

0xcd69,	// (0x00027474) popup_cale_events_window_t3_ParamLimits

0xcd69,	// (0x00027474) popup_cale_events_window_t3

0xcda3,	// (0x000274ae) popup_cale_events_window_t4_ParamLimits

0xcda3,	// (0x000274ae) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x00029984) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x00029984) popup_cale_events_window_t

0x69d3,	// (0x000210de) call_type_pane

0xda0c,	// (0x00028117) popup_call_status_window_g1

0x69df,	// (0x000210ea) popup_call_status_window_g2

0x69eb,	// (0x000210f6) popup_call_status_window_g3

0x0002,

0xf282,	// (0x0002998d) popup_call_status_window_g

0xcdd9,	// (0x000274e4) call_type_pane_g1

0xcde2,	// (0x000274ed) call_type_pane_g2

0x0001,

0xf289,	// (0x00029994) call_type_pane_g

0xc24f,	// (0x0002695a) bg_popup_sub_pane_cp02

0xcdeb,	// (0x000274f6) listscroll_popup_wml_pane

0xcdf3,	// (0x000274fe) list_wml_pane

0xcdfd,	// (0x00027508) scroll_pane_cp013

0xce08,	// (0x00027513) list_single_graphic_popup_wml_pane_ParamLimits

0xce08,	// (0x00027513) list_single_graphic_popup_wml_pane

0xc4c2,	// (0x00026bcd) list_single_graphic_popup_wml_pane_g1

0xce1c,	// (0x00027527) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00029999) list_single_graphic_popup_wml_pane_g

0xce24,	// (0x0002752f) list_single_graphic_popup_wml_pane_t1

0xce3a,	// (0x00027545) aid_call_pane

0xc4a2,	// (0x00026bad) popup_clock_analogue_window_g1

0xc4a2,	// (0x00026bad) popup_clock_analogue_window_g2

0x3cdb,	// (0x0001e3e6) popup_clock_analogue_window_g3

0x3cdb,	// (0x0001e3e6) popup_clock_analogue_window_g4

0xc4c2,	// (0x00026bcd) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x0002999e) popup_clock_analogue_window_g

0x3ce3,	// (0x0001e3ee) popup_clock_analogue_window_t1

0x3cf1,	// (0x0001e3fc) clock_digital_number_pane_ParamLimits

0x3cf1,	// (0x0001e3fc) clock_digital_number_pane

0x3cfd,	// (0x0001e408) clock_digital_number_pane_cp02_ParamLimits

0x3cfd,	// (0x0001e408) clock_digital_number_pane_cp02

0x3d09,	// (0x0001e414) clock_digital_number_pane_cp03_ParamLimits

0x3d09,	// (0x0001e414) clock_digital_number_pane_cp03

0x3d15,	// (0x0001e420) clock_digital_number_pane_cp04_ParamLimits

0x3d15,	// (0x0001e420) clock_digital_number_pane_cp04

0x3d21,	// (0x0001e42c) clock_digital_separator_pane_ParamLimits

0x3d21,	// (0x0001e42c) clock_digital_separator_pane

0x3d2d,	// (0x0001e438) popup_clock_digital_window_t1

0xc4c2,	// (0x00026bcd) clock_digital_number_pane_g1

0xc4c2,	// (0x00026bcd) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x0002991e) clock_digital_number_pane_g

0xc4c2,	// (0x00026bcd) clock_digital_separator_pane_g1

0xc4c2,	// (0x00026bcd) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x0002991e) clock_digital_separator_pane_g

0xc24f,	// (0x0002695a) bg_popup_window_pane_cp04

0xce42,	// (0x0002754d) heading_pane_cp03

0xc7d2,	// (0x00026edd) listscroll_popup_gms_pane

0xc24f,	// (0x0002695a) grid_large_graphic_popup_pane

0xce56,	// (0x00027561) listscroll_popup_gms_pane_g1

0xce5f,	// (0x0002756a) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x000299a9) listscroll_popup_gms_pane_g

0xce68,	// (0x00027573) scroll_pane_cp014

0xc517,	// (0x00026c22) cell_large_graphic_popup_pane_ParamLimits

0xc517,	// (0x00026c22) cell_large_graphic_popup_pane

0xc525,	// (0x00026c30) cell_large_graphic_popup_pane_g1_ParamLimits

0xc525,	// (0x00026c30) cell_large_graphic_popup_pane_g1

0xce71,	// (0x0002757c) cell_large_graphic_popup_pane_g2_ParamLimits

0xce71,	// (0x0002757c) cell_large_graphic_popup_pane_g2

0xce7f,	// (0x0002758a) cell_large_graphic_popup_pane_g3_ParamLimits

0xce7f,	// (0x0002758a) cell_large_graphic_popup_pane_g3

0xce8d,	// (0x00027598) cell_large_graphic_popup_pane_g4_ParamLimits

0xce8d,	// (0x00027598) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x000299ae) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x000299ae) cell_large_graphic_popup_pane_g

0xc24f,	// (0x0002695a) grid_highlight_pane_cp010

0xc4c2,	// (0x00026bcd) bg_popup_call_pane_g1

0xce9e,	// (0x000275a9) list_single_graphic_popup_conf_pane_ParamLimits

0xce9e,	// (0x000275a9) list_single_graphic_popup_conf_pane

0xceb1,	// (0x000275bc) list_highlight_pane_cp01

0xceba,	// (0x000275c5) list_single_graphic_popup_conf_pane_g1

0xcec2,	// (0x000275cd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x000299b7) list_single_graphic_popup_conf_pane_g

0xceca,	// (0x000275d5) list_single_graphic_popup_conf_pane_t1

0xced8,	// (0x000275e3) linegrid_cams_pane_g1

0x69f7,	// (0x00021102) linegrid_cams_pane_g2

0xc6fa,	// (0x00026e05) linegrid_cams_pane_g3

0xcee1,	// (0x000275ec) linegrid_cams_pane_g4

0x6a00,	// (0x0002110b) linegrid_cams_pane_g5

0x6a09,	// (0x00021114) linegrid_cams_pane_g6

0xc7c1,	// (0x00026ecc) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x000299bc) linegrid_cams_pane_g

0xceea,	// (0x000275f5) popup_clock_analogue_window

0xceea,	// (0x000275f5) popup_clock_digital_window

0xc24f,	// (0x0002695a) popup_phob_thumbnail_window

0xc4c2,	// (0x00026bcd) call_video_uplink_pane_g1

0xcef3,	// (0x000275fe) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x000299cb) call_video_uplink_pane_g

0xcefb,	// (0x00027606) video_uplink_pane

0xcf03,	// (0x0002760e) mce_image_pane_g1

0x6a12,	// (0x0002111d) mce_image_pane_g2

0x6a1a,	// (0x00021125) mce_image_pane_g3

0x6a22,	// (0x0002112d) mce_image_pane_g4

0x6a2a,	// (0x00021135) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x000299d0) mce_image_pane_g

0xcf0d,	// (0x00027618) control_top_pane_stacon_cp01_ParamLimits

0xcf0d,	// (0x00027618) control_top_pane_stacon_cp01

0xcf21,	// (0x0002762c) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf21,	// (0x0002762c) uni_indicator_pane_stacon_cp01

0xcf32,	// (0x0002763d) bg_popup_sub_pane_cp03

0x6a32,	// (0x0002113d) chi_dic_find_pane

0x6a3a,	// (0x00021145) listscroll_chi_dic_pane

0x6a43,	// (0x0002114e) main_pane_chidic_g1

0x6a56,	// (0x00021161) chi_dic_find_pane_t1

0xcf3c,	// (0x00027647) find_chidic_pane

0xcf45,	// (0x00027650) chi_dic_list_pane_ParamLimits

0xcf45,	// (0x00027650) chi_dic_list_pane

0xcf56,	// (0x00027661) scroll_pane_cp020

0x6a64,	// (0x0002116f) find_chidic_pane_t1

0xc24f,	// (0x0002695a) input_focus_pane_cp06

0x6a73,	// (0x0002117e) list_chi_dic_pane_ParamLimits

0x6a73,	// (0x0002117e) list_chi_dic_pane

0x6a90,	// (0x0002119b) list_chi_dic_pane_t1_ParamLimits

0x6a90,	// (0x0002119b) list_chi_dic_pane_t1

0xc24f,	// (0x0002695a) list_highlight_pane_cp020

0xcf5e,	// (0x00027669) bg_cale_heading_pane_g1

0x6aa3,	// (0x000211ae) bg_cale_heading_pane_g2

0x6aab,	// (0x000211b6) bg_cale_heading_pane_g3

0x6ab3,	// (0x000211be) bg_cale_heading_pane_g4

0x6abd,	// (0x000211c8) bg_cale_heading_pane_g5

0x6ac7,	// (0x000211d2) bg_cale_heading_pane_g6

0x6acf,	// (0x000211da) bg_cale_heading_pane_g7

0x6ad7,	// (0x000211e2) bg_cale_heading_pane_g8

0x6ae1,	// (0x000211ec) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x000299db) bg_cale_heading_pane_g

0xcf5e,	// (0x00027669) bg_cale_side_pane_g1

0x6aeb,	// (0x000211f6) bg_cale_side_pane_g2

0x6af5,	// (0x00021200) bg_cale_side_pane_g3

0x6aff,	// (0x0002120a) bg_cale_side_pane_g4

0x6b09,	// (0x00021214) bg_cale_side_pane_g5

0x6b13,	// (0x0002121e) bg_cale_side_pane_g6

0x6b1d,	// (0x00021228) bg_cale_side_pane_g7

0x6b27,	// (0x00021232) bg_cale_side_pane_g8

0x6b2f,	// (0x0002123a) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x000299ee) bg_cale_side_pane_g

0x6b37,	// (0x00021242) popup_call_status_window_ParamLimits

0x6b37,	// (0x00021242) popup_call_status_window

0xcf66,	// (0x00027671) stacon_top_pane

0xcf6e,	// (0x00027679) status_pane_ParamLimits

0xcf6e,	// (0x00027679) status_pane

0xcf83,	// (0x0002768e) status_small_pane

0xcf8b,	// (0x00027696) control_pane

0xc24f,	// (0x0002695a) stacon_bottom_pane

0xcf93,	// (0x0002769e) list_single_mce_smart_pane_t1_ParamLimits

0xcf93,	// (0x0002769e) list_single_mce_smart_pane_t1

0xcfa6,	// (0x000276b1) list_single_mce_smart_pane_t2_ParamLimits

0xcfa6,	// (0x000276b1) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x00029a01) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x00029a01) list_single_mce_smart_pane_t

0x6b43,	// (0x0002124e) compass_pane

0x6b4f,	// (0x0002125a) main_location2_pane_t1

0x6b63,	// (0x0002126e) main_location2_pane_t2

0x6b77,	// (0x00021282) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x00029a06) main_location2_pane_t

0xcfc5,	// (0x000276d0) compass_pane_g1_ParamLimits

0xcfc5,	// (0x000276d0) compass_pane_g1

0x6bc1,	// (0x000212cc) compass_pane_t1

0x6bd0,	// (0x000212db) compass_pane_t2

0x0005,

0xf304,	// (0x00029a0f) compass_pane_t

0x6c1b,	// (0x00021326) text_secondary_cp61

0xd043,	// (0x0002774e) navi_pane_cams_g5

0xd0bf,	// (0x000277ca) navi_pane_im_t1

0xd0cd,	// (0x000277d8) navi_pane_mp_g1_ParamLimits

0xd0cd,	// (0x000277d8) navi_pane_mp_g1

0xd0e1,	// (0x000277ec) navi_pane_mp_g2_ParamLimits

0xd0e1,	// (0x000277ec) navi_pane_mp_g2

0xd0ed,	// (0x000277f8) navi_pane_mp_g3_ParamLimits

0xd0ed,	// (0x000277f8) navi_pane_mp_g3

0x0002,

0xf318,	// (0x00029a23) navi_pane_mp_g_ParamLimits

0xf318,	// (0x00029a23) navi_pane_mp_g

0xd0f9,	// (0x00027804) navi_pane_mp_t1

0xd107,	// (0x00027812) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00029a2a) navi_pane_mp_t

0xd172,	// (0x0002787d) navi_pane_vt_g1

0xd0f9,	// (0x00027804) navi_pane_vt_t1

0xd17a,	// (0x00027885) navi_slider_pane

0xc7d2,	// (0x00026edd) zooming_pane

0xd18a,	// (0x00027895) navi_slider_pane_g1

0x3d4a,	// (0x0001e455) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00029a31) navi_slider_pane_g

0xd1ae,	// (0x000278b9) aid_levels_zoom

0xd1b6,	// (0x000278c1) zooming_pane_g1

0xd1be,	// (0x000278c9) zooming_pane_g2

0xd1be,	// (0x000278c9) zooming_pane_g3

0x0002,

0xf335,	// (0x00029a40) zooming_pane_g

0xd1c6,	// (0x000278d1) level_10_zoom

0xd1cf,	// (0x000278da) level_11_zoom

0xd1d8,	// (0x000278e3) level_1_zoom

0xd1e1,	// (0x000278ec) level_2_zoom

0xd1ea,	// (0x000278f5) level_3_zoom

0xd1f3,	// (0x000278fe) level_4_zoom

0xd1fc,	// (0x00027907) level_5_zoom

0xd205,	// (0x00027910) level_6_zoom

0xd20e,	// (0x00027919) level_7_zoom

0xd217,	// (0x00027922) level_8_zoom

0xd220,	// (0x0002792b) level_9_zoom

0xd231,	// (0x0002793c) popup_phob_thumbnail_window_g1

0xd239,	// (0x00027944) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00029a47) popup_phob_thumbnail_window_g

0x7575,	// (0x00021c80) level_1_location

0x757d,	// (0x00021c88) level_2_location

0x7585,	// (0x00021c90) level_3_location

0x758f,	// (0x00021c9a) level_4_location

0xc7d2,	// (0x00026edd) level_5_location

0x6c56,	// (0x00021361) mce_icon_pane_g1

0x6c5e,	// (0x00021369) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00029a4c) mce_icon_pane_g

0x6c66,	// (0x00021371) main_mup_pane_g1_ParamLimits

0x6c66,	// (0x00021371) main_mup_pane_g1

0xc541,	// (0x00026c4c) main_mup_pane_g2_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g2

0xc541,	// (0x00026c4c) main_mup_pane_g3_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g3

0xc541,	// (0x00026c4c) main_mup_pane_g4_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g4

0xc541,	// (0x00026c4c) main_mup_pane_g5_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g5

0xc541,	// (0x00026c4c) main_mup_pane_g6_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g6

0xc541,	// (0x00026c4c) main_mup_pane_g7_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g7

0xc541,	// (0x00026c4c) main_mup_pane_g8_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g8

0xc541,	// (0x00026c4c) main_mup_pane_g9_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g9

0xc541,	// (0x00026c4c) main_mup_pane_g10_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g10

0xc541,	// (0x00026c4c) main_mup_pane_g11_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g11

0xc533,	// (0x00026c3e) main_mup_pane_g12_ParamLimits

0xc533,	// (0x00026c3e) main_mup_pane_g12

0xc541,	// (0x00026c4c) main_mup_pane_g13_ParamLimits

0xc541,	// (0x00026c4c) main_mup_pane_g13

0x000c,

0xf346,	// (0x00029a51) main_mup_pane_g_ParamLimits

0xf346,	// (0x00029a51) main_mup_pane_g

0xc54f,	// (0x00026c5a) main_mup_pane_t1_ParamLimits

0xc54f,	// (0x00026c5a) main_mup_pane_t1

0xc54f,	// (0x00026c5a) main_mup_pane_t2_ParamLimits

0xc54f,	// (0x00026c5a) main_mup_pane_t2

0xc54f,	// (0x00026c5a) main_mup_pane_t3_ParamLimits

0xc54f,	// (0x00026c5a) main_mup_pane_t3

0xc581,	// (0x00026c8c) main_mup_pane_t4_ParamLimits

0xc581,	// (0x00026c8c) main_mup_pane_t4

0xc581,	// (0x00026c8c) main_mup_pane_t5_ParamLimits

0xc581,	// (0x00026c8c) main_mup_pane_t5

0xc56d,	// (0x00026c78) main_mup_pane_t6_ParamLimits

0xc56d,	// (0x00026c78) main_mup_pane_t6

0x0005,

0xf361,	// (0x00029a6c) main_mup_pane_t_ParamLimits

0xf361,	// (0x00029a6c) main_mup_pane_t

0xc186,	// (0x00026891) mup_progress_pane_ParamLimits

0xc186,	// (0x00026891) mup_progress_pane

0xe44d,	// (0x00028b58) mup_visualizer_pane_ParamLimits

0xe44d,	// (0x00028b58) mup_visualizer_pane

0xe44d,	// (0x00028b58) mup_volume_pane_ParamLimits

0xe44d,	// (0x00028b58) mup_volume_pane

0xc533,	// (0x00026c3e) mup_visualizer_pane_g1_ParamLimits

0xc533,	// (0x00026c3e) mup_visualizer_pane_g1

0xd24f,	// (0x0002795a) mup_visualizer_pane_g2_ParamLimits

0xd24f,	// (0x0002795a) mup_visualizer_pane_g2

0xc525,	// (0x00026c30) mup_visualizer_pane_g3_ParamLimits

0xc525,	// (0x00026c30) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00029a79) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00029a79) mup_visualizer_pane_g

0xc563,	// (0x00026c6e) mup_volume_pane_g1

0xc563,	// (0x00026c6e) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00029797) mup_volume_pane_g

0xc563,	// (0x00026c6e) mup_progress_pane_g1

0xc563,	// (0x00026c6e) mup_progress_pane_g2

0xc563,	// (0x00026c6e) mup_progress_pane_g3

0x0002,

0xf375,	// (0x00029a80) mup_progress_pane_g

0xc24f,	// (0x0002695a) bg_popup_window_pane_cp05

0xd25d,	// (0x00027968) heading_pane_cp02_ParamLimits

0xd25d,	// (0x00027968) heading_pane_cp02

0xd277,	// (0x00027982) list_popup_blid_pane

0xd27f,	// (0x0002798a) list_blid_sat_info_pane_ParamLimits

0xd27f,	// (0x0002798a) list_blid_sat_info_pane

0xd292,	// (0x0002799d) list_blid_sat_info_pane_g1

0xd29a,	// (0x000279a5) list_blid_sat_info_pane_t1

0x6d61,	// (0x0002146c) mup_equalizer_pane_ParamLimits

0x6d61,	// (0x0002146c) mup_equalizer_pane

0x6d82,	// (0x0002148d) mup_equalizer_pane_cp1_ParamLimits

0x6d82,	// (0x0002148d) mup_equalizer_pane_cp1

0x6da3,	// (0x000214ae) mup_equalizer_pane_cp2_ParamLimits

0x6da3,	// (0x000214ae) mup_equalizer_pane_cp2

0x6dc4,	// (0x000214cf) mup_equalizer_pane_cp3_ParamLimits

0x6dc4,	// (0x000214cf) mup_equalizer_pane_cp3

0x6de5,	// (0x000214f0) mup_equalizer_pane_cp4_ParamLimits

0x6de5,	// (0x000214f0) mup_equalizer_pane_cp4

0x6e06,	// (0x00021511) mup_equalizer_pane_cp5

0x6e1c,	// (0x00021527) mup_equalizer_pane_cp6

0x6e34,	// (0x0002153f) mup_equalizer_pane_cp7

0xe359,	// (0x00028a64) bg_popup_call_poc_act_pane_g9

0xe361,	// (0x00028a6c) bg_popup_call_poc_act_pane_g10

0xe369,	// (0x00028a74) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4aa,	// (0x00026bb5) mup_scale_pane

0xc4c2,	// (0x00026bcd) mup_scale_pane_g1

0xd2a8,	// (0x000279b3) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00029a9c) mup_scale_pane_g

0xd2cc,	// (0x000279d7) msg_data_pane

0xd2d4,	// (0x000279df) scroll_pane_cp017

0x6e5e,	// (0x00021569) bg_list_pane_cp04_ParamLimits

0x6e5e,	// (0x00021569) bg_list_pane_cp04

0xd2dc,	// (0x000279e7) msg_data_pane_g1

0x6e7e,	// (0x00021589) msg_data_pane_g2

0x6e86,	// (0x00021591) msg_data_pane_g3

0x6e8e,	// (0x00021599) msg_data_pane_g4

0x6e96,	// (0x000215a1) msg_data_pane_g5

0x6e9e,	// (0x000215a9) msg_data_pane_g6

0x6ea6,	// (0x000215b1) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00029aab) msg_data_pane_g

0x6eae,	// (0x000215b9) msg_text_pane_ParamLimits

0x6eae,	// (0x000215b9) msg_text_pane

0x6f1a,	// (0x00021625) qrid_highlight_pane_cp011_ParamLimits

0x6f1a,	// (0x00021625) qrid_highlight_pane_cp011

0xc24f,	// (0x0002695a) msg_body_pane

0xc4aa,	// (0x00026bb5) msg_header_pane

0xd2f8,	// (0x00027a03) input_focus_pane_cp07

0x6f42,	// (0x0002164d) msg_header_pane_t1_ParamLimits

0x6f42,	// (0x0002164d) msg_header_pane_t1

0x6f5e,	// (0x00021669) msg_header_pane_t2_ParamLimits

0x6f5e,	// (0x00021669) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00029abf) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00029abf) msg_header_pane_t

0xd319,	// (0x00027a24) msg_body_pane_g1

0x6f7e,	// (0x00021689) msg_body_pane_t1_ParamLimits

0x6f7e,	// (0x00021689) msg_body_pane_t1

0x6faf,	// (0x000216ba) msg_body_pane_t2_ParamLimits

0x6faf,	// (0x000216ba) msg_body_pane_t2

0x6fc1,	// (0x000216cc) msg_body_pane_t3_ParamLimits

0x6fc1,	// (0x000216cc) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x00029ac4) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x00029ac4) msg_body_pane_t

0x3d8c,	// (0x0001e497) main_viewer_pane_g1_ParamLimits

0x3d8c,	// (0x0001e497) main_viewer_pane_g1

0x3d98,	// (0x0001e4a3) main_viewer_pane_g2_ParamLimits

0x3d98,	// (0x0001e4a3) main_viewer_pane_g2

0x6ff5,	// (0x00021700) main_viewer_pane_g3_ParamLimits

0x6ff5,	// (0x00021700) main_viewer_pane_g3

0x7006,	// (0x00021711) main_viewer_pane_g4_ParamLimits

0x7006,	// (0x00021711) main_viewer_pane_g4

0x3da4,	// (0x0001e4af) main_viewer_pane_g5_ParamLimits

0x3da4,	// (0x0001e4af) main_viewer_pane_g5

0x3da4,	// (0x0001e4af) main_viewer_pane_g7_ParamLimits

0x3da4,	// (0x0001e4af) main_viewer_pane_g7

0xcc66,	// (0x00027371) main_viewer_pane_g8_ParamLimits

0xcc66,	// (0x00027371) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x00029ad4) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x00029ad4) main_viewer_pane_g

0xd321,	// (0x00027a2c) viewer_content_pane_ParamLimits

0xd321,	// (0x00027a2c) viewer_content_pane

0x7037,	// (0x00021742) main_postcard_pane_g1_ParamLimits

0x7037,	// (0x00021742) main_postcard_pane_g1

0x7045,	// (0x00021750) main_postcard_pane_g2_ParamLimits

0x7045,	// (0x00021750) main_postcard_pane_g2

0x7053,	// (0x0002175e) main_postcard_pane_g3_ParamLimits

0x7053,	// (0x0002175e) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x00029ae5) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x00029ae5) main_postcard_pane_g

0x7063,	// (0x0002176e) main_postcard_pane_g4

0xe4e3,	// (0x00028bee) smil_status_volume_pane_g2

0x708f,	// (0x0002179a) postcard_pane_ParamLimits

0x708f,	// (0x0002179a) postcard_pane

0xda0c,	// (0x00028117) postcard_pane_g1_ParamLimits

0xda0c,	// (0x00028117) postcard_pane_g1

0x70c1,	// (0x000217cc) postcard_pane_g2_ParamLimits

0x70c1,	// (0x000217cc) postcard_pane_g2

0x70cd,	// (0x000217d8) postcard_pane_g3_ParamLimits

0x70cd,	// (0x000217d8) postcard_pane_g3

0xd32f,	// (0x00027a3a) postcard_pane_g4_ParamLimits

0xd32f,	// (0x00027a3a) postcard_pane_g4

0x70d9,	// (0x000217e4) postcard_pane_g5_ParamLimits

0x70d9,	// (0x000217e4) postcard_pane_g5

0x70e5,	// (0x000217f0) postcard_pane_g6_ParamLimits

0x70e5,	// (0x000217f0) postcard_pane_g6

0xd33d,	// (0x00027a48) postcard_pane_g7_ParamLimits

0xd33d,	// (0x00027a48) postcard_pane_g7

0x0006,

0xf3e7,	// (0x00029af2) postcard_pane_g_ParamLimits

0xf3e7,	// (0x00029af2) postcard_pane_g

0x70f1,	// (0x000217fc) main_mp2_pane_g1_ParamLimits

0x70f1,	// (0x000217fc) main_mp2_pane_g1

0x70fd,	// (0x00021808) main_mp2_pane_g2_ParamLimits

0x70fd,	// (0x00021808) main_mp2_pane_g2

0x7109,	// (0x00021814) main_mp2_pane_g3_ParamLimits

0x7109,	// (0x00021814) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00029b01) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00029b01) main_mp2_pane_g

0x7115,	// (0x00021820) main_mp2_pane_t1_ParamLimits

0x7115,	// (0x00021820) main_mp2_pane_t1

0x712c,	// (0x00021837) main_mp2_pane_t2_ParamLimits

0x712c,	// (0x00021837) main_mp2_pane_t2

0x713e,	// (0x00021849) main_mp2_pane_t3_ParamLimits

0x713e,	// (0x00021849) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00029b08) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00029b08) main_mp2_pane_t

0xc186,	// (0x00026891) pec_content_pane_ParamLimits

0xc186,	// (0x00026891) pec_content_pane

0xbe24,	// (0x0002652f) scroll_pane_cp015

0xd34b,	// (0x00027a56) pec_attribute_pane_ParamLimits

0xd34b,	// (0x00027a56) pec_attribute_pane

0xc525,	// (0x00026c30) pec_content_pane_g1_ParamLimits

0xc525,	// (0x00026c30) pec_content_pane_g1

0xd359,	// (0x00027a64) pec_content_pane_t1_ParamLimits

0xd359,	// (0x00027a64) pec_content_pane_t1

0xd36d,	// (0x00027a78) pec_content_pane_t2_ParamLimits

0xd36d,	// (0x00027a78) pec_content_pane_t2

0x0001,

0xf404,	// (0x00029b0f) pec_content_pane_t_ParamLimits

0xf404,	// (0x00029b0f) pec_content_pane_t

0xc517,	// (0x00026c22) list_single_graphic_pane_cp01_ParamLimits

0xc517,	// (0x00026c22) list_single_graphic_pane_cp01

0xc4aa,	// (0x00026bb5) bg_popup_sub_pane_cp04

0xd381,	// (0x00027a8c) popup_mup_playback_window_g1

0xd38d,	// (0x00027a98) popup_mup_playback_window_t1

0xd3a2,	// (0x00027aad) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x00029b14) popup_mup_playback_window_t

0xd3d9,	// (0x00027ae4) main_image_pane_g1_ParamLimits

0xd3d9,	// (0x00027ae4) main_image_pane_g1

0xd430,	// (0x00027b3b) scroll_pane_cp018_ParamLimits

0xd430,	// (0x00027b3b) scroll_pane_cp018

0xd448,	// (0x00027b53) scroll_pane_cp016_ParamLimits

0xd448,	// (0x00027b53) scroll_pane_cp016

0x71c1,	// (0x000218cc) smil2_image_pane_ParamLimits

0x71c1,	// (0x000218cc) smil2_image_pane

0x71f1,	// (0x000218fc) smil2_root_pane_ParamLimits

0x71f1,	// (0x000218fc) smil2_root_pane

0x721d,	// (0x00021928) smil2_text_pane_ParamLimits

0x721d,	// (0x00021928) smil2_text_pane

0xbe24,	// (0x0002652f) bg_list_pane_cp06

0xbe24,	// (0x0002652f) grid_radio_pane

0xc24f,	// (0x0002695a) bg_popup_window_pane_cp06

0xccbb,	// (0x000273c6) main_fmradio_pane_t1

0xce42,	// (0x0002754d) heading_pane_cp04

0xccbb,	// (0x000273c6) main_fmradio_pane_t2

0xe3b1,	// (0x00028abc) popup_cale_lunar_info_window_g1

0xccbb,	// (0x000273c6) main_fmradio_pane_t3

0xe3b9,	// (0x00028ac4) popup_cale_lunar_info_window_g2

0xccbb,	// (0x000273c6) main_fmradio_pane_t4

0x0001,

0xccbb,	// (0x000273c6) main_fmradio_pane_t5

0x0004,

0xf4de,	// (0x00029be9) popup_cale_lunar_info_window_g

0xf269,	// (0x00029974) main_fmradio_pane_t

0xbe24,	// (0x0002652f) wait_bar_pane_cp03

0xc517,	// (0x00026c22) cell_fmradio_pane_ParamLimits

0xc517,	// (0x00026c22) cell_fmradio_pane

0xc525,	// (0x00026c30) cell_fmradio_pane_g1_ParamLimits

0xc525,	// (0x00026c30) cell_fmradio_pane_g1

0xbe24,	// (0x0002652f) grid_highlight_pane_cp011

0xd47c,	// (0x00027b87) poc_content_pane_ParamLimits

0xd47c,	// (0x00027b87) poc_content_pane

0xd48e,	// (0x00027b99) scroll_pane_cp019

0x725d,	// (0x00021968) popup_call_poc_act_window_ParamLimits

0x725d,	// (0x00021968) popup_call_poc_act_window

0x726a,	// (0x00021975) popup_call_poc_inact_window_ParamLimits

0x726a,	// (0x00021975) popup_call_poc_inact_window

0xf4a2,	// (0x00029bad) bg_popup_call_poc_act_pane_g

0xe371,	// (0x00028a7c) bg_popup_call_poc_inact_pane_g1

0xe379,	// (0x00028a84) bg_popup_call_poc_inact_pane_g2

0xd496,	// (0x00027ba1) popup_call_poc_act_window_g2

0xe381,	// (0x00028a8c) bg_popup_call_poc_inact_pane_g3

0xe301,	// (0x00028a0c) bg_popup_call_poc_inact_pane_g4

0xe389,	// (0x00028a94) bg_popup_call_poc_inact_pane_g5

0xd49e,	// (0x00027ba9) popup_call_poc_act_window_t1_ParamLimits

0xd49e,	// (0x00027ba9) popup_call_poc_act_window_t1

0xd4c6,	// (0x00027bd1) popup_call_poc_act_window_t2_ParamLimits

0xd4c6,	// (0x00027bd1) popup_call_poc_act_window_t2

0xd4ee,	// (0x00027bf9) popup_call_poc_act_window_t3_ParamLimits

0xd4ee,	// (0x00027bf9) popup_call_poc_act_window_t3

0xd516,	// (0x00027c21) popup_call_poc_act_window_t4_ParamLimits

0xd516,	// (0x00027c21) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00029b29) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00029b29) popup_call_poc_act_window_t

0xe391,	// (0x00028a9c) bg_popup_call_poc_inact_pane_g6

0xe399,	// (0x00028aa4) bg_popup_call_poc_inact_pane_g7

0xe3a1,	// (0x00028aac) bg_popup_call_poc_inact_pane_g8

0xd528,	// (0x00027c33) popup_call_poc_inact_window_g2

0xe3a9,	// (0x00028ab4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4b9,	// (0x00029bc4) bg_popup_call_poc_inact_pane_g

0xd530,	// (0x00027c3b) popup_call_poc_inact_window_t1_ParamLimits

0xd530,	// (0x00027c3b) popup_call_poc_inact_window_t1

0xd545,	// (0x00027c50) popup_call_poc_inact_window_t2_ParamLimits

0xd545,	// (0x00027c50) popup_call_poc_inact_window_t2

0xd55a,	// (0x00027c65) popup_call_poc_inact_window_t3_ParamLimits

0xd55a,	// (0x00027c65) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x00029b32) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x00029b32) popup_call_poc_inact_window_t

0xe45b,	// (0x00028b66) context_pane_ParamLimits

0x76f5,	// (0x00021e00) signal_pane_ParamLimits

0xc7d2,	// (0x00026edd) main_call2_pane

0x3efb,	// (0x0001e606) popup_phob_thumbnail2_window_ParamLimits

0x3efb,	// (0x0001e606) popup_phob_thumbnail2_window

0x3d5c,	// (0x0001e467) aid_hotspot_pointer_arrow_pane

0x3d64,	// (0x0001e46f) aid_hotspot_pointer_hand_pane

0x753d,	// (0x00021c48) phob_pre_status_pane_g5

0xc517,	// (0x00026c22) cams_zoom_pane_ParamLimits

0xc517,	// (0x00026c22) image_vga_pane_ParamLimits

0xc533,	// (0x00026c3e) main_camera_pane_g1_ParamLimits

0xc533,	// (0x00026c3e) main_camera_pane_g2_ParamLimits

0xc533,	// (0x00026c3e) main_camera_pane_g3_ParamLimits

0xc533,	// (0x00026c3e) main_camera_pane_g4_ParamLimits

0xc533,	// (0x00026c3e) main_camera_pane_g5_ParamLimits

0xc533,	// (0x00026c3e) main_camera_pane_g6_ParamLimits

0xc533,	// (0x00026c3e) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00029868) main_camera_pane_g_ParamLimits

0xc581,	// (0x00026c8c) main_camera_pane_t1_ParamLimits

0xc581,	// (0x00026c8c) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00029879) main_camera_pane_t_ParamLimits

0xc4aa,	// (0x00026bb5) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4aa,	// (0x00026bb5) bg_popup_preview_window_pane_cp01

0xd56f,	// (0x00027c7a) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56f,	// (0x00027c7a) popup_phob_thumbnail2_window_g1

0xc24f,	// (0x0002695a) call2_cli_visual_pane

0x7286,	// (0x00021991) popup_call2_audio_conf_window_ParamLimits

0x7286,	// (0x00021991) popup_call2_audio_conf_window

0x729b,	// (0x000219a6) popup_call2_audio_first_window_ParamLimits

0x729b,	// (0x000219a6) popup_call2_audio_first_window

0x7339,	// (0x00021a44) popup_call2_audio_in_window_ParamLimits

0x7339,	// (0x00021a44) popup_call2_audio_in_window

0x737b,	// (0x00021a86) popup_call2_audio_out_window_ParamLimits

0x737b,	// (0x00021a86) popup_call2_audio_out_window

0x73dd,	// (0x00021ae8) popup_call2_audio_second_window_ParamLimits

0x73dd,	// (0x00021ae8) popup_call2_audio_second_window

0x743b,	// (0x00021b46) popup_call2_audio_wait_window_ParamLimits

0x743b,	// (0x00021b46) popup_call2_audio_wait_window

0xc24f,	// (0x0002695a) bg_popup_call2_act_pane_cp03

0xc48c,	// (0x00026b97) list_conf_pane_cp

0xd57b,	// (0x00027c86) popup_call2_audio_conf_window_t1

0xd589,	// (0x00027c94) list_single_graphic_popup_conf2_pane_ParamLimits

0xd589,	// (0x00027c94) list_single_graphic_popup_conf2_pane

0xceb1,	// (0x000275bc) list_highlight_pane_cp04

0xd59c,	// (0x00027ca7) list_single_graphic_popup_conf2_pane_g1

0xcec2,	// (0x000275cd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00029b39) list_single_graphic_popup_conf2_pane_g

0xd5a6,	// (0x00027cb1) list_single_graphic_popup_conf2_pane_t1

0xd5b4,	// (0x00027cbf) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5b4,	// (0x00027cbf) bg_popup_call2_act_pane_cp01

0xd63e,	// (0x00027d49) call_type_pane_cp05_ParamLimits

0xd63e,	// (0x00027d49) call_type_pane_cp05

0xd692,	// (0x00027d9d) popup_call2_audio_second_window_g1_ParamLimits

0xd692,	// (0x00027d9d) popup_call2_audio_second_window_g1

0xd6e6,	// (0x00027df1) popup_call2_audio_second_window_g2_ParamLimits

0xd6e6,	// (0x00027df1) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00029b3e) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00029b3e) popup_call2_audio_second_window_g

0xd74b,	// (0x00027e56) popup_call2_audio_second_window_t1_ParamLimits

0xd74b,	// (0x00027e56) popup_call2_audio_second_window_t1

0xd806,	// (0x00027f11) popup_call2_audio_second_window_t2_ParamLimits

0xd806,	// (0x00027f11) popup_call2_audio_second_window_t2

0xd859,	// (0x00027f64) popup_call2_audio_second_window_t3_ParamLimits

0xd859,	// (0x00027f64) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x00029b45) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x00029b45) popup_call2_audio_second_window_t

0xc24f,	// (0x0002695a) bg_popup_call2_in_pane_cp02

0xc259,	// (0x00026964) call_type_pane_cp04

0x747a,	// (0x00021b85) popup_call2_audio_wait_window_g1

0x7482,	// (0x00021b8d) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00029b4e) popup_call2_audio_wait_window_g

0xc271,	// (0x0002697c) popup_call2_audio_wait_window_t3

0xd94c,	// (0x00028057) bg_popup_call2_act_pane_ParamLimits

0xd94c,	// (0x00028057) bg_popup_call2_act_pane

0xda1a,	// (0x00028125) call_type_pane_cp03_ParamLimits

0xda1a,	// (0x00028125) call_type_pane_cp03

0xda7e,	// (0x00028189) popup_call2_audio_first_window_g1_ParamLimits

0xda7e,	// (0x00028189) popup_call2_audio_first_window_g1

0xdaee,	// (0x000281f9) popup_call2_audio_first_window_g2_ParamLimits

0xdaee,	// (0x000281f9) popup_call2_audio_first_window_g2

0xda0c,	// (0x00028117) popup_call2_audio_first_window_g3_ParamLimits

0xda0c,	// (0x00028117) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x00029b53) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x00029b53) popup_call2_audio_first_window_g

0xdbcc,	// (0x000282d7) popup_call2_audio_first_window_t1_ParamLimits

0xdbcc,	// (0x000282d7) popup_call2_audio_first_window_t1

0xdccf,	// (0x000283da) popup_call2_audio_first_window_t4_ParamLimits

0xdccf,	// (0x000283da) popup_call2_audio_first_window_t4

0xddb2,	// (0x000284bd) popup_call2_audio_first_window_t5_ParamLimits

0xddb2,	// (0x000284bd) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00029b5e) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00029b5e) popup_call2_audio_first_window_t

0xc4a2,	// (0x00026bad) bg_popup_call2_act_pane_g1

0xe3c1,	// (0x00028acc) popup_cale_lunar_info_window_t1

0xe3cf,	// (0x00028ada) popup_cale_lunar_info_window_t2

0xe3dd,	// (0x00028ae8) popup_cale_lunar_info_window_t3

0xc24f,	// (0x0002695a) bg_popup_call2_bubble_pane

0xdeb3,	// (0x000285be) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeb3,	// (0x000285be) bg_popup_call2_in_pane_cp01

0xbf1d,	// (0x00026628) call_type_pane_cp02

0x748a,	// (0x00021b95) popup_call2_audio_out_window_g1_ParamLimits

0x748a,	// (0x00021b95) popup_call2_audio_out_window_g1

0xdefb,	// (0x00028606) popup_call2_audio_out_window_g2_ParamLimits

0xdefb,	// (0x00028606) popup_call2_audio_out_window_g2

0x74b6,	// (0x00021bc1) popup_call2_audio_out_window_g3_ParamLimits

0x74b6,	// (0x00021bc1) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00029b67) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00029b67) popup_call2_audio_out_window_g

0xdf32,	// (0x0002863d) popup_call2_audio_out_window_t1_ParamLimits

0xdf32,	// (0x0002863d) popup_call2_audio_out_window_t1

0xdf91,	// (0x0002869c) popup_call2_audio_out_window_t2_ParamLimits

0xdf91,	// (0x0002869c) popup_call2_audio_out_window_t2

0xdfe5,	// (0x000286f0) popup_call2_audio_out_window_t3_ParamLimits

0xdfe5,	// (0x000286f0) popup_call2_audio_out_window_t3

0xdffb,	// (0x00028706) popup_call2_audio_out_window_t4_ParamLimits

0xdffb,	// (0x00028706) popup_call2_audio_out_window_t4

0xe011,	// (0x0002871c) popup_call2_audio_out_window_t5_ParamLimits

0xe011,	// (0x0002871c) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x00029b70) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x00029b70) popup_call2_audio_out_window_t

0xe075,	// (0x00028780) bg_popup_call2_in_pane_ParamLimits

0xe075,	// (0x00028780) bg_popup_call2_in_pane

0xe0d1,	// (0x000287dc) popup_call2_audio_in_window_g1_ParamLimits

0xe0d1,	// (0x000287dc) popup_call2_audio_in_window_g1

0xe109,	// (0x00028814) popup_call2_audio_in_window_g2_ParamLimits

0xe109,	// (0x00028814) popup_call2_audio_in_window_g2

0xe141,	// (0x0002884c) popup_call2_audio_in_window_g3_ParamLimits

0xe141,	// (0x0002884c) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00029b7d) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00029b7d) popup_call2_audio_in_window_g

0xe199,	// (0x000288a4) popup_call2_audio_in_window_t1_ParamLimits

0xe199,	// (0x000288a4) popup_call2_audio_in_window_t1

0xe219,	// (0x00028924) popup_call2_audio_in_window_t2_ParamLimits

0xe219,	// (0x00028924) popup_call2_audio_in_window_t2

0xe299,	// (0x000289a4) popup_call2_audio_in_window_t3_ParamLimits

0xe299,	// (0x000289a4) popup_call2_audio_in_window_t3

0xe2b3,	// (0x000289be) popup_call2_audio_in_window_t4_ParamLimits

0xe2b3,	// (0x000289be) popup_call2_audio_in_window_t4

0xe2c5,	// (0x000289d0) popup_call2_audio_in_window_t5_ParamLimits

0xe2c5,	// (0x000289d0) popup_call2_audio_in_window_t5

0xe2d7,	// (0x000289e2) popup_call2_audio_in_window_t6_ParamLimits

0xe2d7,	// (0x000289e2) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x00029b86) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x00029b86) popup_call2_audio_in_window_t

0xc4a2,	// (0x00026bad) bg_popup_call2_in_pane_g1

0xe3eb,	// (0x00028af6) popup_cale_lunar_info_window_t4

0x0003,

0xf4e3,	// (0x00029bee) popup_cale_lunar_info_window_t

0xc4aa,	// (0x00026bb5) bg_popup_call2_rect_pane_ParamLimits

0xc4aa,	// (0x00026bb5) bg_popup_call2_rect_pane

0xc24f,	// (0x0002695a) call2_cli_visual_graphic_pane

0xc24f,	// (0x0002695a) call2_cli_visual_text_pane

0x3f4a,	// (0x0001e655) smil_status_volume_pane_g3

0x0002,

0xc4c2,	// (0x00026bcd) call2_cli_visual_graphic_pane_g1

0xc4c2,	// (0x00026bcd) call2_cli_visual_graphic_pane_g2

0xc4c2,	// (0x00026bcd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x00029b93) call2_cli_visual_graphic_pane_g

0xc6c2,	// (0x00026dcd) bg_popup_call2_rect_pane_g1

0xc6ba,	// (0x00026dc5) bg_popup_call2_rect_pane_g2

0xc6b2,	// (0x00026dbd) bg_popup_call2_rect_pane_g3

0xc6d2,	// (0x00026ddd) bg_popup_call2_rect_pane_g4

0xc6ca,	// (0x00026dd5) bg_popup_call2_rect_pane_g5

0xc6da,	// (0x00026de5) bg_popup_call2_rect_pane_g6

0xc6e2,	// (0x00026ded) bg_popup_call2_rect_pane_g7

0xc6f2,	// (0x00026dfd) bg_popup_call2_rect_pane_g8

0xc6ea,	// (0x00026df5) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x00029923) bg_popup_call2_rect_pane_g

0xe2e9,	// (0x000289f4) bg_popup_call2_bubble_pane_g1

0xe2f1,	// (0x000289fc) bg_popup_call2_bubble_pane_g2

0xe2f9,	// (0x00028a04) bg_popup_call2_bubble_pane_g3

0xe301,	// (0x00028a0c) bg_popup_call2_bubble_pane_g4

0xe309,	// (0x00028a14) bg_popup_call2_bubble_pane_g5

0xe311,	// (0x00028a1c) bg_popup_call2_bubble_pane_g6

0xe319,	// (0x00028a24) bg_popup_call2_bubble_pane_g7

0xe321,	// (0x00028a2c) bg_popup_call2_bubble_pane_g8

0xe329,	// (0x00028a34) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00029b9a) bg_popup_call2_bubble_pane_g

0x51fc,	// (0x0001f907) aid_cale_week_size_cell_pane

0xc4aa,	// (0x00026bb5) aid_cams_cif_uncrop_pane_ParamLimits

0xc4aa,	// (0x00026bb5) aid_cams_cif_uncrop_pane

0xc517,	// (0x00026c22) aid_cams_size_cell_ParamLimits

0xc517,	// (0x00026c22) aid_cams_size_cell

0xc517,	// (0x00026c22) grid_cams_pane_ParamLimits

0xc517,	// (0x00026c22) linegrid_cams_pane_ParamLimits

0x57ce,	// (0x0001fed9) call_video_pane_t1

0x57ef,	// (0x0001fefa) call_video_pane_t2

0x0001,

0xf1ba,	// (0x000298c5) call_video_pane_t

0x5d3d,	// (0x00020448) aid_cale_month_size_cell_pane_ParamLimits

0x5d3d,	// (0x00020448) aid_cale_month_size_cell_pane

0xf527,	// (0x00029c32) smil_status_volume_pane_g

0x3f57,	// (0x0001e662) volume_smil_pane_ParamLimits

0x373a,	// (0x0001de45) aid_popup2_width_pane

0x511f,	// (0x0001f82a) cell_qdial_pane_g4_ParamLimits

0x511f,	// (0x0001f82a) cell_qdial_pane_g4

0x6b9d,	// (0x000212a8) aid_blid_cardinal_pane_ParamLimits

0x6bad,	// (0x000212b8) aid_blid_destination_pane_ParamLimits

0x6bad,	// (0x000212b8) aid_blid_destination_pane

0xc4aa,	// (0x00026bb5) bg_popup_call_poc_act_pane_ParamLimits

0xc4aa,	// (0x00026bb5) bg_popup_call_poc_act_pane

0xc4aa,	// (0x00026bb5) bg_popup_call_poc_inact_pane_ParamLimits

0xc4aa,	// (0x00026bb5) bg_popup_call_poc_inact_pane

0xe331,	// (0x00028a3c) bg_popup_call_poc_act_pane_g1

0xe339,	// (0x00028a44) bg_popup_call_poc_act_pane_g2

0xe341,	// (0x00028a4c) bg_popup_call_poc_act_pane_g3

0xe301,	// (0x00028a0c) bg_popup_call_poc_act_pane_g4

0xe309,	// (0x00028a14) bg_popup_call_poc_act_pane_g5

0xe349,	// (0x00028a54) bg_popup_call_poc_act_pane_g6

0xe319,	// (0x00028a24) bg_popup_call_poc_act_pane_g7

0xe351,	// (0x00028a5c) bg_popup_call_poc_act_pane_g8

0xc24f,	// (0x0002695a) main_usb_pane

0x3e2e,	// (0x0001e539) popup_cale_lunar_info_window

0x5b0c,	// (0x00020217) im_reading_pane_t1_ParamLimits

0xc893,	// (0x00026f9e) list_im_pane_ParamLimits

0xc8a4,	// (0x00026faf) scroll_pane_cp07_ParamLimits

0xc24f,	// (0x0002695a) grid_highlight_pane_cp012

0xc4aa,	// (0x00026bb5) mup_scale_pane_ParamLimits

0xc533,	// (0x00026c3e) main_usb_pane_g1_ParamLimits

0xc533,	// (0x00026c3e) main_usb_pane_g1

0xc533,	// (0x00026c3e) main_usb_pane_g2_ParamLimits

0xc533,	// (0x00026c3e) main_usb_pane_g2

0x0001,

0xf4cc,	// (0x00029bd7) main_usb_pane_g_ParamLimits

0xf4cc,	// (0x00029bd7) main_usb_pane_g

0xc581,	// (0x00026c8c) main_usb_pane_t1_ParamLimits

0xc581,	// (0x00026c8c) main_usb_pane_t1

0xc581,	// (0x00026c8c) main_usb_pane_t2_ParamLimits

0xc581,	// (0x00026c8c) main_usb_pane_t2

0xc581,	// (0x00026c8c) main_usb_pane_t3_ParamLimits

0xc581,	// (0x00026c8c) main_usb_pane_t3

0xc581,	// (0x00026c8c) main_usb_pane_t4_ParamLimits

0xc581,	// (0x00026c8c) main_usb_pane_t4

0xc581,	// (0x00026c8c) main_usb_pane_t5_ParamLimits

0xc581,	// (0x00026c8c) main_usb_pane_t5

0xc581,	// (0x00026c8c) main_usb_pane_t6_ParamLimits

0xc581,	// (0x00026c8c) main_usb_pane_t6

0x0005,

0xf4d1,	// (0x00029bdc) main_usb_pane_t_ParamLimits

0x6b43,	// (0x0002124e) aid_text_placing

0x6b4f,	// (0x0002125a) main_location2_pane_t1_ParamLimits

0x6b63,	// (0x0002126e) main_location2_pane_t2_ParamLimits

0x6b77,	// (0x00021282) main_location2_pane_t3_ParamLimits

0x6b8b,	// (0x00021296) main_location2_pane_t4_ParamLimits

0x6b8b,	// (0x00021296) main_location2_pane_t4

0xf2fb,	// (0x00029a06) main_location2_pane_t_ParamLimits

0xc4d8,	// (0x00026be3) find_pinb_pane_g2_ParamLimits

0xc4d8,	// (0x00026be3) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0002977d) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0002977d) find_pinb_pane_g

0xc4e4,	// (0x00026bef) find_pinb_pane_t1_ParamLimits

0xc4f6,	// (0x00026c01) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00029782) find_pinb_pane_t_ParamLimits

0xc24f,	// (0x0002695a) main_call3_pane

0x6300,	// (0x00020a0b) cale_month_day_heading_pane_t1_ParamLimits

0x6386,	// (0x00020a91) cale_month_day_heading_pane_t2_ParamLimits

0x63ff,	// (0x00020b0a) cale_month_day_heading_pane_t3_ParamLimits

0x6478,	// (0x00020b83) cale_month_day_heading_pane_t4_ParamLimits

0x64f1,	// (0x00020bfc) cale_month_day_heading_pane_t5_ParamLimits

0x656a,	// (0x00020c75) cale_month_day_heading_pane_t6_ParamLimits

0x65e3,	// (0x00020cee) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x000298fd) cale_month_day_heading_pane_t_ParamLimits

0xcaee,	// (0x000271f9) smil_status_volume_pane

0x70a9,	// (0x000217b4) postcard_address_pane_ParamLimits

0x70a9,	// (0x000217b4) postcard_address_pane

0x70b5,	// (0x000217c0) postcard_message_pane_ParamLimits

0x70b5,	// (0x000217c0) postcard_message_pane

0x74e2,	// (0x00021bed) call2_cli_visual_pane_t1_ParamLimits

0x74e2,	// (0x00021bed) call2_cli_visual_pane_t1

0xe50e,	// (0x00028c19) postcard_message_pane_t1_ParamLimits

0xe50e,	// (0x00028c19) postcard_message_pane_t1

0xe4f6,	// (0x00028c01) postcard_address_pane_t1_ParamLimits

0xe4f6,	// (0x00028c01) postcard_address_pane_t1

0x784d,	// (0x00021f58) popup_call3_audio_in_window_ParamLimits

0x784d,	// (0x00021f58) popup_call3_audio_in_window

0x7731,	// (0x00021e3c) bg_popup_call3_in_pane_ParamLimits

0x7731,	// (0x00021e3c) bg_popup_call3_in_pane

0x7793,	// (0x00021e9e) popup_call3_audio_in_window_g1_ParamLimits

0x7793,	// (0x00021e9e) popup_call3_audio_in_window_g1

0x77ab,	// (0x00021eb6) popup_call3_audio_in_window_g2_ParamLimits

0x77ab,	// (0x00021eb6) popup_call3_audio_in_window_g2

0x77c3,	// (0x00021ece) popup_call3_audio_in_window_g3_ParamLimits

0x77c3,	// (0x00021ece) popup_call3_audio_in_window_g3

0x0003,

0xf52e,	// (0x00029c39) popup_call3_audio_in_window_g_ParamLimits

0xf52e,	// (0x00029c39) popup_call3_audio_in_window_g

0x77eb,	// (0x00021ef6) popup_call3_audio_in_window_t1_ParamLimits

0x77eb,	// (0x00021ef6) popup_call3_audio_in_window_t1

0x7813,	// (0x00021f1e) popup_call3_audio_in_window_t2_ParamLimits

0x7813,	// (0x00021f1e) popup_call3_audio_in_window_t2

0x783b,	// (0x00021f46) popup_call3_audio_in_window_t3_ParamLimits

0x783b,	// (0x00021f46) popup_call3_audio_in_window_t3

0x0002,

0xf537,	// (0x00029c42) popup_call3_audio_in_window_t_ParamLimits

0xf537,	// (0x00029c42) popup_call3_audio_in_window_t

0xc7d2,	// (0x00026edd) bg_popup_call3_rect_pane

0xc6c2,	// (0x00026dcd) bg_popup_call3_rect_pane_g1

0xc6ba,	// (0x00026dc5) bg_popup_call3_rect_pane_g2

0xc6b2,	// (0x00026dbd) bg_popup_call3_rect_pane_g3

0xc6d2,	// (0x00026ddd) bg_popup_call3_rect_pane_g4

0xc6ca,	// (0x00026dd5) bg_popup_call3_rect_pane_g5

0xc6da,	// (0x00026de5) bg_popup_call3_rect_pane_g6

0xc6e2,	// (0x00026ded) bg_popup_call3_rect_pane_g7

0xbe24,	// (0x0002652f) mup_visualizer_osc_pane

0xbe24,	// (0x0002652f) mup_visualizer_spec_pane

0x7751,	// (0x00021e5c) call3_video_qcif_pane_ParamLimits

0x7751,	// (0x00021e5c) call3_video_qcif_pane

0x7763,	// (0x00021e6e) call3_video_qcif_uncrop_pane_ParamLimits

0x7763,	// (0x00021e6e) call3_video_qcif_uncrop_pane

0x7771,	// (0x00021e7c) call3_video_subqcif_pane_ParamLimits

0x7771,	// (0x00021e7c) call3_video_subqcif_pane

0x7783,	// (0x00021e8e) call3_video_subqcif_uncrop_pane_ParamLimits

0x7783,	// (0x00021e8e) call3_video_subqcif_uncrop_pane

0x77db,	// (0x00021ee6) popup_call3_audio_in_window_g4_ParamLimits

0x77db,	// (0x00021ee6) popup_call3_audio_in_window_g4

0xbe24,	// (0x0002652f) mup_spec_half_pane

0xbe24,	// (0x0002652f) mup_spec_half_pane_cp

0xbe24,	// (0x0002652f) mup_osc_middle_pane

0xc563,	// (0x00026c6e) mup_visualizer_osc_pane_g1

0xe4a9,	// (0x00028bb4) mup_spec_bar_pane_ParamLimits

0xe4a9,	// (0x00028bb4) mup_spec_bar_pane

0xc563,	// (0x00026c6e) mup_spec_bar_pane_g1

0xc563,	// (0x00026c6e) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00029797) mup_spec_bar_pane_g

0x51fc,	// (0x0001f907) aid_cale_week_size_cell_pane_ParamLimits

0x5211,	// (0x0001f91c) bg_cale_heading_pane_ParamLimits

0xc734,	// (0x00026e3f) bg_cale_pane_cp01_ParamLimits

0x5233,	// (0x0001f93e) cale_week_corner_pane_ParamLimits

0x524d,	// (0x0001f958) cale_week_day_heading_pane_ParamLimits

0x526f,	// (0x0001f97a) cale_week_scroll_pane_g1_ParamLimits

0x528c,	// (0x0001f997) cale_week_scroll_pane_g2_ParamLimits

0x529f,	// (0x0001f9aa) cale_week_scroll_pane_g3_ParamLimits

0x52b2,	// (0x0001f9bd) cale_week_scroll_pane_g4_ParamLimits

0x52c5,	// (0x0001f9d0) cale_week_scroll_pane_g5_ParamLimits

0x52d8,	// (0x0001f9e3) cale_week_scroll_pane_g6_ParamLimits

0x52eb,	// (0x0001f9f6) cale_week_scroll_pane_g7_ParamLimits

0x5300,	// (0x0001fa0b) cale_week_scroll_pane_g8_ParamLimits

0x5315,	// (0x0001fa20) cale_week_scroll_pane_g9_ParamLimits

0x5328,	// (0x0001fa33) cale_week_scroll_pane_g10_ParamLimits

0x533b,	// (0x0001fa46) cale_week_scroll_pane_g11_ParamLimits

0x534e,	// (0x0001fa59) cale_week_scroll_pane_g12_ParamLimits

0x5365,	// (0x0001fa70) cale_week_scroll_pane_g13_ParamLimits

0x5380,	// (0x0001fa8b) cale_week_scroll_pane_g14_ParamLimits

0x539b,	// (0x0001faa6) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0002980e) cale_week_scroll_pane_g_ParamLimits

0x53cb,	// (0x0001fad6) cale_week_time_pane_ParamLimits

0x53e0,	// (0x0001faeb) grid_cale_week_pane_ParamLimits

0xc751,	// (0x00026e5c) listscroll_cale_week_pane_t1

0xc763,	// (0x00026e6e) scroll_pane_cp08_ParamLimits

0x5db1,	// (0x000204bc) cale_month_corner_pane_ParamLimits

0xcac4,	// (0x000271cf) cale_month_pane_t1

0x627f,	// (0x0002098a) cale_month_week_pane_ParamLimits

0xda0c,	// (0x00028117) popup_call_status_window_g1_ParamLimits

0x69df,	// (0x000210ea) popup_call_status_window_g2_ParamLimits

0x69eb,	// (0x000210f6) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x0002998d) popup_call_status_window_g_ParamLimits

0xce32,	// (0x0002753d) aid_call2_pane

0x6f36,	// (0x00021641) msg_header_pane_g1

0x70a9,	// (0x000217b4) postcard_address2_pane_ParamLimits

0x70a9,	// (0x000217b4) postcard_address2_pane

0x70b5,	// (0x000217c0) postcard_message2_pane_ParamLimits

0x70b5,	// (0x000217c0) postcard_message2_pane

0x7703,	// (0x00021e0e) message2_row_pane_ParamLimits

0x7703,	// (0x00021e0e) message2_row_pane

0x771e,	// (0x00021e29) address2_row_pane_ParamLimits

0x771e,	// (0x00021e29) address2_row_pane

0xe476,	// (0x00028b81) postcard_message2_row_pane_g1

0xe47e,	// (0x00028b89) postcard_message2_row_pane_t1

0xe476,	// (0x00028b81) address2_row_pane_g1

0xe47e,	// (0x00028b89) address2_row_pane_t1

0x557d,	// (0x0001fc88) aid_size_cell_vorec

0xc24f,	// (0x0002695a) main_rss_pane

0xe48c,	// (0x00028b97) rss_list_single_pane_ParamLimits

0xe48c,	// (0x00028b97) rss_list_single_pane

0xe49a,	// (0x00028ba5) rss_list_single_pane_t1

0xe49a,	// (0x00028ba5) rss_list_single_pane_t2

0x0001,

0xf522,	// (0x00029c2d) rss_list_single_pane_t

0xc24f,	// (0x0002695a) main_camera2_pane

0xc24f,	// (0x0002695a) main_video2_pane

0x39b4,	// (0x0001e0bf) cams_zoom_pane_cp2_ParamLimits

0x39b4,	// (0x0001e0bf) cams_zoom_pane_cp2

0x39b4,	// (0x0001e0bf) image2_vga_pane_ParamLimits

0x39b4,	// (0x0001e0bf) image2_vga_pane

0xce71,	// (0x0002757c) main_camera2_pane_g1_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g1

0xce71,	// (0x0002757c) main_camera2_pane_g2_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g2

0xce71,	// (0x0002757c) main_camera2_pane_g3_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g3

0xce71,	// (0x0002757c) main_camera2_pane_g4_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g4

0xce71,	// (0x0002757c) main_camera2_pane_g5_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g5

0xce71,	// (0x0002757c) main_camera2_pane_g6_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g6

0xce71,	// (0x0002757c) main_camera2_pane_g7_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g7

0xce71,	// (0x0002757c) main_camera2_pane_g8_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g8

0x0008,

0xf53e,	// (0x00029c49) main_camera2_pane_g_ParamLimits

0xf53e,	// (0x00029c49) main_camera2_pane_g

0x3f7a,	// (0x0001e685) main_camera2_pane_t1_ParamLimits

0x3f7a,	// (0x0001e685) main_camera2_pane_t1

0x3f7a,	// (0x0001e685) main_camera2_pane_t2_ParamLimits

0x3f7a,	// (0x0001e685) main_camera2_pane_t2

0x3f7a,	// (0x0001e685) main_camera2_pane_t3_ParamLimits

0x3f7a,	// (0x0001e685) main_camera2_pane_t3

0x3f7a,	// (0x0001e685) main_camera2_pane_t4_ParamLimits

0x3f7a,	// (0x0001e685) main_camera2_pane_t4

0x0006,

0xf551,	// (0x00029c5c) main_camera2_pane_t_ParamLimits

0xf551,	// (0x00029c5c) main_camera2_pane_t

0x3fa2,	// (0x0001e6ad) cams_zoom_pane_cp4_ParamLimits

0x3fa2,	// (0x0001e6ad) cams_zoom_pane_cp4

0x3dd9,	// (0x0001e4e4) image2_cif_pane_ParamLimits

0x3dd9,	// (0x0001e4e4) image2_cif_pane

0x39b4,	// (0x0001e0bf) image2_subqcif_pane_ParamLimits

0x39b4,	// (0x0001e0bf) image2_subqcif_pane

0x3fb0,	// (0x0001e6bb) main_video2_pane_g1_ParamLimits

0x3fb0,	// (0x0001e6bb) main_video2_pane_g1

0x3fb0,	// (0x0001e6bb) main_video2_pane_g2_ParamLimits

0x3fb0,	// (0x0001e6bb) main_video2_pane_g2

0x3fb0,	// (0x0001e6bb) main_video2_pane_g3_ParamLimits

0x3fb0,	// (0x0001e6bb) main_video2_pane_g3

0x3fb0,	// (0x0001e6bb) main_video2_pane_g4_ParamLimits

0x3fb0,	// (0x0001e6bb) main_video2_pane_g4

0x3fb0,	// (0x0001e6bb) main_video2_pane_g5_ParamLimits

0x3fb0,	// (0x0001e6bb) main_video2_pane_g5

0x3fb0,	// (0x0001e6bb) main_video2_pane_g6_ParamLimits

0x3fb0,	// (0x0001e6bb) main_video2_pane_g6

0x0005,

0xf560,	// (0x00029c6b) main_video2_pane_g_ParamLimits

0xf560,	// (0x00029c6b) main_video2_pane_g

0x3fbe,	// (0x0001e6c9) main_video2_pane_t1_ParamLimits

0x3fbe,	// (0x0001e6c9) main_video2_pane_t1

0x3fbe,	// (0x0001e6c9) main_video2_pane_t2_ParamLimits

0x3fbe,	// (0x0001e6c9) main_video2_pane_t2

0x3fbe,	// (0x0001e6c9) main_video2_pane_t3_ParamLimits

0x3fbe,	// (0x0001e6c9) main_video2_pane_t3

0x0002,

0xf56d,	// (0x00029c78) main_video2_pane_t_ParamLimits

0xf56d,	// (0x00029c78) main_video2_pane_t

0x75a1,	// (0x00021cac) call_muted_g2

0x0001,

0xf514,	// (0x00029c1f) call_muted_g

0xc24f,	// (0x0002695a) main_mup2_pane

0xc541,	// (0x00026c4c) main_mup2_pane_g1_ParamLimits

0xc541,	// (0x00026c4c) main_mup2_pane_g1

0xc541,	// (0x00026c4c) main_mup2_pane_g2_ParamLimits

0xc541,	// (0x00026c4c) main_mup2_pane_g2

0x0c2c,	// (0x0001b337) main_mup_pane_g13_cp1

0x39c2,	// (0x0001e0cd) mup_volume_pane_cp1

0xc541,	// (0x00026c4c) main_mup2_pane_g4_ParamLimits

0xc541,	// (0x00026c4c) main_mup2_pane_g4

0xc541,	// (0x00026c4c) main_mup2_pane_g5_ParamLimits

0xc541,	// (0x00026c4c) main_mup2_pane_g5

0xc541,	// (0x00026c4c) main_mup2_pane_g6_ParamLimits

0xc541,	// (0x00026c4c) main_mup2_pane_g6

0xc541,	// (0x00026c4c) main_mup2_pane_g7_ParamLimits

0xc541,	// (0x00026c4c) main_mup2_pane_g7

0x0006,

0xf574,	// (0x00029c7f) main_mup2_pane_g_ParamLimits

0xf574,	// (0x00029c7f) main_mup2_pane_g

0xc54f,	// (0x00026c5a) main_mup2_pane_t1_ParamLimits

0xc54f,	// (0x00026c5a) main_mup2_pane_t1

0xc54f,	// (0x00026c5a) main_mup2_pane_t2_ParamLimits

0xc54f,	// (0x00026c5a) main_mup2_pane_t2

0xc54f,	// (0x00026c5a) main_mup2_pane_t3_ParamLimits

0xc54f,	// (0x00026c5a) main_mup2_pane_t3

0xc54f,	// (0x00026c5a) main_mup2_pane_t4_ParamLimits

0xc54f,	// (0x00026c5a) main_mup2_pane_t4

0xc54f,	// (0x00026c5a) main_mup2_pane_t5_ParamLimits

0xc54f,	// (0x00026c5a) main_mup2_pane_t5

0xc54f,	// (0x00026c5a) main_mup2_pane_t6_ParamLimits

0xc54f,	// (0x00026c5a) main_mup2_pane_t6

0x0005,

0xf583,	// (0x00029c8e) main_mup2_pane_t_ParamLimits

0xf583,	// (0x00029c8e) main_mup2_pane_t

0xe44d,	// (0x00028b58) mup2_visualizer_pane_ParamLimits

0xe44d,	// (0x00028b58) mup2_visualizer_pane

0xe44d,	// (0x00028b58) mup_progress_pane_cp_ParamLimits

0xe44d,	// (0x00028b58) mup_progress_pane_cp

0x3fe8,	// (0x0001e6f3) mup_volume_pane_cp_ParamLimits

0x3fe8,	// (0x0001e6f3) mup_volume_pane_cp

0xc525,	// (0x00026c30) mup2_visualizer_pane_g1_ParamLimits

0xc525,	// (0x00026c30) mup2_visualizer_pane_g1

0xc533,	// (0x00026c3e) mup2_visualizer_pane_g2_ParamLimits

0xc533,	// (0x00026c3e) mup2_visualizer_pane_g2

0xc533,	// (0x00026c3e) mup2_visualizer_pane_g3_ParamLimits

0xc533,	// (0x00026c3e) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00029787) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00029787) mup2_visualizer_pane_g

0xbe24,	// (0x0002652f) aid_size_cell_fmradio

0x3dc2,	// (0x0001e4cd) aid_height_parent_landcape

0xc922,	// (0x0002702d) wml_content_pane_cp

0xc92a,	// (0x00027035) wml_tabs_pane

0xc933,	// (0x0002703e) popup_wml_miniature_window

0xc93b,	// (0x00027046) scroll_pane_cp021

0xc94f,	// (0x0002705a) wml_content_pane_comp8

0xc24f,	// (0x0002695a) bg_popup_sub_pane_cp05

0xe540,	// (0x00028c4b) popup_wml_miniature_window_g1

0xe56a,	// (0x00028c75) wml_miniature_view_pane

0x785c,	// (0x00021f67) aid_size_wml_view

0x7864,	// (0x00021f6f) wml_miniature_view_pane_g1

0x786d,	// (0x00021f78) wml_miniature_view_pane_g2

0x7876,	// (0x00021f81) wml_miniature_view_pane_g3

0x787e,	// (0x00021f89) wml_miniature_view_pane_g4

0x7886,	// (0x00021f91) wml_miniature_view_pane_g5

0x788e,	// (0x00021f99) wml_miniature_view_pane_g6

0x7896,	// (0x00021fa1) wml_miniature_view_pane_g7

0x789e,	// (0x00021fa9) wml_miniature_view_pane_g8

0x0007,

0xf590,	// (0x00029c9b) wml_miniature_view_pane_g

0xe572,	// (0x00028c7d) background_graphic_ParamLimits

0xe572,	// (0x00028c7d) background_graphic

0xe57e,	// (0x00028c89) wml_tabs_2_pane

0xe587,	// (0x00028c92) wml_tabs_3_pane_ParamLimits

0xe587,	// (0x00028c92) wml_tabs_3_pane

0xe599,	// (0x00028ca4) wml_tabs_4_pane_ParamLimits

0xe599,	// (0x00028ca4) wml_tabs_4_pane

0xe5af,	// (0x00028cba) wml_tabs_5_pane_ParamLimits

0xe5af,	// (0x00028cba) wml_tabs_5_pane

0xe5c9,	// (0x00028cd4) wml_tabs_pane_g2_ParamLimits

0xe5c9,	// (0x00028cd4) wml_tabs_pane_g2

0xe5de,	// (0x00028ce9) wml_tabs_pane_g3_ParamLimits

0xe5de,	// (0x00028ce9) wml_tabs_pane_g3

0xe5f3,	// (0x00028cfe) wml_tabs_2_active_pane_ParamLimits

0xe5f3,	// (0x00028cfe) wml_tabs_2_active_pane

0xe5f3,	// (0x00028cfe) wml_tabs_2_passive_pane_ParamLimits

0xe5f3,	// (0x00028cfe) wml_tabs_2_passive_pane

0x78a6,	// (0x00021fb1) wml_tabs_3_active_pane_cp_ParamLimits

0x78a6,	// (0x00021fb1) wml_tabs_3_active_pane_cp

0x78b7,	// (0x00021fc2) wml_tabs_3_passive_pane_ParamLimits

0x78b7,	// (0x00021fc2) wml_tabs_3_passive_pane

0x78c8,	// (0x00021fd3) wml_tabs_3_passive_pane_cp_ParamLimits

0x78c8,	// (0x00021fd3) wml_tabs_3_passive_pane_cp

0x78d9,	// (0x00021fe4) tabs_4_active_pane

0x78e1,	// (0x00021fec) tabs_4_passive_pane

0x78e9,	// (0x00021ff4) tabs_4_passive_pane_cp

0x78f1,	// (0x00021ffc) tabs_4_passive_pane_cp2

0x7515,	// (0x00021c20) aid_height_text

0xe44d,	// (0x00028b58) mup_volume_cont_pane_ParamLimits

0xe44d,	// (0x00028b58) mup_volume_cont_pane

0xbe24,	// (0x0002652f) aid_size_cell_pinb

0xbe24,	// (0x0002652f) aid_size_list_pinb

0xe44d,	// (0x00028b58) mup2_volume_cont_pane_ParamLimits

0xe44d,	// (0x00028b58) mup2_volume_cont_pane

0x3fd2,	// (0x0001e6dd) mup2_volume_cont_pane_g1_ParamLimits

0x3fd2,	// (0x0001e6dd) mup2_volume_cont_pane_g1

0x3746,	// (0x0001de51) aid_size_cell_touch_ParamLimits

0x3746,	// (0x0001de51) aid_size_cell_touch

0x39cc,	// (0x0001e0d7) touch_pane_ParamLimits

0x39cc,	// (0x0001e0d7) touch_pane

0x39c2,	// (0x0001e0cd) main_rss2_pane

0xe60a,	// (0x00028d15) listscroll_rss2_pane

0xe613,	// (0x00028d1e) rss2_navigation_pane

0xe61b,	// (0x00028d26) list_rss2_pane

0xcf56,	// (0x00027661) scroll_pane_cp22

0xe623,	// (0x00028d2e) rss2_navigation_pane_g1

0xe62c,	// (0x00028d37) rss2_navigation_pane_g2

0xe634,	// (0x00028d3f) rss2_navigation_pane_g3

0x0002,

0xf5a1,	// (0x00029cac) rss2_navigation_pane_g

0xe63c,	// (0x00028d47) rss2_navigation_pane_t1

0x78f9,	// (0x00022004) rss2_list_single_pane_ParamLimits

0x78f9,	// (0x00022004) rss2_list_single_pane

0xe64a,	// (0x00028d55) rss2_list_single_pane_t2

0xe658,	// (0x00028d63) rss2_list_single_pane_t3_ParamLimits

0xe658,	// (0x00028d63) rss2_list_single_pane_t3

0xe675,	// (0x00028d80) rss2_list_single_pane_t4

0x684d,	// (0x00020f58) smil_status_pane_g1

0x3dd9,	// (0x0001e4e4) main_image2_pane_ParamLimits

0x3dd9,	// (0x0001e4e4) main_image2_pane

0xce71,	// (0x0002757c) main_camera2_pane_g9_ParamLimits

0xce71,	// (0x0002757c) main_camera2_pane_g9

0x3f7a,	// (0x0001e685) main_camera2_pane_t5_ParamLimits

0x3f7a,	// (0x0001e685) main_camera2_pane_t5

0x3f8e,	// (0x0001e699) main_camera2_pane_t6_ParamLimits

0x3f8e,	// (0x0001e699) main_camera2_pane_t6

0x792d,	// (0x00022038) main_image2_pane_g1_ParamLimits

0x792d,	// (0x00022038) main_image2_pane_g1

0x7247,	// (0x00021952) smil2_video_pane_ParamLimits

0x7247,	// (0x00021952) smil2_video_pane

0x377a,	// (0x0001de85) aid_zoom_text_primary_cp

0x3969,	// (0x0001e074) popup_preview_fixed_window

0xc88b,	// (0x00026f96) im_reading_pane_g1

0x3f6c,	// (0x0001e677) cams2_bc_adjust_pane_cp_ParamLimits

0x3f6c,	// (0x0001e677) cams2_bc_adjust_pane_cp

0x39b4,	// (0x0001e0bf) cams2_bc_adjust_pane_ParamLimits

0x39b4,	// (0x0001e0bf) cams2_bc_adjust_pane

0x0c2c,	// (0x0001b337) cams2_bc_adjust_pane_g1

0x39c2,	// (0x0001e0cd) cams2_slider_pane

0x0c2c,	// (0x0001b337) cams2_slider_pane_g1

0x0c2c,	// (0x0001b337) cams2_slider_pane_g2

0x0006,

0xf5a8,	// (0x00029cb3) cams2_slider_pane_g

0x3a3d,	// (0x0001e148) calc_display_pane_ParamLimits

0x3a5b,	// (0x0001e166) calc_paper_pane_ParamLimits

0x3a77,	// (0x0001e182) grid_calc_pane_ParamLimits

0x3d2d,	// (0x0001e438) popup_clock_digital_window_t1_ParamLimits

0xd419,	// (0x00027b24) main_image_pane_t1

0x3a23,	// (0x0001e12e) aid_size_cell_calc_ParamLimits

0x3a23,	// (0x0001e12e) aid_size_cell_calc

0x3e0a,	// (0x0001e515) popup_blid_sat_info2_window_ParamLimits

0x3e0a,	// (0x0001e515) popup_blid_sat_info2_window

0xe683,	// (0x00028d8e) aid_size_cell_blid

0xe44d,	// (0x00028b58) bg_popup_window_pane_cp07

0xe6a0,	// (0x00028dab) grid_popup_blid_pane

0xe6aa,	// (0x00028db5) heading_pane_cp05_ParamLimits

0xe6aa,	// (0x00028db5) heading_pane_cp05

0xe774,	// (0x00028e7f) cell_popup_blid_pane_ParamLimits

0xe774,	// (0x00028e7f) cell_popup_blid_pane

0xe798,	// (0x00028ea3) cell_popup_blid_pane_g1

0xe7a0,	// (0x00028eab) cell_popup_blid_pane_t1

0xe44d,	// (0x00028b58) mup2_indicator_pane_ParamLimits

0xe44d,	// (0x00028b58) mup2_indicator_pane

0xbe24,	// (0x0002652f) mup2_visualizer_osc_pane

0xe52a,	// (0x00028c35) mup2_visualizer_spec_pane_ParamLimits

0xe52a,	// (0x00028c35) mup2_visualizer_spec_pane

0xbe24,	// (0x0002652f) mup2_spec_half_pane

0xbe24,	// (0x0002652f) mup2_spec_half_pane_cp

0xe7ae,	// (0x00028eb9) mup2_spec_bar_pane_ParamLimits

0xe7ae,	// (0x00028eb9) mup2_spec_bar_pane

0xc563,	// (0x00026c6e) mup2_spec_bar_pane_g1

0xe7cd,	// (0x00028ed8) mup2_spec_bar_pane_g2

0x0001,

0xf5ce,	// (0x00029cd9) mup2_spec_bar_pane_g

0xbe24,	// (0x0002652f) mup2_osc_middle_pane

0xc563,	// (0x00026c6e) mup2_visualizer_osc_pane_g1

0xbe4e,	// (0x00026559) popup_number_entry_window_t1_ParamLimits

0xbe61,	// (0x0002656c) popup_number_entry_window_t2_ParamLimits

0xbe73,	// (0x0002657e) popup_number_entry_window_t3_ParamLimits

0x5010,	// (0x0001f71b) popup_number_entry_window_t5_ParamLimits

0x5010,	// (0x0001f71b) popup_number_entry_window_t5

0xf01d,	// (0x00029728) popup_number_entry_window_t_ParamLimits

0xbe85,	// (0x00026590) text_title_cp2_ParamLimits

0x3d6c,	// (0x0001e477) aid_hotspot_pointer_text2_pane

0x3db6,	// (0x0001e4c1) main_viewer_pane_g9_ParamLimits

0x3db6,	// (0x0001e4c1) main_viewer_pane_g9

0xcac4,	// (0x000271cf) cale_month_pane_t1_ParamLimits

0xcb01,	// (0x0002720c) bg_cale_pane_ParamLimits

0xcb19,	// (0x00027224) list_cale_pane_ParamLimits

0xcb2a,	// (0x00027235) listscroll_cale_day_pane_t1

0xcb3c,	// (0x00027247) scroll_pane_cp09_ParamLimits

0x6c79,	// (0x00021384) main_mup_eq_pane_t1_ParamLimits

0x6c79,	// (0x00021384) main_mup_eq_pane_t1

0x6c93,	// (0x0002139e) main_mup_eq_pane_t2_ParamLimits

0x6c93,	// (0x0002139e) main_mup_eq_pane_t2

0x6cab,	// (0x000213b6) main_mup_eq_pane_t3_ParamLimits

0x6cab,	// (0x000213b6) main_mup_eq_pane_t3

0x6cc3,	// (0x000213ce) main_mup_eq_pane_t4_ParamLimits

0x6cc3,	// (0x000213ce) main_mup_eq_pane_t4

0x6cdb,	// (0x000213e6) main_mup_eq_pane_t5_ParamLimits

0x6cdb,	// (0x000213e6) main_mup_eq_pane_t5

0x6cf3,	// (0x000213fe) main_mup_eq_pane_t6_ParamLimits

0x6cf3,	// (0x000213fe) main_mup_eq_pane_t6

0x6d07,	// (0x00021412) main_mup_eq_pane_t7_ParamLimits

0x6d07,	// (0x00021412) main_mup_eq_pane_t7

0x6d1b,	// (0x00021426) main_mup_eq_pane_t8_ParamLimits

0x6d1b,	// (0x00021426) main_mup_eq_pane_t8

0x6d31,	// (0x0002143c) main_mup_eq_pane_t9_ParamLimits

0x6d31,	// (0x0002143c) main_mup_eq_pane_t9

0x6d49,	// (0x00021454) main_mup_eq_pane_t10_ParamLimits

0x6d49,	// (0x00021454) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x00029a87) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x00029a87) main_mup_eq_pane_t

0x6e06,	// (0x00021511) mup_equalizer_pane_cp5_ParamLimits

0x6e1c,	// (0x00021527) mup_equalizer_pane_cp6_ParamLimits

0x6e34,	// (0x0002153f) mup_equalizer_pane_cp7_ParamLimits

0x39c2,	// (0x0001e0cd) main_gallery_pane

0xe4c8,	// (0x00028bd3) smil2_volume_pane

0xe4d0,	// (0x00028bdb) smil_status_volume_pane_g1_ParamLimits

0xe4e3,	// (0x00028bee) smil_status_volume_pane_g2_ParamLimits

0x3f4a,	// (0x0001e655) smil_status_volume_pane_g3_ParamLimits

0xf527,	// (0x00029c32) smil_status_volume_pane_g_ParamLimits

0xe44d,	// (0x00028b58) bg_popup_window_pane_cp07_ParamLimits

0xe68b,	// (0x00028d96) blid_firmament_pane

0xc517,	// (0x00026c22) aid_size_cell_gallery_ParamLimits

0xc517,	// (0x00026c22) aid_size_cell_gallery

0xc517,	// (0x00026c22) grid_gallery_pane_ParamLimits

0xc517,	// (0x00026c22) grid_gallery_pane

0xd34b,	// (0x00027a56) cell_gallery_pane_ParamLimits

0xd34b,	// (0x00027a56) cell_gallery_pane

0xc186,	// (0x00026891) bg_cell_gallery_focus_pane_ParamLimits

0xc186,	// (0x00026891) bg_cell_gallery_focus_pane

0xc525,	// (0x00026c30) cell_gallery_pane_g1_ParamLimits

0xc525,	// (0x00026c30) cell_gallery_pane_g1

0xc525,	// (0x00026c30) cell_gallery_pane_g2_ParamLimits

0xc525,	// (0x00026c30) cell_gallery_pane_g2

0xc525,	// (0x00026c30) cell_gallery_pane_g3_ParamLimits

0xc525,	// (0x00026c30) cell_gallery_pane_g3

0xc533,	// (0x00026c3e) cell_gallery_pane_g4_ParamLimits

0xc533,	// (0x00026c3e) cell_gallery_pane_g4

0x0003,

0xf5d3,	// (0x00029cde) cell_gallery_pane_g_ParamLimits

0xf5d3,	// (0x00029cde) cell_gallery_pane_g

0xe7d7,	// (0x00028ee2) bg_cell_gallery_focus_pane_g1

0xe7df,	// (0x00028eea) bg_cell_gallery_focus_pane_g2

0xe7e7,	// (0x00028ef2) bg_cell_gallery_focus_pane_g3

0xe7ef,	// (0x00028efa) bg_cell_gallery_focus_pane_g4

0xe7f7,	// (0x00028f02) bg_cell_gallery_focus_pane_g5

0xe7ff,	// (0x00028f0a) bg_cell_gallery_focus_pane_g6

0xe807,	// (0x00028f12) bg_cell_gallery_focus_pane_g7

0xe80f,	// (0x00028f1a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5dc,	// (0x00029ce7) bg_cell_gallery_focus_pane_g

0xe817,	// (0x00028f22) aid_firma_cardinal

0xe82b,	// (0x00028f36) blid_firmament_pane_t1

0xe842,	// (0x00028f4d) blid_firmament_pane_t2

0xe859,	// (0x00028f64) blid_firmament_pane_t3

0xe870,	// (0x00028f7b) blid_firmament_pane_t4

0x0003,

0xf5ed,	// (0x00029cf8) blid_firmament_pane_t

0xe887,	// (0x00028f92) blid_sat_info_pane

0xc563,	// (0x00026c6e) blid_sat_info_pane_g1

0xc563,	// (0x00026c6e) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00029797) blid_sat_info_pane_g

0xe897,	// (0x00028fa2) blid_sat_info_pane_t1

0xe8a5,	// (0x00028fb0) smil2_volume_content_pane

0xe8ae,	// (0x00028fb9) smil2_volume_pane_g1

0xc72b,	// (0x00026e36) smil2_volume_content_pane_g1

0xe8b6,	// (0x00028fc1) smil2_volume_content_pane_g2

0xe8bf,	// (0x00028fca) smil2_volume_content_pane_g3

0xe8c8,	// (0x00028fd3) smil2_volume_content_pane_g4

0xe8d1,	// (0x00028fdc) smil2_volume_content_pane_g5

0xe8da,	// (0x00028fe5) smil2_volume_content_pane_g6

0xe8e3,	// (0x00028fee) smil2_volume_content_pane_g7

0xe8ec,	// (0x00028ff7) smil2_volume_content_pane_g8

0xe8f5,	// (0x00029000) smil2_volume_content_pane_g9

0xe8fe,	// (0x00029009) smil2_volume_content_pane_g10

0x0009,

0xf5f6,	// (0x00029d01) smil2_volume_content_pane_g

0x5461,	// (0x0001fb6c) cale_week_day_heading_pane_t1_ParamLimits

0x547c,	// (0x0001fb87) cale_week_day_heading_pane_t2_ParamLimits

0x5497,	// (0x0001fba2) cale_week_day_heading_pane_t3_ParamLimits

0x54b2,	// (0x0001fbbd) cale_week_day_heading_pane_t4_ParamLimits

0x54cd,	// (0x0001fbd8) cale_week_day_heading_pane_t5_ParamLimits

0x54e8,	// (0x0001fbf3) cale_week_day_heading_pane_t6_ParamLimits

0x5503,	// (0x0001fc0e) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0002982f) cale_week_day_heading_pane_t_ParamLimits

0xc780,	// (0x00026e8b) bg_cale_side_pane_ParamLimits

0x3b8f,	// (0x0001e29a) cale_week_time_pane_t1_ParamLimits

0x3ba9,	// (0x0001e2b4) cale_week_time_pane_t2_ParamLimits

0x3bc3,	// (0x0001e2ce) cale_week_time_pane_t3_ParamLimits

0x3bdd,	// (0x0001e2e8) cale_week_time_pane_t4_ParamLimits

0x3bf7,	// (0x0001e302) cale_week_time_pane_t5_ParamLimits

0x3c11,	// (0x0001e31c) cale_week_time_pane_t6_ParamLimits

0x3c31,	// (0x0001e33c) cale_week_time_pane_t7_ParamLimits

0x3c53,	// (0x0001e35e) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0002983e) cale_week_time_pane_t_ParamLimits

0x551e,	// (0x0001fc29) cell_cale_week_pane_g2_ParamLimits

0xc780,	// (0x00026e8b) bg_cale_side_pane_cp01_ParamLimits

0x6674,	// (0x00020d7f) cale_month_week_pane_t1_ParamLimits

0x668d,	// (0x00020d98) cale_month_week_pane_t2_ParamLimits

0x66a6,	// (0x00020db1) cale_month_week_pane_t3_ParamLimits

0x66bf,	// (0x00020dca) cale_month_week_pane_t4_ParamLimits

0x66da,	// (0x00020de5) cale_month_week_pane_t5_ParamLimits

0x66fb,	// (0x00020e06) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0002990c) cale_month_week_pane_t_ParamLimits

0x3c81,	// (0x0001e38c) cell_cale_month_pane_g1_ParamLimits

0x39c2,	// (0x0001e0cd) main_cale_event_viewer_pane

0xbe24,	// (0x0002652f) listscroll_cale_event_viewer_pane

0xe907,	// (0x00029012) list_cale_ev_pane

0xe90f,	// (0x0002901a) scroll_pane_cp023

0xe91b,	// (0x00029026) field_cale_ev_pane_ParamLimits

0xe91b,	// (0x00029026) field_cale_ev_pane

0xe939,	// (0x00029044) field_cale_ev_content_pane_ParamLimits

0xe939,	// (0x00029044) field_cale_ev_content_pane

0xe945,	// (0x00029050) field_cale_ev_pane_g1_ParamLimits

0xe945,	// (0x00029050) field_cale_ev_pane_g1

0xe951,	// (0x0002905c) field_cale_ev_pane_g2_ParamLimits

0xe951,	// (0x0002905c) field_cale_ev_pane_g2

0xe969,	// (0x00029074) field_cale_ev_pane_g3_ParamLimits

0xe969,	// (0x00029074) field_cale_ev_pane_g3

0x0002,

0xf60b,	// (0x00029d16) field_cale_ev_pane_g_ParamLimits

0xf60b,	// (0x00029d16) field_cale_ev_pane_g

0xe981,	// (0x0002908c) field_cale_ev_pane_t1_ParamLimits

0xe981,	// (0x0002908c) field_cale_ev_pane_t1

0xe998,	// (0x000290a3) field_cale_ev_content_pane_t1_ParamLimits

0xe998,	// (0x000290a3) field_cale_ev_content_pane_t1

0xd2e4,	// (0x000279ef) bg_button_pane_cp01

0x51ec,	// (0x0001f8f7) listscroll_cale_week_pane_ParamLimits

0x3b86,	// (0x0001e291) popup_toolbar_window_cp01

0xc751,	// (0x00026e5c) listscroll_cale_week_pane_t1_ParamLimits

0x51ec,	// (0x0001f8f7) listscroll_cale_day_pane_ParamLimits

0xc722,	// (0x00026e2d) popup_toolbar_window_cp02

0xcb2a,	// (0x00027235) listscroll_cale_day_pane_t1_ParamLimits

0x51ec,	// (0x0001f8f7) main_cale_month_pane_ParamLimits

0x3f0d,	// (0x0001e618) popup_toolbar_window_cp03_ParamLimits

0x3f0d,	// (0x0001e618) popup_toolbar_window_cp03

0x715d,	// (0x00021868) main_image_pane_g2_ParamLimits

0x715d,	// (0x00021868) main_image_pane_g2

0x7169,	// (0x00021874) main_image_pane_g3_ParamLimits

0x7169,	// (0x00021874) main_image_pane_g3

0x0002,

0xf40e,	// (0x00029b19) main_image_pane_g_ParamLimits

0xf40e,	// (0x00029b19) main_image_pane_g

0xd419,	// (0x00027b24) main_image_pane_t1_ParamLimits

0x7175,	// (0x00021880) main_image_pane_t2_ParamLimits

0x7175,	// (0x00021880) main_image_pane_t2

0x7187,	// (0x00021892) main_image_pane_t3_ParamLimits

0x7187,	// (0x00021892) main_image_pane_t3

0x7199,	// (0x000218a4) main_image_pane_t4_ParamLimits

0x7199,	// (0x000218a4) main_image_pane_t4

0x0003,

0xf415,	// (0x00029b20) main_image_pane_t_ParamLimits

0xf415,	// (0x00029b20) main_image_pane_t

0x71ab,	// (0x000218b6) popup_image_details_window_cp01

0x71b5,	// (0x000218c0) popup_toobar_trans_pane_cp01_ParamLimits

0x71b5,	// (0x000218c0) popup_toobar_trans_pane_cp01

0x3e5d,	// (0x0001e568) popup_image_details_window_ParamLimits

0x3e5d,	// (0x0001e568) popup_image_details_window

0x3e6b,	// (0x0001e576) popup_image_focus_window

0x39b4,	// (0x0001e0bf) camera2_autofocus_pane_ParamLimits

0x39b4,	// (0x0001e0bf) camera2_autofocus_pane

0xbe24,	// (0x0002652f) bg_popup_sub_pane_cp06

0xe9b6,	// (0x000290c1) popup_image_focus_window_g1

0xe9be,	// (0x000290c9) popup_image_focus_window_g2

0xe9c6,	// (0x000290d1) popup_image_focus_window_g3

0xe9ce,	// (0x000290d9) popup_image_focus_window_g4

0x0003,

0xf612,	// (0x00029d1d) popup_image_focus_window_g

0xe9d6,	// (0x000290e1) popup_image_focus_window_t1

0xe9e4,	// (0x000290ef) popup_image_focus_window_t2

0xe9f4,	// (0x000290ff) popup_image_focus_window_t3

0x0002,

0xf61b,	// (0x00029d26) popup_image_focus_window_t

0xc525,	// (0x00026c30) camera2_autofocus_pane_g1

0xc186,	// (0x00026891) bg_tb_trans_pane_cp01

0xea02,	// (0x0002910d) popup_image_details_window_g1

0xea15,	// (0x00029120) popup_image_details_window_g2

0x0002,

0xf62d,	// (0x00029d38) popup_image_details_window_g

0xea3e,	// (0x00029149) popup_image_details_window_t1

0xea50,	// (0x0002915b) popup_image_details_window_t2

0xea69,	// (0x00029174) popup_image_details_window_t3

0xea7d,	// (0x00029188) popup_image_details_window_t4

0xea98,	// (0x000291a3) popup_image_details_window_t5

0x0004,

0xf634,	// (0x00029d3f) popup_image_details_window_t

0xc5ad,	// (0x00026cb8) bg_calc_paper_pane_ParamLimits

0x39c2,	// (0x0001e0cd) grid_highlight_pane_cp013

0x3aa3,	// (0x0001e1ae) list_calc_pane_ParamLimits

0x3ab5,	// (0x0001e1c0) scroll_pane_cp024

0xc5c1,	// (0x00026ccc) bg_calc_display_pane_ParamLimits

0x3abd,	// (0x0001e1c8) calc_display_pane_t1_ParamLimits

0x3ad2,	// (0x0001e1dd) calc_display_pane_t2_ParamLimits

0x3ae7,	// (0x0001e1f2) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x000297af) calc_display_pane_t_ParamLimits

0x3b50,	// (0x0001e25b) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x000297cc) cell_calc_pane_g

0x3b59,	// (0x0001e264) cell_calc_pane_t1

0xc616,	// (0x00026d21) grid_highlight_pane_cp02_ParamLimits

0xc62c,	// (0x00026d37) toolbar_button_pane_cp01_ParamLimits

0xc62c,	// (0x00026d37) toolbar_button_pane_cp01

0xd45e,	// (0x00027b69) temp_image_control_pane_ParamLimits

0xd45e,	// (0x00027b69) temp_image_control_pane

0x3dd9,	// (0x0001e4e4) main_mp3_pane

0xeab2,	// (0x000291bd) temp_image_control_pane_g1_ParamLimits

0xeab2,	// (0x000291bd) temp_image_control_pane_g1

0xeac0,	// (0x000291cb) temp_image_control_pane_g2_ParamLimits

0xeac0,	// (0x000291cb) temp_image_control_pane_g2

0xead2,	// (0x000291dd) temp_image_control_pane_g3_ParamLimits

0xead2,	// (0x000291dd) temp_image_control_pane_g3

0x7939,	// (0x00022044) temp_image_control_pane_g4_ParamLimits

0x7939,	// (0x00022044) temp_image_control_pane_g4

0x0003,

0xf63f,	// (0x00029d4a) temp_image_control_pane_g_ParamLimits

0xf63f,	// (0x00029d4a) temp_image_control_pane_g

0xeab2,	// (0x000291bd) main_mp3_pane_g1

0x794a,	// (0x00022055) main_mp3_pane_g2

0x0007,

0xf648,	// (0x00029d53) main_mp3_pane_g

0xeb07,	// (0x00029212) main_mp3_pane_t1

0xc533,	// (0x00026c3e) main_camera_pane_g8_ParamLimits

0xc533,	// (0x00026c3e) main_camera_pane_g8

0x56bb,	// (0x0001fdc6) main_video_pane_g7_ParamLimits

0x56bb,	// (0x0001fdc6) main_video_pane_g7

0x3f7a,	// (0x0001e685) main_camera2_pane_t7_ParamLimits

0x3f7a,	// (0x0001e685) main_camera2_pane_t7

0xc8e2,	// (0x00026fed) scroll_pane_cp025_ParamLimits

0xc8e2,	// (0x00026fed) scroll_pane_cp025

0xc8f6,	// (0x00027001) scroll_pane_cp026_ParamLimits

0xc8f6,	// (0x00027001) scroll_pane_cp026

0xc905,	// (0x00027010) wml_content_pane_ParamLimits

0x39c2,	// (0x0001e0cd) main_touch_calib_pane

0x79ee,	// (0x000220f9) main_touch_calib_pane_g1

0x79fa,	// (0x00022105) main_touch_calib_pane_g2

0x7a06,	// (0x00022111) main_touch_calib_pane_g3

0x7a12,	// (0x0002211d) main_touch_calib_pane_g4

0x0003,

0xf666,	// (0x00029d71) main_touch_calib_pane_g

0x7a1e,	// (0x00022129) main_touch_calib_pane_t1

0x7a37,	// (0x00022142) main_touch_calib_pane_t2

0x0004,

0xf66f,	// (0x00029d7a) main_touch_calib_pane_t

0xd025,	// (0x00027730) mup_progress_pane_cp02

0xd05a,	// (0x00027765) navi_pane_g1

0xd115,	// (0x00027820) navi_pane_mp_t3

0x3dd9,	// (0x0001e4e4) main_mp3_pane_ParamLimits

0x76b7,	// (0x00021dc2) navi_pane_ParamLimits

0xeab2,	// (0x000291bd) main_mp3_pane_g1_ParamLimits

0x794a,	// (0x00022055) main_mp3_pane_g2_ParamLimits

0x7956,	// (0x00022061) main_mp3_pane_g3_ParamLimits

0x7956,	// (0x00022061) main_mp3_pane_g3

0x7962,	// (0x0002206d) main_mp3_pane_g4_ParamLimits

0x7962,	// (0x0002206d) main_mp3_pane_g4

0xc525,	// (0x00026c30) main_mp3_pane_g5_ParamLimits

0xc525,	// (0x00026c30) main_mp3_pane_g5

0xeae2,	// (0x000291ed) main_mp3_pane_g6_ParamLimits

0xeae2,	// (0x000291ed) main_mp3_pane_g6

0xeaef,	// (0x000291fa) main_mp3_pane_g7_ParamLimits

0xeaef,	// (0x000291fa) main_mp3_pane_g7

0xeafb,	// (0x00029206) main_mp3_pane_g8_ParamLimits

0xeafb,	// (0x00029206) main_mp3_pane_g8

0xf648,	// (0x00029d53) main_mp3_pane_g_ParamLimits

0x796e,	// (0x00022079) main_mp3_pane_t2

0x797e,	// (0x00022089) main_mp3_pane_t3

0xeb15,	// (0x00029220) main_mp3_pane_t4

0xeb23,	// (0x0002922e) main_mp3_pane_t5

0x0005,

0xf659,	// (0x00029d64) main_mp3_pane_t

0xeb31,	// (0x0002923c) mup_progress_pane_cp01

0x377a,	// (0x0001de85) aid_zoom_text_secondary2

0xe907,	// (0x00029012) list_cale_ev2_pane

0xe90f,	// (0x0002901a) scroll_pane_cp023_ParamLimits

0x7a92,	// (0x0002219d) field_cale_ev2_pane_ParamLimits

0x7a92,	// (0x0002219d) field_cale_ev2_pane

0xeb39,	// (0x00029244) field_cale_ev2_pane_g1_ParamLimits

0xeb39,	// (0x00029244) field_cale_ev2_pane_g1

0xeb45,	// (0x00029250) field_cale_ev2_pane_g2_ParamLimits

0xeb45,	// (0x00029250) field_cale_ev2_pane_g2

0xeb5d,	// (0x00029268) field_cale_ev2_pane_g3_ParamLimits

0xeb5d,	// (0x00029268) field_cale_ev2_pane_g3

0x0003,

0xf67a,	// (0x00029d85) field_cale_ev2_pane_g_ParamLimits

0xf67a,	// (0x00029d85) field_cale_ev2_pane_g

0xeb81,	// (0x0002928c) field_cale_ev2_pane_t1_ParamLimits

0xeb81,	// (0x0002928c) field_cale_ev2_pane_t1

0xeb98,	// (0x000292a3) field_cale_ev2_pane_t2_ParamLimits

0xeb98,	// (0x000292a3) field_cale_ev2_pane_t2

0x0001,

0xf683,	// (0x00029d8e) field_cale_ev2_pane_t_ParamLimits

0xf683,	// (0x00029d8e) field_cale_ev2_pane_t

0x7073,	// (0x0002177e) main_postcard_pane_g5_ParamLimits

0x7073,	// (0x0002177e) main_postcard_pane_g5

0x7081,	// (0x0002178c) main_postcard_pane_g6_ParamLimits

0x7081,	// (0x0002178c) main_postcard_pane_g6

0xc517,	// (0x00026c22) camera2_autofocus_pane_cp_ParamLimits

0xc517,	// (0x00026c22) camera2_autofocus_pane_cp

0x3dd9,	// (0x0001e4e4) main_mup3_pane

0x7afb,	// (0x00022206) main_mup3_pane_g1_ParamLimits

0x7afb,	// (0x00022206) main_mup3_pane_g1

0x7b4a,	// (0x00022255) main_mup3_pane_g2_ParamLimits

0x7b4a,	// (0x00022255) main_mup3_pane_g2

0x7bad,	// (0x000222b8) main_mup3_pane_g3_ParamLimits

0x7bad,	// (0x000222b8) main_mup3_pane_g3

0x7c0c,	// (0x00022317) main_mup3_pane_g4_ParamLimits

0x7c0c,	// (0x00022317) main_mup3_pane_g4

0x7c6b,	// (0x00022376) main_mup3_pane_g5_ParamLimits

0x7c6b,	// (0x00022376) main_mup3_pane_g5

0x7cca,	// (0x000223d5) main_mup3_pane_g6_ParamLimits

0x7cca,	// (0x000223d5) main_mup3_pane_g6

0xc533,	// (0x00026c3e) main_mup3_pane_g7_ParamLimits

0xc533,	// (0x00026c3e) main_mup3_pane_g7

0x0007,

0xf693,	// (0x00029d9e) main_mup3_pane_g_ParamLimits

0xf693,	// (0x00029d9e) main_mup3_pane_g

0x7d3a,	// (0x00022445) main_mup3_pane_t1_ParamLimits

0x7d3a,	// (0x00022445) main_mup3_pane_t1

0x7e1b,	// (0x00022526) main_mup3_pane_t2_ParamLimits

0x7e1b,	// (0x00022526) main_mup3_pane_t2

0x7efc,	// (0x00022607) main_mup3_pane_t4_ParamLimits

0x7efc,	// (0x00022607) main_mup3_pane_t4

0x7f0e,	// (0x00022619) main_mup3_pane_t5_ParamLimits

0x7f0e,	// (0x00022619) main_mup3_pane_t5

0x7fd4,	// (0x000226df) main_mup3_pane_t6_ParamLimits

0x7fd4,	// (0x000226df) main_mup3_pane_t6

0x0005,

0xf6a4,	// (0x00029daf) main_mup3_pane_t_ParamLimits

0xf6a4,	// (0x00029daf) main_mup3_pane_t

0x8071,	// (0x0002277c) mup3_progress_pane_ParamLimits

0x8071,	// (0x0002277c) mup3_progress_pane

0x055a,	// (0x0001ac65) popup_mup3_control_window_ParamLimits

0x055a,	// (0x0001ac65) popup_mup3_control_window

0xebad,	// (0x000292b8) popup_mup3_text_window

0x80d4,	// (0x000227df) mup3_progress_pane_t1

0x80f3,	// (0x000227fe) mup3_progress_pane_t2

0xebb5,	// (0x000292c0) mup3_progress_pane_t3

0x0002,

0xf6b1,	// (0x00029dbc) mup3_progress_pane_t

0xebd2,	// (0x000292dd) mup_progress_pane_cp03

0xebe2,	// (0x000292ed) bg_tb_trans_pane_cp04

0xebe2,	// (0x000292ed) mup3_volume_pane

0xebea,	// (0x000292f5) popup_mup3_control_window_g1

0xebea,	// (0x000292f5) mup3_volume_pane_g1

0xebea,	// (0x000292f5) mup3_volume_pane_g2

0xebea,	// (0x000292f5) mup3_volume_pane_g3

0x0002,

0xf6b8,	// (0x00029dc3) mup3_volume_pane_g

0xbe24,	// (0x0002652f) bg_tb_trans_pane_cp03

0xebf2,	// (0x000292fd) popup_mup3_text_window_g1

0xebfa,	// (0x00029305) popup_mup3_text_window_t1

0xc609,	// (0x00026d14) list_calc_item_pane_g1_ParamLimits

0xe601,	// (0x00028d0c) mup_volume_pane_cp_g1

0x7a50,	// (0x0002215b) main_touch_calib_pane_t3

0x7a66,	// (0x00022171) main_touch_calib_pane_t4

0x7a7c,	// (0x00022187) main_touch_calib_pane_t5

0x3732,	// (0x0001de3d) aid_cell_size_toolbar2

0x373a,	// (0x0001de45) aid_popup3_width_pane

0x377a,	// (0x0001de85) aid_zoom_text_msg_primary

0x55c7,	// (0x0001fcd2) vorec_t7

0xc5cd,	// (0x00026cd8) bg_calc_paper_pane_g1_ParamLimits

0xc5d9,	// (0x00026ce4) bg_calc_paper_pane_g2_ParamLimits

0xc5e5,	// (0x00026cf0) bg_calc_paper_pane_g3_ParamLimits

0xc5f1,	// (0x00026cfc) bg_calc_paper_pane_g4_ParamLimits

0xc5fd,	// (0x00026d08) bg_calc_paper_pane_g5_ParamLimits

0x507f,	// (0x0001f78a) bg_calc_paper_pane_g6_ParamLimits

0x5090,	// (0x0001f79b) bg_calc_paper_pane_g7_ParamLimits

0x50a1,	// (0x0001f7ac) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x000297b6) bg_calc_paper_pane_g_ParamLimits

0x50b2,	// (0x0001f7bd) calc_bg_paper_pane_g9_ParamLimits

0xc517,	// (0x00026c22) image_qvga_pane_ParamLimits

0xc517,	// (0x00026c22) image_qvga_pane

0xc4aa,	// (0x00026bb5) bg_popup_sub_pane_cp04_ParamLimits

0xd381,	// (0x00027a8c) popup_mup_playback_window_g1_ParamLimits

0xd38d,	// (0x00027a98) popup_mup_playback_window_t1_ParamLimits

0xd3a2,	// (0x00027aad) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x00029b14) popup_mup_playback_window_t_ParamLimits

0xc525,	// (0x00026c30) main_mup2_pane_g3_ParamLimits

0xc525,	// (0x00026c30) main_mup2_pane_g3

0x587c,	// (0x0001ff87) popup_toolbar_window_cp04

0xd73a,	// (0x00027e45) popup_call2_audio_second_window_g3_ParamLimits

0xd73a,	// (0x00027e45) popup_call2_audio_second_window_g3

0xdb52,	// (0x0002825d) popup_call2_audio_first_window_g4_ParamLimits

0xdb52,	// (0x0002825d) popup_call2_audio_first_window_g4

0xe179,	// (0x00028884) popup_call2_audio_in_window_g4_ParamLimits

0xe179,	// (0x00028884) popup_call2_audio_in_window_g4

0x7150,	// (0x0002185b) aid_area_sk_bg_cut_ParamLimits

0x7150,	// (0x0002185b) aid_area_sk_bg_cut

0xd3b7,	// (0x00027ac2) aid_area_sk_bg_cut_2_ParamLimits

0xd3b7,	// (0x00027ac2) aid_area_sk_bg_cut_2

0xbe24,	// (0x0002652f) aid_placing_details_win

0xbe24,	// (0x0002652f) aid_placing_details_win_2

0xc525,	// (0x00026c30) camera2_autofocus_pane_g1_ParamLimits

0x395a,	// (0x0001e065) popup_fixed_preview_cale_window_ParamLimits

0x395a,	// (0x0001e065) popup_fixed_preview_cale_window

0xd193,	// (0x0002789e) navi_slider_pane_g3

0xd19c,	// (0x000278a7) navi_slider_pane_g4

0xd1a5,	// (0x000278b0) navi_slider_pane_g5

0xd193,	// (0x0002789e) navi_slider_pane_g6

0x3d53,	// (0x0001e45e) navi_slider_pane_g7

0xd2b1,	// (0x000279bc) mup_scale_pane_g3

0xd2ba,	// (0x000279c5) mup_scale_pane_g4

0xd2c3,	// (0x000279ce) mup_scale_pane_g5

0x6e4c,	// (0x00021557) mup_scale_pane_g6

0x6e55,	// (0x00021560) mup_scale_pane_g7

0x0c2c,	// (0x0001b337) cams2_slider_pane_g3

0x0c2c,	// (0x0001b337) cams2_slider_pane_g4

0x0c2c,	// (0x0001b337) cams2_slider_pane_g5

0x0c2c,	// (0x0001b337) cams2_slider_pane_g6

0x0c2c,	// (0x0001b337) cams2_slider_pane_g7

0xc563,	// (0x00026c6e) camera2_autofocus_pane_cp_g1

0xe441,	// (0x00028b4c) bg_popup_preview_window_pane_cp02_ParamLimits

0xe441,	// (0x00028b4c) bg_popup_preview_window_pane_cp02

0xec08,	// (0x00029313) list_fp_cale_pane_ParamLimits

0xec08,	// (0x00029313) list_fp_cale_pane

0xec14,	// (0x0002931f) popup_fixed_preview_cale_window_t1_ParamLimits

0xec14,	// (0x0002931f) popup_fixed_preview_cale_window_t1

0x8112,	// (0x0002281d) popup_fixed_preview_cale_window_t2_ParamLimits

0x8112,	// (0x0002281d) popup_fixed_preview_cale_window_t2

0x8127,	// (0x00022832) popup_fixed_preview_cale_window_t3_ParamLimits

0x8127,	// (0x00022832) popup_fixed_preview_cale_window_t3

0x0002,

0xf6bf,	// (0x00029dca) popup_fixed_preview_cale_window_t_ParamLimits

0xf6bf,	// (0x00029dca) popup_fixed_preview_cale_window_t

0x813c,	// (0x00022847) list_single_fp_cale_pane_ParamLimits

0x813c,	// (0x00022847) list_single_fp_cale_pane

0xec32,	// (0x0002933d) list_single_fp_cale_pane_g1_ParamLimits

0xec32,	// (0x0002933d) list_single_fp_cale_pane_g1

0xec3e,	// (0x00029349) list_single_fp_cale_pane_g2_ParamLimits

0xec3e,	// (0x00029349) list_single_fp_cale_pane_g2

0x0002,

0xf6c6,	// (0x00029dd1) list_single_fp_cale_pane_g_ParamLimits

0xf6c6,	// (0x00029dd1) list_single_fp_cale_pane_g

0xec57,	// (0x00029362) list_single_fp_cale_pane_t1_ParamLimits

0xec57,	// (0x00029362) list_single_fp_cale_pane_t1

0xec69,	// (0x00029374) list_single_fp_cale_pane_t2_ParamLimits

0xec69,	// (0x00029374) list_single_fp_cale_pane_t2

0x0001,

0xf6cd,	// (0x00029dd8) list_single_fp_cale_pane_t_ParamLimits

0xf6cd,	// (0x00029dd8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x39c2,	// (0x0001e0cd) main_dialer_pane

0xbe24,	// (0x0002652f) aid_cell_size_keypad

0xbe24,	// (0x0002652f) dialer_ne_pane

0xbe24,	// (0x0002652f) grid_dialer_command_1_pane

0xbe24,	// (0x0002652f) grid_dialer_command_2_pane

0xbe24,	// (0x0002652f) grid_dialer_keypad_pane

0xe44d,	// (0x00028b58) bg_popup_call_pane_cp06_ParamLimits

0xe44d,	// (0x00028b58) bg_popup_call_pane_cp06

0xe44d,	// (0x00028b58) dialer_ne_clear_pane_ParamLimits

0xe44d,	// (0x00028b58) dialer_ne_clear_pane

0xc563,	// (0x00026c6e) dialer_ne_pane_g1

0xc581,	// (0x00026c8c) dialer_ne_pane_t1_ParamLimits

0xc581,	// (0x00026c8c) dialer_ne_pane_t1

0xeddd,	// (0x000294e8) dialer_ne_pane_t2_ParamLimits

0xeddd,	// (0x000294e8) dialer_ne_pane_t2

0x814f,	// (0x0002285a) dialer_ne_pane_t3_ParamLimits

0x814f,	// (0x0002285a) dialer_ne_pane_t3

0x0002,

0xf6d2,	// (0x00029ddd) dialer_ne_pane_t_ParamLimits

0xf6d2,	// (0x00029ddd) dialer_ne_pane_t

0x814f,	// (0x0002285a) dialer_ne_pane_t3_copy1_ParamLimits

0x814f,	// (0x0002285a) dialer_ne_pane_t3_copy1

0xec9c,	// (0x000293a7) cell_dialer_keypad_pane_ParamLimits

0xec9c,	// (0x000293a7) cell_dialer_keypad_pane

0xc186,	// (0x00026891) cell_dialer_command_1_pane_ParamLimits

0xc186,	// (0x00026891) cell_dialer_command_1_pane

0xecb3,	// (0x000293be) cell_dialer_command_2_pane_ParamLimits

0xecb3,	// (0x000293be) cell_dialer_command_2_pane

0xc186,	// (0x00026891) bg_button_pane_cp02_ParamLimits

0xc186,	// (0x00026891) bg_button_pane_cp02

0xc525,	// (0x00026c30) cell_dialer_keypad_pane_g1_ParamLimits

0xc525,	// (0x00026c30) cell_dialer_keypad_pane_g1

0xc186,	// (0x00026891) bg_button_pane_cp03_ParamLimits

0xc186,	// (0x00026891) bg_button_pane_cp03

0xc525,	// (0x00026c30) cell_dialer_command_1_pane_g1_ParamLimits

0xc525,	// (0x00026c30) cell_dialer_command_1_pane_g1

0xbe24,	// (0x0002652f) bg_button_pane_cp04

0xc563,	// (0x00026c6e) cell_dialer_command_2_pane_g1

0xbe24,	// (0x0002652f) bg_button_pane_cp06

0xc563,	// (0x00026c6e) dialer_ne_clear_pane_g1

0xd066,	// (0x00027771) navi_pane_g2

0xd094,	// (0x0002779f) navi_pane_g3

0x0002,

0xf311,	// (0x00029a1c) navi_pane_g

0xd123,	// (0x0002782e) navi_pane_mv_g2

0xd14a,	// (0x00027855) navi_pane_mv_g5

0x6c2a,	// (0x00021335) navi_pane_mv_t1

0xc5c1,	// (0x00026ccc) main_clock2_pane

0xc517,	// (0x00026c22) main_clock2_list_pane_ParamLimits

0xc517,	// (0x00026c22) main_clock2_list_pane

0x81c5,	// (0x000228d0) main_clock2_pane_t1_ParamLimits

0x81c5,	// (0x000228d0) main_clock2_pane_t1

0x81f3,	// (0x000228fe) main_clock2_pane_t2_ParamLimits

0x81f3,	// (0x000228fe) main_clock2_pane_t2

0x0004,

0xf6de,	// (0x00029de9) main_clock2_pane_t_ParamLimits

0xf6de,	// (0x00029de9) main_clock2_pane_t

0x8258,	// (0x00022963) popup_clock_analogue_window_cp03_ParamLimits

0x8258,	// (0x00022963) popup_clock_analogue_window_cp03

0x8276,	// (0x00022981) popup_clock_digital_window_cp02_ParamLimits

0x8276,	// (0x00022981) popup_clock_digital_window_cp02

0x82b6,	// (0x000229c1) main_clock2_list_single_pane_ParamLimits

0x82b6,	// (0x000229c1) main_clock2_list_single_pane

0xc7d2,	// (0x00026edd) list_highlight_pane_cp05

0xecf6,	// (0x00029401) main_clock2_list_single_pane_t1

0x587c,	// (0x0001ff87) popup_toolbar_window_cp04_ParamLimits

0xc533,	// (0x00026c3e) camera2_autofocus_pane_g2_ParamLimits

0xc533,	// (0x00026c3e) camera2_autofocus_pane_g2

0xc533,	// (0x00026c3e) camera2_autofocus_pane_g3_ParamLimits

0xc533,	// (0x00026c3e) camera2_autofocus_pane_g3

0xc533,	// (0x00026c3e) camera2_autofocus_pane_g4_ParamLimits

0xc533,	// (0x00026c3e) camera2_autofocus_pane_g4

0xc533,	// (0x00026c3e) camera2_autofocus_pane_g5_ParamLimits

0xc533,	// (0x00026c3e) camera2_autofocus_pane_g5

0x0004,

0xf622,	// (0x00029d2d) camera2_autofocus_pane_g_ParamLimits

0xf622,	// (0x00029d2d) camera2_autofocus_pane_g

0x7abc,	// (0x000221c7) camera2_autofocus_pane_cp_g2

0x7ac4,	// (0x000221cf) camera2_autofocus_pane_cp_g3

0x7acc,	// (0x000221d7) camera2_autofocus_pane_cp_g4

0x7ad4,	// (0x000221df) camera2_autofocus_pane_cp_g5

0x0004,

0xf688,	// (0x00029d93) camera2_autofocus_pane_cp_g

0xbe24,	// (0x0002652f) popup_dialer_spcha_window

0xbe24,	// (0x0002652f) bg_popup_sub_pane_cp07

0xbe24,	// (0x0002652f) list_spcha_pane

0xed04,	// (0x0002940f) list_single_spcha_pane_ParamLimits

0xed04,	// (0x0002940f) list_single_spcha_pane

0xbe24,	// (0x0002652f) list_highlight_pane_cp06

0xccbb,	// (0x000273c6) list_single_spcha_pane_t1

0xdf23,	// (0x0002862e) popup_call2_audio_out_window_g4_ParamLimits

0xdf23,	// (0x0002862e) popup_call2_audio_out_window_g4

0x39c2,	// (0x0001e0cd) main_imed2_pane

0x3e73,	// (0x0001e57e) popup_imed_adjust2_window

0x3e86,	// (0x0001e591) popup_imed_trans_window_ParamLimits

0x3e86,	// (0x0001e591) popup_imed_trans_window

0xe6d6,	// (0x00028de1) popup_blid_sat_info2_window_t1

0xe6e4,	// (0x00028def) popup_blid_sat_info2_window_t2

0x000a,

0xf5b7,	// (0x00029cc2) popup_blid_sat_info2_window_t

0x82c8,	// (0x000229d3) aid_size_cell_colour_35

0x82e2,	// (0x000229ed) aid_size_cell_colour_112

0x82f9,	// (0x00022a04) aid_size_cell_effect

0xc186,	// (0x00026891) bg_tb_trans_pane_cp02

0xce4a,	// (0x00027555) heading_imed_pane

0x8313,	// (0x00022a1e) listscroll_imed_pane

0xed16,	// (0x00029421) heading_imed_pane_g1

0xed1e,	// (0x00029429) heading_imed_pane_t1

0xed2c,	// (0x00029437) grid_imed_colour_35_pane_ParamLimits

0xed2c,	// (0x00029437) grid_imed_colour_35_pane

0x831f,	// (0x00022a2a) grid_imed_effect_pane

0xed44,	// (0x0002944f) list_imed_aspect_pane

0x832f,	// (0x00022a3a) scroll_pane_cp027_ParamLimits

0x832f,	// (0x00022a3a) scroll_pane_cp027

0x833b,	// (0x00022a46) cell_imed_effect_pane_ParamLimits

0x833b,	// (0x00022a46) cell_imed_effect_pane

0xed4c,	// (0x00029457) cell_imed_colour_pane_ParamLimits

0xed4c,	// (0x00029457) cell_imed_colour_pane

0xed8e,	// (0x00029499) cell_imed_colour_pane_g1_ParamLimits

0xed8e,	// (0x00029499) cell_imed_colour_pane_g1

0xed9f,	// (0x000294aa) hgihlgiht_grid_pane_cp016_ParamLimits

0xed9f,	// (0x000294aa) hgihlgiht_grid_pane_cp016

0x8353,	// (0x00022a5e) cell_imed_effect_pane_g1

0x835b,	// (0x00022a66) grid_highlight_pane_cp017

0xedb0,	// (0x000294bb) list_imed_single_pane_ParamLimits

0xedb0,	// (0x000294bb) list_imed_single_pane

0xbe24,	// (0x0002652f) list_highlight_pane_cp07

0xedc5,	// (0x000294d0) list_imed_aspect_pane_comp1_t1

0xd34b,	// (0x00027a56) bg_tb_trans_pane_cp05

0xee04,	// (0x0002950f) popup_imed_adjust2_window_g1

0xee2b,	// (0x00029536) popup_imed_adjust2_window_t1

0xee43,	// (0x0002954e) slider_imed_adjust_pane

0xee57,	// (0x00029562) slider_imed_adjust_pane_g1

0xee67,	// (0x00029572) slider_imed_adjust_pane_g2

0xee77,	// (0x00029582) slider_imed_adjust_pane_g3

0xee88,	// (0x00029593) slider_imed_adjust_pane_g4

0x0003,

0xf6fb,	// (0x00029e06) slider_imed_adjust_pane_g

0x8364,	// (0x00022a6f) aid_size_cell_clipart2

0x8370,	// (0x00022a7b) grid_imed_clipart_pane

0xd2d4,	// (0x000279df) scroll_pane_cp031

0x837a,	// (0x00022a85) cell_imed_clipart_pane_ParamLimits

0x837a,	// (0x00022a85) cell_imed_clipart_pane

0x839d,	// (0x00022aa8) cell_imed_clipart_pane_g1

0xbe24,	// (0x0002652f) grid_highlight_pane_cp014

0x81a7,	// (0x000228b2) main_clock2_pane_g1_ParamLimits

0x81a7,	// (0x000228b2) main_clock2_pane_g1

0x8292,	// (0x0002299d) aid_call2_pane_cp10

0x82a4,	// (0x000229af) aid_call_pane_cp10

0xcfc5,	// (0x000276d0) popup_clock_analogue_window_cp10_g1

0xcfc5,	// (0x000276d0) popup_clock_analogue_window_cp10_g2

0x3ffe,	// (0x0001e709) popup_clock_analogue_window_cp10_g3

0x3ffe,	// (0x0001e709) popup_clock_analogue_window_cp10_g4

0xcfc5,	// (0x000276d0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6e9,	// (0x00029df4) popup_clock_analogue_window_cp10_g

0x4014,	// (0x0001e71f) popup_clock_analogue_window_cp10_t1

0x4033,	// (0x0001e73e) clock_digital_number_pane_cp10_ParamLimits

0x4033,	// (0x0001e73e) clock_digital_number_pane_cp10

0x404d,	// (0x0001e758) clock_digital_number_pane_cp11_ParamLimits

0x404d,	// (0x0001e758) clock_digital_number_pane_cp11

0x4067,	// (0x0001e772) clock_digital_number_pane_cp12_ParamLimits

0x4067,	// (0x0001e772) clock_digital_number_pane_cp12

0x4081,	// (0x0001e78c) clock_digital_number_pane_cp13_ParamLimits

0x4081,	// (0x0001e78c) clock_digital_number_pane_cp13

0x409b,	// (0x0001e7a6) clock_digital_separator_pane_cp10_ParamLimits

0x409b,	// (0x0001e7a6) clock_digital_separator_pane_cp10

0x40b5,	// (0x0001e7c0) popup_clock_digital_window_cp02_t1_ParamLimits

0x40b5,	// (0x0001e7c0) popup_clock_digital_window_cp02_t1

0xc4a2,	// (0x00026bad) clock_digital_number_pane_cp10_g1

0xc4a2,	// (0x00026bad) clock_digital_number_pane_cp10_g2

0x0001,

0xf704,	// (0x00029e0f) clock_digital_number_pane_cp10_g

0xc4a2,	// (0x00026bad) clock_digital_separator_pane_cp10_g1

0xc4a2,	// (0x00026bad) clock_digital_separator_pane_g2_cp10

0xd152,	// (0x0002785d) navi_pane_vded_g4

0xd15b,	// (0x00027866) navi_pane_vded_g5

0xd164,	// (0x0002786f) navi_pane_vded_t1

0x39c2,	// (0x0001e0cd) main_vded_pane

0x83a6,	// (0x00022ab1) main_vded_pane_g1

0x83b2,	// (0x00022abd) main_vded_pane_g2

0x83bc,	// (0x00022ac7) main_vded_pane_g3

0x0002,

0xf709,	// (0x00029e14) main_vded_pane_g

0x83c6,	// (0x00022ad1) main_vded_pane_t1

0x83d4,	// (0x00022adf) main_vded_pane_t2

0x0001,

0xf710,	// (0x00029e1b) main_vded_pane_t

0x83e2,	// (0x00022aed) vded_slider_pane

0x83ec,	// (0x00022af7) vded_video_pane

0xee99,	// (0x000295a4) vded_video_pane_g1

0x83f6,	// (0x00022b01) vded_video_pane_g2

0xc563,	// (0x00026c6e) vded_video_pane_g3

0x0002,

0xf715,	// (0x00029e20) vded_video_pane_g

0xeea3,	// (0x000295ae) vded_slider_pane_g1

0xe601,	// (0x00028d0c) vded_slider_pane_g2

0xeeac,	// (0x000295b7) vded_slider_pane_g3

0xeeb5,	// (0x000295c0) vded_slider_pane_g4

0xeebe,	// (0x000295c9) vded_slider_pane_g5

0x0004,

0xf71c,	// (0x00029e27) vded_slider_pane_g

0x055a,	// (0x0001ac65) mup3_rocker_pane_ParamLimits

0x055a,	// (0x0001ac65) mup3_rocker_pane

0xebea,	// (0x000292f5) mup3_control_keys_pane_g1

0xeec7,	// (0x000295d2) mup3_control_keys_pane_g2

0xebea,	// (0x000292f5) mup3_control_keys_pane_g3

0xeecf,	// (0x000295da) mup3_control_keys_pane_g4

0x0003,

0xf727,	// (0x00029e32) mup3_control_keys_pane_g

0x3982,	// (0x0001e08d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3982,	// (0x0001e08d) popup_toolbar2_fixed_window_cp01

0x055a,	// (0x0001ac65) popup_toolbar2_fixed_window_cp02_ParamLimits

0x055a,	// (0x0001ac65) popup_toolbar2_fixed_window_cp02

0xd8ac,	// (0x00027fb7) popup_call2_audio_second_window_t4_ParamLimits

0xd8ac,	// (0x00027fb7) popup_call2_audio_second_window_t4

0xdde8,	// (0x000284f3) popup_call2_audio_first_window_t6_ParamLimits

0xdde8,	// (0x000284f3) popup_call2_audio_first_window_t6

0xe026,	// (0x00028731) popup_call2_audio_out_window_t6_ParamLimits

0xe026,	// (0x00028731) popup_call2_audio_out_window_t6

0x39c2,	// (0x0001e0cd) main_vitu_pane

0xc517,	// (0x00026c22) aid_size_cell_itu_ParamLimits

0xc517,	// (0x00026c22) aid_size_cell_itu

0xc517,	// (0x00026c22) bg_popup_window_pane_cp08_ParamLimits

0xc517,	// (0x00026c22) bg_popup_window_pane_cp08

0xc517,	// (0x00026c22) field_vitu_entry_pane_ParamLimits

0xc517,	// (0x00026c22) field_vitu_entry_pane

0xc517,	// (0x00026c22) grid_vitu_function_pane_ParamLimits

0xc517,	// (0x00026c22) grid_vitu_function_pane

0xc517,	// (0x00026c22) grid_vitu_itu_pane_ParamLimits

0xc517,	// (0x00026c22) grid_vitu_itu_pane

0xc517,	// (0x00026c22) cell_vitu_itu_pane_ParamLimits

0xc517,	// (0x00026c22) cell_vitu_itu_pane

0xc517,	// (0x00026c22) cell_vitu_function_pane_ParamLimits

0xc517,	// (0x00026c22) cell_vitu_function_pane

0xc186,	// (0x00026891) bg_popup_sub_pane_cp08_ParamLimits

0xc186,	// (0x00026891) bg_popup_sub_pane_cp08

0xc56d,	// (0x00026c78) field_vitu_entry_pane_t1_ParamLimits

0xc56d,	// (0x00026c78) field_vitu_entry_pane_t1

0xeddd,	// (0x000294e8) field_vitu_entry_pane_t2_ParamLimits

0xeddd,	// (0x000294e8) field_vitu_entry_pane_t2

0x0001,

0xf730,	// (0x00029e3b) field_vitu_entry_pane_t_ParamLimits

0xf730,	// (0x00029e3b) field_vitu_entry_pane_t

0xe44d,	// (0x00028b58) bg_button_pane_cp05_ParamLimits

0xe44d,	// (0x00028b58) bg_button_pane_cp05

0xeed7,	// (0x000295e2) cell_vitu_itu_pane_g1

0xd405,	// (0x00027b10) cell_vitu_itu_pane_t1_ParamLimits

0xd405,	// (0x00027b10) cell_vitu_itu_pane_t1

0xd405,	// (0x00027b10) cell_vitu_itu_pane_t2_ParamLimits

0xd405,	// (0x00027b10) cell_vitu_itu_pane_t2

0x0002,

0xf735,	// (0x00029e40) cell_vitu_itu_pane_t_ParamLimits

0xf735,	// (0x00029e40) cell_vitu_itu_pane_t

0xbe24,	// (0x0002652f) bg_button_pane_cp07

0xc563,	// (0x00026c6e) cell_vitu_function_pane_g1

0x3a9b,	// (0x0001e1a6) main_calc_pane_g1

0x376e,	// (0x0001de79) aid_visual_content_pane

0x39c2,	// (0x0001e0cd) main_vradio_pane

0xc533,	// (0x00026c3e) main_vradio_pane_g1_ParamLimits

0xc533,	// (0x00026c3e) main_vradio_pane_g1

0xc533,	// (0x00026c3e) main_vradio_pane_g2_ParamLimits

0xc533,	// (0x00026c3e) main_vradio_pane_g2

0x0001,

0xf4cc,	// (0x00029bd7) main_vradio_pane_g_ParamLimits

0xf4cc,	// (0x00029bd7) main_vradio_pane_g

0xc581,	// (0x00026c8c) main_vradio_pane_t1_ParamLimits

0xc581,	// (0x00026c8c) main_vradio_pane_t1

0xc581,	// (0x00026c8c) main_vradio_pane_t2_ParamLimits

0xc581,	// (0x00026c8c) main_vradio_pane_t2

0xc581,	// (0x00026c8c) main_vradio_pane_t3_ParamLimits

0xc581,	// (0x00026c8c) main_vradio_pane_t3

0x0002,

0xf73c,	// (0x00029e47) main_vradio_pane_t_ParamLimits

0xf73c,	// (0x00029e47) main_vradio_pane_t

0xc517,	// (0x00026c22) vradio_rocker_control_pane_ParamLimits

0xc517,	// (0x00026c22) vradio_rocker_control_pane

0xc517,	// (0x00026c22) vradio_station_info_pane_ParamLimits

0xc517,	// (0x00026c22) vradio_station_info_pane

0xc186,	// (0x00026891) vradio_frequency_info_pane_ParamLimits

0xc186,	// (0x00026891) vradio_frequency_info_pane

0xc563,	// (0x00026c6e) vradio_station_info_pane_g1

0xd405,	// (0x00027b10) vradio_station_info_pane_t1_ParamLimits

0xd405,	// (0x00027b10) vradio_station_info_pane_t1

0xc581,	// (0x00026c8c) vradio_station_info_pane_t2_ParamLimits

0xc581,	// (0x00026c8c) vradio_station_info_pane_t2

0x0001,

0xf743,	// (0x00029e4e) vradio_station_info_pane_t_ParamLimits

0xf743,	// (0x00029e4e) vradio_station_info_pane_t

0xbe24,	// (0x0002652f) vradio_tuning_pane

0x83ff,	// (0x00022b0a) vradio_rocker_control_pane_g1

0xeef3,	// (0x000295fe) vradio_rocker_control_pane_g2

0x8407,	// (0x00022b12) vradio_rocker_control_pane_g3

0x840f,	// (0x00022b1a) vradio_rocker_control_pane_g4

0x8417,	// (0x00022b22) vradio_rocker_control_pane_g5

0x0004,

0xf748,	// (0x00029e53) vradio_rocker_control_pane_g

0xc563,	// (0x00026c6e) vradio_frequency_info_pane_g1

0xc56d,	// (0x00026c78) vradio_frequency_info_pane_t1_ParamLimits

0xc56d,	// (0x00026c78) vradio_frequency_info_pane_t1

0x841f,	// (0x00022b2a) vradio_tuning_pane_g1

0x842c,	// (0x00022b37) vradio_tuning_pane_t1

0x378a,	// (0x0001de95) area_side_right_pane_ParamLimits

0x378a,	// (0x0001de95) area_side_right_pane

0xe408,	// (0x00028b13) status_small_pane_g1

0xe410,	// (0x00028b1b) status_small_pane_g2

0xe419,	// (0x00028b24) status_small_pane_g3

0xe422,	// (0x00028b2d) status_small_pane_g4

0x0003,

0xf519,	// (0x00029c24) status_small_pane_g

0xe42b,	// (0x00028b36) status_small_pane_t1

0x39c2,	// (0x0001e0cd) main_video3_pane

0xbe24,	// (0x0002652f) cams_zoom_vslider_pane

0xeefb,	// (0x00029606) image3_wide_pane_ParamLimits

0xeefb,	// (0x00029606) image3_wide_pane

0xbe24,	// (0x0002652f) image3_wide_small_pane

0xef15,	// (0x00029620) main_video3_pane_g1_ParamLimits

0xef15,	// (0x00029620) main_video3_pane_g1

0xef15,	// (0x00029620) main_video3_pane_g2_ParamLimits

0xef15,	// (0x00029620) main_video3_pane_g2

0x0001,

0xf753,	// (0x00029e5e) main_video3_pane_g_ParamLimits

0xf753,	// (0x00029e5e) main_video3_pane_g

0xef33,	// (0x0002963e) main_video3_pane_t1_ParamLimits

0xef33,	// (0x0002963e) main_video3_pane_t1

0xef33,	// (0x0002963e) main_video3_pane_t2_ParamLimits

0xef33,	// (0x0002963e) main_video3_pane_t2

0xef33,	// (0x0002963e) main_video3_pane_t3_ParamLimits

0xef33,	// (0x0002963e) main_video3_pane_t3

0x0002,

0xf758,	// (0x00029e63) main_video3_pane_t_ParamLimits

0xf758,	// (0x00029e63) main_video3_pane_t

0xc563,	// (0x00026c6e) cams_zoom_vslider_pane_g1

0xc563,	// (0x00026c6e) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00029797) cams_zoom_vslider_pane_g

0xbe24,	// (0x0002652f) small_slider_vertical_pane

0xc563,	// (0x00026c6e) small_slider_vertical_pane_g1

0xc563,	// (0x00026c6e) small_slider_vertical_pane_g2

0xef5a,	// (0x00029665) small_slider_vertical_pane_g3

0x0002,

0xf75f,	// (0x00029e6a) small_slider_vertical_pane_g

0x39c2,	// (0x0001e0cd) main_hwr_training_pane

0xef63,	// (0x0002966e) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x0002966e) hwr_training_instruct_pane

0x843b,	// (0x00022b46) hwr_training_navi_pane_ParamLimits

0x843b,	// (0x00022b46) hwr_training_navi_pane

0x8455,	// (0x00022b60) hwr_training_write_pane_ParamLimits

0x8455,	// (0x00022b60) hwr_training_write_pane

0xbe24,	// (0x0002652f) bg_frame_shadow_pane

0xef9a,	// (0x000296a5) hwr_training_write_pane_g1

0xefa2,	// (0x000296ad) hwr_training_write_pane_g2

0xefaa,	// (0x000296b5) hwr_training_write_pane_g3

0xefb2,	// (0x000296bd) hwr_training_write_pane_g4

0xefba,	// (0x000296c5) hwr_training_write_pane_g5

0xefc2,	// (0x000296cd) hwr_training_write_pane_g6

0xefca,	// (0x000296d5) hwr_training_write_pane_g7

0x0006,

0xf766,	// (0x00029e71) hwr_training_write_pane_g

0x40d6,	// (0x0001e7e1) hwr_training_navi_pane_g1_ParamLimits

0x40d6,	// (0x0001e7e1) hwr_training_navi_pane_g1

0x40e8,	// (0x0001e7f3) hwr_training_navi_pane_g2_ParamLimits

0x40e8,	// (0x0001e7f3) hwr_training_navi_pane_g2

0x40fa,	// (0x0001e805) hwr_training_navi_pane_g3_ParamLimits

0x40fa,	// (0x0001e805) hwr_training_navi_pane_g3

0x410a,	// (0x0001e815) hwr_training_navi_pane_g4_ParamLimits

0x410a,	// (0x0001e815) hwr_training_navi_pane_g4

0x0004,

0xf775,	// (0x00029e80) hwr_training_navi_pane_g_ParamLimits

0xf775,	// (0x00029e80) hwr_training_navi_pane_g

0x4124,	// (0x0001e82f) hwr_training_navi_pane_t1

0x848d,	// (0x00022b98) list_single_hwr_training_instruct_pane_ParamLimits

0x848d,	// (0x00022b98) list_single_hwr_training_instruct_pane

0xefd2,	// (0x000296dd) list_single_hwr_training_instruct_pane_t1

0xe7d7,	// (0x00028ee2) bg_frame_shadow_pane_g1

0xefe1,	// (0x000296ec) bg_frame_shadow_pane_g2

0xefe9,	// (0x000296f4) bg_frame_shadow_pane_g3

0xeff1,	// (0x000296fc) bg_frame_shadow_pane_g4

0xeff9,	// (0x00029704) bg_frame_shadow_pane_g5

0xf001,	// (0x0002970c) bg_frame_shadow_pane_g6

0xf009,	// (0x00029714) bg_frame_shadow_pane_g7

0xc670,	// (0x00026d7b) bg_frame_shadow_pane_g8

0x0007,

0xf780,	// (0x00029e8b) bg_frame_shadow_pane_g

0x39c2,	// (0x0001e0cd) main_video_tele_dialer_pane

0x4132,	// (0x0001e83d) aid_size_cell_video_keypad_ParamLimits

0x4132,	// (0x0001e83d) aid_size_cell_video_keypad

0x4142,	// (0x0001e84d) grid_video_dialer_keypad_pane_ParamLimits

0x4142,	// (0x0001e84d) grid_video_dialer_keypad_pane

0x4176,	// (0x0001e881) video_down_pane_cp_ParamLimits

0x4176,	// (0x0001e881) video_down_pane_cp

0x4184,	// (0x0001e88f) cell_video_dialer_keypad_pane_ParamLimits

0x4184,	// (0x0001e88f) cell_video_dialer_keypad_pane

0xf011,	// (0x0002971c) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x0002971c) bg_button_pane_cp08

0x84d2,	// (0x00022bdd) cell_video_dialer_keypad_pane_g1_ParamLimits

0x84d2,	// (0x00022bdd) cell_video_dialer_keypad_pane_g1

0x055a,	// (0x0001ac65) mup3_rocker2_pane_ParamLimits

0x055a,	// (0x0001ac65) mup3_rocker2_pane

0xc563,	// (0x00026c6e) mup3_rocker2_pane_g1

0x3de7,	// (0x0001e4f2) main_dialer2_pane

0x39c2,	// (0x0001e0cd) main_mp4_pane

0x41b7,	// (0x0001e8c2) main_mp4_pane_g1_ParamLimits

0x41b7,	// (0x0001e8c2) main_mp4_pane_g1

0x41d9,	// (0x0001e8e4) main_mp4_pane_g2_ParamLimits

0x41d9,	// (0x0001e8e4) main_mp4_pane_g2

0x41f7,	// (0x0001e902) main_mp4_pane_g3_ParamLimits

0x41f7,	// (0x0001e902) main_mp4_pane_g3

0x4230,	// (0x0001e93b) main_mp4_pane_g4_ParamLimits

0x4230,	// (0x0001e93b) main_mp4_pane_g4

0x4258,	// (0x0001e963) main_mp4_pane_g5_ParamLimits

0x4258,	// (0x0001e963) main_mp4_pane_g5

0x0007,

0xf7a0,	// (0x00029eab) main_mp4_pane_g_ParamLimits

0xf7a0,	// (0x00029eab) main_mp4_pane_g

0x42c0,	// (0x0001e9cb) main_mp4_pane_t1_ParamLimits

0x42c0,	// (0x0001e9cb) main_mp4_pane_t1

0x4322,	// (0x0001ea2d) main_mp4_pane_t2_ParamLimits

0x4322,	// (0x0001ea2d) main_mp4_pane_t2

0x4386,	// (0x0001ea91) main_mp4_pane_t3_ParamLimits

0x4386,	// (0x0001ea91) main_mp4_pane_t3

0x43e4,	// (0x0001eaef) main_mp4_pane_t4_ParamLimits

0x43e4,	// (0x0001eaef) main_mp4_pane_t4

0x0003,

0xf7b1,	// (0x00029ebc) main_mp4_pane_t_ParamLimits

0xf7b1,	// (0x00029ebc) main_mp4_pane_t

0x4442,	// (0x0001eb4d) mp4_progress_pane_ParamLimits

0x4442,	// (0x0001eb4d) mp4_progress_pane

0x4476,	// (0x0001eb81) mp4_rocker_pane_ParamLimits

0x4476,	// (0x0001eb81) mp4_rocker_pane

0x01ea,	// (0x0001a8f5) mp4_progress_pane_t1

0x0209,	// (0x0001a914) mp4_progress_pane_t2

0x0001,

0xf7ba,	// (0x00029ec5) mp4_progress_pane_t

0x0228,	// (0x0001a933) mup_progress_pane_cp04

0x0c2c,	// (0x0001b337) mp4_rocker_pane_g1

0x39b4,	// (0x0001e0bf) aid_cell_size_keypad2_ParamLimits

0x39b4,	// (0x0001e0bf) aid_cell_size_keypad2

0x39b4,	// (0x0001e0bf) dialer2_ne_pane_ParamLimits

0x39b4,	// (0x0001e0bf) dialer2_ne_pane

0x39b4,	// (0x0001e0bf) grid_dialer2_keypad_pane_ParamLimits

0x39b4,	// (0x0001e0bf) grid_dialer2_keypad_pane

0xe548,	// (0x00028c53) bg_popup_call_pane_cp07_ParamLimits

0xe548,	// (0x00028c53) bg_popup_call_pane_cp07

0x850c,	// (0x00022c17) dialer2_ne_pane_t1_ParamLimits

0x850c,	// (0x00022c17) dialer2_ne_pane_t1

0x448a,	// (0x0001eb95) cell_dialer2_keypad_pane_ParamLimits

0x448a,	// (0x0001eb95) cell_dialer2_keypad_pane

0xe44d,	// (0x00028b58) bg_button_pane_pane_cp04_ParamLimits

0xe44d,	// (0x00028b58) bg_button_pane_pane_cp04

0xc525,	// (0x00026c30) cell_dialer2_keypad_pane_g1_ParamLimits

0xc525,	// (0x00026c30) cell_dialer2_keypad_pane_g1

0x573e,	// (0x0001fe49) aid_placing_vt_set_content_ParamLimits

0x573e,	// (0x0001fe49) aid_placing_vt_set_content

0x576a,	// (0x0001fe75) aid_placing_vt_set_title_ParamLimits

0x576a,	// (0x0001fe75) aid_placing_vt_set_title

0x39c2,	// (0x0001e0cd) main_image3_pane

0x44d3,	// (0x0001ebde) area_side_right_pane_cp01_ParamLimits

0x44d3,	// (0x0001ebde) area_side_right_pane_cp01

0x4500,	// (0x0001ec0b) main_image3_pane_g1_ParamLimits

0x4500,	// (0x0001ec0b) main_image3_pane_g1

0x450e,	// (0x0001ec19) main_image3_pane_g2_ParamLimits

0x450e,	// (0x0001ec19) main_image3_pane_g2

0x4527,	// (0x0001ec32) main_image3_pane_g3_ParamLimits

0x4527,	// (0x0001ec32) main_image3_pane_g3

0x4540,	// (0x0001ec4b) main_image3_pane_g4_ParamLimits

0x4540,	// (0x0001ec4b) main_image3_pane_g4

0x0003,

0xf7c9,	// (0x00029ed4) main_image3_pane_g_ParamLimits

0xf7c9,	// (0x00029ed4) main_image3_pane_g

0x4559,	// (0x0001ec64) main_image3_pane_t1_ParamLimits

0x4559,	// (0x0001ec64) main_image3_pane_t1

0x457e,	// (0x0001ec89) main_image3_pane_t2_ParamLimits

0x457e,	// (0x0001ec89) main_image3_pane_t2

0x459d,	// (0x0001eca8) main_image3_pane_t3_ParamLimits

0x459d,	// (0x0001eca8) main_image3_pane_t3

0x0003,

0xf7d2,	// (0x00029edd) main_image3_pane_t_ParamLimits

0xf7d2,	// (0x00029edd) main_image3_pane_t

0xc517,	// (0x00026c22) grid_sctrl_middle_pane_cp01_ParamLimits

0xc517,	// (0x00026c22) grid_sctrl_middle_pane_cp01

0x8533,	// (0x00022c3e) cell_sctrl_middle_pane_cp01_ParamLimits

0x8533,	// (0x00022c3e) cell_sctrl_middle_pane_cp01

0x8544,	// (0x00022c4f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8544,	// (0x00022c4f) cell_sctrl_middle_pane_cp01_g1

0x39c2,	// (0x0001e0cd) main_call4_pane

0x45fe,	// (0x0001ed09) aid_size_button_call4_ParamLimits

0x45fe,	// (0x0001ed09) aid_size_button_call4

0x4634,	// (0x0001ed3f) call4_windows_pane_ParamLimits

0x4634,	// (0x0001ed3f) call4_windows_pane

0x4649,	// (0x0001ed54) grid_call4_button_pane_ParamLimits

0x4649,	// (0x0001ed54) grid_call4_button_pane

0x4677,	// (0x0001ed82) call4_windows_conf_pane

0x468c,	// (0x0001ed97) popup_call4_audio_first_window_ParamLimits

0x468c,	// (0x0001ed97) popup_call4_audio_first_window

0x46dc,	// (0x0001ede7) popup_call4_audio_second_window_ParamLimits

0x46dc,	// (0x0001ede7) popup_call4_audio_second_window

0x46f5,	// (0x0001ee00) popup_call4_audio_wait_window_ParamLimits

0x46f5,	// (0x0001ee00) popup_call4_audio_wait_window

0x4703,	// (0x0001ee0e) cell_call4_button_pane_ParamLimits

0x4703,	// (0x0001ee0e) cell_call4_button_pane

0x8551,	// (0x00022c5c) bg_button_pane_cp09_ParamLimits

0x8551,	// (0x00022c5c) bg_button_pane_cp09

0x4726,	// (0x0001ee31) cell_call4_button_pane_g1_ParamLimits

0x4726,	// (0x0001ee31) cell_call4_button_pane_g1

0x855d,	// (0x00022c68) cell_call4_button_pane_t1_ParamLimits

0x855d,	// (0x00022c68) cell_call4_button_pane_t1

0x02d5,	// (0x0001a9e0) popup_call4_audio_conf_window_ParamLimits

0x02d5,	// (0x0001a9e0) popup_call4_audio_conf_window

0x80d4,	// (0x000227df) mup3_progress_pane_t1_ParamLimits

0x80f3,	// (0x000227fe) mup3_progress_pane_t2_ParamLimits

0xebb5,	// (0x000292c0) mup3_progress_pane_t3_ParamLimits

0xf6b1,	// (0x00029dbc) mup3_progress_pane_t_ParamLimits

0xebd2,	// (0x000292dd) mup_progress_pane_cp03_ParamLimits

0xebea,	// (0x000292f5) mup3_control_keys_pane_g4_copy1

0x4476,	// (0x0001eb81) mp4_rocker2_pane_ParamLimits

0x4476,	// (0x0001eb81) mp4_rocker2_pane

0xeec7,	// (0x000295d2) mp4_rocker2_pane_g1

0xeec7,	// (0x000295d2) mp4_rocker2_pane_g2

0xeec7,	// (0x000295d2) mp4_rocker2_pane_g3

0xeec7,	// (0x000295d2) mp4_rocker2_pane_g4

0xeec7,	// (0x000295d2) mp4_rocker2_pane_g5

0x0004,

0xf7db,	// (0x00029ee6) mp4_rocker2_pane_g

0x39c2,	// (0x0001e0cd) main_camera4_pane

0x39c2,	// (0x0001e0cd) main_video4_pane

0x4152,	// (0x0001e85d) main_video_tele_dialer_pane_t1_ParamLimits

0x4152,	// (0x0001e85d) main_video_tele_dialer_pane_t1

0x4164,	// (0x0001e86f) main_video_tele_dialer_pane_t2_ParamLimits

0x4164,	// (0x0001e86f) main_video_tele_dialer_pane_t2

0x0001,

0xf791,	// (0x00029e9c) main_video_tele_dialer_pane_t_ParamLimits

0xf791,	// (0x00029e9c) main_video_tele_dialer_pane_t

0x477d,	// (0x0001ee88) cam4_autofocus_pane_ParamLimits

0x477d,	// (0x0001ee88) cam4_autofocus_pane

0x4797,	// (0x0001eea2) cam4_image_uncrop_pane_ParamLimits

0x4797,	// (0x0001eea2) cam4_image_uncrop_pane

0x47ae,	// (0x0001eeb9) cam4_indicators_pane_ParamLimits

0x47ae,	// (0x0001eeb9) cam4_indicators_pane

0x47ca,	// (0x0001eed5) main_camera4_pane_g1_ParamLimits

0x47ca,	// (0x0001eed5) main_camera4_pane_g1

0x47d6,	// (0x0001eee1) main_camera4_pane_g2_ParamLimits

0x47d6,	// (0x0001eee1) main_camera4_pane_g2

0x47d6,	// (0x0001eee1) main_camera4_pane_g3_ParamLimits

0x47d6,	// (0x0001eee1) main_camera4_pane_g3

0x47e2,	// (0x0001eeed) main_camera4_pane_g4_ParamLimits

0x47e2,	// (0x0001eeed) main_camera4_pane_g4

0x47ee,	// (0x0001eef9) main_camera4_pane_g5_ParamLimits

0x47ee,	// (0x0001eef9) main_camera4_pane_g5

0x0005,

0xf7e6,	// (0x00029ef1) main_camera4_pane_g_ParamLimits

0xf7e6,	// (0x00029ef1) main_camera4_pane_g

0x4808,	// (0x0001ef13) main_camera4_pane_t1_ParamLimits

0x4808,	// (0x0001ef13) main_camera4_pane_t1

0x17f7,	// (0x0001bf02) bg_tb_trans_pane_cp06

0x4834,	// (0x0001ef3f) cam4_indicators_pane_g1

0x4845,	// (0x0001ef50) cam4_indicators_pane_g2

0x0002,

0xf801,	// (0x00029f0c) cam4_indicators_pane_g

0x485d,	// (0x0001ef68) cam4_indicators_pane_t1

0x4887,	// (0x0001ef92) main_video4_pane_g1_ParamLimits

0x4887,	// (0x0001ef92) main_video4_pane_g1

0x4893,	// (0x0001ef9e) main_video4_pane_g2_ParamLimits

0x4893,	// (0x0001ef9e) main_video4_pane_g2

0x489f,	// (0x0001efaa) main_video4_pane_g3_ParamLimits

0x489f,	// (0x0001efaa) main_video4_pane_g3

0x48ab,	// (0x0001efb6) main_video4_pane_g4_ParamLimits

0x48ab,	// (0x0001efb6) main_video4_pane_g4

0x0004,

0xf808,	// (0x00029f13) main_video4_pane_g_ParamLimits

0xf808,	// (0x00029f13) main_video4_pane_g

0x48cb,	// (0x0001efd6) vid4_indicators_pane_ParamLimits

0x48cb,	// (0x0001efd6) vid4_indicators_pane

0x48ea,	// (0x0001eff5) video4_image_uncrop_cif_pane_ParamLimits

0x48ea,	// (0x0001eff5) video4_image_uncrop_cif_pane

0x48f9,	// (0x0001f004) video4_image_uncrop_nhd_pane_ParamLimits

0x48f9,	// (0x0001f004) video4_image_uncrop_nhd_pane

0x4797,	// (0x0001eea2) video4_image_uncrop_vga_pane_ParamLimits

0x4797,	// (0x0001eea2) video4_image_uncrop_vga_pane

0x3dd9,	// (0x0001e4e4) bg_tb_trans_pane_cp07

0x490e,	// (0x0001f019) vid4_indicators_pane_g1

0x4922,	// (0x0001f02d) vid4_indicators_pane_g2

0x4936,	// (0x0001f041) vid4_indicators_pane_g3

0x0004,

0xf813,	// (0x00029f1e) vid4_indicators_pane_g

0x4963,	// (0x0001f06e) vid4_indicators_pane_t1

0x8593,	// (0x00022c9e) cam4_autofocus_pane_g1

0x859b,	// (0x00022ca6) cam4_autofocus_pane_g2

0x85a3,	// (0x00022cae) cam4_autofocus_pane_g3

0x0002,

0xf81e,	// (0x00029f29) cam4_autofocus_pane_g

0x85ab,	// (0x00022cb6) cam4_autofocus_pane_g3_copy1

0x84b6,	// (0x00022bc1) video_down_pane_cp_t1

0x84c4,	// (0x00022bcf) video_down_pane_cp_t2

0x0001,

0xf796,	// (0x00029ea1) video_down_pane_cp_t

0x39b4,	// (0x0001e0bf) popup_vitu2_window_ParamLimits

0x39b4,	// (0x0001e0bf) popup_vitu2_window

0x497a,	// (0x0001f085) aid_size_cell2_itu2_ParamLimits

0x497a,	// (0x0001f085) aid_size_cell2_itu2

0x499c,	// (0x0001f0a7) aid_size_cell_itu2_ParamLimits

0x499c,	// (0x0001f0a7) aid_size_cell_itu2

0x49e0,	// (0x0001f0eb) bg_popup_window_pane_cp09_ParamLimits

0x49e0,	// (0x0001f0eb) bg_popup_window_pane_cp09

0x49ee,	// (0x0001f0f9) field_vitu2_entry_pane_ParamLimits

0x49ee,	// (0x0001f0f9) field_vitu2_entry_pane

0x4a0e,	// (0x0001f119) grid_vitu2_function_pane_ParamLimits

0x4a0e,	// (0x0001f119) grid_vitu2_function_pane

0x4a4e,	// (0x0001f159) grid_vitu2_itu_pane_ParamLimits

0x4a4e,	// (0x0001f159) grid_vitu2_itu_pane

0x4ac2,	// (0x0001f1cd) cell_vitu2_itu_pane_ParamLimits

0x4ac2,	// (0x0001f1cd) cell_vitu2_itu_pane

0x4adb,	// (0x0001f1e6) cell_vitu2_function_pane_ParamLimits

0x4adb,	// (0x0001f1e6) cell_vitu2_function_pane

0x03cc,	// (0x0001aad7) bg_popup_call_pane_cp08_ParamLimits

0x03cc,	// (0x0001aad7) bg_popup_call_pane_cp08

0x03e3,	// (0x0001aaee) field_vitu2_entry_pane_g1

0x03ef,	// (0x0001aafa) field_vitu2_entry_pane_g2

0x0002,

0xf825,	// (0x00029f30) field_vitu2_entry_pane_g

0x85b3,	// (0x00022cbe) field_vitu2_entry_pane_t1_ParamLimits

0x85b3,	// (0x00022cbe) field_vitu2_entry_pane_t1

0x03fb,	// (0x0001ab06) field_vitu2_entry_pane_t2_ParamLimits

0x03fb,	// (0x0001ab06) field_vitu2_entry_pane_t2

0x0001,

0xf82c,	// (0x00029f37) field_vitu2_entry_pane_t_ParamLimits

0xf82c,	// (0x00029f37) field_vitu2_entry_pane_t

0x3f6c,	// (0x0001e677) bg_button_pane_cp010_ParamLimits

0x3f6c,	// (0x0001e677) bg_button_pane_cp010

0x4b1c,	// (0x0001f227) cell_vitu2_itu_pane_g1

0x4b42,	// (0x0001f24d) cell_vitu2_itu_pane_t1_ParamLimits

0x4b42,	// (0x0001f24d) cell_vitu2_itu_pane_t1

0x4b8e,	// (0x0001f299) cell_vitu2_itu_pane_t2_ParamLimits

0x4b8e,	// (0x0001f299) cell_vitu2_itu_pane_t2

0x0002,

0xf836,	// (0x00029f41) cell_vitu2_itu_pane_t_ParamLimits

0xf836,	// (0x00029f41) cell_vitu2_itu_pane_t

0x3dd9,	// (0x0001e4e4) bg_button_pane_cp011

0x4c56,	// (0x0001f361) cell_vitu2_function_pane_g1

0x39c2,	// (0x0001e0cd) main_myfav_hc_pane

0x45df,	// (0x0001ecea) popup_image3_note_pane_ParamLimits

0x45df,	// (0x0001ecea) popup_image3_note_pane

0x45ed,	// (0x0001ecf8) popup_image3_tool_bar_pane_ParamLimits

0x45ed,	// (0x0001ecf8) popup_image3_tool_bar_pane

0x4c04,	// (0x0001f30f) cell_vitu2_itu_pane_t3_ParamLimits

0x4c04,	// (0x0001f30f) cell_vitu2_itu_pane_t3

0xbe24,	// (0x0002652f) bg_popup_trans_pane

0x0420,	// (0x0001ab2b) grid_image3_tool_bar_pane

0x042a,	// (0x0001ab35) bg_popup_trans_pane_g1

0xc9eb,	// (0x000270f6) bg_popup_trans_pane_g2

0x0432,	// (0x0001ab3d) bg_popup_trans_pane_g3

0x043a,	// (0x0001ab45) bg_popup_trans_pane_g4

0x0442,	// (0x0001ab4d) bg_popup_trans_pane_g5

0x044a,	// (0x0001ab55) bg_popup_trans_pane_g6

0x0452,	// (0x0001ab5d) bg_popup_trans_pane_g7

0x045a,	// (0x0001ab65) bg_popup_trans_pane_g8

0xc9cb,	// (0x000270d6) bg_popup_trans_pane_g9

0x0008,

0xf83d,	// (0x00029f48) bg_popup_trans_pane_g

0x0462,	// (0x0001ab6d) cell_image3_tool_bar_pane_ParamLimits

0x0462,	// (0x0001ab6d) cell_image3_tool_bar_pane

0xc563,	// (0x00026c6e) cell_image3_tool_bar_pane_g1

0xbe24,	// (0x0002652f) bg_popup_trans_pane_cp1

0x0476,	// (0x0001ab81) popup_image3_note_pane_t1

0x0484,	// (0x0001ab8f) popup_image3_note_pane_t2

0x0492,	// (0x0001ab9d) popup_image3_note_pane_t3

0x0002,

0xf850,	// (0x00029f5b) popup_image3_note_pane_t

0x04a0,	// (0x0001abab) popup_image3_note_pane_t3_copy1

0x85ee,	// (0x00022cf9) bg_myfav_hc_instruction_pane_ParamLimits

0x85ee,	// (0x00022cf9) bg_myfav_hc_instruction_pane

0x8606,	// (0x00022d11) cell_myfav_contact_pane_ParamLimits

0x8606,	// (0x00022d11) cell_myfav_contact_pane

0x8620,	// (0x00022d2b) cell_myfav_contact_pane_cp1_ParamLimits

0x8620,	// (0x00022d2b) cell_myfav_contact_pane_cp1

0x8638,	// (0x00022d43) cell_myfav_contact_pane_cp2_ParamLimits

0x8638,	// (0x00022d43) cell_myfav_contact_pane_cp2

0x8650,	// (0x00022d5b) cell_myfav_contact_pane_cp3_ParamLimits

0x8650,	// (0x00022d5b) cell_myfav_contact_pane_cp3

0x8667,	// (0x00022d72) cell_myfav_contact_pane_cp4_ParamLimits

0x8667,	// (0x00022d72) cell_myfav_contact_pane_cp4

0x867d,	// (0x00022d88) cell_myfav_contact_pane_cp5_ParamLimits

0x867d,	// (0x00022d88) cell_myfav_contact_pane_cp5

0x8691,	// (0x00022d9c) cell_myfav_contact_pane_cp6_ParamLimits

0x8691,	// (0x00022d9c) cell_myfav_contact_pane_cp6

0x86a5,	// (0x00022db0) cell_myfav_contact_pane_cp7_ParamLimits

0x86a5,	// (0x00022db0) cell_myfav_contact_pane_cp7

0x04ae,	// (0x0001abb9) listscroll_gen_pane_cp05

0x86bd,	// (0x00022dc8) main_myfav_hc_pane_g1_ParamLimits

0x86bd,	// (0x00022dc8) main_myfav_hc_pane_g1

0x86d3,	// (0x00022dde) main_myfav_hc_pane_g2_ParamLimits

0x86d3,	// (0x00022dde) main_myfav_hc_pane_g2

0x0002,

0xf857,	// (0x00029f62) main_myfav_hc_pane_g_ParamLimits

0xf857,	// (0x00029f62) main_myfav_hc_pane_g

0x8703,	// (0x00022e0e) main_myfav_hc_pane_t1_ParamLimits

0x8703,	// (0x00022e0e) main_myfav_hc_pane_t1

0x04b7,	// (0x0001abc2) main_myfav_hc_pane_t2_ParamLimits

0x04b7,	// (0x0001abc2) main_myfav_hc_pane_t2

0x04c9,	// (0x0001abd4) main_myfav_hc_pane_t3_ParamLimits

0x04c9,	// (0x0001abd4) main_myfav_hc_pane_t3

0x871a,	// (0x00022e25) main_myfav_hc_pane_t4_ParamLimits

0x871a,	// (0x00022e25) main_myfav_hc_pane_t4

0x0004,

0xf85e,	// (0x00029f69) main_myfav_hc_pane_t_ParamLimits

0xf85e,	// (0x00029f69) main_myfav_hc_pane_t

0xc563,	// (0x00026c6e) bg_myfav_hc_instruction_pane_g1

0x04db,	// (0x0001abe6) cell_myfav_contact_pane_g1_ParamLimits

0x04db,	// (0x0001abe6) cell_myfav_contact_pane_g1

0x04db,	// (0x0001abe6) cell_myfav_contact_pane_g2_ParamLimits

0x04db,	// (0x0001abe6) cell_myfav_contact_pane_g2

0x04e7,	// (0x0001abf2) cell_myfav_contact_pane_g3_ParamLimits

0x04e7,	// (0x0001abf2) cell_myfav_contact_pane_g3

0xc533,	// (0x00026c3e) cell_myfav_contact_pane_g4_ParamLimits

0xc533,	// (0x00026c3e) cell_myfav_contact_pane_g4

0x04f4,	// (0x0001abff) cell_myfav_contact_pane_g5_ParamLimits

0x04f4,	// (0x0001abff) cell_myfav_contact_pane_g5

0x0004,

0xf869,	// (0x00029f74) cell_myfav_contact_pane_g_ParamLimits

0xf869,	// (0x00029f74) cell_myfav_contact_pane_g

0x86eb,	// (0x00022df6) main_myfav_hc_pane_g3_ParamLimits

0x86eb,	// (0x00022df6) main_myfav_hc_pane_g3

0x38be,	// (0x0001dfc9) popup_adpt_find_window

0x8744,	// (0x00022e4f) afind_page_pane_ParamLimits

0x8744,	// (0x00022e4f) afind_page_pane

0x8751,	// (0x00022e5c) aid_size_cell_afind_ParamLimits

0x8751,	// (0x00022e5c) aid_size_cell_afind

0x876b,	// (0x00022e76) bg_popup_sub_pane_cp09_ParamLimits

0x876b,	// (0x00022e76) bg_popup_sub_pane_cp09

0x877c,	// (0x00022e87) find_pane_cp01_ParamLimits

0x877c,	// (0x00022e87) find_pane_cp01

0x0500,	// (0x0001ac0b) grid_afind_control_pane_ParamLimits

0x0500,	// (0x0001ac0b) grid_afind_control_pane

0x878f,	// (0x00022e9a) grid_afind_pane_ParamLimits

0x878f,	// (0x00022e9a) grid_afind_pane

0x87ab,	// (0x00022eb6) cell_afind_pane_ParamLimits

0x87ab,	// (0x00022eb6) cell_afind_pane

0xc563,	// (0x00026c6e) afind_page_pane_g1

0x87f3,	// (0x00022efe) afind_page_pane_g2

0x87fb,	// (0x00022f06) afind_page_pane_g3

0x0002,

0xf874,	// (0x00029f7f) afind_page_pane_g

0x8803,	// (0x00022f0e) afind_page_pane_t1

0x0526,	// (0x0001ac31) cell_afind_grid_control_pane_ParamLimits

0x0526,	// (0x0001ac31) cell_afind_grid_control_pane

0x0535,	// (0x0001ac40) bg_button_pane_cp69_ParamLimits

0x0535,	// (0x0001ac40) bg_button_pane_cp69

0x8811,	// (0x00022f1c) cell_afind_pane_g1_ParamLimits

0x8811,	// (0x00022f1c) cell_afind_pane_g1

0x881e,	// (0x00022f29) cell_afind_pane_t1_ParamLimits

0x881e,	// (0x00022f29) cell_afind_pane_t1

0x0541,	// (0x0001ac4c) bg_button_pane_cp72

0x0549,	// (0x0001ac54) cell_afind_grid_control_pane_g1

0x7277,	// (0x00021982) aid_image_placing_area_ParamLimits

0x7277,	// (0x00021982) aid_image_placing_area

0xc525,	// (0x00026c30) field_vitu_entry_pane_g1_ParamLimits

0xc525,	// (0x00026c30) field_vitu_entry_pane_g1

0xc525,	// (0x00026c30) field_vitu_entry_pane_g2_ParamLimits

0xc525,	// (0x00026c30) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x000298a4) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x000298a4) field_vitu_entry_pane_g

0xeed7,	// (0x000295e2) cell_vitu_itu_pane_g1_ParamLimits

0xeddd,	// (0x000294e8) cell_vitu_itu_pane_t3_ParamLimits

0xeddd,	// (0x000294e8) cell_vitu_itu_pane_t3

0x01ea,	// (0x0001a8f5) mp4_progress_pane_t1_ParamLimits

0x0209,	// (0x0001a914) mp4_progress_pane_t2_ParamLimits

0xf7ba,	// (0x00029ec5) mp4_progress_pane_t_ParamLimits

0x0228,	// (0x0001a933) mup_progress_pane_cp04_ParamLimits

0x872e,	// (0x00022e39) main_myfav_hc_pane_t5_ParamLimits

0x872e,	// (0x00022e39) main_myfav_hc_pane_t5

0x3782,	// (0x0001de8d) aid_zoom_text_primary

0x38be,	// (0x0001dfc9) popup_adpt_find_window_ParamLimits

0x3dd9,	// (0x0001e4e4) main_cam_set_pane

0x47bc,	// (0x0001eec7) cam4_zoom_pane_ParamLimits

0x47bc,	// (0x0001eec7) cam4_zoom_pane

0x8830,	// (0x00022f3b) main_cam_set_pane_g1_ParamLimits

0x8830,	// (0x00022f3b) main_cam_set_pane_g1

0x883e,	// (0x00022f49) main_cam_set_pane_g2_ParamLimits

0x883e,	// (0x00022f49) main_cam_set_pane_g2

0x0001,

0xf87b,	// (0x00029f86) main_cam_set_pane_g_ParamLimits

0xf87b,	// (0x00029f86) main_cam_set_pane_g

0x884a,	// (0x00022f55) main_cam_set_pane_t1_ParamLimits

0x884a,	// (0x00022f55) main_cam_set_pane_t1

0x8866,	// (0x00022f71) main_cset_listscroll_pane_ParamLimits

0x8866,	// (0x00022f71) main_cset_listscroll_pane

0x8898,	// (0x00022fa3) main_cset_slider_pane_ParamLimits

0x8898,	// (0x00022fa3) main_cset_slider_pane

0x057b,	// (0x0001ac86) main_cset_list_pane_ParamLimits

0x057b,	// (0x0001ac86) main_cset_list_pane

0x058b,	// (0x0001ac96) scroll_pane_cp028

0x88b7,	// (0x00022fc2) aid_area_touch_slider

0x88d3,	// (0x00022fde) cset_slider_pane

0x88f6,	// (0x00023001) main_cset_slider_pane_g1

0x890b,	// (0x00023016) main_cset_slider_pane_g2

0x0011,

0xf880,	// (0x00029f8b) main_cset_slider_pane_g

0x05dc,	// (0x0001ace7) main_cset_slider_pane_t1

0x89d1,	// (0x000230dc) main_cset_slider_pane_t2

0x89eb,	// (0x000230f6) main_cset_slider_pane_t3

0x8a05,	// (0x00023110) main_cset_slider_pane_t4

0x8a23,	// (0x0002312e) main_cset_slider_pane_t5

0x8a41,	// (0x0002314c) main_cset_slider_pane_t6

0x8a58,	// (0x00023163) main_cset_slider_pane_t7

0x000e,

0xf8a5,	// (0x00029fb0) main_cset_slider_pane_t

0x8b66,	// (0x00023271) cset_list_set_pane_ParamLimits

0x8b66,	// (0x00023271) cset_list_set_pane

0x0676,	// (0x0001ad81) aid_position_infowindow_above

0x067e,	// (0x0001ad89) aid_position_infowindow_below

0x8b7f,	// (0x0002328a) cset_list_set_pane_g1_ParamLimits

0x8b7f,	// (0x0002328a) cset_list_set_pane_g1

0x8b8b,	// (0x00023296) cset_list_set_pane_g3_ParamLimits

0x8b8b,	// (0x00023296) cset_list_set_pane_g3

0x0001,

0xf8c4,	// (0x00029fcf) cset_list_set_pane_g_ParamLimits

0xf8c4,	// (0x00029fcf) cset_list_set_pane_g

0x8b9a,	// (0x000232a5) cset_list_set_pane_t1_ParamLimits

0x8b9a,	// (0x000232a5) cset_list_set_pane_t1

0xc186,	// (0x00026891) list_highlight_pane_cp021_ParamLimits

0xc186,	// (0x00026891) list_highlight_pane_cp021

0xd2b1,	// (0x000279bc) cset_slider_pane_g1

0xd2c3,	// (0x000279ce) cset_slider_pane_g2

0xd2ba,	// (0x000279c5) cset_slider_pane_g3

0x0002,

0xf8c9,	// (0x00029fd4) cset_slider_pane_g

0x4c6a,	// (0x0001f375) aid_area_touch_cam4_zoom

0x4c72,	// (0x0001f37d) cam4_zoom_cont_pane

0x4c7a,	// (0x0001f385) cam4_zoom_pane_g1

0x4c82,	// (0x0001f38d) cam4_zoom_pane_g2

0x4c8a,	// (0x0001f395) cam4_zoom_pane_g3

0x0002,

0xf8d0,	// (0x00029fdb) cam4_zoom_pane_g

0x4c92,	// (0x0001f39d) cam4_zoom_cont_pane_g1

0x4c9b,	// (0x0001f3a6) cam4_zoom_cont_pane_g2

0x4ca4,	// (0x0001f3af) cam4_zoom_cont_pane_g3

0x0002,

0xf8d7,	// (0x00029fe2) cam4_zoom_cont_pane_g

0x4618,	// (0x0001ed23) call4_image_pane_ParamLimits

0x4618,	// (0x0001ed23) call4_image_pane

0x4677,	// (0x0001ed82) call4_windows_conf_pane_ParamLimits

0x46ba,	// (0x0001edc5) popup_call4_audio_in_window_ParamLimits

0x46ba,	// (0x0001edc5) popup_call4_audio_in_window

0xbe24,	// (0x0002652f) bg_popup_call2_act_pane_cp02

0x02cd,	// (0x0001a9d8) call4_list_conf_pane

0xc563,	// (0x00026c6e) call4_image_pane_g1

0xc563,	// (0x00026c6e) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00029797) call4_image_pane_g

0x06c1,	// (0x0001adcc) list_single_graphic_popup_conf4_pane_ParamLimits

0x06c1,	// (0x0001adcc) list_single_graphic_popup_conf4_pane

0xbe24,	// (0x0002652f) list_highlight_pane_cp022

0x06d4,	// (0x0001addf) list_single_graphic_popup_conf4_pane_g1

0xcec2,	// (0x000275cd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8de,	// (0x00029fe9) list_single_graphic_popup_conf4_pane_g

0x06dc,	// (0x0001ade7) list_single_graphic_popup_conf4_pane_t1

0x58ce,	// (0x0001ffd9) popup_vtel_slider_window_ParamLimits

0x58ce,	// (0x0001ffd9) popup_vtel_slider_window

0x023b,	// (0x0001a946) dialer2_ne_pane_t2_ParamLimits

0x023b,	// (0x0001a946) dialer2_ne_pane_t2

0x0001,

0xf7bf,	// (0x00029eca) dialer2_ne_pane_t_ParamLimits

0xf7bf,	// (0x00029eca) dialer2_ne_pane_t

0xc186,	// (0x00026891) bg_popup_sub_pane_cp010_ParamLimits

0xc186,	// (0x00026891) bg_popup_sub_pane_cp010

0x8baf,	// (0x000232ba) popup_vtel_slider_window_g1_ParamLimits

0x8baf,	// (0x000232ba) popup_vtel_slider_window_g1

0x8bbb,	// (0x000232c6) popup_vtel_slider_window_g2_ParamLimits

0x8bbb,	// (0x000232c6) popup_vtel_slider_window_g2

0x0003,

0xf8e3,	// (0x00029fee) popup_vtel_slider_window_g_ParamLimits

0xf8e3,	// (0x00029fee) popup_vtel_slider_window_g

0x8c03,	// (0x0002330e) vtel_slider_pane_ParamLimits

0x8c03,	// (0x0002330e) vtel_slider_pane

0x8c12,	// (0x0002331d) vtel_slider_pane_g1_ParamLimits

0x8c12,	// (0x0002331d) vtel_slider_pane_g1

0x8c1f,	// (0x0002332a) vtel_slider_pane_g2_ParamLimits

0x8c1f,	// (0x0002332a) vtel_slider_pane_g2

0x8c2c,	// (0x00023337) vtel_slider_pane_g3_ParamLimits

0x8c2c,	// (0x00023337) vtel_slider_pane_g3

0x8c12,	// (0x0002331d) vtel_slider_pane_g4_ParamLimits

0x8c12,	// (0x0002331d) vtel_slider_pane_g4

0x8c39,	// (0x00023344) vtel_slider_pane_g5_ParamLimits

0x8c39,	// (0x00023344) vtel_slider_pane_g5

0x0004,

0xf8ec,	// (0x00029ff7) vtel_slider_pane_g_ParamLimits

0xf8ec,	// (0x00029ff7) vtel_slider_pane_g

0x3dd9,	// (0x0001e4e4) main_gallery2_pane

0x49c2,	// (0x0001f0cd) aid_size_row_itut2_dropdow_list_ParamLimits

0x49c2,	// (0x0001f0cd) aid_size_row_itut2_dropdow_list

0x4a2c,	// (0x0001f137) grid_vitu2_function_top_pane_ParamLimits

0x4a2c,	// (0x0001f137) grid_vitu2_function_top_pane

0x4a80,	// (0x0001f18b) popup_vitu2_dropdown_list_window_ParamLimits

0x4a80,	// (0x0001f18b) popup_vitu2_dropdown_list_window

0x4aa2,	// (0x0001f1ad) popup_vitu2_match_list_window

0x4cad,	// (0x0001f3b8) cell_vitu2_function_top_pane_ParamLimits

0x4cad,	// (0x0001f3b8) cell_vitu2_function_top_pane

0x4cc7,	// (0x0001f3d2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x4cc7,	// (0x0001f3d2) cell_vitu2_function_top_pane_cp01

0x4ce3,	// (0x0001f3ee) cell_vitu2_function_top_wide_pane_ParamLimits

0x4ce3,	// (0x0001f3ee) cell_vitu2_function_top_wide_pane

0x3dd9,	// (0x0001e4e4) bg_button_pane_cp012

0x4d01,	// (0x0001f40c) cell_vitu2_function_top_pane_g1

0x4d15,	// (0x0001f420) bg_button_pane_cp013_ParamLimits

0x4d15,	// (0x0001f420) bg_button_pane_cp013

0x8c46,	// (0x00023351) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8c46,	// (0x00023351) cell_vitu2_function_top_wide_pane_g1

0x39b4,	// (0x0001e0bf) bg_popup_sub_pane_cp20

0x4d31,	// (0x0001f43c) list_vitu2_match_list_pane

0x042a,	// (0x0001ab35) bg_popup_sub_pane_cp20_g1

0x0432,	// (0x0001ab3d) bg_popup_sub_pane_cp20_g2

0xc9eb,	// (0x000270f6) bg_popup_sub_pane_cp20_g3

0x043a,	// (0x0001ab45) bg_popup_sub_pane_cp20_g4

0xc9cb,	// (0x000270d6) bg_popup_sub_pane_cp20_g5

0x070e,	// (0x0001ae19) bg_popup_sub_pane_cp20_g6

0x044a,	// (0x0001ab55) bg_popup_sub_pane_cp20_g7

0x0452,	// (0x0001ab5d) bg_popup_sub_pane_cp20_g8

0x045a,	// (0x0001ab65) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f7,	// (0x0002a002) bg_popup_sub_pane_cp20_g

0x4d49,	// (0x0001f454) list_vitu2_match_list_item_pane_ParamLimits

0x4d49,	// (0x0001f454) list_vitu2_match_list_item_pane

0x4d5b,	// (0x0001f466) list_vitu2_match_list_item_pane_t1

0x39c2,	// (0x0001e0cd) bg_popup_sub_pane_cp21

0xc7d2,	// (0x00026edd) grid_vitu2_dropdown_list_pane

0x4d69,	// (0x0001f474) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x4d69,	// (0x0001f474) cell_vitu2_dropdown_list_char_pane

0x4d8b,	// (0x0001f496) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x4d8b,	// (0x0001f496) cell_vitu2_dropdown_list_ctrl_pane

0x0748,	// (0x0001ae53) cell_vitu2_dropdown_list_char_pane_g1

0x073f,	// (0x0001ae4a) cell_vitu2_dropdown_list_char_pane_g2

0x0736,	// (0x0001ae41) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf90a,	// (0x0002a015) cell_vitu2_dropdown_list_char_pane_g

0x4db3,	// (0x0001f4be) cell_vitu2_dropdown_list_char_pane_t1

0x8c5e,	// (0x00023369) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8c5e,	// (0x00023369) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8c6e,	// (0x00023379) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8c6e,	// (0x00023379) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8c7f,	// (0x0002338a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8c7f,	// (0x0002338a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x4dc1,	// (0x0001f4cc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x4dc1,	// (0x0001f4cc) cell_vitu2_dropdown_list_ctrl_pane_g4

0x17f7,	// (0x0001bf02) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x17f7,	// (0x0001bf02) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf911,	// (0x0002a01c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf911,	// (0x0002a01c) cell_vitu2_dropdown_list_ctrl_pane_g

0x8c8f,	// (0x0002339a) aid_size_cell_gallery2_ParamLimits

0x8c8f,	// (0x0002339a) aid_size_cell_gallery2

0x8ca9,	// (0x000233b4) grid_gallery2_pane_ParamLimits

0x8ca9,	// (0x000233b4) grid_gallery2_pane

0x8cc0,	// (0x000233cb) scroll_pane_cp029_ParamLimits

0x8cc0,	// (0x000233cb) scroll_pane_cp029

0x8cd0,	// (0x000233db) cell_gallery2_pane_ParamLimits

0x8cd0,	// (0x000233db) cell_gallery2_pane

0xc821,	// (0x00026f2c) cell_gallery2_pane_g2

0x8d25,	// (0x00023430) cell_gallery2_pane_g3

0x0751,	// (0x0001ae5c) cell_gallery2_pane_g4

0x0759,	// (0x0001ae64) cell_gallery2_pane_g5

0xc7d2,	// (0x00026edd) grid_highlight_pane_cp10

0x4aa2,	// (0x0001f1ad) popup_vitu2_match_list_window_ParamLimits

0x4ab4,	// (0x0001f1bf) popup_vitu2_query_window_ParamLimits

0x4ab4,	// (0x0001f1bf) popup_vitu2_query_window

0x39c2,	// (0x0001e0cd) bg_vitu2_candi_button_pane

0x0748,	// (0x0001ae53) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x073f,	// (0x0001ae4a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0736,	// (0x0001ae41) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8d2d,	// (0x00023438) bg_button_pane_cp015

0x8d42,	// (0x0002344d) bg_button_pane_cp016

0x8d4e,	// (0x00023459) bg_button_pane_cp017

0xd34b,	// (0x00027a56) bg_popup_sub_pane_cp22

0x0761,	// (0x0001ae6c) popup_vitu2_query_window_g1

0x8d8e,	// (0x00023499) popup_vitu2_query_window_g2

0x0002,

0xf91c,	// (0x0002a027) popup_vitu2_query_window_g

0x8db2,	// (0x000234bd) popup_vitu2_query_window_t1_ParamLimits

0x8db2,	// (0x000234bd) popup_vitu2_query_window_t1

0x8de5,	// (0x000234f0) popup_vitu2_query_window_t2_ParamLimits

0x8de5,	// (0x000234f0) popup_vitu2_query_window_t2

0x8df7,	// (0x00023502) popup_vitu2_query_window_t3_ParamLimits

0x8df7,	// (0x00023502) popup_vitu2_query_window_t3

0x8e1f,	// (0x0002352a) popup_vitu2_query_window_t4_ParamLimits

0x8e1f,	// (0x0002352a) popup_vitu2_query_window_t4

0x8e33,	// (0x0002353e) popup_vitu2_query_window_t5_ParamLimits

0x8e33,	// (0x0002353e) popup_vitu2_query_window_t5

0x0006,

0xf923,	// (0x0002a02e) popup_vitu2_query_window_t_ParamLimits

0xf923,	// (0x0002a02e) popup_vitu2_query_window_t

0x0552,	// (0x0001ac5d) main_cset_text_pane

0x88b7,	// (0x00022fc2) aid_area_touch_slider_ParamLimits

0x88d3,	// (0x00022fde) cset_slider_pane_ParamLimits

0x88f6,	// (0x00023001) main_cset_slider_pane_g1_ParamLimits

0x890b,	// (0x00023016) main_cset_slider_pane_g2_ParamLimits

0x0594,	// (0x0001ac9f) main_cset_slider_pane_g3_ParamLimits

0x0594,	// (0x0001ac9f) main_cset_slider_pane_g3

0x8920,	// (0x0002302b) main_cset_slider_pane_g4_ParamLimits

0x8920,	// (0x0002302b) main_cset_slider_pane_g4

0x892f,	// (0x0002303a) main_cset_slider_pane_g5_ParamLimits

0x892f,	// (0x0002303a) main_cset_slider_pane_g5

0x893d,	// (0x00023048) main_cset_slider_pane_g6_ParamLimits

0x893d,	// (0x00023048) main_cset_slider_pane_g6

0xf880,	// (0x00029f8b) main_cset_slider_pane_g_ParamLimits

0x05dc,	// (0x0001ace7) main_cset_slider_pane_t1_ParamLimits

0x89d1,	// (0x000230dc) main_cset_slider_pane_t2_ParamLimits

0x89eb,	// (0x000230f6) main_cset_slider_pane_t3_ParamLimits

0x8a05,	// (0x00023110) main_cset_slider_pane_t4_ParamLimits

0x8a23,	// (0x0002312e) main_cset_slider_pane_t5_ParamLimits

0x8a41,	// (0x0002314c) main_cset_slider_pane_t6_ParamLimits

0x8a58,	// (0x00023163) main_cset_slider_pane_t7_ParamLimits

0x8a86,	// (0x00023191) main_cset_slider_pane_t8_ParamLimits

0x8a86,	// (0x00023191) main_cset_slider_pane_t8

0x8aae,	// (0x000231b9) main_cset_slider_pane_t9_ParamLimits

0x8aae,	// (0x000231b9) main_cset_slider_pane_t9

0x8ad6,	// (0x000231e1) main_cset_slider_pane_t10_ParamLimits

0x8ad6,	// (0x000231e1) main_cset_slider_pane_t10

0x8afe,	// (0x00023209) main_cset_slider_pane_t11_ParamLimits

0x8afe,	// (0x00023209) main_cset_slider_pane_t11

0x8b28,	// (0x00023233) main_cset_slider_pane_t12_ParamLimits

0x8b28,	// (0x00023233) main_cset_slider_pane_t12

0x8b47,	// (0x00023252) main_cset_slider_pane_t13_ParamLimits

0x8b47,	// (0x00023252) main_cset_slider_pane_t13

0xf8a5,	// (0x00029fb0) main_cset_slider_pane_t_ParamLimits

0xbe24,	// (0x0002652f) bg_popup_sub_pane_cp011

0x076d,	// (0x0001ae78) main_cset_text_pane_g1

0x0775,	// (0x0001ae80) main_cset_text_pane_t1

0x0783,	// (0x0001ae8e) main_cset_text_pane_t2

0x0791,	// (0x0001ae9c) main_cset_text_pane_t3

0x079f,	// (0x0001aeaa) main_cset_text_pane_t4

0x07ad,	// (0x0001aeb8) main_cset_text_pane_t5

0x07bb,	// (0x0001aec6) main_cset_text_pane_t6

0x07c9,	// (0x0001aed4) main_cset_text_pane_t7

0x0006,

0xf932,	// (0x0002a03d) main_cset_text_pane_t

0x39c2,	// (0x0001e0cd) main_cam4_burst_pane

0x39c2,	// (0x0001e0cd) main_cam5_pane

0x0514,	// (0x0001ac1f) bg_button_pane_cp019

0x051d,	// (0x0001ac28) bg_button_pane_cp020

0x05a0,	// (0x0001acab) main_cset_slider_pane_g7_ParamLimits

0x05a0,	// (0x0001acab) main_cset_slider_pane_g7

0x05ac,	// (0x0001acb7) main_cset_slider_pane_g8_ParamLimits

0x05ac,	// (0x0001acb7) main_cset_slider_pane_g8

0x8951,	// (0x0002305c) main_cset_slider_pane_g9_ParamLimits

0x8951,	// (0x0002305c) main_cset_slider_pane_g9

0x895d,	// (0x00023068) main_cset_slider_pane_g10_ParamLimits

0x895d,	// (0x00023068) main_cset_slider_pane_g10

0x8969,	// (0x00023074) main_cset_slider_pane_g11_ParamLimits

0x8969,	// (0x00023074) main_cset_slider_pane_g11

0x8975,	// (0x00023080) main_cset_slider_pane_g12_ParamLimits

0x8975,	// (0x00023080) main_cset_slider_pane_g12

0x8981,	// (0x0002308c) main_cset_slider_pane_g13_ParamLimits

0x8981,	// (0x0002308c) main_cset_slider_pane_g13

0x898f,	// (0x0002309a) main_cset_slider_pane_g14_ParamLimits

0x898f,	// (0x0002309a) main_cset_slider_pane_g14

0x899d,	// (0x000230a8) main_cset_slider_pane_g15_ParamLimits

0x899d,	// (0x000230a8) main_cset_slider_pane_g15

0x0604,	// (0x0001ad0f) main_cset_slider_pane_t14_ParamLimits

0x0604,	// (0x0001ad0f) main_cset_slider_pane_t14

0x063d,	// (0x0001ad48) main_cset_slider_pane_t15_ParamLimits

0x063d,	// (0x0001ad48) main_cset_slider_pane_t15

0x8e9d,	// (0x000235a8) aid_cam4_burst_size_cell_ParamLimits

0x8e9d,	// (0x000235a8) aid_cam4_burst_size_cell

0x8eb9,	// (0x000235c4) grid_cam4_burst_pane_ParamLimits

0x8eb9,	// (0x000235c4) grid_cam4_burst_pane

0x8ee9,	// (0x000235f4) linegrid_cam4_burst_pane_ParamLimits

0x8ee9,	// (0x000235f4) linegrid_cam4_burst_pane

0x8f09,	// (0x00023614) scroll_pane_cp30_ParamLimits

0x8f09,	// (0x00023614) scroll_pane_cp30

0x8f15,	// (0x00023620) cell_cam4_burst_pane_ParamLimits

0x8f15,	// (0x00023620) cell_cam4_burst_pane

0x07e3,	// (0x0001aeee) linegrid_cam4_burst_pane_g1_ParamLimits

0x07e3,	// (0x0001aeee) linegrid_cam4_burst_pane_g1

0x8f51,	// (0x0002365c) linegrid_cam4_burst_pane_g2_ParamLimits

0x8f51,	// (0x0002365c) linegrid_cam4_burst_pane_g2

0x07f0,	// (0x0001aefb) linegrid_cam4_burst_pane_g3_ParamLimits

0x07f0,	// (0x0001aefb) linegrid_cam4_burst_pane_g3

0x0002,

0xf941,	// (0x0002a04c) linegrid_cam4_burst_pane_g_ParamLimits

0xf941,	// (0x0002a04c) linegrid_cam4_burst_pane_g

0x8f62,	// (0x0002366d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8f62,	// (0x0002366d) linegrid_cam4_burst_pane_g3_copy1

0x07fd,	// (0x0001af08) linegrid_cam4_burst_pane_g4_ParamLimits

0x07fd,	// (0x0001af08) linegrid_cam4_burst_pane_g4

0x8f7c,	// (0x00023687) linegrid_cam4_burst_pane_g5_ParamLimits

0x8f7c,	// (0x00023687) linegrid_cam4_burst_pane_g5

0x8f8d,	// (0x00023698) linegrid_cam4_burst_pane_g6_ParamLimits

0x8f8d,	// (0x00023698) linegrid_cam4_burst_pane_g6

0x080a,	// (0x0001af15) linegrid_cam4_burst_pane_g7_ParamLimits

0x080a,	// (0x0001af15) linegrid_cam4_burst_pane_g7

0x8f9e,	// (0x000236a9) cell_cam4_burst_pane_g1

0x0823,	// (0x0001af2e) main_cam5_pane_t1_ParamLimits

0x0823,	// (0x0001af2e) main_cam5_pane_t1

0x0835,	// (0x0001af40) main_cam5_pane_t2_ParamLimits

0x0835,	// (0x0001af40) main_cam5_pane_t2

0x0847,	// (0x0001af52) main_cam5_pane_t3_ParamLimits

0x0847,	// (0x0001af52) main_cam5_pane_t3

0x0859,	// (0x0001af64) main_cam5_pane_t4_ParamLimits

0x0859,	// (0x0001af64) main_cam5_pane_t4

0x0871,	// (0x0001af7c) main_cam5_pane_t5_ParamLimits

0x0871,	// (0x0001af7c) main_cam5_pane_t5

0x0885,	// (0x0001af90) main_cam5_pane_t6_ParamLimits

0x0885,	// (0x0001af90) main_cam5_pane_t6

0x0899,	// (0x0001afa4) main_cam5_pane_t7_ParamLimits

0x0899,	// (0x0001afa4) main_cam5_pane_t7

0x08ab,	// (0x0001afb6) main_cam5_pane_t8_ParamLimits

0x08ab,	// (0x0001afb6) main_cam5_pane_t8

0x08c7,	// (0x0001afd2) main_cam5_pane_t9_ParamLimits

0x08c7,	// (0x0001afd2) main_cam5_pane_t9

0x08d9,	// (0x0001afe4) main_cam5_pane_t10_ParamLimits

0x08d9,	// (0x0001afe4) main_cam5_pane_t10

0x08eb,	// (0x0001aff6) main_cam5_pane_t11_ParamLimits

0x08eb,	// (0x0001aff6) main_cam5_pane_t11

0x08fd,	// (0x0001b008) main_cam5_pane_t12_ParamLimits

0x08fd,	// (0x0001b008) main_cam5_pane_t12

0x0912,	// (0x0001b01d) main_cam5_pane_t13_ParamLimits

0x0912,	// (0x0001b01d) main_cam5_pane_t13

0x000c,

0xf94d,	// (0x0002a058) main_cam5_pane_t_ParamLimits

0xf94d,	// (0x0002a058) main_cam5_pane_t

0x3973,	// (0x0001e07e) popup_scut_keymap_window_ParamLimits

0x3973,	// (0x0001e07e) popup_scut_keymap_window

0x8fb1,	// (0x000236bc) aid_size_cell_brow_shortcut

0xc7d2,	// (0x00026edd) bg_popup_window_pane_cp010

0x8fbd,	// (0x000236c8) grid_scut_pane

0x8fc9,	// (0x000236d4) cell_scut_pane_ParamLimits

0x8fc9,	// (0x000236d4) cell_scut_pane

0x8fe0,	// (0x000236eb) cell_scut_pane_g1

0x092f,	// (0x0001b03a) cell_scut_pane_t1

0x093e,	// (0x0001b049) cell_scut_pane_t2

0x8fe9,	// (0x000236f4) cell_scut_pane_t3

0x0002,

0xf968,	// (0x0002a073) cell_scut_pane_t

0x7cd6,	// (0x000223e1) main_mup3_pane_g8_ParamLimits

0x7cd6,	// (0x000223e1) main_mup3_pane_g8

0x49d2,	// (0x0001f0dd) area_vitu2_query_pane_ParamLimits

0x49d2,	// (0x0001f0dd) area_vitu2_query_pane

0x8d5a,	// (0x00023465) input_focus_pane_cp08

0x094d,	// (0x0001b058) area_vitu2_query_pane_g1

0x8ff7,	// (0x00023702) area_vitu2_query_pane_g2

0x0001,

0xf96f,	// (0x0002a07a) area_vitu2_query_pane_g

0x9008,	// (0x00023713) area_vitu2_query_pane_t1_ParamLimits

0x9008,	// (0x00023713) area_vitu2_query_pane_t1

0x901c,	// (0x00023727) area_vitu2_query_pane_t2_ParamLimits

0x901c,	// (0x00023727) area_vitu2_query_pane_t2

0x9030,	// (0x0002373b) area_vitu2_query_pane_t3_ParamLimits

0x9030,	// (0x0002373b) area_vitu2_query_pane_t3

0x0959,	// (0x0001b064) area_vitu2_query_pane_t4_ParamLimits

0x0959,	// (0x0001b064) area_vitu2_query_pane_t4

0x0981,	// (0x0001b08c) area_vitu2_query_pane_t5_ParamLimits

0x0981,	// (0x0001b08c) area_vitu2_query_pane_t5

0x09a9,	// (0x0001b0b4) area_vitu2_query_pane_t6_ParamLimits

0x09a9,	// (0x0001b0b4) area_vitu2_query_pane_t6

0x0006,

0xf974,	// (0x0002a07f) area_vitu2_query_pane_t_ParamLimits

0xf974,	// (0x0002a07f) area_vitu2_query_pane_t

0x8d42,	// (0x0002344d) bg_button_pane_cp018

0x9058,	// (0x00023763) bg_button_pane_cp021

0x9064,	// (0x0002376f) bg_button_pane_cp022

0x9087,	// (0x00023792) input_focus_pane_cp09

0xcfd1,	// (0x000276dc) aid_size_touch_mv_arrow_left

0xcffc,	// (0x00027707) aid_size_touch_mv_arrow_right

0x89b5,	// (0x000230c0) main_cset_slider_pane_g16_ParamLimits

0x89b5,	// (0x000230c0) main_cset_slider_pane_g16

0x89c3,	// (0x000230ce) main_cset_slider_pane_g17_ParamLimits

0x89c3,	// (0x000230ce) main_cset_slider_pane_g17

0x8f9e,	// (0x000236a9) cell_cam4_burst_pane_g1_ParamLimits

0xbe24,	// (0x0002652f) compa_mode_pane

0x8bc7,	// (0x000232d2) popup_vtel_slider_window_g3_ParamLimits

0x8bc7,	// (0x000232d2) popup_vtel_slider_window_g3

0x8bdb,	// (0x000232e6) popup_vtel_slider_window_g4_ParamLimits

0x8bdb,	// (0x000232e6) popup_vtel_slider_window_g4

0x8bef,	// (0x000232fa) popup_vtel_slider_window_t1_ParamLimits

0x8bef,	// (0x000232fa) popup_vtel_slider_window_t1

0x39c2,	// (0x0001e0cd) main_cl_pane

0x3e73,	// (0x0001e57e) popup_imed_adjust2_window_ParamLimits

0xd34b,	// (0x00027a56) bg_tb_trans_pane_cp05_ParamLimits

0xee04,	// (0x0002950f) popup_imed_adjust2_window_g1_ParamLimits

0xee13,	// (0x0002951e) popup_imed_adjust2_window_g2_ParamLimits

0xee13,	// (0x0002951e) popup_imed_adjust2_window_g2

0xee1f,	// (0x0002952a) popup_imed_adjust2_window_g3_ParamLimits

0xee1f,	// (0x0002952a) popup_imed_adjust2_window_g3

0x0002,

0xf6f4,	// (0x00029dff) popup_imed_adjust2_window_g_ParamLimits

0xf6f4,	// (0x00029dff) popup_imed_adjust2_window_g

0xee2b,	// (0x00029536) popup_imed_adjust2_window_t1_ParamLimits

0xee43,	// (0x0002954e) slider_imed_adjust_pane_ParamLimits

0xee57,	// (0x00029562) slider_imed_adjust_pane_g1_ParamLimits

0xee67,	// (0x00029572) slider_imed_adjust_pane_g2_ParamLimits

0xee77,	// (0x00029582) slider_imed_adjust_pane_g3_ParamLimits

0xee88,	// (0x00029593) slider_imed_adjust_pane_g4_ParamLimits

0xf6fb,	// (0x00029e06) slider_imed_adjust_pane_g_ParamLimits

0x4765,	// (0x0001ee70) aid_touch_area_cam4_ParamLimits

0x4765,	// (0x0001ee70) aid_touch_area_cam4

0x4775,	// (0x0001ee80) battery_pane_cp01

0x47fc,	// (0x0001ef07) main_camera4_pane_g6_ParamLimits

0x47fc,	// (0x0001ef07) main_camera4_pane_g6

0x481a,	// (0x0001ef25) main_camera4_pane_t2_ParamLimits

0x481a,	// (0x0001ef25) main_camera4_pane_t2

0x0001,

0xf7f3,	// (0x00029efe) main_camera4_pane_t_ParamLimits

0xf7f3,	// (0x00029efe) main_camera4_pane_t

0x4877,	// (0x0001ef82) aid_touch_area_vid4_ParamLimits

0x4877,	// (0x0001ef82) aid_touch_area_vid4

0x48b7,	// (0x0001efc2) main_video4_pane_g5_ParamLimits

0x48b7,	// (0x0001efc2) main_video4_pane_g5

0x48db,	// (0x0001efe6) vid4_progress_pane_ParamLimits

0x48db,	// (0x0001efe6) vid4_progress_pane

0x05d0,	// (0x0001acdb) main_cset_slider_pane_g18_ParamLimits

0x05d0,	// (0x0001acdb) main_cset_slider_pane_g18

0x0817,	// (0x0001af22) cell_cam4_burst_pane_g2_ParamLimits

0x0817,	// (0x0001af22) cell_cam4_burst_pane_g2

0x0001,

0xf948,	// (0x0002a053) cell_cam4_burst_pane_g_ParamLimits

0xf948,	// (0x0002a053) cell_cam4_burst_pane_g

0x9097,	// (0x000237a2) bg_cl_pane_ParamLimits

0x9097,	// (0x000237a2) bg_cl_pane

0x90a3,	// (0x000237ae) cl_header_pane_ParamLimits

0x90a3,	// (0x000237ae) cl_header_pane

0x90af,	// (0x000237ba) cl_listscroll_pane_ParamLimits

0x90af,	// (0x000237ba) cl_listscroll_pane

0x09f5,	// (0x0001b100) bg_cl_pane_g1

0x09fd,	// (0x0001b108) bg_cl_pane_g2

0x0a05,	// (0x0001b110) bg_cl_pane_g3

0x0a0d,	// (0x0001b118) bg_cl_pane_g4

0x0a15,	// (0x0001b120) bg_cl_pane_g5

0x0a1d,	// (0x0001b128) bg_cl_pane_g6

0x0a25,	// (0x0001b130) bg_cl_pane_g7

0x0a2d,	// (0x0001b138) bg_cl_pane_g8

0x0a35,	// (0x0001b140) bg_cl_pane_g9

0x0008,

0xf983,	// (0x0002a08e) bg_cl_pane_g

0x90bb,	// (0x000237c6) aid_height_cl_leading_ParamLimits

0x90bb,	// (0x000237c6) aid_height_cl_leading

0x90c7,	// (0x000237d2) aid_height_cl_text_ParamLimits

0x90c7,	// (0x000237d2) aid_height_cl_text

0xc517,	// (0x00026c22) bg_cl_header_pane_ParamLimits

0xc517,	// (0x00026c22) bg_cl_header_pane

0x90df,	// (0x000237ea) cl_header_pane_g1_ParamLimits

0x90df,	// (0x000237ea) cl_header_pane_g1

0x90ec,	// (0x000237f7) cl_header_pane_t1_ParamLimits

0x90ec,	// (0x000237f7) cl_header_pane_t1

0x0a3d,	// (0x0001b148) cl_list_pane

0x058b,	// (0x0001ac96) hc_scroll_pane_cp01

0xc9cb,	// (0x000270d6) bg_cl_header_pane_g1

0x042a,	// (0x0001ab35) bg_cl_header_pane_g2

0xc9eb,	// (0x000270f6) bg_cl_header_pane_g3

0x043a,	// (0x0001ab45) bg_cl_header_pane_g4

0x0432,	// (0x0001ab3d) bg_cl_header_pane_g5

0x070e,	// (0x0001ae19) bg_cl_header_pane_g6

0x0452,	// (0x0001ab5d) bg_cl_header_pane_g7

0x045a,	// (0x0001ab65) bg_cl_header_pane_g8

0x044a,	// (0x0001ab55) bg_cl_header_pane_g9

0x0008,

0xf996,	// (0x0002a0a1) bg_cl_header_pane_g

0x90fe,	// (0x00023809) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x90fe,	// (0x00023809) hc_cl_list_double_graphic_heading_pane

0x9112,	// (0x0002381d) hc_cl_list_single_graphic_pane_ParamLimits

0x9112,	// (0x0002381d) hc_cl_list_single_graphic_pane

0x912c,	// (0x00023837) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x912c,	// (0x00023837) hc_cl_list_single_graphic_pane_g1

0x9138,	// (0x00023843) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9138,	// (0x00023843) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a0b4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a0b4) hc_cl_list_single_graphic_pane_g

0x914c,	// (0x00023857) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x914c,	// (0x00023857) hc_cl_list_single_graphic_pane_t1

0x912c,	// (0x00023837) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x912c,	// (0x00023837) hc_cl_list_double_graphic_heading_pane_g1

0x9161,	// (0x0002386c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9161,	// (0x0002386c) hc_cl_list_double_graphic_heading_pane_g2

0x9175,	// (0x00023880) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9175,	// (0x00023880) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9ae,	// (0x0002a0b9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9ae,	// (0x0002a0b9) hc_cl_list_double_graphic_heading_pane_g

0x9189,	// (0x00023894) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9189,	// (0x00023894) hc_cl_list_double_graphic_heading_pane_t1

0x919e,	// (0x000238a9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x919e,	// (0x000238a9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9b5,	// (0x0002a0c0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9b5,	// (0x0002a0c0) hc_cl_list_double_graphic_heading_pane_t

0x4de2,	// (0x0001f4ed) vid4_progress_pane_g1

0x4df2,	// (0x0001f4fd) vid4_progress_pane_g2

0x4e02,	// (0x0001f50d) vid4_progress_pane_g3

0x4e14,	// (0x0001f51f) vid4_progress_pane_g4

0x0004,

0xf9ba,	// (0x0002a0c5) vid4_progress_pane_g

0x4e2c,	// (0x0001f537) vid4_progress_pane_t1

0x4e42,	// (0x0001f54d) vid4_progress_pane_t2

0x0002,

0xf9c5,	// (0x0002a0d0) vid4_progress_pane_t

0x4e6d,	// (0x0001f578) wait_bar_pane_cp07

0xe68b,	// (0x00028d96) blid_firmament_pane_ParamLimits

0xe6ce,	// (0x00028dd9) popup_blid_sat_info2_window_g1

0xe6f2,	// (0x00028dfd) popup_blid_sat_info2_window_t3

0xe700,	// (0x00028e0b) popup_blid_sat_info2_window_t4

0xe70e,	// (0x00028e19) popup_blid_sat_info2_window_t5

0xe71c,	// (0x00028e27) popup_blid_sat_info2_window_t6

0xe72c,	// (0x00028e37) popup_blid_sat_info2_window_t7

0xe73a,	// (0x00028e45) popup_blid_sat_info2_window_t8

0xe748,	// (0x00028e53) popup_blid_sat_info2_window_t9

0xe756,	// (0x00028e61) popup_blid_sat_info2_window_t10

0xe817,	// (0x00028f22) aid_firma_cardinal_ParamLimits

0xe82b,	// (0x00028f36) blid_firmament_pane_t1_ParamLimits

0xe842,	// (0x00028f4d) blid_firmament_pane_t2_ParamLimits

0xe859,	// (0x00028f64) blid_firmament_pane_t3_ParamLimits

0xe870,	// (0x00028f7b) blid_firmament_pane_t4_ParamLimits

0xf5ed,	// (0x00029cf8) blid_firmament_pane_t_ParamLimits

0xe887,	// (0x00028f92) blid_sat_info_pane_ParamLimits

0x3dd9,	// (0x0001e4e4) main_cam_set_pane_ParamLimits

0x82c8,	// (0x000229d3) aid_size_cell_colour_35_ParamLimits

0x82e2,	// (0x000229ed) aid_size_cell_colour_112_ParamLimits

0x82f9,	// (0x00022a04) aid_size_cell_effect_ParamLimits

0xc186,	// (0x00026891) bg_tb_trans_pane_cp02_ParamLimits

0xce4a,	// (0x00027555) heading_imed_pane_ParamLimits

0x8313,	// (0x00022a1e) listscroll_imed_pane_ParamLimits

0xdb64,	// (0x0002826f) popup_call2_audio_first_window_g5_ParamLimits

0xdb64,	// (0x0002826f) popup_call2_audio_first_window_g5

0x44a1,	// (0x0001ebac) aid_size_touch_image3_arrow_left_ParamLimits

0x44a1,	// (0x0001ebac) aid_size_touch_image3_arrow_left

0x44b7,	// (0x0001ebc2) aid_size_touch_image3_arrow_right_ParamLimits

0x44b7,	// (0x0001ebc2) aid_size_touch_image3_arrow_right

0x4e57,	// (0x0001f562) vid4_progress_pane_t3

0x846d,	// (0x00022b78) main_hwr_training_symbol_option_pane_ParamLimits

0x846d,	// (0x00022b78) main_hwr_training_symbol_option_pane

0xef85,	// (0x00029690) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x00029690) popup_hwr_training_preview_window

0x4117,	// (0x0001e822) hwr_training_navi_pane_g5_ParamLimits

0x4117,	// (0x0001e822) hwr_training_navi_pane_g5

0x0418,	// (0x0001ab23) popup_char_count_window

0x39b4,	// (0x0001e0bf) bg_popup_sub_pane_cp20_ParamLimits

0x4d31,	// (0x0001f43c) list_vitu2_match_list_pane_ParamLimits

0x4d3d,	// (0x0001f448) vitu2_page_scroll_pane_ParamLimits

0x4d3d,	// (0x0001f448) vitu2_page_scroll_pane

0x0ad3,	// (0x0001b1de) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0ad3,	// (0x0001b1de) list_single_hwr_training_symbol_option_pane

0x0ae6,	// (0x0001b1f1) list_single_hwr_training_symbol_option_pane_g1

0x0aee,	// (0x0001b1f9) list_single_hwr_training_symbol_option_pane_t1

0x0afc,	// (0x0001b207) bg_button_pane_cp023

0x0b05,	// (0x0001b210) bg_button_pane_cp024

0x0b38,	// (0x0001b243) vitu2_page_scroll_pane_g1

0x0b40,	// (0x0001b24b) vitu2_page_scroll_pane_g2

0x0001,

0xf9cc,	// (0x0002a0d7) vitu2_page_scroll_pane_g

0x0b48,	// (0x0001b253) vitu2_page_scroll_pane_t1

0xc72b,	// (0x00026e36) popup_char_count_window_g1

0x0b57,	// (0x0001b262) popup_char_count_window_g2

0x0566,	// (0x0001ac71) popup_char_count_window_g3

0x0002,

0xf9d1,	// (0x0002a0dc) popup_char_count_window_g

0x0b60,	// (0x0001b26b) popup_char_count_window_t1

0x39c2,	// (0x0001e0cd) main_vded2_pane

0xedd3,	// (0x000294de) aid_size_cell_imed_line

0xedfa,	// (0x00029505) grid_imed_line_width_pane

0x4947,	// (0x0001f052) vid4_indicators_pane_g4

0x0b6e,	// (0x0001b279) cell_imed_line_width_pane_ParamLimits

0x0b6e,	// (0x0001b279) cell_imed_line_width_pane

0x0b82,	// (0x0001b28d) cell_imed_line_width_pane_g1

0x0b8b,	// (0x0001b296) cell_imed_line_width_pane_g2

0x0001,

0xf9d8,	// (0x0002a0e3) cell_imed_line_width_pane_g

0x91c7,	// (0x000238d2) main_vded2_pane_g1_ParamLimits

0x91c7,	// (0x000238d2) main_vded2_pane_g1

0x91d4,	// (0x000238df) main_vded2_pane_g2_ParamLimits

0x91d4,	// (0x000238df) main_vded2_pane_g2

0x0001,

0xf9dd,	// (0x0002a0e8) main_vded2_pane_g_ParamLimits

0xf9dd,	// (0x0002a0e8) main_vded2_pane_g

0x91e2,	// (0x000238ed) vded2_slider_pane_ParamLimits

0x91e2,	// (0x000238ed) vded2_slider_pane

0x91ef,	// (0x000238fa) aid_size_touch_vded2_end

0x91f9,	// (0x00023904) aid_size_touch_vded2_playhead

0x0b93,	// (0x0001b29e) aid_size_touch_vded2_start

0x0b9b,	// (0x0001b2a6) vded2_slider_bg_pane

0x0ba4,	// (0x0001b2af) vded2_slider_pane_g1

0x0bad,	// (0x0001b2b8) vded2_slider_pane_g2

0x9201,	// (0x0002390c) vded2_slider_pane_g3

0x0002,

0xf9e2,	// (0x0002a0ed) vded2_slider_pane_g

0x0bb5,	// (0x0001b2c0) vded2_slider_bg_pane_g1

0x0bbe,	// (0x0001b2c9) vded2_slider_bg_pane_g2

0x0bc7,	// (0x0001b2d2) vded2_slider_bg_pane_g3

0x0002,

0xf9e9,	// (0x0002a0f4) vded2_slider_bg_pane_g

0x7017,	// (0x00021722) aid_postcard_touch_down_pane_ParamLimits

0x7017,	// (0x00021722) aid_postcard_touch_down_pane

0x7027,	// (0x00021732) aid_postcard_touch_up_pane_ParamLimits

0x7027,	// (0x00021732) aid_postcard_touch_up_pane

0x39c2,	// (0x0001e0cd) main_blid2_pane

0x3e02,	// (0x0001e50d) popup_blid2_search_window

0xbe24,	// (0x0002652f) blid2_gps_pane

0xbe24,	// (0x0002652f) blid2_navig_pane

0xbe24,	// (0x0002652f) blid2_search_pane

0xbe24,	// (0x0002652f) blid2_tripm_pane

0x920a,	// (0x00023915) blid2_search_pane_g1_ParamLimits

0x920a,	// (0x00023915) blid2_search_pane_g1

0x921a,	// (0x00023925) blid2_search_pane_t1_ParamLimits

0x921a,	// (0x00023925) blid2_search_pane_t1

0x922c,	// (0x00023937) aid_size_cell_blid2_gps_ParamLimits

0x922c,	// (0x00023937) aid_size_cell_blid2_gps

0x923c,	// (0x00023947) blid2_gps_pane_g1_ParamLimits

0x923c,	// (0x00023947) blid2_gps_pane_g1

0x9248,	// (0x00023953) grid_blid2_satellite_pane_ParamLimits

0x9248,	// (0x00023953) grid_blid2_satellite_pane

0x9258,	// (0x00023963) blid2_navig_pane_g1_ParamLimits

0x9258,	// (0x00023963) blid2_navig_pane_g1

0x9264,	// (0x0002396f) blid2_navig_pane_t1_ParamLimits

0x9264,	// (0x0002396f) blid2_navig_pane_t1

0x9276,	// (0x00023981) blid2_navig_pane_t2_ParamLimits

0x9276,	// (0x00023981) blid2_navig_pane_t2

0x0001,

0xf9f0,	// (0x0002a0fb) blid2_navig_pane_t_ParamLimits

0xf9f0,	// (0x0002a0fb) blid2_navig_pane_t

0x9288,	// (0x00023993) blid2_navig_ring_pane_ParamLimits

0x9288,	// (0x00023993) blid2_navig_ring_pane

0x9298,	// (0x000239a3) blid2_speed_pane_ParamLimits

0x9298,	// (0x000239a3) blid2_speed_pane

0x92a4,	// (0x000239af) blid2_tripm_pane_g1_ParamLimits

0x92a4,	// (0x000239af) blid2_tripm_pane_g1

0x92b4,	// (0x000239bf) blid2_tripm_pane_g2_ParamLimits

0x92b4,	// (0x000239bf) blid2_tripm_pane_g2

0x92c0,	// (0x000239cb) blid2_tripm_pane_g3_ParamLimits

0x92c0,	// (0x000239cb) blid2_tripm_pane_g3

0x92cc,	// (0x000239d7) blid2_tripm_pane_g4_ParamLimits

0x92cc,	// (0x000239d7) blid2_tripm_pane_g4

0x92d8,	// (0x000239e3) blid2_tripm_pane_g5_ParamLimits

0x92d8,	// (0x000239e3) blid2_tripm_pane_g5

0x0005,

0xf9f5,	// (0x0002a100) blid2_tripm_pane_g_ParamLimits

0xf9f5,	// (0x0002a100) blid2_tripm_pane_g

0x92f4,	// (0x000239ff) blid2_tripm_pane_t1_ParamLimits

0x92f4,	// (0x000239ff) blid2_tripm_pane_t1

0x9308,	// (0x00023a13) blid2_tripm_pane_t2_ParamLimits

0x9308,	// (0x00023a13) blid2_tripm_pane_t2

0x931a,	// (0x00023a25) blid2_tripm_pane_t3_ParamLimits

0x931a,	// (0x00023a25) blid2_tripm_pane_t3

0x0003,

0xfa02,	// (0x0002a10d) blid2_tripm_pane_t_ParamLimits

0xfa02,	// (0x0002a10d) blid2_tripm_pane_t

0x934c,	// (0x00023a57) cell_blid2_satellite_pane_ParamLimits

0x934c,	// (0x00023a57) cell_blid2_satellite_pane

0x9366,	// (0x00023a71) cell_blid2_satellite_pane_g1

0x0bd0,	// (0x0001b2db) cell_blid2_satellite_pane_t1

0xc563,	// (0x00026c6e) blid2_speed_pane_g1

0x0bde,	// (0x0001b2e9) blid2_speed_pane_t1

0x0bec,	// (0x0001b2f7) blid2_speed_pane_t2

0x0001,

0xfa0b,	// (0x0002a116) blid2_speed_pane_t

0xc563,	// (0x00026c6e) blid2_navig_ring_pane_g1

0x936f,	// (0x00023a7a) blid2_navig_ring_pane_g2

0x9377,	// (0x00023a82) blid2_navig_ring_pane_g3

0x937f,	// (0x00023a8a) blid2_navig_ring_pane_g4

0x9387,	// (0x00023a92) blid2_navig_ring_pane_g5

0x0004,

0xfa10,	// (0x0002a11b) blid2_navig_ring_pane_g

0xbe24,	// (0x0002652f) bg_popup_window_pane_cp011

0x0bfa,	// (0x0001b305) popup_blid2_search_window_g1

0x0c02,	// (0x0001b30d) popup_blid2_search_window_t1

0x0c10,	// (0x0001b31b) popup_blid2_search_window_t2

0x0001,

0xfa1b,	// (0x0002a126) popup_blid2_search_window_t

0xc8da,	// (0x00026fe5) main_browser_pane_g1

0xc5c1,	// (0x00026ccc) main_browser_pane_ParamLimits

0x3dd9,	// (0x0001e4e4) bg_button_pane_cp011_ParamLimits

0x4c56,	// (0x0001f361) cell_vitu2_function_pane_g1_ParamLimits

0xd34b,	// (0x00027a56) bg_popup_sub_pane_cp22_ParamLimits

0x8d5a,	// (0x00023465) input_focus_pane_cp08_ParamLimits

0x8d75,	// (0x00023480) popup_vitu2_query_button_pane_ParamLimits

0x8d75,	// (0x00023480) popup_vitu2_query_button_pane

0x8d84,	// (0x0002348f) popup_vitu2_query_input_button_pane

0x0761,	// (0x0001ae6c) popup_vitu2_query_window_g1_ParamLimits

0x8d8e,	// (0x00023499) popup_vitu2_query_window_g2_ParamLimits

0xf91c,	// (0x0002a027) popup_vitu2_query_window_g_ParamLimits

0xbe24,	// (0x0002652f) bg_button_pane_cp026

0x938f,	// (0x00023a9a) popup_vitu2_query_input_button_pane_g1

0xbe24,	// (0x0002652f) bg_button_pane_cp025

0x0c1e,	// (0x0001b329) popup_vitu2_query_button_pane_t1

0x798e,	// (0x00022099) main_mp3_pane_t6

0x799e,	// (0x000220a9) popup_slider_window_cp01

0x482c,	// (0x0001ef37) cam4_battery_pane

0x4906,	// (0x0001f011) cam4_battery_pane_cp02

0x4dda,	// (0x0001f4e5) cam4_battery_pane_cp01

0x4dda,	// (0x0001f4e5) cam4_battery_pane_cp03

0x0c2c,	// (0x0001b337) cam4_battery_pane_g1

0xc563,	// (0x00026c6e) cam4_battery_pane_g2

0x0001,

0xfa20,	// (0x0002a12b) cam4_battery_pane_g

0xe764,	// (0x00028e6f) popup_blid_sat_info2_window_t11

0xcfd1,	// (0x000276dc) aid_size_touch_mv_arrow_left_ParamLimits

0xcffc,	// (0x00027707) aid_size_touch_mv_arrow_right_ParamLimits

0xd05a,	// (0x00027765) navi_pane_g1_ParamLimits

0xd066,	// (0x00027771) navi_pane_g2_ParamLimits

0xd094,	// (0x0002779f) navi_pane_g3_ParamLimits

0xf311,	// (0x00029a1c) navi_pane_g_ParamLimits

0x6c2a,	// (0x00021335) navi_pane_mv_t1_ParamLimits

0x831f,	// (0x00022a2a) grid_imed_effect_pane_ParamLimits

0x578e,	// (0x0001fe99) aid_placing_vt_slider_lsc

0xc829,	// (0x00026f34) aid_placing_vt_slider_prt

0xc186,	// (0x00026891) bg_tb_trans_pane_cp01_ParamLimits

0xea02,	// (0x0002910d) popup_image_details_window_g1_ParamLimits

0xea15,	// (0x00029120) popup_image_details_window_g2_ParamLimits

0xea2a,	// (0x00029135) popup_image_details_window_g3_ParamLimits

0xea2a,	// (0x00029135) popup_image_details_window_g3

0xf62d,	// (0x00029d38) popup_image_details_window_g_ParamLimits

0xea3e,	// (0x00029149) popup_image_details_window_t1_ParamLimits

0xea50,	// (0x0002915b) popup_image_details_window_t2_ParamLimits

0xea69,	// (0x00029174) popup_image_details_window_t3_ParamLimits

0xea7d,	// (0x00029188) popup_image_details_window_t4_ParamLimits

0xea98,	// (0x000291a3) popup_image_details_window_t5_ParamLimits

0xf634,	// (0x00029d3f) popup_image_details_window_t_ParamLimits

0x90d3,	// (0x000237de) cl_header_name_pane_ParamLimits

0x90d3,	// (0x000237de) cl_header_name_pane

0x9397,	// (0x00023aa2) cl_header_name_pane_t1_ParamLimits

0x9397,	// (0x00023aa2) cl_header_name_pane_t1

0x93ae,	// (0x00023ab9) cl_header_name_pane_t2_ParamLimits

0x93ae,	// (0x00023ab9) cl_header_name_pane_t2

0x93d8,	// (0x00023ae3) cl_header_name_pane_t3_ParamLimits

0x93d8,	// (0x00023ae3) cl_header_name_pane_t3

0x0002,

0xfa25,	// (0x0002a130) cl_header_name_pane_t_ParamLimits

0xfa25,	// (0x0002a130) cl_header_name_pane_t

0xd123,	// (0x0002782e) navi_pane_mv_g2_ParamLimits

0x03e3,	// (0x0001aaee) field_vitu2_entry_pane_g1_ParamLimits

0x03ef,	// (0x0001aafa) field_vitu2_entry_pane_g2_ParamLimits

0xd241,	// (0x0002794c) field_vitu2_entry_pane_g3_ParamLimits

0xd241,	// (0x0002794c) field_vitu2_entry_pane_g3

0xf825,	// (0x00029f30) field_vitu2_entry_pane_g_ParamLimits

0x4b1c,	// (0x0001f227) cell_vitu2_itu_pane_g1_ParamLimits

0x4b34,	// (0x0001f23f) cell_vitu2_itu_pane_g2_ParamLimits

0x4b34,	// (0x0001f23f) cell_vitu2_itu_pane_g2

0x0001,

0xf831,	// (0x00029f3c) cell_vitu2_itu_pane_g_ParamLimits

0xf831,	// (0x00029f3c) cell_vitu2_itu_pane_g

0x3dd9,	// (0x0001e4e4) bg_vkb2_func_pane_cp05_ParamLimits

0x3dd9,	// (0x0001e4e4) bg_vkb2_func_pane_cp05

0x3dd9,	// (0x0001e4e4) bg_vkb2_func_pane_cp03

0x3dd9,	// (0x0001e4e4) bg_vkb2_func_pane_cp04

0x3dd9,	// (0x0001e4e4) bg_vkb2_func_pane_cp10_ParamLimits

0x3dd9,	// (0x0001e4e4) bg_vkb2_func_pane_cp10

0x9075,	// (0x00023780) bg_vkb2_func_pane_cp08

0x8d42,	// (0x0002344d) bg_vkb2_func_pane_cp06

0x9058,	// (0x00023763) bg_vkb2_func_pane_cp07

0x0b0e,	// (0x0001b219) bg_vkb2_func_pane_cp11_ParamLimits

0x0b0e,	// (0x0001b219) bg_vkb2_func_pane_cp11

0x0b23,	// (0x0001b22e) bg_vkb2_func_pane_cp12_ParamLimits

0x0b23,	// (0x0001b22e) bg_vkb2_func_pane_cp12

0xbe24,	// (0x0002652f) bg_vkb2_func_pane_cp09

0x042a,	// (0x0001ab35) bg_vkb2_func_pane_g1

0xc9eb,	// (0x000270f6) bg_vkb2_func_pane_g2

0x0432,	// (0x0001ab3d) bg_vkb2_func_pane_g3

0x043a,	// (0x0001ab45) bg_vkb2_func_pane_g4

0x070e,	// (0x0001ae19) bg_vkb2_func_pane_g5

0x0452,	// (0x0001ab5d) bg_vkb2_func_pane_g6

0x045a,	// (0x0001ab65) bg_vkb2_func_pane_g7

0x044a,	// (0x0001ab55) bg_vkb2_func_pane_g8

0xc9cb,	// (0x000270d6) bg_vkb2_func_pane_g9

0x0008,

0xfa2c,	// (0x0002a137) bg_vkb2_func_pane_g

0x92e6,	// (0x000239f1) blid2_tripm_pane_g6_ParamLimits

0x92e6,	// (0x000239f1) blid2_tripm_pane_g6

0x01e2,	// (0x0001a8ed) mp4_progress_pane_g1

0x9340,	// (0x00023a4b) blid2_tripm_values_pane_ParamLimits

0x9340,	// (0x00023a4b) blid2_tripm_values_pane

0x93fd,	// (0x00023b08) blid2_tripm_values_pane_t1

0x940b,	// (0x00023b16) blid2_tripm_values_pane_t2

0x9419,	// (0x00023b24) blid2_tripm_values_pane_t3

0x9427,	// (0x00023b32) blid2_tripm_values_pane_t4

0x9435,	// (0x00023b40) blid2_tripm_values_pane_t5

0x9443,	// (0x00023b4e) blid2_tripm_values_pane_t6

0x9451,	// (0x00023b5c) blid2_tripm_values_pane_t7

0x945f,	// (0x00023b6a) blid2_tripm_values_pane_t8

0x946d,	// (0x00023b78) blid2_tripm_values_pane_t9

0x0008,

0xfa3f,	// (0x0002a14a) blid2_tripm_values_pane_t

0x57ce,	// (0x0001fed9) call_video_pane_t1_ParamLimits

0x57ef,	// (0x0001fefa) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x000298c5) call_video_pane_t_ParamLimits

0x6f36,	// (0x00021641) msg_header_pane_g1_ParamLimits

0xd30d,	// (0x00027a18) msg_header_pane_g2_ParamLimits

0xd30d,	// (0x00027a18) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00029aba) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00029aba) msg_header_pane_g

0xc5c1,	// (0x00026ccc) main_clock2_pane_ParamLimits

0x8171,	// (0x0002287c) grid_clock2_toolbar_pane_ParamLimits

0x8171,	// (0x0002287c) grid_clock2_toolbar_pane

0x8171,	// (0x0002287c) listscroll_clock2_pane_ParamLimits

0x8171,	// (0x0002287c) listscroll_clock2_pane

0x8221,	// (0x0002292c) main_clock2_pane_t3_ParamLimits

0x8221,	// (0x0002292c) main_clock2_pane_t3

0x8233,	// (0x0002293e) main_clock2_pane_t4_ParamLimits

0x8233,	// (0x0002293e) main_clock2_pane_t4

0x0c36,	// (0x0001b341) cell_clock2_toolbar_pane

0x0c3e,	// (0x0001b349) cell_clock2_toolbar_pane_cp01

0x0c3e,	// (0x0001b349) cell_clock2_toolbar_pane_cp02

0x0c46,	// (0x0001b351) cell_clock2_toolbar_pane_cp03

0x0c4e,	// (0x0001b359) list_clock2_pane

0xcf56,	// (0x00027661) scroll_pane_cp10

0x0c56,	// (0x0001b361) list_single_clock2_pane_ParamLimits

0x0c56,	// (0x0001b361) list_single_clock2_pane

0xc7d2,	// (0x00026edd) list_highlight_pane_cp08

0x0c63,	// (0x0001b36e) list_single_clock2_pane_t1

0x0c71,	// (0x0001b37c) list_single_clock2_pane_t2

0x0001,

0xfa52,	// (0x0002a15d) list_single_clock2_pane_t

0xbe24,	// (0x0002652f) bg_button_pane_cp10

0x0c7f,	// (0x0001b38a) cell_clock2_toolbar_pane_g1

0x3d74,	// (0x0001e47f) aid_main_viewer_pane_g1_ParamLimits

0x3d74,	// (0x0001e47f) aid_main_viewer_pane_g1

0x3d80,	// (0x0001e48b) aid_main_viewer_pane_g2_ParamLimits

0x3d80,	// (0x0001e48b) aid_main_viewer_pane_g2

0x6fd3,	// (0x000216de) aid_main_viewer_pane_g3_ParamLimits

0x6fd3,	// (0x000216de) aid_main_viewer_pane_g3

0x6fe4,	// (0x000216ef) aid_main_viewer_pane_g4_ParamLimits

0x6fe4,	// (0x000216ef) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00029acb) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00029acb) aid_main_viewer_pane_g

0x3dcc,	// (0x0001e4d7) main_calc_pane_ParamLimits

0x3de7,	// (0x0001e4f2) main_dialer2_pane_ParamLimits

0x39c2,	// (0x0001e0cd) main_cam6_pane

0x39c2,	// (0x0001e0cd) main_vid6_pane

0x817d,	// (0x00022888) listscroll_gen_pane_cp06_ParamLimits

0x817d,	// (0x00022888) listscroll_gen_pane_cp06

0x8245,	// (0x00022950) main_clock2_pane_t5_ParamLimits

0x8245,	// (0x00022950) main_clock2_pane_t5

0x8292,	// (0x0002299d) aid_call2_pane_cp10_ParamLimits

0x82a4,	// (0x000229af) aid_call_pane_cp10_ParamLimits

0xcfc5,	// (0x000276d0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcfc5,	// (0x000276d0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x3ffe,	// (0x0001e709) popup_clock_analogue_window_cp10_g3_ParamLimits

0x3ffe,	// (0x0001e709) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcfc5,	// (0x000276d0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6e9,	// (0x00029df4) popup_clock_analogue_window_cp10_g_ParamLimits

0x4014,	// (0x0001e71f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x024d,	// (0x0001a958) cell_dialer2_keypad_pane_g2_ParamLimits

0x024d,	// (0x0001a958) cell_dialer2_keypad_pane_g2

0x0001,

0xf7c4,	// (0x00029ecf) cell_dialer2_keypad_pane_g_ParamLimits

0xf7c4,	// (0x00029ecf) cell_dialer2_keypad_pane_g

0xc56d,	// (0x00026c78) cell_dialer2_keypad_pane_t1

0x88a4,	// (0x00022faf) main_cset_text2_pane_ParamLimits

0x88a4,	// (0x00022faf) main_cset_text2_pane

0x094d,	// (0x0001b058) area_vitu2_query_pane_g1_ParamLimits

0x8ff7,	// (0x00023702) area_vitu2_query_pane_g2_ParamLimits

0xf96f,	// (0x0002a07a) area_vitu2_query_pane_g_ParamLimits

0x09d1,	// (0x0001b0dc) area_vitu2_query_pane_t7_ParamLimits

0x09d1,	// (0x0001b0dc) area_vitu2_query_pane_t7

0x8d42,	// (0x0002344d) bg_button_pane_cp018_ParamLimits

0x9058,	// (0x00023763) bg_button_pane_cp021_ParamLimits

0x9064,	// (0x0002376f) bg_button_pane_cp022_ParamLimits

0x9075,	// (0x00023780) bg_vkb2_func_pane_cp08_ParamLimits

0x8d42,	// (0x0002344d) bg_vkb2_func_pane_cp06_ParamLimits

0x9058,	// (0x00023763) bg_vkb2_func_pane_cp07_ParamLimits

0x9087,	// (0x00023792) input_focus_pane_cp09_ParamLimits

0x4e7e,	// (0x0001f589) cam6_autofocus_pane_ParamLimits

0x4e7e,	// (0x0001f589) cam6_autofocus_pane

0x4e9a,	// (0x0001f5a5) cam6_image_uncrop_pane_ParamLimits

0x4e9a,	// (0x0001f5a5) cam6_image_uncrop_pane

0x4ed3,	// (0x0001f5de) cam6_indi_pane_ParamLimits

0x4ed3,	// (0x0001f5de) cam6_indi_pane

0x4eed,	// (0x0001f5f8) cam6_mode_pane_ParamLimits

0x4eed,	// (0x0001f5f8) cam6_mode_pane

0x4f01,	// (0x0001f60c) cam6_timer_pane_ParamLimits

0x4f01,	// (0x0001f60c) cam6_timer_pane

0x4f15,	// (0x0001f620) cam6_zoom_pane_ParamLimits

0x4f15,	// (0x0001f620) cam6_zoom_pane

0x947b,	// (0x00023b86) cam6_mode_pane_g1_ParamLimits

0x947b,	// (0x00023b86) cam6_mode_pane_g1

0x9487,	// (0x00023b92) cam6_mode_pane_g2_ParamLimits

0x9487,	// (0x00023b92) cam6_mode_pane_g2

0x9493,	// (0x00023b9e) cam6_mode_pane_g3_ParamLimits

0x9493,	// (0x00023b9e) cam6_mode_pane_g3

0x949f,	// (0x00023baa) cam6_mode_pane_g4_ParamLimits

0x949f,	// (0x00023baa) cam6_mode_pane_g4

0x0003,

0xfa57,	// (0x0002a162) cam6_mode_pane_g_ParamLimits

0xfa57,	// (0x0002a162) cam6_mode_pane_g

0xe548,	// (0x00028c53) bg_tb_trans_pane_cp08_ParamLimits

0xe548,	// (0x00028c53) bg_tb_trans_pane_cp08

0x0c95,	// (0x0001b3a0) cam6_battery_pane_ParamLimits

0x0c95,	// (0x0001b3a0) cam6_battery_pane

0x0cab,	// (0x0001b3b6) cam6_indi_pane_g1_ParamLimits

0x0cab,	// (0x0001b3b6) cam6_indi_pane_g1

0x0cbd,	// (0x0001b3c8) cam6_indi_pane_g2_ParamLimits

0x0cbd,	// (0x0001b3c8) cam6_indi_pane_g2

0x0ccf,	// (0x0001b3da) cam6_indi_pane_g3_ParamLimits

0x0ccf,	// (0x0001b3da) cam6_indi_pane_g3

0x0002,

0xfa60,	// (0x0002a16b) cam6_indi_pane_g_ParamLimits

0xfa60,	// (0x0002a16b) cam6_indi_pane_g

0x0ce1,	// (0x0001b3ec) cam6_indi_pane_t1_ParamLimits

0x0ce1,	// (0x0001b3ec) cam6_indi_pane_t1

0x859b,	// (0x00022ca6) cam6_autofocus_pane_g1

0x8593,	// (0x00022c9e) cam6_autofocus_pane_g2

0x85ab,	// (0x00022cb6) cam6_autofocus_pane_g3

0x85a3,	// (0x00022cae) cam6_autofocus_pane_g4

0x0003,

0xfa67,	// (0x0002a172) cam6_autofocus_pane_g

0x0d07,	// (0x0001b412) cam6_timer_pane_g1

0x0d0f,	// (0x0001b41a) cam6_timer_pane_t1

0x0d1d,	// (0x0001b428) cam6_zoom_cont_pane

0x0d25,	// (0x0001b430) cam6_zoom_pane_g1

0x0d2e,	// (0x0001b439) cam6_zoom_pane_g2

0x94ab,	// (0x00023bb6) cam6_zoom_pane_g3

0x0002,

0xfa70,	// (0x0002a17b) cam6_zoom_pane_g

0xc563,	// (0x00026c6e) cam6_battery_pane_g1

0xc563,	// (0x00026c6e) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00029797) cam6_battery_pane_g

0x0d25,	// (0x0001b430) cam6_zoom_cont_pane_g1

0x0d2e,	// (0x0001b439) cam6_zoom_cont_pane_g2

0x0d37,	// (0x0001b442) cam6_zoom_cont_pane_g3

0x0002,

0xfa77,	// (0x0002a182) cam6_zoom_cont_pane_g

0x94c9,	// (0x00023bd4) cam6_mode_pane_cp_ParamLimits

0x94c9,	// (0x00023bd4) cam6_mode_pane_cp

0x94dd,	// (0x00023be8) cam6_zoom_pane_cp_ParamLimits

0x94dd,	// (0x00023be8) cam6_zoom_pane_cp

0x94f5,	// (0x00023c00) vid6_image_uncrop_cif_pane_ParamLimits

0x94f5,	// (0x00023c00) vid6_image_uncrop_cif_pane

0x9521,	// (0x00023c2c) vid6_image_uncrop_nhd_pane_ParamLimits

0x9521,	// (0x00023c2c) vid6_image_uncrop_nhd_pane

0x953e,	// (0x00023c49) vid6_image_uncrop_vga_pane_ParamLimits

0x953e,	// (0x00023c49) vid6_image_uncrop_vga_pane

0x955d,	// (0x00023c68) vid6_image_uncrop_wvga_pane_ParamLimits

0x955d,	// (0x00023c68) vid6_image_uncrop_wvga_pane

0x957a,	// (0x00023c85) vid6_indi_pane_ParamLimits

0x957a,	// (0x00023c85) vid6_indi_pane

0xe548,	// (0x00028c53) bg_tb_trans_pane_cp09_ParamLimits

0xe548,	// (0x00028c53) bg_tb_trans_pane_cp09

0x0d4f,	// (0x0001b45a) cam6_battery_pane_cp_ParamLimits

0x0d4f,	// (0x0001b45a) cam6_battery_pane_cp

0x0d5b,	// (0x0001b466) vid6_indi_pane_g1_ParamLimits

0x0d5b,	// (0x0001b466) vid6_indi_pane_g1

0x0d6d,	// (0x0001b478) vid6_indi_pane_g2_ParamLimits

0x0d6d,	// (0x0001b478) vid6_indi_pane_g2

0x0d7f,	// (0x0001b48a) vid6_indi_pane_g3_ParamLimits

0x0d7f,	// (0x0001b48a) vid6_indi_pane_g3

0x0d94,	// (0x0001b49f) vid6_indi_pane_g4_ParamLimits

0x0d94,	// (0x0001b49f) vid6_indi_pane_g4

0x0da9,	// (0x0001b4b4) vid6_indi_pane_g5_ParamLimits

0x0da9,	// (0x0001b4b4) vid6_indi_pane_g5

0x0004,

0xfa7e,	// (0x0002a189) vid6_indi_pane_g_ParamLimits

0xfa7e,	// (0x0002a189) vid6_indi_pane_g

0x0dc3,	// (0x0001b4ce) vid6_indi_pane_t1_ParamLimits

0x0dc3,	// (0x0001b4ce) vid6_indi_pane_t1

0x0dd9,	// (0x0001b4e4) vid6_indi_pane_t2_ParamLimits

0x0dd9,	// (0x0001b4e4) vid6_indi_pane_t2

0x0e01,	// (0x0001b50c) vid6_indi_pane_t3_ParamLimits

0x0e01,	// (0x0001b50c) vid6_indi_pane_t3

0x0e29,	// (0x0001b534) vid6_indi_pane_t4_ParamLimits

0x0e29,	// (0x0001b534) vid6_indi_pane_t4

0x0003,

0xfa89,	// (0x0002a194) vid6_indi_pane_t_ParamLimits

0xfa89,	// (0x0002a194) vid6_indi_pane_t

0x0e4d,	// (0x0001b558) wait_bar_pane_cp08

0x959d,	// (0x00023ca8) main_cset_text2_pane_t1_ParamLimits

0x959d,	// (0x00023ca8) main_cset_text2_pane_t1

0x94b4,	// (0x00023bbf) listscroll_gen_pane_cp06_t1_ParamLimits

0x94b4,	// (0x00023bbf) listscroll_gen_pane_cp06_t1

0x39c2,	// (0x0001e0cd) main_cam6_set_pane

0x17f7,	// (0x0001bf02) bg_tb_trans_pane_cp06_ParamLimits

0x4834,	// (0x0001ef3f) cam4_indicators_pane_g1_ParamLimits

0x4845,	// (0x0001ef50) cam4_indicators_pane_g2_ParamLimits

0xf801,	// (0x00029f0c) cam4_indicators_pane_g_ParamLimits

0x485d,	// (0x0001ef68) cam4_indicators_pane_t1_ParamLimits

0x3dd9,	// (0x0001e4e4) bg_tb_trans_pane_cp07_ParamLimits

0x490e,	// (0x0001f019) vid4_indicators_pane_g1_ParamLimits

0x4922,	// (0x0001f02d) vid4_indicators_pane_g2_ParamLimits

0x4936,	// (0x0001f041) vid4_indicators_pane_g3_ParamLimits

0x4947,	// (0x0001f052) vid4_indicators_pane_g4_ParamLimits

0xf813,	// (0x00029f1e) vid4_indicators_pane_g_ParamLimits

0x4963,	// (0x0001f06e) vid4_indicators_pane_t1_ParamLimits

0x4de2,	// (0x0001f4ed) vid4_progress_pane_g1_ParamLimits

0x4df2,	// (0x0001f4fd) vid4_progress_pane_g2_ParamLimits

0x4e02,	// (0x0001f50d) vid4_progress_pane_g3_ParamLimits

0x4e14,	// (0x0001f51f) vid4_progress_pane_g4_ParamLimits

0xf9ba,	// (0x0002a0c5) vid4_progress_pane_g_ParamLimits

0x4e2c,	// (0x0001f537) vid4_progress_pane_t1_ParamLimits

0x4e42,	// (0x0001f54d) vid4_progress_pane_t2_ParamLimits

0x4e57,	// (0x0001f562) vid4_progress_pane_t3_ParamLimits

0xf9c5,	// (0x0002a0d0) vid4_progress_pane_t_ParamLimits

0x4e6d,	// (0x0001f578) wait_bar_pane_cp07_ParamLimits

0x95d4,	// (0x00023cdf) main_cam6_set_pane_g2_ParamLimits

0x95d4,	// (0x00023cdf) main_cam6_set_pane_g2

0x95e0,	// (0x00023ceb) main_cset6_listscroll_pane_ParamLimits

0x95e0,	// (0x00023ceb) main_cset6_listscroll_pane

0x960b,	// (0x00023d16) main_cset6_slider_pane_ParamLimits

0x960b,	// (0x00023d16) main_cset6_slider_pane

0x9617,	// (0x00023d22) main_cset6_text2_pane_ParamLimits

0x9617,	// (0x00023d22) main_cset6_text2_pane

0x0e5c,	// (0x0001b567) main_cset6_text_pane

0x0e64,	// (0x0001b56f) main_cset_list_pane_copy1_ParamLimits

0x0e64,	// (0x0001b56f) main_cset_list_pane_copy1

0x0e74,	// (0x0001b57f) scroll_pane_cp028_copy1

0x962a,	// (0x00023d35) cset_list_set_pane_copy1

0x9640,	// (0x00023d4b) aid_position_infowindow_above_copy1

0x9648,	// (0x00023d53) aid_position_infowindow_below_copy1

0x0e7d,	// (0x0001b588) cset_list_set_pane_g1_copy1

0x0e85,	// (0x0001b590) cset_list_set_pane_g3_copy1_ParamLimits

0x0e85,	// (0x0001b590) cset_list_set_pane_g3_copy1

0x0e94,	// (0x0001b59f) cset_list_set_pane_t1_copy1_ParamLimits

0x0e94,	// (0x0001b59f) cset_list_set_pane_t1_copy1

0xc186,	// (0x00026891) list_highlight_pane_cp021_copy1_ParamLimits

0xc186,	// (0x00026891) list_highlight_pane_cp021_copy1

0x0ea9,	// (0x0001b5b4) cset6_slider_pane_ParamLimits

0x0ea9,	// (0x0001b5b4) cset6_slider_pane

0x0ed5,	// (0x0001b5e0) main_cset6_slider_pane_g1_ParamLimits

0x0ed5,	// (0x0001b5e0) main_cset6_slider_pane_g1

0x9650,	// (0x00023d5b) main_cset6_slider_pane_g2_ParamLimits

0x9650,	// (0x00023d5b) main_cset6_slider_pane_g2

0x0efd,	// (0x0001b608) main_cset6_slider_pane_g3_ParamLimits

0x0efd,	// (0x0001b608) main_cset6_slider_pane_g3

0x9678,	// (0x00023d83) main_cset6_slider_pane_g4_ParamLimits

0x9678,	// (0x00023d83) main_cset6_slider_pane_g4

0x9684,	// (0x00023d8f) main_cset6_slider_pane_g5_ParamLimits

0x9684,	// (0x00023d8f) main_cset6_slider_pane_g5

0x05a0,	// (0x0001acab) main_cset6_slider_pane_g7_ParamLimits

0x05a0,	// (0x0001acab) main_cset6_slider_pane_g7

0x05ac,	// (0x0001acb7) main_cset6_slider_pane_g8_ParamLimits

0x05ac,	// (0x0001acb7) main_cset6_slider_pane_g8

0x9692,	// (0x00023d9d) main_cset6_slider_pane_g9_ParamLimits

0x9692,	// (0x00023d9d) main_cset6_slider_pane_g9

0x969e,	// (0x00023da9) main_cset6_slider_pane_g10_ParamLimits

0x969e,	// (0x00023da9) main_cset6_slider_pane_g10

0x96aa,	// (0x00023db5) main_cset6_slider_pane_g11_ParamLimits

0x96aa,	// (0x00023db5) main_cset6_slider_pane_g11

0x96b6,	// (0x00023dc1) main_cset6_slider_pane_g12_ParamLimits

0x96b6,	// (0x00023dc1) main_cset6_slider_pane_g12

0x05b8,	// (0x0001acc3) main_cset6_slider_pane_g13_ParamLimits

0x05b8,	// (0x0001acc3) main_cset6_slider_pane_g13

0x05c4,	// (0x0001accf) main_cset6_slider_pane_g14_ParamLimits

0x05c4,	// (0x0001accf) main_cset6_slider_pane_g14

0x96c2,	// (0x00023dcd) main_cset6_slider_pane_g15_ParamLimits

0x96c2,	// (0x00023dcd) main_cset6_slider_pane_g15

0x96da,	// (0x00023de5) main_cset6_slider_pane_g16_ParamLimits

0x96da,	// (0x00023de5) main_cset6_slider_pane_g16

0x96e8,	// (0x00023df3) main_cset6_slider_pane_g17_ParamLimits

0x96e8,	// (0x00023df3) main_cset6_slider_pane_g17

0x0011,

0xfa92,	// (0x0002a19d) main_cset6_slider_pane_g_ParamLimits

0xfa92,	// (0x0002a19d) main_cset6_slider_pane_g

0x0f15,	// (0x0001b620) main_cset6_slider_pane_t1_ParamLimits

0x0f15,	// (0x0001b620) main_cset6_slider_pane_t1

0x9702,	// (0x00023e0d) main_cset6_slider_pane_t2_ParamLimits

0x9702,	// (0x00023e0d) main_cset6_slider_pane_t2

0x972d,	// (0x00023e38) main_cset6_slider_pane_t3_ParamLimits

0x972d,	// (0x00023e38) main_cset6_slider_pane_t3

0x9758,	// (0x00023e63) main_cset6_slider_pane_t4_ParamLimits

0x9758,	// (0x00023e63) main_cset6_slider_pane_t4

0x9783,	// (0x00023e8e) main_cset6_slider_pane_t5_ParamLimits

0x9783,	// (0x00023e8e) main_cset6_slider_pane_t5

0x0f56,	// (0x0001b661) main_cset6_slider_pane_t7_ParamLimits

0x0f56,	// (0x0001b661) main_cset6_slider_pane_t7

0x97b0,	// (0x00023ebb) main_cset6_slider_pane_t8_ParamLimits

0x97b0,	// (0x00023ebb) main_cset6_slider_pane_t8

0x97d4,	// (0x00023edf) main_cset6_slider_pane_t9_ParamLimits

0x97d4,	// (0x00023edf) main_cset6_slider_pane_t9

0x97f8,	// (0x00023f03) main_cset6_slider_pane_t10_ParamLimits

0x97f8,	// (0x00023f03) main_cset6_slider_pane_t10

0x981c,	// (0x00023f27) main_cset6_slider_pane_t11_ParamLimits

0x981c,	// (0x00023f27) main_cset6_slider_pane_t11

0x0f8c,	// (0x0001b697) main_cset6_slider_pane_t14_ParamLimits

0x0f8c,	// (0x0001b697) main_cset6_slider_pane_t14

0x0fc5,	// (0x0001b6d0) main_cset6_slider_pane_t15_ParamLimits

0x0fc5,	// (0x0001b6d0) main_cset6_slider_pane_t15

0x000b,

0xfab7,	// (0x0002a1c2) main_cset6_slider_pane_t_ParamLimits

0xfab7,	// (0x0002a1c2) main_cset6_slider_pane_t

0x06a6,	// (0x0001adb1) cset_slider_pane_g1_copy1

0x06af,	// (0x0001adba) cset_slider_pane_g2_copy1

0x06b8,	// (0x0001adc3) cset_slider_pane_g3_copy1

0xbe24,	// (0x0002652f) bg_popup_sub_pane_cp011_copy1

0x1007,	// (0x0001b712) main_cset_text_pane_g1_copy1

0x0775,	// (0x0001ae80) main_cset_text_pane_t1_copy1

0x0783,	// (0x0001ae8e) main_cset_text_pane_t2_copy1

0x0791,	// (0x0001ae9c) main_cset_text_pane_t3_copy1

0x079f,	// (0x0001aeaa) main_cset_text_pane_t4_copy1

0x07ad,	// (0x0001aeb8) main_cset_text_pane_t5_copy1

0x100f,	// (0x0001b71a) main_cset_text_pane_t6_copy1

0x101d,	// (0x0001b728) main_cset_text_pane_t7_copy1

0x985f,	// (0x00023f6a) main_cset_text2_pane_t1_copy1

0x3dd9,	// (0x0001e4e4) main_ncimui_pane

0x3e38,	// (0x0001e543) popup_query_ncimui_window_ParamLimits

0x3e38,	// (0x0001e543) popup_query_ncimui_window

0xeb75,	// (0x00029280) field_cale_ev2_pane_g4_ParamLimits

0xeb75,	// (0x00029280) field_cale_ev2_pane_g4

0x84e6,	// (0x00022bf1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x84e6,	// (0x00022bf1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf79b,	// (0x00029ea6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf79b,	// (0x00029ea6) cell_video_dialer_keypad_pane_g

0x84fe,	// (0x00022c09) cell_video_dialer_keypad_pane_t1

0xbe24,	// (0x0002652f) bg_popup_window_pane_cp012

0xce42,	// (0x0002754d) heading_pane_cp06

0x1049,	// (0x0001b754) ncim_query_content_pane

0xbe24,	// (0x0002652f) bg_popup_heading_pane_cp01

0x1051,	// (0x0001b75c) ncim_heading_pane_t1

0x105f,	// (0x0001b76a) ncim_indicator_popup_pane

0x1071,	// (0x0001b77c) ncim_query_button_pane

0x1085,	// (0x0001b790) ncim_query_content_pane_t1

0x1097,	// (0x0001b7a2) ncim_query_content_pane_t2

0x0005,

0xfafb,	// (0x0002a206) ncim_query_content_pane_t

0x10d1,	// (0x0001b7dc) ncim_query_list_pane

0x10e3,	// (0x0001b7ee) ncim_query_popup_pane

0x105f,	// (0x0001b76a) ncim_indicator_popup_pane_ParamLimits

0x99b3,	// (0x000240be) ncim_query_content_pane_g1_ParamLimits

0x99b3,	// (0x000240be) ncim_query_content_pane_g1

0x1085,	// (0x0001b790) ncim_query_content_pane_t1_ParamLimits

0x1097,	// (0x0001b7a2) ncim_query_content_pane_t2_ParamLimits

0x99bf,	// (0x000240ca) ncim_query_content_pane_t3_ParamLimits

0x99bf,	// (0x000240ca) ncim_query_content_pane_t3

0x99dc,	// (0x000240e7) ncim_query_content_pane_t4_ParamLimits

0x99dc,	// (0x000240e7) ncim_query_content_pane_t4

0x99f9,	// (0x00024104) ncim_query_content_pane_t5_ParamLimits

0x99f9,	// (0x00024104) ncim_query_content_pane_t5

0x10a9,	// (0x0001b7b4) ncim_query_content_pane_t6_ParamLimits

0x10a9,	// (0x0001b7b4) ncim_query_content_pane_t6

0xfafb,	// (0x0002a206) ncim_query_content_pane_t_ParamLimits

0x10d1,	// (0x0001b7dc) ncim_query_list_pane_ParamLimits

0x10e3,	// (0x0001b7ee) ncim_query_popup_pane_ParamLimits

0x10f7,	// (0x0001b802) wait_bar_pane_cp04

0xbe24,	// (0x0002652f) input_focus_pane_cp011

0x10ff,	// (0x0001b80a) ncim_query_popup_pane_t1

0x110d,	// (0x0001b818) ncim_list_query_list_pane_ParamLimits

0x110d,	// (0x0001b818) ncim_list_query_list_pane

0xbe24,	// (0x0002652f) bg_button_pane_cp027

0x111a,	// (0x0001b825) ncim_query_button_pane_g1

0xbe24,	// (0x0002652f) list_highlight_pane_cp012

0x1124,	// (0x0001b82f) ncim_list_query_list_pane_g1

0x112c,	// (0x0001b837) ncim_list_query_list_pane_t1

0x4851,	// (0x0001ef5c) cam4_indicators_pane_g3_ParamLimits

0x4851,	// (0x0001ef5c) cam4_indicators_pane_g3

0x4953,	// (0x0001f05e) vid4_indicators_pane_g5_ParamLimits

0x4953,	// (0x0001f05e) vid4_indicators_pane_g5

0x4e20,	// (0x0001f52b) vid4_progress_pane_g5_ParamLimits

0x4e20,	// (0x0001f52b) vid4_progress_pane_g5

0x989f,	// (0x00023faa) main_ncimui_pane_g1

0x9907,	// (0x00024012) ncimui_group_query_pane_ParamLimits

0x9907,	// (0x00024012) ncimui_group_query_pane

0x994f,	// (0x0002405a) ncimui_list_pane_ParamLimits

0x994f,	// (0x0002405a) ncimui_list_pane

0x9976,	// (0x00024081) ncimui_text_pane_ParamLimits

0x9976,	// (0x00024081) ncimui_text_pane

0x9a16,	// (0x00024121) ncimui_text_pane_t1_ParamLimits

0x9a16,	// (0x00024121) ncimui_text_pane_t1

0x113a,	// (0x0001b845) ncimui_list_single_graphic_pane_ParamLimits

0x113a,	// (0x0001b845) ncimui_list_single_graphic_pane

0x9a35,	// (0x00024140) ncimui_query_pane_ParamLimits

0x9a35,	// (0x00024140) ncimui_query_pane

0xbe24,	// (0x0002652f) list_highlight_pane_cp013

0x114a,	// (0x0001b855) ncim_list_query_list_pane_t1_copy1

0x1158,	// (0x0001b863) ncim_list_single_graphic_pane_g1

0x9a48,	// (0x00024153) ncim_query_button_pane_cp01

0x9a54,	// (0x0002415f) ncim_query_entry_pane_ParamLimits

0x9a54,	// (0x0002415f) ncim_query_entry_pane

0x9a67,	// (0x00024172) ncimui_query_pane_g1

0x9a73,	// (0x0002417e) ncimui_query_pane_t1_ParamLimits

0x9a73,	// (0x0002417e) ncimui_query_pane_t1

0xc186,	// (0x00026891) input_focus_pane_cp012

0x1160,	// (0x0001b86b) ncim_query_entry_pane_t1

0xc5c1,	// (0x00026ccc) main_im_pane_ParamLimits

0x3dd9,	// (0x0001e4e4) main_mobtv_pane_ParamLimits

0x3dd9,	// (0x0001e4e4) main_mobtv_pane

0x96f6,	// (0x00023e01) main_cset6_slider_pane_g18_ParamLimits

0x96f6,	// (0x00023e01) main_cset6_slider_pane_g18

0x0f09,	// (0x0001b614) main_cset6_slider_pane_g19_ParamLimits

0x0f09,	// (0x0001b614) main_cset6_slider_pane_g19

0xd241,	// (0x0002794c) bg_main_mobtv_pane_ParamLimits

0xd241,	// (0x0002794c) bg_main_mobtv_pane

0x9a8c,	// (0x00024197) main_mobtv_info_pane

0x9a97,	// (0x000241a2) main_mobtv_loading_pane_ParamLimits

0x9a97,	// (0x000241a2) main_mobtv_loading_pane

0x1172,	// (0x0001b87d) main_mobtv_pg_channel_list_pane

0x117c,	// (0x0001b887) main_mobtv_pg_hdr_pane

0x9aa4,	// (0x000241af) main_mobtv_programe_curr_pane_ParamLimits

0x9aa4,	// (0x000241af) main_mobtv_programe_curr_pane

0x9ab1,	// (0x000241bc) main_mobtv_programe_next_pane_ParamLimits

0x9ab1,	// (0x000241bc) main_mobtv_programe_next_pane

0x1185,	// (0x0001b890) popup_mobtv_noti_window

0xc563,	// (0x00026c6e) main_tv_pg_hdr_pane_g1

0x118d,	// (0x0001b898) main_tv_pg_hdr_pane_g2

0x1195,	// (0x0001b8a0) main_tv_pg_hdr_pane_g3

0x119d,	// (0x0001b8a8) main_tv_pg_hdr_pane_g4

0x11a5,	// (0x0001b8b0) main_tv_pg_hdr_pane_g5

0x11af,	// (0x0001b8ba) main_tv_pg_hdr_pane_g6

0x11b9,	// (0x0001b8c4) main_tv_pg_hdr_pane_g7

0x11c3,	// (0x0001b8ce) main_tv_pg_hdr_pane_g8

0x11cd,	// (0x0001b8d8) main_tv_pg_hdr_pane_g9

0x11d7,	// (0x0001b8e2) main_tv_pg_hdr_pane_g10

0x11e1,	// (0x0001b8ec) main_tv_pg_hdr_pane_g11

0x000a,

0xfb08,	// (0x0002a213) main_tv_pg_hdr_pane_g

0x11eb,	// (0x0001b8f6) main_tv_pg_hdr_pane_t1

0x11f9,	// (0x0001b904) main_tv_pg_hdr_pane_t2

0x1207,	// (0x0001b912) main_tv_pg_hdr_pane_t3

0x1217,	// (0x0001b922) main_tv_pg_hdr_pane_t4

0x1227,	// (0x0001b932) main_tv_pg_hdr_pane_t5

0x0004,

0xfb1f,	// (0x0002a22a) main_tv_pg_hdr_pane_t

0x1237,	// (0x0001b942) single_mobtv_pg_channel_pane_ParamLimits

0x1237,	// (0x0001b942) single_mobtv_pg_channel_pane

0x1249,	// (0x0001b954) single_mobtv_pg_channel_table_pane

0xcaee,	// (0x000271f9) single_mobtv_pg_channel_thumb_pane

0x1252,	// (0x0001b95d) single_tv_pg_channel_pane_g1

0x125b,	// (0x0001b966) single_tv_pg_channel_pane_g2

0x0001,

0xfb2a,	// (0x0002a235) single_tv_pg_channel_pane_g

0xc525,	// (0x00026c30) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc525,	// (0x00026c30) bg_single_mobtv_pg_channel_thumb_pane

0x1264,	// (0x0001b96f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1264,	// (0x0001b96f) single_mobtv_pg_channel_thumb_pane_g1

0x1272,	// (0x0001b97d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1272,	// (0x0001b97d) single_mobtv_pg_channel_thumb_pane_g2

0x127e,	// (0x0001b989) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x127e,	// (0x0001b989) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb2f,	// (0x0002a23a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb2f,	// (0x0002a23a) single_mobtv_pg_channel_thumb_pane_g

0x128a,	// (0x0001b995) single_mobtv_pg_channel_thumb_pane_t1

0x1298,	// (0x0001b9a3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb36,	// (0x0002a241) single_mobtv_pg_channel_thumb_pane_t

0xc563,	// (0x00026c6e) bg_single_mobtv_pg_channel_table_pane_g1

0xc563,	// (0x00026c6e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00029797) bg_single_mobtv_pg_channel_table_pane_g

0x12a6,	// (0x0001b9b1) single_mobtv_pg_channel_table_pane_t1

0x12b4,	// (0x0001b9bf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb3b,	// (0x0002a246) single_mobtv_pg_channel_table_pane_t

0x9ac6,	// (0x000241d1) main_mobtv_info_pane_g1_ParamLimits

0x9ac6,	// (0x000241d1) main_mobtv_info_pane_g1

0x9ae2,	// (0x000241ed) main_mobtv_info_pane_t1_ParamLimits

0x9ae2,	// (0x000241ed) main_mobtv_info_pane_t1

0x9b5a,	// (0x00024265) main_mobtv_info_pane_t2_ParamLimits

0x9b5a,	// (0x00024265) main_mobtv_info_pane_t2

0x0002,

0xfb45,	// (0x0002a250) main_mobtv_info_pane_t_ParamLimits

0xfb45,	// (0x0002a250) main_mobtv_info_pane_t

0x9be9,	// (0x000242f4) wait_bar_pane_cp05

0x9bfb,	// (0x00024306) main_mobtv_loading_pane_g1_ParamLimits

0x9bfb,	// (0x00024306) main_mobtv_loading_pane_g1

0x9c09,	// (0x00024314) main_mobtv_loading_pane_g2_ParamLimits

0x9c09,	// (0x00024314) main_mobtv_loading_pane_g2

0x9c15,	// (0x00024320) main_mobtv_loading_pane_g3_ParamLimits

0x9c15,	// (0x00024320) main_mobtv_loading_pane_g3

0x0002,

0xfb4c,	// (0x0002a257) main_mobtv_loading_pane_g_ParamLimits

0xfb4c,	// (0x0002a257) main_mobtv_loading_pane_g

0x12c2,	// (0x0001b9cd) main_mobtv_loading_pane_t1_ParamLimits

0x12c2,	// (0x0001b9cd) main_mobtv_loading_pane_t1

0x12da,	// (0x0001b9e5) main_mobtv_loading_pane_t2_ParamLimits

0x12da,	// (0x0001b9e5) main_mobtv_loading_pane_t2

0x0001,

0xfb53,	// (0x0002a25e) main_mobtv_loading_pane_t_ParamLimits

0xfb53,	// (0x0002a25e) main_mobtv_loading_pane_t

0x9c23,	// (0x0002432e) wait_bar_pane_cp06_ParamLimits

0x9c23,	// (0x0002432e) wait_bar_pane_cp06

0x12fe,	// (0x0001ba09) main_mobtv_programe_curr_pane_t1

0x130c,	// (0x0001ba17) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb58,	// (0x0002a263) main_mobtv_programe_curr_pane_t

0x131a,	// (0x0001ba25) main_mobtv_programe_next_pane_t1

0x1328,	// (0x0001ba33) main_mobtv_programe_next_pane_t2

0x1336,	// (0x0001ba41) main_mobtv_programe_next_pane_t3

0x0002,

0xfb5d,	// (0x0002a268) main_mobtv_programe_next_pane_t

0xbe24,	// (0x0002652f) bg_popup_mobtv_noti_window_pane

0x1344,	// (0x0001ba4f) popup_mobtv_noti_window_g1

0x134c,	// (0x0001ba57) popup_mobtv_noti_window_t1

0x135a,	// (0x0001ba65) popup_mobtv_noti_window_t2

0x0001,

0xfb64,	// (0x0002a26f) popup_mobtv_noti_window_t

0xc563,	// (0x00026c6e) bg_popup_mobtv_noti_window_pane_g1

0x39c2,	// (0x0001e0cd) sc_clock_pane

0x39c2,	// (0x0001e0cd) main_fs_bigclock_pane

0x932e,	// (0x00023a39) blid2_tripm_pane_t4_ParamLimits

0x932e,	// (0x00023a39) blid2_tripm_pane_t4

0xc533,	// (0x00026c3e) sc_clock_pane_g1_ParamLimits

0xc533,	// (0x00026c3e) sc_clock_pane_g1

0xc581,	// (0x00026c8c) sc_clock_pane_t1_ParamLimits

0xc581,	// (0x00026c8c) sc_clock_pane_t1

0xc581,	// (0x00026c8c) sc_clock_pane_t2_ParamLimits

0xc581,	// (0x00026c8c) sc_clock_pane_t2

0xc581,	// (0x00026c8c) sc_clock_pane_t3_ParamLimits

0xc581,	// (0x00026c8c) sc_clock_pane_t3

0x0004,

0xfb69,	// (0x0002a274) sc_clock_pane_t_ParamLimits

0xfb69,	// (0x0002a274) sc_clock_pane_t

0xa654,	// (0x00024d5f) main_fs_bigclock_indicator_pane_ParamLimits

0xa654,	// (0x00024d5f) main_fs_bigclock_indicator_pane

0x9c6a,	// (0x00024375) main_fs_bigclock_pane_g1_ParamLimits

0x9c6a,	// (0x00024375) main_fs_bigclock_pane_g1

0xa660,	// (0x00024d6b) main_fs_bigclock_pane_t1_ParamLimits

0xa660,	// (0x00024d6b) main_fs_bigclock_pane_t1

0xa672,	// (0x00024d7d) main_fs_bigclock_pane_t2_ParamLimits

0xa672,	// (0x00024d7d) main_fs_bigclock_pane_t2

0xa686,	// (0x00024d91) main_fs_bigclock_pane_t3_ParamLimits

0xa686,	// (0x00024d91) main_fs_bigclock_pane_t3

0x0002,

0xfcf7,	// (0x0002a402) main_fs_bigclock_pane_t_ParamLimits

0xfcf7,	// (0x0002a402) main_fs_bigclock_pane_t

0x1e70,	// (0x0001c57b) main_fs_bigclock_indicator_pane_g1

0x1079,	// (0x0001b784) ncim_query_content_pane_g2_ParamLimits

0x1079,	// (0x0001b784) ncim_query_content_pane_g2

0x0001,

0xfaf6,	// (0x0002a201) ncim_query_content_pane_g_ParamLimits

0xfaf6,	// (0x0002a201) ncim_query_content_pane_g

0xc581,	// (0x00026c8c) sc_clock_pane_t4_ParamLimits

0xc581,	// (0x00026c8c) sc_clock_pane_t4

0x3dd9,	// (0x0001e4e4) main_radioblah_pane

0x4733,	// (0x0001ee3e) cell_call4_button_pane_t1_copy1_ParamLimits

0x4733,	// (0x0001ee3e) cell_call4_button_pane_t1_copy1

0x98b9,	// (0x00023fc4) main_ncimui_pane_t1_ParamLimits

0x98b9,	// (0x00023fc4) main_ncimui_pane_t1

0x98d3,	// (0x00023fde) main_ncimui_pane_t2_ParamLimits

0x98d3,	// (0x00023fde) main_ncimui_pane_t2

0x0002,

0xfaef,	// (0x0002a1fa) main_ncimui_pane_t_ParamLimits

0xfaef,	// (0x0002a1fa) main_ncimui_pane_t

0xd34b,	// (0x00027a56) main_radioblah_anim_pane_ParamLimits

0xd34b,	// (0x00027a56) main_radioblah_anim_pane

0xd34b,	// (0x00027a56) main_radioblah_info_pane_ParamLimits

0xd34b,	// (0x00027a56) main_radioblah_info_pane

0xd405,	// (0x00027b10) main_radioblah_pane_t1_ParamLimits

0xd405,	// (0x00027b10) main_radioblah_pane_t1

0xd405,	// (0x00027b10) main_radioblah_pane_t2_ParamLimits

0xd405,	// (0x00027b10) main_radioblah_pane_t2

0x0003,

0xfb8a,	// (0x0002a295) main_radioblah_pane_t_ParamLimits

0xfb8a,	// (0x0002a295) main_radioblah_pane_t

0xc517,	// (0x00026c22) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc517,	// (0x00026c22) main_radioblah_rocker_ctrl_pane

0xe556,	// (0x00028c61) main_radioblah_info_pane_t1_ParamLimits

0xe556,	// (0x00028c61) main_radioblah_info_pane_t1

0x14d0,	// (0x0001bbdb) main_radioblah_info_pane_t2_ParamLimits

0x14d0,	// (0x0001bbdb) main_radioblah_info_pane_t2

0x0003,

0xfb93,	// (0x0002a29e) main_radioblah_info_pane_t_ParamLimits

0xfb93,	// (0x0002a29e) main_radioblah_info_pane_t

0xc563,	// (0x00026c6e) main_radioblah_rocker_ctrl_pane_g1

0xc563,	// (0x00026c6e) main_radioblah_rocker_ctrl_pane_g2

0xc563,	// (0x00026c6e) main_radioblah_rocker_ctrl_pane_g3

0xc563,	// (0x00026c6e) main_radioblah_rocker_ctrl_pane_g4

0xc563,	// (0x00026c6e) main_radioblah_rocker_ctrl_pane_g5

0xc563,	// (0x00026c6e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb9c,	// (0x0002a2a7) main_radioblah_rocker_ctrl_pane_g

0x985f,	// (0x00023f6a) main_cset_text2_pane_t1_copy1_ParamLimits

0x47a6,	// (0x0001eeb1) cam4_image_uncrop_qvga_pane

0x48c3,	// (0x0001efce) vid4_image_uncrop_qcif_pane

0x4ec5,	// (0x0001f5d0) cam6_image_uncrop_qvga_pane_ParamLimits

0x4ec5,	// (0x0001f5d0) cam6_image_uncrop_qvga_pane

0x0d3f,	// (0x0001b44a) vid6_image_uncrop_qcif_pane_ParamLimits

0x0d3f,	// (0x0001b44a) vid6_image_uncrop_qcif_pane

0xbe24,	// (0x0002652f) bg_popup_preview_window_pane_cp03

0x102b,	// (0x0001b736) list_cset_text2_pane

0x1033,	// (0x0001b73e) main_cset6_text2_pane_g1

0x103b,	// (0x0001b746) main_cset6_text2_pane_t1

0x9cae,	// (0x000243b9) list_cset_text2_pane_t1_ParamLimits

0x9cae,	// (0x000243b9) list_cset_text2_pane_t1

0x3dd9,	// (0x0001e4e4) main_radioblah_pane_ParamLimits

0x9bd5,	// (0x000242e0) main_mobtv_info_pane_t3_ParamLimits

0x9bd5,	// (0x000242e0) main_mobtv_info_pane_t3

0xd241,	// (0x0002794c) main_radioblah_pane_g1

0x14a0,	// (0x0001bbab) main_radioblah_info_pane_g1

0xc581,	// (0x00026c8c) main_radioblah_info_pane_t3_ParamLimits

0xc581,	// (0x00026c8c) main_radioblah_info_pane_t3

0x681c,	// (0x00020f27) highlight_cell_cale_month_pane_ParamLimits

0x681c,	// (0x00020f27) highlight_cell_cale_month_pane

0x39c2,	// (0x0001e0cd) main_phob_fisheye_pane

0xec26,	// (0x00029331) scroll_pane_cp0031_ParamLimits

0xec26,	// (0x00029331) scroll_pane_cp0031

0x0e4d,	// (0x0001b558) wait_bar_pane_cp08_ParamLimits

0x962a,	// (0x00023d35) cset_list_set_pane_copy1_ParamLimits

0x151f,	// (0x0001bc2a) highlight_cell_cale_month_pane_g1

0x9ccf,	// (0x000243da) highlight_cell_cale_month_pane_t1

0x0a3d,	// (0x0001b148) list_gen_pane_cp01

0x058b,	// (0x0001ac96) scroll_pane_01

0x9cdd,	// (0x000243e8) list_single_double_fisheye_pane

0x9ce6,	// (0x000243f1) list_double_fisheye_pane_g1_ParamLimits

0x9ce6,	// (0x000243f1) list_double_fisheye_pane_g1

0x9cf2,	// (0x000243fd) list_double_fisheye_pane_g2_ParamLimits

0x9cf2,	// (0x000243fd) list_double_fisheye_pane_g2

0x9d06,	// (0x00024411) list_double_fisheye_pane_g3_ParamLimits

0x9d06,	// (0x00024411) list_double_fisheye_pane_g3

0x0004,

0xfba9,	// (0x0002a2b4) list_double_fisheye_pane_g_ParamLimits

0xfba9,	// (0x0002a2b4) list_double_fisheye_pane_g

0x9d2f,	// (0x0002443a) list_double_fisheye_pane_t1_ParamLimits

0x9d2f,	// (0x0002443a) list_double_fisheye_pane_t1

0x9d4a,	// (0x00024455) list_double_fisheye_pane_t2_ParamLimits

0x9d4a,	// (0x00024455) list_double_fisheye_pane_t2

0x0001,

0xfbb4,	// (0x0002a2bf) list_double_fisheye_pane_t_ParamLimits

0xfbb4,	// (0x0002a2bf) list_double_fisheye_pane_t

0x39c2,	// (0x0001e0cd) main_call5_pane

0xc517,	// (0x00026c22) sc_swipe_pane_ParamLimits

0xc517,	// (0x00026c22) sc_swipe_pane

0x9d78,	// (0x00024483) call5_image_pane_ParamLimits

0x9d78,	// (0x00024483) call5_image_pane

0x9d88,	// (0x00024493) call5_swipe_1_pane_ParamLimits

0x9d88,	// (0x00024493) call5_swipe_1_pane

0x9d94,	// (0x0002449f) call5_swipe_2_pane_ParamLimits

0x9d94,	// (0x0002449f) call5_swipe_2_pane

0x9dae,	// (0x000244b9) popup_call5_audio_first_window_ParamLimits

0x9dae,	// (0x000244b9) popup_call5_audio_first_window

0xc525,	// (0x00026c30) call5_swipe_1_pane_g1_ParamLimits

0xc525,	// (0x00026c30) call5_swipe_1_pane_g1

0x1527,	// (0x0001bc32) call5_swipe_1_pane_g2_ParamLimits

0x1527,	// (0x0001bc32) call5_swipe_1_pane_g2

0x0001,

0xfbb9,	// (0x0002a2c4) call5_swipe_1_pane_g_ParamLimits

0xfbb9,	// (0x0002a2c4) call5_swipe_1_pane_g

0x1533,	// (0x0001bc3e) call5_swipe_1_pane_t1_ParamLimits

0x1533,	// (0x0001bc3e) call5_swipe_1_pane_t1

0xc525,	// (0x00026c30) call5_swipe_2_pane_g1_ParamLimits

0xc525,	// (0x00026c30) call5_swipe_2_pane_g1

0x1548,	// (0x0001bc53) call5_swipe_2_pane_g2_ParamLimits

0x1548,	// (0x0001bc53) call5_swipe_2_pane_g2

0x0001,

0xfbbe,	// (0x0002a2c9) call5_swipe_2_pane_g_ParamLimits

0xfbbe,	// (0x0002a2c9) call5_swipe_2_pane_g

0x1554,	// (0x0001bc5f) call5_swipe_2_pane_t1_ParamLimits

0x1554,	// (0x0001bc5f) call5_swipe_2_pane_t1

0xc525,	// (0x00026c30) sc_swipe_pane_g1_ParamLimits

0xc525,	// (0x00026c30) sc_swipe_pane_g1

0xc533,	// (0x00026c3e) sc_swipe_pane_g2_ParamLimits

0xc533,	// (0x00026c3e) sc_swipe_pane_g2

0x0001,

0xfbc3,	// (0x0002a2ce) sc_swipe_pane_g_ParamLimits

0xfbc3,	// (0x0002a2ce) sc_swipe_pane_g

0xc56d,	// (0x00026c78) sc_swipe_pane_t1_ParamLimits

0xc56d,	// (0x00026c78) sc_swipe_pane_t1

0x39c2,	// (0x0001e0cd) main_cmail_launcher_pane

0x9dbc,	// (0x000244c7) aid_size_cell_cmail_l_ParamLimits

0x9dbc,	// (0x000244c7) aid_size_cell_cmail_l

0x9dca,	// (0x000244d5) grid_cmail_l_pane_ParamLimits

0x9dca,	// (0x000244d5) grid_cmail_l_pane

0x9dda,	// (0x000244e5) cell_cmail_l_pane_ParamLimits

0x9dda,	// (0x000244e5) cell_cmail_l_pane

0x1569,	// (0x0001bc74) cell_cmail_l_pane_g1_ParamLimits

0x1569,	// (0x0001bc74) cell_cmail_l_pane_g1

0x1575,	// (0x0001bc80) cell_cmail_l_pane_t1_ParamLimits

0x1575,	// (0x0001bc80) cell_cmail_l_pane_t1

0x158b,	// (0x0001bc96) cell_cmail_l_pane_t2_ParamLimits

0x158b,	// (0x0001bc96) cell_cmail_l_pane_t2

0x0001,

0xfbc8,	// (0x0002a2d3) cell_cmail_l_pane_t_ParamLimits

0xfbc8,	// (0x0002a2d3) cell_cmail_l_pane_t

0xc186,	// (0x00026891) grid_highlight_pane_cp018_ParamLimits

0xc186,	// (0x00026891) grid_highlight_pane_cp018

0x3825,	// (0x0001df30) main2_pane_ParamLimits

0x3825,	// (0x0001df30) main2_pane

0xc650,	// (0x00026d5b) popup_sp_fs_action_menu_bg_pane_g1

0xc658,	// (0x00026d63) popup_sp_fs_action_menu_bg_pane_g2

0xc660,	// (0x00026d6b) popup_sp_fs_action_menu_bg_pane_g3

0xc668,	// (0x00026d73) popup_sp_fs_action_menu_bg_pane_g4

0xc670,	// (0x00026d7b) popup_sp_fs_action_menu_bg_pane_g5

0xc678,	// (0x00026d83) popup_sp_fs_action_menu_bg_pane_g6

0xc680,	// (0x00026d8b) popup_sp_fs_action_menu_bg_pane_g7

0xc688,	// (0x00026d93) popup_sp_fs_action_menu_bg_pane_g8

0xc690,	// (0x00026d9b) popup_sp_fs_action_menu_bg_pane_g9

0xc698,	// (0x00026da3) popup_sp_fs_action_menu_bg_pane_g10

0xc698,	// (0x00026da3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x000297e8) popup_sp_fs_action_menu_bg_pane_g

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g3_g1

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g3_g2

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00029896) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00029896) list_medium_line_x2_t3_g3_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g3_t1

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g3_t2

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0002989d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0002989d) list_medium_line_x2_t3_g3_t

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g2_g1

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x000298a4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x000298a4) list_medium_line_x2_t3_g2_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g2_t1

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g2_t2

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0002989d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0002989d) list_medium_line_x2_t3_g2_t

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g4_g1

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g4_g2

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g4_g3

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x000298a9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x000298a9) list_medium_line_x2_t4_g4_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g4_t1

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g4_t2

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g4_t3

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000298b2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000298b2) list_medium_line_x2_t4_g4_t

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g4_g1

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g4_g2

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g4_g3

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x000298a9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x000298a9) list_medium_line_x2_t2_g4_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g4_t1

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00029919) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00029919) list_medium_line_x2_t2_g4_t

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g3_g1

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g3_g2

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00029896) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00029896) list_medium_line_x2_t2_g3_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g3_t1

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00029919) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00029919) list_medium_line_x2_t2_g3_t

0x69bb,	// (0x000210c6) main_sp_fs_list_pane_ParamLimits

0x69bb,	// (0x000210c6) main_sp_fs_list_pane

0x69c7,	// (0x000210d2) sp_fs_scroll_pane_ParamLimits

0x69c7,	// (0x000210d2) sp_fs_scroll_pane

0xccbb,	// (0x000273c6) list_medium_line_x2_t3_t1

0xccbb,	// (0x000273c6) list_medium_line_x2_t3_t2

0xccbb,	// (0x000273c6) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x00029964) list_medium_line_x2_t3_t

0xccbb,	// (0x000273c6) list_medium_line_x3_t4_t1

0xccbb,	// (0x000273c6) list_medium_line_x3_t4_t2

0xccbb,	// (0x000273c6) list_medium_line_x3_t4_t3

0xccbb,	// (0x000273c6) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x0002996b) list_medium_line_x3_t4_t

0xccbb,	// (0x000273c6) list_medium_line_x4_t5_t1

0xccbb,	// (0x000273c6) list_medium_line_x4_t5_t2

0xccbb,	// (0x000273c6) list_medium_line_x4_t5_t3

0xccbb,	// (0x000273c6) list_medium_line_x4_t5_t4

0xccbb,	// (0x000273c6) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x00029974) list_medium_line_x4_t5_t

0xc525,	// (0x00026c30) list_medium_line_t4_g4_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t4_g4_g1

0xc525,	// (0x00026c30) list_medium_line_t4_g4_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t4_g4_g2

0xc525,	// (0x00026c30) list_medium_line_t4_g4_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t4_g4_g3

0xc525,	// (0x00026c30) list_medium_line_t4_g4_g4_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x000298a9) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x000298a9) list_medium_line_t4_g4_g

0xc56d,	// (0x00026c78) list_medium_line_t4_g4_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t4_g4_t1

0xc56d,	// (0x00026c78) list_medium_line_t4_g4_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t4_g4_t2

0xc56d,	// (0x00026c78) list_medium_line_t4_g4_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t4_g4_t3

0xc56d,	// (0x00026c78) list_medium_line_t4_g4_t4_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000298b2) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000298b2) list_medium_line_t4_g4_t

0x6a4b,	// (0x00021156) chi_dic_find_pane_g1

0x3df5,	// (0x0001e500) main_tport_pane

0xccbb,	// (0x000273c6) list_medium_line_plain_t1

0xc525,	// (0x00026c30) list_medium_line_t2_g2_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t2_g2_g1

0xc525,	// (0x00026c30) list_medium_line_t2_g2_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x000298a4) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x000298a4) list_medium_line_t2_g2_g

0xc56d,	// (0x00026c78) list_medium_line_t2_g2_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t2_g2_t1

0xc56d,	// (0x00026c78) list_medium_line_t2_g2_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00029919) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00029919) list_medium_line_t2_g2_t

0x0ab1,	// (0x0001b1bc) aid_sp_fs_list_icon_a_sm

0x0ab9,	// (0x0001b1c4) aid_sp_fs_list_icon_d

0x0ac1,	// (0x0001b1cc) aid_sp_fs_text_primary

0x0aca,	// (0x0001b1d5) aid_sp_fs_text_secondary

0xbe24,	// (0x0002652f) list_medium_line

0xbe24,	// (0x0002652f) list_medium_line_g2

0xbe24,	// (0x0002652f) list_medium_line_g3

0xbe24,	// (0x0002652f) list_medium_line_plain

0xbe24,	// (0x0002652f) list_medium_line_plain_t2

0xbe24,	// (0x0002652f) list_medium_line_plain_t3

0xbe24,	// (0x0002652f) list_medium_line_right_icon

0xbe24,	// (0x0002652f) list_medium_line_right_iconx2

0xbe24,	// (0x0002652f) list_medium_line_t2

0xbe24,	// (0x0002652f) list_medium_line_t2_g2

0xbe24,	// (0x0002652f) list_medium_line_t2_g3

0xbe24,	// (0x0002652f) list_medium_line_t2_right_icon

0xbe24,	// (0x0002652f) list_medium_line_t2_right_iconx2

0xbe24,	// (0x0002652f) list_medium_line_t3

0xbe24,	// (0x0002652f) list_medium_line_t3_g2

0xbe24,	// (0x0002652f) list_medium_line_t3_g3

0xbe24,	// (0x0002652f) list_medium_line_t3_right_iconx2

0xbe24,	// (0x0002652f) list_medium_line_t4_g4

0xbe24,	// (0x0002652f) list_medium_line_x2

0xbe24,	// (0x0002652f) list_medium_line_x2_t2_g2

0xbe24,	// (0x0002652f) list_medium_line_x2_t2_g3

0xbe24,	// (0x0002652f) list_medium_line_x2_t2_g4

0xbe24,	// (0x0002652f) list_medium_line_x2_t3

0xbe24,	// (0x0002652f) list_medium_line_x2_t3_g2

0xbe24,	// (0x0002652f) list_medium_line_x2_t3_g3

0xbe24,	// (0x0002652f) list_medium_line_x2_t3_g4

0xbe24,	// (0x0002652f) list_medium_line_x2_t4_g2

0xbe24,	// (0x0002652f) list_medium_line_x2_t4_g4

0xbe24,	// (0x0002652f) list_medium_line_x3

0xbe24,	// (0x0002652f) list_medium_line_x3_t4

0xbe24,	// (0x0002652f) list_medium_line_x3_t4_g4

0xbe24,	// (0x0002652f) list_medium_line_x4_t4

0xbe24,	// (0x0002652f) list_medium_line_x4_t4_g7

0xbe24,	// (0x0002652f) list_medium_line_x4_t5

0x91b3,	// (0x000238be) list_single_fs_dyc_pane_ParamLimits

0x91b3,	// (0x000238be) list_single_fs_dyc_pane

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g1

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g2

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g3

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g4

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g5

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x4_t4_g7_g6

0xc533,	// (0x00026c3e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc533,	// (0x00026c3e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfad0,	// (0x0002a1db) list_medium_line_x4_t4_g7_g_ParamLimits

0xfad0,	// (0x0002a1db) list_medium_line_x4_t4_g7_g

0xc56d,	// (0x00026c78) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x4_t4_g7_t1

0xc56d,	// (0x00026c78) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x4_t4_g7_t2

0xc56d,	// (0x00026c78) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x4_t4_g7_t3

0xc581,	// (0x00026c8c) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc581,	// (0x00026c8c) list_medium_line_x4_t4_g7_t4

0xc581,	// (0x00026c8c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc581,	// (0x00026c8c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfadf,	// (0x0002a1ea) list_medium_line_x4_t4_g7_t_ParamLimits

0xfadf,	// (0x0002a1ea) list_medium_line_x4_t4_g7_t

0x9842,	// (0x00023f4d) list_single_dyc_row_pane_ParamLimits

0x9842,	// (0x00023f4d) list_single_dyc_row_pane

0x9d6c,	// (0x00024477) call5_gesture_pane_ParamLimits

0x9d6c,	// (0x00024477) call5_gesture_pane

0x9da0,	// (0x000244ab) call5_windows_pane_ParamLimits

0x9da0,	// (0x000244ab) call5_windows_pane

0x9df3,	// (0x000244fe) call5_swipe_1_pane_cp_ParamLimits

0x9df3,	// (0x000244fe) call5_swipe_1_pane_cp

0x9dff,	// (0x0002450a) call5_swipe_2_pane_cp_ParamLimits

0x9dff,	// (0x0002450a) call5_swipe_2_pane_cp

0xc7d2,	// (0x00026edd) call5_image_pane_cp

0x9e0b,	// (0x00024516) popup_call5_audio_first_window_cp_ParamLimits

0x9e0b,	// (0x00024516) popup_call5_audio_first_window_cp

0x15a8,	// (0x0001bcb3) call5_swipe_1_pane_g1_cp_ParamLimits

0x15a8,	// (0x0001bcb3) call5_swipe_1_pane_g1_cp

0x15b5,	// (0x0001bcc0) call5_swipe_1_pane_g2_cp

0x15bd,	// (0x0001bcc8) call5_swipe_1_pane_t1_cp_ParamLimits

0x15bd,	// (0x0001bcc8) call5_swipe_1_pane_t1_cp

0x15a8,	// (0x0001bcb3) call5_swipe_2_pane_g1_cp_ParamLimits

0x15a8,	// (0x0001bcb3) call5_swipe_2_pane_g1_cp

0x15d2,	// (0x0001bcdd) call5_swipe_2_pane_g2_cp

0x15da,	// (0x0001bce5) call5_swipe_2_pane_t1_cp_ParamLimits

0x15da,	// (0x0001bce5) call5_swipe_2_pane_t1_cp

0xc186,	// (0x00026891) main_sp_fs_email_pane

0x15ef,	// (0x0001bcfa) main_sp_fs_listscroll_pane_te

0x9e19,	// (0x00024524) popup_sp_fs_action_menu_pane_ParamLimits

0x9e19,	// (0x00024524) popup_sp_fs_action_menu_pane

0xc563,	// (0x00026c6e) bg_sp_fs_ctrlbar_pane_g1

0x15f8,	// (0x0001bd03) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1601,	// (0x0001bd0c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe422,	// (0x00028b2d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc563,	// (0x00026c6e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbcd,	// (0x0002a2d8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe44d,	// (0x00028b58) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe44d,	// (0x00028b58) bg_sp_fs_ctrlbar_ddmenu_pane

0x160a,	// (0x0001bd15) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x160a,	// (0x0001bd15) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1616,	// (0x0001bd21) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1616,	// (0x0001bd21) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbd6,	// (0x0002a2e1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbd6,	// (0x0002a2e1) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1622,	// (0x0001bd2d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1622,	// (0x0001bd2d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc563,	// (0x00026c6e) list_medium_line_t2_right_icon_g1

0xccbb,	// (0x000273c6) list_medium_line_t2_right_icon_t1

0xccbb,	// (0x000273c6) list_medium_line_t2_right_icon_t2

0x0001,

0xfbdb,	// (0x0002a2e6) list_medium_line_t2_right_icon_t

0xd34b,	// (0x00027a56) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd34b,	// (0x00027a56) bg_sp_fs_ctrlbar_pane

0x9ea0,	// (0x000245ab) main_sp_fs_ctrlbar_button_pane_cp01

0x9ea8,	// (0x000245b3) main_sp_fs_ctrlbar_ddmenu_pane

0x1674,	// (0x0001bd7f) main_sp_fs_ctrlbar_pane_g1

0x1680,	// (0x0001bd8b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbe0,	// (0x0002a2eb) main_sp_fs_ctrlbar_pane_g

0x9ee4,	// (0x000245ef) main_sp_fs_ctrlbar_pane_t1

0x9f1f,	// (0x0002462a) main_sp_fs_ctrlbar_pane

0x9f35,	// (0x00024640) main_sp_fs_listscroll_pane_te_cp01

0x9f50,	// (0x0002465b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9f50,	// (0x0002465b) popup_sp_fs_action_menu_pane_cp01

0xc186,	// (0x00026891) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc186,	// (0x00026891) bg_sp_fs_highlight_list_pane_cp01

0x16a7,	// (0x0001bdb2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x16a7,	// (0x0001bdb2) sp_fs_action_menu_list_gene_pane_g1

0x16b6,	// (0x0001bdc1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x16b6,	// (0x0001bdc1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbee,	// (0x0002a2f9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbee,	// (0x0002a2f9) sp_fs_action_menu_list_gene_pane_g

0x16c3,	// (0x0001bdce) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x16c3,	// (0x0001bdce) sp_fs_action_menu_list_gene_pane_t1

0x16db,	// (0x0001bde6) sp_fs_action_menu_list_gene_pane_ParamLimits

0x16db,	// (0x0001bde6) sp_fs_action_menu_list_gene_pane

0x16fa,	// (0x0001be05) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x16fa,	// (0x0001be05) popup_sp_fs_action_menu_bg_pane

0x1708,	// (0x0001be13) sp_fs_action_menu_list_pane_ParamLimits

0x1708,	// (0x0001be13) sp_fs_action_menu_list_pane

0x9f70,	// (0x0002467b) sp_fs_scroll_pane_cp01_ParamLimits

0x9f70,	// (0x0002467b) sp_fs_scroll_pane_cp01

0xccbb,	// (0x000273c6) list_medium_line_plain_t2_t1

0xccbb,	// (0x000273c6) list_medium_line_plain_t2_t2

0x0001,

0xfbdb,	// (0x0002a2e6) list_medium_line_plain_t2_t

0xccbb,	// (0x000273c6) list_medium_line_plain_t3_t1

0xccbb,	// (0x000273c6) list_medium_line_plain_t3_t2

0xccbb,	// (0x000273c6) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x00029964) list_medium_line_plain_t3_t

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g2_g1

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x000298a4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x000298a4) list_medium_line_x2_t2_g2_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g2_t1

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00029919) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00029919) list_medium_line_x2_t2_g2_t

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g2_g1

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x000298a4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x000298a4) list_medium_line_x2_t4_g2_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g2_t1

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g2_t2

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g2_t3

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000298b2) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000298b2) list_medium_line_x2_t4_g2_t

0xc563,	// (0x00026c6e) list_medium_line_t3_right_iconx2_g1

0xc563,	// (0x00026c6e) list_medium_line_t3_right_iconx2_g2

0xc563,	// (0x00026c6e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x00029a80) list_medium_line_t3_right_iconx2_g

0xccbb,	// (0x000273c6) list_medium_line_t3_right_iconx2_t1

0xccbb,	// (0x000273c6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbdb,	// (0x0002a2e6) list_medium_line_t3_right_iconx2_t

0xc525,	// (0x00026c30) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x3_t4_g4_g1

0xc525,	// (0x00026c30) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x3_t4_g4_g2

0xc525,	// (0x00026c30) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x3_t4_g4_g3

0xc525,	// (0x00026c30) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x000298a9) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x000298a9) list_medium_line_x3_t4_g4_g

0xc56d,	// (0x00026c78) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x3_t4_g4_t1

0xc56d,	// (0x00026c78) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x3_t4_g4_t2

0xc56d,	// (0x00026c78) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x3_t4_g4_t3

0xc56d,	// (0x00026c78) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000298b2) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000298b2) list_medium_line_x3_t4_g4_t

0x9f96,	// (0x000246a1) list_single_dyc_row_text_pane_t1_ParamLimits

0x9f96,	// (0x000246a1) list_single_dyc_row_text_pane_t1

0x9fcd,	// (0x000246d8) list_single_dyc_row_text_pane_t2_ParamLimits

0x9fcd,	// (0x000246d8) list_single_dyc_row_text_pane_t2

0x1728,	// (0x0001be33) list_single_dyc_row_text_pane_t3_ParamLimits

0x1728,	// (0x0001be33) list_single_dyc_row_text_pane_t3

0x0005,

0xfbf3,	// (0x0002a2fe) list_single_dyc_row_text_pane_t_ParamLimits

0xfbf3,	// (0x0002a2fe) list_single_dyc_row_text_pane_t

0x174c,	// (0x0001be57) list_single_dyc_row_pane_g1_ParamLimits

0x174c,	// (0x0001be57) list_single_dyc_row_pane_g1

0x1758,	// (0x0001be63) list_single_dyc_row_pane_g2_ParamLimits

0x1758,	// (0x0001be63) list_single_dyc_row_pane_g2

0x1764,	// (0x0001be6f) list_single_dyc_row_pane_g3_ParamLimits

0x1764,	// (0x0001be6f) list_single_dyc_row_pane_g3

0x1777,	// (0x0001be82) list_single_dyc_row_pane_g4_ParamLimits

0x1777,	// (0x0001be82) list_single_dyc_row_pane_g4

0x0006,

0xfc00,	// (0x0002a30b) list_single_dyc_row_pane_g_ParamLimits

0xfc00,	// (0x0002a30b) list_single_dyc_row_pane_g

0x17c9,	// (0x0001bed4) list_single_dyc_row_text_pane_ParamLimits

0x17c9,	// (0x0001bed4) list_single_dyc_row_text_pane

0xbe24,	// (0x0002652f) bg_sp_fs_scroll_pane

0x17ee,	// (0x0001bef9) thumb_sp_fs_scroll_pane

0xc525,	// (0x00026c30) list_medium_line_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_g1

0xc56d,	// (0x00026c78) list_medium_line_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t1

0xc525,	// (0x00026c30) list_medium_line_x2_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_g1

0xc525,	// (0x00026c30) list_medium_line_x2_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x000298a4) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x000298a4) list_medium_line_x2_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t1

0xc525,	// (0x00026c30) list_medium_line_x3_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x3_g1

0x17f7,	// (0x0001bf02) list_medium_line_x3_g2_ParamLimits

0x17f7,	// (0x0001bf02) list_medium_line_x3_g2

0x0001,

0xfc0f,	// (0x0002a31a) list_medium_line_x3_g_ParamLimits

0xfc0f,	// (0x0002a31a) list_medium_line_x3_g

0x1805,	// (0x0001bf10) list_medium_line_x3_t1_ParamLimits

0x1805,	// (0x0001bf10) list_medium_line_x3_t1

0x1819,	// (0x0001bf24) thumb_sp_fs_scroll_pane_g1

0x1822,	// (0x0001bf2d) thumb_sp_fs_scroll_pane_g2

0x182b,	// (0x0001bf36) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x0002a31f) thumb_sp_fs_scroll_pane_g

0x1819,	// (0x0001bf24) bg_sp_fs_scroll_pane_g1

0x1822,	// (0x0001bf2d) bg_sp_fs_scroll_pane_g2

0x182b,	// (0x0001bf36) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x0002a31f) bg_sp_fs_scroll_pane_g

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g4_g1

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g4_g2

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g4_g3

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x000298a9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x000298a9) list_medium_line_x2_t3_g4_g

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g4_t1

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g4_t2

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0002989d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0002989d) list_medium_line_x2_t3_g4_t

0xc525,	// (0x00026c30) list_medium_line_g2_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_g2_g1

0xc525,	// (0x00026c30) list_medium_line_g2_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x000298a4) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x000298a4) list_medium_line_g2_g

0xc56d,	// (0x00026c78) list_medium_line_g2_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_g2_t1

0xc525,	// (0x00026c30) list_medium_line_t3_g2_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t3_g2_g1

0xc525,	// (0x00026c30) list_medium_line_t3_g2_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x000298a4) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x000298a4) list_medium_line_t3_g2_g

0xc56d,	// (0x00026c78) list_medium_line_t3_g2_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_g2_t1

0xc56d,	// (0x00026c78) list_medium_line_t3_g2_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_g2_t2

0xc56d,	// (0x00026c78) list_medium_line_t3_g2_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0002989d) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0002989d) list_medium_line_t3_g2_t

0xc563,	// (0x00026c6e) list_medium_line_right_icon_g1

0xccbb,	// (0x000273c6) list_medium_line_right_icon_t1

0xc525,	// (0x00026c30) list_medium_line_t2_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t2_g1

0xc56d,	// (0x00026c78) list_medium_line_t2_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t2_t1

0xc56d,	// (0x00026c78) list_medium_line_t2_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00029919) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00029919) list_medium_line_t2_t

0xc525,	// (0x00026c30) list_medium_line_t3_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t3_g1

0xc56d,	// (0x00026c78) list_medium_line_t3_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_t1

0xc56d,	// (0x00026c78) list_medium_line_t3_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_t2

0xc56d,	// (0x00026c78) list_medium_line_t3_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0002989d) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0002989d) list_medium_line_t3_t

0xc525,	// (0x00026c30) list_medium_line_g3_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_g3_g1

0xc525,	// (0x00026c30) list_medium_line_g3_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_g3_g2

0xc525,	// (0x00026c30) list_medium_line_g3_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00029896) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00029896) list_medium_line_g3_g

0xc56d,	// (0x00026c78) list_medium_line_g3_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_g3_t1

0xc525,	// (0x00026c30) list_medium_line_t2_g3_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t2_g3_g1

0xc525,	// (0x00026c30) list_medium_line_t2_g3_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t2_g3_g2

0xc525,	// (0x00026c30) list_medium_line_t2_g3_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00029896) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00029896) list_medium_line_t2_g3_g

0xc56d,	// (0x00026c78) list_medium_line_t2_g3_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t2_g3_t1

0xc56d,	// (0x00026c78) list_medium_line_t2_g3_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00029919) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00029919) list_medium_line_t2_g3_t

0xc525,	// (0x00026c30) list_medium_line_t3_g3_g1_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t3_g3_g1

0xc525,	// (0x00026c30) list_medium_line_t3_g3_g2_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t3_g3_g2

0xc525,	// (0x00026c30) list_medium_line_t3_g3_g3_ParamLimits

0xc525,	// (0x00026c30) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00029896) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00029896) list_medium_line_t3_g3_g

0xc56d,	// (0x00026c78) list_medium_line_t3_g3_t1_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_g3_t1

0xc56d,	// (0x00026c78) list_medium_line_t3_g3_t2_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_g3_t2

0xc56d,	// (0x00026c78) list_medium_line_t3_g3_t3_ParamLimits

0xc56d,	// (0x00026c78) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0002989d) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0002989d) list_medium_line_t3_g3_t

0xc563,	// (0x00026c6e) list_medium_line_right_iconx2_g1

0xc563,	// (0x00026c6e) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00029797) list_medium_line_right_iconx2_g

0xccbb,	// (0x000273c6) list_medium_line_right_iconx2_t1

0xc563,	// (0x00026c6e) list_medium_line_t2_right_iconx2_g1

0xc563,	// (0x00026c6e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00029797) list_medium_line_t2_right_iconx2_g

0xccbb,	// (0x000273c6) list_medium_line_t2_right_iconx2_t1

0xccbb,	// (0x000273c6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbdb,	// (0x0002a2e6) list_medium_line_t2_right_iconx2_t

0xccbb,	// (0x000273c6) list_medium_line_x4_t4_t1

0xccbb,	// (0x000273c6) list_medium_line_x4_t4_t2

0xccbb,	// (0x000273c6) list_medium_line_x4_t4_t3

0xccbb,	// (0x000273c6) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x0002996b) list_medium_line_x4_t4_t

0xa11a,	// (0x00024825) tport_appsw_pane_ParamLimits

0xa11a,	// (0x00024825) tport_appsw_pane

0xa128,	// (0x00024833) tport_contact_pane_ParamLimits

0xa128,	// (0x00024833) tport_contact_pane

0xa138,	// (0x00024843) tport_listscroll_pane_ParamLimits

0xa138,	// (0x00024843) tport_listscroll_pane

0xa148,	// (0x00024853) cell_tport_appsw_pane_ParamLimits

0xa148,	// (0x00024853) cell_tport_appsw_pane

0xc533,	// (0x00026c3e) tport_appsw_pane_g1_ParamLimits

0xc533,	// (0x00026c3e) tport_appsw_pane_g1

0x1834,	// (0x0001bf3f) tport_contact_pane_g1

0x183d,	// (0x0001bf48) tport_contact_pane_t1

0x184b,	// (0x0001bf56) tport_contact_pane_t2

0x0001,

0xfc1b,	// (0x0002a326) tport_contact_pane_t

0x1859,	// (0x0001bf64) list_tport_pane

0x1862,	// (0x0001bf6d) scroll_pane_cp_030

0xa17b,	// (0x00024886) cell_tport_appsw_pane_g1

0xa18b,	// (0x00024896) cell_tport_appsw_pane_t1

0xa199,	// (0x000248a4) grid_highlight_pane_cp019

0xa1a1,	// (0x000248ac) list_tport_double_graphic_pane_ParamLimits

0xa1a1,	// (0x000248ac) list_tport_double_graphic_pane

0xc186,	// (0x00026891) list_highlight_pane_cp023_ParamLimits

0xc186,	// (0x00026891) list_highlight_pane_cp023

0xa1b2,	// (0x000248bd) list_tport_double_graphic_pane_g1_ParamLimits

0xa1b2,	// (0x000248bd) list_tport_double_graphic_pane_g1

0xa1bf,	// (0x000248ca) list_tport_double_graphic_pane_t1_ParamLimits

0xa1bf,	// (0x000248ca) list_tport_double_graphic_pane_t1

0xa1d4,	// (0x000248df) list_tport_double_graphic_pane_t2_ParamLimits

0xa1d4,	// (0x000248df) list_tport_double_graphic_pane_t2

0x0001,

0xfc27,	// (0x0002a332) list_tport_double_graphic_pane_t_ParamLimits

0xfc27,	// (0x0002a332) list_tport_double_graphic_pane_t

0xbe24,	// (0x0002652f) main_cale_note_pane

0x4b02,	// (0x0001f20d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4b02,	// (0x0001f20d) cell_vitu2_function_top_wide_pane_cp01

0x9be9,	// (0x000242f4) wait_bar_pane_cp05_ParamLimits

0xc186,	// (0x00026891) listscroll_cmail_pane

0x1873,	// (0x0001bf7e) list_cmail_pane

0xa1e6,	// (0x000248f1) list_cmail_body_pane

0xa20e,	// (0x00024919) list_single_cmail_header_caption_pane

0xa23d,	// (0x00024948) list_single_cmail_header_detail_pane_ParamLimits

0xa23d,	// (0x00024948) list_single_cmail_header_detail_pane

0x188a,	// (0x0001bf95) list_single_cmail_header_caption_pane_t1

0xa27a,	// (0x00024985) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa27a,	// (0x00024985) list_single_cmail_header_detail_pane_g1

0x18a1,	// (0x0001bfac) list_single_cmail_header_detail_pane_g2_ParamLimits

0x18a1,	// (0x0001bfac) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc2c,	// (0x0002a337) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc2c,	// (0x0002a337) list_single_cmail_header_detail_pane_g

0xa290,	// (0x0002499b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa290,	// (0x0002499b) list_single_cmail_header_detail_pane_t1

0xa2cc,	// (0x000249d7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa2cc,	// (0x000249d7) list_single_cmail_header_editor_pane_bg

0x125b,	// (0x0001b966) list_cmail_body_pane_g1

0x18de,	// (0x0001bfe9) list_cmail_body_pane_t1

0x042a,	// (0x0001ab35) list_single_cmail_header_editor_pane_bg_g1

0xc9eb,	// (0x000270f6) list_single_cmail_header_editor_pane_bg_g1_copy1

0x043a,	// (0x0001ab45) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0432,	// (0x0001ab3d) list_single_cmail_header_editor_pane_bg_g1_copy3

0x070e,	// (0x0001ae19) list_single_cmail_header_editor_pane_bg_g1_copy4

0x045a,	// (0x0001ab65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x044a,	// (0x0001ab55) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0452,	// (0x0001ab5d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc9cb,	// (0x000270d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa2e3,	// (0x000249ee) calenote_gesture_pane_ParamLimits

0xa2e3,	// (0x000249ee) calenote_gesture_pane

0xa2fd,	// (0x00024a08) calenote_window_pane_ParamLimits

0xa2fd,	// (0x00024a08) calenote_window_pane

0x18ec,	// (0x0001bff7) popup_note_window_cp01

0xa315,	// (0x00024a20) calenote_swipe_1_pane_ParamLimits

0xa315,	// (0x00024a20) calenote_swipe_1_pane

0x9dff,	// (0x0002450a) calenote_swipe_2_pane_ParamLimits

0x9dff,	// (0x0002450a) calenote_swipe_2_pane

0x15a8,	// (0x0001bcb3) calenote_swipe_1_pane_g1_ParamLimits

0x15a8,	// (0x0001bcb3) calenote_swipe_1_pane_g1

0x18fe,	// (0x0001c009) calenote_swipe_1_pane_g2_ParamLimits

0x18fe,	// (0x0001c009) calenote_swipe_1_pane_g2

0x0001,

0xfc38,	// (0x0002a343) calenote_swipe_1_pane_g_ParamLimits

0xfc38,	// (0x0002a343) calenote_swipe_1_pane_g

0x190a,	// (0x0001c015) calenote_swipe_1_pane_t1_ParamLimits

0x190a,	// (0x0001c015) calenote_swipe_1_pane_t1

0x15a8,	// (0x0001bcb3) calenote_swipe_2_pane_g1_ParamLimits

0x15a8,	// (0x0001bcb3) calenote_swipe_2_pane_g1

0x1929,	// (0x0001c034) calenote_swipe_2_pane_g2_ParamLimits

0x1929,	// (0x0001c034) calenote_swipe_2_pane_g2

0x0001,

0xfc3d,	// (0x0002a348) calenote_swipe_2_pane_g_ParamLimits

0xfc3d,	// (0x0002a348) calenote_swipe_2_pane_g

0x1935,	// (0x0001c040) calenote_swipe_2_pane_t1_ParamLimits

0x1935,	// (0x0001c040) calenote_swipe_2_pane_t1

0xbe24,	// (0x0002652f) main_mup_navstr_pane

0x7fe6,	// (0x000226f1) main_mup3_pane_t7_ParamLimits

0x7fe6,	// (0x000226f1) main_mup3_pane_t7

0x4280,	// (0x0001e98b) main_mp4_pane_g6_ParamLimits

0x4280,	// (0x0001e98b) main_mp4_pane_g6

0x45cd,	// (0x0001ecd8) main_image3_pane_t4_ParamLimits

0x45cd,	// (0x0001ecd8) main_image3_pane_t4

0xa328,	// (0x00024a33) popup_navstr_preview_pane_ParamLimits

0xa328,	// (0x00024a33) popup_navstr_preview_pane

0xa334,	// (0x00024a3f) scroll_navstr_pane_ParamLimits

0xa334,	// (0x00024a3f) scroll_navstr_pane

0xbe24,	// (0x0002652f) bg_popup_preview_window_pane_cp04

0x195c,	// (0x0001c067) popup_navstr_preview_pane_t1

0xa340,	// (0x00024a4b) scroll_navstr_pane_g1_ParamLimits

0xa340,	// (0x00024a4b) scroll_navstr_pane_g1

0xa34d,	// (0x00024a58) scroll_navstr_pane_t1_ParamLimits

0xa34d,	// (0x00024a58) scroll_navstr_pane_t1

0x18f5,	// (0x0001c000) bg_button_pane_cp014

0x18f5,	// (0x0001c000) bg_button_pane_cp030

0x9d12,	// (0x0002441d) list_double_fisheye_pane_g4_ParamLimits

0x9d12,	// (0x0002441d) list_double_fisheye_pane_g4

0x9d1e,	// (0x00024429) list_double_fisheye_pane_g5_ParamLimits

0x9d1e,	// (0x00024429) list_double_fisheye_pane_g5

0x056f,	// (0x0001ac7a) sp_fs_scroll_pane_cp03

0x1674,	// (0x0001bd7f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1680,	// (0x0001bd8b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbe0,	// (0x0002a2eb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9ee4,	// (0x000245ef) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1882,	// (0x0001bf8d) sp_fs_scroll_pane_cp02

0xc711,	// (0x00026e1c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc711,	// (0x00026e1c) popup_sp_fs_calendar_preview_list_single_pane

0xbe24,	// (0x0002652f) main_cam6_pano_pane

0x3dd9,	// (0x0001e4e4) main_mup3_pane_ParamLimits

0xbe24,	// (0x0002652f) main_phacti_pane

0x9abe,	// (0x000241c9) bg_button_pane_cp11

0x9ad6,	// (0x000241e1) main_mobtv_info_pane_g2_ParamLimits

0x9ad6,	// (0x000241e1) main_mobtv_info_pane_g2

0x0001,

0xfb40,	// (0x0002a24b) main_mobtv_info_pane_g_ParamLimits

0xfb40,	// (0x0002a24b) main_mobtv_info_pane_g

0xc581,	// (0x00026c8c) sc_clock_pane_t5_ParamLimits

0xc581,	// (0x00026c8c) sc_clock_pane_t5

0xd241,	// (0x0002794c) main_radioblah_pane_g1_ParamLimits

0xd405,	// (0x00027b10) main_radioblah_pane_t3_ParamLimits

0xd405,	// (0x00027b10) main_radioblah_pane_t3

0xd405,	// (0x00027b10) main_radioblah_pane_t4_ParamLimits

0xd405,	// (0x00027b10) main_radioblah_pane_t4

0xc517,	// (0x00026c22) main_radioblah_text_pane_ParamLimits

0xc517,	// (0x00026c22) main_radioblah_text_pane

0x14a0,	// (0x0001bbab) main_radioblah_info_pane_g1_ParamLimits

0x14e4,	// (0x0001bbef) main_radioblah_info_pane_t4_ParamLimits

0x14e4,	// (0x0001bbef) main_radioblah_info_pane_t4

0xc186,	// (0x00026891) main_sp_fs_calendar_pane

0xa35f,	// (0x00024a6a) main_phacti_pane_g1

0xa367,	// (0x00024a72) phacti_note_pane_ParamLimits

0xa367,	// (0x00024a72) phacti_note_pane

0x1973,	// (0x0001c07e) phacti_term_pane_ParamLimits

0x1973,	// (0x0001c07e) phacti_term_pane

0x1988,	// (0x0001c093) phacti_note_pane_t1_ParamLimits

0x1988,	// (0x0001c093) phacti_note_pane_t1

0x199f,	// (0x0001c0aa) phacti_term_pane_g1

0x19a7,	// (0x0001c0b2) phacti_term_pane_t1_ParamLimits

0x19a7,	// (0x0001c0b2) phacti_term_pane_t1

0x19d1,	// (0x0001c0dc) popup_sp_fs_calendar_preview_list_single_pane_g1

0x19d9,	// (0x0001c0e4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc47,	// (0x0002a352) popup_sp_fs_calendar_preview_list_single_pane_g

0x19e1,	// (0x0001c0ec) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x19e1,	// (0x0001c0ec) popup_sp_fs_calendar_preview_list_single_pane_t1

0x19f7,	// (0x0001c102) aid_popup_sp_fs_bg_corner_pane

0xc563,	// (0x00026c6e) popup_sp_fs_calendar_preview_bg_pane_g1

0xbe24,	// (0x0002652f) popup_sp_fs_calendar_preview_bg_pane

0x19ff,	// (0x0001c10a) popup_sp_fs_calendar_preview_list_pane

0x1a10,	// (0x0001c11b) bg_main_sp_fs_cale_pane_ParamLimits

0x1a10,	// (0x0001c11b) bg_main_sp_fs_cale_pane

0x1a28,	// (0x0001c133) listscroll_cale_mrui_pane_ParamLimits

0x1a28,	// (0x0001c133) listscroll_cale_mrui_pane

0xebe2,	// (0x000292ed) listscroll_sp_fs_schedule_track_pane

0x1a40,	// (0x0001c14b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1a40,	// (0x0001c14b) main_sp_fs_ctrlbar_pane_cp01

0xebe2,	// (0x000292ed) main_sp_fs_ribbon_pane

0x1a56,	// (0x0001c161) popup_sp_fs_cale_preview_window

0x055a,	// (0x0001ac65) list_single_sp_fs_schedule_track_pane_ParamLimits

0x055a,	// (0x0001ac65) list_single_sp_fs_schedule_track_pane

0x055a,	// (0x0001ac65) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x055a,	// (0x0001ac65) bg_sp_fs_highlight_list_pane_cp03

0x7cca,	// (0x000223d5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7cca,	// (0x000223d5) list_single_sp_fs_schedule_track_pane_g1

0x7cca,	// (0x000223d5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7cca,	// (0x000223d5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc4c,	// (0x0002a357) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc4c,	// (0x0002a357) list_single_sp_fs_schedule_track_pane_g

0xa37d,	// (0x00024a88) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa37d,	// (0x00024a88) list_single_sp_fs_schedule_track_pane_t1

0x01ce,	// (0x0001a8d9) sp_fs_schedule_track_pane_ParamLimits

0x01ce,	// (0x0001a8d9) sp_fs_schedule_track_pane

0xebea,	// (0x000292f5) sp_fs_schedule_track_pane_g1

0xebea,	// (0x000292f5) sp_fs_schedule_track_pane_g2

0xebea,	// (0x000292f5) sp_fs_schedule_track_pane_g3

0xebea,	// (0x000292f5) sp_fs_schedule_track_pane_g4

0xebea,	// (0x000292f5) sp_fs_schedule_track_pane_g5

0x0004,

0xfc51,	// (0x0002a35c) sp_fs_schedule_track_pane_g

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g1

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g2

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g3

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g4

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g5

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g6

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g7

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g8

0xebea,	// (0x000292f5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc5c,	// (0x0002a367) bg_sp_fs_schedule_viewer_highlight_g

0xebe2,	// (0x000292ed) bg_main_sp_fs_ribbon_pane

0xebea,	// (0x000292f5) main_sp_fs_ribbon_pane_g1

0x1a68,	// (0x0001c173) main_sp_fs_ribbon_pane_t1

0x1a68,	// (0x0001c173) main_sp_fs_ribbon_pane_t2

0x1a68,	// (0x0001c173) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc6f,	// (0x0002a37a) main_sp_fs_ribbon_pane_t

0xebe2,	// (0x000292ed) main_sp_fs_ribbon_scheduler_pane

0xebea,	// (0x000292f5) bg_main_sp_fs_ribbon_pane_g1

0xebea,	// (0x000292f5) bg_main_sp_fs_ribbon_pane_g2

0xebea,	// (0x000292f5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6b8,	// (0x00029dc3) bg_main_sp_fs_ribbon_pane_g

0xebea,	// (0x000292f5) main_sp_fs_ribbon_scheduler_pane_g1

0xebea,	// (0x000292f5) main_sp_fs_ribbon_scheduler_pane_g2

0xebea,	// (0x000292f5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6b8,	// (0x00029dc3) main_sp_fs_ribbon_scheduler_pane_g

0x1a76,	// (0x0001c181) list_cale_mrui_pane

0xa38f,	// (0x00024a9a) sp_fs_scroll_pane_cp07_ParamLimits

0xa38f,	// (0x00024a9a) sp_fs_scroll_pane_cp07

0x055a,	// (0x0001ac65) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x055a,	// (0x0001ac65) bg_sp_fs_schedule_viewer_highlight

0xebe2,	// (0x000292ed) list_single_sp_fs_schedule_track_pane_cp01

0xebe2,	// (0x000292ed) list_sp_fs_schedule_track_pane

0x1a83,	// (0x0001c18e) sp_fs_scroll_pane_cp06_ParamLimits

0x1a83,	// (0x0001c18e) sp_fs_scroll_pane_cp06

0xc563,	// (0x00026c6e) bgmain_sp_fs_calendar_pane_g1

0xa3ab,	// (0x00024ab6) list_single_cale_mrui_pane_ParamLimits

0xa3ab,	// (0x00024ab6) list_single_cale_mrui_pane

0x1a97,	// (0x0001c1a2) list_single_cale_mrui_row_pane_ParamLimits

0x1a97,	// (0x0001c1a2) list_single_cale_mrui_row_pane

0x1aa4,	// (0x0001c1af) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1aa4,	// (0x0001c1af) list_single_cale_mrui_row_pane_g1

0x1ae9,	// (0x0001c1f4) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1ae9,	// (0x0001c1f4) list_single_cale_mrui_row_pane_t1

0xa3d9,	// (0x00024ae4) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa3d9,	// (0x00024ae4) list_single_cale_mrui_row_pane_t2

0x1afb,	// (0x0001c206) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1afb,	// (0x0001c206) list_single_cale_mrui_row_pane_t3

0x1b2a,	// (0x0001c235) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1b2a,	// (0x0001c235) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc7d,	// (0x0002a388) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc7d,	// (0x0002a388) list_single_cale_mrui_row_pane_t

0xa43f,	// (0x00024b4a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa43f,	// (0x00024b4a) list_single_cmail_header_editor_pane_bg_cp01

0xa467,	// (0x00024b72) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa467,	// (0x00024b72) list_single_cmail_header_editor_pane_bg_cp02

0x1b59,	// (0x0001c264) main_radioblah_text_pane_t1_ParamLimits

0x1b59,	// (0x0001c264) main_radioblah_text_pane_t1

0x1b73,	// (0x0001c27e) cam6_indi_pane_cp01

0x1b7b,	// (0x0001c286) cam6_mode_pane_cp01

0x1b83,	// (0x0001c28e) cam6_pano_pane

0x1b8c,	// (0x0001c297) cam6_zoom_pane_cp01

0x1b94,	// (0x0001c29f) cam6_pano_image_pane

0x1b9f,	// (0x0001c2aa) cam6_pano_pane_g1

0x125b,	// (0x0001b966) cam6_pano_pane_g2

0x1ba8,	// (0x0001c2b3) cam6_pano_pane_g3

0x1bb1,	// (0x0001c2bc) cam6_pano_pane_g4

0xee99,	// (0x000295a4) cam6_pano_pane_g5

0x1bba,	// (0x0001c2c5) cam6_pano_pane_g6

0x1bc4,	// (0x0001c2cf) cam6_pano_pane_g7

0x1bcc,	// (0x0001c2d7) cam6_pano_pane_g8

0x1bd5,	// (0x0001c2e0) cam6_pano_pane_g9

0x0008,

0xfc86,	// (0x0002a391) cam6_pano_pane_g

0xbe24,	// (0x0002652f) main_browser_tag_pane

0x1954,	// (0x0001c05f) grid_navstr_albumart_pane

0x1be0,	// (0x0001c2eb) cell_navstr_albumart_pane_ParamLimits

0x1be0,	// (0x0001c2eb) cell_navstr_albumart_pane

0x1c00,	// (0x0001c30b) cell_navstr_albumart_pane_g1

0x1c08,	// (0x0001c313) cell_navstr_albumart_pane_g2

0x1c10,	// (0x0001c31b) cell_navstr_albumart_pane_g3

0x1c18,	// (0x0001c323) cell_navstr_albumart_pane_g4

0x0003,

0xfc99,	// (0x0002a3a4) cell_navstr_albumart_pane_g

0xa483,	// (0x00024b8e) bt_list_pane_ParamLimits

0xa483,	// (0x00024b8e) bt_list_pane

0xa4a4,	// (0x00024baf) bt_list_pane_t1

0xa4b3,	// (0x00024bbe) bt_list_pane_t2

0x0001,

0xfca2,	// (0x0002a3ad) bt_list_pane_t

0xbe24,	// (0x0002652f) main_cale_prevew_pane

0xa4c2,	// (0x00024bcd) popup_cale_preview_window_ParamLimits

0xa4c2,	// (0x00024bcd) popup_cale_preview_window

0xc186,	// (0x00026891) bg_popup_preview_window_pane_cp05_ParamLimits

0xc186,	// (0x00026891) bg_popup_preview_window_pane_cp05

0x1c20,	// (0x0001c32b) list_cale_preview_pane_ParamLimits

0x1c20,	// (0x0001c32b) list_cale_preview_pane

0xa4db,	// (0x00024be6) list_double_cale_preview_pane_ParamLimits

0xa4db,	// (0x00024be6) list_double_cale_preview_pane

0xa4ed,	// (0x00024bf8) list_single_cale_preview_pane_ParamLimits

0xa4ed,	// (0x00024bf8) list_single_cale_preview_pane

0xa501,	// (0x00024c0c) list_single_cale_preview_pane_g1

0xa509,	// (0x00024c14) list_single_cale_preview_pane_t1_ParamLimits

0xa509,	// (0x00024c14) list_single_cale_preview_pane_t1

0xa51e,	// (0x00024c29) list_double_cale_preview_pane_g1

0xa526,	// (0x00024c31) list_double_cale_preview_pane_t1_ParamLimits

0xa526,	// (0x00024c31) list_double_cale_preview_pane_t1

0xa53b,	// (0x00024c46) list_double_cale_preview_pane_t2_ParamLimits

0xa53b,	// (0x00024c46) list_double_cale_preview_pane_t2

0x0001,

0xfca7,	// (0x0002a3b2) list_double_cale_preview_pane_t_ParamLimits

0xfca7,	// (0x0002a3b2) list_double_cale_preview_pane_t

0xbe24,	// (0x0002652f) main_ezdial_pane

0xc186,	// (0x00026891) main_sp_fs_email_pane_ParamLimits

0x9e5d,	// (0x00024568) cmail_ddmenu_btn01_pane_ParamLimits

0x9e5d,	// (0x00024568) cmail_ddmenu_btn01_pane

0x9e72,	// (0x0002457d) cmail_ddmenu_btn02_pane_ParamLimits

0x9e72,	// (0x0002457d) cmail_ddmenu_btn02_pane

0x9e8a,	// (0x00024595) cmail_ddmenu_btn03_pane_ParamLimits

0x9e8a,	// (0x00024595) cmail_ddmenu_btn03_pane

0x9f1f,	// (0x0002462a) main_sp_fs_ctrlbar_pane_ParamLimits

0x9f35,	// (0x00024640) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa1e6,	// (0x000248f1) list_cmail_body_pane_ParamLimits

0x1898,	// (0x0001bfa3) bg_button_pane_cp12

0x18ad,	// (0x0001bfb8) list_single_cmail_header_detail_pane_g3_ParamLimits

0x18ad,	// (0x0001bfb8) list_single_cmail_header_detail_pane_g3

0x18ba,	// (0x0001bfc5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x18ba,	// (0x0001bfc5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc33,	// (0x0002a33e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc33,	// (0x0002a33e) list_single_cmail_header_detail_pane_t

0x19bc,	// (0x0001c0c7) phacti_term_pane_t2_ParamLimits

0x19bc,	// (0x0001c0c7) phacti_term_pane_t2

0x0001,

0xfc42,	// (0x0002a34d) phacti_term_pane_t_ParamLimits

0xfc42,	// (0x0002a34d) phacti_term_pane_t

0x1c2c,	// (0x0001c337) aid_size_list_single_double

0xa553,	// (0x00024c5e) popup_ezdial_listscroll_window

0x1c38,	// (0x0001c343) popup_number_entry_window_cp01

0xc7d2,	// (0x00026edd) bg_popup_call_pane_cp09

0x1c45,	// (0x0001c350) ezdial_list_pane

0x1c4d,	// (0x0001c358) scroll_pane_cp23

0xe44d,	// (0x00028b58) bg_button_pane_cp028_ParamLimits

0xe44d,	// (0x00028b58) bg_button_pane_cp028

0xa56c,	// (0x00024c77) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa56c,	// (0x00024c77) cmail_ddmenu_btn01_pane_g1

0xa57c,	// (0x00024c87) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa57c,	// (0x00024c87) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcac,	// (0x0002a3b7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcac,	// (0x0002a3b7) cmail_ddmenu_btn01_pane_g

0x1c55,	// (0x0001c360) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1c55,	// (0x0001c360) cmail_ddmenu_btn01_pane_t1

0xd34b,	// (0x00027a56) bg_button_pane_cp029_ParamLimits

0xd34b,	// (0x00027a56) bg_button_pane_cp029

0xa57c,	// (0x00024c87) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa57c,	// (0x00024c87) cmail_ddmenu_btn02_pane_g1

0xa594,	// (0x00024c9f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa594,	// (0x00024c9f) cmail_ddmenu_btn02_pane_t1

0xc517,	// (0x00026c22) bg_button_pane_cp031_ParamLimits

0xc517,	// (0x00026c22) bg_button_pane_cp031

0xa57c,	// (0x00024c87) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa57c,	// (0x00024c87) cmail_ddmenu_btn03_pane_g1

0xa594,	// (0x00024c9f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa594,	// (0x00024c9f) cmail_ddmenu_btn03_pane_t1

0xc56d,	// (0x00026c78) cell_dialer2_keypad_pane_t1_ParamLimits

0xeddd,	// (0x000294e8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeddd,	// (0x000294e8) cell_dialer2_keypad_pane_t1_copy1

0x98ff,	// (0x0002400a) ncimui_group_button_pane

0xc186,	// (0x00026891) main_sp_fs_calendar_pane_ParamLimits

0xa20e,	// (0x00024919) list_single_cmail_header_caption_pane_ParamLimits

0x1a07,	// (0x0001c112) aid_recal_txt_sm_pane

0xbe24,	// (0x0002652f) mian_recal_day_pane

0x1a56,	// (0x0001c161) popup_sp_fs_cale_preview_window_ParamLimits

0x1c6a,	// (0x0001c375) list_recal_day_pane

0x1cac,	// (0x0001c3b7) list_single_recal_day_pane_ParamLimits

0x1cac,	// (0x0001c3b7) list_single_recal_day_pane

0x1cbe,	// (0x0001c3c9) list_single_recal_day_pane_g1_ParamLimits

0x1cbe,	// (0x0001c3c9) list_single_recal_day_pane_g1

0x1cca,	// (0x0001c3d5) list_single_recal_day_pane_g2_ParamLimits

0x1cca,	// (0x0001c3d5) list_single_recal_day_pane_g2

0x1cd6,	// (0x0001c3e1) list_single_recal_day_pane_g3_ParamLimits

0x1cd6,	// (0x0001c3e1) list_single_recal_day_pane_g3

0xa5b8,	// (0x00024cc3) list_single_recal_day_pane_g4_ParamLimits

0xa5b8,	// (0x00024cc3) list_single_recal_day_pane_g4

0x1ce2,	// (0x0001c3ed) list_single_recal_day_pane_g5_ParamLimits

0x1ce2,	// (0x0001c3ed) list_single_recal_day_pane_g5

0x1cee,	// (0x0001c3f9) list_single_recal_day_pane_g6_ParamLimits

0x1cee,	// (0x0001c3f9) list_single_recal_day_pane_g6

0x0004,

0xfcbb,	// (0x0002a3c6) list_single_recal_day_pane_g_ParamLimits

0xfcbb,	// (0x0002a3c6) list_single_recal_day_pane_g

0x1d02,	// (0x0001c40d) list_single_recal_day_pane_t1

0x1d14,	// (0x0001c41f) list_single_recal_day_pane_t2

0x0001,

0xfcc6,	// (0x0002a3d1) list_single_recal_day_pane_t

0xa5d0,	// (0x00024cdb) ncimui_query_button_pane_ParamLimits

0xa5d0,	// (0x00024cdb) ncimui_query_button_pane

0xa5e0,	// (0x00024ceb) ncimui_query_button_pane_t1_ParamLimits

0xa5e0,	// (0x00024ceb) ncimui_query_button_pane_t1

0x1d26,	// (0x0001c431) ncimui_query_button_pane_t2_ParamLimits

0x1d26,	// (0x0001c431) ncimui_query_button_pane_t2

0x0001,

0xfccb,	// (0x0002a3d6) ncimui_query_button_pane_t_ParamLimits

0xfccb,	// (0x0002a3d6) ncimui_query_button_pane_t

0xa5f3,	// (0x00024cfe) query_button_pane_ParamLimits

0xa5f3,	// (0x00024cfe) query_button_pane

0xbe24,	// (0x0002652f) bg_button_pane_cp0028

0x1d39,	// (0x0001c444) query_button_pane_t1

0x3df5,	// (0x0001e500) main_tport_pane_ParamLimits

0xa0f0,	// (0x000247fb) bg_popup_window_pane_cp01_ParamLimits

0xa0f0,	// (0x000247fb) bg_popup_window_pane_cp01

0xa0fe,	// (0x00024809) heading_pane_cp08_ParamLimits

0xa0fe,	// (0x00024809) heading_pane_cp08

0xa10c,	// (0x00024817) heading_pane_cp07_ParamLimits

0xa10c,	// (0x00024817) heading_pane_cp07

0xa17b,	// (0x00024886) cell_tport_appsw_pane_g2

0x0002,

0xfc20,	// (0x0002a32b) cell_tport_appsw_pane_g

0x6e76,	// (0x00021581) input_candi_list_open_g1

0xcb66,	// (0x00027271) list_cale_time_pane_g6_ParamLimits

0xcb66,	// (0x00027271) list_cale_time_pane_g6

0x79a8,	// (0x000220b3) aid_size_touch_calib_1_ParamLimits

0x79a8,	// (0x000220b3) aid_size_touch_calib_1

0x79b4,	// (0x000220bf) aid_size_touch_calib_2_ParamLimits

0x79b4,	// (0x000220bf) aid_size_touch_calib_2

0x79c2,	// (0x000220cd) aid_size_touch_calib_3_ParamLimits

0x79c2,	// (0x000220cd) aid_size_touch_calib_3

0x79d2,	// (0x000220dd) aid_size_touch_calib_4_ParamLimits

0x79d2,	// (0x000220dd) aid_size_touch_calib_4

0x79e0,	// (0x000220eb) main_touch_calib_button_group_pane_ParamLimits

0x79e0,	// (0x000220eb) main_touch_calib_button_group_pane

0x79ee,	// (0x000220f9) main_touch_calib_pane_g1_ParamLimits

0x79fa,	// (0x00022105) main_touch_calib_pane_g2_ParamLimits

0x7a06,	// (0x00022111) main_touch_calib_pane_g3_ParamLimits

0x7a12,	// (0x0002211d) main_touch_calib_pane_g4_ParamLimits

0xf666,	// (0x00029d71) main_touch_calib_pane_g_ParamLimits

0x7a1e,	// (0x00022129) main_touch_calib_pane_t1_ParamLimits

0x7a37,	// (0x00022142) main_touch_calib_pane_t2_ParamLimits

0x7a50,	// (0x0002215b) main_touch_calib_pane_t3_ParamLimits

0x7a66,	// (0x00022171) main_touch_calib_pane_t4_ParamLimits

0x7a7c,	// (0x00022187) main_touch_calib_pane_t5_ParamLimits

0xf66f,	// (0x00029d7a) main_touch_calib_pane_t_ParamLimits

0xec4a,	// (0x00029355) list_single_fp_cale_pane_g3_ParamLimits

0xec4a,	// (0x00029355) list_single_fp_cale_pane_g3

0x3dd9,	// (0x0001e4e4) bg_button_pane_cp012_ParamLimits

0x3dd9,	// (0x0001e4e4) bg_vkb2_func_pane_cp03_ParamLimits

0x4d01,	// (0x0001f40c) cell_vitu2_function_top_pane_g1_ParamLimits

0x3dd9,	// (0x0001e4e4) bg_vkb2_func_pane_cp04_ParamLimits

0x9887,	// (0x00023f92) main_ncimui_button_group_pane_ParamLimits

0x9887,	// (0x00023f92) main_ncimui_button_group_pane

0x98ed,	// (0x00023ff8) main_ncimui_pane_t3_ParamLimits

0x98ed,	// (0x00023ff8) main_ncimui_pane_t3

0x196a,	// (0x0001c075) phacti_button_group_pane

0x1c2c,	// (0x0001c337) aid_size_list_single_double_ParamLimits

0xa553,	// (0x00024c5e) popup_ezdial_listscroll_window_ParamLimits

0x1c38,	// (0x0001c343) popup_number_entry_window_cp01_ParamLimits

0xa600,	// (0x00024d0b) phacti_button_pane_ParamLimits

0xa600,	// (0x00024d0b) phacti_button_pane

0xbe24,	// (0x0002652f) bg_button_pane_cp14

0x1d47,	// (0x0001c452) phacti_button_pane_t1

0xa611,	// (0x00024d1c) main_touch_calib_button_pane_ParamLimits

0xa611,	// (0x00024d1c) main_touch_calib_button_pane

0xc5c1,	// (0x00026ccc) bg_button_pane_cp18_ParamLimits

0xc5c1,	// (0x00026ccc) bg_button_pane_cp18

0x1d55,	// (0x0001c460) main_touch_calib_button_pane_t1_ParamLimits

0x1d55,	// (0x0001c460) main_touch_calib_button_pane_t1

0x1d6b,	// (0x0001c476) main_touch_calib_button_pane_t2_ParamLimits

0x1d6b,	// (0x0001c476) main_touch_calib_button_pane_t2

0x0001,

0xfcd0,	// (0x0002a3db) main_touch_calib_button_pane_t_ParamLimits

0xfcd0,	// (0x0002a3db) main_touch_calib_button_pane_t

0xbe24,	// (0x0002652f) cell_ncimui_button_pane

0xbe24,	// (0x0002652f) bg_button_pane_cp032

0x1d89,	// (0x0001c494) cell_ncimui_button_pane_t1

0x44e0,	// (0x0001ebeb) image3_infobar_pane_ParamLimits

0x44e0,	// (0x0001ebeb) image3_infobar_pane

0x9c2f,	// (0x0002433a) fs_bigclock_status_pane_ParamLimits

0x9c2f,	// (0x0002433a) fs_bigclock_status_pane

0x9c3c,	// (0x00024347) main_fs_bigclock_clock_pane_ParamLimits

0x9c3c,	// (0x00024347) main_fs_bigclock_clock_pane

0x9c50,	// (0x0002435b) main_fs_bigclock_indi_pane_ParamLimits

0x9c50,	// (0x0002435b) main_fs_bigclock_indi_pane

0x9c78,	// (0x00024383) main_fs_bigclock_swipe_pane_ParamLimits

0x9c78,	// (0x00024383) main_fs_bigclock_swipe_pane

0xbe24,	// (0x0002652f) main_fs_clock_dumped_data

0x1368,	// (0x0001ba73) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1368,	// (0x0001ba73) list_single_fs_bigclock_indicator_pane_g1

0x1384,	// (0x0001ba8f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1384,	// (0x0001ba8f) list_single_fs_bigclock_indicator_pane_g2

0x139e,	// (0x0001baa9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x139e,	// (0x0001baa9) list_single_fs_bigclock_indicator_pane_g3

0x13b8,	// (0x0001bac3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x13b8,	// (0x0001bac3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb74,	// (0x0002a27f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb74,	// (0x0002a27f) list_single_fs_bigclock_indicator_pane_g

0x13e3,	// (0x0001baee) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x13e3,	// (0x0001baee) list_single_fs_bigclock_indicator_pane_t1

0x140b,	// (0x0001bb16) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x140b,	// (0x0001bb16) list_single_fs_bigclock_indicator_pane_t2

0x1433,	// (0x0001bb3e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1433,	// (0x0001bb3e) list_single_fs_bigclock_indicator_pane_t3

0x145b,	// (0x0001bb66) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x145b,	// (0x0001bb66) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb7f,	// (0x0002a28a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb7f,	// (0x0002a28a) list_single_fs_bigclock_indicator_pane_t

0x1d97,	// (0x0001c4a2) image3_infobar_fav_pane_ParamLimits

0x1d97,	// (0x0001c4a2) image3_infobar_fav_pane

0x1da7,	// (0x0001c4b2) image3_infobar_loc_pane_ParamLimits

0x1da7,	// (0x0001c4b2) image3_infobar_loc_pane

0x1dbb,	// (0x0001c4c6) image3_infobar_time_pane_ParamLimits

0x1dbb,	// (0x0001c4c6) image3_infobar_time_pane

0xc563,	// (0x00026c6e) image3_infobar_time_pane_g1

0x1dcb,	// (0x0001c4d6) image3_infobar_time_pane_t1

0xc563,	// (0x00026c6e) image3_infobar_loc_pane_g1

0x1dd9,	// (0x0001c4e4) image3_infobar_loc_pane_g2

0x0001,

0xfcd5,	// (0x0002a3e0) image3_infobar_loc_pane_g

0x1de1,	// (0x0001c4ec) image3_infobar_loc_pane_t1

0xc563,	// (0x00026c6e) image3_infobar_fav_pane_g1

0x1def,	// (0x0001c4fa) image3_infobar_fav_pane_g2

0x0001,

0xfcda,	// (0x0002a3e5) image3_infobar_fav_pane_g

0x1df7,	// (0x0001c502) fs_bigclock_status_battery_pane

0x1e00,	// (0x0001c50b) fs_bigclock_status_signal_pane

0x1e09,	// (0x0001c514) fs_bigclock_status_title_pane

0x1e12,	// (0x0001c51d) fs_bigclock_status_signal_pane_g1

0x1e1b,	// (0x0001c526) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcdf,	// (0x0002a3ea) fs_bigclock_status_signal_pane_g

0x1e23,	// (0x0001c52e) fs_bigclock_status_battery_pane_g1

0x1e2c,	// (0x0001c537) fs_bigclock_status_battery_pane_g2

0x0001,

0xfce4,	// (0x0002a3ef) fs_bigclock_status_battery_pane_g

0x1e34,	// (0x0001c53f) fs_bigclock_status_title_pane_t1

0xa621,	// (0x00024d2c) main_fs_bigclock_clock_pane_g1

0xa621,	// (0x00024d2c) main_fs_bigclock_clock_pane_g2

0xa621,	// (0x00024d2c) main_fs_bigclock_clock_pane_g3

0xa621,	// (0x00024d2c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfce9,	// (0x0002a3f4) main_fs_bigclock_clock_pane_g

0xa62d,	// (0x00024d38) main_fs_bigclock_clock_pane_t1

0xa641,	// (0x00024d4c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcf2,	// (0x0002a3fd) main_fs_bigclock_clock_pane_t

0x1e42,	// (0x0001c54d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1e42,	// (0x0001c54d) list_single_fs_bigclock_indicator_pane

0x1e53,	// (0x0001c55e) list_single_fs_bigclock_pane_ParamLimits

0x1e53,	// (0x0001c55e) list_single_fs_bigclock_pane

0x1e79,	// (0x0001c584) main_fs_bigclock_indicator_pane_t1

0x1e88,	// (0x0001c593) list_single_fs_bigclock_pane_g1

0x1e90,	// (0x0001c59b) list_single_fs_bigclock_pane_t1

0xc563,	// (0x00026c6e) main_fs_bigclock_swipe_pane_g1

0x1ed3,	// (0x0001c5de) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd03,	// (0x0002a40e) main_fs_bigclock_swipe_pane_g

0x1edb,	// (0x0001c5e6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1edb,	// (0x0001c5e6) main_fs_bigclock_swipe_pane_t1

0x69d3,	// (0x000210de) call_type_pane_ParamLimits

0xbe24,	// (0x0002652f) main_btmg_pane

0x1ad0,	// (0x0001c1db) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1ad0,	// (0x0001c1db) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc76,	// (0x0002a381) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc76,	// (0x0002a381) list_single_cale_mrui_row_pane_g

0x1c93,	// (0x0001c39e) list_recal_vselct_arw_lo_pane

0x1c9b,	// (0x0001c3a6) list_recal_vselct_arw_up_pane

0x1ca3,	// (0x0001c3ae) list_recal_vselct_pane

0xa698,	// (0x00024da3) btmg_button_pane

0xa6a4,	// (0x00024daf) main_btmg_pane_g1

0xbe24,	// (0x0002652f) bg_button_pane_cp044

0x1ef8,	// (0x0001c603) btmg_button_pane_t1

0xe439,	// (0x00028b44) aid_listscroll_gen

0xc186,	// (0x00026891) main_cntbar_detail_pane

0x186b,	// (0x0001bf76) list_cmail_folder_pane

0x056f,	// (0x0001ac7a) sp_fs_scroll_pane_cp03_ParamLimits

0xa6ac,	// (0x00024db7) list_single_fs_dyc_pane_cp01_ParamLimits

0xa6ac,	// (0x00024db7) list_single_fs_dyc_pane_cp01

0x1f06,	// (0x0001c611) aid_size_cmail_indent

0x1f0f,	// (0x0001c61a) list_single_dyc_row_pane_cp01

0xa6f8,	// (0x00024e03) cntbar_detail_list_pane_ParamLimits

0xa6f8,	// (0x00024e03) cntbar_detail_list_pane

0xa732,	// (0x00024e3d) main_cntbar_detail_cont_pane_ParamLimits

0xa732,	// (0x00024e3d) main_cntbar_detail_cont_pane

0x69c7,	// (0x000210d2) scroll_pane_cp032_ParamLimits

0x69c7,	// (0x000210d2) scroll_pane_cp032

0xa73e,	// (0x00024e49) cntbar_detail_list_event_pane_ParamLimits

0xa73e,	// (0x00024e49) cntbar_detail_list_event_pane

0xa704,	// (0x00024e0f) cntbar_detail_list_shct_pane

0xca39,	// (0x00027144) aid_list_gen

0x1f18,	// (0x0001c623) aid_scroll

0x1f21,	// (0x0001c62c) aid_size_touch_scroll_bar

0x9cdd,	// (0x000243e8) aid_list_double

0xa752,	// (0x00024e5d) aid_list_single

0xa752,	// (0x00024e5d) aid_list_single_lg

0xa75b,	// (0x00024e66) aid_list_z_g_a_sm

0xa763,	// (0x00024e6e) aid_list_z_g_d

0xa76b,	// (0x00024e76) aid_txt_z_prm

0xa779,	// (0x00024e84) aid_txt_z_prm_cp01

0xa787,	// (0x00024e92) aid_txt_z_sec

0xa795,	// (0x00024ea0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa795,	// (0x00024ea0) main_cntbar_detail_cont_pane_g1

0xa7a2,	// (0x00024ead) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa7a2,	// (0x00024ead) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd08,	// (0x0002a413) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd08,	// (0x0002a413) main_cntbar_detail_cont_pane_g

0x1f2a,	// (0x0001c635) main_cntbar_detail_cont_pane_t1

0x1f38,	// (0x0001c643) main_cntbar_detail_cont_pane_t2

0x1f8b,	// (0x0001c696) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd0d,	// (0x0002a418) main_cntbar_detail_cont_pane_t

0xa7ae,	// (0x00024eb9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa7ae,	// (0x00024eb9) cell_cntbar_detail_list_shct_pane

0x1f99,	// (0x0001c6a4) cntbar_detail_list_shct_pane_g1

0x1fa2,	// (0x0001c6ad) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd14,	// (0x0002a41f) cntbar_detail_list_shct_pane_g

0xa7c2,	// (0x00024ecd) cntbar_detail_list_event_pane_g1_ParamLimits

0xa7c2,	// (0x00024ecd) cntbar_detail_list_event_pane_g1

0xa7ce,	// (0x00024ed9) cntbar_detail_list_event_pane_g2_ParamLimits

0xa7ce,	// (0x00024ed9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd19,	// (0x0002a424) cntbar_detail_list_event_pane_g_ParamLimits

0xfd19,	// (0x0002a424) cntbar_detail_list_event_pane_g

0xa83a,	// (0x00024f45) cntbar_detail_list_event_pane_t1_ParamLimits

0xa83a,	// (0x00024f45) cntbar_detail_list_event_pane_t1

0xa84f,	// (0x00024f5a) cntbar_detail_list_event_pane_t2_ParamLimits

0xa84f,	// (0x00024f5a) cntbar_detail_list_event_pane_t2

0x0002,

0xfd26,	// (0x0002a431) cntbar_detail_list_event_pane_t_ParamLimits

0xfd26,	// (0x0002a431) cntbar_detail_list_event_pane_t

0xc563,	// (0x00026c6e) cell_cntbar_detail_list_shct_pane_g1

0xd142,	// (0x0002784d) navi_pane_mv_g3

0xc186,	// (0x00026891) main_cntbar_detail_pane_ParamLimits

0xbe24,	// (0x0002652f) main_notif_wgt_pane

0x41af,	// (0x0001e8ba) aid_tch_main_mp4_pane_g4

0x4482,	// (0x0001eb8d) popup_slider_window_cp02

0x1c89,	// (0x0001c394) list_recal_day_event_pane

0xa6d8,	// (0x00024de3) cntbar_detail_btn_pane_ParamLimits

0xa6d8,	// (0x00024de3) cntbar_detail_btn_pane

0xa6e8,	// (0x00024df3) cntbar_detail_btn_pane_cp01_ParamLimits

0xa6e8,	// (0x00024df3) cntbar_detail_btn_pane_cp01

0xa704,	// (0x00024e0f) cntbar_detail_list_shct_pane_ParamLimits

0xa710,	// (0x00024e1b) cntbar_detail_pane_g1_ParamLimits

0xa710,	// (0x00024e1b) cntbar_detail_pane_g1

0xa71c,	// (0x00024e27) cntbar_detail_pane_t1_ParamLimits

0xa71c,	// (0x00024e27) cntbar_detail_pane_t1

0xa7da,	// (0x00024ee5) cntbar_detail_list_event_pane_g3_ParamLimits

0xa7da,	// (0x00024ee5) cntbar_detail_list_event_pane_g3

0xa7f2,	// (0x00024efd) cntbar_detail_list_event_pane_g4_ParamLimits

0xa7f2,	// (0x00024efd) cntbar_detail_list_event_pane_g4

0xa80a,	// (0x00024f15) cntbar_detail_list_event_pane_g5_ParamLimits

0xa80a,	// (0x00024f15) cntbar_detail_list_event_pane_g5

0xa822,	// (0x00024f2d) cntbar_detail_list_event_pane_g6_ParamLimits

0xa822,	// (0x00024f2d) cntbar_detail_list_event_pane_g6

0xa864,	// (0x00024f6f) cntbar_detail_list_event_pane_t3_ParamLimits

0xa864,	// (0x00024f6f) cntbar_detail_list_event_pane_t3

0xa876,	// (0x00024f81) popup_notif_wgt_window_ParamLimits

0xa876,	// (0x00024f81) popup_notif_wgt_window

0xa886,	// (0x00024f91) popup_submenu_window_cp01_ParamLimits

0xa886,	// (0x00024f91) popup_submenu_window_cp01

0xc7d2,	// (0x00026edd) bg_popup_window_pane_cp10

0x1fab,	// (0x0001c6b6) listscroll_notif_wgt_pane

0x1fbd,	// (0x0001c6c8) list_notif_wgt_window

0x1fc6,	// (0x0001c6d1) scroll_pane_cp033

0xa894,	// (0x00024f9f) list_notif_wgt_row_pane_ParamLimits

0xa894,	// (0x00024f9f) list_notif_wgt_row_pane

0x1fcf,	// (0x0001c6da) aid_size_list_notif_wgt_del

0x1fdc,	// (0x0001c6e7) list_notif_wgt_row_pane_g1

0x1fe8,	// (0x0001c6f3) list_notif_wgt_row_pane_g2

0x1ff7,	// (0x0001c702) list_notif_wgt_row_pane_g3

0x0002,

0xfd2d,	// (0x0002a438) list_notif_wgt_row_pane_g

0x2004,	// (0x0001c70f) list_notif_wgt_row_pane_t1

0x201a,	// (0x0001c725) list_notif_wgt_row_pane_t2

0x202c,	// (0x0001c737) list_notif_wgt_row_pane_t3

0x0002,

0xfd34,	// (0x0002a43f) list_notif_wgt_row_pane_t

0x0736,	// (0x0001ae41) list_recal_day_event_pane_g1

0x203e,	// (0x0001c749) list_recal_day_event_pane_t1

0xbe24,	// (0x0002652f) bg_button_pane_cp045

0xa8a6,	// (0x00024fb1) cntbar_detail_btn_pane_t1

0xd34b,	// (0x00027a56) main_callh_pane_ParamLimits

0xd34b,	// (0x00027a56) main_callh_pane

0xbe24,	// (0x0002652f) main_coverflow0_pane

0xbe24,	// (0x0002652f) main_wgtman_pane

0x9c90,	// (0x0002439b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9c90,	// (0x0002439b) main_fs_bigclock_unlock_btn_pane

0xa173,	// (0x0002487e) bg_button_pane_cp16

0xa183,	// (0x0002488e) cell_tport_appsw_pane_g3

0xa8b4,	// (0x00024fbf) cf0_flow_pane_ParamLimits

0xa8b4,	// (0x00024fbf) cf0_flow_pane

0x204d,	// (0x0001c758) listscroll_cf0_pane

0x2058,	// (0x0001c763) main_cf0_pane_g1

0xa8c3,	// (0x00024fce) main_cf0_pane_t1_ParamLimits

0xa8c3,	// (0x00024fce) main_cf0_pane_t1

0xa8d7,	// (0x00024fe2) main_cf0_pane_t2_ParamLimits

0xa8d7,	// (0x00024fe2) main_cf0_pane_t2

0x0001,

0xfd40,	// (0x0002a44b) main_cf0_pane_t_ParamLimits

0xfd40,	// (0x0002a44b) main_cf0_pane_t

0x206a,	// (0x0001c775) scroll_pane_cp11

0xa8eb,	// (0x00024ff6) cf0_flow_pane_g1

0xa8f3,	// (0x00024ffe) cf0_flow_pane_g2

0x0001,

0xfd45,	// (0x0002a450) cf0_flow_pane_g

0xa8fb,	// (0x00025006) cf0_flow_pane_t1

0xbe24,	// (0x0002652f) main_call6_pane

0xbe24,	// (0x0002652f) main_calllock_pane

0x4f30,	// (0x0001f63b) call6_btn_grp_pane_ParamLimits

0x4f30,	// (0x0001f63b) call6_btn_grp_pane

0x4f3f,	// (0x0001f64a) call6_pane_g1_ParamLimits

0x4f3f,	// (0x0001f64a) call6_pane_g1

0x4f4f,	// (0x0001f65a) popup_call6_1st_window_ParamLimits

0x4f4f,	// (0x0001f65a) popup_call6_1st_window

0x4f5d,	// (0x0001f668) popup_call6_2nd_window_ParamLimits

0x4f5d,	// (0x0001f668) popup_call6_2nd_window

0x4f6b,	// (0x0001f676) cell_call6_btn_pane_ParamLimits

0x4f6b,	// (0x0001f676) cell_call6_btn_pane

0xc7d2,	// (0x00026edd) bg_popup_call2_in_pane_cp03

0x2075,	// (0x0001c780) popup_call6_1st_window_g1

0x207d,	// (0x0001c788) popup_call6_1st_window_g2

0x2085,	// (0x0001c790) popup_call6_1st_window_g3

0x0002,

0xfd4a,	// (0x0002a455) popup_call6_1st_window_g

0x208d,	// (0x0001c798) popup_call6_1st_window_t1

0x209c,	// (0x0001c7a7) popup_call6_1st_window_t2

0x20aa,	// (0x0001c7b5) popup_call6_1st_window_t3

0x0002,

0xfd51,	// (0x0002a45c) popup_call6_1st_window_t

0xc7d2,	// (0x00026edd) bg_popup_call2_in_pane_cp04

0x20b8,	// (0x0001c7c3) popup_call6_2nd_window_g1

0x20c0,	// (0x0001c7cb) popup_call6_2nd_window_g2

0x20c8,	// (0x0001c7d3) popup_call6_2nd_window_g3

0x0002,

0xfd58,	// (0x0002a463) popup_call6_2nd_window_g

0x20d0,	// (0x0001c7db) popup_call6_2nd_window_t1

0x39c2,	// (0x0001e0cd) bg_button_pane_cp15

0x4f7a,	// (0x0001f685) cell_call6_btn_pane_g1

0x4f83,	// (0x0001f68e) cell_call6_btn_pane_t1

0xa909,	// (0x00025014) listscroll_wgtman_pane_ParamLimits

0xa909,	// (0x00025014) listscroll_wgtman_pane

0xa925,	// (0x00025030) wgtman_btn_pane_ParamLimits

0xa925,	// (0x00025030) wgtman_btn_pane

0xcf56,	// (0x00027661) aid_scroll_copy1

0x20f7,	// (0x0001c802) list_wgtman_pane

0xa95a,	// (0x00025065) wgtman_btn_pane_g1_ParamLimits

0xa95a,	// (0x00025065) wgtman_btn_pane_g1

0xa982,	// (0x0002508d) wgtman_btn_pane_t1_ParamLimits

0xa982,	// (0x0002508d) wgtman_btn_pane_t1

0x2101,	// (0x0001c80c) wgtman_btn_pane_t2_ParamLimits

0x2101,	// (0x0001c80c) wgtman_btn_pane_t2

0x0001,

0xfd5f,	// (0x0002a46a) wgtman_btn_pane_t_ParamLimits

0xfd5f,	// (0x0002a46a) wgtman_btn_pane_t

0xa9b9,	// (0x000250c4) listrow_wgtman_pane_ParamLimits

0xa9b9,	// (0x000250c4) listrow_wgtman_pane

0xa9d5,	// (0x000250e0) listrow_wgtman_pane_g1

0xa9e2,	// (0x000250ed) listrow_wgtman_pane_g2

0x0001,

0xfd64,	// (0x0002a46f) listrow_wgtman_pane_g

0xaa00,	// (0x0002510b) listrow_wgtman_pane_t1

0xaa18,	// (0x00025123) listrow_wgtman_pane_t2

0x0001,

0xfd69,	// (0x0002a474) listrow_wgtman_pane_t

0xaa3e,	// (0x00025149) wait_bar_pane_cp09

0x2118,	// (0x0001c823) main_calllock_btn_pane

0x2122,	// (0x0001c82d) main_calllock_pane_g1

0xbe24,	// (0x0002652f) bg_button_pane_cp17

0x20df,	// (0x0001c7ea) main_calllock_btn_pane_g1

0x212a,	// (0x0001c835) main_calllock_btn_pane_t1

0xbe24,	// (0x0002652f) main_dialer3_pane

0xbe24,	// (0x0002652f) main_fmrd2_pane

0xc563,	// (0x00026c6e) main_fs_bigclock_unlock_btn_pane_g1

0xaa58,	// (0x00025163) main_fs_bigclock_unlock_btn_pane_t1

0xaa66,	// (0x00025171) area_fmrd2_info_pane_ParamLimits

0xaa66,	// (0x00025171) area_fmrd2_info_pane

0xaa74,	// (0x0002517f) area_fmrd2_visual_pane_ParamLimits

0xaa74,	// (0x0002517f) area_fmrd2_visual_pane

0xaa82,	// (0x0002518d) fmrd2_indi_pane_ParamLimits

0xaa82,	// (0x0002518d) fmrd2_indi_pane

0xaa8f,	// (0x0002519a) area_fmrd2_visual_pane_g1

0xaa97,	// (0x000251a2) area_fmrd2_visual_pane_t1

0xaaa7,	// (0x000251b2) area_fmrd2_visual_pane_t2

0xaab7,	// (0x000251c2) area_fmrd2_visual_pane_t3

0x0002,

0xfd73,	// (0x0002a47e) area_fmrd2_visual_pane_t

0xaac7,	// (0x000251d2) area_fmrd2_info_pane_g1

0xaacf,	// (0x000251da) area_fmrd2_info_pane_t1

0xaadf,	// (0x000251ea) area_fmrd2_info_pane_t2

0xaaef,	// (0x000251fa) area_fmrd2_info_pane_t3

0xaaff,	// (0x0002520a) area_fmrd2_info_pane_t4

0x0003,

0xfd7a,	// (0x0002a485) area_fmrd2_info_pane_t

0xab0d,	// (0x00025218) fmrd2_indi_pane_t1

0xab1d,	// (0x00025228) fmrd2_indi_pane_t2

0xab2d,	// (0x00025238) fmrd2_indi_pane_t3

0x0002,

0xfd83,	// (0x0002a48e) fmrd2_indi_pane_t

0x13c7,	// (0x0001bad2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x13c7,	// (0x0001bad2) list_single_fs_bigclock_indicator_pane_g5

0x1478,	// (0x0001bb83) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1478,	// (0x0001bb83) list_single_fs_bigclock_indicator_pane_t5

0x01ce,	// (0x0001a8d9) aid_cell_bcale_month_pane_ParamLimits

0x01ce,	// (0x0001a8d9) aid_cell_bcale_month_pane

0x01ce,	// (0x0001a8d9) bcale_month_pane_ParamLimits

0x01ce,	// (0x0001a8d9) bcale_month_pane

0x055a,	// (0x0001ac65) bcale_preview_pane_ParamLimits

0x055a,	// (0x0001ac65) bcale_preview_pane

0x1e90,	// (0x0001c59b) list_single_fs_bigclock_pane_t1_ParamLimits

0x1eaf,	// (0x0001c5ba) list_single_fs_bigclock_pane_t2_ParamLimits

0x1eaf,	// (0x0001c5ba) list_single_fs_bigclock_pane_t2

0x0001,

0xfcfe,	// (0x0002a409) list_single_fs_bigclock_pane_t_ParamLimits

0xfcfe,	// (0x0002a409) list_single_fs_bigclock_pane_t

0xaa50,	// (0x0002515b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd6e,	// (0x0002a479) main_fs_bigclock_unlock_btn_pane_g

0xab3b,	// (0x00025246) aid_dia3_key_size_ParamLimits

0xab3b,	// (0x00025246) aid_dia3_key_size

0xab47,	// (0x00025252) aid_dia3_listrow_size_ParamLimits

0xab47,	// (0x00025252) aid_dia3_listrow_size

0xab57,	// (0x00025262) dia3_keypad_fun_pane_ParamLimits

0xab57,	// (0x00025262) dia3_keypad_fun_pane

0xab69,	// (0x00025274) dia3_keypad_num_pane_ParamLimits

0xab69,	// (0x00025274) dia3_keypad_num_pane

0xab7b,	// (0x00025286) dia3_listscroll_pane_ParamLimits

0xab7b,	// (0x00025286) dia3_listscroll_pane

0xab89,	// (0x00025294) dia3_numentry_pane_ParamLimits

0xab89,	// (0x00025294) dia3_numentry_pane

0x2139,	// (0x0001c844) dia3_list_pane

0x2144,	// (0x0001c84f) scroll_pane_cp12

0xbe24,	// (0x0002652f) bg_dia3_numentry_pane

0xab97,	// (0x000252a2) dia3_numentry_pane_t1

0xaba6,	// (0x000252b1) cell_dia3_key_num_pane

0xabae,	// (0x000252b9) cell_dia3_key0_fun_pane_ParamLimits

0xabae,	// (0x000252b9) cell_dia3_key0_fun_pane

0xabbb,	// (0x000252c6) cell_dia3_key1_fun_pane_ParamLimits

0xabbb,	// (0x000252c6) cell_dia3_key1_fun_pane

0xabc8,	// (0x000252d3) dia3_listrow_pane

0x111a,	// (0x0001b825) bg_dia3_numentry_pane_g1

0xbe24,	// (0x0002652f) bg_button_pane_cp21

0x214f,	// (0x0001c85a) cell_dia3_key_num_pane_t1

0x215d,	// (0x0001c868) cell_dia3_key_num_pane_t2

0x216c,	// (0x0001c877) cell_dia3_key_num_pane_t3

0x217b,	// (0x0001c886) cell_dia3_key_num_pane_t4

0x0003,

0xfd8a,	// (0x0002a495) cell_dia3_key_num_pane_t

0xbe24,	// (0x0002652f) bg_button_pane_cp19

0xabd5,	// (0x000252e0) cell_dia3_key0_fun_pane_g1

0xbe24,	// (0x0002652f) bg_button_pane_cp20

0xabdd,	// (0x000252e8) cell_dia3_key1_fun_pane_g1

0x1f52,	// (0x0001c65d) area_left_week_number_pane

0x1f52,	// (0x0001c65d) area_top_day_name_pane

0x1f52,	// (0x0001c65d) frame_month_view_pane

0x1f52,	// (0x0001c65d) grid_month_view_pane

0x1f52,	// (0x0001c65d) cell_top_day_name_pane_ParamLimits

0x1f52,	// (0x0001c65d) cell_top_day_name_pane

0x1f52,	// (0x0001c65d) cell_area_left_week_number_pane_ParamLimits

0x1f52,	// (0x0001c65d) cell_area_left_week_number_pane

0x1f52,	// (0x0001c65d) cell_month_view_pane_ParamLimits

0x1f52,	// (0x0001c65d) cell_month_view_pane

0x1f46,	// (0x0001c651) frm_month_g1

0x1f46,	// (0x0001c651) frm_month_g2

0x1f46,	// (0x0001c651) frm_month_g3

0x1f46,	// (0x0001c651) frm_month_g4

0x1f46,	// (0x0001c651) frm_month_g5

0x1f46,	// (0x0001c651) frm_month_g6

0x1f46,	// (0x0001c651) frm_month_g7

0x1f46,	// (0x0001c651) frm_month_g8

0x1f46,	// (0x0001c651) frm_month_g9

0x1f46,	// (0x0001c651) frm_month_g10

0x1f46,	// (0x0001c651) frm_month_g11

0x1f46,	// (0x0001c651) frm_month_g12

0x1f46,	// (0x0001c651) frm_month_g13

0x1f46,	// (0x0001c651) frm_month_g14

0x1f46,	// (0x0001c651) frm_month_g15

0x1f46,	// (0x0001c651) frm_month_g16

0x000f,

0xfd93,	// (0x0002a49e) frm_month_g

0x218a,	// (0x0001c895) cell_top_day_name_pane_t1

0x1f46,	// (0x0001c651) cell_area_left_week_number_pane_g1

0x218a,	// (0x0001c895) cell_area_left_week_number_pane_t1

0x1f46,	// (0x0001c651) cell_month_view_pane_g1

0x218a,	// (0x0001c895) cell_month_view_pane_t1

0xbe24,	// (0x0002652f) main_fps_pane

0x163c,	// (0x0001bd47) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x163c,	// (0x0001bd47) cmail_ddmenu_btn02_pane_cp1

0x1658,	// (0x0001bd63) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1658,	// (0x0001bd63) cmail_ddmenu_btn02_pane_cp2

0xa588,	// (0x00024c93) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa588,	// (0x00024c93) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcb1,	// (0x0002a3bc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcb1,	// (0x0002a3bc) cmail_ddmenu_btn02_pane_g

0xa5a6,	// (0x00024cb1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa5a6,	// (0x00024cb1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcb6,	// (0x0002a3c1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcb6,	// (0x0002a3c1) cmail_ddmenu_btn02_pane_t

0xabe5,	// (0x000252f0) fps_text_pane_ParamLimits

0xabe5,	// (0x000252f0) fps_text_pane

0xabf2,	// (0x000252fd) main_fps_pane_g1_ParamLimits

0xabf2,	// (0x000252fd) main_fps_pane_g1

0xac00,	// (0x0002530b) wait_bar_pane_cp010_ParamLimits

0xac00,	// (0x0002530b) wait_bar_pane_cp010

0xac0c,	// (0x00025317) fps_text_pane_t1_ParamLimits

0xac0c,	// (0x00025317) fps_text_pane_t1

0x856f,	// (0x00022c7a) cam4_image_uncrop_pane_g1

0x8578,	// (0x00022c83) cam4_image_uncrop_pane_g2

0x8581,	// (0x00022c8c) cam4_image_uncrop_pane_g3

0x858a,	// (0x00022c95) cam4_image_uncrop_pane_g4

0x0003,

0xf7f8,	// (0x00029f03) cam4_image_uncrop_pane_g

0xabc8,	// (0x000252d3) dia3_listrow_pane_ParamLimits

0xbe24,	// (0x0002652f) main_phob2_pane

0xa155,	// (0x00024860) cell_tport_appsw_pane_cp02_ParamLimits

0xa155,	// (0x00024860) cell_tport_appsw_pane_cp02

0xa164,	// (0x0002486f) cell_tport_appsw_pane_cp03_ParamLimits

0xa164,	// (0x0002486f) cell_tport_appsw_pane_cp03

0xbe24,	// (0x0002652f) phob2_contact_card_pane

0xbe24,	// (0x0002652f) phob2_listscroll_pane

0x219c,	// (0x0001c8a7) phob2_list_pane

0x1c4d,	// (0x0001c358) scroll_pane_cp034

0xac25,	// (0x00025330) phob2_cc_data_pane_ParamLimits

0xac25,	// (0x00025330) phob2_cc_data_pane

0xac3f,	// (0x0002534a) phob2_cc_listscroll_pane_ParamLimits

0xac3f,	// (0x0002534a) phob2_cc_listscroll_pane

0xa9b9,	// (0x000250c4) list_double_large_graphic_phob2_pane_ParamLimits

0xa9b9,	// (0x000250c4) list_double_large_graphic_phob2_pane

0xac59,	// (0x00025364) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xac59,	// (0x00025364) list_double_large_graphic_phob2_pane_g1

0xac66,	// (0x00025371) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xac66,	// (0x00025371) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdb4,	// (0x0002a4bf) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdb4,	// (0x0002a4bf) list_double_large_graphic_phob2_pane_g

0xac8c,	// (0x00025397) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xac8c,	// (0x00025397) list_double_large_graphic_phob2_pane_t1

0xaca1,	// (0x000253ac) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaca1,	// (0x000253ac) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdbd,	// (0x0002a4c8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdbd,	// (0x0002a4c8) list_double_large_graphic_phob2_pane_t

0xc517,	// (0x00026c22) list_highlight_pane_cp024

0x21a4,	// (0x0001c8af) phob2_cc_button_pane

0xacb6,	// (0x000253c1) phob2_cc_data_pane_g1_ParamLimits

0xacb6,	// (0x000253c1) phob2_cc_data_pane_g1

0xacc5,	// (0x000253d0) phob2_cc_data_pane_g2_ParamLimits

0xacc5,	// (0x000253d0) phob2_cc_data_pane_g2

0x0001,

0xfdc2,	// (0x0002a4cd) phob2_cc_data_pane_g_ParamLimits

0xfdc2,	// (0x0002a4cd) phob2_cc_data_pane_g

0xacd4,	// (0x000253df) phob2_cc_data_pane_t1_ParamLimits

0xacd4,	// (0x000253df) phob2_cc_data_pane_t1

0xace9,	// (0x000253f4) phob2_cc_data_pane_t2_ParamLimits

0xace9,	// (0x000253f4) phob2_cc_data_pane_t2

0xacfe,	// (0x00025409) phob2_cc_data_pane_t3_ParamLimits

0xacfe,	// (0x00025409) phob2_cc_data_pane_t3

0x0002,

0xfdc7,	// (0x0002a4d2) phob2_cc_data_pane_t_ParamLimits

0xfdc7,	// (0x0002a4d2) phob2_cc_data_pane_t

0x21ac,	// (0x0001c8b7) phob2_cc_list_pane_ParamLimits

0x21ac,	// (0x0001c8b7) phob2_cc_list_pane

0x07d7,	// (0x0001aee2) scroll_pane_cp035_ParamLimits

0x07d7,	// (0x0001aee2) scroll_pane_cp035

0xc186,	// (0x00026891) bg_button_pane_cp033

0x21b8,	// (0x0001c8c3) phob2_cc_button_pane_g1

0x21c4,	// (0x0001c8cf) phob2_cc_button_pane_t1

0x21d9,	// (0x0001c8e4) phob2_cc_button_pane_t2

0x0001,

0xfdce,	// (0x0002a4d9) phob2_cc_button_pane_t

0xad13,	// (0x0002541e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad13,	// (0x0002541e) list_double_large_graphic_phob2_cc_pane

0xad87,	// (0x00025492) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xad87,	// (0x00025492) list_double_large_graphic_phob2_cc_pane_g1

0xad98,	// (0x000254a3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xad98,	// (0x000254a3) list_double_large_graphic_phob2_cc_pane_g2

0xada4,	// (0x000254af) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xada4,	// (0x000254af) list_double_large_graphic_phob2_cc_pane_g3

0xadb0,	// (0x000254bb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xadb0,	// (0x000254bb) list_double_large_graphic_phob2_cc_pane_g4

0x21eb,	// (0x0001c8f6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x21eb,	// (0x0001c8f6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdd3,	// (0x0002a4de) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdd3,	// (0x0002a4de) list_double_large_graphic_phob2_cc_pane_g

0xadbc,	// (0x000254c7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xadbc,	// (0x000254c7) list_double_large_graphic_phob2_cc_pane_t1

0xade5,	// (0x000254f0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xade5,	// (0x000254f0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdde,	// (0x0002a4e9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdde,	// (0x0002a4e9) list_double_large_graphic_phob2_cc_pane_t

0x21f7,	// (0x0001c902) list_highlight_pane_cp025_ParamLimits

0x21f7,	// (0x0001c902) list_highlight_pane_cp025

0xc186,	// (0x00026891) bg_button_pane_cp033_ParamLimits

0x21b8,	// (0x0001c8c3) phob2_cc_button_pane_g1_ParamLimits

0x21c4,	// (0x0001c8cf) phob2_cc_button_pane_t1_ParamLimits

0x21d9,	// (0x0001c8e4) phob2_cc_button_pane_t2_ParamLimits

0xfdce,	// (0x0002a4d9) phob2_cc_button_pane_t_ParamLimits

0x5004,	// (0x0001f70f) popup_wgtman_window

0x058b,	// (0x0001ac96) scroll_pane_cp038

0xa942,	// (0x0002504d) wgtman_btn_pane_cp_01_ParamLimits

0xa942,	// (0x0002504d) wgtman_btn_pane_cp_01

0x2205,	// (0x0001c910) wgtman_content_pane

0x220e,	// (0x0001c919) wgtman_heading_pane

0xbe24,	// (0x0002652f) bg_heading_pane_cp02

0x2217,	// (0x0001c922) wgtman_heading_pane_g1

0x221f,	// (0x0001c92a) wgtman_heading_pane_t1

0x222d,	// (0x0001c938) scroll_pane_cp036

0x2235,	// (0x0001c940) wgtman_list_pane

0x1f70,	// (0x0001c67b) wgtman_list_pane_t1_ParamLimits

0x1f70,	// (0x0001c67b) wgtman_list_pane_t1

0x478b,	// (0x0001ee96) cam4_grid_pane

0x8d2d,	// (0x00023438) bg_button_pane_cp015_ParamLimits

0x8d42,	// (0x0002344d) bg_button_pane_cp016_ParamLimits

0x8d4e,	// (0x00023459) bg_button_pane_cp017_ParamLimits

0x8da6,	// (0x000234b1) popup_vitu2_query_window_g3_ParamLimits

0x8da6,	// (0x000234b1) popup_vitu2_query_window_g3

0x8e47,	// (0x00023552) popup_vitu2_query_window_t6_ParamLimits

0x8e47,	// (0x00023552) popup_vitu2_query_window_t6

0x8e72,	// (0x0002357d) popup_vitu2_query_window_t7_ParamLimits

0x8e72,	// (0x0002357d) popup_vitu2_query_window_t7

0x1f5e,	// (0x0001c669) cam4_grid_pane_g1

0x1f67,	// (0x0001c672) cam4_grid_pane_g2

0x223d,	// (0x0001c948) cam4_grid_pane_g3

0x2246,	// (0x0001c951) cam4_grid_pane_g4

0x0003,

0xfde3,	// (0x0002a4ee) cam4_grid_pane_g

0x578e,	// (0x0001fe99) aid_placing_vt_slider_lsc_ParamLimits

0x5ace,	// (0x000201d9) vidtel_button_pane_ParamLimits

0x5ace,	// (0x000201d9) vidtel_button_pane

0xbe24,	// (0x0002652f) bg_button_pane_cp034

0x2251,	// (0x0001c95c) vidtel_button_pane_g1

0x2259,	// (0x0001c964) vidtel_button_pane_t1

0x06ea,	// (0x0001adf5) aid_size_vtel_slider_touch

0x07d7,	// (0x0001aee2) scroll_pane_cp039

0x9a48,	// (0x00024153) ncim_query_button_pane_cp01_ParamLimits

0x9a67,	// (0x00024172) ncimui_query_pane_g1_ParamLimits

0xc186,	// (0x00026891) input_focus_pane_cp012_ParamLimits

0x1160,	// (0x0001b86b) ncim_query_entry_pane_t1_ParamLimits

0x07d7,	// (0x0001aee2) scroll_pane_cp039_ParamLimits

0xd02d,	// (0x00027738) navi_pane_bcale_mc_g1

0xd035,	// (0x00027740) navi_pane_bcale_mc_t1

0x168c,	// (0x0001bd97) main_sp_fs_email_pane_g1

0x1698,	// (0x0001bda3) main_sp_fs_email_pane_g2

0x0001,

0xfbe9,	// (0x0002a2f4) main_sp_fs_email_pane_g

0x1adc,	// (0x0001c1e7) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1adc,	// (0x0001c1e7) list_single_cale_mrui_row_pane_g3

0xa5c6,	// (0x00024cd1) list_single_recal_day_pane_g5_event_pane

0x1cfa,	// (0x0001c405) list_single_recal_day_pane_g7

0x226f,	// (0x0001c97a) list_recal_day_event_pane_cp01

0x2278,	// (0x0001c983) list_recal_vselct_arw_lo_pane_cp01

0x2280,	// (0x0001c98b) list_recal_vselct_arw_up_pane_cp01

0x2288,	// (0x0001c993) list_recal_vselct_pane_cp01

0x0736,	// (0x0001ae41) list_recal_day_event_pane_cp01_g1

0x2292,	// (0x0001c99d) list_recal_day_event_pane_cp01_t1

0x1d02,	// (0x0001c40d) list_single_recal_day_pane_t1_ParamLimits

0x1d14,	// (0x0001c41f) list_single_recal_day_pane_t2_ParamLimits

0xfcc6,	// (0x0002a3d1) list_single_recal_day_pane_t_ParamLimits

0xc4aa,	// (0x00026bb5) bg_notes_pane_ParamLimits

0xc59f,	// (0x00026caa) list_notes_pane_ParamLimits

0x5070,	// (0x0001f77b) scroll_pane_cp06_ParamLimits

0xc5c1,	// (0x00026ccc) main_notes_pane_ParamLimits

0xc186,	// (0x00026891) main_welc_pane

0xae3c,	// (0x00025547) main_welc_body_pane_ParamLimits

0xae3c,	// (0x00025547) main_welc_body_pane

0xae55,	// (0x00025560) main_welc_opti_pane_ParamLimits

0xae55,	// (0x00025560) main_welc_opti_pane

0xaeaa,	// (0x000255b5) main_welc_pane_t1_ParamLimits

0xaeaa,	// (0x000255b5) main_welc_pane_t1

0xb056,	// (0x00025761) main_welc_body_row_pane_ParamLimits

0xb056,	// (0x00025761) main_welc_body_row_pane

0xc517,	// (0x00026c22) main_welc_opti_row_pane_ParamLimits

0xc517,	// (0x00026c22) main_welc_opti_row_pane

0x22a8,	// (0x0001c9b3) main_welc_opti_row_pane_g1

0xb07f,	// (0x0002578a) main_welc_opti_row_pane_t1

0x22b0,	// (0x0001c9bb) main_welc_body_row_pane_t1

0x1fb5,	// (0x0001c6c0) popup_notif_wgt_heading_pane

0x1fcf,	// (0x0001c6da) aid_size_list_notif_wgt_del_ParamLimits

0x1fdc,	// (0x0001c6e7) list_notif_wgt_row_pane_g1_ParamLimits

0x1fe8,	// (0x0001c6f3) list_notif_wgt_row_pane_g2_ParamLimits

0x1ff7,	// (0x0001c702) list_notif_wgt_row_pane_g3_ParamLimits

0xfd2d,	// (0x0002a438) list_notif_wgt_row_pane_g_ParamLimits

0x2004,	// (0x0001c70f) list_notif_wgt_row_pane_t1_ParamLimits

0x201a,	// (0x0001c725) list_notif_wgt_row_pane_t2_ParamLimits

0x202c,	// (0x0001c737) list_notif_wgt_row_pane_t3_ParamLimits

0xfd34,	// (0x0002a43f) list_notif_wgt_row_pane_t_ParamLimits

0xa9d5,	// (0x000250e0) listrow_wgtman_pane_g1_ParamLimits

0xa9e2,	// (0x000250ed) listrow_wgtman_pane_g2_ParamLimits

0xfd64,	// (0x0002a46f) listrow_wgtman_pane_g_ParamLimits

0xaa00,	// (0x0002510b) listrow_wgtman_pane_t1_ParamLimits

0xaa18,	// (0x00025123) listrow_wgtman_pane_t2_ParamLimits

0xfd69,	// (0x0002a474) listrow_wgtman_pane_t_ParamLimits

0xaa3e,	// (0x00025149) wait_bar_pane_cp09_ParamLimits

0xbe24,	// (0x0002652f) bg_popup_heading_pane_cp02

0x22bf,	// (0x0001c9ca) popup_notif_wgt_heading_pane_g1

0x22c7,	// (0x0001c9d2) popup_notif_wgt_heading_pane_t1

0xbe24,	// (0x0002652f) main_vids_pane

0xbe24,	// (0x0002652f) vids_listscroll_pane

0xb08e,	// (0x00025799) scroll_pane_cp040

0xbe24,	// (0x0002652f) vids_list_pane

0xb099,	// (0x000257a4) vids_list_double_pane_ParamLimits

0xb099,	// (0x000257a4) vids_list_double_pane

0xb0b1,	// (0x000257bc) vids_list_double_pane_g1

0xb0ba,	// (0x000257c5) vids_list_double_pane_t1

0xb0ca,	// (0x000257d5) vids_list_double_pane_t2

0x0001,

0xfe02,	// (0x0002a50d) vids_list_double_pane_t

0x3dd9,	// (0x0001e4e4) main_ncimui_pane_ParamLimits

0x989f,	// (0x00023faa) main_ncimui_pane_g1_ParamLimits

0x98ab,	// (0x00023fb6) main_ncimui_pane_g2_ParamLimits

0x98ab,	// (0x00023fb6) main_ncimui_pane_g2

0x0001,

0xfaea,	// (0x0002a1f5) main_ncimui_pane_g_ParamLimits

0xfaea,	// (0x0002a1f5) main_ncimui_pane_g

0xae6e,	// (0x00025579) main_welc_pane_g1_ParamLimits

0xae6e,	// (0x00025579) main_welc_pane_g1

0xae7a,	// (0x00025585) main_welc_pane_g2_ParamLimits

0xae7a,	// (0x00025585) main_welc_pane_g2

0x0003,

0xfdec,	// (0x0002a4f7) main_welc_pane_g_ParamLimits

0xfdec,	// (0x0002a4f7) main_welc_pane_g

0xc4aa,	// (0x00026bb5) listscroll_mce_pane_ParamLimits

0xd182,	// (0x0002788d) wait_bar_pane_cp10

0xe441,	// (0x00028b4c) main_cale_day_pane_ParamLimits

0xe441,	// (0x00028b4c) main_cale_week_pane_ParamLimits

0xc4aa,	// (0x00026bb5) main_messa_pane_ParamLimits

0x819b,	// (0x000228a6) main_clock2_btn_pane_ParamLimits

0x819b,	// (0x000228a6) main_clock2_btn_pane

0xecc4,	// (0x000293cf) main_clock2_btn_pane_cp01_ParamLimits

0xecc4,	// (0x000293cf) main_clock2_btn_pane_cp01

0x1a76,	// (0x0001c181) list_cale_mrui_pane_ParamLimits

0x2062,	// (0x0001c76d) main_cf0_pane_g2

0x0001,

0xfd3b,	// (0x0002a446) main_cf0_pane_g

0x1f52,	// (0x0001c65d) area_left_week_number_pane_ParamLimits

0x1f52,	// (0x0001c65d) area_top_day_name_pane_ParamLimits

0x1f52,	// (0x0001c65d) frame_month_view_pane_ParamLimits

0x1f52,	// (0x0001c65d) grid_month_view_pane_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g1_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g2_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g3_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g4_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g5_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g6_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g7_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g8_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g9_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g10_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g11_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g12_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g13_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g14_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g15_ParamLimits

0x1f46,	// (0x0001c651) frm_month_g16_ParamLimits

0xfd93,	// (0x0002a49e) frm_month_g_ParamLimits

0x218a,	// (0x0001c895) cell_top_day_name_pane_t1_ParamLimits

0x1f46,	// (0x0001c651) cell_area_left_week_number_pane_g1_ParamLimits

0x218a,	// (0x0001c895) cell_area_left_week_number_pane_t1_ParamLimits

0x1f46,	// (0x0001c651) cell_month_view_pane_g1_ParamLimits

0x218a,	// (0x0001c895) cell_month_view_pane_t1_ParamLimits

0xc4a2,	// (0x00026bad) main_clock2_btn_pane_g1

0x22d5,	// (0x0001c9e0) main_clock2_btn_pane_t1

0xc186,	// (0x00026891) listscroll_cmail_pane_ParamLimits

0x168c,	// (0x0001bd97) main_sp_fs_email_pane_g1_ParamLimits

0x1698,	// (0x0001bda3) main_sp_fs_email_pane_g2_ParamLimits

0xfbe9,	// (0x0002a2f4) main_sp_fs_email_pane_g_ParamLimits

0x1c6a,	// (0x0001c375) list_recal_day_pane_ParamLimits

0x1c7b,	// (0x0001c386) mian_recal_day_pane_t1

0xa043,	// (0x0002474e) list_single_dyc_row_text_pane_t4_ParamLimits

0xa043,	// (0x0002474e) list_single_dyc_row_text_pane_t4

0xa07a,	// (0x00024785) list_single_dyc_row_text_pane_t5_ParamLimits

0xa07a,	// (0x00024785) list_single_dyc_row_text_pane_t5

0x173a,	// (0x0001be45) list_single_dyc_row_text_pane_t6_ParamLimits

0x173a,	// (0x0001be45) list_single_dyc_row_text_pane_t6

0x68ed,	// (0x00020ff8) aid_mgn_list_cale_time_pane

0x3dd9,	// (0x0001e4e4) main_gallery2_pane_ParamLimits

0xecda,	// (0x000293e5) main_clock2_pane_cp01_t1

0xece8,	// (0x000293f3) main_clock2_pane_cp01_t3

0x0001,

0xf6d9,	// (0x00029de4) main_clock2_pane_cp01_t

0x53b6,	// (0x0001fac1) cale_week_scroll_pane_g16_ParamLimits

0x53b6,	// (0x0001fac1) cale_week_scroll_pane_g16

0xc7d2,	// (0x00026edd) vorec_slider_pane

0x2259,	// (0x0001c964) vidtel_button_pane_t1_ParamLimits

0xa621,	// (0x00024d2c) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa621,	// (0x00024d2c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa621,	// (0x00024d2c) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa621,	// (0x00024d2c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfce9,	// (0x0002a3f4) main_fs_bigclock_clock_pane_g_ParamLimits

0xa62d,	// (0x00024d38) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa641,	// (0x00024d4c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcf2,	// (0x0002a3fd) main_fs_bigclock_clock_pane_t_ParamLimits

0x7adc,	// (0x000221e7) main_mup3_lyrics_pane_ParamLimits

0x7adc,	// (0x000221e7) main_mup3_lyrics_pane

0xb0d8,	// (0x000257e3) main_mup3_lyrics_pane_t1_ParamLimits

0xb0d8,	// (0x000257e3) main_mup3_lyrics_pane_t1

0x4199,	// (0x0001e8a4) aid_main_mp4_pane_t1_area

0x41a3,	// (0x0001e8ae) aid_main_mp4_pane_t2_area

0x42a8,	// (0x0001e9b3) main_mp4_pane_g7_ParamLimits

0x42a8,	// (0x0001e9b3) main_mp4_pane_g7

0x42b4,	// (0x0001e9bf) main_mp4_pane_g8_ParamLimits

0x42b4,	// (0x0001e9bf) main_mp4_pane_g8

0x466b,	// (0x0001ed76) aid_call6_pane_g1_size

0xad59,	// (0x00025464) list_double_large_graphic_phob2_other_pane_ParamLimits

0xad59,	// (0x00025464) list_double_large_graphic_phob2_other_pane

0xc6c2,	// (0x00026dcd) list_double_large_graphic_phob2_other_pane_g1

0xbe24,	// (0x0002652f) list_highlight_pane_cp026

0xc186,	// (0x00026891) main_welc_pane_ParamLimits

0x9eb2,	// (0x000245bd) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9eb2,	// (0x000245bd) main_sp_fs_ctrlbar_pane_g3

0x9eca,	// (0x000245d5) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9eca,	// (0x000245d5) main_sp_fs_ctrlbar_pane_g4

0x9efc,	// (0x00024607) toolbar2_fixed_button_pane_cp01

0x9f07,	// (0x00024612) toolbar2_fixed_button_pane_cp02

0x9f12,	// (0x0002461d) toolbar2_fixed_button_pane_cp03

0xae20,	// (0x0002552b) list_welc_entry_pane_ParamLimits

0xae20,	// (0x0002552b) list_welc_entry_pane

0xae88,	// (0x00025593) main_welc_pane_g3_ParamLimits

0xae88,	// (0x00025593) main_welc_pane_g3

0xaec4,	// (0x000255cf) main_welc_pane_t2_ParamLimits

0xaec4,	// (0x000255cf) main_welc_pane_t2

0xaed8,	// (0x000255e3) main_welc_pane_t3_ParamLimits

0xaed8,	// (0x000255e3) main_welc_pane_t3

0x0005,

0xfdf5,	// (0x0002a500) main_welc_pane_t_ParamLimits

0xfdf5,	// (0x0002a500) main_welc_pane_t

0xafde,	// (0x000256e9) welc_button_pane_ParamLimits

0xafde,	// (0x000256e9) welc_button_pane

0xb048,	// (0x00025753) welc_service_logo_pane_ParamLimits

0xb048,	// (0x00025753) welc_service_logo_pane

0xb10e,	// (0x00025819) list_single_welc_entry_pane_ParamLimits

0xb10e,	// (0x00025819) list_single_welc_entry_pane

0xb11f,	// (0x0002582a) list_single_welc_entry_pane_g1

0xb127,	// (0x00025832) list_single_welc_entry_pane_t1

0xb135,	// (0x00025840) list_single_welc_entry_pane_t2

0x0001,

0xfe07,	// (0x0002a512) list_single_welc_entry_pane_t

0xbe24,	// (0x0002652f) bg_button_pane_cp035

0xb143,	// (0x0002584e) welc_button_pane_t1

0x22f1,	// (0x0001c9fc) welc_service_logo_pane_g1

0x22fa,	// (0x0001ca05) welc_service_logo_pane_g2

0x0001,

0xfe0c,	// (0x0002a517) welc_service_logo_pane_g

0x39c2,	// (0x0001e0cd) main_int_radio_pane

0x0ffe,	// (0x0001b709) list_single_fs_dyc_pane_g1

0xac72,	// (0x0002537d) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xac72,	// (0x0002537d) list_double_large_graphic_phob2_pane_g3

0xac7e,	// (0x00025389) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xac7e,	// (0x00025389) list_double_large_graphic_phob2_pane_g4

0xb151,	// (0x0002585c) main_int_radio1_pane_ParamLimits

0xb151,	// (0x0002585c) main_int_radio1_pane

0x2303,	// (0x0001ca0e) find_pane_cp02

0xb163,	// (0x0002586e) input_focus_pane_cp12_ParamLimits

0xb163,	// (0x0002586e) input_focus_pane_cp12

0xb16f,	// (0x0002587a) input_focus_pane_cp13_ParamLimits

0xb16f,	// (0x0002587a) input_focus_pane_cp13

0xb187,	// (0x00025892) input_focus_pane_cp14_ParamLimits

0xb187,	// (0x00025892) input_focus_pane_cp14

0x230c,	// (0x0001ca17) int_radio1_listscroll_pane

0xb19f,	// (0x000258aa) main_int_radio1_pane_g1_ParamLimits

0xb19f,	// (0x000258aa) main_int_radio1_pane_g1

0xb1af,	// (0x000258ba) main_int_radio1_pane_t1_ParamLimits

0xb1af,	// (0x000258ba) main_int_radio1_pane_t1

0xb1c3,	// (0x000258ce) main_int_radio1_pane_t2_ParamLimits

0xb1c3,	// (0x000258ce) main_int_radio1_pane_t2

0xb1d7,	// (0x000258e2) main_int_radio1_pane_t3_ParamLimits

0xb1d7,	// (0x000258e2) main_int_radio1_pane_t3

0xb1eb,	// (0x000258f6) main_int_radio1_pane_t4_ParamLimits

0xb1eb,	// (0x000258f6) main_int_radio1_pane_t4

0x2316,	// (0x0001ca21) main_int_radio1_pane_t5_ParamLimits

0x2316,	// (0x0001ca21) main_int_radio1_pane_t5

0xb202,	// (0x0002590d) main_int_radio1_pane_t6_ParamLimits

0xb202,	// (0x0002590d) main_int_radio1_pane_t6

0xb214,	// (0x0002591f) main_int_radio1_pane_t7_ParamLimits

0xb214,	// (0x0002591f) main_int_radio1_pane_t7

0xb226,	// (0x00025931) main_int_radio1_pane_t8_ParamLimits

0xb226,	// (0x00025931) main_int_radio1_pane_t8

0xb23a,	// (0x00025945) main_int_radio1_pane_t9_ParamLimits

0xb23a,	// (0x00025945) main_int_radio1_pane_t9

0xb24c,	// (0x00025957) main_int_radio1_pane_t10_ParamLimits

0xb24c,	// (0x00025957) main_int_radio1_pane_t10

0xb27d,	// (0x00025988) main_int_radio1_pane_t11_ParamLimits

0xb27d,	// (0x00025988) main_int_radio1_pane_t11

0xb2ae,	// (0x000259b9) main_int_radio1_pane_t12_ParamLimits

0xb2ae,	// (0x000259b9) main_int_radio1_pane_t12

0x000b,

0xfe11,	// (0x0002a51c) main_int_radio1_pane_t_ParamLimits

0xfe11,	// (0x0002a51c) main_int_radio1_pane_t

0x2328,	// (0x0001ca33) int_radio_list_pane

0x1c4d,	// (0x0001c358) scroll_pane_cp037

0x2330,	// (0x0001ca3b) list_double_large_graphic_int_radio_pane_ParamLimits

0x2330,	// (0x0001ca3b) list_double_large_graphic_int_radio_pane

0x2349,	// (0x0001ca54) list_double_large_graphic_int_radio_pane_g1

0x2352,	// (0x0001ca5d) list_double_large_graphic_int_radio_pane_t1

0x2360,	// (0x0001ca6b) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe2a,	// (0x0002a535) list_double_large_graphic_int_radio_pane_t

0xbe24,	// (0x0002652f) list_highlight_pane_cp027

0x22a0,	// (0x0001c9ab) main_button_pane_4

0xae94,	// (0x0002559f) main_welc_pane_g4_ParamLimits

0xae94,	// (0x0002559f) main_welc_pane_g4

0xaeea,	// (0x000255f5) main_welc_pane_t4_ParamLimits

0xaeea,	// (0x000255f5) main_welc_pane_t4

0xaefe,	// (0x00025609) main_welc_pane_t5_ParamLimits

0xaefe,	// (0x00025609) main_welc_pane_t5

0xaf36,	// (0x00025641) main_welc_pane_t6_ParamLimits

0xaf36,	// (0x00025641) main_welc_pane_t6

0xafec,	// (0x000256f7) welc_button_pane_2_ParamLimits

0xafec,	// (0x000256f7) welc_button_pane_2

0xb00a,	// (0x00025715) welc_button_pane_3_ParamLimits

0xb00a,	// (0x00025715) welc_button_pane_3

0x22a0,	// (0x0001c9ab) welc_button_pane_4

0xb02a,	// (0x00025735) welc_button_pane_5_ParamLimits

0xb02a,	// (0x00025735) welc_button_pane_5

0x376e,	// (0x0001de79) main_popup_welc_pane

0x2386,	// (0x0001ca91) main_welc_sk_g3

0x2390,	// (0x0001ca9b) main_welc_sk_g4

0x239a,	// (0x0001caa5) main_welc_sk_t3

0x23aa,	// (0x0001cab5) main_welc_sk_t4

0x23ba,	// (0x0001cac5) popup_welc_pane_t4

0x23c8,	// (0x0001cad3) popup_welc_pane_t5

0x23d6,	// (0x0001cae1) popup_welc_pane_t6

0x39c2,	// (0x0001e0cd) main_acti_pane

0xbe24,	// (0x0002652f) main_sso_pane

0xb2c5,	// (0x000259d0) sso_body_pane_ParamLimits

0xb2c5,	// (0x000259d0) sso_body_pane

0xb2df,	// (0x000259ea) sso_logo_pane_ParamLimits

0xb2df,	// (0x000259ea) sso_logo_pane

0xb310,	// (0x00025a1b) sso_sk_pane_ParamLimits

0xb310,	// (0x00025a1b) sso_sk_pane

0x2414,	// (0x0001cb1f) main_sso_logo_pane_g1

0xb31d,	// (0x00025a28) sso_sk_pane_t1_ParamLimits

0xb31d,	// (0x00025a28) sso_sk_pane_t1

0xb331,	// (0x00025a3c) sso_sk_pane_t2_ParamLimits

0xb331,	// (0x00025a3c) sso_sk_pane_t2

0x0001,

0xfe2f,	// (0x0002a53a) sso_sk_pane_t_ParamLimits

0xfe2f,	// (0x0002a53a) sso_sk_pane_t

0x241d,	// (0x0001cb28) aid_sso_gap

0x2426,	// (0x0001cb31) aid_sso_txt1

0x2430,	// (0x0001cb3b) aid_sso_txt2

0x243a,	// (0x0001cb45) aid_sso_txt3

0x0002,

0xfe34,	// (0x0002a53f) aid_sso_txt

0x2444,	// (0x0001cb4f) aid_sso_widget

0xb38e,	// (0x00025a99) sso_btn_pane_ParamLimits

0xb38e,	// (0x00025a99) sso_btn_pane

0xb414,	// (0x00025b1f) sso_option_pane_ParamLimits

0xb414,	// (0x00025b1f) sso_option_pane

0xb4be,	// (0x00025bc9) sso_query_pane_ParamLimits

0xb4be,	// (0x00025bc9) sso_query_pane

0xb50e,	// (0x00025c19) sso_query_pane_cp01_ParamLimits

0xb50e,	// (0x00025c19) sso_query_pane_cp01

0xb55e,	// (0x00025c69) sso_t_hdr_pane_ParamLimits

0xb55e,	// (0x00025c69) sso_t_hdr_pane

0xb582,	// (0x00025c8d) sso_t_nml_pane_ParamLimits

0xb582,	// (0x00025c8d) sso_t_nml_pane

0xb5d2,	// (0x00025cdd) sso_t_sub_pane

0xb2ec,	// (0x000259f7) sso_popup_window_ParamLimits

0xb2ec,	// (0x000259f7) sso_popup_window

0xb343,	// (0x00025a4e) sso_apps_pane_ParamLimits

0xb343,	// (0x00025a4e) sso_apps_pane

0xb366,	// (0x00025a71) sso_body_pane_g1

0xb36e,	// (0x00025a79) sso_body_pane_t1

0xb37e,	// (0x00025a89) sso_body_pane_t2

0x0001,

0xfe3b,	// (0x0002a546) sso_body_pane_t

0xb3d4,	// (0x00025adf) sso_btn_pane_cp01_ParamLimits

0xb3d4,	// (0x00025adf) sso_btn_pane_cp01

0xb490,	// (0x00025b9b) sso_prog_pane_ParamLimits

0xb490,	// (0x00025b9b) sso_prog_pane

0xb5f7,	// (0x00025d02) sso_t_hdr_pane_t1_ParamLimits

0xb5f7,	// (0x00025d02) sso_t_hdr_pane_t1

0x244e,	// (0x0001cb59) input_focus_pane_cp10_ParamLimits

0x244e,	// (0x0001cb59) input_focus_pane_cp10

0x2462,	// (0x0001cb6d) sso_query_pane_t1_ParamLimits

0x2462,	// (0x0001cb6d) sso_query_pane_t1

0x2475,	// (0x0001cb80) sso_query_pane_t2_ParamLimits

0x2475,	// (0x0001cb80) sso_query_pane_t2

0x248e,	// (0x0001cb99) sso_query_pane_t3_ParamLimits

0x248e,	// (0x0001cb99) sso_query_pane_t3

0x24b8,	// (0x0001cbc3) sso_query_pane_t4_ParamLimits

0x24b8,	// (0x0001cbc3) sso_query_pane_t4

0x0003,

0xfe40,	// (0x0002a54b) sso_query_pane_t_ParamLimits

0xfe40,	// (0x0002a54b) sso_query_pane_t

0x24dc,	// (0x0001cbe7) bg_button_pane_cp22

0x236e,	// (0x0001ca79) sso_btn_pane_t1

0xb610,	// (0x00025d1b) sso_t_nml_pane_t1_ParamLimits

0xb610,	// (0x00025d1b) sso_t_nml_pane_t1

0x24e5,	// (0x0001cbf0) sso_option_row_pane_ParamLimits

0x24e5,	// (0x0001cbf0) sso_option_row_pane

0x24f2,	// (0x0001cbfd) sso_t_sub_pane_t1_ParamLimits

0x24f2,	// (0x0001cbfd) sso_t_sub_pane_t1

0xc186,	// (0x00026891) bg_popup_window_pane_cp11_ParamLimits

0xc186,	// (0x00026891) bg_popup_window_pane_cp11

0x250f,	// (0x0001cc1a) popup_sk_window_cp01_ParamLimits

0x250f,	// (0x0001cc1a) popup_sk_window_cp01

0x251c,	// (0x0001cc27) sso_popup_body_pane_ParamLimits

0x251c,	// (0x0001cc27) sso_popup_body_pane

0x2529,	// (0x0001cc34) scroll_pane_cp21_ParamLimits

0x2529,	// (0x0001cc34) scroll_pane_cp21

0x2536,	// (0x0001cc41) sso_popup_body_t_pane_ParamLimits

0x2536,	// (0x0001cc41) sso_popup_body_t_pane

0x2543,	// (0x0001cc4e) sso_popup_body_t_hdr_pane_ParamLimits

0x2543,	// (0x0001cc4e) sso_popup_body_t_hdr_pane

0xb62d,	// (0x00025d38) sso_popup_body_t_nml_pane_ParamLimits

0xb62d,	// (0x00025d38) sso_popup_body_t_nml_pane

0xb64b,	// (0x00025d56) sso_popup_body_t_sub_pane_ParamLimits

0xb64b,	// (0x00025d56) sso_popup_body_t_sub_pane

0x2555,	// (0x0001cc60) sso_popup_body_t_hdr_pane_t1

0xb66e,	// (0x00025d79) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb66e,	// (0x00025d79) sso_popup_body_t_nml_pane_t1

0x2565,	// (0x0001cc70) sso_popup_body_t_sub_pane_t1_ParamLimits

0x2565,	// (0x0001cc70) sso_popup_body_t_sub_pane_t1

0xc563,	// (0x00026c6e) sso_prog_pane_g1

0xb6b5,	// (0x00025dc0) sso_apps_pane_comp1_ParamLimits

0xb6b5,	// (0x00025dc0) sso_apps_pane_comp1

0x258a,	// (0x0001cc95) sso_apps_pane_comp1_g1

0x2592,	// (0x0001cc9d) sso_apps_pane_comp1_t1

0x25ae,	// (0x0001ccb9) sso_option_row_pane_g1

0x25c6,	// (0x0001ccd1) sso_option_row_pane_t1

0x1873,	// (0x0001bf7e) list_cmail_pane_ParamLimits

0xbe24,	// (0x0002652f) main_call7_pane

0xae0e,	// (0x00025519) bg_welc_area_ParamLimits

0xae0e,	// (0x00025519) bg_welc_area

0xaf6c,	// (0x00025677) sso_t_hdr_pane_a_t1_ParamLimits

0xaf6c,	// (0x00025677) sso_t_hdr_pane_a_t1

0xaf80,	// (0x0002568b) sso_t_nml_pane_a_t1_ParamLimits

0xaf80,	// (0x0002568b) sso_t_nml_pane_a_t1

0xafaa,	// (0x000256b5) sso_t_sub_pane_a_t1_ParamLimits

0xafaa,	// (0x000256b5) sso_t_sub_pane_a_t1

0xb03a,	// (0x00025745) welc_button_pane_cp01_ParamLimits

0xb03a,	// (0x00025745) welc_button_pane_cp01

0x236e,	// (0x0001ca79) sso_btn_pane_t1_copy1

0x237d,	// (0x0001ca88) welc_button_pane_2_comp1

0x23e4,	// (0x0001caef) sso_t_hdr_pane_p_t1

0x23f4,	// (0x0001caff) sso_t_nml_pane_p_t1

0x2404,	// (0x0001cb0f) sso_t_sub_pane_p_t1

0xbe24,	// (0x0002652f) main_att_pane

0xbe24,	// (0x0002652f) main_vod_pane

0xb5d2,	// (0x00025cdd) sso_t_sub_pane_ParamLimits

0x25a0,	// (0x0001ccab) input_focus_pane_cp10_t1

0x25c6,	// (0x0001ccd1) sso_option_row_pane_t1_ParamLimits

0xb6cf,	// (0x00025dda) main_att_body_pane_ParamLimits

0xb6cf,	// (0x00025dda) main_att_body_pane

0xb6e3,	// (0x00025dee) att_btn_emg_pane_ParamLimits

0xb6e3,	// (0x00025dee) att_btn_emg_pane

0xb6fb,	// (0x00025e06) att_btn_pane_ParamLimits

0xb6fb,	// (0x00025e06) att_btn_pane

0xb761,	// (0x00025e6c) att_btn_pane_cp01_ParamLimits

0xb761,	// (0x00025e6c) att_btn_pane_cp01

0xb793,	// (0x00025e9e) att_li_srv_pane_ParamLimits

0xb793,	// (0x00025e9e) att_li_srv_pane

0xb7a5,	// (0x00025eb0) att_opt_pane_ParamLimits

0xb7a5,	// (0x00025eb0) att_opt_pane

0xb7e9,	// (0x00025ef4) att_query_pane_ParamLimits

0xb7e9,	// (0x00025ef4) att_query_pane

0xb859,	// (0x00025f64) att_query_pane_cp01_ParamLimits

0xb859,	// (0x00025f64) att_query_pane_cp01

0xb89d,	// (0x00025fa8) att_t_hdr_pane_ParamLimits

0xb89d,	// (0x00025fa8) att_t_hdr_pane

0xb903,	// (0x0002600e) att_t_nml_pane_ParamLimits

0xb903,	// (0x0002600e) att_t_nml_pane

0xb96b,	// (0x00026076) att_t_nml_pane_cp01_ParamLimits

0xb96b,	// (0x00026076) att_t_nml_pane_cp01

0xb98f,	// (0x0002609a) att_t_nmlb_pane_ParamLimits

0xb98f,	// (0x0002609a) att_t_nmlb_pane

0xb9f3,	// (0x000260fe) att_term_pane_ParamLimits

0xb9f3,	// (0x000260fe) att_term_pane

0xba35,	// (0x00026140) main_att_body_pane_g1_ParamLimits

0xba35,	// (0x00026140) main_att_body_pane_g1

0x25e2,	// (0x0001cced) att_t_hdr_pane_t1_ParamLimits

0x25e2,	// (0x0001cced) att_t_hdr_pane_t1

0x25fb,	// (0x0001cd06) att_t_nml_pane_t1_ParamLimits

0x25fb,	// (0x0001cd06) att_t_nml_pane_t1

0x2620,	// (0x0001cd2b) att_btn_pane_t1

0x24dc,	// (0x0001cbe7) bg_button_pane_cp23

0xba5f,	// (0x0002616a) att_li_srv_row_pane_ParamLimits

0xba5f,	// (0x0002616a) att_li_srv_row_pane

0x262f,	// (0x0001cd3a) att_t_nmlb_pane_t1_ParamLimits

0x262f,	// (0x0001cd3a) att_t_nmlb_pane_t1

0x264b,	// (0x0001cd56) att_query_pane_t1

0x265a,	// (0x0001cd65) att_query_pane_t2

0x2669,	// (0x0001cd74) att_query_pane_t3

0x0002,

0xfe4e,	// (0x0002a559) att_query_pane_t

0x2678,	// (0x0001cd83) input_focus_pane_cp11

0x2681,	// (0x0001cd8c) att_term_pane_t1_ParamLimits

0x2681,	// (0x0001cd8c) att_term_pane_t1

0xbe24,	// (0x0002652f) att_opt_row_pane

0x269e,	// (0x0001cda9) att_opt_row_pane_g1

0x26a6,	// (0x0001cdb1) att_opt_row_pane_t1_ParamLimits

0x26a6,	// (0x0001cdb1) att_opt_row_pane_t1

0xba6f,	// (0x0002617a) att_li_srv_row_pane_g1

0xba77,	// (0x00026182) att_li_srv_row_pane_t1_ParamLimits

0xba77,	// (0x00026182) att_li_srv_row_pane_t1

0xba77,	// (0x00026182) att_li_srv_row_pane_t2_ParamLimits

0xba77,	// (0x00026182) att_li_srv_row_pane_t2

0x0001,

0xfe55,	// (0x0002a560) att_li_srv_row_pane_t_ParamLimits

0xfe55,	// (0x0002a560) att_li_srv_row_pane_t

0x26bf,	// (0x0001cdca) att_btn_close_pane_g1

0xbe24,	// (0x0002652f) bg_button_pane_cp24

0xba8c,	// (0x00026197) main_vod_body_pane_ParamLimits

0xba8c,	// (0x00026197) main_vod_body_pane

0xba9a,	// (0x000261a5) main_vod_body_pane_g1_ParamLimits

0xba9a,	// (0x000261a5) main_vod_body_pane_g1

0xbaca,	// (0x000261d5) scroll_pane_cp24_ParamLimits

0xbaca,	// (0x000261d5) scroll_pane_cp24

0xbb12,	// (0x0002621d) vod_btn_pane_ParamLimits

0xbb12,	// (0x0002621d) vod_btn_pane

0xbb50,	// (0x0002625b) vod_det_pane_ParamLimits

0xbb50,	// (0x0002625b) vod_det_pane

0xbb7a,	// (0x00026285) vod_logo_g1_ParamLimits

0xbb7a,	// (0x00026285) vod_logo_g1

0xbbb4,	// (0x000262bf) vod_opt_pane_ParamLimits

0xbbb4,	// (0x000262bf) vod_opt_pane

0xbbe4,	// (0x000262ef) vod_opt_pane_cp01_ParamLimits

0xbbe4,	// (0x000262ef) vod_opt_pane_cp01

0xbc0c,	// (0x00026317) vod_query_pane_ParamLimits

0xbc0c,	// (0x00026317) vod_query_pane

0xbc34,	// (0x0002633f) vod_query_pane_cp01_ParamLimits

0xbc34,	// (0x0002633f) vod_query_pane_cp01

0xbc40,	// (0x0002634b) vod_t_nml_pane_ParamLimits

0xbc40,	// (0x0002634b) vod_t_nml_pane

0xbce2,	// (0x000263ed) vod_t_nml_pane_cp01_ParamLimits

0xbce2,	// (0x000263ed) vod_t_nml_pane_cp01

0xbd1a,	// (0x00026425) vod_t_sub_pane_ParamLimits

0xbd1a,	// (0x00026425) vod_t_sub_pane

0xbd46,	// (0x00026451) vod_t_sub_pane_cp01_ParamLimits

0xbd46,	// (0x00026451) vod_t_sub_pane_cp01

0x2678,	// (0x0001cd83) vod_query_field_pane

0x26c7,	// (0x0001cdd2) vod_query_pane_t1

0x26d6,	// (0x0001cde1) bg_button_pane_cp25

0x236e,	// (0x0001ca79) sso_btn_pane_t1_copy2

0xbd6e,	// (0x00026479) vod_t_nml_pane_t1_ParamLimits

0xbd6e,	// (0x00026479) vod_t_nml_pane_t1

0x26df,	// (0x0001cdea) vod_opt_row_pane_ParamLimits

0x26df,	// (0x0001cdea) vod_opt_row_pane

0x26f1,	// (0x0001cdfc) vod_t_sub_pane_t1_ParamLimits

0x26f1,	// (0x0001cdfc) vod_t_sub_pane_t1

0x270a,	// (0x0001ce15) vod_det_cell_pane_ParamLimits

0x270a,	// (0x0001ce15) vod_det_cell_pane

0xbe24,	// (0x0002652f) input_focus_pane_cp15

0x271b,	// (0x0001ce26) vod_query_field_pane_t1

0x2729,	// (0x0001ce34) vod_opt_row_pane_g1_ParamLimits

0x2729,	// (0x0001ce34) vod_opt_row_pane_g1

0x2735,	// (0x0001ce40) vod_opt_row_pane_t1_ParamLimits

0x2735,	// (0x0001ce40) vod_opt_row_pane_t1

0x2755,	// (0x0001ce60) vod_det_cell_field_pane

0x275e,	// (0x0001ce69) vod_det_cell_pane_g1

0x2766,	// (0x0001ce71) vod_det_cell_pane_t1

0xbe24,	// (0x0002652f) input_focus_pane_cp16

0x2775,	// (0x0001ce80) vod_det_cell_field_pane_t1

0xbda3,	// (0x000264ae) call7_btn_grp_pane_ParamLimits

0xbda3,	// (0x000264ae) call7_btn_grp_pane

0xbdb2,	// (0x000264bd) call7_bubble_pane_ParamLimits

0xbdb2,	// (0x000264bd) call7_bubble_pane

0xbdc0,	// (0x000264cb) cell_call7_btn_pane_ParamLimits

0xbdc0,	// (0x000264cb) cell_call7_btn_pane

0xbdcf,	// (0x000264da) call7_pane_g1_ParamLimits

0xbdcf,	// (0x000264da) call7_pane_g1

0xbdde,	// (0x000264e9) call7_windows_conf_pane_ParamLimits

0xbdde,	// (0x000264e9) call7_windows_conf_pane

0xbdfa,	// (0x00026505) popup_call7_1st_window_ParamLimits

0xbdfa,	// (0x00026505) popup_call7_1st_window

0xbe08,	// (0x00026513) popup_call7_2nd_window_ParamLimits

0xbe08,	// (0x00026513) popup_call7_2nd_window

0xbe16,	// (0x00026521) popup_call7_3rd_window_ParamLimits

0xbe16,	// (0x00026521) popup_call7_3rd_window

0xbe24,	// (0x0002652f) bg_button_pane_cp26

0x20df,	// (0x0001c7ea) cell_call7_btn_pane_g1

0x20e8,	// (0x0001c7f3) cell_call7_btn_pane_t1

0xbe24,	// (0x0002652f) bg_popup_window_pane_cp12

0x2783,	// (0x0001ce8e) popup_call7_1st_window_g1

0x278b,	// (0x0001ce96) popup_call7_1st_window_g2

0x2793,	// (0x0001ce9e) popup_call7_1st_window_g3

0x0002,

0xfe5a,	// (0x0002a565) popup_call7_1st_window_g

0x279b,	// (0x0001cea6) popup_call7_1st_window_t1

0x27aa,	// (0x0001ceb5) popup_call7_1st_window_t2

0x27b8,	// (0x0001cec3) popup_call7_1st_window_t3

0x0002,

0xfe61,	// (0x0002a56c) popup_call7_1st_window_t

0xbe24,	// (0x0002652f) bg_popup_window_pane_cp13

0x27c6,	// (0x0001ced1) popup_call7_2nd_window_g1

0x27ce,	// (0x0001ced9) popup_call7_2nd_window_g2

0x27d6,	// (0x0001cee1) popup_call7_2nd_window_g3

0x0002,

0xfe68,	// (0x0002a573) popup_call7_2nd_window_g

0x27de,	// (0x0001cee9) popup_call7_2nd_window_t1

0xbe24,	// (0x0002652f) bg_popup_window_pane_cp14

0x27ed,	// (0x0001cef8) call7_list_conf_pane

0x27f5,	// (0x0001cf00) call7_list_conf_row_pane_ParamLimits

0x27f5,	// (0x0001cf00) call7_list_conf_row_pane

0x2808,	// (0x0001cf13) call7_list_conf_row_pane_g1

0x2810,	// (0x0001cf1b) call7_list_conf_row_pane_g2

0x0001,

0xfe6f,	// (0x0002a57a) call7_list_conf_row_pane_g

0x2818,	// (0x0001cf23) call7_list_conf_row_pane_t1

0xbe24,	// (0x0002652f) list_highlight_pane_cp22

0xb462,	// (0x00025b6d) sso_option_pane_cp01_ParamLimits

0xb462,	// (0x00025b6d) sso_option_pane_cp01

0xc4aa,	// (0x00026bb5) msg_header_pane_ParamLimits

0xd2e4,	// (0x000279ef) bg_button_pane_cp01_ParamLimits

0xd2f8,	// (0x00027a03) input_focus_pane_cp07_ParamLimits

0x9f46,	// (0x00024651) popup_email_progress_window

0xc563,	// (0x00026c6e) popup_email_progress_window_g1

0x2826,	// (0x0001cf31) popup_email_progress_window_g2

0x0001,

0xfe74,	// (0x0002a57f) popup_email_progress_window_g

0x282e,	// (0x0001cf39) popup_email_progress_window_t1

0xbe24,	// (0x0002652f) cmail_conv_pane

0x178d,	// (0x0001be98) list_single_dyc_row_pane_g5_ParamLimits

0x178d,	// (0x0001be98) list_single_dyc_row_pane_g5

0x1799,	// (0x0001bea4) list_single_dyc_row_pane_g6_ParamLimits

0x1799,	// (0x0001bea4) list_single_dyc_row_pane_g6

0x17b1,	// (0x0001bebc) list_single_dyc_row_pane_g7_ParamLimits

0x17b1,	// (0x0001bebc) list_single_dyc_row_pane_g7

0xae30,	// (0x0002553b) main_button_pane_5_ParamLimits

0xae30,	// (0x0002553b) main_button_pane_5

0xb2d3,	// (0x000259de) sso_emg_call_btn_pane_ParamLimits

0xb2d3,	// (0x000259de) sso_emg_call_btn_pane

0xb5e7,	// (0x00025cf2) sso_t_sub_pane_cp01_ParamLimits

0xb5e7,	// (0x00025cf2) sso_t_sub_pane_cp01

0x25ae,	// (0x0001ccb9) sso_option_row_pane_g1_ParamLimits

0x25ba,	// (0x0001ccc5) sso_option_row_pane_g2_ParamLimits

0x25ba,	// (0x0001ccc5) sso_option_row_pane_g2

0x0001,

0xfe49,	// (0x0002a554) sso_option_row_pane_g_ParamLimits

0xfe49,	// (0x0002a554) sso_option_row_pane_g

0xb779,	// (0x00025e84) att_btn_pane_cp02_ParamLimits

0xb779,	// (0x00025e84) att_btn_pane_cp02

0x283c,	// (0x0001cf47) cmail_conv_hdr_pane

0x2845,	// (0x0001cf50) list_cmail_conv_pane

0x284f,	// (0x0001cf5a) scroll_pane_cp31

0x2857,	// (0x0001cf62) cmail_conv_hdr_pane_t1

0x2865,	// (0x0001cf70) cmail_conv_hdr_pane_t2

0x0001,

0xfe79,	// (0x0002a584) cmail_conv_hdr_pane_t

0x2873,	// (0x0001cf7e) bubble_cmail_conv_pane_ParamLimits

0x2873,	// (0x0001cf7e) bubble_cmail_conv_pane

0x19f7,	// (0x0001c102) aid_size_colorization_pane

0xc7d2,	// (0x00026edd) bg_bubble_cmail_conv_pane

0x288b,	// (0x0001cf96) body_bubble_cmail_conv_pane

0xcc94,	// (0x0002739f) bubble_cmail_conv_pane_g1

0x2893,	// (0x0001cf9e) bubble_cmail_conv_pane_g2

0x289b,	// (0x0001cfa6) bubble_cmail_conv_pane_g3

0x0002,

0xfe7e,	// (0x0002a589) bubble_cmail_conv_pane_g

0x28a3,	// (0x0001cfae) bubble_cmail_conv_pane_t1

0x1819,	// (0x0001bf24) bg_bubble_cmail_conv_pane_g1

0x1822,	// (0x0001bf2d) bg_bubble_cmail_conv_pane_g2

0x182b,	// (0x0001bf36) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfc14,	// (0x0002a31f) bg_bubble_cmail_conv_pane_g

0x28b1,	// (0x0001cfbc) body_bubble_cmail_conv_pane_t1_ParamLimits

0x28b1,	// (0x0001cfbc) body_bubble_cmail_conv_pane_t1

0x28c8,	// (0x0001cfd3) body_bubble_cmail_conv_pane_t2_ParamLimits

0x28c8,	// (0x0001cfd3) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe85,	// (0x0002a590) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe85,	// (0x0002a590) body_bubble_cmail_conv_pane_t

0xc517,	// (0x00026c22) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
