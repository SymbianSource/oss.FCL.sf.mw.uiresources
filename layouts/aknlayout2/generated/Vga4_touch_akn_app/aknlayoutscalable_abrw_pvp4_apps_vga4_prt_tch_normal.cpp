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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001b2c5 };

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
0x4d48,	// (0x0002000d) Screen

0x4d54,	// (0x00020019) application_window

0x4d60,	// (0x00020025) area_bottom_pane_ParamLimits

0x4d60,	// (0x00020025) area_bottom_pane

0x3496,	// (0x0001e75b) area_top_pane_ParamLimits

0x3496,	// (0x0001e75b) area_top_pane

0x34fa,	// (0x0001e7bf) call_video_uplink_pane_ParamLimits

0x34fa,	// (0x0001e7bf) call_video_uplink_pane

0x3539,	// (0x0001e7fe) main_pane_ParamLimits

0x3539,	// (0x0001e7fe) main_pane

0xe4dd,	// (0x000297a2) context_pane

0x7559,	// (0x0002281e) navi_pane

0x7582,	// (0x00022847) popup_cale_events_window_ParamLimits

0x7582,	// (0x00022847) popup_cale_events_window

0xe4f0,	// (0x000297b5) popup_mup_playback_window

0x759a,	// (0x0002285f) signal_pane

0xc76d,	// (0x00027a32) main_browser_pane

0xc961,	// (0x00027c26) main_burst_pane

0x3b29,	// (0x0001edee) main_calc_pane

0xe4d1,	// (0x00029796) main_cale_day_pane

0x3873,	// (0x0001eb38) main_cale_month_pane

0xe4d1,	// (0x00029796) main_cale_week_pane

0xc961,	// (0x00027c26) main_call_pane

0xc3fb,	// (0x000276c0) main_call_poc_pane

0xc961,	// (0x00027c26) main_camera_pane

0xc961,	// (0x00027c26) main_chi_dic_pane

0xd0f2,	// (0x000283b7) main_clock_pane

0xc3fb,	// (0x000276c0) main_fmradio_pane

0xc961,	// (0x00027c26) main_graph_messa_pane

0xc3fb,	// (0x000276c0) main_help_pane

0xc76d,	// (0x00027a32) main_im_pane

0xc656,	// (0x0002791b) main_image_pane_ParamLimits

0xc656,	// (0x0002791b) main_image_pane

0xc3fb,	// (0x000276c0) main_location2_pane

0xc961,	// (0x00027c26) main_location_pane

0xc656,	// (0x0002791b) main_messa_pane

0xc3fb,	// (0x000276c0) main_mp2_pane

0xc961,	// (0x00027c26) main_mp_pane

0xc3fb,	// (0x000276c0) main_msg_pane

0xc3fb,	// (0x000276c0) main_mup_eq_pane

0xc3fb,	// (0x000276c0) main_mup_pane

0xc76d,	// (0x00027a32) main_notes_pane

0xc3fb,	// (0x000276c0) main_pec_pane

0xc3fb,	// (0x000276c0) main_phob_pane

0xc3fb,	// (0x000276c0) main_pinb_pane

0xc3fb,	// (0x000276c0) main_postcard_pane

0xc3fb,	// (0x000276c0) main_qdial_pane

0xc961,	// (0x00027c26) main_skin_pane

0xc3fb,	// (0x000276c0) main_smil2_pane

0xc961,	// (0x00027c26) main_smil_pane

0xc961,	// (0x00027c26) main_video_pane

0xc961,	// (0x00027c26) main_video_tele_pane

0xc656,	// (0x0002791b) main_viewer_pane_ParamLimits

0xc656,	// (0x0002791b) main_viewer_pane

0xc961,	// (0x00027c26) main_vorec_pane

0x3b77,	// (0x0001ee3c) popup_blid_sat_info_window_ParamLimits

0x3b77,	// (0x0001ee3c) popup_blid_sat_info_window

0x3b9d,	// (0x0001ee62) popup_dyc_status_message_window_ParamLimits

0x3b9d,	// (0x0001ee62) popup_dyc_status_message_window

0x3bad,	// (0x0001ee72) popup_grid_large_graphic_window_ParamLimits

0x3bad,	// (0x0001ee72) popup_grid_large_graphic_window

0x3c42,	// (0x0001ef07) popup_loc_request_window_ParamLimits

0x3c42,	// (0x0001ef07) popup_loc_request_window

0x3c9b,	// (0x0001ef60) popup_wml_address_window_ParamLimits

0x3c9b,	// (0x0001ef60) popup_wml_address_window

0x743b,	// (0x00022700) call_muted_g1

0x712b,	// (0x000223f0) popup_call_audio_conf_window_ParamLimits

0x712b,	// (0x000223f0) popup_call_audio_conf_window

0x744b,	// (0x00022710) popup_call_audio_first_window_ParamLimits

0x744b,	// (0x00022710) popup_call_audio_first_window

0x748b,	// (0x00022750) popup_call_audio_in_window_ParamLimits

0x748b,	// (0x00022750) popup_call_audio_in_window

0x74af,	// (0x00022774) popup_call_audio_out_window_ParamLimits

0x74af,	// (0x00022774) popup_call_audio_out_window

0x74d1,	// (0x00022796) popup_call_audio_second_window_ParamLimits

0x74d1,	// (0x00022796) popup_call_audio_second_window

0x7501,	// (0x000227c6) popup_call_audio_wait_window_ParamLimits

0x7501,	// (0x000227c6) popup_call_audio_wait_window

0x7522,	// (0x000227e7) popup_number_entry_window_ParamLimits

0x7522,	// (0x000227e7) popup_number_entry_window

0xbfa5,	// (0x0002726a) bg_popup_call_pane_cp05_ParamLimits

0xbfa5,	// (0x0002726a) bg_popup_call_pane_cp05

0xbfc5,	// (0x0002728a) popup_number_entry_window_t1

0xbfd8,	// (0x0002729d) popup_number_entry_window_t2

0xbfea,	// (0x000272af) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0002a2e2) popup_number_entry_window_t

0xc031,	// (0x000272f6) text_title_cp2

0xc044,	// (0x00027309) bg_popup_call_pane_cp_ParamLimits

0xc044,	// (0x00027309) bg_popup_call_pane_cp

0xc052,	// (0x00027317) call_thumbnail_pane

0xc05a,	// (0x0002731f) popup_call_audio_in_window_g1_ParamLimits

0xc05a,	// (0x0002731f) popup_call_audio_in_window_g1

0xc066,	// (0x0002732b) popup_call_audio_in_window_g2_ParamLimits

0xc066,	// (0x0002732b) popup_call_audio_in_window_g2

0xc072,	// (0x00027337) popup_call_audio_in_window_g3_ParamLimits

0xc072,	// (0x00027337) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0002a2eb) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0002a2eb) popup_call_audio_in_window_g

0xc07e,	// (0x00027343) popup_call_audio_in_window_t1_ParamLimits

0xc07e,	// (0x00027343) popup_call_audio_in_window_t1

0xc09a,	// (0x0002735f) popup_call_audio_in_window_t2_ParamLimits

0xc09a,	// (0x0002735f) popup_call_audio_in_window_t2

0xc0b6,	// (0x0002737b) popup_call_audio_in_window_t3_ParamLimits

0xc0b6,	// (0x0002737b) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0002a2f2) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0002a2f2) popup_call_audio_in_window_t

0xc044,	// (0x00027309) bg_popup_call_pane_cp01_ParamLimits

0xc044,	// (0x00027309) bg_popup_call_pane_cp01

0xc052,	// (0x00027317) call_thumbnail_pane_cp02

0xc0c9,	// (0x0002738e) call_type_pane_cp022

0xc0d1,	// (0x00027396) popup_call_audio_out_window_g1_ParamLimits

0xc0d1,	// (0x00027396) popup_call_audio_out_window_g1

0xc0e3,	// (0x000273a8) popup_call_audio_out_window_g2_ParamLimits

0xc0e3,	// (0x000273a8) popup_call_audio_out_window_g2

0xc0ef,	// (0x000273b4) popup_call_audio_out_window_g3_ParamLimits

0xc0ef,	// (0x000273b4) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0002a2f9) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0002a2f9) popup_call_audio_out_window_g

0xc101,	// (0x000273c6) popup_call_audio_out_window_t1_ParamLimits

0xc101,	// (0x000273c6) popup_call_audio_out_window_t1

0xc119,	// (0x000273de) popup_call_audio_out_window_t2_ParamLimits

0xc119,	// (0x000273de) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0002a300) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0002a300) popup_call_audio_out_window_t

0xc12e,	// (0x000273f3) bg_popup_call_pane_ParamLimits

0xc12e,	// (0x000273f3) bg_popup_call_pane

0x4da1,	// (0x00020066) call_thumbnail_pane_cp_ParamLimits

0x4da1,	// (0x00020066) call_thumbnail_pane_cp

0xc1b2,	// (0x00027477) call_type_pane_cp01_ParamLimits

0xc1b2,	// (0x00027477) call_type_pane_cp01

0xc1f6,	// (0x000274bb) popup_call_audio_first_window_g1_ParamLimits

0xc1f6,	// (0x000274bb) popup_call_audio_first_window_g1

0xc242,	// (0x00027507) popup_call_audio_first_window_g2_ParamLimits

0xc242,	// (0x00027507) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0002a305) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0002a305) popup_call_audio_first_window_g

0xc286,	// (0x0002754b) popup_call_audio_first_window_t1_ParamLimits

0xc286,	// (0x0002754b) popup_call_audio_first_window_t1

0xc332,	// (0x000275f7) popup_call_audio_first_window_t4_ParamLimits

0xc332,	// (0x000275f7) popup_call_audio_first_window_t4

0xc3be,	// (0x00027683) popup_call_audio_first_window_t5_ParamLimits

0xc3be,	// (0x00027683) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0002a30a) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0002a30a) popup_call_audio_first_window_t

0xc3fb,	// (0x000276c0) bg_popup_call_pane_cp02

0xc405,	// (0x000276ca) call_type_pane_cp023

0xc40d,	// (0x000276d2) popup_call_audio_wait_window_g1

0xc415,	// (0x000276da) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0002a311) popup_call_audio_wait_window_g

0xc41d,	// (0x000276e2) popup_call_audio_wait_window_t3

0xc42b,	// (0x000276f0) bg_popup_call_pane_cp03_ParamLimits

0xc42b,	// (0x000276f0) bg_popup_call_pane_cp03

0xc48b,	// (0x00027750) call_thumbnail_pane_cp011_ParamLimits

0xc48b,	// (0x00027750) call_thumbnail_pane_cp011

0xc497,	// (0x0002775c) call_type_pane_cp034_ParamLimits

0xc497,	// (0x0002775c) call_type_pane_cp034

0xc4d3,	// (0x00027798) popup_call_audio_second_window_g1_ParamLimits

0xc4d3,	// (0x00027798) popup_call_audio_second_window_g1

0xc50f,	// (0x000277d4) popup_call_audio_second_window_g2_ParamLimits

0xc50f,	// (0x000277d4) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0002a316) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0002a316) popup_call_audio_second_window_g

0xc54b,	// (0x00027810) popup_call_audio_second_window_t1_ParamLimits

0xc54b,	// (0x00027810) popup_call_audio_second_window_t1

0xc5cc,	// (0x00027891) popup_call_audio_second_window_t2_ParamLimits

0xc5cc,	// (0x00027891) popup_call_audio_second_window_t2

0xc602,	// (0x000278c7) popup_call_audio_second_window_t3_ParamLimits

0xc602,	// (0x000278c7) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0002a31b) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0002a31b) popup_call_audio_second_window_t

0xc3fb,	// (0x000276c0) bg_popup_call_pane_cp04

0xc638,	// (0x000278fd) list_conf_pane

0xc640,	// (0x00027905) popup_call_audio_conf_window_t1

0xc64e,	// (0x00027913) call_thumbnail_pane_g1

0xc656,	// (0x0002791b) bg_pinb_pane_ParamLimits

0xc656,	// (0x0002791b) bg_pinb_pane

0xc664,	// (0x00027929) find_pinb_pane

0xc656,	// (0x0002791b) listscroll_pinb_pane_ParamLimits

0xc656,	// (0x0002791b) listscroll_pinb_pane

0xc66e,	// (0x00027933) pinb_bg_pane_g1

0xc66e,	// (0x00027933) pinb_bg_pane_g2

0xc66e,	// (0x00027933) pinb_bg_pane_g3

0xc66e,	// (0x00027933) pinb_bg_pane_g4

0xc66e,	// (0x00027933) pinb_bg_pane_g5

0xc66e,	// (0x00027933) pinb_bg_pane_g6

0xc66e,	// (0x00027933) pinb_bg_pane_g7

0xc66e,	// (0x00027933) pinb_bg_pane_g8

0xc66e,	// (0x00027933) pinb_bg_pane_g9

0xc66e,	// (0x00027933) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0002a322) pinb_bg_pane_g

0xbf9b,	// (0x00027260) grid_pinb_pane

0xbf9b,	// (0x00027260) list_pinb_pane

0xc3ed,	// (0x000276b2) scroll_pane_cp01_ParamLimits

0xc3ed,	// (0x000276b2) scroll_pane_cp01

0xc678,	// (0x0002793d) find_pinb_pane_g1_ParamLimits

0xc678,	// (0x0002793d) find_pinb_pane_g1

0xc690,	// (0x00027955) find_pinb_pane_t1

0xc6a2,	// (0x00027967) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0002a33c) find_pinb_pane_t

0xc6b7,	// (0x0002797c) input_focus_pane_cp01_ParamLimits

0xc6b7,	// (0x0002797c) input_focus_pane_cp01

0xc6c3,	// (0x00027988) cell_pinb_pane_ParamLimits

0xc6c3,	// (0x00027988) cell_pinb_pane

0xc6d1,	// (0x00027996) cell_pinb_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) cell_pinb_pane_g1

0xc6df,	// (0x000279a4) cell_pinb_pane_g2_ParamLimits

0xc6df,	// (0x000279a4) cell_pinb_pane_g2

0xc6df,	// (0x000279a4) cell_pinb_pane_g3_ParamLimits

0xc6df,	// (0x000279a4) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0002a341) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0002a341) cell_pinb_pane_g

0xc3fb,	// (0x000276c0) grid_highlight_pane_cp01

0xc6c3,	// (0x00027988) list_pinb_item_pane_ParamLimits

0xc6c3,	// (0x00027988) list_pinb_item_pane

0xbf9b,	// (0x00027260) list_highlight_pane_cp02

0xc6ed,	// (0x000279b2) list_pinb_item_pane_g1_ParamLimits

0xc6ed,	// (0x000279b2) list_pinb_item_pane_g1

0xc6df,	// (0x000279a4) list_pinb_item_pane_g2_ParamLimits

0xc6df,	// (0x000279a4) list_pinb_item_pane_g2

0xc6d1,	// (0x00027996) list_pinb_item_pane_g3_ParamLimits

0xc6d1,	// (0x00027996) list_pinb_item_pane_g3

0xc6df,	// (0x000279a4) list_pinb_item_pane_g4_ParamLimits

0xc6df,	// (0x000279a4) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0002a348) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0002a348) list_pinb_item_pane_g

0xc6fb,	// (0x000279c0) list_pinb_item_pane_t1_ParamLimits

0xc6fb,	// (0x000279c0) list_pinb_item_pane_t1

0x3726,	// (0x0001e9eb) calc_display_pane

0x3744,	// (0x0001ea09) calc_paper_pane

0x3760,	// (0x0001ea25) grid_calc_pane

0xbf9b,	// (0x00027260) bg_list_pane_cp01

0xc70f,	// (0x000279d4) clock_g1

0xc70f,	// (0x000279d4) clock_g2

0x0001,

0xf08c,	// (0x0002a351) clock_g

0xc719,	// (0x000279de) clock_t1_ParamLimits

0xc719,	// (0x000279de) clock_t1

0xc72d,	// (0x000279f2) clock_t2_ParamLimits

0xc72d,	// (0x000279f2) clock_t2

0xc72d,	// (0x000279f2) clock_t3_ParamLimits

0xc72d,	// (0x000279f2) clock_t3

0xc72d,	// (0x000279f2) clock_t4_ParamLimits

0xc72d,	// (0x000279f2) clock_t4

0xc719,	// (0x000279de) clock_t5_ParamLimits

0xc719,	// (0x000279de) clock_t5

0xc72d,	// (0x000279f2) clock_t6_ParamLimits

0xc72d,	// (0x000279f2) clock_t6

0xc72d,	// (0x000279f2) clock_t7_ParamLimits

0xc72d,	// (0x000279f2) clock_t7

0xc72d,	// (0x000279f2) clock_t8_ParamLimits

0xc72d,	// (0x000279f2) clock_t8

0xc72d,	// (0x000279f2) clock_t9_ParamLimits

0xc72d,	// (0x000279f2) clock_t9

0x0008,

0xf091,	// (0x0002a356) clock_t_ParamLimits

0xf091,	// (0x0002a356) clock_t

0xbf9b,	// (0x00027260) popup_clock_analogue_window_cp02

0xbf9b,	// (0x00027260) popup_clock_digital_window_cp01

0xc3fb,	// (0x000276c0) listscroll_help_pane

0xc3fb,	// (0x000276c0) phob_pre_status_pane

0xc741,	// (0x00027a06) grid_qdial_pane

0xc656,	// (0x0002791b) listscroll_mce_pane

0xc656,	// (0x0002791b) bg_notes_pane

0xc74b,	// (0x00027a10) list_notes_pane

0x4dc5,	// (0x0002008a) scroll_pane_cp06

0xc759,	// (0x00027a1e) bg_calc_paper_pane

0x378c,	// (0x0001ea51) list_calc_pane

0xc76d,	// (0x00027a32) bg_calc_display_pane

0x37a6,	// (0x0001ea6b) calc_display_pane_t1

0x37bb,	// (0x0001ea80) calc_display_pane_t2

0x37d0,	// (0x0001ea95) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0002a369) calc_display_pane_t

0x37e2,	// (0x0001eaa7) cell_calc_pane_ParamLimits

0x37e2,	// (0x0001eaa7) cell_calc_pane

0xc779,	// (0x00027a3e) bg_calc_paper_pane_g1

0xc785,	// (0x00027a4a) bg_calc_paper_pane_g2

0xc791,	// (0x00027a56) bg_calc_paper_pane_g3

0xc79d,	// (0x00027a62) bg_calc_paper_pane_g4

0xc7a9,	// (0x00027a6e) bg_calc_paper_pane_g5

0x4dd4,	// (0x00020099) bg_calc_paper_pane_g6

0x4de5,	// (0x000200aa) bg_calc_paper_pane_g7

0x4df6,	// (0x000200bb) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0002a370) bg_calc_paper_pane_g

0x4e07,	// (0x000200cc) calc_bg_paper_pane_g9

0x4e18,	// (0x000200dd) list_calc_item_pane_ParamLimits

0x4e18,	// (0x000200dd) list_calc_item_pane

0xc7b5,	// (0x00027a7a) list_calc_item_pane_g1

0x3811,	// (0x0001ead6) list_calc_item_pane_t1_ParamLimits

0x3811,	// (0x0001ead6) list_calc_item_pane_t1

0x3823,	// (0x0001eae8) list_calc_item_pane_t2_ParamLimits

0x3823,	// (0x0001eae8) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0002a381) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0002a381) list_calc_item_pane_t

0xc66e,	// (0x00027933) cell_calc_pane_g1

0xc7c2,	// (0x00027a87) grid_highlight_pane_cp02

0x076e,	// (0x0001ba33) bg_calc_display_pane_g1

0x3853,	// (0x0001eb18) bg_calc_display_pane_g2

0x0765,	// (0x0001ba2a) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0002a38b) bg_calc_display_pane_g

0x385d,	// (0x0001eb22) cell_qdial_pane_ParamLimits

0x385d,	// (0x0001eb22) cell_qdial_pane

0x4e39,	// (0x000200fe) cell_qdial_pane_g1_ParamLimits

0x4e39,	// (0x000200fe) cell_qdial_pane_g1

0x4e46,	// (0x0002010b) cell_qdial_pane_g2_ParamLimits

0x4e46,	// (0x0002010b) cell_qdial_pane_g2

0xc7e4,	// (0x00027aa9) cell_qdial_pane_g3_ParamLimits

0xc7e4,	// (0x00027aa9) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0002a392) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0002a392) cell_qdial_pane_g

0x4e64,	// (0x00020129) cell_qdial_pane_t1_ParamLimits

0x4e64,	// (0x00020129) cell_qdial_pane_t1

0x4e7c,	// (0x00020141) cell_qdial_pane_t2_ParamLimits

0x4e7c,	// (0x00020141) cell_qdial_pane_t2

0x4e8f,	// (0x00020154) cell_qdial_pane_t3_ParamLimits

0x4e8f,	// (0x00020154) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0002a39b) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0002a39b) cell_qdial_pane_t

0xc3fb,	// (0x000276c0) grid_highlight_pane_cp04

0xc7f0,	// (0x00027ab5) thumbnail_qdial_pane_ParamLimits

0xc7f0,	// (0x00027ab5) thumbnail_qdial_pane

0xc855,	// (0x00027b1a) list_help_pane

0xc85e,	// (0x00027b23) scroll_pane_cp02

0x4ea2,	// (0x00020167) help_list_pane_t1_ParamLimits

0x4ea2,	// (0x00020167) help_list_pane_t1

0xc867,	// (0x00027b2c) bg_notes_pane_g2

0xc86f,	// (0x00027b34) bg_notes_pane_g3

0xc877,	// (0x00027b3c) notes_bg_pane_g1

0xc87f,	// (0x00027b44) notes_bg_pane_g4

0xc887,	// (0x00027b4c) notes_bg_pane_g5

0xc88f,	// (0x00027b54) notes_bg_pane_g6

0xc897,	// (0x00027b5c) notes_bg_pane_g7

0xc89f,	// (0x00027b64) notes_bg_pane_g8

0xc8a7,	// (0x00027b6c) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0002a3b9) notes_bg_pane_g

0x4ec9,	// (0x0002018e) list_notes_text_pane_ParamLimits

0x4ec9,	// (0x0002018e) list_notes_text_pane

0xc8af,	// (0x00027b74) list_notes_text_pane_g1

0xc8b8,	// (0x00027b7d) list_notes_text_pane_t1

0x3873,	// (0x0001eb38) listscroll_cale_week_pane

0x4f11,	// (0x000201d6) bg_cale_heading_pane

0x4f3a,	// (0x000201ff) bg_cale_pane_cp01

0x4f5c,	// (0x00020221) cale_week_corner_pane

0x4f7b,	// (0x00020240) cale_week_day_heading_pane

0x4fa9,	// (0x0002026e) cale_week_scroll_pane_g1

0x4fcd,	// (0x00020292) cale_week_scroll_pane_g2

0x4fe5,	// (0x000202aa) cale_week_scroll_pane_g3

0x4ffd,	// (0x000202c2) cale_week_scroll_pane_g4

0x5015,	// (0x000202da) cale_week_scroll_pane_g5

0x502d,	// (0x000202f2) cale_week_scroll_pane_g6

0x504d,	// (0x00020312) cale_week_scroll_pane_g7

0x506d,	// (0x00020332) cale_week_scroll_pane_g8

0x508d,	// (0x00020352) cale_week_scroll_pane_g9

0x50aa,	// (0x0002036f) cale_week_scroll_pane_g10

0x50c7,	// (0x0002038c) cale_week_scroll_pane_g11

0x50e6,	// (0x000203ab) cale_week_scroll_pane_g12

0x510b,	// (0x000203d0) cale_week_scroll_pane_g13

0x5134,	// (0x000203f9) cale_week_scroll_pane_g14

0x515d,	// (0x00020422) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0002a3c8) cale_week_scroll_pane_g

0x51a6,	// (0x0002046b) cale_week_time_pane

0x51c6,	// (0x0002048b) grid_cale_week_pane

0xc8e9,	// (0x00027bae) scroll_pane_cp08

0x51f7,	// (0x000204bc) cell_cale_week_pane_ParamLimits

0x51f7,	// (0x000204bc) cell_cale_week_pane

0x5287,	// (0x0002054c) cale_week_day_heading_pane_t1

0x52af,	// (0x00020574) cale_week_day_heading_pane_t2

0x52dc,	// (0x000205a1) cale_week_day_heading_pane_t3

0x5309,	// (0x000205ce) cale_week_day_heading_pane_t4

0x5336,	// (0x000205fb) cale_week_day_heading_pane_t5

0x5363,	// (0x00020628) cale_week_day_heading_pane_t6

0x5390,	// (0x00020655) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0002a3e9) cale_week_day_heading_pane_t

0xc906,	// (0x00027bcb) bg_cale_side_pane

0x388e,	// (0x0001eb53) cale_week_time_pane_t1

0x38b2,	// (0x0001eb77) cale_week_time_pane_t2

0x38d6,	// (0x0001eb9b) cale_week_time_pane_t3

0x38fa,	// (0x0001ebbf) cale_week_time_pane_t4

0x391e,	// (0x0001ebe3) cale_week_time_pane_t5

0x3944,	// (0x0001ec09) cale_week_time_pane_t6

0x396c,	// (0x0001ec31) cale_week_time_pane_t7

0x3998,	// (0x0001ec5d) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0002a3f8) cale_week_time_pane_t

0x53b8,	// (0x0002067d) cell_cale_week_pane_g2

0x53dc,	// (0x000206a1) cell_cale_week_pane_g3_ParamLimits

0x53dc,	// (0x000206a1) cell_cale_week_pane_g3

0xc914,	// (0x00027bd9) grid_highlight_pane_cp07

0xc91c,	// (0x00027be1) listscroll_gms_pane

0xc926,	// (0x00027beb) grid_gms_pane

0xc92f,	// (0x00027bf4) listscroll_gms_pane_g1

0xc937,	// (0x00027bfc) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0002a409) listscroll_gms_pane_g

0x53f4,	// (0x000206b9) scroll_pane_cp010

0x53ff,	// (0x000206c4) cell_gms_pane_ParamLimits

0x53ff,	// (0x000206c4) cell_gms_pane

0x5412,	// (0x000206d7) cell_gms_pane_g1

0xc93f,	// (0x00027c04) cell_gms_pane_g2

0xc947,	// (0x00027c0c) cell_gms_pane_g3

0xc950,	// (0x00027c15) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0002a40e) cell_gms_pane_g

0xc959,	// (0x00027c1e) grid_highlight_pane_cp09

0x73bf,	// (0x00022684) phob_pre_status_pane_g1

0x73c7,	// (0x0002268c) phob_pre_status_pane_g2

0x73cf,	// (0x00022694) phob_pre_status_pane_g3

0x73d7,	// (0x0002269c) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x0002a7b4) phob_pre_status_pane_g

0x73e7,	// (0x000226ac) phob_pre_status_pane_t1

0x73f7,	// (0x000226bc) phob_pre_status_pane_t2

0x7407,	// (0x000226cc) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x0002a7bf) phob_pre_status_pane_t

0xc961,	// (0x00027c26) bg_list_pane_cp05

0x5422,	// (0x000206e7) grid_vorec_pane

0x542c,	// (0x000206f1) vorec_t1

0x543a,	// (0x000206ff) vorec_t2

0x5448,	// (0x0002070d) vorec_t3

0x5456,	// (0x0002071b) vorec_t4

0x4d23,	// (0x0001ffe8) vorec_t5

0x4d31,	// (0x0001fff6) vorec_t6

0x0004,

0xf152,	// (0x0002a417) vorec_t

0x4d3f,	// (0x00020004) wait_bar_pane_cp01

0x5472,	// (0x00020737) cell_vorec_pane_ParamLimits

0x5472,	// (0x00020737) cell_vorec_pane

0x39c8,	// (0x0001ec8d) cell_vorec_pane_g1

0xc3fb,	// (0x000276c0) grid_highlight_pane_cp05

0xc6c3,	// (0x00027988) cams_zoom_pane

0xc6c3,	// (0x00027988) image_vga_pane

0xc6df,	// (0x000279a4) main_camera_pane_g1

0xc6df,	// (0x000279a4) main_camera_pane_g2

0xc6df,	// (0x000279a4) main_camera_pane_g3

0xc6df,	// (0x000279a4) main_camera_pane_g4

0xc6df,	// (0x000279a4) main_camera_pane_g5

0xc6df,	// (0x000279a4) main_camera_pane_g6

0xc6df,	// (0x000279a4) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0002a422) main_camera_pane_g

0xc72d,	// (0x000279f2) main_camera_pane_t1

0xc72d,	// (0x000279f2) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0002a433) main_camera_pane_t

0x5487,	// (0x0002074c) cams_zoom_pane_cp_ParamLimits

0x5487,	// (0x0002074c) cams_zoom_pane_cp

0x54b5,	// (0x0002077a) image_cif_pane_ParamLimits

0x54b5,	// (0x0002077a) image_cif_pane

0xbf9b,	// (0x00027260) image_subqcif_pane

0x54c3,	// (0x00020788) main_video_pane_g1_ParamLimits

0x54c3,	// (0x00020788) main_video_pane_g1

0x54eb,	// (0x000207b0) main_video_pane_g2_ParamLimits

0x54eb,	// (0x000207b0) main_video_pane_g2

0x551e,	// (0x000207e3) main_video_pane_g3_ParamLimits

0x551e,	// (0x000207e3) main_video_pane_g3

0x551e,	// (0x000207e3) main_video_pane_g4_ParamLimits

0x551e,	// (0x000207e3) main_video_pane_g4

0x554c,	// (0x00020811) main_video_pane_g5_ParamLimits

0x554c,	// (0x00020811) main_video_pane_g5

0xc969,	// (0x00027c2e) main_video_pane_g6_ParamLimits

0xc969,	// (0x00027c2e) main_video_pane_g6

0x0006,

0xf173,	// (0x0002a438) main_video_pane_g_ParamLimits

0xf173,	// (0x0002a438) main_video_pane_g

0x5568,	// (0x0002082d) main_video_pane_t1_ParamLimits

0x5568,	// (0x0002082d) main_video_pane_t1

0xc70f,	// (0x000279d4) cams_zoom_pane_g1

0xc70f,	// (0x000279d4) cams_zoom_pane_g2

0xc70f,	// (0x000279d4) cams_zoom_pane_g3

0xc70f,	// (0x000279d4) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0002a447) cams_zoom_pane_g

0xc6c3,	// (0x00027988) grid_cams_pane

0xc6c3,	// (0x00027988) linegrid_cams_pane

0x55a2,	// (0x00020867) cell_cams_pane_ParamLimits

0x55a2,	// (0x00020867) cell_cams_pane

0xbf9b,	// (0x00027260) cams_burst_image_pane

0xc70f,	// (0x000279d4) cell_cams_pane_g1

0xbf9b,	// (0x00027260) grid_highlight_pane_cp03

0xc66e,	// (0x00027933) mp_bg_pane_g1

0xbf9b,	// (0x00027260) bg_list_pane_cp03

0xbf9b,	// (0x00027260) bg_mp_pane

0xbf9b,	// (0x00027260) grid_mp_pane

0xc70f,	// (0x000279d4) media_player_g1

0xce7c,	// (0x00028141) media_player_t1

0xce7c,	// (0x00028141) media_player_t2

0xce7c,	// (0x00028141) media_player_t3

0xce7c,	// (0x00028141) media_player_t4

0xce7c,	// (0x00028141) media_player_t5

0xce7c,	// (0x00028141) media_player_t6

0xce7c,	// (0x00028141) media_player_t7

0x0006,

0xf4d9,	// (0x0002a79e) media_player_t

0xbf9b,	// (0x00027260) wait_bar_pane_cp02

0xf4be,	// (0x0002a783) main_usb_pane_t

0xd0f2,	// (0x000283b7) cell_mp_pane

0xc66e,	// (0x00027933) cell_mp_pane_g1

0xc3fb,	// (0x000276c0) grid_highlight_pane_cp06

0xc983,	// (0x00027c48) grid_skin_colour_pane

0xc98b,	// (0x00027c50) list_highlight_pane_cp03

0x55b7,	// (0x0002087c) skin_g1

0xc993,	// (0x00027c58) skin_t1

0xc9a2,	// (0x00027c67) skin_t2

0x0001,

0xf1b0,	// (0x0002a475) skin_t

0x55c1,	// (0x00020886) cell_skin_colour_pane_ParamLimits

0x55c1,	// (0x00020886) cell_skin_colour_pane

0xc9b0,	// (0x00027c75) cell_skin_colour_pane_g1

0x5641,	// (0x00020906) call_video_g1_ParamLimits

0x5641,	// (0x00020906) call_video_g1

0x5651,	// (0x00020916) call_video_g2_ParamLimits

0x5651,	// (0x00020916) call_video_g2

0x0001,

0xf1b5,	// (0x0002a47a) call_video_g_ParamLimits

0xf1b5,	// (0x0002a47a) call_video_g

0x56a1,	// (0x00020966) call_video_uplink_pane_cp1_ParamLimits

0x56a1,	// (0x00020966) call_video_uplink_pane_cp1

0xc9c2,	// (0x00027c87) call_video_uplink_pane_cp2

0x575d,	// (0x00020a22) video_down_crop_pane_ParamLimits

0x575d,	// (0x00020a22) video_down_crop_pane

0x584e,	// (0x00020b13) video_down_pane_ParamLimits

0x584e,	// (0x00020b13) video_down_pane

0xc9ca,	// (0x00027c8f) video_down_subqcif_pane_ParamLimits

0xc9ca,	// (0x00027c8f) video_down_subqcif_pane

0xc9e4,	// (0x00027ca9) video_down_subqcif_pane_cp_ParamLimits

0xc9e4,	// (0x00027ca9) video_down_subqcif_pane_cp

0xca0a,	// (0x00027ccf) im_reading_pane_ParamLimits

0xca0a,	// (0x00027ccf) im_reading_pane

0x596b,	// (0x00020c30) im_writing_pane_ParamLimits

0x596b,	// (0x00020c30) im_writing_pane

0x5989,	// (0x00020c4e) im_reading_pane_t1

0xca24,	// (0x00027ce9) list_im_pane

0xca35,	// (0x00027cfa) scroll_pane_cp07

0x59cb,	// (0x00020c90) im_writing_pane_t1_ParamLimits

0x59cb,	// (0x00020c90) im_writing_pane_t1

0xca4e,	// (0x00027d13) im_writing_pane_t2_ParamLimits

0xca4e,	// (0x00027d13) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0002a484) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0002a484) im_writing_pane_t

0xc3fb,	// (0x000276c0) input_focus_pane_cp04

0xc3fb,	// (0x000276c0) input_focus_pane_cp05

0x59dd,	// (0x00020ca2) list_im_single_pane_ParamLimits

0x59dd,	// (0x00020ca2) list_im_single_pane

0xca6b,	// (0x00027d30) list_single_im_pane_t1

0xc961,	// (0x00027c26) blid_accuracy_pane

0xc961,	// (0x00027c26) blid_compass_pane

0xe489,	// (0x0002974e) main_location_t1

0xe489,	// (0x0002974e) main_location_t2

0xe489,	// (0x0002974e) main_location_t3

0x0002,

0xf4e8,	// (0x0002a7ad) main_location_t

0xc3fb,	// (0x000276c0) aid_levels_location

0xc66e,	// (0x00027933) blid_accuracy_pane_g1

0xc66e,	// (0x00027933) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x0002a4d8) blid_accuracy_pane_g

0xcaa5,	// (0x00027d6a) wml_content_pane

0xcae3,	// (0x00027da8) wml_button_pane_ParamLimits

0xcae3,	// (0x00027da8) wml_button_pane

0x59f6,	// (0x00020cbb) wml_list_single_large_pane_ParamLimits

0x59f6,	// (0x00020cbb) wml_list_single_large_pane

0x5a18,	// (0x00020cdd) wml_list_single_medium_pane_ParamLimits

0x5a18,	// (0x00020cdd) wml_list_single_medium_pane

0x5a3b,	// (0x00020d00) wml_list_single_small_pane_ParamLimits

0x5a3b,	// (0x00020d00) wml_list_single_small_pane

0xcaf7,	// (0x00027dbc) wml_selection_box_pane_ParamLimits

0xcaf7,	// (0x00027dbc) wml_selection_box_pane

0xcb0a,	// (0x00027dcf) wml_list_single_pane_t1

0xcb19,	// (0x00027dde) wml_list_single_medium_pane_t1

0xcb28,	// (0x00027ded) wml_list_single_large_pane_t1

0xcb37,	// (0x00027dfc) input_focus_pane_cp02_ParamLimits

0xcb37,	// (0x00027dfc) input_focus_pane_cp02

0xcb4a,	// (0x00027e0f) wml_selection_box_pane_g1

0xcb53,	// (0x00027e18) wml_selection_box_pane_t1_ParamLimits

0xcb53,	// (0x00027e18) wml_selection_box_pane_t1

0xc656,	// (0x0002791b) bg_wml_button_pane_ParamLimits

0xc656,	// (0x0002791b) bg_wml_button_pane

0xcb6b,	// (0x00027e30) wml_button_pane_g1

0xcb73,	// (0x00027e38) wml_button_pane_t1

0xcb6b,	// (0x00027e30) wml_button_bg_pane_g1

0xcb83,	// (0x00027e48) wml_button_bg_pane_g2

0xcb8b,	// (0x00027e50) wml_button_bg_pane_g3

0xcb93,	// (0x00027e58) wml_button_bg_pane_g4

0xcb9b,	// (0x00027e60) wml_button_bg_pane_g5

0xcba3,	// (0x00027e68) wml_button_bg_pane_g6

0xcbab,	// (0x00027e70) wml_button_bg_pane_g7

0xcbb3,	// (0x00027e78) wml_button_bg_pane_g8

0xcbbb,	// (0x00027e80) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0002a489) wml_button_bg_pane_g

0x5a63,	// (0x00020d28) bg_list_pane_cp02

0xcbc3,	// (0x00027e88) mce_header_pane_ParamLimits

0xcbc3,	// (0x00027e88) mce_header_pane

0xcbd9,	// (0x00027e9e) mce_icon_pane

0xcbd9,	// (0x00027e9e) mce_image_pane

0xcbe2,	// (0x00027ea7) mce_text_pane_ParamLimits

0xcbe2,	// (0x00027ea7) mce_text_pane

0x5a6d,	// (0x00020d32) scroll_pane_cp03

0xcadb,	// (0x00027da0) scroll_pane_cp04

0xcbf5,	// (0x00027eba) scroll_pane_cp05_ParamLimits

0xcbf5,	// (0x00027eba) scroll_pane_cp05

0x5a77,	// (0x00020d3c) mce_header_field_pane_ParamLimits

0x5a77,	// (0x00020d3c) mce_header_field_pane

0x5a99,	// (0x00020d5e) mce_header_field_pane_2_ParamLimits

0x5a99,	// (0x00020d5e) mce_header_field_pane_2

0x5aaf,	// (0x00020d74) mce_header_field_pane_3

0x5ab7,	// (0x00020d7c) list_single_mce_message_pane_ParamLimits

0x5ab7,	// (0x00020d7c) list_single_mce_message_pane

0x5ad6,	// (0x00020d9b) list_single_mce_smart_pane_ParamLimits

0x5ad6,	// (0x00020d9b) list_single_mce_smart_pane

0xcc0a,	// (0x00027ecf) input_focus_pane_cp03

0xcc13,	// (0x00027ed8) list_header_data_pane

0x5b00,	// (0x00020dc5) mce_header_field_pane_t1

0x5b10,	// (0x00020dd5) list_single_mce_header_pane_ParamLimits

0x5b10,	// (0x00020dd5) list_single_mce_header_pane

0xcc1b,	// (0x00027ee0) list_single_mce_header_pane_t1

0xcc2a,	// (0x00027eef) list_single_mce_message_pane_g1

0xcc32,	// (0x00027ef7) list_single_mce_message_pane_t1

0x5b54,	// (0x00020e19) bg_cale_heading_pane_cp01_ParamLimits

0x5b54,	// (0x00020e19) bg_cale_heading_pane_cp01

0xcc40,	// (0x00027f05) bg_cale_pane_cp02_ParamLimits

0xcc40,	// (0x00027f05) bg_cale_pane_cp02

0x5ba6,	// (0x00020e6b) cale_month_corner_pane

0x5bc5,	// (0x00020e8a) cale_month_day_heading_pane_ParamLimits

0x5bc5,	// (0x00020e8a) cale_month_day_heading_pane

0x5c27,	// (0x00020eec) cale_month_pane_g1_ParamLimits

0x5c27,	// (0x00020eec) cale_month_pane_g1

0x5c6e,	// (0x00020f33) cale_month_pane_g2_ParamLimits

0x5c6e,	// (0x00020f33) cale_month_pane_g2

0x5ca6,	// (0x00020f6b) cale_month_pane_g3_ParamLimits

0x5ca6,	// (0x00020f6b) cale_month_pane_g3

0x5cfa,	// (0x00020fbf) cale_month_pane_g4_ParamLimits

0x5cfa,	// (0x00020fbf) cale_month_pane_g4

0x5d4e,	// (0x00021013) cale_month_pane_g5_ParamLimits

0x5d4e,	// (0x00021013) cale_month_pane_g5

0x5da2,	// (0x00021067) cale_month_pane_g6_ParamLimits

0x5da2,	// (0x00021067) cale_month_pane_g6

0x5e06,	// (0x000210cb) cale_month_pane_g7_ParamLimits

0x5e06,	// (0x000210cb) cale_month_pane_g7

0x5e6a,	// (0x0002112f) cale_month_pane_g8_ParamLimits

0x5e6a,	// (0x0002112f) cale_month_pane_g8

0x5ece,	// (0x00021193) cale_month_pane_g9_ParamLimits

0x5ece,	// (0x00021193) cale_month_pane_g9

0x5f28,	// (0x000211ed) cale_month_pane_g10_ParamLimits

0x5f28,	// (0x000211ed) cale_month_pane_g10

0x5f7a,	// (0x0002123f) cale_month_pane_g11_ParamLimits

0x5f7a,	// (0x0002123f) cale_month_pane_g11

0x5fc8,	// (0x0002128d) cale_month_pane_g12_ParamLimits

0x5fc8,	// (0x0002128d) cale_month_pane_g12

0x6018,	// (0x000212dd) cale_month_pane_g13_ParamLimits

0x6018,	// (0x000212dd) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0002a49c) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0002a49c) cale_month_pane_g

0x6068,	// (0x0002132d) cale_month_week_pane

0x6088,	// (0x0002134d) grid_cale_month_pane_ParamLimits

0x6088,	// (0x0002134d) grid_cale_month_pane

0x60e1,	// (0x000213a6) cale_month_day_heading_pane_t1

0x6163,	// (0x00021428) cale_month_day_heading_pane_t2

0x61dc,	// (0x000214a1) cale_month_day_heading_pane_t3

0x6255,	// (0x0002151a) cale_month_day_heading_pane_t4

0x62ce,	// (0x00021593) cale_month_day_heading_pane_t5

0x634f,	// (0x00021614) cale_month_day_heading_pane_t6

0x63d8,	// (0x0002169d) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0002a4b7) cale_month_day_heading_pane_t

0xc906,	// (0x00027bcb) bg_cale_side_pane_cp01

0x6461,	// (0x00021726) cale_month_week_pane_t1

0x647a,	// (0x0002173f) cale_month_week_pane_t2

0x6493,	// (0x00021758) cale_month_week_pane_t3

0x64ac,	// (0x00021771) cale_month_week_pane_t4

0x64c5,	// (0x0002178a) cale_month_week_pane_t5

0x64e2,	// (0x000217a7) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0002a4c6) cale_month_week_pane_t

0x6505,	// (0x000217ca) cell_cale_month_pane_ParamLimits

0x6505,	// (0x000217ca) cell_cale_month_pane

0x39d2,	// (0x0001ec97) cell_cale_month_pane_g1

0x39de,	// (0x0001eca3) cell_cale_month_pane_t1_ParamLimits

0x39de,	// (0x0001eca3) cell_cale_month_pane_t1

0xc914,	// (0x00027bd9) grid_highlight_pane_cp08

0xc66e,	// (0x00027933) main_smil_g1

0x6633,	// (0x000218f8) smil_status_pane

0xcc7f,	// (0x00027f44) smil_text_pane

0xc8a7,	// (0x00027b6c) bg_popup_call3_rect_pane_g8

0xc89f,	// (0x00027b64) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x0002a4dd) bg_popup_call3_rect_pane_g

0xe552,	// (0x00029817) smil_status_volume_pane_g1

0xcc89,	// (0x00027f4e) smil_status_pane_t1

0x3cd4,	// (0x0001ef99) volume_smil_pane

0xcca0,	// (0x00027f65) list_smil_text_pane

0x6646,	// (0x0002190b) scroll_pane_cp011

0x6651,	// (0x00021916) smil_text_list_pane_t1_ParamLimits

0x6651,	// (0x00021916) smil_text_list_pane_t1

0x3a0a,	// (0x0001eccf) aid_volume_smil_ParamLimits

0x3a0a,	// (0x0001eccf) aid_volume_smil

0xc66e,	// (0x00027933) smil_volume_pane_g1

0xc66e,	// (0x00027933) smil_volume_pane_g2

0x0001,

0xf213,	// (0x0002a4d8) smil_volume_pane_g

0x66a5,	// (0x0002196a) listscroll_cale_day_pane

0xccaa,	// (0x00027f6f) bg_cale_pane

0xccc2,	// (0x00027f87) list_cale_pane

0xcce5,	// (0x00027faa) scroll_pane_cp09

0xc877,	// (0x00027b3c) cale_bg_pane_g1

0xc86f,	// (0x00027b34) cale_bg_pane_g2

0xc867,	// (0x00027b2c) cale_bg_pane_g3

0xc887,	// (0x00027b4c) cale_bg_pane_g4

0xc87f,	// (0x00027b44) cale_bg_pane_g5

0xc88f,	// (0x00027b54) cale_bg_pane_g6

0xc897,	// (0x00027b5c) cale_bg_pane_g7

0xc8a7,	// (0x00027b6c) cale_bg_pane_g8

0xc89f,	// (0x00027b64) cale_bg_pane_g9

0x0008,

0xf218,	// (0x0002a4dd) cale_bg_pane_g

0xccf6,	// (0x00027fbb) list_cale_time_pane_ParamLimits

0xccf6,	// (0x00027fbb) list_cale_time_pane

0xcd0d,	// (0x00027fd2) list_cale_time_pane_g1_ParamLimits

0xcd0d,	// (0x00027fd2) list_cale_time_pane_g1

0xcd19,	// (0x00027fde) list_cale_time_pane_g2_ParamLimits

0xcd19,	// (0x00027fde) list_cale_time_pane_g2

0x66bf,	// (0x00021984) list_cale_time_pane_g3_ParamLimits

0x66bf,	// (0x00021984) list_cale_time_pane_g3

0x66cd,	// (0x00021992) list_cale_time_pane_g4_ParamLimits

0x66cd,	// (0x00021992) list_cale_time_pane_g4

0x66db,	// (0x000219a0) list_cale_time_pane_g5_ParamLimits

0x66db,	// (0x000219a0) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x0002a4f0) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x0002a4f0) list_cale_time_pane_g

0xcd33,	// (0x00027ff8) list_cale_time_pane_t1_ParamLimits

0xcd33,	// (0x00027ff8) list_cale_time_pane_t1

0xcd5b,	// (0x00028020) list_cale_time_pane_t2_ParamLimits

0xcd5b,	// (0x00028020) list_cale_time_pane_t2

0x693e,	// (0x00021c03) aid_blid_cardinal_pane

0x6980,	// (0x00021c45) compass_pane_t4

0xcd83,	// (0x00028048) list_cale_time_pane_t4_ParamLimits

0xcd83,	// (0x00028048) list_cale_time_pane_t4

0x698e,	// (0x00021c53) compass_pane_t5

0x699e,	// (0x00021c63) compass_pane_t6

0x69ac,	// (0x00021c71) compass_pane_t7

0xd1a2,	// (0x00028467) navi_pane_cc_t1

0xd2ef,	// (0x000285b4) aid_phob_thumbnail_center_pane

0x6ef4,	// (0x000221b9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x0002a4fd) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x0002a4fd) list_cale_time_pane_t

0xc044,	// (0x00027309) bg_popup_window_pane_cp02_ParamLimits

0xc044,	// (0x00027309) bg_popup_window_pane_cp02

0xcdab,	// (0x00028070) heading_pane_cp01_ParamLimits

0xcdab,	// (0x00028070) heading_pane_cp01

0xcdb7,	// (0x0002807c) loc_req_pane_ParamLimits

0xcdb7,	// (0x0002807c) loc_req_pane

0xcdc9,	// (0x0002808e) loc_type_pane_ParamLimits

0xcdc9,	// (0x0002808e) loc_type_pane

0xcddb,	// (0x000280a0) loc_type_pane_t1_ParamLimits

0xcddb,	// (0x000280a0) loc_type_pane_t1

0xcded,	// (0x000280b2) loc_type_pane_t2_ParamLimits

0xcded,	// (0x000280b2) loc_type_pane_t2

0xcdff,	// (0x000280c4) loc_type_pane_t3_ParamLimits

0xcdff,	// (0x000280c4) loc_type_pane_t3

0x0002,

0xf23f,	// (0x0002a504) loc_type_pane_t_ParamLimits

0xf23f,	// (0x0002a504) loc_type_pane_t

0xce11,	// (0x000280d6) list_loc_req_pane

0xce1b,	// (0x000280e0) scroll_pane_cp012

0x66e9,	// (0x000219ae) list_single_loc_request_popup_menu_pane_ParamLimits

0x66e9,	// (0x000219ae) list_single_loc_request_popup_menu_pane

0xce26,	// (0x000280eb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xce26,	// (0x000280eb) list_single_loc_request_popup_menu_pane_g1

0xce32,	// (0x000280f7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xce32,	// (0x000280f7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x0002a50b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x0002a50b) list_single_loc_request_popup_menu_pane_g

0xce3e,	// (0x00028103) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xce3e,	// (0x00028103) list_single_loc_request_popup_menu_pane_t1

0x66fb,	// (0x000219c0) bg_popup_window_pane_cp03_ParamLimits

0x66fb,	// (0x000219c0) bg_popup_window_pane_cp03

0x6709,	// (0x000219ce) heading_loc_req_pane_ParamLimits

0x6709,	// (0x000219ce) heading_loc_req_pane

0x6715,	// (0x000219da) popup_dyc_status_message_window_g1_ParamLimits

0x6715,	// (0x000219da) popup_dyc_status_message_window_g1

0x6721,	// (0x000219e6) popup_dyc_status_message_window_t1_ParamLimits

0x6721,	// (0x000219e6) popup_dyc_status_message_window_t1

0x6733,	// (0x000219f8) popup_dyc_status_message_window_t2_ParamLimits

0x6733,	// (0x000219f8) popup_dyc_status_message_window_t2

0x6745,	// (0x00021a0a) popup_dyc_status_message_window_t3_ParamLimits

0x6745,	// (0x00021a0a) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x0002a510) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x0002a510) popup_dyc_status_message_window_t

0xc3fb,	// (0x000276c0) bg_heading_pane_cp01

0xce54,	// (0x00028119) heading_loc_req_pane_g1

0xce5c,	// (0x00028121) heading_loc_req_pane_g2

0xce64,	// (0x00028129) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x0002a517) heading_loc_req_pane_g

0xce6c,	// (0x00028131) heading_loc_req_pane_t1

0xce8c,	// (0x00028151) bg_popup_sub_pane_cp01_ParamLimits

0xce8c,	// (0x00028151) bg_popup_sub_pane_cp01

0xce9a,	// (0x0002815f) popup_cale_events_window_g1_ParamLimits

0xce9a,	// (0x0002815f) popup_cale_events_window_g1

0xceba,	// (0x0002817f) popup_cale_events_window_g2_ParamLimits

0xceba,	// (0x0002817f) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x0002a539) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x0002a539) popup_cale_events_window_g

0xceda,	// (0x0002819f) popup_cale_events_window_t1_ParamLimits

0xceda,	// (0x0002819f) popup_cale_events_window_t1

0xceec,	// (0x000281b1) popup_cale_events_window_t2_ParamLimits

0xceec,	// (0x000281b1) popup_cale_events_window_t2

0xcf2a,	// (0x000281ef) popup_cale_events_window_t3_ParamLimits

0xcf2a,	// (0x000281ef) popup_cale_events_window_t3

0xcf64,	// (0x00028229) popup_cale_events_window_t4_ParamLimits

0xcf64,	// (0x00028229) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x0002a53e) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x0002a53e) popup_cale_events_window_t

0x676f,	// (0x00021a34) call_type_pane

0xd974,	// (0x00028c39) popup_call_status_window_g1

0x677b,	// (0x00021a40) popup_call_status_window_g2

0x6787,	// (0x00021a4c) popup_call_status_window_g3

0x0002,

0xf282,	// (0x0002a547) popup_call_status_window_g

0xcf9a,	// (0x0002825f) call_type_pane_g1

0xcfa3,	// (0x00028268) call_type_pane_g2

0x0001,

0xf289,	// (0x0002a54e) call_type_pane_g

0xc3fb,	// (0x000276c0) bg_popup_sub_pane_cp02

0xcfac,	// (0x00028271) listscroll_popup_wml_pane

0xcfb4,	// (0x00028279) list_wml_pane

0xcfbe,	// (0x00028283) scroll_pane_cp013

0xcfc9,	// (0x0002828e) list_single_graphic_popup_wml_pane_ParamLimits

0xcfc9,	// (0x0002828e) list_single_graphic_popup_wml_pane

0xc66e,	// (0x00027933) list_single_graphic_popup_wml_pane_g1

0xcfe9,	// (0x000282ae) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x0002a553) list_single_graphic_popup_wml_pane_g

0xcff1,	// (0x000282b6) list_single_graphic_popup_wml_pane_t1

0xd007,	// (0x000282cc) aid_call_pane

0xc64e,	// (0x00027913) popup_clock_analogue_window_g1

0xc64e,	// (0x00027913) popup_clock_analogue_window_g2

0x3a2c,	// (0x0001ecf1) popup_clock_analogue_window_g3

0x3a2c,	// (0x0001ecf1) popup_clock_analogue_window_g4

0xc66e,	// (0x00027933) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x0002a558) popup_clock_analogue_window_g

0x3a34,	// (0x0001ecf9) popup_clock_analogue_window_t1

0x3a42,	// (0x0001ed07) clock_digital_number_pane_ParamLimits

0x3a42,	// (0x0001ed07) clock_digital_number_pane

0x3a4e,	// (0x0001ed13) clock_digital_number_pane_cp02_ParamLimits

0x3a4e,	// (0x0001ed13) clock_digital_number_pane_cp02

0x3a5a,	// (0x0001ed1f) clock_digital_number_pane_cp03_ParamLimits

0x3a5a,	// (0x0001ed1f) clock_digital_number_pane_cp03

0x3a66,	// (0x0001ed2b) clock_digital_number_pane_cp04_ParamLimits

0x3a66,	// (0x0001ed2b) clock_digital_number_pane_cp04

0x3a72,	// (0x0001ed37) clock_digital_separator_pane_ParamLimits

0x3a72,	// (0x0001ed37) clock_digital_separator_pane

0x3a7e,	// (0x0001ed43) popup_clock_digital_window_t1

0xc66e,	// (0x00027933) clock_digital_number_pane_g1

0xc66e,	// (0x00027933) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x0002a4d8) clock_digital_number_pane_g

0xc66e,	// (0x00027933) clock_digital_separator_pane_g1

0xc66e,	// (0x00027933) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x0002a4d8) clock_digital_separator_pane_g

0xc3fb,	// (0x000276c0) bg_popup_window_pane_cp04

0xd00f,	// (0x000282d4) heading_pane_cp03

0xc961,	// (0x00027c26) listscroll_popup_gms_pane

0xc3fb,	// (0x000276c0) grid_large_graphic_popup_pane

0xd017,	// (0x000282dc) listscroll_popup_gms_pane_g1

0xd020,	// (0x000282e5) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x0002a563) listscroll_popup_gms_pane_g

0xd029,	// (0x000282ee) scroll_pane_cp014

0xc6c3,	// (0x00027988) cell_large_graphic_popup_pane_ParamLimits

0xc6c3,	// (0x00027988) cell_large_graphic_popup_pane

0xc6d1,	// (0x00027996) cell_large_graphic_popup_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) cell_large_graphic_popup_pane_g1

0xd032,	// (0x000282f7) cell_large_graphic_popup_pane_g2_ParamLimits

0xd032,	// (0x000282f7) cell_large_graphic_popup_pane_g2

0xd040,	// (0x00028305) cell_large_graphic_popup_pane_g3_ParamLimits

0xd040,	// (0x00028305) cell_large_graphic_popup_pane_g3

0xd04e,	// (0x00028313) cell_large_graphic_popup_pane_g4_ParamLimits

0xd04e,	// (0x00028313) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x0002a568) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x0002a568) cell_large_graphic_popup_pane_g

0xc3fb,	// (0x000276c0) grid_highlight_pane_cp010

0xc66e,	// (0x00027933) bg_popup_call_pane_g1

0xd05f,	// (0x00028324) list_single_graphic_popup_conf_pane_ParamLimits

0xd05f,	// (0x00028324) list_single_graphic_popup_conf_pane

0xd071,	// (0x00028336) list_highlight_pane_cp01

0xd07a,	// (0x0002833f) list_single_graphic_popup_conf_pane_g1

0xd082,	// (0x00028347) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x0002a571) list_single_graphic_popup_conf_pane_g

0xd08a,	// (0x0002834f) list_single_graphic_popup_conf_pane_t1

0xd098,	// (0x0002835d) linegrid_cams_pane_g1

0x6793,	// (0x00021a58) linegrid_cams_pane_g2

0xc947,	// (0x00027c0c) linegrid_cams_pane_g3

0xd0a1,	// (0x00028366) linegrid_cams_pane_g4

0x679c,	// (0x00021a61) linegrid_cams_pane_g5

0x67a5,	// (0x00021a6a) linegrid_cams_pane_g6

0xc950,	// (0x00027c15) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x0002a576) linegrid_cams_pane_g

0xd0aa,	// (0x0002836f) popup_clock_analogue_window

0xd0aa,	// (0x0002836f) popup_clock_digital_window

0xc3fb,	// (0x000276c0) popup_phob_thumbnail_window

0xc66e,	// (0x00027933) call_video_uplink_pane_g1

0xd0b3,	// (0x00028378) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x0002a585) call_video_uplink_pane_g

0xd0bb,	// (0x00028380) video_uplink_pane

0xd0c3,	// (0x00028388) mce_image_pane_g1

0x67b0,	// (0x00021a75) mce_image_pane_g2

0x67ba,	// (0x00021a7f) mce_image_pane_g3

0x67c4,	// (0x00021a89) mce_image_pane_g4

0x67cc,	// (0x00021a91) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x0002a58a) mce_image_pane_g

0xd0cd,	// (0x00028392) control_top_pane_stacon_cp01_ParamLimits

0xd0cd,	// (0x00028392) control_top_pane_stacon_cp01

0xd0e1,	// (0x000283a6) uni_indicator_pane_stacon_cp01_ParamLimits

0xd0e1,	// (0x000283a6) uni_indicator_pane_stacon_cp01

0xd0f2,	// (0x000283b7) bg_popup_sub_pane_cp03

0x67d4,	// (0x00021a99) chi_dic_find_pane

0x67dc,	// (0x00021aa1) listscroll_chi_dic_pane

0x67e5,	// (0x00021aaa) main_pane_chidic_g1

0x67f8,	// (0x00021abd) chi_dic_find_pane_t1

0xd0fc,	// (0x000283c1) find_chidic_pane

0xd105,	// (0x000283ca) chi_dic_list_pane_ParamLimits

0xd105,	// (0x000283ca) chi_dic_list_pane

0xd116,	// (0x000283db) scroll_pane_cp020

0x6806,	// (0x00021acb) find_chidic_pane_t1

0xc3fb,	// (0x000276c0) input_focus_pane_cp06

0x6815,	// (0x00021ada) list_chi_dic_pane_ParamLimits

0x6815,	// (0x00021ada) list_chi_dic_pane

0x682a,	// (0x00021aef) list_chi_dic_pane_t1_ParamLimits

0x682a,	// (0x00021aef) list_chi_dic_pane_t1

0xc3fb,	// (0x000276c0) list_highlight_pane_cp020

0xd11e,	// (0x000283e3) bg_cale_heading_pane_g1

0x683d,	// (0x00021b02) bg_cale_heading_pane_g2

0x6845,	// (0x00021b0a) bg_cale_heading_pane_g3

0x684d,	// (0x00021b12) bg_cale_heading_pane_g4

0x6857,	// (0x00021b1c) bg_cale_heading_pane_g5

0x6861,	// (0x00021b26) bg_cale_heading_pane_g6

0x6869,	// (0x00021b2e) bg_cale_heading_pane_g7

0x6871,	// (0x00021b36) bg_cale_heading_pane_g8

0x687b,	// (0x00021b40) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x0002a595) bg_cale_heading_pane_g

0xd11e,	// (0x000283e3) bg_cale_side_pane_g1

0x6885,	// (0x00021b4a) bg_cale_side_pane_g2

0x688f,	// (0x00021b54) bg_cale_side_pane_g3

0x6899,	// (0x00021b5e) bg_cale_side_pane_g4

0x68a3,	// (0x00021b68) bg_cale_side_pane_g5

0x68ad,	// (0x00021b72) bg_cale_side_pane_g6

0x68b7,	// (0x00021b7c) bg_cale_side_pane_g7

0x68c1,	// (0x00021b86) bg_cale_side_pane_g8

0x68c9,	// (0x00021b8e) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x0002a5a8) bg_cale_side_pane_g

0x68d1,	// (0x00021b96) popup_call_status_window_ParamLimits

0x68d1,	// (0x00021b96) popup_call_status_window

0xd126,	// (0x000283eb) stacon_top_pane

0xd12e,	// (0x000283f3) status_pane_ParamLimits

0xd12e,	// (0x000283f3) status_pane

0xd143,	// (0x00028408) status_small_pane

0xd14b,	// (0x00028410) control_pane

0xc3fb,	// (0x000276c0) stacon_bottom_pane

0xd153,	// (0x00028418) list_single_mce_smart_pane_t1_ParamLimits

0xd153,	// (0x00028418) list_single_mce_smart_pane_t1

0xd166,	// (0x0002842b) list_single_mce_smart_pane_t2_ParamLimits

0xd166,	// (0x0002842b) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x0002a5bb) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x0002a5bb) list_single_mce_smart_pane_t

0x68dd,	// (0x00021ba2) compass_pane

0x68e8,	// (0x00021bad) main_location2_pane_t1

0x68fe,	// (0x00021bc3) main_location2_pane_t2

0x6914,	// (0x00021bd9) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x0002a5c0) main_location2_pane_t

0xd185,	// (0x0002844a) compass_pane_g1_ParamLimits

0xd185,	// (0x0002844a) compass_pane_g1

0x6962,	// (0x00021c27) compass_pane_t1

0x6971,	// (0x00021c36) compass_pane_t2

0x0005,

0xf304,	// (0x0002a5c9) compass_pane_t

0x69bc,	// (0x00021c81) text_secondary_cp61

0xd199,	// (0x0002845e) navi_pane_cams_g5

0xd1bc,	// (0x00028481) navi_pane_im_t1

0xd1ca,	// (0x0002848f) navi_pane_mp_g1_ParamLimits

0xd1ca,	// (0x0002848f) navi_pane_mp_g1

0xd1de,	// (0x000284a3) navi_pane_mp_g2_ParamLimits

0xd1de,	// (0x000284a3) navi_pane_mp_g2

0xd1ea,	// (0x000284af) navi_pane_mp_g3_ParamLimits

0xd1ea,	// (0x000284af) navi_pane_mp_g3

0x0002,

0xf318,	// (0x0002a5dd) navi_pane_mp_g_ParamLimits

0xf318,	// (0x0002a5dd) navi_pane_mp_g

0xd1f6,	// (0x000284bb) navi_pane_mp_t1

0xd204,	// (0x000284c9) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x0002a5e4) navi_pane_mp_t

0xd240,	// (0x00028505) navi_pane_vt_g1

0xd1f6,	// (0x000284bb) navi_pane_vt_t1

0xd248,	// (0x0002850d) navi_slider_pane

0xc961,	// (0x00027c26) zooming_pane

0xd250,	// (0x00028515) navi_slider_pane_g1

0x3a9b,	// (0x0001ed60) navi_slider_pane_g2

0x0006,

0xf326,	// (0x0002a5eb) navi_slider_pane_g

0xd274,	// (0x00028539) aid_levels_zoom

0xd27c,	// (0x00028541) zooming_pane_g1

0xd284,	// (0x00028549) zooming_pane_g2

0xd284,	// (0x00028549) zooming_pane_g3

0x0002,

0xf335,	// (0x0002a5fa) zooming_pane_g

0xd28c,	// (0x00028551) level_10_zoom

0xd295,	// (0x0002855a) level_11_zoom

0xd29e,	// (0x00028563) level_1_zoom

0xd2a7,	// (0x0002856c) level_2_zoom

0xd2b0,	// (0x00028575) level_3_zoom

0xd2b9,	// (0x0002857e) level_4_zoom

0xd2c2,	// (0x00028587) level_5_zoom

0xd2cb,	// (0x00028590) level_6_zoom

0xd2d4,	// (0x00028599) level_7_zoom

0xd2dd,	// (0x000285a2) level_8_zoom

0xd2e6,	// (0x000285ab) level_9_zoom

0xd2f7,	// (0x000285bc) popup_phob_thumbnail_window_g1

0xd2ff,	// (0x000285c4) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x0002a601) popup_phob_thumbnail_window_g

0x7417,	// (0x000226dc) level_1_location

0x741f,	// (0x000226e4) level_2_location

0x7427,	// (0x000226ec) level_3_location

0x7431,	// (0x000226f6) level_4_location

0xc961,	// (0x00027c26) level_5_location

0x6af1,	// (0x00021db6) mce_icon_pane_g1

0x6af9,	// (0x00021dbe) mce_icon_pane_g2

0x0001,

0xf341,	// (0x0002a606) mce_icon_pane_g

0x6b01,	// (0x00021dc6) main_mup_pane_g1_ParamLimits

0x6b01,	// (0x00021dc6) main_mup_pane_g1

0xc6ed,	// (0x000279b2) main_mup_pane_g2_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g2

0xc6ed,	// (0x000279b2) main_mup_pane_g3_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g3

0xc6ed,	// (0x000279b2) main_mup_pane_g4_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g4

0xc6ed,	// (0x000279b2) main_mup_pane_g5_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g5

0xc6ed,	// (0x000279b2) main_mup_pane_g6_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g6

0xc6ed,	// (0x000279b2) main_mup_pane_g7_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g7

0xc6ed,	// (0x000279b2) main_mup_pane_g8_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g8

0xc6ed,	// (0x000279b2) main_mup_pane_g9_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g9

0xc6ed,	// (0x000279b2) main_mup_pane_g10_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g10

0xc6ed,	// (0x000279b2) main_mup_pane_g11_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g11

0xc6df,	// (0x000279a4) main_mup_pane_g12_ParamLimits

0xc6df,	// (0x000279a4) main_mup_pane_g12

0xc6ed,	// (0x000279b2) main_mup_pane_g13_ParamLimits

0xc6ed,	// (0x000279b2) main_mup_pane_g13

0x000c,

0xf346,	// (0x0002a60b) main_mup_pane_g_ParamLimits

0xf346,	// (0x0002a60b) main_mup_pane_g

0xc6fb,	// (0x000279c0) main_mup_pane_t1_ParamLimits

0xc6fb,	// (0x000279c0) main_mup_pane_t1

0xc6fb,	// (0x000279c0) main_mup_pane_t2_ParamLimits

0xc6fb,	// (0x000279c0) main_mup_pane_t2

0xc6fb,	// (0x000279c0) main_mup_pane_t3_ParamLimits

0xc6fb,	// (0x000279c0) main_mup_pane_t3

0xc72d,	// (0x000279f2) main_mup_pane_t4_ParamLimits

0xc72d,	// (0x000279f2) main_mup_pane_t4

0xc72d,	// (0x000279f2) main_mup_pane_t5_ParamLimits

0xc72d,	// (0x000279f2) main_mup_pane_t5

0xc719,	// (0x000279de) main_mup_pane_t6_ParamLimits

0xc719,	// (0x000279de) main_mup_pane_t6

0x0005,

0xf361,	// (0x0002a626) main_mup_pane_t_ParamLimits

0xf361,	// (0x0002a626) main_mup_pane_t

0xc3ed,	// (0x000276b2) mup_progress_pane_ParamLimits

0xc3ed,	// (0x000276b2) mup_progress_pane

0xe578,	// (0x0002983d) mup_visualizer_pane_ParamLimits

0xe578,	// (0x0002983d) mup_visualizer_pane

0xe578,	// (0x0002983d) mup_volume_pane_ParamLimits

0xe578,	// (0x0002983d) mup_volume_pane

0xc6df,	// (0x000279a4) mup_visualizer_pane_g1_ParamLimits

0xc6df,	// (0x000279a4) mup_visualizer_pane_g1

0xd337,	// (0x000285fc) mup_visualizer_pane_g2_ParamLimits

0xd337,	// (0x000285fc) mup_visualizer_pane_g2

0xc6d1,	// (0x00027996) mup_visualizer_pane_g3_ParamLimits

0xc6d1,	// (0x00027996) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x0002a633) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x0002a633) mup_visualizer_pane_g

0xc70f,	// (0x000279d4) mup_volume_pane_g1

0xc70f,	// (0x000279d4) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0002a351) mup_volume_pane_g

0xc70f,	// (0x000279d4) mup_progress_pane_g1

0xc70f,	// (0x000279d4) mup_progress_pane_g2

0xc70f,	// (0x000279d4) mup_progress_pane_g3

0x0002,

0xf375,	// (0x0002a63a) mup_progress_pane_g

0xc3fb,	// (0x000276c0) bg_popup_window_pane_cp05

0xd345,	// (0x0002860a) heading_pane_cp02_ParamLimits

0xd345,	// (0x0002860a) heading_pane_cp02

0xd361,	// (0x00028626) list_popup_blid_pane

0xd369,	// (0x0002862e) list_blid_sat_info_pane_ParamLimits

0xd369,	// (0x0002862e) list_blid_sat_info_pane

0xd37c,	// (0x00028641) list_blid_sat_info_pane_g1

0xd384,	// (0x00028649) list_blid_sat_info_pane_t1

0x6c10,	// (0x00021ed5) mup_equalizer_pane_ParamLimits

0x6c10,	// (0x00021ed5) mup_equalizer_pane

0x6c31,	// (0x00021ef6) mup_equalizer_pane_cp1_ParamLimits

0x6c31,	// (0x00021ef6) mup_equalizer_pane_cp1

0x6c52,	// (0x00021f17) mup_equalizer_pane_cp2_ParamLimits

0x6c52,	// (0x00021f17) mup_equalizer_pane_cp2

0x6c73,	// (0x00021f38) mup_equalizer_pane_cp3_ParamLimits

0x6c73,	// (0x00021f38) mup_equalizer_pane_cp3

0x6c98,	// (0x00021f5d) mup_equalizer_pane_cp4_ParamLimits

0x6c98,	// (0x00021f5d) mup_equalizer_pane_cp4

0x6cbd,	// (0x00021f82) mup_equalizer_pane_cp5

0x6cd5,	// (0x00021f9a) mup_equalizer_pane_cp6

0x6ced,	// (0x00021fb2) mup_equalizer_pane_cp7

0xe427,	// (0x000296ec) bg_popup_call_poc_act_pane_g9

0xe42f,	// (0x000296f4) bg_popup_call_poc_act_pane_g10

0xe437,	// (0x000296fc) bg_popup_call_poc_act_pane_g11

0x000a,

0xc656,	// (0x0002791b) mup_scale_pane

0xc66e,	// (0x00027933) mup_scale_pane_g1

0xd392,	// (0x00028657) mup_scale_pane_g2

0x0006,

0xf391,	// (0x0002a656) mup_scale_pane_g

0xd3b6,	// (0x0002867b) msg_data_pane

0xd3be,	// (0x00028683) scroll_pane_cp017

0x6d17,	// (0x00021fdc) bg_list_pane_cp04_ParamLimits

0x6d17,	// (0x00021fdc) bg_list_pane_cp04

0xd3c6,	// (0x0002868b) msg_data_pane_g1

0x6d3f,	// (0x00022004) msg_data_pane_g2

0x6d49,	// (0x0002200e) msg_data_pane_g3

0x6d53,	// (0x00022018) msg_data_pane_g4

0x6d5b,	// (0x00022020) msg_data_pane_g5

0x6d63,	// (0x00022028) msg_data_pane_g6

0x6d6b,	// (0x00022030) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x0002a665) msg_data_pane_g

0x6d73,	// (0x00022038) msg_text_pane_ParamLimits

0x6d73,	// (0x00022038) msg_text_pane

0x6daf,	// (0x00022074) qrid_highlight_pane_cp011_ParamLimits

0x6daf,	// (0x00022074) qrid_highlight_pane_cp011

0xc3fb,	// (0x000276c0) msg_body_pane

0xc656,	// (0x0002791b) msg_header_pane

0xd3e2,	// (0x000286a7) input_focus_pane_cp07

0x6dd3,	// (0x00022098) msg_header_pane_t1_ParamLimits

0x6dd3,	// (0x00022098) msg_header_pane_t1

0x6def,	// (0x000220b4) msg_header_pane_t2_ParamLimits

0x6def,	// (0x000220b4) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x0002a679) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x0002a679) msg_header_pane_t

0xd403,	// (0x000286c8) msg_body_pane_g1

0x6e0f,	// (0x000220d4) msg_body_pane_t1_ParamLimits

0x6e0f,	// (0x000220d4) msg_body_pane_t1

0x6e40,	// (0x00022105) msg_body_pane_t2_ParamLimits

0x6e40,	// (0x00022105) msg_body_pane_t2

0x6e52,	// (0x00022117) msg_body_pane_t3_ParamLimits

0x6e52,	// (0x00022117) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x0002a67e) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x0002a67e) msg_body_pane_t

0x3add,	// (0x0001eda2) main_viewer_pane_g1_ParamLimits

0x3add,	// (0x0001eda2) main_viewer_pane_g1

0x3ae9,	// (0x0001edae) main_viewer_pane_g2_ParamLimits

0x3ae9,	// (0x0001edae) main_viewer_pane_g2

0x6e86,	// (0x0002214b) main_viewer_pane_g3_ParamLimits

0x6e86,	// (0x0002214b) main_viewer_pane_g3

0x6e97,	// (0x0002215c) main_viewer_pane_g4_ParamLimits

0x6e97,	// (0x0002215c) main_viewer_pane_g4

0x3af5,	// (0x0001edba) main_viewer_pane_g5_ParamLimits

0x3af5,	// (0x0001edba) main_viewer_pane_g5

0x3af5,	// (0x0001edba) main_viewer_pane_g7_ParamLimits

0x3af5,	// (0x0001edba) main_viewer_pane_g7

0x3b07,	// (0x0001edcc) main_viewer_pane_g8_ParamLimits

0x3b07,	// (0x0001edcc) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x0002a68e) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x0002a68e) main_viewer_pane_g

0xd40b,	// (0x000286d0) viewer_content_pane_ParamLimits

0xd40b,	// (0x000286d0) viewer_content_pane

0x6ec8,	// (0x0002218d) main_postcard_pane_g1_ParamLimits

0x6ec8,	// (0x0002218d) main_postcard_pane_g1

0x6ed6,	// (0x0002219b) main_postcard_pane_g2_ParamLimits

0x6ed6,	// (0x0002219b) main_postcard_pane_g2

0x6ee4,	// (0x000221a9) main_postcard_pane_g3_ParamLimits

0x6ee4,	// (0x000221a9) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x0002a69f) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x0002a69f) main_postcard_pane_g

0x6ef4,	// (0x000221b9) main_postcard_pane_g4

0xe565,	// (0x0002982a) smil_status_volume_pane_g2

0x6f20,	// (0x000221e5) postcard_pane_ParamLimits

0x6f20,	// (0x000221e5) postcard_pane

0xd974,	// (0x00028c39) postcard_pane_g1_ParamLimits

0xd974,	// (0x00028c39) postcard_pane_g1

0x6f5a,	// (0x0002221f) postcard_pane_g2_ParamLimits

0x6f5a,	// (0x0002221f) postcard_pane_g2

0x6f66,	// (0x0002222b) postcard_pane_g3_ParamLimits

0x6f66,	// (0x0002222b) postcard_pane_g3

0xd419,	// (0x000286de) postcard_pane_g4_ParamLimits

0xd419,	// (0x000286de) postcard_pane_g4

0x6f72,	// (0x00022237) postcard_pane_g5_ParamLimits

0x6f72,	// (0x00022237) postcard_pane_g5

0x6f7e,	// (0x00022243) postcard_pane_g6_ParamLimits

0x6f7e,	// (0x00022243) postcard_pane_g6

0xd427,	// (0x000286ec) postcard_pane_g7_ParamLimits

0xd427,	// (0x000286ec) postcard_pane_g7

0x0006,

0xf3e7,	// (0x0002a6ac) postcard_pane_g_ParamLimits

0xf3e7,	// (0x0002a6ac) postcard_pane_g

0x6f8c,	// (0x00022251) main_mp2_pane_g1_ParamLimits

0x6f8c,	// (0x00022251) main_mp2_pane_g1

0x6f9a,	// (0x0002225f) main_mp2_pane_g2_ParamLimits

0x6f9a,	// (0x0002225f) main_mp2_pane_g2

0x6fa6,	// (0x0002226b) main_mp2_pane_g3_ParamLimits

0x6fa6,	// (0x0002226b) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x0002a6bb) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x0002a6bb) main_mp2_pane_g

0x6fb2,	// (0x00022277) main_mp2_pane_t1_ParamLimits

0x6fb2,	// (0x00022277) main_mp2_pane_t1

0x6fc9,	// (0x0002228e) main_mp2_pane_t2_ParamLimits

0x6fc9,	// (0x0002228e) main_mp2_pane_t2

0x6fdd,	// (0x000222a2) main_mp2_pane_t3_ParamLimits

0x6fdd,	// (0x000222a2) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x0002a6c2) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x0002a6c2) main_mp2_pane_t

0xc3ed,	// (0x000276b2) pec_content_pane_ParamLimits

0xc3ed,	// (0x000276b2) pec_content_pane

0xbf9b,	// (0x00027260) scroll_pane_cp015

0xd307,	// (0x000285cc) pec_attribute_pane_ParamLimits

0xd307,	// (0x000285cc) pec_attribute_pane

0xc6d1,	// (0x00027996) pec_content_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) pec_content_pane_g1

0xd435,	// (0x000286fa) pec_content_pane_t1_ParamLimits

0xd435,	// (0x000286fa) pec_content_pane_t1

0xd449,	// (0x0002870e) pec_content_pane_t2_ParamLimits

0xd449,	// (0x0002870e) pec_content_pane_t2

0x0001,

0xf404,	// (0x0002a6c9) pec_content_pane_t_ParamLimits

0xf404,	// (0x0002a6c9) pec_content_pane_t

0xc6c3,	// (0x00027988) list_single_graphic_pane_cp01_ParamLimits

0xc6c3,	// (0x00027988) list_single_graphic_pane_cp01

0xc656,	// (0x0002791b) bg_popup_sub_pane_cp04

0xd45d,	// (0x00028722) popup_mup_playback_window_g1

0xd469,	// (0x0002872e) popup_mup_playback_window_t1

0xd47e,	// (0x00028743) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x0002a6ce) popup_mup_playback_window_t

0xd4b5,	// (0x0002877a) main_image_pane_g1_ParamLimits

0xd4b5,	// (0x0002877a) main_image_pane_g1

0xd4f8,	// (0x000287bd) scroll_pane_cp018_ParamLimits

0xd4f8,	// (0x000287bd) scroll_pane_cp018

0xd510,	// (0x000287d5) scroll_pane_cp016_ParamLimits

0xd510,	// (0x000287d5) scroll_pane_cp016

0x7060,	// (0x00022325) smil2_image_pane_ParamLimits

0x7060,	// (0x00022325) smil2_image_pane

0x7096,	// (0x0002235b) smil2_root_pane_ParamLimits

0x7096,	// (0x0002235b) smil2_root_pane

0x70c2,	// (0x00022387) smil2_text_pane_ParamLimits

0x70c2,	// (0x00022387) smil2_text_pane

0xbf9b,	// (0x00027260) bg_list_pane_cp06

0xbf9b,	// (0x00027260) grid_radio_pane

0xc3fb,	// (0x000276c0) bg_popup_window_pane_cp06

0xce7c,	// (0x00028141) main_fmradio_pane_t1

0xd00f,	// (0x000282d4) heading_pane_cp04

0xce7c,	// (0x00028141) main_fmradio_pane_t2

0xe43f,	// (0x00029704) popup_cale_lunar_info_window_g1

0xce7c,	// (0x00028141) main_fmradio_pane_t3

0xe447,	// (0x0002970c) popup_cale_lunar_info_window_g2

0xce7c,	// (0x00028141) main_fmradio_pane_t4

0x0001,

0xce7c,	// (0x00028141) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x0002a790) popup_cale_lunar_info_window_g

0xf269,	// (0x0002a52e) main_fmradio_pane_t

0xbf9b,	// (0x00027260) wait_bar_pane_cp03

0xc6c3,	// (0x00027988) cell_fmradio_pane_ParamLimits

0xc6c3,	// (0x00027988) cell_fmradio_pane

0xc6d1,	// (0x00027996) cell_fmradio_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) cell_fmradio_pane_g1

0xbf9b,	// (0x00027260) grid_highlight_pane_cp011

0xd544,	// (0x00028809) poc_content_pane_ParamLimits

0xd544,	// (0x00028809) poc_content_pane

0xd556,	// (0x0002881b) scroll_pane_cp019

0x7102,	// (0x000223c7) popup_call_poc_act_window_ParamLimits

0x7102,	// (0x000223c7) popup_call_poc_act_window

0x710f,	// (0x000223d4) popup_call_poc_inact_window_ParamLimits

0x710f,	// (0x000223d4) popup_call_poc_inact_window

0xf4a2,	// (0x0002a767) bg_popup_call_poc_act_pane_g

0xe3b7,	// (0x0002967c) bg_popup_call_poc_inact_pane_g1

0xe3bf,	// (0x00029684) bg_popup_call_poc_inact_pane_g2

0xd55e,	// (0x00028823) popup_call_poc_act_window_g2

0xe3c7,	// (0x0002968c) bg_popup_call_poc_inact_pane_g3

0xe3cf,	// (0x00029694) bg_popup_call_poc_inact_pane_g4

0xe3d7,	// (0x0002969c) bg_popup_call_poc_inact_pane_g5

0xd566,	// (0x0002882b) popup_call_poc_act_window_t1_ParamLimits

0xd566,	// (0x0002882b) popup_call_poc_act_window_t1

0xd58e,	// (0x00028853) popup_call_poc_act_window_t2_ParamLimits

0xd58e,	// (0x00028853) popup_call_poc_act_window_t2

0xd5b6,	// (0x0002887b) popup_call_poc_act_window_t3_ParamLimits

0xd5b6,	// (0x0002887b) popup_call_poc_act_window_t3

0xd5de,	// (0x000288a3) popup_call_poc_act_window_t4_ParamLimits

0xd5de,	// (0x000288a3) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x0002a6e3) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x0002a6e3) popup_call_poc_act_window_t

0xe3df,	// (0x000296a4) bg_popup_call_poc_inact_pane_g6

0xe3e7,	// (0x000296ac) bg_popup_call_poc_inact_pane_g7

0xe3ef,	// (0x000296b4) bg_popup_call_poc_inact_pane_g8

0xd5f0,	// (0x000288b5) popup_call_poc_inact_window_g2

0xe3f7,	// (0x000296bc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x0002a754) bg_popup_call_poc_inact_pane_g

0xd5f8,	// (0x000288bd) popup_call_poc_inact_window_t1_ParamLimits

0xd5f8,	// (0x000288bd) popup_call_poc_inact_window_t1

0xd60d,	// (0x000288d2) popup_call_poc_inact_window_t2_ParamLimits

0xd60d,	// (0x000288d2) popup_call_poc_inact_window_t2

0xd622,	// (0x000288e7) popup_call_poc_inact_window_t3_ParamLimits

0xd622,	// (0x000288e7) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x0002a6ec) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x0002a6ec) popup_call_poc_inact_window_t

0xe4dd,	// (0x000297a2) context_pane_ParamLimits

0x759a,	// (0x0002285f) signal_pane_ParamLimits

0xc961,	// (0x00027c26) main_call2_pane

0x3c74,	// (0x0001ef39) popup_phob_thumbnail2_window_ParamLimits

0x3c74,	// (0x0001ef39) popup_phob_thumbnail2_window

0x3aad,	// (0x0001ed72) aid_hotspot_pointer_arrow_pane

0x3ab5,	// (0x0001ed7a) aid_hotspot_pointer_hand_pane

0x73df,	// (0x000226a4) phob_pre_status_pane_g5

0xc6c3,	// (0x00027988) cams_zoom_pane_ParamLimits

0xc6c3,	// (0x00027988) image_vga_pane_ParamLimits

0xc6df,	// (0x000279a4) main_camera_pane_g1_ParamLimits

0xc6df,	// (0x000279a4) main_camera_pane_g2_ParamLimits

0xc6df,	// (0x000279a4) main_camera_pane_g3_ParamLimits

0xc6df,	// (0x000279a4) main_camera_pane_g4_ParamLimits

0xc6df,	// (0x000279a4) main_camera_pane_g5_ParamLimits

0xc6df,	// (0x000279a4) main_camera_pane_g6_ParamLimits

0xc6df,	// (0x000279a4) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0002a422) main_camera_pane_g_ParamLimits

0xc72d,	// (0x000279f2) main_camera_pane_t1_ParamLimits

0xc72d,	// (0x000279f2) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0002a433) main_camera_pane_t_ParamLimits

0xc656,	// (0x0002791b) bg_popup_preview_window_pane_cp01_ParamLimits

0xc656,	// (0x0002791b) bg_popup_preview_window_pane_cp01

0xd637,	// (0x000288fc) popup_phob_thumbnail2_window_g1_ParamLimits

0xd637,	// (0x000288fc) popup_phob_thumbnail2_window_g1

0xc3fb,	// (0x000276c0) call2_cli_visual_pane

0x712b,	// (0x000223f0) popup_call2_audio_conf_window_ParamLimits

0x712b,	// (0x000223f0) popup_call2_audio_conf_window

0x7144,	// (0x00022409) popup_call2_audio_first_window_ParamLimits

0x7144,	// (0x00022409) popup_call2_audio_first_window

0x71e2,	// (0x000224a7) popup_call2_audio_in_window_ParamLimits

0x71e2,	// (0x000224a7) popup_call2_audio_in_window

0x7226,	// (0x000224eb) popup_call2_audio_out_window_ParamLimits

0x7226,	// (0x000224eb) popup_call2_audio_out_window

0x7290,	// (0x00022555) popup_call2_audio_second_window_ParamLimits

0x7290,	// (0x00022555) popup_call2_audio_second_window

0x72ee,	// (0x000225b3) popup_call2_audio_wait_window_ParamLimits

0x72ee,	// (0x000225b3) popup_call2_audio_wait_window

0xc3fb,	// (0x000276c0) bg_popup_call2_act_pane_cp03

0xc638,	// (0x000278fd) list_conf_pane_cp

0xd643,	// (0x00028908) popup_call2_audio_conf_window_t1

0xd651,	// (0x00028916) list_single_graphic_popup_conf2_pane_ParamLimits

0xd651,	// (0x00028916) list_single_graphic_popup_conf2_pane

0xd071,	// (0x00028336) list_highlight_pane_cp04

0xd664,	// (0x00028929) list_single_graphic_popup_conf2_pane_g1

0xd082,	// (0x00028347) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x0002a6f3) list_single_graphic_popup_conf2_pane_g

0xd66e,	// (0x00028933) list_single_graphic_popup_conf2_pane_t1

0xd67c,	// (0x00028941) bg_popup_call2_act_pane_cp01_ParamLimits

0xd67c,	// (0x00028941) bg_popup_call2_act_pane_cp01

0xd706,	// (0x000289cb) call_type_pane_cp05_ParamLimits

0xd706,	// (0x000289cb) call_type_pane_cp05

0xd75a,	// (0x00028a1f) popup_call2_audio_second_window_g1_ParamLimits

0xd75a,	// (0x00028a1f) popup_call2_audio_second_window_g1

0xd7ae,	// (0x00028a73) popup_call2_audio_second_window_g2_ParamLimits

0xd7ae,	// (0x00028a73) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x0002a6f8) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x0002a6f8) popup_call2_audio_second_window_g

0xd813,	// (0x00028ad8) popup_call2_audio_second_window_t1_ParamLimits

0xd813,	// (0x00028ad8) popup_call2_audio_second_window_t1

0xd8ce,	// (0x00028b93) popup_call2_audio_second_window_t2_ParamLimits

0xd8ce,	// (0x00028b93) popup_call2_audio_second_window_t2

0xd921,	// (0x00028be6) popup_call2_audio_second_window_t3_ParamLimits

0xd921,	// (0x00028be6) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x0002a6ff) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x0002a6ff) popup_call2_audio_second_window_t

0xc3fb,	// (0x000276c0) bg_popup_call2_in_pane_cp02

0xc405,	// (0x000276ca) call_type_pane_cp04

0x732d,	// (0x000225f2) popup_call2_audio_wait_window_g1

0x7335,	// (0x000225fa) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x0002a708) popup_call2_audio_wait_window_g

0xc41d,	// (0x000276e2) popup_call2_audio_wait_window_t3

0xda22,	// (0x00028ce7) bg_popup_call2_act_pane_ParamLimits

0xda22,	// (0x00028ce7) bg_popup_call2_act_pane

0xdae2,	// (0x00028da7) call_type_pane_cp03_ParamLimits

0xdae2,	// (0x00028da7) call_type_pane_cp03

0xdb46,	// (0x00028e0b) popup_call2_audio_first_window_g1_ParamLimits

0xdb46,	// (0x00028e0b) popup_call2_audio_first_window_g1

0xdbb6,	// (0x00028e7b) popup_call2_audio_first_window_g2_ParamLimits

0xdbb6,	// (0x00028e7b) popup_call2_audio_first_window_g2

0xd974,	// (0x00028c39) popup_call2_audio_first_window_g3_ParamLimits

0xd974,	// (0x00028c39) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x0002a70d) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x0002a70d) popup_call2_audio_first_window_g

0xdc94,	// (0x00028f59) popup_call2_audio_first_window_t1_ParamLimits

0xdc94,	// (0x00028f59) popup_call2_audio_first_window_t1

0xdd97,	// (0x0002905c) popup_call2_audio_first_window_t4_ParamLimits

0xdd97,	// (0x0002905c) popup_call2_audio_first_window_t4

0xde7a,	// (0x0002913f) popup_call2_audio_first_window_t5_ParamLimits

0xde7a,	// (0x0002913f) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x0002a718) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x0002a718) popup_call2_audio_first_window_t

0xc64e,	// (0x00027913) bg_popup_call2_act_pane_g1

0xe451,	// (0x00029716) popup_cale_lunar_info_window_t1

0xe45f,	// (0x00029724) popup_cale_lunar_info_window_t2

0xe46d,	// (0x00029732) popup_cale_lunar_info_window_t3

0xc3fb,	// (0x000276c0) bg_popup_call2_bubble_pane

0xdf7b,	// (0x00029240) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf7b,	// (0x00029240) bg_popup_call2_in_pane_cp01

0xc0c9,	// (0x0002738e) call_type_pane_cp02

0x733d,	// (0x00022602) popup_call2_audio_out_window_g1_ParamLimits

0x733d,	// (0x00022602) popup_call2_audio_out_window_g1

0xdfc3,	// (0x00029288) popup_call2_audio_out_window_g2_ParamLimits

0xdfc3,	// (0x00029288) popup_call2_audio_out_window_g2

0x7369,	// (0x0002262e) popup_call2_audio_out_window_g3_ParamLimits

0x7369,	// (0x0002262e) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x0002a721) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x0002a721) popup_call2_audio_out_window_g

0xdffa,	// (0x000292bf) popup_call2_audio_out_window_t1_ParamLimits

0xdffa,	// (0x000292bf) popup_call2_audio_out_window_t1

0xe059,	// (0x0002931e) popup_call2_audio_out_window_t2_ParamLimits

0xe059,	// (0x0002931e) popup_call2_audio_out_window_t2

0xe0ad,	// (0x00029372) popup_call2_audio_out_window_t3_ParamLimits

0xe0ad,	// (0x00029372) popup_call2_audio_out_window_t3

0xe0c3,	// (0x00029388) popup_call2_audio_out_window_t4_ParamLimits

0xe0c3,	// (0x00029388) popup_call2_audio_out_window_t4

0xe0d9,	// (0x0002939e) popup_call2_audio_out_window_t5_ParamLimits

0xe0d9,	// (0x0002939e) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x0002a72a) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x0002a72a) popup_call2_audio_out_window_t

0xe13d,	// (0x00029402) bg_popup_call2_in_pane_ParamLimits

0xe13d,	// (0x00029402) bg_popup_call2_in_pane

0xe199,	// (0x0002945e) popup_call2_audio_in_window_g1_ParamLimits

0xe199,	// (0x0002945e) popup_call2_audio_in_window_g1

0xe1d1,	// (0x00029496) popup_call2_audio_in_window_g2_ParamLimits

0xe1d1,	// (0x00029496) popup_call2_audio_in_window_g2

0xe209,	// (0x000294ce) popup_call2_audio_in_window_g3_ParamLimits

0xe209,	// (0x000294ce) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x0002a737) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x0002a737) popup_call2_audio_in_window_g

0xe261,	// (0x00029526) popup_call2_audio_in_window_t1_ParamLimits

0xe261,	// (0x00029526) popup_call2_audio_in_window_t1

0xe2e1,	// (0x000295a6) popup_call2_audio_in_window_t2_ParamLimits

0xe2e1,	// (0x000295a6) popup_call2_audio_in_window_t2

0xe361,	// (0x00029626) popup_call2_audio_in_window_t3_ParamLimits

0xe361,	// (0x00029626) popup_call2_audio_in_window_t3

0xe37b,	// (0x00029640) popup_call2_audio_in_window_t4_ParamLimits

0xe37b,	// (0x00029640) popup_call2_audio_in_window_t4

0xe38d,	// (0x00029652) popup_call2_audio_in_window_t5_ParamLimits

0xe38d,	// (0x00029652) popup_call2_audio_in_window_t5

0xe3a2,	// (0x00029667) popup_call2_audio_in_window_t6_ParamLimits

0xe3a2,	// (0x00029667) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x0002a740) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x0002a740) popup_call2_audio_in_window_t

0xc64e,	// (0x00027913) bg_popup_call2_in_pane_g1

0xe47b,	// (0x00029740) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x0002a795) popup_cale_lunar_info_window_t

0xc656,	// (0x0002791b) bg_popup_call2_rect_pane_ParamLimits

0xc656,	// (0x0002791b) bg_popup_call2_rect_pane

0xc3fb,	// (0x000276c0) call2_cli_visual_graphic_pane

0xc3fb,	// (0x000276c0) call2_cli_visual_text_pane

0x3cc7,	// (0x0001ef8c) smil_status_volume_pane_g3

0x0002,

0xc66e,	// (0x00027933) call2_cli_visual_graphic_pane_g1

0xc66e,	// (0x00027933) call2_cli_visual_graphic_pane_g2

0xc66e,	// (0x00027933) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x0002a74d) call2_cli_visual_graphic_pane_g

0xc877,	// (0x00027b3c) bg_popup_call2_rect_pane_g1

0xc86f,	// (0x00027b34) bg_popup_call2_rect_pane_g2

0xc867,	// (0x00027b2c) bg_popup_call2_rect_pane_g3

0xc887,	// (0x00027b4c) bg_popup_call2_rect_pane_g4

0xc87f,	// (0x00027b44) bg_popup_call2_rect_pane_g5

0xc88f,	// (0x00027b54) bg_popup_call2_rect_pane_g6

0xc897,	// (0x00027b5c) bg_popup_call2_rect_pane_g7

0xc8a7,	// (0x00027b6c) bg_popup_call2_rect_pane_g8

0xc89f,	// (0x00027b64) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x0002a4dd) bg_popup_call2_rect_pane_g

0xe3b7,	// (0x0002967c) bg_popup_call2_bubble_pane_g1

0xe3bf,	// (0x00029684) bg_popup_call2_bubble_pane_g2

0xe3c7,	// (0x0002968c) bg_popup_call2_bubble_pane_g3

0xe3cf,	// (0x00029694) bg_popup_call2_bubble_pane_g4

0xe3d7,	// (0x0002969c) bg_popup_call2_bubble_pane_g5

0xe3df,	// (0x000296a4) bg_popup_call2_bubble_pane_g6

0xe3e7,	// (0x000296ac) bg_popup_call2_bubble_pane_g7

0xe3ef,	// (0x000296b4) bg_popup_call2_bubble_pane_g8

0xe3f7,	// (0x000296bc) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x0002a754) bg_popup_call2_bubble_pane_g

0x4ef7,	// (0x000201bc) aid_cale_week_size_cell_pane

0xc656,	// (0x0002791b) aid_cams_cif_uncrop_pane_ParamLimits

0xc656,	// (0x0002791b) aid_cams_cif_uncrop_pane

0xc6c3,	// (0x00027988) aid_cams_size_cell_ParamLimits

0xc6c3,	// (0x00027988) aid_cams_size_cell

0xc6c3,	// (0x00027988) grid_cams_pane_ParamLimits

0xc6c3,	// (0x00027988) linegrid_cams_pane_ParamLimits

0x5667,	// (0x0002092c) call_video_pane_t1

0x5684,	// (0x00020949) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0002a47f) call_video_pane_t

0x5b2e,	// (0x00020df3) aid_cale_month_size_cell_pane_ParamLimits

0x5b2e,	// (0x00020df3) aid_cale_month_size_cell_pane

0xf514,	// (0x0002a7d9) smil_status_volume_pane_g

0x3cd4,	// (0x0001ef99) volume_smil_pane_ParamLimits

0x341d,	// (0x0001e6e2) aid_popup2_width_pane

0x4e57,	// (0x0002011c) cell_qdial_pane_g4_ParamLimits

0x4e57,	// (0x0002011c) cell_qdial_pane_g4

0x693e,	// (0x00021c03) aid_blid_cardinal_pane_ParamLimits

0x694e,	// (0x00021c13) aid_blid_destination_pane_ParamLimits

0x694e,	// (0x00021c13) aid_blid_destination_pane

0xc656,	// (0x0002791b) bg_popup_call_poc_act_pane_ParamLimits

0xc656,	// (0x0002791b) bg_popup_call_poc_act_pane

0xc656,	// (0x0002791b) bg_popup_call_poc_inact_pane_ParamLimits

0xc656,	// (0x0002791b) bg_popup_call_poc_inact_pane

0xe3ff,	// (0x000296c4) bg_popup_call_poc_act_pane_g1

0xe407,	// (0x000296cc) bg_popup_call_poc_act_pane_g2

0xe40f,	// (0x000296d4) bg_popup_call_poc_act_pane_g3

0xe3cf,	// (0x00029694) bg_popup_call_poc_act_pane_g4

0xe3d7,	// (0x0002969c) bg_popup_call_poc_act_pane_g5

0xe417,	// (0x000296dc) bg_popup_call_poc_act_pane_g6

0xe3e7,	// (0x000296ac) bg_popup_call_poc_act_pane_g7

0xe41f,	// (0x000296e4) bg_popup_call_poc_act_pane_g8

0xc3fb,	// (0x000276c0) main_usb_pane

0x3b91,	// (0x0001ee56) popup_cale_lunar_info_window

0x5989,	// (0x00020c4e) im_reading_pane_t1_ParamLimits

0xca24,	// (0x00027ce9) list_im_pane_ParamLimits

0xca35,	// (0x00027cfa) scroll_pane_cp07_ParamLimits

0xc3fb,	// (0x000276c0) grid_highlight_pane_cp012

0xc656,	// (0x0002791b) mup_scale_pane_ParamLimits

0xc6df,	// (0x000279a4) main_usb_pane_g1_ParamLimits

0xc6df,	// (0x000279a4) main_usb_pane_g1

0xc6df,	// (0x000279a4) main_usb_pane_g2_ParamLimits

0xc6df,	// (0x000279a4) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x0002a77e) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x0002a77e) main_usb_pane_g

0xc72d,	// (0x000279f2) main_usb_pane_t1_ParamLimits

0xc72d,	// (0x000279f2) main_usb_pane_t1

0xc72d,	// (0x000279f2) main_usb_pane_t2_ParamLimits

0xc72d,	// (0x000279f2) main_usb_pane_t2

0xc72d,	// (0x000279f2) main_usb_pane_t3_ParamLimits

0xc72d,	// (0x000279f2) main_usb_pane_t3

0xc72d,	// (0x000279f2) main_usb_pane_t4_ParamLimits

0xc72d,	// (0x000279f2) main_usb_pane_t4

0xc72d,	// (0x000279f2) main_usb_pane_t5_ParamLimits

0xc72d,	// (0x000279f2) main_usb_pane_t5

0xc72d,	// (0x000279f2) main_usb_pane_t6_ParamLimits

0xc72d,	// (0x000279f2) main_usb_pane_t6

0x0005,

0xf4be,	// (0x0002a783) main_usb_pane_t_ParamLimits

0x68dd,	// (0x00021ba2) aid_text_placing

0x68e8,	// (0x00021bad) main_location2_pane_t1_ParamLimits

0x68fe,	// (0x00021bc3) main_location2_pane_t2_ParamLimits

0x6914,	// (0x00021bd9) main_location2_pane_t3_ParamLimits

0x692a,	// (0x00021bef) main_location2_pane_t4_ParamLimits

0x692a,	// (0x00021bef) main_location2_pane_t4

0xf2fb,	// (0x0002a5c0) main_location2_pane_t_ParamLimits

0xc684,	// (0x00027949) find_pinb_pane_g2_ParamLimits

0xc684,	// (0x00027949) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0002a337) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0002a337) find_pinb_pane_g

0xc690,	// (0x00027955) find_pinb_pane_t1_ParamLimits

0xc6a2,	// (0x00027967) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0002a33c) find_pinb_pane_t_ParamLimits

0xc3fb,	// (0x000276c0) main_call3_pane

0x60e1,	// (0x000213a6) cale_month_day_heading_pane_t1_ParamLimits

0x6163,	// (0x00021428) cale_month_day_heading_pane_t2_ParamLimits

0x61dc,	// (0x000214a1) cale_month_day_heading_pane_t3_ParamLimits

0x6255,	// (0x0002151a) cale_month_day_heading_pane_t4_ParamLimits

0x62ce,	// (0x00021593) cale_month_day_heading_pane_t5_ParamLimits

0x634f,	// (0x00021614) cale_month_day_heading_pane_t6_ParamLimits

0x63d8,	// (0x0002169d) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0002a4b7) cale_month_day_heading_pane_t_ParamLimits

0xcc97,	// (0x00027f5c) smil_status_volume_pane

0x6f3e,	// (0x00022203) postcard_address_pane_ParamLimits

0x6f3e,	// (0x00022203) postcard_address_pane

0x6f4c,	// (0x00022211) postcard_message_pane_ParamLimits

0x6f4c,	// (0x00022211) postcard_message_pane

0x7395,	// (0x0002265a) call2_cli_visual_pane_t1_ParamLimits

0x7395,	// (0x0002265a) call2_cli_visual_pane_t1

0xe59e,	// (0x00029863) postcard_message_pane_t1_ParamLimits

0xe59e,	// (0x00029863) postcard_message_pane_t1

0xe586,	// (0x0002984b) postcard_address_pane_t1_ParamLimits

0xe586,	// (0x0002984b) postcard_address_pane_t1

0x76f7,	// (0x000229bc) popup_call3_audio_in_window_ParamLimits

0x76f7,	// (0x000229bc) popup_call3_audio_in_window

0x75d5,	// (0x0002289a) bg_popup_call3_in_pane_ParamLimits

0x75d5,	// (0x0002289a) bg_popup_call3_in_pane

0x763d,	// (0x00022902) popup_call3_audio_in_window_g1_ParamLimits

0x763d,	// (0x00022902) popup_call3_audio_in_window_g1

0x7655,	// (0x0002291a) popup_call3_audio_in_window_g2_ParamLimits

0x7655,	// (0x0002291a) popup_call3_audio_in_window_g2

0x766d,	// (0x00022932) popup_call3_audio_in_window_g3_ParamLimits

0x766d,	// (0x00022932) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x0002a7e0) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x0002a7e0) popup_call3_audio_in_window_g

0x7695,	// (0x0002295a) popup_call3_audio_in_window_t1_ParamLimits

0x7695,	// (0x0002295a) popup_call3_audio_in_window_t1

0x76bd,	// (0x00022982) popup_call3_audio_in_window_t2_ParamLimits

0x76bd,	// (0x00022982) popup_call3_audio_in_window_t2

0x76e5,	// (0x000229aa) popup_call3_audio_in_window_t3_ParamLimits

0x76e5,	// (0x000229aa) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x0002a7e9) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x0002a7e9) popup_call3_audio_in_window_t

0xc961,	// (0x00027c26) bg_popup_call3_rect_pane

0xc877,	// (0x00027b3c) bg_popup_call3_rect_pane_g1

0xc86f,	// (0x00027b34) bg_popup_call3_rect_pane_g2

0xc867,	// (0x00027b2c) bg_popup_call3_rect_pane_g3

0xc887,	// (0x00027b4c) bg_popup_call3_rect_pane_g4

0xc87f,	// (0x00027b44) bg_popup_call3_rect_pane_g5

0xc88f,	// (0x00027b54) bg_popup_call3_rect_pane_g6

0xc897,	// (0x00027b5c) bg_popup_call3_rect_pane_g7

0xbf9b,	// (0x00027260) mup_visualizer_osc_pane

0xbf9b,	// (0x00027260) mup_visualizer_spec_pane

0x75f5,	// (0x000228ba) call3_video_qcif_pane_ParamLimits

0x75f5,	// (0x000228ba) call3_video_qcif_pane

0x7607,	// (0x000228cc) call3_video_qcif_uncrop_pane_ParamLimits

0x7607,	// (0x000228cc) call3_video_qcif_uncrop_pane

0x7617,	// (0x000228dc) call3_video_subqcif_pane_ParamLimits

0x7617,	// (0x000228dc) call3_video_subqcif_pane

0x762b,	// (0x000228f0) call3_video_subqcif_uncrop_pane_ParamLimits

0x762b,	// (0x000228f0) call3_video_subqcif_uncrop_pane

0x7685,	// (0x0002294a) popup_call3_audio_in_window_g4_ParamLimits

0x7685,	// (0x0002294a) popup_call3_audio_in_window_g4

0xbf9b,	// (0x00027260) mup_spec_half_pane

0xbf9b,	// (0x00027260) mup_spec_half_pane_cp

0xbf9b,	// (0x00027260) mup_osc_middle_pane

0xc70f,	// (0x000279d4) mup_visualizer_osc_pane_g1

0xe52b,	// (0x000297f0) mup_spec_bar_pane_ParamLimits

0xe52b,	// (0x000297f0) mup_spec_bar_pane

0xc70f,	// (0x000279d4) mup_spec_bar_pane_g1

0xc70f,	// (0x000279d4) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0002a351) mup_spec_bar_pane_g

0x4ef7,	// (0x000201bc) aid_cale_week_size_cell_pane_ParamLimits

0x4f11,	// (0x000201d6) bg_cale_heading_pane_ParamLimits

0x4f3a,	// (0x000201ff) bg_cale_pane_cp01_ParamLimits

0x4f5c,	// (0x00020221) cale_week_corner_pane_ParamLimits

0x4f7b,	// (0x00020240) cale_week_day_heading_pane_ParamLimits

0x4fa9,	// (0x0002026e) cale_week_scroll_pane_g1_ParamLimits

0x4fcd,	// (0x00020292) cale_week_scroll_pane_g2_ParamLimits

0x4fe5,	// (0x000202aa) cale_week_scroll_pane_g3_ParamLimits

0x4ffd,	// (0x000202c2) cale_week_scroll_pane_g4_ParamLimits

0x5015,	// (0x000202da) cale_week_scroll_pane_g5_ParamLimits

0x502d,	// (0x000202f2) cale_week_scroll_pane_g6_ParamLimits

0x504d,	// (0x00020312) cale_week_scroll_pane_g7_ParamLimits

0x506d,	// (0x00020332) cale_week_scroll_pane_g8_ParamLimits

0x508d,	// (0x00020352) cale_week_scroll_pane_g9_ParamLimits

0x50aa,	// (0x0002036f) cale_week_scroll_pane_g10_ParamLimits

0x50c7,	// (0x0002038c) cale_week_scroll_pane_g11_ParamLimits

0x50e6,	// (0x000203ab) cale_week_scroll_pane_g12_ParamLimits

0x510b,	// (0x000203d0) cale_week_scroll_pane_g13_ParamLimits

0x5134,	// (0x000203f9) cale_week_scroll_pane_g14_ParamLimits

0x515d,	// (0x00020422) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0002a3c8) cale_week_scroll_pane_g_ParamLimits

0x51a6,	// (0x0002046b) cale_week_time_pane_ParamLimits

0x51c6,	// (0x0002048b) grid_cale_week_pane_ParamLimits

0xc8d7,	// (0x00027b9c) listscroll_cale_week_pane_t1

0xc8e9,	// (0x00027bae) scroll_pane_cp08_ParamLimits

0x5ba6,	// (0x00020e6b) cale_month_corner_pane_ParamLimits

0xcc6d,	// (0x00027f32) cale_month_pane_t1

0x6068,	// (0x0002132d) cale_month_week_pane_ParamLimits

0xd974,	// (0x00028c39) popup_call_status_window_g1_ParamLimits

0x677b,	// (0x00021a40) popup_call_status_window_g2_ParamLimits

0x6787,	// (0x00021a4c) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x0002a547) popup_call_status_window_g_ParamLimits

0xcfff,	// (0x000282c4) aid_call2_pane

0x6dc5,	// (0x0002208a) msg_header_pane_g1

0x6f3e,	// (0x00022203) postcard_address2_pane_ParamLimits

0x6f3e,	// (0x00022203) postcard_address2_pane

0x6f4c,	// (0x00022211) postcard_message2_pane_ParamLimits

0x6f4c,	// (0x00022211) postcard_message2_pane

0x75a8,	// (0x0002286d) message2_row_pane_ParamLimits

0x75a8,	// (0x0002286d) message2_row_pane

0x75c2,	// (0x00022887) address2_row_pane_ParamLimits

0x75c2,	// (0x00022887) address2_row_pane

0xe4f8,	// (0x000297bd) postcard_message2_row_pane_g1

0xe500,	// (0x000297c5) postcard_message2_row_pane_t1

0xe4f8,	// (0x000297bd) address2_row_pane_g1

0xe500,	// (0x000297c5) address2_row_pane_t1

0x541a,	// (0x000206df) aid_size_cell_vorec

0xc3fb,	// (0x000276c0) main_rss_pane

0xe50e,	// (0x000297d3) rss_list_single_pane_ParamLimits

0xe50e,	// (0x000297d3) rss_list_single_pane

0xe51c,	// (0x000297e1) rss_list_single_pane_t1

0xe51c,	// (0x000297e1) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x0002a7d4) rss_list_single_pane_t

0xc3fb,	// (0x000276c0) main_camera2_pane

0xc3fb,	// (0x000276c0) main_video2_pane

0x369d,	// (0x0001e962) cams_zoom_pane_cp2_ParamLimits

0x369d,	// (0x0001e962) cams_zoom_pane_cp2

0x369d,	// (0x0001e962) image2_vga_pane_ParamLimits

0x369d,	// (0x0001e962) image2_vga_pane

0xd032,	// (0x000282f7) main_camera2_pane_g1_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g1

0xd032,	// (0x000282f7) main_camera2_pane_g2_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g2

0xd032,	// (0x000282f7) main_camera2_pane_g3_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g3

0xd032,	// (0x000282f7) main_camera2_pane_g4_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g4

0xd032,	// (0x000282f7) main_camera2_pane_g5_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g5

0xd032,	// (0x000282f7) main_camera2_pane_g6_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g6

0xd032,	// (0x000282f7) main_camera2_pane_g7_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g7

0xd032,	// (0x000282f7) main_camera2_pane_g8_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x0002a7f0) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x0002a7f0) main_camera2_pane_g

0x3cf7,	// (0x0001efbc) main_camera2_pane_t1_ParamLimits

0x3cf7,	// (0x0001efbc) main_camera2_pane_t1

0x3cf7,	// (0x0001efbc) main_camera2_pane_t2_ParamLimits

0x3cf7,	// (0x0001efbc) main_camera2_pane_t2

0x3cf7,	// (0x0001efbc) main_camera2_pane_t3_ParamLimits

0x3cf7,	// (0x0001efbc) main_camera2_pane_t3

0x3cf7,	// (0x0001efbc) main_camera2_pane_t4_ParamLimits

0x3cf7,	// (0x0001efbc) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x0002a803) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x0002a803) main_camera2_pane_t

0x3d1f,	// (0x0001efe4) cams_zoom_pane_cp4_ParamLimits

0x3d1f,	// (0x0001efe4) cams_zoom_pane_cp4

0x3b36,	// (0x0001edfb) image2_cif_pane_ParamLimits

0x3b36,	// (0x0001edfb) image2_cif_pane

0x369d,	// (0x0001e962) image2_subqcif_pane_ParamLimits

0x369d,	// (0x0001e962) image2_subqcif_pane

0x3d2d,	// (0x0001eff2) main_video2_pane_g1_ParamLimits

0x3d2d,	// (0x0001eff2) main_video2_pane_g1

0x3d2d,	// (0x0001eff2) main_video2_pane_g2_ParamLimits

0x3d2d,	// (0x0001eff2) main_video2_pane_g2

0x3d2d,	// (0x0001eff2) main_video2_pane_g3_ParamLimits

0x3d2d,	// (0x0001eff2) main_video2_pane_g3

0x3d2d,	// (0x0001eff2) main_video2_pane_g4_ParamLimits

0x3d2d,	// (0x0001eff2) main_video2_pane_g4

0x3d2d,	// (0x0001eff2) main_video2_pane_g5_ParamLimits

0x3d2d,	// (0x0001eff2) main_video2_pane_g5

0x3d2d,	// (0x0001eff2) main_video2_pane_g6_ParamLimits

0x3d2d,	// (0x0001eff2) main_video2_pane_g6

0x0005,

0xf54d,	// (0x0002a812) main_video2_pane_g_ParamLimits

0xf54d,	// (0x0002a812) main_video2_pane_g

0x3d3b,	// (0x0001f000) main_video2_pane_t1_ParamLimits

0x3d3b,	// (0x0001f000) main_video2_pane_t1

0x3d3b,	// (0x0001f000) main_video2_pane_t2_ParamLimits

0x3d3b,	// (0x0001f000) main_video2_pane_t2

0x3d3b,	// (0x0001f000) main_video2_pane_t3_ParamLimits

0x3d3b,	// (0x0001f000) main_video2_pane_t3

0x0002,

0xf55a,	// (0x0002a81f) main_video2_pane_t_ParamLimits

0xf55a,	// (0x0002a81f) main_video2_pane_t

0x7443,	// (0x00022708) call_muted_g2

0x0001,

0xf501,	// (0x0002a7c6) call_muted_g

0xc3fb,	// (0x000276c0) main_mup2_pane

0xc6ed,	// (0x000279b2) main_mup2_pane_g1_ParamLimits

0xc6ed,	// (0x000279b2) main_mup2_pane_g1

0xc6ed,	// (0x000279b2) main_mup2_pane_g2_ParamLimits

0xc6ed,	// (0x000279b2) main_mup2_pane_g2

0x0b41,	// (0x0001be06) main_mup_pane_g13_cp1

0x36ab,	// (0x0001e970) mup_volume_pane_cp1

0xc6ed,	// (0x000279b2) main_mup2_pane_g4_ParamLimits

0xc6ed,	// (0x000279b2) main_mup2_pane_g4

0xc6ed,	// (0x000279b2) main_mup2_pane_g5_ParamLimits

0xc6ed,	// (0x000279b2) main_mup2_pane_g5

0xc6ed,	// (0x000279b2) main_mup2_pane_g6_ParamLimits

0xc6ed,	// (0x000279b2) main_mup2_pane_g6

0xc6ed,	// (0x000279b2) main_mup2_pane_g7_ParamLimits

0xc6ed,	// (0x000279b2) main_mup2_pane_g7

0x0006,

0xf561,	// (0x0002a826) main_mup2_pane_g_ParamLimits

0xf561,	// (0x0002a826) main_mup2_pane_g

0xc6fb,	// (0x000279c0) main_mup2_pane_t1_ParamLimits

0xc6fb,	// (0x000279c0) main_mup2_pane_t1

0xc6fb,	// (0x000279c0) main_mup2_pane_t2_ParamLimits

0xc6fb,	// (0x000279c0) main_mup2_pane_t2

0xc6fb,	// (0x000279c0) main_mup2_pane_t3_ParamLimits

0xc6fb,	// (0x000279c0) main_mup2_pane_t3

0xc6fb,	// (0x000279c0) main_mup2_pane_t4_ParamLimits

0xc6fb,	// (0x000279c0) main_mup2_pane_t4

0xc6fb,	// (0x000279c0) main_mup2_pane_t5_ParamLimits

0xc6fb,	// (0x000279c0) main_mup2_pane_t5

0xc6fb,	// (0x000279c0) main_mup2_pane_t6_ParamLimits

0xc6fb,	// (0x000279c0) main_mup2_pane_t6

0x0005,

0xf570,	// (0x0002a835) main_mup2_pane_t_ParamLimits

0xf570,	// (0x0002a835) main_mup2_pane_t

0xe578,	// (0x0002983d) mup2_visualizer_pane_ParamLimits

0xe578,	// (0x0002983d) mup2_visualizer_pane

0xe578,	// (0x0002983d) mup_progress_pane_cp_ParamLimits

0xe578,	// (0x0002983d) mup_progress_pane_cp

0x3d65,	// (0x0001f02a) mup_volume_pane_cp_ParamLimits

0x3d65,	// (0x0001f02a) mup_volume_pane_cp

0xc6d1,	// (0x00027996) mup2_visualizer_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) mup2_visualizer_pane_g1

0xc6df,	// (0x000279a4) mup2_visualizer_pane_g2_ParamLimits

0xc6df,	// (0x000279a4) mup2_visualizer_pane_g2

0xc6df,	// (0x000279a4) mup2_visualizer_pane_g3_ParamLimits

0xc6df,	// (0x000279a4) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0002a341) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0002a341) mup2_visualizer_pane_g

0xbf9b,	// (0x00027260) aid_size_cell_fmradio

0x3b1f,	// (0x0001ede4) aid_height_parent_landcape

0xcac2,	// (0x00027d87) wml_content_pane_cp

0xcaca,	// (0x00027d8f) wml_tabs_pane

0xcad3,	// (0x00027d98) popup_wml_miniature_window

0xcadb,	// (0x00027da0) scroll_pane_cp021

0xcaef,	// (0x00027db4) wml_content_pane_comp8

0xc3fb,	// (0x000276c0) bg_popup_sub_pane_cp05

0xe5d0,	// (0x00029895) popup_wml_miniature_window_g1

0xe5d8,	// (0x0002989d) wml_miniature_view_pane

0x7706,	// (0x000229cb) aid_size_wml_view

0x770e,	// (0x000229d3) wml_miniature_view_pane_g1

0x7717,	// (0x000229dc) wml_miniature_view_pane_g2

0x7720,	// (0x000229e5) wml_miniature_view_pane_g3

0x7728,	// (0x000229ed) wml_miniature_view_pane_g4

0x7730,	// (0x000229f5) wml_miniature_view_pane_g5

0x7738,	// (0x000229fd) wml_miniature_view_pane_g6

0x7740,	// (0x00022a05) wml_miniature_view_pane_g7

0x7748,	// (0x00022a0d) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x0002a842) wml_miniature_view_pane_g

0xe5e0,	// (0x000298a5) background_graphic_ParamLimits

0xe5e0,	// (0x000298a5) background_graphic

0xe5ec,	// (0x000298b1) wml_tabs_2_pane

0xe5f5,	// (0x000298ba) wml_tabs_3_pane_ParamLimits

0xe5f5,	// (0x000298ba) wml_tabs_3_pane

0xe607,	// (0x000298cc) wml_tabs_4_pane_ParamLimits

0xe607,	// (0x000298cc) wml_tabs_4_pane

0xe61d,	// (0x000298e2) wml_tabs_5_pane_ParamLimits

0xe61d,	// (0x000298e2) wml_tabs_5_pane

0xe637,	// (0x000298fc) wml_tabs_pane_g2_ParamLimits

0xe637,	// (0x000298fc) wml_tabs_pane_g2

0xe64c,	// (0x00029911) wml_tabs_pane_g3_ParamLimits

0xe64c,	// (0x00029911) wml_tabs_pane_g3

0xe661,	// (0x00029926) wml_tabs_2_active_pane_ParamLimits

0xe661,	// (0x00029926) wml_tabs_2_active_pane

0xe661,	// (0x00029926) wml_tabs_2_passive_pane_ParamLimits

0xe661,	// (0x00029926) wml_tabs_2_passive_pane

0x7750,	// (0x00022a15) wml_tabs_3_active_pane_cp_ParamLimits

0x7750,	// (0x00022a15) wml_tabs_3_active_pane_cp

0x7763,	// (0x00022a28) wml_tabs_3_passive_pane_ParamLimits

0x7763,	// (0x00022a28) wml_tabs_3_passive_pane

0x7774,	// (0x00022a39) wml_tabs_3_passive_pane_cp_ParamLimits

0x7774,	// (0x00022a39) wml_tabs_3_passive_pane_cp

0x7789,	// (0x00022a4e) tabs_4_active_pane

0x7791,	// (0x00022a56) tabs_4_passive_pane

0x7799,	// (0x00022a5e) tabs_4_passive_pane_cp

0x77a1,	// (0x00022a66) tabs_4_passive_pane_cp2

0x73b7,	// (0x0002267c) aid_height_text

0xe578,	// (0x0002983d) mup_volume_cont_pane_ParamLimits

0xe578,	// (0x0002983d) mup_volume_cont_pane

0xbf9b,	// (0x00027260) aid_size_cell_pinb

0xbf9b,	// (0x00027260) aid_size_list_pinb

0xe578,	// (0x0002983d) mup2_volume_cont_pane_ParamLimits

0xe578,	// (0x0002983d) mup2_volume_cont_pane

0x3d4f,	// (0x0001f014) mup2_volume_cont_pane_g1_ParamLimits

0x3d4f,	// (0x0001f014) mup2_volume_cont_pane_g1

0x3429,	// (0x0001e6ee) aid_size_cell_touch_ParamLimits

0x3429,	// (0x0001e6ee) aid_size_cell_touch

0x36b5,	// (0x0001e97a) touch_pane_ParamLimits

0x36b5,	// (0x0001e97a) touch_pane

0x36ab,	// (0x0001e970) main_rss2_pane

0xe678,	// (0x0002993d) listscroll_rss2_pane

0xe681,	// (0x00029946) rss2_navigation_pane

0xe689,	// (0x0002994e) list_rss2_pane

0xd116,	// (0x000283db) scroll_pane_cp22

0xe691,	// (0x00029956) rss2_navigation_pane_g1

0xe69a,	// (0x0002995f) rss2_navigation_pane_g2

0xe6a2,	// (0x00029967) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x0002a853) rss2_navigation_pane_g

0xe6aa,	// (0x0002996f) rss2_navigation_pane_t1

0x77ab,	// (0x00022a70) rss2_list_single_pane_ParamLimits

0x77ab,	// (0x00022a70) rss2_list_single_pane

0xe6b8,	// (0x0002997d) rss2_list_single_pane_t2

0xe6c6,	// (0x0002998b) rss2_list_single_pane_t3_ParamLimits

0xe6c6,	// (0x0002998b) rss2_list_single_pane_t3

0xe6e3,	// (0x000299a8) rss2_list_single_pane_t4

0x663e,	// (0x00021903) smil_status_pane_g1

0x3b36,	// (0x0001edfb) main_image2_pane_ParamLimits

0x3b36,	// (0x0001edfb) main_image2_pane

0xd032,	// (0x000282f7) main_camera2_pane_g9_ParamLimits

0xd032,	// (0x000282f7) main_camera2_pane_g9

0x3cf7,	// (0x0001efbc) main_camera2_pane_t5_ParamLimits

0x3cf7,	// (0x0001efbc) main_camera2_pane_t5

0x3d0b,	// (0x0001efd0) main_camera2_pane_t6_ParamLimits

0x3d0b,	// (0x0001efd0) main_camera2_pane_t6

0x77ce,	// (0x00022a93) main_image2_pane_g1_ParamLimits

0x77ce,	// (0x00022a93) main_image2_pane_g1

0x70ec,	// (0x000223b1) smil2_video_pane_ParamLimits

0x70ec,	// (0x000223b1) smil2_video_pane

0x345d,	// (0x0001e722) aid_zoom_text_primary_cp

0x3652,	// (0x0001e917) popup_preview_fixed_window

0xca1c,	// (0x00027ce1) im_reading_pane_g1

0x3ce9,	// (0x0001efae) cams2_bc_adjust_pane_cp_ParamLimits

0x3ce9,	// (0x0001efae) cams2_bc_adjust_pane_cp

0x369d,	// (0x0001e962) cams2_bc_adjust_pane_ParamLimits

0x369d,	// (0x0001e962) cams2_bc_adjust_pane

0x0b41,	// (0x0001be06) cams2_bc_adjust_pane_g1

0x36ab,	// (0x0001e970) cams2_slider_pane

0x0b41,	// (0x0001be06) cams2_slider_pane_g1

0x0b41,	// (0x0001be06) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x0002a85a) cams2_slider_pane_g

0x3726,	// (0x0001e9eb) calc_display_pane_ParamLimits

0x3744,	// (0x0001ea09) calc_paper_pane_ParamLimits

0x3760,	// (0x0001ea25) grid_calc_pane_ParamLimits

0x3a7e,	// (0x0001ed43) popup_clock_digital_window_t1_ParamLimits

0xd4e1,	// (0x000287a6) main_image_pane_t1

0x370c,	// (0x0001e9d1) aid_size_cell_calc_ParamLimits

0x370c,	// (0x0001e9d1) aid_size_cell_calc

0x3b67,	// (0x0001ee2c) popup_blid_sat_info2_window_ParamLimits

0x3b67,	// (0x0001ee2c) popup_blid_sat_info2_window

0xe6f1,	// (0x000299b6) aid_size_cell_blid

0xe578,	// (0x0002983d) bg_popup_window_pane_cp07

0xe70e,	// (0x000299d3) grid_popup_blid_pane

0xe718,	// (0x000299dd) heading_pane_cp05_ParamLimits

0xe718,	// (0x000299dd) heading_pane_cp05

0xe804,	// (0x00029ac9) cell_popup_blid_pane_ParamLimits

0xe804,	// (0x00029ac9) cell_popup_blid_pane

0xe82e,	// (0x00029af3) cell_popup_blid_pane_g1

0xe836,	// (0x00029afb) cell_popup_blid_pane_t1

0xe578,	// (0x0002983d) mup2_indicator_pane_ParamLimits

0xe578,	// (0x0002983d) mup2_indicator_pane

0xbf9b,	// (0x00027260) mup2_visualizer_osc_pane

0xe5ba,	// (0x0002987f) mup2_visualizer_spec_pane_ParamLimits

0xe5ba,	// (0x0002987f) mup2_visualizer_spec_pane

0xbf9b,	// (0x00027260) mup2_spec_half_pane

0xbf9b,	// (0x00027260) mup2_spec_half_pane_cp

0xe844,	// (0x00029b09) mup2_spec_bar_pane_ParamLimits

0xe844,	// (0x00029b09) mup2_spec_bar_pane

0xc70f,	// (0x000279d4) mup2_spec_bar_pane_g1

0xe863,	// (0x00029b28) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x0002a880) mup2_spec_bar_pane_g

0xbf9b,	// (0x00027260) mup2_osc_middle_pane

0xc70f,	// (0x000279d4) mup2_visualizer_osc_pane_g1

0xbfc5,	// (0x0002728a) popup_number_entry_window_t1_ParamLimits

0xbfd8,	// (0x0002729d) popup_number_entry_window_t2_ParamLimits

0xbfea,	// (0x000272af) popup_number_entry_window_t3_ParamLimits

0xbffc,	// (0x000272c1) popup_number_entry_window_t5_ParamLimits

0xbffc,	// (0x000272c1) popup_number_entry_window_t5

0xf01d,	// (0x0002a2e2) popup_number_entry_window_t_ParamLimits

0xc031,	// (0x000272f6) text_title_cp2_ParamLimits

0x3abd,	// (0x0001ed82) aid_hotspot_pointer_text2_pane

0x3b13,	// (0x0001edd8) main_viewer_pane_g9_ParamLimits

0x3b13,	// (0x0001edd8) main_viewer_pane_g9

0xcc6d,	// (0x00027f32) cale_month_pane_t1_ParamLimits

0xccaa,	// (0x00027f6f) bg_cale_pane_ParamLimits

0xccc2,	// (0x00027f87) list_cale_pane_ParamLimits

0xccd3,	// (0x00027f98) listscroll_cale_day_pane_t1

0xcce5,	// (0x00027faa) scroll_pane_cp09_ParamLimits

0x6b14,	// (0x00021dd9) main_mup_eq_pane_t1_ParamLimits

0x6b14,	// (0x00021dd9) main_mup_eq_pane_t1

0x6b30,	// (0x00021df5) main_mup_eq_pane_t2_ParamLimits

0x6b30,	// (0x00021df5) main_mup_eq_pane_t2

0x6b4c,	// (0x00021e11) main_mup_eq_pane_t3_ParamLimits

0x6b4c,	// (0x00021e11) main_mup_eq_pane_t3

0x6b66,	// (0x00021e2b) main_mup_eq_pane_t4_ParamLimits

0x6b66,	// (0x00021e2b) main_mup_eq_pane_t4

0x6b80,	// (0x00021e45) main_mup_eq_pane_t5_ParamLimits

0x6b80,	// (0x00021e45) main_mup_eq_pane_t5

0x6b9a,	// (0x00021e5f) main_mup_eq_pane_t6_ParamLimits

0x6b9a,	// (0x00021e5f) main_mup_eq_pane_t6

0x6bb0,	// (0x00021e75) main_mup_eq_pane_t7_ParamLimits

0x6bb0,	// (0x00021e75) main_mup_eq_pane_t7

0x6bc6,	// (0x00021e8b) main_mup_eq_pane_t8_ParamLimits

0x6bc6,	// (0x00021e8b) main_mup_eq_pane_t8

0x6bdc,	// (0x00021ea1) main_mup_eq_pane_t9_ParamLimits

0x6bdc,	// (0x00021ea1) main_mup_eq_pane_t9

0x6bf8,	// (0x00021ebd) main_mup_eq_pane_t10_ParamLimits

0x6bf8,	// (0x00021ebd) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x0002a641) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x0002a641) main_mup_eq_pane_t

0x6cbd,	// (0x00021f82) mup_equalizer_pane_cp5_ParamLimits

0x6cd5,	// (0x00021f9a) mup_equalizer_pane_cp6_ParamLimits

0x6ced,	// (0x00021fb2) mup_equalizer_pane_cp7_ParamLimits

0x36ab,	// (0x0001e970) main_gallery_pane

0xe54a,	// (0x0002980f) smil2_volume_pane

0xe552,	// (0x00029817) smil_status_volume_pane_g1_ParamLimits

0xe565,	// (0x0002982a) smil_status_volume_pane_g2_ParamLimits

0x3cc7,	// (0x0001ef8c) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x0002a7d9) smil_status_volume_pane_g_ParamLimits

0xe578,	// (0x0002983d) bg_popup_window_pane_cp07_ParamLimits

0xe6f9,	// (0x000299be) blid_firmament_pane

0xc6c3,	// (0x00027988) aid_size_cell_gallery_ParamLimits

0xc6c3,	// (0x00027988) aid_size_cell_gallery

0xc6c3,	// (0x00027988) grid_gallery_pane_ParamLimits

0xc6c3,	// (0x00027988) grid_gallery_pane

0xd307,	// (0x000285cc) cell_gallery_pane_ParamLimits

0xd307,	// (0x000285cc) cell_gallery_pane

0xc3ed,	// (0x000276b2) bg_cell_gallery_focus_pane_ParamLimits

0xc3ed,	// (0x000276b2) bg_cell_gallery_focus_pane

0xc6d1,	// (0x00027996) cell_gallery_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) cell_gallery_pane_g1

0xc6d1,	// (0x00027996) cell_gallery_pane_g2_ParamLimits

0xc6d1,	// (0x00027996) cell_gallery_pane_g2

0xc6d1,	// (0x00027996) cell_gallery_pane_g3_ParamLimits

0xc6d1,	// (0x00027996) cell_gallery_pane_g3

0xc6df,	// (0x000279a4) cell_gallery_pane_g4_ParamLimits

0xc6df,	// (0x000279a4) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x0002a885) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x0002a885) cell_gallery_pane_g

0xe86d,	// (0x00029b32) bg_cell_gallery_focus_pane_g1

0xe875,	// (0x00029b3a) bg_cell_gallery_focus_pane_g2

0xe87d,	// (0x00029b42) bg_cell_gallery_focus_pane_g3

0xe885,	// (0x00029b4a) bg_cell_gallery_focus_pane_g4

0xe88d,	// (0x00029b52) bg_cell_gallery_focus_pane_g5

0xe895,	// (0x00029b5a) bg_cell_gallery_focus_pane_g6

0xe89d,	// (0x00029b62) bg_cell_gallery_focus_pane_g7

0xe8a5,	// (0x00029b6a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x0002a88e) bg_cell_gallery_focus_pane_g

0xe8ad,	// (0x00029b72) aid_firma_cardinal

0xe8c1,	// (0x00029b86) blid_firmament_pane_t1

0xe8d8,	// (0x00029b9d) blid_firmament_pane_t2

0xe8ef,	// (0x00029bb4) blid_firmament_pane_t3

0xe906,	// (0x00029bcb) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x0002a89f) blid_firmament_pane_t

0xe91d,	// (0x00029be2) blid_sat_info_pane

0xc70f,	// (0x000279d4) blid_sat_info_pane_g1

0xc70f,	// (0x000279d4) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0002a351) blid_sat_info_pane_g

0xe92d,	// (0x00029bf2) blid_sat_info_pane_t1

0xe93b,	// (0x00029c00) smil2_volume_content_pane

0xe944,	// (0x00029c09) smil2_volume_pane_g1

0xc7fc,	// (0x00027ac1) smil2_volume_content_pane_g1

0xe94c,	// (0x00029c11) smil2_volume_content_pane_g2

0xe955,	// (0x00029c1a) smil2_volume_content_pane_g3

0xe95e,	// (0x00029c23) smil2_volume_content_pane_g4

0xe967,	// (0x00029c2c) smil2_volume_content_pane_g5

0xe970,	// (0x00029c35) smil2_volume_content_pane_g6

0xe979,	// (0x00029c3e) smil2_volume_content_pane_g7

0xe982,	// (0x00029c47) smil2_volume_content_pane_g8

0xe98b,	// (0x00029c50) smil2_volume_content_pane_g9

0xe994,	// (0x00029c59) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x0002a8a8) smil2_volume_content_pane_g

0x5287,	// (0x0002054c) cale_week_day_heading_pane_t1_ParamLimits

0x52af,	// (0x00020574) cale_week_day_heading_pane_t2_ParamLimits

0x52dc,	// (0x000205a1) cale_week_day_heading_pane_t3_ParamLimits

0x5309,	// (0x000205ce) cale_week_day_heading_pane_t4_ParamLimits

0x5336,	// (0x000205fb) cale_week_day_heading_pane_t5_ParamLimits

0x5363,	// (0x00020628) cale_week_day_heading_pane_t6_ParamLimits

0x5390,	// (0x00020655) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0002a3e9) cale_week_day_heading_pane_t_ParamLimits

0xc906,	// (0x00027bcb) bg_cale_side_pane_ParamLimits

0x388e,	// (0x0001eb53) cale_week_time_pane_t1_ParamLimits

0x38b2,	// (0x0001eb77) cale_week_time_pane_t2_ParamLimits

0x38d6,	// (0x0001eb9b) cale_week_time_pane_t3_ParamLimits

0x38fa,	// (0x0001ebbf) cale_week_time_pane_t4_ParamLimits

0x391e,	// (0x0001ebe3) cale_week_time_pane_t5_ParamLimits

0x3944,	// (0x0001ec09) cale_week_time_pane_t6_ParamLimits

0x396c,	// (0x0001ec31) cale_week_time_pane_t7_ParamLimits

0x3998,	// (0x0001ec5d) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0002a3f8) cale_week_time_pane_t_ParamLimits

0x53b8,	// (0x0002067d) cell_cale_week_pane_g2_ParamLimits

0xc906,	// (0x00027bcb) bg_cale_side_pane_cp01_ParamLimits

0x6461,	// (0x00021726) cale_month_week_pane_t1_ParamLimits

0x647a,	// (0x0002173f) cale_month_week_pane_t2_ParamLimits

0x6493,	// (0x00021758) cale_month_week_pane_t3_ParamLimits

0x64ac,	// (0x00021771) cale_month_week_pane_t4_ParamLimits

0x64c5,	// (0x0002178a) cale_month_week_pane_t5_ParamLimits

0x64e2,	// (0x000217a7) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0002a4c6) cale_month_week_pane_t_ParamLimits

0x39d2,	// (0x0001ec97) cell_cale_month_pane_g1_ParamLimits

0x36ab,	// (0x0001e970) main_cale_event_viewer_pane

0xbf9b,	// (0x00027260) listscroll_cale_event_viewer_pane

0xe99d,	// (0x00029c62) list_cale_ev_pane

0xe9a5,	// (0x00029c6a) scroll_pane_cp023

0x77da,	// (0x00022a9f) field_cale_ev_pane_ParamLimits

0x77da,	// (0x00022a9f) field_cale_ev_pane

0xe9b1,	// (0x00029c76) field_cale_ev_content_pane_ParamLimits

0xe9b1,	// (0x00029c76) field_cale_ev_content_pane

0xe9bd,	// (0x00029c82) field_cale_ev_pane_g1_ParamLimits

0xe9bd,	// (0x00029c82) field_cale_ev_pane_g1

0xe9c9,	// (0x00029c8e) field_cale_ev_pane_g2_ParamLimits

0xe9c9,	// (0x00029c8e) field_cale_ev_pane_g2

0xe9e1,	// (0x00029ca6) field_cale_ev_pane_g3_ParamLimits

0xe9e1,	// (0x00029ca6) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x0002a8bd) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x0002a8bd) field_cale_ev_pane_g

0xe9f9,	// (0x00029cbe) field_cale_ev_pane_t1_ParamLimits

0xe9f9,	// (0x00029cbe) field_cale_ev_pane_t1

0x77fe,	// (0x00022ac3) field_cale_ev_content_pane_t1_ParamLimits

0x77fe,	// (0x00022ac3) field_cale_ev_content_pane_t1

0xd3ce,	// (0x00028693) bg_button_pane_cp01

0x3873,	// (0x0001eb38) listscroll_cale_week_pane_ParamLimits

0x3885,	// (0x0001eb4a) popup_toolbar_window_cp01

0xc8d7,	// (0x00027b9c) listscroll_cale_week_pane_t1_ParamLimits

0x66a5,	// (0x0002196a) listscroll_cale_day_pane_ParamLimits

0xcc01,	// (0x00027ec6) popup_toolbar_window_cp02

0xccd3,	// (0x00027f98) listscroll_cale_day_pane_t1_ParamLimits

0x3873,	// (0x0001eb38) main_cale_month_pane_ParamLimits

0x3c86,	// (0x0001ef4b) popup_toolbar_window_cp03_ParamLimits

0x3c86,	// (0x0001ef4b) popup_toolbar_window_cp03

0x6ffc,	// (0x000222c1) main_image_pane_g2_ParamLimits

0x6ffc,	// (0x000222c1) main_image_pane_g2

0x7008,	// (0x000222cd) main_image_pane_g3_ParamLimits

0x7008,	// (0x000222cd) main_image_pane_g3

0x0002,

0xf40e,	// (0x0002a6d3) main_image_pane_g_ParamLimits

0xf40e,	// (0x0002a6d3) main_image_pane_g

0xd4e1,	// (0x000287a6) main_image_pane_t1_ParamLimits

0x7014,	// (0x000222d9) main_image_pane_t2_ParamLimits

0x7014,	// (0x000222d9) main_image_pane_t2

0x7026,	// (0x000222eb) main_image_pane_t3_ParamLimits

0x7026,	// (0x000222eb) main_image_pane_t3

0x7038,	// (0x000222fd) main_image_pane_t4_ParamLimits

0x7038,	// (0x000222fd) main_image_pane_t4

0x0003,

0xf415,	// (0x0002a6da) main_image_pane_t_ParamLimits

0xf415,	// (0x0002a6da) main_image_pane_t

0x704a,	// (0x0002230f) popup_image_details_window_cp01

0x7054,	// (0x00022319) popup_toobar_trans_pane_cp01_ParamLimits

0x7054,	// (0x00022319) popup_toobar_trans_pane_cp01

0x3bc8,	// (0x0001ee8d) popup_image_details_window_ParamLimits

0x3bc8,	// (0x0001ee8d) popup_image_details_window

0x3bd6,	// (0x0001ee9b) popup_image_focus_window

0x369d,	// (0x0001e962) camera2_autofocus_pane_ParamLimits

0x369d,	// (0x0001e962) camera2_autofocus_pane

0xbf9b,	// (0x00027260) bg_popup_sub_pane_cp06

0xea10,	// (0x00029cd5) popup_image_focus_window_g1

0xea18,	// (0x00029cdd) popup_image_focus_window_g2

0xea20,	// (0x00029ce5) popup_image_focus_window_g3

0xea28,	// (0x00029ced) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x0002a8c4) popup_image_focus_window_g

0xea30,	// (0x00029cf5) popup_image_focus_window_t1

0xea3e,	// (0x00029d03) popup_image_focus_window_t2

0xea4e,	// (0x00029d13) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x0002a8cd) popup_image_focus_window_t

0xc6d1,	// (0x00027996) camera2_autofocus_pane_g1

0xc3ed,	// (0x000276b2) bg_tb_trans_pane_cp01

0xea5c,	// (0x00029d21) popup_image_details_window_g1

0xea6f,	// (0x00029d34) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x0002a8df) popup_image_details_window_g

0xea98,	// (0x00029d5d) popup_image_details_window_t1

0xeaaa,	// (0x00029d6f) popup_image_details_window_t2

0xeac3,	// (0x00029d88) popup_image_details_window_t3

0xead7,	// (0x00029d9c) popup_image_details_window_t4

0xeaf2,	// (0x00029db7) popup_image_details_window_t5

0x0004,

0xf621,	// (0x0002a8e6) popup_image_details_window_t

0xc759,	// (0x00027a1e) bg_calc_paper_pane_ParamLimits

0x36ab,	// (0x0001e970) grid_highlight_pane_cp013

0x378c,	// (0x0001ea51) list_calc_pane_ParamLimits

0x379e,	// (0x0001ea63) scroll_pane_cp024

0xc76d,	// (0x00027a32) bg_calc_display_pane_ParamLimits

0x37a6,	// (0x0001ea6b) calc_display_pane_t1_ParamLimits

0x37bb,	// (0x0001ea80) calc_display_pane_t2_ParamLimits

0x37d0,	// (0x0001ea95) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0002a369) calc_display_pane_t_ParamLimits

0x383b,	// (0x0001eb00) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0002a386) cell_calc_pane_g

0x3844,	// (0x0001eb09) cell_calc_pane_t1

0xc7c2,	// (0x00027a87) grid_highlight_pane_cp02_ParamLimits

0xc7d8,	// (0x00027a9d) toolbar_button_pane_cp01_ParamLimits

0xc7d8,	// (0x00027a9d) toolbar_button_pane_cp01

0xd526,	// (0x000287eb) temp_image_control_pane_ParamLimits

0xd526,	// (0x000287eb) temp_image_control_pane

0x3b36,	// (0x0001edfb) main_mp3_pane

0xeb0c,	// (0x00029dd1) temp_image_control_pane_g1_ParamLimits

0xeb0c,	// (0x00029dd1) temp_image_control_pane_g1

0xeb1a,	// (0x00029ddf) temp_image_control_pane_g2_ParamLimits

0xeb1a,	// (0x00029ddf) temp_image_control_pane_g2

0xeb2c,	// (0x00029df1) temp_image_control_pane_g3_ParamLimits

0xeb2c,	// (0x00029df1) temp_image_control_pane_g3

0x7819,	// (0x00022ade) temp_image_control_pane_g4_ParamLimits

0x7819,	// (0x00022ade) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x0002a8f1) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x0002a8f1) temp_image_control_pane_g

0xeb0c,	// (0x00029dd1) main_mp3_pane_g1

0x782a,	// (0x00022aef) main_mp3_pane_g2

0x0007,

0xf635,	// (0x0002a8fa) main_mp3_pane_g

0xeb61,	// (0x00029e26) main_mp3_pane_t1

0xc6df,	// (0x000279a4) main_camera_pane_g8_ParamLimits

0xc6df,	// (0x000279a4) main_camera_pane_g8

0x555a,	// (0x0002081f) main_video_pane_g7_ParamLimits

0x555a,	// (0x0002081f) main_video_pane_g7

0x3cf7,	// (0x0001efbc) main_camera2_pane_t7_ParamLimits

0x3cf7,	// (0x0001efbc) main_camera2_pane_t7

0xca82,	// (0x00027d47) scroll_pane_cp025_ParamLimits

0xca82,	// (0x00027d47) scroll_pane_cp025

0xca96,	// (0x00027d5b) scroll_pane_cp026_ParamLimits

0xca96,	// (0x00027d5b) scroll_pane_cp026

0xcaa5,	// (0x00027d6a) wml_content_pane_ParamLimits

0x36ab,	// (0x0001e970) main_touch_calib_pane

0x78ce,	// (0x00022b93) main_touch_calib_pane_g1

0x78da,	// (0x00022b9f) main_touch_calib_pane_g2

0x78e6,	// (0x00022bab) main_touch_calib_pane_g3

0x78f2,	// (0x00022bb7) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x0002a918) main_touch_calib_pane_g

0x78fe,	// (0x00022bc3) main_touch_calib_pane_t1

0x7915,	// (0x00022bda) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x0002a921) main_touch_calib_pane_t

0xd191,	// (0x00028456) mup_progress_pane_cp02

0xd1b0,	// (0x00028475) navi_pane_g1

0xd212,	// (0x000284d7) navi_pane_mp_t3

0x3b36,	// (0x0001edfb) main_mp3_pane_ParamLimits

0x7559,	// (0x0002281e) navi_pane_ParamLimits

0xeb0c,	// (0x00029dd1) main_mp3_pane_g1_ParamLimits

0x782a,	// (0x00022aef) main_mp3_pane_g2_ParamLimits

0x7836,	// (0x00022afb) main_mp3_pane_g3_ParamLimits

0x7836,	// (0x00022afb) main_mp3_pane_g3

0x7842,	// (0x00022b07) main_mp3_pane_g4_ParamLimits

0x7842,	// (0x00022b07) main_mp3_pane_g4

0xc6d1,	// (0x00027996) main_mp3_pane_g5_ParamLimits

0xc6d1,	// (0x00027996) main_mp3_pane_g5

0xeb3c,	// (0x00029e01) main_mp3_pane_g6_ParamLimits

0xeb3c,	// (0x00029e01) main_mp3_pane_g6

0xeb49,	// (0x00029e0e) main_mp3_pane_g7_ParamLimits

0xeb49,	// (0x00029e0e) main_mp3_pane_g7

0xeb55,	// (0x00029e1a) main_mp3_pane_g8_ParamLimits

0xeb55,	// (0x00029e1a) main_mp3_pane_g8

0xf635,	// (0x0002a8fa) main_mp3_pane_g_ParamLimits

0x784e,	// (0x00022b13) main_mp3_pane_t2

0x785e,	// (0x00022b23) main_mp3_pane_t3

0xeb6f,	// (0x00029e34) main_mp3_pane_t4

0xeb7d,	// (0x00029e42) main_mp3_pane_t5

0x0005,

0xf646,	// (0x0002a90b) main_mp3_pane_t

0xeb8b,	// (0x00029e50) mup_progress_pane_cp01

0x345d,	// (0x0001e722) aid_zoom_text_secondary2

0xe99d,	// (0x00029c62) list_cale_ev2_pane

0xe9a5,	// (0x00029c6a) scroll_pane_cp023_ParamLimits

0x7970,	// (0x00022c35) field_cale_ev2_pane_ParamLimits

0x7970,	// (0x00022c35) field_cale_ev2_pane

0x798b,	// (0x00022c50) field_cale_ev2_pane_g1_ParamLimits

0x798b,	// (0x00022c50) field_cale_ev2_pane_g1

0x7997,	// (0x00022c5c) field_cale_ev2_pane_g2_ParamLimits

0x7997,	// (0x00022c5c) field_cale_ev2_pane_g2

0x79af,	// (0x00022c74) field_cale_ev2_pane_g3_ParamLimits

0x79af,	// (0x00022c74) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x0002a92c) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x0002a92c) field_cale_ev2_pane_g

0x79c7,	// (0x00022c8c) field_cale_ev2_pane_t1_ParamLimits

0x79c7,	// (0x00022c8c) field_cale_ev2_pane_t1

0x79de,	// (0x00022ca3) field_cale_ev2_pane_t2_ParamLimits

0x79de,	// (0x00022ca3) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x0002a935) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x0002a935) field_cale_ev2_pane_t

0x6f04,	// (0x000221c9) main_postcard_pane_g5_ParamLimits

0x6f04,	// (0x000221c9) main_postcard_pane_g5

0x6f12,	// (0x000221d7) main_postcard_pane_g6_ParamLimits

0x6f12,	// (0x000221d7) main_postcard_pane_g6

0xc6c3,	// (0x00027988) camera2_autofocus_pane_cp_ParamLimits

0xc6c3,	// (0x00027988) camera2_autofocus_pane_cp

0x3b36,	// (0x0001edfb) main_mup3_pane

0x7a36,	// (0x00022cfb) main_mup3_pane_g1_ParamLimits

0x7a36,	// (0x00022cfb) main_mup3_pane_g1

0x7a85,	// (0x00022d4a) main_mup3_pane_g2_ParamLimits

0x7a85,	// (0x00022d4a) main_mup3_pane_g2

0x7ae0,	// (0x00022da5) main_mup3_pane_g3_ParamLimits

0x7ae0,	// (0x00022da5) main_mup3_pane_g3

0x7b43,	// (0x00022e08) main_mup3_pane_g4_ParamLimits

0x7b43,	// (0x00022e08) main_mup3_pane_g4

0x7ba6,	// (0x00022e6b) main_mup3_pane_g5_ParamLimits

0x7ba6,	// (0x00022e6b) main_mup3_pane_g5

0x7c09,	// (0x00022ece) main_mup3_pane_g6_ParamLimits

0x7c09,	// (0x00022ece) main_mup3_pane_g6

0xc6df,	// (0x000279a4) main_mup3_pane_g7_ParamLimits

0xc6df,	// (0x000279a4) main_mup3_pane_g7

0x0007,

0xf680,	// (0x0002a945) main_mup3_pane_g_ParamLimits

0xf680,	// (0x0002a945) main_mup3_pane_g

0x7c81,	// (0x00022f46) main_mup3_pane_t1_ParamLimits

0x7c81,	// (0x00022f46) main_mup3_pane_t1

0x7d5a,	// (0x0002301f) main_mup3_pane_t2_ParamLimits

0x7d5a,	// (0x0002301f) main_mup3_pane_t2

0x7e37,	// (0x000230fc) main_mup3_pane_t4_ParamLimits

0x7e37,	// (0x000230fc) main_mup3_pane_t4

0x7e49,	// (0x0002310e) main_mup3_pane_t5_ParamLimits

0x7e49,	// (0x0002310e) main_mup3_pane_t5

0x7f17,	// (0x000231dc) main_mup3_pane_t6_ParamLimits

0x7f17,	// (0x000231dc) main_mup3_pane_t6

0x0005,

0xf691,	// (0x0002a956) main_mup3_pane_t_ParamLimits

0xf691,	// (0x0002a956) main_mup3_pane_t

0x7fb4,	// (0x00023279) mup3_progress_pane_ParamLimits

0x7fb4,	// (0x00023279) mup3_progress_pane

0x0777,	// (0x0001ba3c) popup_mup3_control_window_ParamLimits

0x0777,	// (0x0001ba3c) popup_mup3_control_window

0xeb9f,	// (0x00029e64) popup_mup3_text_window

0x8017,	// (0x000232dc) mup3_progress_pane_t1

0x802d,	// (0x000232f2) mup3_progress_pane_t2

0xeba7,	// (0x00029e6c) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x0002a963) mup3_progress_pane_t

0xebbe,	// (0x00029e83) mup_progress_pane_cp03

0xebcf,	// (0x00029e94) bg_tb_trans_pane_cp04

0xebcf,	// (0x00029e94) mup3_volume_pane

0xebd7,	// (0x00029e9c) popup_mup3_control_window_g1

0xebd7,	// (0x00029e9c) mup3_volume_pane_g1

0xebd7,	// (0x00029e9c) mup3_volume_pane_g2

0xebd7,	// (0x00029e9c) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x0002a96a) mup3_volume_pane_g

0xbf9b,	// (0x00027260) bg_tb_trans_pane_cp03

0xebdf,	// (0x00029ea4) popup_mup3_text_window_g1

0xebe7,	// (0x00029eac) popup_mup3_text_window_t1

0xc7b5,	// (0x00027a7a) list_calc_item_pane_g1_ParamLimits

0xe66f,	// (0x00029934) mup_volume_pane_cp_g1

0x792e,	// (0x00022bf3) main_touch_calib_pane_t3

0x7944,	// (0x00022c09) main_touch_calib_pane_t4

0x795a,	// (0x00022c1f) main_touch_calib_pane_t5

0x3415,	// (0x0001e6da) aid_cell_size_toolbar2

0x341d,	// (0x0001e6e2) aid_popup3_width_pane

0x345d,	// (0x0001e722) aid_zoom_text_msg_primary

0x5464,	// (0x00020729) vorec_t7

0xc779,	// (0x00027a3e) bg_calc_paper_pane_g1_ParamLimits

0xc785,	// (0x00027a4a) bg_calc_paper_pane_g2_ParamLimits

0xc791,	// (0x00027a56) bg_calc_paper_pane_g3_ParamLimits

0xc79d,	// (0x00027a62) bg_calc_paper_pane_g4_ParamLimits

0xc7a9,	// (0x00027a6e) bg_calc_paper_pane_g5_ParamLimits

0x4dd4,	// (0x00020099) bg_calc_paper_pane_g6_ParamLimits

0x4de5,	// (0x000200aa) bg_calc_paper_pane_g7_ParamLimits

0x4df6,	// (0x000200bb) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0002a370) bg_calc_paper_pane_g_ParamLimits

0x4e07,	// (0x000200cc) calc_bg_paper_pane_g9_ParamLimits

0xc6c3,	// (0x00027988) image_qvga_pane_ParamLimits

0xc6c3,	// (0x00027988) image_qvga_pane

0xc656,	// (0x0002791b) bg_popup_sub_pane_cp04_ParamLimits

0xd45d,	// (0x00028722) popup_mup_playback_window_g1_ParamLimits

0xd469,	// (0x0002872e) popup_mup_playback_window_t1_ParamLimits

0xd47e,	// (0x00028743) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x0002a6ce) popup_mup_playback_window_t_ParamLimits

0xc6d1,	// (0x00027996) main_mup2_pane_g3_ParamLimits

0xc6d1,	// (0x00027996) main_mup2_pane_g3

0x56fb,	// (0x000209c0) popup_toolbar_window_cp04

0xd802,	// (0x00028ac7) popup_call2_audio_second_window_g3_ParamLimits

0xd802,	// (0x00028ac7) popup_call2_audio_second_window_g3

0xdc1a,	// (0x00028edf) popup_call2_audio_first_window_g4_ParamLimits

0xdc1a,	// (0x00028edf) popup_call2_audio_first_window_g4

0xe241,	// (0x00029506) popup_call2_audio_in_window_g4_ParamLimits

0xe241,	// (0x00029506) popup_call2_audio_in_window_g4

0x6fef,	// (0x000222b4) aid_area_sk_bg_cut_ParamLimits

0x6fef,	// (0x000222b4) aid_area_sk_bg_cut

0xd493,	// (0x00028758) aid_area_sk_bg_cut_2_ParamLimits

0xd493,	// (0x00028758) aid_area_sk_bg_cut_2

0xbf9b,	// (0x00027260) aid_placing_details_win

0xbf9b,	// (0x00027260) aid_placing_details_win_2

0xc6d1,	// (0x00027996) camera2_autofocus_pane_g1_ParamLimits

0x3643,	// (0x0001e908) popup_fixed_preview_cale_window_ParamLimits

0x3643,	// (0x0001e908) popup_fixed_preview_cale_window

0xd259,	// (0x0002851e) navi_slider_pane_g3

0xd262,	// (0x00028527) navi_slider_pane_g4

0xd26b,	// (0x00028530) navi_slider_pane_g5

0xd259,	// (0x0002851e) navi_slider_pane_g6

0x3aa4,	// (0x0001ed69) navi_slider_pane_g7

0xd39b,	// (0x00028660) mup_scale_pane_g3

0xd3a4,	// (0x00028669) mup_scale_pane_g4

0xd3ad,	// (0x00028672) mup_scale_pane_g5

0x6d05,	// (0x00021fca) mup_scale_pane_g6

0x6d0e,	// (0x00021fd3) mup_scale_pane_g7

0x0b41,	// (0x0001be06) cams2_slider_pane_g3

0x0b41,	// (0x0001be06) cams2_slider_pane_g4

0x0b41,	// (0x0001be06) cams2_slider_pane_g5

0x0b41,	// (0x0001be06) cams2_slider_pane_g6

0x0b41,	// (0x0001be06) cams2_slider_pane_g7

0xc70f,	// (0x000279d4) camera2_autofocus_pane_cp_g1

0xe4d1,	// (0x00029796) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4d1,	// (0x00029796) bg_popup_preview_window_pane_cp02

0xebf5,	// (0x00029eba) list_fp_cale_pane_ParamLimits

0xebf5,	// (0x00029eba) list_fp_cale_pane

0xec01,	// (0x00029ec6) popup_fixed_preview_cale_window_t1_ParamLimits

0xec01,	// (0x00029ec6) popup_fixed_preview_cale_window_t1

0x8043,	// (0x00023308) popup_fixed_preview_cale_window_t2_ParamLimits

0x8043,	// (0x00023308) popup_fixed_preview_cale_window_t2

0x8058,	// (0x0002331d) popup_fixed_preview_cale_window_t3_ParamLimits

0x8058,	// (0x0002331d) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x0002a971) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x0002a971) popup_fixed_preview_cale_window_t

0x806d,	// (0x00023332) list_single_fp_cale_pane_ParamLimits

0x806d,	// (0x00023332) list_single_fp_cale_pane

0xec1f,	// (0x00029ee4) list_single_fp_cale_pane_g1_ParamLimits

0xec1f,	// (0x00029ee4) list_single_fp_cale_pane_g1

0xec2b,	// (0x00029ef0) list_single_fp_cale_pane_g2_ParamLimits

0xec2b,	// (0x00029ef0) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x0002a978) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x0002a978) list_single_fp_cale_pane_g

0xec44,	// (0x00029f09) list_single_fp_cale_pane_t1_ParamLimits

0xec44,	// (0x00029f09) list_single_fp_cale_pane_t1

0xec56,	// (0x00029f1b) list_single_fp_cale_pane_t2_ParamLimits

0xec56,	// (0x00029f1b) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x0002a97f) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x0002a97f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x36ab,	// (0x0001e970) main_dialer_pane

0xbf9b,	// (0x00027260) aid_cell_size_keypad

0xbf9b,	// (0x00027260) dialer_ne_pane

0xbf9b,	// (0x00027260) grid_dialer_command_1_pane

0xbf9b,	// (0x00027260) grid_dialer_command_2_pane

0xbf9b,	// (0x00027260) grid_dialer_keypad_pane

0xe578,	// (0x0002983d) bg_popup_call_pane_cp06_ParamLimits

0xe578,	// (0x0002983d) bg_popup_call_pane_cp06

0xe578,	// (0x0002983d) dialer_ne_clear_pane_ParamLimits

0xe578,	// (0x0002983d) dialer_ne_clear_pane

0xc70f,	// (0x000279d4) dialer_ne_pane_g1

0xc72d,	// (0x000279f2) dialer_ne_pane_t1_ParamLimits

0xc72d,	// (0x000279f2) dialer_ne_pane_t1

0xeca0,	// (0x00029f65) dialer_ne_pane_t2_ParamLimits

0xeca0,	// (0x00029f65) dialer_ne_pane_t2

0x807d,	// (0x00023342) dialer_ne_pane_t3_ParamLimits

0x807d,	// (0x00023342) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x0002a984) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x0002a984) dialer_ne_pane_t

0x807d,	// (0x00023342) dialer_ne_pane_t3_copy1_ParamLimits

0x807d,	// (0x00023342) dialer_ne_pane_t3_copy1

0xec89,	// (0x00029f4e) cell_dialer_keypad_pane_ParamLimits

0xec89,	// (0x00029f4e) cell_dialer_keypad_pane

0xc3ed,	// (0x000276b2) cell_dialer_command_1_pane_ParamLimits

0xc3ed,	// (0x000276b2) cell_dialer_command_1_pane

0xecbd,	// (0x00029f82) cell_dialer_command_2_pane_ParamLimits

0xecbd,	// (0x00029f82) cell_dialer_command_2_pane

0xc3ed,	// (0x000276b2) bg_button_pane_cp02_ParamLimits

0xc3ed,	// (0x000276b2) bg_button_pane_cp02

0xc6d1,	// (0x00027996) cell_dialer_keypad_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) cell_dialer_keypad_pane_g1

0xc3ed,	// (0x000276b2) bg_button_pane_cp03_ParamLimits

0xc3ed,	// (0x000276b2) bg_button_pane_cp03

0xc6d1,	// (0x00027996) cell_dialer_command_1_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) cell_dialer_command_1_pane_g1

0xbf9b,	// (0x00027260) bg_button_pane_cp04

0xc70f,	// (0x000279d4) cell_dialer_command_2_pane_g1

0xbf9b,	// (0x00027260) bg_button_pane_cp06

0xc70f,	// (0x000279d4) dialer_ne_clear_pane_g1

0x6a35,	// (0x00021cfa) navi_pane_g2

0x6a63,	// (0x00021d28) navi_pane_g3

0x0002,

0xf311,	// (0x0002a5d6) navi_pane_g

0x6a8e,	// (0x00021d53) navi_pane_mv_g2

0x6ab5,	// (0x00021d7a) navi_pane_mv_g5

0x6abd,	// (0x00021d82) navi_pane_mv_t1

0xc76d,	// (0x00027a32) main_clock2_pane

0xc6c3,	// (0x00027988) main_clock2_list_pane_ParamLimits

0xc6c3,	// (0x00027988) main_clock2_list_pane

0x80f2,	// (0x000233b7) main_clock2_pane_t1_ParamLimits

0x80f2,	// (0x000233b7) main_clock2_pane_t1

0x8120,	// (0x000233e5) main_clock2_pane_t2_ParamLimits

0x8120,	// (0x000233e5) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x0002a990) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x0002a990) main_clock2_pane_t

0x8185,	// (0x0002344a) popup_clock_analogue_window_cp03_ParamLimits

0x8185,	// (0x0002344a) popup_clock_analogue_window_cp03

0x81a3,	// (0x00023468) popup_clock_digital_window_cp02_ParamLimits

0x81a3,	// (0x00023468) popup_clock_digital_window_cp02

0x81e3,	// (0x000234a8) main_clock2_list_single_pane_ParamLimits

0x81e3,	// (0x000234a8) main_clock2_list_single_pane

0xc961,	// (0x00027c26) list_highlight_pane_cp05

0xecfe,	// (0x00029fc3) main_clock2_list_single_pane_t1

0x56fb,	// (0x000209c0) popup_toolbar_window_cp04_ParamLimits

0xc6df,	// (0x000279a4) camera2_autofocus_pane_g2_ParamLimits

0xc6df,	// (0x000279a4) camera2_autofocus_pane_g2

0xc6df,	// (0x000279a4) camera2_autofocus_pane_g3_ParamLimits

0xc6df,	// (0x000279a4) camera2_autofocus_pane_g3

0xc6df,	// (0x000279a4) camera2_autofocus_pane_g4_ParamLimits

0xc6df,	// (0x000279a4) camera2_autofocus_pane_g4

0xc6df,	// (0x000279a4) camera2_autofocus_pane_g5_ParamLimits

0xc6df,	// (0x000279a4) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x0002a8d4) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x0002a8d4) camera2_autofocus_pane_g

0x79f3,	// (0x00022cb8) camera2_autofocus_pane_cp_g2

0x79fb,	// (0x00022cc0) camera2_autofocus_pane_cp_g3

0x7a03,	// (0x00022cc8) camera2_autofocus_pane_cp_g4

0x7a0b,	// (0x00022cd0) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x0002a93a) camera2_autofocus_pane_cp_g

0xbf9b,	// (0x00027260) popup_dialer_spcha_window

0xbf9b,	// (0x00027260) bg_popup_sub_pane_cp07

0xbf9b,	// (0x00027260) list_spcha_pane

0xed0c,	// (0x00029fd1) list_single_spcha_pane_ParamLimits

0xed0c,	// (0x00029fd1) list_single_spcha_pane

0xbf9b,	// (0x00027260) list_highlight_pane_cp06

0xce7c,	// (0x00028141) list_single_spcha_pane_t1

0xdfeb,	// (0x000292b0) popup_call2_audio_out_window_g4_ParamLimits

0xdfeb,	// (0x000292b0) popup_call2_audio_out_window_g4

0x36ab,	// (0x0001e970) main_imed2_pane

0x3be0,	// (0x0001eea5) popup_imed_adjust2_window

0x3bf3,	// (0x0001eeb8) popup_imed_trans_window_ParamLimits

0x3bf3,	// (0x0001eeb8) popup_imed_trans_window

0xe744,	// (0x00029a09) popup_blid_sat_info2_window_t1

0xe752,	// (0x00029a17) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x0002a869) popup_blid_sat_info2_window_t

0x81f5,	// (0x000234ba) aid_size_cell_colour_35

0x820f,	// (0x000234d4) aid_size_cell_colour_112

0x8226,	// (0x000234eb) aid_size_cell_effect

0xc3ed,	// (0x000276b2) bg_tb_trans_pane_cp02

0xcfdd,	// (0x000282a2) heading_imed_pane

0x8240,	// (0x00023505) listscroll_imed_pane

0xed1e,	// (0x00029fe3) heading_imed_pane_g1

0xed26,	// (0x00029feb) heading_imed_pane_t1

0xed34,	// (0x00029ff9) grid_imed_colour_35_pane_ParamLimits

0xed34,	// (0x00029ff9) grid_imed_colour_35_pane

0x824c,	// (0x00023511) grid_imed_effect_pane

0xed50,	// (0x0002a015) list_imed_aspect_pane

0x825c,	// (0x00023521) scroll_pane_cp027_ParamLimits

0x825c,	// (0x00023521) scroll_pane_cp027

0x8268,	// (0x0002352d) cell_imed_effect_pane_ParamLimits

0x8268,	// (0x0002352d) cell_imed_effect_pane

0xed58,	// (0x0002a01d) cell_imed_colour_pane_ParamLimits

0xed58,	// (0x0002a01d) cell_imed_colour_pane

0xeda2,	// (0x0002a067) cell_imed_colour_pane_g1_ParamLimits

0xeda2,	// (0x0002a067) cell_imed_colour_pane_g1

0xedb3,	// (0x0002a078) hgihlgiht_grid_pane_cp016_ParamLimits

0xedb3,	// (0x0002a078) hgihlgiht_grid_pane_cp016

0x8284,	// (0x00023549) cell_imed_effect_pane_g1

0x828c,	// (0x00023551) grid_highlight_pane_cp017

0xedc4,	// (0x0002a089) list_imed_single_pane_ParamLimits

0xedc4,	// (0x0002a089) list_imed_single_pane

0xbf9b,	// (0x00027260) list_highlight_pane_cp07

0xedd8,	// (0x0002a09d) list_imed_aspect_pane_comp1_t1

0xd307,	// (0x000285cc) bg_tb_trans_pane_cp05

0xedfa,	// (0x0002a0bf) popup_imed_adjust2_window_g1

0xee21,	// (0x0002a0e6) popup_imed_adjust2_window_t1

0xee39,	// (0x0002a0fe) slider_imed_adjust_pane

0xee4d,	// (0x0002a112) slider_imed_adjust_pane_g1

0xee5d,	// (0x0002a122) slider_imed_adjust_pane_g2

0xee6d,	// (0x0002a132) slider_imed_adjust_pane_g3

0xee7e,	// (0x0002a143) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x0002a9ad) slider_imed_adjust_pane_g

0x8295,	// (0x0002355a) aid_size_cell_clipart2

0xee8f,	// (0x0002a154) grid_imed_clipart_pane

0xd3be,	// (0x00028683) scroll_pane_cp031

0x82a1,	// (0x00023566) cell_imed_clipart_pane_ParamLimits

0x82a1,	// (0x00023566) cell_imed_clipart_pane

0x82bf,	// (0x00023584) cell_imed_clipart_pane_g1

0xbf9b,	// (0x00027260) grid_highlight_pane_cp014

0x80d4,	// (0x00023399) main_clock2_pane_g1_ParamLimits

0x80d4,	// (0x00023399) main_clock2_pane_g1

0x81bf,	// (0x00023484) aid_call2_pane_cp10

0x81d1,	// (0x00023496) aid_call_pane_cp10

0xd185,	// (0x0002844a) popup_clock_analogue_window_cp10_g1

0xd185,	// (0x0002844a) popup_clock_analogue_window_cp10_g2

0x3d7b,	// (0x0001f040) popup_clock_analogue_window_cp10_g3

0x3d7b,	// (0x0001f040) popup_clock_analogue_window_cp10_g4

0xd185,	// (0x0002844a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x0002a99b) popup_clock_analogue_window_cp10_g

0x3d91,	// (0x0001f056) popup_clock_analogue_window_cp10_t1

0x3db0,	// (0x0001f075) clock_digital_number_pane_cp10_ParamLimits

0x3db0,	// (0x0001f075) clock_digital_number_pane_cp10

0x3dca,	// (0x0001f08f) clock_digital_number_pane_cp11_ParamLimits

0x3dca,	// (0x0001f08f) clock_digital_number_pane_cp11

0x3de4,	// (0x0001f0a9) clock_digital_number_pane_cp12_ParamLimits

0x3de4,	// (0x0001f0a9) clock_digital_number_pane_cp12

0x3dfe,	// (0x0001f0c3) clock_digital_number_pane_cp13_ParamLimits

0x3dfe,	// (0x0001f0c3) clock_digital_number_pane_cp13

0x3e1a,	// (0x0001f0df) clock_digital_separator_pane_cp10_ParamLimits

0x3e1a,	// (0x0001f0df) clock_digital_separator_pane_cp10

0x3e34,	// (0x0001f0f9) popup_clock_digital_window_cp02_t1_ParamLimits

0x3e34,	// (0x0001f0f9) popup_clock_digital_window_cp02_t1

0xc64e,	// (0x00027913) clock_digital_number_pane_cp10_g1

0xc64e,	// (0x00027913) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x0002a9b6) clock_digital_number_pane_cp10_g

0xc64e,	// (0x00027913) clock_digital_separator_pane_cp10_g1

0xc64e,	// (0x00027913) clock_digital_separator_pane_g2_cp10

0xd220,	// (0x000284e5) navi_pane_vded_g4

0xd229,	// (0x000284ee) navi_pane_vded_g5

0xd232,	// (0x000284f7) navi_pane_vded_t1

0x36ab,	// (0x0001e970) main_vded_pane

0x82c8,	// (0x0002358d) main_vded_pane_g1

0x82d4,	// (0x00023599) main_vded_pane_g2

0x82de,	// (0x000235a3) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x0002a9bb) main_vded_pane_g

0x82e8,	// (0x000235ad) main_vded_pane_t1

0x82f6,	// (0x000235bb) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x0002a9c2) main_vded_pane_t

0x8304,	// (0x000235c9) vded_slider_pane

0x830e,	// (0x000235d3) vded_video_pane

0xee99,	// (0x0002a15e) vded_video_pane_g1

0x831a,	// (0x000235df) vded_video_pane_g2

0xc70f,	// (0x000279d4) vded_video_pane_g3

0x0002,

0xf702,	// (0x0002a9c7) vded_video_pane_g

0xeea3,	// (0x0002a168) vded_slider_pane_g1

0xe66f,	// (0x00029934) vded_slider_pane_g2

0xeeac,	// (0x0002a171) vded_slider_pane_g3

0xeeb5,	// (0x0002a17a) vded_slider_pane_g4

0xeebe,	// (0x0002a183) vded_slider_pane_g5

0x0004,

0xf709,	// (0x0002a9ce) vded_slider_pane_g

0x0777,	// (0x0001ba3c) mup3_rocker_pane_ParamLimits

0x0777,	// (0x0001ba3c) mup3_rocker_pane

0xebd7,	// (0x00029e9c) mup3_control_keys_pane_g1

0xeec7,	// (0x0002a18c) mup3_control_keys_pane_g2

0xebd7,	// (0x00029e9c) mup3_control_keys_pane_g3

0xeecf,	// (0x0002a194) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x0002a9d9) mup3_control_keys_pane_g

0x366b,	// (0x0001e930) popup_toolbar2_fixed_window_cp01_ParamLimits

0x366b,	// (0x0001e930) popup_toolbar2_fixed_window_cp01

0x0777,	// (0x0001ba3c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x0777,	// (0x0001ba3c) popup_toolbar2_fixed_window_cp02

0xd982,	// (0x00028c47) popup_call2_audio_second_window_t4_ParamLimits

0xd982,	// (0x00028c47) popup_call2_audio_second_window_t4

0xdeb0,	// (0x00029175) popup_call2_audio_first_window_t6_ParamLimits

0xdeb0,	// (0x00029175) popup_call2_audio_first_window_t6

0xe0ee,	// (0x000293b3) popup_call2_audio_out_window_t6_ParamLimits

0xe0ee,	// (0x000293b3) popup_call2_audio_out_window_t6

0x36ab,	// (0x0001e970) main_vitu_pane

0xc6c3,	// (0x00027988) aid_size_cell_itu_ParamLimits

0xc6c3,	// (0x00027988) aid_size_cell_itu

0xc6c3,	// (0x00027988) bg_popup_window_pane_cp08_ParamLimits

0xc6c3,	// (0x00027988) bg_popup_window_pane_cp08

0xc6c3,	// (0x00027988) field_vitu_entry_pane_ParamLimits

0xc6c3,	// (0x00027988) field_vitu_entry_pane

0xc6c3,	// (0x00027988) grid_vitu_function_pane_ParamLimits

0xc6c3,	// (0x00027988) grid_vitu_function_pane

0xc6c3,	// (0x00027988) grid_vitu_itu_pane_ParamLimits

0xc6c3,	// (0x00027988) grid_vitu_itu_pane

0xc6c3,	// (0x00027988) cell_vitu_itu_pane_ParamLimits

0xc6c3,	// (0x00027988) cell_vitu_itu_pane

0xc6c3,	// (0x00027988) cell_vitu_function_pane_ParamLimits

0xc6c3,	// (0x00027988) cell_vitu_function_pane

0xc3ed,	// (0x000276b2) bg_popup_sub_pane_cp08_ParamLimits

0xc3ed,	// (0x000276b2) bg_popup_sub_pane_cp08

0xc719,	// (0x000279de) field_vitu_entry_pane_t1_ParamLimits

0xc719,	// (0x000279de) field_vitu_entry_pane_t1

0xeca0,	// (0x00029f65) field_vitu_entry_pane_t2_ParamLimits

0xeca0,	// (0x00029f65) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x0002a9e2) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x0002a9e2) field_vitu_entry_pane_t

0xe578,	// (0x0002983d) bg_button_pane_cp05_ParamLimits

0xe578,	// (0x0002983d) bg_button_pane_cp05

0xeed7,	// (0x0002a19c) cell_vitu_itu_pane_g1

0xd315,	// (0x000285da) cell_vitu_itu_pane_t1_ParamLimits

0xd315,	// (0x000285da) cell_vitu_itu_pane_t1

0xd315,	// (0x000285da) cell_vitu_itu_pane_t2_ParamLimits

0xd315,	// (0x000285da) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x0002a9e7) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x0002a9e7) cell_vitu_itu_pane_t

0xbf9b,	// (0x00027260) bg_button_pane_cp07

0xc70f,	// (0x000279d4) cell_vitu_function_pane_g1

0x3784,	// (0x0001ea49) main_calc_pane_g1

0x3451,	// (0x0001e716) aid_visual_content_pane

0x36ab,	// (0x0001e970) main_vradio_pane

0xc6df,	// (0x000279a4) main_vradio_pane_g1_ParamLimits

0xc6df,	// (0x000279a4) main_vradio_pane_g1

0xc6df,	// (0x000279a4) main_vradio_pane_g2_ParamLimits

0xc6df,	// (0x000279a4) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x0002a77e) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x0002a77e) main_vradio_pane_g

0xc72d,	// (0x000279f2) main_vradio_pane_t1_ParamLimits

0xc72d,	// (0x000279f2) main_vradio_pane_t1

0xc72d,	// (0x000279f2) main_vradio_pane_t2_ParamLimits

0xc72d,	// (0x000279f2) main_vradio_pane_t2

0xc72d,	// (0x000279f2) main_vradio_pane_t3_ParamLimits

0xc72d,	// (0x000279f2) main_vradio_pane_t3

0x0002,

0xf729,	// (0x0002a9ee) main_vradio_pane_t_ParamLimits

0xf729,	// (0x0002a9ee) main_vradio_pane_t

0xc6c3,	// (0x00027988) vradio_rocker_control_pane_ParamLimits

0xc6c3,	// (0x00027988) vradio_rocker_control_pane

0xc6c3,	// (0x00027988) vradio_station_info_pane_ParamLimits

0xc6c3,	// (0x00027988) vradio_station_info_pane

0xc3ed,	// (0x000276b2) vradio_frequency_info_pane_ParamLimits

0xc3ed,	// (0x000276b2) vradio_frequency_info_pane

0xc70f,	// (0x000279d4) vradio_station_info_pane_g1

0xd315,	// (0x000285da) vradio_station_info_pane_t1_ParamLimits

0xd315,	// (0x000285da) vradio_station_info_pane_t1

0xc72d,	// (0x000279f2) vradio_station_info_pane_t2_ParamLimits

0xc72d,	// (0x000279f2) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x0002a9f5) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x0002a9f5) vradio_station_info_pane_t

0xbf9b,	// (0x00027260) vradio_tuning_pane

0x8323,	// (0x000235e8) vradio_rocker_control_pane_g1

0xeef3,	// (0x0002a1b8) vradio_rocker_control_pane_g2

0x832b,	// (0x000235f0) vradio_rocker_control_pane_g3

0x8333,	// (0x000235f8) vradio_rocker_control_pane_g4

0x833d,	// (0x00023602) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x0002a9fa) vradio_rocker_control_pane_g

0xc70f,	// (0x000279d4) vradio_frequency_info_pane_g1

0xc719,	// (0x000279de) vradio_frequency_info_pane_t1_ParamLimits

0xc719,	// (0x000279de) vradio_frequency_info_pane_t1

0x8345,	// (0x0002360a) vradio_tuning_pane_g1

0x8352,	// (0x00023617) vradio_tuning_pane_t1

0x346d,	// (0x0001e732) area_side_right_pane_ParamLimits

0x346d,	// (0x0001e732) area_side_right_pane

0xe498,	// (0x0002975d) status_small_pane_g1

0xe4a0,	// (0x00029765) status_small_pane_g2

0xe4a9,	// (0x0002976e) status_small_pane_g3

0xe4b2,	// (0x00029777) status_small_pane_g4

0x0003,

0xf506,	// (0x0002a7cb) status_small_pane_g

0xe4bb,	// (0x00029780) status_small_pane_t1

0x36ab,	// (0x0001e970) main_video3_pane

0xbf9b,	// (0x00027260) cams_zoom_vslider_pane

0xeefb,	// (0x0002a1c0) image3_wide_pane_ParamLimits

0xeefb,	// (0x0002a1c0) image3_wide_pane

0xbf9b,	// (0x00027260) image3_wide_small_pane

0xef15,	// (0x0002a1da) main_video3_pane_g1_ParamLimits

0xef15,	// (0x0002a1da) main_video3_pane_g1

0xef15,	// (0x0002a1da) main_video3_pane_g2_ParamLimits

0xef15,	// (0x0002a1da) main_video3_pane_g2

0x0001,

0xf740,	// (0x0002aa05) main_video3_pane_g_ParamLimits

0xf740,	// (0x0002aa05) main_video3_pane_g

0xef33,	// (0x0002a1f8) main_video3_pane_t1_ParamLimits

0xef33,	// (0x0002a1f8) main_video3_pane_t1

0xef33,	// (0x0002a1f8) main_video3_pane_t2_ParamLimits

0xef33,	// (0x0002a1f8) main_video3_pane_t2

0xef33,	// (0x0002a1f8) main_video3_pane_t3_ParamLimits

0xef33,	// (0x0002a1f8) main_video3_pane_t3

0x0002,

0xf745,	// (0x0002aa0a) main_video3_pane_t_ParamLimits

0xf745,	// (0x0002aa0a) main_video3_pane_t

0xc70f,	// (0x000279d4) cams_zoom_vslider_pane_g1

0xc70f,	// (0x000279d4) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0002a351) cams_zoom_vslider_pane_g

0xbf9b,	// (0x00027260) small_slider_vertical_pane

0xc70f,	// (0x000279d4) small_slider_vertical_pane_g1

0xc70f,	// (0x000279d4) small_slider_vertical_pane_g2

0xef5a,	// (0x0002a21f) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x0002aa11) small_slider_vertical_pane_g

0x36ab,	// (0x0001e970) main_hwr_training_pane

0xef63,	// (0x0002a228) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x0002a228) hwr_training_instruct_pane

0x8361,	// (0x00023626) hwr_training_navi_pane_ParamLimits

0x8361,	// (0x00023626) hwr_training_navi_pane

0x837b,	// (0x00023640) hwr_training_write_pane_ParamLimits

0x837b,	// (0x00023640) hwr_training_write_pane

0xbf9b,	// (0x00027260) bg_frame_shadow_pane

0xef9a,	// (0x0002a25f) hwr_training_write_pane_g1

0xefa2,	// (0x0002a267) hwr_training_write_pane_g2

0xefaa,	// (0x0002a26f) hwr_training_write_pane_g3

0xefb2,	// (0x0002a277) hwr_training_write_pane_g4

0xefba,	// (0x0002a27f) hwr_training_write_pane_g5

0xefc2,	// (0x0002a287) hwr_training_write_pane_g6

0xefca,	// (0x0002a28f) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x0002aa18) hwr_training_write_pane_g

0x3e55,	// (0x0001f11a) hwr_training_navi_pane_g1_ParamLimits

0x3e55,	// (0x0001f11a) hwr_training_navi_pane_g1

0x3e67,	// (0x0001f12c) hwr_training_navi_pane_g2_ParamLimits

0x3e67,	// (0x0001f12c) hwr_training_navi_pane_g2

0x3e79,	// (0x0001f13e) hwr_training_navi_pane_g3_ParamLimits

0x3e79,	// (0x0001f13e) hwr_training_navi_pane_g3

0x3e89,	// (0x0001f14e) hwr_training_navi_pane_g4_ParamLimits

0x3e89,	// (0x0001f14e) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x0002aa27) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x0002aa27) hwr_training_navi_pane_g

0x3ea3,	// (0x0001f168) hwr_training_navi_pane_t1

0x83b3,	// (0x00023678) list_single_hwr_training_instruct_pane_ParamLimits

0x83b3,	// (0x00023678) list_single_hwr_training_instruct_pane

0xefd2,	// (0x0002a297) list_single_hwr_training_instruct_pane_t1

0xe86d,	// (0x00029b32) bg_frame_shadow_pane_g1

0xefe1,	// (0x0002a2a6) bg_frame_shadow_pane_g2

0xefe9,	// (0x0002a2ae) bg_frame_shadow_pane_g3

0xeff1,	// (0x0002a2b6) bg_frame_shadow_pane_g4

0xeff9,	// (0x0002a2be) bg_frame_shadow_pane_g5

0xf001,	// (0x0002a2c6) bg_frame_shadow_pane_g6

0xf009,	// (0x0002a2ce) bg_frame_shadow_pane_g7

0xc825,	// (0x00027aea) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x0002aa32) bg_frame_shadow_pane_g

0x36ab,	// (0x0001e970) main_video_tele_dialer_pane

0x3eb1,	// (0x0001f176) aid_size_cell_video_keypad_ParamLimits

0x3eb1,	// (0x0001f176) aid_size_cell_video_keypad

0x3ec1,	// (0x0001f186) grid_video_dialer_keypad_pane_ParamLimits

0x3ec1,	// (0x0001f186) grid_video_dialer_keypad_pane

0x3ecf,	// (0x0001f194) video_down_pane_cp_ParamLimits

0x3ecf,	// (0x0001f194) video_down_pane_cp

0x3edd,	// (0x0001f1a2) cell_video_dialer_keypad_pane_ParamLimits

0x3edd,	// (0x0001f1a2) cell_video_dialer_keypad_pane

0xf011,	// (0x0002a2d6) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x0002a2d6) bg_button_pane_cp08

0x840c,	// (0x000236d1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x840c,	// (0x000236d1) cell_video_dialer_keypad_pane_g1

0x0777,	// (0x0001ba3c) mup3_rocker2_pane_ParamLimits

0x0777,	// (0x0001ba3c) mup3_rocker2_pane

0xc70f,	// (0x000279d4) mup3_rocker2_pane_g1

0x3b44,	// (0x0001ee09) main_dialer2_pane

0x36ab,	// (0x0001e970) main_mp4_pane

0x3f12,	// (0x0001f1d7) main_mp4_pane_g1_ParamLimits

0x3f12,	// (0x0001f1d7) main_mp4_pane_g1

0x3f34,	// (0x0001f1f9) main_mp4_pane_g2_ParamLimits

0x3f34,	// (0x0001f1f9) main_mp4_pane_g2

0x3f52,	// (0x0001f217) main_mp4_pane_g3_ParamLimits

0x3f52,	// (0x0001f217) main_mp4_pane_g3

0x3f8d,	// (0x0001f252) main_mp4_pane_g4_ParamLimits

0x3f8d,	// (0x0001f252) main_mp4_pane_g4

0x3fb5,	// (0x0001f27a) main_mp4_pane_g5_ParamLimits

0x3fb5,	// (0x0001f27a) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x0002aa52) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x0002aa52) main_mp4_pane_g

0x401d,	// (0x0001f2e2) main_mp4_pane_t1_ParamLimits

0x401d,	// (0x0001f2e2) main_mp4_pane_t1

0x407f,	// (0x0001f344) main_mp4_pane_t2_ParamLimits

0x407f,	// (0x0001f344) main_mp4_pane_t2

0x40e3,	// (0x0001f3a8) main_mp4_pane_t3_ParamLimits

0x40e3,	// (0x0001f3a8) main_mp4_pane_t3

0x4141,	// (0x0001f406) main_mp4_pane_t4_ParamLimits

0x4141,	// (0x0001f406) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x0002aa63) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x0002aa63) main_mp4_pane_t

0x419f,	// (0x0001f464) mp4_progress_pane_ParamLimits

0x419f,	// (0x0001f464) mp4_progress_pane

0x41d3,	// (0x0001f498) mp4_rocker_pane_ParamLimits

0x41d3,	// (0x0001f498) mp4_rocker_pane

0x0092,	// (0x0001b357) mp4_progress_pane_t1

0x00b0,	// (0x0001b375) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x0002aa6c) mp4_progress_pane_t

0x00cf,	// (0x0001b394) mup_progress_pane_cp04

0x0b41,	// (0x0001be06) mp4_rocker_pane_g1

0x369d,	// (0x0001e962) aid_cell_size_keypad2_ParamLimits

0x369d,	// (0x0001e962) aid_cell_size_keypad2

0x369d,	// (0x0001e962) dialer2_ne_pane_ParamLimits

0x369d,	// (0x0001e962) dialer2_ne_pane

0x369d,	// (0x0001e962) grid_dialer2_keypad_pane_ParamLimits

0x369d,	// (0x0001e962) grid_dialer2_keypad_pane

0xe7b6,	// (0x00029a7b) bg_popup_call_pane_cp07_ParamLimits

0xe7b6,	// (0x00029a7b) bg_popup_call_pane_cp07

0x8447,	// (0x0002370c) dialer2_ne_pane_t1_ParamLimits

0x8447,	// (0x0002370c) dialer2_ne_pane_t1

0x41e9,	// (0x0001f4ae) cell_dialer2_keypad_pane_ParamLimits

0x41e9,	// (0x0001f4ae) cell_dialer2_keypad_pane

0xe578,	// (0x0002983d) bg_button_pane_pane_cp04_ParamLimits

0xe578,	// (0x0002983d) bg_button_pane_pane_cp04

0xc6d1,	// (0x00027996) cell_dialer2_keypad_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) cell_dialer2_keypad_pane_g1

0x55df,	// (0x000208a4) aid_placing_vt_set_content_ParamLimits

0x55df,	// (0x000208a4) aid_placing_vt_set_content

0x5607,	// (0x000208cc) aid_placing_vt_set_title_ParamLimits

0x5607,	// (0x000208cc) aid_placing_vt_set_title

0x36ab,	// (0x0001e970) main_image3_pane

0x4232,	// (0x0001f4f7) area_side_right_pane_cp01_ParamLimits

0x4232,	// (0x0001f4f7) area_side_right_pane_cp01

0x4261,	// (0x0001f526) main_image3_pane_g1_ParamLimits

0x4261,	// (0x0001f526) main_image3_pane_g1

0x426f,	// (0x0001f534) main_image3_pane_g2_ParamLimits

0x426f,	// (0x0001f534) main_image3_pane_g2

0x4288,	// (0x0001f54d) main_image3_pane_g3_ParamLimits

0x4288,	// (0x0001f54d) main_image3_pane_g3

0x42a1,	// (0x0001f566) main_image3_pane_g4_ParamLimits

0x42a1,	// (0x0001f566) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x0002aa7b) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x0002aa7b) main_image3_pane_g

0x42ba,	// (0x0001f57f) main_image3_pane_t1_ParamLimits

0x42ba,	// (0x0001f57f) main_image3_pane_t1

0x42df,	// (0x0001f5a4) main_image3_pane_t2_ParamLimits

0x42df,	// (0x0001f5a4) main_image3_pane_t2

0x42fe,	// (0x0001f5c3) main_image3_pane_t3_ParamLimits

0x42fe,	// (0x0001f5c3) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x0002aa84) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x0002aa84) main_image3_pane_t

0xc6c3,	// (0x00027988) grid_sctrl_middle_pane_cp01_ParamLimits

0xc6c3,	// (0x00027988) grid_sctrl_middle_pane_cp01

0x846c,	// (0x00023731) cell_sctrl_middle_pane_cp01_ParamLimits

0x846c,	// (0x00023731) cell_sctrl_middle_pane_cp01

0x847d,	// (0x00023742) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x847d,	// (0x00023742) cell_sctrl_middle_pane_cp01_g1

0x36ab,	// (0x0001e970) main_call4_pane

0x435f,	// (0x0001f624) aid_size_button_call4_ParamLimits

0x435f,	// (0x0001f624) aid_size_button_call4

0x4395,	// (0x0001f65a) call4_windows_pane_ParamLimits

0x4395,	// (0x0001f65a) call4_windows_pane

0x43aa,	// (0x0001f66f) grid_call4_button_pane_ParamLimits

0x43aa,	// (0x0001f66f) grid_call4_button_pane

0x43da,	// (0x0001f69f) call4_windows_conf_pane

0x43f3,	// (0x0001f6b8) popup_call4_audio_first_window_ParamLimits

0x43f3,	// (0x0001f6b8) popup_call4_audio_first_window

0x4443,	// (0x0001f708) popup_call4_audio_second_window_ParamLimits

0x4443,	// (0x0001f708) popup_call4_audio_second_window

0x445c,	// (0x0001f721) popup_call4_audio_wait_window_ParamLimits

0x445c,	// (0x0001f721) popup_call4_audio_wait_window

0x446a,	// (0x0001f72f) cell_call4_button_pane_ParamLimits

0x446a,	// (0x0001f72f) cell_call4_button_pane

0x848a,	// (0x0002374f) bg_button_pane_cp09_ParamLimits

0x848a,	// (0x0002374f) bg_button_pane_cp09

0x448d,	// (0x0001f752) cell_call4_button_pane_g1_ParamLimits

0x448d,	// (0x0001f752) cell_call4_button_pane_g1

0x8496,	// (0x0002375b) cell_call4_button_pane_t1_ParamLimits

0x8496,	// (0x0002375b) cell_call4_button_pane_t1

0x017e,	// (0x0001b443) popup_call4_audio_conf_window_ParamLimits

0x017e,	// (0x0001b443) popup_call4_audio_conf_window

0x8017,	// (0x000232dc) mup3_progress_pane_t1_ParamLimits

0x802d,	// (0x000232f2) mup3_progress_pane_t2_ParamLimits

0xeba7,	// (0x00029e6c) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x0002a963) mup3_progress_pane_t_ParamLimits

0xebbe,	// (0x00029e83) mup_progress_pane_cp03_ParamLimits

0xebd7,	// (0x00029e9c) mup3_control_keys_pane_g4_copy1

0x41d3,	// (0x0001f498) mp4_rocker2_pane_ParamLimits

0x41d3,	// (0x0001f498) mp4_rocker2_pane

0xeec7,	// (0x0002a18c) mp4_rocker2_pane_g1

0xeec7,	// (0x0002a18c) mp4_rocker2_pane_g2

0xeec7,	// (0x0002a18c) mp4_rocker2_pane_g3

0xeec7,	// (0x0002a18c) mp4_rocker2_pane_g4

0xeec7,	// (0x0002a18c) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x0002aa8d) mp4_rocker2_pane_g

0x36ab,	// (0x0001e970) main_camera4_pane

0x36ab,	// (0x0001e970) main_video4_pane

0x83cc,	// (0x00023691) main_video_tele_dialer_pane_t1_ParamLimits

0x83cc,	// (0x00023691) main_video_tele_dialer_pane_t1

0x83de,	// (0x000236a3) main_video_tele_dialer_pane_t2_ParamLimits

0x83de,	// (0x000236a3) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x0002aa43) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x0002aa43) main_video_tele_dialer_pane_t

0x44e4,	// (0x0001f7a9) cam4_autofocus_pane_ParamLimits

0x44e4,	// (0x0001f7a9) cam4_autofocus_pane

0x44fc,	// (0x0001f7c1) cam4_image_uncrop_pane_ParamLimits

0x44fc,	// (0x0001f7c1) cam4_image_uncrop_pane

0x4515,	// (0x0001f7da) cam4_indicators_pane_ParamLimits

0x4515,	// (0x0001f7da) cam4_indicators_pane

0x4531,	// (0x0001f7f6) main_camera4_pane_g1_ParamLimits

0x4531,	// (0x0001f7f6) main_camera4_pane_g1

0x453d,	// (0x0001f802) main_camera4_pane_g2_ParamLimits

0x453d,	// (0x0001f802) main_camera4_pane_g2

0x453d,	// (0x0001f802) main_camera4_pane_g3_ParamLimits

0x453d,	// (0x0001f802) main_camera4_pane_g3

0x4549,	// (0x0001f80e) main_camera4_pane_g4_ParamLimits

0x4549,	// (0x0001f80e) main_camera4_pane_g4

0x4555,	// (0x0001f81a) main_camera4_pane_g5_ParamLimits

0x4555,	// (0x0001f81a) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x0002aa98) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x0002aa98) main_camera4_pane_g

0x456f,	// (0x0001f834) main_camera4_pane_t1_ParamLimits

0x456f,	// (0x0001f834) main_camera4_pane_t1

0x15ac,	// (0x0001c871) bg_tb_trans_pane_cp06

0x459b,	// (0x0001f860) cam4_indicators_pane_g1

0x45ac,	// (0x0001f871) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x0002aab3) cam4_indicators_pane_g

0x45c4,	// (0x0001f889) cam4_indicators_pane_t1

0x45ee,	// (0x0001f8b3) main_video4_pane_g1_ParamLimits

0x45ee,	// (0x0001f8b3) main_video4_pane_g1

0x45fa,	// (0x0001f8bf) main_video4_pane_g2_ParamLimits

0x45fa,	// (0x0001f8bf) main_video4_pane_g2

0x4606,	// (0x0001f8cb) main_video4_pane_g3_ParamLimits

0x4606,	// (0x0001f8cb) main_video4_pane_g3

0x4612,	// (0x0001f8d7) main_video4_pane_g4_ParamLimits

0x4612,	// (0x0001f8d7) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x0002aaba) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x0002aaba) main_video4_pane_g

0x4634,	// (0x0001f8f9) vid4_indicators_pane_ParamLimits

0x4634,	// (0x0001f8f9) vid4_indicators_pane

0x4653,	// (0x0001f918) video4_image_uncrop_cif_pane_ParamLimits

0x4653,	// (0x0001f918) video4_image_uncrop_cif_pane

0x4662,	// (0x0001f927) video4_image_uncrop_nhd_pane_ParamLimits

0x4662,	// (0x0001f927) video4_image_uncrop_nhd_pane

0x44fc,	// (0x0001f7c1) video4_image_uncrop_vga_pane_ParamLimits

0x44fc,	// (0x0001f7c1) video4_image_uncrop_vga_pane

0x3b36,	// (0x0001edfb) bg_tb_trans_pane_cp07

0x467b,	// (0x0001f940) vid4_indicators_pane_g1

0x4691,	// (0x0001f956) vid4_indicators_pane_g2

0x46a5,	// (0x0001f96a) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x0002aac5) vid4_indicators_pane_g

0x46d6,	// (0x0001f99b) vid4_indicators_pane_t1

0x84ce,	// (0x00023793) cam4_autofocus_pane_g1

0x84d6,	// (0x0002379b) cam4_autofocus_pane_g2

0x84de,	// (0x000237a3) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x0002aad0) cam4_autofocus_pane_g

0x84e6,	// (0x000237ab) cam4_autofocus_pane_g3_copy1

0x83f0,	// (0x000236b5) video_down_pane_cp_t1

0x83fe,	// (0x000236c3) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x0002aa48) video_down_pane_cp_t

0x369d,	// (0x0001e962) popup_vitu2_window_ParamLimits

0x369d,	// (0x0001e962) popup_vitu2_window

0x46ed,	// (0x0001f9b2) aid_size_cell2_itu2_ParamLimits

0x46ed,	// (0x0001f9b2) aid_size_cell2_itu2

0x470f,	// (0x0001f9d4) aid_size_cell_itu2_ParamLimits

0x470f,	// (0x0001f9d4) aid_size_cell_itu2

0x4753,	// (0x0001fa18) bg_popup_window_pane_cp09_ParamLimits

0x4753,	// (0x0001fa18) bg_popup_window_pane_cp09

0x4761,	// (0x0001fa26) field_vitu2_entry_pane_ParamLimits

0x4761,	// (0x0001fa26) field_vitu2_entry_pane

0x4781,	// (0x0001fa46) grid_vitu2_function_pane_ParamLimits

0x4781,	// (0x0001fa46) grid_vitu2_function_pane

0x47c5,	// (0x0001fa8a) grid_vitu2_itu_pane_ParamLimits

0x47c5,	// (0x0001fa8a) grid_vitu2_itu_pane

0x483b,	// (0x0001fb00) cell_vitu2_itu_pane_ParamLimits

0x483b,	// (0x0001fb00) cell_vitu2_itu_pane

0x4856,	// (0x0001fb1b) cell_vitu2_function_pane_ParamLimits

0x4856,	// (0x0001fb1b) cell_vitu2_function_pane

0x0287,	// (0x0001b54c) bg_popup_call_pane_cp08_ParamLimits

0x0287,	// (0x0001b54c) bg_popup_call_pane_cp08

0x029e,	// (0x0001b563) field_vitu2_entry_pane_g1

0x02aa,	// (0x0001b56f) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x0002aad7) field_vitu2_entry_pane_g

0x02b6,	// (0x0001b57b) field_vitu2_entry_pane_t1_ParamLimits

0x02b6,	// (0x0001b57b) field_vitu2_entry_pane_t1

0x02e5,	// (0x0001b5aa) field_vitu2_entry_pane_t2_ParamLimits

0x02e5,	// (0x0001b5aa) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x0002aade) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x0002aade) field_vitu2_entry_pane_t

0x3ce9,	// (0x0001efae) bg_button_pane_cp010_ParamLimits

0x3ce9,	// (0x0001efae) bg_button_pane_cp010

0x489a,	// (0x0001fb5f) cell_vitu2_itu_pane_g1

0x48c0,	// (0x0001fb85) cell_vitu2_itu_pane_t1_ParamLimits

0x48c0,	// (0x0001fb85) cell_vitu2_itu_pane_t1

0x490c,	// (0x0001fbd1) cell_vitu2_itu_pane_t2_ParamLimits

0x490c,	// (0x0001fbd1) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x0002aae8) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x0002aae8) cell_vitu2_itu_pane_t

0x3b36,	// (0x0001edfb) bg_button_pane_cp011

0x49d4,	// (0x0001fc99) cell_vitu2_function_pane_g1

0x36ab,	// (0x0001e970) main_myfav_hc_pane

0x4340,	// (0x0001f605) popup_image3_note_pane_ParamLimits

0x4340,	// (0x0001f605) popup_image3_note_pane

0x434e,	// (0x0001f613) popup_image3_tool_bar_pane_ParamLimits

0x434e,	// (0x0001f613) popup_image3_tool_bar_pane

0x4982,	// (0x0001fc47) cell_vitu2_itu_pane_t3_ParamLimits

0x4982,	// (0x0001fc47) cell_vitu2_itu_pane_t3

0xbf9b,	// (0x00027260) bg_popup_trans_pane

0x030a,	// (0x0001b5cf) grid_image3_tool_bar_pane

0x0314,	// (0x0001b5d9) bg_popup_trans_pane_g1

0xcb8b,	// (0x00027e50) bg_popup_trans_pane_g2

0x031c,	// (0x0001b5e1) bg_popup_trans_pane_g3

0x0324,	// (0x0001b5e9) bg_popup_trans_pane_g4

0x032c,	// (0x0001b5f1) bg_popup_trans_pane_g5

0x0334,	// (0x0001b5f9) bg_popup_trans_pane_g6

0x033c,	// (0x0001b601) bg_popup_trans_pane_g7

0x0344,	// (0x0001b609) bg_popup_trans_pane_g8

0xcb6b,	// (0x00027e30) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x0002aaef) bg_popup_trans_pane_g

0x034c,	// (0x0001b611) cell_image3_tool_bar_pane_ParamLimits

0x034c,	// (0x0001b611) cell_image3_tool_bar_pane

0xc70f,	// (0x000279d4) cell_image3_tool_bar_pane_g1

0xbf9b,	// (0x00027260) bg_popup_trans_pane_cp1

0x0362,	// (0x0001b627) popup_image3_note_pane_t1

0x0370,	// (0x0001b635) popup_image3_note_pane_t2

0x037e,	// (0x0001b643) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x0002ab02) popup_image3_note_pane_t

0x038e,	// (0x0001b653) popup_image3_note_pane_t3_copy1

0x84ee,	// (0x000237b3) bg_myfav_hc_instruction_pane_ParamLimits

0x84ee,	// (0x000237b3) bg_myfav_hc_instruction_pane

0x8506,	// (0x000237cb) cell_myfav_contact_pane_ParamLimits

0x8506,	// (0x000237cb) cell_myfav_contact_pane

0x8520,	// (0x000237e5) cell_myfav_contact_pane_cp1_ParamLimits

0x8520,	// (0x000237e5) cell_myfav_contact_pane_cp1

0x8538,	// (0x000237fd) cell_myfav_contact_pane_cp2_ParamLimits

0x8538,	// (0x000237fd) cell_myfav_contact_pane_cp2

0x8550,	// (0x00023815) cell_myfav_contact_pane_cp3_ParamLimits

0x8550,	// (0x00023815) cell_myfav_contact_pane_cp3

0x8567,	// (0x0002382c) cell_myfav_contact_pane_cp4_ParamLimits

0x8567,	// (0x0002382c) cell_myfav_contact_pane_cp4

0x857d,	// (0x00023842) cell_myfav_contact_pane_cp5_ParamLimits

0x857d,	// (0x00023842) cell_myfav_contact_pane_cp5

0x8591,	// (0x00023856) cell_myfav_contact_pane_cp6_ParamLimits

0x8591,	// (0x00023856) cell_myfav_contact_pane_cp6

0x85a5,	// (0x0002386a) cell_myfav_contact_pane_cp7_ParamLimits

0x85a5,	// (0x0002386a) cell_myfav_contact_pane_cp7

0x039c,	// (0x0001b661) listscroll_gen_pane_cp05

0x85bd,	// (0x00023882) main_myfav_hc_pane_g1_ParamLimits

0x85bd,	// (0x00023882) main_myfav_hc_pane_g1

0x85d7,	// (0x0002389c) main_myfav_hc_pane_g2_ParamLimits

0x85d7,	// (0x0002389c) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x0002ab09) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x0002ab09) main_myfav_hc_pane_g

0x8609,	// (0x000238ce) main_myfav_hc_pane_t1_ParamLimits

0x8609,	// (0x000238ce) main_myfav_hc_pane_t1

0x03a5,	// (0x0001b66a) main_myfav_hc_pane_t2_ParamLimits

0x03a5,	// (0x0001b66a) main_myfav_hc_pane_t2

0x03b7,	// (0x0001b67c) main_myfav_hc_pane_t3_ParamLimits

0x03b7,	// (0x0001b67c) main_myfav_hc_pane_t3

0x8620,	// (0x000238e5) main_myfav_hc_pane_t4_ParamLimits

0x8620,	// (0x000238e5) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x0002ab10) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x0002ab10) main_myfav_hc_pane_t

0xc70f,	// (0x000279d4) bg_myfav_hc_instruction_pane_g1

0x03c9,	// (0x0001b68e) cell_myfav_contact_pane_g1_ParamLimits

0x03c9,	// (0x0001b68e) cell_myfav_contact_pane_g1

0x03c9,	// (0x0001b68e) cell_myfav_contact_pane_g2_ParamLimits

0x03c9,	// (0x0001b68e) cell_myfav_contact_pane_g2

0x03d5,	// (0x0001b69a) cell_myfav_contact_pane_g3_ParamLimits

0x03d5,	// (0x0001b69a) cell_myfav_contact_pane_g3

0xc6df,	// (0x000279a4) cell_myfav_contact_pane_g4_ParamLimits

0xc6df,	// (0x000279a4) cell_myfav_contact_pane_g4

0x03e2,	// (0x0001b6a7) cell_myfav_contact_pane_g5_ParamLimits

0x03e2,	// (0x0001b6a7) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x0002ab1b) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x0002ab1b) cell_myfav_contact_pane_g

0x85f1,	// (0x000238b6) main_myfav_hc_pane_g3_ParamLimits

0x85f1,	// (0x000238b6) main_myfav_hc_pane_g3

0x35a7,	// (0x0001e86c) popup_adpt_find_window

0x864a,	// (0x0002390f) afind_page_pane_ParamLimits

0x864a,	// (0x0002390f) afind_page_pane

0x8657,	// (0x0002391c) aid_size_cell_afind_ParamLimits

0x8657,	// (0x0002391c) aid_size_cell_afind

0x8671,	// (0x00023936) bg_popup_sub_pane_cp09_ParamLimits

0x8671,	// (0x00023936) bg_popup_sub_pane_cp09

0x8682,	// (0x00023947) find_pane_cp01_ParamLimits

0x8682,	// (0x00023947) find_pane_cp01

0x03ee,	// (0x0001b6b3) grid_afind_control_pane_ParamLimits

0x03ee,	// (0x0001b6b3) grid_afind_control_pane

0x8695,	// (0x0002395a) grid_afind_pane_ParamLimits

0x8695,	// (0x0002395a) grid_afind_pane

0x86b1,	// (0x00023976) cell_afind_pane_ParamLimits

0x86b1,	// (0x00023976) cell_afind_pane

0xc70f,	// (0x000279d4) afind_page_pane_g1

0x86f9,	// (0x000239be) afind_page_pane_g2

0x8701,	// (0x000239c6) afind_page_pane_g3

0x0002,

0xf861,	// (0x0002ab26) afind_page_pane_g

0x8709,	// (0x000239ce) afind_page_pane_t1

0x0414,	// (0x0001b6d9) cell_afind_grid_control_pane_ParamLimits

0x0414,	// (0x0001b6d9) cell_afind_grid_control_pane

0x0423,	// (0x0001b6e8) bg_button_pane_cp69_ParamLimits

0x0423,	// (0x0001b6e8) bg_button_pane_cp69

0x8717,	// (0x000239dc) cell_afind_pane_g1_ParamLimits

0x8717,	// (0x000239dc) cell_afind_pane_g1

0x8724,	// (0x000239e9) cell_afind_pane_t1_ParamLimits

0x8724,	// (0x000239e9) cell_afind_pane_t1

0x042f,	// (0x0001b6f4) bg_button_pane_cp72

0x0437,	// (0x0001b6fc) cell_afind_grid_control_pane_g1

0x711c,	// (0x000223e1) aid_image_placing_area_ParamLimits

0x711c,	// (0x000223e1) aid_image_placing_area

0xc6d1,	// (0x00027996) field_vitu_entry_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) field_vitu_entry_pane_g1

0xc6d1,	// (0x00027996) field_vitu_entry_pane_g2_ParamLimits

0xc6d1,	// (0x00027996) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0002a45e) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0002a45e) field_vitu_entry_pane_g

0xeed7,	// (0x0002a19c) cell_vitu_itu_pane_g1_ParamLimits

0xeca0,	// (0x00029f65) cell_vitu_itu_pane_t3_ParamLimits

0xeca0,	// (0x00029f65) cell_vitu_itu_pane_t3

0x0092,	// (0x0001b357) mp4_progress_pane_t1_ParamLimits

0x00b0,	// (0x0001b375) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x0002aa6c) mp4_progress_pane_t_ParamLimits

0x00cf,	// (0x0001b394) mup_progress_pane_cp04_ParamLimits

0x8634,	// (0x000238f9) main_myfav_hc_pane_t5_ParamLimits

0x8634,	// (0x000238f9) main_myfav_hc_pane_t5

0x3465,	// (0x0001e72a) aid_zoom_text_primary

0x35a7,	// (0x0001e86c) popup_adpt_find_window_ParamLimits

0x3b36,	// (0x0001edfb) main_cam_set_pane

0x4523,	// (0x0001f7e8) cam4_zoom_pane_ParamLimits

0x4523,	// (0x0001f7e8) cam4_zoom_pane

0x8736,	// (0x000239fb) main_cam_set_pane_g1_ParamLimits

0x8736,	// (0x000239fb) main_cam_set_pane_g1

0x8744,	// (0x00023a09) main_cam_set_pane_g2_ParamLimits

0x8744,	// (0x00023a09) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x0002ab2d) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x0002ab2d) main_cam_set_pane_g

0x8750,	// (0x00023a15) main_cam_set_pane_t1_ParamLimits

0x8750,	// (0x00023a15) main_cam_set_pane_t1

0x876c,	// (0x00023a31) main_cset_listscroll_pane_ParamLimits

0x876c,	// (0x00023a31) main_cset_listscroll_pane

0x87a0,	// (0x00023a65) main_cset_slider_pane_ParamLimits

0x87a0,	// (0x00023a65) main_cset_slider_pane

0x0448,	// (0x0001b70d) main_cset_list_pane_ParamLimits

0x0448,	// (0x0001b70d) main_cset_list_pane

0x0458,	// (0x0001b71d) scroll_pane_cp028

0x87c1,	// (0x00023a86) aid_area_touch_slider

0x87dd,	// (0x00023aa2) cset_slider_pane

0x8800,	// (0x00023ac5) main_cset_slider_pane_g1

0x8815,	// (0x00023ada) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x0002ab32) main_cset_slider_pane_g

0x0491,	// (0x0001b756) main_cset_slider_pane_t1

0x88d1,	// (0x00023b96) main_cset_slider_pane_t2

0x88eb,	// (0x00023bb0) main_cset_slider_pane_t3

0x8905,	// (0x00023bca) main_cset_slider_pane_t4

0x891f,	// (0x00023be4) main_cset_slider_pane_t5

0x8939,	// (0x00023bfe) main_cset_slider_pane_t6

0x894e,	// (0x00023c13) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x0002ab57) main_cset_slider_pane_t

0x8a52,	// (0x00023d17) cset_list_set_pane_ParamLimits

0x8a52,	// (0x00023d17) cset_list_set_pane

0x052b,	// (0x0001b7f0) aid_position_infowindow_above

0x0533,	// (0x0001b7f8) aid_position_infowindow_below

0x8a63,	// (0x00023d28) cset_list_set_pane_g1_ParamLimits

0x8a63,	// (0x00023d28) cset_list_set_pane_g1

0x8a6f,	// (0x00023d34) cset_list_set_pane_g3_ParamLimits

0x8a6f,	// (0x00023d34) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x0002ab76) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x0002ab76) cset_list_set_pane_g

0x8a7e,	// (0x00023d43) cset_list_set_pane_t1_ParamLimits

0x8a7e,	// (0x00023d43) cset_list_set_pane_t1

0xc3ed,	// (0x000276b2) list_highlight_pane_cp021_ParamLimits

0xc3ed,	// (0x000276b2) list_highlight_pane_cp021

0xd39b,	// (0x00028660) cset_slider_pane_g1

0xd3ad,	// (0x00028672) cset_slider_pane_g2

0xd3a4,	// (0x00028669) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x0002ab7b) cset_slider_pane_g

0xd029,	// (0x000282ee) aid_area_touch_cam4_zoom

0x49e8,	// (0x0001fcad) cam4_zoom_cont_pane

0x49f0,	// (0x0001fcb5) cam4_zoom_pane_g1

0x49f8,	// (0x0001fcbd) cam4_zoom_pane_g2

0x4a00,	// (0x0001fcc5) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x0002ab82) cam4_zoom_pane_g

0x4a08,	// (0x0001fccd) cam4_zoom_cont_pane_g1

0x4a11,	// (0x0001fcd6) cam4_zoom_cont_pane_g2

0x4a1a,	// (0x0001fcdf) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x0002ab89) cam4_zoom_cont_pane_g

0x4379,	// (0x0001f63e) call4_image_pane_ParamLimits

0x4379,	// (0x0001f63e) call4_image_pane

0x43da,	// (0x0001f69f) call4_windows_conf_pane_ParamLimits

0x4421,	// (0x0001f6e6) popup_call4_audio_in_window_ParamLimits

0x4421,	// (0x0001f6e6) popup_call4_audio_in_window

0xbf9b,	// (0x00027260) bg_popup_call2_act_pane_cp02

0x0176,	// (0x0001b43b) call4_list_conf_pane

0xc70f,	// (0x000279d4) call4_image_pane_g1

0xc70f,	// (0x000279d4) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0002a351) call4_image_pane_g

0x055f,	// (0x0001b824) list_single_graphic_popup_conf4_pane_ParamLimits

0x055f,	// (0x0001b824) list_single_graphic_popup_conf4_pane

0xbf9b,	// (0x00027260) list_highlight_pane_cp022

0x0574,	// (0x0001b839) list_single_graphic_popup_conf4_pane_g1

0xd082,	// (0x00028347) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x0002ab90) list_single_graphic_popup_conf4_pane_g

0x057c,	// (0x0001b841) list_single_graphic_popup_conf4_pane_t1

0x574f,	// (0x00020a14) popup_vtel_slider_window_ParamLimits

0x574f,	// (0x00020a14) popup_vtel_slider_window

0x00e2,	// (0x0001b3a7) dialer2_ne_pane_t2_ParamLimits

0x00e2,	// (0x0001b3a7) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x0002aa71) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x0002aa71) dialer2_ne_pane_t

0xc3ed,	// (0x000276b2) bg_popup_sub_pane_cp010_ParamLimits

0xc3ed,	// (0x000276b2) bg_popup_sub_pane_cp010

0x8a93,	// (0x00023d58) popup_vtel_slider_window_g1_ParamLimits

0x8a93,	// (0x00023d58) popup_vtel_slider_window_g1

0x8a9f,	// (0x00023d64) popup_vtel_slider_window_g2_ParamLimits

0x8a9f,	// (0x00023d64) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x0002ab95) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x0002ab95) popup_vtel_slider_window_g

0x8ae7,	// (0x00023dac) vtel_slider_pane_ParamLimits

0x8ae7,	// (0x00023dac) vtel_slider_pane

0x8af6,	// (0x00023dbb) vtel_slider_pane_g1_ParamLimits

0x8af6,	// (0x00023dbb) vtel_slider_pane_g1

0x8b03,	// (0x00023dc8) vtel_slider_pane_g2_ParamLimits

0x8b03,	// (0x00023dc8) vtel_slider_pane_g2

0x8b10,	// (0x00023dd5) vtel_slider_pane_g3_ParamLimits

0x8b10,	// (0x00023dd5) vtel_slider_pane_g3

0x8af6,	// (0x00023dbb) vtel_slider_pane_g4_ParamLimits

0x8af6,	// (0x00023dbb) vtel_slider_pane_g4

0x8b1d,	// (0x00023de2) vtel_slider_pane_g5_ParamLimits

0x8b1d,	// (0x00023de2) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x0002ab9e) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x0002ab9e) vtel_slider_pane_g

0x3b36,	// (0x0001edfb) main_gallery2_pane

0x4735,	// (0x0001f9fa) aid_size_row_itut2_dropdow_list_ParamLimits

0x4735,	// (0x0001f9fa) aid_size_row_itut2_dropdow_list

0x47a3,	// (0x0001fa68) grid_vitu2_function_top_pane_ParamLimits

0x47a3,	// (0x0001fa68) grid_vitu2_function_top_pane

0x47f9,	// (0x0001fabe) popup_vitu2_dropdown_list_window_ParamLimits

0x47f9,	// (0x0001fabe) popup_vitu2_dropdown_list_window

0x4817,	// (0x0001fadc) popup_vitu2_match_list_window

0x4a23,	// (0x0001fce8) cell_vitu2_function_top_pane_ParamLimits

0x4a23,	// (0x0001fce8) cell_vitu2_function_top_pane

0x4a3d,	// (0x0001fd02) cell_vitu2_function_top_pane_cp01_ParamLimits

0x4a3d,	// (0x0001fd02) cell_vitu2_function_top_pane_cp01

0x4a59,	// (0x0001fd1e) cell_vitu2_function_top_wide_pane_ParamLimits

0x4a59,	// (0x0001fd1e) cell_vitu2_function_top_wide_pane

0x3b36,	// (0x0001edfb) bg_button_pane_cp012

0x4a77,	// (0x0001fd3c) cell_vitu2_function_top_pane_g1

0x4a8b,	// (0x0001fd50) bg_button_pane_cp013_ParamLimits

0x4a8b,	// (0x0001fd50) bg_button_pane_cp013

0x8b2a,	// (0x00023def) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8b2a,	// (0x00023def) cell_vitu2_function_top_wide_pane_g1

0x369d,	// (0x0001e962) bg_popup_sub_pane_cp20

0x4aa7,	// (0x0001fd6c) list_vitu2_match_list_pane

0x0314,	// (0x0001b5d9) bg_popup_sub_pane_cp20_g1

0x031c,	// (0x0001b5e1) bg_popup_sub_pane_cp20_g2

0xcb8b,	// (0x00027e50) bg_popup_sub_pane_cp20_g3

0x0324,	// (0x0001b5e9) bg_popup_sub_pane_cp20_g4

0xcb6b,	// (0x00027e30) bg_popup_sub_pane_cp20_g5

0x05ae,	// (0x0001b873) bg_popup_sub_pane_cp20_g6

0x0334,	// (0x0001b5f9) bg_popup_sub_pane_cp20_g7

0x033c,	// (0x0001b601) bg_popup_sub_pane_cp20_g8

0x0344,	// (0x0001b609) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x0002aba9) bg_popup_sub_pane_cp20_g

0x4abf,	// (0x0001fd84) list_vitu2_match_list_item_pane_ParamLimits

0x4abf,	// (0x0001fd84) list_vitu2_match_list_item_pane

0x4ad1,	// (0x0001fd96) list_vitu2_match_list_item_pane_t1

0x36ab,	// (0x0001e970) bg_popup_sub_pane_cp21

0xc961,	// (0x00027c26) grid_vitu2_dropdown_list_pane

0x4adf,	// (0x0001fda4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x4adf,	// (0x0001fda4) cell_vitu2_dropdown_list_char_pane

0x4b03,	// (0x0001fdc8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x4b03,	// (0x0001fdc8) cell_vitu2_dropdown_list_ctrl_pane

0x05e8,	// (0x0001b8ad) cell_vitu2_dropdown_list_char_pane_g1

0x05df,	// (0x0001b8a4) cell_vitu2_dropdown_list_char_pane_g2

0x05d6,	// (0x0001b89b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x0002abbc) cell_vitu2_dropdown_list_char_pane_g

0x4b2d,	// (0x0001fdf2) cell_vitu2_dropdown_list_char_pane_t1

0x8b42,	// (0x00023e07) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8b42,	// (0x00023e07) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8b52,	// (0x00023e17) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8b52,	// (0x00023e17) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8b63,	// (0x00023e28) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8b63,	// (0x00023e28) cell_vitu2_dropdown_list_ctrl_pane_g3

0x4b3b,	// (0x0001fe00) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x4b3b,	// (0x0001fe00) cell_vitu2_dropdown_list_ctrl_pane_g4

0x15ac,	// (0x0001c871) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x15ac,	// (0x0001c871) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x0002abc3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x0002abc3) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b73,	// (0x00023e38) aid_size_cell_gallery2_ParamLimits

0x8b73,	// (0x00023e38) aid_size_cell_gallery2

0x8b8d,	// (0x00023e52) grid_gallery2_pane_ParamLimits

0x8b8d,	// (0x00023e52) grid_gallery2_pane

0x8ba4,	// (0x00023e69) scroll_pane_cp029_ParamLimits

0x8ba4,	// (0x00023e69) scroll_pane_cp029

0x8bb4,	// (0x00023e79) cell_gallery2_pane_ParamLimits

0x8bb4,	// (0x00023e79) cell_gallery2_pane

0x05f1,	// (0x0001b8b6) cell_gallery2_pane_g2

0x8c0b,	// (0x00023ed0) cell_gallery2_pane_g3

0x05f9,	// (0x0001b8be) cell_gallery2_pane_g4

0x0601,	// (0x0001b8c6) cell_gallery2_pane_g5

0xc961,	// (0x00027c26) grid_highlight_pane_cp10

0x4817,	// (0x0001fadc) popup_vitu2_match_list_window_ParamLimits

0x482b,	// (0x0001faf0) popup_vitu2_query_window_ParamLimits

0x482b,	// (0x0001faf0) popup_vitu2_query_window

0x36ab,	// (0x0001e970) bg_vitu2_candi_button_pane

0x05e8,	// (0x0001b8ad) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x05df,	// (0x0001b8a4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x05d6,	// (0x0001b89b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8c13,	// (0x00023ed8) bg_button_pane_cp015

0x8c28,	// (0x00023eed) bg_button_pane_cp016

0x8c34,	// (0x00023ef9) bg_button_pane_cp017

0xd307,	// (0x000285cc) bg_popup_sub_pane_cp22

0x0609,	// (0x0001b8ce) popup_vitu2_query_window_g1

0x8c75,	// (0x00023f3a) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x0002abce) popup_vitu2_query_window_g

0x8c99,	// (0x00023f5e) popup_vitu2_query_window_t1_ParamLimits

0x8c99,	// (0x00023f5e) popup_vitu2_query_window_t1

0x8ccc,	// (0x00023f91) popup_vitu2_query_window_t2_ParamLimits

0x8ccc,	// (0x00023f91) popup_vitu2_query_window_t2

0x8cde,	// (0x00023fa3) popup_vitu2_query_window_t3_ParamLimits

0x8cde,	// (0x00023fa3) popup_vitu2_query_window_t3

0x8d06,	// (0x00023fcb) popup_vitu2_query_window_t4_ParamLimits

0x8d06,	// (0x00023fcb) popup_vitu2_query_window_t4

0x8d1a,	// (0x00023fdf) popup_vitu2_query_window_t5_ParamLimits

0x8d1a,	// (0x00023fdf) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x0002abd5) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x0002abd5) popup_vitu2_query_window_t

0x0440,	// (0x0001b705) main_cset_text_pane

0x87c1,	// (0x00023a86) aid_area_touch_slider_ParamLimits

0x87dd,	// (0x00023aa2) cset_slider_pane_ParamLimits

0x8800,	// (0x00023ac5) main_cset_slider_pane_g1_ParamLimits

0x8815,	// (0x00023ada) main_cset_slider_pane_g2_ParamLimits

0x0461,	// (0x0001b726) main_cset_slider_pane_g3_ParamLimits

0x0461,	// (0x0001b726) main_cset_slider_pane_g3

0x882a,	// (0x00023aef) main_cset_slider_pane_g4_ParamLimits

0x882a,	// (0x00023aef) main_cset_slider_pane_g4

0x8839,	// (0x00023afe) main_cset_slider_pane_g5_ParamLimits

0x8839,	// (0x00023afe) main_cset_slider_pane_g5

0x8845,	// (0x00023b0a) main_cset_slider_pane_g6_ParamLimits

0x8845,	// (0x00023b0a) main_cset_slider_pane_g6

0xf86d,	// (0x0002ab32) main_cset_slider_pane_g_ParamLimits

0x0491,	// (0x0001b756) main_cset_slider_pane_t1_ParamLimits

0x88d1,	// (0x00023b96) main_cset_slider_pane_t2_ParamLimits

0x88eb,	// (0x00023bb0) main_cset_slider_pane_t3_ParamLimits

0x8905,	// (0x00023bca) main_cset_slider_pane_t4_ParamLimits

0x891f,	// (0x00023be4) main_cset_slider_pane_t5_ParamLimits

0x8939,	// (0x00023bfe) main_cset_slider_pane_t6_ParamLimits

0x894e,	// (0x00023c13) main_cset_slider_pane_t7_ParamLimits

0x8978,	// (0x00023c3d) main_cset_slider_pane_t8_ParamLimits

0x8978,	// (0x00023c3d) main_cset_slider_pane_t8

0x89a0,	// (0x00023c65) main_cset_slider_pane_t9_ParamLimits

0x89a0,	// (0x00023c65) main_cset_slider_pane_t9

0x89c8,	// (0x00023c8d) main_cset_slider_pane_t10_ParamLimits

0x89c8,	// (0x00023c8d) main_cset_slider_pane_t10

0x89f0,	// (0x00023cb5) main_cset_slider_pane_t11_ParamLimits

0x89f0,	// (0x00023cb5) main_cset_slider_pane_t11

0x8a18,	// (0x00023cdd) main_cset_slider_pane_t12_ParamLimits

0x8a18,	// (0x00023cdd) main_cset_slider_pane_t12

0x8a35,	// (0x00023cfa) main_cset_slider_pane_t13_ParamLimits

0x8a35,	// (0x00023cfa) main_cset_slider_pane_t13

0xf892,	// (0x0002ab57) main_cset_slider_pane_t_ParamLimits

0xbf9b,	// (0x00027260) bg_popup_sub_pane_cp011

0x0615,	// (0x0001b8da) main_cset_text_pane_g1

0x061d,	// (0x0001b8e2) main_cset_text_pane_t1

0x062b,	// (0x0001b8f0) main_cset_text_pane_t2

0x0639,	// (0x0001b8fe) main_cset_text_pane_t3

0x0647,	// (0x0001b90c) main_cset_text_pane_t4

0x0655,	// (0x0001b91a) main_cset_text_pane_t5

0x0663,	// (0x0001b928) main_cset_text_pane_t6

0x0671,	// (0x0001b936) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x0002abe4) main_cset_text_pane_t

0x36ab,	// (0x0001e970) main_cam4_burst_pane

0x36ab,	// (0x0001e970) main_cam5_pane

0x0402,	// (0x0001b6c7) bg_button_pane_cp019

0x040b,	// (0x0001b6d0) bg_button_pane_cp020

0x046d,	// (0x0001b732) main_cset_slider_pane_g7_ParamLimits

0x046d,	// (0x0001b732) main_cset_slider_pane_g7

0x0479,	// (0x0001b73e) main_cset_slider_pane_g8_ParamLimits

0x0479,	// (0x0001b73e) main_cset_slider_pane_g8

0x8859,	// (0x00023b1e) main_cset_slider_pane_g9_ParamLimits

0x8859,	// (0x00023b1e) main_cset_slider_pane_g9

0x8865,	// (0x00023b2a) main_cset_slider_pane_g10_ParamLimits

0x8865,	// (0x00023b2a) main_cset_slider_pane_g10

0x8871,	// (0x00023b36) main_cset_slider_pane_g11_ParamLimits

0x8871,	// (0x00023b36) main_cset_slider_pane_g11

0x887d,	// (0x00023b42) main_cset_slider_pane_g12_ParamLimits

0x887d,	// (0x00023b42) main_cset_slider_pane_g12

0x8889,	// (0x00023b4e) main_cset_slider_pane_g13_ParamLimits

0x8889,	// (0x00023b4e) main_cset_slider_pane_g13

0x8895,	// (0x00023b5a) main_cset_slider_pane_g14_ParamLimits

0x8895,	// (0x00023b5a) main_cset_slider_pane_g14

0x88a1,	// (0x00023b66) main_cset_slider_pane_g15_ParamLimits

0x88a1,	// (0x00023b66) main_cset_slider_pane_g15

0x04b9,	// (0x0001b77e) main_cset_slider_pane_t14_ParamLimits

0x04b9,	// (0x0001b77e) main_cset_slider_pane_t14

0x04f2,	// (0x0001b7b7) main_cset_slider_pane_t15_ParamLimits

0x04f2,	// (0x0001b7b7) main_cset_slider_pane_t15

0x8d84,	// (0x00024049) aid_cam4_burst_size_cell_ParamLimits

0x8d84,	// (0x00024049) aid_cam4_burst_size_cell

0x8da0,	// (0x00024065) grid_cam4_burst_pane_ParamLimits

0x8da0,	// (0x00024065) grid_cam4_burst_pane

0x8dd2,	// (0x00024097) linegrid_cam4_burst_pane_ParamLimits

0x8dd2,	// (0x00024097) linegrid_cam4_burst_pane

0x8df0,	// (0x000240b5) scroll_pane_cp30_ParamLimits

0x8df0,	// (0x000240b5) scroll_pane_cp30

0x8dfc,	// (0x000240c1) cell_cam4_burst_pane_ParamLimits

0x8dfc,	// (0x000240c1) cell_cam4_burst_pane

0x067f,	// (0x0001b944) linegrid_cam4_burst_pane_g1_ParamLimits

0x067f,	// (0x0001b944) linegrid_cam4_burst_pane_g1

0x8e3c,	// (0x00024101) linegrid_cam4_burst_pane_g2_ParamLimits

0x8e3c,	// (0x00024101) linegrid_cam4_burst_pane_g2

0x068c,	// (0x0001b951) linegrid_cam4_burst_pane_g3_ParamLimits

0x068c,	// (0x0001b951) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x0002abf3) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x0002abf3) linegrid_cam4_burst_pane_g

0x8e4d,	// (0x00024112) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8e4d,	// (0x00024112) linegrid_cam4_burst_pane_g3_copy1

0x0699,	// (0x0001b95e) linegrid_cam4_burst_pane_g4_ParamLimits

0x0699,	// (0x0001b95e) linegrid_cam4_burst_pane_g4

0x8e67,	// (0x0002412c) linegrid_cam4_burst_pane_g5_ParamLimits

0x8e67,	// (0x0002412c) linegrid_cam4_burst_pane_g5

0x8e78,	// (0x0002413d) linegrid_cam4_burst_pane_g6_ParamLimits

0x8e78,	// (0x0002413d) linegrid_cam4_burst_pane_g6

0x06a6,	// (0x0001b96b) linegrid_cam4_burst_pane_g7_ParamLimits

0x06a6,	// (0x0001b96b) linegrid_cam4_burst_pane_g7

0x8e8f,	// (0x00024154) cell_cam4_burst_pane_g1

0x06bf,	// (0x0001b984) main_cam5_pane_t1_ParamLimits

0x06bf,	// (0x0001b984) main_cam5_pane_t1

0x06d1,	// (0x0001b996) main_cam5_pane_t2_ParamLimits

0x06d1,	// (0x0001b996) main_cam5_pane_t2

0x06e3,	// (0x0001b9a8) main_cam5_pane_t3_ParamLimits

0x06e3,	// (0x0001b9a8) main_cam5_pane_t3

0x06f5,	// (0x0001b9ba) main_cam5_pane_t4_ParamLimits

0x06f5,	// (0x0001b9ba) main_cam5_pane_t4

0x070d,	// (0x0001b9d2) main_cam5_pane_t5_ParamLimits

0x070d,	// (0x0001b9d2) main_cam5_pane_t5

0x0721,	// (0x0001b9e6) main_cam5_pane_t6_ParamLimits

0x0721,	// (0x0001b9e6) main_cam5_pane_t6

0x0735,	// (0x0001b9fa) main_cam5_pane_t7_ParamLimits

0x0735,	// (0x0001b9fa) main_cam5_pane_t7

0x0747,	// (0x0001ba0c) main_cam5_pane_t8_ParamLimits

0x0747,	// (0x0001ba0c) main_cam5_pane_t8

0x07c7,	// (0x0001ba8c) main_cam5_pane_t9_ParamLimits

0x07c7,	// (0x0001ba8c) main_cam5_pane_t9

0x07d9,	// (0x0001ba9e) main_cam5_pane_t10_ParamLimits

0x07d9,	// (0x0001ba9e) main_cam5_pane_t10

0x07eb,	// (0x0001bab0) main_cam5_pane_t11_ParamLimits

0x07eb,	// (0x0001bab0) main_cam5_pane_t11

0x07ff,	// (0x0001bac4) main_cam5_pane_t12_ParamLimits

0x07ff,	// (0x0001bac4) main_cam5_pane_t12

0x0816,	// (0x0001badb) main_cam5_pane_t13_ParamLimits

0x0816,	// (0x0001badb) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x0002abff) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x0002abff) main_cam5_pane_t

0x365c,	// (0x0001e921) popup_scut_keymap_window_ParamLimits

0x365c,	// (0x0001e921) popup_scut_keymap_window

0x8ea2,	// (0x00024167) aid_size_cell_brow_shortcut

0xc961,	// (0x00027c26) bg_popup_window_pane_cp010

0x8eae,	// (0x00024173) grid_scut_pane

0x8eba,	// (0x0002417f) cell_scut_pane_ParamLimits

0x8eba,	// (0x0002417f) cell_scut_pane

0x8ed5,	// (0x0002419a) cell_scut_pane_g1

0x0839,	// (0x0001bafe) cell_scut_pane_t1

0x0848,	// (0x0001bb0d) cell_scut_pane_t2

0x8ede,	// (0x000241a3) cell_scut_pane_t3

0x0002,

0xf955,	// (0x0002ac1a) cell_scut_pane_t

0x7c15,	// (0x00022eda) main_mup3_pane_g8_ParamLimits

0x7c15,	// (0x00022eda) main_mup3_pane_g8

0x4743,	// (0x0001fa08) area_vitu2_query_pane_ParamLimits

0x4743,	// (0x0001fa08) area_vitu2_query_pane

0x8c40,	// (0x00023f05) input_focus_pane_cp08

0x0857,	// (0x0001bb1c) area_vitu2_query_pane_g1

0x8eec,	// (0x000241b1) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x0002ac21) area_vitu2_query_pane_g

0x8efd,	// (0x000241c2) area_vitu2_query_pane_t1_ParamLimits

0x8efd,	// (0x000241c2) area_vitu2_query_pane_t1

0x8f11,	// (0x000241d6) area_vitu2_query_pane_t2_ParamLimits

0x8f11,	// (0x000241d6) area_vitu2_query_pane_t2

0x8f25,	// (0x000241ea) area_vitu2_query_pane_t3_ParamLimits

0x8f25,	// (0x000241ea) area_vitu2_query_pane_t3

0x0863,	// (0x0001bb28) area_vitu2_query_pane_t4_ParamLimits

0x0863,	// (0x0001bb28) area_vitu2_query_pane_t4

0x088b,	// (0x0001bb50) area_vitu2_query_pane_t5_ParamLimits

0x088b,	// (0x0001bb50) area_vitu2_query_pane_t5

0x08b3,	// (0x0001bb78) area_vitu2_query_pane_t6_ParamLimits

0x08b3,	// (0x0001bb78) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x0002ac26) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x0002ac26) area_vitu2_query_pane_t

0x8c28,	// (0x00023eed) bg_button_pane_cp018

0x8f4d,	// (0x00024212) bg_button_pane_cp021

0x8f59,	// (0x0002421e) bg_button_pane_cp022

0x8f7c,	// (0x00024241) input_focus_pane_cp09

0x69cb,	// (0x00021c90) aid_size_touch_mv_arrow_left

0x69f6,	// (0x00021cbb) aid_size_touch_mv_arrow_right

0x88b9,	// (0x00023b7e) main_cset_slider_pane_g16_ParamLimits

0x88b9,	// (0x00023b7e) main_cset_slider_pane_g16

0x88c5,	// (0x00023b8a) main_cset_slider_pane_g17_ParamLimits

0x88c5,	// (0x00023b8a) main_cset_slider_pane_g17

0x8e8f,	// (0x00024154) cell_cam4_burst_pane_g1_ParamLimits

0xbf9b,	// (0x00027260) compa_mode_pane

0x8aab,	// (0x00023d70) popup_vtel_slider_window_g3_ParamLimits

0x8aab,	// (0x00023d70) popup_vtel_slider_window_g3

0x8abf,	// (0x00023d84) popup_vtel_slider_window_g4_ParamLimits

0x8abf,	// (0x00023d84) popup_vtel_slider_window_g4

0x8ad3,	// (0x00023d98) popup_vtel_slider_window_t1_ParamLimits

0x8ad3,	// (0x00023d98) popup_vtel_slider_window_t1

0x36ab,	// (0x0001e970) main_cl_pane

0x3be0,	// (0x0001eea5) popup_imed_adjust2_window_ParamLimits

0xd307,	// (0x000285cc) bg_tb_trans_pane_cp05_ParamLimits

0xedfa,	// (0x0002a0bf) popup_imed_adjust2_window_g1_ParamLimits

0xee09,	// (0x0002a0ce) popup_imed_adjust2_window_g2_ParamLimits

0xee09,	// (0x0002a0ce) popup_imed_adjust2_window_g2

0xee15,	// (0x0002a0da) popup_imed_adjust2_window_g3_ParamLimits

0xee15,	// (0x0002a0da) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x0002a9a6) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x0002a9a6) popup_imed_adjust2_window_g

0xee21,	// (0x0002a0e6) popup_imed_adjust2_window_t1_ParamLimits

0xee39,	// (0x0002a0fe) slider_imed_adjust_pane_ParamLimits

0xee4d,	// (0x0002a112) slider_imed_adjust_pane_g1_ParamLimits

0xee5d,	// (0x0002a122) slider_imed_adjust_pane_g2_ParamLimits

0xee6d,	// (0x0002a132) slider_imed_adjust_pane_g3_ParamLimits

0xee7e,	// (0x0002a143) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x0002a9ad) slider_imed_adjust_pane_g_ParamLimits

0x44cc,	// (0x0001f791) aid_touch_area_cam4_ParamLimits

0x44cc,	// (0x0001f791) aid_touch_area_cam4

0x44dc,	// (0x0001f7a1) battery_pane_cp01

0x4563,	// (0x0001f828) main_camera4_pane_g6_ParamLimits

0x4563,	// (0x0001f828) main_camera4_pane_g6

0x4581,	// (0x0001f846) main_camera4_pane_t2_ParamLimits

0x4581,	// (0x0001f846) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x0002aaa5) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x0002aaa5) main_camera4_pane_t

0x45de,	// (0x0001f8a3) aid_touch_area_vid4_ParamLimits

0x45de,	// (0x0001f8a3) aid_touch_area_vid4

0x461e,	// (0x0001f8e3) main_video4_pane_g5_ParamLimits

0x461e,	// (0x0001f8e3) main_video4_pane_g5

0x4644,	// (0x0001f909) vid4_progress_pane_ParamLimits

0x4644,	// (0x0001f909) vid4_progress_pane

0x0485,	// (0x0001b74a) main_cset_slider_pane_g18_ParamLimits

0x0485,	// (0x0001b74a) main_cset_slider_pane_g18

0x06b3,	// (0x0001b978) cell_cam4_burst_pane_g2_ParamLimits

0x06b3,	// (0x0001b978) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x0002abfa) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x0002abfa) cell_cam4_burst_pane_g

0x8f8d,	// (0x00024252) bg_cl_pane_ParamLimits

0x8f8d,	// (0x00024252) bg_cl_pane

0x8f99,	// (0x0002425e) cl_header_pane_ParamLimits

0x8f99,	// (0x0002425e) cl_header_pane

0x8fa5,	// (0x0002426a) cl_listscroll_pane_ParamLimits

0x8fa5,	// (0x0002426a) cl_listscroll_pane

0x08ff,	// (0x0001bbc4) bg_cl_pane_g1

0x0907,	// (0x0001bbcc) bg_cl_pane_g2

0x090f,	// (0x0001bbd4) bg_cl_pane_g3

0x0917,	// (0x0001bbdc) bg_cl_pane_g4

0x091f,	// (0x0001bbe4) bg_cl_pane_g5

0x0927,	// (0x0001bbec) bg_cl_pane_g6

0x092f,	// (0x0001bbf4) bg_cl_pane_g7

0x0937,	// (0x0001bbfc) bg_cl_pane_g8

0x093f,	// (0x0001bc04) bg_cl_pane_g9

0x0008,

0xf970,	// (0x0002ac35) bg_cl_pane_g

0x8fb1,	// (0x00024276) aid_height_cl_leading_ParamLimits

0x8fb1,	// (0x00024276) aid_height_cl_leading

0x8fbd,	// (0x00024282) aid_height_cl_text_ParamLimits

0x8fbd,	// (0x00024282) aid_height_cl_text

0xc6c3,	// (0x00027988) bg_cl_header_pane_ParamLimits

0xc6c3,	// (0x00027988) bg_cl_header_pane

0x8fd5,	// (0x0002429a) cl_header_pane_g1_ParamLimits

0x8fd5,	// (0x0002429a) cl_header_pane_g1

0x8fe2,	// (0x000242a7) cl_header_pane_t1_ParamLimits

0x8fe2,	// (0x000242a7) cl_header_pane_t1

0x0947,	// (0x0001bc0c) cl_list_pane

0x0458,	// (0x0001b71d) hc_scroll_pane_cp01

0xcb6b,	// (0x00027e30) bg_cl_header_pane_g1

0x0314,	// (0x0001b5d9) bg_cl_header_pane_g2

0xcb8b,	// (0x00027e50) bg_cl_header_pane_g3

0x0324,	// (0x0001b5e9) bg_cl_header_pane_g4

0x031c,	// (0x0001b5e1) bg_cl_header_pane_g5

0x05ae,	// (0x0001b873) bg_cl_header_pane_g6

0x033c,	// (0x0001b601) bg_cl_header_pane_g7

0x0344,	// (0x0001b609) bg_cl_header_pane_g8

0x0334,	// (0x0001b5f9) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x0002ac48) bg_cl_header_pane_g

0x8ff4,	// (0x000242b9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8ff4,	// (0x000242b9) hc_cl_list_double_graphic_heading_pane

0x9004,	// (0x000242c9) hc_cl_list_single_graphic_pane_ParamLimits

0x9004,	// (0x000242c9) hc_cl_list_single_graphic_pane

0x9016,	// (0x000242db) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9016,	// (0x000242db) hc_cl_list_single_graphic_pane_g1

0x9022,	// (0x000242e7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9022,	// (0x000242e7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x0002ac5b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x0002ac5b) hc_cl_list_single_graphic_pane_g

0x9036,	// (0x000242fb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9036,	// (0x000242fb) hc_cl_list_single_graphic_pane_t1

0x9016,	// (0x000242db) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9016,	// (0x000242db) hc_cl_list_double_graphic_heading_pane_g1

0x904b,	// (0x00024310) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x904b,	// (0x00024310) hc_cl_list_double_graphic_heading_pane_g2

0x905f,	// (0x00024324) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x905f,	// (0x00024324) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x0002ac60) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x0002ac60) hc_cl_list_double_graphic_heading_pane_g

0x9073,	// (0x00024338) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9073,	// (0x00024338) hc_cl_list_double_graphic_heading_pane_t1

0x9088,	// (0x0002434d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9088,	// (0x0002434d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x0002ac67) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x0002ac67) hc_cl_list_double_graphic_heading_pane_t

0x4b5c,	// (0x0001fe21) vid4_progress_pane_g1

0x4b6c,	// (0x0001fe31) vid4_progress_pane_g2

0x4b7c,	// (0x0001fe41) vid4_progress_pane_g3

0x4b8e,	// (0x0001fe53) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x0002ac6c) vid4_progress_pane_g

0x4bac,	// (0x0001fe71) vid4_progress_pane_t1

0x4bc6,	// (0x0001fe8b) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x0002ac77) vid4_progress_pane_t

0x4bf4,	// (0x0001feb9) wait_bar_pane_cp07

0xe6f9,	// (0x000299be) blid_firmament_pane_ParamLimits

0xe73c,	// (0x00029a01) popup_blid_sat_info2_window_g1

0xe760,	// (0x00029a25) popup_blid_sat_info2_window_t3

0xe76e,	// (0x00029a33) popup_blid_sat_info2_window_t4

0xe77c,	// (0x00029a41) popup_blid_sat_info2_window_t5

0xe78a,	// (0x00029a4f) popup_blid_sat_info2_window_t6

0xe79a,	// (0x00029a5f) popup_blid_sat_info2_window_t7

0xe7a8,	// (0x00029a6d) popup_blid_sat_info2_window_t8

0xe7d8,	// (0x00029a9d) popup_blid_sat_info2_window_t9

0xe7e6,	// (0x00029aab) popup_blid_sat_info2_window_t10

0xe8ad,	// (0x00029b72) aid_firma_cardinal_ParamLimits

0xe8c1,	// (0x00029b86) blid_firmament_pane_t1_ParamLimits

0xe8d8,	// (0x00029b9d) blid_firmament_pane_t2_ParamLimits

0xe8ef,	// (0x00029bb4) blid_firmament_pane_t3_ParamLimits

0xe906,	// (0x00029bcb) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x0002a89f) blid_firmament_pane_t_ParamLimits

0xe91d,	// (0x00029be2) blid_sat_info_pane_ParamLimits

0x3b36,	// (0x0001edfb) main_cam_set_pane_ParamLimits

0x81f5,	// (0x000234ba) aid_size_cell_colour_35_ParamLimits

0x820f,	// (0x000234d4) aid_size_cell_colour_112_ParamLimits

0x8226,	// (0x000234eb) aid_size_cell_effect_ParamLimits

0xc3ed,	// (0x000276b2) bg_tb_trans_pane_cp02_ParamLimits

0xcfdd,	// (0x000282a2) heading_imed_pane_ParamLimits

0x8240,	// (0x00023505) listscroll_imed_pane_ParamLimits

0xdc2c,	// (0x00028ef1) popup_call2_audio_first_window_g5_ParamLimits

0xdc2c,	// (0x00028ef1) popup_call2_audio_first_window_g5

0x4200,	// (0x0001f4c5) aid_size_touch_image3_arrow_left_ParamLimits

0x4200,	// (0x0001f4c5) aid_size_touch_image3_arrow_left

0x4216,	// (0x0001f4db) aid_size_touch_image3_arrow_right_ParamLimits

0x4216,	// (0x0001f4db) aid_size_touch_image3_arrow_right

0x4bdf,	// (0x0001fea4) vid4_progress_pane_t3

0x8393,	// (0x00023658) main_hwr_training_symbol_option_pane_ParamLimits

0x8393,	// (0x00023658) main_hwr_training_symbol_option_pane

0xef85,	// (0x0002a24a) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x0002a24a) popup_hwr_training_preview_window

0x3e96,	// (0x0001f15b) hwr_training_navi_pane_g5_ParamLimits

0x3e96,	// (0x0001f15b) hwr_training_navi_pane_g5

0x0302,	// (0x0001b5c7) popup_char_count_window

0x369d,	// (0x0001e962) bg_popup_sub_pane_cp20_ParamLimits

0x4aa7,	// (0x0001fd6c) list_vitu2_match_list_pane_ParamLimits

0x4ab3,	// (0x0001fd78) vitu2_page_scroll_pane_ParamLimits

0x4ab3,	// (0x0001fd78) vitu2_page_scroll_pane

0x09e6,	// (0x0001bcab) list_single_hwr_training_symbol_option_pane_ParamLimits

0x09e6,	// (0x0001bcab) list_single_hwr_training_symbol_option_pane

0x09f9,	// (0x0001bcbe) list_single_hwr_training_symbol_option_pane_g1

0x0a01,	// (0x0001bcc6) list_single_hwr_training_symbol_option_pane_t1

0x0a0f,	// (0x0001bcd4) bg_button_pane_cp023

0x0a18,	// (0x0001bcdd) bg_button_pane_cp024

0x0a4b,	// (0x0001bd10) vitu2_page_scroll_pane_g1

0x0a53,	// (0x0001bd18) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x0002ac7e) vitu2_page_scroll_pane_g

0x0a5b,	// (0x0001bd20) vitu2_page_scroll_pane_t1

0x0765,	// (0x0001ba2a) popup_char_count_window_g1

0x0a6a,	// (0x0001bd2f) popup_char_count_window_g2

0x076e,	// (0x0001ba33) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x0002ac83) popup_char_count_window_g

0x0a73,	// (0x0001bd38) popup_char_count_window_t1

0x36ab,	// (0x0001e970) main_vded2_pane

0xede6,	// (0x0002a0ab) aid_size_cell_imed_line

0xedf0,	// (0x0002a0b5) grid_imed_line_width_pane

0x46b8,	// (0x0001f97d) vid4_indicators_pane_g4

0x0a81,	// (0x0001bd46) cell_imed_line_width_pane_ParamLimits

0x0a81,	// (0x0001bd46) cell_imed_line_width_pane

0x0a97,	// (0x0001bd5c) cell_imed_line_width_pane_g1

0x0aa0,	// (0x0001bd65) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x0002ac8a) cell_imed_line_width_pane_g

0x90b1,	// (0x00024376) main_vded2_pane_g1_ParamLimits

0x90b1,	// (0x00024376) main_vded2_pane_g1

0x90c0,	// (0x00024385) main_vded2_pane_g2_ParamLimits

0x90c0,	// (0x00024385) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x0002ac8f) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x0002ac8f) main_vded2_pane_g

0x90ce,	// (0x00024393) vded2_slider_pane_ParamLimits

0x90ce,	// (0x00024393) vded2_slider_pane

0x90db,	// (0x000243a0) aid_size_touch_vded2_end

0x90e5,	// (0x000243aa) aid_size_touch_vded2_playhead

0x0aa8,	// (0x0001bd6d) aid_size_touch_vded2_start

0x0ab0,	// (0x0001bd75) vded2_slider_bg_pane

0x0ab9,	// (0x0001bd7e) vded2_slider_pane_g1

0x0ac2,	// (0x0001bd87) vded2_slider_pane_g2

0x90ed,	// (0x000243b2) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x0002ac94) vded2_slider_pane_g

0x0aca,	// (0x0001bd8f) vded2_slider_bg_pane_g1

0x0ad3,	// (0x0001bd98) vded2_slider_bg_pane_g2

0x0adc,	// (0x0001bda1) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x0002ac9b) vded2_slider_bg_pane_g

0x6ea8,	// (0x0002216d) aid_postcard_touch_down_pane_ParamLimits

0x6ea8,	// (0x0002216d) aid_postcard_touch_down_pane

0x6eb8,	// (0x0002217d) aid_postcard_touch_up_pane_ParamLimits

0x6eb8,	// (0x0002217d) aid_postcard_touch_up_pane

0x36ab,	// (0x0001e970) main_blid2_pane

0x3b5f,	// (0x0001ee24) popup_blid2_search_window

0xbf9b,	// (0x00027260) blid2_gps_pane

0xbf9b,	// (0x00027260) blid2_navig_pane

0xbf9b,	// (0x00027260) blid2_search_pane

0xbf9b,	// (0x00027260) blid2_tripm_pane

0x90f6,	// (0x000243bb) blid2_search_pane_g1_ParamLimits

0x90f6,	// (0x000243bb) blid2_search_pane_g1

0x9102,	// (0x000243c7) blid2_search_pane_t1_ParamLimits

0x9102,	// (0x000243c7) blid2_search_pane_t1

0x9114,	// (0x000243d9) aid_size_cell_blid2_gps_ParamLimits

0x9114,	// (0x000243d9) aid_size_cell_blid2_gps

0x9124,	// (0x000243e9) blid2_gps_pane_g1_ParamLimits

0x9124,	// (0x000243e9) blid2_gps_pane_g1

0x9130,	// (0x000243f5) grid_blid2_satellite_pane_ParamLimits

0x9130,	// (0x000243f5) grid_blid2_satellite_pane

0x913e,	// (0x00024403) blid2_navig_pane_g1_ParamLimits

0x913e,	// (0x00024403) blid2_navig_pane_g1

0x914a,	// (0x0002440f) blid2_navig_pane_t1_ParamLimits

0x914a,	// (0x0002440f) blid2_navig_pane_t1

0x915c,	// (0x00024421) blid2_navig_pane_t2_ParamLimits

0x915c,	// (0x00024421) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x0002aca2) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x0002aca2) blid2_navig_pane_t

0x916e,	// (0x00024433) blid2_navig_ring_pane_ParamLimits

0x916e,	// (0x00024433) blid2_navig_ring_pane

0x917e,	// (0x00024443) blid2_speed_pane_ParamLimits

0x917e,	// (0x00024443) blid2_speed_pane

0x918a,	// (0x0002444f) blid2_tripm_pane_g1_ParamLimits

0x918a,	// (0x0002444f) blid2_tripm_pane_g1

0x919a,	// (0x0002445f) blid2_tripm_pane_g2_ParamLimits

0x919a,	// (0x0002445f) blid2_tripm_pane_g2

0x91a6,	// (0x0002446b) blid2_tripm_pane_g3_ParamLimits

0x91a6,	// (0x0002446b) blid2_tripm_pane_g3

0x91b2,	// (0x00024477) blid2_tripm_pane_g4_ParamLimits

0x91b2,	// (0x00024477) blid2_tripm_pane_g4

0x91be,	// (0x00024483) blid2_tripm_pane_g5_ParamLimits

0x91be,	// (0x00024483) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x0002aca7) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x0002aca7) blid2_tripm_pane_g

0x91da,	// (0x0002449f) blid2_tripm_pane_t1_ParamLimits

0x91da,	// (0x0002449f) blid2_tripm_pane_t1

0x91ec,	// (0x000244b1) blid2_tripm_pane_t2_ParamLimits

0x91ec,	// (0x000244b1) blid2_tripm_pane_t2

0x91fe,	// (0x000244c3) blid2_tripm_pane_t3_ParamLimits

0x91fe,	// (0x000244c3) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x0002acb4) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x0002acb4) blid2_tripm_pane_t

0x9230,	// (0x000244f5) cell_blid2_satellite_pane_ParamLimits

0x9230,	// (0x000244f5) cell_blid2_satellite_pane

0x924e,	// (0x00024513) cell_blid2_satellite_pane_g1

0x0ae5,	// (0x0001bdaa) cell_blid2_satellite_pane_t1

0xc70f,	// (0x000279d4) blid2_speed_pane_g1

0x0af3,	// (0x0001bdb8) blid2_speed_pane_t1

0x0b01,	// (0x0001bdc6) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x0002acbd) blid2_speed_pane_t

0xc70f,	// (0x000279d4) blid2_navig_ring_pane_g1

0x9257,	// (0x0002451c) blid2_navig_ring_pane_g2

0x925f,	// (0x00024524) blid2_navig_ring_pane_g3

0x9267,	// (0x0002452c) blid2_navig_ring_pane_g4

0x926f,	// (0x00024534) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x0002acc2) blid2_navig_ring_pane_g

0xbf9b,	// (0x00027260) bg_popup_window_pane_cp011

0x0b0f,	// (0x0001bdd4) popup_blid2_search_window_g1

0x0b17,	// (0x0001bddc) popup_blid2_search_window_t1

0x0b25,	// (0x0001bdea) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x0002accd) popup_blid2_search_window_t

0xca7a,	// (0x00027d3f) main_browser_pane_g1

0xc76d,	// (0x00027a32) main_browser_pane_ParamLimits

0x3b36,	// (0x0001edfb) bg_button_pane_cp011_ParamLimits

0x49d4,	// (0x0001fc99) cell_vitu2_function_pane_g1_ParamLimits

0xd307,	// (0x000285cc) bg_popup_sub_pane_cp22_ParamLimits

0x8c40,	// (0x00023f05) input_focus_pane_cp08_ParamLimits

0x8c5c,	// (0x00023f21) popup_vitu2_query_button_pane_ParamLimits

0x8c5c,	// (0x00023f21) popup_vitu2_query_button_pane

0x8c6b,	// (0x00023f30) popup_vitu2_query_input_button_pane

0x0609,	// (0x0001b8ce) popup_vitu2_query_window_g1_ParamLimits

0x8c75,	// (0x00023f3a) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x0002abce) popup_vitu2_query_window_g_ParamLimits

0xbf9b,	// (0x00027260) bg_button_pane_cp026

0x9277,	// (0x0002453c) popup_vitu2_query_input_button_pane_g1

0xbf9b,	// (0x00027260) bg_button_pane_cp025

0x0b33,	// (0x0001bdf8) popup_vitu2_query_button_pane_t1

0x786e,	// (0x00022b33) main_mp3_pane_t6

0x787e,	// (0x00022b43) popup_slider_window_cp01

0x4593,	// (0x0001f858) cam4_battery_pane

0x4671,	// (0x0001f936) cam4_battery_pane_cp02

0x4b54,	// (0x0001fe19) cam4_battery_pane_cp01

0x4b54,	// (0x0001fe19) cam4_battery_pane_cp03

0x0b41,	// (0x0001be06) cam4_battery_pane_g1

0xc70f,	// (0x000279d4) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x0002acd2) cam4_battery_pane_g

0xe7f4,	// (0x00029ab9) popup_blid_sat_info2_window_t11

0x69cb,	// (0x00021c90) aid_size_touch_mv_arrow_left_ParamLimits

0x69f6,	// (0x00021cbb) aid_size_touch_mv_arrow_right_ParamLimits

0xd1b0,	// (0x00028475) navi_pane_g1_ParamLimits

0x6a35,	// (0x00021cfa) navi_pane_g2_ParamLimits

0x6a63,	// (0x00021d28) navi_pane_g3_ParamLimits

0xf311,	// (0x0002a5d6) navi_pane_g_ParamLimits

0x6abd,	// (0x00021d82) navi_pane_mv_t1_ParamLimits

0x824c,	// (0x00023511) grid_imed_effect_pane_ParamLimits

0x5629,	// (0x000208ee) aid_placing_vt_slider_lsc

0xc9b8,	// (0x00027c7d) aid_placing_vt_slider_prt

0xc3ed,	// (0x000276b2) bg_tb_trans_pane_cp01_ParamLimits

0xea5c,	// (0x00029d21) popup_image_details_window_g1_ParamLimits

0xea6f,	// (0x00029d34) popup_image_details_window_g2_ParamLimits

0xea84,	// (0x00029d49) popup_image_details_window_g3_ParamLimits

0xea84,	// (0x00029d49) popup_image_details_window_g3

0xf61a,	// (0x0002a8df) popup_image_details_window_g_ParamLimits

0xea98,	// (0x00029d5d) popup_image_details_window_t1_ParamLimits

0xeaaa,	// (0x00029d6f) popup_image_details_window_t2_ParamLimits

0xeac3,	// (0x00029d88) popup_image_details_window_t3_ParamLimits

0xead7,	// (0x00029d9c) popup_image_details_window_t4_ParamLimits

0xeaf2,	// (0x00029db7) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x0002a8e6) popup_image_details_window_t_ParamLimits

0x8fc9,	// (0x0002428e) cl_header_name_pane_ParamLimits

0x8fc9,	// (0x0002428e) cl_header_name_pane

0x927f,	// (0x00024544) cl_header_name_pane_t1_ParamLimits

0x927f,	// (0x00024544) cl_header_name_pane_t1

0x9296,	// (0x0002455b) cl_header_name_pane_t2_ParamLimits

0x9296,	// (0x0002455b) cl_header_name_pane_t2

0x92c0,	// (0x00024585) cl_header_name_pane_t3_ParamLimits

0x92c0,	// (0x00024585) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x0002acd7) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x0002acd7) cl_header_name_pane_t

0x6a8e,	// (0x00021d53) navi_pane_mv_g2_ParamLimits

0x029e,	// (0x0001b563) field_vitu2_entry_pane_g1_ParamLimits

0x02aa,	// (0x0001b56f) field_vitu2_entry_pane_g2_ParamLimits

0xd329,	// (0x000285ee) field_vitu2_entry_pane_g3_ParamLimits

0xd329,	// (0x000285ee) field_vitu2_entry_pane_g3

0xf812,	// (0x0002aad7) field_vitu2_entry_pane_g_ParamLimits

0x489a,	// (0x0001fb5f) cell_vitu2_itu_pane_g1_ParamLimits

0x48b2,	// (0x0001fb77) cell_vitu2_itu_pane_g2_ParamLimits

0x48b2,	// (0x0001fb77) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x0002aae3) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x0002aae3) cell_vitu2_itu_pane_g

0x3b36,	// (0x0001edfb) bg_vkb2_func_pane_cp05_ParamLimits

0x3b36,	// (0x0001edfb) bg_vkb2_func_pane_cp05

0x3b36,	// (0x0001edfb) bg_vkb2_func_pane_cp03

0x3b36,	// (0x0001edfb) bg_vkb2_func_pane_cp04

0x3b36,	// (0x0001edfb) bg_vkb2_func_pane_cp10_ParamLimits

0x3b36,	// (0x0001edfb) bg_vkb2_func_pane_cp10

0x8f6a,	// (0x0002422f) bg_vkb2_func_pane_cp08

0x8c28,	// (0x00023eed) bg_vkb2_func_pane_cp06

0x8f4d,	// (0x00024212) bg_vkb2_func_pane_cp07

0x0a21,	// (0x0001bce6) bg_vkb2_func_pane_cp11_ParamLimits

0x0a21,	// (0x0001bce6) bg_vkb2_func_pane_cp11

0x0a36,	// (0x0001bcfb) bg_vkb2_func_pane_cp12_ParamLimits

0x0a36,	// (0x0001bcfb) bg_vkb2_func_pane_cp12

0xbf9b,	// (0x00027260) bg_vkb2_func_pane_cp09

0x0314,	// (0x0001b5d9) bg_vkb2_func_pane_g1

0xcb8b,	// (0x00027e50) bg_vkb2_func_pane_g2

0x031c,	// (0x0001b5e1) bg_vkb2_func_pane_g3

0x0324,	// (0x0001b5e9) bg_vkb2_func_pane_g4

0x05ae,	// (0x0001b873) bg_vkb2_func_pane_g5

0x033c,	// (0x0001b601) bg_vkb2_func_pane_g6

0x0344,	// (0x0001b609) bg_vkb2_func_pane_g7

0x0334,	// (0x0001b5f9) bg_vkb2_func_pane_g8

0xcb6b,	// (0x00027e30) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x0002acde) bg_vkb2_func_pane_g

0x91cc,	// (0x00024491) blid2_tripm_pane_g6_ParamLimits

0x91cc,	// (0x00024491) blid2_tripm_pane_g6

0x008a,	// (0x0001b34f) mp4_progress_pane_g1

0x9224,	// (0x000244e9) blid2_tripm_values_pane_ParamLimits

0x9224,	// (0x000244e9) blid2_tripm_values_pane

0x92e5,	// (0x000245aa) blid2_tripm_values_pane_t1

0x92f3,	// (0x000245b8) blid2_tripm_values_pane_t2

0x0b4b,	// (0x0001be10) blid2_tripm_values_pane_t3

0x9301,	// (0x000245c6) blid2_tripm_values_pane_t4

0x930f,	// (0x000245d4) blid2_tripm_values_pane_t5

0x931d,	// (0x000245e2) blid2_tripm_values_pane_t6

0x0b59,	// (0x0001be1e) blid2_tripm_values_pane_t7

0x932b,	// (0x000245f0) blid2_tripm_values_pane_t8

0x9339,	// (0x000245fe) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x0002acf1) blid2_tripm_values_pane_t

0x5667,	// (0x0002092c) call_video_pane_t1_ParamLimits

0x5684,	// (0x00020949) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0002a47f) call_video_pane_t_ParamLimits

0x6dc5,	// (0x0002208a) msg_header_pane_g1_ParamLimits

0xd3f7,	// (0x000286bc) msg_header_pane_g2_ParamLimits

0xd3f7,	// (0x000286bc) msg_header_pane_g2

0x0001,

0xf3af,	// (0x0002a674) msg_header_pane_g_ParamLimits

0xf3af,	// (0x0002a674) msg_header_pane_g

0xc76d,	// (0x00027a32) main_clock2_pane_ParamLimits

0x809f,	// (0x00023364) grid_clock2_toolbar_pane_ParamLimits

0x809f,	// (0x00023364) grid_clock2_toolbar_pane

0x809f,	// (0x00023364) listscroll_clock2_pane_ParamLimits

0x809f,	// (0x00023364) listscroll_clock2_pane

0x814e,	// (0x00023413) main_clock2_pane_t3_ParamLimits

0x814e,	// (0x00023413) main_clock2_pane_t3

0x8160,	// (0x00023425) main_clock2_pane_t4_ParamLimits

0x8160,	// (0x00023425) main_clock2_pane_t4

0x0b67,	// (0x0001be2c) cell_clock2_toolbar_pane

0x0b6f,	// (0x0001be34) cell_clock2_toolbar_pane_cp01

0x0b6f,	// (0x0001be34) cell_clock2_toolbar_pane_cp02

0x0b77,	// (0x0001be3c) cell_clock2_toolbar_pane_cp03

0x0b7f,	// (0x0001be44) list_clock2_pane

0xd116,	// (0x000283db) scroll_pane_cp10

0x0b87,	// (0x0001be4c) list_single_clock2_pane_ParamLimits

0x0b87,	// (0x0001be4c) list_single_clock2_pane

0xc961,	// (0x00027c26) list_highlight_pane_cp08

0x0b94,	// (0x0001be59) list_single_clock2_pane_t1

0x0ba2,	// (0x0001be67) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x0002ad04) list_single_clock2_pane_t

0xbf9b,	// (0x00027260) bg_button_pane_cp10

0x0bb0,	// (0x0001be75) cell_clock2_toolbar_pane_g1

0x3ac5,	// (0x0001ed8a) aid_main_viewer_pane_g1_ParamLimits

0x3ac5,	// (0x0001ed8a) aid_main_viewer_pane_g1

0x3ad1,	// (0x0001ed96) aid_main_viewer_pane_g2_ParamLimits

0x3ad1,	// (0x0001ed96) aid_main_viewer_pane_g2

0x6e64,	// (0x00022129) aid_main_viewer_pane_g3_ParamLimits

0x6e64,	// (0x00022129) aid_main_viewer_pane_g3

0x6e75,	// (0x0002213a) aid_main_viewer_pane_g4_ParamLimits

0x6e75,	// (0x0002213a) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x0002a685) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x0002a685) aid_main_viewer_pane_g

0x3b29,	// (0x0001edee) main_calc_pane_ParamLimits

0x3b44,	// (0x0001ee09) main_dialer2_pane_ParamLimits

0x36ab,	// (0x0001e970) main_cam6_pane

0x36ab,	// (0x0001e970) main_vid6_pane

0x80ab,	// (0x00023370) listscroll_gen_pane_cp06_ParamLimits

0x80ab,	// (0x00023370) listscroll_gen_pane_cp06

0x8172,	// (0x00023437) main_clock2_pane_t5_ParamLimits

0x8172,	// (0x00023437) main_clock2_pane_t5

0x81bf,	// (0x00023484) aid_call2_pane_cp10_ParamLimits

0x81d1,	// (0x00023496) aid_call_pane_cp10_ParamLimits

0xd185,	// (0x0002844a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd185,	// (0x0002844a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x3d7b,	// (0x0001f040) popup_clock_analogue_window_cp10_g3_ParamLimits

0x3d7b,	// (0x0001f040) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd185,	// (0x0002844a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x0002a99b) popup_clock_analogue_window_cp10_g_ParamLimits

0x3d91,	// (0x0001f056) popup_clock_analogue_window_cp10_t1_ParamLimits

0x00f4,	// (0x0001b3b9) cell_dialer2_keypad_pane_g2_ParamLimits

0x00f4,	// (0x0001b3b9) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x0002aa76) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x0002aa76) cell_dialer2_keypad_pane_g

0xc719,	// (0x000279de) cell_dialer2_keypad_pane_t1

0x87ae,	// (0x00023a73) main_cset_text2_pane_ParamLimits

0x87ae,	// (0x00023a73) main_cset_text2_pane

0x0857,	// (0x0001bb1c) area_vitu2_query_pane_g1_ParamLimits

0x8eec,	// (0x000241b1) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x0002ac21) area_vitu2_query_pane_g_ParamLimits

0x08db,	// (0x0001bba0) area_vitu2_query_pane_t7_ParamLimits

0x08db,	// (0x0001bba0) area_vitu2_query_pane_t7

0x8c28,	// (0x00023eed) bg_button_pane_cp018_ParamLimits

0x8f4d,	// (0x00024212) bg_button_pane_cp021_ParamLimits

0x8f59,	// (0x0002421e) bg_button_pane_cp022_ParamLimits

0x8f6a,	// (0x0002422f) bg_vkb2_func_pane_cp08_ParamLimits

0x8c28,	// (0x00023eed) bg_vkb2_func_pane_cp06_ParamLimits

0x8f4d,	// (0x00024212) bg_vkb2_func_pane_cp07_ParamLimits

0x8f7c,	// (0x00024241) input_focus_pane_cp09_ParamLimits

0x4c07,	// (0x0001fecc) cam6_autofocus_pane_ParamLimits

0x4c07,	// (0x0001fecc) cam6_autofocus_pane

0x4c29,	// (0x0001feee) cam6_image_uncrop_pane_ParamLimits

0x4c29,	// (0x0001feee) cam6_image_uncrop_pane

0x4c5f,	// (0x0001ff24) cam6_indi_pane_ParamLimits

0x4c5f,	// (0x0001ff24) cam6_indi_pane

0x4c79,	// (0x0001ff3e) cam6_mode_pane_ParamLimits

0x4c79,	// (0x0001ff3e) cam6_mode_pane

0x4c8d,	// (0x0001ff52) cam6_timer_pane_ParamLimits

0x4c8d,	// (0x0001ff52) cam6_timer_pane

0x4ca1,	// (0x0001ff66) cam6_zoom_pane_ParamLimits

0x4ca1,	// (0x0001ff66) cam6_zoom_pane

0x9347,	// (0x0002460c) cam6_mode_pane_g1_ParamLimits

0x9347,	// (0x0002460c) cam6_mode_pane_g1

0x9353,	// (0x00024618) cam6_mode_pane_g2_ParamLimits

0x9353,	// (0x00024618) cam6_mode_pane_g2

0x935f,	// (0x00024624) cam6_mode_pane_g3_ParamLimits

0x935f,	// (0x00024624) cam6_mode_pane_g3

0x936b,	// (0x00024630) cam6_mode_pane_g4_ParamLimits

0x936b,	// (0x00024630) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x0002ad09) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x0002ad09) cam6_mode_pane_g

0xe7b6,	// (0x00029a7b) bg_tb_trans_pane_cp08_ParamLimits

0xe7b6,	// (0x00029a7b) bg_tb_trans_pane_cp08

0x0bc6,	// (0x0001be8b) cam6_battery_pane_ParamLimits

0x0bc6,	// (0x0001be8b) cam6_battery_pane

0x0bdc,	// (0x0001bea1) cam6_indi_pane_g1_ParamLimits

0x0bdc,	// (0x0001bea1) cam6_indi_pane_g1

0x0bee,	// (0x0001beb3) cam6_indi_pane_g2_ParamLimits

0x0bee,	// (0x0001beb3) cam6_indi_pane_g2

0x0c00,	// (0x0001bec5) cam6_indi_pane_g3_ParamLimits

0x0c00,	// (0x0001bec5) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x0002ad12) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x0002ad12) cam6_indi_pane_g

0x0c12,	// (0x0001bed7) cam6_indi_pane_t1_ParamLimits

0x0c12,	// (0x0001bed7) cam6_indi_pane_t1

0x84d6,	// (0x0002379b) cam6_autofocus_pane_g1

0x84ce,	// (0x00023793) cam6_autofocus_pane_g2

0x84e6,	// (0x000237ab) cam6_autofocus_pane_g3

0x84de,	// (0x000237a3) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x0002ad19) cam6_autofocus_pane_g

0x0c38,	// (0x0001befd) cam6_timer_pane_g1

0x0c40,	// (0x0001bf05) cam6_timer_pane_t1

0x0c4e,	// (0x0001bf13) cam6_zoom_cont_pane

0x0c56,	// (0x0001bf1b) cam6_zoom_pane_g1

0x0c5f,	// (0x0001bf24) cam6_zoom_pane_g2

0x9377,	// (0x0002463c) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x0002ad22) cam6_zoom_pane_g

0xc70f,	// (0x000279d4) cam6_battery_pane_g1

0xc70f,	// (0x000279d4) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0002a351) cam6_battery_pane_g

0x0c56,	// (0x0001bf1b) cam6_zoom_cont_pane_g1

0x0c5f,	// (0x0001bf24) cam6_zoom_cont_pane_g2

0x0c68,	// (0x0001bf2d) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x0002ad29) cam6_zoom_cont_pane_g

0x9395,	// (0x0002465a) cam6_mode_pane_cp_ParamLimits

0x9395,	// (0x0002465a) cam6_mode_pane_cp

0x93a9,	// (0x0002466e) cam6_zoom_pane_cp_ParamLimits

0x93a9,	// (0x0002466e) cam6_zoom_pane_cp

0x93c5,	// (0x0002468a) vid6_image_uncrop_cif_pane_ParamLimits

0x93c5,	// (0x0002468a) vid6_image_uncrop_cif_pane

0x93f1,	// (0x000246b6) vid6_image_uncrop_nhd_pane_ParamLimits

0x93f1,	// (0x000246b6) vid6_image_uncrop_nhd_pane

0x9410,	// (0x000246d5) vid6_image_uncrop_vga_pane_ParamLimits

0x9410,	// (0x000246d5) vid6_image_uncrop_vga_pane

0x942f,	// (0x000246f4) vid6_image_uncrop_wvga_pane_ParamLimits

0x942f,	// (0x000246f4) vid6_image_uncrop_wvga_pane

0x944e,	// (0x00024713) vid6_indi_pane_ParamLimits

0x944e,	// (0x00024713) vid6_indi_pane

0xe7b6,	// (0x00029a7b) bg_tb_trans_pane_cp09_ParamLimits

0xe7b6,	// (0x00029a7b) bg_tb_trans_pane_cp09

0x0c80,	// (0x0001bf45) cam6_battery_pane_cp_ParamLimits

0x0c80,	// (0x0001bf45) cam6_battery_pane_cp

0x0c8c,	// (0x0001bf51) vid6_indi_pane_g1_ParamLimits

0x0c8c,	// (0x0001bf51) vid6_indi_pane_g1

0x0c9e,	// (0x0001bf63) vid6_indi_pane_g2_ParamLimits

0x0c9e,	// (0x0001bf63) vid6_indi_pane_g2

0x0cb0,	// (0x0001bf75) vid6_indi_pane_g3_ParamLimits

0x0cb0,	// (0x0001bf75) vid6_indi_pane_g3

0x0cc7,	// (0x0001bf8c) vid6_indi_pane_g4_ParamLimits

0x0cc7,	// (0x0001bf8c) vid6_indi_pane_g4

0x0cde,	// (0x0001bfa3) vid6_indi_pane_g5_ParamLimits

0x0cde,	// (0x0001bfa3) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x0002ad30) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x0002ad30) vid6_indi_pane_g

0x0cf8,	// (0x0001bfbd) vid6_indi_pane_t1_ParamLimits

0x0cf8,	// (0x0001bfbd) vid6_indi_pane_t1

0x0d0e,	// (0x0001bfd3) vid6_indi_pane_t2_ParamLimits

0x0d0e,	// (0x0001bfd3) vid6_indi_pane_t2

0x0d36,	// (0x0001bffb) vid6_indi_pane_t3_ParamLimits

0x0d36,	// (0x0001bffb) vid6_indi_pane_t3

0x0d5e,	// (0x0001c023) vid6_indi_pane_t4_ParamLimits

0x0d5e,	// (0x0001c023) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x0002ad3b) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x0002ad3b) vid6_indi_pane_t

0x0d82,	// (0x0001c047) wait_bar_pane_cp08

0x9473,	// (0x00024738) main_cset_text2_pane_t1_ParamLimits

0x9473,	// (0x00024738) main_cset_text2_pane_t1

0x9380,	// (0x00024645) listscroll_gen_pane_cp06_t1_ParamLimits

0x9380,	// (0x00024645) listscroll_gen_pane_cp06_t1

0x36ab,	// (0x0001e970) main_cam6_set_pane

0x15ac,	// (0x0001c871) bg_tb_trans_pane_cp06_ParamLimits

0x459b,	// (0x0001f860) cam4_indicators_pane_g1_ParamLimits

0x45ac,	// (0x0001f871) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x0002aab3) cam4_indicators_pane_g_ParamLimits

0x45c4,	// (0x0001f889) cam4_indicators_pane_t1_ParamLimits

0x3b36,	// (0x0001edfb) bg_tb_trans_pane_cp07_ParamLimits

0x467b,	// (0x0001f940) vid4_indicators_pane_g1_ParamLimits

0x4691,	// (0x0001f956) vid4_indicators_pane_g2_ParamLimits

0x46a5,	// (0x0001f96a) vid4_indicators_pane_g3_ParamLimits

0x46b8,	// (0x0001f97d) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x0002aac5) vid4_indicators_pane_g_ParamLimits

0x46d6,	// (0x0001f99b) vid4_indicators_pane_t1_ParamLimits

0x4b5c,	// (0x0001fe21) vid4_progress_pane_g1_ParamLimits

0x4b6c,	// (0x0001fe31) vid4_progress_pane_g2_ParamLimits

0x4b7c,	// (0x0001fe41) vid4_progress_pane_g3_ParamLimits

0x4b8e,	// (0x0001fe53) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x0002ac6c) vid4_progress_pane_g_ParamLimits

0x4bac,	// (0x0001fe71) vid4_progress_pane_t1_ParamLimits

0x4bc6,	// (0x0001fe8b) vid4_progress_pane_t2_ParamLimits

0x4bdf,	// (0x0001fea4) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x0002ac77) vid4_progress_pane_t_ParamLimits

0x4bf4,	// (0x0001feb9) wait_bar_pane_cp07_ParamLimits

0x949a,	// (0x0002475f) main_cam6_set_pane_g2_ParamLimits

0x949a,	// (0x0002475f) main_cam6_set_pane_g2

0x94a6,	// (0x0002476b) main_cset6_listscroll_pane_ParamLimits

0x94a6,	// (0x0002476b) main_cset6_listscroll_pane

0x94d3,	// (0x00024798) main_cset6_slider_pane_ParamLimits

0x94d3,	// (0x00024798) main_cset6_slider_pane

0x94df,	// (0x000247a4) main_cset6_text2_pane_ParamLimits

0x94df,	// (0x000247a4) main_cset6_text2_pane

0x0d91,	// (0x0001c056) main_cset6_text_pane

0x0d99,	// (0x0001c05e) main_cset_list_pane_copy1_ParamLimits

0x0d99,	// (0x0001c05e) main_cset_list_pane_copy1

0x0da9,	// (0x0001c06e) scroll_pane_cp028_copy1

0x94f2,	// (0x000247b7) cset_list_set_pane_copy1

0x9502,	// (0x000247c7) aid_position_infowindow_above_copy1

0x950a,	// (0x000247cf) aid_position_infowindow_below_copy1

0x9512,	// (0x000247d7) cset_list_set_pane_g1_copy1

0x951a,	// (0x000247df) cset_list_set_pane_g3_copy1_ParamLimits

0x951a,	// (0x000247df) cset_list_set_pane_g3_copy1

0x9529,	// (0x000247ee) cset_list_set_pane_t1_copy1_ParamLimits

0x9529,	// (0x000247ee) cset_list_set_pane_t1_copy1

0xc3ed,	// (0x000276b2) list_highlight_pane_cp021_copy1_ParamLimits

0xc3ed,	// (0x000276b2) list_highlight_pane_cp021_copy1

0x0db2,	// (0x0001c077) cset6_slider_pane_ParamLimits

0x0db2,	// (0x0001c077) cset6_slider_pane

0x0dde,	// (0x0001c0a3) main_cset6_slider_pane_g1_ParamLimits

0x0dde,	// (0x0001c0a3) main_cset6_slider_pane_g1

0x953e,	// (0x00024803) main_cset6_slider_pane_g2_ParamLimits

0x953e,	// (0x00024803) main_cset6_slider_pane_g2

0x0e06,	// (0x0001c0cb) main_cset6_slider_pane_g3_ParamLimits

0x0e06,	// (0x0001c0cb) main_cset6_slider_pane_g3

0x9566,	// (0x0002482b) main_cset6_slider_pane_g4_ParamLimits

0x9566,	// (0x0002482b) main_cset6_slider_pane_g4

0x9572,	// (0x00024837) main_cset6_slider_pane_g5_ParamLimits

0x9572,	// (0x00024837) main_cset6_slider_pane_g5

0x046d,	// (0x0001b732) main_cset6_slider_pane_g7_ParamLimits

0x046d,	// (0x0001b732) main_cset6_slider_pane_g7

0x0479,	// (0x0001b73e) main_cset6_slider_pane_g8_ParamLimits

0x0479,	// (0x0001b73e) main_cset6_slider_pane_g8

0x957e,	// (0x00024843) main_cset6_slider_pane_g9_ParamLimits

0x957e,	// (0x00024843) main_cset6_slider_pane_g9

0x958a,	// (0x0002484f) main_cset6_slider_pane_g10_ParamLimits

0x958a,	// (0x0002484f) main_cset6_slider_pane_g10

0x9596,	// (0x0002485b) main_cset6_slider_pane_g11_ParamLimits

0x9596,	// (0x0002485b) main_cset6_slider_pane_g11

0x95a2,	// (0x00024867) main_cset6_slider_pane_g12_ParamLimits

0x95a2,	// (0x00024867) main_cset6_slider_pane_g12

0x95ae,	// (0x00024873) main_cset6_slider_pane_g13_ParamLimits

0x95ae,	// (0x00024873) main_cset6_slider_pane_g13

0x95ba,	// (0x0002487f) main_cset6_slider_pane_g14_ParamLimits

0x95ba,	// (0x0002487f) main_cset6_slider_pane_g14

0x95c6,	// (0x0002488b) main_cset6_slider_pane_g15_ParamLimits

0x95c6,	// (0x0002488b) main_cset6_slider_pane_g15

0x95de,	// (0x000248a3) main_cset6_slider_pane_g16_ParamLimits

0x95de,	// (0x000248a3) main_cset6_slider_pane_g16

0x95ea,	// (0x000248af) main_cset6_slider_pane_g17_ParamLimits

0x95ea,	// (0x000248af) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x0002ad44) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x0002ad44) main_cset6_slider_pane_g

0x0e12,	// (0x0001c0d7) main_cset6_slider_pane_t1_ParamLimits

0x0e12,	// (0x0001c0d7) main_cset6_slider_pane_t1

0x960e,	// (0x000248d3) main_cset6_slider_pane_t2_ParamLimits

0x960e,	// (0x000248d3) main_cset6_slider_pane_t2

0x9639,	// (0x000248fe) main_cset6_slider_pane_t3_ParamLimits

0x9639,	// (0x000248fe) main_cset6_slider_pane_t3

0x9664,	// (0x00024929) main_cset6_slider_pane_t4_ParamLimits

0x9664,	// (0x00024929) main_cset6_slider_pane_t4

0x968f,	// (0x00024954) main_cset6_slider_pane_t5_ParamLimits

0x968f,	// (0x00024954) main_cset6_slider_pane_t5

0x0e53,	// (0x0001c118) main_cset6_slider_pane_t7_ParamLimits

0x0e53,	// (0x0001c118) main_cset6_slider_pane_t7

0x96ba,	// (0x0002497f) main_cset6_slider_pane_t8_ParamLimits

0x96ba,	// (0x0002497f) main_cset6_slider_pane_t8

0x96de,	// (0x000249a3) main_cset6_slider_pane_t9_ParamLimits

0x96de,	// (0x000249a3) main_cset6_slider_pane_t9

0x9702,	// (0x000249c7) main_cset6_slider_pane_t10_ParamLimits

0x9702,	// (0x000249c7) main_cset6_slider_pane_t10

0x9726,	// (0x000249eb) main_cset6_slider_pane_t11_ParamLimits

0x9726,	// (0x000249eb) main_cset6_slider_pane_t11

0x0e89,	// (0x0001c14e) main_cset6_slider_pane_t14_ParamLimits

0x0e89,	// (0x0001c14e) main_cset6_slider_pane_t14

0x0ec2,	// (0x0001c187) main_cset6_slider_pane_t15_ParamLimits

0x0ec2,	// (0x0001c187) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x0002ad69) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x0002ad69) main_cset6_slider_pane_t

0x0544,	// (0x0001b809) cset_slider_pane_g1_copy1

0x054d,	// (0x0001b812) cset_slider_pane_g2_copy1

0x0556,	// (0x0001b81b) cset_slider_pane_g3_copy1

0xbf9b,	// (0x00027260) bg_popup_sub_pane_cp011_copy1

0x0f04,	// (0x0001c1c9) main_cset_text_pane_g1_copy1

0x061d,	// (0x0001b8e2) main_cset_text_pane_t1_copy1

0x062b,	// (0x0001b8f0) main_cset_text_pane_t2_copy1

0x0639,	// (0x0001b8fe) main_cset_text_pane_t3_copy1

0x0647,	// (0x0001b90c) main_cset_text_pane_t4_copy1

0x0655,	// (0x0001b91a) main_cset_text_pane_t5_copy1

0x0f0c,	// (0x0001c1d1) main_cset_text_pane_t6_copy1

0x0f1a,	// (0x0001c1df) main_cset_text_pane_t7_copy1

0x9767,	// (0x00024a2c) main_cset_text2_pane_t1_copy1

0x3b36,	// (0x0001edfb) main_ncimui_pane

0x3b9d,	// (0x0001ee62) popup_query_ncimui_window_ParamLimits

0x3b9d,	// (0x0001ee62) popup_query_ncimui_window

0xeb93,	// (0x00029e58) field_cale_ev2_pane_g4_ParamLimits

0xeb93,	// (0x00029e58) field_cale_ev2_pane_g4

0x8421,	// (0x000236e6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8421,	// (0x000236e6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x0002aa4d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x0002aa4d) cell_video_dialer_keypad_pane_g

0x8439,	// (0x000236fe) cell_video_dialer_keypad_pane_t1

0xbf9b,	// (0x00027260) bg_popup_window_pane_cp012

0xd00f,	// (0x000282d4) heading_pane_cp06

0x0f46,	// (0x0001c20b) ncim_query_content_pane

0xbf9b,	// (0x00027260) bg_popup_heading_pane_cp01

0x0f4e,	// (0x0001c213) ncim_heading_pane_t1

0x0f5c,	// (0x0001c221) ncim_indicator_popup_pane

0x0f6e,	// (0x0001c233) ncim_query_button_pane

0x0f84,	// (0x0001c249) ncim_query_content_pane_t1

0x0f96,	// (0x0001c25b) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x0002adad) ncim_query_content_pane_t

0x0fd0,	// (0x0001c295) ncim_query_list_pane

0x0fe2,	// (0x0001c2a7) ncim_query_popup_pane

0x0f5c,	// (0x0001c221) ncim_indicator_popup_pane_ParamLimits

0x98c3,	// (0x00024b88) ncim_query_content_pane_g1_ParamLimits

0x98c3,	// (0x00024b88) ncim_query_content_pane_g1

0x0f84,	// (0x0001c249) ncim_query_content_pane_t1_ParamLimits

0x0f96,	// (0x0001c25b) ncim_query_content_pane_t2_ParamLimits

0x98cf,	// (0x00024b94) ncim_query_content_pane_t3_ParamLimits

0x98cf,	// (0x00024b94) ncim_query_content_pane_t3

0x98ec,	// (0x00024bb1) ncim_query_content_pane_t4_ParamLimits

0x98ec,	// (0x00024bb1) ncim_query_content_pane_t4

0x9909,	// (0x00024bce) ncim_query_content_pane_t5_ParamLimits

0x9909,	// (0x00024bce) ncim_query_content_pane_t5

0x0fa8,	// (0x0001c26d) ncim_query_content_pane_t6_ParamLimits

0x0fa8,	// (0x0001c26d) ncim_query_content_pane_t6

0xfae8,	// (0x0002adad) ncim_query_content_pane_t_ParamLimits

0x0fd0,	// (0x0001c295) ncim_query_list_pane_ParamLimits

0x0fe2,	// (0x0001c2a7) ncim_query_popup_pane_ParamLimits

0x0ff6,	// (0x0001c2bb) wait_bar_pane_cp04

0xbf9b,	// (0x00027260) input_focus_pane_cp011

0x0ffe,	// (0x0001c2c3) ncim_query_popup_pane_t1

0x100c,	// (0x0001c2d1) ncim_list_query_list_pane_ParamLimits

0x100c,	// (0x0001c2d1) ncim_list_query_list_pane

0xbf9b,	// (0x00027260) bg_button_pane_cp027

0x101f,	// (0x0001c2e4) ncim_query_button_pane_g1

0xbf9b,	// (0x00027260) list_highlight_pane_cp012

0x1029,	// (0x0001c2ee) ncim_list_query_list_pane_g1

0x1031,	// (0x0001c2f6) ncim_list_query_list_pane_t1

0x45b8,	// (0x0001f87d) cam4_indicators_pane_g3_ParamLimits

0x45b8,	// (0x0001f87d) cam4_indicators_pane_g3

0x46c4,	// (0x0001f989) vid4_indicators_pane_g5_ParamLimits

0x46c4,	// (0x0001f989) vid4_indicators_pane_g5

0x4b9d,	// (0x0001fe62) vid4_progress_pane_g5_ParamLimits

0x4b9d,	// (0x0001fe62) vid4_progress_pane_g5

0x9799,	// (0x00024a5e) main_ncimui_pane_g1

0x9805,	// (0x00024aca) ncimui_group_query_pane_ParamLimits

0x9805,	// (0x00024aca) ncimui_group_query_pane

0x985f,	// (0x00024b24) ncimui_list_pane_ParamLimits

0x985f,	// (0x00024b24) ncimui_list_pane

0x9886,	// (0x00024b4b) ncimui_text_pane_ParamLimits

0x9886,	// (0x00024b4b) ncimui_text_pane

0x9926,	// (0x00024beb) ncimui_text_pane_t1_ParamLimits

0x9926,	// (0x00024beb) ncimui_text_pane_t1

0x103f,	// (0x0001c304) ncimui_list_single_graphic_pane_ParamLimits

0x103f,	// (0x0001c304) ncimui_list_single_graphic_pane

0x9945,	// (0x00024c0a) ncimui_query_pane_ParamLimits

0x9945,	// (0x00024c0a) ncimui_query_pane

0xbf9b,	// (0x00027260) list_highlight_pane_cp013

0x104f,	// (0x0001c314) ncim_list_query_list_pane_t1_copy1

0x1029,	// (0x0001c2ee) ncim_list_single_graphic_pane_g1

0x9958,	// (0x00024c1d) ncim_query_button_pane_cp01

0x9964,	// (0x00024c29) ncim_query_entry_pane_ParamLimits

0x9964,	// (0x00024c29) ncim_query_entry_pane

0x9977,	// (0x00024c3c) ncimui_query_pane_g1

0x9983,	// (0x00024c48) ncimui_query_pane_t1_ParamLimits

0x9983,	// (0x00024c48) ncimui_query_pane_t1

0xc3ed,	// (0x000276b2) input_focus_pane_cp012

0x105d,	// (0x0001c322) ncim_query_entry_pane_t1

0xc76d,	// (0x00027a32) main_im_pane_ParamLimits

0x3b36,	// (0x0001edfb) main_mobtv_pane_ParamLimits

0x3b36,	// (0x0001edfb) main_mobtv_pane

0x95f6,	// (0x000248bb) main_cset6_slider_pane_g18_ParamLimits

0x95f6,	// (0x000248bb) main_cset6_slider_pane_g18

0x9602,	// (0x000248c7) main_cset6_slider_pane_g19_ParamLimits

0x9602,	// (0x000248c7) main_cset6_slider_pane_g19

0xd329,	// (0x000285ee) bg_main_mobtv_pane_ParamLimits

0xd329,	// (0x000285ee) bg_main_mobtv_pane

0x999c,	// (0x00024c61) main_mobtv_info_pane

0x99a7,	// (0x00024c6c) main_mobtv_loading_pane_ParamLimits

0x99a7,	// (0x00024c6c) main_mobtv_loading_pane

0x106f,	// (0x0001c334) main_mobtv_pg_channel_list_pane

0x1079,	// (0x0001c33e) main_mobtv_pg_hdr_pane

0x99b4,	// (0x00024c79) main_mobtv_programe_curr_pane_ParamLimits

0x99b4,	// (0x00024c79) main_mobtv_programe_curr_pane

0x99c1,	// (0x00024c86) main_mobtv_programe_next_pane_ParamLimits

0x99c1,	// (0x00024c86) main_mobtv_programe_next_pane

0x1082,	// (0x0001c347) popup_mobtv_noti_window

0xc70f,	// (0x000279d4) main_tv_pg_hdr_pane_g1

0x108c,	// (0x0001c351) main_tv_pg_hdr_pane_g2

0x1094,	// (0x0001c359) main_tv_pg_hdr_pane_g3

0x109c,	// (0x0001c361) main_tv_pg_hdr_pane_g4

0x10a4,	// (0x0001c369) main_tv_pg_hdr_pane_g5

0x10ae,	// (0x0001c373) main_tv_pg_hdr_pane_g6

0x10b8,	// (0x0001c37d) main_tv_pg_hdr_pane_g7

0x10c2,	// (0x0001c387) main_tv_pg_hdr_pane_g8

0x10cc,	// (0x0001c391) main_tv_pg_hdr_pane_g9

0x10d6,	// (0x0001c39b) main_tv_pg_hdr_pane_g10

0x10e0,	// (0x0001c3a5) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x0002adba) main_tv_pg_hdr_pane_g

0x10ea,	// (0x0001c3af) main_tv_pg_hdr_pane_t1

0x10f8,	// (0x0001c3bd) main_tv_pg_hdr_pane_t2

0x1106,	// (0x0001c3cb) main_tv_pg_hdr_pane_t3

0x1116,	// (0x0001c3db) main_tv_pg_hdr_pane_t4

0x1126,	// (0x0001c3eb) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x0002add1) main_tv_pg_hdr_pane_t

0x1136,	// (0x0001c3fb) single_mobtv_pg_channel_pane_ParamLimits

0x1136,	// (0x0001c3fb) single_mobtv_pg_channel_pane

0x1148,	// (0x0001c40d) single_mobtv_pg_channel_table_pane

0x1151,	// (0x0001c416) single_mobtv_pg_channel_thumb_pane

0x115a,	// (0x0001c41f) single_tv_pg_channel_pane_g1

0x1163,	// (0x0001c428) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x0002addc) single_tv_pg_channel_pane_g

0xc6d1,	// (0x00027996) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc6d1,	// (0x00027996) bg_single_mobtv_pg_channel_thumb_pane

0x116c,	// (0x0001c431) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x116c,	// (0x0001c431) single_mobtv_pg_channel_thumb_pane_g1

0x117a,	// (0x0001c43f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x117a,	// (0x0001c43f) single_mobtv_pg_channel_thumb_pane_g2

0x1186,	// (0x0001c44b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1186,	// (0x0001c44b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x0002ade1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x0002ade1) single_mobtv_pg_channel_thumb_pane_g

0x1192,	// (0x0001c457) single_mobtv_pg_channel_thumb_pane_t1

0x11a0,	// (0x0001c465) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x0002ade8) single_mobtv_pg_channel_thumb_pane_t

0xc70f,	// (0x000279d4) bg_single_mobtv_pg_channel_table_pane_g1

0xc70f,	// (0x000279d4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0002a351) bg_single_mobtv_pg_channel_table_pane_g

0x11ae,	// (0x0001c473) single_mobtv_pg_channel_table_pane_t1

0x11bc,	// (0x0001c481) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x0002aded) single_mobtv_pg_channel_table_pane_t

0x99d6,	// (0x00024c9b) main_mobtv_info_pane_g1_ParamLimits

0x99d6,	// (0x00024c9b) main_mobtv_info_pane_g1

0x99f2,	// (0x00024cb7) main_mobtv_info_pane_t1_ParamLimits

0x99f2,	// (0x00024cb7) main_mobtv_info_pane_t1

0x9a6a,	// (0x00024d2f) main_mobtv_info_pane_t2_ParamLimits

0x9a6a,	// (0x00024d2f) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x0002adf7) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x0002adf7) main_mobtv_info_pane_t

0x9afb,	// (0x00024dc0) wait_bar_pane_cp05

0x9b0d,	// (0x00024dd2) main_mobtv_loading_pane_g1_ParamLimits

0x9b0d,	// (0x00024dd2) main_mobtv_loading_pane_g1

0x9b19,	// (0x00024dde) main_mobtv_loading_pane_g2_ParamLimits

0x9b19,	// (0x00024dde) main_mobtv_loading_pane_g2

0x9b25,	// (0x00024dea) main_mobtv_loading_pane_g3_ParamLimits

0x9b25,	// (0x00024dea) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x0002adfe) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x0002adfe) main_mobtv_loading_pane_g

0x11ca,	// (0x0001c48f) main_mobtv_loading_pane_t1_ParamLimits

0x11ca,	// (0x0001c48f) main_mobtv_loading_pane_t1

0x11e2,	// (0x0001c4a7) main_mobtv_loading_pane_t2_ParamLimits

0x11e2,	// (0x0001c4a7) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x0002ae05) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x0002ae05) main_mobtv_loading_pane_t

0x9b33,	// (0x00024df8) wait_bar_pane_cp06_ParamLimits

0x9b33,	// (0x00024df8) wait_bar_pane_cp06

0x1206,	// (0x0001c4cb) main_mobtv_programe_curr_pane_t1

0x1214,	// (0x0001c4d9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x0002ae0a) main_mobtv_programe_curr_pane_t

0x1222,	// (0x0001c4e7) main_mobtv_programe_next_pane_t1

0x1230,	// (0x0001c4f5) main_mobtv_programe_next_pane_t2

0x123e,	// (0x0001c503) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x0002ae0f) main_mobtv_programe_next_pane_t

0xbf9b,	// (0x00027260) bg_popup_mobtv_noti_window_pane

0x124c,	// (0x0001c511) popup_mobtv_noti_window_g1

0x1254,	// (0x0001c519) popup_mobtv_noti_window_t1

0x1262,	// (0x0001c527) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x0002ae16) popup_mobtv_noti_window_t

0xc70f,	// (0x000279d4) bg_popup_mobtv_noti_window_pane_g1

0x36ab,	// (0x0001e970) sc_clock_pane

0x36ab,	// (0x0001e970) main_fs_bigclock_pane

0x9212,	// (0x000244d7) blid2_tripm_pane_t4_ParamLimits

0x9212,	// (0x000244d7) blid2_tripm_pane_t4

0xc6df,	// (0x000279a4) sc_clock_pane_g1_ParamLimits

0xc6df,	// (0x000279a4) sc_clock_pane_g1

0xc72d,	// (0x000279f2) sc_clock_pane_t1_ParamLimits

0xc72d,	// (0x000279f2) sc_clock_pane_t1

0xc72d,	// (0x000279f2) sc_clock_pane_t2_ParamLimits

0xc72d,	// (0x000279f2) sc_clock_pane_t2

0xc72d,	// (0x000279f2) sc_clock_pane_t3_ParamLimits

0xc72d,	// (0x000279f2) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x0002ae1b) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x0002ae1b) sc_clock_pane_t

0xa735,	// (0x000259fa) main_fs_bigclock_indicator_pane_ParamLimits

0xa735,	// (0x000259fa) main_fs_bigclock_indicator_pane

0x9b88,	// (0x00024e4d) main_fs_bigclock_pane_g1_ParamLimits

0x9b88,	// (0x00024e4d) main_fs_bigclock_pane_g1

0xa741,	// (0x00025a06) main_fs_bigclock_pane_t1_ParamLimits

0xa741,	// (0x00025a06) main_fs_bigclock_pane_t1

0xa753,	// (0x00025a18) main_fs_bigclock_pane_t2_ParamLimits

0xa753,	// (0x00025a18) main_fs_bigclock_pane_t2

0xa767,	// (0x00025a2c) main_fs_bigclock_pane_t3_ParamLimits

0xa767,	// (0x00025a2c) main_fs_bigclock_pane_t3

0x0002,

0xfce4,	// (0x0002afa9) main_fs_bigclock_pane_t_ParamLimits

0xfce4,	// (0x0002afa9) main_fs_bigclock_pane_t

0x1c00,	// (0x0001cec5) main_fs_bigclock_indicator_pane_g1

0x0f76,	// (0x0001c23b) ncim_query_content_pane_g2_ParamLimits

0x0f76,	// (0x0001c23b) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x0002ada8) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x0002ada8) ncim_query_content_pane_g

0xc72d,	// (0x000279f2) sc_clock_pane_t4_ParamLimits

0xc72d,	// (0x000279f2) sc_clock_pane_t4

0x3b36,	// (0x0001edfb) main_radioblah_pane

0x449a,	// (0x0001f75f) cell_call4_button_pane_t1_copy1_ParamLimits

0x449a,	// (0x0001f75f) cell_call4_button_pane_t1_copy1

0x97b5,	// (0x00024a7a) main_ncimui_pane_t1_ParamLimits

0x97b5,	// (0x00024a7a) main_ncimui_pane_t1

0x97cf,	// (0x00024a94) main_ncimui_pane_t2_ParamLimits

0x97cf,	// (0x00024a94) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x0002ada1) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x0002ada1) main_ncimui_pane_t

0xd307,	// (0x000285cc) main_radioblah_anim_pane_ParamLimits

0xd307,	// (0x000285cc) main_radioblah_anim_pane

0xd307,	// (0x000285cc) main_radioblah_info_pane_ParamLimits

0xd307,	// (0x000285cc) main_radioblah_info_pane

0xd315,	// (0x000285da) main_radioblah_pane_t1_ParamLimits

0xd315,	// (0x000285da) main_radioblah_pane_t1

0xd315,	// (0x000285da) main_radioblah_pane_t2_ParamLimits

0xd315,	// (0x000285da) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x0002ae3c) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x0002ae3c) main_radioblah_pane_t

0xc6c3,	// (0x00027988) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc6c3,	// (0x00027988) main_radioblah_rocker_ctrl_pane

0xe7c4,	// (0x00029a89) main_radioblah_info_pane_t1_ParamLimits

0xe7c4,	// (0x00029a89) main_radioblah_info_pane_t1

0x12a0,	// (0x0001c565) main_radioblah_info_pane_t2_ParamLimits

0x12a0,	// (0x0001c565) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x0002ae45) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x0002ae45) main_radioblah_info_pane_t

0xc70f,	// (0x000279d4) main_radioblah_rocker_ctrl_pane_g1

0xc70f,	// (0x000279d4) main_radioblah_rocker_ctrl_pane_g2

0xc70f,	// (0x000279d4) main_radioblah_rocker_ctrl_pane_g3

0xc70f,	// (0x000279d4) main_radioblah_rocker_ctrl_pane_g4

0xc70f,	// (0x000279d4) main_radioblah_rocker_ctrl_pane_g5

0xc70f,	// (0x000279d4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x0002ae4e) main_radioblah_rocker_ctrl_pane_g

0x9767,	// (0x00024a2c) main_cset_text2_pane_t1_copy1_ParamLimits

0x450b,	// (0x0001f7d0) cam4_image_uncrop_qvga_pane

0x462a,	// (0x0001f8ef) vid4_image_uncrop_qcif_pane

0x4c51,	// (0x0001ff16) cam6_image_uncrop_qvga_pane_ParamLimits

0x4c51,	// (0x0001ff16) cam6_image_uncrop_qvga_pane

0x0c70,	// (0x0001bf35) vid6_image_uncrop_qcif_pane_ParamLimits

0x0c70,	// (0x0001bf35) vid6_image_uncrop_qcif_pane

0xbf9b,	// (0x00027260) bg_popup_preview_window_pane_cp03

0x0f28,	// (0x0001c1ed) list_cset_text2_pane

0x0f30,	// (0x0001c1f5) main_cset6_text2_pane_g1

0x0f38,	// (0x0001c1fd) main_cset6_text2_pane_t1

0x9d15,	// (0x00024fda) list_cset_text2_pane_t1_ParamLimits

0x9d15,	// (0x00024fda) list_cset_text2_pane_t1

0x3b36,	// (0x0001edfb) main_radioblah_pane_ParamLimits

0x9ae7,	// (0x00024dac) main_mobtv_info_pane_t3_ParamLimits

0x9ae7,	// (0x00024dac) main_mobtv_info_pane_t3

0xd329,	// (0x000285ee) main_radioblah_pane_g1

0x1270,	// (0x0001c535) main_radioblah_info_pane_g1

0xc72d,	// (0x000279f2) main_radioblah_info_pane_t3_ParamLimits

0xc72d,	// (0x000279f2) main_radioblah_info_pane_t3

0x660d,	// (0x000218d2) highlight_cell_cale_month_pane_ParamLimits

0x660d,	// (0x000218d2) highlight_cell_cale_month_pane

0x36ab,	// (0x0001e970) main_phob_fisheye_pane

0xec13,	// (0x00029ed8) scroll_pane_cp0031_ParamLimits

0xec13,	// (0x00029ed8) scroll_pane_cp0031

0x0d82,	// (0x0001c047) wait_bar_pane_cp08_ParamLimits

0x94f2,	// (0x000247b7) cset_list_set_pane_copy1_ParamLimits

0x1309,	// (0x0001c5ce) highlight_cell_cale_month_pane_g1

0x9d2c,	// (0x00024ff1) highlight_cell_cale_month_pane_t1

0x0947,	// (0x0001bc0c) list_gen_pane_cp01

0x0458,	// (0x0001b71d) scroll_pane_01

0x9d3a,	// (0x00024fff) list_single_double_fisheye_pane

0x9d43,	// (0x00025008) list_double_fisheye_pane_g1_ParamLimits

0x9d43,	// (0x00025008) list_double_fisheye_pane_g1

0x9d4f,	// (0x00025014) list_double_fisheye_pane_g2_ParamLimits

0x9d4f,	// (0x00025014) list_double_fisheye_pane_g2

0x9d63,	// (0x00025028) list_double_fisheye_pane_g3_ParamLimits

0x9d63,	// (0x00025028) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x0002ae5b) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x0002ae5b) list_double_fisheye_pane_g

0x9d8c,	// (0x00025051) list_double_fisheye_pane_t1_ParamLimits

0x9d8c,	// (0x00025051) list_double_fisheye_pane_t1

0x9da7,	// (0x0002506c) list_double_fisheye_pane_t2_ParamLimits

0x9da7,	// (0x0002506c) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x0002ae66) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x0002ae66) list_double_fisheye_pane_t

0x36ab,	// (0x0001e970) main_call5_pane

0xc6c3,	// (0x00027988) sc_swipe_pane_ParamLimits

0xc6c3,	// (0x00027988) sc_swipe_pane

0x9dd5,	// (0x0002509a) call5_image_pane_ParamLimits

0x9dd5,	// (0x0002509a) call5_image_pane

0x9de7,	// (0x000250ac) call5_swipe_1_pane_ParamLimits

0x9de7,	// (0x000250ac) call5_swipe_1_pane

0x9df3,	// (0x000250b8) call5_swipe_2_pane_ParamLimits

0x9df3,	// (0x000250b8) call5_swipe_2_pane

0x9e0d,	// (0x000250d2) popup_call5_audio_first_window_ParamLimits

0x9e0d,	// (0x000250d2) popup_call5_audio_first_window

0xc6d1,	// (0x00027996) call5_swipe_1_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) call5_swipe_1_pane_g1

0x1311,	// (0x0001c5d6) call5_swipe_1_pane_g2_ParamLimits

0x1311,	// (0x0001c5d6) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x0002ae6b) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x0002ae6b) call5_swipe_1_pane_g

0x131d,	// (0x0001c5e2) call5_swipe_1_pane_t1_ParamLimits

0x131d,	// (0x0001c5e2) call5_swipe_1_pane_t1

0xc6d1,	// (0x00027996) call5_swipe_2_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) call5_swipe_2_pane_g1

0x1332,	// (0x0001c5f7) call5_swipe_2_pane_g2_ParamLimits

0x1332,	// (0x0001c5f7) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x0002ae70) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x0002ae70) call5_swipe_2_pane_g

0x133e,	// (0x0001c603) call5_swipe_2_pane_t1_ParamLimits

0x133e,	// (0x0001c603) call5_swipe_2_pane_t1

0xc6d1,	// (0x00027996) sc_swipe_pane_g1_ParamLimits

0xc6d1,	// (0x00027996) sc_swipe_pane_g1

0xc6df,	// (0x000279a4) sc_swipe_pane_g2_ParamLimits

0xc6df,	// (0x000279a4) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x0002ae75) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x0002ae75) sc_swipe_pane_g

0xc719,	// (0x000279de) sc_swipe_pane_t1_ParamLimits

0xc719,	// (0x000279de) sc_swipe_pane_t1

0x36ab,	// (0x0001e970) main_cmail_launcher_pane

0x9e1d,	// (0x000250e2) aid_size_cell_cmail_l_ParamLimits

0x9e1d,	// (0x000250e2) aid_size_cell_cmail_l

0x9e2b,	// (0x000250f0) grid_cmail_l_pane_ParamLimits

0x9e2b,	// (0x000250f0) grid_cmail_l_pane

0x9e39,	// (0x000250fe) cell_cmail_l_pane_ParamLimits

0x9e39,	// (0x000250fe) cell_cmail_l_pane

0x9e54,	// (0x00025119) cell_cmail_l_pane_g1_ParamLimits

0x9e54,	// (0x00025119) cell_cmail_l_pane_g1

0x9e60,	// (0x00025125) cell_cmail_l_pane_t1_ParamLimits

0x9e60,	// (0x00025125) cell_cmail_l_pane_t1

0x9e76,	// (0x0002513b) cell_cmail_l_pane_t2_ParamLimits

0x9e76,	// (0x0002513b) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x0002ae7a) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x0002ae7a) cell_cmail_l_pane_t

0xc3ed,	// (0x000276b2) grid_highlight_pane_cp018_ParamLimits

0xc3ed,	// (0x000276b2) grid_highlight_pane_cp018

0x350e,	// (0x0001e7d3) main2_pane_ParamLimits

0x350e,	// (0x0001e7d3) main2_pane

0xc805,	// (0x00027aca) popup_sp_fs_action_menu_bg_pane_g1

0xc80d,	// (0x00027ad2) popup_sp_fs_action_menu_bg_pane_g2

0xc815,	// (0x00027ada) popup_sp_fs_action_menu_bg_pane_g3

0xc81d,	// (0x00027ae2) popup_sp_fs_action_menu_bg_pane_g4

0xc825,	// (0x00027aea) popup_sp_fs_action_menu_bg_pane_g5

0xc82d,	// (0x00027af2) popup_sp_fs_action_menu_bg_pane_g6

0xc835,	// (0x00027afa) popup_sp_fs_action_menu_bg_pane_g7

0xc83d,	// (0x00027b02) popup_sp_fs_action_menu_bg_pane_g8

0xc845,	// (0x00027b0a) popup_sp_fs_action_menu_bg_pane_g9

0xc84d,	// (0x00027b12) popup_sp_fs_action_menu_bg_pane_g10

0xc84d,	// (0x00027b12) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0002a3a2) popup_sp_fs_action_menu_bg_pane_g

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g3_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g3_g2

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0002a450) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0002a450) list_medium_line_x2_t3_g3_g

0xc719,	// (0x000279de) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g3_t1

0xc719,	// (0x000279de) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g3_t2

0xc719,	// (0x000279de) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0002a457) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0002a457) list_medium_line_x2_t3_g3_t

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g2_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0002a45e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0002a45e) list_medium_line_x2_t3_g2_g

0xc719,	// (0x000279de) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g2_t1

0xc719,	// (0x000279de) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g2_t2

0xc719,	// (0x000279de) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0002a457) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0002a457) list_medium_line_x2_t3_g2_t

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g4_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g4_g2

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g4_g3

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0002a463) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0002a463) list_medium_line_x2_t4_g4_g

0xc719,	// (0x000279de) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t4_g4_t1

0xc719,	// (0x000279de) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t4_g4_t2

0xc719,	// (0x000279de) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t4_g4_t3

0xc719,	// (0x000279de) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0002a46c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0002a46c) list_medium_line_x2_t4_g4_t

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g4_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g4_g2

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g4_g3

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0002a463) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0002a463) list_medium_line_x2_t2_g4_g

0xc719,	// (0x000279de) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t2_g4_t1

0xc719,	// (0x000279de) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x0002a4d3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x0002a4d3) list_medium_line_x2_t2_g4_t

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g3_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g3_g2

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0002a450) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0002a450) list_medium_line_x2_t2_g3_g

0xc719,	// (0x000279de) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t2_g3_t1

0xc719,	// (0x000279de) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x0002a4d3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x0002a4d3) list_medium_line_x2_t2_g3_t

0x6757,	// (0x00021a1c) main_sp_fs_list_pane_ParamLimits

0x6757,	// (0x00021a1c) main_sp_fs_list_pane

0x6763,	// (0x00021a28) sp_fs_scroll_pane_ParamLimits

0x6763,	// (0x00021a28) sp_fs_scroll_pane

0xce7c,	// (0x00028141) list_medium_line_x2_t3_t1

0xce7c,	// (0x00028141) list_medium_line_x2_t3_t2

0xce7c,	// (0x00028141) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x0002a51e) list_medium_line_x2_t3_t

0xce7c,	// (0x00028141) list_medium_line_x3_t4_t1

0xce7c,	// (0x00028141) list_medium_line_x3_t4_t2

0xce7c,	// (0x00028141) list_medium_line_x3_t4_t3

0xce7c,	// (0x00028141) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x0002a525) list_medium_line_x3_t4_t

0xce7c,	// (0x00028141) list_medium_line_x4_t5_t1

0xce7c,	// (0x00028141) list_medium_line_x4_t5_t2

0xce7c,	// (0x00028141) list_medium_line_x4_t5_t3

0xce7c,	// (0x00028141) list_medium_line_x4_t5_t4

0xce7c,	// (0x00028141) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x0002a52e) list_medium_line_x4_t5_t

0xc6d1,	// (0x00027996) list_medium_line_t4_g4_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t4_g4_g1

0xc6d1,	// (0x00027996) list_medium_line_t4_g4_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t4_g4_g2

0xc6d1,	// (0x00027996) list_medium_line_t4_g4_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t4_g4_g3

0xc6d1,	// (0x00027996) list_medium_line_t4_g4_g4_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0002a463) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0002a463) list_medium_line_t4_g4_g

0xc719,	// (0x000279de) list_medium_line_t4_g4_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t4_g4_t1

0xc719,	// (0x000279de) list_medium_line_t4_g4_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t4_g4_t2

0xc719,	// (0x000279de) list_medium_line_t4_g4_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t4_g4_t3

0xc719,	// (0x000279de) list_medium_line_t4_g4_t4_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0002a46c) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0002a46c) list_medium_line_t4_g4_t

0x67ed,	// (0x00021ab2) chi_dic_find_pane_g1

0x3b52,	// (0x0001ee17) main_tport_pane

0xce7c,	// (0x00028141) list_medium_line_plain_t1

0xc6d1,	// (0x00027996) list_medium_line_t2_g2_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t2_g2_g1

0xc6d1,	// (0x00027996) list_medium_line_t2_g2_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0002a45e) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0002a45e) list_medium_line_t2_g2_g

0xc719,	// (0x000279de) list_medium_line_t2_g2_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t2_g2_t1

0xc719,	// (0x000279de) list_medium_line_t2_g2_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x0002a4d3) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x0002a4d3) list_medium_line_t2_g2_t

0x09c4,	// (0x0001bc89) aid_sp_fs_list_icon_a_sm

0x09cc,	// (0x0001bc91) aid_sp_fs_list_icon_d

0x09d4,	// (0x0001bc99) aid_sp_fs_text_primary

0x09dd,	// (0x0001bca2) aid_sp_fs_text_secondary

0xbf9b,	// (0x00027260) list_medium_line

0xbf9b,	// (0x00027260) list_medium_line_g2

0xbf9b,	// (0x00027260) list_medium_line_g3

0xbf9b,	// (0x00027260) list_medium_line_plain

0xbf9b,	// (0x00027260) list_medium_line_plain_t2

0xbf9b,	// (0x00027260) list_medium_line_plain_t3

0xbf9b,	// (0x00027260) list_medium_line_right_icon

0xbf9b,	// (0x00027260) list_medium_line_right_iconx2

0xbf9b,	// (0x00027260) list_medium_line_t2

0xbf9b,	// (0x00027260) list_medium_line_t2_g2

0xbf9b,	// (0x00027260) list_medium_line_t2_g3

0xbf9b,	// (0x00027260) list_medium_line_t2_right_icon

0xbf9b,	// (0x00027260) list_medium_line_t2_right_iconx2

0xbf9b,	// (0x00027260) list_medium_line_t3

0xbf9b,	// (0x00027260) list_medium_line_t3_g2

0xbf9b,	// (0x00027260) list_medium_line_t3_g3

0xbf9b,	// (0x00027260) list_medium_line_t3_right_iconx2

0xbf9b,	// (0x00027260) list_medium_line_t4_g4

0xbf9b,	// (0x00027260) list_medium_line_x2

0xbf9b,	// (0x00027260) list_medium_line_x2_t2_g2

0xbf9b,	// (0x00027260) list_medium_line_x2_t2_g3

0xbf9b,	// (0x00027260) list_medium_line_x2_t2_g4

0xbf9b,	// (0x00027260) list_medium_line_x2_t3

0xbf9b,	// (0x00027260) list_medium_line_x2_t3_g2

0xbf9b,	// (0x00027260) list_medium_line_x2_t3_g3

0xbf9b,	// (0x00027260) list_medium_line_x2_t3_g4

0xbf9b,	// (0x00027260) list_medium_line_x2_t4_g2

0xbf9b,	// (0x00027260) list_medium_line_x2_t4_g4

0xbf9b,	// (0x00027260) list_medium_line_x3

0xbf9b,	// (0x00027260) list_medium_line_x3_t4

0xbf9b,	// (0x00027260) list_medium_line_x3_t4_g4

0xbf9b,	// (0x00027260) list_medium_line_x4_t4

0xbf9b,	// (0x00027260) list_medium_line_x4_t4_g7

0xbf9b,	// (0x00027260) list_medium_line_x4_t5

0x909d,	// (0x00024362) list_single_fs_dyc_pane_ParamLimits

0x909d,	// (0x00024362) list_single_fs_dyc_pane

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g1

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g2

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g3

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g4

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g5

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x4_t4_g7_g6

0xc6df,	// (0x000279a4) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc6df,	// (0x000279a4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x0002ad82) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x0002ad82) list_medium_line_x4_t4_g7_g

0xc719,	// (0x000279de) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x4_t4_g7_t1

0xc719,	// (0x000279de) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x4_t4_g7_t2

0xc719,	// (0x000279de) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x4_t4_g7_t3

0xc72d,	// (0x000279f2) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc72d,	// (0x000279f2) list_medium_line_x4_t4_g7_t4

0xc72d,	// (0x000279f2) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc72d,	// (0x000279f2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x0002ad91) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x0002ad91) list_medium_line_x4_t4_g7_t

0x974a,	// (0x00024a0f) list_single_dyc_row_pane_ParamLimits

0x974a,	// (0x00024a0f) list_single_dyc_row_pane

0x9dc9,	// (0x0002508e) call5_gesture_pane_ParamLimits

0x9dc9,	// (0x0002508e) call5_gesture_pane

0x9dff,	// (0x000250c4) call5_windows_pane_ParamLimits

0x9dff,	// (0x000250c4) call5_windows_pane

0x9e93,	// (0x00025158) call5_swipe_1_pane_cp_ParamLimits

0x9e93,	// (0x00025158) call5_swipe_1_pane_cp

0x9e9f,	// (0x00025164) call5_swipe_2_pane_cp_ParamLimits

0x9e9f,	// (0x00025164) call5_swipe_2_pane_cp

0xc961,	// (0x00027c26) call5_image_pane_cp

0x9eab,	// (0x00025170) popup_call5_audio_first_window_cp_ParamLimits

0x9eab,	// (0x00025170) popup_call5_audio_first_window_cp

0x1353,	// (0x0001c618) call5_swipe_1_pane_g1_cp_ParamLimits

0x1353,	// (0x0001c618) call5_swipe_1_pane_g1_cp

0x1360,	// (0x0001c625) call5_swipe_1_pane_g2_cp

0x1368,	// (0x0001c62d) call5_swipe_1_pane_t1_cp_ParamLimits

0x1368,	// (0x0001c62d) call5_swipe_1_pane_t1_cp

0x1353,	// (0x0001c618) call5_swipe_2_pane_g1_cp_ParamLimits

0x1353,	// (0x0001c618) call5_swipe_2_pane_g1_cp

0x137d,	// (0x0001c642) call5_swipe_2_pane_g2_cp

0x1385,	// (0x0001c64a) call5_swipe_2_pane_t1_cp_ParamLimits

0x1385,	// (0x0001c64a) call5_swipe_2_pane_t1_cp

0xc3ed,	// (0x000276b2) main_sp_fs_email_pane

0x053b,	// (0x0001b800) main_sp_fs_listscroll_pane_te

0x9eb9,	// (0x0002517e) popup_sp_fs_action_menu_pane_ParamLimits

0x9eb9,	// (0x0002517e) popup_sp_fs_action_menu_pane

0xc70f,	// (0x000279d4) bg_sp_fs_ctrlbar_pane_g1

0x139a,	// (0x0001c65f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x13a3,	// (0x0001c668) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x13ac,	// (0x0001c671) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc70f,	// (0x000279d4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x0002ae7f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe578,	// (0x0002983d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe578,	// (0x0002983d) bg_sp_fs_ctrlbar_ddmenu_pane

0x13b5,	// (0x0001c67a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x13b5,	// (0x0001c67a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x13c1,	// (0x0001c686) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x13c1,	// (0x0001c686) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x0002ae88) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x0002ae88) main_sp_fs_ctrlbar_ddmenu_pane_g

0x13cd,	// (0x0001c692) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x13cd,	// (0x0001c692) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc70f,	// (0x000279d4) list_medium_line_t2_right_icon_g1

0xce7c,	// (0x00028141) list_medium_line_t2_right_icon_t1

0xce7c,	// (0x00028141) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x0002ae8d) list_medium_line_t2_right_icon_t

0xd307,	// (0x000285cc) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd307,	// (0x000285cc) bg_sp_fs_ctrlbar_pane

0x9f58,	// (0x0002521d) main_sp_fs_ctrlbar_button_pane_cp01

0x9f60,	// (0x00025225) main_sp_fs_ctrlbar_ddmenu_pane

0x1421,	// (0x0001c6e6) main_sp_fs_ctrlbar_pane_g1

0x142d,	// (0x0001c6f2) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x0002ae92) main_sp_fs_ctrlbar_pane_g

0x9f9e,	// (0x00025263) main_sp_fs_ctrlbar_pane_t1

0x9fdb,	// (0x000252a0) main_sp_fs_ctrlbar_pane

0x9ff5,	// (0x000252ba) main_sp_fs_listscroll_pane_te_cp01

0xa010,	// (0x000252d5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa010,	// (0x000252d5) popup_sp_fs_action_menu_pane_cp01

0xc3ed,	// (0x000276b2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc3ed,	// (0x000276b2) bg_sp_fs_highlight_list_pane_cp01

0x1454,	// (0x0001c719) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1454,	// (0x0001c719) sp_fs_action_menu_list_gene_pane_g1

0x1463,	// (0x0001c728) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1463,	// (0x0001c728) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x0002aea0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x0002aea0) sp_fs_action_menu_list_gene_pane_g

0x1470,	// (0x0001c735) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1470,	// (0x0001c735) sp_fs_action_menu_list_gene_pane_t1

0x1488,	// (0x0001c74d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1488,	// (0x0001c74d) sp_fs_action_menu_list_gene_pane

0x14ab,	// (0x0001c770) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x14ab,	// (0x0001c770) popup_sp_fs_action_menu_bg_pane

0x14b9,	// (0x0001c77e) sp_fs_action_menu_list_pane_ParamLimits

0x14b9,	// (0x0001c77e) sp_fs_action_menu_list_pane

0xa030,	// (0x000252f5) sp_fs_scroll_pane_cp01_ParamLimits

0xa030,	// (0x000252f5) sp_fs_scroll_pane_cp01

0xce7c,	// (0x00028141) list_medium_line_plain_t2_t1

0xce7c,	// (0x00028141) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x0002ae8d) list_medium_line_plain_t2_t

0xce7c,	// (0x00028141) list_medium_line_plain_t3_t1

0xce7c,	// (0x00028141) list_medium_line_plain_t3_t2

0xce7c,	// (0x00028141) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x0002a51e) list_medium_line_plain_t3_t

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g2_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0002a45e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0002a45e) list_medium_line_x2_t2_g2_g

0xc719,	// (0x000279de) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t2_g2_t1

0xc719,	// (0x000279de) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x0002a4d3) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x0002a4d3) list_medium_line_x2_t2_g2_t

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g2_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0002a45e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0002a45e) list_medium_line_x2_t4_g2_g

0xc719,	// (0x000279de) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t4_g2_t1

0xc719,	// (0x000279de) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t4_g2_t2

0xc719,	// (0x000279de) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t4_g2_t3

0xc719,	// (0x000279de) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0002a46c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0002a46c) list_medium_line_x2_t4_g2_t

0xc70f,	// (0x000279d4) list_medium_line_t3_right_iconx2_g1

0xc70f,	// (0x000279d4) list_medium_line_t3_right_iconx2_g2

0xc70f,	// (0x000279d4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x0002a63a) list_medium_line_t3_right_iconx2_g

0xce7c,	// (0x00028141) list_medium_line_t3_right_iconx2_t1

0xce7c,	// (0x00028141) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0002ae8d) list_medium_line_t3_right_iconx2_t

0xc6d1,	// (0x00027996) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x3_t4_g4_g1

0xc6d1,	// (0x00027996) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x3_t4_g4_g2

0xc6d1,	// (0x00027996) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x3_t4_g4_g3

0xc6d1,	// (0x00027996) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0002a463) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0002a463) list_medium_line_x3_t4_g4_g

0xc719,	// (0x000279de) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x3_t4_g4_t1

0xc719,	// (0x000279de) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x3_t4_g4_t2

0xc719,	// (0x000279de) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x3_t4_g4_t3

0xc719,	// (0x000279de) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0002a46c) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0002a46c) list_medium_line_x3_t4_g4_t

0xa056,	// (0x0002531b) list_single_dyc_row_text_pane_t1_ParamLimits

0xa056,	// (0x0002531b) list_single_dyc_row_text_pane_t1

0xa095,	// (0x0002535a) list_single_dyc_row_text_pane_t2_ParamLimits

0xa095,	// (0x0002535a) list_single_dyc_row_text_pane_t2

0x14dd,	// (0x0001c7a2) list_single_dyc_row_text_pane_t3_ParamLimits

0x14dd,	// (0x0001c7a2) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x0002aea5) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x0002aea5) list_single_dyc_row_text_pane_t

0x1501,	// (0x0001c7c6) list_single_dyc_row_pane_g1_ParamLimits

0x1501,	// (0x0001c7c6) list_single_dyc_row_pane_g1

0x150d,	// (0x0001c7d2) list_single_dyc_row_pane_g2_ParamLimits

0x150d,	// (0x0001c7d2) list_single_dyc_row_pane_g2

0x1519,	// (0x0001c7de) list_single_dyc_row_pane_g3_ParamLimits

0x1519,	// (0x0001c7de) list_single_dyc_row_pane_g3

0x152c,	// (0x0001c7f1) list_single_dyc_row_pane_g4_ParamLimits

0x152c,	// (0x0001c7f1) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x0002aeb2) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x0002aeb2) list_single_dyc_row_pane_g

0x157e,	// (0x0001c843) list_single_dyc_row_text_pane_ParamLimits

0x157e,	// (0x0001c843) list_single_dyc_row_text_pane

0xbf9b,	// (0x00027260) bg_sp_fs_scroll_pane

0x15a3,	// (0x0001c868) thumb_sp_fs_scroll_pane

0xc6d1,	// (0x00027996) list_medium_line_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_g1

0xc719,	// (0x000279de) list_medium_line_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t1

0xc6d1,	// (0x00027996) list_medium_line_x2_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0002a45e) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0002a45e) list_medium_line_x2_g

0xc719,	// (0x000279de) list_medium_line_x2_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t1

0xc6d1,	// (0x00027996) list_medium_line_x3_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x3_g1

0x15ac,	// (0x0001c871) list_medium_line_x3_g2_ParamLimits

0x15ac,	// (0x0001c871) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x0002aec1) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x0002aec1) list_medium_line_x3_g

0x15ba,	// (0x0001c87f) list_medium_line_x3_t1_ParamLimits

0x15ba,	// (0x0001c87f) list_medium_line_x3_t1

0x15ce,	// (0x0001c893) thumb_sp_fs_scroll_pane_g1

0x15d7,	// (0x0001c89c) thumb_sp_fs_scroll_pane_g2

0x15e0,	// (0x0001c8a5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x0002aec6) thumb_sp_fs_scroll_pane_g

0x15ce,	// (0x0001c893) bg_sp_fs_scroll_pane_g1

0x15d7,	// (0x0001c89c) bg_sp_fs_scroll_pane_g2

0x15e0,	// (0x0001c8a5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x0002aec6) bg_sp_fs_scroll_pane_g

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g4_g1

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g4_g2

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g4_g3

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0002a463) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0002a463) list_medium_line_x2_t3_g4_g

0xc719,	// (0x000279de) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g4_t1

0xc719,	// (0x000279de) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g4_t2

0xc719,	// (0x000279de) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0002a457) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0002a457) list_medium_line_x2_t3_g4_t

0xc6d1,	// (0x00027996) list_medium_line_g2_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_g2_g1

0xc6d1,	// (0x00027996) list_medium_line_g2_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0002a45e) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0002a45e) list_medium_line_g2_g

0xc719,	// (0x000279de) list_medium_line_g2_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_g2_t1

0xc6d1,	// (0x00027996) list_medium_line_t3_g2_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t3_g2_g1

0xc6d1,	// (0x00027996) list_medium_line_t3_g2_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0002a45e) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0002a45e) list_medium_line_t3_g2_g

0xc719,	// (0x000279de) list_medium_line_t3_g2_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_g2_t1

0xc719,	// (0x000279de) list_medium_line_t3_g2_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_g2_t2

0xc719,	// (0x000279de) list_medium_line_t3_g2_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0002a457) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0002a457) list_medium_line_t3_g2_t

0xc70f,	// (0x000279d4) list_medium_line_right_icon_g1

0xce7c,	// (0x00028141) list_medium_line_right_icon_t1

0xc6d1,	// (0x00027996) list_medium_line_t2_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t2_g1

0xc719,	// (0x000279de) list_medium_line_t2_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t2_t1

0xc719,	// (0x000279de) list_medium_line_t2_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x0002a4d3) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x0002a4d3) list_medium_line_t2_t

0xc6d1,	// (0x00027996) list_medium_line_t3_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t3_g1

0xc719,	// (0x000279de) list_medium_line_t3_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_t1

0xc719,	// (0x000279de) list_medium_line_t3_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_t2

0xc719,	// (0x000279de) list_medium_line_t3_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0002a457) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0002a457) list_medium_line_t3_t

0xc6d1,	// (0x00027996) list_medium_line_g3_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_g3_g1

0xc6d1,	// (0x00027996) list_medium_line_g3_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_g3_g2

0xc6d1,	// (0x00027996) list_medium_line_g3_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0002a450) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0002a450) list_medium_line_g3_g

0xc719,	// (0x000279de) list_medium_line_g3_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_g3_t1

0xc6d1,	// (0x00027996) list_medium_line_t2_g3_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t2_g3_g1

0xc6d1,	// (0x00027996) list_medium_line_t2_g3_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t2_g3_g2

0xc6d1,	// (0x00027996) list_medium_line_t2_g3_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0002a450) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0002a450) list_medium_line_t2_g3_g

0xc719,	// (0x000279de) list_medium_line_t2_g3_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t2_g3_t1

0xc719,	// (0x000279de) list_medium_line_t2_g3_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x0002a4d3) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x0002a4d3) list_medium_line_t2_g3_t

0xc6d1,	// (0x00027996) list_medium_line_t3_g3_g1_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t3_g3_g1

0xc6d1,	// (0x00027996) list_medium_line_t3_g3_g2_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t3_g3_g2

0xc6d1,	// (0x00027996) list_medium_line_t3_g3_g3_ParamLimits

0xc6d1,	// (0x00027996) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0002a450) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0002a450) list_medium_line_t3_g3_g

0xc719,	// (0x000279de) list_medium_line_t3_g3_t1_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_g3_t1

0xc719,	// (0x000279de) list_medium_line_t3_g3_t2_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_g3_t2

0xc719,	// (0x000279de) list_medium_line_t3_g3_t3_ParamLimits

0xc719,	// (0x000279de) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0002a457) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0002a457) list_medium_line_t3_g3_t

0xc70f,	// (0x000279d4) list_medium_line_right_iconx2_g1

0xc70f,	// (0x000279d4) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0002a351) list_medium_line_right_iconx2_g

0xce7c,	// (0x00028141) list_medium_line_right_iconx2_t1

0xc70f,	// (0x000279d4) list_medium_line_t2_right_iconx2_g1

0xc70f,	// (0x000279d4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0002a351) list_medium_line_t2_right_iconx2_g

0xce7c,	// (0x00028141) list_medium_line_t2_right_iconx2_t1

0xce7c,	// (0x00028141) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0002ae8d) list_medium_line_t2_right_iconx2_t

0xce7c,	// (0x00028141) list_medium_line_x4_t4_t1

0xce7c,	// (0x00028141) list_medium_line_x4_t4_t2

0xce7c,	// (0x00028141) list_medium_line_x4_t4_t3

0xce7c,	// (0x00028141) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x0002a525) list_medium_line_x4_t4_t

0xa1ea,	// (0x000254af) tport_appsw_pane_ParamLimits

0xa1ea,	// (0x000254af) tport_appsw_pane

0xa1f8,	// (0x000254bd) tport_contact_pane_ParamLimits

0xa1f8,	// (0x000254bd) tport_contact_pane

0xa208,	// (0x000254cd) tport_listscroll_pane_ParamLimits

0xa208,	// (0x000254cd) tport_listscroll_pane

0xa218,	// (0x000254dd) cell_tport_appsw_pane_ParamLimits

0xa218,	// (0x000254dd) cell_tport_appsw_pane

0xc6df,	// (0x000279a4) tport_appsw_pane_g1_ParamLimits

0xc6df,	// (0x000279a4) tport_appsw_pane_g1

0xa245,	// (0x0002550a) tport_contact_pane_g1

0xa24e,	// (0x00025513) tport_contact_pane_t1

0xa25c,	// (0x00025521) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x0002aecd) tport_contact_pane_t

0x15e9,	// (0x0001c8ae) list_tport_pane

0x15f2,	// (0x0001c8b7) scroll_pane_cp_030

0xa272,	// (0x00025537) cell_tport_appsw_pane_g1

0xa282,	// (0x00025547) cell_tport_appsw_pane_t1

0xa290,	// (0x00025555) grid_highlight_pane_cp019

0xa298,	// (0x0002555d) list_tport_double_graphic_pane_ParamLimits

0xa298,	// (0x0002555d) list_tport_double_graphic_pane

0xc3ed,	// (0x000276b2) list_highlight_pane_cp023_ParamLimits

0xc3ed,	// (0x000276b2) list_highlight_pane_cp023

0xa2a5,	// (0x0002556a) list_tport_double_graphic_pane_g1_ParamLimits

0xa2a5,	// (0x0002556a) list_tport_double_graphic_pane_g1

0xa2b2,	// (0x00025577) list_tport_double_graphic_pane_t1_ParamLimits

0xa2b2,	// (0x00025577) list_tport_double_graphic_pane_t1

0xa2c7,	// (0x0002558c) list_tport_double_graphic_pane_t2_ParamLimits

0xa2c7,	// (0x0002558c) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x0002aed9) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x0002aed9) list_tport_double_graphic_pane_t

0xbf9b,	// (0x00027260) main_cale_note_pane

0x487f,	// (0x0001fb44) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x487f,	// (0x0001fb44) cell_vitu2_function_top_wide_pane_cp01

0x9afb,	// (0x00024dc0) wait_bar_pane_cp05_ParamLimits

0xc3ed,	// (0x000276b2) listscroll_cmail_pane

0x1603,	// (0x0001c8c8) list_cmail_pane

0xa2d9,	// (0x0002559e) list_cmail_body_pane

0xa2f3,	// (0x000255b8) list_single_cmail_header_caption_pane

0xa313,	// (0x000255d8) list_single_cmail_header_detail_pane_ParamLimits

0xa313,	// (0x000255d8) list_single_cmail_header_detail_pane

0x161a,	// (0x0001c8df) list_single_cmail_header_caption_pane_t1

0xa349,	// (0x0002560e) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa349,	// (0x0002560e) list_single_cmail_header_detail_pane_g1

0x1631,	// (0x0001c8f6) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1631,	// (0x0001c8f6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x0002aede) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x0002aede) list_single_cmail_header_detail_pane_g

0xa361,	// (0x00025626) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa361,	// (0x00025626) list_single_cmail_header_detail_pane_t1

0xa39d,	// (0x00025662) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa39d,	// (0x00025662) list_single_cmail_header_editor_pane_bg

0x1163,	// (0x0001c428) list_cmail_body_pane_g1

0x166e,	// (0x0001c933) list_cmail_body_pane_t1

0x0314,	// (0x0001b5d9) list_single_cmail_header_editor_pane_bg_g1

0xcb8b,	// (0x00027e50) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0324,	// (0x0001b5e9) list_single_cmail_header_editor_pane_bg_g1_copy2

0x031c,	// (0x0001b5e1) list_single_cmail_header_editor_pane_bg_g1_copy3

0x05ae,	// (0x0001b873) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0344,	// (0x0001b609) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0334,	// (0x0001b5f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x033c,	// (0x0001b601) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xcb6b,	// (0x00027e30) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa3b4,	// (0x00025679) calenote_gesture_pane_ParamLimits

0xa3b4,	// (0x00025679) calenote_gesture_pane

0xa3ce,	// (0x00025693) calenote_window_pane_ParamLimits

0xa3ce,	// (0x00025693) calenote_window_pane

0x167c,	// (0x0001c941) popup_note_window_cp01

0xa3e6,	// (0x000256ab) calenote_swipe_1_pane_ParamLimits

0xa3e6,	// (0x000256ab) calenote_swipe_1_pane

0x9e9f,	// (0x00025164) calenote_swipe_2_pane_ParamLimits

0x9e9f,	// (0x00025164) calenote_swipe_2_pane

0x1353,	// (0x0001c618) calenote_swipe_1_pane_g1_ParamLimits

0x1353,	// (0x0001c618) calenote_swipe_1_pane_g1

0x168e,	// (0x0001c953) calenote_swipe_1_pane_g2_ParamLimits

0x168e,	// (0x0001c953) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x0002aeea) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x0002aeea) calenote_swipe_1_pane_g

0x169a,	// (0x0001c95f) calenote_swipe_1_pane_t1_ParamLimits

0x169a,	// (0x0001c95f) calenote_swipe_1_pane_t1

0x1353,	// (0x0001c618) calenote_swipe_2_pane_g1_ParamLimits

0x1353,	// (0x0001c618) calenote_swipe_2_pane_g1

0x16b9,	// (0x0001c97e) calenote_swipe_2_pane_g2_ParamLimits

0x16b9,	// (0x0001c97e) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x0002aeef) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x0002aeef) calenote_swipe_2_pane_g

0x16c5,	// (0x0001c98a) calenote_swipe_2_pane_t1_ParamLimits

0x16c5,	// (0x0001c98a) calenote_swipe_2_pane_t1

0xbf9b,	// (0x00027260) main_mup_navstr_pane

0x7f29,	// (0x000231ee) main_mup3_pane_t7_ParamLimits

0x7f29,	// (0x000231ee) main_mup3_pane_t7

0x3fdd,	// (0x0001f2a2) main_mp4_pane_g6_ParamLimits

0x3fdd,	// (0x0001f2a2) main_mp4_pane_g6

0x432e,	// (0x0001f5f3) main_image3_pane_t4_ParamLimits

0x432e,	// (0x0001f5f3) main_image3_pane_t4

0xa3f9,	// (0x000256be) popup_navstr_preview_pane_ParamLimits

0xa3f9,	// (0x000256be) popup_navstr_preview_pane

0xa405,	// (0x000256ca) scroll_navstr_pane_ParamLimits

0xa405,	// (0x000256ca) scroll_navstr_pane

0xbf9b,	// (0x00027260) bg_popup_preview_window_pane_cp04

0x16ec,	// (0x0001c9b1) popup_navstr_preview_pane_t1

0xa411,	// (0x000256d6) scroll_navstr_pane_g1_ParamLimits

0xa411,	// (0x000256d6) scroll_navstr_pane_g1

0xa41e,	// (0x000256e3) scroll_navstr_pane_t1_ParamLimits

0xa41e,	// (0x000256e3) scroll_navstr_pane_t1

0x1685,	// (0x0001c94a) bg_button_pane_cp014

0x1685,	// (0x0001c94a) bg_button_pane_cp030

0x9d6f,	// (0x00025034) list_double_fisheye_pane_g4_ParamLimits

0x9d6f,	// (0x00025034) list_double_fisheye_pane_g4

0x9d7b,	// (0x00025040) list_double_fisheye_pane_g5_ParamLimits

0x9d7b,	// (0x00025040) list_double_fisheye_pane_g5

0x0783,	// (0x0001ba48) sp_fs_scroll_pane_cp03

0x1421,	// (0x0001c6e6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x142d,	// (0x0001c6f2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x0002ae92) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9f9e,	// (0x00025263) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1612,	// (0x0001c8d7) sp_fs_scroll_pane_cp02

0xc8c6,	// (0x00027b8b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc8c6,	// (0x00027b8b) popup_sp_fs_calendar_preview_list_single_pane

0xbf9b,	// (0x00027260) main_cam6_pano_pane

0x3b36,	// (0x0001edfb) main_mup3_pane_ParamLimits

0xbf9b,	// (0x00027260) main_phacti_pane

0x99ce,	// (0x00024c93) bg_button_pane_cp11

0x99e6,	// (0x00024cab) main_mobtv_info_pane_g2_ParamLimits

0x99e6,	// (0x00024cab) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x0002adf2) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x0002adf2) main_mobtv_info_pane_g

0xc72d,	// (0x000279f2) sc_clock_pane_t5_ParamLimits

0xc72d,	// (0x000279f2) sc_clock_pane_t5

0xd329,	// (0x000285ee) main_radioblah_pane_g1_ParamLimits

0xd315,	// (0x000285da) main_radioblah_pane_t3_ParamLimits

0xd315,	// (0x000285da) main_radioblah_pane_t3

0xd315,	// (0x000285da) main_radioblah_pane_t4_ParamLimits

0xd315,	// (0x000285da) main_radioblah_pane_t4

0xc6c3,	// (0x00027988) main_radioblah_text_pane_ParamLimits

0xc6c3,	// (0x00027988) main_radioblah_text_pane

0x1270,	// (0x0001c535) main_radioblah_info_pane_g1_ParamLimits

0x12b4,	// (0x0001c579) main_radioblah_info_pane_t4_ParamLimits

0x12b4,	// (0x0001c579) main_radioblah_info_pane_t4

0xc3ed,	// (0x000276b2) main_sp_fs_calendar_pane

0xa430,	// (0x000256f5) main_phacti_pane_g1

0xa438,	// (0x000256fd) phacti_note_pane_ParamLimits

0xa438,	// (0x000256fd) phacti_note_pane

0x1703,	// (0x0001c9c8) phacti_term_pane_ParamLimits

0x1703,	// (0x0001c9c8) phacti_term_pane

0x1718,	// (0x0001c9dd) phacti_note_pane_t1_ParamLimits

0x1718,	// (0x0001c9dd) phacti_note_pane_t1

0x172f,	// (0x0001c9f4) phacti_term_pane_g1

0x1737,	// (0x0001c9fc) phacti_term_pane_t1_ParamLimits

0x1737,	// (0x0001c9fc) phacti_term_pane_t1

0x1761,	// (0x0001ca26) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1769,	// (0x0001ca2e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x0002aef9) popup_sp_fs_calendar_preview_list_single_pane_g

0x1771,	// (0x0001ca36) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1771,	// (0x0001ca36) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1787,	// (0x0001ca4c) aid_popup_sp_fs_bg_corner_pane

0xc70f,	// (0x000279d4) popup_sp_fs_calendar_preview_bg_pane_g1

0xbf9b,	// (0x00027260) popup_sp_fs_calendar_preview_bg_pane

0x178f,	// (0x0001ca54) popup_sp_fs_calendar_preview_list_pane

0x17a0,	// (0x0001ca65) bg_main_sp_fs_cale_pane_ParamLimits

0x17a0,	// (0x0001ca65) bg_main_sp_fs_cale_pane

0x17b8,	// (0x0001ca7d) listscroll_cale_mrui_pane_ParamLimits

0x17b8,	// (0x0001ca7d) listscroll_cale_mrui_pane

0xebcf,	// (0x00029e94) listscroll_sp_fs_schedule_track_pane

0x17d0,	// (0x0001ca95) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x17d0,	// (0x0001ca95) main_sp_fs_ctrlbar_pane_cp01

0xebcf,	// (0x00029e94) main_sp_fs_ribbon_pane

0x17e6,	// (0x0001caab) popup_sp_fs_cale_preview_window

0x0777,	// (0x0001ba3c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x0777,	// (0x0001ba3c) list_single_sp_fs_schedule_track_pane

0x0777,	// (0x0001ba3c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0777,	// (0x0001ba3c) bg_sp_fs_highlight_list_pane_cp03

0x7c09,	// (0x00022ece) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7c09,	// (0x00022ece) list_single_sp_fs_schedule_track_pane_g1

0x7c09,	// (0x00022ece) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7c09,	// (0x00022ece) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x0002aefe) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x0002aefe) list_single_sp_fs_schedule_track_pane_g

0xa44e,	// (0x00025713) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa44e,	// (0x00025713) list_single_sp_fs_schedule_track_pane_t1

0x0074,	// (0x0001b339) sp_fs_schedule_track_pane_ParamLimits

0x0074,	// (0x0001b339) sp_fs_schedule_track_pane

0xebd7,	// (0x00029e9c) sp_fs_schedule_track_pane_g1

0xebd7,	// (0x00029e9c) sp_fs_schedule_track_pane_g2

0xebd7,	// (0x00029e9c) sp_fs_schedule_track_pane_g3

0xebd7,	// (0x00029e9c) sp_fs_schedule_track_pane_g4

0xebd7,	// (0x00029e9c) sp_fs_schedule_track_pane_g5

0x0004,

0xfc3e,	// (0x0002af03) sp_fs_schedule_track_pane_g

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g1

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g2

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g3

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g4

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g5

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g6

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g7

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g8

0xebd7,	// (0x00029e9c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc49,	// (0x0002af0e) bg_sp_fs_schedule_viewer_highlight_g

0xebcf,	// (0x00029e94) bg_main_sp_fs_ribbon_pane

0xebd7,	// (0x00029e9c) main_sp_fs_ribbon_pane_g1

0x17f8,	// (0x0001cabd) main_sp_fs_ribbon_pane_t1

0x17f8,	// (0x0001cabd) main_sp_fs_ribbon_pane_t2

0x17f8,	// (0x0001cabd) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5c,	// (0x0002af21) main_sp_fs_ribbon_pane_t

0xebcf,	// (0x00029e94) main_sp_fs_ribbon_scheduler_pane

0xebd7,	// (0x00029e9c) bg_main_sp_fs_ribbon_pane_g1

0xebd7,	// (0x00029e9c) bg_main_sp_fs_ribbon_pane_g2

0xebd7,	// (0x00029e9c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x0002a96a) bg_main_sp_fs_ribbon_pane_g

0xebd7,	// (0x00029e9c) main_sp_fs_ribbon_scheduler_pane_g1

0xebd7,	// (0x00029e9c) main_sp_fs_ribbon_scheduler_pane_g2

0xebd7,	// (0x00029e9c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x0002a96a) main_sp_fs_ribbon_scheduler_pane_g

0x1806,	// (0x0001cacb) list_cale_mrui_pane

0xa460,	// (0x00025725) sp_fs_scroll_pane_cp07_ParamLimits

0xa460,	// (0x00025725) sp_fs_scroll_pane_cp07

0x0777,	// (0x0001ba3c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x0777,	// (0x0001ba3c) bg_sp_fs_schedule_viewer_highlight

0xebcf,	// (0x00029e94) list_single_sp_fs_schedule_track_pane_cp01

0xebcf,	// (0x00029e94) list_sp_fs_schedule_track_pane

0x1813,	// (0x0001cad8) sp_fs_scroll_pane_cp06_ParamLimits

0x1813,	// (0x0001cad8) sp_fs_scroll_pane_cp06

0xc70f,	// (0x000279d4) bgmain_sp_fs_calendar_pane_g1

0xa47c,	// (0x00025741) list_single_cale_mrui_pane_ParamLimits

0xa47c,	// (0x00025741) list_single_cale_mrui_pane

0x1827,	// (0x0001caec) list_single_cale_mrui_row_pane_ParamLimits

0x1827,	// (0x0001caec) list_single_cale_mrui_row_pane

0x1834,	// (0x0001caf9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1834,	// (0x0001caf9) list_single_cale_mrui_row_pane_g1

0x1879,	// (0x0001cb3e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1879,	// (0x0001cb3e) list_single_cale_mrui_row_pane_t1

0xa49f,	// (0x00025764) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa49f,	// (0x00025764) list_single_cale_mrui_row_pane_t2

0x188b,	// (0x0001cb50) list_single_cale_mrui_row_pane_t3_ParamLimits

0x188b,	// (0x0001cb50) list_single_cale_mrui_row_pane_t3

0x18ba,	// (0x0001cb7f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x18ba,	// (0x0001cb7f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc6a,	// (0x0002af2f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc6a,	// (0x0002af2f) list_single_cale_mrui_row_pane_t

0xa505,	// (0x000257ca) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa505,	// (0x000257ca) list_single_cmail_header_editor_pane_bg_cp01

0xa52f,	// (0x000257f4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa52f,	// (0x000257f4) list_single_cmail_header_editor_pane_bg_cp02

0x18eb,	// (0x0001cbb0) main_radioblah_text_pane_t1_ParamLimits

0x18eb,	// (0x0001cbb0) main_radioblah_text_pane_t1

0x1905,	// (0x0001cbca) cam6_indi_pane_cp01

0x190d,	// (0x0001cbd2) cam6_mode_pane_cp01

0x1915,	// (0x0001cbda) cam6_pano_pane

0x191e,	// (0x0001cbe3) cam6_zoom_pane_cp01

0x1928,	// (0x0001cbed) cam6_pano_image_pane

0x1931,	// (0x0001cbf6) cam6_pano_pane_g1

0x1163,	// (0x0001c428) cam6_pano_pane_g2

0x193a,	// (0x0001cbff) cam6_pano_pane_g3

0x1943,	// (0x0001cc08) cam6_pano_pane_g4

0xee99,	// (0x0002a15e) cam6_pano_pane_g5

0x194c,	// (0x0001cc11) cam6_pano_pane_g6

0x1954,	// (0x0001cc19) cam6_pano_pane_g7

0x195c,	// (0x0001cc21) cam6_pano_pane_g8

0x1965,	// (0x0001cc2a) cam6_pano_pane_g9

0x0008,

0xfc73,	// (0x0002af38) cam6_pano_pane_g

0xbf9b,	// (0x00027260) main_browser_tag_pane

0x16e4,	// (0x0001c9a9) grid_navstr_albumart_pane

0x1970,	// (0x0001cc35) cell_navstr_albumart_pane_ParamLimits

0x1970,	// (0x0001cc35) cell_navstr_albumart_pane

0x198c,	// (0x0001cc51) cell_navstr_albumart_pane_g1

0x1994,	// (0x0001cc59) cell_navstr_albumart_pane_g2

0x199c,	// (0x0001cc61) cell_navstr_albumart_pane_g3

0x19a4,	// (0x0001cc69) cell_navstr_albumart_pane_g4

0x0003,

0xfc86,	// (0x0002af4b) cell_navstr_albumart_pane_g

0xa54b,	// (0x00025810) bt_list_pane_ParamLimits

0xa54b,	// (0x00025810) bt_list_pane

0xa564,	// (0x00025829) bt_list_pane_t1

0xa573,	// (0x00025838) bt_list_pane_t2

0x0001,

0xfc8f,	// (0x0002af54) bt_list_pane_t

0xbf9b,	// (0x00027260) main_cale_prevew_pane

0xa582,	// (0x00025847) popup_cale_preview_window_ParamLimits

0xa582,	// (0x00025847) popup_cale_preview_window

0xc3ed,	// (0x000276b2) bg_popup_preview_window_pane_cp05_ParamLimits

0xc3ed,	// (0x000276b2) bg_popup_preview_window_pane_cp05

0x19ac,	// (0x0001cc71) list_cale_preview_pane_ParamLimits

0x19ac,	// (0x0001cc71) list_cale_preview_pane

0xa59f,	// (0x00025864) list_double_cale_preview_pane_ParamLimits

0xa59f,	// (0x00025864) list_double_cale_preview_pane

0xa5b3,	// (0x00025878) list_single_cale_preview_pane_ParamLimits

0xa5b3,	// (0x00025878) list_single_cale_preview_pane

0xa5cb,	// (0x00025890) list_single_cale_preview_pane_g1

0xa5d3,	// (0x00025898) list_single_cale_preview_pane_t1_ParamLimits

0xa5d3,	// (0x00025898) list_single_cale_preview_pane_t1

0xa5e8,	// (0x000258ad) list_double_cale_preview_pane_g1

0xa5f0,	// (0x000258b5) list_double_cale_preview_pane_t1_ParamLimits

0xa5f0,	// (0x000258b5) list_double_cale_preview_pane_t1

0xa605,	// (0x000258ca) list_double_cale_preview_pane_t2_ParamLimits

0xa605,	// (0x000258ca) list_double_cale_preview_pane_t2

0x0001,

0xfc94,	// (0x0002af59) list_double_cale_preview_pane_t_ParamLimits

0xfc94,	// (0x0002af59) list_double_cale_preview_pane_t

0xbf9b,	// (0x00027260) main_ezdial_pane

0xc3ed,	// (0x000276b2) main_sp_fs_email_pane_ParamLimits

0x9eff,	// (0x000251c4) cmail_ddmenu_btn01_pane_ParamLimits

0x9eff,	// (0x000251c4) cmail_ddmenu_btn01_pane

0x9f1c,	// (0x000251e1) cmail_ddmenu_btn02_pane_ParamLimits

0x9f1c,	// (0x000251e1) cmail_ddmenu_btn02_pane

0x9f3a,	// (0x000251ff) cmail_ddmenu_btn03_pane_ParamLimits

0x9f3a,	// (0x000251ff) cmail_ddmenu_btn03_pane

0x9fdb,	// (0x000252a0) main_sp_fs_ctrlbar_pane_ParamLimits

0x9ff5,	// (0x000252ba) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa2d9,	// (0x0002559e) list_cmail_body_pane_ParamLimits

0x1628,	// (0x0001c8ed) bg_button_pane_cp12

0x163d,	// (0x0001c902) list_single_cmail_header_detail_pane_g3_ParamLimits

0x163d,	// (0x0001c902) list_single_cmail_header_detail_pane_g3

0x164a,	// (0x0001c90f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x164a,	// (0x0001c90f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x0002aee5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x0002aee5) list_single_cmail_header_detail_pane_t

0x174c,	// (0x0001ca11) phacti_term_pane_t2_ParamLimits

0x174c,	// (0x0001ca11) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x0002aef4) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x0002aef4) phacti_term_pane_t

0x19b8,	// (0x0001cc7d) aid_size_list_single_double

0xa61d,	// (0x000258e2) popup_ezdial_listscroll_window

0x19c4,	// (0x0001cc89) popup_number_entry_window_cp01

0xc961,	// (0x00027c26) bg_popup_call_pane_cp09

0x19d1,	// (0x0001cc96) ezdial_list_pane

0x19d9,	// (0x0001cc9e) scroll_pane_cp23

0xe578,	// (0x0002983d) bg_button_pane_cp028_ParamLimits

0xe578,	// (0x0002983d) bg_button_pane_cp028

0xa639,	// (0x000258fe) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa639,	// (0x000258fe) cmail_ddmenu_btn01_pane_g1

0xa64b,	// (0x00025910) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa64b,	// (0x00025910) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc99,	// (0x0002af5e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc99,	// (0x0002af5e) cmail_ddmenu_btn01_pane_g

0x19e1,	// (0x0001cca6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x19e1,	// (0x0001cca6) cmail_ddmenu_btn01_pane_t1

0xd307,	// (0x000285cc) bg_button_pane_cp029_ParamLimits

0xd307,	// (0x000285cc) bg_button_pane_cp029

0xa657,	// (0x0002591c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa657,	// (0x0002591c) cmail_ddmenu_btn02_pane_g1

0xa66f,	// (0x00025934) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa66f,	// (0x00025934) cmail_ddmenu_btn02_pane_t1

0xc6c3,	// (0x00027988) bg_button_pane_cp031_ParamLimits

0xc6c3,	// (0x00027988) bg_button_pane_cp031

0xa657,	// (0x0002591c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa657,	// (0x0002591c) cmail_ddmenu_btn03_pane_g1

0xa66f,	// (0x00025934) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa66f,	// (0x00025934) cmail_ddmenu_btn03_pane_t1

0xc719,	// (0x000279de) cell_dialer2_keypad_pane_t1_ParamLimits

0xeca0,	// (0x00029f65) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeca0,	// (0x00029f65) cell_dialer2_keypad_pane_t1_copy1

0x97fb,	// (0x00024ac0) ncimui_group_button_pane

0xc3ed,	// (0x000276b2) main_sp_fs_calendar_pane_ParamLimits

0xa2f3,	// (0x000255b8) list_single_cmail_header_caption_pane_ParamLimits

0x1797,	// (0x0001ca5c) aid_recal_txt_sm_pane

0xbf9b,	// (0x00027260) mian_recal_day_pane

0x17e6,	// (0x0001caab) popup_sp_fs_cale_preview_window_ParamLimits

0x19f7,	// (0x0001ccbc) list_recal_day_pane

0x1a3a,	// (0x0001ccff) list_single_recal_day_pane_ParamLimits

0x1a3a,	// (0x0001ccff) list_single_recal_day_pane

0x1a4c,	// (0x0001cd11) list_single_recal_day_pane_g1_ParamLimits

0x1a4c,	// (0x0001cd11) list_single_recal_day_pane_g1

0x1a58,	// (0x0001cd1d) list_single_recal_day_pane_g2_ParamLimits

0x1a58,	// (0x0001cd1d) list_single_recal_day_pane_g2

0x1a64,	// (0x0001cd29) list_single_recal_day_pane_g3_ParamLimits

0x1a64,	// (0x0001cd29) list_single_recal_day_pane_g3

0xa693,	// (0x00025958) list_single_recal_day_pane_g4_ParamLimits

0xa693,	// (0x00025958) list_single_recal_day_pane_g4

0x1a70,	// (0x0001cd35) list_single_recal_day_pane_g5_ParamLimits

0x1a70,	// (0x0001cd35) list_single_recal_day_pane_g5

0x1a7c,	// (0x0001cd41) list_single_recal_day_pane_g6_ParamLimits

0x1a7c,	// (0x0001cd41) list_single_recal_day_pane_g6

0x0004,

0xfca8,	// (0x0002af6d) list_single_recal_day_pane_g_ParamLimits

0xfca8,	// (0x0002af6d) list_single_recal_day_pane_g

0x1a90,	// (0x0001cd55) list_single_recal_day_pane_t1

0x1aa2,	// (0x0001cd67) list_single_recal_day_pane_t2

0x0001,

0xfcb3,	// (0x0002af78) list_single_recal_day_pane_t

0xa6ab,	// (0x00025970) ncimui_query_button_pane_ParamLimits

0xa6ab,	// (0x00025970) ncimui_query_button_pane

0xa6bb,	// (0x00025980) ncimui_query_button_pane_t1_ParamLimits

0xa6bb,	// (0x00025980) ncimui_query_button_pane_t1

0x1ab4,	// (0x0001cd79) ncimui_query_button_pane_t2_ParamLimits

0x1ab4,	// (0x0001cd79) ncimui_query_button_pane_t2

0x0001,

0xfcb8,	// (0x0002af7d) ncimui_query_button_pane_t_ParamLimits

0xfcb8,	// (0x0002af7d) ncimui_query_button_pane_t

0xa6ce,	// (0x00025993) query_button_pane_ParamLimits

0xa6ce,	// (0x00025993) query_button_pane

0xbf9b,	// (0x00027260) bg_button_pane_cp0028

0x1ac7,	// (0x0001cd8c) query_button_pane_t1

0x3b52,	// (0x0001ee17) main_tport_pane_ParamLimits

0xa1c0,	// (0x00025485) bg_popup_window_pane_cp01_ParamLimits

0xa1c0,	// (0x00025485) bg_popup_window_pane_cp01

0xa1ce,	// (0x00025493) heading_pane_cp08_ParamLimits

0xa1ce,	// (0x00025493) heading_pane_cp08

0xa1dc,	// (0x000254a1) heading_pane_cp07_ParamLimits

0xa1dc,	// (0x000254a1) heading_pane_cp07

0xa272,	// (0x00025537) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x0002aed2) cell_tport_appsw_pane_g

0x6d37,	// (0x00021ffc) input_candi_list_open_g1

0xcd26,	// (0x00027feb) list_cale_time_pane_g6_ParamLimits

0xcd26,	// (0x00027feb) list_cale_time_pane_g6

0x7888,	// (0x00022b4d) aid_size_touch_calib_1_ParamLimits

0x7888,	// (0x00022b4d) aid_size_touch_calib_1

0x7894,	// (0x00022b59) aid_size_touch_calib_2_ParamLimits

0x7894,	// (0x00022b59) aid_size_touch_calib_2

0x78a2,	// (0x00022b67) aid_size_touch_calib_3_ParamLimits

0x78a2,	// (0x00022b67) aid_size_touch_calib_3

0x78b2,	// (0x00022b77) aid_size_touch_calib_4_ParamLimits

0x78b2,	// (0x00022b77) aid_size_touch_calib_4

0x78c0,	// (0x00022b85) main_touch_calib_button_group_pane_ParamLimits

0x78c0,	// (0x00022b85) main_touch_calib_button_group_pane

0x78ce,	// (0x00022b93) main_touch_calib_pane_g1_ParamLimits

0x78da,	// (0x00022b9f) main_touch_calib_pane_g2_ParamLimits

0x78e6,	// (0x00022bab) main_touch_calib_pane_g3_ParamLimits

0x78f2,	// (0x00022bb7) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x0002a918) main_touch_calib_pane_g_ParamLimits

0x78fe,	// (0x00022bc3) main_touch_calib_pane_t1_ParamLimits

0x7915,	// (0x00022bda) main_touch_calib_pane_t2_ParamLimits

0x792e,	// (0x00022bf3) main_touch_calib_pane_t3_ParamLimits

0x7944,	// (0x00022c09) main_touch_calib_pane_t4_ParamLimits

0x795a,	// (0x00022c1f) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x0002a921) main_touch_calib_pane_t_ParamLimits

0xec37,	// (0x00029efc) list_single_fp_cale_pane_g3_ParamLimits

0xec37,	// (0x00029efc) list_single_fp_cale_pane_g3

0x3b36,	// (0x0001edfb) bg_button_pane_cp012_ParamLimits

0x3b36,	// (0x0001edfb) bg_vkb2_func_pane_cp03_ParamLimits

0x4a77,	// (0x0001fd3c) cell_vitu2_function_top_pane_g1_ParamLimits

0x3b36,	// (0x0001edfb) bg_vkb2_func_pane_cp04_ParamLimits

0x9781,	// (0x00024a46) main_ncimui_button_group_pane_ParamLimits

0x9781,	// (0x00024a46) main_ncimui_button_group_pane

0x97e9,	// (0x00024aae) main_ncimui_pane_t3_ParamLimits

0x97e9,	// (0x00024aae) main_ncimui_pane_t3

0x16fa,	// (0x0001c9bf) phacti_button_group_pane

0x19b8,	// (0x0001cc7d) aid_size_list_single_double_ParamLimits

0xa61d,	// (0x000258e2) popup_ezdial_listscroll_window_ParamLimits

0x19c4,	// (0x0001cc89) popup_number_entry_window_cp01_ParamLimits

0xa6db,	// (0x000259a0) phacti_button_pane_ParamLimits

0xa6db,	// (0x000259a0) phacti_button_pane

0xbf9b,	// (0x00027260) bg_button_pane_cp14

0x1ad5,	// (0x0001cd9a) phacti_button_pane_t1

0xa6ec,	// (0x000259b1) main_touch_calib_button_pane_ParamLimits

0xa6ec,	// (0x000259b1) main_touch_calib_button_pane

0xc76d,	// (0x00027a32) bg_button_pane_cp18_ParamLimits

0xc76d,	// (0x00027a32) bg_button_pane_cp18

0x1ae3,	// (0x0001cda8) main_touch_calib_button_pane_t1_ParamLimits

0x1ae3,	// (0x0001cda8) main_touch_calib_button_pane_t1

0x1af9,	// (0x0001cdbe) main_touch_calib_button_pane_t2_ParamLimits

0x1af9,	// (0x0001cdbe) main_touch_calib_button_pane_t2

0x0001,

0xfcbd,	// (0x0002af82) main_touch_calib_button_pane_t_ParamLimits

0xfcbd,	// (0x0002af82) main_touch_calib_button_pane_t

0xbf9b,	// (0x00027260) cell_ncimui_button_pane

0xbf9b,	// (0x00027260) bg_button_pane_cp032

0x1b17,	// (0x0001cddc) cell_ncimui_button_pane_t1

0x423f,	// (0x0001f504) image3_infobar_pane_ParamLimits

0x423f,	// (0x0001f504) image3_infobar_pane

0x9b3f,	// (0x00024e04) fs_bigclock_status_pane_ParamLimits

0x9b3f,	// (0x00024e04) fs_bigclock_status_pane

0x9b4c,	// (0x00024e11) main_fs_bigclock_clock_pane_ParamLimits

0x9b4c,	// (0x00024e11) main_fs_bigclock_clock_pane

0x9b68,	// (0x00024e2d) main_fs_bigclock_indi_pane_ParamLimits

0x9b68,	// (0x00024e2d) main_fs_bigclock_indi_pane

0x9b96,	// (0x00024e5b) main_fs_bigclock_swipe_pane_ParamLimits

0x9b96,	// (0x00024e5b) main_fs_bigclock_swipe_pane

0xbf9b,	// (0x00027260) main_fs_clock_dumped_data

0x9bd0,	// (0x00024e95) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9bd0,	// (0x00024e95) list_single_fs_bigclock_indicator_pane_g1

0x9bef,	// (0x00024eb4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9bef,	// (0x00024eb4) list_single_fs_bigclock_indicator_pane_g2

0x9c09,	// (0x00024ece) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9c09,	// (0x00024ece) list_single_fs_bigclock_indicator_pane_g3

0x9c25,	// (0x00024eea) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9c25,	// (0x00024eea) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x0002ae26) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x0002ae26) list_single_fs_bigclock_indicator_pane_g

0x9c54,	// (0x00024f19) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9c54,	// (0x00024f19) list_single_fs_bigclock_indicator_pane_t1

0x9c7c,	// (0x00024f41) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9c7c,	// (0x00024f41) list_single_fs_bigclock_indicator_pane_t2

0x9ca4,	// (0x00024f69) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9ca4,	// (0x00024f69) list_single_fs_bigclock_indicator_pane_t3

0x9ccc,	// (0x00024f91) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9ccc,	// (0x00024f91) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x0002ae31) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x0002ae31) list_single_fs_bigclock_indicator_pane_t

0x1b25,	// (0x0001cdea) image3_infobar_fav_pane_ParamLimits

0x1b25,	// (0x0001cdea) image3_infobar_fav_pane

0x1b35,	// (0x0001cdfa) image3_infobar_loc_pane_ParamLimits

0x1b35,	// (0x0001cdfa) image3_infobar_loc_pane

0x1b4b,	// (0x0001ce10) image3_infobar_time_pane_ParamLimits

0x1b4b,	// (0x0001ce10) image3_infobar_time_pane

0xc70f,	// (0x000279d4) image3_infobar_time_pane_g1

0x1b5b,	// (0x0001ce20) image3_infobar_time_pane_t1

0xc70f,	// (0x000279d4) image3_infobar_loc_pane_g1

0x1b69,	// (0x0001ce2e) image3_infobar_loc_pane_g2

0x0001,

0xfcc2,	// (0x0002af87) image3_infobar_loc_pane_g

0x1b71,	// (0x0001ce36) image3_infobar_loc_pane_t1

0xc70f,	// (0x000279d4) image3_infobar_fav_pane_g1

0x1b7f,	// (0x0001ce44) image3_infobar_fav_pane_g2

0x0001,

0xfcc7,	// (0x0002af8c) image3_infobar_fav_pane_g

0x1b87,	// (0x0001ce4c) fs_bigclock_status_battery_pane

0x1b90,	// (0x0001ce55) fs_bigclock_status_signal_pane

0x1b99,	// (0x0001ce5e) fs_bigclock_status_title_pane

0x1ba2,	// (0x0001ce67) fs_bigclock_status_signal_pane_g1

0x1bab,	// (0x0001ce70) fs_bigclock_status_signal_pane_g2

0x0001,

0xfccc,	// (0x0002af91) fs_bigclock_status_signal_pane_g

0x1bb3,	// (0x0001ce78) fs_bigclock_status_battery_pane_g1

0x1bbc,	// (0x0001ce81) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd1,	// (0x0002af96) fs_bigclock_status_battery_pane_g

0x1bc4,	// (0x0001ce89) fs_bigclock_status_title_pane_t1

0xa6fc,	// (0x000259c1) main_fs_bigclock_clock_pane_g1

0xa6fc,	// (0x000259c1) main_fs_bigclock_clock_pane_g2

0xa6fc,	// (0x000259c1) main_fs_bigclock_clock_pane_g3

0xa6fc,	// (0x000259c1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd6,	// (0x0002af9b) main_fs_bigclock_clock_pane_g

0xa70c,	// (0x000259d1) main_fs_bigclock_clock_pane_t1

0xa722,	// (0x000259e7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcdf,	// (0x0002afa4) main_fs_bigclock_clock_pane_t

0x1bd2,	// (0x0001ce97) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1bd2,	// (0x0001ce97) list_single_fs_bigclock_indicator_pane

0x1be3,	// (0x0001cea8) list_single_fs_bigclock_pane_ParamLimits

0x1be3,	// (0x0001cea8) list_single_fs_bigclock_pane

0x1c09,	// (0x0001cece) main_fs_bigclock_indicator_pane_t1

0x1c18,	// (0x0001cedd) list_single_fs_bigclock_pane_g1

0x1c20,	// (0x0001cee5) list_single_fs_bigclock_pane_t1

0xc70f,	// (0x000279d4) main_fs_bigclock_swipe_pane_g1

0x1c63,	// (0x0001cf28) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf0,	// (0x0002afb5) main_fs_bigclock_swipe_pane_g

0x1c6b,	// (0x0001cf30) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1c6b,	// (0x0001cf30) main_fs_bigclock_swipe_pane_t1

0x676f,	// (0x00021a34) call_type_pane_ParamLimits

0xbf9b,	// (0x00027260) main_btmg_pane

0x1860,	// (0x0001cb25) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1860,	// (0x0001cb25) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc63,	// (0x0002af28) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc63,	// (0x0002af28) list_single_cale_mrui_row_pane_g

0x1a20,	// (0x0001cce5) list_recal_vselct_arw_lo_pane

0x1a28,	// (0x0001cced) list_recal_vselct_arw_up_pane

0x1a30,	// (0x0001ccf5) list_recal_vselct_pane

0xa779,	// (0x00025a3e) btmg_button_pane

0xa785,	// (0x00025a4a) main_btmg_pane_g1

0xbf9b,	// (0x00027260) bg_button_pane_cp044

0x1c88,	// (0x0001cf4d) btmg_button_pane_t1

0xe4c9,	// (0x0002978e) aid_listscroll_gen

0xc3ed,	// (0x000276b2) main_cntbar_detail_pane

0x15fb,	// (0x0001c8c0) list_cmail_folder_pane

0x0783,	// (0x0001ba48) sp_fs_scroll_pane_cp03_ParamLimits

0xa78d,	// (0x00025a52) list_single_fs_dyc_pane_cp01_ParamLimits

0xa78d,	// (0x00025a52) list_single_fs_dyc_pane_cp01

0x1cb0,	// (0x0001cf75) aid_size_cmail_indent

0x1cb9,	// (0x0001cf7e) list_single_dyc_row_pane_cp01

0xa7ca,	// (0x00025a8f) cntbar_detail_list_pane_ParamLimits

0xa7ca,	// (0x00025a8f) cntbar_detail_list_pane

0xa80a,	// (0x00025acf) main_cntbar_detail_cont_pane_ParamLimits

0xa80a,	// (0x00025acf) main_cntbar_detail_cont_pane

0x6763,	// (0x00021a28) scroll_pane_cp032_ParamLimits

0x6763,	// (0x00021a28) scroll_pane_cp032

0xa816,	// (0x00025adb) cntbar_detail_list_event_pane_ParamLimits

0xa816,	// (0x00025adb) cntbar_detail_list_event_pane

0xa7d8,	// (0x00025a9d) cntbar_detail_list_shct_pane

0xcbd9,	// (0x00027e9e) aid_list_gen

0x1cc2,	// (0x0001cf87) aid_scroll

0x1ccb,	// (0x0001cf90) aid_size_touch_scroll_bar

0xa826,	// (0x00025aeb) aid_list_double

0x1f97,	// (0x0001d25c) aid_list_single

0x1f97,	// (0x0001d25c) aid_list_single_lg

0xa82f,	// (0x00025af4) aid_list_z_g_a_sm

0xa837,	// (0x00025afc) aid_list_z_g_d

0xa83f,	// (0x00025b04) aid_txt_z_prm

0xa84d,	// (0x00025b12) aid_txt_z_prm_cp01

0xa85b,	// (0x00025b20) aid_txt_z_sec

0xa869,	// (0x00025b2e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa869,	// (0x00025b2e) main_cntbar_detail_cont_pane_g1

0xa876,	// (0x00025b3b) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa876,	// (0x00025b3b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf5,	// (0x0002afba) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf5,	// (0x0002afba) main_cntbar_detail_cont_pane_g

0x1cd4,	// (0x0001cf99) main_cntbar_detail_cont_pane_t1

0x1ce2,	// (0x0001cfa7) main_cntbar_detail_cont_pane_t2

0x1cf0,	// (0x0001cfb5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcfa,	// (0x0002afbf) main_cntbar_detail_cont_pane_t

0xa882,	// (0x00025b47) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa882,	// (0x00025b47) cell_cntbar_detail_list_shct_pane

0x1cfe,	// (0x0001cfc3) cntbar_detail_list_shct_pane_g1

0x1d07,	// (0x0001cfcc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd01,	// (0x0002afc6) cntbar_detail_list_shct_pane_g

0xa896,	// (0x00025b5b) cntbar_detail_list_event_pane_g1_ParamLimits

0xa896,	// (0x00025b5b) cntbar_detail_list_event_pane_g1

0xa8a2,	// (0x00025b67) cntbar_detail_list_event_pane_g2_ParamLimits

0xa8a2,	// (0x00025b67) cntbar_detail_list_event_pane_g2

0x0005,

0xfd06,	// (0x0002afcb) cntbar_detail_list_event_pane_g_ParamLimits

0xfd06,	// (0x0002afcb) cntbar_detail_list_event_pane_g

0xa910,	// (0x00025bd5) cntbar_detail_list_event_pane_t1_ParamLimits

0xa910,	// (0x00025bd5) cntbar_detail_list_event_pane_t1

0xa925,	// (0x00025bea) cntbar_detail_list_event_pane_t2_ParamLimits

0xa925,	// (0x00025bea) cntbar_detail_list_event_pane_t2

0x0002,

0xfd13,	// (0x0002afd8) cntbar_detail_list_event_pane_t_ParamLimits

0xfd13,	// (0x0002afd8) cntbar_detail_list_event_pane_t

0xc70f,	// (0x000279d4) cell_cntbar_detail_list_shct_pane_g1

0x6aad,	// (0x00021d72) navi_pane_mv_g3

0xc3ed,	// (0x000276b2) main_cntbar_detail_pane_ParamLimits

0xbf9b,	// (0x00027260) main_notif_wgt_pane

0x3f0a,	// (0x0001f1cf) aid_tch_main_mp4_pane_g4

0x41df,	// (0x0001f4a4) popup_slider_window_cp02

0x1a16,	// (0x0001ccdb) list_recal_day_event_pane

0xa7aa,	// (0x00025a6f) cntbar_detail_btn_pane_ParamLimits

0xa7aa,	// (0x00025a6f) cntbar_detail_btn_pane

0xa7ba,	// (0x00025a7f) cntbar_detail_btn_pane_cp01_ParamLimits

0xa7ba,	// (0x00025a7f) cntbar_detail_btn_pane_cp01

0xa7d8,	// (0x00025a9d) cntbar_detail_list_shct_pane_ParamLimits

0xa7e4,	// (0x00025aa9) cntbar_detail_pane_g1_ParamLimits

0xa7e4,	// (0x00025aa9) cntbar_detail_pane_g1

0xa7f4,	// (0x00025ab9) cntbar_detail_pane_t1_ParamLimits

0xa7f4,	// (0x00025ab9) cntbar_detail_pane_t1

0xa8ae,	// (0x00025b73) cntbar_detail_list_event_pane_g3_ParamLimits

0xa8ae,	// (0x00025b73) cntbar_detail_list_event_pane_g3

0xa8c6,	// (0x00025b8b) cntbar_detail_list_event_pane_g4_ParamLimits

0xa8c6,	// (0x00025b8b) cntbar_detail_list_event_pane_g4

0xa8de,	// (0x00025ba3) cntbar_detail_list_event_pane_g5_ParamLimits

0xa8de,	// (0x00025ba3) cntbar_detail_list_event_pane_g5

0xa8f6,	// (0x00025bbb) cntbar_detail_list_event_pane_g6_ParamLimits

0xa8f6,	// (0x00025bbb) cntbar_detail_list_event_pane_g6

0xa93a,	// (0x00025bff) cntbar_detail_list_event_pane_t3_ParamLimits

0xa93a,	// (0x00025bff) cntbar_detail_list_event_pane_t3

0xa94c,	// (0x00025c11) popup_notif_wgt_window_ParamLimits

0xa94c,	// (0x00025c11) popup_notif_wgt_window

0xa95c,	// (0x00025c21) popup_submenu_window_cp01_ParamLimits

0xa95c,	// (0x00025c21) popup_submenu_window_cp01

0xc961,	// (0x00027c26) bg_popup_window_pane_cp10

0x1d10,	// (0x0001cfd5) listscroll_notif_wgt_pane

0x1d22,	// (0x0001cfe7) list_notif_wgt_window

0x1d2b,	// (0x0001cff0) scroll_pane_cp033

0xa96c,	// (0x00025c31) list_notif_wgt_row_pane_ParamLimits

0xa96c,	// (0x00025c31) list_notif_wgt_row_pane

0x1d34,	// (0x0001cff9) aid_size_list_notif_wgt_del

0x1d41,	// (0x0001d006) list_notif_wgt_row_pane_g1

0x1d4d,	// (0x0001d012) list_notif_wgt_row_pane_g2

0x1d5c,	// (0x0001d021) list_notif_wgt_row_pane_g3

0x0002,

0xfd1a,	// (0x0002afdf) list_notif_wgt_row_pane_g

0x1d69,	// (0x0001d02e) list_notif_wgt_row_pane_t1

0x1d7f,	// (0x0001d044) list_notif_wgt_row_pane_t2

0x1d91,	// (0x0001d056) list_notif_wgt_row_pane_t3

0x0002,

0xfd21,	// (0x0002afe6) list_notif_wgt_row_pane_t

0x05d6,	// (0x0001b89b) list_recal_day_event_pane_g1

0x1da3,	// (0x0001d068) list_recal_day_event_pane_t1

0xbf9b,	// (0x00027260) bg_button_pane_cp045

0xa980,	// (0x00025c45) cntbar_detail_btn_pane_t1

0xd307,	// (0x000285cc) main_callh_pane_ParamLimits

0xd307,	// (0x000285cc) main_callh_pane

0xbf9b,	// (0x00027260) main_coverflow0_pane

0xbf9b,	// (0x00027260) main_wgtman_pane

0x9bae,	// (0x00024e73) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9bae,	// (0x00024e73) main_fs_bigclock_unlock_btn_pane

0xa26a,	// (0x0002552f) bg_button_pane_cp16

0xa27a,	// (0x0002553f) cell_tport_appsw_pane_g3

0xa98e,	// (0x00025c53) cf0_flow_pane_ParamLimits

0xa98e,	// (0x00025c53) cf0_flow_pane

0x1db2,	// (0x0001d077) listscroll_cf0_pane

0x1dbd,	// (0x0001d082) main_cf0_pane_g1

0xa99d,	// (0x00025c62) main_cf0_pane_t1_ParamLimits

0xa99d,	// (0x00025c62) main_cf0_pane_t1

0xa9b1,	// (0x00025c76) main_cf0_pane_t2_ParamLimits

0xa9b1,	// (0x00025c76) main_cf0_pane_t2

0x0001,

0xfd2d,	// (0x0002aff2) main_cf0_pane_t_ParamLimits

0xfd2d,	// (0x0002aff2) main_cf0_pane_t

0x1dcf,	// (0x0001d094) scroll_pane_cp11

0xa9c5,	// (0x00025c8a) cf0_flow_pane_g1

0xa9cd,	// (0x00025c92) cf0_flow_pane_g2

0x0001,

0xfd32,	// (0x0002aff7) cf0_flow_pane_g

0xa9d5,	// (0x00025c9a) cf0_flow_pane_t1

0xbf9b,	// (0x00027260) main_call6_pane

0xbf9b,	// (0x00027260) main_calllock_pane

0x4cbd,	// (0x0001ff82) call6_btn_grp_pane_ParamLimits

0x4cbd,	// (0x0001ff82) call6_btn_grp_pane

0x4cca,	// (0x0001ff8f) call6_pane_g1_ParamLimits

0x4cca,	// (0x0001ff8f) call6_pane_g1

0x4cda,	// (0x0001ff9f) popup_call6_1st_window_ParamLimits

0x4cda,	// (0x0001ff9f) popup_call6_1st_window

0x4cea,	// (0x0001ffaf) popup_call6_2nd_window_ParamLimits

0x4cea,	// (0x0001ffaf) popup_call6_2nd_window

0x4cfa,	// (0x0001ffbf) cell_call6_btn_pane_ParamLimits

0x4cfa,	// (0x0001ffbf) cell_call6_btn_pane

0xc961,	// (0x00027c26) bg_popup_call2_in_pane_cp03

0x1dda,	// (0x0001d09f) popup_call6_1st_window_g1

0x1de2,	// (0x0001d0a7) popup_call6_1st_window_g2

0x1dea,	// (0x0001d0af) popup_call6_1st_window_g3

0x0002,

0xfd37,	// (0x0002affc) popup_call6_1st_window_g

0x1df2,	// (0x0001d0b7) popup_call6_1st_window_t1

0x1e01,	// (0x0001d0c6) popup_call6_1st_window_t2

0x1e11,	// (0x0001d0d6) popup_call6_1st_window_t3

0x0002,

0xfd3e,	// (0x0002b003) popup_call6_1st_window_t

0xc961,	// (0x00027c26) bg_popup_call2_in_pane_cp04

0x1e21,	// (0x0001d0e6) popup_call6_2nd_window_g1

0x1e29,	// (0x0001d0ee) popup_call6_2nd_window_g2

0x1e31,	// (0x0001d0f6) popup_call6_2nd_window_g3

0x0002,

0xfd45,	// (0x0002b00a) popup_call6_2nd_window_g

0x1e39,	// (0x0001d0fe) popup_call6_2nd_window_t1

0x36ab,	// (0x0001e970) bg_button_pane_cp15

0x4d0b,	// (0x0001ffd0) cell_call6_btn_pane_g1

0x4d14,	// (0x0001ffd9) cell_call6_btn_pane_t1

0xa9e3,	// (0x00025ca8) listscroll_wgtman_pane_ParamLimits

0xa9e3,	// (0x00025ca8) listscroll_wgtman_pane

0xa9ff,	// (0x00025cc4) wgtman_btn_pane_ParamLimits

0xa9ff,	// (0x00025cc4) wgtman_btn_pane

0xd116,	// (0x000283db) aid_scroll_copy1

0x1e60,	// (0x0001d125) list_wgtman_pane

0xaa34,	// (0x00025cf9) wgtman_btn_pane_g1_ParamLimits

0xaa34,	// (0x00025cf9) wgtman_btn_pane_g1

0xaa5c,	// (0x00025d21) wgtman_btn_pane_t1_ParamLimits

0xaa5c,	// (0x00025d21) wgtman_btn_pane_t1

0x1e6a,	// (0x0001d12f) wgtman_btn_pane_t2_ParamLimits

0x1e6a,	// (0x0001d12f) wgtman_btn_pane_t2

0x0001,

0xfd4c,	// (0x0002b011) wgtman_btn_pane_t_ParamLimits

0xfd4c,	// (0x0002b011) wgtman_btn_pane_t

0xaa93,	// (0x00025d58) listrow_wgtman_pane_ParamLimits

0xaa93,	// (0x00025d58) listrow_wgtman_pane

0xaaaa,	// (0x00025d6f) listrow_wgtman_pane_g1

0xaab7,	// (0x00025d7c) listrow_wgtman_pane_g2

0x0001,

0xfd51,	// (0x0002b016) listrow_wgtman_pane_g

0xaad5,	// (0x00025d9a) listrow_wgtman_pane_t1

0xaaed,	// (0x00025db2) listrow_wgtman_pane_t2

0x0001,

0xfd56,	// (0x0002b01b) listrow_wgtman_pane_t

0xab13,	// (0x00025dd8) wait_bar_pane_cp09

0x1e81,	// (0x0001d146) main_calllock_btn_pane

0x1e8b,	// (0x0001d150) main_calllock_pane_g1

0xbf9b,	// (0x00027260) bg_button_pane_cp17

0x1e48,	// (0x0001d10d) main_calllock_btn_pane_g1

0x1e97,	// (0x0001d15c) main_calllock_btn_pane_t1

0xbf9b,	// (0x00027260) main_dialer3_pane

0xbf9b,	// (0x00027260) main_fmrd2_pane

0xc70f,	// (0x000279d4) main_fs_bigclock_unlock_btn_pane_g1

0xab2d,	// (0x00025df2) main_fs_bigclock_unlock_btn_pane_t1

0xab3b,	// (0x00025e00) area_fmrd2_info_pane_ParamLimits

0xab3b,	// (0x00025e00) area_fmrd2_info_pane

0xab47,	// (0x00025e0c) area_fmrd2_visual_pane_ParamLimits

0xab47,	// (0x00025e0c) area_fmrd2_visual_pane

0xab55,	// (0x00025e1a) fmrd2_indi_pane_ParamLimits

0xab55,	// (0x00025e1a) fmrd2_indi_pane

0xab62,	// (0x00025e27) area_fmrd2_visual_pane_g1

0xab6a,	// (0x00025e2f) area_fmrd2_visual_pane_t1

0xab7a,	// (0x00025e3f) area_fmrd2_visual_pane_t2

0xab8a,	// (0x00025e4f) area_fmrd2_visual_pane_t3

0x0002,

0xfd60,	// (0x0002b025) area_fmrd2_visual_pane_t

0xab9a,	// (0x00025e5f) area_fmrd2_info_pane_g1

0xaba2,	// (0x00025e67) area_fmrd2_info_pane_t1

0xabb2,	// (0x00025e77) area_fmrd2_info_pane_t2

0xabc2,	// (0x00025e87) area_fmrd2_info_pane_t3

0xabd2,	// (0x00025e97) area_fmrd2_info_pane_t4

0x0003,

0xfd67,	// (0x0002b02c) area_fmrd2_info_pane_t

0xabe2,	// (0x00025ea7) fmrd2_indi_pane_t1

0xabf2,	// (0x00025eb7) fmrd2_indi_pane_t2

0xac02,	// (0x00025ec7) fmrd2_indi_pane_t3

0x0002,

0xfd70,	// (0x0002b035) fmrd2_indi_pane_t

0x9c36,	// (0x00024efb) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9c36,	// (0x00024efb) list_single_fs_bigclock_indicator_pane_g5

0x9ceb,	// (0x00024fb0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9ceb,	// (0x00024fb0) list_single_fs_bigclock_indicator_pane_t5

0x0074,	// (0x0001b339) aid_cell_bcale_month_pane_ParamLimits

0x0074,	// (0x0001b339) aid_cell_bcale_month_pane

0x0074,	// (0x0001b339) bcale_month_pane_ParamLimits

0x0074,	// (0x0001b339) bcale_month_pane

0x0777,	// (0x0001ba3c) bcale_preview_pane_ParamLimits

0x0777,	// (0x0001ba3c) bcale_preview_pane

0x1c20,	// (0x0001cee5) list_single_fs_bigclock_pane_t1_ParamLimits

0x1c3f,	// (0x0001cf04) list_single_fs_bigclock_pane_t2_ParamLimits

0x1c3f,	// (0x0001cf04) list_single_fs_bigclock_pane_t2

0x0001,

0xfceb,	// (0x0002afb0) list_single_fs_bigclock_pane_t_ParamLimits

0xfceb,	// (0x0002afb0) list_single_fs_bigclock_pane_t

0xab25,	// (0x00025dea) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd5b,	// (0x0002b020) main_fs_bigclock_unlock_btn_pane_g

0xac12,	// (0x00025ed7) aid_dia3_key_size_ParamLimits

0xac12,	// (0x00025ed7) aid_dia3_key_size

0xac1e,	// (0x00025ee3) aid_dia3_listrow_size_ParamLimits

0xac1e,	// (0x00025ee3) aid_dia3_listrow_size

0xac2e,	// (0x00025ef3) dia3_keypad_fun_pane_ParamLimits

0xac2e,	// (0x00025ef3) dia3_keypad_fun_pane

0xac3e,	// (0x00025f03) dia3_keypad_num_pane_ParamLimits

0xac3e,	// (0x00025f03) dia3_keypad_num_pane

0xac4e,	// (0x00025f13) dia3_listscroll_pane_ParamLimits

0xac4e,	// (0x00025f13) dia3_listscroll_pane

0xac5c,	// (0x00025f21) dia3_numentry_pane_ParamLimits

0xac5c,	// (0x00025f21) dia3_numentry_pane

0x1ea6,	// (0x0001d16b) dia3_list_pane

0xac6a,	// (0x00025f2f) scroll_pane_cp12

0xbf9b,	// (0x00027260) bg_dia3_numentry_pane

0xac75,	// (0x00025f3a) dia3_numentry_pane_t1

0xac84,	// (0x00025f49) cell_dia3_key_num_pane

0xac8c,	// (0x00025f51) cell_dia3_key0_fun_pane_ParamLimits

0xac8c,	// (0x00025f51) cell_dia3_key0_fun_pane

0xac99,	// (0x00025f5e) cell_dia3_key1_fun_pane_ParamLimits

0xac99,	// (0x00025f5e) cell_dia3_key1_fun_pane

0xaca6,	// (0x00025f6b) dia3_listrow_pane

0x101f,	// (0x0001c2e4) bg_dia3_numentry_pane_g1

0xbf9b,	// (0x00027260) bg_button_pane_cp21

0xacb3,	// (0x00025f78) cell_dia3_key_num_pane_t1

0xacc1,	// (0x00025f86) cell_dia3_key_num_pane_t2

0xacd0,	// (0x00025f95) cell_dia3_key_num_pane_t3

0xacdf,	// (0x00025fa4) cell_dia3_key_num_pane_t4

0x0003,

0xfd77,	// (0x0002b03c) cell_dia3_key_num_pane_t

0xbf9b,	// (0x00027260) bg_button_pane_cp19

0xacee,	// (0x00025fb3) cell_dia3_key0_fun_pane_g1

0xbf9b,	// (0x00027260) bg_button_pane_cp20

0xacf6,	// (0x00025fbb) cell_dia3_key1_fun_pane_g1

0x079b,	// (0x0001ba60) area_left_week_number_pane

0x079b,	// (0x0001ba60) area_top_day_name_pane

0x079b,	// (0x0001ba60) frame_month_view_pane

0x079b,	// (0x0001ba60) grid_month_view_pane

0x079b,	// (0x0001ba60) cell_top_day_name_pane_ParamLimits

0x079b,	// (0x0001ba60) cell_top_day_name_pane

0x079b,	// (0x0001ba60) cell_area_left_week_number_pane_ParamLimits

0x079b,	// (0x0001ba60) cell_area_left_week_number_pane

0x079b,	// (0x0001ba60) cell_month_view_pane_ParamLimits

0x079b,	// (0x0001ba60) cell_month_view_pane

0x078f,	// (0x0001ba54) frm_month_g1

0x078f,	// (0x0001ba54) frm_month_g2

0x078f,	// (0x0001ba54) frm_month_g3

0x078f,	// (0x0001ba54) frm_month_g4

0x078f,	// (0x0001ba54) frm_month_g5

0x078f,	// (0x0001ba54) frm_month_g6

0x078f,	// (0x0001ba54) frm_month_g7

0x078f,	// (0x0001ba54) frm_month_g8

0x078f,	// (0x0001ba54) frm_month_g9

0x078f,	// (0x0001ba54) frm_month_g10

0x078f,	// (0x0001ba54) frm_month_g11

0x078f,	// (0x0001ba54) frm_month_g12

0x078f,	// (0x0001ba54) frm_month_g13

0x078f,	// (0x0001ba54) frm_month_g14

0x078f,	// (0x0001ba54) frm_month_g15

0x078f,	// (0x0001ba54) frm_month_g16

0x000f,

0xfd80,	// (0x0002b045) frm_month_g

0x1eb0,	// (0x0001d175) cell_top_day_name_pane_t1

0x078f,	// (0x0001ba54) cell_area_left_week_number_pane_g1

0x1eb0,	// (0x0001d175) cell_area_left_week_number_pane_t1

0x078f,	// (0x0001ba54) cell_month_view_pane_g1

0x1eb0,	// (0x0001d175) cell_month_view_pane_t1

0xbf9b,	// (0x00027260) main_fps_pane

0x13e7,	// (0x0001c6ac) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x13e7,	// (0x0001c6ac) cmail_ddmenu_btn02_pane_cp1

0x1403,	// (0x0001c6c8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1403,	// (0x0001c6c8) cmail_ddmenu_btn02_pane_cp2

0xa663,	// (0x00025928) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa663,	// (0x00025928) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc9e,	// (0x0002af63) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc9e,	// (0x0002af63) cmail_ddmenu_btn02_pane_g

0xa681,	// (0x00025946) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa681,	// (0x00025946) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca3,	// (0x0002af68) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca3,	// (0x0002af68) cmail_ddmenu_btn02_pane_t

0xacfe,	// (0x00025fc3) fps_text_pane_ParamLimits

0xacfe,	// (0x00025fc3) fps_text_pane

0xad0b,	// (0x00025fd0) main_fps_pane_g1_ParamLimits

0xad0b,	// (0x00025fd0) main_fps_pane_g1

0xad17,	// (0x00025fdc) wait_bar_pane_cp010_ParamLimits

0xad17,	// (0x00025fdc) wait_bar_pane_cp010

0xad23,	// (0x00025fe8) fps_text_pane_t1_ParamLimits

0xad23,	// (0x00025fe8) fps_text_pane_t1

0x84a8,	// (0x0002376d) cam4_image_uncrop_pane_g1

0x84b1,	// (0x00023776) cam4_image_uncrop_pane_g2

0x84ba,	// (0x0002377f) cam4_image_uncrop_pane_g3

0x84c3,	// (0x00023788) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x0002aaaa) cam4_image_uncrop_pane_g

0xaca6,	// (0x00025f6b) dia3_listrow_pane_ParamLimits

0xbf9b,	// (0x00027260) main_phob2_pane

0xa227,	// (0x000254ec) cell_tport_appsw_pane_cp02_ParamLimits

0xa227,	// (0x000254ec) cell_tport_appsw_pane_cp02

0xa236,	// (0x000254fb) cell_tport_appsw_pane_cp03_ParamLimits

0xa236,	// (0x000254fb) cell_tport_appsw_pane_cp03

0xbf9b,	// (0x00027260) phob2_contact_card_pane

0xbf9b,	// (0x00027260) phob2_listscroll_pane

0x1ec2,	// (0x0001d187) phob2_list_pane

0x1eca,	// (0x0001d18f) scroll_pane_cp034

0xad3c,	// (0x00026001) phob2_cc_data_pane_ParamLimits

0xad3c,	// (0x00026001) phob2_cc_data_pane

0xad53,	// (0x00026018) phob2_cc_listscroll_pane_ParamLimits

0xad53,	// (0x00026018) phob2_cc_listscroll_pane

0xa59f,	// (0x00025864) list_double_large_graphic_phob2_pane_ParamLimits

0xa59f,	// (0x00025864) list_double_large_graphic_phob2_pane

0xad6f,	// (0x00026034) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xad6f,	// (0x00026034) list_double_large_graphic_phob2_pane_g1

0xad7c,	// (0x00026041) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xad7c,	// (0x00026041) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfda1,	// (0x0002b066) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda1,	// (0x0002b066) list_double_large_graphic_phob2_pane_g

0xada2,	// (0x00026067) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xada2,	// (0x00026067) list_double_large_graphic_phob2_pane_t1

0xadb7,	// (0x0002607c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xadb7,	// (0x0002607c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdaa,	// (0x0002b06f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdaa,	// (0x0002b06f) list_double_large_graphic_phob2_pane_t

0xc6c3,	// (0x00027988) list_highlight_pane_cp024

0xadcc,	// (0x00026091) phob2_cc_button_pane

0xadd6,	// (0x0002609b) phob2_cc_data_pane_g1_ParamLimits

0xadd6,	// (0x0002609b) phob2_cc_data_pane_g1

0xadea,	// (0x000260af) phob2_cc_data_pane_g2_ParamLimits

0xadea,	// (0x000260af) phob2_cc_data_pane_g2

0x0001,

0xfdaf,	// (0x0002b074) phob2_cc_data_pane_g_ParamLimits

0xfdaf,	// (0x0002b074) phob2_cc_data_pane_g

0xadfe,	// (0x000260c3) phob2_cc_data_pane_t1_ParamLimits

0xadfe,	// (0x000260c3) phob2_cc_data_pane_t1

0xae20,	// (0x000260e5) phob2_cc_data_pane_t2_ParamLimits

0xae20,	// (0x000260e5) phob2_cc_data_pane_t2

0xae42,	// (0x00026107) phob2_cc_data_pane_t3_ParamLimits

0xae42,	// (0x00026107) phob2_cc_data_pane_t3

0x0002,

0xfdb4,	// (0x0002b079) phob2_cc_data_pane_t_ParamLimits

0xfdb4,	// (0x0002b079) phob2_cc_data_pane_t

0x1ed2,	// (0x0001d197) phob2_cc_list_pane_ParamLimits

0x1ed2,	// (0x0001d197) phob2_cc_list_pane

0x07bb,	// (0x0001ba80) scroll_pane_cp035_ParamLimits

0x07bb,	// (0x0001ba80) scroll_pane_cp035

0xc3ed,	// (0x000276b2) bg_button_pane_cp033

0xae63,	// (0x00026128) phob2_cc_button_pane_g1

0xae6f,	// (0x00026134) phob2_cc_button_pane_t1

0xae84,	// (0x00026149) phob2_cc_button_pane_t2

0x0001,

0xfdbb,	// (0x0002b080) phob2_cc_button_pane_t

0xae96,	// (0x0002615b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xae96,	// (0x0002615b) list_double_large_graphic_phob2_cc_pane

0xaee3,	// (0x000261a8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaee3,	// (0x000261a8) list_double_large_graphic_phob2_cc_pane_g1

0xaef4,	// (0x000261b9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaef4,	// (0x000261b9) list_double_large_graphic_phob2_cc_pane_g2

0xaf03,	// (0x000261c8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf03,	// (0x000261c8) list_double_large_graphic_phob2_cc_pane_g3

0xaf12,	// (0x000261d7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaf12,	// (0x000261d7) list_double_large_graphic_phob2_cc_pane_g4

0xaf23,	// (0x000261e8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaf23,	// (0x000261e8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc0,	// (0x0002b085) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc0,	// (0x0002b085) list_double_large_graphic_phob2_cc_pane_g

0xaf32,	// (0x000261f7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaf32,	// (0x000261f7) list_double_large_graphic_phob2_cc_pane_t1

0xaf5b,	// (0x00026220) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaf5b,	// (0x00026220) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdcb,	// (0x0002b090) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdcb,	// (0x0002b090) list_double_large_graphic_phob2_cc_pane_t

0x1ede,	// (0x0001d1a3) list_highlight_pane_cp025_ParamLimits

0x1ede,	// (0x0001d1a3) list_highlight_pane_cp025

0xc3ed,	// (0x000276b2) bg_button_pane_cp033_ParamLimits

0xae63,	// (0x00026128) phob2_cc_button_pane_g1_ParamLimits

0xae6f,	// (0x00026134) phob2_cc_button_pane_t1_ParamLimits

0xae84,	// (0x00026149) phob2_cc_button_pane_t2_ParamLimits

0xfdbb,	// (0x0002b080) phob2_cc_button_pane_t_ParamLimits

0x4d95,	// (0x0002005a) popup_wgtman_window

0x0458,	// (0x0001b71d) scroll_pane_cp038

0xaa1c,	// (0x00025ce1) wgtman_btn_pane_cp_01_ParamLimits

0xaa1c,	// (0x00025ce1) wgtman_btn_pane_cp_01

0x1eec,	// (0x0001d1b1) wgtman_content_pane

0x1ef5,	// (0x0001d1ba) wgtman_heading_pane

0xbf9b,	// (0x00027260) bg_heading_pane_cp02

0x1efe,	// (0x0001d1c3) wgtman_heading_pane_g1

0x1f06,	// (0x0001d1cb) wgtman_heading_pane_t1

0x1f14,	// (0x0001d1d9) scroll_pane_cp036

0x1f1c,	// (0x0001d1e1) wgtman_list_pane

0x12ef,	// (0x0001c5b4) wgtman_list_pane_t1_ParamLimits

0x12ef,	// (0x0001c5b4) wgtman_list_pane_t1

0x44f0,	// (0x0001f7b5) cam4_grid_pane

0x8c13,	// (0x00023ed8) bg_button_pane_cp015_ParamLimits

0x8c28,	// (0x00023eed) bg_button_pane_cp016_ParamLimits

0x8c34,	// (0x00023ef9) bg_button_pane_cp017_ParamLimits

0x8c8d,	// (0x00023f52) popup_vitu2_query_window_g3_ParamLimits

0x8c8d,	// (0x00023f52) popup_vitu2_query_window_g3

0x8d2e,	// (0x00023ff3) popup_vitu2_query_window_t6_ParamLimits

0x8d2e,	// (0x00023ff3) popup_vitu2_query_window_t6

0x8d59,	// (0x0002401e) popup_vitu2_query_window_t7_ParamLimits

0x8d59,	// (0x0002401e) popup_vitu2_query_window_t7

0x07a7,	// (0x0001ba6c) cam4_grid_pane_g1

0x07b0,	// (0x0001ba75) cam4_grid_pane_g2

0x1f24,	// (0x0001d1e9) cam4_grid_pane_g3

0x1f2d,	// (0x0001d1f2) cam4_grid_pane_g4

0x0003,

0xfdd0,	// (0x0002b095) cam4_grid_pane_g

0x5629,	// (0x000208ee) aid_placing_vt_slider_lsc_ParamLimits

0x5949,	// (0x00020c0e) vidtel_button_pane_ParamLimits

0x5949,	// (0x00020c0e) vidtel_button_pane

0xbf9b,	// (0x00027260) bg_button_pane_cp034

0x1f38,	// (0x0001d1fd) vidtel_button_pane_g1

0x1f40,	// (0x0001d205) vidtel_button_pane_t1

0x058a,	// (0x0001b84f) aid_size_vtel_slider_touch

0x07bb,	// (0x0001ba80) scroll_pane_cp039

0x9958,	// (0x00024c1d) ncim_query_button_pane_cp01_ParamLimits

0x9977,	// (0x00024c3c) ncimui_query_pane_g1_ParamLimits

0xc3ed,	// (0x000276b2) input_focus_pane_cp012_ParamLimits

0x105d,	// (0x0001c322) ncim_query_entry_pane_t1_ParamLimits

0x07bb,	// (0x0001ba80) scroll_pane_cp039_ParamLimits

0x6a1f,	// (0x00021ce4) navi_pane_bcale_mc_g1

0x6a27,	// (0x00021cec) navi_pane_bcale_mc_t1

0x1439,	// (0x0001c6fe) main_sp_fs_email_pane_g1

0x1445,	// (0x0001c70a) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x0002ae9b) main_sp_fs_email_pane_g

0x186c,	// (0x0001cb31) list_single_cale_mrui_row_pane_g3_ParamLimits

0x186c,	// (0x0001cb31) list_single_cale_mrui_row_pane_g3

0xa6a1,	// (0x00025966) list_single_recal_day_pane_g5_event_pane

0x1a88,	// (0x0001cd4d) list_single_recal_day_pane_g7

0x1f56,	// (0x0001d21b) list_recal_day_event_pane_cp01

0x1f5f,	// (0x0001d224) list_recal_vselct_arw_lo_pane_cp01

0x1f67,	// (0x0001d22c) list_recal_vselct_arw_up_pane_cp01

0x1f6f,	// (0x0001d234) list_recal_vselct_pane_cp01

0x05d6,	// (0x0001b89b) list_recal_day_event_pane_cp01_g1

0x1f79,	// (0x0001d23e) list_recal_day_event_pane_cp01_t1

0x1a90,	// (0x0001cd55) list_single_recal_day_pane_t1_ParamLimits

0x1aa2,	// (0x0001cd67) list_single_recal_day_pane_t2_ParamLimits

0xfcb3,	// (0x0002af78) list_single_recal_day_pane_t_ParamLimits

0xc656,	// (0x0002791b) bg_notes_pane_ParamLimits

0xc74b,	// (0x00027a10) list_notes_pane_ParamLimits

0x4dc5,	// (0x0002008a) scroll_pane_cp06_ParamLimits

0xc76d,	// (0x00027a32) main_notes_pane_ParamLimits

0xc3ed,	// (0x000276b2) main_welc_pane

0xafbe,	// (0x00026283) main_welc_body_pane_ParamLimits

0xafbe,	// (0x00026283) main_welc_body_pane

0xafd9,	// (0x0002629e) main_welc_opti_pane_ParamLimits

0xafd9,	// (0x0002629e) main_welc_opti_pane

0xb030,	// (0x000262f5) main_welc_pane_t1_ParamLimits

0xb030,	// (0x000262f5) main_welc_pane_t1

0x1c96,	// (0x0001cf5b) main_welc_body_row_pane_ParamLimits

0x1c96,	// (0x0001cf5b) main_welc_body_row_pane

0xc6c3,	// (0x00027988) main_welc_opti_row_pane_ParamLimits

0xc6c3,	// (0x00027988) main_welc_opti_row_pane

0x1f8f,	// (0x0001d254) main_welc_opti_row_pane_g1

0xb1e8,	// (0x000264ad) main_welc_opti_row_pane_t1

0x1fa0,	// (0x0001d265) main_welc_body_row_pane_t1

0x1d1a,	// (0x0001cfdf) popup_notif_wgt_heading_pane

0x1d34,	// (0x0001cff9) aid_size_list_notif_wgt_del_ParamLimits

0x1d41,	// (0x0001d006) list_notif_wgt_row_pane_g1_ParamLimits

0x1d4d,	// (0x0001d012) list_notif_wgt_row_pane_g2_ParamLimits

0x1d5c,	// (0x0001d021) list_notif_wgt_row_pane_g3_ParamLimits

0xfd1a,	// (0x0002afdf) list_notif_wgt_row_pane_g_ParamLimits

0x1d69,	// (0x0001d02e) list_notif_wgt_row_pane_t1_ParamLimits

0x1d7f,	// (0x0001d044) list_notif_wgt_row_pane_t2_ParamLimits

0x1d91,	// (0x0001d056) list_notif_wgt_row_pane_t3_ParamLimits

0xfd21,	// (0x0002afe6) list_notif_wgt_row_pane_t_ParamLimits

0xaaaa,	// (0x00025d6f) listrow_wgtman_pane_g1_ParamLimits

0xaab7,	// (0x00025d7c) listrow_wgtman_pane_g2_ParamLimits

0xfd51,	// (0x0002b016) listrow_wgtman_pane_g_ParamLimits

0xaad5,	// (0x00025d9a) listrow_wgtman_pane_t1_ParamLimits

0xaaed,	// (0x00025db2) listrow_wgtman_pane_t2_ParamLimits

0xfd56,	// (0x0002b01b) listrow_wgtman_pane_t_ParamLimits

0xab13,	// (0x00025dd8) wait_bar_pane_cp09_ParamLimits

0xbf9b,	// (0x00027260) bg_popup_heading_pane_cp02

0x1faf,	// (0x0001d274) popup_notif_wgt_heading_pane_g1

0x1fb7,	// (0x0001d27c) popup_notif_wgt_heading_pane_t1

0xbf9b,	// (0x00027260) main_vids_pane

0xbf9b,	// (0x00027260) vids_listscroll_pane

0xb1f7,	// (0x000264bc) scroll_pane_cp040

0xbf9b,	// (0x00027260) vids_list_pane

0xb202,	// (0x000264c7) vids_list_double_pane_ParamLimits

0xb202,	// (0x000264c7) vids_list_double_pane

0xb216,	// (0x000264db) vids_list_double_pane_g1

0xb21f,	// (0x000264e4) vids_list_double_pane_t1

0xb22f,	// (0x000264f4) vids_list_double_pane_t2

0x0001,

0xfdef,	// (0x0002b0b4) vids_list_double_pane_t

0x3b36,	// (0x0001edfb) main_ncimui_pane_ParamLimits

0x9799,	// (0x00024a5e) main_ncimui_pane_g1_ParamLimits

0x97a7,	// (0x00024a6c) main_ncimui_pane_g2_ParamLimits

0x97a7,	// (0x00024a6c) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x0002ad9c) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x0002ad9c) main_ncimui_pane_g

0xaff4,	// (0x000262b9) main_welc_pane_g1_ParamLimits

0xaff4,	// (0x000262b9) main_welc_pane_g1

0xb000,	// (0x000262c5) main_welc_pane_g2_ParamLimits

0xb000,	// (0x000262c5) main_welc_pane_g2

0x0003,

0xfdd9,	// (0x0002b09e) main_welc_pane_g_ParamLimits

0xfdd9,	// (0x0002b09e) main_welc_pane_g

0xc656,	// (0x0002791b) listscroll_mce_pane_ParamLimits

0x6ae9,	// (0x00021dae) wait_bar_pane_cp10

0xe4d1,	// (0x00029796) main_cale_day_pane_ParamLimits

0xe4d1,	// (0x00029796) main_cale_week_pane_ParamLimits

0xc656,	// (0x0002791b) main_messa_pane_ParamLimits

0x80c8,	// (0x0002338d) main_clock2_btn_pane_ParamLimits

0x80c8,	// (0x0002338d) main_clock2_btn_pane

0xecce,	// (0x00029f93) main_clock2_btn_pane_cp01_ParamLimits

0xecce,	// (0x00029f93) main_clock2_btn_pane_cp01

0x1806,	// (0x0001cacb) list_cale_mrui_pane_ParamLimits

0x1dc7,	// (0x0001d08c) main_cf0_pane_g2

0x0001,

0xfd28,	// (0x0002afed) main_cf0_pane_g

0x079b,	// (0x0001ba60) area_left_week_number_pane_ParamLimits

0x079b,	// (0x0001ba60) area_top_day_name_pane_ParamLimits

0x079b,	// (0x0001ba60) frame_month_view_pane_ParamLimits

0x079b,	// (0x0001ba60) grid_month_view_pane_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g1_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g2_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g3_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g4_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g5_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g6_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g7_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g8_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g9_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g10_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g11_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g12_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g13_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g14_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g15_ParamLimits

0x078f,	// (0x0001ba54) frm_month_g16_ParamLimits

0xfd80,	// (0x0002b045) frm_month_g_ParamLimits

0x1eb0,	// (0x0001d175) cell_top_day_name_pane_t1_ParamLimits

0x078f,	// (0x0001ba54) cell_area_left_week_number_pane_g1_ParamLimits

0x1eb0,	// (0x0001d175) cell_area_left_week_number_pane_t1_ParamLimits

0x078f,	// (0x0001ba54) cell_month_view_pane_g1_ParamLimits

0x1eb0,	// (0x0001d175) cell_month_view_pane_t1_ParamLimits

0xc64e,	// (0x00027913) main_clock2_btn_pane_g1

0x1fc5,	// (0x0001d28a) main_clock2_btn_pane_t1

0xc3ed,	// (0x000276b2) listscroll_cmail_pane_ParamLimits

0x1439,	// (0x0001c6fe) main_sp_fs_email_pane_g1_ParamLimits

0x1445,	// (0x0001c70a) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x0002ae9b) main_sp_fs_email_pane_g_ParamLimits

0x19f7,	// (0x0001ccbc) list_recal_day_pane_ParamLimits

0x1a08,	// (0x0001cccd) mian_recal_day_pane_t1

0xa10b,	// (0x000253d0) list_single_dyc_row_text_pane_t4_ParamLimits

0xa10b,	// (0x000253d0) list_single_dyc_row_text_pane_t4

0xa14a,	// (0x0002540f) list_single_dyc_row_text_pane_t5_ParamLimits

0xa14a,	// (0x0002540f) list_single_dyc_row_text_pane_t5

0x14ef,	// (0x0001c7b4) list_single_dyc_row_text_pane_t6_ParamLimits

0x14ef,	// (0x0001c7b4) list_single_dyc_row_text_pane_t6

0x66b7,	// (0x0002197c) aid_mgn_list_cale_time_pane

0x3b36,	// (0x0001edfb) main_gallery2_pane_ParamLimits

0xece2,	// (0x00029fa7) main_clock2_pane_cp01_t1

0xecf0,	// (0x00029fb5) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x0002a98b) main_clock2_pane_cp01_t

0x5186,	// (0x0002044b) cale_week_scroll_pane_g16_ParamLimits

0x5186,	// (0x0002044b) cale_week_scroll_pane_g16

0xc961,	// (0x00027c26) vorec_slider_pane

0x1f40,	// (0x0001d205) vidtel_button_pane_t1_ParamLimits

0xa6fc,	// (0x000259c1) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa6fc,	// (0x000259c1) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa6fc,	// (0x000259c1) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa6fc,	// (0x000259c1) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd6,	// (0x0002af9b) main_fs_bigclock_clock_pane_g_ParamLimits

0xa70c,	// (0x000259d1) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa722,	// (0x000259e7) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcdf,	// (0x0002afa4) main_fs_bigclock_clock_pane_t_ParamLimits

0x7a13,	// (0x00022cd8) main_mup3_lyrics_pane_ParamLimits

0x7a13,	// (0x00022cd8) main_mup3_lyrics_pane

0xb23f,	// (0x00026504) main_mup3_lyrics_pane_t1_ParamLimits

0xb23f,	// (0x00026504) main_mup3_lyrics_pane_t1

0x3ef4,	// (0x0001f1b9) aid_main_mp4_pane_t1_area

0x3efe,	// (0x0001f1c3) aid_main_mp4_pane_t2_area

0x4005,	// (0x0001f2ca) main_mp4_pane_g7_ParamLimits

0x4005,	// (0x0001f2ca) main_mp4_pane_g7

0x4011,	// (0x0001f2d6) main_mp4_pane_g8_ParamLimits

0x4011,	// (0x0001f2d6) main_mp4_pane_g8

0x43ce,	// (0x0001f693) aid_call6_pane_g1_size

0xaec2,	// (0x00026187) list_double_large_graphic_phob2_other_pane_ParamLimits

0xaec2,	// (0x00026187) list_double_large_graphic_phob2_other_pane

0xb266,	// (0x0002652b) list_double_large_graphic_phob2_other_pane_g1

0xbf9b,	// (0x00027260) list_highlight_pane_cp026

0xc3ed,	// (0x000276b2) main_welc_pane_ParamLimits

0x9f6a,	// (0x0002522f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9f6a,	// (0x0002522f) main_sp_fs_ctrlbar_pane_g3

0x9f84,	// (0x00025249) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9f84,	// (0x00025249) main_sp_fs_ctrlbar_pane_g4

0x9fb6,	// (0x0002527b) toolbar2_fixed_button_pane_cp01

0x9fc1,	// (0x00025286) toolbar2_fixed_button_pane_cp02

0x9fce,	// (0x00025293) toolbar2_fixed_button_pane_cp03

0xafa2,	// (0x00026267) list_welc_entry_pane_ParamLimits

0xafa2,	// (0x00026267) list_welc_entry_pane

0xb00e,	// (0x000262d3) main_welc_pane_g3_ParamLimits

0xb00e,	// (0x000262d3) main_welc_pane_g3

0xb04e,	// (0x00026313) main_welc_pane_t2_ParamLimits

0xb04e,	// (0x00026313) main_welc_pane_t2

0xb062,	// (0x00026327) main_welc_pane_t3_ParamLimits

0xb062,	// (0x00026327) main_welc_pane_t3

0x0005,

0xfde2,	// (0x0002b0a7) main_welc_pane_t_ParamLimits

0xfde2,	// (0x0002b0a7) main_welc_pane_t

0xb16c,	// (0x00026431) welc_button_pane_ParamLimits

0xb16c,	// (0x00026431) welc_button_pane

0xb1da,	// (0x0002649f) welc_service_logo_pane_ParamLimits

0xb1da,	// (0x0002649f) welc_service_logo_pane

0xb26e,	// (0x00026533) list_single_welc_entry_pane_ParamLimits

0xb26e,	// (0x00026533) list_single_welc_entry_pane

0xb27f,	// (0x00026544) list_single_welc_entry_pane_g1

0xb287,	// (0x0002654c) list_single_welc_entry_pane_t1

0xb295,	// (0x0002655a) list_single_welc_entry_pane_t2

0x0001,

0xfdf4,	// (0x0002b0b9) list_single_welc_entry_pane_t

0xbf9b,	// (0x00027260) bg_button_pane_cp035

0x1fe1,	// (0x0001d2a6) welc_button_pane_t1

0xb2a3,	// (0x00026568) welc_service_logo_pane_g1

0xb2ac,	// (0x00026571) welc_service_logo_pane_g2

0x0001,

0xfdf9,	// (0x0002b0be) welc_service_logo_pane_g

0x36ab,	// (0x0001e970) main_int_radio_pane

0x0efb,	// (0x0001c1c0) list_single_fs_dyc_pane_g1

0xad88,	// (0x0002604d) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xad88,	// (0x0002604d) list_double_large_graphic_phob2_pane_g3

0xad94,	// (0x00026059) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xad94,	// (0x00026059) list_double_large_graphic_phob2_pane_g4

0xb2b5,	// (0x0002657a) main_int_radio1_pane_ParamLimits

0xb2b5,	// (0x0002657a) main_int_radio1_pane

0x1fef,	// (0x0001d2b4) find_pane_cp02

0xb2cb,	// (0x00026590) input_focus_pane_cp12_ParamLimits

0xb2cb,	// (0x00026590) input_focus_pane_cp12

0xb2d7,	// (0x0002659c) input_focus_pane_cp13_ParamLimits

0xb2d7,	// (0x0002659c) input_focus_pane_cp13

0xb2ef,	// (0x000265b4) input_focus_pane_cp14_ParamLimits

0xb2ef,	// (0x000265b4) input_focus_pane_cp14

0x1ff8,	// (0x0001d2bd) int_radio1_listscroll_pane

0xb307,	// (0x000265cc) main_int_radio1_pane_g1_ParamLimits

0xb307,	// (0x000265cc) main_int_radio1_pane_g1

0xb313,	// (0x000265d8) main_int_radio1_pane_t1_ParamLimits

0xb313,	// (0x000265d8) main_int_radio1_pane_t1

0xb325,	// (0x000265ea) main_int_radio1_pane_t2_ParamLimits

0xb325,	// (0x000265ea) main_int_radio1_pane_t2

0xb339,	// (0x000265fe) main_int_radio1_pane_t3_ParamLimits

0xb339,	// (0x000265fe) main_int_radio1_pane_t3

0xb34d,	// (0x00026612) main_int_radio1_pane_t4_ParamLimits

0xb34d,	// (0x00026612) main_int_radio1_pane_t4

0x2002,	// (0x0001d2c7) main_int_radio1_pane_t5_ParamLimits

0x2002,	// (0x0001d2c7) main_int_radio1_pane_t5

0xb364,	// (0x00026629) main_int_radio1_pane_t6_ParamLimits

0xb364,	// (0x00026629) main_int_radio1_pane_t6

0xb376,	// (0x0002663b) main_int_radio1_pane_t7_ParamLimits

0xb376,	// (0x0002663b) main_int_radio1_pane_t7

0xb388,	// (0x0002664d) main_int_radio1_pane_t8_ParamLimits

0xb388,	// (0x0002664d) main_int_radio1_pane_t8

0xb39a,	// (0x0002665f) main_int_radio1_pane_t9_ParamLimits

0xb39a,	// (0x0002665f) main_int_radio1_pane_t9

0xb3ac,	// (0x00026671) main_int_radio1_pane_t10_ParamLimits

0xb3ac,	// (0x00026671) main_int_radio1_pane_t10

0xb3dd,	// (0x000266a2) main_int_radio1_pane_t11_ParamLimits

0xb3dd,	// (0x000266a2) main_int_radio1_pane_t11

0xb40e,	// (0x000266d3) main_int_radio1_pane_t12_ParamLimits

0xb40e,	// (0x000266d3) main_int_radio1_pane_t12

0x000b,

0xfdfe,	// (0x0002b0c3) main_int_radio1_pane_t_ParamLimits

0xfdfe,	// (0x0002b0c3) main_int_radio1_pane_t

0x1ec2,	// (0x0001d187) int_radio_list_pane

0x1eca,	// (0x0001d18f) scroll_pane_cp037

0x2014,	// (0x0001d2d9) list_double_large_graphic_int_radio_pane_ParamLimits

0x2014,	// (0x0001d2d9) list_double_large_graphic_int_radio_pane

0x2028,	// (0x0001d2ed) list_double_large_graphic_int_radio_pane_g1

0x2031,	// (0x0001d2f6) list_double_large_graphic_int_radio_pane_t1

0x203f,	// (0x0001d304) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe17,	// (0x0002b0dc) list_double_large_graphic_int_radio_pane_t

0xbf9b,	// (0x00027260) list_highlight_pane_cp027

0x1f87,	// (0x0001d24c) main_button_pane_4

0xb01a,	// (0x000262df) main_welc_pane_g4_ParamLimits

0xb01a,	// (0x000262df) main_welc_pane_g4

0xb074,	// (0x00026339) main_welc_pane_t4_ParamLimits

0xb074,	// (0x00026339) main_welc_pane_t4

0xb088,	// (0x0002634d) main_welc_pane_t5_ParamLimits

0xb088,	// (0x0002634d) main_welc_pane_t5

0xb0c0,	// (0x00026385) main_welc_pane_t6_ParamLimits

0xb0c0,	// (0x00026385) main_welc_pane_t6

0xb17a,	// (0x0002643f) welc_button_pane_2_ParamLimits

0xb17a,	// (0x0002643f) welc_button_pane_2

0xb19a,	// (0x0002645f) welc_button_pane_3_ParamLimits

0xb19a,	// (0x0002645f) welc_button_pane_3

0x1f87,	// (0x0001d24c) welc_button_pane_4

0xb1bc,	// (0x00026481) welc_button_pane_5_ParamLimits

0xb1bc,	// (0x00026481) welc_button_pane_5

0x3451,	// (0x0001e716) main_popup_welc_pane

0x2065,	// (0x0001d32a) main_welc_sk_g3

0x206f,	// (0x0001d334) main_welc_sk_g4

0x2079,	// (0x0001d33e) main_welc_sk_t3

0x2089,	// (0x0001d34e) main_welc_sk_t4

0x2099,	// (0x0001d35e) popup_welc_pane_t4

0x20a7,	// (0x0001d36c) popup_welc_pane_t5

0x20b5,	// (0x0001d37a) popup_welc_pane_t6

0x36ab,	// (0x0001e970) main_acti_pane

0xbf9b,	// (0x00027260) main_sso_pane

0xb425,	// (0x000266ea) sso_body_pane_ParamLimits

0xb425,	// (0x000266ea) sso_body_pane

0xb440,	// (0x00026705) sso_logo_pane_ParamLimits

0xb440,	// (0x00026705) sso_logo_pane

0xb46f,	// (0x00026734) sso_sk_pane_ParamLimits

0xb46f,	// (0x00026734) sso_sk_pane

0xb47c,	// (0x00026741) main_sso_logo_pane_g1

0xb485,	// (0x0002674a) sso_sk_pane_t1_ParamLimits

0xb485,	// (0x0002674a) sso_sk_pane_t1

0xb499,	// (0x0002675e) sso_sk_pane_t2_ParamLimits

0xb499,	// (0x0002675e) sso_sk_pane_t2

0x0001,

0xfe1c,	// (0x0002b0e1) sso_sk_pane_t_ParamLimits

0xfe1c,	// (0x0002b0e1) sso_sk_pane_t

0x20f7,	// (0x0001d3bc) aid_sso_gap

0x2100,	// (0x0001d3c5) aid_sso_txt1

0x210a,	// (0x0001d3cf) aid_sso_txt2

0x2114,	// (0x0001d3d9) aid_sso_txt3

0x0002,

0xfe21,	// (0x0002b0e6) aid_sso_txt

0x211e,	// (0x0001d3e3) aid_sso_widget

0xb4f6,	// (0x000267bb) sso_btn_pane_ParamLimits

0xb4f6,	// (0x000267bb) sso_btn_pane

0xb57c,	// (0x00026841) sso_option_pane_ParamLimits

0xb57c,	// (0x00026841) sso_option_pane

0xb624,	// (0x000268e9) sso_query_pane_ParamLimits

0xb624,	// (0x000268e9) sso_query_pane

0xb674,	// (0x00026939) sso_query_pane_cp01_ParamLimits

0xb674,	// (0x00026939) sso_query_pane_cp01

0xb6ca,	// (0x0002698f) sso_t_hdr_pane_ParamLimits

0xb6ca,	// (0x0002698f) sso_t_hdr_pane

0xb6ee,	// (0x000269b3) sso_t_nml_pane_ParamLimits

0xb6ee,	// (0x000269b3) sso_t_nml_pane

0x2128,	// (0x0001d3ed) sso_t_sub_pane

0xb44d,	// (0x00026712) sso_popup_window_ParamLimits

0xb44d,	// (0x00026712) sso_popup_window

0xb4ab,	// (0x00026770) sso_apps_pane_ParamLimits

0xb4ab,	// (0x00026770) sso_apps_pane

0xb4ce,	// (0x00026793) sso_body_pane_g1

0xb4d6,	// (0x0002679b) sso_body_pane_t1

0xb4e6,	// (0x000267ab) sso_body_pane_t2

0x0001,

0xfe28,	// (0x0002b0ed) sso_body_pane_t

0xb53c,	// (0x00026801) sso_btn_pane_cp01_ParamLimits

0xb53c,	// (0x00026801) sso_btn_pane_cp01

0xb5f8,	// (0x000268bd) sso_prog_pane_ParamLimits

0xb5f8,	// (0x000268bd) sso_prog_pane

0xb74e,	// (0x00026a13) sso_t_hdr_pane_t1_ParamLimits

0xb74e,	// (0x00026a13) sso_t_hdr_pane_t1

0x213d,	// (0x0001d402) input_focus_pane_cp10_ParamLimits

0x213d,	// (0x0001d402) input_focus_pane_cp10

0x2151,	// (0x0001d416) sso_query_pane_t1_ParamLimits

0x2151,	// (0x0001d416) sso_query_pane_t1

0x2164,	// (0x0001d429) sso_query_pane_t2_ParamLimits

0x2164,	// (0x0001d429) sso_query_pane_t2

0x217e,	// (0x0001d443) sso_query_pane_t3_ParamLimits

0x217e,	// (0x0001d443) sso_query_pane_t3

0x21a8,	// (0x0001d46d) sso_query_pane_t4_ParamLimits

0x21a8,	// (0x0001d46d) sso_query_pane_t4

0x0003,

0xfe2d,	// (0x0002b0f2) sso_query_pane_t_ParamLimits

0xfe2d,	// (0x0002b0f2) sso_query_pane_t

0x1f97,	// (0x0001d25c) bg_button_pane_cp22

0x21cc,	// (0x0001d491) sso_btn_pane_t1

0xb767,	// (0x00026a2c) sso_t_nml_pane_t1_ParamLimits

0xb767,	// (0x00026a2c) sso_t_nml_pane_t1

0x21db,	// (0x0001d4a0) sso_option_row_pane_ParamLimits

0x21db,	// (0x0001d4a0) sso_option_row_pane

0x21e8,	// (0x0001d4ad) sso_t_sub_pane_t1_ParamLimits

0x21e8,	// (0x0001d4ad) sso_t_sub_pane_t1

0xc3ed,	// (0x000276b2) bg_popup_window_pane_cp11_ParamLimits

0xc3ed,	// (0x000276b2) bg_popup_window_pane_cp11

0x2205,	// (0x0001d4ca) popup_sk_window_cp01_ParamLimits

0x2205,	// (0x0001d4ca) popup_sk_window_cp01

0x2212,	// (0x0001d4d7) sso_popup_body_pane_ParamLimits

0x2212,	// (0x0001d4d7) sso_popup_body_pane

0x221f,	// (0x0001d4e4) scroll_pane_cp21_ParamLimits

0x221f,	// (0x0001d4e4) scroll_pane_cp21

0x222c,	// (0x0001d4f1) sso_popup_body_t_pane_ParamLimits

0x222c,	// (0x0001d4f1) sso_popup_body_t_pane

0x2239,	// (0x0001d4fe) sso_popup_body_t_hdr_pane_ParamLimits

0x2239,	// (0x0001d4fe) sso_popup_body_t_hdr_pane

0xb784,	// (0x00026a49) sso_popup_body_t_nml_pane_ParamLimits

0xb784,	// (0x00026a49) sso_popup_body_t_nml_pane

0xb7a2,	// (0x00026a67) sso_popup_body_t_sub_pane_ParamLimits

0xb7a2,	// (0x00026a67) sso_popup_body_t_sub_pane

0x224b,	// (0x0001d510) sso_popup_body_t_hdr_pane_t1

0xb7c5,	// (0x00026a8a) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb7c5,	// (0x00026a8a) sso_popup_body_t_nml_pane_t1

0x225b,	// (0x0001d520) sso_popup_body_t_sub_pane_t1_ParamLimits

0x225b,	// (0x0001d520) sso_popup_body_t_sub_pane_t1

0xc70f,	// (0x000279d4) sso_prog_pane_g1

0xb80f,	// (0x00026ad4) sso_apps_pane_comp1_ParamLimits

0xb80f,	// (0x00026ad4) sso_apps_pane_comp1

0x2280,	// (0x0001d545) sso_apps_pane_comp1_g1

0x2288,	// (0x0001d54d) sso_apps_pane_comp1_t1

0x22a4,	// (0x0001d569) sso_option_row_pane_g1

0x22bc,	// (0x0001d581) sso_option_row_pane_t1

0x1603,	// (0x0001c8c8) list_cmail_pane_ParamLimits

0xbf9b,	// (0x00027260) main_call7_pane

0xaf84,	// (0x00026249) bg_welc_area_ParamLimits

0xaf84,	// (0x00026249) bg_welc_area

0xb0fa,	// (0x000263bf) sso_t_hdr_pane_a_t1_ParamLimits

0xb0fa,	// (0x000263bf) sso_t_hdr_pane_a_t1

0xb10e,	// (0x000263d3) sso_t_nml_pane_a_t1_ParamLimits

0xb10e,	// (0x000263d3) sso_t_nml_pane_a_t1

0xb138,	// (0x000263fd) sso_t_sub_pane_a_t1_ParamLimits

0xb138,	// (0x000263fd) sso_t_sub_pane_a_t1

0xb1cc,	// (0x00026491) welc_button_pane_cp01_ParamLimits

0xb1cc,	// (0x00026491) welc_button_pane_cp01

0x204d,	// (0x0001d312) sso_btn_pane_t1_copy1

0x205c,	// (0x0001d321) welc_button_pane_2_comp1

0x20c5,	// (0x0001d38a) sso_t_hdr_pane_p_t1

0x20d5,	// (0x0001d39a) sso_t_nml_pane_p_t1

0x20e5,	// (0x0001d3aa) sso_t_sub_pane_p_t1

0xbf9b,	// (0x00027260) main_att_pane

0xbf9b,	// (0x00027260) main_vod_pane

0x2128,	// (0x0001d3ed) sso_t_sub_pane_ParamLimits

0x2296,	// (0x0001d55b) input_focus_pane_cp10_t1

0x22bc,	// (0x0001d581) sso_option_row_pane_t1_ParamLimits

0xb824,	// (0x00026ae9) main_att_body_pane_ParamLimits

0xb824,	// (0x00026ae9) main_att_body_pane

0xb838,	// (0x00026afd) att_btn_emg_pane_ParamLimits

0xb838,	// (0x00026afd) att_btn_emg_pane

0xb850,	// (0x00026b15) att_btn_pane_ParamLimits

0xb850,	// (0x00026b15) att_btn_pane

0xb8ba,	// (0x00026b7f) att_btn_pane_cp01_ParamLimits

0xb8ba,	// (0x00026b7f) att_btn_pane_cp01

0xb8ec,	// (0x00026bb1) att_li_srv_pane_ParamLimits

0xb8ec,	// (0x00026bb1) att_li_srv_pane

0xb8fe,	// (0x00026bc3) att_opt_pane_ParamLimits

0xb8fe,	// (0x00026bc3) att_opt_pane

0xb942,	// (0x00026c07) att_query_pane_ParamLimits

0xb942,	// (0x00026c07) att_query_pane

0xb9b2,	// (0x00026c77) att_query_pane_cp01_ParamLimits

0xb9b2,	// (0x00026c77) att_query_pane_cp01

0xb9f6,	// (0x00026cbb) att_t_hdr_pane_ParamLimits

0xb9f6,	// (0x00026cbb) att_t_hdr_pane

0xba5e,	// (0x00026d23) att_t_nml_pane_ParamLimits

0xba5e,	// (0x00026d23) att_t_nml_pane

0xbad4,	// (0x00026d99) att_t_nml_pane_cp01_ParamLimits

0xbad4,	// (0x00026d99) att_t_nml_pane_cp01

0xbaf8,	// (0x00026dbd) att_t_nmlb_pane_ParamLimits

0xbaf8,	// (0x00026dbd) att_t_nmlb_pane

0xbb5e,	// (0x00026e23) att_term_pane_ParamLimits

0xbb5e,	// (0x00026e23) att_term_pane

0xbba4,	// (0x00026e69) main_att_body_pane_g1_ParamLimits

0xbba4,	// (0x00026e69) main_att_body_pane_g1

0x22d8,	// (0x0001d59d) att_t_hdr_pane_t1_ParamLimits

0x22d8,	// (0x0001d59d) att_t_hdr_pane_t1

0x22eb,	// (0x0001d5b0) att_t_nml_pane_t1_ParamLimits

0x22eb,	// (0x0001d5b0) att_t_nml_pane_t1

0x21cc,	// (0x0001d491) att_btn_pane_t1

0x1f97,	// (0x0001d25c) bg_button_pane_cp23

0xbbce,	// (0x00026e93) att_li_srv_row_pane_ParamLimits

0xbbce,	// (0x00026e93) att_li_srv_row_pane

0x2310,	// (0x0001d5d5) att_t_nmlb_pane_t1_ParamLimits

0x2310,	// (0x0001d5d5) att_t_nmlb_pane_t1

0x232c,	// (0x0001d5f1) att_query_pane_t1

0x233b,	// (0x0001d600) att_query_pane_t2

0x234a,	// (0x0001d60f) att_query_pane_t3

0x0002,

0xfe3b,	// (0x0002b100) att_query_pane_t

0x2359,	// (0x0001d61e) input_focus_pane_cp11

0x2362,	// (0x0001d627) att_term_pane_t1_ParamLimits

0x2362,	// (0x0001d627) att_term_pane_t1

0xbf9b,	// (0x00027260) att_opt_row_pane

0x237f,	// (0x0001d644) att_opt_row_pane_g1

0x2387,	// (0x0001d64c) att_opt_row_pane_t1_ParamLimits

0x2387,	// (0x0001d64c) att_opt_row_pane_t1

0xbbde,	// (0x00026ea3) att_li_srv_row_pane_g1

0xbbe6,	// (0x00026eab) att_li_srv_row_pane_t1_ParamLimits

0xbbe6,	// (0x00026eab) att_li_srv_row_pane_t1

0xbbe6,	// (0x00026eab) att_li_srv_row_pane_t2_ParamLimits

0xbbe6,	// (0x00026eab) att_li_srv_row_pane_t2

0x0001,

0xfe42,	// (0x0002b107) att_li_srv_row_pane_t_ParamLimits

0xfe42,	// (0x0002b107) att_li_srv_row_pane_t

0x23a0,	// (0x0001d665) att_btn_close_pane_g1

0xbf9b,	// (0x00027260) bg_button_pane_cp24

0xbbfb,	// (0x00026ec0) main_vod_body_pane_ParamLimits

0xbbfb,	// (0x00026ec0) main_vod_body_pane

0xbc09,	// (0x00026ece) main_vod_body_pane_g1_ParamLimits

0xbc09,	// (0x00026ece) main_vod_body_pane_g1

0xbc39,	// (0x00026efe) scroll_pane_cp24_ParamLimits

0xbc39,	// (0x00026efe) scroll_pane_cp24

0xbc81,	// (0x00026f46) vod_btn_pane_ParamLimits

0xbc81,	// (0x00026f46) vod_btn_pane

0xbcbf,	// (0x00026f84) vod_det_pane_ParamLimits

0xbcbf,	// (0x00026f84) vod_det_pane

0xbceb,	// (0x00026fb0) vod_logo_g1_ParamLimits

0xbceb,	// (0x00026fb0) vod_logo_g1

0xbd25,	// (0x00026fea) vod_opt_pane_ParamLimits

0xbd25,	// (0x00026fea) vod_opt_pane

0xbd55,	// (0x0002701a) vod_opt_pane_cp01_ParamLimits

0xbd55,	// (0x0002701a) vod_opt_pane_cp01

0xbd7d,	// (0x00027042) vod_query_pane_ParamLimits

0xbd7d,	// (0x00027042) vod_query_pane

0xbda5,	// (0x0002706a) vod_query_pane_cp01_ParamLimits

0xbda5,	// (0x0002706a) vod_query_pane_cp01

0xbdb1,	// (0x00027076) vod_t_nml_pane_ParamLimits

0xbdb1,	// (0x00027076) vod_t_nml_pane

0xbe5b,	// (0x00027120) vod_t_nml_pane_cp01_ParamLimits

0xbe5b,	// (0x00027120) vod_t_nml_pane_cp01

0xbe93,	// (0x00027158) vod_t_sub_pane_ParamLimits

0xbe93,	// (0x00027158) vod_t_sub_pane

0xbebf,	// (0x00027184) vod_t_sub_pane_cp01_ParamLimits

0xbebf,	// (0x00027184) vod_t_sub_pane_cp01

0x2359,	// (0x0001d61e) vod_query_field_pane

0x23a8,	// (0x0001d66d) vod_query_pane_t1

0x23b7,	// (0x0001d67c) bg_button_pane_cp25

0x21cc,	// (0x0001d491) sso_btn_pane_t1_copy2

0xbee7,	// (0x000271ac) vod_t_nml_pane_t1_ParamLimits

0xbee7,	// (0x000271ac) vod_t_nml_pane_t1

0x23c0,	// (0x0001d685) vod_opt_row_pane_ParamLimits

0x23c0,	// (0x0001d685) vod_opt_row_pane

0x23d2,	// (0x0001d697) vod_t_sub_pane_t1_ParamLimits

0x23d2,	// (0x0001d697) vod_t_sub_pane_t1

0x23eb,	// (0x0001d6b0) vod_det_cell_pane_ParamLimits

0x23eb,	// (0x0001d6b0) vod_det_cell_pane

0xbf9b,	// (0x00027260) input_focus_pane_cp15

0x23fc,	// (0x0001d6c1) vod_query_field_pane_t1

0x240a,	// (0x0001d6cf) vod_opt_row_pane_g1_ParamLimits

0x240a,	// (0x0001d6cf) vod_opt_row_pane_g1

0x2416,	// (0x0001d6db) vod_opt_row_pane_t1_ParamLimits

0x2416,	// (0x0001d6db) vod_opt_row_pane_t1

0x2438,	// (0x0001d6fd) vod_det_cell_field_pane

0x2441,	// (0x0001d706) vod_det_cell_pane_g1

0x2449,	// (0x0001d70e) vod_det_cell_pane_t1

0xbf9b,	// (0x00027260) input_focus_pane_cp16

0x2458,	// (0x0001d71d) vod_det_cell_field_pane_t1

0xbf22,	// (0x000271e7) call7_btn_grp_pane_ParamLimits

0xbf22,	// (0x000271e7) call7_btn_grp_pane

0xc6c3,	// (0x00027988) call7_bubble_pane_ParamLimits

0xc6c3,	// (0x00027988) call7_bubble_pane

0xbf2f,	// (0x000271f4) cell_call7_btn_pane_ParamLimits

0xbf2f,	// (0x000271f4) cell_call7_btn_pane

0xbf40,	// (0x00027205) call7_pane_g1_ParamLimits

0xbf40,	// (0x00027205) call7_pane_g1

0xbf4f,	// (0x00027214) call7_windows_conf_pane_ParamLimits

0xbf4f,	// (0x00027214) call7_windows_conf_pane

0xbf71,	// (0x00027236) popup_call7_1st_window_ParamLimits

0xbf71,	// (0x00027236) popup_call7_1st_window

0xbf7f,	// (0x00027244) popup_call7_2nd_window_ParamLimits

0xbf7f,	// (0x00027244) popup_call7_2nd_window

0xbf8d,	// (0x00027252) popup_call7_3rd_window_ParamLimits

0xbf8d,	// (0x00027252) popup_call7_3rd_window

0xbf9b,	// (0x00027260) bg_button_pane_cp26

0x1e48,	// (0x0001d10d) cell_call7_btn_pane_g1

0x1e51,	// (0x0001d116) cell_call7_btn_pane_t1

0xbf9b,	// (0x00027260) bg_popup_window_pane_cp12

0x2466,	// (0x0001d72b) popup_call7_1st_window_g1

0x246e,	// (0x0001d733) popup_call7_1st_window_g2

0x2476,	// (0x0001d73b) popup_call7_1st_window_g3

0x0002,

0xfe47,	// (0x0002b10c) popup_call7_1st_window_g

0x247e,	// (0x0001d743) popup_call7_1st_window_t1

0x248d,	// (0x0001d752) popup_call7_1st_window_t2

0x249d,	// (0x0001d762) popup_call7_1st_window_t3

0x0002,

0xfe4e,	// (0x0002b113) popup_call7_1st_window_t

0xbf9b,	// (0x00027260) bg_popup_window_pane_cp13

0x24ad,	// (0x0001d772) popup_call7_2nd_window_g1

0x24b5,	// (0x0001d77a) popup_call7_2nd_window_g2

0x24bd,	// (0x0001d782) popup_call7_2nd_window_g3

0x0002,

0xfe55,	// (0x0002b11a) popup_call7_2nd_window_g

0x24c5,	// (0x0001d78a) popup_call7_2nd_window_t1

0xbf9b,	// (0x00027260) bg_popup_window_pane_cp14

0x24d4,	// (0x0001d799) call7_list_conf_pane

0x24dc,	// (0x0001d7a1) call7_list_conf_row_pane_ParamLimits

0x24dc,	// (0x0001d7a1) call7_list_conf_row_pane

0x24ef,	// (0x0001d7b4) call7_list_conf_row_pane_g1

0x24f7,	// (0x0001d7bc) call7_list_conf_row_pane_g2

0x0001,

0xfe5c,	// (0x0002b121) call7_list_conf_row_pane_g

0x24ff,	// (0x0001d7c4) call7_list_conf_row_pane_t1

0xbf9b,	// (0x00027260) list_highlight_pane_cp22

0xb5ca,	// (0x0002688f) sso_option_pane_cp01_ParamLimits

0xb5ca,	// (0x0002688f) sso_option_pane_cp01

0xc656,	// (0x0002791b) msg_header_pane_ParamLimits

0xd3ce,	// (0x00028693) bg_button_pane_cp01_ParamLimits

0xd3e2,	// (0x000286a7) input_focus_pane_cp07_ParamLimits

0xa006,	// (0x000252cb) popup_email_progress_window

0xc70f,	// (0x000279d4) popup_email_progress_window_g1

0x250d,	// (0x0001d7d2) popup_email_progress_window_g2

0x0001,

0xfe61,	// (0x0002b126) popup_email_progress_window_g

0x2515,	// (0x0001d7da) popup_email_progress_window_t1

0xbf9b,	// (0x00027260) cmail_conv_pane

0x1542,	// (0x0001c807) list_single_dyc_row_pane_g5_ParamLimits

0x1542,	// (0x0001c807) list_single_dyc_row_pane_g5

0x154e,	// (0x0001c813) list_single_dyc_row_pane_g6_ParamLimits

0x154e,	// (0x0001c813) list_single_dyc_row_pane_g6

0x1566,	// (0x0001c82b) list_single_dyc_row_pane_g7_ParamLimits

0x1566,	// (0x0001c82b) list_single_dyc_row_pane_g7

0xafb2,	// (0x00026277) main_button_pane_5_ParamLimits

0xafb2,	// (0x00026277) main_button_pane_5

0xb434,	// (0x000266f9) sso_emg_call_btn_pane_ParamLimits

0xb434,	// (0x000266f9) sso_emg_call_btn_pane

0xb73e,	// (0x00026a03) sso_t_sub_pane_cp01_ParamLimits

0xb73e,	// (0x00026a03) sso_t_sub_pane_cp01

0x22a4,	// (0x0001d569) sso_option_row_pane_g1_ParamLimits

0x22b0,	// (0x0001d575) sso_option_row_pane_g2_ParamLimits

0x22b0,	// (0x0001d575) sso_option_row_pane_g2

0x0001,

0xfe36,	// (0x0002b0fb) sso_option_row_pane_g_ParamLimits

0xfe36,	// (0x0002b0fb) sso_option_row_pane_g

0xb8d2,	// (0x00026b97) att_btn_pane_cp02_ParamLimits

0xb8d2,	// (0x00026b97) att_btn_pane_cp02

0x2523,	// (0x0001d7e8) cmail_conv_hdr_pane

0x252c,	// (0x0001d7f1) list_cmail_conv_pane

0x2536,	// (0x0001d7fb) scroll_pane_cp31

0x253e,	// (0x0001d803) cmail_conv_hdr_pane_t1

0x254c,	// (0x0001d811) cmail_conv_hdr_pane_t2

0x0001,

0xfe66,	// (0x0002b12b) cmail_conv_hdr_pane_t

0x255a,	// (0x0001d81f) bubble_cmail_conv_pane_ParamLimits

0x255a,	// (0x0001d81f) bubble_cmail_conv_pane

0x1787,	// (0x0001ca4c) aid_size_colorization_pane

0xc961,	// (0x00027c26) bg_bubble_cmail_conv_pane

0x2576,	// (0x0001d83b) body_bubble_cmail_conv_pane

0xce54,	// (0x00028119) bubble_cmail_conv_pane_g1

0xce5c,	// (0x00028121) bubble_cmail_conv_pane_g2

0xce64,	// (0x00028129) bubble_cmail_conv_pane_g3

0x0002,

0xf252,	// (0x0002a517) bubble_cmail_conv_pane_g

0x257e,	// (0x0001d843) bubble_cmail_conv_pane_t1

0x258c,	// (0x0001d851) bg_bubble_cmail_conv_pane_g1

0x2595,	// (0x0001d85a) bg_bubble_cmail_conv_pane_g2

0x259e,	// (0x0001d863) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe6b,	// (0x0002b130) bg_bubble_cmail_conv_pane_g

0x25a7,	// (0x0001d86c) body_bubble_cmail_conv_pane_t1_ParamLimits

0x25a7,	// (0x0001d86c) body_bubble_cmail_conv_pane_t1

0x25be,	// (0x0001d883) body_bubble_cmail_conv_pane_t2_ParamLimits

0x25be,	// (0x0001d883) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe72,	// (0x0002b137) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe72,	// (0x0002b137) body_bubble_cmail_conv_pane_t

0xc6c3,	// (0x00027988) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
