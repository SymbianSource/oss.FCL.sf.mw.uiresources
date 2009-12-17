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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0000aa71 };

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
0x2983,	// (0x0000d3f4) Screen

0x298d,	// (0x0000d3fe) application_window

0x29bc,	// (0x0000d42d) area_bottom_pane_ParamLimits

0x29bc,	// (0x0000d42d) area_bottom_pane

0x29ef,	// (0x0000d460) area_top_pane_ParamLimits

0x29ef,	// (0x0000d460) area_top_pane

0xa2ba,	// (0x00014d2b) call_video_uplink_pane_ParamLimits

0xa2ba,	// (0x00014d2b) call_video_uplink_pane

0x2a60,	// (0x0000d4d1) main_pane_ParamLimits

0x2a60,	// (0x0000d4d1) main_pane

0xcded,	// (0x0001785e) context_pane

0x55e7,	// (0x00010058) navi_pane

0x5610,	// (0x00010081) popup_cale_events_window_ParamLimits

0x5610,	// (0x00010081) popup_cale_events_window

0xce00,	// (0x00017871) popup_mup_playback_window

0x5628,	// (0x00010099) signal_pane

0xaa41,	// (0x000154b2) main_browser_pane

0xb8ae,	// (0x0001631f) main_burst_pane

0xa2d6,	// (0x00014d47) main_calc_pane

0xb8ae,	// (0x0001631f) main_cale_day_pane

0xac09,	// (0x0001567a) main_cale_month_pane

0xb8ae,	// (0x0001631f) main_cale_week_pane

0xb8ae,	// (0x0001631f) main_call_pane

0xa6f5,	// (0x00015166) main_call_poc_pane

0xb8ae,	// (0x0001631f) main_camera_pane

0xb8ae,	// (0x0001631f) main_chi_dic_pane

0xb6ad,	// (0x0001611e) main_clock_pane

0xa6f5,	// (0x00015166) main_fmradio_pane

0xb8ae,	// (0x0001631f) main_graph_messa_pane

0xa6f5,	// (0x00015166) main_help_pane

0xaa41,	// (0x000154b2) main_im_pane

0xa950,	// (0x000153c1) main_image_pane_ParamLimits

0xa950,	// (0x000153c1) main_image_pane

0xa6f5,	// (0x00015166) main_location2_pane

0xb8ae,	// (0x0001631f) main_location_pane

0xa6f5,	// (0x00015166) main_messa_pane

0xa6f5,	// (0x00015166) main_mp2_pane

0xb8ae,	// (0x0001631f) main_mp_pane

0xa6f5,	// (0x00015166) main_msg_pane

0xa6f5,	// (0x00015166) main_mup_eq_pane

0xa6f5,	// (0x00015166) main_mup_pane

0xb8ae,	// (0x0001631f) main_notes_pane

0xa6f5,	// (0x00015166) main_pec_pane

0xa6f5,	// (0x00015166) main_phob_pane

0xa6f5,	// (0x00015166) main_pinb_pane

0xa6f5,	// (0x00015166) main_postcard_pane

0xa6f5,	// (0x00015166) main_qdial_pane

0xb8ae,	// (0x0001631f) main_skin_pane

0xa6f5,	// (0x00015166) main_smil2_pane

0xb8ae,	// (0x0001631f) main_smil_pane

0xb8ae,	// (0x0001631f) main_video_pane

0xb8ae,	// (0x0001631f) main_video_tele_pane

0xa950,	// (0x000153c1) main_viewer_pane_ParamLimits

0xa950,	// (0x000153c1) main_viewer_pane

0xb8ae,	// (0x0001631f) main_vorec_pane

0x53c7,	// (0x0000fe38) popup_blid_sat_info_window_ParamLimits

0x53c7,	// (0x0000fe38) popup_blid_sat_info_window

0x541d,	// (0x0000fe8e) popup_dyc_status_message_window_ParamLimits

0x541d,	// (0x0000fe8e) popup_dyc_status_message_window

0x5433,	// (0x0000fea4) popup_grid_large_graphic_window_ParamLimits

0x5433,	// (0x0000fea4) popup_grid_large_graphic_window

0x54c9,	// (0x0000ff3a) popup_loc_request_window_ParamLimits

0x54c9,	// (0x0000ff3a) popup_loc_request_window

0x55c1,	// (0x00010032) popup_wml_address_window_ParamLimits

0x55c1,	// (0x00010032) popup_wml_address_window

0x521d,	// (0x0000fc8e) call_muted_g1

0x4f42,	// (0x0000f9b3) popup_call_audio_conf_window_ParamLimits

0x4f42,	// (0x0000f9b3) popup_call_audio_conf_window

0x522d,	// (0x0000fc9e) popup_call_audio_first_window_ParamLimits

0x522d,	// (0x0000fc9e) popup_call_audio_first_window

0x528b,	// (0x0000fcfc) popup_call_audio_in_window_ParamLimits

0x528b,	// (0x0000fcfc) popup_call_audio_in_window

0x52b7,	// (0x0000fd28) popup_call_audio_out_window_ParamLimits

0x52b7,	// (0x0000fd28) popup_call_audio_out_window

0x52e5,	// (0x0000fd56) popup_call_audio_second_window_ParamLimits

0x52e5,	// (0x0000fd56) popup_call_audio_second_window

0x532b,	// (0x0000fd9c) popup_call_audio_wait_window_ParamLimits

0x532b,	// (0x0000fd9c) popup_call_audio_wait_window

0x535e,	// (0x0000fdcf) popup_number_entry_window_ParamLimits

0x535e,	// (0x0000fdcf) popup_number_entry_window

0xa2e4,	// (0x00014d55) bg_popup_call_pane_cp05_ParamLimits

0xa2e4,	// (0x00014d55) bg_popup_call_pane_cp05

0xa304,	// (0x00014d75) popup_number_entry_window_t1

0xa317,	// (0x00014d88) popup_number_entry_window_t2

0xa329,	// (0x00014d9a) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00019ba0) popup_number_entry_window_t

0xa33b,	// (0x00014dac) text_title_cp2

0xa34e,	// (0x00014dbf) bg_popup_call_pane_cp_ParamLimits

0xa34e,	// (0x00014dbf) bg_popup_call_pane_cp

0xa35c,	// (0x00014dcd) call_thumbnail_pane

0xa364,	// (0x00014dd5) popup_call_audio_in_window_g1_ParamLimits

0xa364,	// (0x00014dd5) popup_call_audio_in_window_g1

0xa370,	// (0x00014de1) popup_call_audio_in_window_g2_ParamLimits

0xa370,	// (0x00014de1) popup_call_audio_in_window_g2

0xa37c,	// (0x00014ded) popup_call_audio_in_window_g3_ParamLimits

0xa37c,	// (0x00014ded) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00019ba9) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00019ba9) popup_call_audio_in_window_g

0xa388,	// (0x00014df9) popup_call_audio_in_window_t1_ParamLimits

0xa388,	// (0x00014df9) popup_call_audio_in_window_t1

0xa3a3,	// (0x00014e14) popup_call_audio_in_window_t2_ParamLimits

0xa3a3,	// (0x00014e14) popup_call_audio_in_window_t2

0xa3be,	// (0x00014e2f) popup_call_audio_in_window_t3_ParamLimits

0xa3be,	// (0x00014e2f) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00019bb0) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00019bb0) popup_call_audio_in_window_t

0xa34e,	// (0x00014dbf) bg_popup_call_pane_cp01_ParamLimits

0xa34e,	// (0x00014dbf) bg_popup_call_pane_cp01

0xa35c,	// (0x00014dcd) call_thumbnail_pane_cp02

0xa3d1,	// (0x00014e42) call_type_pane_cp022

0xa3d9,	// (0x00014e4a) popup_call_audio_out_window_g1_ParamLimits

0xa3d9,	// (0x00014e4a) popup_call_audio_out_window_g1

0xa3eb,	// (0x00014e5c) popup_call_audio_out_window_g2_ParamLimits

0xa3eb,	// (0x00014e5c) popup_call_audio_out_window_g2

0xa3f7,	// (0x00014e68) popup_call_audio_out_window_g3_ParamLimits

0xa3f7,	// (0x00014e68) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00019bb7) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00019bb7) popup_call_audio_out_window_g

0xa409,	// (0x00014e7a) popup_call_audio_out_window_t1_ParamLimits

0xa409,	// (0x00014e7a) popup_call_audio_out_window_t1

0xa421,	// (0x00014e92) popup_call_audio_out_window_t2_ParamLimits

0xa421,	// (0x00014e92) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00019bbe) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00019bbe) popup_call_audio_out_window_t

0xa436,	// (0x00014ea7) bg_popup_call_pane_ParamLimits

0xa436,	// (0x00014ea7) bg_popup_call_pane

0x2bea,	// (0x0000d65b) call_thumbnail_pane_cp_ParamLimits

0x2bea,	// (0x0000d65b) call_thumbnail_pane_cp

0xa4ba,	// (0x00014f2b) call_type_pane_cp01_ParamLimits

0xa4ba,	// (0x00014f2b) call_type_pane_cp01

0xa4fe,	// (0x00014f6f) popup_call_audio_first_window_g1_ParamLimits

0xa4fe,	// (0x00014f6f) popup_call_audio_first_window_g1

0xa54a,	// (0x00014fbb) popup_call_audio_first_window_g2_ParamLimits

0xa54a,	// (0x00014fbb) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00019bc3) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00019bc3) popup_call_audio_first_window_g

0xa58e,	// (0x00014fff) popup_call_audio_first_window_t1_ParamLimits

0xa58e,	// (0x00014fff) popup_call_audio_first_window_t1

0xa63a,	// (0x000150ab) popup_call_audio_first_window_t4_ParamLimits

0xa63a,	// (0x000150ab) popup_call_audio_first_window_t4

0xa6c6,	// (0x00015137) popup_call_audio_first_window_t5_ParamLimits

0xa6c6,	// (0x00015137) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00019bc8) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00019bc8) popup_call_audio_first_window_t

0xa6f5,	// (0x00015166) bg_popup_call_pane_cp02

0xa6ff,	// (0x00015170) call_type_pane_cp023

0xa707,	// (0x00015178) popup_call_audio_wait_window_g1

0xa70f,	// (0x00015180) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00019bcf) popup_call_audio_wait_window_g

0xa717,	// (0x00015188) popup_call_audio_wait_window_t3

0xa725,	// (0x00015196) bg_popup_call_pane_cp03_ParamLimits

0xa725,	// (0x00015196) bg_popup_call_pane_cp03

0xa785,	// (0x000151f6) call_thumbnail_pane_cp011_ParamLimits

0xa785,	// (0x000151f6) call_thumbnail_pane_cp011

0xa791,	// (0x00015202) call_type_pane_cp034_ParamLimits

0xa791,	// (0x00015202) call_type_pane_cp034

0xa7cd,	// (0x0001523e) popup_call_audio_second_window_g1_ParamLimits

0xa7cd,	// (0x0001523e) popup_call_audio_second_window_g1

0xa809,	// (0x0001527a) popup_call_audio_second_window_g2_ParamLimits

0xa809,	// (0x0001527a) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00019bd4) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00019bd4) popup_call_audio_second_window_g

0xa845,	// (0x000152b6) popup_call_audio_second_window_t1_ParamLimits

0xa845,	// (0x000152b6) popup_call_audio_second_window_t1

0xa8c6,	// (0x00015337) popup_call_audio_second_window_t2_ParamLimits

0xa8c6,	// (0x00015337) popup_call_audio_second_window_t2

0xa8fc,	// (0x0001536d) popup_call_audio_second_window_t3_ParamLimits

0xa8fc,	// (0x0001536d) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00019bd9) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00019bd9) popup_call_audio_second_window_t

0xa6f5,	// (0x00015166) bg_popup_call_pane_cp04

0xa932,	// (0x000153a3) list_conf_pane

0xa93a,	// (0x000153ab) popup_call_audio_conf_window_t1

0xa948,	// (0x000153b9) call_thumbnail_pane_g1

0xa950,	// (0x000153c1) bg_pinb_pane_ParamLimits

0xa950,	// (0x000153c1) bg_pinb_pane

0xa95e,	// (0x000153cf) find_pinb_pane

0xa967,	// (0x000153d8) listscroll_pinb_pane_ParamLimits

0xa967,	// (0x000153d8) listscroll_pinb_pane

0xa976,	// (0x000153e7) pinb_bg_pane_g1

0x2c0e,	// (0x0000d67f) pinb_bg_pane_g2

0x2c18,	// (0x0000d689) pinb_bg_pane_g3

0x2c22,	// (0x0000d693) pinb_bg_pane_g4

0x2c2c,	// (0x0000d69d) pinb_bg_pane_g5

0x2c36,	// (0x0000d6a7) pinb_bg_pane_g6

0x2c3f,	// (0x0000d6b0) pinb_bg_pane_g7

0x2c48,	// (0x0000d6b9) pinb_bg_pane_g8

0x2c53,	// (0x0000d6c4) pinb_bg_pane_g9

0x2c5d,	// (0x0000d6ce) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00019be0) pinb_bg_pane_g

0x2c78,	// (0x0000d6e9) grid_pinb_pane

0x2c81,	// (0x0000d6f2) list_pinb_pane

0x2c8a,	// (0x0000d6fb) scroll_pane_cp01_ParamLimits

0x2c8a,	// (0x0000d6fb) scroll_pane_cp01

0xa980,	// (0x000153f1) find_pinb_pane_g1_ParamLimits

0xa980,	// (0x000153f1) find_pinb_pane_g1

0xa998,	// (0x00015409) find_pinb_pane_t1

0xa9aa,	// (0x0001541b) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00019bfa) find_pinb_pane_t

0xa9bf,	// (0x00015430) input_focus_pane_cp01_ParamLimits

0xa9bf,	// (0x00015430) input_focus_pane_cp01

0x2c9c,	// (0x0000d70d) cell_pinb_pane_ParamLimits

0x2c9c,	// (0x0000d70d) cell_pinb_pane

0x2cb7,	// (0x0000d728) cell_pinb_pane_g1_ParamLimits

0x2cb7,	// (0x0000d728) cell_pinb_pane_g1

0x2cc7,	// (0x0000d738) cell_pinb_pane_g2_ParamLimits

0x2cc7,	// (0x0000d738) cell_pinb_pane_g2

0xa9cb,	// (0x0001543c) cell_pinb_pane_g3_ParamLimits

0xa9cb,	// (0x0001543c) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00019bff) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00019bff) cell_pinb_pane_g

0xa6f5,	// (0x00015166) grid_highlight_pane_cp01

0x2cd3,	// (0x0000d744) list_pinb_item_pane_ParamLimits

0x2cd3,	// (0x0000d744) list_pinb_item_pane

0xa6f5,	// (0x00015166) list_highlight_pane_cp02

0x2ce5,	// (0x0000d756) list_pinb_item_pane_g1_ParamLimits

0x2ce5,	// (0x0000d756) list_pinb_item_pane_g1

0x2cf2,	// (0x0000d763) list_pinb_item_pane_g2_ParamLimits

0x2cf2,	// (0x0000d763) list_pinb_item_pane_g2

0x2cfe,	// (0x0000d76f) list_pinb_item_pane_g3_ParamLimits

0x2cfe,	// (0x0000d76f) list_pinb_item_pane_g3

0x2d0f,	// (0x0000d780) list_pinb_item_pane_g4_ParamLimits

0x2d0f,	// (0x0000d780) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00019c06) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00019c06) list_pinb_item_pane_g

0x2d1b,	// (0x0000d78c) list_pinb_item_pane_t1_ParamLimits

0x2d1b,	// (0x0000d78c) list_pinb_item_pane_t1

0x2d50,	// (0x0000d7c1) calc_display_pane

0x2d6c,	// (0x0000d7dd) calc_paper_pane

0x2d8d,	// (0x0000d7fe) grid_calc_pane

0xa6f5,	// (0x00015166) bg_list_pane_cp01

0x2da9,	// (0x0000d81a) clock_g1

0x2db1,	// (0x0000d822) clock_g2

0x0001,

0xf19e,	// (0x00019c0f) clock_g

0x2db9,	// (0x0000d82a) clock_t1_ParamLimits

0x2db9,	// (0x0000d82a) clock_t1

0x2dce,	// (0x0000d83f) clock_t2_ParamLimits

0x2dce,	// (0x0000d83f) clock_t2

0x2de0,	// (0x0000d851) clock_t3_ParamLimits

0x2de0,	// (0x0000d851) clock_t3

0x2df2,	// (0x0000d863) clock_t4_ParamLimits

0x2df2,	// (0x0000d863) clock_t4

0x2e04,	// (0x0000d875) clock_t5_ParamLimits

0x2e04,	// (0x0000d875) clock_t5

0x2e19,	// (0x0000d88a) clock_t6_ParamLimits

0x2e19,	// (0x0000d88a) clock_t6

0x2e2b,	// (0x0000d89c) clock_t7_ParamLimits

0x2e2b,	// (0x0000d89c) clock_t7

0x2e3d,	// (0x0000d8ae) clock_t8_ParamLimits

0x2e3d,	// (0x0000d8ae) clock_t8

0x2e4f,	// (0x0000d8c0) clock_t9_ParamLimits

0x2e4f,	// (0x0000d8c0) clock_t9

0x0008,

0xf1a3,	// (0x00019c14) clock_t_ParamLimits

0xf1a3,	// (0x00019c14) clock_t

0xa9df,	// (0x00015450) popup_clock_analogue_window_cp02

0xa9df,	// (0x00015450) popup_clock_digital_window_cp01

0xa9e7,	// (0x00015458) listscroll_help_pane

0xa6f5,	// (0x00015166) phob_pre_status_pane

0xa9f1,	// (0x00015462) grid_qdial_pane

0xa6f5,	// (0x00015166) listscroll_mce_pane

0xa9fb,	// (0x0001546c) bg_notes_pane

0xaa05,	// (0x00015476) list_notes_pane

0x2e61,	// (0x0000d8d2) scroll_pane_cp06

0xaa0f,	// (0x00015480) bg_calc_paper_pane

0xaa27,	// (0x00015498) list_calc_pane

0xaa41,	// (0x000154b2) bg_calc_display_pane

0xaa4d,	// (0x000154be) calc_display_pane_t1

0xaa62,	// (0x000154d3) calc_display_pane_t2

0xaa77,	// (0x000154e8) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00019c27) calc_display_pane_t

0x2e6c,	// (0x0000d8dd) cell_calc_pane_ParamLimits

0x2e6c,	// (0x0000d8dd) cell_calc_pane

0xaa89,	// (0x000154fa) bg_calc_paper_pane_g1

0xaa95,	// (0x00015506) bg_calc_paper_pane_g2

0xaaa1,	// (0x00015512) bg_calc_paper_pane_g3

0xaaad,	// (0x0001551e) bg_calc_paper_pane_g4

0xaab9,	// (0x0001552a) bg_calc_paper_pane_g5

0x2e9f,	// (0x0000d910) bg_calc_paper_pane_g6

0x2eae,	// (0x0000d91f) bg_calc_paper_pane_g7

0x2ebd,	// (0x0000d92e) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00019c2e) bg_calc_paper_pane_g

0x2ecc,	// (0x0000d93d) calc_bg_paper_pane_g9

0x2edb,	// (0x0000d94c) list_calc_item_pane_ParamLimits

0x2edb,	// (0x0000d94c) list_calc_item_pane

0xaac5,	// (0x00015536) list_calc_item_pane_g1

0xaad2,	// (0x00015543) list_calc_item_pane_t1_ParamLimits

0xaad2,	// (0x00015543) list_calc_item_pane_t1

0x2eef,	// (0x0000d960) list_calc_item_pane_t2_ParamLimits

0x2eef,	// (0x0000d960) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00019c3f) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00019c3f) list_calc_item_pane_t

0xaae4,	// (0x00015555) cell_calc_pane_g1

0xaaee,	// (0x0001555f) grid_highlight_pane_cp02

0xab10,	// (0x00015581) bg_calc_display_pane_g1

0xab19,	// (0x0001558a) bg_calc_display_pane_g2

0xab23,	// (0x00015594) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00019c49) bg_calc_display_pane_g

0x2f1d,	// (0x0000d98e) cell_qdial_pane_ParamLimits

0x2f1d,	// (0x0000d98e) cell_qdial_pane

0x2f2f,	// (0x0000d9a0) cell_qdial_pane_g1_ParamLimits

0x2f2f,	// (0x0000d9a0) cell_qdial_pane_g1

0x2f45,	// (0x0000d9b6) cell_qdial_pane_g2_ParamLimits

0x2f45,	// (0x0000d9b6) cell_qdial_pane_g2

0xab2c,	// (0x0001559d) cell_qdial_pane_g3_ParamLimits

0xab2c,	// (0x0001559d) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00019c50) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00019c50) cell_qdial_pane_g

0x2f6c,	// (0x0000d9dd) cell_qdial_pane_t1_ParamLimits

0x2f6c,	// (0x0000d9dd) cell_qdial_pane_t1

0x2f84,	// (0x0000d9f5) cell_qdial_pane_t2_ParamLimits

0x2f84,	// (0x0000d9f5) cell_qdial_pane_t2

0x2f97,	// (0x0000da08) cell_qdial_pane_t3_ParamLimits

0x2f97,	// (0x0000da08) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00019c59) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00019c59) cell_qdial_pane_t

0xa6f5,	// (0x00015166) grid_highlight_pane_cp04

0xab38,	// (0x000155a9) thumbnail_qdial_pane_ParamLimits

0xab38,	// (0x000155a9) thumbnail_qdial_pane

0xab94,	// (0x00015605) list_help_pane

0xab9e,	// (0x0001560f) scroll_pane_cp02

0x2faa,	// (0x0000da1b) help_list_pane_t1_ParamLimits

0x2faa,	// (0x0000da1b) help_list_pane_t1

0xaba7,	// (0x00015618) bg_notes_pane_g2

0xabaf,	// (0x00015620) bg_notes_pane_g3

0xabb7,	// (0x00015628) notes_bg_pane_g1

0xabbf,	// (0x00015630) notes_bg_pane_g4

0xabc7,	// (0x00015638) notes_bg_pane_g5

0xabcf,	// (0x00015640) notes_bg_pane_g6

0xabd7,	// (0x00015648) notes_bg_pane_g7

0xabdf,	// (0x00015650) notes_bg_pane_g8

0xabe7,	// (0x00015658) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00019c77) notes_bg_pane_g

0xd017,	// (0x00017a88) list_notes_text_pane_ParamLimits

0xd017,	// (0x00017a88) list_notes_text_pane

0xabef,	// (0x00015660) list_notes_text_pane_g1

0x2fc6,	// (0x0000da37) list_notes_text_pane_t1

0xac09,	// (0x0001567a) listscroll_cale_week_pane

0x2fef,	// (0x0000da60) bg_cale_heading_pane

0xac18,	// (0x00015689) bg_cale_pane_cp01

0x3003,	// (0x0000da74) cale_week_corner_pane

0x3019,	// (0x0000da8a) cale_week_day_heading_pane

0x302d,	// (0x0000da9e) cale_week_scroll_pane_g1

0x303e,	// (0x0000daaf) cale_week_scroll_pane_g2

0x304f,	// (0x0000dac0) cale_week_scroll_pane_g3

0x3060,	// (0x0000dad1) cale_week_scroll_pane_g4

0x3071,	// (0x0000dae2) cale_week_scroll_pane_g5

0x3082,	// (0x0000daf3) cale_week_scroll_pane_g6

0x3093,	// (0x0000db04) cale_week_scroll_pane_g7

0x30a4,	// (0x0000db15) cale_week_scroll_pane_g8

0x30b7,	// (0x0000db28) cale_week_scroll_pane_g9

0x30c8,	// (0x0000db39) cale_week_scroll_pane_g10

0x30d9,	// (0x0000db4a) cale_week_scroll_pane_g11

0x30ea,	// (0x0000db5b) cale_week_scroll_pane_g12

0x30fb,	// (0x0000db6c) cale_week_scroll_pane_g13

0x310c,	// (0x0000db7d) cale_week_scroll_pane_g14

0x311d,	// (0x0000db8e) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00019c86) cale_week_scroll_pane_g

0x312e,	// (0x0000db9f) cale_week_time_pane

0x3141,	// (0x0000dbb2) grid_cale_week_pane

0x3154,	// (0x0000dbc5) scroll_pane_cp08

0x316e,	// (0x0000dbdf) cell_cale_week_pane_ParamLimits

0x316e,	// (0x0000dbdf) cell_cale_week_pane

0x31aa,	// (0x0000dc1b) cale_week_day_heading_pane_t1

0x31d4,	// (0x0000dc45) cale_week_day_heading_pane_t2

0x31fe,	// (0x0000dc6f) cale_week_day_heading_pane_t3

0x3228,	// (0x0000dc99) cale_week_day_heading_pane_t4

0x3252,	// (0x0000dcc3) cale_week_day_heading_pane_t5

0x327c,	// (0x0000dced) cale_week_day_heading_pane_t6

0x32a6,	// (0x0000dd17) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00019ca5) cale_week_day_heading_pane_t

0xac43,	// (0x000156b4) bg_cale_side_pane

0x32d0,	// (0x0000dd41) cale_week_time_pane_t1

0x32fc,	// (0x0000dd6d) cale_week_time_pane_t2

0x3328,	// (0x0000dd99) cale_week_time_pane_t3

0x3354,	// (0x0000ddc5) cale_week_time_pane_t4

0x3380,	// (0x0000ddf1) cale_week_time_pane_t5

0x33ac,	// (0x0000de1d) cale_week_time_pane_t6

0x33d8,	// (0x0000de49) cale_week_time_pane_t7

0x3404,	// (0x0000de75) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00019cb4) cale_week_time_pane_t

0x3430,	// (0x0000dea1) cell_cale_week_pane_g2

0x3449,	// (0x0000deba) cell_cale_week_pane_g3_ParamLimits

0x3449,	// (0x0000deba) cell_cale_week_pane_g3

0xac51,	// (0x000156c2) grid_highlight_pane_cp07

0xac59,	// (0x000156ca) listscroll_gms_pane

0xac63,	// (0x000156d4) grid_gms_pane

0xac6c,	// (0x000156dd) listscroll_gms_pane_g1

0xac74,	// (0x000156e5) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00019cc5) listscroll_gms_pane_g

0x3461,	// (0x0000ded2) scroll_pane_cp010

0x346c,	// (0x0000dedd) cell_gms_pane_ParamLimits

0x346c,	// (0x0000dedd) cell_gms_pane

0x347c,	// (0x0000deed) cell_gms_pane_g1

0xac7c,	// (0x000156ed) cell_gms_pane_g2

0xabef,	// (0x00015660) cell_gms_pane_g3

0xac84,	// (0x000156f5) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00019cca) cell_gms_pane_g

0xac8d,	// (0x000156fe) grid_highlight_pane_cp09

0x51cb,	// (0x0000fc3c) phob_pre_status_pane_g1

0x51d3,	// (0x0000fc44) phob_pre_status_pane_g2

0x51db,	// (0x0000fc4c) phob_pre_status_pane_g3

0x51e3,	// (0x0000fc54) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x0001a0cc) phob_pre_status_pane_g

0x51f3,	// (0x0000fc64) phob_pre_status_pane_t1

0x5201,	// (0x0000fc72) phob_pre_status_pane_t2

0x520f,	// (0x0000fc80) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x0001a0d7) phob_pre_status_pane_t

0xa6f5,	// (0x00015166) bg_list_pane_cp05

0x348c,	// (0x0000defd) grid_vorec_pane

0xac95,	// (0x00015706) vorec_t1

0xaca3,	// (0x00015714) vorec_t2

0xacb1,	// (0x00015722) vorec_t3

0xacbf,	// (0x00015730) vorec_t4

0xaccd,	// (0x0001573e) vorec_t5

0xacdb,	// (0x0001574c) vorec_t6

0x0006,

0xf262,	// (0x00019cd3) vorec_t

0xacf7,	// (0x00015768) wait_bar_pane_cp01

0x3494,	// (0x0000df05) cell_vorec_pane_ParamLimits

0x3494,	// (0x0000df05) cell_vorec_pane

0xacff,	// (0x00015770) cell_vorec_pane_g1

0xa6f5,	// (0x00015166) grid_highlight_pane_cp05

0x34b9,	// (0x0000df2a) cams_zoom_pane

0x34c8,	// (0x0000df39) image_vga_pane

0x34e0,	// (0x0000df51) main_camera_pane_g1

0x34f0,	// (0x0000df61) main_camera_pane_g2

0x3500,	// (0x0000df71) main_camera_pane_g3

0x3510,	// (0x0000df81) main_camera_pane_g4

0x3520,	// (0x0000df91) main_camera_pane_g5

0x3530,	// (0x0000dfa1) main_camera_pane_g6

0x3540,	// (0x0000dfb1) main_camera_pane_g7

0x0007,

0xf271,	// (0x00019ce2) main_camera_pane_g

0x3550,	// (0x0000dfc1) main_camera_pane_t1

0x3566,	// (0x0000dfd7) main_camera_pane_t2

0x0001,

0xf282,	// (0x00019cf3) main_camera_pane_t

0x3598,	// (0x0000e009) cams_zoom_pane_cp_ParamLimits

0x3598,	// (0x0000e009) cams_zoom_pane_cp

0x35c0,	// (0x0000e031) image_cif_pane_ParamLimits

0x35c0,	// (0x0000e031) image_cif_pane

0x35f1,	// (0x0000e062) image_subqcif_pane

0x35f9,	// (0x0000e06a) main_video_pane_g1_ParamLimits

0x35f9,	// (0x0000e06a) main_video_pane_g1

0x361d,	// (0x0000e08e) main_video_pane_g2_ParamLimits

0x361d,	// (0x0000e08e) main_video_pane_g2

0x3651,	// (0x0000e0c2) main_video_pane_g3_ParamLimits

0x3651,	// (0x0000e0c2) main_video_pane_g3

0x367f,	// (0x0000e0f0) main_video_pane_g4_ParamLimits

0x367f,	// (0x0000e0f0) main_video_pane_g4

0x36ad,	// (0x0000e11e) main_video_pane_g5_ParamLimits

0x36ad,	// (0x0000e11e) main_video_pane_g5

0xad15,	// (0x00015786) main_video_pane_g6_ParamLimits

0xad15,	// (0x00015786) main_video_pane_g6

0x0006,

0xf287,	// (0x00019cf8) main_video_pane_g_ParamLimits

0xf287,	// (0x00019cf8) main_video_pane_g

0x36d4,	// (0x0000e145) main_video_pane_t1_ParamLimits

0x36d4,	// (0x0000e145) main_video_pane_t1

0xad2f,	// (0x000157a0) cams_zoom_pane_g1

0xad38,	// (0x000157a9) cams_zoom_pane_g2

0xad41,	// (0x000157b2) cams_zoom_pane_g3

0xad4a,	// (0x000157bb) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00019d07) cams_zoom_pane_g

0x3731,	// (0x0000e1a2) grid_cams_pane

0x3746,	// (0x0000e1b7) linegrid_cams_pane

0x3757,	// (0x0000e1c8) cell_cams_pane_ParamLimits

0x3757,	// (0x0000e1c8) cell_cams_pane

0xad53,	// (0x000157c4) cams_burst_image_pane

0xad5b,	// (0x000157cc) cell_cams_pane_g1

0xa6f5,	// (0x00015166) grid_highlight_pane_cp03

0xaae4,	// (0x00015555) mp_bg_pane_g1

0xa6f5,	// (0x00015166) bg_list_pane_cp03

0xccc9,	// (0x0001773a) bg_mp_pane

0xccd1,	// (0x00017742) grid_mp_pane

0xccd9,	// (0x0001774a) media_player_g1

0xcce1,	// (0x00017752) media_player_t1

0xccef,	// (0x00017760) media_player_t2

0xccfd,	// (0x0001776e) media_player_t3

0xcd0b,	// (0x0001777c) media_player_t4

0xcd19,	// (0x0001778a) media_player_t5

0xcd27,	// (0x00017798) media_player_t6

0xcd35,	// (0x000177a6) media_player_t7

0x0006,

0xf645,	// (0x0001a0b6) media_player_t

0xcd43,	// (0x000177b4) wait_bar_pane_cp02

0xf62a,	// (0x0001a09b) main_usb_pane_t

0x51c2,	// (0x0000fc33) cell_mp_pane

0xaae4,	// (0x00015555) cell_mp_pane_g1

0xa6f5,	// (0x00015166) grid_highlight_pane_cp06

0xae03,	// (0x00015874) grid_skin_colour_pane

0xae0b,	// (0x0001587c) list_highlight_pane_cp03

0x37c5,	// (0x0000e236) skin_g1

0xae13,	// (0x00015884) skin_t1

0xae22,	// (0x00015893) skin_t2

0x0001,

0xf2cb,	// (0x00019d3c) skin_t

0x37cd,	// (0x0000e23e) cell_skin_colour_pane_ParamLimits

0x37cd,	// (0x0000e23e) cell_skin_colour_pane

0xae30,	// (0x000158a1) cell_skin_colour_pane_g1

0x381f,	// (0x0000e290) call_video_g1_ParamLimits

0x381f,	// (0x0000e290) call_video_g1

0x3835,	// (0x0000e2a6) call_video_g2_ParamLimits

0x3835,	// (0x0000e2a6) call_video_g2

0x0001,

0xf2d0,	// (0x00019d41) call_video_g_ParamLimits

0xf2d0,	// (0x00019d41) call_video_g

0x386b,	// (0x0000e2dc) call_video_uplink_pane_cp1_ParamLimits

0x386b,	// (0x0000e2dc) call_video_uplink_pane_cp1

0xae4a,	// (0x000158bb) call_video_uplink_pane_cp2

0x38d2,	// (0x0000e343) video_down_crop_pane_ParamLimits

0x38d2,	// (0x0000e343) video_down_crop_pane

0x397a,	// (0x0000e3eb) video_down_pane_ParamLimits

0x397a,	// (0x0000e3eb) video_down_pane

0xae52,	// (0x000158c3) video_down_subqcif_pane_ParamLimits

0xae52,	// (0x000158c3) video_down_subqcif_pane

0xae6a,	// (0x000158db) video_down_subqcif_pane_cp_ParamLimits

0xae6a,	// (0x000158db) video_down_subqcif_pane_cp

0xae8e,	// (0x000158ff) im_reading_pane_ParamLimits

0xae8e,	// (0x000158ff) im_reading_pane

0x3a0a,	// (0x0000e47b) im_writing_pane_ParamLimits

0x3a0a,	// (0x0000e47b) im_writing_pane

0x3a20,	// (0x0000e491) im_reading_pane_t1

0xaea8,	// (0x00015919) list_im_pane

0xaeb9,	// (0x0001592a) scroll_pane_cp07

0x3a56,	// (0x0000e4c7) im_writing_pane_t1_ParamLimits

0x3a56,	// (0x0000e4c7) im_writing_pane_t1

0xaed2,	// (0x00015943) im_writing_pane_t2_ParamLimits

0xaed2,	// (0x00015943) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00019d4b) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00019d4b) im_writing_pane_t

0xa6f5,	// (0x00015166) input_focus_pane_cp04

0xa6f5,	// (0x00015166) input_focus_pane_cp05

0x3a6b,	// (0x0000e4dc) list_im_single_pane_ParamLimits

0x3a6b,	// (0x0000e4dc) list_im_single_pane

0xaeef,	// (0x00015960) list_single_im_pane_t1

0x5188,	// (0x0000fbf9) blid_accuracy_pane

0x5190,	// (0x0000fc01) blid_compass_pane

0x5198,	// (0x0000fc09) main_location_t1

0x51a6,	// (0x0000fc17) main_location_t2

0x51b4,	// (0x0000fc25) main_location_t3

0x0002,

0xf654,	// (0x0001a0c5) main_location_t

0xa6f5,	// (0x00015166) aid_levels_location

0xaae4,	// (0x00015555) blid_accuracy_pane_g1

0xaae4,	// (0x00015555) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00019dad) blid_accuracy_pane_g

0xaf29,	// (0x0001599a) wml_content_pane

0xaf67,	// (0x000159d8) wml_button_pane_ParamLimits

0xaf67,	// (0x000159d8) wml_button_pane

0x3a81,	// (0x0000e4f2) wml_list_single_large_pane_ParamLimits

0x3a81,	// (0x0000e4f2) wml_list_single_large_pane

0x3a95,	// (0x0000e506) wml_list_single_medium_pane_ParamLimits

0x3a95,	// (0x0000e506) wml_list_single_medium_pane

0x3aaa,	// (0x0000e51b) wml_list_single_small_pane_ParamLimits

0x3aaa,	// (0x0000e51b) wml_list_single_small_pane

0xaf7b,	// (0x000159ec) wml_selection_box_pane_ParamLimits

0xaf7b,	// (0x000159ec) wml_selection_box_pane

0xaf8e,	// (0x000159ff) wml_list_single_pane_t1

0xaf9d,	// (0x00015a0e) wml_list_single_medium_pane_t1

0xafac,	// (0x00015a1d) wml_list_single_large_pane_t1

0xafbb,	// (0x00015a2c) input_focus_pane_cp02_ParamLimits

0xafbb,	// (0x00015a2c) input_focus_pane_cp02

0xafce,	// (0x00015a3f) wml_selection_box_pane_g1

0xafd7,	// (0x00015a48) wml_selection_box_pane_t1_ParamLimits

0xafd7,	// (0x00015a48) wml_selection_box_pane_t1

0xa950,	// (0x000153c1) bg_wml_button_pane_ParamLimits

0xa950,	// (0x000153c1) bg_wml_button_pane

0xafef,	// (0x00015a60) wml_button_pane_g1

0xaff7,	// (0x00015a68) wml_button_pane_t1

0xafef,	// (0x00015a60) wml_button_bg_pane_g1

0xb007,	// (0x00015a78) wml_button_bg_pane_g2

0xb00f,	// (0x00015a80) wml_button_bg_pane_g3

0xb017,	// (0x00015a88) wml_button_bg_pane_g4

0xb01f,	// (0x00015a90) wml_button_bg_pane_g5

0xb027,	// (0x00015a98) wml_button_bg_pane_g6

0xb02f,	// (0x00015aa0) wml_button_bg_pane_g7

0xb037,	// (0x00015aa8) wml_button_bg_pane_g8

0xb03f,	// (0x00015ab0) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00019d50) wml_button_bg_pane_g

0x3ac1,	// (0x0000e532) bg_list_pane_cp02

0xb047,	// (0x00015ab8) mce_header_pane_ParamLimits

0xb047,	// (0x00015ab8) mce_header_pane

0xb05b,	// (0x00015acc) mce_icon_pane

0xb05b,	// (0x00015acc) mce_image_pane

0xb064,	// (0x00015ad5) mce_text_pane_ParamLimits

0xb064,	// (0x00015ad5) mce_text_pane

0x3aca,	// (0x0000e53b) scroll_pane_cp03

0x3aca,	// (0x0000e53b) scroll_pane_cp04

0xb078,	// (0x00015ae9) scroll_pane_cp05_ParamLimits

0xb078,	// (0x00015ae9) scroll_pane_cp05

0x3ad4,	// (0x0000e545) mce_header_field_pane_ParamLimits

0x3ad4,	// (0x0000e545) mce_header_field_pane

0x3aeb,	// (0x0000e55c) mce_header_field_pane_2_ParamLimits

0x3aeb,	// (0x0000e55c) mce_header_field_pane_2

0x3b01,	// (0x0000e572) mce_header_field_pane_3

0x3b09,	// (0x0000e57a) list_single_mce_message_pane_ParamLimits

0x3b09,	// (0x0000e57a) list_single_mce_message_pane

0x3b1e,	// (0x0000e58f) list_single_mce_smart_pane_ParamLimits

0x3b1e,	// (0x0000e58f) list_single_mce_smart_pane

0xb084,	// (0x00015af5) input_focus_pane_cp03

0xb08d,	// (0x00015afe) list_header_data_pane

0x3b3e,	// (0x0000e5af) mce_header_field_pane_t1

0x3b4c,	// (0x0000e5bd) list_single_mce_header_pane_ParamLimits

0x3b4c,	// (0x0000e5bd) list_single_mce_header_pane

0xb095,	// (0x00015b06) list_single_mce_header_pane_t1

0xb0a4,	// (0x00015b15) list_single_mce_message_pane_g1

0xb0ad,	// (0x00015b1e) list_single_mce_message_pane_t1

0x3b7e,	// (0x0000e5ef) bg_cale_heading_pane_cp01_ParamLimits

0x3b7e,	// (0x0000e5ef) bg_cale_heading_pane_cp01

0xb0bc,	// (0x00015b2d) bg_cale_pane_cp02_ParamLimits

0xb0bc,	// (0x00015b2d) bg_cale_pane_cp02

0x3ba1,	// (0x0000e612) cale_month_corner_pane

0x3bb7,	// (0x0000e628) cale_month_day_heading_pane_ParamLimits

0x3bb7,	// (0x0000e628) cale_month_day_heading_pane

0x3bea,	// (0x0000e65b) cale_month_pane_g1_ParamLimits

0x3bea,	// (0x0000e65b) cale_month_pane_g1

0x3c06,	// (0x0000e677) cale_month_pane_g2_ParamLimits

0x3c06,	// (0x0000e677) cale_month_pane_g2

0x3c21,	// (0x0000e692) cale_month_pane_g3_ParamLimits

0x3c21,	// (0x0000e692) cale_month_pane_g3

0x3c4d,	// (0x0000e6be) cale_month_pane_g4_ParamLimits

0x3c4d,	// (0x0000e6be) cale_month_pane_g4

0x3c79,	// (0x0000e6ea) cale_month_pane_g5_ParamLimits

0x3c79,	// (0x0000e6ea) cale_month_pane_g5

0x3ca5,	// (0x0000e716) cale_month_pane_g6_ParamLimits

0x3ca5,	// (0x0000e716) cale_month_pane_g6

0x3cd1,	// (0x0000e742) cale_month_pane_g7_ParamLimits

0x3cd1,	// (0x0000e742) cale_month_pane_g7

0x3cfd,	// (0x0000e76e) cale_month_pane_g8_ParamLimits

0x3cfd,	// (0x0000e76e) cale_month_pane_g8

0x3d39,	// (0x0000e7aa) cale_month_pane_g9_ParamLimits

0x3d39,	// (0x0000e7aa) cale_month_pane_g9

0x3d73,	// (0x0000e7e4) cale_month_pane_g10_ParamLimits

0x3d73,	// (0x0000e7e4) cale_month_pane_g10

0x3dad,	// (0x0000e81e) cale_month_pane_g11_ParamLimits

0x3dad,	// (0x0000e81e) cale_month_pane_g11

0x3de7,	// (0x0000e858) cale_month_pane_g12_ParamLimits

0x3de7,	// (0x0000e858) cale_month_pane_g12

0x3e21,	// (0x0000e892) cale_month_pane_g13_ParamLimits

0x3e21,	// (0x0000e892) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00019d63) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00019d63) cale_month_pane_g

0x3e5b,	// (0x0000e8cc) cale_month_week_pane

0x3e6e,	// (0x0000e8df) grid_cale_month_pane_ParamLimits

0x3e6e,	// (0x0000e8df) grid_cale_month_pane

0x3e9c,	// (0x0000e90d) cale_month_day_heading_pane_t1

0x3efa,	// (0x0000e96b) cale_month_day_heading_pane_t2

0x3f5f,	// (0x0000e9d0) cale_month_day_heading_pane_t3

0x3fc4,	// (0x0000ea35) cale_month_day_heading_pane_t4

0x4029,	// (0x0000ea9a) cale_month_day_heading_pane_t5

0x408e,	// (0x0000eaff) cale_month_day_heading_pane_t6

0x40f3,	// (0x0000eb64) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00019d7e) cale_month_day_heading_pane_t

0xac43,	// (0x000156b4) bg_cale_side_pane_cp01

0x4160,	// (0x0000ebd1) cale_month_week_pane_t1

0x4177,	// (0x0000ebe8) cale_month_week_pane_t2

0x418e,	// (0x0000ebff) cale_month_week_pane_t3

0x41a5,	// (0x0000ec16) cale_month_week_pane_t4

0x41bc,	// (0x0000ec2d) cale_month_week_pane_t5

0x41d3,	// (0x0000ec44) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00019d8d) cale_month_week_pane_t

0x41ea,	// (0x0000ec5b) cell_cale_month_pane_ParamLimits

0x41ea,	// (0x0000ec5b) cell_cale_month_pane

0xb11b,	// (0x00015b8c) cell_cale_month_pane_g1

0x4298,	// (0x0000ed09) cell_cale_month_pane_t1_ParamLimits

0x4298,	// (0x0000ed09) cell_cale_month_pane_t1

0xac51,	// (0x000156c2) grid_highlight_pane_cp08

0xaae4,	// (0x00015555) main_smil_g1

0x42b4,	// (0x0000ed25) smil_status_pane

0xb127,	// (0x00015b98) smil_text_pane

0xcba9,	// (0x0001761a) bg_popup_call3_rect_pane_g8

0xcbb1,	// (0x00017622) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0001a046) bg_popup_call3_rect_pane_g

0xce67,	// (0x000178d8) smil_status_volume_pane_g1

0xb131,	// (0x00015ba2) smil_status_pane_t1

0xce9a,	// (0x0001790b) volume_smil_pane

0xb148,	// (0x00015bb9) list_smil_text_pane

0x42c5,	// (0x0000ed36) scroll_pane_cp011

0x42d0,	// (0x0000ed41) smil_text_list_pane_t1_ParamLimits

0x42d0,	// (0x0000ed41) smil_text_list_pane_t1

0xb152,	// (0x00015bc3) aid_volume_smil_ParamLimits

0xb152,	// (0x00015bc3) aid_volume_smil

0xaae4,	// (0x00015555) smil_volume_pane_g1

0xaae4,	// (0x00015555) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00019dad) smil_volume_pane_g

0xaa41,	// (0x000154b2) listscroll_cale_day_pane

0xb174,	// (0x00015be5) bg_cale_pane

0xb18c,	// (0x00015bfd) list_cale_pane

0xb19d,	// (0x00015c0e) scroll_pane_cp09

0xb1ae,	// (0x00015c1f) cale_bg_pane_g1

0xb1b6,	// (0x00015c27) cale_bg_pane_g2

0xb1be,	// (0x00015c2f) cale_bg_pane_g3

0xb1c6,	// (0x00015c37) cale_bg_pane_g4

0xb1ce,	// (0x00015c3f) cale_bg_pane_g5

0xb1d6,	// (0x00015c47) cale_bg_pane_g6

0xb1de,	// (0x00015c4f) cale_bg_pane_g7

0xb1e6,	// (0x00015c57) cale_bg_pane_g8

0xb1ee,	// (0x00015c5f) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00019db2) cale_bg_pane_g

0x430e,	// (0x0000ed7f) list_cale_time_pane_ParamLimits

0x430e,	// (0x0000ed7f) list_cale_time_pane

0xb1f6,	// (0x00015c67) list_cale_time_pane_g1_ParamLimits

0xb1f6,	// (0x00015c67) list_cale_time_pane_g1

0xb202,	// (0x00015c73) list_cale_time_pane_g2_ParamLimits

0xb202,	// (0x00015c73) list_cale_time_pane_g2

0x4323,	// (0x0000ed94) list_cale_time_pane_g3_ParamLimits

0x4323,	// (0x0000ed94) list_cale_time_pane_g3

0x4331,	// (0x0000eda2) list_cale_time_pane_g4_ParamLimits

0x4331,	// (0x0000eda2) list_cale_time_pane_g4

0x433f,	// (0x0000edb0) list_cale_time_pane_g5_ParamLimits

0x433f,	// (0x0000edb0) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00019dc5) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00019dc5) list_cale_time_pane_g

0xb21c,	// (0x00015c8d) list_cale_time_pane_t1_ParamLimits

0xb21c,	// (0x00015c8d) list_cale_time_pane_t1

0xb244,	// (0x00015cb5) list_cale_time_pane_t2_ParamLimits

0xb244,	// (0x00015cb5) list_cale_time_pane_t2

0x4643,	// (0x0000f0b4) aid_blid_cardinal_pane

0x4681,	// (0x0000f0f2) compass_pane_t4

0xb26c,	// (0x00015cdd) list_cale_time_pane_t4_ParamLimits

0xb26c,	// (0x00015cdd) list_cale_time_pane_t4

0x468f,	// (0x0000f100) compass_pane_t5

0x469d,	// (0x0000f10e) compass_pane_t6

0x46ab,	// (0x0000f11c) compass_pane_t7

0xb7b1,	// (0x00016222) navi_pane_cc_t1

0xb967,	// (0x000163d8) aid_phob_thumbnail_center_pane

0x4c3a,	// (0x0000f6ab) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00019dd2) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00019dd2) list_cale_time_pane_t

0xa34e,	// (0x00014dbf) bg_popup_window_pane_cp02_ParamLimits

0xa34e,	// (0x00014dbf) bg_popup_window_pane_cp02

0xb294,	// (0x00015d05) heading_pane_cp01_ParamLimits

0xb294,	// (0x00015d05) heading_pane_cp01

0xb2a0,	// (0x00015d11) loc_req_pane_ParamLimits

0xb2a0,	// (0x00015d11) loc_req_pane

0xb2b0,	// (0x00015d21) loc_type_pane_ParamLimits

0xb2b0,	// (0x00015d21) loc_type_pane

0xb2c2,	// (0x00015d33) loc_type_pane_t1_ParamLimits

0xb2c2,	// (0x00015d33) loc_type_pane_t1

0xb2d4,	// (0x00015d45) loc_type_pane_t2_ParamLimits

0xb2d4,	// (0x00015d45) loc_type_pane_t2

0xb2e6,	// (0x00015d57) loc_type_pane_t3_ParamLimits

0xb2e6,	// (0x00015d57) loc_type_pane_t3

0x0002,

0xf368,	// (0x00019dd9) loc_type_pane_t_ParamLimits

0xf368,	// (0x00019dd9) loc_type_pane_t

0xb2f8,	// (0x00015d69) list_loc_req_pane

0xb302,	// (0x00015d73) scroll_pane_cp012

0x434b,	// (0x0000edbc) list_single_loc_request_popup_menu_pane_ParamLimits

0x434b,	// (0x0000edbc) list_single_loc_request_popup_menu_pane

0xb30b,	// (0x00015d7c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb30b,	// (0x00015d7c) list_single_loc_request_popup_menu_pane_g1

0xb317,	// (0x00015d88) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb317,	// (0x00015d88) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00019de0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00019de0) list_single_loc_request_popup_menu_pane_g

0xb323,	// (0x00015d94) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb323,	// (0x00015d94) list_single_loc_request_popup_menu_pane_t1

0xa950,	// (0x000153c1) bg_popup_window_pane_cp03_ParamLimits

0xa950,	// (0x000153c1) bg_popup_window_pane_cp03

0xd02b,	// (0x00017a9c) heading_loc_req_pane_ParamLimits

0xd02b,	// (0x00017a9c) heading_loc_req_pane

0x4358,	// (0x0000edc9) popup_dyc_status_message_window_g1_ParamLimits

0x4358,	// (0x0000edc9) popup_dyc_status_message_window_g1

0x436c,	// (0x0000eddd) popup_dyc_status_message_window_t1_ParamLimits

0x436c,	// (0x0000eddd) popup_dyc_status_message_window_t1

0x4381,	// (0x0000edf2) popup_dyc_status_message_window_t2_ParamLimits

0x4381,	// (0x0000edf2) popup_dyc_status_message_window_t2

0x4396,	// (0x0000ee07) popup_dyc_status_message_window_t3_ParamLimits

0x4396,	// (0x0000ee07) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00019de5) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00019de5) popup_dyc_status_message_window_t

0xa6f5,	// (0x00015166) bg_heading_pane_cp01

0xb339,	// (0x00015daa) heading_loc_req_pane_g1

0xb341,	// (0x00015db2) heading_loc_req_pane_g2

0xb349,	// (0x00015dba) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00019dec) heading_loc_req_pane_g

0xb351,	// (0x00015dc2) heading_loc_req_pane_t1

0xb3f8,	// (0x00015e69) bg_popup_sub_pane_cp01_ParamLimits

0xb3f8,	// (0x00015e69) bg_popup_sub_pane_cp01

0xb406,	// (0x00015e77) popup_cale_events_window_g1_ParamLimits

0xb406,	// (0x00015e77) popup_cale_events_window_g1

0xb426,	// (0x00015e97) popup_cale_events_window_g2_ParamLimits

0xb426,	// (0x00015e97) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00019e20) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00019e20) popup_cale_events_window_g

0xb446,	// (0x00015eb7) popup_cale_events_window_t1_ParamLimits

0xb446,	// (0x00015eb7) popup_cale_events_window_t1

0xb458,	// (0x00015ec9) popup_cale_events_window_t2_ParamLimits

0xb458,	// (0x00015ec9) popup_cale_events_window_t2

0xb496,	// (0x00015f07) popup_cale_events_window_t3_ParamLimits

0xb496,	// (0x00015f07) popup_cale_events_window_t3

0xb4d0,	// (0x00015f41) popup_cale_events_window_t4_ParamLimits

0xb4d0,	// (0x00015f41) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00019e25) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00019e25) popup_cale_events_window_t

0x4426,	// (0x0000ee97) call_type_pane

0x4436,	// (0x0000eea7) popup_call_status_window_g1

0x444a,	// (0x0000eebb) popup_call_status_window_g2

0x445e,	// (0x0000eecf) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00019e2e) popup_call_status_window_g

0xb506,	// (0x00015f77) call_type_pane_g1

0xb50f,	// (0x00015f80) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00019e35) call_type_pane_g

0xa6f5,	// (0x00015166) bg_popup_sub_pane_cp02

0xb518,	// (0x00015f89) listscroll_popup_wml_pane

0xb520,	// (0x00015f91) list_wml_pane

0xb52a,	// (0x00015f9b) scroll_pane_cp013

0x446e,	// (0x0000eedf) list_single_graphic_popup_wml_pane_ParamLimits

0x446e,	// (0x0000eedf) list_single_graphic_popup_wml_pane

0xaae4,	// (0x00015555) list_single_graphic_popup_wml_pane_g1

0xb533,	// (0x00015fa4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00019e3a) list_single_graphic_popup_wml_pane_g

0xb53b,	// (0x00015fac) list_single_graphic_popup_wml_pane_t1

0xb551,	// (0x00015fc2) aid_call_pane

0xa948,	// (0x000153b9) popup_clock_analogue_window_g1

0xa948,	// (0x000153b9) popup_clock_analogue_window_g2

0xb559,	// (0x00015fca) popup_clock_analogue_window_g3

0xb559,	// (0x00015fca) popup_clock_analogue_window_g4

0xaae4,	// (0x00015555) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00019e3f) popup_clock_analogue_window_g

0xb561,	// (0x00015fd2) popup_clock_analogue_window_t1

0xb56f,	// (0x00015fe0) clock_digital_number_pane_ParamLimits

0xb56f,	// (0x00015fe0) clock_digital_number_pane

0xb57b,	// (0x00015fec) clock_digital_number_pane_cp02_ParamLimits

0xb57b,	// (0x00015fec) clock_digital_number_pane_cp02

0xb587,	// (0x00015ff8) clock_digital_number_pane_cp03_ParamLimits

0xb587,	// (0x00015ff8) clock_digital_number_pane_cp03

0xb593,	// (0x00016004) clock_digital_number_pane_cp04_ParamLimits

0xb593,	// (0x00016004) clock_digital_number_pane_cp04

0xb59f,	// (0x00016010) clock_digital_separator_pane_ParamLimits

0xb59f,	// (0x00016010) clock_digital_separator_pane

0xb5ab,	// (0x0001601c) popup_clock_digital_window_t1

0xaae4,	// (0x00015555) clock_digital_number_pane_g1

0xaae4,	// (0x00015555) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00019dad) clock_digital_number_pane_g

0xaae4,	// (0x00015555) clock_digital_separator_pane_g1

0xaae4,	// (0x00015555) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00019dad) clock_digital_separator_pane_g

0xa6f5,	// (0x00015166) bg_popup_window_pane_cp04

0xb5c8,	// (0x00016039) heading_pane_cp03

0xb5d0,	// (0x00016041) listscroll_popup_gms_pane

0xb5d8,	// (0x00016049) grid_large_graphic_popup_pane

0xb5e2,	// (0x00016053) listscroll_popup_gms_pane_g1

0xb5ea,	// (0x0001605b) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00019e4a) listscroll_popup_gms_pane_g

0xaf5f,	// (0x000159d0) scroll_pane_cp014

0x4481,	// (0x0000eef2) cell_large_graphic_popup_pane_ParamLimits

0x4481,	// (0x0000eef2) cell_large_graphic_popup_pane

0x4497,	// (0x0000ef08) cell_large_graphic_popup_pane_g1_ParamLimits

0x4497,	// (0x0000ef08) cell_large_graphic_popup_pane_g1

0xb5f2,	// (0x00016063) cell_large_graphic_popup_pane_g2_ParamLimits

0xb5f2,	// (0x00016063) cell_large_graphic_popup_pane_g2

0xb5fe,	// (0x0001606f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb5fe,	// (0x0001606f) cell_large_graphic_popup_pane_g3

0xb60b,	// (0x0001607c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb60b,	// (0x0001607c) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00019e4f) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00019e4f) cell_large_graphic_popup_pane_g

0xb61b,	// (0x0001608c) grid_highlight_pane_cp010

0xaae4,	// (0x00015555) bg_popup_call_pane_g1

0xb625,	// (0x00016096) list_single_graphic_popup_conf_pane_ParamLimits

0xb625,	// (0x00016096) list_single_graphic_popup_conf_pane

0xb638,	// (0x000160a9) list_highlight_pane_cp01

0xb641,	// (0x000160b2) list_single_graphic_popup_conf_pane_g1

0xb649,	// (0x000160ba) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00019e58) list_single_graphic_popup_conf_pane_g

0xb651,	// (0x000160c2) list_single_graphic_popup_conf_pane_t1

0xb65f,	// (0x000160d0) linegrid_cams_pane_g1

0x44a3,	// (0x0000ef14) linegrid_cams_pane_g2

0xabef,	// (0x00015660) linegrid_cams_pane_g3

0xb668,	// (0x000160d9) linegrid_cams_pane_g4

0x44ac,	// (0x0000ef1d) linegrid_cams_pane_g5

0x44b5,	// (0x0000ef26) linegrid_cams_pane_g6

0xac84,	// (0x000156f5) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00019e5d) linegrid_cams_pane_g

0xb671,	// (0x000160e2) popup_clock_analogue_window

0xb671,	// (0x000160e2) popup_clock_digital_window

0xa6f5,	// (0x00015166) popup_phob_thumbnail_window

0xaae4,	// (0x00015555) call_video_uplink_pane_g1

0xb67a,	// (0x000160eb) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00019e6c) call_video_uplink_pane_g

0xac51,	// (0x000156c2) video_uplink_pane

0xb682,	// (0x000160f3) mce_image_pane_g1

0x44be,	// (0x0000ef2f) mce_image_pane_g2

0x44c6,	// (0x0000ef37) mce_image_pane_g3

0x44ce,	// (0x0000ef3f) mce_image_pane_g4

0x44d6,	// (0x0000ef47) mce_image_pane_g5

0x0004,

0xf400,	// (0x00019e71) mce_image_pane_g

0xb68c,	// (0x000160fd) control_top_pane_stacon_cp01_ParamLimits

0xb68c,	// (0x000160fd) control_top_pane_stacon_cp01

0xb69c,	// (0x0001610d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb69c,	// (0x0001610d) uni_indicator_pane_stacon_cp01

0xb6ad,	// (0x0001611e) bg_popup_sub_pane_cp03

0xb6b7,	// (0x00016128) chi_dic_find_pane

0x44de,	// (0x0000ef4f) listscroll_chi_dic_pane

0xb6bf,	// (0x00016130) main_pane_chidic_g1

0xb6c7,	// (0x00016138) chi_dic_find_pane_t1

0xb6d5,	// (0x00016146) find_chidic_pane

0xb6de,	// (0x0001614f) chi_dic_list_pane_ParamLimits

0xb6de,	// (0x0001614f) chi_dic_list_pane

0xb6ef,	// (0x00016160) scroll_pane_cp020

0xb6f7,	// (0x00016168) find_chidic_pane_t1

0xa6f5,	// (0x00015166) input_focus_pane_cp06

0x44f2,	// (0x0000ef63) list_chi_dic_pane_ParamLimits

0x44f2,	// (0x0000ef63) list_chi_dic_pane

0x4504,	// (0x0000ef75) list_chi_dic_pane_t1_ParamLimits

0x4504,	// (0x0000ef75) list_chi_dic_pane_t1

0xa6f5,	// (0x00015166) list_highlight_pane_cp020

0xb706,	// (0x00016177) bg_cale_heading_pane_g1

0x4517,	// (0x0000ef88) bg_cale_heading_pane_g2

0x451f,	// (0x0000ef90) bg_cale_heading_pane_g3

0x4527,	// (0x0000ef98) bg_cale_heading_pane_g4

0x4531,	// (0x0000efa2) bg_cale_heading_pane_g5

0x453b,	// (0x0000efac) bg_cale_heading_pane_g6

0x4543,	// (0x0000efb4) bg_cale_heading_pane_g7

0x454b,	// (0x0000efbc) bg_cale_heading_pane_g8

0x4555,	// (0x0000efc6) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00019e7c) bg_cale_heading_pane_g

0xb706,	// (0x00016177) bg_cale_side_pane_g1

0x455f,	// (0x0000efd0) bg_cale_side_pane_g2

0x4567,	// (0x0000efd8) bg_cale_side_pane_g3

0x456f,	// (0x0000efe0) bg_cale_side_pane_g4

0x4577,	// (0x0000efe8) bg_cale_side_pane_g5

0x457f,	// (0x0000eff0) bg_cale_side_pane_g6

0x4587,	// (0x0000eff8) bg_cale_side_pane_g7

0x458f,	// (0x0000f000) bg_cale_side_pane_g8

0x4597,	// (0x0000f008) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00019e8f) bg_cale_side_pane_g

0x459f,	// (0x0000f010) popup_call_status_window_ParamLimits

0x459f,	// (0x0000f010) popup_call_status_window

0xb70e,	// (0x0001617f) stacon_top_pane

0xb716,	// (0x00016187) status_pane_ParamLimits

0xb716,	// (0x00016187) status_pane

0xb730,	// (0x000161a1) status_small_pane

0xb738,	// (0x000161a9) control_pane

0xa6f5,	// (0x00015166) stacon_bottom_pane

0xb740,	// (0x000161b1) list_single_mce_smart_pane_t1_ParamLimits

0xb740,	// (0x000161b1) list_single_mce_smart_pane_t1

0xb753,	// (0x000161c4) list_single_mce_smart_pane_t2_ParamLimits

0xb753,	// (0x000161c4) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00019ea2) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00019ea2) list_single_mce_smart_pane_t

0x45e6,	// (0x0000f057) compass_pane

0x45ef,	// (0x0000f060) main_location2_pane_t1

0x4605,	// (0x0000f076) main_location2_pane_t2

0x461b,	// (0x0000f08c) main_location2_pane_t3

0x0003,

0xf436,	// (0x00019ea7) main_location2_pane_t

0xb77b,	// (0x000161ec) compass_pane_g1_ParamLimits

0xb77b,	// (0x000161ec) compass_pane_g1

0x4663,	// (0x0000f0d4) compass_pane_t1

0x4672,	// (0x0000f0e3) compass_pane_t2

0x0005,

0xf43f,	// (0x00019eb0) compass_pane_t

0x46b9,	// (0x0000f12a) text_secondary_cp61

0xb7a8,	// (0x00016219) navi_pane_cams_g5

0xb7e9,	// (0x0001625a) navi_pane_im_t1

0xb7f7,	// (0x00016268) navi_pane_mp_g1_ParamLimits

0xb7f7,	// (0x00016268) navi_pane_mp_g1

0xb80b,	// (0x0001627c) navi_pane_mp_g2_ParamLimits

0xb80b,	// (0x0001627c) navi_pane_mp_g2

0xb817,	// (0x00016288) navi_pane_mp_g3_ParamLimits

0xb817,	// (0x00016288) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00019ec4) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00019ec4) navi_pane_mp_g

0xb823,	// (0x00016294) navi_pane_mp_t1

0xb831,	// (0x000162a2) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00019ecb) navi_pane_mp_t

0xb89e,	// (0x0001630f) navi_pane_vt_g1

0xb823,	// (0x00016294) navi_pane_vt_t1

0xb8a6,	// (0x00016317) navi_slider_pane

0xb8ae,	// (0x0001631f) zooming_pane

0xb8b6,	// (0x00016327) navi_slider_pane_g1

0xb8bf,	// (0x00016330) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00019ed2) navi_slider_pane_g

0xb8ec,	// (0x0001635d) aid_levels_zoom

0xb8f4,	// (0x00016365) zooming_pane_g1

0xb8fc,	// (0x0001636d) zooming_pane_g2

0xb8fc,	// (0x0001636d) zooming_pane_g3

0x0002,

0xf470,	// (0x00019ee1) zooming_pane_g

0xb904,	// (0x00016375) level_10_zoom

0xb90d,	// (0x0001637e) level_11_zoom

0xb916,	// (0x00016387) level_1_zoom

0xb91f,	// (0x00016390) level_2_zoom

0xb928,	// (0x00016399) level_3_zoom

0xb931,	// (0x000163a2) level_4_zoom

0xb93a,	// (0x000163ab) level_5_zoom

0xb943,	// (0x000163b4) level_6_zoom

0xb94c,	// (0x000163bd) level_7_zoom

0xb955,	// (0x000163c6) level_8_zoom

0xb95e,	// (0x000163cf) level_9_zoom

0xb96f,	// (0x000163e0) popup_phob_thumbnail_window_g1

0xb977,	// (0x000163e8) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00019ee8) popup_phob_thumbnail_window_g

0xcd4b,	// (0x000177bc) level_1_location

0xcd53,	// (0x000177c4) level_2_location

0xcd5b,	// (0x000177cc) level_3_location

0xcd63,	// (0x000177d4) level_4_location

0xb8ae,	// (0x0001631f) level_5_location

0x4744,	// (0x0000f1b5) mce_icon_pane_g1

0x474c,	// (0x0000f1bd) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00019eed) mce_icon_pane_g

0x4754,	// (0x0000f1c5) main_mup_pane_g1_ParamLimits

0x4754,	// (0x0000f1c5) main_mup_pane_g1

0x476a,	// (0x0000f1db) main_mup_pane_g2_ParamLimits

0x476a,	// (0x0000f1db) main_mup_pane_g2

0x4782,	// (0x0000f1f3) main_mup_pane_g3_ParamLimits

0x4782,	// (0x0000f1f3) main_mup_pane_g3

0x479a,	// (0x0000f20b) main_mup_pane_g4_ParamLimits

0x479a,	// (0x0000f20b) main_mup_pane_g4

0x47b2,	// (0x0000f223) main_mup_pane_g5_ParamLimits

0x47b2,	// (0x0000f223) main_mup_pane_g5

0x47cc,	// (0x0000f23d) main_mup_pane_g6_ParamLimits

0x47cc,	// (0x0000f23d) main_mup_pane_g6

0x47e4,	// (0x0000f255) main_mup_pane_g7_ParamLimits

0x47e4,	// (0x0000f255) main_mup_pane_g7

0x47fc,	// (0x0000f26d) main_mup_pane_g8_ParamLimits

0x47fc,	// (0x0000f26d) main_mup_pane_g8

0x4814,	// (0x0000f285) main_mup_pane_g9_ParamLimits

0x4814,	// (0x0000f285) main_mup_pane_g9

0x4828,	// (0x0000f299) main_mup_pane_g10_ParamLimits

0x4828,	// (0x0000f299) main_mup_pane_g10

0x483c,	// (0x0000f2ad) main_mup_pane_g11_ParamLimits

0x483c,	// (0x0000f2ad) main_mup_pane_g11

0x484e,	// (0x0000f2bf) main_mup_pane_g12_ParamLimits

0x484e,	// (0x0000f2bf) main_mup_pane_g12

0x4862,	// (0x0000f2d3) main_mup_pane_g13_ParamLimits

0x4862,	// (0x0000f2d3) main_mup_pane_g13

0x000c,

0xf481,	// (0x00019ef2) main_mup_pane_g_ParamLimits

0xf481,	// (0x00019ef2) main_mup_pane_g

0x4874,	// (0x0000f2e5) main_mup_pane_t1_ParamLimits

0x4874,	// (0x0000f2e5) main_mup_pane_t1

0x488e,	// (0x0000f2ff) main_mup_pane_t2_ParamLimits

0x488e,	// (0x0000f2ff) main_mup_pane_t2

0x48a6,	// (0x0000f317) main_mup_pane_t3_ParamLimits

0x48a6,	// (0x0000f317) main_mup_pane_t3

0x48be,	// (0x0000f32f) main_mup_pane_t4_ParamLimits

0x48be,	// (0x0000f32f) main_mup_pane_t4

0x48dc,	// (0x0000f34d) main_mup_pane_t5_ParamLimits

0x48dc,	// (0x0000f34d) main_mup_pane_t5

0x48f1,	// (0x0000f362) main_mup_pane_t6_ParamLimits

0x48f1,	// (0x0000f362) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00019f0d) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00019f0d) main_mup_pane_t

0x4903,	// (0x0000f374) mup_progress_pane_ParamLimits

0x4903,	// (0x0000f374) mup_progress_pane

0x490f,	// (0x0000f380) mup_visualizer_pane_ParamLimits

0x490f,	// (0x0000f380) mup_visualizer_pane

0x4937,	// (0x0000f3a8) mup_volume_pane_ParamLimits

0x4937,	// (0x0000f3a8) mup_volume_pane

0xb97f,	// (0x000163f0) mup_visualizer_pane_g1_ParamLimits

0xb97f,	// (0x000163f0) mup_visualizer_pane_g1

0xb97f,	// (0x000163f0) mup_visualizer_pane_g2_ParamLimits

0xb97f,	// (0x000163f0) mup_visualizer_pane_g2

0xb77b,	// (0x000161ec) mup_visualizer_pane_g3_ParamLimits

0xb77b,	// (0x000161ec) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00019f1a) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00019f1a) mup_visualizer_pane_g

0xaae4,	// (0x00015555) mup_volume_pane_g1

0xb995,	// (0x00016406) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00019f21) mup_volume_pane_g

0xaae4,	// (0x00015555) mup_progress_pane_g1

0xb99e,	// (0x0001640f) mup_progress_pane_g2

0xb9a7,	// (0x00016418) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00019f26) mup_progress_pane_g

0xa6f5,	// (0x00015166) bg_popup_window_pane_cp05

0xb9b0,	// (0x00016421) heading_pane_cp02_ParamLimits

0xb9b0,	// (0x00016421) heading_pane_cp02

0xb9ca,	// (0x0001643b) list_popup_blid_pane

0xb9d2,	// (0x00016443) list_blid_sat_info_pane_ParamLimits

0xb9d2,	// (0x00016443) list_blid_sat_info_pane

0xb9e5,	// (0x00016456) list_blid_sat_info_pane_g1

0xb9ed,	// (0x0001645e) list_blid_sat_info_pane_t1

0x4a27,	// (0x0000f498) mup_equalizer_pane_ParamLimits

0x4a27,	// (0x0000f498) mup_equalizer_pane

0x4a40,	// (0x0000f4b1) mup_equalizer_pane_cp1_ParamLimits

0x4a40,	// (0x0000f4b1) mup_equalizer_pane_cp1

0x4a59,	// (0x0000f4ca) mup_equalizer_pane_cp2_ParamLimits

0x4a59,	// (0x0000f4ca) mup_equalizer_pane_cp2

0x4a72,	// (0x0000f4e3) mup_equalizer_pane_cp3_ParamLimits

0x4a72,	// (0x0000f4e3) mup_equalizer_pane_cp3

0x4a8b,	// (0x0000f4fc) mup_equalizer_pane_cp4_ParamLimits

0x4a8b,	// (0x0000f4fc) mup_equalizer_pane_cp4

0x4aa4,	// (0x0000f515) mup_equalizer_pane_cp5

0x4ab6,	// (0x0000f527) mup_equalizer_pane_cp6

0x4ac8,	// (0x0000f539) mup_equalizer_pane_cp7

0xcc29,	// (0x0001769a) bg_popup_call_poc_act_pane_g9

0xcc31,	// (0x000176a2) bg_popup_call_poc_act_pane_g10

0xcc39,	// (0x000176aa) bg_popup_call_poc_act_pane_g11

0x000a,

0xa950,	// (0x000153c1) mup_scale_pane

0xaae4,	// (0x00015555) mup_scale_pane_g1

0xb9fb,	// (0x0001646c) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00019f42) mup_scale_pane_g

0xba1f,	// (0x00016490) msg_data_pane

0xba27,	// (0x00016498) scroll_pane_cp017

0x4aee,	// (0x0000f55f) bg_list_pane_cp04_ParamLimits

0x4aee,	// (0x0000f55f) bg_list_pane_cp04

0xba37,	// (0x000164a8) msg_data_pane_g1

0x44be,	// (0x0000ef2f) msg_data_pane_g2

0x44c6,	// (0x0000ef37) msg_data_pane_g3

0x4b06,	// (0x0000f577) msg_data_pane_g4

0x44d6,	// (0x0000ef47) msg_data_pane_g5

0x4744,	// (0x0000f1b5) msg_data_pane_g6

0x4b0e,	// (0x0000f57f) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00019f51) msg_data_pane_g

0x4b16,	// (0x0000f587) msg_text_pane_ParamLimits

0x4b16,	// (0x0000f587) msg_text_pane

0x4b3a,	// (0x0000f5ab) qrid_highlight_pane_cp011_ParamLimits

0x4b3a,	// (0x0000f5ab) qrid_highlight_pane_cp011

0xa6f5,	// (0x00015166) msg_body_pane

0xa6f5,	// (0x00015166) msg_header_pane

0xba48,	// (0x000164b9) input_focus_pane_cp07

0x4b5c,	// (0x0000f5cd) msg_header_pane_t1_ParamLimits

0x4b5c,	// (0x0000f5cd) msg_header_pane_t1

0xba5d,	// (0x000164ce) msg_header_pane_t2_ParamLimits

0xba5d,	// (0x000164ce) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00019f65) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00019f65) msg_header_pane_t

0xba6f,	// (0x000164e0) msg_body_pane_g1

0xba77,	// (0x000164e8) msg_body_pane_t1_ParamLimits

0xba77,	// (0x000164e8) msg_body_pane_t1

0xbaa2,	// (0x00016513) msg_body_pane_t2_ParamLimits

0xbaa2,	// (0x00016513) msg_body_pane_t2

0xbab4,	// (0x00016525) msg_body_pane_t3_ParamLimits

0xbab4,	// (0x00016525) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00019f6a) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00019f6a) msg_body_pane_t

0x4ba4,	// (0x0000f615) main_viewer_pane_g1_ParamLimits

0x4ba4,	// (0x0000f615) main_viewer_pane_g1

0x4bb0,	// (0x0000f621) main_viewer_pane_g2_ParamLimits

0x4bb0,	// (0x0000f621) main_viewer_pane_g2

0x4bbc,	// (0x0000f62d) main_viewer_pane_g3_ParamLimits

0x4bbc,	// (0x0000f62d) main_viewer_pane_g3

0x4bcb,	// (0x0000f63c) main_viewer_pane_g4_ParamLimits

0x4bcb,	// (0x0000f63c) main_viewer_pane_g4

0xbade,	// (0x0001654f) main_viewer_pane_g5_ParamLimits

0xbade,	// (0x0001654f) main_viewer_pane_g5

0xbade,	// (0x0001654f) main_viewer_pane_g7_ParamLimits

0xbade,	// (0x0001654f) main_viewer_pane_g7

0xbaf0,	// (0x00016561) main_viewer_pane_g8_ParamLimits

0xbaf0,	// (0x00016561) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00019f7a) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00019f7a) main_viewer_pane_g

0xbb08,	// (0x00016579) viewer_content_pane_ParamLimits

0xbb08,	// (0x00016579) viewer_content_pane

0x4bff,	// (0x0000f670) main_postcard_pane_g1_ParamLimits

0x4bff,	// (0x0000f670) main_postcard_pane_g1

0x4c13,	// (0x0000f684) main_postcard_pane_g2_ParamLimits

0x4c13,	// (0x0000f684) main_postcard_pane_g2

0x4c27,	// (0x0000f698) main_postcard_pane_g3_ParamLimits

0x4c27,	// (0x0000f698) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00019f8b) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00019f8b) main_postcard_pane_g

0x4c3a,	// (0x0000f6ab) main_postcard_pane_g4

0xce7a,	// (0x000178eb) smil_status_volume_pane_g2

0x4c75,	// (0x0000f6e6) postcard_pane_ParamLimits

0x4c75,	// (0x0000f6e6) postcard_pane

0xbb16,	// (0x00016587) postcard_pane_g1_ParamLimits

0xbb16,	// (0x00016587) postcard_pane_g1

0x4cb5,	// (0x0000f726) postcard_pane_g2_ParamLimits

0x4cb5,	// (0x0000f726) postcard_pane_g2

0x4cc1,	// (0x0000f732) postcard_pane_g3_ParamLimits

0x4cc1,	// (0x0000f732) postcard_pane_g3

0xbb24,	// (0x00016595) postcard_pane_g4_ParamLimits

0xbb24,	// (0x00016595) postcard_pane_g4

0x4ccd,	// (0x0000f73e) postcard_pane_g5_ParamLimits

0x4ccd,	// (0x0000f73e) postcard_pane_g5

0x4ce2,	// (0x0000f753) postcard_pane_g6_ParamLimits

0x4ce2,	// (0x0000f753) postcard_pane_g6

0xbb16,	// (0x00016587) postcard_pane_g7_ParamLimits

0xbb16,	// (0x00016587) postcard_pane_g7

0x0006,

0xf527,	// (0x00019f98) postcard_pane_g_ParamLimits

0xf527,	// (0x00019f98) postcard_pane_g

0x4cf6,	// (0x0000f767) main_mp2_pane_g1_ParamLimits

0x4cf6,	// (0x0000f767) main_mp2_pane_g1

0x4d02,	// (0x0000f773) main_mp2_pane_g2_ParamLimits

0x4d02,	// (0x0000f773) main_mp2_pane_g2

0x4d0e,	// (0x0000f77f) main_mp2_pane_g3_ParamLimits

0x4d0e,	// (0x0000f77f) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00019fa7) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00019fa7) main_mp2_pane_g

0x4d1a,	// (0x0000f78b) main_mp2_pane_t1_ParamLimits

0x4d1a,	// (0x0000f78b) main_mp2_pane_t1

0x4d2f,	// (0x0000f7a0) main_mp2_pane_t2_ParamLimits

0x4d2f,	// (0x0000f7a0) main_mp2_pane_t2

0x4d41,	// (0x0000f7b2) main_mp2_pane_t3_ParamLimits

0x4d41,	// (0x0000f7b2) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00019fae) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00019fae) main_mp2_pane_t

0xbb32,	// (0x000165a3) pec_content_pane_ParamLimits

0xbb32,	// (0x000165a3) pec_content_pane

0xaf5f,	// (0x000159d0) scroll_pane_cp015

0xbb44,	// (0x000165b5) pec_attribute_pane_ParamLimits

0xbb44,	// (0x000165b5) pec_attribute_pane

0x4d53,	// (0x0000f7c4) pec_content_pane_g1_ParamLimits

0x4d53,	// (0x0000f7c4) pec_content_pane_g1

0xbb54,	// (0x000165c5) pec_content_pane_t1_ParamLimits

0xbb54,	// (0x000165c5) pec_content_pane_t1

0xbb66,	// (0x000165d7) pec_content_pane_t2_ParamLimits

0xbb66,	// (0x000165d7) pec_content_pane_t2

0x0001,

0xf544,	// (0x00019fb5) pec_content_pane_t_ParamLimits

0xf544,	// (0x00019fb5) pec_content_pane_t

0x4d5f,	// (0x0000f7d0) list_single_graphic_pane_cp01_ParamLimits

0x4d5f,	// (0x0000f7d0) list_single_graphic_pane_cp01

0xa950,	// (0x000153c1) bg_popup_sub_pane_cp04

0xbb78,	// (0x000165e9) popup_mup_playback_window_g1

0xbb84,	// (0x000165f5) popup_mup_playback_window_t1

0xbb99,	// (0x0001660a) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00019fba) popup_mup_playback_window_t

0xbbd0,	// (0x00016641) main_image_pane_g1_ParamLimits

0xbbd0,	// (0x00016641) main_image_pane_g1

0xbc13,	// (0x00016684) scroll_pane_cp018_ParamLimits

0xbc13,	// (0x00016684) scroll_pane_cp018

0xbc2b,	// (0x0001669c) scroll_pane_cp016_ParamLimits

0xbc2b,	// (0x0001669c) scroll_pane_cp016

0x4e2a,	// (0x0000f89b) smil2_image_pane_ParamLimits

0x4e2a,	// (0x0000f89b) smil2_image_pane

0x4e52,	// (0x0000f8c3) smil2_root_pane_ParamLimits

0x4e52,	// (0x0000f8c3) smil2_root_pane

0x4e8a,	// (0x0000f8fb) smil2_text_pane_ParamLimits

0x4e8a,	// (0x0000f8fb) smil2_text_pane

0xa6f5,	// (0x00015166) bg_list_pane_cp06

0xbc67,	// (0x000166d8) grid_radio_pane

0xa6f5,	// (0x00015166) bg_popup_window_pane_cp06

0xbc6f,	// (0x000166e0) main_fmradio_pane_t1

0xb5c8,	// (0x00016039) heading_pane_cp04

0xbc7d,	// (0x000166ee) main_fmradio_pane_t2

0xcc81,	// (0x000176f2) popup_cale_lunar_info_window_g1

0xbc8b,	// (0x000166fc) main_fmradio_pane_t3

0xcc89,	// (0x000176fa) popup_cale_lunar_info_window_g2

0xbc99,	// (0x0001670a) main_fmradio_pane_t4

0x0001,

0xbca7,	// (0x00016718) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x0001a0a8) popup_cale_lunar_info_window_g

0xf55e,	// (0x00019fcf) main_fmradio_pane_t

0xbcb5,	// (0x00016726) wait_bar_pane_cp03

0xbcbd,	// (0x0001672e) cell_fmradio_pane_ParamLimits

0xbcbd,	// (0x0001672e) cell_fmradio_pane

0xbb16,	// (0x00016587) cell_fmradio_pane_g1_ParamLimits

0xbb16,	// (0x00016587) cell_fmradio_pane_g1

0xa6f5,	// (0x00015166) grid_highlight_pane_cp011

0xbcd0,	// (0x00016741) poc_content_pane_ParamLimits

0xbcd0,	// (0x00016741) poc_content_pane

0xbce3,	// (0x00016754) scroll_pane_cp019

0x4ef6,	// (0x0000f967) popup_call_poc_act_window_ParamLimits

0x4ef6,	// (0x0000f967) popup_call_poc_act_window

0x4f16,	// (0x0000f987) popup_call_poc_inact_window_ParamLimits

0x4f16,	// (0x0000f987) popup_call_poc_inact_window

0xf5fb,	// (0x0001a06c) bg_popup_call_poc_act_pane_g

0xcc41,	// (0x000176b2) bg_popup_call_poc_inact_pane_g1

0xcc49,	// (0x000176ba) bg_popup_call_poc_inact_pane_g2

0xbceb,	// (0x0001675c) popup_call_poc_act_window_g2

0xcc51,	// (0x000176c2) bg_popup_call_poc_inact_pane_g3

0xcbd1,	// (0x00017642) bg_popup_call_poc_inact_pane_g4

0xcc59,	// (0x000176ca) bg_popup_call_poc_inact_pane_g5

0xbcf3,	// (0x00016764) popup_call_poc_act_window_t1_ParamLimits

0xbcf3,	// (0x00016764) popup_call_poc_act_window_t1

0xbd1b,	// (0x0001678c) popup_call_poc_act_window_t2_ParamLimits

0xbd1b,	// (0x0001678c) popup_call_poc_act_window_t2

0xbd43,	// (0x000167b4) popup_call_poc_act_window_t3_ParamLimits

0xbd43,	// (0x000167b4) popup_call_poc_act_window_t3

0xbd6b,	// (0x000167dc) popup_call_poc_act_window_t4_ParamLimits

0xbd6b,	// (0x000167dc) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00019fda) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00019fda) popup_call_poc_act_window_t

0xcc61,	// (0x000176d2) bg_popup_call_poc_inact_pane_g6

0xcc69,	// (0x000176da) bg_popup_call_poc_inact_pane_g7

0xcc71,	// (0x000176e2) bg_popup_call_poc_inact_pane_g8

0xbd7d,	// (0x000167ee) popup_call_poc_inact_window_g2

0xcc79,	// (0x000176ea) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x0001a083) bg_popup_call_poc_inact_pane_g

0xbd85,	// (0x000167f6) popup_call_poc_inact_window_t1_ParamLimits

0xbd85,	// (0x000167f6) popup_call_poc_inact_window_t1

0xbd9a,	// (0x0001680b) popup_call_poc_inact_window_t2_ParamLimits

0xbd9a,	// (0x0001680b) popup_call_poc_inact_window_t2

0xbdaf,	// (0x00016820) popup_call_poc_inact_window_t3_ParamLimits

0xbdaf,	// (0x00016820) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00019fe3) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00019fe3) popup_call_poc_inact_window_t

0xcded,	// (0x0001785e) context_pane_ParamLimits

0x5628,	// (0x00010099) signal_pane_ParamLimits

0xb8ae,	// (0x0001631f) main_call2_pane

0xcddb,	// (0x0001784c) popup_phob_thumbnail2_window_ParamLimits

0xcddb,	// (0x0001784c) popup_phob_thumbnail2_window

0xbac6,	// (0x00016537) aid_hotspot_pointer_arrow_pane

0xbace,	// (0x0001653f) aid_hotspot_pointer_hand_pane

0x51eb,	// (0x0000fc5c) phob_pre_status_pane_g5

0x34b9,	// (0x0000df2a) cams_zoom_pane_ParamLimits

0x34c8,	// (0x0000df39) image_vga_pane_ParamLimits

0x34e0,	// (0x0000df51) main_camera_pane_g1_ParamLimits

0x34f0,	// (0x0000df61) main_camera_pane_g2_ParamLimits

0x3500,	// (0x0000df71) main_camera_pane_g3_ParamLimits

0x3510,	// (0x0000df81) main_camera_pane_g4_ParamLimits

0x3520,	// (0x0000df91) main_camera_pane_g5_ParamLimits

0x3530,	// (0x0000dfa1) main_camera_pane_g6_ParamLimits

0x3540,	// (0x0000dfb1) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00019ce2) main_camera_pane_g_ParamLimits

0x3550,	// (0x0000dfc1) main_camera_pane_t1_ParamLimits

0x3566,	// (0x0000dfd7) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00019cf3) main_camera_pane_t_ParamLimits

0xa950,	// (0x000153c1) bg_popup_preview_window_pane_cp01_ParamLimits

0xa950,	// (0x000153c1) bg_popup_preview_window_pane_cp01

0xbdc4,	// (0x00016835) popup_phob_thumbnail2_window_g1_ParamLimits

0xbdc4,	// (0x00016835) popup_phob_thumbnail2_window_g1

0xa6f5,	// (0x00015166) call2_cli_visual_pane

0x4f42,	// (0x0000f9b3) popup_call2_audio_conf_window_ParamLimits

0x4f42,	// (0x0000f9b3) popup_call2_audio_conf_window

0x4f60,	// (0x0000f9d1) popup_call2_audio_first_window_ParamLimits

0x4f60,	// (0x0000f9d1) popup_call2_audio_first_window

0x4fd6,	// (0x0000fa47) popup_call2_audio_in_window_ParamLimits

0x4fd6,	// (0x0000fa47) popup_call2_audio_in_window

0x500a,	// (0x0000fa7b) popup_call2_audio_out_window_ParamLimits

0x500a,	// (0x0000fa7b) popup_call2_audio_out_window

0x505c,	// (0x0000facd) popup_call2_audio_second_window_ParamLimits

0x505c,	// (0x0000facd) popup_call2_audio_second_window

0x50ae,	// (0x0000fb1f) popup_call2_audio_wait_window_ParamLimits

0x50ae,	// (0x0000fb1f) popup_call2_audio_wait_window

0xa6f5,	// (0x00015166) bg_popup_call2_act_pane_cp03

0xa932,	// (0x000153a3) list_conf_pane_cp

0xbdd0,	// (0x00016841) popup_call2_audio_conf_window_t1

0xb625,	// (0x00016096) list_single_graphic_popup_conf2_pane_ParamLimits

0xb625,	// (0x00016096) list_single_graphic_popup_conf2_pane

0xb638,	// (0x000160a9) list_highlight_pane_cp04

0xbdde,	// (0x0001684f) list_single_graphic_popup_conf2_pane_g1

0xb649,	// (0x000160ba) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00019fea) list_single_graphic_popup_conf2_pane_g

0xbde6,	// (0x00016857) list_single_graphic_popup_conf2_pane_t1

0xbdf4,	// (0x00016865) bg_popup_call2_act_pane_cp01_ParamLimits

0xbdf4,	// (0x00016865) bg_popup_call2_act_pane_cp01

0xbe7e,	// (0x000168ef) call_type_pane_cp05_ParamLimits

0xbe7e,	// (0x000168ef) call_type_pane_cp05

0xbed2,	// (0x00016943) popup_call2_audio_second_window_g1_ParamLimits

0xbed2,	// (0x00016943) popup_call2_audio_second_window_g1

0xbf26,	// (0x00016997) popup_call2_audio_second_window_g2_ParamLimits

0xbf26,	// (0x00016997) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00019fef) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00019fef) popup_call2_audio_second_window_g

0xbf8b,	// (0x000169fc) popup_call2_audio_second_window_t1_ParamLimits

0xbf8b,	// (0x000169fc) popup_call2_audio_second_window_t1

0xc046,	// (0x00016ab7) popup_call2_audio_second_window_t2_ParamLimits

0xc046,	// (0x00016ab7) popup_call2_audio_second_window_t2

0xc099,	// (0x00016b0a) popup_call2_audio_second_window_t3_ParamLimits

0xc099,	// (0x00016b0a) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00019ff6) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00019ff6) popup_call2_audio_second_window_t

0xa6f5,	// (0x00015166) bg_popup_call2_in_pane_cp02

0xa6ff,	// (0x00015170) call_type_pane_cp04

0xa707,	// (0x00015178) popup_call2_audio_wait_window_g1

0xa70f,	// (0x00015180) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00019bcf) popup_call2_audio_wait_window_g

0xa717,	// (0x00015188) popup_call2_audio_wait_window_t3

0xc18c,	// (0x00016bfd) bg_popup_call2_act_pane_ParamLimits

0xc18c,	// (0x00016bfd) bg_popup_call2_act_pane

0xc24c,	// (0x00016cbd) call_type_pane_cp03_ParamLimits

0xc24c,	// (0x00016cbd) call_type_pane_cp03

0xc2b0,	// (0x00016d21) popup_call2_audio_first_window_g1_ParamLimits

0xc2b0,	// (0x00016d21) popup_call2_audio_first_window_g1

0xc320,	// (0x00016d91) popup_call2_audio_first_window_g2_ParamLimits

0xc320,	// (0x00016d91) popup_call2_audio_first_window_g2

0xb97f,	// (0x000163f0) popup_call2_audio_first_window_g3_ParamLimits

0xb97f,	// (0x000163f0) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00019fff) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00019fff) popup_call2_audio_first_window_g

0xc3fe,	// (0x00016e6f) popup_call2_audio_first_window_t1_ParamLimits

0xc3fe,	// (0x00016e6f) popup_call2_audio_first_window_t1

0xc501,	// (0x00016f72) popup_call2_audio_first_window_t4_ParamLimits

0xc501,	// (0x00016f72) popup_call2_audio_first_window_t4

0xc5e4,	// (0x00017055) popup_call2_audio_first_window_t5_ParamLimits

0xc5e4,	// (0x00017055) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0001a00a) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0001a00a) popup_call2_audio_first_window_t

0xa948,	// (0x000153b9) bg_popup_call2_act_pane_g1

0xcc91,	// (0x00017702) popup_cale_lunar_info_window_t1

0xcc9f,	// (0x00017710) popup_cale_lunar_info_window_t2

0xccad,	// (0x0001771e) popup_cale_lunar_info_window_t3

0xa6f5,	// (0x00015166) bg_popup_call2_bubble_pane

0xc6e5,	// (0x00017156) bg_popup_call2_in_pane_cp01_ParamLimits

0xc6e5,	// (0x00017156) bg_popup_call2_in_pane_cp01

0xa3d1,	// (0x00014e42) call_type_pane_cp02

0xc72d,	// (0x0001719e) popup_call2_audio_out_window_g1_ParamLimits

0xc72d,	// (0x0001719e) popup_call2_audio_out_window_g1

0xc759,	// (0x000171ca) popup_call2_audio_out_window_g2_ParamLimits

0xc759,	// (0x000171ca) popup_call2_audio_out_window_g2

0xc781,	// (0x000171f2) popup_call2_audio_out_window_g3_ParamLimits

0xc781,	// (0x000171f2) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0001a013) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0001a013) popup_call2_audio_out_window_g

0xc7bc,	// (0x0001722d) popup_call2_audio_out_window_t1_ParamLimits

0xc7bc,	// (0x0001722d) popup_call2_audio_out_window_t1

0xc81b,	// (0x0001728c) popup_call2_audio_out_window_t2_ParamLimits

0xc81b,	// (0x0001728c) popup_call2_audio_out_window_t2

0xc86f,	// (0x000172e0) popup_call2_audio_out_window_t3_ParamLimits

0xc86f,	// (0x000172e0) popup_call2_audio_out_window_t3

0xc885,	// (0x000172f6) popup_call2_audio_out_window_t4_ParamLimits

0xc885,	// (0x000172f6) popup_call2_audio_out_window_t4

0xc89b,	// (0x0001730c) popup_call2_audio_out_window_t5_ParamLimits

0xc89b,	// (0x0001730c) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0001a01c) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0001a01c) popup_call2_audio_out_window_t

0xc8ff,	// (0x00017370) bg_popup_call2_in_pane_ParamLimits

0xc8ff,	// (0x00017370) bg_popup_call2_in_pane

0xc95b,	// (0x000173cc) popup_call2_audio_in_window_g1_ParamLimits

0xc95b,	// (0x000173cc) popup_call2_audio_in_window_g1

0xc993,	// (0x00017404) popup_call2_audio_in_window_g2_ParamLimits

0xc993,	// (0x00017404) popup_call2_audio_in_window_g2

0xc9cb,	// (0x0001743c) popup_call2_audio_in_window_g3_ParamLimits

0xc9cb,	// (0x0001743c) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0001a029) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0001a029) popup_call2_audio_in_window_g

0xca23,	// (0x00017494) popup_call2_audio_in_window_t1_ParamLimits

0xca23,	// (0x00017494) popup_call2_audio_in_window_t1

0xcaa3,	// (0x00017514) popup_call2_audio_in_window_t2_ParamLimits

0xcaa3,	// (0x00017514) popup_call2_audio_in_window_t2

0xcb23,	// (0x00017594) popup_call2_audio_in_window_t3_ParamLimits

0xcb23,	// (0x00017594) popup_call2_audio_in_window_t3

0xcb3d,	// (0x000175ae) popup_call2_audio_in_window_t4_ParamLimits

0xcb3d,	// (0x000175ae) popup_call2_audio_in_window_t4

0xcb4f,	// (0x000175c0) popup_call2_audio_in_window_t5_ParamLimits

0xcb4f,	// (0x000175c0) popup_call2_audio_in_window_t5

0xcb64,	// (0x000175d5) popup_call2_audio_in_window_t6_ParamLimits

0xcb64,	// (0x000175d5) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0001a032) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0001a032) popup_call2_audio_in_window_t

0xa948,	// (0x000153b9) bg_popup_call2_in_pane_g1

0xccbb,	// (0x0001772c) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x0001a0ad) popup_cale_lunar_info_window_t

0xa950,	// (0x000153c1) bg_popup_call2_rect_pane_ParamLimits

0xa950,	// (0x000153c1) bg_popup_call2_rect_pane

0xa6f5,	// (0x00015166) call2_cli_visual_graphic_pane

0xa6f5,	// (0x00015166) call2_cli_visual_text_pane

0xce8d,	// (0x000178fe) smil_status_volume_pane_g3

0x0002,

0xaae4,	// (0x00015555) call2_cli_visual_graphic_pane_g1

0xaae4,	// (0x00015555) call2_cli_visual_graphic_pane_g2

0xaae4,	// (0x00015555) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0001a03f) call2_cli_visual_graphic_pane_g

0xcb79,	// (0x000175ea) bg_popup_call2_rect_pane_g1

0xab8c,	// (0x000155fd) bg_popup_call2_rect_pane_g2

0xcb81,	// (0x000175f2) bg_popup_call2_rect_pane_g3

0xcb89,	// (0x000175fa) bg_popup_call2_rect_pane_g4

0xcb91,	// (0x00017602) bg_popup_call2_rect_pane_g5

0xcb99,	// (0x0001760a) bg_popup_call2_rect_pane_g6

0xcba1,	// (0x00017612) bg_popup_call2_rect_pane_g7

0xcba9,	// (0x0001761a) bg_popup_call2_rect_pane_g8

0xcbb1,	// (0x00017622) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0001a046) bg_popup_call2_rect_pane_g

0xcbb9,	// (0x0001762a) bg_popup_call2_bubble_pane_g1

0xcbc1,	// (0x00017632) bg_popup_call2_bubble_pane_g2

0xcbc9,	// (0x0001763a) bg_popup_call2_bubble_pane_g3

0xcbd1,	// (0x00017642) bg_popup_call2_bubble_pane_g4

0xcbd9,	// (0x0001764a) bg_popup_call2_bubble_pane_g5

0xcbe1,	// (0x00017652) bg_popup_call2_bubble_pane_g6

0xcbe9,	// (0x0001765a) bg_popup_call2_bubble_pane_g7

0xcbf1,	// (0x00017662) bg_popup_call2_bubble_pane_g8

0xcbf9,	// (0x0001766a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0001a059) bg_popup_call2_bubble_pane_g

0x2fdc,	// (0x0000da4d) aid_cale_week_size_cell_pane

0x357c,	// (0x0000dfed) aid_cams_cif_uncrop_pane_ParamLimits

0x357c,	// (0x0000dfed) aid_cams_cif_uncrop_pane

0x371d,	// (0x0000e18e) aid_cams_size_cell_ParamLimits

0x371d,	// (0x0000e18e) aid_cams_size_cell

0x3731,	// (0x0000e1a2) grid_cams_pane_ParamLimits

0x3746,	// (0x0000e1b7) linegrid_cams_pane_ParamLimits

0x3847,	// (0x0000e2b8) call_video_pane_t1

0x3859,	// (0x0000e2ca) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00019d46) call_video_pane_t

0x3b60,	// (0x0000e5d1) aid_cale_month_size_cell_pane_ParamLimits

0x3b60,	// (0x0000e5d1) aid_cale_month_size_cell_pane

0xf685,	// (0x0001a0f6) smil_status_volume_pane_g

0xce9a,	// (0x0001790b) volume_smil_pane_ParamLimits

0xa295,	// (0x00014d06) aid_popup2_width_pane

0x2f56,	// (0x0000d9c7) cell_qdial_pane_g4_ParamLimits

0x2f56,	// (0x0000d9c7) cell_qdial_pane_g4

0x4643,	// (0x0000f0b4) aid_blid_cardinal_pane_ParamLimits

0x464f,	// (0x0000f0c0) aid_blid_destination_pane_ParamLimits

0x464f,	// (0x0000f0c0) aid_blid_destination_pane

0xa950,	// (0x000153c1) bg_popup_call_poc_act_pane_ParamLimits

0xa950,	// (0x000153c1) bg_popup_call_poc_act_pane

0xa950,	// (0x000153c1) bg_popup_call_poc_inact_pane_ParamLimits

0xa950,	// (0x000153c1) bg_popup_call_poc_inact_pane

0xcc01,	// (0x00017672) bg_popup_call_poc_act_pane_g1

0xcc09,	// (0x0001767a) bg_popup_call_poc_act_pane_g2

0xcc11,	// (0x00017682) bg_popup_call_poc_act_pane_g3

0xcbd1,	// (0x00017642) bg_popup_call_poc_act_pane_g4

0xcbd9,	// (0x0001764a) bg_popup_call_poc_act_pane_g5

0xcc19,	// (0x0001768a) bg_popup_call_poc_act_pane_g6

0xcbe9,	// (0x0001765a) bg_popup_call_poc_act_pane_g7

0xcc21,	// (0x00017692) bg_popup_call_poc_act_pane_g8

0xa6f5,	// (0x00015166) main_usb_pane

0xcdba,	// (0x0001782b) popup_cale_lunar_info_window

0x3a20,	// (0x0000e491) im_reading_pane_t1_ParamLimits

0xaea8,	// (0x00015919) list_im_pane_ParamLimits

0xaeb9,	// (0x0001592a) scroll_pane_cp07_ParamLimits

0xa6f5,	// (0x00015166) grid_highlight_pane_cp012

0xa950,	// (0x000153c1) mup_scale_pane_ParamLimits

0xbb16,	// (0x00016587) main_usb_pane_g1_ParamLimits

0xbb16,	// (0x00016587) main_usb_pane_g1

0x5108,	// (0x0000fb79) main_usb_pane_g2_ParamLimits

0x5108,	// (0x0000fb79) main_usb_pane_g2

0x0001,

0xf625,	// (0x0001a096) main_usb_pane_g_ParamLimits

0xf625,	// (0x0001a096) main_usb_pane_g

0x511c,	// (0x0000fb8d) main_usb_pane_t1_ParamLimits

0x511c,	// (0x0000fb8d) main_usb_pane_t1

0x512e,	// (0x0000fb9f) main_usb_pane_t2_ParamLimits

0x512e,	// (0x0000fb9f) main_usb_pane_t2

0x5140,	// (0x0000fbb1) main_usb_pane_t3_ParamLimits

0x5140,	// (0x0000fbb1) main_usb_pane_t3

0x5152,	// (0x0000fbc3) main_usb_pane_t4_ParamLimits

0x5152,	// (0x0000fbc3) main_usb_pane_t4

0x5164,	// (0x0000fbd5) main_usb_pane_t5_ParamLimits

0x5164,	// (0x0000fbd5) main_usb_pane_t5

0x5176,	// (0x0000fbe7) main_usb_pane_t6_ParamLimits

0x5176,	// (0x0000fbe7) main_usb_pane_t6

0x0005,

0xf62a,	// (0x0001a09b) main_usb_pane_t_ParamLimits

0xb772,	// (0x000161e3) aid_text_placing

0x45ef,	// (0x0000f060) main_location2_pane_t1_ParamLimits

0x4605,	// (0x0000f076) main_location2_pane_t2_ParamLimits

0x461b,	// (0x0000f08c) main_location2_pane_t3_ParamLimits

0x4631,	// (0x0000f0a2) main_location2_pane_t4_ParamLimits

0x4631,	// (0x0000f0a2) main_location2_pane_t4

0xf436,	// (0x00019ea7) main_location2_pane_t_ParamLimits

0xa98c,	// (0x000153fd) find_pinb_pane_g2_ParamLimits

0xa98c,	// (0x000153fd) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00019bf5) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00019bf5) find_pinb_pane_g

0xa998,	// (0x00015409) find_pinb_pane_t1_ParamLimits

0xa9aa,	// (0x0001541b) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00019bfa) find_pinb_pane_t_ParamLimits

0xa6f5,	// (0x00015166) main_call3_pane

0x3e9c,	// (0x0000e90d) cale_month_day_heading_pane_t1_ParamLimits

0x3efa,	// (0x0000e96b) cale_month_day_heading_pane_t2_ParamLimits

0x3f5f,	// (0x0000e9d0) cale_month_day_heading_pane_t3_ParamLimits

0x3fc4,	// (0x0000ea35) cale_month_day_heading_pane_t4_ParamLimits

0x4029,	// (0x0000ea9a) cale_month_day_heading_pane_t5_ParamLimits

0x408e,	// (0x0000eaff) cale_month_day_heading_pane_t6_ParamLimits

0x40f3,	// (0x0000eb64) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00019d7e) cale_month_day_heading_pane_t_ParamLimits

0xb13f,	// (0x00015bb0) smil_status_volume_pane

0x4c91,	// (0x0000f702) postcard_address_pane_ParamLimits

0x4c91,	// (0x0000f702) postcard_address_pane

0x4ca3,	// (0x0000f714) postcard_message_pane_ParamLimits

0x4ca3,	// (0x0000f714) postcard_message_pane

0x50e6,	// (0x0000fb57) call2_cli_visual_pane_t1_ParamLimits

0x50e6,	// (0x0000fb57) call2_cli_visual_pane_t1

0x5844,	// (0x000102b5) postcard_message_pane_t1_ParamLimits

0x5844,	// (0x000102b5) postcard_message_pane_t1

0x582d,	// (0x0001029e) postcard_address_pane_t1_ParamLimits

0x582d,	// (0x0001029e) postcard_address_pane_t1

0x581b,	// (0x0001028c) popup_call3_audio_in_window_ParamLimits

0x581b,	// (0x0001028c) popup_call3_audio_in_window

0x56aa,	// (0x0001011b) bg_popup_call3_in_pane_ParamLimits

0x56aa,	// (0x0001011b) bg_popup_call3_in_pane

0x571c,	// (0x0001018d) popup_call3_audio_in_window_g1_ParamLimits

0x571c,	// (0x0001018d) popup_call3_audio_in_window_g1

0x573c,	// (0x000101ad) popup_call3_audio_in_window_g2_ParamLimits

0x573c,	// (0x000101ad) popup_call3_audio_in_window_g2

0x575c,	// (0x000101cd) popup_call3_audio_in_window_g3_ParamLimits

0x575c,	// (0x000101cd) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x0001a0fd) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x0001a0fd) popup_call3_audio_in_window_g

0x578d,	// (0x000101fe) popup_call3_audio_in_window_t1_ParamLimits

0x578d,	// (0x000101fe) popup_call3_audio_in_window_t1

0x57cb,	// (0x0001023c) popup_call3_audio_in_window_t2_ParamLimits

0x57cb,	// (0x0001023c) popup_call3_audio_in_window_t2

0x5809,	// (0x0001027a) popup_call3_audio_in_window_t3_ParamLimits

0x5809,	// (0x0001027a) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x0001a106) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x0001a106) popup_call3_audio_in_window_t

0xb8ae,	// (0x0001631f) bg_popup_call3_rect_pane

0xcb79,	// (0x000175ea) bg_popup_call3_rect_pane_g1

0xab8c,	// (0x000155fd) bg_popup_call3_rect_pane_g2

0xcb81,	// (0x000175f2) bg_popup_call3_rect_pane_g3

0xcb89,	// (0x000175fa) bg_popup_call3_rect_pane_g4

0xcb91,	// (0x00017602) bg_popup_call3_rect_pane_g5

0xcb99,	// (0x0001760a) bg_popup_call3_rect_pane_g6

0xcba1,	// (0x00017612) bg_popup_call3_rect_pane_g7

0x494d,	// (0x0000f3be) mup_visualizer_osc_pane

0xb98d,	// (0x000163fe) mup_visualizer_spec_pane

0x56da,	// (0x0001014b) call3_video_qcif_pane_ParamLimits

0x56da,	// (0x0001014b) call3_video_qcif_pane

0x56eb,	// (0x0001015c) call3_video_qcif_uncrop_pane_ParamLimits

0x56eb,	// (0x0001015c) call3_video_qcif_uncrop_pane

0x56f7,	// (0x00010168) call3_video_subqcif_pane_ParamLimits

0x56f7,	// (0x00010168) call3_video_subqcif_pane

0x570b,	// (0x0001017c) call3_video_subqcif_uncrop_pane_ParamLimits

0x570b,	// (0x0001017c) call3_video_subqcif_uncrop_pane

0x577c,	// (0x000101ed) popup_call3_audio_in_window_g4_ParamLimits

0x577c,	// (0x000101ed) popup_call3_audio_in_window_g4

0x5699,	// (0x0001010a) mup_spec_half_pane

0x56a2,	// (0x00010113) mup_spec_half_pane_cp

0xce4d,	// (0x000178be) mup_osc_middle_pane

0xce56,	// (0x000178c7) mup_visualizer_osc_pane_g1

0x567a,	// (0x000100eb) mup_spec_bar_pane_ParamLimits

0x567a,	// (0x000100eb) mup_spec_bar_pane

0xce3a,	// (0x000178ab) mup_spec_bar_pane_g1

0xce44,	// (0x000178b5) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x0001a0f1) mup_spec_bar_pane_g

0x2fdc,	// (0x0000da4d) aid_cale_week_size_cell_pane_ParamLimits

0x2fef,	// (0x0000da60) bg_cale_heading_pane_ParamLimits

0xac18,	// (0x00015689) bg_cale_pane_cp01_ParamLimits

0x3003,	// (0x0000da74) cale_week_corner_pane_ParamLimits

0x3019,	// (0x0000da8a) cale_week_day_heading_pane_ParamLimits

0x302d,	// (0x0000da9e) cale_week_scroll_pane_g1_ParamLimits

0x303e,	// (0x0000daaf) cale_week_scroll_pane_g2_ParamLimits

0x304f,	// (0x0000dac0) cale_week_scroll_pane_g3_ParamLimits

0x3060,	// (0x0000dad1) cale_week_scroll_pane_g4_ParamLimits

0x3071,	// (0x0000dae2) cale_week_scroll_pane_g5_ParamLimits

0x3082,	// (0x0000daf3) cale_week_scroll_pane_g6_ParamLimits

0x3093,	// (0x0000db04) cale_week_scroll_pane_g7_ParamLimits

0x30a4,	// (0x0000db15) cale_week_scroll_pane_g8_ParamLimits

0x30b7,	// (0x0000db28) cale_week_scroll_pane_g9_ParamLimits

0x30c8,	// (0x0000db39) cale_week_scroll_pane_g10_ParamLimits

0x30d9,	// (0x0000db4a) cale_week_scroll_pane_g11_ParamLimits

0x30ea,	// (0x0000db5b) cale_week_scroll_pane_g12_ParamLimits

0x30fb,	// (0x0000db6c) cale_week_scroll_pane_g13_ParamLimits

0x310c,	// (0x0000db7d) cale_week_scroll_pane_g14_ParamLimits

0x311d,	// (0x0000db8e) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00019c86) cale_week_scroll_pane_g_ParamLimits

0x312e,	// (0x0000db9f) cale_week_time_pane_ParamLimits

0x3141,	// (0x0000dbb2) grid_cale_week_pane_ParamLimits

0xac31,	// (0x000156a2) listscroll_cale_week_pane_t1

0x3154,	// (0x0000dbc5) scroll_pane_cp08_ParamLimits

0x3ba1,	// (0x0000e612) cale_month_corner_pane_ParamLimits

0xb0df,	// (0x00015b50) cale_month_pane_t1

0x3e5b,	// (0x0000e8cc) cale_month_week_pane_ParamLimits

0x4436,	// (0x0000eea7) popup_call_status_window_g1_ParamLimits

0x444a,	// (0x0000eebb) popup_call_status_window_g2_ParamLimits

0x445e,	// (0x0000eecf) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00019e2e) popup_call_status_window_g_ParamLimits

0xb549,	// (0x00015fba) aid_call2_pane

0x4b50,	// (0x0000f5c1) msg_header_pane_g1

0x4c91,	// (0x0000f702) postcard_address2_pane_ParamLimits

0x4c91,	// (0x0000f702) postcard_address2_pane

0x4ca3,	// (0x0000f714) postcard_message2_pane_ParamLimits

0x4ca3,	// (0x0000f714) postcard_message2_pane

0x5636,	// (0x000100a7) message2_row_pane_ParamLimits

0x5636,	// (0x000100a7) message2_row_pane

0x5650,	// (0x000100c1) address2_row_pane_ParamLimits

0x5650,	// (0x000100c1) address2_row_pane

0xce08,	// (0x00017879) postcard_message2_row_pane_g1

0xce10,	// (0x00017881) postcard_message2_row_pane_t1

0xce08,	// (0x00017879) address2_row_pane_g1

0xce10,	// (0x00017881) address2_row_pane_t1

0x3484,	// (0x0000def5) aid_size_cell_vorec

0xa6f5,	// (0x00015166) main_rss_pane

0x5663,	// (0x000100d4) rss_list_single_pane_ParamLimits

0x5663,	// (0x000100d4) rss_list_single_pane

0xce1e,	// (0x0001788f) rss_list_single_pane_t1

0xce2c,	// (0x0001789d) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x0001a0ec) rss_list_single_pane_t

0xa6f5,	// (0x00015166) main_camera2_pane

0xa6f5,	// (0x00015166) main_video2_pane

0x589d,	// (0x0001030e) cams_zoom_pane_cp2_ParamLimits

0x589d,	// (0x0001030e) cams_zoom_pane_cp2

0x58b4,	// (0x00010325) image2_vga_pane_ParamLimits

0x58b4,	// (0x00010325) image2_vga_pane

0x58ea,	// (0x0001035b) main_camera2_pane_g1_ParamLimits

0x58ea,	// (0x0001035b) main_camera2_pane_g1

0x590a,	// (0x0001037b) main_camera2_pane_g2_ParamLimits

0x590a,	// (0x0001037b) main_camera2_pane_g2

0x5921,	// (0x00010392) main_camera2_pane_g3_ParamLimits

0x5921,	// (0x00010392) main_camera2_pane_g3

0x5938,	// (0x000103a9) main_camera2_pane_g4_ParamLimits

0x5938,	// (0x000103a9) main_camera2_pane_g4

0x594f,	// (0x000103c0) main_camera2_pane_g5_ParamLimits

0x594f,	// (0x000103c0) main_camera2_pane_g5

0x5966,	// (0x000103d7) main_camera2_pane_g6_ParamLimits

0x5966,	// (0x000103d7) main_camera2_pane_g6

0x597d,	// (0x000103ee) main_camera2_pane_g7_ParamLimits

0x597d,	// (0x000103ee) main_camera2_pane_g7

0x5994,	// (0x00010405) main_camera2_pane_g8_ParamLimits

0x5994,	// (0x00010405) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x0001a10d) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x0001a10d) main_camera2_pane_g

0x59c2,	// (0x00010433) main_camera2_pane_t1_ParamLimits

0x59c2,	// (0x00010433) main_camera2_pane_t1

0x59f1,	// (0x00010462) main_camera2_pane_t2_ParamLimits

0x59f1,	// (0x00010462) main_camera2_pane_t2

0x5a0e,	// (0x0001047f) main_camera2_pane_t3_ParamLimits

0x5a0e,	// (0x0001047f) main_camera2_pane_t3

0x5a5a,	// (0x000104cb) main_camera2_pane_t4_ParamLimits

0x5a5a,	// (0x000104cb) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x0001a120) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x0001a120) main_camera2_pane_t

0x5acf,	// (0x00010540) cams_zoom_pane_cp4_ParamLimits

0x5acf,	// (0x00010540) cams_zoom_pane_cp4

0x5ae5,	// (0x00010556) image2_cif_pane_ParamLimits

0x5ae5,	// (0x00010556) image2_cif_pane

0x5b08,	// (0x00010579) image2_subqcif_pane_ParamLimits

0x5b08,	// (0x00010579) image2_subqcif_pane

0x5b1e,	// (0x0001058f) main_video2_pane_g1_ParamLimits

0x5b1e,	// (0x0001058f) main_video2_pane_g1

0x5b38,	// (0x000105a9) main_video2_pane_g2_ParamLimits

0x5b38,	// (0x000105a9) main_video2_pane_g2

0x5b4e,	// (0x000105bf) main_video2_pane_g3_ParamLimits

0x5b4e,	// (0x000105bf) main_video2_pane_g3

0x5b64,	// (0x000105d5) main_video2_pane_g4_ParamLimits

0x5b64,	// (0x000105d5) main_video2_pane_g4

0x5b7a,	// (0x000105eb) main_video2_pane_g5_ParamLimits

0x5b7a,	// (0x000105eb) main_video2_pane_g5

0x5b90,	// (0x00010601) main_video2_pane_g6_ParamLimits

0x5b90,	// (0x00010601) main_video2_pane_g6

0x0005,

0xf6be,	// (0x0001a12f) main_video2_pane_g_ParamLimits

0xf6be,	// (0x0001a12f) main_video2_pane_g

0x5baa,	// (0x0001061b) main_video2_pane_t1_ParamLimits

0x5baa,	// (0x0001061b) main_video2_pane_t1

0x5bce,	// (0x0001063f) main_video2_pane_t2_ParamLimits

0x5bce,	// (0x0001063f) main_video2_pane_t2

0x5c18,	// (0x00010689) main_video2_pane_t3_ParamLimits

0x5c18,	// (0x00010689) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x0001a13c) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x0001a13c) main_video2_pane_t

0x5225,	// (0x0000fc96) call_muted_g2

0x0001,

0xf66d,	// (0x0001a0de) call_muted_g

0xa6f5,	// (0x00015166) main_mup2_pane

0x5c5a,	// (0x000106cb) main_mup2_pane_g1_ParamLimits

0x5c5a,	// (0x000106cb) main_mup2_pane_g1

0x5c66,	// (0x000106d7) main_mup2_pane_g2_ParamLimits

0x5c66,	// (0x000106d7) main_mup2_pane_g2

0xcfb9,	// (0x00017a2a) main_mup_pane_g13_cp1

0xcfc1,	// (0x00017a32) mup_volume_pane_cp1

0x5c82,	// (0x000106f3) main_mup2_pane_g4_ParamLimits

0x5c82,	// (0x000106f3) main_mup2_pane_g4

0x5c92,	// (0x00010703) main_mup2_pane_g5_ParamLimits

0x5c92,	// (0x00010703) main_mup2_pane_g5

0x5ca2,	// (0x00010713) main_mup2_pane_g6_ParamLimits

0x5ca2,	// (0x00010713) main_mup2_pane_g6

0x5cb2,	// (0x00010723) main_mup2_pane_g7_ParamLimits

0x5cb2,	// (0x00010723) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x0001a143) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x0001a143) main_mup2_pane_g

0x5cca,	// (0x0001073b) main_mup2_pane_t1_ParamLimits

0x5cca,	// (0x0001073b) main_mup2_pane_t1

0x5ce0,	// (0x00010751) main_mup2_pane_t2_ParamLimits

0x5ce0,	// (0x00010751) main_mup2_pane_t2

0x5cf6,	// (0x00010767) main_mup2_pane_t3_ParamLimits

0x5cf6,	// (0x00010767) main_mup2_pane_t3

0x5d0c,	// (0x0001077d) main_mup2_pane_t4_ParamLimits

0x5d0c,	// (0x0001077d) main_mup2_pane_t4

0x5d24,	// (0x00010795) main_mup2_pane_t5_ParamLimits

0x5d24,	// (0x00010795) main_mup2_pane_t5

0x5d3c,	// (0x000107ad) main_mup2_pane_t6_ParamLimits

0x5d3c,	// (0x000107ad) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x0001a152) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x0001a152) main_mup2_pane_t

0x5d6c,	// (0x000107dd) mup2_visualizer_pane_ParamLimits

0x5d6c,	// (0x000107dd) mup2_visualizer_pane

0x5d97,	// (0x00010808) mup_progress_pane_cp_ParamLimits

0x5d97,	// (0x00010808) mup_progress_pane_cp

0xcf9b,	// (0x00017a0c) mup_volume_pane_cp_ParamLimits

0xcf9b,	// (0x00017a0c) mup_volume_pane_cp

0x5dab,	// (0x0001081c) mup2_visualizer_pane_g1_ParamLimits

0x5dab,	// (0x0001081c) mup2_visualizer_pane_g1

0xceda,	// (0x0001794b) mup2_visualizer_pane_g2_ParamLimits

0xceda,	// (0x0001794b) mup2_visualizer_pane_g2

0x5dc0,	// (0x00010831) mup2_visualizer_pane_g3_ParamLimits

0x5dc0,	// (0x00010831) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x0001a15f) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x0001a15f) mup2_visualizer_pane_g

0xbc5f,	// (0x000166d0) aid_size_cell_fmradio

0x5381,	// (0x0000fdf2) aid_height_parent_landcape

0xaf46,	// (0x000159b7) wml_content_pane_cp

0xaf4e,	// (0x000159bf) wml_tabs_pane

0xaf57,	// (0x000159c8) popup_wml_miniature_window

0xaf5f,	// (0x000159d0) scroll_pane_cp021

0xaf73,	// (0x000159e4) wml_content_pane_comp8

0xa6f5,	// (0x00015166) bg_popup_sub_pane_cp05

0xcef8,	// (0x00017969) popup_wml_miniature_window_g1

0xcf00,	// (0x00017971) wml_miniature_view_pane

0x5dcc,	// (0x0001083d) aid_size_wml_view

0x5dd4,	// (0x00010845) wml_miniature_view_pane_g1

0x5ddd,	// (0x0001084e) wml_miniature_view_pane_g2

0x5de6,	// (0x00010857) wml_miniature_view_pane_g3

0x5dee,	// (0x0001085f) wml_miniature_view_pane_g4

0x5df6,	// (0x00010867) wml_miniature_view_pane_g5

0x5dfe,	// (0x0001086f) wml_miniature_view_pane_g6

0x5e06,	// (0x00010877) wml_miniature_view_pane_g7

0x5e0e,	// (0x0001087f) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x0001a166) wml_miniature_view_pane_g

0xcf08,	// (0x00017979) background_graphic_ParamLimits

0xcf08,	// (0x00017979) background_graphic

0xcf14,	// (0x00017985) wml_tabs_2_pane

0xcf1d,	// (0x0001798e) wml_tabs_3_pane_ParamLimits

0xcf1d,	// (0x0001798e) wml_tabs_3_pane

0xcf2f,	// (0x000179a0) wml_tabs_4_pane_ParamLimits

0xcf2f,	// (0x000179a0) wml_tabs_4_pane

0xcf45,	// (0x000179b6) wml_tabs_5_pane_ParamLimits

0xcf45,	// (0x000179b6) wml_tabs_5_pane

0xcf5f,	// (0x000179d0) wml_tabs_pane_g2_ParamLimits

0xcf5f,	// (0x000179d0) wml_tabs_pane_g2

0xcf73,	// (0x000179e4) wml_tabs_pane_g3_ParamLimits

0xcf73,	// (0x000179e4) wml_tabs_pane_g3

0x5e16,	// (0x00010887) wml_tabs_2_active_pane_ParamLimits

0x5e16,	// (0x00010887) wml_tabs_2_active_pane

0x5e26,	// (0x00010897) wml_tabs_2_passive_pane_ParamLimits

0x5e26,	// (0x00010897) wml_tabs_2_passive_pane

0x5e36,	// (0x000108a7) wml_tabs_3_active_pane_cp_ParamLimits

0x5e36,	// (0x000108a7) wml_tabs_3_active_pane_cp

0x5e47,	// (0x000108b8) wml_tabs_3_passive_pane_ParamLimits

0x5e47,	// (0x000108b8) wml_tabs_3_passive_pane

0x5e58,	// (0x000108c9) wml_tabs_3_passive_pane_cp_ParamLimits

0x5e58,	// (0x000108c9) wml_tabs_3_passive_pane_cp

0x5e69,	// (0x000108da) tabs_4_active_pane

0x5e71,	// (0x000108e2) tabs_4_passive_pane

0x5e79,	// (0x000108ea) tabs_4_passive_pane_cp

0x5e81,	// (0x000108f2) tabs_4_passive_pane_cp2

0x5100,	// (0x0000fb71) aid_height_text

0x4923,	// (0x0000f394) mup_volume_cont_pane_ParamLimits

0x4923,	// (0x0000f394) mup_volume_cont_pane

0x2c66,	// (0x0000d6d7) aid_size_cell_pinb

0x2c70,	// (0x0000d6e1) aid_size_list_pinb

0x5d83,	// (0x000107f4) mup2_volume_cont_pane_ParamLimits

0x5d83,	// (0x000107f4) mup2_volume_cont_pane

0xcf87,	// (0x000179f8) mup2_volume_cont_pane_g1_ParamLimits

0xcf87,	// (0x000179f8) mup2_volume_cont_pane_g1

0x2997,	// (0x0000d408) aid_size_cell_touch_ParamLimits

0x2997,	// (0x0000d408) aid_size_cell_touch

0x2b6e,	// (0x0000d5df) touch_pane_ParamLimits

0x2b6e,	// (0x0000d5df) touch_pane

0xa283,	// (0x00014cf4) main_rss2_pane

0xcfc9,	// (0x00017a3a) listscroll_rss2_pane

0xcfd2,	// (0x00017a43) rss2_navigation_pane

0xcfda,	// (0x00017a4b) list_rss2_pane

0xb6ef,	// (0x00016160) scroll_pane_cp22

0xcfe2,	// (0x00017a53) rss2_navigation_pane_g1

0xcfeb,	// (0x00017a5c) rss2_navigation_pane_g2

0xcff3,	// (0x00017a64) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x0001a177) rss2_navigation_pane_g

0xcffb,	// (0x00017a6c) rss2_navigation_pane_t1

0x5e89,	// (0x000108fa) rss2_list_single_pane_ParamLimits

0x5e89,	// (0x000108fa) rss2_list_single_pane

0xd037,	// (0x00017aa8) rss2_list_single_pane_t2

0xd045,	// (0x00017ab6) rss2_list_single_pane_t3_ParamLimits

0xd045,	// (0x00017ab6) rss2_list_single_pane_t3

0xd062,	// (0x00017ad3) rss2_list_single_pane_t4

0x42bd,	// (0x0000ed2e) smil_status_pane_g1

0xa2d6,	// (0x00014d47) main_image2_pane_ParamLimits

0xa2d6,	// (0x00014d47) main_image2_pane

0x59ab,	// (0x0001041c) main_camera2_pane_g9_ParamLimits

0x59ab,	// (0x0001041c) main_camera2_pane_g9

0x5a9d,	// (0x0001050e) main_camera2_pane_t5_ParamLimits

0x5a9d,	// (0x0001050e) main_camera2_pane_t5

0xceaf,	// (0x00017920) main_camera2_pane_t6_ParamLimits

0xceaf,	// (0x00017920) main_camera2_pane_t6

0x5e9d,	// (0x0001090e) main_image2_pane_g1_ParamLimits

0x5e9d,	// (0x0001090e) main_image2_pane_g1

0x4eb8,	// (0x0000f929) smil2_video_pane_ParamLimits

0x4eb8,	// (0x0000f929) smil2_video_pane

0xa29d,	// (0x00014d0e) aid_zoom_text_primary_cp

0xa2ce,	// (0x00014d3f) popup_preview_fixed_window

0xaea0,	// (0x00015911) im_reading_pane_g1

0x5891,	// (0x00010302) cams2_bc_adjust_pane_cp_ParamLimits

0x5891,	// (0x00010302) cams2_bc_adjust_pane_cp

0x5ac3,	// (0x00010534) cams2_bc_adjust_pane_ParamLimits

0x5ac3,	// (0x00010534) cams2_bc_adjust_pane

0xd070,	// (0x00017ae1) cams2_bc_adjust_pane_g1

0xd078,	// (0x00017ae9) cams2_slider_pane

0xd081,	// (0x00017af2) cams2_slider_pane_g1

0xd08a,	// (0x00017afb) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x0001a17e) cams2_slider_pane_g

0x2d50,	// (0x0000d7c1) calc_display_pane_ParamLimits

0x2d6c,	// (0x0000d7dd) calc_paper_pane_ParamLimits

0x2d8d,	// (0x0000d7fe) grid_calc_pane_ParamLimits

0xb5ab,	// (0x0001601c) popup_clock_digital_window_t1_ParamLimits

0xbbfc,	// (0x0001666d) main_image_pane_t1

0x2d32,	// (0x0000d7a3) aid_size_cell_calc_ParamLimits

0x2d32,	// (0x0000d7a3) aid_size_cell_calc

0x53b1,	// (0x0000fe22) popup_blid_sat_info2_window_ParamLimits

0x53b1,	// (0x0000fe22) popup_blid_sat_info2_window

0xd0ac,	// (0x00017b1d) aid_size_cell_blid

0xd0b4,	// (0x00017b25) bg_popup_window_pane_cp07

0xd0d7,	// (0x00017b48) grid_popup_blid_pane

0xd0df,	// (0x00017b50) heading_pane_cp05_ParamLimits

0xd0df,	// (0x00017b50) heading_pane_cp05

0xd1a7,	// (0x00017c18) cell_popup_blid_pane_ParamLimits

0xd1a7,	// (0x00017c18) cell_popup_blid_pane

0xd1c7,	// (0x00017c38) cell_popup_blid_pane_g1

0xd1cf,	// (0x00017c40) cell_popup_blid_pane_t1

0x5d56,	// (0x000107c7) mup2_indicator_pane_ParamLimits

0x5d56,	// (0x000107c7) mup2_indicator_pane

0xb8ae,	// (0x0001631f) mup2_visualizer_osc_pane

0xcee6,	// (0x00017957) mup2_visualizer_spec_pane_ParamLimits

0xcee6,	// (0x00017957) mup2_visualizer_spec_pane

0x5eb1,	// (0x00010922) mup2_spec_half_pane

0x5eba,	// (0x0001092b) mup2_spec_half_pane_cp

0x5ec2,	// (0x00010933) mup2_spec_bar_pane_ParamLimits

0x5ec2,	// (0x00010933) mup2_spec_bar_pane

0xce3a,	// (0x000178ab) mup2_spec_bar_pane_g1

0xce44,	// (0x000178b5) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x0001a0f1) mup2_spec_bar_pane_g

0x5ee1,	// (0x00010952) mup2_osc_middle_pane

0xce56,	// (0x000178c7) mup2_visualizer_osc_pane_g1

0xa304,	// (0x00014d75) popup_number_entry_window_t1_ParamLimits

0xa317,	// (0x00014d88) popup_number_entry_window_t2_ParamLimits

0xa329,	// (0x00014d9a) popup_number_entry_window_t3_ParamLimits

0x2bb6,	// (0x0000d627) popup_number_entry_window_t5_ParamLimits

0x2bb6,	// (0x0000d627) popup_number_entry_window_t5

0xf12f,	// (0x00019ba0) popup_number_entry_window_t_ParamLimits

0xa33b,	// (0x00014dac) text_title_cp2_ParamLimits

0xbad6,	// (0x00016547) aid_hotspot_pointer_text2_pane

0xbafc,	// (0x0001656d) main_viewer_pane_g9_ParamLimits

0xbafc,	// (0x0001656d) main_viewer_pane_g9

0xb0df,	// (0x00015b50) cale_month_pane_t1_ParamLimits

0xb174,	// (0x00015be5) bg_cale_pane_ParamLimits

0xb18c,	// (0x00015bfd) list_cale_pane_ParamLimits

0xac31,	// (0x000156a2) listscroll_cale_day_pane_t1

0xb19d,	// (0x00015c0e) scroll_pane_cp09_ParamLimits

0x4955,	// (0x0000f3c6) main_mup_eq_pane_t1_ParamLimits

0x4955,	// (0x0000f3c6) main_mup_eq_pane_t1

0x496d,	// (0x0000f3de) main_mup_eq_pane_t2_ParamLimits

0x496d,	// (0x0000f3de) main_mup_eq_pane_t2

0x4983,	// (0x0000f3f4) main_mup_eq_pane_t3_ParamLimits

0x4983,	// (0x0000f3f4) main_mup_eq_pane_t3

0x4999,	// (0x0000f40a) main_mup_eq_pane_t4_ParamLimits

0x4999,	// (0x0000f40a) main_mup_eq_pane_t4

0x49af,	// (0x0000f420) main_mup_eq_pane_t5_ParamLimits

0x49af,	// (0x0000f420) main_mup_eq_pane_t5

0x49c5,	// (0x0000f436) main_mup_eq_pane_t6_ParamLimits

0x49c5,	// (0x0000f436) main_mup_eq_pane_t6

0x49d7,	// (0x0000f448) main_mup_eq_pane_t7_ParamLimits

0x49d7,	// (0x0000f448) main_mup_eq_pane_t7

0x49e9,	// (0x0000f45a) main_mup_eq_pane_t8_ParamLimits

0x49e9,	// (0x0000f45a) main_mup_eq_pane_t8

0x49fb,	// (0x0000f46c) main_mup_eq_pane_t9_ParamLimits

0x49fb,	// (0x0000f46c) main_mup_eq_pane_t9

0x4a11,	// (0x0000f482) main_mup_eq_pane_t10_ParamLimits

0x4a11,	// (0x0000f482) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00019f2d) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00019f2d) main_mup_eq_pane_t

0x4aa4,	// (0x0000f515) mup_equalizer_pane_cp5_ParamLimits

0x4ab6,	// (0x0000f527) mup_equalizer_pane_cp6_ParamLimits

0x4ac8,	// (0x0000f539) mup_equalizer_pane_cp7_ParamLimits

0xa283,	// (0x00014cf4) main_gallery_pane

0xce5f,	// (0x000178d0) smil2_volume_pane

0xce67,	// (0x000178d8) smil_status_volume_pane_g1_ParamLimits

0xce7a,	// (0x000178eb) smil_status_volume_pane_g2_ParamLimits

0xce8d,	// (0x000178fe) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x0001a0f6) smil_status_volume_pane_g_ParamLimits

0xd0b4,	// (0x00017b25) bg_popup_window_pane_cp07_ParamLimits

0xd0c2,	// (0x00017b33) blid_firmament_pane

0x5eea,	// (0x0001095b) aid_size_cell_gallery_ParamLimits

0x5eea,	// (0x0001095b) aid_size_cell_gallery

0x5f00,	// (0x00010971) grid_gallery_pane_ParamLimits

0x5f00,	// (0x00010971) grid_gallery_pane

0x5f14,	// (0x00010985) cell_gallery_pane_ParamLimits

0x5f14,	// (0x00010985) cell_gallery_pane

0xd1dd,	// (0x00017c4e) bg_cell_gallery_focus_pane_ParamLimits

0xd1dd,	// (0x00017c4e) bg_cell_gallery_focus_pane

0xd1ef,	// (0x00017c60) cell_gallery_pane_g1_ParamLimits

0xd1ef,	// (0x00017c60) cell_gallery_pane_g1

0x5f5b,	// (0x000109cc) cell_gallery_pane_g2_ParamLimits

0x5f5b,	// (0x000109cc) cell_gallery_pane_g2

0x5f68,	// (0x000109d9) cell_gallery_pane_g3_ParamLimits

0x5f68,	// (0x000109d9) cell_gallery_pane_g3

0xd1fb,	// (0x00017c6c) cell_gallery_pane_g4_ParamLimits

0xd1fb,	// (0x00017c6c) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x0001a1a4) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x0001a1a4) cell_gallery_pane_g

0xd207,	// (0x00017c78) bg_cell_gallery_focus_pane_g1

0xd20f,	// (0x00017c80) bg_cell_gallery_focus_pane_g2

0xd217,	// (0x00017c88) bg_cell_gallery_focus_pane_g3

0xd21f,	// (0x00017c90) bg_cell_gallery_focus_pane_g4

0xd227,	// (0x00017c98) bg_cell_gallery_focus_pane_g5

0xd22f,	// (0x00017ca0) bg_cell_gallery_focus_pane_g6

0xd237,	// (0x00017ca8) bg_cell_gallery_focus_pane_g7

0xd23f,	// (0x00017cb0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x0001a1ad) bg_cell_gallery_focus_pane_g

0xd247,	// (0x00017cb8) aid_firma_cardinal

0xd25b,	// (0x00017ccc) blid_firmament_pane_t1

0xd272,	// (0x00017ce3) blid_firmament_pane_t2

0xd289,	// (0x00017cfa) blid_firmament_pane_t3

0xd2a0,	// (0x00017d11) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x0001a1be) blid_firmament_pane_t

0xd2b7,	// (0x00017d28) blid_sat_info_pane

0xd2c7,	// (0x00017d38) blid_sat_info_pane_g1

0xd2c7,	// (0x00017d38) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x0001a1c7) blid_sat_info_pane_g

0xd2d1,	// (0x00017d42) blid_sat_info_pane_t1

0xd2df,	// (0x00017d50) smil2_volume_content_pane

0xd2e8,	// (0x00017d59) smil2_volume_pane_g1

0xd2f0,	// (0x00017d61) smil2_volume_content_pane_g1

0xd2f9,	// (0x00017d6a) smil2_volume_content_pane_g2

0xd302,	// (0x00017d73) smil2_volume_content_pane_g3

0xd30b,	// (0x00017d7c) smil2_volume_content_pane_g4

0xd314,	// (0x00017d85) smil2_volume_content_pane_g5

0xd31d,	// (0x00017d8e) smil2_volume_content_pane_g6

0xd326,	// (0x00017d97) smil2_volume_content_pane_g7

0xd32f,	// (0x00017da0) smil2_volume_content_pane_g8

0xd338,	// (0x00017da9) smil2_volume_content_pane_g9

0xd341,	// (0x00017db2) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x0001a1cc) smil2_volume_content_pane_g

0x31aa,	// (0x0000dc1b) cale_week_day_heading_pane_t1_ParamLimits

0x31d4,	// (0x0000dc45) cale_week_day_heading_pane_t2_ParamLimits

0x31fe,	// (0x0000dc6f) cale_week_day_heading_pane_t3_ParamLimits

0x3228,	// (0x0000dc99) cale_week_day_heading_pane_t4_ParamLimits

0x3252,	// (0x0000dcc3) cale_week_day_heading_pane_t5_ParamLimits

0x327c,	// (0x0000dced) cale_week_day_heading_pane_t6_ParamLimits

0x32a6,	// (0x0000dd17) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00019ca5) cale_week_day_heading_pane_t_ParamLimits

0xac43,	// (0x000156b4) bg_cale_side_pane_ParamLimits

0x32d0,	// (0x0000dd41) cale_week_time_pane_t1_ParamLimits

0x32fc,	// (0x0000dd6d) cale_week_time_pane_t2_ParamLimits

0x3328,	// (0x0000dd99) cale_week_time_pane_t3_ParamLimits

0x3354,	// (0x0000ddc5) cale_week_time_pane_t4_ParamLimits

0x3380,	// (0x0000ddf1) cale_week_time_pane_t5_ParamLimits

0x33ac,	// (0x0000de1d) cale_week_time_pane_t6_ParamLimits

0x33d8,	// (0x0000de49) cale_week_time_pane_t7_ParamLimits

0x3404,	// (0x0000de75) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00019cb4) cale_week_time_pane_t_ParamLimits

0x3430,	// (0x0000dea1) cell_cale_week_pane_g2_ParamLimits

0xac43,	// (0x000156b4) bg_cale_side_pane_cp01_ParamLimits

0x4160,	// (0x0000ebd1) cale_month_week_pane_t1_ParamLimits

0x4177,	// (0x0000ebe8) cale_month_week_pane_t2_ParamLimits

0x418e,	// (0x0000ebff) cale_month_week_pane_t3_ParamLimits

0x41a5,	// (0x0000ec16) cale_month_week_pane_t4_ParamLimits

0x41bc,	// (0x0000ec2d) cale_month_week_pane_t5_ParamLimits

0x41d3,	// (0x0000ec44) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00019d8d) cale_month_week_pane_t_ParamLimits

0xb11b,	// (0x00015b8c) cell_cale_month_pane_g1_ParamLimits

0xa283,	// (0x00014cf4) main_cale_event_viewer_pane

0xa283,	// (0x00014cf4) listscroll_cale_event_viewer_pane

0xd34a,	// (0x00017dbb) list_cale_ev_pane

0xd352,	// (0x00017dc3) scroll_pane_cp023

0x5f75,	// (0x000109e6) field_cale_ev_pane_ParamLimits

0x5f75,	// (0x000109e6) field_cale_ev_pane

0xd35e,	// (0x00017dcf) field_cale_ev_content_pane_ParamLimits

0xd35e,	// (0x00017dcf) field_cale_ev_content_pane

0xd36a,	// (0x00017ddb) field_cale_ev_pane_g1_ParamLimits

0xd36a,	// (0x00017ddb) field_cale_ev_pane_g1

0xd376,	// (0x00017de7) field_cale_ev_pane_g2_ParamLimits

0xd376,	// (0x00017de7) field_cale_ev_pane_g2

0xd38e,	// (0x00017dff) field_cale_ev_pane_g3_ParamLimits

0xd38e,	// (0x00017dff) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x0001a1e1) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x0001a1e1) field_cale_ev_pane_g

0xd3a6,	// (0x00017e17) field_cale_ev_pane_t1_ParamLimits

0xd3a6,	// (0x00017e17) field_cale_ev_pane_t1

0x5f8f,	// (0x00010a00) field_cale_ev_content_pane_t1_ParamLimits

0x5f8f,	// (0x00010a00) field_cale_ev_content_pane_t1

0xba3f,	// (0x000164b0) bg_button_pane_cp01

0xac09,	// (0x0001567a) listscroll_cale_week_pane_ParamLimits

0x2fd4,	// (0x0000da45) popup_toolbar_window_cp01

0xac31,	// (0x000156a2) listscroll_cale_week_pane_t1_ParamLimits

0xaa41,	// (0x000154b2) listscroll_cale_day_pane_ParamLimits

0x2fd4,	// (0x0000da45) popup_toolbar_window_cp02

0xac31,	// (0x000156a2) listscroll_cale_day_pane_t1_ParamLimits

0xac09,	// (0x0001567a) main_cale_month_pane_ParamLimits

0x55ad,	// (0x0001001e) popup_toolbar_window_cp03_ParamLimits

0x55ad,	// (0x0001001e) popup_toolbar_window_cp03

0x4d92,	// (0x0000f803) main_image_pane_g2_ParamLimits

0x4d92,	// (0x0000f803) main_image_pane_g2

0x4da3,	// (0x0000f814) main_image_pane_g3_ParamLimits

0x4da3,	// (0x0000f814) main_image_pane_g3

0x0002,

0xf54e,	// (0x00019fbf) main_image_pane_g_ParamLimits

0xf54e,	// (0x00019fbf) main_image_pane_g

0xbbfc,	// (0x0001666d) main_image_pane_t1_ParamLimits

0x4db4,	// (0x0000f825) main_image_pane_t2_ParamLimits

0x4db4,	// (0x0000f825) main_image_pane_t2

0x4dc6,	// (0x0000f837) main_image_pane_t3_ParamLimits

0x4dc6,	// (0x0000f837) main_image_pane_t3

0x4dee,	// (0x0000f85f) main_image_pane_t4_ParamLimits

0x4dee,	// (0x0000f85f) main_image_pane_t4

0x0003,

0xf555,	// (0x00019fc6) main_image_pane_t_ParamLimits

0xf555,	// (0x00019fc6) main_image_pane_t

0x4e0e,	// (0x0000f87f) popup_image_details_window_cp01

0x4e16,	// (0x0000f887) popup_toobar_trans_pane_cp01_ParamLimits

0x4e16,	// (0x0000f887) popup_toobar_trans_pane_cp01

0x547a,	// (0x0000feeb) popup_image_details_window_ParamLimits

0x547a,	// (0x0000feeb) popup_image_details_window

0xcdc2,	// (0x00017833) popup_image_focus_window

0x585f,	// (0x000102d0) camera2_autofocus_pane_ParamLimits

0x585f,	// (0x000102d0) camera2_autofocus_pane

0xa283,	// (0x00014cf4) bg_popup_sub_pane_cp06

0xd3bd,	// (0x00017e2e) popup_image_focus_window_g1

0xd3c5,	// (0x00017e36) popup_image_focus_window_g2

0xd3cd,	// (0x00017e3e) popup_image_focus_window_g3

0xd3d5,	// (0x00017e46) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x0001a1e8) popup_image_focus_window_g

0xd3dd,	// (0x00017e4e) popup_image_focus_window_t1

0xd3eb,	// (0x00017e5c) popup_image_focus_window_t2

0xd3fa,	// (0x00017e6b) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x0001a1f1) popup_image_focus_window_t

0xd408,	// (0x00017e79) camera2_autofocus_pane_g1

0xa2d6,	// (0x00014d47) bg_tb_trans_pane_cp01

0xd416,	// (0x00017e87) popup_image_details_window_g1

0xd429,	// (0x00017e9a) popup_image_details_window_g2

0x0002,

0xf792,	// (0x0001a203) popup_image_details_window_g

0xd452,	// (0x00017ec3) popup_image_details_window_t1

0xd464,	// (0x00017ed5) popup_image_details_window_t2

0xd47d,	// (0x00017eee) popup_image_details_window_t3

0xd491,	// (0x00017f02) popup_image_details_window_t4

0xd4ac,	// (0x00017f1d) popup_image_details_window_t5

0x0004,

0xf799,	// (0x0001a20a) popup_image_details_window_t

0xaa0f,	// (0x00015480) bg_calc_paper_pane_ParamLimits

0xa283,	// (0x00014cf4) grid_highlight_pane_cp013

0xaa27,	// (0x00015498) list_calc_pane_ParamLimits

0xaa39,	// (0x000154aa) scroll_pane_cp024

0xaa41,	// (0x000154b2) bg_calc_display_pane_ParamLimits

0xaa4d,	// (0x000154be) calc_display_pane_t1_ParamLimits

0xaa62,	// (0x000154d3) calc_display_pane_t2_ParamLimits

0xaa77,	// (0x000154e8) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00019c27) calc_display_pane_t_ParamLimits

0x2f05,	// (0x0000d976) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00019c44) cell_calc_pane_g

0x2f0e,	// (0x0000d97f) cell_calc_pane_t1

0xaaee,	// (0x0001555f) grid_highlight_pane_cp02_ParamLimits

0xab04,	// (0x00015575) toolbar_button_pane_cp01_ParamLimits

0xab04,	// (0x00015575) toolbar_button_pane_cp01

0xbc41,	// (0x000166b2) temp_image_control_pane_ParamLimits

0xbc41,	// (0x000166b2) temp_image_control_pane

0xa2d6,	// (0x00014d47) main_mp3_pane

0xd4c6,	// (0x00017f37) temp_image_control_pane_g1_ParamLimits

0xd4c6,	// (0x00017f37) temp_image_control_pane_g1

0xd4d4,	// (0x00017f45) temp_image_control_pane_g2_ParamLimits

0xd4d4,	// (0x00017f45) temp_image_control_pane_g2

0xd4e6,	// (0x00017f57) temp_image_control_pane_g3_ParamLimits

0xd4e6,	// (0x00017f57) temp_image_control_pane_g3

0x5fdc,	// (0x00010a4d) temp_image_control_pane_g4_ParamLimits

0x5fdc,	// (0x00010a4d) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x0001a215) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x0001a215) temp_image_control_pane_g

0xd4c6,	// (0x00017f37) main_mp3_pane_g1

0x5fed,	// (0x00010a5e) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x0001a21e) main_mp3_pane_g

0xd529,	// (0x00017f9a) main_mp3_pane_t1

0xad09,	// (0x0001577a) main_camera_pane_g8_ParamLimits

0xad09,	// (0x0001577a) main_camera_pane_g8

0x36c5,	// (0x0000e136) main_video_pane_g7_ParamLimits

0x36c5,	// (0x0000e136) main_video_pane_g7

0xcec8,	// (0x00017939) main_camera2_pane_t7_ParamLimits

0xcec8,	// (0x00017939) main_camera2_pane_t7

0xaf06,	// (0x00015977) scroll_pane_cp025_ParamLimits

0xaf06,	// (0x00015977) scroll_pane_cp025

0xaf1a,	// (0x0001598b) scroll_pane_cp026_ParamLimits

0xaf1a,	// (0x0001598b) scroll_pane_cp026

0xaf29,	// (0x0001599a) wml_content_pane_ParamLimits

0xa283,	// (0x00014cf4) main_touch_calib_pane

0x60a3,	// (0x00010b14) main_touch_calib_pane_g1

0x60af,	// (0x00010b20) main_touch_calib_pane_g2

0x60bb,	// (0x00010b2c) main_touch_calib_pane_g3

0x60c7,	// (0x00010b38) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x0001a23c) main_touch_calib_pane_g

0x60d3,	// (0x00010b44) main_touch_calib_pane_t1

0x60eb,	// (0x00010b5c) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x0001a245) main_touch_calib_pane_t

0xb7a0,	// (0x00016211) mup_progress_pane_cp02

0xb7bf,	// (0x00016230) navi_pane_g1

0xb83f,	// (0x000162b0) navi_pane_mp_t3

0xa2d6,	// (0x00014d47) main_mp3_pane_ParamLimits

0x55e7,	// (0x00010058) navi_pane_ParamLimits

0xd4c6,	// (0x00017f37) main_mp3_pane_g1_ParamLimits

0x5fed,	// (0x00010a5e) main_mp3_pane_g2_ParamLimits

0x5ff9,	// (0x00010a6a) main_mp3_pane_g3_ParamLimits

0x5ff9,	// (0x00010a6a) main_mp3_pane_g3

0x6005,	// (0x00010a76) main_mp3_pane_g4_ParamLimits

0x6005,	// (0x00010a76) main_mp3_pane_g4

0xd4f6,	// (0x00017f67) main_mp3_pane_g5_ParamLimits

0xd4f6,	// (0x00017f67) main_mp3_pane_g5

0xd504,	// (0x00017f75) main_mp3_pane_g6_ParamLimits

0xd504,	// (0x00017f75) main_mp3_pane_g6

0xd511,	// (0x00017f82) main_mp3_pane_g7_ParamLimits

0xd511,	// (0x00017f82) main_mp3_pane_g7

0xd51d,	// (0x00017f8e) main_mp3_pane_g8_ParamLimits

0xd51d,	// (0x00017f8e) main_mp3_pane_g8

0xf7ad,	// (0x0001a21e) main_mp3_pane_g_ParamLimits

0x6011,	// (0x00010a82) main_mp3_pane_t2

0x601f,	// (0x00010a90) main_mp3_pane_t3

0xd537,	// (0x00017fa8) main_mp3_pane_t4

0xd545,	// (0x00017fb6) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x0001a22f) main_mp3_pane_t

0xd553,	// (0x00017fc4) mup_progress_pane_cp01

0xa29d,	// (0x00014d0e) aid_zoom_text_secondary2

0xd34a,	// (0x00017dbb) list_cale_ev2_pane

0xd352,	// (0x00017dc3) scroll_pane_cp023_ParamLimits

0x13af,	// (0x0000be20) field_cale_ev2_pane_ParamLimits

0x13af,	// (0x0000be20) field_cale_ev2_pane

0xd55b,	// (0x00017fcc) field_cale_ev2_pane_g1_ParamLimits

0xd55b,	// (0x00017fcc) field_cale_ev2_pane_g1

0xd567,	// (0x00017fd8) field_cale_ev2_pane_g2_ParamLimits

0xd567,	// (0x00017fd8) field_cale_ev2_pane_g2

0xd57f,	// (0x00017ff0) field_cale_ev2_pane_g3_ParamLimits

0xd57f,	// (0x00017ff0) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x0001a250) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x0001a250) field_cale_ev2_pane_g

0xd5a3,	// (0x00018014) field_cale_ev2_pane_t1_ParamLimits

0xd5a3,	// (0x00018014) field_cale_ev2_pane_t1

0xd5ba,	// (0x0001802b) field_cale_ev2_pane_t2_ParamLimits

0xd5ba,	// (0x0001802b) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x0001a259) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x0001a259) field_cale_ev2_pane_t

0x4c4d,	// (0x0000f6be) main_postcard_pane_g5_ParamLimits

0x4c4d,	// (0x0000f6be) main_postcard_pane_g5

0x4c61,	// (0x0000f6d2) main_postcard_pane_g6_ParamLimits

0x4c61,	// (0x0000f6d2) main_postcard_pane_g6

0x34a7,	// (0x0000df18) camera2_autofocus_pane_cp_ParamLimits

0x34a7,	// (0x0000df18) camera2_autofocus_pane_cp

0xa2d6,	// (0x00014d47) main_mup3_pane

0x6159,	// (0x00010bca) main_mup3_pane_g1_ParamLimits

0x6159,	// (0x00010bca) main_mup3_pane_g1

0x617b,	// (0x00010bec) main_mup3_pane_g2_ParamLimits

0x617b,	// (0x00010bec) main_mup3_pane_g2

0x61e3,	// (0x00010c54) main_mup3_pane_g3_ParamLimits

0x61e3,	// (0x00010c54) main_mup3_pane_g3

0x6221,	// (0x00010c92) main_mup3_pane_g4_ParamLimits

0x6221,	// (0x00010c92) main_mup3_pane_g4

0x625f,	// (0x00010cd0) main_mup3_pane_g5_ParamLimits

0x625f,	// (0x00010cd0) main_mup3_pane_g5

0x629d,	// (0x00010d0e) main_mup3_pane_g6_ParamLimits

0x629d,	// (0x00010d0e) main_mup3_pane_g6

0xd5cf,	// (0x00018040) main_mup3_pane_g7_ParamLimits

0xd5cf,	// (0x00018040) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x0001a269) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x0001a269) main_mup3_pane_g

0x6313,	// (0x00010d84) main_mup3_pane_t1_ParamLimits

0x6313,	// (0x00010d84) main_mup3_pane_t1

0x637b,	// (0x00010dec) main_mup3_pane_t2_ParamLimits

0x637b,	// (0x00010dec) main_mup3_pane_t2

0x6443,	// (0x00010eb4) main_mup3_pane_t4_ParamLimits

0x6443,	// (0x00010eb4) main_mup3_pane_t4

0x6491,	// (0x00010f02) main_mup3_pane_t5_ParamLimits

0x6491,	// (0x00010f02) main_mup3_pane_t5

0x653f,	// (0x00010fb0) main_mup3_pane_t6_ParamLimits

0x653f,	// (0x00010fb0) main_mup3_pane_t6

0x0005,

0xf809,	// (0x0001a27a) main_mup3_pane_t_ParamLimits

0xf809,	// (0x0001a27a) main_mup3_pane_t

0x65f3,	// (0x00011064) mup3_progress_pane_ParamLimits

0x65f3,	// (0x00011064) mup3_progress_pane

0x664f,	// (0x000110c0) popup_mup3_control_window_ParamLimits

0x664f,	// (0x000110c0) popup_mup3_control_window

0xd5dd,	// (0x0001804e) popup_mup3_text_window

0x667d,	// (0x000110ee) mup3_progress_pane_t1

0x6693,	// (0x00011104) mup3_progress_pane_t2

0xd5e5,	// (0x00018056) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x0001a287) mup3_progress_pane_t

0xd5fc,	// (0x0001806d) mup_progress_pane_cp03

0xa283,	// (0x00014cf4) bg_tb_trans_pane_cp04

0x66a9,	// (0x0001111a) mup3_volume_pane

0x66b1,	// (0x00011122) popup_mup3_control_window_g1

0x66ba,	// (0x0001112b) mup3_volume_pane_g1

0x66c3,	// (0x00011134) mup3_volume_pane_g2

0x66cc,	// (0x0001113d) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x0001a28e) mup3_volume_pane_g

0xa283,	// (0x00014cf4) bg_tb_trans_pane_cp03

0xd60c,	// (0x0001807d) popup_mup3_text_window_g1

0xd614,	// (0x00018085) popup_mup3_text_window_t1

0xaac5,	// (0x00015536) list_calc_item_pane_g1_ParamLimits

0xcfb0,	// (0x00017a21) mup_volume_pane_cp_g1

0x6103,	// (0x00010b74) main_touch_calib_pane_t3

0x6115,	// (0x00010b86) main_touch_calib_pane_t4

0x6127,	// (0x00010b98) main_touch_calib_pane_t5

0xa28d,	// (0x00014cfe) aid_cell_size_toolbar2

0xa295,	// (0x00014d06) aid_popup3_width_pane

0xa29d,	// (0x00014d0e) aid_zoom_text_msg_primary

0xace9,	// (0x0001575a) vorec_t7

0xaa89,	// (0x000154fa) bg_calc_paper_pane_g1_ParamLimits

0xaa95,	// (0x00015506) bg_calc_paper_pane_g2_ParamLimits

0xaaa1,	// (0x00015512) bg_calc_paper_pane_g3_ParamLimits

0xaaad,	// (0x0001551e) bg_calc_paper_pane_g4_ParamLimits

0xaab9,	// (0x0001552a) bg_calc_paper_pane_g5_ParamLimits

0x2e9f,	// (0x0000d910) bg_calc_paper_pane_g6_ParamLimits

0x2eae,	// (0x0000d91f) bg_calc_paper_pane_g7_ParamLimits

0x2ebd,	// (0x0000d92e) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00019c2e) bg_calc_paper_pane_g_ParamLimits

0x2ecc,	// (0x0000d93d) calc_bg_paper_pane_g9_ParamLimits

0x35db,	// (0x0000e04c) image_qvga_pane_ParamLimits

0x35db,	// (0x0000e04c) image_qvga_pane

0xa950,	// (0x000153c1) bg_popup_sub_pane_cp04_ParamLimits

0xbb78,	// (0x000165e9) popup_mup_playback_window_g1_ParamLimits

0xbb84,	// (0x000165f5) popup_mup_playback_window_t1_ParamLimits

0xbb99,	// (0x0001660a) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00019fba) popup_mup_playback_window_t_ParamLimits

0x5c76,	// (0x000106e7) main_mup2_pane_g3_ParamLimits

0x5c76,	// (0x000106e7) main_mup2_pane_g3

0x38a2,	// (0x0000e313) popup_toolbar_window_cp04

0xbf7a,	// (0x000169eb) popup_call2_audio_second_window_g3_ParamLimits

0xbf7a,	// (0x000169eb) popup_call2_audio_second_window_g3

0xc384,	// (0x00016df5) popup_call2_audio_first_window_g4_ParamLimits

0xc384,	// (0x00016df5) popup_call2_audio_first_window_g4

0xca03,	// (0x00017474) popup_call2_audio_in_window_g4_ParamLimits

0xca03,	// (0x00017474) popup_call2_audio_in_window_g4

0x4d74,	// (0x0000f7e5) aid_area_sk_bg_cut_ParamLimits

0x4d74,	// (0x0000f7e5) aid_area_sk_bg_cut

0xbbae,	// (0x0001661f) aid_area_sk_bg_cut_2_ParamLimits

0xbbae,	// (0x0001661f) aid_area_sk_bg_cut_2

0x5f4b,	// (0x000109bc) aid_placing_details_win

0x5f53,	// (0x000109c4) aid_placing_details_win_2

0xd408,	// (0x00017e79) camera2_autofocus_pane_g1_ParamLimits

0x2b1d,	// (0x0000d58e) popup_fixed_preview_cale_window_ParamLimits

0x2b1d,	// (0x0000d58e) popup_fixed_preview_cale_window

0xb8c8,	// (0x00016339) navi_slider_pane_g3

0xb8d1,	// (0x00016342) navi_slider_pane_g4

0xb8da,	// (0x0001634b) navi_slider_pane_g5

0xb8c8,	// (0x00016339) navi_slider_pane_g6

0xb8e3,	// (0x00016354) navi_slider_pane_g7

0xba04,	// (0x00016475) mup_scale_pane_g3

0xba0d,	// (0x0001647e) mup_scale_pane_g4

0xba16,	// (0x00016487) mup_scale_pane_g5

0x4adc,	// (0x0000f54d) mup_scale_pane_g6

0x4ae5,	// (0x0000f556) mup_scale_pane_g7

0xb8c8,	// (0x00016339) cams2_slider_pane_g3

0xd093,	// (0x00017b04) cams2_slider_pane_g4

0xd09b,	// (0x00017b0c) cams2_slider_pane_g5

0xb8c8,	// (0x00016339) cams2_slider_pane_g6

0xd0a3,	// (0x00017b14) cams2_slider_pane_g7

0xd2c7,	// (0x00017d38) camera2_autofocus_pane_cp_g1

0xd622,	// (0x00018093) bg_popup_preview_window_pane_cp02_ParamLimits

0xd622,	// (0x00018093) bg_popup_preview_window_pane_cp02

0x66d5,	// (0x00011146) list_fp_cale_pane_ParamLimits

0x66d5,	// (0x00011146) list_fp_cale_pane

0xd62e,	// (0x0001809f) popup_fixed_preview_cale_window_t1_ParamLimits

0xd62e,	// (0x0001809f) popup_fixed_preview_cale_window_t1

0x66e1,	// (0x00011152) popup_fixed_preview_cale_window_t2_ParamLimits

0x66e1,	// (0x00011152) popup_fixed_preview_cale_window_t2

0x66f6,	// (0x00011167) popup_fixed_preview_cale_window_t3_ParamLimits

0x66f6,	// (0x00011167) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x0001a295) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x0001a295) popup_fixed_preview_cale_window_t

0x670b,	// (0x0001117c) list_single_fp_cale_pane_ParamLimits

0x670b,	// (0x0001117c) list_single_fp_cale_pane

0x671f,	// (0x00011190) list_single_fp_cale_pane_g1_ParamLimits

0x671f,	// (0x00011190) list_single_fp_cale_pane_g1

0xd64c,	// (0x000180bd) list_single_fp_cale_pane_g2_ParamLimits

0xd64c,	// (0x000180bd) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x0001a29c) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x0001a29c) list_single_fp_cale_pane_g

0x672b,	// (0x0001119c) list_single_fp_cale_pane_t1_ParamLimits

0x672b,	// (0x0001119c) list_single_fp_cale_pane_t1

0x673d,	// (0x000111ae) list_single_fp_cale_pane_t2_ParamLimits

0x673d,	// (0x000111ae) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x0001a2a3) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x0001a2a3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa283,	// (0x00014cf4) main_dialer_pane

0x6770,	// (0x000111e1) aid_cell_size_keypad

0x677a,	// (0x000111eb) dialer_ne_pane

0x6782,	// (0x000111f3) grid_dialer_command_1_pane

0x678a,	// (0x000111fb) grid_dialer_command_2_pane

0x6792,	// (0x00011203) grid_dialer_keypad_pane

0x67a2,	// (0x00011213) bg_popup_call_pane_cp06_ParamLimits

0x67a2,	// (0x00011213) bg_popup_call_pane_cp06

0x67ae,	// (0x0001121f) dialer_ne_clear_pane_ParamLimits

0x67ae,	// (0x0001121f) dialer_ne_clear_pane

0xd665,	// (0x000180d6) dialer_ne_pane_g1

0xd66d,	// (0x000180de) dialer_ne_pane_t1_ParamLimits

0xd66d,	// (0x000180de) dialer_ne_pane_t1

0x67ba,	// (0x0001122b) dialer_ne_pane_t2_ParamLimits

0x67ba,	// (0x0001122b) dialer_ne_pane_t2

0x67e4,	// (0x00011255) dialer_ne_pane_t3_ParamLimits

0x67e4,	// (0x00011255) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x0001a2a8) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x0001a2a8) dialer_ne_pane_t

0x6814,	// (0x00011285) dialer_ne_pane_t3_copy1_ParamLimits

0x6814,	// (0x00011285) dialer_ne_pane_t3_copy1

0x6843,	// (0x000112b4) cell_dialer_keypad_pane_ParamLimits

0x6843,	// (0x000112b4) cell_dialer_keypad_pane

0x6858,	// (0x000112c9) cell_dialer_command_1_pane_ParamLimits

0x6858,	// (0x000112c9) cell_dialer_command_1_pane

0x686e,	// (0x000112df) cell_dialer_command_2_pane_ParamLimits

0x686e,	// (0x000112df) cell_dialer_command_2_pane

0xd67f,	// (0x000180f0) bg_button_pane_cp02_ParamLimits

0xd67f,	// (0x000180f0) bg_button_pane_cp02

0x687d,	// (0x000112ee) cell_dialer_keypad_pane_g1_ParamLimits

0x687d,	// (0x000112ee) cell_dialer_keypad_pane_g1

0xd67f,	// (0x000180f0) bg_button_pane_cp03_ParamLimits

0xd67f,	// (0x000180f0) bg_button_pane_cp03

0x6892,	// (0x00011303) cell_dialer_command_1_pane_g1_ParamLimits

0x6892,	// (0x00011303) cell_dialer_command_1_pane_g1

0xd68b,	// (0x000180fc) bg_button_pane_cp04

0x68a6,	// (0x00011317) cell_dialer_command_2_pane_g1

0xb8ae,	// (0x0001631f) bg_button_pane_cp06

0xd693,	// (0x00018104) dialer_ne_clear_pane_g1

0xb7cb,	// (0x0001623c) navi_pane_g2

0x46e1,	// (0x0000f152) navi_pane_g3

0x0002,

0xf44c,	// (0x00019ebd) navi_pane_g

0xb84d,	// (0x000162be) navi_pane_mv_g2

0xb875,	// (0x000162e6) navi_pane_mv_g5

0x4706,	// (0x0000f177) navi_pane_mv_t1

0xaa41,	// (0x000154b2) main_clock2_pane

0x68da,	// (0x0001134b) main_clock2_list_pane_ParamLimits

0x68da,	// (0x0001134b) main_clock2_list_pane

0x690c,	// (0x0001137d) main_clock2_pane_t1_ParamLimits

0x690c,	// (0x0001137d) main_clock2_pane_t1

0x6943,	// (0x000113b4) main_clock2_pane_t2_ParamLimits

0x6943,	// (0x000113b4) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x0001a2af) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x0001a2af) main_clock2_pane_t

0x69c5,	// (0x00011436) popup_clock_analogue_window_cp03_ParamLimits

0x69c5,	// (0x00011436) popup_clock_analogue_window_cp03

0x69e8,	// (0x00011459) popup_clock_digital_window_cp02_ParamLimits

0x69e8,	// (0x00011459) popup_clock_digital_window_cp02

0x6a59,	// (0x000114ca) main_clock2_list_single_pane_ParamLimits

0x6a59,	// (0x000114ca) main_clock2_list_single_pane

0xb8ae,	// (0x0001631f) list_highlight_pane_cp05

0xd69b,	// (0x0001810c) main_clock2_list_single_pane_t1

0x38a2,	// (0x0000e313) popup_toolbar_window_cp04_ParamLimits

0x5fac,	// (0x00010a1d) camera2_autofocus_pane_g2_ParamLimits

0x5fac,	// (0x00010a1d) camera2_autofocus_pane_g2

0x5fb8,	// (0x00010a29) camera2_autofocus_pane_g3_ParamLimits

0x5fb8,	// (0x00010a29) camera2_autofocus_pane_g3

0x5fc4,	// (0x00010a35) camera2_autofocus_pane_g4_ParamLimits

0x5fc4,	// (0x00010a35) camera2_autofocus_pane_g4

0x5fd0,	// (0x00010a41) camera2_autofocus_pane_g5_ParamLimits

0x5fd0,	// (0x00010a41) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x0001a1f8) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x0001a1f8) camera2_autofocus_pane_g

0x6139,	// (0x00010baa) camera2_autofocus_pane_cp_g2

0x6141,	// (0x00010bb2) camera2_autofocus_pane_cp_g3

0x6149,	// (0x00010bba) camera2_autofocus_pane_cp_g4

0x6151,	// (0x00010bc2) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x0001a25e) camera2_autofocus_pane_cp_g

0x679a,	// (0x0001120b) popup_dialer_spcha_window

0xa283,	// (0x00014cf4) bg_popup_sub_pane_cp07

0xd6a9,	// (0x0001811a) list_spcha_pane

0xd6b1,	// (0x00018122) list_single_spcha_pane_ParamLimits

0xd6b1,	// (0x00018122) list_single_spcha_pane

0xa283,	// (0x00014cf4) list_highlight_pane_cp06

0xd6c2,	// (0x00018133) list_single_spcha_pane_t1

0xc7ad,	// (0x0001721e) popup_call2_audio_out_window_g4_ParamLimits

0xc7ad,	// (0x0001721e) popup_call2_audio_out_window_g4

0xa283,	// (0x00014cf4) main_imed2_pane

0xcdca,	// (0x0001783b) popup_imed_adjust2_window

0x5490,	// (0x0000ff01) popup_imed_trans_window_ParamLimits

0x5490,	// (0x0000ff01) popup_imed_trans_window

0xd10b,	// (0x00017b7c) popup_blid_sat_info2_window_t1

0xd119,	// (0x00017b8a) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x0001a18d) popup_blid_sat_info2_window_t

0x6b03,	// (0x00011574) aid_size_cell_colour_35

0x6b23,	// (0x00011594) aid_size_cell_colour_112

0x6b43,	// (0x000115b4) aid_size_cell_effect

0xcda4,	// (0x00017815) bg_tb_trans_pane_cp02

0xb294,	// (0x00015d05) heading_imed_pane

0x6b63,	// (0x000115d4) listscroll_imed_pane

0xd6d0,	// (0x00018141) heading_imed_pane_g1

0xd6d8,	// (0x00018149) heading_imed_pane_t1

0xd6e6,	// (0x00018157) grid_imed_colour_35_pane_ParamLimits

0xd6e6,	// (0x00018157) grid_imed_colour_35_pane

0x6b6f,	// (0x000115e0) grid_imed_effect_pane

0xd6f9,	// (0x0001816a) list_imed_aspect_pane

0x6b82,	// (0x000115f3) scroll_pane_cp027_ParamLimits

0x6b82,	// (0x000115f3) scroll_pane_cp027

0x6b8e,	// (0x000115ff) cell_imed_effect_pane_ParamLimits

0x6b8e,	// (0x000115ff) cell_imed_effect_pane

0xd701,	// (0x00018172) cell_imed_colour_pane_ParamLimits

0xd701,	// (0x00018172) cell_imed_colour_pane

0xd73b,	// (0x000181ac) cell_imed_colour_pane_g1_ParamLimits

0xd73b,	// (0x000181ac) cell_imed_colour_pane_g1

0xd74c,	// (0x000181bd) hgihlgiht_grid_pane_cp016_ParamLimits

0xd74c,	// (0x000181bd) hgihlgiht_grid_pane_cp016

0x6bb3,	// (0x00011624) cell_imed_effect_pane_g1

0x6bbb,	// (0x0001162c) grid_highlight_pane_cp017

0xd75d,	// (0x000181ce) list_imed_single_pane_ParamLimits

0xd75d,	// (0x000181ce) list_imed_single_pane

0xa283,	// (0x00014cf4) list_highlight_pane_cp07

0xd770,	// (0x000181e1) list_imed_aspect_pane_comp1_t1

0xcda4,	// (0x00017815) bg_tb_trans_pane_cp05

0xd790,	// (0x00018201) popup_imed_adjust2_window_g1

0xd7b7,	// (0x00018228) popup_imed_adjust2_window_t1

0xd7cf,	// (0x00018240) slider_imed_adjust_pane

0xd7e3,	// (0x00018254) slider_imed_adjust_pane_g1

0xd7f3,	// (0x00018264) slider_imed_adjust_pane_g2

0xd803,	// (0x00018274) slider_imed_adjust_pane_g3

0xd814,	// (0x00018285) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x0001a2cc) slider_imed_adjust_pane_g

0x6bc4,	// (0x00011635) aid_size_cell_clipart2

0x6bd0,	// (0x00011641) grid_imed_clipart_pane

0xd825,	// (0x00018296) scroll_pane_cp031

0x6bda,	// (0x0001164b) cell_imed_clipart_pane_ParamLimits

0x6bda,	// (0x0001164b) cell_imed_clipart_pane

0x6bf2,	// (0x00011663) cell_imed_clipart_pane_g1

0xa283,	// (0x00014cf4) grid_highlight_pane_cp014

0x68ed,	// (0x0001135e) main_clock2_pane_g1_ParamLimits

0x68ed,	// (0x0001135e) main_clock2_pane_g1

0x6a04,	// (0x00011475) aid_call2_pane_cp10

0x6a16,	// (0x00011487) aid_call_pane_cp10

0xb77b,	// (0x000161ec) popup_clock_analogue_window_cp10_g1

0xb77b,	// (0x000161ec) popup_clock_analogue_window_cp10_g2

0x6a28,	// (0x00011499) popup_clock_analogue_window_cp10_g3

0x6a28,	// (0x00011499) popup_clock_analogue_window_cp10_g4

0xb77b,	// (0x000161ec) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x0001a2ba) popup_clock_analogue_window_cp10_g

0x6a3a,	// (0x000114ab) popup_clock_analogue_window_cp10_t1

0x6a6b,	// (0x000114dc) clock_digital_number_pane_cp10_ParamLimits

0x6a6b,	// (0x000114dc) clock_digital_number_pane_cp10

0x6a83,	// (0x000114f4) clock_digital_number_pane_cp11_ParamLimits

0x6a83,	// (0x000114f4) clock_digital_number_pane_cp11

0x6a9b,	// (0x0001150c) clock_digital_number_pane_cp12_ParamLimits

0x6a9b,	// (0x0001150c) clock_digital_number_pane_cp12

0x6ab3,	// (0x00011524) clock_digital_number_pane_cp13_ParamLimits

0x6ab3,	// (0x00011524) clock_digital_number_pane_cp13

0x6acb,	// (0x0001153c) clock_digital_separator_pane_cp10_ParamLimits

0x6acb,	// (0x0001153c) clock_digital_separator_pane_cp10

0x6ae3,	// (0x00011554) popup_clock_digital_window_cp02_t1_ParamLimits

0x6ae3,	// (0x00011554) popup_clock_digital_window_cp02_t1

0xa948,	// (0x000153b9) clock_digital_number_pane_cp10_g1

0xa948,	// (0x000153b9) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x0001a2d5) clock_digital_number_pane_cp10_g

0xa948,	// (0x000153b9) clock_digital_separator_pane_cp10_g1

0xa948,	// (0x000153b9) clock_digital_separator_pane_g2_cp10

0xb87e,	// (0x000162ef) navi_pane_vded_g4

0xb887,	// (0x000162f8) navi_pane_vded_g5

0xb890,	// (0x00016301) navi_pane_vded_t1

0xa283,	// (0x00014cf4) main_vded_pane

0x6bfb,	// (0x0001166c) main_vded_pane_g1

0x6c05,	// (0x00011676) main_vded_pane_g2

0x6c0d,	// (0x0001167e) main_vded_pane_g3

0x0002,

0xf869,	// (0x0001a2da) main_vded_pane_g

0x6c15,	// (0x00011686) main_vded_pane_t1

0x6c23,	// (0x00011694) main_vded_pane_t2

0x0001,

0xf870,	// (0x0001a2e1) main_vded_pane_t

0x6c31,	// (0x000116a2) vded_slider_pane

0x6c39,	// (0x000116aa) vded_video_pane

0xd82d,	// (0x0001829e) vded_video_pane_g1

0x6c41,	// (0x000116b2) vded_video_pane_g2

0xd2c7,	// (0x00017d38) vded_video_pane_g3

0x0002,

0xf875,	// (0x0001a2e6) vded_video_pane_g

0xd837,	// (0x000182a8) vded_slider_pane_g1

0xcfb0,	// (0x00017a21) vded_slider_pane_g2

0xd840,	// (0x000182b1) vded_slider_pane_g3

0xd849,	// (0x000182ba) vded_slider_pane_g4

0xd852,	// (0x000182c3) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x0001a2ed) vded_slider_pane_g

0x6639,	// (0x000110aa) mup3_rocker_pane_ParamLimits

0x6639,	// (0x000110aa) mup3_rocker_pane

0x6c4a,	// (0x000116bb) mup3_control_keys_pane_g1

0x6c52,	// (0x000116c3) mup3_control_keys_pane_g2

0x6c5a,	// (0x000116cb) mup3_control_keys_pane_g3

0x6c62,	// (0x000116d3) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x0001a2f8) mup3_control_keys_pane_g

0x2b50,	// (0x0000d5c1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2b50,	// (0x0000d5c1) popup_toolbar2_fixed_window_cp01

0x6667,	// (0x000110d8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6667,	// (0x000110d8) popup_toolbar2_fixed_window_cp02

0xc0ec,	// (0x00016b5d) popup_call2_audio_second_window_t4_ParamLimits

0xc0ec,	// (0x00016b5d) popup_call2_audio_second_window_t4

0xc61a,	// (0x0001708b) popup_call2_audio_first_window_t6_ParamLimits

0xc61a,	// (0x0001708b) popup_call2_audio_first_window_t6

0xc8b0,	// (0x00017321) popup_call2_audio_out_window_t6_ParamLimits

0xc8b0,	// (0x00017321) popup_call2_audio_out_window_t6

0xa283,	// (0x00014cf4) main_vitu_pane

0x6c72,	// (0x000116e3) aid_size_cell_itu_ParamLimits

0x6c72,	// (0x000116e3) aid_size_cell_itu

0xa2d6,	// (0x00014d47) bg_popup_window_pane_cp08_ParamLimits

0xa2d6,	// (0x00014d47) bg_popup_window_pane_cp08

0x6c88,	// (0x000116f9) field_vitu_entry_pane_ParamLimits

0x6c88,	// (0x000116f9) field_vitu_entry_pane

0x6c9b,	// (0x0001170c) grid_vitu_function_pane_ParamLimits

0x6c9b,	// (0x0001170c) grid_vitu_function_pane

0x6cb0,	// (0x00011721) grid_vitu_itu_pane_ParamLimits

0x6cb0,	// (0x00011721) grid_vitu_itu_pane

0x6cc6,	// (0x00011737) cell_vitu_itu_pane_ParamLimits

0x6cc6,	// (0x00011737) cell_vitu_itu_pane

0x6ce8,	// (0x00011759) cell_vitu_function_pane_ParamLimits

0x6ce8,	// (0x00011759) cell_vitu_function_pane

0xa2d6,	// (0x00014d47) bg_popup_sub_pane_cp08_ParamLimits

0xa2d6,	// (0x00014d47) bg_popup_sub_pane_cp08

0x6d01,	// (0x00011772) field_vitu_entry_pane_t1_ParamLimits

0x6d01,	// (0x00011772) field_vitu_entry_pane_t1

0xd873,	// (0x000182e4) field_vitu_entry_pane_t2_ParamLimits

0xd873,	// (0x000182e4) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x0001a306) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x0001a306) field_vitu_entry_pane_t

0xd890,	// (0x00018301) bg_button_pane_cp05_ParamLimits

0xd890,	// (0x00018301) bg_button_pane_cp05

0x6d1d,	// (0x0001178e) cell_vitu_itu_pane_g1

0x6d35,	// (0x000117a6) cell_vitu_itu_pane_t1_ParamLimits

0x6d35,	// (0x000117a6) cell_vitu_itu_pane_t1

0x6d47,	// (0x000117b8) cell_vitu_itu_pane_t2_ParamLimits

0x6d47,	// (0x000117b8) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x0001a30b) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x0001a30b) cell_vitu_itu_pane_t

0xd89e,	// (0x0001830f) bg_button_pane_cp07

0x6d7c,	// (0x000117ed) cell_vitu_function_pane_g1

0xa9d7,	// (0x00015448) main_calc_pane_g1

0x29b4,	// (0x0000d425) aid_visual_content_pane

0xa283,	// (0x00014cf4) main_vradio_pane

0x6d85,	// (0x000117f6) main_vradio_pane_g1_ParamLimits

0x6d85,	// (0x000117f6) main_vradio_pane_g1

0xd8a8,	// (0x00018319) main_vradio_pane_g2_ParamLimits

0xd8a8,	// (0x00018319) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x0001a312) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x0001a312) main_vradio_pane_g

0x6d9b,	// (0x0001180c) main_vradio_pane_t1_ParamLimits

0x6d9b,	// (0x0001180c) main_vradio_pane_t1

0x6db0,	// (0x00011821) main_vradio_pane_t2_ParamLimits

0x6db0,	// (0x00011821) main_vradio_pane_t2

0xd8b5,	// (0x00018326) main_vradio_pane_t3_ParamLimits

0xd8b5,	// (0x00018326) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x0001a317) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x0001a317) main_vradio_pane_t

0x6dc5,	// (0x00011836) vradio_rocker_control_pane_ParamLimits

0x6dc5,	// (0x00011836) vradio_rocker_control_pane

0x6dd7,	// (0x00011848) vradio_station_info_pane_ParamLimits

0x6dd7,	// (0x00011848) vradio_station_info_pane

0xd8c7,	// (0x00018338) vradio_frequency_info_pane_ParamLimits

0xd8c7,	// (0x00018338) vradio_frequency_info_pane

0xd2c7,	// (0x00017d38) vradio_station_info_pane_g1

0xd8d6,	// (0x00018347) vradio_station_info_pane_t1_ParamLimits

0xd8d6,	// (0x00018347) vradio_station_info_pane_t1

0xd8f8,	// (0x00018369) vradio_station_info_pane_t2_ParamLimits

0xd8f8,	// (0x00018369) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x0001a31e) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x0001a31e) vradio_station_info_pane_t

0xd90a,	// (0x0001837b) vradio_tuning_pane

0xd912,	// (0x00018383) vradio_rocker_control_pane_g1

0xd91a,	// (0x0001838b) vradio_rocker_control_pane_g2

0xd922,	// (0x00018393) vradio_rocker_control_pane_g3

0xd92a,	// (0x0001839b) vradio_rocker_control_pane_g4

0xd932,	// (0x000183a3) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x0001a323) vradio_rocker_control_pane_g

0x6de7,	// (0x00011858) vradio_frequency_info_pane_g1

0xd93a,	// (0x000183ab) vradio_frequency_info_pane_t1_ParamLimits

0xd93a,	// (0x000183ab) vradio_frequency_info_pane_t1

0x6df1,	// (0x00011862) vradio_tuning_pane_g1

0x6dfa,	// (0x0001186b) vradio_tuning_pane_t1

0xa2ad,	// (0x00014d1e) area_side_right_pane_ParamLimits

0xa2ad,	// (0x00014d1e) area_side_right_pane

0xcd6b,	// (0x000177dc) status_small_pane_g1

0xcd73,	// (0x000177e4) status_small_pane_g2

0xcd7c,	// (0x000177ed) status_small_pane_g3

0xcd85,	// (0x000177f6) status_small_pane_g4

0x0003,

0xf672,	// (0x0001a0e3) status_small_pane_g

0xcd8e,	// (0x000177ff) status_small_pane_t1

0xa283,	// (0x00014cf4) main_video3_pane

0xd94e,	// (0x000183bf) cams_zoom_vslider_pane

0xd956,	// (0x000183c7) image3_wide_pane_ParamLimits

0xd956,	// (0x000183c7) image3_wide_pane

0xd970,	// (0x000183e1) image3_wide_small_pane

0xd97a,	// (0x000183eb) main_video3_pane_g1_ParamLimits

0xd97a,	// (0x000183eb) main_video3_pane_g1

0xd996,	// (0x00018407) main_video3_pane_g2_ParamLimits

0xd996,	// (0x00018407) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x0001a32e) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x0001a32e) main_video3_pane_g

0xd9b2,	// (0x00018423) main_video3_pane_t1_ParamLimits

0xd9b2,	// (0x00018423) main_video3_pane_t1

0xd9dd,	// (0x0001844e) main_video3_pane_t2_ParamLimits

0xd9dd,	// (0x0001844e) main_video3_pane_t2

0xda08,	// (0x00018479) main_video3_pane_t3_ParamLimits

0xda08,	// (0x00018479) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x0001a333) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x0001a333) main_video3_pane_t

0xda33,	// (0x000184a4) cams_zoom_vslider_pane_g1

0xda3c,	// (0x000184ad) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x0001a33a) cams_zoom_vslider_pane_g

0xda44,	// (0x000184b5) small_slider_vertical_pane

0xd2c7,	// (0x00017d38) small_slider_vertical_pane_g1

0xd2c7,	// (0x00017d38) small_slider_vertical_pane_g2

0xda4c,	// (0x000184bd) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x0001a33f) small_slider_vertical_pane_g

0xa283,	// (0x00014cf4) main_hwr_training_pane

0xda55,	// (0x000184c6) hwr_training_instruct_pane_ParamLimits

0xda55,	// (0x000184c6) hwr_training_instruct_pane

0x6e09,	// (0x0001187a) hwr_training_navi_pane_ParamLimits

0x6e09,	// (0x0001187a) hwr_training_navi_pane

0x6e20,	// (0x00011891) hwr_training_write_pane_ParamLimits

0x6e20,	// (0x00011891) hwr_training_write_pane

0xa283,	// (0x00014cf4) bg_frame_shadow_pane

0xda84,	// (0x000184f5) hwr_training_write_pane_g1

0xda8c,	// (0x000184fd) hwr_training_write_pane_g2

0xda94,	// (0x00018505) hwr_training_write_pane_g3

0xda9c,	// (0x0001850d) hwr_training_write_pane_g4

0xdaa4,	// (0x00018515) hwr_training_write_pane_g5

0xdaac,	// (0x0001851d) hwr_training_write_pane_g6

0xdab4,	// (0x00018525) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x0001a346) hwr_training_write_pane_g

0xdabc,	// (0x0001852d) hwr_training_navi_pane_g1_ParamLimits

0xdabc,	// (0x0001852d) hwr_training_navi_pane_g1

0xdace,	// (0x0001853f) hwr_training_navi_pane_g2_ParamLimits

0xdace,	// (0x0001853f) hwr_training_navi_pane_g2

0xdae0,	// (0x00018551) hwr_training_navi_pane_g3_ParamLimits

0xdae0,	// (0x00018551) hwr_training_navi_pane_g3

0xdaf0,	// (0x00018561) hwr_training_navi_pane_g4_ParamLimits

0xdaf0,	// (0x00018561) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x0001a355) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x0001a355) hwr_training_navi_pane_g

0xdafd,	// (0x0001856e) hwr_training_navi_pane_t1

0x6e60,	// (0x000118d1) list_single_hwr_training_instruct_pane_ParamLimits

0x6e60,	// (0x000118d1) list_single_hwr_training_instruct_pane

0xdb0b,	// (0x0001857c) list_single_hwr_training_instruct_pane_t1

0xd207,	// (0x00017c78) bg_frame_shadow_pane_g1

0xdb1a,	// (0x0001858b) bg_frame_shadow_pane_g2

0xdb22,	// (0x00018593) bg_frame_shadow_pane_g3

0xdb2a,	// (0x0001859b) bg_frame_shadow_pane_g4

0xdb32,	// (0x000185a3) bg_frame_shadow_pane_g5

0xdb3a,	// (0x000185ab) bg_frame_shadow_pane_g6

0xdb42,	// (0x000185b3) bg_frame_shadow_pane_g7

0xab64,	// (0x000155d5) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x0001a360) bg_frame_shadow_pane_g

0xa283,	// (0x00014cf4) main_video_tele_dialer_pane

0x6e78,	// (0x000118e9) aid_size_cell_video_keypad_ParamLimits

0x6e78,	// (0x000118e9) aid_size_cell_video_keypad

0x6e92,	// (0x00011903) grid_video_dialer_keypad_pane_ParamLimits

0x6e92,	// (0x00011903) grid_video_dialer_keypad_pane

0x6ed4,	// (0x00011945) video_down_pane_cp_ParamLimits

0x6ed4,	// (0x00011945) video_down_pane_cp

0x6f04,	// (0x00011975) cell_video_dialer_keypad_pane_ParamLimits

0x6f04,	// (0x00011975) cell_video_dialer_keypad_pane

0xdb4a,	// (0x000185bb) bg_button_pane_cp08_ParamLimits

0xdb4a,	// (0x000185bb) bg_button_pane_cp08

0x6f26,	// (0x00011997) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6f26,	// (0x00011997) cell_video_dialer_keypad_pane_g1

0x6623,	// (0x00011094) mup3_rocker2_pane_ParamLimits

0x6623,	// (0x00011094) mup3_rocker2_pane

0xd2c7,	// (0x00017d38) mup3_rocker2_pane_g1

0x5389,	// (0x0000fdfa) main_dialer2_pane

0xa283,	// (0x00014cf4) main_mp4_pane

0xdb5e,	// (0x000185cf) main_mp4_pane_g1_ParamLimits

0xdb5e,	// (0x000185cf) main_mp4_pane_g1

0xdb5e,	// (0x000185cf) main_mp4_pane_g2_ParamLimits

0xdb5e,	// (0x000185cf) main_mp4_pane_g2

0x6f61,	// (0x000119d2) main_mp4_pane_g3_ParamLimits

0x6f61,	// (0x000119d2) main_mp4_pane_g3

0xdb6c,	// (0x000185dd) main_mp4_pane_g4_ParamLimits

0xdb6c,	// (0x000185dd) main_mp4_pane_g4

0xdb9a,	// (0x0001860b) main_mp4_pane_g5_ParamLimits

0xdb9a,	// (0x0001860b) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x0001a380) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x0001a380) main_mp4_pane_g

0xdbf6,	// (0x00018667) main_mp4_pane_t1_ParamLimits

0xdbf6,	// (0x00018667) main_mp4_pane_t1

0xdc4e,	// (0x000186bf) main_mp4_pane_t2_ParamLimits

0xdc4e,	// (0x000186bf) main_mp4_pane_t2

0xdca0,	// (0x00018711) main_mp4_pane_t3_ParamLimits

0xdca0,	// (0x00018711) main_mp4_pane_t3

0xdcc6,	// (0x00018737) main_mp4_pane_t4_ParamLimits

0xdcc6,	// (0x00018737) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x0001a38d) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x0001a38d) main_mp4_pane_t

0xdd06,	// (0x00018777) mp4_progress_pane_ParamLimits

0xdd06,	// (0x00018777) mp4_progress_pane

0xdd4a,	// (0x000187bb) mp4_rocker_pane_ParamLimits

0xdd4a,	// (0x000187bb) mp4_rocker_pane

0xdd70,	// (0x000187e1) mp4_progress_pane_t1

0xdd87,	// (0x000187f8) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x0001a396) mp4_progress_pane_t

0xdd9e,	// (0x0001880f) mup_progress_pane_cp04

0xd2c7,	// (0x00017d38) mp4_rocker_pane_g1

0x6f91,	// (0x00011a02) aid_cell_size_keypad2_ParamLimits

0x6f91,	// (0x00011a02) aid_cell_size_keypad2

0x6fab,	// (0x00011a1c) dialer2_ne_pane_ParamLimits

0x6fab,	// (0x00011a1c) dialer2_ne_pane

0x6fc0,	// (0x00011a31) grid_dialer2_keypad_pane_ParamLimits

0x6fc0,	// (0x00011a31) grid_dialer2_keypad_pane

0xd0b4,	// (0x00017b25) bg_popup_call_pane_cp07_ParamLimits

0xd0b4,	// (0x00017b25) bg_popup_call_pane_cp07

0x6fd6,	// (0x00011a47) dialer2_ne_pane_t1_ParamLimits

0x6fd6,	// (0x00011a47) dialer2_ne_pane_t1

0x7013,	// (0x00011a84) cell_dialer2_keypad_pane_ParamLimits

0x7013,	// (0x00011a84) cell_dialer2_keypad_pane

0xddbc,	// (0x0001882d) bg_button_pane_pane_cp04_ParamLimits

0xddbc,	// (0x0001882d) bg_button_pane_pane_cp04

0x7035,	// (0x00011aa6) cell_dialer2_keypad_pane_g1_ParamLimits

0x7035,	// (0x00011aa6) cell_dialer2_keypad_pane_g1

0x37e7,	// (0x0000e258) aid_placing_vt_set_content_ParamLimits

0x37e7,	// (0x0000e258) aid_placing_vt_set_content

0x3805,	// (0x0000e276) aid_placing_vt_set_title_ParamLimits

0x3805,	// (0x0000e276) aid_placing_vt_set_title

0xa283,	// (0x00014cf4) main_image3_pane

0x70c4,	// (0x00011b35) area_side_right_pane_cp01_ParamLimits

0x70c4,	// (0x00011b35) area_side_right_pane_cp01

0xdb5e,	// (0x000185cf) main_image3_pane_g1_ParamLimits

0xdb5e,	// (0x000185cf) main_image3_pane_g1

0x70db,	// (0x00011b4c) main_image3_pane_g2_ParamLimits

0x70db,	// (0x00011b4c) main_image3_pane_g2

0x7101,	// (0x00011b72) main_image3_pane_g3_ParamLimits

0x7101,	// (0x00011b72) main_image3_pane_g3

0x7127,	// (0x00011b98) main_image3_pane_g4_ParamLimits

0x7127,	// (0x00011b98) main_image3_pane_g4

0x0003,

0xf934,	// (0x0001a3a5) main_image3_pane_g_ParamLimits

0xf934,	// (0x0001a3a5) main_image3_pane_g

0x714d,	// (0x00011bbe) main_image3_pane_t1_ParamLimits

0x714d,	// (0x00011bbe) main_image3_pane_t1

0x71a5,	// (0x00011c16) main_image3_pane_t2_ParamLimits

0x71a5,	// (0x00011c16) main_image3_pane_t2

0x71f7,	// (0x00011c68) main_image3_pane_t3_ParamLimits

0x71f7,	// (0x00011c68) main_image3_pane_t3

0x0003,

0xf93d,	// (0x0001a3ae) main_image3_pane_t_ParamLimits

0xf93d,	// (0x0001a3ae) main_image3_pane_t

0xa2d6,	// (0x00014d47) grid_sctrl_middle_pane_cp01_ParamLimits

0xa2d6,	// (0x00014d47) grid_sctrl_middle_pane_cp01

0x7277,	// (0x00011ce8) cell_sctrl_middle_pane_cp01_ParamLimits

0x7277,	// (0x00011ce8) cell_sctrl_middle_pane_cp01

0x7294,	// (0x00011d05) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7294,	// (0x00011d05) cell_sctrl_middle_pane_cp01_g1

0xa283,	// (0x00014cf4) main_call4_pane

0x72aa,	// (0x00011d1b) aid_size_button_call4_ParamLimits

0x72aa,	// (0x00011d1b) aid_size_button_call4

0x72d7,	// (0x00011d48) call4_windows_pane_ParamLimits

0x72d7,	// (0x00011d48) call4_windows_pane

0x72ed,	// (0x00011d5e) grid_call4_button_pane_ParamLimits

0x72ed,	// (0x00011d5e) grid_call4_button_pane

0xde12,	// (0x00018883) call4_windows_conf_pane

0x730c,	// (0x00011d7d) popup_call4_audio_first_window_ParamLimits

0x730c,	// (0x00011d7d) popup_call4_audio_first_window

0x732c,	// (0x00011d9d) popup_call4_audio_second_window_ParamLimits

0x732c,	// (0x00011d9d) popup_call4_audio_second_window

0xde45,	// (0x000188b6) popup_call4_audio_wait_window_ParamLimits

0xde45,	// (0x000188b6) popup_call4_audio_wait_window

0x733e,	// (0x00011daf) cell_call4_button_pane_ParamLimits

0x733e,	// (0x00011daf) cell_call4_button_pane

0x7363,	// (0x00011dd4) bg_button_pane_cp09_ParamLimits

0x7363,	// (0x00011dd4) bg_button_pane_cp09

0x736f,	// (0x00011de0) cell_call4_button_pane_g1_ParamLimits

0x736f,	// (0x00011de0) cell_call4_button_pane_g1

0x7395,	// (0x00011e06) cell_call4_button_pane_t1_ParamLimits

0x7395,	// (0x00011e06) cell_call4_button_pane_t1

0xde8b,	// (0x000188fc) popup_call4_audio_conf_window_ParamLimits

0xde8b,	// (0x000188fc) popup_call4_audio_conf_window

0x667d,	// (0x000110ee) mup3_progress_pane_t1_ParamLimits

0x6693,	// (0x00011104) mup3_progress_pane_t2_ParamLimits

0xd5e5,	// (0x00018056) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x0001a287) mup3_progress_pane_t_ParamLimits

0xd5fc,	// (0x0001806d) mup_progress_pane_cp03_ParamLimits

0x6c6a,	// (0x000116db) mup3_control_keys_pane_g4_copy1

0xdd34,	// (0x000187a5) mp4_rocker2_pane_ParamLimits

0xdd34,	// (0x000187a5) mp4_rocker2_pane

0xde9f,	// (0x00018910) mp4_rocker2_pane_g1

0xdea7,	// (0x00018918) mp4_rocker2_pane_g2

0xdeaf,	// (0x00018920) mp4_rocker2_pane_g3

0xdeb7,	// (0x00018928) mp4_rocker2_pane_g4

0xdebf,	// (0x00018930) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x0001a3b7) mp4_rocker2_pane_g

0xa283,	// (0x00014cf4) main_camera4_pane

0xa283,	// (0x00014cf4) main_video4_pane

0x6ea6,	// (0x00011917) main_video_tele_dialer_pane_t1_ParamLimits

0x6ea6,	// (0x00011917) main_video_tele_dialer_pane_t1

0x6ebd,	// (0x0001192e) main_video_tele_dialer_pane_t2_ParamLimits

0x6ebd,	// (0x0001192e) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x0001a371) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x0001a371) main_video_tele_dialer_pane_t

0x73d1,	// (0x00011e42) cam4_autofocus_pane_ParamLimits

0x73d1,	// (0x00011e42) cam4_autofocus_pane

0x73e5,	// (0x00011e56) cam4_image_uncrop_pane_ParamLimits

0x73e5,	// (0x00011e56) cam4_image_uncrop_pane

0x73fc,	// (0x00011e6d) cam4_indicators_pane_ParamLimits

0x73fc,	// (0x00011e6d) cam4_indicators_pane

0x7420,	// (0x00011e91) main_camera4_pane_g1_ParamLimits

0x7420,	// (0x00011e91) main_camera4_pane_g1

0x742c,	// (0x00011e9d) main_camera4_pane_g2_ParamLimits

0x742c,	// (0x00011e9d) main_camera4_pane_g2

0x7438,	// (0x00011ea9) main_camera4_pane_g3_ParamLimits

0x7438,	// (0x00011ea9) main_camera4_pane_g3

0x7444,	// (0x00011eb5) main_camera4_pane_g4_ParamLimits

0x7444,	// (0x00011eb5) main_camera4_pane_g4

0x7450,	// (0x00011ec1) main_camera4_pane_g5_ParamLimits

0x7450,	// (0x00011ec1) main_camera4_pane_g5

0x0005,

0xf951,	// (0x0001a3c2) main_camera4_pane_g_ParamLimits

0xf951,	// (0x0001a3c2) main_camera4_pane_g

0x746d,	// (0x00011ede) main_camera4_pane_t1_ParamLimits

0x746d,	// (0x00011ede) main_camera4_pane_t1

0xd5cf,	// (0x00018040) bg_tb_trans_pane_cp06

0x749e,	// (0x00011f0f) cam4_indicators_pane_g1

0x74ab,	// (0x00011f1c) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x0001a3d4) cam4_indicators_pane_g

0x74c3,	// (0x00011f34) cam4_indicators_pane_t1

0x74e7,	// (0x00011f58) main_video4_pane_g1_ParamLimits

0x74e7,	// (0x00011f58) main_video4_pane_g1

0x74f9,	// (0x00011f6a) main_video4_pane_g2_ParamLimits

0x74f9,	// (0x00011f6a) main_video4_pane_g2

0x74f9,	// (0x00011f6a) main_video4_pane_g3_ParamLimits

0x74f9,	// (0x00011f6a) main_video4_pane_g3

0x7508,	// (0x00011f79) main_video4_pane_g4_ParamLimits

0x7508,	// (0x00011f79) main_video4_pane_g4

0x0004,

0xf96a,	// (0x0001a3db) main_video4_pane_g_ParamLimits

0xf96a,	// (0x0001a3db) main_video4_pane_g

0x7526,	// (0x00011f97) vid4_indicators_pane_ParamLimits

0x7526,	// (0x00011f97) vid4_indicators_pane

0x754e,	// (0x00011fbf) video4_image_uncrop_cif_pane_ParamLimits

0x754e,	// (0x00011fbf) video4_image_uncrop_cif_pane

0x7566,	// (0x00011fd7) video4_image_uncrop_nhd_pane_ParamLimits

0x7566,	// (0x00011fd7) video4_image_uncrop_nhd_pane

0x757a,	// (0x00011feb) video4_image_uncrop_vga_pane_ParamLimits

0x757a,	// (0x00011feb) video4_image_uncrop_vga_pane

0xd009,	// (0x00017a7a) bg_tb_trans_pane_cp07

0x749e,	// (0x00011f0f) vid4_indicators_pane_g1

0x7592,	// (0x00012003) vid4_indicators_pane_g2

0x759f,	// (0x00012010) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x0001a3e6) vid4_indicators_pane_g

0x75b8,	// (0x00012029) vid4_indicators_pane_t1

0x75ca,	// (0x0001203b) cam4_autofocus_pane_g1

0x75d2,	// (0x00012043) cam4_autofocus_pane_g2

0x75da,	// (0x0001204b) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x0001a3f1) cam4_autofocus_pane_g

0x75e2,	// (0x00012053) cam4_autofocus_pane_g3_copy1

0x6ee8,	// (0x00011959) video_down_pane_cp_t1

0x6ef6,	// (0x00011967) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x0001a376) video_down_pane_cp_t

0xa2d6,	// (0x00014d47) popup_vitu2_window_ParamLimits

0xa2d6,	// (0x00014d47) popup_vitu2_window

0x75ea,	// (0x0001205b) aid_size_cell2_itu2_ParamLimits

0x75ea,	// (0x0001205b) aid_size_cell2_itu2

0x7610,	// (0x00012081) aid_size_cell_itu2_ParamLimits

0x7610,	// (0x00012081) aid_size_cell_itu2

0x7662,	// (0x000120d3) bg_popup_window_pane_cp09_ParamLimits

0x7662,	// (0x000120d3) bg_popup_window_pane_cp09

0x7670,	// (0x000120e1) field_vitu2_entry_pane_ParamLimits

0x7670,	// (0x000120e1) field_vitu2_entry_pane

0x768a,	// (0x000120fb) grid_vitu2_function_pane_ParamLimits

0x768a,	// (0x000120fb) grid_vitu2_function_pane

0x76c5,	// (0x00012136) grid_vitu2_itu_pane_ParamLimits

0x76c5,	// (0x00012136) grid_vitu2_itu_pane

0x772a,	// (0x0001219b) cell_vitu2_itu_pane_ParamLimits

0x772a,	// (0x0001219b) cell_vitu2_itu_pane

0x774c,	// (0x000121bd) cell_vitu2_function_pane_ParamLimits

0x774c,	// (0x000121bd) cell_vitu2_function_pane

0xdee7,	// (0x00018958) bg_popup_call_pane_cp08_ParamLimits

0xdee7,	// (0x00018958) bg_popup_call_pane_cp08

0xdf00,	// (0x00018971) field_vitu2_entry_pane_g1

0xdf0c,	// (0x0001897d) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x0001a3f8) field_vitu2_entry_pane_g

0x778b,	// (0x000121fc) field_vitu2_entry_pane_t1_ParamLimits

0x778b,	// (0x000121fc) field_vitu2_entry_pane_t1

0xdf26,	// (0x00018997) field_vitu2_entry_pane_t2_ParamLimits

0xdf26,	// (0x00018997) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x0001a3ff) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x0001a3ff) field_vitu2_entry_pane_t

0x77a7,	// (0x00012218) bg_button_pane_cp010_ParamLimits

0x77a7,	// (0x00012218) bg_button_pane_cp010

0x77b5,	// (0x00012226) cell_vitu2_itu_pane_g1

0x77d3,	// (0x00012244) cell_vitu2_itu_pane_t1_ParamLimits

0x77d3,	// (0x00012244) cell_vitu2_itu_pane_t1

0x7839,	// (0x000122aa) cell_vitu2_itu_pane_t2_ParamLimits

0x7839,	// (0x000122aa) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x0001a409) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x0001a409) cell_vitu2_itu_pane_t

0xa2d6,	// (0x00014d47) bg_button_pane_cp011

0x7915,	// (0x00012386) cell_vitu2_function_pane_g1

0xa283,	// (0x00014cf4) main_myfav_hc_pane

0x7243,	// (0x00011cb4) popup_image3_note_pane_ParamLimits

0x7243,	// (0x00011cb4) popup_image3_note_pane

0x725d,	// (0x00011cce) popup_image3_tool_bar_pane_ParamLimits

0x725d,	// (0x00011cce) popup_image3_tool_bar_pane

0x78bd,	// (0x0001232e) cell_vitu2_itu_pane_t3_ParamLimits

0x78bd,	// (0x0001232e) cell_vitu2_itu_pane_t3

0xa283,	// (0x00014cf4) bg_popup_trans_pane

0xdf4b,	// (0x000189bc) grid_image3_tool_bar_pane

0xdf55,	// (0x000189c6) bg_popup_trans_pane_g1

0xb00f,	// (0x00015a80) bg_popup_trans_pane_g2

0xdf5d,	// (0x000189ce) bg_popup_trans_pane_g3

0xdf65,	// (0x000189d6) bg_popup_trans_pane_g4

0xdf6d,	// (0x000189de) bg_popup_trans_pane_g5

0xdf75,	// (0x000189e6) bg_popup_trans_pane_g6

0xdf7d,	// (0x000189ee) bg_popup_trans_pane_g7

0xdf85,	// (0x000189f6) bg_popup_trans_pane_g8

0xafef,	// (0x00015a60) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x0001a410) bg_popup_trans_pane_g

0xd017,	// (0x00017a88) cell_image3_tool_bar_pane_ParamLimits

0xd017,	// (0x00017a88) cell_image3_tool_bar_pane

0xd2c7,	// (0x00017d38) cell_image3_tool_bar_pane_g1

0xa283,	// (0x00014cf4) bg_popup_trans_pane_cp1

0xdf8d,	// (0x000189fe) popup_image3_note_pane_t1

0xdf9b,	// (0x00018a0c) popup_image3_note_pane_t2

0xdfa9,	// (0x00018a1a) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x0001a423) popup_image3_note_pane_t

0xdfb7,	// (0x00018a28) popup_image3_note_pane_t3_copy1

0x7929,	// (0x0001239a) bg_myfav_hc_instruction_pane_ParamLimits

0x7929,	// (0x0001239a) bg_myfav_hc_instruction_pane

0x793b,	// (0x000123ac) cell_myfav_contact_pane_ParamLimits

0x793b,	// (0x000123ac) cell_myfav_contact_pane

0x7955,	// (0x000123c6) cell_myfav_contact_pane_cp1_ParamLimits

0x7955,	// (0x000123c6) cell_myfav_contact_pane_cp1

0x796b,	// (0x000123dc) cell_myfav_contact_pane_cp2_ParamLimits

0x796b,	// (0x000123dc) cell_myfav_contact_pane_cp2

0x7981,	// (0x000123f2) cell_myfav_contact_pane_cp3_ParamLimits

0x7981,	// (0x000123f2) cell_myfav_contact_pane_cp3

0x7996,	// (0x00012407) cell_myfav_contact_pane_cp4_ParamLimits

0x7996,	// (0x00012407) cell_myfav_contact_pane_cp4

0x79aa,	// (0x0001241b) cell_myfav_contact_pane_cp5_ParamLimits

0x79aa,	// (0x0001241b) cell_myfav_contact_pane_cp5

0x79be,	// (0x0001242f) cell_myfav_contact_pane_cp6_ParamLimits

0x79be,	// (0x0001242f) cell_myfav_contact_pane_cp6

0x79d2,	// (0x00012443) cell_myfav_contact_pane_cp7_ParamLimits

0x79d2,	// (0x00012443) cell_myfav_contact_pane_cp7

0xdfc5,	// (0x00018a36) listscroll_gen_pane_cp05

0x79ea,	// (0x0001245b) main_myfav_hc_pane_g1_ParamLimits

0x79ea,	// (0x0001245b) main_myfav_hc_pane_g1

0x7a00,	// (0x00012471) main_myfav_hc_pane_g2_ParamLimits

0x7a00,	// (0x00012471) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x0001a42a) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x0001a42a) main_myfav_hc_pane_g

0x7a2a,	// (0x0001249b) main_myfav_hc_pane_t1_ParamLimits

0x7a2a,	// (0x0001249b) main_myfav_hc_pane_t1

0xdfce,	// (0x00018a3f) main_myfav_hc_pane_t2_ParamLimits

0xdfce,	// (0x00018a3f) main_myfav_hc_pane_t2

0xdfe0,	// (0x00018a51) main_myfav_hc_pane_t3_ParamLimits

0xdfe0,	// (0x00018a51) main_myfav_hc_pane_t3

0x7a3f,	// (0x000124b0) main_myfav_hc_pane_t4_ParamLimits

0x7a3f,	// (0x000124b0) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x0001a431) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x0001a431) main_myfav_hc_pane_t

0xd2c7,	// (0x00017d38) bg_myfav_hc_instruction_pane_g1

0xdff2,	// (0x00018a63) cell_myfav_contact_pane_g1_ParamLimits

0xdff2,	// (0x00018a63) cell_myfav_contact_pane_g1

0xdff2,	// (0x00018a63) cell_myfav_contact_pane_g2_ParamLimits

0xdff2,	// (0x00018a63) cell_myfav_contact_pane_g2

0xdffe,	// (0x00018a6f) cell_myfav_contact_pane_g3_ParamLimits

0xdffe,	// (0x00018a6f) cell_myfav_contact_pane_g3

0xd5cf,	// (0x00018040) cell_myfav_contact_pane_g4_ParamLimits

0xd5cf,	// (0x00018040) cell_myfav_contact_pane_g4

0xe00b,	// (0x00018a7c) cell_myfav_contact_pane_g5_ParamLimits

0xe00b,	// (0x00018a7c) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x0001a43c) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x0001a43c) cell_myfav_contact_pane_g

0x7a16,	// (0x00012487) main_myfav_hc_pane_g3_ParamLimits

0x7a16,	// (0x00012487) main_myfav_hc_pane_g3

0x2ad6,	// (0x0000d547) popup_adpt_find_window

0x7a63,	// (0x000124d4) afind_page_pane_ParamLimits

0x7a63,	// (0x000124d4) afind_page_pane

0x7a78,	// (0x000124e9) aid_size_cell_afind_ParamLimits

0x7a78,	// (0x000124e9) aid_size_cell_afind

0x7a96,	// (0x00012507) bg_popup_sub_pane_cp09_ParamLimits

0x7a96,	// (0x00012507) bg_popup_sub_pane_cp09

0x7aa3,	// (0x00012514) find_pane_cp01_ParamLimits

0x7aa3,	// (0x00012514) find_pane_cp01

0xe017,	// (0x00018a88) grid_afind_control_pane_ParamLimits

0xe017,	// (0x00018a88) grid_afind_control_pane

0x7ab0,	// (0x00012521) grid_afind_pane_ParamLimits

0x7ab0,	// (0x00012521) grid_afind_pane

0x7ace,	// (0x0001253f) cell_afind_pane_ParamLimits

0x7ace,	// (0x0001253f) cell_afind_pane

0xd2c7,	// (0x00017d38) afind_page_pane_g1

0x7b1b,	// (0x0001258c) afind_page_pane_g2

0x7b24,	// (0x00012595) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x0001a447) afind_page_pane_g

0x7b2d,	// (0x0001259e) afind_page_pane_t1

0xe02b,	// (0x00018a9c) cell_afind_grid_control_pane_ParamLimits

0xe02b,	// (0x00018a9c) cell_afind_grid_control_pane

0xddbc,	// (0x0001882d) bg_button_pane_cp69_ParamLimits

0xddbc,	// (0x0001882d) bg_button_pane_cp69

0x7b4d,	// (0x000125be) cell_afind_pane_g1_ParamLimits

0x7b4d,	// (0x000125be) cell_afind_pane_g1

0x7b5a,	// (0x000125cb) cell_afind_pane_t1_ParamLimits

0x7b5a,	// (0x000125cb) cell_afind_pane_t1

0xad53,	// (0x000157c4) bg_button_pane_cp72

0xe03a,	// (0x00018aab) cell_afind_grid_control_pane_g1

0x4f2b,	// (0x0000f99c) aid_image_placing_area_ParamLimits

0x4f2b,	// (0x0000f99c) aid_image_placing_area

0xd85b,	// (0x000182cc) field_vitu_entry_pane_g1_ParamLimits

0xd85b,	// (0x000182cc) field_vitu_entry_pane_g1

0xd867,	// (0x000182d8) field_vitu_entry_pane_g2_ParamLimits

0xd867,	// (0x000182d8) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x0001a301) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x0001a301) field_vitu_entry_pane_g

0x6d1d,	// (0x0001178e) cell_vitu_itu_pane_g1_ParamLimits

0x6d5f,	// (0x000117d0) cell_vitu_itu_pane_t3_ParamLimits

0x6d5f,	// (0x000117d0) cell_vitu_itu_pane_t3

0xdd70,	// (0x000187e1) mp4_progress_pane_t1_ParamLimits

0xdd87,	// (0x000187f8) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x0001a396) mp4_progress_pane_t_ParamLimits

0xdd9e,	// (0x0001880f) mup_progress_pane_cp04_ParamLimits

0x7a51,	// (0x000124c2) main_myfav_hc_pane_t5_ParamLimits

0x7a51,	// (0x000124c2) main_myfav_hc_pane_t5

0xa2a5,	// (0x00014d16) aid_zoom_text_primary

0x2ad6,	// (0x0000d547) popup_adpt_find_window_ParamLimits

0xa2d6,	// (0x00014d47) main_cam_set_pane

0x740e,	// (0x00011e7f) cam4_zoom_pane_ParamLimits

0x740e,	// (0x00011e7f) cam4_zoom_pane

0x7b6c,	// (0x000125dd) main_cam_set_pane_g1_ParamLimits

0x7b6c,	// (0x000125dd) main_cam_set_pane_g1

0x7b7a,	// (0x000125eb) main_cam_set_pane_g2_ParamLimits

0x7b7a,	// (0x000125eb) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x0001a44e) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x0001a44e) main_cam_set_pane_g

0x7b99,	// (0x0001260a) main_cam_set_pane_t1_ParamLimits

0x7b99,	// (0x0001260a) main_cam_set_pane_t1

0x7bab,	// (0x0001261c) main_cset_listscroll_pane_ParamLimits

0x7bab,	// (0x0001261c) main_cset_listscroll_pane

0x7bc9,	// (0x0001263a) main_cset_slider_pane_ParamLimits

0x7bc9,	// (0x0001263a) main_cset_slider_pane

0xe04b,	// (0x00018abc) main_cset_list_pane_ParamLimits

0xe04b,	// (0x00018abc) main_cset_list_pane

0xe05b,	// (0x00018acc) scroll_pane_cp028

0x7bed,	// (0x0001265e) aid_area_touch_slider

0x7c09,	// (0x0001267a) cset_slider_pane

0x7c33,	// (0x000126a4) main_cset_slider_pane_g1

0x7c48,	// (0x000126b9) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x0001a453) main_cset_slider_pane_g

0xe094,	// (0x00018b05) main_cset_slider_pane_t1

0x7d04,	// (0x00012775) main_cset_slider_pane_t2

0x7d1e,	// (0x0001278f) main_cset_slider_pane_t3

0x7d38,	// (0x000127a9) main_cset_slider_pane_t4

0x7d52,	// (0x000127c3) main_cset_slider_pane_t5

0x7d6c,	// (0x000127dd) main_cset_slider_pane_t6

0x7d81,	// (0x000127f2) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x0001a478) main_cset_slider_pane_t

0x7e85,	// (0x000128f6) cset_list_set_pane_ParamLimits

0x7e85,	// (0x000128f6) cset_list_set_pane

0x7e96,	// (0x00012907) aid_position_infowindow_above

0x7e9e,	// (0x0001290f) aid_position_infowindow_below

0x7ea6,	// (0x00012917) cset_list_set_pane_g1_ParamLimits

0x7ea6,	// (0x00012917) cset_list_set_pane_g1

0xe134,	// (0x00018ba5) cset_list_set_pane_g3_ParamLimits

0xe134,	// (0x00018ba5) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x0001a497) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x0001a497) cset_list_set_pane_g

0xe143,	// (0x00018bb4) cset_list_set_pane_t1_ParamLimits

0xe143,	// (0x00018bb4) cset_list_set_pane_t1

0xa2d6,	// (0x00014d47) list_highlight_pane_cp021_ParamLimits

0xa2d6,	// (0x00014d47) list_highlight_pane_cp021

0xba04,	// (0x00016475) cset_slider_pane_g1

0xba16,	// (0x00016487) cset_slider_pane_g2

0xba0d,	// (0x0001647e) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x0001a49c) cset_slider_pane_g

0xe158,	// (0x00018bc9) aid_area_touch_cam4_zoom

0xe160,	// (0x00018bd1) cam4_zoom_cont_pane

0xe168,	// (0x00018bd9) cam4_zoom_pane_g1

0xe170,	// (0x00018be1) cam4_zoom_pane_g2

0x7eb2,	// (0x00012923) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x0001a4a3) cam4_zoom_pane_g

0xe178,	// (0x00018be9) cam4_zoom_cont_pane_g1

0xe181,	// (0x00018bf2) cam4_zoom_cont_pane_g2

0xe18a,	// (0x00018bfb) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x0001a4aa) cam4_zoom_cont_pane_g

0x72c8,	// (0x00011d39) call4_image_pane_ParamLimits

0x72c8,	// (0x00011d39) call4_image_pane

0xde12,	// (0x00018883) call4_windows_conf_pane_ParamLimits

0xde25,	// (0x00018896) popup_call4_audio_in_window_ParamLimits

0xde25,	// (0x00018896) popup_call4_audio_in_window

0xa283,	// (0x00014cf4) bg_popup_call2_act_pane_cp02

0xde83,	// (0x000188f4) call4_list_conf_pane

0xd2c7,	// (0x00017d38) call4_image_pane_g1

0xd2c7,	// (0x00017d38) call4_image_pane_g2

0x0001,

0xf756,	// (0x0001a1c7) call4_image_pane_g

0xe193,	// (0x00018c04) list_single_graphic_popup_conf4_pane_ParamLimits

0xe193,	// (0x00018c04) list_single_graphic_popup_conf4_pane

0xa283,	// (0x00014cf4) list_highlight_pane_cp022

0xe1a6,	// (0x00018c17) list_single_graphic_popup_conf4_pane_g1

0xb649,	// (0x000160ba) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x0001a4b1) list_single_graphic_popup_conf4_pane_g

0xe1ae,	// (0x00018c1f) list_single_graphic_popup_conf4_pane_t1

0x38bc,	// (0x0000e32d) popup_vtel_slider_window_ParamLimits

0x38bc,	// (0x0000e32d) popup_vtel_slider_window

0xddaa,	// (0x0001881b) dialer2_ne_pane_t2_ParamLimits

0xddaa,	// (0x0001881b) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x0001a39b) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x0001a39b) dialer2_ne_pane_t

0xd0b4,	// (0x00017b25) bg_popup_sub_pane_cp010_ParamLimits

0xd0b4,	// (0x00017b25) bg_popup_sub_pane_cp010

0x7eba,	// (0x0001292b) popup_vtel_slider_window_g1_ParamLimits

0x7eba,	// (0x0001292b) popup_vtel_slider_window_g1

0x7ecd,	// (0x0001293e) popup_vtel_slider_window_g2_ParamLimits

0x7ecd,	// (0x0001293e) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x0001a4b6) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x0001a4b6) popup_vtel_slider_window_g

0x7f21,	// (0x00012992) vtel_slider_pane_ParamLimits

0x7f21,	// (0x00012992) vtel_slider_pane

0x7f43,	// (0x000129b4) vtel_slider_pane_g1_ParamLimits

0x7f43,	// (0x000129b4) vtel_slider_pane_g1

0x7f57,	// (0x000129c8) vtel_slider_pane_g2_ParamLimits

0x7f57,	// (0x000129c8) vtel_slider_pane_g2

0x7f6f,	// (0x000129e0) vtel_slider_pane_g3_ParamLimits

0x7f6f,	// (0x000129e0) vtel_slider_pane_g3

0x7f43,	// (0x000129b4) vtel_slider_pane_g4_ParamLimits

0x7f43,	// (0x000129b4) vtel_slider_pane_g4

0x7f85,	// (0x000129f6) vtel_slider_pane_g5_ParamLimits

0x7f85,	// (0x000129f6) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x0001a4bf) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x0001a4bf) vtel_slider_pane_g

0xa283,	// (0x00014cf4) main_gallery2_pane

0x763c,	// (0x000120ad) aid_size_row_itut2_dropdow_list_ParamLimits

0x763c,	// (0x000120ad) aid_size_row_itut2_dropdow_list

0x76a6,	// (0x00012117) grid_vitu2_function_top_pane_ParamLimits

0x76a6,	// (0x00012117) grid_vitu2_function_top_pane

0x76e9,	// (0x0001215a) popup_vitu2_dropdown_list_window_ParamLimits

0x76e9,	// (0x0001215a) popup_vitu2_dropdown_list_window

0x7708,	// (0x00012179) popup_vitu2_match_list_window

0x7f9b,	// (0x00012a0c) cell_vitu2_function_top_pane_ParamLimits

0x7f9b,	// (0x00012a0c) cell_vitu2_function_top_pane

0x7fbb,	// (0x00012a2c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7fbb,	// (0x00012a2c) cell_vitu2_function_top_pane_cp01

0x7fdb,	// (0x00012a4c) cell_vitu2_function_top_wide_pane_ParamLimits

0x7fdb,	// (0x00012a4c) cell_vitu2_function_top_wide_pane

0xa2d6,	// (0x00014d47) bg_button_pane_cp012

0x7ff9,	// (0x00012a6a) cell_vitu2_function_top_pane_g1

0xe1fc,	// (0x00018c6d) bg_button_pane_cp013_ParamLimits

0xe1fc,	// (0x00018c6d) bg_button_pane_cp013

0x800d,	// (0x00012a7e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x800d,	// (0x00012a7e) cell_vitu2_function_top_wide_pane_g1

0xa2d6,	// (0x00014d47) bg_popup_sub_pane_cp20

0x8025,	// (0x00012a96) list_vitu2_match_list_pane

0xdf55,	// (0x000189c6) bg_popup_sub_pane_cp20_g1

0xdf5d,	// (0x000189ce) bg_popup_sub_pane_cp20_g2

0xb00f,	// (0x00015a80) bg_popup_sub_pane_cp20_g3

0xdf65,	// (0x000189d6) bg_popup_sub_pane_cp20_g4

0xafef,	// (0x00015a60) bg_popup_sub_pane_cp20_g5

0xe218,	// (0x00018c89) bg_popup_sub_pane_cp20_g6

0xdf75,	// (0x000189e6) bg_popup_sub_pane_cp20_g7

0xdf7d,	// (0x000189ee) bg_popup_sub_pane_cp20_g8

0xdf85,	// (0x000189f6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x0001a4ca) bg_popup_sub_pane_cp20_g

0xe220,	// (0x00018c91) list_vitu2_match_list_item_pane_ParamLimits

0xe220,	// (0x00018c91) list_vitu2_match_list_item_pane

0xe232,	// (0x00018ca3) list_vitu2_match_list_item_pane_t1

0xa283,	// (0x00014cf4) bg_popup_sub_pane_cp21

0xb518,	// (0x00015f89) grid_vitu2_dropdown_list_pane

0x806f,	// (0x00012ae0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x806f,	// (0x00012ae0) cell_vitu2_dropdown_list_char_pane

0x8090,	// (0x00012b01) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8090,	// (0x00012b01) cell_vitu2_dropdown_list_ctrl_pane

0xe240,	// (0x00018cb1) cell_vitu2_dropdown_list_char_pane_g1

0xe249,	// (0x00018cba) cell_vitu2_dropdown_list_char_pane_g2

0xe252,	// (0x00018cc3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x0001a4e7) cell_vitu2_dropdown_list_char_pane_g

0x80bc,	// (0x00012b2d) cell_vitu2_dropdown_list_char_pane_t1

0x80ca,	// (0x00012b3b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x80ca,	// (0x00012b3b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x80d7,	// (0x00012b48) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x80d7,	// (0x00012b48) cell_vitu2_dropdown_list_ctrl_pane_g2

0x80e4,	// (0x00012b55) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x80e4,	// (0x00012b55) cell_vitu2_dropdown_list_ctrl_pane_g3

0x80f1,	// (0x00012b62) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x80f1,	// (0x00012b62) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd4f6,	// (0x00017f67) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd4f6,	// (0x00017f67) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x0001a4ee) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x0001a4ee) cell_vitu2_dropdown_list_ctrl_pane_g

0x810d,	// (0x00012b7e) aid_size_cell_gallery2_ParamLimits

0x810d,	// (0x00012b7e) aid_size_cell_gallery2

0x8123,	// (0x00012b94) grid_gallery2_pane_ParamLimits

0x8123,	// (0x00012b94) grid_gallery2_pane

0x8135,	// (0x00012ba6) scroll_pane_cp029_ParamLimits

0x8135,	// (0x00012ba6) scroll_pane_cp029

0x8141,	// (0x00012bb2) cell_gallery2_pane_ParamLimits

0x8141,	// (0x00012bb2) cell_gallery2_pane

0xe25b,	// (0x00018ccc) cell_gallery2_pane_g2

0x8173,	// (0x00012be4) cell_gallery2_pane_g3

0xe265,	// (0x00018cd6) cell_gallery2_pane_g4

0xe26d,	// (0x00018cde) cell_gallery2_pane_g5

0xb8ae,	// (0x0001631f) grid_highlight_pane_cp10

0x7708,	// (0x00012179) popup_vitu2_match_list_window_ParamLimits

0x7719,	// (0x0001218a) popup_vitu2_query_window_ParamLimits

0x7719,	// (0x0001218a) popup_vitu2_query_window

0xa283,	// (0x00014cf4) bg_vitu2_candi_button_pane

0xe240,	// (0x00018cb1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe249,	// (0x00018cba) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe252,	// (0x00018cc3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x817b,	// (0x00012bec) bg_button_pane_cp015

0x8183,	// (0x00012bf4) bg_button_pane_cp016

0x818c,	// (0x00012bfd) bg_button_pane_cp017

0xa2d6,	// (0x00014d47) bg_popup_sub_pane_cp22

0xe275,	// (0x00018ce6) popup_vitu2_query_window_g1

0x81b2,	// (0x00012c23) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x0001a4f9) popup_vitu2_query_window_g

0x81be,	// (0x00012c2f) popup_vitu2_query_window_t1_ParamLimits

0x81be,	// (0x00012c2f) popup_vitu2_query_window_t1

0x81e6,	// (0x00012c57) popup_vitu2_query_window_t2_ParamLimits

0x81e6,	// (0x00012c57) popup_vitu2_query_window_t2

0x81f8,	// (0x00012c69) popup_vitu2_query_window_t3_ParamLimits

0x81f8,	// (0x00012c69) popup_vitu2_query_window_t3

0x8220,	// (0x00012c91) popup_vitu2_query_window_t4_ParamLimits

0x8220,	// (0x00012c91) popup_vitu2_query_window_t4

0x8232,	// (0x00012ca3) popup_vitu2_query_window_t5_ParamLimits

0x8232,	// (0x00012ca3) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x0001a4fe) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x0001a4fe) popup_vitu2_query_window_t

0xe043,	// (0x00018ab4) main_cset_text_pane

0x7bed,	// (0x0001265e) aid_area_touch_slider_ParamLimits

0x7c09,	// (0x0001267a) cset_slider_pane_ParamLimits

0x7c33,	// (0x000126a4) main_cset_slider_pane_g1_ParamLimits

0x7c48,	// (0x000126b9) main_cset_slider_pane_g2_ParamLimits

0xe064,	// (0x00018ad5) main_cset_slider_pane_g3_ParamLimits

0xe064,	// (0x00018ad5) main_cset_slider_pane_g3

0x7c5d,	// (0x000126ce) main_cset_slider_pane_g4_ParamLimits

0x7c5d,	// (0x000126ce) main_cset_slider_pane_g4

0x7c6c,	// (0x000126dd) main_cset_slider_pane_g5_ParamLimits

0x7c6c,	// (0x000126dd) main_cset_slider_pane_g5

0x7c78,	// (0x000126e9) main_cset_slider_pane_g6_ParamLimits

0x7c78,	// (0x000126e9) main_cset_slider_pane_g6

0xf9e2,	// (0x0001a453) main_cset_slider_pane_g_ParamLimits

0xe094,	// (0x00018b05) main_cset_slider_pane_t1_ParamLimits

0x7d04,	// (0x00012775) main_cset_slider_pane_t2_ParamLimits

0x7d1e,	// (0x0001278f) main_cset_slider_pane_t3_ParamLimits

0x7d38,	// (0x000127a9) main_cset_slider_pane_t4_ParamLimits

0x7d52,	// (0x000127c3) main_cset_slider_pane_t5_ParamLimits

0x7d6c,	// (0x000127dd) main_cset_slider_pane_t6_ParamLimits

0x7d81,	// (0x000127f2) main_cset_slider_pane_t7_ParamLimits

0x7dab,	// (0x0001281c) main_cset_slider_pane_t8_ParamLimits

0x7dab,	// (0x0001281c) main_cset_slider_pane_t8

0x7dd3,	// (0x00012844) main_cset_slider_pane_t9_ParamLimits

0x7dd3,	// (0x00012844) main_cset_slider_pane_t9

0x7dfb,	// (0x0001286c) main_cset_slider_pane_t10_ParamLimits

0x7dfb,	// (0x0001286c) main_cset_slider_pane_t10

0x7e23,	// (0x00012894) main_cset_slider_pane_t11_ParamLimits

0x7e23,	// (0x00012894) main_cset_slider_pane_t11

0x7e4b,	// (0x000128bc) main_cset_slider_pane_t12_ParamLimits

0x7e4b,	// (0x000128bc) main_cset_slider_pane_t12

0x7e68,	// (0x000128d9) main_cset_slider_pane_t13_ParamLimits

0x7e68,	// (0x000128d9) main_cset_slider_pane_t13

0xfa07,	// (0x0001a478) main_cset_slider_pane_t_ParamLimits

0xa283,	// (0x00014cf4) bg_popup_sub_pane_cp011

0xe281,	// (0x00018cf2) main_cset_text_pane_g1

0xe289,	// (0x00018cfa) main_cset_text_pane_t1

0xe297,	// (0x00018d08) main_cset_text_pane_t2

0xe2a5,	// (0x00018d16) main_cset_text_pane_t3

0xe2b3,	// (0x00018d24) main_cset_text_pane_t4

0xe2c1,	// (0x00018d32) main_cset_text_pane_t5

0xe2cf,	// (0x00018d40) main_cset_text_pane_t6

0xe2dd,	// (0x00018d4e) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x0001a509) main_cset_text_pane_t

0xa283,	// (0x00014cf4) main_cam4_burst_pane

0xa283,	// (0x00014cf4) main_cam5_pane

0x7b3b,	// (0x000125ac) bg_button_pane_cp019

0x7b44,	// (0x000125b5) bg_button_pane_cp020

0xe070,	// (0x00018ae1) main_cset_slider_pane_g7_ParamLimits

0xe070,	// (0x00018ae1) main_cset_slider_pane_g7

0xe07c,	// (0x00018aed) main_cset_slider_pane_g8_ParamLimits

0xe07c,	// (0x00018aed) main_cset_slider_pane_g8

0x7c8c,	// (0x000126fd) main_cset_slider_pane_g9_ParamLimits

0x7c8c,	// (0x000126fd) main_cset_slider_pane_g9

0x7c98,	// (0x00012709) main_cset_slider_pane_g10_ParamLimits

0x7c98,	// (0x00012709) main_cset_slider_pane_g10

0x7ca4,	// (0x00012715) main_cset_slider_pane_g11_ParamLimits

0x7ca4,	// (0x00012715) main_cset_slider_pane_g11

0x7cb0,	// (0x00012721) main_cset_slider_pane_g12_ParamLimits

0x7cb0,	// (0x00012721) main_cset_slider_pane_g12

0x7cbc,	// (0x0001272d) main_cset_slider_pane_g13_ParamLimits

0x7cbc,	// (0x0001272d) main_cset_slider_pane_g13

0x7cc8,	// (0x00012739) main_cset_slider_pane_g14_ParamLimits

0x7cc8,	// (0x00012739) main_cset_slider_pane_g14

0x7cd4,	// (0x00012745) main_cset_slider_pane_g15_ParamLimits

0x7cd4,	// (0x00012745) main_cset_slider_pane_g15

0xe0c2,	// (0x00018b33) main_cset_slider_pane_t14_ParamLimits

0xe0c2,	// (0x00018b33) main_cset_slider_pane_t14

0xe0fb,	// (0x00018b6c) main_cset_slider_pane_t15_ParamLimits

0xe0fb,	// (0x00018b6c) main_cset_slider_pane_t15

0x8244,	// (0x00012cb5) aid_cam4_burst_size_cell_ParamLimits

0x8244,	// (0x00012cb5) aid_cam4_burst_size_cell

0x8264,	// (0x00012cd5) grid_cam4_burst_pane_ParamLimits

0x8264,	// (0x00012cd5) grid_cam4_burst_pane

0x828a,	// (0x00012cfb) linegrid_cam4_burst_pane_ParamLimits

0x828a,	// (0x00012cfb) linegrid_cam4_burst_pane

0x82ac,	// (0x00012d1d) scroll_pane_cp30_ParamLimits

0x82ac,	// (0x00012d1d) scroll_pane_cp30

0x82b8,	// (0x00012d29) cell_cam4_burst_pane_ParamLimits

0x82b8,	// (0x00012d29) cell_cam4_burst_pane

0xe2eb,	// (0x00018d5c) linegrid_cam4_burst_pane_g1_ParamLimits

0xe2eb,	// (0x00018d5c) linegrid_cam4_burst_pane_g1

0x82ff,	// (0x00012d70) linegrid_cam4_burst_pane_g2_ParamLimits

0x82ff,	// (0x00012d70) linegrid_cam4_burst_pane_g2

0xe2f8,	// (0x00018d69) linegrid_cam4_burst_pane_g3_ParamLimits

0xe2f8,	// (0x00018d69) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x0001a518) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x0001a518) linegrid_cam4_burst_pane_g

0x8310,	// (0x00012d81) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8310,	// (0x00012d81) linegrid_cam4_burst_pane_g3_copy1

0xe305,	// (0x00018d76) linegrid_cam4_burst_pane_g4_ParamLimits

0xe305,	// (0x00018d76) linegrid_cam4_burst_pane_g4

0x832a,	// (0x00012d9b) linegrid_cam4_burst_pane_g5_ParamLimits

0x832a,	// (0x00012d9b) linegrid_cam4_burst_pane_g5

0x833b,	// (0x00012dac) linegrid_cam4_burst_pane_g6_ParamLimits

0x833b,	// (0x00012dac) linegrid_cam4_burst_pane_g6

0xe312,	// (0x00018d83) linegrid_cam4_burst_pane_g7_ParamLimits

0xe312,	// (0x00018d83) linegrid_cam4_burst_pane_g7

0x834c,	// (0x00012dbd) cell_cam4_burst_pane_g1

0xe32b,	// (0x00018d9c) main_cam5_pane_t1_ParamLimits

0xe32b,	// (0x00018d9c) main_cam5_pane_t1

0xe33d,	// (0x00018dae) main_cam5_pane_t2_ParamLimits

0xe33d,	// (0x00018dae) main_cam5_pane_t2

0xe34f,	// (0x00018dc0) main_cam5_pane_t3_ParamLimits

0xe34f,	// (0x00018dc0) main_cam5_pane_t3

0xe361,	// (0x00018dd2) main_cam5_pane_t4_ParamLimits

0xe361,	// (0x00018dd2) main_cam5_pane_t4

0xe377,	// (0x00018de8) main_cam5_pane_t5_ParamLimits

0xe377,	// (0x00018de8) main_cam5_pane_t5

0xe389,	// (0x00018dfa) main_cam5_pane_t6_ParamLimits

0xe389,	// (0x00018dfa) main_cam5_pane_t6

0xe39b,	// (0x00018e0c) main_cam5_pane_t7_ParamLimits

0xe39b,	// (0x00018e0c) main_cam5_pane_t7

0xe3ad,	// (0x00018e1e) main_cam5_pane_t8_ParamLimits

0xe3ad,	// (0x00018e1e) main_cam5_pane_t8

0xe3c9,	// (0x00018e3a) main_cam5_pane_t9_ParamLimits

0xe3c9,	// (0x00018e3a) main_cam5_pane_t9

0xe3db,	// (0x00018e4c) main_cam5_pane_t10_ParamLimits

0xe3db,	// (0x00018e4c) main_cam5_pane_t10

0xe3ed,	// (0x00018e5e) main_cam5_pane_t11_ParamLimits

0xe3ed,	// (0x00018e5e) main_cam5_pane_t11

0xe3ff,	// (0x00018e70) main_cam5_pane_t12_ParamLimits

0xe3ff,	// (0x00018e70) main_cam5_pane_t12

0xe414,	// (0x00018e85) main_cam5_pane_t13_ParamLimits

0xe414,	// (0x00018e85) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x0001a524) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x0001a524) main_cam5_pane_t

0x2b34,	// (0x0000d5a5) popup_scut_keymap_window_ParamLimits

0x2b34,	// (0x0000d5a5) popup_scut_keymap_window

0x8361,	// (0x00012dd2) aid_size_cell_brow_shortcut

0xb8ae,	// (0x0001631f) bg_popup_window_pane_cp010

0x836d,	// (0x00012dde) grid_scut_pane

0x8377,	// (0x00012de8) cell_scut_pane_ParamLimits

0x8377,	// (0x00012de8) cell_scut_pane

0x838c,	// (0x00012dfd) cell_scut_pane_g1

0xe431,	// (0x00018ea2) cell_scut_pane_t1

0xe440,	// (0x00018eb1) cell_scut_pane_t2

0x8395,	// (0x00012e06) cell_scut_pane_t3

0x0002,

0xface,	// (0x0001a53f) cell_scut_pane_t

0x62ac,	// (0x00010d1d) main_mup3_pane_g8_ParamLimits

0x62ac,	// (0x00010d1d) main_mup3_pane_g8

0x7650,	// (0x000120c1) area_vitu2_query_pane_ParamLimits

0x7650,	// (0x000120c1) area_vitu2_query_pane

0x8195,	// (0x00012c06) input_focus_pane_cp08

0xe44f,	// (0x00018ec0) area_vitu2_query_pane_g1

0x83a3,	// (0x00012e14) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x0001a546) area_vitu2_query_pane_g

0x83b2,	// (0x00012e23) area_vitu2_query_pane_t1_ParamLimits

0x83b2,	// (0x00012e23) area_vitu2_query_pane_t1

0x83c4,	// (0x00012e35) area_vitu2_query_pane_t2_ParamLimits

0x83c4,	// (0x00012e35) area_vitu2_query_pane_t2

0x83d6,	// (0x00012e47) area_vitu2_query_pane_t3_ParamLimits

0x83d6,	// (0x00012e47) area_vitu2_query_pane_t3

0xe45b,	// (0x00018ecc) area_vitu2_query_pane_t4_ParamLimits

0xe45b,	// (0x00018ecc) area_vitu2_query_pane_t4

0xe483,	// (0x00018ef4) area_vitu2_query_pane_t5_ParamLimits

0xe483,	// (0x00018ef4) area_vitu2_query_pane_t5

0xe4ab,	// (0x00018f1c) area_vitu2_query_pane_t6_ParamLimits

0xe4ab,	// (0x00018f1c) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x0001a54b) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x0001a54b) area_vitu2_query_pane_t

0x83fe,	// (0x00012e6f) bg_button_pane_cp018

0x840b,	// (0x00012e7c) bg_button_pane_cp021

0x8417,	// (0x00012e88) bg_button_pane_cp022

0x8426,	// (0x00012e97) input_focus_pane_cp09

0x46c8,	// (0x0000f139) aid_size_touch_mv_arrow_left

0xb787,	// (0x000161f8) aid_size_touch_mv_arrow_right

0x7cec,	// (0x0001275d) main_cset_slider_pane_g16_ParamLimits

0x7cec,	// (0x0001275d) main_cset_slider_pane_g16

0x7cf8,	// (0x00012769) main_cset_slider_pane_g17_ParamLimits

0x7cf8,	// (0x00012769) main_cset_slider_pane_g17

0x834c,	// (0x00012dbd) cell_cam4_burst_pane_g1_ParamLimits

0xa283,	// (0x00014cf4) compa_mode_pane

0x7edd,	// (0x0001294e) popup_vtel_slider_window_g3_ParamLimits

0x7edd,	// (0x0001294e) popup_vtel_slider_window_g3

0x7ef4,	// (0x00012965) popup_vtel_slider_window_g4_ParamLimits

0x7ef4,	// (0x00012965) popup_vtel_slider_window_g4

0x7f0b,	// (0x0001297c) popup_vtel_slider_window_t1_ParamLimits

0x7f0b,	// (0x0001297c) popup_vtel_slider_window_t1

0xa283,	// (0x00014cf4) main_cl_pane

0xcdca,	// (0x0001783b) popup_imed_adjust2_window_ParamLimits

0xcda4,	// (0x00017815) bg_tb_trans_pane_cp05_ParamLimits

0xd790,	// (0x00018201) popup_imed_adjust2_window_g1_ParamLimits

0xd79f,	// (0x00018210) popup_imed_adjust2_window_g2_ParamLimits

0xd79f,	// (0x00018210) popup_imed_adjust2_window_g2

0xd7ab,	// (0x0001821c) popup_imed_adjust2_window_g3_ParamLimits

0xd7ab,	// (0x0001821c) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x0001a2c5) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x0001a2c5) popup_imed_adjust2_window_g

0xd7b7,	// (0x00018228) popup_imed_adjust2_window_t1_ParamLimits

0xd7cf,	// (0x00018240) slider_imed_adjust_pane_ParamLimits

0xd7e3,	// (0x00018254) slider_imed_adjust_pane_g1_ParamLimits

0xd7f3,	// (0x00018264) slider_imed_adjust_pane_g2_ParamLimits

0xd803,	// (0x00018274) slider_imed_adjust_pane_g3_ParamLimits

0xd814,	// (0x00018285) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x0001a2cc) slider_imed_adjust_pane_g_ParamLimits

0x73bf,	// (0x00011e30) aid_touch_area_cam4_ParamLimits

0x73bf,	// (0x00011e30) aid_touch_area_cam4

0xdec7,	// (0x00018938) battery_pane_cp01

0x7461,	// (0x00011ed2) main_camera4_pane_g6_ParamLimits

0x7461,	// (0x00011ed2) main_camera4_pane_g6

0x7482,	// (0x00011ef3) main_camera4_pane_t2_ParamLimits

0x7482,	// (0x00011ef3) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x0001a3cf) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x0001a3cf) main_camera4_pane_t

0x74d5,	// (0x00011f46) aid_touch_area_vid4_ParamLimits

0x74d5,	// (0x00011f46) aid_touch_area_vid4

0x7517,	// (0x00011f88) main_video4_pane_g5_ParamLimits

0x7517,	// (0x00011f88) main_video4_pane_g5

0x7538,	// (0x00011fa9) vid4_progress_pane_ParamLimits

0x7538,	// (0x00011fa9) vid4_progress_pane

0xe088,	// (0x00018af9) main_cset_slider_pane_g18_ParamLimits

0xe088,	// (0x00018af9) main_cset_slider_pane_g18

0xe31f,	// (0x00018d90) cell_cam4_burst_pane_g2_ParamLimits

0xe31f,	// (0x00018d90) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x0001a51f) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x0001a51f) cell_cam4_burst_pane_g

0xaa41,	// (0x000154b2) bg_cl_pane_ParamLimits

0xaa41,	// (0x000154b2) bg_cl_pane

0x8435,	// (0x00012ea6) cl_header_pane_ParamLimits

0x8435,	// (0x00012ea6) cl_header_pane

0x8449,	// (0x00012eba) cl_listscroll_pane_ParamLimits

0x8449,	// (0x00012eba) cl_listscroll_pane

0xe4f7,	// (0x00018f68) bg_cl_pane_g1

0xe4ff,	// (0x00018f70) bg_cl_pane_g2

0xe507,	// (0x00018f78) bg_cl_pane_g3

0xe50f,	// (0x00018f80) bg_cl_pane_g4

0xe517,	// (0x00018f88) bg_cl_pane_g5

0xe51f,	// (0x00018f90) bg_cl_pane_g6

0xe527,	// (0x00018f98) bg_cl_pane_g7

0xe52f,	// (0x00018fa0) bg_cl_pane_g8

0xe537,	// (0x00018fa8) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x0001a55a) bg_cl_pane_g

0x8459,	// (0x00012eca) aid_height_cl_leading_ParamLimits

0x8459,	// (0x00012eca) aid_height_cl_leading

0x8465,	// (0x00012ed6) aid_height_cl_text_ParamLimits

0x8465,	// (0x00012ed6) aid_height_cl_text

0xa2d6,	// (0x00014d47) bg_cl_header_pane_ParamLimits

0xa2d6,	// (0x00014d47) bg_cl_header_pane

0x8484,	// (0x00012ef5) cl_header_pane_g1_ParamLimits

0x8484,	// (0x00012ef5) cl_header_pane_g1

0x849a,	// (0x00012f0b) cl_header_pane_t1_ParamLimits

0x849a,	// (0x00012f0b) cl_header_pane_t1

0xe53f,	// (0x00018fb0) cl_list_pane

0xe548,	// (0x00018fb9) hc_scroll_pane_cp01

0xafef,	// (0x00015a60) bg_cl_header_pane_g1

0xdf55,	// (0x000189c6) bg_cl_header_pane_g2

0xb00f,	// (0x00015a80) bg_cl_header_pane_g3

0xdf65,	// (0x000189d6) bg_cl_header_pane_g4

0xdf5d,	// (0x000189ce) bg_cl_header_pane_g5

0xe218,	// (0x00018c89) bg_cl_header_pane_g6

0xdf7d,	// (0x000189ee) bg_cl_header_pane_g7

0xdf85,	// (0x000189f6) bg_cl_header_pane_g8

0xdf75,	// (0x000189e6) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x0001a56d) bg_cl_header_pane_g

0x84b3,	// (0x00012f24) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x84b3,	// (0x00012f24) hc_cl_list_double_graphic_heading_pane

0x84c3,	// (0x00012f34) hc_cl_list_single_graphic_pane_ParamLimits

0x84c3,	// (0x00012f34) hc_cl_list_single_graphic_pane

0x84d6,	// (0x00012f47) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x84d6,	// (0x00012f47) hc_cl_list_single_graphic_pane_g1

0x84e2,	// (0x00012f53) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x84e2,	// (0x00012f53) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x0001a580) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x0001a580) hc_cl_list_single_graphic_pane_g

0x84f6,	// (0x00012f67) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x84f6,	// (0x00012f67) hc_cl_list_single_graphic_pane_t1

0x84d6,	// (0x00012f47) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x84d6,	// (0x00012f47) hc_cl_list_double_graphic_heading_pane_g1

0x850b,	// (0x00012f7c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x850b,	// (0x00012f7c) hc_cl_list_double_graphic_heading_pane_g2

0x851f,	// (0x00012f90) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x851f,	// (0x00012f90) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x0001a585) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x0001a585) hc_cl_list_double_graphic_heading_pane_g

0x8533,	// (0x00012fa4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8533,	// (0x00012fa4) hc_cl_list_double_graphic_heading_pane_t1

0x8548,	// (0x00012fb9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8548,	// (0x00012fb9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x0001a58c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x0001a58c) hc_cl_list_double_graphic_heading_pane_t

0xe551,	// (0x00018fc2) vid4_progress_pane_g1

0xe560,	// (0x00018fd1) vid4_progress_pane_g2

0xe56f,	// (0x00018fe0) vid4_progress_pane_g3

0xe57e,	// (0x00018fef) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x0001a591) vid4_progress_pane_g

0xe58a,	// (0x00018ffb) vid4_progress_pane_t1

0xe5a0,	// (0x00019011) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x0001a59c) vid4_progress_pane_t

0xe5ca,	// (0x0001903b) wait_bar_pane_cp07

0xd0c2,	// (0x00017b33) blid_firmament_pane_ParamLimits

0xd103,	// (0x00017b74) popup_blid_sat_info2_window_g1

0xd127,	// (0x00017b98) popup_blid_sat_info2_window_t3

0xd135,	// (0x00017ba6) popup_blid_sat_info2_window_t4

0xd143,	// (0x00017bb4) popup_blid_sat_info2_window_t5

0xd151,	// (0x00017bc2) popup_blid_sat_info2_window_t6

0xd161,	// (0x00017bd2) popup_blid_sat_info2_window_t7

0xd16f,	// (0x00017be0) popup_blid_sat_info2_window_t8

0xd17d,	// (0x00017bee) popup_blid_sat_info2_window_t9

0xd18b,	// (0x00017bfc) popup_blid_sat_info2_window_t10

0xd247,	// (0x00017cb8) aid_firma_cardinal_ParamLimits

0xd25b,	// (0x00017ccc) blid_firmament_pane_t1_ParamLimits

0xd272,	// (0x00017ce3) blid_firmament_pane_t2_ParamLimits

0xd289,	// (0x00017cfa) blid_firmament_pane_t3_ParamLimits

0xd2a0,	// (0x00017d11) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x0001a1be) blid_firmament_pane_t_ParamLimits

0xd2b7,	// (0x00017d28) blid_sat_info_pane_ParamLimits

0xa2d6,	// (0x00014d47) main_cam_set_pane_ParamLimits

0x6b03,	// (0x00011574) aid_size_cell_colour_35_ParamLimits

0x6b23,	// (0x00011594) aid_size_cell_colour_112_ParamLimits

0x6b43,	// (0x000115b4) aid_size_cell_effect_ParamLimits

0xcda4,	// (0x00017815) bg_tb_trans_pane_cp02_ParamLimits

0xb294,	// (0x00015d05) heading_imed_pane_ParamLimits

0x6b63,	// (0x000115d4) listscroll_imed_pane_ParamLimits

0xc396,	// (0x00016e07) popup_call2_audio_first_window_g5_ParamLimits

0xc396,	// (0x00016e07) popup_call2_audio_first_window_g5

0x7080,	// (0x00011af1) aid_size_touch_image3_arrow_left_ParamLimits

0x7080,	// (0x00011af1) aid_size_touch_image3_arrow_left

0x70a0,	// (0x00011b11) aid_size_touch_image3_arrow_right_ParamLimits

0x70a0,	// (0x00011b11) aid_size_touch_image3_arrow_right

0xe5b5,	// (0x00019026) vid4_progress_pane_t3

0x6e37,	// (0x000118a8) main_hwr_training_symbol_option_pane_ParamLimits

0x6e37,	// (0x000118a8) main_hwr_training_symbol_option_pane

0xda6f,	// (0x000184e0) popup_hwr_training_preview_window_ParamLimits

0xda6f,	// (0x000184e0) popup_hwr_training_preview_window

0x6e53,	// (0x000118c4) hwr_training_navi_pane_g5_ParamLimits

0x6e53,	// (0x000118c4) hwr_training_navi_pane_g5

0xdf43,	// (0x000189b4) popup_char_count_window

0xa2d6,	// (0x00014d47) bg_popup_sub_pane_cp20_ParamLimits

0x8025,	// (0x00012a96) list_vitu2_match_list_pane_ParamLimits

0x8034,	// (0x00012aa5) vitu2_page_scroll_pane_ParamLimits

0x8034,	// (0x00012aa5) vitu2_page_scroll_pane

0xe634,	// (0x000190a5) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe634,	// (0x000190a5) list_single_hwr_training_symbol_option_pane

0xe647,	// (0x000190b8) list_single_hwr_training_symbol_option_pane_g1

0xe64f,	// (0x000190c0) list_single_hwr_training_symbol_option_pane_t1

0xe65d,	// (0x000190ce) bg_button_pane_cp023

0xe666,	// (0x000190d7) bg_button_pane_cp024

0x855d,	// (0x00012fce) vitu2_page_scroll_pane_g1

0x8565,	// (0x00012fd6) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x0001a5a3) vitu2_page_scroll_pane_g

0x856d,	// (0x00012fde) vitu2_page_scroll_pane_t1

0xcfb0,	// (0x00017a21) popup_char_count_window_g1

0xe699,	// (0x0001910a) popup_char_count_window_g2

0xe6a2,	// (0x00019113) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x0001a5a8) popup_char_count_window_g

0xe6ab,	// (0x0001911c) popup_char_count_window_t1

0xa283,	// (0x00014cf4) main_vded2_pane

0xd77e,	// (0x000181ef) aid_size_cell_imed_line

0xd788,	// (0x000181f9) grid_imed_line_width_pane

0x75ac,	// (0x0001201d) vid4_indicators_pane_g4

0xe6b9,	// (0x0001912a) cell_imed_line_width_pane_ParamLimits

0xe6b9,	// (0x0001912a) cell_imed_line_width_pane

0xe6cb,	// (0x0001913c) cell_imed_line_width_pane_g1

0xe6d4,	// (0x00019145) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x0001a5af) cell_imed_line_width_pane_g

0x857c,	// (0x00012fed) main_vded2_pane_g1_ParamLimits

0x857c,	// (0x00012fed) main_vded2_pane_g1

0x8592,	// (0x00013003) main_vded2_pane_g2_ParamLimits

0x8592,	// (0x00013003) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x0001a5b4) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x0001a5b4) main_vded2_pane_g

0x85a2,	// (0x00013013) vded2_slider_pane_ParamLimits

0x85a2,	// (0x00013013) vded2_slider_pane

0x85b5,	// (0x00013026) aid_size_touch_vded2_end

0x85bd,	// (0x0001302e) aid_size_touch_vded2_playhead

0x85c5,	// (0x00013036) aid_size_touch_vded2_start

0x85cd,	// (0x0001303e) vded2_slider_bg_pane

0x85d6,	// (0x00013047) vded2_slider_pane_g1

0x85df,	// (0x00013050) vded2_slider_pane_g2

0x85e7,	// (0x00013058) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x0001a5b9) vded2_slider_pane_g

0x85f0,	// (0x00013061) vded2_slider_bg_pane_g1

0x85f9,	// (0x0001306a) vded2_slider_bg_pane_g2

0x8602,	// (0x00013073) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x0001a5c0) vded2_slider_bg_pane_g

0x4bda,	// (0x0000f64b) aid_postcard_touch_down_pane_ParamLimits

0x4bda,	// (0x0000f64b) aid_postcard_touch_down_pane

0x4bec,	// (0x0000f65d) aid_postcard_touch_up_pane_ParamLimits

0x4bec,	// (0x0000f65d) aid_postcard_touch_up_pane

0xa283,	// (0x00014cf4) main_blid2_pane

0xcdb2,	// (0x00017823) popup_blid2_search_window

0xa283,	// (0x00014cf4) blid2_gps_pane

0xa283,	// (0x00014cf4) blid2_navig_pane

0xa283,	// (0x00014cf4) blid2_search_pane

0xa283,	// (0x00014cf4) blid2_tripm_pane

0x860b,	// (0x0001307c) blid2_search_pane_g1_ParamLimits

0x860b,	// (0x0001307c) blid2_search_pane_g1

0x861f,	// (0x00013090) blid2_search_pane_t1_ParamLimits

0x861f,	// (0x00013090) blid2_search_pane_t1

0x8631,	// (0x000130a2) aid_size_cell_blid2_gps_ParamLimits

0x8631,	// (0x000130a2) aid_size_cell_blid2_gps

0x8649,	// (0x000130ba) blid2_gps_pane_g1_ParamLimits

0x8649,	// (0x000130ba) blid2_gps_pane_g1

0x865d,	// (0x000130ce) grid_blid2_satellite_pane_ParamLimits

0x865d,	// (0x000130ce) grid_blid2_satellite_pane

0x8671,	// (0x000130e2) blid2_navig_pane_g1_ParamLimits

0x8671,	// (0x000130e2) blid2_navig_pane_g1

0x867d,	// (0x000130ee) blid2_navig_pane_t1_ParamLimits

0x867d,	// (0x000130ee) blid2_navig_pane_t1

0x8696,	// (0x00013107) blid2_navig_pane_t2_ParamLimits

0x8696,	// (0x00013107) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x0001a5c7) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x0001a5c7) blid2_navig_pane_t

0x86af,	// (0x00013120) blid2_navig_ring_pane_ParamLimits

0x86af,	// (0x00013120) blid2_navig_ring_pane

0x86c4,	// (0x00013135) blid2_speed_pane_ParamLimits

0x86c4,	// (0x00013135) blid2_speed_pane

0x86d0,	// (0x00013141) blid2_tripm_pane_g1_ParamLimits

0x86d0,	// (0x00013141) blid2_tripm_pane_g1

0x86e5,	// (0x00013156) blid2_tripm_pane_g2_ParamLimits

0x86e5,	// (0x00013156) blid2_tripm_pane_g2

0x86f9,	// (0x0001316a) blid2_tripm_pane_g3_ParamLimits

0x86f9,	// (0x0001316a) blid2_tripm_pane_g3

0x870d,	// (0x0001317e) blid2_tripm_pane_g4_ParamLimits

0x870d,	// (0x0001317e) blid2_tripm_pane_g4

0x8721,	// (0x00013192) blid2_tripm_pane_g5_ParamLimits

0x8721,	// (0x00013192) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x0001a5cc) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x0001a5cc) blid2_tripm_pane_g

0x8743,	// (0x000131b4) blid2_tripm_pane_t1_ParamLimits

0x8743,	// (0x000131b4) blid2_tripm_pane_t1

0x875a,	// (0x000131cb) blid2_tripm_pane_t2_ParamLimits

0x875a,	// (0x000131cb) blid2_tripm_pane_t2

0x8771,	// (0x000131e2) blid2_tripm_pane_t3_ParamLimits

0x8771,	// (0x000131e2) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x0001a5d9) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x0001a5d9) blid2_tripm_pane_t

0x87b4,	// (0x00013225) cell_blid2_satellite_pane_ParamLimits

0x87b4,	// (0x00013225) cell_blid2_satellite_pane

0x87cc,	// (0x0001323d) cell_blid2_satellite_pane_g1

0xe6dc,	// (0x0001914d) cell_blid2_satellite_pane_t1

0xd2c7,	// (0x00017d38) blid2_speed_pane_g1

0xe6ea,	// (0x0001915b) blid2_speed_pane_t1

0xe6f8,	// (0x00019169) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x0001a5e2) blid2_speed_pane_t

0xd2c7,	// (0x00017d38) blid2_navig_ring_pane_g1

0x87d5,	// (0x00013246) blid2_navig_ring_pane_g2

0x87dd,	// (0x0001324e) blid2_navig_ring_pane_g3

0x87e5,	// (0x00013256) blid2_navig_ring_pane_g4

0x87ed,	// (0x0001325e) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x0001a5e7) blid2_navig_ring_pane_g

0xa283,	// (0x00014cf4) bg_popup_window_pane_cp011

0xe706,	// (0x00019177) popup_blid2_search_window_g1

0xe70e,	// (0x0001917f) popup_blid2_search_window_t1

0xe71c,	// (0x0001918d) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x0001a5f2) popup_blid2_search_window_t

0xaefe,	// (0x0001596f) main_browser_pane_g1

0xaa41,	// (0x000154b2) main_browser_pane_ParamLimits

0xa2d6,	// (0x00014d47) bg_button_pane_cp011_ParamLimits

0x7915,	// (0x00012386) cell_vitu2_function_pane_g1_ParamLimits

0xa2d6,	// (0x00014d47) bg_popup_sub_pane_cp22_ParamLimits

0x8195,	// (0x00012c06) input_focus_pane_cp08_ParamLimits

0x81a2,	// (0x00012c13) popup_vitu2_query_button_pane_ParamLimits

0x81a2,	// (0x00012c13) popup_vitu2_query_button_pane

0x817b,	// (0x00012bec) popup_vitu2_query_input_button_pane

0xe275,	// (0x00018ce6) popup_vitu2_query_window_g1_ParamLimits

0x81b2,	// (0x00012c23) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x0001a4f9) popup_vitu2_query_window_g_ParamLimits

0xa283,	// (0x00014cf4) bg_button_pane_cp026

0x87f5,	// (0x00013266) popup_vitu2_query_input_button_pane_g1

0xa283,	// (0x00014cf4) bg_button_pane_cp025

0xe72a,	// (0x0001919b) popup_vitu2_query_button_pane_t1

0x602d,	// (0x00010a9e) main_mp3_pane_t6

0x603b,	// (0x00010aac) popup_slider_window_cp01

0xded7,	// (0x00018948) cam4_battery_pane

0xded7,	// (0x00018948) cam4_battery_pane_cp02

0xded7,	// (0x00018948) cam4_battery_pane_cp01

0xded7,	// (0x00018948) cam4_battery_pane_cp03

0xd2c7,	// (0x00017d38) cam4_battery_pane_g1

0xe738,	// (0x000191a9) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x0001a5f7) cam4_battery_pane_g

0xd199,	// (0x00017c0a) popup_blid_sat_info2_window_t11

0x46c8,	// (0x0000f139) aid_size_touch_mv_arrow_left_ParamLimits

0xb787,	// (0x000161f8) aid_size_touch_mv_arrow_right_ParamLimits

0xb7bf,	// (0x00016230) navi_pane_g1_ParamLimits

0xb7cb,	// (0x0001623c) navi_pane_g2_ParamLimits

0x46e1,	// (0x0000f152) navi_pane_g3_ParamLimits

0xf44c,	// (0x00019ebd) navi_pane_g_ParamLimits

0x4706,	// (0x0000f177) navi_pane_mv_t1_ParamLimits

0x6b6f,	// (0x000115e0) grid_imed_effect_pane_ParamLimits

0xae38,	// (0x000158a9) aid_placing_vt_slider_lsc

0xae40,	// (0x000158b1) aid_placing_vt_slider_prt

0xa2d6,	// (0x00014d47) bg_tb_trans_pane_cp01_ParamLimits

0xd416,	// (0x00017e87) popup_image_details_window_g1_ParamLimits

0xd429,	// (0x00017e9a) popup_image_details_window_g2_ParamLimits

0xd43e,	// (0x00017eaf) popup_image_details_window_g3_ParamLimits

0xd43e,	// (0x00017eaf) popup_image_details_window_g3

0xf792,	// (0x0001a203) popup_image_details_window_g_ParamLimits

0xd452,	// (0x00017ec3) popup_image_details_window_t1_ParamLimits

0xd464,	// (0x00017ed5) popup_image_details_window_t2_ParamLimits

0xd47d,	// (0x00017eee) popup_image_details_window_t3_ParamLimits

0xd491,	// (0x00017f02) popup_image_details_window_t4_ParamLimits

0xd4ac,	// (0x00017f1d) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x0001a20a) popup_image_details_window_t_ParamLimits

0x8471,	// (0x00012ee2) cl_header_name_pane_ParamLimits

0x8471,	// (0x00012ee2) cl_header_name_pane

0x87fd,	// (0x0001326e) cl_header_name_pane_t1_ParamLimits

0x87fd,	// (0x0001326e) cl_header_name_pane_t1

0x881e,	// (0x0001328f) cl_header_name_pane_t2_ParamLimits

0x881e,	// (0x0001328f) cl_header_name_pane_t2

0x8860,	// (0x000132d1) cl_header_name_pane_t3_ParamLimits

0x8860,	// (0x000132d1) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x0001a5fc) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x0001a5fc) cl_header_name_pane_t

0xb84d,	// (0x000162be) navi_pane_mv_g2_ParamLimits

0xdf00,	// (0x00018971) field_vitu2_entry_pane_g1_ParamLimits

0xdf0c,	// (0x0001897d) field_vitu2_entry_pane_g2_ParamLimits

0xdf18,	// (0x00018989) field_vitu2_entry_pane_g3_ParamLimits

0xdf18,	// (0x00018989) field_vitu2_entry_pane_g3

0xf987,	// (0x0001a3f8) field_vitu2_entry_pane_g_ParamLimits

0x77b5,	// (0x00012226) cell_vitu2_itu_pane_g1_ParamLimits

0x77c5,	// (0x00012236) cell_vitu2_itu_pane_g2_ParamLimits

0x77c5,	// (0x00012236) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x0001a404) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x0001a404) cell_vitu2_itu_pane_g

0xa2d6,	// (0x00014d47) bg_vkb2_func_pane_cp05_ParamLimits

0xa2d6,	// (0x00014d47) bg_vkb2_func_pane_cp05

0xa2d6,	// (0x00014d47) bg_vkb2_func_pane_cp03

0xa2d6,	// (0x00014d47) bg_vkb2_func_pane_cp04

0xa2d6,	// (0x00014d47) bg_vkb2_func_pane_cp10_ParamLimits

0xa2d6,	// (0x00014d47) bg_vkb2_func_pane_cp10

0x8417,	// (0x00012e88) bg_vkb2_func_pane_cp08

0x83fe,	// (0x00012e6f) bg_vkb2_func_pane_cp06

0x840b,	// (0x00012e7c) bg_vkb2_func_pane_cp07

0xe66f,	// (0x000190e0) bg_vkb2_func_pane_cp11_ParamLimits

0xe66f,	// (0x000190e0) bg_vkb2_func_pane_cp11

0xe684,	// (0x000190f5) bg_vkb2_func_pane_cp12_ParamLimits

0xe684,	// (0x000190f5) bg_vkb2_func_pane_cp12

0xa283,	// (0x00014cf4) bg_vkb2_func_pane_cp09

0xdf55,	// (0x000189c6) bg_vkb2_func_pane_g1

0xb00f,	// (0x00015a80) bg_vkb2_func_pane_g2

0xdf5d,	// (0x000189ce) bg_vkb2_func_pane_g3

0xdf65,	// (0x000189d6) bg_vkb2_func_pane_g4

0xe218,	// (0x00018c89) bg_vkb2_func_pane_g5

0xdf7d,	// (0x000189ee) bg_vkb2_func_pane_g6

0xdf85,	// (0x000189f6) bg_vkb2_func_pane_g7

0xdf75,	// (0x000189e6) bg_vkb2_func_pane_g8

0xafef,	// (0x00015a60) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x0001a603) bg_vkb2_func_pane_g

0x8733,	// (0x000131a4) blid2_tripm_pane_g6_ParamLimits

0x8733,	// (0x000131a4) blid2_tripm_pane_g6

0xdd68,	// (0x000187d9) mp4_progress_pane_g1

0x87a2,	// (0x00013213) blid2_tripm_values_pane_ParamLimits

0x87a2,	// (0x00013213) blid2_tripm_values_pane

0x8891,	// (0x00013302) blid2_tripm_values_pane_t1

0x889f,	// (0x00013310) blid2_tripm_values_pane_t2

0x88ad,	// (0x0001331e) blid2_tripm_values_pane_t3

0x88bb,	// (0x0001332c) blid2_tripm_values_pane_t4

0x88c9,	// (0x0001333a) blid2_tripm_values_pane_t5

0x88d7,	// (0x00013348) blid2_tripm_values_pane_t6

0x88e5,	// (0x00013356) blid2_tripm_values_pane_t7

0x88f3,	// (0x00013364) blid2_tripm_values_pane_t8

0x8901,	// (0x00013372) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x0001a616) blid2_tripm_values_pane_t

0x3847,	// (0x0000e2b8) call_video_pane_t1_ParamLimits

0x3859,	// (0x0000e2ca) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00019d46) call_video_pane_t_ParamLimits

0x4b50,	// (0x0000f5c1) msg_header_pane_g1_ParamLimits

0xba51,	// (0x000164c2) msg_header_pane_g2_ParamLimits

0xba51,	// (0x000164c2) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00019f60) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00019f60) msg_header_pane_g

0xaa41,	// (0x000154b2) main_clock2_pane_ParamLimits

0x68ae,	// (0x0001131f) grid_clock2_toolbar_pane_ParamLimits

0x68ae,	// (0x0001131f) grid_clock2_toolbar_pane

0x68ae,	// (0x0001131f) listscroll_clock2_pane_ParamLimits

0x68ae,	// (0x0001131f) listscroll_clock2_pane

0x697d,	// (0x000113ee) main_clock2_pane_t3_ParamLimits

0x697d,	// (0x000113ee) main_clock2_pane_t3

0x6996,	// (0x00011407) main_clock2_pane_t4_ParamLimits

0x6996,	// (0x00011407) main_clock2_pane_t4

0xe742,	// (0x000191b3) cell_clock2_toolbar_pane

0xe74a,	// (0x000191bb) cell_clock2_toolbar_pane_cp01

0xe74a,	// (0x000191bb) cell_clock2_toolbar_pane_cp02

0xe752,	// (0x000191c3) cell_clock2_toolbar_pane_cp03

0xe75a,	// (0x000191cb) list_clock2_pane

0xb6ef,	// (0x00016160) scroll_pane_cp10

0xe762,	// (0x000191d3) list_single_clock2_pane_ParamLimits

0xe762,	// (0x000191d3) list_single_clock2_pane

0xb8ae,	// (0x0001631f) list_highlight_pane_cp08

0xe76f,	// (0x000191e0) list_single_clock2_pane_t1

0xe77d,	// (0x000191ee) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x0001a629) list_single_clock2_pane_t

0xa283,	// (0x00014cf4) bg_button_pane_cp10

0xe78b,	// (0x000191fc) cell_clock2_toolbar_pane_g1

0x4b6e,	// (0x0000f5df) aid_main_viewer_pane_g1_ParamLimits

0x4b6e,	// (0x0000f5df) aid_main_viewer_pane_g1

0x4b7a,	// (0x0000f5eb) aid_main_viewer_pane_g2_ParamLimits

0x4b7a,	// (0x0000f5eb) aid_main_viewer_pane_g2

0x4b86,	// (0x0000f5f7) aid_main_viewer_pane_g3_ParamLimits

0x4b86,	// (0x0000f5f7) aid_main_viewer_pane_g3

0x4b95,	// (0x0000f606) aid_main_viewer_pane_g4_ParamLimits

0x4b95,	// (0x0000f606) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00019f71) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00019f71) aid_main_viewer_pane_g

0xa2d6,	// (0x00014d47) main_calc_pane_ParamLimits

0x5389,	// (0x0000fdfa) main_dialer2_pane_ParamLimits

0xa283,	// (0x00014cf4) main_cam6_pane

0xa283,	// (0x00014cf4) main_vid6_pane

0x68ba,	// (0x0001132b) listscroll_gen_pane_cp06_ParamLimits

0x68ba,	// (0x0001132b) listscroll_gen_pane_cp06

0x69af,	// (0x00011420) main_clock2_pane_t5_ParamLimits

0x69af,	// (0x00011420) main_clock2_pane_t5

0x6a04,	// (0x00011475) aid_call2_pane_cp10_ParamLimits

0x6a16,	// (0x00011487) aid_call_pane_cp10_ParamLimits

0xb77b,	// (0x000161ec) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb77b,	// (0x000161ec) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6a28,	// (0x00011499) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6a28,	// (0x00011499) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb77b,	// (0x000161ec) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x0001a2ba) popup_clock_analogue_window_cp10_g_ParamLimits

0x6a3a,	// (0x000114ab) popup_clock_analogue_window_cp10_t1_ParamLimits

0xddc8,	// (0x00018839) cell_dialer2_keypad_pane_g2_ParamLimits

0xddc8,	// (0x00018839) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x0001a3a0) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x0001a3a0) cell_dialer2_keypad_pane_g

0x7049,	// (0x00011aba) cell_dialer2_keypad_pane_t1

0x7bdf,	// (0x00012650) main_cset_text2_pane_ParamLimits

0x7bdf,	// (0x00012650) main_cset_text2_pane

0xe44f,	// (0x00018ec0) area_vitu2_query_pane_g1_ParamLimits

0x83a3,	// (0x00012e14) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x0001a546) area_vitu2_query_pane_g_ParamLimits

0xe4d3,	// (0x00018f44) area_vitu2_query_pane_t7_ParamLimits

0xe4d3,	// (0x00018f44) area_vitu2_query_pane_t7

0x83fe,	// (0x00012e6f) bg_button_pane_cp018_ParamLimits

0x840b,	// (0x00012e7c) bg_button_pane_cp021_ParamLimits

0x8417,	// (0x00012e88) bg_button_pane_cp022_ParamLimits

0x8417,	// (0x00012e88) bg_vkb2_func_pane_cp08_ParamLimits

0x83fe,	// (0x00012e6f) bg_vkb2_func_pane_cp06_ParamLimits

0x840b,	// (0x00012e7c) bg_vkb2_func_pane_cp07_ParamLimits

0x8426,	// (0x00012e97) input_focus_pane_cp09_ParamLimits

0xe793,	// (0x00019204) cam6_autofocus_pane_ParamLimits

0xe793,	// (0x00019204) cam6_autofocus_pane

0x890f,	// (0x00013380) cam6_image_uncrop_pane_ParamLimits

0x890f,	// (0x00013380) cam6_image_uncrop_pane

0x891c,	// (0x0001338d) cam6_indi_pane_ParamLimits

0x891c,	// (0x0001338d) cam6_indi_pane

0x8932,	// (0x000133a3) cam6_mode_pane_ParamLimits

0x8932,	// (0x000133a3) cam6_mode_pane

0x8944,	// (0x000133b5) cam6_timer_pane_ParamLimits

0x8944,	// (0x000133b5) cam6_timer_pane

0x8950,	// (0x000133c1) cam6_zoom_pane_ParamLimits

0x8950,	// (0x000133c1) cam6_zoom_pane

0x895c,	// (0x000133cd) cam6_mode_pane_g1_ParamLimits

0x895c,	// (0x000133cd) cam6_mode_pane_g1

0x896c,	// (0x000133dd) cam6_mode_pane_g2_ParamLimits

0x896c,	// (0x000133dd) cam6_mode_pane_g2

0x897c,	// (0x000133ed) cam6_mode_pane_g3_ParamLimits

0x897c,	// (0x000133ed) cam6_mode_pane_g3

0x898c,	// (0x000133fd) cam6_mode_pane_g4_ParamLimits

0x898c,	// (0x000133fd) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x0001a62e) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x0001a62e) cam6_mode_pane_g

0xe1bc,	// (0x00018c2d) bg_tb_trans_pane_cp08_ParamLimits

0xe1bc,	// (0x00018c2d) bg_tb_trans_pane_cp08

0xe79f,	// (0x00019210) cam6_battery_pane_ParamLimits

0xe79f,	// (0x00019210) cam6_battery_pane

0xe7b5,	// (0x00019226) cam6_indi_pane_g1_ParamLimits

0xe7b5,	// (0x00019226) cam6_indi_pane_g1

0xe7c7,	// (0x00019238) cam6_indi_pane_g2_ParamLimits

0xe7c7,	// (0x00019238) cam6_indi_pane_g2

0xe7d9,	// (0x0001924a) cam6_indi_pane_g3_ParamLimits

0xe7d9,	// (0x0001924a) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x0001a637) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x0001a637) cam6_indi_pane_g

0xe7eb,	// (0x0001925c) cam6_indi_pane_t1_ParamLimits

0xe7eb,	// (0x0001925c) cam6_indi_pane_t1

0x75ca,	// (0x0001203b) cam6_autofocus_pane_g1

0x75d2,	// (0x00012043) cam6_autofocus_pane_g2

0x75da,	// (0x0001204b) cam6_autofocus_pane_g3

0x75e2,	// (0x00012053) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x0001a63e) cam6_autofocus_pane_g

0xe811,	// (0x00019282) cam6_timer_pane_g1

0xe819,	// (0x0001928a) cam6_timer_pane_t1

0xe827,	// (0x00019298) cam6_zoom_cont_pane

0xe82f,	// (0x000192a0) cam6_zoom_pane_g1

0xe837,	// (0x000192a8) cam6_zoom_pane_g2

0x899c,	// (0x0001340d) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x0001a647) cam6_zoom_pane_g

0xd2c7,	// (0x00017d38) cam6_battery_pane_g1

0xd2c7,	// (0x00017d38) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x0001a1c7) cam6_battery_pane_g

0xe83f,	// (0x000192b0) cam6_zoom_cont_pane_g1

0xe848,	// (0x000192b9) cam6_zoom_cont_pane_g2

0xe851,	// (0x000192c2) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x0001a64e) cam6_zoom_cont_pane_g

0x89b9,	// (0x0001342a) cam6_mode_pane_cp_ParamLimits

0x89b9,	// (0x0001342a) cam6_mode_pane_cp

0x8950,	// (0x000133c1) cam6_zoom_pane_cp_ParamLimits

0x8950,	// (0x000133c1) cam6_zoom_pane_cp

0x89cb,	// (0x0001343c) vid6_image_uncrop_cif_pane_ParamLimits

0x89cb,	// (0x0001343c) vid6_image_uncrop_cif_pane

0x89d9,	// (0x0001344a) vid6_image_uncrop_nhd_pane_ParamLimits

0x89d9,	// (0x0001344a) vid6_image_uncrop_nhd_pane

0x890f,	// (0x00013380) vid6_image_uncrop_vga_pane_ParamLimits

0x890f,	// (0x00013380) vid6_image_uncrop_vga_pane

0x89e6,	// (0x00013457) vid6_image_uncrop_wvga_pane_ParamLimits

0x89e6,	// (0x00013457) vid6_image_uncrop_wvga_pane

0x89f3,	// (0x00013464) vid6_indi_pane_ParamLimits

0x89f3,	// (0x00013464) vid6_indi_pane

0xe1bc,	// (0x00018c2d) bg_tb_trans_pane_cp09_ParamLimits

0xe1bc,	// (0x00018c2d) bg_tb_trans_pane_cp09

0xe865,	// (0x000192d6) cam6_battery_pane_cp_ParamLimits

0xe865,	// (0x000192d6) cam6_battery_pane_cp

0xe871,	// (0x000192e2) vid6_indi_pane_g1_ParamLimits

0xe871,	// (0x000192e2) vid6_indi_pane_g1

0xe883,	// (0x000192f4) vid6_indi_pane_g2_ParamLimits

0xe883,	// (0x000192f4) vid6_indi_pane_g2

0xe895,	// (0x00019306) vid6_indi_pane_g3_ParamLimits

0xe895,	// (0x00019306) vid6_indi_pane_g3

0xe8aa,	// (0x0001931b) vid6_indi_pane_g4_ParamLimits

0xe8aa,	// (0x0001931b) vid6_indi_pane_g4

0xe8bf,	// (0x00019330) vid6_indi_pane_g5_ParamLimits

0xe8bf,	// (0x00019330) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x0001a655) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x0001a655) vid6_indi_pane_g

0xe8d9,	// (0x0001934a) vid6_indi_pane_t1_ParamLimits

0xe8d9,	// (0x0001934a) vid6_indi_pane_t1

0xe8ef,	// (0x00019360) vid6_indi_pane_t2_ParamLimits

0xe8ef,	// (0x00019360) vid6_indi_pane_t2

0xe917,	// (0x00019388) vid6_indi_pane_t3_ParamLimits

0xe917,	// (0x00019388) vid6_indi_pane_t3

0xe93f,	// (0x000193b0) vid6_indi_pane_t4_ParamLimits

0xe93f,	// (0x000193b0) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x0001a660) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x0001a660) vid6_indi_pane_t

0xe963,	// (0x000193d4) wait_bar_pane_cp08

0x8a0a,	// (0x0001347b) main_cset_text2_pane_t1_ParamLimits

0x8a0a,	// (0x0001347b) main_cset_text2_pane_t1

0x89a4,	// (0x00013415) listscroll_gen_pane_cp06_t1_ParamLimits

0x89a4,	// (0x00013415) listscroll_gen_pane_cp06_t1

0xa283,	// (0x00014cf4) main_cam6_set_pane

0xd5cf,	// (0x00018040) bg_tb_trans_pane_cp06_ParamLimits

0x749e,	// (0x00011f0f) cam4_indicators_pane_g1_ParamLimits

0x74ab,	// (0x00011f1c) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x0001a3d4) cam4_indicators_pane_g_ParamLimits

0x74c3,	// (0x00011f34) cam4_indicators_pane_t1_ParamLimits

0xd009,	// (0x00017a7a) bg_tb_trans_pane_cp07_ParamLimits

0x749e,	// (0x00011f0f) vid4_indicators_pane_g1_ParamLimits

0x7592,	// (0x00012003) vid4_indicators_pane_g2_ParamLimits

0x759f,	// (0x00012010) vid4_indicators_pane_g3_ParamLimits

0x75ac,	// (0x0001201d) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x0001a3e6) vid4_indicators_pane_g_ParamLimits

0x75b8,	// (0x00012029) vid4_indicators_pane_t1_ParamLimits

0xe551,	// (0x00018fc2) vid4_progress_pane_g1_ParamLimits

0xe560,	// (0x00018fd1) vid4_progress_pane_g2_ParamLimits

0xe56f,	// (0x00018fe0) vid4_progress_pane_g3_ParamLimits

0xe57e,	// (0x00018fef) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x0001a591) vid4_progress_pane_g_ParamLimits

0xe58a,	// (0x00018ffb) vid4_progress_pane_t1_ParamLimits

0xe5a0,	// (0x00019011) vid4_progress_pane_t2_ParamLimits

0xe5b5,	// (0x00019026) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x0001a59c) vid4_progress_pane_t_ParamLimits

0xe5ca,	// (0x0001903b) wait_bar_pane_cp07_ParamLimits

0x8a24,	// (0x00013495) main_cam6_set_pane_g2_ParamLimits

0x8a24,	// (0x00013495) main_cam6_set_pane_g2

0x8a46,	// (0x000134b7) main_cset6_listscroll_pane_ParamLimits

0x8a46,	// (0x000134b7) main_cset6_listscroll_pane

0x8a60,	// (0x000134d1) main_cset6_slider_pane_ParamLimits

0x8a60,	// (0x000134d1) main_cset6_slider_pane

0x8a76,	// (0x000134e7) main_cset6_text2_pane_ParamLimits

0x8a76,	// (0x000134e7) main_cset6_text2_pane

0xe973,	// (0x000193e4) main_cset6_text_pane

0xe04b,	// (0x00018abc) main_cset_list_pane_copy1_ParamLimits

0xe04b,	// (0x00018abc) main_cset_list_pane_copy1

0xe05b,	// (0x00018acc) scroll_pane_cp028_copy1

0x8a84,	// (0x000134f5) cset_list_set_pane_copy1

0x8a96,	// (0x00013507) aid_position_infowindow_above_copy1

0x8a9e,	// (0x0001350f) aid_position_infowindow_below_copy1

0x8aa6,	// (0x00013517) cset_list_set_pane_g1_copy1

0x8aae,	// (0x0001351f) cset_list_set_pane_g3_copy1_ParamLimits

0x8aae,	// (0x0001351f) cset_list_set_pane_g3_copy1

0x8abd,	// (0x0001352e) cset_list_set_pane_t1_copy1_ParamLimits

0x8abd,	// (0x0001352e) cset_list_set_pane_t1_copy1

0xa2d6,	// (0x00014d47) list_highlight_pane_cp021_copy1_ParamLimits

0xa2d6,	// (0x00014d47) list_highlight_pane_cp021_copy1

0xe97b,	// (0x000193ec) cset6_slider_pane_ParamLimits

0xe97b,	// (0x000193ec) cset6_slider_pane

0xe9a7,	// (0x00019418) main_cset6_slider_pane_g1_ParamLimits

0xe9a7,	// (0x00019418) main_cset6_slider_pane_g1

0x8ad2,	// (0x00013543) main_cset6_slider_pane_g2_ParamLimits

0x8ad2,	// (0x00013543) main_cset6_slider_pane_g2

0xe070,	// (0x00018ae1) main_cset6_slider_pane_g3_ParamLimits

0xe070,	// (0x00018ae1) main_cset6_slider_pane_g3

0x7ca4,	// (0x00012715) main_cset6_slider_pane_g4_ParamLimits

0x7ca4,	// (0x00012715) main_cset6_slider_pane_g4

0x7cec,	// (0x0001275d) main_cset6_slider_pane_g5_ParamLimits

0x7cec,	// (0x0001275d) main_cset6_slider_pane_g5

0xe070,	// (0x00018ae1) main_cset6_slider_pane_g7_ParamLimits

0xe070,	// (0x00018ae1) main_cset6_slider_pane_g7

0xe07c,	// (0x00018aed) main_cset6_slider_pane_g8_ParamLimits

0xe07c,	// (0x00018aed) main_cset6_slider_pane_g8

0x7c8c,	// (0x000126fd) main_cset6_slider_pane_g9_ParamLimits

0x7c8c,	// (0x000126fd) main_cset6_slider_pane_g9

0x7c98,	// (0x00012709) main_cset6_slider_pane_g10_ParamLimits

0x7c98,	// (0x00012709) main_cset6_slider_pane_g10

0x7ca4,	// (0x00012715) main_cset6_slider_pane_g11_ParamLimits

0x7ca4,	// (0x00012715) main_cset6_slider_pane_g11

0x7cb0,	// (0x00012721) main_cset6_slider_pane_g12_ParamLimits

0x7cb0,	// (0x00012721) main_cset6_slider_pane_g12

0x7cbc,	// (0x0001272d) main_cset6_slider_pane_g13_ParamLimits

0x7cbc,	// (0x0001272d) main_cset6_slider_pane_g13

0x7cc8,	// (0x00012739) main_cset6_slider_pane_g14_ParamLimits

0x7cc8,	// (0x00012739) main_cset6_slider_pane_g14

0x8afa,	// (0x0001356b) main_cset6_slider_pane_g15_ParamLimits

0x8afa,	// (0x0001356b) main_cset6_slider_pane_g15

0x7cec,	// (0x0001275d) main_cset6_slider_pane_g16_ParamLimits

0x7cec,	// (0x0001275d) main_cset6_slider_pane_g16

0x7cf8,	// (0x00012769) main_cset6_slider_pane_g17_ParamLimits

0x7cf8,	// (0x00012769) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x0001a669) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x0001a669) main_cset6_slider_pane_g

0xe9cf,	// (0x00019440) main_cset6_slider_pane_t1_ParamLimits

0xe9cf,	// (0x00019440) main_cset6_slider_pane_t1

0xea10,	// (0x00019481) main_cset6_slider_pane_t2_ParamLimits

0xea10,	// (0x00019481) main_cset6_slider_pane_t2

0xea3b,	// (0x000194ac) main_cset6_slider_pane_t3_ParamLimits

0xea3b,	// (0x000194ac) main_cset6_slider_pane_t3

0x8b12,	// (0x00013583) main_cset6_slider_pane_t4_ParamLimits

0x8b12,	// (0x00013583) main_cset6_slider_pane_t4

0x8b3d,	// (0x000135ae) main_cset6_slider_pane_t5_ParamLimits

0x8b3d,	// (0x000135ae) main_cset6_slider_pane_t5

0xea66,	// (0x000194d7) main_cset6_slider_pane_t7_ParamLimits

0xea66,	// (0x000194d7) main_cset6_slider_pane_t7

0x8b68,	// (0x000135d9) main_cset6_slider_pane_t8_ParamLimits

0x8b68,	// (0x000135d9) main_cset6_slider_pane_t8

0x8b8c,	// (0x000135fd) main_cset6_slider_pane_t9_ParamLimits

0x8b8c,	// (0x000135fd) main_cset6_slider_pane_t9

0x8bb0,	// (0x00013621) main_cset6_slider_pane_t10_ParamLimits

0x8bb0,	// (0x00013621) main_cset6_slider_pane_t10

0x8bd4,	// (0x00013645) main_cset6_slider_pane_t11_ParamLimits

0x8bd4,	// (0x00013645) main_cset6_slider_pane_t11

0xea9c,	// (0x0001950d) main_cset6_slider_pane_t14_ParamLimits

0xea9c,	// (0x0001950d) main_cset6_slider_pane_t14

0xead5,	// (0x00019546) main_cset6_slider_pane_t15_ParamLimits

0xead5,	// (0x00019546) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x0001a68e) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x0001a68e) main_cset6_slider_pane_t

0xe178,	// (0x00018be9) cset_slider_pane_g1_copy1

0xe181,	// (0x00018bf2) cset_slider_pane_g2_copy1

0xe18a,	// (0x00018bfb) cset_slider_pane_g3_copy1

0xa283,	// (0x00014cf4) bg_popup_sub_pane_cp011_copy1

0xe281,	// (0x00018cf2) main_cset_text_pane_g1_copy1

0xe289,	// (0x00018cfa) main_cset_text_pane_t1_copy1

0xe297,	// (0x00018d08) main_cset_text_pane_t2_copy1

0xe2a5,	// (0x00018d16) main_cset_text_pane_t3_copy1

0xe2b3,	// (0x00018d24) main_cset_text_pane_t4_copy1

0xe2c1,	// (0x00018d32) main_cset_text_pane_t5_copy1

0xe2cf,	// (0x00018d40) main_cset_text_pane_t6_copy1

0xe2dd,	// (0x00018d4e) main_cset_text_pane_t7_copy1

0x8bf8,	// (0x00013669) main_cset_text2_pane_t1_copy1

0xa283,	// (0x00014cf4) main_ncimui_pane

0x5597,	// (0x00010008) popup_query_ncimui_window_ParamLimits

0x5597,	// (0x00010008) popup_query_ncimui_window

0xd597,	// (0x00018008) field_cale_ev2_pane_g4_ParamLimits

0xd597,	// (0x00018008) field_cale_ev2_pane_g4

0x6f3b,	// (0x000119ac) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6f3b,	// (0x000119ac) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x0001a37b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x0001a37b) cell_video_dialer_keypad_pane_g

0x6f53,	// (0x000119c4) cell_video_dialer_keypad_pane_t1

0xa283,	// (0x00014cf4) bg_popup_window_pane_cp012

0xb5c8,	// (0x00016039) heading_pane_cp06

0xebf7,	// (0x00019668) ncim_query_content_pane

0xa283,	// (0x00014cf4) bg_popup_heading_pane_cp01

0xebff,	// (0x00019670) ncim_heading_pane_t1

0xec0d,	// (0x0001967e) ncim_indicator_popup_pane

0xec1f,	// (0x00019690) ncim_query_button_pane

0xec33,	// (0x000196a4) ncim_query_content_pane_t1

0xec45,	// (0x000196b6) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x0001a6cd) ncim_query_content_pane_t

0xec7f,	// (0x000196f0) ncim_query_list_pane

0xec91,	// (0x00019702) ncim_query_popup_pane

0xec0d,	// (0x0001967e) ncim_indicator_popup_pane_ParamLimits

0x8cd8,	// (0x00013749) ncim_query_content_pane_g1_ParamLimits

0x8cd8,	// (0x00013749) ncim_query_content_pane_g1

0xec33,	// (0x000196a4) ncim_query_content_pane_t1_ParamLimits

0xec45,	// (0x000196b6) ncim_query_content_pane_t2_ParamLimits

0x8ce4,	// (0x00013755) ncim_query_content_pane_t3_ParamLimits

0x8ce4,	// (0x00013755) ncim_query_content_pane_t3

0x8d0c,	// (0x0001377d) ncim_query_content_pane_t4_ParamLimits

0x8d0c,	// (0x0001377d) ncim_query_content_pane_t4

0x8d34,	// (0x000137a5) ncim_query_content_pane_t5_ParamLimits

0x8d34,	// (0x000137a5) ncim_query_content_pane_t5

0xec57,	// (0x000196c8) ncim_query_content_pane_t6_ParamLimits

0xec57,	// (0x000196c8) ncim_query_content_pane_t6

0xfc5c,	// (0x0001a6cd) ncim_query_content_pane_t_ParamLimits

0xec7f,	// (0x000196f0) ncim_query_list_pane_ParamLimits

0xec91,	// (0x00019702) ncim_query_popup_pane_ParamLimits

0xeca5,	// (0x00019716) wait_bar_pane_cp04

0xa283,	// (0x00014cf4) input_focus_pane_cp011

0xecad,	// (0x0001971e) ncim_query_popup_pane_t1

0xecbb,	// (0x0001972c) ncim_list_query_list_pane_ParamLimits

0xecbb,	// (0x0001972c) ncim_list_query_list_pane

0xa283,	// (0x00014cf4) bg_button_pane_cp027

0xecce,	// (0x0001973f) ncim_query_button_pane_g1

0xa283,	// (0x00014cf4) list_highlight_pane_cp012

0xecd8,	// (0x00019749) ncim_list_query_list_pane_g1

0xece0,	// (0x00019751) ncim_list_query_list_pane_t1

0x74b7,	// (0x00011f28) cam4_indicators_pane_g3_ParamLimits

0x74b7,	// (0x00011f28) cam4_indicators_pane_g3

0x74b7,	// (0x00011f28) vid4_indicators_pane_g5_ParamLimits

0x74b7,	// (0x00011f28) vid4_indicators_pane_g5

0xb30b,	// (0x00015d7c) vid4_progress_pane_g5_ParamLimits

0xb30b,	// (0x00015d7c) vid4_progress_pane_g5

0x8c22,	// (0x00013693) main_ncimui_pane_g1

0x8c68,	// (0x000136d9) ncimui_group_query_pane_ParamLimits

0x8c68,	// (0x000136d9) ncimui_group_query_pane

0x8c9c,	// (0x0001370d) ncimui_list_pane_ParamLimits

0x8c9c,	// (0x0001370d) ncimui_list_pane

0x8cb4,	// (0x00013725) ncimui_text_pane_ParamLimits

0x8cb4,	// (0x00013725) ncimui_text_pane

0x8d5c,	// (0x000137cd) ncimui_text_pane_t1_ParamLimits

0x8d5c,	// (0x000137cd) ncimui_text_pane_t1

0xecee,	// (0x0001975f) ncimui_list_single_graphic_pane_ParamLimits

0xecee,	// (0x0001975f) ncimui_list_single_graphic_pane

0x8d79,	// (0x000137ea) ncimui_query_pane_ParamLimits

0x8d79,	// (0x000137ea) ncimui_query_pane

0xa283,	// (0x00014cf4) list_highlight_pane_cp013

0xecfb,	// (0x0001976c) ncim_list_query_list_pane_t1_copy1

0xed09,	// (0x0001977a) ncim_list_single_graphic_pane_g1

0xed11,	// (0x00019782) ncim_query_button_pane_cp01

0xed19,	// (0x0001978a) ncim_query_entry_pane_ParamLimits

0xed19,	// (0x0001978a) ncim_query_entry_pane

0xed29,	// (0x0001979a) ncimui_query_pane_g1

0xed31,	// (0x000197a2) ncimui_query_pane_t1_ParamLimits

0xed31,	// (0x000197a2) ncimui_query_pane_t1

0xa283,	// (0x00014cf4) input_focus_pane_cp012

0xecad,	// (0x0001971e) ncim_query_entry_pane_t1

0xaa41,	// (0x000154b2) main_im_pane_ParamLimits

0xa2d6,	// (0x00014d47) main_mobtv_pane_ParamLimits

0xa2d6,	// (0x00014d47) main_mobtv_pane

0x7c8c,	// (0x000126fd) main_cset6_slider_pane_g18_ParamLimits

0x7c8c,	// (0x000126fd) main_cset6_slider_pane_g18

0x7cbc,	// (0x0001272d) main_cset6_slider_pane_g19_ParamLimits

0x7cbc,	// (0x0001272d) main_cset6_slider_pane_g19

0xe1ca,	// (0x00018c3b) bg_main_mobtv_pane_ParamLimits

0xe1ca,	// (0x00018c3b) bg_main_mobtv_pane

0x8d89,	// (0x000137fa) main_mobtv_info_pane

0x8d92,	// (0x00013803) main_mobtv_loading_pane_ParamLimits

0x8d92,	// (0x00013803) main_mobtv_loading_pane

0xed47,	// (0x000197b8) main_mobtv_pg_channel_list_pane

0xed51,	// (0x000197c2) main_mobtv_pg_hdr_pane

0x8d9f,	// (0x00013810) main_mobtv_programe_curr_pane_ParamLimits

0x8d9f,	// (0x00013810) main_mobtv_programe_curr_pane

0x8dac,	// (0x0001381d) main_mobtv_programe_next_pane_ParamLimits

0x8dac,	// (0x0001381d) main_mobtv_programe_next_pane

0xed5a,	// (0x000197cb) popup_mobtv_noti_window

0xd2c7,	// (0x00017d38) main_tv_pg_hdr_pane_g1

0xed62,	// (0x000197d3) main_tv_pg_hdr_pane_g2

0xed6a,	// (0x000197db) main_tv_pg_hdr_pane_g3

0xed72,	// (0x000197e3) main_tv_pg_hdr_pane_g4

0xed7a,	// (0x000197eb) main_tv_pg_hdr_pane_g5

0xed82,	// (0x000197f3) main_tv_pg_hdr_pane_g6

0xed8a,	// (0x000197fb) main_tv_pg_hdr_pane_g7

0xed92,	// (0x00019803) main_tv_pg_hdr_pane_g8

0xed9a,	// (0x0001980b) main_tv_pg_hdr_pane_g9

0xeda2,	// (0x00019813) main_tv_pg_hdr_pane_g10

0xedac,	// (0x0001981d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x0001a6da) main_tv_pg_hdr_pane_g

0xedb6,	// (0x00019827) main_tv_pg_hdr_pane_t1

0xedc4,	// (0x00019835) main_tv_pg_hdr_pane_t2

0xedd2,	// (0x00019843) main_tv_pg_hdr_pane_t3

0xede0,	// (0x00019851) main_tv_pg_hdr_pane_t4

0xedee,	// (0x0001985f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x0001a6f1) main_tv_pg_hdr_pane_t

0xedfc,	// (0x0001986d) single_mobtv_pg_channel_pane_ParamLimits

0xedfc,	// (0x0001986d) single_mobtv_pg_channel_pane

0xee0e,	// (0x0001987f) single_mobtv_pg_channel_table_pane

0xee17,	// (0x00019888) single_mobtv_pg_channel_thumb_pane

0xee20,	// (0x00019891) single_tv_pg_channel_pane_g1

0xee29,	// (0x0001989a) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x0001a6fc) single_tv_pg_channel_pane_g

0xd4f6,	// (0x00017f67) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd4f6,	// (0x00017f67) bg_single_mobtv_pg_channel_thumb_pane

0xee32,	// (0x000198a3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xee32,	// (0x000198a3) single_mobtv_pg_channel_thumb_pane_g1

0xee40,	// (0x000198b1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xee40,	// (0x000198b1) single_mobtv_pg_channel_thumb_pane_g2

0xee4c,	// (0x000198bd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xee4c,	// (0x000198bd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x0001a701) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x0001a701) single_mobtv_pg_channel_thumb_pane_g

0xee58,	// (0x000198c9) single_mobtv_pg_channel_thumb_pane_t1

0xee66,	// (0x000198d7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x0001a708) single_mobtv_pg_channel_thumb_pane_t

0xd2c7,	// (0x00017d38) bg_single_mobtv_pg_channel_table_pane_g1

0xd2c7,	// (0x00017d38) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x0001a1c7) bg_single_mobtv_pg_channel_table_pane_g

0xee74,	// (0x000198e5) single_mobtv_pg_channel_table_pane_t1

0xee82,	// (0x000198f3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x0001a70d) single_mobtv_pg_channel_table_pane_t

0x8dc1,	// (0x00013832) main_mobtv_info_pane_g1_ParamLimits

0x8dc1,	// (0x00013832) main_mobtv_info_pane_g1

0x8ddd,	// (0x0001384e) main_mobtv_info_pane_t1_ParamLimits

0x8ddd,	// (0x0001384e) main_mobtv_info_pane_t1

0x8e43,	// (0x000138b4) main_mobtv_info_pane_t2_ParamLimits

0x8e43,	// (0x000138b4) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x0001a717) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x0001a717) main_mobtv_info_pane_t

0x8ec6,	// (0x00013937) wait_bar_pane_cp05

0x8ed6,	// (0x00013947) main_mobtv_loading_pane_g1_ParamLimits

0x8ed6,	// (0x00013947) main_mobtv_loading_pane_g1

0x8ee7,	// (0x00013958) main_mobtv_loading_pane_g2_ParamLimits

0x8ee7,	// (0x00013958) main_mobtv_loading_pane_g2

0x8ef3,	// (0x00013964) main_mobtv_loading_pane_g3_ParamLimits

0x8ef3,	// (0x00013964) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x0001a71e) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x0001a71e) main_mobtv_loading_pane_g

0xee90,	// (0x00019901) main_mobtv_loading_pane_t1_ParamLimits

0xee90,	// (0x00019901) main_mobtv_loading_pane_t1

0xeea8,	// (0x00019919) main_mobtv_loading_pane_t2_ParamLimits

0xeea8,	// (0x00019919) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x0001a725) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x0001a725) main_mobtv_loading_pane_t

0x8f04,	// (0x00013975) wait_bar_pane_cp06_ParamLimits

0x8f04,	// (0x00013975) wait_bar_pane_cp06

0xeecc,	// (0x0001993d) main_mobtv_programe_curr_pane_t1

0xeeda,	// (0x0001994b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x0001a72a) main_mobtv_programe_curr_pane_t

0xeee8,	// (0x00019959) main_mobtv_programe_next_pane_t1

0xeef6,	// (0x00019967) main_mobtv_programe_next_pane_t2

0xef04,	// (0x00019975) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x0001a72f) main_mobtv_programe_next_pane_t

0xa283,	// (0x00014cf4) bg_popup_mobtv_noti_window_pane

0xef12,	// (0x00019983) popup_mobtv_noti_window_g1

0xef1a,	// (0x0001998b) popup_mobtv_noti_window_t1

0xef28,	// (0x00019999) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x0001a736) popup_mobtv_noti_window_t

0xd2c7,	// (0x00017d38) bg_popup_mobtv_noti_window_pane_g1

0xa283,	// (0x00014cf4) sc_clock_pane

0xa283,	// (0x00014cf4) main_fs_bigclock_pane

0x878c,	// (0x000131fd) blid2_tripm_pane_t4_ParamLimits

0x878c,	// (0x000131fd) blid2_tripm_pane_t4

0x8f13,	// (0x00013984) sc_clock_pane_g1_ParamLimits

0x8f13,	// (0x00013984) sc_clock_pane_g1

0x8f25,	// (0x00013996) sc_clock_pane_t1_ParamLimits

0x8f25,	// (0x00013996) sc_clock_pane_t1

0x8f47,	// (0x000139b8) sc_clock_pane_t2_ParamLimits

0x8f47,	// (0x000139b8) sc_clock_pane_t2

0x8f5d,	// (0x000139ce) sc_clock_pane_t3_ParamLimits

0x8f5d,	// (0x000139ce) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x0001a73b) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x0001a73b) sc_clock_pane_t

0x9c20,	// (0x00014691) main_fs_bigclock_indicator_pane_ParamLimits

0x9c20,	// (0x00014691) main_fs_bigclock_indicator_pane

0xd4c6,	// (0x00017f37) main_fs_bigclock_pane_g1_ParamLimits

0xd4c6,	// (0x00017f37) main_fs_bigclock_pane_g1

0x9c2c,	// (0x0001469d) main_fs_bigclock_pane_t1_ParamLimits

0x9c2c,	// (0x0001469d) main_fs_bigclock_pane_t1

0x9c3e,	// (0x000146af) main_fs_bigclock_pane_t2_ParamLimits

0x9c3e,	// (0x000146af) main_fs_bigclock_pane_t2

0x9c50,	// (0x000146c1) main_fs_bigclock_pane_t3_ParamLimits

0x9c50,	// (0x000146c1) main_fs_bigclock_pane_t3

0x0002,

0xfebf,	// (0x0001a930) main_fs_bigclock_pane_t_ParamLimits

0xfebf,	// (0x0001a930) main_fs_bigclock_pane_t

0x130e,	// (0x0000bd7f) main_fs_bigclock_indicator_pane_g1

0xec27,	// (0x00019698) ncim_query_content_pane_g2_ParamLimits

0xec27,	// (0x00019698) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x0001a6c8) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x0001a6c8) ncim_query_content_pane_g

0x8f72,	// (0x000139e3) sc_clock_pane_t4_ParamLimits

0x8f72,	// (0x000139e3) sc_clock_pane_t4

0xa2d6,	// (0x00014d47) main_radioblah_pane

0xde51,	// (0x000188c2) cell_call4_button_pane_t1_copy1_ParamLimits

0xde51,	// (0x000188c2) cell_call4_button_pane_t1_copy1

0x8c2a,	// (0x0001369b) main_ncimui_pane_t1_ParamLimits

0x8c2a,	// (0x0001369b) main_ncimui_pane_t1

0x8c3c,	// (0x000136ad) main_ncimui_pane_t2_ParamLimits

0x8c3c,	// (0x000136ad) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x0001a6c1) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x0001a6c1) main_ncimui_pane_t

0xf052,	// (0x00019ac3) main_radioblah_anim_pane_ParamLimits

0xf052,	// (0x00019ac3) main_radioblah_anim_pane

0xf063,	// (0x00019ad4) main_radioblah_info_pane_ParamLimits

0xf063,	// (0x00019ad4) main_radioblah_info_pane

0xf077,	// (0x00019ae8) main_radioblah_pane_t1_ParamLimits

0xf077,	// (0x00019ae8) main_radioblah_pane_t1

0xf093,	// (0x00019b04) main_radioblah_pane_t2_ParamLimits

0xf093,	// (0x00019b04) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x0001a75c) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x0001a75c) main_radioblah_pane_t

0x9009,	// (0x00013a7a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9009,	// (0x00013a7a) main_radioblah_rocker_ctrl_pane

0xf0db,	// (0x00019b4c) main_radioblah_info_pane_t1_ParamLimits

0xf0db,	// (0x00019b4c) main_radioblah_info_pane_t1

0x905d,	// (0x00013ace) main_radioblah_info_pane_t2_ParamLimits

0x905d,	// (0x00013ace) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x0001a765) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x0001a765) main_radioblah_info_pane_t

0xd2c7,	// (0x00017d38) main_radioblah_rocker_ctrl_pane_g1

0x910b,	// (0x00013b7c) main_radioblah_rocker_ctrl_pane_g2

0x9113,	// (0x00013b84) main_radioblah_rocker_ctrl_pane_g3

0x911b,	// (0x00013b8c) main_radioblah_rocker_ctrl_pane_g4

0x9123,	// (0x00013b94) main_radioblah_rocker_ctrl_pane_g5

0x912b,	// (0x00013b9c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x0001a76e) main_radioblah_rocker_ctrl_pane_g

0x8bf8,	// (0x00013669) main_cset_text2_pane_t1_copy1_ParamLimits

0xdecf,	// (0x00018940) cam4_image_uncrop_qvga_pane

0xdedf,	// (0x00018950) vid4_image_uncrop_qcif_pane

0xe793,	// (0x00019204) cam6_image_uncrop_qvga_pane_ParamLimits

0xe793,	// (0x00019204) cam6_image_uncrop_qvga_pane

0xe859,	// (0x000192ca) vid6_image_uncrop_qcif_pane_ParamLimits

0xe859,	// (0x000192ca) vid6_image_uncrop_qcif_pane

0xa283,	// (0x00014cf4) bg_popup_preview_window_pane_cp03

0xebd9,	// (0x0001964a) list_cset_text2_pane

0xebe1,	// (0x00019652) main_cset6_text2_pane_g1

0xebe9,	// (0x0001965a) main_cset6_text2_pane_t1

0x9133,	// (0x00013ba4) list_cset_text2_pane_t1_ParamLimits

0x9133,	// (0x00013ba4) list_cset_text2_pane_t1

0xa2d6,	// (0x00014d47) main_radioblah_pane_ParamLimits

0x8eb4,	// (0x00013925) main_mobtv_info_pane_t3_ParamLimits

0x8eb4,	// (0x00013925) main_mobtv_info_pane_t3

0x8ff7,	// (0x00013a68) main_radioblah_pane_g1

0x9031,	// (0x00013aa2) main_radioblah_info_pane_g1

0x90b0,	// (0x00013b21) main_radioblah_info_pane_t3_ParamLimits

0x90b0,	// (0x00013b21) main_radioblah_info_pane_t3

0x427a,	// (0x0000eceb) highlight_cell_cale_month_pane_ParamLimits

0x427a,	// (0x0000eceb) highlight_cell_cale_month_pane

0xa283,	// (0x00014cf4) main_phob_fisheye_pane

0xd640,	// (0x000180b1) scroll_pane_cp0031_ParamLimits

0xd640,	// (0x000180b1) scroll_pane_cp0031

0xe963,	// (0x000193d4) wait_bar_pane_cp08_ParamLimits

0x8a84,	// (0x000134f5) cset_list_set_pane_copy1_ParamLimits

0xf115,	// (0x00019b86) highlight_cell_cale_month_pane_g1

0x914c,	// (0x00013bbd) highlight_cell_cale_month_pane_t1

0xf11d,	// (0x00019b8e) list_gen_pane_cp01

0xe05b,	// (0x00018acc) scroll_pane_01

0x915a,	// (0x00013bcb) list_single_double_fisheye_pane

0x9163,	// (0x00013bd4) list_double_fisheye_pane_g1_ParamLimits

0x9163,	// (0x00013bd4) list_double_fisheye_pane_g1

0x916f,	// (0x00013be0) list_double_fisheye_pane_g2_ParamLimits

0x916f,	// (0x00013be0) list_double_fisheye_pane_g2

0x917b,	// (0x00013bec) list_double_fisheye_pane_g3_ParamLimits

0x917b,	// (0x00013bec) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x0001a77b) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x0001a77b) list_double_fisheye_pane_g

0x919f,	// (0x00013c10) list_double_fisheye_pane_t1_ParamLimits

0x919f,	// (0x00013c10) list_double_fisheye_pane_t1

0x91ba,	// (0x00013c2b) list_double_fisheye_pane_t2_ParamLimits

0x91ba,	// (0x00013c2b) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x0001a786) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x0001a786) list_double_fisheye_pane_t

0xa283,	// (0x00014cf4) main_call5_pane

0x8f9b,	// (0x00013a0c) sc_swipe_pane_ParamLimits

0x8f9b,	// (0x00013a0c) sc_swipe_pane

0x91ed,	// (0x00013c5e) call5_image_pane_ParamLimits

0x91ed,	// (0x00013c5e) call5_image_pane

0x9202,	// (0x00013c73) call5_swipe_1_pane_ParamLimits

0x9202,	// (0x00013c73) call5_swipe_1_pane

0x9213,	// (0x00013c84) call5_swipe_2_pane_ParamLimits

0x9213,	// (0x00013c84) call5_swipe_2_pane

0x9238,	// (0x00013ca9) popup_call5_audio_first_window_ParamLimits

0x9238,	// (0x00013ca9) popup_call5_audio_first_window

0xd4f6,	// (0x00017f67) call5_swipe_1_pane_g1_ParamLimits

0xd4f6,	// (0x00017f67) call5_swipe_1_pane_g1

0x007d,	// (0x0000aaee) call5_swipe_1_pane_g2_ParamLimits

0x007d,	// (0x0000aaee) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x0001a78b) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x0001a78b) call5_swipe_1_pane_g

0x0089,	// (0x0000aafa) call5_swipe_1_pane_t1_ParamLimits

0x0089,	// (0x0000aafa) call5_swipe_1_pane_t1

0xd4f6,	// (0x00017f67) call5_swipe_2_pane_g1_ParamLimits

0xd4f6,	// (0x00017f67) call5_swipe_2_pane_g1

0x009e,	// (0x0000ab0f) call5_swipe_2_pane_g2_ParamLimits

0x009e,	// (0x0000ab0f) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x0001a790) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x0001a790) call5_swipe_2_pane_g

0x00aa,	// (0x0000ab1b) call5_swipe_2_pane_t1_ParamLimits

0x00aa,	// (0x0000ab1b) call5_swipe_2_pane_t1

0x00bf,	// (0x0000ab30) sc_swipe_pane_g1_ParamLimits

0x00bf,	// (0x0000ab30) sc_swipe_pane_g1

0x00cc,	// (0x0000ab3d) sc_swipe_pane_g2_ParamLimits

0x00cc,	// (0x0000ab3d) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x0001a795) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x0001a795) sc_swipe_pane_g

0x00d8,	// (0x0000ab49) sc_swipe_pane_t1_ParamLimits

0x00d8,	// (0x0000ab49) sc_swipe_pane_t1

0xa283,	// (0x00014cf4) main_cmail_launcher_pane

0x9247,	// (0x00013cb8) aid_size_cell_cmail_l_ParamLimits

0x9247,	// (0x00013cb8) aid_size_cell_cmail_l

0x9260,	// (0x00013cd1) grid_cmail_l_pane_ParamLimits

0x9260,	// (0x00013cd1) grid_cmail_l_pane

0x9275,	// (0x00013ce6) cell_cmail_l_pane_ParamLimits

0x9275,	// (0x00013ce6) cell_cmail_l_pane

0x9297,	// (0x00013d08) cell_cmail_l_pane_g1_ParamLimits

0x9297,	// (0x00013d08) cell_cmail_l_pane_g1

0x92a7,	// (0x00013d18) cell_cmail_l_pane_t1_ParamLimits

0x92a7,	// (0x00013d18) cell_cmail_l_pane_t1

0x0141,	// (0x0000abb2) cell_cmail_l_pane_t2_ParamLimits

0x0141,	// (0x0000abb2) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x0001a79a) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x0001a79a) cell_cmail_l_pane_t

0xa2d6,	// (0x00014d47) grid_highlight_pane_cp018_ParamLimits

0xa2d6,	// (0x00014d47) grid_highlight_pane_cp018

0x2a44,	// (0x0000d4b5) main2_pane_ParamLimits

0x2a44,	// (0x0000d4b5) main2_pane

0xab44,	// (0x000155b5) popup_sp_fs_action_menu_bg_pane_g1

0xab4c,	// (0x000155bd) popup_sp_fs_action_menu_bg_pane_g2

0xab54,	// (0x000155c5) popup_sp_fs_action_menu_bg_pane_g3

0xab5c,	// (0x000155cd) popup_sp_fs_action_menu_bg_pane_g4

0xab64,	// (0x000155d5) popup_sp_fs_action_menu_bg_pane_g5

0xab6c,	// (0x000155dd) popup_sp_fs_action_menu_bg_pane_g6

0xab74,	// (0x000155e5) popup_sp_fs_action_menu_bg_pane_g7

0xab7c,	// (0x000155ed) popup_sp_fs_action_menu_bg_pane_g8

0xab84,	// (0x000155f5) popup_sp_fs_action_menu_bg_pane_g9

0xab8c,	// (0x000155fd) popup_sp_fs_action_menu_bg_pane_g10

0xab8c,	// (0x000155fd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00019c60) popup_sp_fs_action_menu_bg_pane_g

0xad63,	// (0x000157d4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_t3_g3_g1

0xad6f,	// (0x000157e0) list_medium_line_x2_t3_g3_g2_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_x2_t3_g3_g2

0xad7b,	// (0x000157ec) list_medium_line_x2_t3_g3_g3_ParamLimits

0xad7b,	// (0x000157ec) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00019d10) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00019d10) list_medium_line_x2_t3_g3_g

0xad87,	// (0x000157f8) list_medium_line_x2_t3_g3_t1_ParamLimits

0xad87,	// (0x000157f8) list_medium_line_x2_t3_g3_t1

0x3775,	// (0x0000e1e6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3775,	// (0x0000e1e6) list_medium_line_x2_t3_g3_t2

0xad9c,	// (0x0001580d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xad9c,	// (0x0001580d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00019d17) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00019d17) list_medium_line_x2_t3_g3_t

0xad63,	// (0x000157d4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_t3_g2_g1

0xad7b,	// (0x000157ec) list_medium_line_x2_t3_g2_g2_ParamLimits

0xad7b,	// (0x000157ec) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00019d1e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00019d1e) list_medium_line_x2_t3_g2_g

0xadb1,	// (0x00015822) list_medium_line_x2_t3_g2_t1_ParamLimits

0xadb1,	// (0x00015822) list_medium_line_x2_t3_g2_t1

0xadc7,	// (0x00015838) list_medium_line_x2_t3_g2_t2_ParamLimits

0xadc7,	// (0x00015838) list_medium_line_x2_t3_g2_t2

0xad9c,	// (0x0001580d) list_medium_line_x2_t3_g2_t3_ParamLimits

0xad9c,	// (0x0001580d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00019d23) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00019d23) list_medium_line_x2_t3_g2_t

0xad63,	// (0x000157d4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_t4_g4_g1

0xadd9,	// (0x0001584a) list_medium_line_x2_t4_g4_g2_ParamLimits

0xadd9,	// (0x0001584a) list_medium_line_x2_t4_g4_g2

0xad6f,	// (0x000157e0) list_medium_line_x2_t4_g4_g3_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_x2_t4_g4_g3

0xade5,	// (0x00015856) list_medium_line_x2_t4_g4_g4_ParamLimits

0xade5,	// (0x00015856) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00019d2a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00019d2a) list_medium_line_x2_t4_g4_g

0x3787,	// (0x0000e1f8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3787,	// (0x0000e1f8) list_medium_line_x2_t4_g4_t1

0x379e,	// (0x0000e20f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x379e,	// (0x0000e20f) list_medium_line_x2_t4_g4_t2

0x37b3,	// (0x0000e224) list_medium_line_x2_t4_g4_t3_ParamLimits

0x37b3,	// (0x0000e224) list_medium_line_x2_t4_g4_t3

0xadf1,	// (0x00015862) list_medium_line_x2_t4_g4_t4_ParamLimits

0xadf1,	// (0x00015862) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00019d33) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00019d33) list_medium_line_x2_t4_g4_t

0xad63,	// (0x000157d4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_t2_g4_g1

0xadd9,	// (0x0001584a) list_medium_line_x2_t2_g4_g2_ParamLimits

0xadd9,	// (0x0001584a) list_medium_line_x2_t2_g4_g2

0xad6f,	// (0x000157e0) list_medium_line_x2_t2_g4_g3_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_x2_t2_g4_g3

0xad7b,	// (0x000157ec) list_medium_line_x2_t2_g4_g4_ParamLimits

0xad7b,	// (0x000157ec) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00019d9a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00019d9a) list_medium_line_x2_t2_g4_g

0xb0f1,	// (0x00015b62) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb0f1,	// (0x00015b62) list_medium_line_x2_t2_g4_t1

0xad9c,	// (0x0001580d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xad9c,	// (0x0001580d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00019da3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00019da3) list_medium_line_x2_t2_g4_t

0xad63,	// (0x000157d4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_t2_g3_g1

0xad6f,	// (0x000157e0) list_medium_line_x2_t2_g3_g2_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_x2_t2_g3_g2

0xad7b,	// (0x000157ec) list_medium_line_x2_t2_g3_g3_ParamLimits

0xad7b,	// (0x000157ec) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00019d10) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00019d10) list_medium_line_x2_t2_g3_g

0xb106,	// (0x00015b77) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb106,	// (0x00015b77) list_medium_line_x2_t2_g3_t1

0xad9c,	// (0x0001580d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xad9c,	// (0x0001580d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00019da8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00019da8) list_medium_line_x2_t2_g3_t

0x43b2,	// (0x0000ee23) main_sp_fs_list_pane_ParamLimits

0x43b2,	// (0x0000ee23) main_sp_fs_list_pane

0x43bf,	// (0x0000ee30) sp_fs_scroll_pane_ParamLimits

0x43bf,	// (0x0000ee30) sp_fs_scroll_pane

0x43cc,	// (0x0000ee3d) list_medium_line_x2_t3_t1

0x43dc,	// (0x0000ee4d) list_medium_line_x2_t3_t2

0xb360,	// (0x00015dd1) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00019df3) list_medium_line_x2_t3_t

0x43ea,	// (0x0000ee5b) list_medium_line_x3_t4_t1

0x43fa,	// (0x0000ee6b) list_medium_line_x3_t4_t2

0xb36e,	// (0x00015ddf) list_medium_line_x3_t4_t3

0xb37c,	// (0x00015ded) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00019dfa) list_medium_line_x3_t4_t

0x4408,	// (0x0000ee79) list_medium_line_x4_t5_t1

0x4418,	// (0x0000ee89) list_medium_line_x4_t5_t2

0xb36e,	// (0x00015ddf) list_medium_line_x4_t5_t3

0xb38a,	// (0x00015dfb) list_medium_line_x4_t5_t4

0xb37c,	// (0x00015ded) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00019e03) list_medium_line_x4_t5_t

0xad63,	// (0x000157d4) list_medium_line_t4_g4_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_t4_g4_g1

0xade5,	// (0x00015856) list_medium_line_t4_g4_g2_ParamLimits

0xade5,	// (0x00015856) list_medium_line_t4_g4_g2

0xb398,	// (0x00015e09) list_medium_line_t4_g4_g3_ParamLimits

0xb398,	// (0x00015e09) list_medium_line_t4_g4_g3

0xad7b,	// (0x000157ec) list_medium_line_t4_g4_g4_ParamLimits

0xad7b,	// (0x000157ec) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00019e0e) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00019e0e) list_medium_line_t4_g4_g

0xb3a4,	// (0x00015e15) list_medium_line_t4_g4_t1_ParamLimits

0xb3a4,	// (0x00015e15) list_medium_line_t4_g4_t1

0xb3b9,	// (0x00015e2a) list_medium_line_t4_g4_t2_ParamLimits

0xb3b9,	// (0x00015e2a) list_medium_line_t4_g4_t2

0xb3ce,	// (0x00015e3f) list_medium_line_t4_g4_t3_ParamLimits

0xb3ce,	// (0x00015e3f) list_medium_line_t4_g4_t3

0xb3e3,	// (0x00015e54) list_medium_line_t4_g4_t4_ParamLimits

0xb3e3,	// (0x00015e54) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00019e17) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00019e17) list_medium_line_t4_g4_t

0x44e7,	// (0x0000ef58) chi_dic_find_pane_g1

0x539d,	// (0x0000fe0e) main_tport_pane

0xe1ee,	// (0x00018c5f) list_medium_line_plain_t1

0xad63,	// (0x000157d4) list_medium_line_t2_g2_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_t2_g2_g1

0xad6f,	// (0x000157e0) list_medium_line_t2_g2_g2_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x0001a4dd) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x0001a4dd) list_medium_line_t2_g2_g

0x8043,	// (0x00012ab4) list_medium_line_t2_g2_t1_ParamLimits

0x8043,	// (0x00012ab4) list_medium_line_t2_g2_t1

0x805a,	// (0x00012acb) list_medium_line_t2_g2_t2_ParamLimits

0x805a,	// (0x00012acb) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x0001a4e2) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x0001a4e2) list_medium_line_t2_g2_t

0xe5da,	// (0x0001904b) aid_sp_fs_list_icon_a_sm

0xe5e2,	// (0x00019053) aid_sp_fs_list_icon_d

0xe5ea,	// (0x0001905b) aid_sp_fs_text_primary

0xe5f3,	// (0x00019064) aid_sp_fs_text_secondary

0xe5fc,	// (0x0001906d) list_medium_line

0xe5fc,	// (0x0001906d) list_medium_line_g2

0xe5fc,	// (0x0001906d) list_medium_line_g3

0xe5fc,	// (0x0001906d) list_medium_line_plain

0xe5fc,	// (0x0001906d) list_medium_line_plain_t2

0xe5fc,	// (0x0001906d) list_medium_line_plain_t3

0xe5fc,	// (0x0001906d) list_medium_line_right_icon

0xe5fc,	// (0x0001906d) list_medium_line_right_iconx2

0xe5fc,	// (0x0001906d) list_medium_line_t2

0xe5fc,	// (0x0001906d) list_medium_line_t2_g2

0xe5fc,	// (0x0001906d) list_medium_line_t2_g3

0xe5fc,	// (0x0001906d) list_medium_line_t2_right_icon

0xe5fc,	// (0x0001906d) list_medium_line_t2_right_iconx2

0xe5fc,	// (0x0001906d) list_medium_line_t3

0xe5fc,	// (0x0001906d) list_medium_line_t3_g2

0xe5fc,	// (0x0001906d) list_medium_line_t3_g3

0xe5fc,	// (0x0001906d) list_medium_line_t3_right_iconx2

0xe605,	// (0x00019076) list_medium_line_t4_g4

0xe60e,	// (0x0001907f) list_medium_line_x2

0xe60e,	// (0x0001907f) list_medium_line_x2_t2_g2

0xe60e,	// (0x0001907f) list_medium_line_x2_t2_g3

0xe60e,	// (0x0001907f) list_medium_line_x2_t2_g4

0xe60e,	// (0x0001907f) list_medium_line_x2_t3

0xe60e,	// (0x0001907f) list_medium_line_x2_t3_g2

0xe60e,	// (0x0001907f) list_medium_line_x2_t3_g3

0xe60e,	// (0x0001907f) list_medium_line_x2_t3_g4

0xe60e,	// (0x0001907f) list_medium_line_x2_t4_g2

0xe60e,	// (0x0001907f) list_medium_line_x2_t4_g4

0xe617,	// (0x00019088) list_medium_line_x3

0xe617,	// (0x00019088) list_medium_line_x3_t4

0xe617,	// (0x00019088) list_medium_line_x3_t4_g4

0xe605,	// (0x00019076) list_medium_line_x4_t4

0xe605,	// (0x00019076) list_medium_line_x4_t4_g7

0xe605,	// (0x00019076) list_medium_line_x4_t5

0xe620,	// (0x00019091) list_single_fs_dyc_pane_ParamLimits

0xe620,	// (0x00019091) list_single_fs_dyc_pane

0xad63,	// (0x000157d4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x4_t4_g7_g1

0xeb0e,	// (0x0001957f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xeb0e,	// (0x0001957f) list_medium_line_x4_t4_g7_g2

0xeb1a,	// (0x0001958b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xeb1a,	// (0x0001958b) list_medium_line_x4_t4_g7_g3

0xeb29,	// (0x0001959a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xeb29,	// (0x0001959a) list_medium_line_x4_t4_g7_g4

0xeb35,	// (0x000195a6) list_medium_line_x4_t4_g7_g5_ParamLimits

0xeb35,	// (0x000195a6) list_medium_line_x4_t4_g7_g5

0xeb44,	// (0x000195b5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xeb44,	// (0x000195b5) list_medium_line_x4_t4_g7_g6

0xeb53,	// (0x000195c4) list_medium_line_x4_t4_g7_g7_ParamLimits

0xeb53,	// (0x000195c4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x0001a6a7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x0001a6a7) list_medium_line_x4_t4_g7_g

0xeb5f,	// (0x000195d0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xeb5f,	// (0x000195d0) list_medium_line_x4_t4_g7_t1

0xeb74,	// (0x000195e5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xeb74,	// (0x000195e5) list_medium_line_x4_t4_g7_t2

0xeb89,	// (0x000195fa) list_medium_line_x4_t4_g7_t3_ParamLimits

0xeb89,	// (0x000195fa) list_medium_line_x4_t4_g7_t3

0xeb9e,	// (0x0001960f) list_medium_line_x4_t4_g7_t4_ParamLimits

0xeb9e,	// (0x0001960f) list_medium_line_x4_t4_g7_t4

0xebb0,	// (0x00019621) list_medium_line_x4_t4_g7_t5_ParamLimits

0xebb0,	// (0x00019621) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x0001a6b6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x0001a6b6) list_medium_line_x4_t4_g7_t

0xebc2,	// (0x00019633) list_single_dyc_row_pane_ParamLimits

0xebc2,	// (0x00019633) list_single_dyc_row_pane

0x91dc,	// (0x00013c4d) call5_gesture_pane_ParamLimits

0x91dc,	// (0x00013c4d) call5_gesture_pane

0x9224,	// (0x00013c95) call5_windows_pane_ParamLimits

0x9224,	// (0x00013c95) call5_windows_pane

0x92bd,	// (0x00013d2e) call5_swipe_1_pane_cp_ParamLimits

0x92bd,	// (0x00013d2e) call5_swipe_1_pane_cp

0x92c9,	// (0x00013d3a) call5_swipe_2_pane_cp_ParamLimits

0x92c9,	// (0x00013d3a) call5_swipe_2_pane_cp

0xb8ae,	// (0x0001631f) call5_image_pane_cp

0x92d5,	// (0x00013d46) popup_call5_audio_first_window_cp_ParamLimits

0x92d5,	// (0x00013d46) popup_call5_audio_first_window_cp

0x00bf,	// (0x0000ab30) call5_swipe_1_pane_g1_cp_ParamLimits

0x00bf,	// (0x0000ab30) call5_swipe_1_pane_g1_cp

0x0177,	// (0x0000abe8) call5_swipe_1_pane_g2_cp

0x00d8,	// (0x0000ab49) call5_swipe_1_pane_t1_cp_ParamLimits

0x00d8,	// (0x0000ab49) call5_swipe_1_pane_t1_cp

0x00bf,	// (0x0000ab30) call5_swipe_2_pane_g1_cp_ParamLimits

0x00bf,	// (0x0000ab30) call5_swipe_2_pane_g1_cp

0x017f,	// (0x0000abf0) call5_swipe_2_pane_g2_cp

0x0187,	// (0x0000abf8) call5_swipe_2_pane_t1_cp_ParamLimits

0x0187,	// (0x0000abf8) call5_swipe_2_pane_t1_cp

0xa2d6,	// (0x00014d47) main_sp_fs_email_pane

0x019c,	// (0x0000ac0d) main_sp_fs_listscroll_pane_te

0x92e1,	// (0x00013d52) popup_sp_fs_action_menu_pane_ParamLimits

0x92e1,	// (0x00013d52) popup_sp_fs_action_menu_pane

0xd2c7,	// (0x00017d38) bg_sp_fs_ctrlbar_pane_g1

0x01d5,	// (0x0000ac46) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x01de,	// (0x0000ac4f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x01e7,	// (0x0000ac58) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd2c7,	// (0x00017d38) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x0001a79f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd0b4,	// (0x00017b25) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd0b4,	// (0x00017b25) bg_sp_fs_ctrlbar_ddmenu_pane

0x01f0,	// (0x0000ac61) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x01f0,	// (0x0000ac61) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xad63,	// (0x000157d4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xad63,	// (0x000157d4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x0001a7a8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x0001a7a8) main_sp_fs_ctrlbar_ddmenu_pane_g

0x01fc,	// (0x0000ac6d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x01fc,	// (0x0000ac6d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0216,	// (0x0000ac87) list_medium_line_t2_right_icon_g1

0x048a,	// (0x0000aefb) list_medium_line_t2_right_icon_t1

0x9311,	// (0x00013d82) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x0001a7ad) list_medium_line_t2_right_icon_t

0xcda4,	// (0x00017815) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcda4,	// (0x00017815) bg_sp_fs_ctrlbar_pane

0x9368,	// (0x00013dd9) main_sp_fs_ctrlbar_button_pane_cp01

0x9370,	// (0x00013de1) main_sp_fs_ctrlbar_ddmenu_pane

0x02da,	// (0x0000ad4b) main_sp_fs_ctrlbar_pane_g1

0x02e6,	// (0x0000ad57) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x0001a7b2) main_sp_fs_ctrlbar_pane_g

0x02f2,	// (0x0000ad63) main_sp_fs_ctrlbar_pane_t1

0x937a,	// (0x00013deb) main_sp_fs_ctrlbar_pane

0x939b,	// (0x00013e0c) main_sp_fs_listscroll_pane_te_cp01

0x93bb,	// (0x00013e2c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x93bb,	// (0x00013e2c) popup_sp_fs_action_menu_pane_cp01

0xa2d6,	// (0x00014d47) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa2d6,	// (0x00014d47) bg_sp_fs_highlight_list_pane_cp01

0x93da,	// (0x00013e4b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x93da,	// (0x00013e4b) sp_fs_action_menu_list_gene_pane_g1

0x035b,	// (0x0000adcc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x035b,	// (0x0000adcc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x0001a7b7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x0001a7b7) sp_fs_action_menu_list_gene_pane_g

0x93e9,	// (0x00013e5a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x93e9,	// (0x00013e5a) sp_fs_action_menu_list_gene_pane_t1

0x9401,	// (0x00013e72) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9401,	// (0x00013e72) sp_fs_action_menu_list_gene_pane

0x039d,	// (0x0000ae0e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x039d,	// (0x0000ae0e) popup_sp_fs_action_menu_bg_pane

0x941e,	// (0x00013e8f) sp_fs_action_menu_list_pane_ParamLimits

0x941e,	// (0x00013e8f) sp_fs_action_menu_list_pane

0x03c7,	// (0x0000ae38) sp_fs_scroll_pane_cp01_ParamLimits

0x03c7,	// (0x0000ae38) sp_fs_scroll_pane_cp01

0x943a,	// (0x00013eab) list_medium_line_plain_t2_t1

0x944a,	// (0x00013ebb) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x0001a7bc) list_medium_line_plain_t2_t

0x9458,	// (0x00013ec9) list_medium_line_plain_t3_t1

0x9468,	// (0x00013ed9) list_medium_line_plain_t3_t2

0x9476,	// (0x00013ee7) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x0001a7c1) list_medium_line_plain_t3_t

0xad63,	// (0x000157d4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_t2_g2_g1

0xad7b,	// (0x000157ec) list_medium_line_x2_t2_g2_g2_ParamLimits

0xad7b,	// (0x000157ec) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00019d1e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00019d1e) list_medium_line_x2_t2_g2_g

0xb3a4,	// (0x00015e15) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb3a4,	// (0x00015e15) list_medium_line_x2_t2_g2_t1

0xad9c,	// (0x0001580d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xad9c,	// (0x0001580d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x0001a7c8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x0001a7c8) list_medium_line_x2_t2_g2_t

0xad63,	// (0x000157d4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_t4_g2_g1

0xad7b,	// (0x000157ec) list_medium_line_x2_t4_g2_g2_ParamLimits

0xad7b,	// (0x000157ec) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x00019d1e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x00019d1e) list_medium_line_x2_t4_g2_g

0x9484,	// (0x00013ef5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9484,	// (0x00013ef5) list_medium_line_x2_t4_g2_t1

0x949e,	// (0x00013f0f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x949e,	// (0x00013f0f) list_medium_line_x2_t4_g2_t2

0x94b3,	// (0x00013f24) list_medium_line_x2_t4_g2_t3_ParamLimits

0x94b3,	// (0x00013f24) list_medium_line_x2_t4_g2_t3

0xad9c,	// (0x0001580d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xad9c,	// (0x0001580d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd5c,	// (0x0001a7cd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd5c,	// (0x0001a7cd) list_medium_line_x2_t4_g2_t

0x047a,	// (0x0000aeeb) list_medium_line_t3_right_iconx2_g1

0x0216,	// (0x0000ac87) list_medium_line_t3_right_iconx2_g2

0x94c8,	// (0x00013f39) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd65,	// (0x0001a7d6) list_medium_line_t3_right_iconx2_g

0x94d0,	// (0x00013f41) list_medium_line_t3_right_iconx2_t1

0x94e0,	// (0x00013f51) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd6c,	// (0x0001a7dd) list_medium_line_t3_right_iconx2_t

0xad63,	// (0x000157d4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x3_t4_g4_g1

0xad6f,	// (0x000157e0) list_medium_line_x3_t4_g4_g2_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_x3_t4_g4_g2

0xade5,	// (0x00015856) list_medium_line_x3_t4_g4_g3_ParamLimits

0xade5,	// (0x00015856) list_medium_line_x3_t4_g4_g3

0x04a8,	// (0x0000af19) list_medium_line_x3_t4_g4_g4_ParamLimits

0x04a8,	// (0x0000af19) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd71,	// (0x0001a7e2) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd71,	// (0x0001a7e2) list_medium_line_x3_t4_g4_g

0x8043,	// (0x00012ab4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8043,	// (0x00012ab4) list_medium_line_x3_t4_g4_t1

0x805a,	// (0x00012acb) list_medium_line_x3_t4_g4_t2_ParamLimits

0x805a,	// (0x00012acb) list_medium_line_x3_t4_g4_t2

0xb3b9,	// (0x00015e2a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb3b9,	// (0x00015e2a) list_medium_line_x3_t4_g4_t3

0x04b4,	// (0x0000af25) list_medium_line_x3_t4_g4_t4_ParamLimits

0x04b4,	// (0x0000af25) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7a,	// (0x0001a7eb) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7a,	// (0x0001a7eb) list_medium_line_x3_t4_g4_t

0x94ee,	// (0x00013f5f) list_single_dyc_row_text_pane_t1_ParamLimits

0x94ee,	// (0x00013f5f) list_single_dyc_row_text_pane_t1

0x9525,	// (0x00013f96) list_single_dyc_row_text_pane_t2_ParamLimits

0x9525,	// (0x00013f96) list_single_dyc_row_text_pane_t2

0x055f,	// (0x0000afd0) list_single_dyc_row_text_pane_t3_ParamLimits

0x055f,	// (0x0000afd0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd83,	// (0x0001a7f4) list_single_dyc_row_text_pane_t_ParamLimits

0xfd83,	// (0x0001a7f4) list_single_dyc_row_text_pane_t

0x0571,	// (0x0000afe2) list_single_dyc_row_pane_g1_ParamLimits

0x0571,	// (0x0000afe2) list_single_dyc_row_pane_g1

0x057d,	// (0x0000afee) list_single_dyc_row_pane_g2_ParamLimits

0x057d,	// (0x0000afee) list_single_dyc_row_pane_g2

0x0589,	// (0x0000affa) list_single_dyc_row_pane_g3_ParamLimits

0x0589,	// (0x0000affa) list_single_dyc_row_pane_g3

0x0595,	// (0x0000b006) list_single_dyc_row_pane_g4_ParamLimits

0x0595,	// (0x0000b006) list_single_dyc_row_pane_g4

0x0003,

0xfd8a,	// (0x0001a7fb) list_single_dyc_row_pane_g_ParamLimits

0xfd8a,	// (0x0001a7fb) list_single_dyc_row_pane_g

0x05a1,	// (0x0000b012) list_single_dyc_row_text_pane_ParamLimits

0x05a1,	// (0x0000b012) list_single_dyc_row_text_pane

0xa283,	// (0x00014cf4) bg_sp_fs_scroll_pane

0x05c0,	// (0x0000b031) thumb_sp_fs_scroll_pane

0xad63,	// (0x000157d4) list_medium_line_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_g1

0xb3a4,	// (0x00015e15) list_medium_line_t1_ParamLimits

0xb3a4,	// (0x00015e15) list_medium_line_t1

0xad63,	// (0x000157d4) list_medium_line_x2_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_g1

0xad6f,	// (0x000157e0) list_medium_line_x2_g2_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x0001a4dd) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x0001a4dd) list_medium_line_x2_g

0x05c9,	// (0x0000b03a) list_medium_line_x2_t1_ParamLimits

0x05c9,	// (0x0000b03a) list_medium_line_x2_t1

0xad63,	// (0x000157d4) list_medium_line_x3_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x3_g1

0xad6f,	// (0x000157e0) list_medium_line_x3_g2_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x0001a4dd) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x0001a4dd) list_medium_line_x3_g

0x05c9,	// (0x0000b03a) list_medium_line_x3_t1_ParamLimits

0x05c9,	// (0x0000b03a) list_medium_line_x3_t1

0x05df,	// (0x0000b050) thumb_sp_fs_scroll_pane_g1

0x05e8,	// (0x0000b059) thumb_sp_fs_scroll_pane_g2

0x05f1,	// (0x0000b062) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd93,	// (0x0001a804) thumb_sp_fs_scroll_pane_g

0x05df,	// (0x0000b050) bg_sp_fs_scroll_pane_g1

0x05e8,	// (0x0000b059) bg_sp_fs_scroll_pane_g2

0x05f1,	// (0x0000b062) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd93,	// (0x0001a804) bg_sp_fs_scroll_pane_g

0xad63,	// (0x000157d4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_x2_t3_g4_g1

0xadd9,	// (0x0001584a) list_medium_line_x2_t3_g4_g2_ParamLimits

0xadd9,	// (0x0001584a) list_medium_line_x2_t3_g4_g2

0xad6f,	// (0x000157e0) list_medium_line_x2_t3_g4_g3_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_x2_t3_g4_g3

0xad7b,	// (0x000157ec) list_medium_line_x2_t3_g4_g4_ParamLimits

0xad7b,	// (0x000157ec) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00019d9a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00019d9a) list_medium_line_x2_t3_g4_g

0x957f,	// (0x00013ff0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x957f,	// (0x00013ff0) list_medium_line_x2_t3_g4_t1

0x9595,	// (0x00014006) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9595,	// (0x00014006) list_medium_line_x2_t3_g4_t2

0xad9c,	// (0x0001580d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xad9c,	// (0x0001580d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9a,	// (0x0001a80b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9a,	// (0x0001a80b) list_medium_line_x2_t3_g4_t

0xad63,	// (0x000157d4) list_medium_line_g2_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_g2_g1

0xad6f,	// (0x000157e0) list_medium_line_g2_g2_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x0001a4dd) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x0001a4dd) list_medium_line_g2_g

0xb106,	// (0x00015b77) list_medium_line_g2_t1_ParamLimits

0xb106,	// (0x00015b77) list_medium_line_g2_t1

0xad63,	// (0x000157d4) list_medium_line_t3_g2_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_t3_g2_g1

0xad6f,	// (0x000157e0) list_medium_line_t3_g2_g2_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x0001a4dd) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x0001a4dd) list_medium_line_t3_g2_g

0x95ae,	// (0x0001401f) list_medium_line_t3_g2_t1_ParamLimits

0x95ae,	// (0x0001401f) list_medium_line_t3_g2_t1

0x95c5,	// (0x00014036) list_medium_line_t3_g2_t2_ParamLimits

0x95c5,	// (0x00014036) list_medium_line_t3_g2_t2

0x95da,	// (0x0001404b) list_medium_line_t3_g2_t3_ParamLimits

0x95da,	// (0x0001404b) list_medium_line_t3_g2_t3

0x0002,

0xfda1,	// (0x0001a812) list_medium_line_t3_g2_t_ParamLimits

0xfda1,	// (0x0001a812) list_medium_line_t3_g2_t

0x0216,	// (0x0000ac87) list_medium_line_right_icon_g1

0x066a,	// (0x0000b0db) list_medium_line_right_icon_t1

0xad63,	// (0x000157d4) list_medium_line_t2_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_t2_g1

0x95ef,	// (0x00014060) list_medium_line_t2_t1_ParamLimits

0x95ef,	// (0x00014060) list_medium_line_t2_t1

0x9609,	// (0x0001407a) list_medium_line_t2_t2_ParamLimits

0x9609,	// (0x0001407a) list_medium_line_t2_t2

0x0001,

0xfda8,	// (0x0001a819) list_medium_line_t2_t_ParamLimits

0xfda8,	// (0x0001a819) list_medium_line_t2_t

0xad63,	// (0x000157d4) list_medium_line_t3_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_t3_g1

0x9484,	// (0x00013ef5) list_medium_line_t3_t1_ParamLimits

0x9484,	// (0x00013ef5) list_medium_line_t3_t1

0x949e,	// (0x00013f0f) list_medium_line_t3_t2_ParamLimits

0x949e,	// (0x00013f0f) list_medium_line_t3_t2

0x94b3,	// (0x00013f24) list_medium_line_t3_t3_ParamLimits

0x94b3,	// (0x00013f24) list_medium_line_t3_t3

0x0002,

0xfdad,	// (0x0001a81e) list_medium_line_t3_t_ParamLimits

0xfdad,	// (0x0001a81e) list_medium_line_t3_t

0xad63,	// (0x000157d4) list_medium_line_g3_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_g3_g1

0xadd9,	// (0x0001584a) list_medium_line_g3_g2_ParamLimits

0xadd9,	// (0x0001584a) list_medium_line_g3_g2

0xad6f,	// (0x000157e0) list_medium_line_g3_g3_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_g3_g3

0x0002,

0xfdb4,	// (0x0001a825) list_medium_line_g3_g_ParamLimits

0xfdb4,	// (0x0001a825) list_medium_line_g3_g

0xb0f1,	// (0x00015b62) list_medium_line_g3_t1_ParamLimits

0xb0f1,	// (0x00015b62) list_medium_line_g3_t1

0xad63,	// (0x000157d4) list_medium_line_t2_g3_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_t2_g3_g1

0xadd9,	// (0x0001584a) list_medium_line_t2_g3_g2_ParamLimits

0xadd9,	// (0x0001584a) list_medium_line_t2_g3_g2

0xad6f,	// (0x000157e0) list_medium_line_t2_g3_g3_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_t2_g3_g3

0x0002,

0xfdb4,	// (0x0001a825) list_medium_line_t2_g3_g_ParamLimits

0xfdb4,	// (0x0001a825) list_medium_line_t2_g3_g

0x961e,	// (0x0001408f) list_medium_line_t2_g3_t1_ParamLimits

0x961e,	// (0x0001408f) list_medium_line_t2_g3_t1

0x9635,	// (0x000140a6) list_medium_line_t2_g3_t2_ParamLimits

0x9635,	// (0x000140a6) list_medium_line_t2_g3_t2

0x0001,

0xfdbb,	// (0x0001a82c) list_medium_line_t2_g3_t_ParamLimits

0xfdbb,	// (0x0001a82c) list_medium_line_t2_g3_t

0xad63,	// (0x000157d4) list_medium_line_t3_g3_g1_ParamLimits

0xad63,	// (0x000157d4) list_medium_line_t3_g3_g1

0xadd9,	// (0x0001584a) list_medium_line_t3_g3_g2_ParamLimits

0xadd9,	// (0x0001584a) list_medium_line_t3_g3_g2

0xad6f,	// (0x000157e0) list_medium_line_t3_g3_g3_ParamLimits

0xad6f,	// (0x000157e0) list_medium_line_t3_g3_g3

0x0002,

0xfdb4,	// (0x0001a825) list_medium_line_t3_g3_g_ParamLimits

0xfdb4,	// (0x0001a825) list_medium_line_t3_g3_g

0x964a,	// (0x000140bb) list_medium_line_t3_g3_t1_ParamLimits

0x964a,	// (0x000140bb) list_medium_line_t3_g3_t1

0x9663,	// (0x000140d4) list_medium_line_t3_g3_t2_ParamLimits

0x9663,	// (0x000140d4) list_medium_line_t3_g3_t2

0x9679,	// (0x000140ea) list_medium_line_t3_g3_t3_ParamLimits

0x9679,	// (0x000140ea) list_medium_line_t3_g3_t3

0x0002,

0xfdc0,	// (0x0001a831) list_medium_line_t3_g3_t_ParamLimits

0xfdc0,	// (0x0001a831) list_medium_line_t3_g3_t

0x047a,	// (0x0000aeeb) list_medium_line_right_iconx2_g1

0x0216,	// (0x0000ac87) list_medium_line_right_iconx2_g2

0x0001,

0xfdc7,	// (0x0001a838) list_medium_line_right_iconx2_g

0x0736,	// (0x0000b1a7) list_medium_line_right_iconx2_t1

0x047a,	// (0x0000aeeb) list_medium_line_t2_right_iconx2_g1

0x0216,	// (0x0000ac87) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdc7,	// (0x0001a838) list_medium_line_t2_right_iconx2_g

0x968f,	// (0x00014100) list_medium_line_t2_right_iconx2_t1

0x969f,	// (0x00014110) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdcc,	// (0x0001a83d) list_medium_line_t2_right_iconx2_t

0xe1ee,	// (0x00018c5f) list_medium_line_x4_t4_t1

0x96ad,	// (0x0001411e) list_medium_line_x4_t4_t2

0x96bd,	// (0x0001412e) list_medium_line_x4_t4_t3

0x96cd,	// (0x0001413e) list_medium_line_x4_t4_t4

0x0003,

0xfdd1,	// (0x0001a842) list_medium_line_x4_t4_t

0x9718,	// (0x00014189) tport_appsw_pane_ParamLimits

0x9718,	// (0x00014189) tport_appsw_pane

0x9729,	// (0x0001419a) tport_contact_pane_ParamLimits

0x9729,	// (0x0001419a) tport_contact_pane

0x973e,	// (0x000141af) tport_listscroll_pane_ParamLimits

0x973e,	// (0x000141af) tport_listscroll_pane

0x9757,	// (0x000141c8) cell_tport_appsw_pane_ParamLimits

0x9757,	// (0x000141c8) cell_tport_appsw_pane

0xdf18,	// (0x00018989) tport_appsw_pane_g1_ParamLimits

0xdf18,	// (0x00018989) tport_appsw_pane_g1

0x07e6,	// (0x0000b257) tport_contact_pane_g1

0x07ef,	// (0x0000b260) tport_contact_pane_t1

0x07fd,	// (0x0000b26e) tport_contact_pane_t2

0x0001,

0xfdda,	// (0x0001a84b) tport_contact_pane_t

0x080b,	// (0x0000b27c) list_tport_pane

0xab9e,	// (0x0001560f) scroll_pane_cp_030

0x081c,	// (0x0000b28d) cell_tport_appsw_pane_g1

0x0835,	// (0x0000b2a6) cell_tport_appsw_pane_t1

0xa283,	// (0x00014cf4) grid_highlight_pane_cp019

0x976d,	// (0x000141de) list_tport_double_graphic_pane_ParamLimits

0x976d,	// (0x000141de) list_tport_double_graphic_pane

0xa2d6,	// (0x00014d47) list_highlight_pane_cp023_ParamLimits

0xa2d6,	// (0x00014d47) list_highlight_pane_cp023

0x977a,	// (0x000141eb) list_tport_double_graphic_pane_g1_ParamLimits

0x977a,	// (0x000141eb) list_tport_double_graphic_pane_g1

0x9787,	// (0x000141f8) list_tport_double_graphic_pane_t1_ParamLimits

0x9787,	// (0x000141f8) list_tport_double_graphic_pane_t1

0x979c,	// (0x0001420d) list_tport_double_graphic_pane_t2_ParamLimits

0x979c,	// (0x0001420d) list_tport_double_graphic_pane_t2

0x0001,

0xfde6,	// (0x0001a857) list_tport_double_graphic_pane_t_ParamLimits

0xfde6,	// (0x0001a857) list_tport_double_graphic_pane_t

0xa283,	// (0x00014cf4) main_cale_note_pane

0x7771,	// (0x000121e2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7771,	// (0x000121e2) cell_vitu2_function_top_wide_pane_cp01

0x8ec6,	// (0x00013937) wait_bar_pane_cp05_ParamLimits

0xa283,	// (0x00014cf4) listscroll_cmail_pane

0x0884,	// (0x0000b2f5) list_cmail_pane

0x97ae,	// (0x0001421f) list_cmail_body_pane

0x97ae,	// (0x0001421f) list_single_cmail_header_caption_pane

0x97c4,	// (0x00014235) list_single_cmail_header_detail_pane_ParamLimits

0x97c4,	// (0x00014235) list_single_cmail_header_detail_pane

0x08e2,	// (0x0000b353) list_single_cmail_header_caption_pane_t1

0x97ec,	// (0x0001425d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x97ec,	// (0x0001425d) list_single_cmail_header_detail_pane_g1

0x090e,	// (0x0000b37f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x090e,	// (0x0000b37f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdeb,	// (0x0001a85c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdeb,	// (0x0001a85c) list_single_cmail_header_detail_pane_g

0x0927,	// (0x0000b398) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0927,	// (0x0000b398) list_single_cmail_header_detail_pane_t1

0x097d,	// (0x0000b3ee) list_single_cmail_header_editor_pane_bg_ParamLimits

0x097d,	// (0x0000b3ee) list_single_cmail_header_editor_pane_bg

0x098f,	// (0x0000b400) list_cmail_body_pane_g1

0x0998,	// (0x0000b409) list_cmail_body_pane_t1

0xdf55,	// (0x000189c6) list_single_cmail_header_editor_pane_bg_g1

0xb00f,	// (0x00015a80) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdf65,	// (0x000189d6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdf5d,	// (0x000189ce) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe218,	// (0x00018c89) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdf85,	// (0x000189f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdf75,	// (0x000189e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdf7d,	// (0x000189ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xafef,	// (0x00015a60) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9826,	// (0x00014297) calenote_gesture_pane_ParamLimits

0x9826,	// (0x00014297) calenote_gesture_pane

0x9842,	// (0x000142b3) calenote_window_pane_ParamLimits

0x9842,	// (0x000142b3) calenote_window_pane

0x09d6,	// (0x0000b447) popup_note_window_cp01

0x985e,	// (0x000142cf) calenote_swipe_1_pane_ParamLimits

0x985e,	// (0x000142cf) calenote_swipe_1_pane

0x92c9,	// (0x00013d3a) calenote_swipe_2_pane_ParamLimits

0x92c9,	// (0x00013d3a) calenote_swipe_2_pane

0x00bf,	// (0x0000ab30) calenote_swipe_1_pane_g1_ParamLimits

0x00bf,	// (0x0000ab30) calenote_swipe_1_pane_g1

0x00cc,	// (0x0000ab3d) calenote_swipe_1_pane_g2_ParamLimits

0x00cc,	// (0x0000ab3d) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x0001a795) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x0001a795) calenote_swipe_1_pane_g

0x09fb,	// (0x0000b46c) calenote_swipe_1_pane_t1_ParamLimits

0x09fb,	// (0x0000b46c) calenote_swipe_1_pane_t1

0x00bf,	// (0x0000ab30) calenote_swipe_2_pane_g1_ParamLimits

0x00bf,	// (0x0000ab30) calenote_swipe_2_pane_g1

0x0a1a,	// (0x0000b48b) calenote_swipe_2_pane_g2_ParamLimits

0x0a1a,	// (0x0000b48b) calenote_swipe_2_pane_g2

0x0001,

0xfdf7,	// (0x0001a868) calenote_swipe_2_pane_g_ParamLimits

0xfdf7,	// (0x0001a868) calenote_swipe_2_pane_g

0x0a26,	// (0x0000b497) calenote_swipe_2_pane_t1_ParamLimits

0x0a26,	// (0x0000b497) calenote_swipe_2_pane_t1

0xa283,	// (0x00014cf4) main_mup_navstr_pane

0x6551,	// (0x00010fc2) main_mup3_pane_t7_ParamLimits

0x6551,	// (0x00010fc2) main_mup3_pane_t7

0xdbc8,	// (0x00018639) main_mp4_pane_g6_ParamLimits

0xdbc8,	// (0x00018639) main_mp4_pane_g6

0xde00,	// (0x00018871) main_image3_pane_t4_ParamLimits

0xde00,	// (0x00018871) main_image3_pane_t4

0x9873,	// (0x000142e4) popup_navstr_preview_pane_ParamLimits

0x9873,	// (0x000142e4) popup_navstr_preview_pane

0x9883,	// (0x000142f4) scroll_navstr_pane_ParamLimits

0x9883,	// (0x000142f4) scroll_navstr_pane

0xa283,	// (0x00014cf4) bg_popup_preview_window_pane_cp04

0x0a65,	// (0x0000b4d6) popup_navstr_preview_pane_t1

0x9897,	// (0x00014308) scroll_navstr_pane_g1_ParamLimits

0x9897,	// (0x00014308) scroll_navstr_pane_g1

0x98ab,	// (0x0001431c) scroll_navstr_pane_t1_ParamLimits

0x98ab,	// (0x0001431c) scroll_navstr_pane_t1

0x09f2,	// (0x0000b463) bg_button_pane_cp014

0x09f2,	// (0x0000b463) bg_button_pane_cp030

0x9187,	// (0x00013bf8) list_double_fisheye_pane_g4_ParamLimits

0x9187,	// (0x00013bf8) list_double_fisheye_pane_g4

0x9193,	// (0x00013c04) list_double_fisheye_pane_g5_ParamLimits

0x9193,	// (0x00013c04) list_double_fisheye_pane_g5

0x0894,	// (0x0000b305) sp_fs_scroll_pane_cp03

0x02da,	// (0x0000ad4b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x02e6,	// (0x0000ad57) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x0001a7b2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x02f2,	// (0x0000ad63) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x088c,	// (0x0000b2fd) sp_fs_scroll_pane_cp02

0xabf8,	// (0x00015669) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xabf8,	// (0x00015669) popup_sp_fs_calendar_preview_list_single_pane

0xa283,	// (0x00014cf4) main_cam6_pano_pane

0xa2d6,	// (0x00014d47) main_mup3_pane_ParamLimits

0xa283,	// (0x00014cf4) main_phacti_pane

0x8db9,	// (0x0001382a) bg_button_pane_cp11

0x8dd1,	// (0x00013842) main_mobtv_info_pane_g2_ParamLimits

0x8dd1,	// (0x00013842) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x0001a712) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x0001a712) main_mobtv_info_pane_g

0x8f84,	// (0x000139f5) sc_clock_pane_t5_ParamLimits

0x8f84,	// (0x000139f5) sc_clock_pane_t5

0x8ff7,	// (0x00013a68) main_radioblah_pane_g1_ParamLimits

0xf0ab,	// (0x00019b1c) main_radioblah_pane_t3_ParamLimits

0xf0ab,	// (0x00019b1c) main_radioblah_pane_t3

0xf0c3,	// (0x00019b34) main_radioblah_pane_t4_ParamLimits

0xf0c3,	// (0x00019b34) main_radioblah_pane_t4

0x901f,	// (0x00013a90) main_radioblah_text_pane_ParamLimits

0x901f,	// (0x00013a90) main_radioblah_text_pane

0x9031,	// (0x00013aa2) main_radioblah_info_pane_g1_ParamLimits

0x90c4,	// (0x00013b35) main_radioblah_info_pane_t4_ParamLimits

0x90c4,	// (0x00013b35) main_radioblah_info_pane_t4

0xa2d6,	// (0x00014d47) main_sp_fs_calendar_pane

0x98c1,	// (0x00014332) main_phacti_pane_g1

0x98c9,	// (0x0001433a) phacti_note_pane_ParamLimits

0x98c9,	// (0x0001433a) phacti_note_pane

0x0ab7,	// (0x0000b528) phacti_term_pane_ParamLimits

0x0ab7,	// (0x0000b528) phacti_term_pane

0x0acc,	// (0x0000b53d) phacti_note_pane_t1_ParamLimits

0x0acc,	// (0x0000b53d) phacti_note_pane_t1

0x0ae3,	// (0x0000b554) phacti_term_pane_g1

0x0aeb,	// (0x0000b55c) phacti_term_pane_t1_ParamLimits

0x0aeb,	// (0x0000b55c) phacti_term_pane_t1

0x0b15,	// (0x0000b586) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0b1d,	// (0x0000b58e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe01,	// (0x0001a872) popup_sp_fs_calendar_preview_list_single_pane_g

0x0b25,	// (0x0000b596) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0b25,	// (0x0000b596) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0b3b,	// (0x0000b5ac) aid_popup_sp_fs_bg_corner_pane

0xd2c7,	// (0x00017d38) popup_sp_fs_calendar_preview_bg_pane_g1

0xa283,	// (0x00014cf4) popup_sp_fs_calendar_preview_bg_pane

0x0b43,	// (0x0000b5b4) popup_sp_fs_calendar_preview_list_pane

0xa2d6,	// (0x00014d47) bg_main_sp_fs_cale_pane_ParamLimits

0xa2d6,	// (0x00014d47) bg_main_sp_fs_cale_pane

0x0b7b,	// (0x0000b5ec) listscroll_cale_mrui_pane_ParamLimits

0x0b7b,	// (0x0000b5ec) listscroll_cale_mrui_pane

0x0b8f,	// (0x0000b600) listscroll_sp_fs_schedule_track_pane

0x0b98,	// (0x0000b609) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0b98,	// (0x0000b609) main_sp_fs_ctrlbar_pane_cp01

0x0ba9,	// (0x0000b61a) main_sp_fs_ribbon_pane

0x0bb1,	// (0x0000b622) popup_sp_fs_cale_preview_window

0x9918,	// (0x00014389) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9918,	// (0x00014389) list_single_sp_fs_schedule_track_pane

0xa2d6,	// (0x00014d47) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa2d6,	// (0x00014d47) bg_sp_fs_highlight_list_pane_cp03

0x992b,	// (0x0001439c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x992b,	// (0x0001439c) list_single_sp_fs_schedule_track_pane_g1

0x9937,	// (0x000143a8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9937,	// (0x000143a8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe06,	// (0x0001a877) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe06,	// (0x0001a877) list_single_sp_fs_schedule_track_pane_g

0x9943,	// (0x000143b4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9943,	// (0x000143b4) list_single_sp_fs_schedule_track_pane_t1

0x995d,	// (0x000143ce) sp_fs_schedule_track_pane_ParamLimits

0x995d,	// (0x000143ce) sp_fs_schedule_track_pane

0x0c18,	// (0x0000b689) sp_fs_schedule_track_pane_g1

0x0c20,	// (0x0000b691) sp_fs_schedule_track_pane_g2

0x0c28,	// (0x0000b699) sp_fs_schedule_track_pane_g3

0x0c30,	// (0x0000b6a1) sp_fs_schedule_track_pane_g4

0x0c38,	// (0x0000b6a9) sp_fs_schedule_track_pane_g5

0x0004,

0xfe0b,	// (0x0001a87c) sp_fs_schedule_track_pane_g

0xdf55,	// (0x000189c6) bg_sp_fs_schedule_viewer_highlight_g1

0xb00f,	// (0x00015a80) bg_sp_fs_schedule_viewer_highlight_g2

0xdf5d,	// (0x000189ce) bg_sp_fs_schedule_viewer_highlight_g3

0xdf65,	// (0x000189d6) bg_sp_fs_schedule_viewer_highlight_g4

0xe218,	// (0x00018c89) bg_sp_fs_schedule_viewer_highlight_g5

0xdf75,	// (0x000189e6) bg_sp_fs_schedule_viewer_highlight_g6

0xdf7d,	// (0x000189ee) bg_sp_fs_schedule_viewer_highlight_g7

0xdf85,	// (0x000189f6) bg_sp_fs_schedule_viewer_highlight_g8

0xafef,	// (0x00015a60) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe16,	// (0x0001a887) bg_sp_fs_schedule_viewer_highlight_g

0xa283,	// (0x00014cf4) bg_main_sp_fs_ribbon_pane

0x996e,	// (0x000143df) main_sp_fs_ribbon_pane_g1

0x0c49,	// (0x0000b6ba) main_sp_fs_ribbon_pane_t1

0x9977,	// (0x000143e8) main_sp_fs_ribbon_pane_t2

0x0c67,	// (0x0000b6d8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe29,	// (0x0001a89a) main_sp_fs_ribbon_pane_t

0x0c76,	// (0x0000b6e7) main_sp_fs_ribbon_scheduler_pane

0x0c7e,	// (0x0000b6ef) bg_main_sp_fs_ribbon_pane_g1

0x0c87,	// (0x0000b6f8) bg_main_sp_fs_ribbon_pane_g2

0x0c90,	// (0x0000b701) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe30,	// (0x0001a8a1) bg_main_sp_fs_ribbon_pane_g

0x0c98,	// (0x0000b709) main_sp_fs_ribbon_scheduler_pane_g1

0x0ca1,	// (0x0000b712) main_sp_fs_ribbon_scheduler_pane_g2

0x0caa,	// (0x0000b71b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe37,	// (0x0001a8a8) main_sp_fs_ribbon_scheduler_pane_g

0xf11d,	// (0x00019b8e) list_cale_mrui_pane

0x0cb3,	// (0x0000b724) sp_fs_scroll_pane_cp07_ParamLimits

0x0cb3,	// (0x0000b724) sp_fs_scroll_pane_cp07

0x9986,	// (0x000143f7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9986,	// (0x000143f7) bg_sp_fs_schedule_viewer_highlight

0x0cd5,	// (0x0000b746) list_single_sp_fs_schedule_track_pane_cp01

0x0cdd,	// (0x0000b74e) list_sp_fs_schedule_track_pane

0x0ce5,	// (0x0000b756) sp_fs_scroll_pane_cp06_ParamLimits

0x0ce5,	// (0x0000b756) sp_fs_scroll_pane_cp06

0xd2c7,	// (0x00017d38) bgmain_sp_fs_calendar_pane_g1

0x9996,	// (0x00014407) list_single_cale_mrui_pane_ParamLimits

0x9996,	// (0x00014407) list_single_cale_mrui_pane

0x0d1d,	// (0x0000b78e) list_single_cale_mrui_row_pane_ParamLimits

0x0d1d,	// (0x0000b78e) list_single_cale_mrui_row_pane

0x0d2a,	// (0x0000b79b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0d2a,	// (0x0000b79b) list_single_cale_mrui_row_pane_g1

0x0d62,	// (0x0000b7d3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0d62,	// (0x0000b7d3) list_single_cale_mrui_row_pane_t1

0x99b9,	// (0x0001442a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x99b9,	// (0x0001442a) list_single_cale_mrui_row_pane_t2

0x0dda,	// (0x0000b84b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0dda,	// (0x0000b84b) list_single_cale_mrui_row_pane_t3

0x0e09,	// (0x0000b87a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0e09,	// (0x0000b87a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe43,	// (0x0001a8b4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe43,	// (0x0001a8b4) list_single_cale_mrui_row_pane_t

0x9a1f,	// (0x00014490) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9a1f,	// (0x00014490) list_single_cmail_header_editor_pane_bg_cp01

0x9a43,	// (0x000144b4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9a43,	// (0x000144b4) list_single_cmail_header_editor_pane_bg_cp02

0x9a61,	// (0x000144d2) main_radioblah_text_pane_t1_ParamLimits

0x9a61,	// (0x000144d2) main_radioblah_text_pane_t1

0x0e93,	// (0x0000b904) cam6_indi_pane_cp01

0x0e9b,	// (0x0000b90c) cam6_mode_pane_cp01

0x0ea3,	// (0x0000b914) cam6_pano_pane

0x0eac,	// (0x0000b91d) cam6_zoom_pane_cp01

0x0eb4,	// (0x0000b925) cam6_pano_image_pane

0x0ebd,	// (0x0000b92e) cam6_pano_pane_g1

0xee29,	// (0x0001989a) cam6_pano_pane_g2

0x0ec6,	// (0x0000b937) cam6_pano_pane_g3

0x0ecf,	// (0x0000b940) cam6_pano_pane_g4

0xd82d,	// (0x0001829e) cam6_pano_pane_g5

0x0ed8,	// (0x0000b949) cam6_pano_pane_g6

0x0ee0,	// (0x0000b951) cam6_pano_pane_g7

0x0ee8,	// (0x0000b959) cam6_pano_pane_g8

0x0ef1,	// (0x0000b962) cam6_pano_pane_g9

0x0008,

0xfe4c,	// (0x0001a8bd) cam6_pano_pane_g

0xa283,	// (0x00014cf4) main_browser_tag_pane

0x0a45,	// (0x0000b4b6) grid_navstr_albumart_pane

0x0efa,	// (0x0000b96b) cell_navstr_albumart_pane_ParamLimits

0x0efa,	// (0x0000b96b) cell_navstr_albumart_pane

0xba37,	// (0x000164a8) cell_navstr_albumart_pane_g1

0xcb81,	// (0x000175f2) cell_navstr_albumart_pane_g2

0xcb91,	// (0x00017602) cell_navstr_albumart_pane_g3

0xcb89,	// (0x000175fa) cell_navstr_albumart_pane_g4

0x0003,

0xfe5f,	// (0x0001a8d0) cell_navstr_albumart_pane_g

0x9a7a,	// (0x000144eb) bt_list_pane_ParamLimits

0x9a7a,	// (0x000144eb) bt_list_pane

0x9a8d,	// (0x000144fe) bt_list_pane_t1

0x9a9c,	// (0x0001450d) bt_list_pane_t2

0x0001,

0xfe68,	// (0x0001a8d9) bt_list_pane_t

0xa283,	// (0x00014cf4) main_cale_prevew_pane

0x9aab,	// (0x0001451c) popup_cale_preview_window_ParamLimits

0x9aab,	// (0x0001451c) popup_cale_preview_window

0xa2d6,	// (0x00014d47) bg_popup_preview_window_pane_cp05_ParamLimits

0xa2d6,	// (0x00014d47) bg_popup_preview_window_pane_cp05

0x0f59,	// (0x0000b9ca) list_cale_preview_pane_ParamLimits

0x0f59,	// (0x0000b9ca) list_cale_preview_pane

0x9ac0,	// (0x00014531) list_double_cale_preview_pane_ParamLimits

0x9ac0,	// (0x00014531) list_double_cale_preview_pane

0x9ad1,	// (0x00014542) list_single_cale_preview_pane_ParamLimits

0x9ad1,	// (0x00014542) list_single_cale_preview_pane

0x0fa7,	// (0x0000ba18) list_single_cale_preview_pane_g1

0x0faf,	// (0x0000ba20) list_single_cale_preview_pane_t1_ParamLimits

0x0faf,	// (0x0000ba20) list_single_cale_preview_pane_t1

0x9ae5,	// (0x00014556) list_double_cale_preview_pane_g1

0x9aed,	// (0x0001455e) list_double_cale_preview_pane_t1_ParamLimits

0x9aed,	// (0x0001455e) list_double_cale_preview_pane_t1

0x9b02,	// (0x00014573) list_double_cale_preview_pane_t2_ParamLimits

0x9b02,	// (0x00014573) list_double_cale_preview_pane_t2

0x0001,

0xfe6d,	// (0x0001a8de) list_double_cale_preview_pane_t_ParamLimits

0xfe6d,	// (0x0001a8de) list_double_cale_preview_pane_t

0xa283,	// (0x00014cf4) main_ezdial_pane

0xa2d6,	// (0x00014d47) main_sp_fs_email_pane_ParamLimits

0x931f,	// (0x00013d90) cmail_ddmenu_btn01_pane_ParamLimits

0x931f,	// (0x00013d90) cmail_ddmenu_btn01_pane

0x9332,	// (0x00013da3) cmail_ddmenu_btn02_pane_ParamLimits

0x9332,	// (0x00013da3) cmail_ddmenu_btn02_pane

0x9355,	// (0x00013dc6) cmail_ddmenu_btn03_pane_ParamLimits

0x9355,	// (0x00013dc6) cmail_ddmenu_btn03_pane

0x937a,	// (0x00013deb) main_sp_fs_ctrlbar_pane_ParamLimits

0x939b,	// (0x00013e0c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x97ae,	// (0x0001421f) list_cmail_body_pane_ParamLimits

0x08f0,	// (0x0000b361) bg_button_pane_cp12

0x091a,	// (0x0000b38b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x091a,	// (0x0000b38b) list_single_cmail_header_detail_pane_g3

0x9802,	// (0x00014273) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9802,	// (0x00014273) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf2,	// (0x0001a863) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf2,	// (0x0001a863) list_single_cmail_header_detail_pane_t

0x0b00,	// (0x0000b571) phacti_term_pane_t2_ParamLimits

0x0b00,	// (0x0000b571) phacti_term_pane_t2

0x0001,

0xfdfc,	// (0x0001a86d) phacti_term_pane_t_ParamLimits

0xfdfc,	// (0x0001a86d) phacti_term_pane_t

0x0fdc,	// (0x0000ba4d) aid_size_list_single_double

0x9b1a,	// (0x0001458b) popup_ezdial_listscroll_window

0x9b30,	// (0x000145a1) popup_number_entry_window_cp01

0xb8ae,	// (0x0001631f) bg_popup_call_pane_cp09

0x100d,	// (0x0000ba7e) ezdial_list_pane

0x1015,	// (0x0000ba86) scroll_pane_cp23

0xcda4,	// (0x00017815) bg_button_pane_cp028_ParamLimits

0xcda4,	// (0x00017815) bg_button_pane_cp028

0x9b3c,	// (0x000145ad) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9b3c,	// (0x000145ad) cmail_ddmenu_btn01_pane_g1

0x9b4b,	// (0x000145bc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9b4b,	// (0x000145bc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe72,	// (0x0001a8e3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe72,	// (0x0001a8e3) cmail_ddmenu_btn01_pane_g

0x103b,	// (0x0000baac) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x103b,	// (0x0000baac) cmail_ddmenu_btn01_pane_t1

0xcda4,	// (0x00017815) bg_button_pane_cp029_ParamLimits

0xcda4,	// (0x00017815) bg_button_pane_cp029

0x9b5b,	// (0x000145cc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9b5b,	// (0x000145cc) cmail_ddmenu_btn02_pane_g1

0x9b76,	// (0x000145e7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9b76,	// (0x000145e7) cmail_ddmenu_btn02_pane_t1

0xa2d6,	// (0x00014d47) bg_button_pane_cp031_ParamLimits

0xa2d6,	// (0x00014d47) bg_button_pane_cp031

0x9b5b,	// (0x000145cc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9b5b,	// (0x000145cc) cmail_ddmenu_btn03_pane_g1

0x9b76,	// (0x000145e7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9b76,	// (0x000145e7) cmail_ddmenu_btn03_pane_t1

0x7049,	// (0x00011aba) cell_dialer2_keypad_pane_t1_ParamLimits

0x7063,	// (0x00011ad4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7063,	// (0x00011ad4) cell_dialer2_keypad_pane_t1_copy1

0x8c60,	// (0x000136d1) ncimui_group_button_pane

0xa2d6,	// (0x00014d47) main_sp_fs_calendar_pane_ParamLimits

0x97ae,	// (0x0001421f) list_single_cmail_header_caption_pane_ParamLimits

0x0b57,	// (0x0000b5c8) aid_recal_txt_sm_pane

0xa283,	// (0x00014cf4) mian_recal_day_pane

0x0bb1,	// (0x0000b622) popup_sp_fs_cale_preview_window_ParamLimits

0xa283,	// (0x00014cf4) list_recal_day_pane

0x1099,	// (0x0000bb0a) list_single_recal_day_pane_ParamLimits

0x1099,	// (0x0000bb0a) list_single_recal_day_pane

0x10ab,	// (0x0000bb1c) list_single_recal_day_pane_g1_ParamLimits

0x10ab,	// (0x0000bb1c) list_single_recal_day_pane_g1

0x10b7,	// (0x0000bb28) list_single_recal_day_pane_g2_ParamLimits

0x10b7,	// (0x0000bb28) list_single_recal_day_pane_g2

0x10c3,	// (0x0000bb34) list_single_recal_day_pane_g3_ParamLimits

0x10c3,	// (0x0000bb34) list_single_recal_day_pane_g3

0x9b9d,	// (0x0001460e) list_single_recal_day_pane_g4_ParamLimits

0x9b9d,	// (0x0001460e) list_single_recal_day_pane_g4

0x10db,	// (0x0000bb4c) list_single_recal_day_pane_g5_ParamLimits

0x10db,	// (0x0000bb4c) list_single_recal_day_pane_g5

0x10e7,	// (0x0000bb58) list_single_recal_day_pane_g6_ParamLimits

0x10e7,	// (0x0000bb58) list_single_recal_day_pane_g6

0x0005,

0xfe81,	// (0x0001a8f2) list_single_recal_day_pane_g_ParamLimits

0xfe81,	// (0x0001a8f2) list_single_recal_day_pane_g

0x10f3,	// (0x0000bb64) list_single_recal_day_pane_t1

0x1101,	// (0x0000bb72) list_single_recal_day_pane_t2

0x0001,

0xfe8e,	// (0x0001a8ff) list_single_recal_day_pane_t

0x9bab,	// (0x0001461c) ncimui_query_button_pane_ParamLimits

0x9bab,	// (0x0001461c) ncimui_query_button_pane

0x9bbb,	// (0x0001462c) ncimui_query_button_pane_t1_ParamLimits

0x9bbb,	// (0x0001462c) ncimui_query_button_pane_t1

0x1132,	// (0x0000bba3) ncimui_query_button_pane_t2_ParamLimits

0x1132,	// (0x0000bba3) ncimui_query_button_pane_t2

0x0001,

0xfe93,	// (0x0001a904) ncimui_query_button_pane_t_ParamLimits

0xfe93,	// (0x0001a904) ncimui_query_button_pane_t

0x9bce,	// (0x0001463f) query_button_pane_ParamLimits

0x9bce,	// (0x0001463f) query_button_pane

0xa283,	// (0x00014cf4) bg_button_pane_cp0028

0x1152,	// (0x0000bbc3) query_button_pane_t1

0x539d,	// (0x0000fe0e) main_tport_pane_ParamLimits

0x96dd,	// (0x0001414e) bg_popup_window_pane_cp01_ParamLimits

0x96dd,	// (0x0001414e) bg_popup_window_pane_cp01

0x96f5,	// (0x00014166) heading_pane_cp08_ParamLimits

0x96f5,	// (0x00014166) heading_pane_cp08

0x9707,	// (0x00014178) heading_pane_cp07_ParamLimits

0x9707,	// (0x00014178) heading_pane_cp07

0x0825,	// (0x0000b296) cell_tport_appsw_pane_g2

0x0002,

0xfddf,	// (0x0001a850) cell_tport_appsw_pane_g

0xba2f,	// (0x000164a0) input_candi_list_open_g1

0xb20f,	// (0x00015c80) list_cale_time_pane_g6_ParamLimits

0xb20f,	// (0x00015c80) list_cale_time_pane_g6

0x6043,	// (0x00010ab4) aid_size_touch_calib_1_ParamLimits

0x6043,	// (0x00010ab4) aid_size_touch_calib_1

0x604f,	// (0x00010ac0) aid_size_touch_calib_2_ParamLimits

0x604f,	// (0x00010ac0) aid_size_touch_calib_2

0x6063,	// (0x00010ad4) aid_size_touch_calib_3_ParamLimits

0x6063,	// (0x00010ad4) aid_size_touch_calib_3

0x607b,	// (0x00010aec) aid_size_touch_calib_4_ParamLimits

0x607b,	// (0x00010aec) aid_size_touch_calib_4

0x608d,	// (0x00010afe) main_touch_calib_button_group_pane_ParamLimits

0x608d,	// (0x00010afe) main_touch_calib_button_group_pane

0x60a3,	// (0x00010b14) main_touch_calib_pane_g1_ParamLimits

0x60af,	// (0x00010b20) main_touch_calib_pane_g2_ParamLimits

0x60bb,	// (0x00010b2c) main_touch_calib_pane_g3_ParamLimits

0x60c7,	// (0x00010b38) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x0001a23c) main_touch_calib_pane_g_ParamLimits

0x60d3,	// (0x00010b44) main_touch_calib_pane_t1_ParamLimits

0x60eb,	// (0x00010b5c) main_touch_calib_pane_t2_ParamLimits

0x6103,	// (0x00010b74) main_touch_calib_pane_t3_ParamLimits

0x6115,	// (0x00010b86) main_touch_calib_pane_t4_ParamLimits

0x6127,	// (0x00010b98) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x0001a245) main_touch_calib_pane_t_ParamLimits

0xd658,	// (0x000180c9) list_single_fp_cale_pane_g3_ParamLimits

0xd658,	// (0x000180c9) list_single_fp_cale_pane_g3

0xa2d6,	// (0x00014d47) bg_button_pane_cp012_ParamLimits

0xa2d6,	// (0x00014d47) bg_vkb2_func_pane_cp03_ParamLimits

0x7ff9,	// (0x00012a6a) cell_vitu2_function_top_pane_g1_ParamLimits

0xa2d6,	// (0x00014d47) bg_vkb2_func_pane_cp04_ParamLimits

0x8c16,	// (0x00013687) main_ncimui_button_group_pane_ParamLimits

0x8c16,	// (0x00013687) main_ncimui_button_group_pane

0x8c4e,	// (0x000136bf) main_ncimui_pane_t3_ParamLimits

0x8c4e,	// (0x000136bf) main_ncimui_pane_t3

0x0a9a,	// (0x0000b50b) phacti_button_group_pane

0x0fdc,	// (0x0000ba4d) aid_size_list_single_double_ParamLimits

0x9b1a,	// (0x0001458b) popup_ezdial_listscroll_window_ParamLimits

0x9b30,	// (0x000145a1) popup_number_entry_window_cp01_ParamLimits

0x9be0,	// (0x00014651) phacti_button_pane_ParamLimits

0x9be0,	// (0x00014651) phacti_button_pane

0xa283,	// (0x00014cf4) bg_button_pane_cp14

0x116f,	// (0x0000bbe0) phacti_button_pane_t1

0x9bef,	// (0x00014660) main_touch_calib_button_pane_ParamLimits

0x9bef,	// (0x00014660) main_touch_calib_button_pane

0xaa41,	// (0x000154b2) bg_button_pane_cp18_ParamLimits

0xaa41,	// (0x000154b2) bg_button_pane_cp18

0x118d,	// (0x0000bbfe) main_touch_calib_button_pane_t1_ParamLimits

0x118d,	// (0x0000bbfe) main_touch_calib_button_pane_t1

0x11a3,	// (0x0000bc14) main_touch_calib_button_pane_t2_ParamLimits

0x11a3,	// (0x0000bc14) main_touch_calib_button_pane_t2

0x0001,

0xfe98,	// (0x0001a909) main_touch_calib_button_pane_t_ParamLimits

0xfe98,	// (0x0001a909) main_touch_calib_button_pane_t

0xa283,	// (0x00014cf4) cell_ncimui_button_pane

0xa283,	// (0x00014cf4) bg_button_pane_cp032

0x11c1,	// (0x0000bc32) cell_ncimui_button_pane_t1

0xdde0,	// (0x00018851) image3_infobar_pane_ParamLimits

0xdde0,	// (0x00018851) image3_infobar_pane

0x8fac,	// (0x00013a1d) fs_bigclock_status_pane_ParamLimits

0x8fac,	// (0x00013a1d) fs_bigclock_status_pane

0x8fb9,	// (0x00013a2a) main_fs_bigclock_clock_pane_ParamLimits

0x8fb9,	// (0x00013a2a) main_fs_bigclock_clock_pane

0x8fc8,	// (0x00013a39) main_fs_bigclock_indi_pane_ParamLimits

0x8fc8,	// (0x00013a39) main_fs_bigclock_indi_pane

0x8fdc,	// (0x00013a4d) main_fs_bigclock_swipe_pane_ParamLimits

0x8fdc,	// (0x00013a4d) main_fs_bigclock_swipe_pane

0xa283,	// (0x00014cf4) main_fs_clock_dumped_data

0xef36,	// (0x000199a7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xef36,	// (0x000199a7) list_single_fs_bigclock_indicator_pane_g1

0xef50,	// (0x000199c1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xef50,	// (0x000199c1) list_single_fs_bigclock_indicator_pane_g2

0xef6a,	// (0x000199db) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xef6a,	// (0x000199db) list_single_fs_bigclock_indicator_pane_g3

0xef84,	// (0x000199f5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xef84,	// (0x000199f5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x0001a746) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x0001a746) list_single_fs_bigclock_indicator_pane_g

0xefa8,	// (0x00019a19) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xefa8,	// (0x00019a19) list_single_fs_bigclock_indicator_pane_t1

0xefd0,	// (0x00019a41) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xefd0,	// (0x00019a41) list_single_fs_bigclock_indicator_pane_t2

0xeff8,	// (0x00019a69) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xeff8,	// (0x00019a69) list_single_fs_bigclock_indicator_pane_t3

0xf020,	// (0x00019a91) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xf020,	// (0x00019a91) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x0001a751) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x0001a751) list_single_fs_bigclock_indicator_pane_t

0x11cf,	// (0x0000bc40) image3_infobar_fav_pane_ParamLimits

0x11cf,	// (0x0000bc40) image3_infobar_fav_pane

0x11df,	// (0x0000bc50) image3_infobar_loc_pane_ParamLimits

0x11df,	// (0x0000bc50) image3_infobar_loc_pane

0x11f3,	// (0x0000bc64) image3_infobar_time_pane_ParamLimits

0x11f3,	// (0x0000bc64) image3_infobar_time_pane

0xd2c7,	// (0x00017d38) image3_infobar_time_pane_g1

0x1203,	// (0x0000bc74) image3_infobar_time_pane_t1

0xd2c7,	// (0x00017d38) image3_infobar_loc_pane_g1

0x1211,	// (0x0000bc82) image3_infobar_loc_pane_g2

0x0001,

0xfe9d,	// (0x0001a90e) image3_infobar_loc_pane_g

0x1219,	// (0x0000bc8a) image3_infobar_loc_pane_t1

0xd2c7,	// (0x00017d38) image3_infobar_fav_pane_g1

0x1227,	// (0x0000bc98) image3_infobar_fav_pane_g2

0x0001,

0xfea2,	// (0x0001a913) image3_infobar_fav_pane_g

0x122f,	// (0x0000bca0) fs_bigclock_status_battery_pane

0x1238,	// (0x0000bca9) fs_bigclock_status_signal_pane

0x1241,	// (0x0000bcb2) fs_bigclock_status_title_pane

0x124a,	// (0x0000bcbb) fs_bigclock_status_signal_pane_g1

0x1253,	// (0x0000bcc4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfea7,	// (0x0001a918) fs_bigclock_status_signal_pane_g

0x125b,	// (0x0000bccc) fs_bigclock_status_battery_pane_g1

0x1264,	// (0x0000bcd5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeac,	// (0x0001a91d) fs_bigclock_status_battery_pane_g

0x126c,	// (0x0000bcdd) fs_bigclock_status_title_pane_t1

0xd2c7,	// (0x00017d38) main_fs_bigclock_clock_pane_g1

0x127a,	// (0x0000bceb) main_fs_bigclock_clock_pane_g2

0x127a,	// (0x0000bceb) main_fs_bigclock_clock_pane_g3

0x127a,	// (0x0000bceb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb1,	// (0x0001a922) main_fs_bigclock_clock_pane_g

0x1282,	// (0x0000bcf3) main_fs_bigclock_clock_pane_t1

0x1290,	// (0x0000bd01) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeba,	// (0x0001a92b) main_fs_bigclock_clock_pane_t

0x129f,	// (0x0000bd10) list_single_fs_bigclock_indicator_pane_ParamLimits

0x129f,	// (0x0000bd10) list_single_fs_bigclock_indicator_pane

0x9c02,	// (0x00014673) list_single_fs_bigclock_pane_ParamLimits

0x9c02,	// (0x00014673) list_single_fs_bigclock_pane

0x1317,	// (0x0000bd88) main_fs_bigclock_indicator_pane_t1

0x1326,	// (0x0000bd97) list_single_fs_bigclock_pane_g1

0x132e,	// (0x0000bd9f) list_single_fs_bigclock_pane_t1

0xd2c7,	// (0x00017d38) main_fs_bigclock_swipe_pane_g1

0x136c,	// (0x0000bddd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfecb,	// (0x0001a93c) main_fs_bigclock_swipe_pane_g

0x1374,	// (0x0000bde5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1374,	// (0x0000bde5) main_fs_bigclock_swipe_pane_t1

0x4426,	// (0x0000ee97) call_type_pane_ParamLimits

0xa283,	// (0x00014cf4) main_btmg_pane

0x0d56,	// (0x0000b7c7) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0d56,	// (0x0000b7c7) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe3e,	// (0x0001a8af) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe3e,	// (0x0001a8af) list_single_cale_mrui_row_pane_g

0x1089,	// (0x0000bafa) list_recal_vselct_arw_lo_pane

0x1091,	// (0x0000bb02) list_recal_vselct_arw_up_pane

0x1080,	// (0x0000baf1) list_recal_vselct_pane

0x1391,	// (0x0000be02) btmg_button_pane

0x9c62,	// (0x000146d3) main_btmg_pane_g1

0xa283,	// (0x00014cf4) bg_button_pane_cp044

0x13a1,	// (0x0000be12) btmg_button_pane_t1

0xcd9c,	// (0x0001780d) aid_listscroll_gen

0xa2d6,	// (0x00014d47) main_cntbar_detail_pane

0x0884,	// (0x0000b2f5) list_cmail_folder_pane

0x0894,	// (0x0000b305) sp_fs_scroll_pane_cp03_ParamLimits

0xe1d8,	// (0x00018c49) list_single_fs_dyc_pane_cp01_ParamLimits

0xe1d8,	// (0x00018c49) list_single_fs_dyc_pane_cp01

0x13c7,	// (0x0000be38) aid_size_cmail_indent

0xe5fc,	// (0x0001906d) list_single_dyc_row_pane_cp01

0x9c92,	// (0x00014703) cntbar_detail_list_pane_ParamLimits

0x9c92,	// (0x00014703) cntbar_detail_list_pane

0x9cd8,	// (0x00014749) main_cntbar_detail_cont_pane_ParamLimits

0x9cd8,	// (0x00014749) main_cntbar_detail_cont_pane

0x9cec,	// (0x0001475d) scroll_pane_cp032_ParamLimits

0x9cec,	// (0x0001475d) scroll_pane_cp032

0x9cf8,	// (0x00014769) cntbar_detail_list_event_pane_ParamLimits

0x9cf8,	// (0x00014769) cntbar_detail_list_event_pane

0x9ca2,	// (0x00014713) cntbar_detail_list_shct_pane

0x1448,	// (0x0000beb9) aid_list_gen

0xab9e,	// (0x0001560f) aid_scroll

0xe548,	// (0x00018fb9) aid_size_touch_scroll_bar

0xf126,	// (0x00019b97) aid_list_double

0x9d09,	// (0x0001477a) aid_list_single

0xe60e,	// (0x0001907f) aid_list_single_lg

0x9d12,	// (0x00014783) aid_list_z_g_a_sm

0x9d1a,	// (0x0001478b) aid_list_z_g_d

0x9d22,	// (0x00014793) aid_txt_z_prm

0x9d30,	// (0x000147a1) aid_txt_z_prm_cp01

0x9d3e,	// (0x000147af) aid_txt_z_sec

0x9d4c,	// (0x000147bd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9d4c,	// (0x000147bd) main_cntbar_detail_cont_pane_g1

0x9d60,	// (0x000147d1) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9d60,	// (0x000147d1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed0,	// (0x0001a941) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed0,	// (0x0001a941) main_cntbar_detail_cont_pane_g

0x14b6,	// (0x0000bf27) main_cntbar_detail_cont_pane_t1

0x14c4,	// (0x0000bf35) main_cntbar_detail_cont_pane_t2

0x14d2,	// (0x0000bf43) main_cntbar_detail_cont_pane_t3

0x0002,

0xfed5,	// (0x0001a946) main_cntbar_detail_cont_pane_t

0x9d70,	// (0x000147e1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9d70,	// (0x000147e1) cell_cntbar_detail_list_shct_pane

0x14f2,	// (0x0000bf63) cntbar_detail_list_shct_pane_g1

0x14fb,	// (0x0000bf6c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfedc,	// (0x0001a94d) cntbar_detail_list_shct_pane_g

0x9d82,	// (0x000147f3) cntbar_detail_list_event_pane_g1_ParamLimits

0x9d82,	// (0x000147f3) cntbar_detail_list_event_pane_g1

0x9d8e,	// (0x000147ff) cntbar_detail_list_event_pane_g2_ParamLimits

0x9d8e,	// (0x000147ff) cntbar_detail_list_event_pane_g2

0x0005,

0xfee1,	// (0x0001a952) cntbar_detail_list_event_pane_g_ParamLimits

0xfee1,	// (0x0001a952) cntbar_detail_list_event_pane_g

0x9dfa,	// (0x0001486b) cntbar_detail_list_event_pane_t1_ParamLimits

0x9dfa,	// (0x0001486b) cntbar_detail_list_event_pane_t1

0x9e0f,	// (0x00014880) cntbar_detail_list_event_pane_t2_ParamLimits

0x9e0f,	// (0x00014880) cntbar_detail_list_event_pane_t2

0x0002,

0xfeee,	// (0x0001a95f) cntbar_detail_list_event_pane_t_ParamLimits

0xfeee,	// (0x0001a95f) cntbar_detail_list_event_pane_t

0xd2c7,	// (0x00017d38) cell_cntbar_detail_list_shct_pane_g1

0xb86d,	// (0x000162de) navi_pane_mv_g3

0xa2d6,	// (0x00014d47) main_cntbar_detail_pane_ParamLimits

0xa283,	// (0x00014cf4) main_notif_wgt_pane

0xdb56,	// (0x000185c7) aid_tch_main_mp4_pane_g4

0xdd60,	// (0x000187d1) popup_slider_window_cp02

0x1080,	// (0x0000baf1) list_recal_day_event_pane

0x9c6a,	// (0x000146db) cntbar_detail_btn_pane_ParamLimits

0x9c6a,	// (0x000146db) cntbar_detail_btn_pane

0x9c7d,	// (0x000146ee) cntbar_detail_btn_pane_cp01_ParamLimits

0x9c7d,	// (0x000146ee) cntbar_detail_btn_pane_cp01

0x9ca2,	// (0x00014713) cntbar_detail_list_shct_pane_ParamLimits

0x9cb2,	// (0x00014723) cntbar_detail_pane_g1_ParamLimits

0x9cb2,	// (0x00014723) cntbar_detail_pane_g1

0x9cc2,	// (0x00014733) cntbar_detail_pane_t1_ParamLimits

0x9cc2,	// (0x00014733) cntbar_detail_pane_t1

0x9d9a,	// (0x0001480b) cntbar_detail_list_event_pane_g3_ParamLimits

0x9d9a,	// (0x0001480b) cntbar_detail_list_event_pane_g3

0x9db2,	// (0x00014823) cntbar_detail_list_event_pane_g4_ParamLimits

0x9db2,	// (0x00014823) cntbar_detail_list_event_pane_g4

0x9dca,	// (0x0001483b) cntbar_detail_list_event_pane_g5_ParamLimits

0x9dca,	// (0x0001483b) cntbar_detail_list_event_pane_g5

0x9de2,	// (0x00014853) cntbar_detail_list_event_pane_g6_ParamLimits

0x9de2,	// (0x00014853) cntbar_detail_list_event_pane_g6

0x9e24,	// (0x00014895) cntbar_detail_list_event_pane_t3_ParamLimits

0x9e24,	// (0x00014895) cntbar_detail_list_event_pane_t3

0x9e36,	// (0x000148a7) popup_notif_wgt_window_ParamLimits

0x9e36,	// (0x000148a7) popup_notif_wgt_window

0x9e4b,	// (0x000148bc) popup_submenu_window_cp01_ParamLimits

0x9e4b,	// (0x000148bc) popup_submenu_window_cp01

0xb8ae,	// (0x0001631f) bg_popup_window_pane_cp10

0x15d2,	// (0x0000c043) listscroll_notif_wgt_pane

0x15da,	// (0x0000c04b) list_notif_wgt_window

0x15e3,	// (0x0000c054) scroll_pane_cp033

0x15ec,	// (0x0000c05d) list_notif_wgt_row_pane_ParamLimits

0x15ec,	// (0x0000c05d) list_notif_wgt_row_pane

0x15fe,	// (0x0000c06f) aid_size_list_notif_wgt_del

0x1607,	// (0x0000c078) list_notif_wgt_row_pane_g1

0x160f,	// (0x0000c080) list_notif_wgt_row_pane_g2

0x1617,	// (0x0000c088) list_notif_wgt_row_pane_g3

0x0002,

0xfef5,	// (0x0001a966) list_notif_wgt_row_pane_g

0x1620,	// (0x0000c091) list_notif_wgt_row_pane_t1

0x162e,	// (0x0000c09f) list_notif_wgt_row_pane_t2

0x163c,	// (0x0000c0ad) list_notif_wgt_row_pane_t3

0x0002,

0xfefc,	// (0x0001a96d) list_notif_wgt_row_pane_t

0xe240,	// (0x00018cb1) list_recal_day_event_pane_g1

0x164a,	// (0x0000c0bb) list_recal_day_event_pane_t1

0xa283,	// (0x00014cf4) bg_button_pane_cp045

0x9e5b,	// (0x000148cc) cntbar_detail_btn_pane_t1

0xcda4,	// (0x00017815) main_callh_pane_ParamLimits

0xcda4,	// (0x00017815) main_callh_pane

0xa283,	// (0x00014cf4) main_coverflow0_pane

0xa283,	// (0x00014cf4) main_wgtman_pane

0x8fe8,	// (0x00013a59) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8fe8,	// (0x00013a59) main_fs_bigclock_unlock_btn_pane

0x0814,	// (0x0000b285) bg_button_pane_cp16

0x082d,	// (0x0000b29e) cell_tport_appsw_pane_g3

0x9e69,	// (0x000148da) cf0_flow_pane_ParamLimits

0x9e69,	// (0x000148da) cf0_flow_pane

0x1676,	// (0x0000c0e7) listscroll_cf0_pane

0x167f,	// (0x0000c0f0) main_cf0_pane_g1

0x9e7e,	// (0x000148ef) main_cf0_pane_t1_ParamLimits

0x9e7e,	// (0x000148ef) main_cf0_pane_t1

0x9e94,	// (0x00014905) main_cf0_pane_t2_ParamLimits

0x9e94,	// (0x00014905) main_cf0_pane_t2

0x0001,

0xff03,	// (0x0001a974) main_cf0_pane_t_ParamLimits

0xff03,	// (0x0001a974) main_cf0_pane_t

0x16ad,	// (0x0000c11e) scroll_pane_cp11

0x9eaa,	// (0x0001491b) cf0_flow_pane_g1

0x9eb2,	// (0x00014923) cf0_flow_pane_g2

0x0001,

0xff08,	// (0x0001a979) cf0_flow_pane_g

0x9eba,	// (0x0001492b) cf0_flow_pane_t1

0xa283,	// (0x00014cf4) main_call6_pane

0xa283,	// (0x00014cf4) main_calllock_pane

0x9ec8,	// (0x00014939) call6_btn_grp_pane_ParamLimits

0x9ec8,	// (0x00014939) call6_btn_grp_pane

0x9ede,	// (0x0001494f) call6_pane_g1_ParamLimits

0x9ede,	// (0x0001494f) call6_pane_g1

0x9ef1,	// (0x00014962) popup_call6_1st_window_ParamLimits

0x9ef1,	// (0x00014962) popup_call6_1st_window

0x9f00,	// (0x00014971) popup_call6_2nd_window_ParamLimits

0x9f00,	// (0x00014971) popup_call6_2nd_window

0x9f0f,	// (0x00014980) cell_call6_btn_pane_ParamLimits

0x9f0f,	// (0x00014980) cell_call6_btn_pane

0xb8ae,	// (0x0001631f) bg_popup_call2_in_pane_cp03

0x1715,	// (0x0000c186) popup_call6_1st_window_g1

0x171d,	// (0x0000c18e) popup_call6_1st_window_g2

0x1725,	// (0x0000c196) popup_call6_1st_window_g3

0x0002,

0xff0d,	// (0x0001a97e) popup_call6_1st_window_g

0x172d,	// (0x0000c19e) popup_call6_1st_window_t1

0x173c,	// (0x0000c1ad) popup_call6_1st_window_t2

0x174a,	// (0x0000c1bb) popup_call6_1st_window_t3

0x0002,

0xff14,	// (0x0001a985) popup_call6_1st_window_t

0xb8ae,	// (0x0001631f) bg_popup_call2_in_pane_cp04

0x1715,	// (0x0000c186) popup_call6_2nd_window_g1

0x171d,	// (0x0000c18e) popup_call6_2nd_window_g2

0x1725,	// (0x0000c196) popup_call6_2nd_window_g3

0x0002,

0xff0d,	// (0x0001a97e) popup_call6_2nd_window_g

0x172d,	// (0x0000c19e) popup_call6_2nd_window_t1

0xa283,	// (0x00014cf4) bg_button_pane_cp15

0x1758,	// (0x0000c1c9) cell_call6_btn_pane_g1

0x1761,	// (0x0000c1d2) cell_call6_btn_pane_t1

0x9f23,	// (0x00014994) listscroll_wgtman_pane_ParamLimits

0x9f23,	// (0x00014994) listscroll_wgtman_pane

0x9f39,	// (0x000149aa) wgtman_btn_pane_ParamLimits

0x9f39,	// (0x000149aa) wgtman_btn_pane

0xb6ef,	// (0x00016160) aid_scroll_copy1

0x1789,	// (0x0000c1fa) list_wgtman_pane

0x9f50,	// (0x000149c1) wgtman_btn_pane_g1_ParamLimits

0x9f50,	// (0x000149c1) wgtman_btn_pane_g1

0x9f64,	// (0x000149d5) wgtman_btn_pane_t1_ParamLimits

0x9f64,	// (0x000149d5) wgtman_btn_pane_t1

0x17b1,	// (0x0000c222) wgtman_btn_pane_t2_ParamLimits

0x17b1,	// (0x0000c222) wgtman_btn_pane_t2

0x0001,

0xff1b,	// (0x0001a98c) wgtman_btn_pane_t_ParamLimits

0xff1b,	// (0x0001a98c) wgtman_btn_pane_t

0x9f7f,	// (0x000149f0) listrow_wgtman_pane_ParamLimits

0x9f7f,	// (0x000149f0) listrow_wgtman_pane

0x9f90,	// (0x00014a01) listrow_wgtman_pane_g1

0x9f99,	// (0x00014a0a) listrow_wgtman_pane_g2

0x0001,

0xff20,	// (0x0001a991) listrow_wgtman_pane_g

0x9fa1,	// (0x00014a12) listrow_wgtman_pane_t1

0x9faf,	// (0x00014a20) listrow_wgtman_pane_t2

0x0001,

0xff25,	// (0x0001a996) listrow_wgtman_pane_t

0x9fbd,	// (0x00014a2e) wait_bar_pane_cp09

0x1809,	// (0x0000c27a) main_calllock_btn_pane

0x1811,	// (0x0000c282) main_calllock_pane_g1

0xa283,	// (0x00014cf4) bg_button_pane_cp17

0x181a,	// (0x0000c28b) main_calllock_btn_pane_g1

0x1823,	// (0x0000c294) main_calllock_btn_pane_t1

0xa283,	// (0x00014cf4) main_dialer3_pane

0xa283,	// (0x00014cf4) main_fmrd2_pane

0xd2c7,	// (0x00017d38) main_fs_bigclock_unlock_btn_pane_g1

0x183a,	// (0x0000c2ab) main_fs_bigclock_unlock_btn_pane_t1

0x9fc5,	// (0x00014a36) area_fmrd2_info_pane_ParamLimits

0x9fc5,	// (0x00014a36) area_fmrd2_info_pane

0x9fd5,	// (0x00014a46) area_fmrd2_visual_pane_ParamLimits

0x9fd5,	// (0x00014a46) area_fmrd2_visual_pane

0x9fe3,	// (0x00014a54) fmrd2_indi_pane_ParamLimits

0x9fe3,	// (0x00014a54) fmrd2_indi_pane

0x9ff0,	// (0x00014a61) area_fmrd2_visual_pane_g1

0x9ff8,	// (0x00014a69) area_fmrd2_visual_pane_t1

0xa006,	// (0x00014a77) area_fmrd2_visual_pane_t2

0xa014,	// (0x00014a85) area_fmrd2_visual_pane_t3

0x0002,

0xff2f,	// (0x0001a9a0) area_fmrd2_visual_pane_t

0xa022,	// (0x00014a93) area_fmrd2_info_pane_g1

0xa02a,	// (0x00014a9b) area_fmrd2_info_pane_t1

0xa038,	// (0x00014aa9) area_fmrd2_info_pane_t2

0xa046,	// (0x00014ab7) area_fmrd2_info_pane_t3

0xa054,	// (0x00014ac5) area_fmrd2_info_pane_t4

0x0003,

0xff36,	// (0x0001a9a7) area_fmrd2_info_pane_t

0xa062,	// (0x00014ad3) fmrd2_indi_pane_t1

0xa070,	// (0x00014ae1) fmrd2_indi_pane_t2

0xa07e,	// (0x00014aef) fmrd2_indi_pane_t3

0x0002,

0xff3f,	// (0x0001a9b0) fmrd2_indi_pane_t

0xef93,	// (0x00019a04) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xef93,	// (0x00019a04) list_single_fs_bigclock_indicator_pane_g5

0xf035,	// (0x00019aa6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xf035,	// (0x00019aa6) list_single_fs_bigclock_indicator_pane_t5

0x98dd,	// (0x0001434e) aid_cell_bcale_month_pane_ParamLimits

0x98dd,	// (0x0001434e) aid_cell_bcale_month_pane

0x98ef,	// (0x00014360) bcale_month_pane_ParamLimits

0x98ef,	// (0x00014360) bcale_month_pane

0x9901,	// (0x00014372) bcale_preview_pane_ParamLimits

0x9901,	// (0x00014372) bcale_preview_pane

0x132e,	// (0x0000bd9f) list_single_fs_bigclock_pane_t1_ParamLimits

0x1348,	// (0x0000bdb9) list_single_fs_bigclock_pane_t2_ParamLimits

0x1348,	// (0x0000bdb9) list_single_fs_bigclock_pane_t2

0x0001,

0xfec6,	// (0x0001a937) list_single_fs_bigclock_pane_t_ParamLimits

0xfec6,	// (0x0001a937) list_single_fs_bigclock_pane_t

0x1832,	// (0x0000c2a3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2a,	// (0x0001a99b) main_fs_bigclock_unlock_btn_pane_g

0xa08c,	// (0x00014afd) aid_dia3_key_size_ParamLimits

0xa08c,	// (0x00014afd) aid_dia3_key_size

0xa09b,	// (0x00014b0c) aid_dia3_listrow_size_ParamLimits

0xa09b,	// (0x00014b0c) aid_dia3_listrow_size

0xa0a7,	// (0x00014b18) dia3_keypad_fun_pane_ParamLimits

0xa0a7,	// (0x00014b18) dia3_keypad_fun_pane

0xa0bb,	// (0x00014b2c) dia3_keypad_num_pane_ParamLimits

0xa0bb,	// (0x00014b2c) dia3_keypad_num_pane

0xa0cc,	// (0x00014b3d) dia3_listscroll_pane_ParamLimits

0xa0cc,	// (0x00014b3d) dia3_listscroll_pane

0xa0dd,	// (0x00014b4e) dia3_numentry_pane_ParamLimits

0xa0dd,	// (0x00014b4e) dia3_numentry_pane

0x1954,	// (0x0000c3c5) dia3_list_pane

0x195d,	// (0x0000c3ce) scroll_pane_cp12

0xa283,	// (0x00014cf4) bg_dia3_numentry_pane

0x1966,	// (0x0000c3d7) dia3_numentry_pane_t1

0xa0ec,	// (0x00014b5d) cell_dia3_key_num_pane

0xa0f4,	// (0x00014b65) cell_dia3_key0_fun_pane_ParamLimits

0xa0f4,	// (0x00014b65) cell_dia3_key0_fun_pane

0xa108,	// (0x00014b79) cell_dia3_key1_fun_pane_ParamLimits

0xa108,	// (0x00014b79) cell_dia3_key1_fun_pane

0xa11f,	// (0x00014b90) dia3_listrow_pane

0xecce,	// (0x0001973f) bg_dia3_numentry_pane_g1

0xa283,	// (0x00014cf4) bg_button_pane_cp21

0x19a0,	// (0x0000c411) cell_dia3_key_num_pane_t1

0x19ae,	// (0x0000c41f) cell_dia3_key_num_pane_t2

0x19bd,	// (0x0000c42e) cell_dia3_key_num_pane_t3

0x19cc,	// (0x0000c43d) cell_dia3_key_num_pane_t4

0x0003,

0xff46,	// (0x0001a9b7) cell_dia3_key_num_pane_t

0xa283,	// (0x00014cf4) bg_button_pane_cp19

0x19db,	// (0x0000c44c) cell_dia3_key0_fun_pane_g1

0xa283,	// (0x00014cf4) bg_button_pane_cp20

0xa128,	// (0x00014b99) cell_dia3_key1_fun_pane_g1

0xa130,	// (0x00014ba1) area_left_week_number_pane

0x145a,	// (0x0000becb) area_top_day_name_pane

0xa139,	// (0x00014baa) frame_month_view_pane

0xa141,	// (0x00014bb2) grid_month_view_pane

0xa14b,	// (0x00014bbc) cell_top_day_name_pane_ParamLimits

0xa14b,	// (0x00014bbc) cell_top_day_name_pane

0xa161,	// (0x00014bd2) cell_area_left_week_number_pane_ParamLimits

0xa161,	// (0x00014bd2) cell_area_left_week_number_pane

0xa175,	// (0x00014be6) cell_month_view_pane_ParamLimits

0xa175,	// (0x00014be6) cell_month_view_pane

0x1a54,	// (0x0000c4c5) frm_month_g1

0xa190,	// (0x00014c01) frm_month_g2

0xa198,	// (0x00014c09) frm_month_g3

0xa1a0,	// (0x00014c11) frm_month_g4

0xa1a8,	// (0x00014c19) frm_month_g5

0xa1b0,	// (0x00014c21) frm_month_g6

0xa1b8,	// (0x00014c29) frm_month_g7

0x1a8d,	// (0x0000c4fe) frm_month_g8

0xa1c0,	// (0x00014c31) frm_month_g9

0xa1c9,	// (0x00014c3a) frm_month_g10

0xa1d2,	// (0x00014c43) frm_month_g11

0xa1db,	// (0x00014c4c) frm_month_g12

0xa1e4,	// (0x00014c55) frm_month_g13

0xa1ed,	// (0x00014c5e) frm_month_g14

0xa1f6,	// (0x00014c67) frm_month_g15

0xa1ff,	// (0x00014c70) frm_month_g16

0x000f,

0xff4f,	// (0x0001a9c0) frm_month_g

0xa208,	// (0x00014c79) cell_top_day_name_pane_t1

0xa217,	// (0x00014c88) cell_area_left_week_number_pane_g1

0xa208,	// (0x00014c79) cell_area_left_week_number_pane_t1

0xd2c7,	// (0x00017d38) cell_month_view_pane_g1

0xa21f,	// (0x00014c90) cell_month_view_pane_t1

0xa283,	// (0x00014cf4) main_fps_pane

0x0276,	// (0x0000ace7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0276,	// (0x0000ace7) cmail_ddmenu_btn02_pane_cp1

0x0292,	// (0x0000ad03) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0292,	// (0x0000ad03) cmail_ddmenu_btn02_pane_cp2

0x9b6a,	// (0x000145db) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9b6a,	// (0x000145db) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe77,	// (0x0001a8e8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe77,	// (0x0001a8e8) cmail_ddmenu_btn02_pane_g

0x9b8b,	// (0x000145fc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9b8b,	// (0x000145fc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe7c,	// (0x0001a8ed) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe7c,	// (0x0001a8ed) cmail_ddmenu_btn02_pane_t

0xa22e,	// (0x00014c9f) fps_text_pane_ParamLimits

0xa22e,	// (0x00014c9f) fps_text_pane

0xa244,	// (0x00014cb5) main_fps_pane_g1_ParamLimits

0xa244,	// (0x00014cb5) main_fps_pane_g1

0xa25a,	// (0x00014ccb) wait_bar_pane_cp010_ParamLimits

0xa25a,	// (0x00014ccb) wait_bar_pane_cp010

0xa26b,	// (0x00014cdc) fps_text_pane_t1_ParamLimits

0xa26b,	// (0x00014cdc) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
