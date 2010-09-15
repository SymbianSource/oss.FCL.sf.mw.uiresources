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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008b93c };

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
0x5b9f,	// (0x000914db) Screen

0x5bab,	// (0x000914e7) application_window

0x5c07,	// (0x00091543) area_bottom_pane_ParamLimits

0x5c07,	// (0x00091543) area_bottom_pane

0x5c5f,	// (0x0009159b) area_top_pane_ParamLimits

0x5c5f,	// (0x0009159b) area_top_pane

0x5cc3,	// (0x000915ff) call_video_uplink_pane_ParamLimits

0x5cc3,	// (0x000915ff) call_video_uplink_pane

0x5d02,	// (0x0009163e) main_pane_ParamLimits

0x5d02,	// (0x0009163e) main_pane

0x4629,	// (0x0008ff65) context_pane

0x8bb4,	// (0x000944f0) navi_pane

0x8bda,	// (0x00094516) popup_cale_events_window_ParamLimits

0x8bda,	// (0x00094516) popup_cale_events_window

0x463c,	// (0x0008ff78) popup_mup_playback_window

0x8bf2,	// (0x0009452e) signal_pane

0x16a0,	// (0x0008cfdc) main_browser_pane

0x1aa0,	// (0x0008d3dc) main_burst_pane

0x8a32,	// (0x0009436e) main_calc_pane

0x461d,	// (0x0008ff59) main_cale_day_pane

0x6311,	// (0x00091c4d) main_cale_month_pane

0x461d,	// (0x0008ff59) main_cale_week_pane

0x1aa0,	// (0x0008d3dc) main_call_pane

0x1358,	// (0x0008cc94) main_call_poc_pane

0x1aa0,	// (0x0008d3dc) main_camera_pane

0x1aa0,	// (0x0008d3dc) main_chi_dic_pane

0x2271,	// (0x0008dbad) main_clock_pane

0x1358,	// (0x0008cc94) main_fmradio_pane

0x1aa0,	// (0x0008d3dc) main_graph_messa_pane

0x1358,	// (0x0008cc94) main_help_pane

0x16a0,	// (0x0008cfdc) main_im_pane

0x15b3,	// (0x0008ceef) main_image_pane_ParamLimits

0x15b3,	// (0x0008ceef) main_image_pane

0x1358,	// (0x0008cc94) main_location2_pane

0x1aa0,	// (0x0008d3dc) main_location_pane

0x15b3,	// (0x0008ceef) main_messa_pane

0x1358,	// (0x0008cc94) main_mp2_pane

0x1aa0,	// (0x0008d3dc) main_mp_pane

0x1358,	// (0x0008cc94) main_msg_pane

0x1358,	// (0x0008cc94) main_mup_eq_pane

0x1358,	// (0x0008cc94) main_mup_pane

0x16a0,	// (0x0008cfdc) main_notes_pane

0x1358,	// (0x0008cc94) main_pec_pane

0x1358,	// (0x0008cc94) main_phob_pane

0x1358,	// (0x0008cc94) main_pinb_pane

0x1358,	// (0x0008cc94) main_postcard_pane

0x1358,	// (0x0008cc94) main_qdial_pane

0x1aa0,	// (0x0008d3dc) main_skin_pane

0x1358,	// (0x0008cc94) main_smil2_pane

0x1aa0,	// (0x0008d3dc) main_smil_pane

0x1aa0,	// (0x0008d3dc) main_video_pane

0x1aa0,	// (0x0008d3dc) main_video_tele_pane

0x15b3,	// (0x0008ceef) main_viewer_pane_ParamLimits

0x15b3,	// (0x0008ceef) main_viewer_pane

0x1aa0,	// (0x0008d3dc) main_vorec_pane

0x8a7e,	// (0x000943ba) popup_blid_sat_info_window_ParamLimits

0x8a7e,	// (0x000943ba) popup_blid_sat_info_window

0x8a9e,	// (0x000943da) popup_dyc_status_message_window_ParamLimits

0x8a9e,	// (0x000943da) popup_dyc_status_message_window

0x8aae,	// (0x000943ea) popup_grid_large_graphic_window_ParamLimits

0x8aae,	// (0x000943ea) popup_grid_large_graphic_window

0x8b3f,	// (0x0009447b) popup_loc_request_window_ParamLimits

0x8b3f,	// (0x0009447b) popup_loc_request_window

0x8b8c,	// (0x000944c8) popup_wml_address_window_ParamLimits

0x8b8c,	// (0x000944c8) popup_wml_address_window

0x890a,	// (0x00094246) call_muted_g1

0x8585,	// (0x00093ec1) popup_call_audio_conf_window_ParamLimits

0x8585,	// (0x00093ec1) popup_call_audio_conf_window

0x891a,	// (0x00094256) popup_call_audio_first_window_ParamLimits

0x891a,	// (0x00094256) popup_call_audio_first_window

0x895a,	// (0x00094296) popup_call_audio_in_window_ParamLimits

0x895a,	// (0x00094296) popup_call_audio_in_window

0x897e,	// (0x000942ba) popup_call_audio_out_window_ParamLimits

0x897e,	// (0x000942ba) popup_call_audio_out_window

0x89a0,	// (0x000942dc) popup_call_audio_second_window_ParamLimits

0x89a0,	// (0x000942dc) popup_call_audio_second_window

0x89d0,	// (0x0009430c) popup_call_audio_wait_window_ParamLimits

0x89d0,	// (0x0009430c) popup_call_audio_wait_window

0x89f1,	// (0x0009432d) popup_number_entry_window_ParamLimits

0x89f1,	// (0x0009432d) popup_number_entry_window

0x0f45,	// (0x0008c881) bg_popup_call_pane_cp05_ParamLimits

0x0f45,	// (0x0008c881) bg_popup_call_pane_cp05

0x0f65,	// (0x0008c8a1) popup_number_entry_window_t1

0x0f78,	// (0x0008c8b4) popup_number_entry_window_t2

0x0f8a,	// (0x0008c8c6) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0009a981) popup_number_entry_window_t

0x0f9c,	// (0x0008c8d8) text_title_cp2

0x0faf,	// (0x0008c8eb) bg_popup_call_pane_cp_ParamLimits

0x0faf,	// (0x0008c8eb) bg_popup_call_pane_cp

0x0fbd,	// (0x0008c8f9) call_thumbnail_pane

0x0fc5,	// (0x0008c901) popup_call_audio_in_window_g1_ParamLimits

0x0fc5,	// (0x0008c901) popup_call_audio_in_window_g1

0x0fd1,	// (0x0008c90d) popup_call_audio_in_window_g2_ParamLimits

0x0fd1,	// (0x0008c90d) popup_call_audio_in_window_g2

0x0fdd,	// (0x0008c919) popup_call_audio_in_window_g3_ParamLimits

0x0fdd,	// (0x0008c919) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0009a98a) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0009a98a) popup_call_audio_in_window_g

0x0fe9,	// (0x0008c925) popup_call_audio_in_window_t1_ParamLimits

0x0fe9,	// (0x0008c925) popup_call_audio_in_window_t1

0x1005,	// (0x0008c941) popup_call_audio_in_window_t2_ParamLimits

0x1005,	// (0x0008c941) popup_call_audio_in_window_t2

0x1021,	// (0x0008c95d) popup_call_audio_in_window_t3_ParamLimits

0x1021,	// (0x0008c95d) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0009a991) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0009a991) popup_call_audio_in_window_t

0x0faf,	// (0x0008c8eb) bg_popup_call_pane_cp01_ParamLimits

0x0faf,	// (0x0008c8eb) bg_popup_call_pane_cp01

0x0fbd,	// (0x0008c8f9) call_thumbnail_pane_cp02

0x1034,	// (0x0008c970) call_type_pane_cp022

0x103c,	// (0x0008c978) popup_call_audio_out_window_g1_ParamLimits

0x103c,	// (0x0008c978) popup_call_audio_out_window_g1

0x104e,	// (0x0008c98a) popup_call_audio_out_window_g2_ParamLimits

0x104e,	// (0x0008c98a) popup_call_audio_out_window_g2

0x105a,	// (0x0008c996) popup_call_audio_out_window_g3_ParamLimits

0x105a,	// (0x0008c996) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0009a998) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0009a998) popup_call_audio_out_window_g

0x106c,	// (0x0008c9a8) popup_call_audio_out_window_t1_ParamLimits

0x106c,	// (0x0008c9a8) popup_call_audio_out_window_t1

0x1084,	// (0x0008c9c0) popup_call_audio_out_window_t2_ParamLimits

0x1084,	// (0x0008c9c0) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0009a99f) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0009a99f) popup_call_audio_out_window_t

0x1099,	// (0x0008c9d5) bg_popup_call_pane_ParamLimits

0x1099,	// (0x0008c9d5) bg_popup_call_pane

0x5f1a,	// (0x00091856) call_thumbnail_pane_cp_ParamLimits

0x5f1a,	// (0x00091856) call_thumbnail_pane_cp

0x111d,	// (0x0008ca59) call_type_pane_cp01_ParamLimits

0x111d,	// (0x0008ca59) call_type_pane_cp01

0x1161,	// (0x0008ca9d) popup_call_audio_first_window_g1_ParamLimits

0x1161,	// (0x0008ca9d) popup_call_audio_first_window_g1

0x11ad,	// (0x0008cae9) popup_call_audio_first_window_g2_ParamLimits

0x11ad,	// (0x0008cae9) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0009a9a4) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0009a9a4) popup_call_audio_first_window_g

0x11f1,	// (0x0008cb2d) popup_call_audio_first_window_t1_ParamLimits

0x11f1,	// (0x0008cb2d) popup_call_audio_first_window_t1

0x129d,	// (0x0008cbd9) popup_call_audio_first_window_t4_ParamLimits

0x129d,	// (0x0008cbd9) popup_call_audio_first_window_t4

0x1329,	// (0x0008cc65) popup_call_audio_first_window_t5_ParamLimits

0x1329,	// (0x0008cc65) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0009a9a9) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0009a9a9) popup_call_audio_first_window_t

0x1358,	// (0x0008cc94) bg_popup_call_pane_cp02

0x1362,	// (0x0008cc9e) call_type_pane_cp023

0x136a,	// (0x0008cca6) popup_call_audio_wait_window_g1

0x1372,	// (0x0008ccae) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0009a9b0) popup_call_audio_wait_window_g

0x137a,	// (0x0008ccb6) popup_call_audio_wait_window_t3

0x1388,	// (0x0008ccc4) bg_popup_call_pane_cp03_ParamLimits

0x1388,	// (0x0008ccc4) bg_popup_call_pane_cp03

0x13e8,	// (0x0008cd24) call_thumbnail_pane_cp011_ParamLimits

0x13e8,	// (0x0008cd24) call_thumbnail_pane_cp011

0x13f4,	// (0x0008cd30) call_type_pane_cp034_ParamLimits

0x13f4,	// (0x0008cd30) call_type_pane_cp034

0x1430,	// (0x0008cd6c) popup_call_audio_second_window_g1_ParamLimits

0x1430,	// (0x0008cd6c) popup_call_audio_second_window_g1

0x146c,	// (0x0008cda8) popup_call_audio_second_window_g2_ParamLimits

0x146c,	// (0x0008cda8) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0009a9b5) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0009a9b5) popup_call_audio_second_window_g

0x14a8,	// (0x0008cde4) popup_call_audio_second_window_t1_ParamLimits

0x14a8,	// (0x0008cde4) popup_call_audio_second_window_t1

0x1529,	// (0x0008ce65) popup_call_audio_second_window_t2_ParamLimits

0x1529,	// (0x0008ce65) popup_call_audio_second_window_t2

0x155f,	// (0x0008ce9b) popup_call_audio_second_window_t3_ParamLimits

0x155f,	// (0x0008ce9b) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0009a9ba) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0009a9ba) popup_call_audio_second_window_t

0x1358,	// (0x0008cc94) bg_popup_call_pane_cp04

0x1595,	// (0x0008ced1) list_conf_pane

0x159d,	// (0x0008ced9) popup_call_audio_conf_window_t1

0x15ab,	// (0x0008cee7) call_thumbnail_pane_g1

0x15b3,	// (0x0008ceef) bg_pinb_pane_ParamLimits

0x15b3,	// (0x0008ceef) bg_pinb_pane

0x15c1,	// (0x0008cefd) find_pinb_pane

0x15b3,	// (0x0008ceef) listscroll_pinb_pane_ParamLimits

0x15b3,	// (0x0008ceef) listscroll_pinb_pane

0x15cb,	// (0x0008cf07) pinb_bg_pane_g1

0x15cb,	// (0x0008cf07) pinb_bg_pane_g2

0x15cb,	// (0x0008cf07) pinb_bg_pane_g3

0x15cb,	// (0x0008cf07) pinb_bg_pane_g4

0x15cb,	// (0x0008cf07) pinb_bg_pane_g5

0x15cb,	// (0x0008cf07) pinb_bg_pane_g6

0x15cb,	// (0x0008cf07) pinb_bg_pane_g7

0x15cb,	// (0x0008cf07) pinb_bg_pane_g8

0x15cb,	// (0x0008cf07) pinb_bg_pane_g9

0x15cb,	// (0x0008cf07) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0009a9c1) pinb_bg_pane_g

0x0f2d,	// (0x0008c869) grid_pinb_pane

0x0f2d,	// (0x0008c869) list_pinb_pane

0x0f37,	// (0x0008c873) scroll_pane_cp01_ParamLimits

0x0f37,	// (0x0008c873) scroll_pane_cp01

0x15d5,	// (0x0008cf11) find_pinb_pane_g1_ParamLimits

0x15d5,	// (0x0008cf11) find_pinb_pane_g1

0x15ed,	// (0x0008cf29) find_pinb_pane_t1

0x15ff,	// (0x0008cf3b) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0009a9db) find_pinb_pane_t

0x1614,	// (0x0008cf50) input_focus_pane_cp01_ParamLimits

0x1614,	// (0x0008cf50) input_focus_pane_cp01

0x1620,	// (0x0008cf5c) cell_pinb_pane_ParamLimits

0x1620,	// (0x0008cf5c) cell_pinb_pane

0x162e,	// (0x0008cf6a) cell_pinb_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) cell_pinb_pane_g1

0x163c,	// (0x0008cf78) cell_pinb_pane_g2_ParamLimits

0x163c,	// (0x0008cf78) cell_pinb_pane_g2

0x163c,	// (0x0008cf78) cell_pinb_pane_g3_ParamLimits

0x163c,	// (0x0008cf78) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0009a9e0) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0009a9e0) cell_pinb_pane_g

0x1358,	// (0x0008cc94) grid_highlight_pane_cp01

0x1620,	// (0x0008cf5c) list_pinb_item_pane_ParamLimits

0x1620,	// (0x0008cf5c) list_pinb_item_pane

0x0f2d,	// (0x0008c869) list_highlight_pane_cp02

0x164a,	// (0x0008cf86) list_pinb_item_pane_g1_ParamLimits

0x164a,	// (0x0008cf86) list_pinb_item_pane_g1

0x163c,	// (0x0008cf78) list_pinb_item_pane_g2_ParamLimits

0x163c,	// (0x0008cf78) list_pinb_item_pane_g2

0x162e,	// (0x0008cf6a) list_pinb_item_pane_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_pinb_item_pane_g3

0x163c,	// (0x0008cf78) list_pinb_item_pane_g4_ParamLimits

0x163c,	// (0x0008cf78) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0009a9e7) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0009a9e7) list_pinb_item_pane_g

0x1658,	// (0x0008cf94) list_pinb_item_pane_t1_ParamLimits

0x1658,	// (0x0008cf94) list_pinb_item_pane_t1

0x5f58,	// (0x00091894) calc_display_pane

0x5f76,	// (0x000918b2) calc_paper_pane

0x5f92,	// (0x000918ce) grid_calc_pane

0x1358,	// (0x0008cc94) bg_list_pane_cp01

0x5fbe,	// (0x000918fa) clock_g1

0x5fc6,	// (0x00091902) clock_g2

0x0001,

0xf0b4,	// (0x0009a9f0) clock_g

0x5fd0,	// (0x0009190c) clock_t1_ParamLimits

0x5fd0,	// (0x0009190c) clock_t1

0x5fe5,	// (0x00091921) clock_t2_ParamLimits

0x5fe5,	// (0x00091921) clock_t2

0x5ff7,	// (0x00091933) clock_t3_ParamLimits

0x5ff7,	// (0x00091933) clock_t3

0x6009,	// (0x00091945) clock_t4_ParamLimits

0x6009,	// (0x00091945) clock_t4

0x601b,	// (0x00091957) clock_t5_ParamLimits

0x601b,	// (0x00091957) clock_t5

0x6030,	// (0x0009196c) clock_t6_ParamLimits

0x6030,	// (0x0009196c) clock_t6

0x6042,	// (0x0009197e) clock_t7_ParamLimits

0x6042,	// (0x0009197e) clock_t7

0x6054,	// (0x00091990) clock_t8_ParamLimits

0x6054,	// (0x00091990) clock_t8

0x606a,	// (0x000919a6) clock_t9_ParamLimits

0x606a,	// (0x000919a6) clock_t9

0x0008,

0xf0b9,	// (0x0009a9f5) clock_t_ParamLimits

0xf0b9,	// (0x0009a9f5) clock_t

0x166c,	// (0x0008cfa8) popup_clock_analogue_window_cp02

0x166c,	// (0x0008cfa8) popup_clock_digital_window_cp01

0x1358,	// (0x0008cc94) listscroll_help_pane

0x1358,	// (0x0008cc94) phob_pre_status_pane

0x1674,	// (0x0008cfb0) grid_qdial_pane

0x15b3,	// (0x0008ceef) listscroll_mce_pane

0x15b3,	// (0x0008ceef) bg_notes_pane

0x167e,	// (0x0008cfba) list_notes_pane

0x6080,	// (0x000919bc) scroll_pane_cp06

0x168c,	// (0x0008cfc8) bg_calc_paper_pane

0x608f,	// (0x000919cb) list_calc_pane

0x16a0,	// (0x0008cfdc) bg_calc_display_pane

0x60a9,	// (0x000919e5) calc_display_pane_t1

0x60be,	// (0x000919fa) calc_display_pane_t2

0x60d3,	// (0x00091a0f) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0009aa08) calc_display_pane_t

0x60e5,	// (0x00091a21) cell_calc_pane_ParamLimits

0x60e5,	// (0x00091a21) cell_calc_pane

0x16ac,	// (0x0008cfe8) bg_calc_paper_pane_g1

0x16c4,	// (0x0008d000) bg_calc_paper_pane_g2

0x16b8,	// (0x0008cff4) bg_calc_paper_pane_g3

0x16dc,	// (0x0008d018) bg_calc_paper_pane_g4

0x16d0,	// (0x0008d00c) bg_calc_paper_pane_g5

0x6112,	// (0x00091a4e) bg_calc_paper_pane_g6

0x6123,	// (0x00091a5f) bg_calc_paper_pane_g7

0x6134,	// (0x00091a70) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0009aa0f) bg_calc_paper_pane_g

0x6145,	// (0x00091a81) calc_bg_paper_pane_g9

0x6156,	// (0x00091a92) list_calc_item_pane_ParamLimits

0x6156,	// (0x00091a92) list_calc_item_pane

0x16e8,	// (0x0008d024) list_calc_item_pane_g1

0x6182,	// (0x00091abe) list_calc_item_pane_t1_ParamLimits

0x6182,	// (0x00091abe) list_calc_item_pane_t1

0x6194,	// (0x00091ad0) list_calc_item_pane_t2_ParamLimits

0x6194,	// (0x00091ad0) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0009aa20) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0009aa20) list_calc_item_pane_t

0x15cb,	// (0x0008cf07) cell_calc_pane_g1

0x16f5,	// (0x0008d031) grid_highlight_pane_cp02

0x61c4,	// (0x00091b00) bg_calc_display_pane_g1

0x61cd,	// (0x00091b09) bg_calc_display_pane_g2

0x61d7,	// (0x00091b13) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0009aa2a) bg_calc_display_pane_g

0x61e0,	// (0x00091b1c) cell_qdial_pane_ParamLimits

0x61e0,	// (0x00091b1c) cell_qdial_pane

0x61f4,	// (0x00091b30) cell_qdial_pane_g1_ParamLimits

0x61f4,	// (0x00091b30) cell_qdial_pane_g1

0x6201,	// (0x00091b3d) cell_qdial_pane_g2_ParamLimits

0x6201,	// (0x00091b3d) cell_qdial_pane_g2

0x1717,	// (0x0008d053) cell_qdial_pane_g3_ParamLimits

0x1717,	// (0x0008d053) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0009aa31) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0009aa31) cell_qdial_pane_g

0x621f,	// (0x00091b5b) cell_qdial_pane_t1_ParamLimits

0x621f,	// (0x00091b5b) cell_qdial_pane_t1

0x6237,	// (0x00091b73) cell_qdial_pane_t2_ParamLimits

0x6237,	// (0x00091b73) cell_qdial_pane_t2

0x624a,	// (0x00091b86) cell_qdial_pane_t3_ParamLimits

0x624a,	// (0x00091b86) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0009aa3a) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0009aa3a) cell_qdial_pane_t

0x1358,	// (0x0008cc94) grid_highlight_pane_cp04

0x1723,	// (0x0008d05f) thumbnail_qdial_pane_ParamLimits

0x1723,	// (0x0008d05f) thumbnail_qdial_pane

0x19af,	// (0x0008d2eb) list_help_pane

0x19b8,	// (0x0008d2f4) scroll_pane_cp02

0x625d,	// (0x00091b99) help_list_pane_t1_ParamLimits

0x625d,	// (0x00091b99) help_list_pane_t1

0x6293,	// (0x00091bcf) bg_notes_pane_g2

0x629b,	// (0x00091bd7) bg_notes_pane_g3

0x62a3,	// (0x00091bdf) notes_bg_pane_g1

0x62ab,	// (0x00091be7) notes_bg_pane_g4

0x62b3,	// (0x00091bef) notes_bg_pane_g5

0x62bb,	// (0x00091bf7) notes_bg_pane_g6

0x62c3,	// (0x00091bff) notes_bg_pane_g7

0x62cb,	// (0x00091c07) notes_bg_pane_g8

0x62d3,	// (0x00091c0f) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0009aa58) notes_bg_pane_g

0x62db,	// (0x00091c17) list_notes_text_pane_ParamLimits

0x62db,	// (0x00091c17) list_notes_text_pane

0x19df,	// (0x0008d31b) list_notes_text_pane_g1

0x6303,	// (0x00091c3f) list_notes_text_pane_t1

0x6311,	// (0x00091c4d) listscroll_cale_week_pane

0x6336,	// (0x00091c72) bg_cale_heading_pane

0x1a02,	// (0x0008d33e) bg_cale_pane_cp01

0x6356,	// (0x00091c92) cale_week_corner_pane

0x6370,	// (0x00091cac) cale_week_day_heading_pane

0x6390,	// (0x00091ccc) cale_week_scroll_pane_g1

0x63ab,	// (0x00091ce7) cale_week_scroll_pane_g2

0x63be,	// (0x00091cfa) cale_week_scroll_pane_g3

0x63d1,	// (0x00091d0d) cale_week_scroll_pane_g4

0x63e4,	// (0x00091d20) cale_week_scroll_pane_g5

0x63f7,	// (0x00091d33) cale_week_scroll_pane_g6

0x640a,	// (0x00091d46) cale_week_scroll_pane_g7

0x641f,	// (0x00091d5b) cale_week_scroll_pane_g8

0x6434,	// (0x00091d70) cale_week_scroll_pane_g9

0x6447,	// (0x00091d83) cale_week_scroll_pane_g10

0x645a,	// (0x00091d96) cale_week_scroll_pane_g11

0x646d,	// (0x00091da9) cale_week_scroll_pane_g12

0x6484,	// (0x00091dc0) cale_week_scroll_pane_g13

0x649f,	// (0x00091ddb) cale_week_scroll_pane_g14

0x64ba,	// (0x00091df6) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0009aa67) cale_week_scroll_pane_g

0x64ea,	// (0x00091e26) cale_week_time_pane

0x64ff,	// (0x00091e3b) grid_cale_week_pane

0x1a31,	// (0x0008d36d) scroll_pane_cp08

0x651e,	// (0x00091e5a) cell_cale_week_pane_ParamLimits

0x651e,	// (0x00091e5a) cell_cale_week_pane

0x6580,	// (0x00091ebc) cale_week_day_heading_pane_t1

0x659b,	// (0x00091ed7) cale_week_day_heading_pane_t2

0x65b6,	// (0x00091ef2) cale_week_day_heading_pane_t3

0x65d1,	// (0x00091f0d) cale_week_day_heading_pane_t4

0x65ec,	// (0x00091f28) cale_week_day_heading_pane_t5

0x6607,	// (0x00091f43) cale_week_day_heading_pane_t6

0x6622,	// (0x00091f5e) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0009aa88) cale_week_day_heading_pane_t

0x1a4e,	// (0x0008d38a) bg_cale_side_pane

0x663d,	// (0x00091f79) cale_week_time_pane_t1

0x6657,	// (0x00091f93) cale_week_time_pane_t2

0x6671,	// (0x00091fad) cale_week_time_pane_t3

0x668b,	// (0x00091fc7) cale_week_time_pane_t4

0x66a5,	// (0x00091fe1) cale_week_time_pane_t5

0x66bf,	// (0x00091ffb) cale_week_time_pane_t6

0x66dd,	// (0x00092019) cale_week_time_pane_t7

0x66ff,	// (0x0009203b) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0009aa97) cale_week_time_pane_t

0x6723,	// (0x0009205f) cell_cale_week_pane_g2

0x6747,	// (0x00092083) cell_cale_week_pane_g3_ParamLimits

0x6747,	// (0x00092083) cell_cale_week_pane_g3

0x1a5c,	// (0x0008d398) grid_highlight_pane_cp07

0x1a64,	// (0x0008d3a0) listscroll_gms_pane

0x1a6e,	// (0x0008d3aa) grid_gms_pane

0x1a77,	// (0x0008d3b3) listscroll_gms_pane_g1

0x1a7f,	// (0x0008d3bb) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0009aaa8) listscroll_gms_pane_g

0x675f,	// (0x0009209b) scroll_pane_cp010

0x676a,	// (0x000920a6) cell_gms_pane_ParamLimits

0x676a,	// (0x000920a6) cell_gms_pane

0x677d,	// (0x000920b9) cell_gms_pane_g1

0x1a87,	// (0x0008d3c3) cell_gms_pane_g2

0x19df,	// (0x0008d31b) cell_gms_pane_g3

0x1a8f,	// (0x0008d3cb) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0009aaad) cell_gms_pane_g

0x1a98,	// (0x0008d3d4) grid_highlight_pane_cp09

0x888e,	// (0x000941ca) phob_pre_status_pane_g1

0x8896,	// (0x000941d2) phob_pre_status_pane_g2

0x889e,	// (0x000941da) phob_pre_status_pane_g3

0x88a6,	// (0x000941e2) phob_pre_status_pane_g4

0x0004,

0xf53a,	// (0x0009ae76) phob_pre_status_pane_g

0x88b6,	// (0x000941f2) phob_pre_status_pane_t1

0x88c6,	// (0x00094202) phob_pre_status_pane_t2

0x88d6,	// (0x00094212) phob_pre_status_pane_t3

0x0002,

0xf545,	// (0x0009ae81) phob_pre_status_pane_t

0x1aa0,	// (0x0008d3dc) bg_list_pane_cp05

0x678d,	// (0x000920c9) grid_vorec_pane

0x6797,	// (0x000920d3) vorec_t1

0x67a5,	// (0x000920e1) vorec_t2

0x67b3,	// (0x000920ef) vorec_t3

0x67c1,	// (0x000920fd) vorec_t4

0xd917,	// (0x00099253) vorec_t5

0xd925,	// (0x00099261) vorec_t6

0x0004,

0xf17a,	// (0x0009aab6) vorec_t

0xd933,	// (0x0009926f) wait_bar_pane_cp01

0x67dd,	// (0x00092119) cell_vorec_pane_ParamLimits

0x67dd,	// (0x00092119) cell_vorec_pane

0x67f0,	// (0x0009212c) cell_vorec_pane_g1

0x1358,	// (0x0008cc94) grid_highlight_pane_cp05

0x1620,	// (0x0008cf5c) cams_zoom_pane

0x1620,	// (0x0008cf5c) image_vga_pane

0x163c,	// (0x0008cf78) main_camera_pane_g1

0x163c,	// (0x0008cf78) main_camera_pane_g2

0x163c,	// (0x0008cf78) main_camera_pane_g3

0x163c,	// (0x0008cf78) main_camera_pane_g4

0x163c,	// (0x0008cf78) main_camera_pane_g5

0x163c,	// (0x0008cf78) main_camera_pane_g6

0x163c,	// (0x0008cf78) main_camera_pane_g7

0x0007,

0xf185,	// (0x0009aac1) main_camera_pane_g

0x2397,	// (0x0008dcd3) main_camera_pane_t1

0x2397,	// (0x0008dcd3) main_camera_pane_t2

0x0001,

0xf196,	// (0x0009aad2) main_camera_pane_t

0x67fa,	// (0x00092136) cams_zoom_pane_cp_ParamLimits

0x67fa,	// (0x00092136) cams_zoom_pane_cp

0x6828,	// (0x00092164) image_cif_pane_ParamLimits

0x6828,	// (0x00092164) image_cif_pane

0x0f2d,	// (0x0008c869) image_subqcif_pane

0x6836,	// (0x00092172) main_video_pane_g1_ParamLimits

0x6836,	// (0x00092172) main_video_pane_g1

0x685e,	// (0x0009219a) main_video_pane_g2_ParamLimits

0x685e,	// (0x0009219a) main_video_pane_g2

0x6891,	// (0x000921cd) main_video_pane_g3_ParamLimits

0x6891,	// (0x000921cd) main_video_pane_g3

0x6891,	// (0x000921cd) main_video_pane_g4_ParamLimits

0x6891,	// (0x000921cd) main_video_pane_g4

0x68bf,	// (0x000921fb) main_video_pane_g5_ParamLimits

0x68bf,	// (0x000921fb) main_video_pane_g5

0x1abc,	// (0x0008d3f8) main_video_pane_g6_ParamLimits

0x1abc,	// (0x0008d3f8) main_video_pane_g6

0x0006,

0xf19b,	// (0x0009aad7) main_video_pane_g_ParamLimits

0xf19b,	// (0x0009aad7) main_video_pane_g

0x68db,	// (0x00092217) main_video_pane_t1_ParamLimits

0x68db,	// (0x00092217) main_video_pane_t1

0x1ad6,	// (0x0008d412) cams_zoom_pane_g1

0x1ad6,	// (0x0008d412) cams_zoom_pane_g2

0x1ad6,	// (0x0008d412) cams_zoom_pane_g3

0x1ad6,	// (0x0008d412) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0009aae6) cams_zoom_pane_g

0x6921,	// (0x0009225d) grid_cams_pane

0x692f,	// (0x0009226b) linegrid_cams_pane

0x693d,	// (0x00092279) cell_cams_pane_ParamLimits

0x693d,	// (0x00092279) cell_cams_pane

0x1ae0,	// (0x0008d41c) cams_burst_image_pane

0x1ae8,	// (0x0008d424) cell_cams_pane_g1

0x1358,	// (0x0008cc94) grid_highlight_pane_cp03

0x15cb,	// (0x0008cf07) mp_bg_pane_g1

0x0f2d,	// (0x0008c869) bg_list_pane_cp03

0x0f2d,	// (0x0008c869) bg_mp_pane

0x0f2d,	// (0x0008c869) grid_mp_pane

0x1ad6,	// (0x0008d412) media_player_g1

0x2005,	// (0x0008d941) media_player_t1

0x2005,	// (0x0008d941) media_player_t2

0x2005,	// (0x0008d941) media_player_t3

0x2005,	// (0x0008d941) media_player_t4

0x2005,	// (0x0008d941) media_player_t5

0x2005,	// (0x0008d941) media_player_t6

0x2005,	// (0x0008d941) media_player_t7

0x0006,

0xf524,	// (0x0009ae60) media_player_t

0x0f2d,	// (0x0008c869) wait_bar_pane_cp02

0xf509,	// (0x0009ae45) main_usb_pane_t

0x2271,	// (0x0008dbad) cell_mp_pane

0x15cb,	// (0x0008cf07) cell_mp_pane_g1

0x1358,	// (0x0008cc94) grid_highlight_pane_cp06

0x1af0,	// (0x0008d42c) grid_skin_colour_pane

0x1af8,	// (0x0008d434) list_highlight_pane_cp03

0x6950,	// (0x0009228c) skin_g1

0x1b00,	// (0x0008d43c) skin_t1

0x1b0f,	// (0x0008d44b) skin_t2

0x0001,

0xf1d8,	// (0x0009ab14) skin_t

0x695a,	// (0x00092296) cell_skin_colour_pane_ParamLimits

0x695a,	// (0x00092296) cell_skin_colour_pane

0x1b1d,	// (0x0008d459) cell_skin_colour_pane_g1

0x69de,	// (0x0009231a) call_video_g1_ParamLimits

0x69de,	// (0x0009231a) call_video_g1

0x69ee,	// (0x0009232a) call_video_g2_ParamLimits

0x69ee,	// (0x0009232a) call_video_g2

0x0001,

0xf1dd,	// (0x0009ab19) call_video_g_ParamLimits

0xf1dd,	// (0x0009ab19) call_video_g

0x6a48,	// (0x00092384) call_video_uplink_pane_cp1_ParamLimits

0x6a48,	// (0x00092384) call_video_uplink_pane_cp1

0x1b2f,	// (0x0008d46b) call_video_uplink_pane_cp2

0x6b14,	// (0x00092450) video_down_crop_pane_ParamLimits

0x6b14,	// (0x00092450) video_down_crop_pane

0x6c12,	// (0x0009254e) video_down_pane_ParamLimits

0x6c12,	// (0x0009254e) video_down_pane

0x1b37,	// (0x0008d473) video_down_subqcif_pane_ParamLimits

0x1b37,	// (0x0008d473) video_down_subqcif_pane

0x1b4f,	// (0x0008d48b) video_down_subqcif_pane_cp_ParamLimits

0x1b4f,	// (0x0008d48b) video_down_subqcif_pane_cp

0x1b75,	// (0x0008d4b1) im_reading_pane_ParamLimits

0x1b75,	// (0x0008d4b1) im_reading_pane

0x6d32,	// (0x0009266e) im_writing_pane_ParamLimits

0x6d32,	// (0x0009266e) im_writing_pane

0x6d50,	// (0x0009268c) im_reading_pane_t1

0x1b8f,	// (0x0008d4cb) list_im_pane

0x1ba0,	// (0x0008d4dc) scroll_pane_cp07

0x6da4,	// (0x000926e0) im_writing_pane_t1_ParamLimits

0x6da4,	// (0x000926e0) im_writing_pane_t1

0x1bb9,	// (0x0008d4f5) im_writing_pane_t2_ParamLimits

0x1bb9,	// (0x0008d4f5) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0009ab23) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0009ab23) im_writing_pane_t

0x1358,	// (0x0008cc94) input_focus_pane_cp04

0x1358,	// (0x0008cc94) input_focus_pane_cp05

0x6db9,	// (0x000926f5) list_im_single_pane_ParamLimits

0x6db9,	// (0x000926f5) list_im_single_pane

0x6ddd,	// (0x00092719) list_single_im_pane_t1

0x1aa0,	// (0x0008d3dc) blid_accuracy_pane

0x1aa0,	// (0x0008d3dc) blid_compass_pane

0x45d5,	// (0x0008ff11) main_location_t1

0x45d5,	// (0x0008ff11) main_location_t2

0x45d5,	// (0x0008ff11) main_location_t3

0x0002,

0xf533,	// (0x0009ae6f) main_location_t

0x1358,	// (0x0008cc94) aid_levels_location

0x15cb,	// (0x0008cf07) blid_accuracy_pane_g1

0x15cb,	// (0x0008cf07) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0009ab77) blid_accuracy_pane_g

0x1c01,	// (0x0008d53d) wml_content_pane

0x1c3f,	// (0x0008d57b) wml_button_pane_ParamLimits

0x1c3f,	// (0x0008d57b) wml_button_pane

0x6dec,	// (0x00092728) wml_list_single_large_pane_ParamLimits

0x6dec,	// (0x00092728) wml_list_single_large_pane

0x6e16,	// (0x00092752) wml_list_single_medium_pane_ParamLimits

0x6e16,	// (0x00092752) wml_list_single_medium_pane

0x6e47,	// (0x00092783) wml_list_single_small_pane_ParamLimits

0x6e47,	// (0x00092783) wml_list_single_small_pane

0x1c53,	// (0x0008d58f) wml_selection_box_pane_ParamLimits

0x1c53,	// (0x0008d58f) wml_selection_box_pane

0x1c66,	// (0x0008d5a2) wml_list_single_pane_t1

0x1c75,	// (0x0008d5b1) wml_list_single_medium_pane_t1

0x1c84,	// (0x0008d5c0) wml_list_single_large_pane_t1

0x1c93,	// (0x0008d5cf) input_focus_pane_cp02_ParamLimits

0x1c93,	// (0x0008d5cf) input_focus_pane_cp02

0x1ca6,	// (0x0008d5e2) wml_selection_box_pane_g1

0x1caf,	// (0x0008d5eb) wml_selection_box_pane_t1_ParamLimits

0x1caf,	// (0x0008d5eb) wml_selection_box_pane_t1

0x15b3,	// (0x0008ceef) bg_wml_button_pane_ParamLimits

0x15b3,	// (0x0008ceef) bg_wml_button_pane

0x1cc7,	// (0x0008d603) wml_button_pane_g1

0x1ccf,	// (0x0008d60b) wml_button_pane_t1

0x1cc7,	// (0x0008d603) wml_button_bg_pane_g1

0x1cdf,	// (0x0008d61b) wml_button_bg_pane_g2

0x1ce7,	// (0x0008d623) wml_button_bg_pane_g3

0x1cef,	// (0x0008d62b) wml_button_bg_pane_g4

0x1cf7,	// (0x0008d633) wml_button_bg_pane_g5

0x1cff,	// (0x0008d63b) wml_button_bg_pane_g6

0x1d07,	// (0x0008d643) wml_button_bg_pane_g7

0x1d0f,	// (0x0008d64b) wml_button_bg_pane_g8

0x1d17,	// (0x0008d653) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0009ab28) wml_button_bg_pane_g

0x6e81,	// (0x000927bd) bg_list_pane_cp02

0x1d1f,	// (0x0008d65b) mce_header_pane_ParamLimits

0x1d1f,	// (0x0008d65b) mce_header_pane

0x1d35,	// (0x0008d671) mce_icon_pane

0x1d35,	// (0x0008d671) mce_image_pane

0x1d3e,	// (0x0008d67a) mce_text_pane_ParamLimits

0x1d3e,	// (0x0008d67a) mce_text_pane

0x6e8b,	// (0x000927c7) scroll_pane_cp03

0x1c37,	// (0x0008d573) scroll_pane_cp04

0x1d51,	// (0x0008d68d) scroll_pane_cp05_ParamLimits

0x1d51,	// (0x0008d68d) scroll_pane_cp05

0x6e95,	// (0x000927d1) mce_header_field_pane_ParamLimits

0x6e95,	// (0x000927d1) mce_header_field_pane

0x6eb5,	// (0x000927f1) mce_header_field_pane_2_ParamLimits

0x6eb5,	// (0x000927f1) mce_header_field_pane_2

0x6ecb,	// (0x00092807) mce_header_field_pane_3

0x6ed3,	// (0x0009280f) list_single_mce_message_pane_ParamLimits

0x6ed3,	// (0x0009280f) list_single_mce_message_pane

0x6efe,	// (0x0009283a) list_single_mce_smart_pane_ParamLimits

0x6efe,	// (0x0009283a) list_single_mce_smart_pane

0x1d5d,	// (0x0008d699) input_focus_pane_cp03

0x1d66,	// (0x0008d6a2) list_header_data_pane

0x6f34,	// (0x00092870) mce_header_field_pane_t1

0x6f42,	// (0x0009287e) list_single_mce_header_pane_ParamLimits

0x6f42,	// (0x0009287e) list_single_mce_header_pane

0x1d6e,	// (0x0008d6aa) list_single_mce_header_pane_t1

0x1d7d,	// (0x0008d6b9) list_single_mce_message_pane_g1

0x1d85,	// (0x0008d6c1) list_single_mce_message_pane_t1

0x6f94,	// (0x000928d0) bg_cale_heading_pane_cp01_ParamLimits

0x6f94,	// (0x000928d0) bg_cale_heading_pane_cp01

0x1d93,	// (0x0008d6cf) bg_cale_pane_cp02_ParamLimits

0x1d93,	// (0x0008d6cf) bg_cale_pane_cp02

0x6fe2,	// (0x0009291e) cale_month_corner_pane

0x7001,	// (0x0009293d) cale_month_day_heading_pane_ParamLimits

0x7001,	// (0x0009293d) cale_month_day_heading_pane

0x7067,	// (0x000929a3) cale_month_pane_g1_ParamLimits

0x7067,	// (0x000929a3) cale_month_pane_g1

0x70aa,	// (0x000929e6) cale_month_pane_g2_ParamLimits

0x70aa,	// (0x000929e6) cale_month_pane_g2

0x70e2,	// (0x00092a1e) cale_month_pane_g3_ParamLimits

0x70e2,	// (0x00092a1e) cale_month_pane_g3

0x712e,	// (0x00092a6a) cale_month_pane_g4_ParamLimits

0x712e,	// (0x00092a6a) cale_month_pane_g4

0x717a,	// (0x00092ab6) cale_month_pane_g5_ParamLimits

0x717a,	// (0x00092ab6) cale_month_pane_g5

0x71c6,	// (0x00092b02) cale_month_pane_g6_ParamLimits

0x71c6,	// (0x00092b02) cale_month_pane_g6

0x7212,	// (0x00092b4e) cale_month_pane_g7_ParamLimits

0x7212,	// (0x00092b4e) cale_month_pane_g7

0x7276,	// (0x00092bb2) cale_month_pane_g8_ParamLimits

0x7276,	// (0x00092bb2) cale_month_pane_g8

0x72da,	// (0x00092c16) cale_month_pane_g9_ParamLimits

0x72da,	// (0x00092c16) cale_month_pane_g9

0x7338,	// (0x00092c74) cale_month_pane_g10_ParamLimits

0x7338,	// (0x00092c74) cale_month_pane_g10

0x7394,	// (0x00092cd0) cale_month_pane_g11_ParamLimits

0x7394,	// (0x00092cd0) cale_month_pane_g11

0x73e8,	// (0x00092d24) cale_month_pane_g12_ParamLimits

0x73e8,	// (0x00092d24) cale_month_pane_g12

0x743e,	// (0x00092d7a) cale_month_pane_g13_ParamLimits

0x743e,	// (0x00092d7a) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0009ab3b) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0009ab3b) cale_month_pane_g

0x7494,	// (0x00092dd0) cale_month_week_pane

0x74b8,	// (0x00092df4) grid_cale_month_pane_ParamLimits

0x74b8,	// (0x00092df4) grid_cale_month_pane

0x7511,	// (0x00092e4d) cale_month_day_heading_pane_t1

0x7597,	// (0x00092ed3) cale_month_day_heading_pane_t2

0x7610,	// (0x00092f4c) cale_month_day_heading_pane_t3

0x7689,	// (0x00092fc5) cale_month_day_heading_pane_t4

0x7702,	// (0x0009303e) cale_month_day_heading_pane_t5

0x777b,	// (0x000930b7) cale_month_day_heading_pane_t6

0x77f4,	// (0x00093130) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0009ab56) cale_month_day_heading_pane_t

0x1a4e,	// (0x0008d38a) bg_cale_side_pane_cp01

0x7885,	// (0x000931c1) cale_month_week_pane_t1

0x789e,	// (0x000931da) cale_month_week_pane_t2

0x78b7,	// (0x000931f3) cale_month_week_pane_t3

0x78d0,	// (0x0009320c) cale_month_week_pane_t4

0x78e9,	// (0x00093225) cale_month_week_pane_t5

0x790a,	// (0x00093246) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0009ab65) cale_month_week_pane_t

0x792b,	// (0x00093267) cell_cale_month_pane_ParamLimits

0x792b,	// (0x00093267) cell_cale_month_pane

0x7a4d,	// (0x00093389) cell_cale_month_pane_g1

0x7a59,	// (0x00093395) cell_cale_month_pane_t1_ParamLimits

0x7a59,	// (0x00093395) cell_cale_month_pane_t1

0x1a5c,	// (0x0008d398) grid_highlight_pane_cp08

0x15cb,	// (0x0008cf07) main_smil_g1

0x7a85,	// (0x000933c1) smil_status_pane

0x1dd2,	// (0x0008d70e) smil_text_pane

0x44ed,	// (0x0008fe29) bg_popup_call3_rect_pane_g8

0x44f5,	// (0x0008fe31) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x0009ae03) bg_popup_call3_rect_pane_g

0x46b1,	// (0x0008ffed) smil_status_volume_pane_g1

0x1ddc,	// (0x0008d718) smil_status_pane_t1

0x8c3b,	// (0x00094577) volume_smil_pane

0x1df3,	// (0x0008d72f) list_smil_text_pane

0x7a98,	// (0x000933d4) scroll_pane_cp011

0x7aa3,	// (0x000933df) smil_text_list_pane_t1_ParamLimits

0x7aa3,	// (0x000933df) smil_text_list_pane_t1

0x7b1b,	// (0x00093457) aid_volume_smil_ParamLimits

0x7b1b,	// (0x00093457) aid_volume_smil

0x15cb,	// (0x0008cf07) smil_volume_pane_g1

0x15cb,	// (0x0008cf07) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0009ab77) smil_volume_pane_g

0x6311,	// (0x00091c4d) listscroll_cale_day_pane

0x1dfd,	// (0x0008d739) bg_cale_pane

0x1e15,	// (0x0008d751) list_cale_pane

0x1e38,	// (0x0008d774) scroll_pane_cp09

0x1e49,	// (0x0008d785) cale_bg_pane_g1

0x1e51,	// (0x0008d78d) cale_bg_pane_g2

0x1e59,	// (0x0008d795) cale_bg_pane_g3

0x1e61,	// (0x0008d79d) cale_bg_pane_g4

0x1e69,	// (0x0008d7a5) cale_bg_pane_g5

0x1e71,	// (0x0008d7ad) cale_bg_pane_g6

0x1e79,	// (0x0008d7b5) cale_bg_pane_g7

0x1e81,	// (0x0008d7bd) cale_bg_pane_g8

0x1e89,	// (0x0008d7c5) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0009ab7c) cale_bg_pane_g

0x7b3d,	// (0x00093479) list_cale_time_pane_ParamLimits

0x7b3d,	// (0x00093479) list_cale_time_pane

0x1e99,	// (0x0008d7d5) list_cale_time_pane_g1_ParamLimits

0x1e99,	// (0x0008d7d5) list_cale_time_pane_g1

0x1ea5,	// (0x0008d7e1) list_cale_time_pane_g2_ParamLimits

0x1ea5,	// (0x0008d7e1) list_cale_time_pane_g2

0x7b5f,	// (0x0009349b) list_cale_time_pane_g3_ParamLimits

0x7b5f,	// (0x0009349b) list_cale_time_pane_g3

0x7b6d,	// (0x000934a9) list_cale_time_pane_g4_ParamLimits

0x7b6d,	// (0x000934a9) list_cale_time_pane_g4

0x7b7b,	// (0x000934b7) list_cale_time_pane_g5_ParamLimits

0x7b7b,	// (0x000934b7) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0009ab8f) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0009ab8f) list_cale_time_pane_g

0x1ebf,	// (0x0008d7fb) list_cale_time_pane_t1_ParamLimits

0x1ebf,	// (0x0008d7fb) list_cale_time_pane_t1

0x1ee7,	// (0x0008d823) list_cale_time_pane_t2_ParamLimits

0x1ee7,	// (0x0008d823) list_cale_time_pane_t2

0x7e1e,	// (0x0009375a) aid_blid_cardinal_pane

0x7e60,	// (0x0009379c) compass_pane_t4

0x1f0f,	// (0x0008d84b) list_cale_time_pane_t4_ParamLimits

0x1f0f,	// (0x0008d84b) list_cale_time_pane_t4

0x7e6e,	// (0x000937aa) compass_pane_t5

0x7e7e,	// (0x000937ba) compass_pane_t6

0x7e8c,	// (0x000937c8) compass_pane_t7

0x23d6,	// (0x0008dd12) navi_pane_cc_t1

0x25b3,	// (0x0008deef) aid_phob_thumbnail_center_pane

0x832c,	// (0x00093c68) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0009ab9c) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0009ab9c) list_cale_time_pane_t

0x0faf,	// (0x0008c8eb) bg_popup_window_pane_cp02_ParamLimits

0x0faf,	// (0x0008c8eb) bg_popup_window_pane_cp02

0x1f37,	// (0x0008d873) heading_pane_cp01_ParamLimits

0x1f37,	// (0x0008d873) heading_pane_cp01

0x1f43,	// (0x0008d87f) loc_req_pane_ParamLimits

0x1f43,	// (0x0008d87f) loc_req_pane

0x1f53,	// (0x0008d88f) loc_type_pane_ParamLimits

0x1f53,	// (0x0008d88f) loc_type_pane

0x1f65,	// (0x0008d8a1) loc_type_pane_t1_ParamLimits

0x1f65,	// (0x0008d8a1) loc_type_pane_t1

0x1f77,	// (0x0008d8b3) loc_type_pane_t2_ParamLimits

0x1f77,	// (0x0008d8b3) loc_type_pane_t2

0x1f89,	// (0x0008d8c5) loc_type_pane_t3_ParamLimits

0x1f89,	// (0x0008d8c5) loc_type_pane_t3

0x0002,

0xf267,	// (0x0009aba3) loc_type_pane_t_ParamLimits

0xf267,	// (0x0009aba3) loc_type_pane_t

0x1f9b,	// (0x0008d8d7) list_loc_req_pane

0x1fa5,	// (0x0008d8e1) scroll_pane_cp012

0x7b89,	// (0x000934c5) list_single_loc_request_popup_menu_pane_ParamLimits

0x7b89,	// (0x000934c5) list_single_loc_request_popup_menu_pane

0x1fb0,	// (0x0008d8ec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1fb0,	// (0x0008d8ec) list_single_loc_request_popup_menu_pane_g1

0x1fbc,	// (0x0008d8f8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1fbc,	// (0x0008d8f8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0009abaa) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0009abaa) list_single_loc_request_popup_menu_pane_g

0x1fc8,	// (0x0008d904) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1fc8,	// (0x0008d904) list_single_loc_request_popup_menu_pane_t1

0x7b9b,	// (0x000934d7) bg_popup_window_pane_cp03_ParamLimits

0x7b9b,	// (0x000934d7) bg_popup_window_pane_cp03

0x7ba9,	// (0x000934e5) heading_loc_req_pane_ParamLimits

0x7ba9,	// (0x000934e5) heading_loc_req_pane

0x7bb5,	// (0x000934f1) popup_dyc_status_message_window_g1_ParamLimits

0x7bb5,	// (0x000934f1) popup_dyc_status_message_window_g1

0x7bc1,	// (0x000934fd) popup_dyc_status_message_window_t1_ParamLimits

0x7bc1,	// (0x000934fd) popup_dyc_status_message_window_t1

0x7bd3,	// (0x0009350f) popup_dyc_status_message_window_t2_ParamLimits

0x7bd3,	// (0x0009350f) popup_dyc_status_message_window_t2

0x7be5,	// (0x00093521) popup_dyc_status_message_window_t3_ParamLimits

0x7be5,	// (0x00093521) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0009abaf) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0009abaf) popup_dyc_status_message_window_t

0x1358,	// (0x0008cc94) bg_heading_pane_cp01

0x1fde,	// (0x0008d91a) heading_loc_req_pane_g1

0x1fe6,	// (0x0008d922) heading_loc_req_pane_g2

0x1fee,	// (0x0008d92a) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0009abb6) heading_loc_req_pane_g

0x1ff6,	// (0x0008d932) heading_loc_req_pane_t1

0x2015,	// (0x0008d951) bg_popup_sub_pane_cp01_ParamLimits

0x2015,	// (0x0008d951) bg_popup_sub_pane_cp01

0x2023,	// (0x0008d95f) popup_cale_events_window_g1_ParamLimits

0x2023,	// (0x0008d95f) popup_cale_events_window_g1

0x2043,	// (0x0008d97f) popup_cale_events_window_g2_ParamLimits

0x2043,	// (0x0008d97f) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0009abd8) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0009abd8) popup_cale_events_window_g

0x2063,	// (0x0008d99f) popup_cale_events_window_t1_ParamLimits

0x2063,	// (0x0008d99f) popup_cale_events_window_t1

0x2075,	// (0x0008d9b1) popup_cale_events_window_t2_ParamLimits

0x2075,	// (0x0008d9b1) popup_cale_events_window_t2

0x20b3,	// (0x0008d9ef) popup_cale_events_window_t3_ParamLimits

0x20b3,	// (0x0008d9ef) popup_cale_events_window_t3

0x20ed,	// (0x0008da29) popup_cale_events_window_t4_ParamLimits

0x20ed,	// (0x0008da29) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x0009abdd) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x0009abdd) popup_cale_events_window_t

0x7c0f,	// (0x0009354b) call_type_pane

0x3cf8,	// (0x0008f634) popup_call_status_window_g1

0x7c1b,	// (0x00093557) popup_call_status_window_g2

0x7c27,	// (0x00093563) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0009abe6) popup_call_status_window_g

0x2123,	// (0x0008da5f) call_type_pane_g1

0x212c,	// (0x0008da68) call_type_pane_g2

0x0001,

0xf2b1,	// (0x0009abed) call_type_pane_g

0x1358,	// (0x0008cc94) bg_popup_sub_pane_cp02

0x2135,	// (0x0008da71) listscroll_popup_wml_pane

0x213d,	// (0x0008da79) list_wml_pane

0x2147,	// (0x0008da83) scroll_pane_cp013

0x2152,	// (0x0008da8e) list_single_graphic_popup_wml_pane_ParamLimits

0x2152,	// (0x0008da8e) list_single_graphic_popup_wml_pane

0x15cb,	// (0x0008cf07) list_single_graphic_popup_wml_pane_g1

0x2166,	// (0x0008daa2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x0009abf2) list_single_graphic_popup_wml_pane_g

0x216e,	// (0x0008daaa) list_single_graphic_popup_wml_pane_t1

0x217c,	// (0x0008dab8) aid_call_pane

0x15ab,	// (0x0008cee7) popup_clock_analogue_window_g1

0x15ab,	// (0x0008cee7) popup_clock_analogue_window_g2

0x7c33,	// (0x0009356f) popup_clock_analogue_window_g3

0x7c33,	// (0x0009356f) popup_clock_analogue_window_g4

0x15cb,	// (0x0008cf07) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0009abf7) popup_clock_analogue_window_g

0x7c3b,	// (0x00093577) popup_clock_analogue_window_t1

0x7c49,	// (0x00093585) clock_digital_number_pane_ParamLimits

0x7c49,	// (0x00093585) clock_digital_number_pane

0x7c55,	// (0x00093591) clock_digital_number_pane_cp02_ParamLimits

0x7c55,	// (0x00093591) clock_digital_number_pane_cp02

0x7c61,	// (0x0009359d) clock_digital_number_pane_cp03_ParamLimits

0x7c61,	// (0x0009359d) clock_digital_number_pane_cp03

0x7c6d,	// (0x000935a9) clock_digital_number_pane_cp04_ParamLimits

0x7c6d,	// (0x000935a9) clock_digital_number_pane_cp04

0x7c7d,	// (0x000935b9) clock_digital_separator_pane_ParamLimits

0x7c7d,	// (0x000935b9) clock_digital_separator_pane

0x7c89,	// (0x000935c5) popup_clock_digital_window_t1

0x15cb,	// (0x0008cf07) clock_digital_number_pane_g1

0x15cb,	// (0x0008cf07) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0009ab77) clock_digital_number_pane_g

0x15cb,	// (0x0008cf07) clock_digital_separator_pane_g1

0x15cb,	// (0x0008cf07) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0009ab77) clock_digital_separator_pane_g

0x1358,	// (0x0008cc94) bg_popup_window_pane_cp04

0x218c,	// (0x0008dac8) heading_pane_cp03

0x1aa0,	// (0x0008d3dc) listscroll_popup_gms_pane

0x1358,	// (0x0008cc94) grid_large_graphic_popup_pane

0x2195,	// (0x0008dad1) listscroll_popup_gms_pane_g1

0x219e,	// (0x0008dada) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x0009ac02) listscroll_popup_gms_pane_g

0x21a7,	// (0x0008dae3) scroll_pane_cp014

0x1620,	// (0x0008cf5c) cell_large_graphic_popup_pane_ParamLimits

0x1620,	// (0x0008cf5c) cell_large_graphic_popup_pane

0x162e,	// (0x0008cf6a) cell_large_graphic_popup_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) cell_large_graphic_popup_pane_g1

0x21b0,	// (0x0008daec) cell_large_graphic_popup_pane_g2_ParamLimits

0x21b0,	// (0x0008daec) cell_large_graphic_popup_pane_g2

0x21be,	// (0x0008dafa) cell_large_graphic_popup_pane_g3_ParamLimits

0x21be,	// (0x0008dafa) cell_large_graphic_popup_pane_g3

0x21cc,	// (0x0008db08) cell_large_graphic_popup_pane_g4_ParamLimits

0x21cc,	// (0x0008db08) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0009ac07) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0009ac07) cell_large_graphic_popup_pane_g

0x1358,	// (0x0008cc94) grid_highlight_pane_cp010

0x15cb,	// (0x0008cf07) bg_popup_call_pane_g1

0x21dd,	// (0x0008db19) list_single_graphic_popup_conf_pane_ParamLimits

0x21dd,	// (0x0008db19) list_single_graphic_popup_conf_pane

0x21f0,	// (0x0008db2c) list_highlight_pane_cp01

0x21f9,	// (0x0008db35) list_single_graphic_popup_conf_pane_g1

0x2201,	// (0x0008db3d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x0009ac10) list_single_graphic_popup_conf_pane_g

0x2209,	// (0x0008db45) list_single_graphic_popup_conf_pane_t1

0x2217,	// (0x0008db53) linegrid_cams_pane_g1

0x7ca6,	// (0x000935e2) linegrid_cams_pane_g2

0x19df,	// (0x0008d31b) linegrid_cams_pane_g3

0x2220,	// (0x0008db5c) linegrid_cams_pane_g4

0x7caf,	// (0x000935eb) linegrid_cams_pane_g5

0x7cb8,	// (0x000935f4) linegrid_cams_pane_g6

0x1a8f,	// (0x0008d3cb) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x0009ac15) linegrid_cams_pane_g

0x2229,	// (0x0008db65) popup_clock_analogue_window

0x2229,	// (0x0008db65) popup_clock_digital_window

0x1358,	// (0x0008cc94) popup_phob_thumbnail_window

0x15cb,	// (0x0008cf07) call_video_uplink_pane_g1

0x2232,	// (0x0008db6e) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x0009ac24) call_video_uplink_pane_g

0x223a,	// (0x0008db76) video_uplink_pane

0x2242,	// (0x0008db7e) mce_image_pane_g1

0x7cc1,	// (0x000935fd) mce_image_pane_g2

0x7ccb,	// (0x00093607) mce_image_pane_g3

0x7cd3,	// (0x0009360f) mce_image_pane_g4

0x7cdb,	// (0x00093617) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x0009ac29) mce_image_pane_g

0x224c,	// (0x0008db88) control_top_pane_stacon_cp01_ParamLimits

0x224c,	// (0x0008db88) control_top_pane_stacon_cp01

0x2260,	// (0x0008db9c) uni_indicator_pane_stacon_cp01_ParamLimits

0x2260,	// (0x0008db9c) uni_indicator_pane_stacon_cp01

0x2271,	// (0x0008dbad) bg_popup_sub_pane_cp03

0x227b,	// (0x0008dbb7) chi_dic_find_pane

0x7ce3,	// (0x0009361f) listscroll_chi_dic_pane

0x2283,	// (0x0008dbbf) main_pane_chidic_g1

0x228b,	// (0x0008dbc7) chi_dic_find_pane_t1

0x2299,	// (0x0008dbd5) find_chidic_pane

0x22a2,	// (0x0008dbde) chi_dic_list_pane_ParamLimits

0x22a2,	// (0x0008dbde) chi_dic_list_pane

0x22b3,	// (0x0008dbef) scroll_pane_cp020

0x22bb,	// (0x0008dbf7) find_chidic_pane_t1

0x1358,	// (0x0008cc94) input_focus_pane_cp06

0x7cf7,	// (0x00093633) list_chi_dic_pane_ParamLimits

0x7cf7,	// (0x00093633) list_chi_dic_pane

0x7d11,	// (0x0009364d) list_chi_dic_pane_t1_ParamLimits

0x7d11,	// (0x0009364d) list_chi_dic_pane_t1

0x1358,	// (0x0008cc94) list_highlight_pane_cp020

0x22ca,	// (0x0008dc06) bg_cale_heading_pane_g1

0x7d24,	// (0x00093660) bg_cale_heading_pane_g2

0x7d2c,	// (0x00093668) bg_cale_heading_pane_g3

0x7d34,	// (0x00093670) bg_cale_heading_pane_g4

0x7d3e,	// (0x0009367a) bg_cale_heading_pane_g5

0x7d48,	// (0x00093684) bg_cale_heading_pane_g6

0x7d50,	// (0x0009368c) bg_cale_heading_pane_g7

0x7d58,	// (0x00093694) bg_cale_heading_pane_g8

0x7d62,	// (0x0009369e) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x0009ac34) bg_cale_heading_pane_g

0x22ca,	// (0x0008dc06) bg_cale_side_pane_g1

0x7d6c,	// (0x000936a8) bg_cale_side_pane_g2

0x7d76,	// (0x000936b2) bg_cale_side_pane_g3

0x7d80,	// (0x000936bc) bg_cale_side_pane_g4

0x7d8a,	// (0x000936c6) bg_cale_side_pane_g5

0x7d94,	// (0x000936d0) bg_cale_side_pane_g6

0x7d9e,	// (0x000936da) bg_cale_side_pane_g7

0x7da8,	// (0x000936e4) bg_cale_side_pane_g8

0x7db0,	// (0x000936ec) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x0009ac47) bg_cale_side_pane_g

0x7db8,	// (0x000936f4) popup_call_status_window_ParamLimits

0x7db8,	// (0x000936f4) popup_call_status_window

0x22d2,	// (0x0008dc0e) stacon_top_pane

0x22da,	// (0x0008dc16) status_pane_ParamLimits

0x22da,	// (0x0008dc16) status_pane

0x22ef,	// (0x0008dc2b) status_small_pane

0x22f7,	// (0x0008dc33) control_pane

0x1358,	// (0x0008cc94) stacon_bottom_pane

0x22ff,	// (0x0008dc3b) list_single_mce_smart_pane_t1_ParamLimits

0x22ff,	// (0x0008dc3b) list_single_mce_smart_pane_t1

0x2312,	// (0x0008dc4e) list_single_mce_smart_pane_t2_ParamLimits

0x2312,	// (0x0008dc4e) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x0009ac5a) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x0009ac5a) list_single_mce_smart_pane_t

0x7dc4,	// (0x00093700) compass_pane

0x7dd0,	// (0x0009370c) main_location2_pane_t1

0x7de4,	// (0x00093720) main_location2_pane_t2

0x7df8,	// (0x00093734) main_location2_pane_t3

0x0003,

0xf323,	// (0x0009ac5f) main_location2_pane_t

0x2331,	// (0x0008dc6d) compass_pane_g1_ParamLimits

0x2331,	// (0x0008dc6d) compass_pane_g1

0x7e42,	// (0x0009377e) compass_pane_t1

0x7e51,	// (0x0009378d) compass_pane_t2

0x0005,

0xf32c,	// (0x0009ac68) compass_pane_t

0x7e9c,	// (0x000937d8) text_secondary_cp61

0x23cd,	// (0x0008dd09) navi_pane_cams_g5

0x2449,	// (0x0008dd85) navi_pane_im_t1

0x2457,	// (0x0008dd93) navi_pane_mp_g1_ParamLimits

0x2457,	// (0x0008dd93) navi_pane_mp_g1

0x246b,	// (0x0008dda7) navi_pane_mp_g2_ParamLimits

0x246b,	// (0x0008dda7) navi_pane_mp_g2

0x2477,	// (0x0008ddb3) navi_pane_mp_g3_ParamLimits

0x2477,	// (0x0008ddb3) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0009ac7c) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0009ac7c) navi_pane_mp_g

0x2483,	// (0x0008ddbf) navi_pane_mp_t1

0x2491,	// (0x0008ddcd) navi_pane_mp_t2

0x0002,

0xf347,	// (0x0009ac83) navi_pane_mp_t

0x24fc,	// (0x0008de38) navi_pane_vt_g1

0x2483,	// (0x0008ddbf) navi_pane_vt_t1

0x2504,	// (0x0008de40) navi_slider_pane

0x1aa0,	// (0x0008d3dc) zooming_pane

0x2514,	// (0x0008de50) navi_slider_pane_g1

0x7ed7,	// (0x00093813) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0009ac8a) navi_slider_pane_g

0x2538,	// (0x0008de74) aid_levels_zoom

0x2540,	// (0x0008de7c) zooming_pane_g1

0x2548,	// (0x0008de84) zooming_pane_g2

0x2548,	// (0x0008de84) zooming_pane_g3

0x0002,

0xf35d,	// (0x0009ac99) zooming_pane_g

0x2550,	// (0x0008de8c) level_10_zoom

0x2559,	// (0x0008de95) level_11_zoom

0x2562,	// (0x0008de9e) level_1_zoom

0x256b,	// (0x0008dea7) level_2_zoom

0x2574,	// (0x0008deb0) level_3_zoom

0x257d,	// (0x0008deb9) level_4_zoom

0x2586,	// (0x0008dec2) level_5_zoom

0x258f,	// (0x0008decb) level_6_zoom

0x2598,	// (0x0008ded4) level_7_zoom

0x25a1,	// (0x0008dedd) level_8_zoom

0x25aa,	// (0x0008dee6) level_9_zoom

0x25bb,	// (0x0008def7) popup_phob_thumbnail_window_g1

0x25c3,	// (0x0008deff) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0009aca0) popup_phob_thumbnail_window_g

0x88e6,	// (0x00094222) level_1_location

0x88ee,	// (0x0009422a) level_2_location

0x88f6,	// (0x00094232) level_3_location

0x8900,	// (0x0009423c) level_4_location

0x1aa0,	// (0x0008d3dc) level_5_location

0x7ee9,	// (0x00093825) mce_icon_pane_g1

0x7ef1,	// (0x0009382d) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0009aca5) mce_icon_pane_g

0x7ef9,	// (0x00093835) main_mup_pane_g1_ParamLimits

0x7ef9,	// (0x00093835) main_mup_pane_g1

0x164a,	// (0x0008cf86) main_mup_pane_g2_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g2

0x164a,	// (0x0008cf86) main_mup_pane_g3_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g3

0x164a,	// (0x0008cf86) main_mup_pane_g4_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g4

0x164a,	// (0x0008cf86) main_mup_pane_g5_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g5

0x164a,	// (0x0008cf86) main_mup_pane_g6_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g6

0x164a,	// (0x0008cf86) main_mup_pane_g7_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g7

0x164a,	// (0x0008cf86) main_mup_pane_g8_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g8

0x164a,	// (0x0008cf86) main_mup_pane_g9_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g9

0x164a,	// (0x0008cf86) main_mup_pane_g10_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g10

0x164a,	// (0x0008cf86) main_mup_pane_g11_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g11

0x163c,	// (0x0008cf78) main_mup_pane_g12_ParamLimits

0x163c,	// (0x0008cf78) main_mup_pane_g12

0x164a,	// (0x0008cf86) main_mup_pane_g13_ParamLimits

0x164a,	// (0x0008cf86) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0009acaa) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0009acaa) main_mup_pane_g

0x1658,	// (0x0008cf94) main_mup_pane_t1_ParamLimits

0x1658,	// (0x0008cf94) main_mup_pane_t1

0x1658,	// (0x0008cf94) main_mup_pane_t2_ParamLimits

0x1658,	// (0x0008cf94) main_mup_pane_t2

0x1658,	// (0x0008cf94) main_mup_pane_t3_ParamLimits

0x1658,	// (0x0008cf94) main_mup_pane_t3

0x2397,	// (0x0008dcd3) main_mup_pane_t4_ParamLimits

0x2397,	// (0x0008dcd3) main_mup_pane_t4

0x2397,	// (0x0008dcd3) main_mup_pane_t5_ParamLimits

0x2397,	// (0x0008dcd3) main_mup_pane_t5

0x1aa8,	// (0x0008d3e4) main_mup_pane_t6_ParamLimits

0x1aa8,	// (0x0008d3e4) main_mup_pane_t6

0x0005,

0xf389,	// (0x0009acc5) main_mup_pane_t_ParamLimits

0xf389,	// (0x0009acc5) main_mup_pane_t

0x0f37,	// (0x0008c873) mup_progress_pane_ParamLimits

0x0f37,	// (0x0008c873) mup_progress_pane

0x4285,	// (0x0008fbc1) mup_visualizer_pane_ParamLimits

0x4285,	// (0x0008fbc1) mup_visualizer_pane

0x4285,	// (0x0008fbc1) mup_volume_pane_ParamLimits

0x4285,	// (0x0008fbc1) mup_volume_pane

0x163c,	// (0x0008cf78) mup_visualizer_pane_g1_ParamLimits

0x163c,	// (0x0008cf78) mup_visualizer_pane_g1

0x25fb,	// (0x0008df37) mup_visualizer_pane_g2_ParamLimits

0x25fb,	// (0x0008df37) mup_visualizer_pane_g2

0x162e,	// (0x0008cf6a) mup_visualizer_pane_g3_ParamLimits

0x162e,	// (0x0008cf6a) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x0009acd2) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x0009acd2) mup_visualizer_pane_g

0x1ad6,	// (0x0008d412) mup_volume_pane_g1

0x1ad6,	// (0x0008d412) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0009acd9) mup_volume_pane_g

0x1ad6,	// (0x0008d412) mup_progress_pane_g1

0x1ad6,	// (0x0008d412) mup_progress_pane_g2

0x1ad6,	// (0x0008d412) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x0009acde) mup_progress_pane_g

0x1358,	// (0x0008cc94) bg_popup_window_pane_cp05

0x2609,	// (0x0008df45) heading_pane_cp02_ParamLimits

0x2609,	// (0x0008df45) heading_pane_cp02

0x2623,	// (0x0008df5f) list_popup_blid_pane

0x262b,	// (0x0008df67) list_blid_sat_info_pane_ParamLimits

0x262b,	// (0x0008df67) list_blid_sat_info_pane

0x263e,	// (0x0008df7a) list_blid_sat_info_pane_g1

0x2646,	// (0x0008df82) list_blid_sat_info_pane_t1

0x7ff6,	// (0x00093932) mup_equalizer_pane_ParamLimits

0x7ff6,	// (0x00093932) mup_equalizer_pane

0x8017,	// (0x00093953) mup_equalizer_pane_cp1_ParamLimits

0x8017,	// (0x00093953) mup_equalizer_pane_cp1

0x8038,	// (0x00093974) mup_equalizer_pane_cp2_ParamLimits

0x8038,	// (0x00093974) mup_equalizer_pane_cp2

0x8059,	// (0x00093995) mup_equalizer_pane_cp3_ParamLimits

0x8059,	// (0x00093995) mup_equalizer_pane_cp3

0x807a,	// (0x000939b6) mup_equalizer_pane_cp4_ParamLimits

0x807a,	// (0x000939b6) mup_equalizer_pane_cp4

0x809b,	// (0x000939d7) mup_equalizer_pane_cp5

0x80b1,	// (0x000939ed) mup_equalizer_pane_cp6

0x80c9,	// (0x00093a05) mup_equalizer_pane_cp7

0x456d,	// (0x0008fea9) bg_popup_call_poc_act_pane_g9

0x4575,	// (0x0008feb1) bg_popup_call_poc_act_pane_g10

0x457d,	// (0x0008feb9) bg_popup_call_poc_act_pane_g11

0x000a,

0x15b3,	// (0x0008ceef) mup_scale_pane

0x15cb,	// (0x0008cf07) mup_scale_pane_g1

0x2654,	// (0x0008df90) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0009acfa) mup_scale_pane_g

0x2678,	// (0x0008dfb4) msg_data_pane

0x2680,	// (0x0008dfbc) scroll_pane_cp017

0x80f3,	// (0x00093a2f) bg_list_pane_cp04_ParamLimits

0x80f3,	// (0x00093a2f) bg_list_pane_cp04

0x2688,	// (0x0008dfc4) msg_data_pane_g1

0x8119,	// (0x00093a55) msg_data_pane_g2

0x8123,	// (0x00093a5f) msg_data_pane_g3

0x812b,	// (0x00093a67) msg_data_pane_g4

0x8133,	// (0x00093a6f) msg_data_pane_g5

0x813b,	// (0x00093a77) msg_data_pane_g6

0x8143,	// (0x00093a7f) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0009ad09) msg_data_pane_g

0x814b,	// (0x00093a87) msg_text_pane_ParamLimits

0x814b,	// (0x00093a87) msg_text_pane

0x818e,	// (0x00093aca) qrid_highlight_pane_cp011_ParamLimits

0x818e,	// (0x00093aca) qrid_highlight_pane_cp011

0x1358,	// (0x0008cc94) msg_body_pane

0x1358,	// (0x0008cc94) msg_header_pane

0x2699,	// (0x0008dfd5) input_focus_pane_cp07

0x81b4,	// (0x00093af0) msg_header_pane_t1_ParamLimits

0x81b4,	// (0x00093af0) msg_header_pane_t1

0x81ca,	// (0x00093b06) msg_header_pane_t2_ParamLimits

0x81ca,	// (0x00093b06) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0009ad1d) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0009ad1d) msg_header_pane_t

0x26ae,	// (0x0008dfea) msg_body_pane_g1

0x81e1,	// (0x00093b1d) msg_body_pane_t1_ParamLimits

0x81e1,	// (0x00093b1d) msg_body_pane_t1

0x8212,	// (0x00093b4e) msg_body_pane_t2_ParamLimits

0x8212,	// (0x00093b4e) msg_body_pane_t2

0x8224,	// (0x00093b60) msg_body_pane_t3_ParamLimits

0x8224,	// (0x00093b60) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x0009ad22) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x0009ad22) msg_body_pane_t

0x8288,	// (0x00093bc4) main_viewer_pane_g1_ParamLimits

0x8288,	// (0x00093bc4) main_viewer_pane_g1

0x8294,	// (0x00093bd0) main_viewer_pane_g2_ParamLimits

0x8294,	// (0x00093bd0) main_viewer_pane_g2

0x82a0,	// (0x00093bdc) main_viewer_pane_g3_ParamLimits

0x82a0,	// (0x00093bdc) main_viewer_pane_g3

0x82b1,	// (0x00093bed) main_viewer_pane_g4_ParamLimits

0x82b1,	// (0x00093bed) main_viewer_pane_g4

0x82c2,	// (0x00093bfe) main_viewer_pane_g5_ParamLimits

0x82c2,	// (0x00093bfe) main_viewer_pane_g5

0x82c2,	// (0x00093bfe) main_viewer_pane_g7_ParamLimits

0x82c2,	// (0x00093bfe) main_viewer_pane_g7

0x1fb0,	// (0x0008d8ec) main_viewer_pane_g8_ParamLimits

0x1fb0,	// (0x0008d8ec) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x0009ad32) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x0009ad32) main_viewer_pane_g

0x2dec,	// (0x0008e728) viewer_content_pane_ParamLimits

0x2dec,	// (0x0008e728) viewer_content_pane

0x8300,	// (0x00093c3c) main_postcard_pane_g1_ParamLimits

0x8300,	// (0x00093c3c) main_postcard_pane_g1

0x830e,	// (0x00093c4a) main_postcard_pane_g2_ParamLimits

0x830e,	// (0x00093c4a) main_postcard_pane_g2

0x831c,	// (0x00093c58) main_postcard_pane_g3_ParamLimits

0x831c,	// (0x00093c58) main_postcard_pane_g3

0x0005,

0xf407,	// (0x0009ad43) main_postcard_pane_g_ParamLimits

0xf407,	// (0x0009ad43) main_postcard_pane_g

0x832c,	// (0x00093c68) main_postcard_pane_g4

0x469e,	// (0x0008ffda) smil_status_volume_pane_g2

0x8358,	// (0x00093c94) postcard_pane_ParamLimits

0x8358,	// (0x00093c94) postcard_pane

0x3cf8,	// (0x0008f634) postcard_pane_g1_ParamLimits

0x3cf8,	// (0x0008f634) postcard_pane_g1

0x838a,	// (0x00093cc6) postcard_pane_g2_ParamLimits

0x838a,	// (0x00093cc6) postcard_pane_g2

0x8396,	// (0x00093cd2) postcard_pane_g3_ParamLimits

0x8396,	// (0x00093cd2) postcard_pane_g3

0x2e08,	// (0x0008e744) postcard_pane_g4_ParamLimits

0x2e08,	// (0x0008e744) postcard_pane_g4

0x83a2,	// (0x00093cde) postcard_pane_g5_ParamLimits

0x83a2,	// (0x00093cde) postcard_pane_g5

0x83ae,	// (0x00093cea) postcard_pane_g6_ParamLimits

0x83ae,	// (0x00093cea) postcard_pane_g6

0x2dfa,	// (0x0008e736) postcard_pane_g7_ParamLimits

0x2dfa,	// (0x0008e736) postcard_pane_g7

0x0006,

0xf414,	// (0x0009ad50) postcard_pane_g_ParamLimits

0xf414,	// (0x0009ad50) postcard_pane_g

0x83ba,	// (0x00093cf6) main_mp2_pane_g1_ParamLimits

0x83ba,	// (0x00093cf6) main_mp2_pane_g1

0x83c6,	// (0x00093d02) main_mp2_pane_g2_ParamLimits

0x83c6,	// (0x00093d02) main_mp2_pane_g2

0x83d2,	// (0x00093d0e) main_mp2_pane_g3_ParamLimits

0x83d2,	// (0x00093d0e) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0009ad5f) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0009ad5f) main_mp2_pane_g

0x83de,	// (0x00093d1a) main_mp2_pane_t1_ParamLimits

0x83de,	// (0x00093d1a) main_mp2_pane_t1

0x83f5,	// (0x00093d31) main_mp2_pane_t2_ParamLimits

0x83f5,	// (0x00093d31) main_mp2_pane_t2

0x8409,	// (0x00093d45) main_mp2_pane_t3_ParamLimits

0x8409,	// (0x00093d45) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x0009ad66) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x0009ad66) main_mp2_pane_t

0x2e16,	// (0x0008e752) pec_content_pane_ParamLimits

0x2e16,	// (0x0008e752) pec_content_pane

0x1c37,	// (0x0008d573) scroll_pane_cp015

0x2e28,	// (0x0008e764) pec_attribute_pane_ParamLimits

0x2e28,	// (0x0008e764) pec_attribute_pane

0x841b,	// (0x00093d57) pec_content_pane_g1_ParamLimits

0x841b,	// (0x00093d57) pec_content_pane_g1

0x2e38,	// (0x0008e774) pec_content_pane_t1_ParamLimits

0x2e38,	// (0x0008e774) pec_content_pane_t1

0x2e4a,	// (0x0008e786) pec_content_pane_t2_ParamLimits

0x2e4a,	// (0x0008e786) pec_content_pane_t2

0x0001,

0xf431,	// (0x0009ad6d) pec_content_pane_t_ParamLimits

0xf431,	// (0x0009ad6d) pec_content_pane_t

0x8427,	// (0x00093d63) list_single_graphic_pane_cp01_ParamLimits

0x8427,	// (0x00093d63) list_single_graphic_pane_cp01

0x15b3,	// (0x0008ceef) bg_popup_sub_pane_cp04

0x2e5c,	// (0x0008e798) popup_mup_playback_window_g1

0x2e68,	// (0x0008e7a4) popup_mup_playback_window_t1

0x2e7d,	// (0x0008e7b9) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x0009ad72) popup_mup_playback_window_t

0x2eb4,	// (0x0008e7f0) main_image_pane_g1_ParamLimits

0x2eb4,	// (0x0008e7f0) main_image_pane_g1

0x2ef7,	// (0x0008e833) scroll_pane_cp018_ParamLimits

0x2ef7,	// (0x0008e833) scroll_pane_cp018

0x2f0f,	// (0x0008e84b) scroll_pane_cp016_ParamLimits

0x2f0f,	// (0x0008e84b) scroll_pane_cp016

0x84c0,	// (0x00093dfc) smil2_image_pane_ParamLimits

0x84c0,	// (0x00093dfc) smil2_image_pane

0x84f0,	// (0x00093e2c) smil2_root_pane_ParamLimits

0x84f0,	// (0x00093e2c) smil2_root_pane

0x851c,	// (0x00093e58) smil2_text_pane_ParamLimits

0x851c,	// (0x00093e58) smil2_text_pane

0x1358,	// (0x0008cc94) bg_list_pane_cp06

0x2f4b,	// (0x0008e887) grid_radio_pane

0x1358,	// (0x0008cc94) bg_popup_window_pane_cp06

0x2f53,	// (0x0008e88f) main_fmradio_pane_t1

0x4585,	// (0x0008fec1) heading_pane_cp04

0x2f61,	// (0x0008e89d) main_fmradio_pane_t2

0x458d,	// (0x0008fec9) popup_cale_lunar_info_window_g1

0x2f6f,	// (0x0008e8ab) main_fmradio_pane_t3

0x4595,	// (0x0008fed1) popup_cale_lunar_info_window_g2

0x2f7d,	// (0x0008e8b9) main_fmradio_pane_t4

0x0001,

0x2f8b,	// (0x0008e8c7) main_fmradio_pane_t5

0x0004,

0xf516,	// (0x0009ae52) popup_cale_lunar_info_window_g

0xf44b,	// (0x0009ad87) main_fmradio_pane_t

0x2f99,	// (0x0008e8d5) wait_bar_pane_cp03

0x2fa1,	// (0x0008e8dd) cell_fmradio_pane_ParamLimits

0x2fa1,	// (0x0008e8dd) cell_fmradio_pane

0x2dfa,	// (0x0008e736) cell_fmradio_pane_g1_ParamLimits

0x2dfa,	// (0x0008e736) cell_fmradio_pane_g1

0x1358,	// (0x0008cc94) grid_highlight_pane_cp011

0x2fb4,	// (0x0008e8f0) poc_content_pane_ParamLimits

0x2fb4,	// (0x0008e8f0) poc_content_pane

0x2fc6,	// (0x0008e902) scroll_pane_cp019

0x855c,	// (0x00093e98) popup_call_poc_act_window_ParamLimits

0x855c,	// (0x00093e98) popup_call_poc_act_window

0x8569,	// (0x00093ea5) popup_call_poc_inact_window_ParamLimits

0x8569,	// (0x00093ea5) popup_call_poc_inact_window

0xf4ed,	// (0x0009ae29) bg_popup_call_poc_act_pane_g

0x44fd,	// (0x0008fe39) bg_popup_call_poc_inact_pane_g1

0x4505,	// (0x0008fe41) bg_popup_call_poc_inact_pane_g2

0x2fce,	// (0x0008e90a) popup_call_poc_act_window_g2

0x450d,	// (0x0008fe49) bg_popup_call_poc_inact_pane_g3

0x4515,	// (0x0008fe51) bg_popup_call_poc_inact_pane_g4

0x451d,	// (0x0008fe59) bg_popup_call_poc_inact_pane_g5

0x2fd6,	// (0x0008e912) popup_call_poc_act_window_t1_ParamLimits

0x2fd6,	// (0x0008e912) popup_call_poc_act_window_t1

0x2ffe,	// (0x0008e93a) popup_call_poc_act_window_t2_ParamLimits

0x2ffe,	// (0x0008e93a) popup_call_poc_act_window_t2

0x3026,	// (0x0008e962) popup_call_poc_act_window_t3_ParamLimits

0x3026,	// (0x0008e962) popup_call_poc_act_window_t3

0x304e,	// (0x0008e98a) popup_call_poc_act_window_t4_ParamLimits

0x304e,	// (0x0008e98a) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x0009ad92) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x0009ad92) popup_call_poc_act_window_t

0x4525,	// (0x0008fe61) bg_popup_call_poc_inact_pane_g6

0x452d,	// (0x0008fe69) bg_popup_call_poc_inact_pane_g7

0x4535,	// (0x0008fe71) bg_popup_call_poc_inact_pane_g8

0x3060,	// (0x0008e99c) popup_call_poc_inact_window_g2

0x453d,	// (0x0008fe79) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4da,	// (0x0009ae16) bg_popup_call_poc_inact_pane_g

0x3068,	// (0x0008e9a4) popup_call_poc_inact_window_t1_ParamLimits

0x3068,	// (0x0008e9a4) popup_call_poc_inact_window_t1

0x307d,	// (0x0008e9b9) popup_call_poc_inact_window_t2_ParamLimits

0x307d,	// (0x0008e9b9) popup_call_poc_inact_window_t2

0x3092,	// (0x0008e9ce) popup_call_poc_inact_window_t3_ParamLimits

0x3092,	// (0x0008e9ce) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0009ad9b) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0009ad9b) popup_call_poc_inact_window_t

0x4629,	// (0x0008ff65) context_pane_ParamLimits

0x8bf2,	// (0x0009452e) signal_pane_ParamLimits

0x1aa0,	// (0x0008d3dc) main_call2_pane

0x8b65,	// (0x000944a1) popup_phob_thumbnail2_window_ParamLimits

0x8b65,	// (0x000944a1) popup_phob_thumbnail2_window

0x8236,	// (0x00093b72) aid_hotspot_pointer_arrow_pane

0x823e,	// (0x00093b7a) aid_hotspot_pointer_hand_pane

0x88ae,	// (0x000941ea) phob_pre_status_pane_g5

0x1620,	// (0x0008cf5c) cams_zoom_pane_ParamLimits

0x1620,	// (0x0008cf5c) image_vga_pane_ParamLimits

0x163c,	// (0x0008cf78) main_camera_pane_g1_ParamLimits

0x163c,	// (0x0008cf78) main_camera_pane_g2_ParamLimits

0x163c,	// (0x0008cf78) main_camera_pane_g3_ParamLimits

0x163c,	// (0x0008cf78) main_camera_pane_g4_ParamLimits

0x163c,	// (0x0008cf78) main_camera_pane_g5_ParamLimits

0x163c,	// (0x0008cf78) main_camera_pane_g6_ParamLimits

0x163c,	// (0x0008cf78) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0009aac1) main_camera_pane_g_ParamLimits

0x2397,	// (0x0008dcd3) main_camera_pane_t1_ParamLimits

0x2397,	// (0x0008dcd3) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0009aad2) main_camera_pane_t_ParamLimits

0x15b3,	// (0x0008ceef) bg_popup_preview_window_pane_cp01_ParamLimits

0x15b3,	// (0x0008ceef) bg_popup_preview_window_pane_cp01

0x30a7,	// (0x0008e9e3) popup_phob_thumbnail2_window_g1_ParamLimits

0x30a7,	// (0x0008e9e3) popup_phob_thumbnail2_window_g1

0x1358,	// (0x0008cc94) call2_cli_visual_pane

0x8585,	// (0x00093ec1) popup_call2_audio_conf_window_ParamLimits

0x8585,	// (0x00093ec1) popup_call2_audio_conf_window

0x859a,	// (0x00093ed6) popup_call2_audio_first_window_ParamLimits

0x859a,	// (0x00093ed6) popup_call2_audio_first_window

0x8638,	// (0x00093f74) popup_call2_audio_in_window_ParamLimits

0x8638,	// (0x00093f74) popup_call2_audio_in_window

0x867a,	// (0x00093fb6) popup_call2_audio_out_window_ParamLimits

0x867a,	// (0x00093fb6) popup_call2_audio_out_window

0x86dc,	// (0x00094018) popup_call2_audio_second_window_ParamLimits

0x86dc,	// (0x00094018) popup_call2_audio_second_window

0x873a,	// (0x00094076) popup_call2_audio_wait_window_ParamLimits

0x873a,	// (0x00094076) popup_call2_audio_wait_window

0x1358,	// (0x0008cc94) bg_popup_call2_act_pane_cp03

0x1595,	// (0x0008ced1) list_conf_pane_cp

0x30b3,	// (0x0008e9ef) popup_call2_audio_conf_window_t1

0x21dd,	// (0x0008db19) list_single_graphic_popup_conf2_pane_ParamLimits

0x21dd,	// (0x0008db19) list_single_graphic_popup_conf2_pane

0x21f0,	// (0x0008db2c) list_highlight_pane_cp04

0x30c1,	// (0x0008e9fd) list_single_graphic_popup_conf2_pane_g1

0x2201,	// (0x0008db3d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x0009ada2) list_single_graphic_popup_conf2_pane_g

0x30cb,	// (0x0008ea07) list_single_graphic_popup_conf2_pane_t1

0x30d9,	// (0x0008ea15) bg_popup_call2_act_pane_cp01_ParamLimits

0x30d9,	// (0x0008ea15) bg_popup_call2_act_pane_cp01

0x3163,	// (0x0008ea9f) call_type_pane_cp05_ParamLimits

0x3163,	// (0x0008ea9f) call_type_pane_cp05

0x3846,	// (0x0008f182) popup_call2_audio_second_window_g1_ParamLimits

0x3846,	// (0x0008f182) popup_call2_audio_second_window_g1

0x389a,	// (0x0008f1d6) popup_call2_audio_second_window_g2_ParamLimits

0x389a,	// (0x0008f1d6) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x0009ada7) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x0009ada7) popup_call2_audio_second_window_g

0x38ff,	// (0x0008f23b) popup_call2_audio_second_window_t1_ParamLimits

0x38ff,	// (0x0008f23b) popup_call2_audio_second_window_t1

0x39ba,	// (0x0008f2f6) popup_call2_audio_second_window_t2_ParamLimits

0x39ba,	// (0x0008f2f6) popup_call2_audio_second_window_t2

0x3a0d,	// (0x0008f349) popup_call2_audio_second_window_t3_ParamLimits

0x3a0d,	// (0x0008f349) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0009adae) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0009adae) popup_call2_audio_second_window_t

0x1358,	// (0x0008cc94) bg_popup_call2_in_pane_cp02

0x1362,	// (0x0008cc9e) call_type_pane_cp04

0x8779,	// (0x000940b5) popup_call2_audio_wait_window_g1

0x8781,	// (0x000940bd) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x0009adb7) popup_call2_audio_wait_window_g

0x137a,	// (0x0008ccb6) popup_call2_audio_wait_window_t3

0x3b00,	// (0x0008f43c) bg_popup_call2_act_pane_ParamLimits

0x3b00,	// (0x0008f43c) bg_popup_call2_act_pane

0x3bc0,	// (0x0008f4fc) call_type_pane_cp03_ParamLimits

0x3bc0,	// (0x0008f4fc) call_type_pane_cp03

0x3c24,	// (0x0008f560) popup_call2_audio_first_window_g1_ParamLimits

0x3c24,	// (0x0008f560) popup_call2_audio_first_window_g1

0x3c94,	// (0x0008f5d0) popup_call2_audio_first_window_g2_ParamLimits

0x3c94,	// (0x0008f5d0) popup_call2_audio_first_window_g2

0x3cf8,	// (0x0008f634) popup_call2_audio_first_window_g3_ParamLimits

0x3cf8,	// (0x0008f634) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x0009adbc) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x0009adbc) popup_call2_audio_first_window_g

0x3d80,	// (0x0008f6bc) popup_call2_audio_first_window_t1_ParamLimits

0x3d80,	// (0x0008f6bc) popup_call2_audio_first_window_t1

0x3e83,	// (0x0008f7bf) popup_call2_audio_first_window_t4_ParamLimits

0x3e83,	// (0x0008f7bf) popup_call2_audio_first_window_t4

0x3f66,	// (0x0008f8a2) popup_call2_audio_first_window_t5_ParamLimits

0x3f66,	// (0x0008f8a2) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x0009adc7) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x0009adc7) popup_call2_audio_first_window_t

0x15ab,	// (0x0008cee7) bg_popup_call2_act_pane_g1

0x459d,	// (0x0008fed9) popup_cale_lunar_info_window_t1

0x45ab,	// (0x0008fee7) popup_cale_lunar_info_window_t2

0x45b9,	// (0x0008fef5) popup_cale_lunar_info_window_t3

0x1358,	// (0x0008cc94) bg_popup_call2_bubble_pane

0x4067,	// (0x0008f9a3) bg_popup_call2_in_pane_cp01_ParamLimits

0x4067,	// (0x0008f9a3) bg_popup_call2_in_pane_cp01

0x1034,	// (0x0008c970) call_type_pane_cp02

0x8789,	// (0x000940c5) popup_call2_audio_out_window_g1_ParamLimits

0x8789,	// (0x000940c5) popup_call2_audio_out_window_g1

0x40af,	// (0x0008f9eb) popup_call2_audio_out_window_g2_ParamLimits

0x40af,	// (0x0008f9eb) popup_call2_audio_out_window_g2

0x87b5,	// (0x000940f1) popup_call2_audio_out_window_g3_ParamLimits

0x87b5,	// (0x000940f1) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x0009add0) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x0009add0) popup_call2_audio_out_window_g

0x40e6,	// (0x0008fa22) popup_call2_audio_out_window_t1_ParamLimits

0x40e6,	// (0x0008fa22) popup_call2_audio_out_window_t1

0x4145,	// (0x0008fa81) popup_call2_audio_out_window_t2_ParamLimits

0x4145,	// (0x0008fa81) popup_call2_audio_out_window_t2

0x4199,	// (0x0008fad5) popup_call2_audio_out_window_t3_ParamLimits

0x4199,	// (0x0008fad5) popup_call2_audio_out_window_t3

0x41af,	// (0x0008faeb) popup_call2_audio_out_window_t4_ParamLimits

0x41af,	// (0x0008faeb) popup_call2_audio_out_window_t4

0x41c5,	// (0x0008fb01) popup_call2_audio_out_window_t5_ParamLimits

0x41c5,	// (0x0008fb01) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x0009add9) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x0009add9) popup_call2_audio_out_window_t

0x4229,	// (0x0008fb65) bg_popup_call2_in_pane_ParamLimits

0x4229,	// (0x0008fb65) bg_popup_call2_in_pane

0x429f,	// (0x0008fbdb) popup_call2_audio_in_window_g1_ParamLimits

0x429f,	// (0x0008fbdb) popup_call2_audio_in_window_g1

0x42d7,	// (0x0008fc13) popup_call2_audio_in_window_g2_ParamLimits

0x42d7,	// (0x0008fc13) popup_call2_audio_in_window_g2

0x430f,	// (0x0008fc4b) popup_call2_audio_in_window_g3_ParamLimits

0x430f,	// (0x0008fc4b) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x0009ade6) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x0009ade6) popup_call2_audio_in_window_g

0x4367,	// (0x0008fca3) popup_call2_audio_in_window_t1_ParamLimits

0x4367,	// (0x0008fca3) popup_call2_audio_in_window_t1

0x43e7,	// (0x0008fd23) popup_call2_audio_in_window_t2_ParamLimits

0x43e7,	// (0x0008fd23) popup_call2_audio_in_window_t2

0x4467,	// (0x0008fda3) popup_call2_audio_in_window_t3_ParamLimits

0x4467,	// (0x0008fda3) popup_call2_audio_in_window_t3

0x4481,	// (0x0008fdbd) popup_call2_audio_in_window_t4_ParamLimits

0x4481,	// (0x0008fdbd) popup_call2_audio_in_window_t4

0x4493,	// (0x0008fdcf) popup_call2_audio_in_window_t5_ParamLimits

0x4493,	// (0x0008fdcf) popup_call2_audio_in_window_t5

0x44a8,	// (0x0008fde4) popup_call2_audio_in_window_t6_ParamLimits

0x44a8,	// (0x0008fde4) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x0009adef) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x0009adef) popup_call2_audio_in_window_t

0x15ab,	// (0x0008cee7) bg_popup_call2_in_pane_g1

0x45c7,	// (0x0008ff03) popup_cale_lunar_info_window_t4

0x0003,

0xf51b,	// (0x0009ae57) popup_cale_lunar_info_window_t

0x15b3,	// (0x0008ceef) bg_popup_call2_rect_pane_ParamLimits

0x15b3,	// (0x0008ceef) bg_popup_call2_rect_pane

0x1358,	// (0x0008cc94) call2_cli_visual_graphic_pane

0x1358,	// (0x0008cc94) call2_cli_visual_text_pane

0x8c2e,	// (0x0009456a) smil_status_volume_pane_g3

0x0002,

0x15cb,	// (0x0008cf07) call2_cli_visual_graphic_pane_g1

0x15cb,	// (0x0008cf07) call2_cli_visual_graphic_pane_g2

0x15cb,	// (0x0008cf07) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x0009adfc) call2_cli_visual_graphic_pane_g

0x44bd,	// (0x0008fdf9) bg_popup_call2_rect_pane_g1

0x19a7,	// (0x0008d2e3) bg_popup_call2_rect_pane_g2

0x44c5,	// (0x0008fe01) bg_popup_call2_rect_pane_g3

0x44cd,	// (0x0008fe09) bg_popup_call2_rect_pane_g4

0x44d5,	// (0x0008fe11) bg_popup_call2_rect_pane_g5

0x44dd,	// (0x0008fe19) bg_popup_call2_rect_pane_g6

0x44e5,	// (0x0008fe21) bg_popup_call2_rect_pane_g7

0x44ed,	// (0x0008fe29) bg_popup_call2_rect_pane_g8

0x44f5,	// (0x0008fe31) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x0009ae03) bg_popup_call2_rect_pane_g

0x44fd,	// (0x0008fe39) bg_popup_call2_bubble_pane_g1

0x4505,	// (0x0008fe41) bg_popup_call2_bubble_pane_g2

0x450d,	// (0x0008fe49) bg_popup_call2_bubble_pane_g3

0x4515,	// (0x0008fe51) bg_popup_call2_bubble_pane_g4

0x451d,	// (0x0008fe59) bg_popup_call2_bubble_pane_g5

0x4525,	// (0x0008fe61) bg_popup_call2_bubble_pane_g6

0x452d,	// (0x0008fe69) bg_popup_call2_bubble_pane_g7

0x4535,	// (0x0008fe71) bg_popup_call2_bubble_pane_g8

0x453d,	// (0x0008fe79) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x0009ae16) bg_popup_call2_bubble_pane_g

0x6321,	// (0x00091c5d) aid_cale_week_size_cell_pane

0x15b3,	// (0x0008ceef) aid_cams_cif_uncrop_pane_ParamLimits

0x15b3,	// (0x0008ceef) aid_cams_cif_uncrop_pane

0x6915,	// (0x00092251) aid_cams_size_cell_ParamLimits

0x6915,	// (0x00092251) aid_cams_size_cell

0x6921,	// (0x0009225d) grid_cams_pane_ParamLimits

0x692f,	// (0x0009226b) linegrid_cams_pane_ParamLimits

0x6a06,	// (0x00092342) call_video_pane_t1

0x6a27,	// (0x00092363) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0009ab1e) call_video_pane_t

0x6f6e,	// (0x000928aa) aid_cale_month_size_cell_pane_ParamLimits

0x6f6e,	// (0x000928aa) aid_cale_month_size_cell_pane

0xf55f,	// (0x0009ae9b) smil_status_volume_pane_g

0x8c3b,	// (0x00094577) volume_smil_pane_ParamLimits

0x5bbf,	// (0x000914fb) aid_popup2_width_pane

0x6212,	// (0x00091b4e) cell_qdial_pane_g4_ParamLimits

0x6212,	// (0x00091b4e) cell_qdial_pane_g4

0x7e1e,	// (0x0009375a) aid_blid_cardinal_pane_ParamLimits

0x7e2e,	// (0x0009376a) aid_blid_destination_pane_ParamLimits

0x7e2e,	// (0x0009376a) aid_blid_destination_pane

0x15b3,	// (0x0008ceef) bg_popup_call_poc_act_pane_ParamLimits

0x15b3,	// (0x0008ceef) bg_popup_call_poc_act_pane

0x15b3,	// (0x0008ceef) bg_popup_call_poc_inact_pane_ParamLimits

0x15b3,	// (0x0008ceef) bg_popup_call_poc_inact_pane

0x4545,	// (0x0008fe81) bg_popup_call_poc_act_pane_g1

0x454d,	// (0x0008fe89) bg_popup_call_poc_act_pane_g2

0x4555,	// (0x0008fe91) bg_popup_call_poc_act_pane_g3

0x4515,	// (0x0008fe51) bg_popup_call_poc_act_pane_g4

0x451d,	// (0x0008fe59) bg_popup_call_poc_act_pane_g5

0x455d,	// (0x0008fe99) bg_popup_call_poc_act_pane_g6

0x452d,	// (0x0008fe69) bg_popup_call_poc_act_pane_g7

0x4565,	// (0x0008fea1) bg_popup_call_poc_act_pane_g8

0x1358,	// (0x0008cc94) main_usb_pane

0x8a94,	// (0x000943d0) popup_cale_lunar_info_window

0x6d50,	// (0x0009268c) im_reading_pane_t1_ParamLimits

0x1b8f,	// (0x0008d4cb) list_im_pane_ParamLimits

0x1ba0,	// (0x0008d4dc) scroll_pane_cp07_ParamLimits

0x1358,	// (0x0008cc94) grid_highlight_pane_cp012

0x15b3,	// (0x0008ceef) mup_scale_pane_ParamLimits

0x3cf8,	// (0x0008f634) main_usb_pane_g1_ParamLimits

0x3cf8,	// (0x0008f634) main_usb_pane_g1

0x8816,	// (0x00094152) main_usb_pane_g2_ParamLimits

0x8816,	// (0x00094152) main_usb_pane_g2

0x0001,

0xf504,	// (0x0009ae40) main_usb_pane_g_ParamLimits

0xf504,	// (0x0009ae40) main_usb_pane_g

0x8822,	// (0x0009415e) main_usb_pane_t1_ParamLimits

0x8822,	// (0x0009415e) main_usb_pane_t1

0x8834,	// (0x00094170) main_usb_pane_t2_ParamLimits

0x8834,	// (0x00094170) main_usb_pane_t2

0x8846,	// (0x00094182) main_usb_pane_t3_ParamLimits

0x8846,	// (0x00094182) main_usb_pane_t3

0x8858,	// (0x00094194) main_usb_pane_t4_ParamLimits

0x8858,	// (0x00094194) main_usb_pane_t4

0x886a,	// (0x000941a6) main_usb_pane_t5_ParamLimits

0x886a,	// (0x000941a6) main_usb_pane_t5

0x887c,	// (0x000941b8) main_usb_pane_t6_ParamLimits

0x887c,	// (0x000941b8) main_usb_pane_t6

0x0005,

0xf509,	// (0x0009ae45) main_usb_pane_t_ParamLimits

0x7dc4,	// (0x00093700) aid_text_placing

0x7dd0,	// (0x0009370c) main_location2_pane_t1_ParamLimits

0x7de4,	// (0x00093720) main_location2_pane_t2_ParamLimits

0x7df8,	// (0x00093734) main_location2_pane_t3_ParamLimits

0x7e0c,	// (0x00093748) main_location2_pane_t4_ParamLimits

0x7e0c,	// (0x00093748) main_location2_pane_t4

0xf323,	// (0x0009ac5f) main_location2_pane_t_ParamLimits

0x15e1,	// (0x0008cf1d) find_pinb_pane_g2_ParamLimits

0x15e1,	// (0x0008cf1d) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0009a9d6) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0009a9d6) find_pinb_pane_g

0x15ed,	// (0x0008cf29) find_pinb_pane_t1_ParamLimits

0x15ff,	// (0x0008cf3b) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0009a9db) find_pinb_pane_t_ParamLimits

0x1358,	// (0x0008cc94) main_call3_pane

0x7511,	// (0x00092e4d) cale_month_day_heading_pane_t1_ParamLimits

0x7597,	// (0x00092ed3) cale_month_day_heading_pane_t2_ParamLimits

0x7610,	// (0x00092f4c) cale_month_day_heading_pane_t3_ParamLimits

0x7689,	// (0x00092fc5) cale_month_day_heading_pane_t4_ParamLimits

0x7702,	// (0x0009303e) cale_month_day_heading_pane_t5_ParamLimits

0x777b,	// (0x000930b7) cale_month_day_heading_pane_t6_ParamLimits

0x77f4,	// (0x00093130) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0009ab56) cale_month_day_heading_pane_t_ParamLimits

0x1dea,	// (0x0008d726) smil_status_volume_pane

0x8372,	// (0x00093cae) postcard_address_pane_ParamLimits

0x8372,	// (0x00093cae) postcard_address_pane

0x837e,	// (0x00093cba) postcard_message_pane_ParamLimits

0x837e,	// (0x00093cba) postcard_message_pane

0x87e1,	// (0x0009411d) call2_cli_visual_pane_t1_ParamLimits

0x87e1,	// (0x0009411d) call2_cli_visual_pane_t1

0x46dc,	// (0x00090018) postcard_message_pane_t1_ParamLimits

0x46dc,	// (0x00090018) postcard_message_pane_t1

0x46c4,	// (0x00090000) postcard_address_pane_t1_ParamLimits

0x46c4,	// (0x00090000) postcard_address_pane_t1

0x8d6c,	// (0x000946a8) popup_call3_audio_in_window_ParamLimits

0x8d6c,	// (0x000946a8) popup_call3_audio_in_window

0x8c50,	// (0x0009458c) bg_popup_call3_in_pane_ParamLimits

0x8c50,	// (0x0009458c) bg_popup_call3_in_pane

0x8cb2,	// (0x000945ee) popup_call3_audio_in_window_g1_ParamLimits

0x8cb2,	// (0x000945ee) popup_call3_audio_in_window_g1

0x8cca,	// (0x00094606) popup_call3_audio_in_window_g2_ParamLimits

0x8cca,	// (0x00094606) popup_call3_audio_in_window_g2

0x8ce2,	// (0x0009461e) popup_call3_audio_in_window_g3_ParamLimits

0x8ce2,	// (0x0009461e) popup_call3_audio_in_window_g3

0x0003,

0xf566,	// (0x0009aea2) popup_call3_audio_in_window_g_ParamLimits

0xf566,	// (0x0009aea2) popup_call3_audio_in_window_g

0x8d0a,	// (0x00094646) popup_call3_audio_in_window_t1_ParamLimits

0x8d0a,	// (0x00094646) popup_call3_audio_in_window_t1

0x8d32,	// (0x0009466e) popup_call3_audio_in_window_t2_ParamLimits

0x8d32,	// (0x0009466e) popup_call3_audio_in_window_t2

0x8d5a,	// (0x00094696) popup_call3_audio_in_window_t3_ParamLimits

0x8d5a,	// (0x00094696) popup_call3_audio_in_window_t3

0x0002,

0xf56f,	// (0x0009aeab) popup_call3_audio_in_window_t_ParamLimits

0xf56f,	// (0x0009aeab) popup_call3_audio_in_window_t

0x1aa0,	// (0x0008d3dc) bg_popup_call3_rect_pane

0x44bd,	// (0x0008fdf9) bg_popup_call3_rect_pane_g1

0x19a7,	// (0x0008d2e3) bg_popup_call3_rect_pane_g2

0x44c5,	// (0x0008fe01) bg_popup_call3_rect_pane_g3

0x44cd,	// (0x0008fe09) bg_popup_call3_rect_pane_g4

0x44d5,	// (0x0008fe11) bg_popup_call3_rect_pane_g5

0x44dd,	// (0x0008fe19) bg_popup_call3_rect_pane_g6

0x44e5,	// (0x0008fe21) bg_popup_call3_rect_pane_g7

0x0f2d,	// (0x0008c869) mup_visualizer_osc_pane

0x0f2d,	// (0x0008c869) mup_visualizer_spec_pane

0x8c70,	// (0x000945ac) call3_video_qcif_pane_ParamLimits

0x8c70,	// (0x000945ac) call3_video_qcif_pane

0x8c82,	// (0x000945be) call3_video_qcif_uncrop_pane_ParamLimits

0x8c82,	// (0x000945be) call3_video_qcif_uncrop_pane

0x8c90,	// (0x000945cc) call3_video_subqcif_pane_ParamLimits

0x8c90,	// (0x000945cc) call3_video_subqcif_pane

0x8ca2,	// (0x000945de) call3_video_subqcif_uncrop_pane_ParamLimits

0x8ca2,	// (0x000945de) call3_video_subqcif_uncrop_pane

0x8cfa,	// (0x00094636) popup_call3_audio_in_window_g4_ParamLimits

0x8cfa,	// (0x00094636) popup_call3_audio_in_window_g4

0x0f2d,	// (0x0008c869) mup_spec_half_pane

0x0f2d,	// (0x0008c869) mup_spec_half_pane_cp

0x0f2d,	// (0x0008c869) mup_osc_middle_pane

0x1ad6,	// (0x0008d412) mup_visualizer_osc_pane_g1

0x4677,	// (0x0008ffb3) mup_spec_bar_pane_ParamLimits

0x4677,	// (0x0008ffb3) mup_spec_bar_pane

0x1ad6,	// (0x0008d412) mup_spec_bar_pane_g1

0x1ad6,	// (0x0008d412) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0009acd9) mup_spec_bar_pane_g

0x6321,	// (0x00091c5d) aid_cale_week_size_cell_pane_ParamLimits

0x6336,	// (0x00091c72) bg_cale_heading_pane_ParamLimits

0x1a02,	// (0x0008d33e) bg_cale_pane_cp01_ParamLimits

0x6356,	// (0x00091c92) cale_week_corner_pane_ParamLimits

0x6370,	// (0x00091cac) cale_week_day_heading_pane_ParamLimits

0x6390,	// (0x00091ccc) cale_week_scroll_pane_g1_ParamLimits

0x63ab,	// (0x00091ce7) cale_week_scroll_pane_g2_ParamLimits

0x63be,	// (0x00091cfa) cale_week_scroll_pane_g3_ParamLimits

0x63d1,	// (0x00091d0d) cale_week_scroll_pane_g4_ParamLimits

0x63e4,	// (0x00091d20) cale_week_scroll_pane_g5_ParamLimits

0x63f7,	// (0x00091d33) cale_week_scroll_pane_g6_ParamLimits

0x640a,	// (0x00091d46) cale_week_scroll_pane_g7_ParamLimits

0x641f,	// (0x00091d5b) cale_week_scroll_pane_g8_ParamLimits

0x6434,	// (0x00091d70) cale_week_scroll_pane_g9_ParamLimits

0x6447,	// (0x00091d83) cale_week_scroll_pane_g10_ParamLimits

0x645a,	// (0x00091d96) cale_week_scroll_pane_g11_ParamLimits

0x646d,	// (0x00091da9) cale_week_scroll_pane_g12_ParamLimits

0x6484,	// (0x00091dc0) cale_week_scroll_pane_g13_ParamLimits

0x649f,	// (0x00091ddb) cale_week_scroll_pane_g14_ParamLimits

0x64ba,	// (0x00091df6) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0009aa67) cale_week_scroll_pane_g_ParamLimits

0x64ea,	// (0x00091e26) cale_week_time_pane_ParamLimits

0x64ff,	// (0x00091e3b) grid_cale_week_pane_ParamLimits

0x1a1f,	// (0x0008d35b) listscroll_cale_week_pane_t1

0x1a31,	// (0x0008d36d) scroll_pane_cp08_ParamLimits

0x6fe2,	// (0x0009291e) cale_month_corner_pane_ParamLimits

0x1dc0,	// (0x0008d6fc) cale_month_pane_t1

0x7494,	// (0x00092dd0) cale_month_week_pane_ParamLimits

0x3cf8,	// (0x0008f634) popup_call_status_window_g1_ParamLimits

0x7c1b,	// (0x00093557) popup_call_status_window_g2_ParamLimits

0x7c27,	// (0x00093563) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0009abe6) popup_call_status_window_g_ParamLimits

0x2184,	// (0x0008dac0) aid_call2_pane

0x81a8,	// (0x00093ae4) msg_header_pane_g1

0x8372,	// (0x00093cae) postcard_address2_pane_ParamLimits

0x8372,	// (0x00093cae) postcard_address2_pane

0x837e,	// (0x00093cba) postcard_message2_pane_ParamLimits

0x837e,	// (0x00093cba) postcard_message2_pane

0x8c00,	// (0x0009453c) message2_row_pane_ParamLimits

0x8c00,	// (0x0009453c) message2_row_pane

0x8c1b,	// (0x00094557) address2_row_pane_ParamLimits

0x8c1b,	// (0x00094557) address2_row_pane

0x4644,	// (0x0008ff80) postcard_message2_row_pane_g1

0x464c,	// (0x0008ff88) postcard_message2_row_pane_t1

0x4644,	// (0x0008ff80) address2_row_pane_g1

0x464c,	// (0x0008ff88) address2_row_pane_t1

0x6785,	// (0x000920c1) aid_size_cell_vorec

0x1358,	// (0x0008cc94) main_rss_pane

0x465a,	// (0x0008ff96) rss_list_single_pane_ParamLimits

0x465a,	// (0x0008ff96) rss_list_single_pane

0x4668,	// (0x0008ffa4) rss_list_single_pane_t1

0x4668,	// (0x0008ffa4) rss_list_single_pane_t2

0x0001,

0xf55a,	// (0x0009ae96) rss_list_single_pane_t

0x1358,	// (0x0008cc94) main_camera2_pane

0x1358,	// (0x0008cc94) main_video2_pane

0x5e66,	// (0x000917a2) cams_zoom_pane_cp2_ParamLimits

0x5e66,	// (0x000917a2) cams_zoom_pane_cp2

0x5e66,	// (0x000917a2) image2_vga_pane_ParamLimits

0x5e66,	// (0x000917a2) image2_vga_pane

0x21b0,	// (0x0008daec) main_camera2_pane_g1_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g1

0x21b0,	// (0x0008daec) main_camera2_pane_g2_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g2

0x21b0,	// (0x0008daec) main_camera2_pane_g3_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g3

0x21b0,	// (0x0008daec) main_camera2_pane_g4_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g4

0x21b0,	// (0x0008daec) main_camera2_pane_g5_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g5

0x21b0,	// (0x0008daec) main_camera2_pane_g6_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g6

0x21b0,	// (0x0008daec) main_camera2_pane_g7_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g7

0x21b0,	// (0x0008daec) main_camera2_pane_g8_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g8

0x0008,

0xf576,	// (0x0009aeb2) main_camera2_pane_g_ParamLimits

0xf576,	// (0x0009aeb2) main_camera2_pane_g

0x8d89,	// (0x000946c5) main_camera2_pane_t1_ParamLimits

0x8d89,	// (0x000946c5) main_camera2_pane_t1

0x8d89,	// (0x000946c5) main_camera2_pane_t2_ParamLimits

0x8d89,	// (0x000946c5) main_camera2_pane_t2

0x8d89,	// (0x000946c5) main_camera2_pane_t3_ParamLimits

0x8d89,	// (0x000946c5) main_camera2_pane_t3

0x8d89,	// (0x000946c5) main_camera2_pane_t4_ParamLimits

0x8d89,	// (0x000946c5) main_camera2_pane_t4

0x0006,

0xf589,	// (0x0009aec5) main_camera2_pane_t_ParamLimits

0xf589,	// (0x0009aec5) main_camera2_pane_t

0x8db1,	// (0x000946ed) cams_zoom_pane_cp4_ParamLimits

0x8db1,	// (0x000946ed) cams_zoom_pane_cp4

0x8a3f,	// (0x0009437b) image2_cif_pane_ParamLimits

0x8a3f,	// (0x0009437b) image2_cif_pane

0x5e66,	// (0x000917a2) image2_subqcif_pane_ParamLimits

0x5e66,	// (0x000917a2) image2_subqcif_pane

0x8dbf,	// (0x000946fb) main_video2_pane_g1_ParamLimits

0x8dbf,	// (0x000946fb) main_video2_pane_g1

0x8dbf,	// (0x000946fb) main_video2_pane_g2_ParamLimits

0x8dbf,	// (0x000946fb) main_video2_pane_g2

0x8dbf,	// (0x000946fb) main_video2_pane_g3_ParamLimits

0x8dbf,	// (0x000946fb) main_video2_pane_g3

0x8dbf,	// (0x000946fb) main_video2_pane_g4_ParamLimits

0x8dbf,	// (0x000946fb) main_video2_pane_g4

0x8dbf,	// (0x000946fb) main_video2_pane_g5_ParamLimits

0x8dbf,	// (0x000946fb) main_video2_pane_g5

0x8dbf,	// (0x000946fb) main_video2_pane_g6_ParamLimits

0x8dbf,	// (0x000946fb) main_video2_pane_g6

0x0005,

0xf598,	// (0x0009aed4) main_video2_pane_g_ParamLimits

0xf598,	// (0x0009aed4) main_video2_pane_g

0x8dcd,	// (0x00094709) main_video2_pane_t1_ParamLimits

0x8dcd,	// (0x00094709) main_video2_pane_t1

0x8dcd,	// (0x00094709) main_video2_pane_t2_ParamLimits

0x8dcd,	// (0x00094709) main_video2_pane_t2

0x8dcd,	// (0x00094709) main_video2_pane_t3_ParamLimits

0x8dcd,	// (0x00094709) main_video2_pane_t3

0x0002,

0xf5a5,	// (0x0009aee1) main_video2_pane_t_ParamLimits

0xf5a5,	// (0x0009aee1) main_video2_pane_t

0x8912,	// (0x0009424e) call_muted_g2

0x0001,

0xf54c,	// (0x0009ae88) call_muted_g

0x1358,	// (0x0008cc94) main_mup2_pane

0x164a,	// (0x0008cf86) main_mup2_pane_g1_ParamLimits

0x164a,	// (0x0008cf86) main_mup2_pane_g1

0x164a,	// (0x0008cf86) main_mup2_pane_g2_ParamLimits

0x164a,	// (0x0008cf86) main_mup2_pane_g2

0x063d,	// (0x0008bf79) main_mup_pane_g13_cp1

0x5e80,	// (0x000917bc) mup_volume_pane_cp1

0x164a,	// (0x0008cf86) main_mup2_pane_g4_ParamLimits

0x164a,	// (0x0008cf86) main_mup2_pane_g4

0x164a,	// (0x0008cf86) main_mup2_pane_g5_ParamLimits

0x164a,	// (0x0008cf86) main_mup2_pane_g5

0x164a,	// (0x0008cf86) main_mup2_pane_g6_ParamLimits

0x164a,	// (0x0008cf86) main_mup2_pane_g6

0x164a,	// (0x0008cf86) main_mup2_pane_g7_ParamLimits

0x164a,	// (0x0008cf86) main_mup2_pane_g7

0x0006,

0xf5ac,	// (0x0009aee8) main_mup2_pane_g_ParamLimits

0xf5ac,	// (0x0009aee8) main_mup2_pane_g

0x1658,	// (0x0008cf94) main_mup2_pane_t1_ParamLimits

0x1658,	// (0x0008cf94) main_mup2_pane_t1

0x1658,	// (0x0008cf94) main_mup2_pane_t2_ParamLimits

0x1658,	// (0x0008cf94) main_mup2_pane_t2

0x1658,	// (0x0008cf94) main_mup2_pane_t3_ParamLimits

0x1658,	// (0x0008cf94) main_mup2_pane_t3

0x1658,	// (0x0008cf94) main_mup2_pane_t4_ParamLimits

0x1658,	// (0x0008cf94) main_mup2_pane_t4

0x1658,	// (0x0008cf94) main_mup2_pane_t5_ParamLimits

0x1658,	// (0x0008cf94) main_mup2_pane_t5

0x1658,	// (0x0008cf94) main_mup2_pane_t6_ParamLimits

0x1658,	// (0x0008cf94) main_mup2_pane_t6

0x0005,

0xf5bb,	// (0x0009aef7) main_mup2_pane_t_ParamLimits

0xf5bb,	// (0x0009aef7) main_mup2_pane_t

0x4285,	// (0x0008fbc1) mup2_visualizer_pane_ParamLimits

0x4285,	// (0x0008fbc1) mup2_visualizer_pane

0x4285,	// (0x0008fbc1) mup_progress_pane_cp_ParamLimits

0x4285,	// (0x0008fbc1) mup_progress_pane_cp

0x8e94,	// (0x000947d0) mup_volume_pane_cp_ParamLimits

0x8e94,	// (0x000947d0) mup_volume_pane_cp

0x162e,	// (0x0008cf6a) mup2_visualizer_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) mup2_visualizer_pane_g1

0x163c,	// (0x0008cf78) mup2_visualizer_pane_g2_ParamLimits

0x163c,	// (0x0008cf78) mup2_visualizer_pane_g2

0x163c,	// (0x0008cf78) mup2_visualizer_pane_g3_ParamLimits

0x163c,	// (0x0008cf78) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0009a9e0) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0009a9e0) mup2_visualizer_pane_g

0x2f43,	// (0x0008e87f) aid_size_cell_fmradio

0x8a28,	// (0x00094364) aid_height_parent_landcape

0x1c1e,	// (0x0008d55a) wml_content_pane_cp

0x1c26,	// (0x0008d562) wml_tabs_pane

0x1c2f,	// (0x0008d56b) popup_wml_miniature_window

0x1c37,	// (0x0008d573) scroll_pane_cp021

0x1c4b,	// (0x0008d587) wml_content_pane_comp8

0x1358,	// (0x0008cc94) bg_popup_sub_pane_cp05

0x470e,	// (0x0009004a) popup_wml_miniature_window_g1

0x4716,	// (0x00090052) wml_miniature_view_pane

0x8de1,	// (0x0009471d) aid_size_wml_view

0x8de9,	// (0x00094725) wml_miniature_view_pane_g1

0x8df2,	// (0x0009472e) wml_miniature_view_pane_g2

0x8dfb,	// (0x00094737) wml_miniature_view_pane_g3

0x8e03,	// (0x0009473f) wml_miniature_view_pane_g4

0x8e0b,	// (0x00094747) wml_miniature_view_pane_g5

0x8e13,	// (0x0009474f) wml_miniature_view_pane_g6

0x8e1b,	// (0x00094757) wml_miniature_view_pane_g7

0x8e23,	// (0x0009475f) wml_miniature_view_pane_g8

0x0007,

0xf5c8,	// (0x0009af04) wml_miniature_view_pane_g

0x471e,	// (0x0009005a) background_graphic_ParamLimits

0x471e,	// (0x0009005a) background_graphic

0x472a,	// (0x00090066) wml_tabs_2_pane

0x4733,	// (0x0009006f) wml_tabs_3_pane_ParamLimits

0x4733,	// (0x0009006f) wml_tabs_3_pane

0x4745,	// (0x00090081) wml_tabs_4_pane_ParamLimits

0x4745,	// (0x00090081) wml_tabs_4_pane

0x475b,	// (0x00090097) wml_tabs_5_pane_ParamLimits

0x475b,	// (0x00090097) wml_tabs_5_pane

0x4775,	// (0x000900b1) wml_tabs_pane_g2_ParamLimits

0x4775,	// (0x000900b1) wml_tabs_pane_g2

0x478a,	// (0x000900c6) wml_tabs_pane_g3_ParamLimits

0x478a,	// (0x000900c6) wml_tabs_pane_g3

0x479f,	// (0x000900db) wml_tabs_2_active_pane_ParamLimits

0x479f,	// (0x000900db) wml_tabs_2_active_pane

0x479f,	// (0x000900db) wml_tabs_2_passive_pane_ParamLimits

0x479f,	// (0x000900db) wml_tabs_2_passive_pane

0x8e2b,	// (0x00094767) wml_tabs_3_active_pane_cp_ParamLimits

0x8e2b,	// (0x00094767) wml_tabs_3_active_pane_cp

0x8e3c,	// (0x00094778) wml_tabs_3_passive_pane_ParamLimits

0x8e3c,	// (0x00094778) wml_tabs_3_passive_pane

0x8e4d,	// (0x00094789) wml_tabs_3_passive_pane_cp_ParamLimits

0x8e4d,	// (0x00094789) wml_tabs_3_passive_pane_cp

0x8e5e,	// (0x0009479a) tabs_4_active_pane

0x8e66,	// (0x000947a2) tabs_4_passive_pane

0x8e6e,	// (0x000947aa) tabs_4_passive_pane_cp

0x8e76,	// (0x000947b2) tabs_4_passive_pane_cp2

0x880e,	// (0x0009414a) aid_height_text

0x4285,	// (0x0008fbc1) mup_volume_cont_pane_ParamLimits

0x4285,	// (0x0008fbc1) mup_volume_cont_pane

0x0f2d,	// (0x0008c869) aid_size_cell_pinb

0x0f2d,	// (0x0008c869) aid_size_list_pinb

0x4285,	// (0x0008fbc1) mup2_volume_cont_pane_ParamLimits

0x4285,	// (0x0008fbc1) mup2_volume_cont_pane

0x8e7e,	// (0x000947ba) mup2_volume_cont_pane_g1_ParamLimits

0x8e7e,	// (0x000947ba) mup2_volume_cont_pane_g1

0x5bcb,	// (0x00091507) aid_size_cell_touch_ParamLimits

0x5bcb,	// (0x00091507) aid_size_cell_touch

0x5e8a,	// (0x000917c6) touch_pane_ParamLimits

0x5e8a,	// (0x000917c6) touch_pane

0x5e80,	// (0x000917bc) main_rss2_pane

0x47b6,	// (0x000900f2) listscroll_rss2_pane

0x47bf,	// (0x000900fb) rss2_navigation_pane

0x47c7,	// (0x00090103) list_rss2_pane

0x22b3,	// (0x0008dbef) scroll_pane_cp22

0x47cf,	// (0x0009010b) rss2_navigation_pane_g1

0x47d8,	// (0x00090114) rss2_navigation_pane_g2

0x47e0,	// (0x0009011c) rss2_navigation_pane_g3

0x0002,

0xf5d9,	// (0x0009af15) rss2_navigation_pane_g

0x47e8,	// (0x00090124) rss2_navigation_pane_t1

0x8eaa,	// (0x000947e6) rss2_list_single_pane_ParamLimits

0x8eaa,	// (0x000947e6) rss2_list_single_pane

0x47f6,	// (0x00090132) rss2_list_single_pane_t2

0x4804,	// (0x00090140) rss2_list_single_pane_t3_ParamLimits

0x4804,	// (0x00090140) rss2_list_single_pane_t3

0x4821,	// (0x0009015d) rss2_list_single_pane_t4

0x7a90,	// (0x000933cc) smil_status_pane_g1

0x8a3f,	// (0x0009437b) main_image2_pane_ParamLimits

0x8a3f,	// (0x0009437b) main_image2_pane

0x21b0,	// (0x0008daec) main_camera2_pane_g9_ParamLimits

0x21b0,	// (0x0008daec) main_camera2_pane_g9

0x8d89,	// (0x000946c5) main_camera2_pane_t5_ParamLimits

0x8d89,	// (0x000946c5) main_camera2_pane_t5

0x8d9d,	// (0x000946d9) main_camera2_pane_t6_ParamLimits

0x8d9d,	// (0x000946d9) main_camera2_pane_t6

0x8edb,	// (0x00094817) main_image2_pane_g1_ParamLimits

0x8edb,	// (0x00094817) main_image2_pane_g1

0x8546,	// (0x00093e82) smil2_video_pane_ParamLimits

0x8546,	// (0x00093e82) smil2_video_pane

0x5bff,	// (0x0009153b) aid_zoom_text_primary_cp

0x5e1b,	// (0x00091757) popup_preview_fixed_window

0x1b87,	// (0x0008d4c3) im_reading_pane_g1

0x8d7b,	// (0x000946b7) cams2_bc_adjust_pane_cp_ParamLimits

0x8d7b,	// (0x000946b7) cams2_bc_adjust_pane_cp

0x5e66,	// (0x000917a2) cams2_bc_adjust_pane_ParamLimits

0x5e66,	// (0x000917a2) cams2_bc_adjust_pane

0x063d,	// (0x0008bf79) cams2_bc_adjust_pane_g1

0x5e80,	// (0x000917bc) cams2_slider_pane

0x063d,	// (0x0008bf79) cams2_slider_pane_g1

0x063d,	// (0x0008bf79) cams2_slider_pane_g2

0x0006,

0xf5e0,	// (0x0009af1c) cams2_slider_pane_g

0x5f58,	// (0x00091894) calc_display_pane_ParamLimits

0x5f76,	// (0x000918b2) calc_paper_pane_ParamLimits

0x5f92,	// (0x000918ce) grid_calc_pane_ParamLimits

0x7c89,	// (0x000935c5) popup_clock_digital_window_t1_ParamLimits

0x2ee0,	// (0x0008e81c) main_image_pane_t1

0x5f3e,	// (0x0009187a) aid_size_cell_calc_ParamLimits

0x5f3e,	// (0x0009187a) aid_size_cell_calc

0x8a70,	// (0x000943ac) popup_blid_sat_info2_window_ParamLimits

0x8a70,	// (0x000943ac) popup_blid_sat_info2_window

0x482f,	// (0x0009016b) aid_size_cell_blid

0x4285,	// (0x0008fbc1) bg_popup_window_pane_cp07

0x484c,	// (0x00090188) grid_popup_blid_pane

0x4856,	// (0x00090192) heading_pane_cp05_ParamLimits

0x4856,	// (0x00090192) heading_pane_cp05

0x4920,	// (0x0009025c) cell_popup_blid_pane_ParamLimits

0x4920,	// (0x0009025c) cell_popup_blid_pane

0x4944,	// (0x00090280) cell_popup_blid_pane_g1

0x494c,	// (0x00090288) cell_popup_blid_pane_t1

0x4285,	// (0x0008fbc1) mup2_indicator_pane_ParamLimits

0x4285,	// (0x0008fbc1) mup2_indicator_pane

0x0f2d,	// (0x0008c869) mup2_visualizer_osc_pane

0x46f8,	// (0x00090034) mup2_visualizer_spec_pane_ParamLimits

0x46f8,	// (0x00090034) mup2_visualizer_spec_pane

0x0f2d,	// (0x0008c869) mup2_spec_half_pane

0x0f2d,	// (0x0008c869) mup2_spec_half_pane_cp

0x495a,	// (0x00090296) mup2_spec_bar_pane_ParamLimits

0x495a,	// (0x00090296) mup2_spec_bar_pane

0x1ad6,	// (0x0008d412) mup2_spec_bar_pane_g1

0x4979,	// (0x000902b5) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009af42) mup2_spec_bar_pane_g

0x0f2d,	// (0x0008c869) mup2_osc_middle_pane

0x1ad6,	// (0x0008d412) mup2_visualizer_osc_pane_g1

0x0f65,	// (0x0008c8a1) popup_number_entry_window_t1_ParamLimits

0x0f78,	// (0x0008c8b4) popup_number_entry_window_t2_ParamLimits

0x0f8a,	// (0x0008c8c6) popup_number_entry_window_t3_ParamLimits

0x5ee1,	// (0x0009181d) popup_number_entry_window_t5_ParamLimits

0x5ee1,	// (0x0009181d) popup_number_entry_window_t5

0xf045,	// (0x0009a981) popup_number_entry_window_t_ParamLimits

0x0f9c,	// (0x0008c8d8) text_title_cp2_ParamLimits

0x8246,	// (0x00093b82) aid_hotspot_pointer_text2_pane

0x82d4,	// (0x00093c10) main_viewer_pane_g9_ParamLimits

0x82d4,	// (0x00093c10) main_viewer_pane_g9

0x1dc0,	// (0x0008d6fc) cale_month_pane_t1_ParamLimits

0x1dfd,	// (0x0008d739) bg_cale_pane_ParamLimits

0x1e15,	// (0x0008d751) list_cale_pane_ParamLimits

0x1e26,	// (0x0008d762) listscroll_cale_day_pane_t1

0x1e38,	// (0x0008d774) scroll_pane_cp09_ParamLimits

0x7f0c,	// (0x00093848) main_mup_eq_pane_t1_ParamLimits

0x7f0c,	// (0x00093848) main_mup_eq_pane_t1

0x7f26,	// (0x00093862) main_mup_eq_pane_t2_ParamLimits

0x7f26,	// (0x00093862) main_mup_eq_pane_t2

0x7f40,	// (0x0009387c) main_mup_eq_pane_t3_ParamLimits

0x7f40,	// (0x0009387c) main_mup_eq_pane_t3

0x7f58,	// (0x00093894) main_mup_eq_pane_t4_ParamLimits

0x7f58,	// (0x00093894) main_mup_eq_pane_t4

0x7f70,	// (0x000938ac) main_mup_eq_pane_t5_ParamLimits

0x7f70,	// (0x000938ac) main_mup_eq_pane_t5

0x7f88,	// (0x000938c4) main_mup_eq_pane_t6_ParamLimits

0x7f88,	// (0x000938c4) main_mup_eq_pane_t6

0x7f9c,	// (0x000938d8) main_mup_eq_pane_t7_ParamLimits

0x7f9c,	// (0x000938d8) main_mup_eq_pane_t7

0x7fb0,	// (0x000938ec) main_mup_eq_pane_t8_ParamLimits

0x7fb0,	// (0x000938ec) main_mup_eq_pane_t8

0x7fc6,	// (0x00093902) main_mup_eq_pane_t9_ParamLimits

0x7fc6,	// (0x00093902) main_mup_eq_pane_t9

0x7fde,	// (0x0009391a) main_mup_eq_pane_t10_ParamLimits

0x7fde,	// (0x0009391a) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0009ace5) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0009ace5) main_mup_eq_pane_t

0x809b,	// (0x000939d7) mup_equalizer_pane_cp5_ParamLimits

0x80b1,	// (0x000939ed) mup_equalizer_pane_cp6_ParamLimits

0x80c9,	// (0x00093a05) mup_equalizer_pane_cp7_ParamLimits

0x5e80,	// (0x000917bc) main_gallery_pane

0x4696,	// (0x0008ffd2) smil2_volume_pane

0x46b1,	// (0x0008ffed) smil_status_volume_pane_g1_ParamLimits

0x469e,	// (0x0008ffda) smil_status_volume_pane_g2_ParamLimits

0x8c2e,	// (0x0009456a) smil_status_volume_pane_g3_ParamLimits

0xf55f,	// (0x0009ae9b) smil_status_volume_pane_g_ParamLimits

0x4285,	// (0x0008fbc1) bg_popup_window_pane_cp07_ParamLimits

0x4837,	// (0x00090173) blid_firmament_pane

0x1620,	// (0x0008cf5c) aid_size_cell_gallery_ParamLimits

0x1620,	// (0x0008cf5c) aid_size_cell_gallery

0x1620,	// (0x0008cf5c) grid_gallery_pane_ParamLimits

0x1620,	// (0x0008cf5c) grid_gallery_pane

0x25ed,	// (0x0008df29) cell_gallery_pane_ParamLimits

0x25ed,	// (0x0008df29) cell_gallery_pane

0x0f37,	// (0x0008c873) bg_cell_gallery_focus_pane_ParamLimits

0x0f37,	// (0x0008c873) bg_cell_gallery_focus_pane

0x162e,	// (0x0008cf6a) cell_gallery_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) cell_gallery_pane_g1

0x162e,	// (0x0008cf6a) cell_gallery_pane_g2_ParamLimits

0x162e,	// (0x0008cf6a) cell_gallery_pane_g2

0x162e,	// (0x0008cf6a) cell_gallery_pane_g3_ParamLimits

0x162e,	// (0x0008cf6a) cell_gallery_pane_g3

0x163c,	// (0x0008cf78) cell_gallery_pane_g4_ParamLimits

0x163c,	// (0x0008cf78) cell_gallery_pane_g4

0x0003,

0xf60b,	// (0x0009af47) cell_gallery_pane_g_ParamLimits

0xf60b,	// (0x0009af47) cell_gallery_pane_g

0x4983,	// (0x000902bf) bg_cell_gallery_focus_pane_g1

0x498b,	// (0x000902c7) bg_cell_gallery_focus_pane_g2

0x4993,	// (0x000902cf) bg_cell_gallery_focus_pane_g3

0x499b,	// (0x000902d7) bg_cell_gallery_focus_pane_g4

0x49a3,	// (0x000902df) bg_cell_gallery_focus_pane_g5

0x49ab,	// (0x000902e7) bg_cell_gallery_focus_pane_g6

0x49b3,	// (0x000902ef) bg_cell_gallery_focus_pane_g7

0x49bb,	// (0x000902f7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf614,	// (0x0009af50) bg_cell_gallery_focus_pane_g

0x49c3,	// (0x000902ff) aid_firma_cardinal

0x49d7,	// (0x00090313) blid_firmament_pane_t1

0x49ee,	// (0x0009032a) blid_firmament_pane_t2

0x4a05,	// (0x00090341) blid_firmament_pane_t3

0x4a1c,	// (0x00090358) blid_firmament_pane_t4

0x0003,

0xf625,	// (0x0009af61) blid_firmament_pane_t

0x4a33,	// (0x0009036f) blid_sat_info_pane

0x1ad6,	// (0x0008d412) blid_sat_info_pane_g1

0x1ad6,	// (0x0008d412) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0009acd9) blid_sat_info_pane_g

0x4a43,	// (0x0009037f) blid_sat_info_pane_t1

0x4a51,	// (0x0009038d) smil2_volume_content_pane

0x4a5a,	// (0x00090396) smil2_volume_pane_g1

0x196e,	// (0x0008d2aa) smil2_volume_content_pane_g1

0x4a62,	// (0x0009039e) smil2_volume_content_pane_g2

0x4a6b,	// (0x000903a7) smil2_volume_content_pane_g3

0x4a74,	// (0x000903b0) smil2_volume_content_pane_g4

0x4a7d,	// (0x000903b9) smil2_volume_content_pane_g5

0x4a86,	// (0x000903c2) smil2_volume_content_pane_g6

0x4a8f,	// (0x000903cb) smil2_volume_content_pane_g7

0x4a98,	// (0x000903d4) smil2_volume_content_pane_g8

0x4aa1,	// (0x000903dd) smil2_volume_content_pane_g9

0x4aaa,	// (0x000903e6) smil2_volume_content_pane_g10

0x0009,

0xf62e,	// (0x0009af6a) smil2_volume_content_pane_g

0x6580,	// (0x00091ebc) cale_week_day_heading_pane_t1_ParamLimits

0x659b,	// (0x00091ed7) cale_week_day_heading_pane_t2_ParamLimits

0x65b6,	// (0x00091ef2) cale_week_day_heading_pane_t3_ParamLimits

0x65d1,	// (0x00091f0d) cale_week_day_heading_pane_t4_ParamLimits

0x65ec,	// (0x00091f28) cale_week_day_heading_pane_t5_ParamLimits

0x6607,	// (0x00091f43) cale_week_day_heading_pane_t6_ParamLimits

0x6622,	// (0x00091f5e) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0009aa88) cale_week_day_heading_pane_t_ParamLimits

0x1a4e,	// (0x0008d38a) bg_cale_side_pane_ParamLimits

0x663d,	// (0x00091f79) cale_week_time_pane_t1_ParamLimits

0x6657,	// (0x00091f93) cale_week_time_pane_t2_ParamLimits

0x6671,	// (0x00091fad) cale_week_time_pane_t3_ParamLimits

0x668b,	// (0x00091fc7) cale_week_time_pane_t4_ParamLimits

0x66a5,	// (0x00091fe1) cale_week_time_pane_t5_ParamLimits

0x66bf,	// (0x00091ffb) cale_week_time_pane_t6_ParamLimits

0x66dd,	// (0x00092019) cale_week_time_pane_t7_ParamLimits

0x66ff,	// (0x0009203b) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0009aa97) cale_week_time_pane_t_ParamLimits

0x6723,	// (0x0009205f) cell_cale_week_pane_g2_ParamLimits

0x1a4e,	// (0x0008d38a) bg_cale_side_pane_cp01_ParamLimits

0x7885,	// (0x000931c1) cale_month_week_pane_t1_ParamLimits

0x789e,	// (0x000931da) cale_month_week_pane_t2_ParamLimits

0x78b7,	// (0x000931f3) cale_month_week_pane_t3_ParamLimits

0x78d0,	// (0x0009320c) cale_month_week_pane_t4_ParamLimits

0x78e9,	// (0x00093225) cale_month_week_pane_t5_ParamLimits

0x790a,	// (0x00093246) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0009ab65) cale_month_week_pane_t_ParamLimits

0x7a4d,	// (0x00093389) cell_cale_month_pane_g1_ParamLimits

0x5e80,	// (0x000917bc) main_cale_event_viewer_pane

0x0f2d,	// (0x0008c869) listscroll_cale_event_viewer_pane

0x4ab3,	// (0x000903ef) list_cale_ev_pane

0x4abb,	// (0x000903f7) scroll_pane_cp023

0x4ac7,	// (0x00090403) field_cale_ev_pane_ParamLimits

0x4ac7,	// (0x00090403) field_cale_ev_pane

0x4ae5,	// (0x00090421) field_cale_ev_content_pane_ParamLimits

0x4ae5,	// (0x00090421) field_cale_ev_content_pane

0x4af1,	// (0x0009042d) field_cale_ev_pane_g1_ParamLimits

0x4af1,	// (0x0009042d) field_cale_ev_pane_g1

0x4afd,	// (0x00090439) field_cale_ev_pane_g2_ParamLimits

0x4afd,	// (0x00090439) field_cale_ev_pane_g2

0x4b15,	// (0x00090451) field_cale_ev_pane_g3_ParamLimits

0x4b15,	// (0x00090451) field_cale_ev_pane_g3

0x0002,

0xf643,	// (0x0009af7f) field_cale_ev_pane_g_ParamLimits

0xf643,	// (0x0009af7f) field_cale_ev_pane_g

0x4b2d,	// (0x00090469) field_cale_ev_pane_t1_ParamLimits

0x4b2d,	// (0x00090469) field_cale_ev_pane_t1

0x19c1,	// (0x0008d2fd) field_cale_ev_content_pane_t1_ParamLimits

0x19c1,	// (0x0008d2fd) field_cale_ev_content_pane_t1

0x2690,	// (0x0008dfcc) bg_button_pane_cp01

0x6311,	// (0x00091c4d) listscroll_cale_week_pane_ParamLimits

0x19f9,	// (0x0008d335) popup_toolbar_window_cp01

0x1a1f,	// (0x0008d35b) listscroll_cale_week_pane_t1_ParamLimits

0x6311,	// (0x00091c4d) listscroll_cale_day_pane_ParamLimits

0x19f9,	// (0x0008d335) popup_toolbar_window_cp02

0x1e26,	// (0x0008d762) listscroll_cale_day_pane_t1_ParamLimits

0x6311,	// (0x00091c4d) main_cale_month_pane_ParamLimits

0x8b77,	// (0x000944b3) popup_toolbar_window_cp03_ParamLimits

0x8b77,	// (0x000944b3) popup_toolbar_window_cp03

0x845c,	// (0x00093d98) main_image_pane_g2_ParamLimits

0x845c,	// (0x00093d98) main_image_pane_g2

0x8468,	// (0x00093da4) main_image_pane_g3_ParamLimits

0x8468,	// (0x00093da4) main_image_pane_g3

0x0002,

0xf43b,	// (0x0009ad77) main_image_pane_g_ParamLimits

0xf43b,	// (0x0009ad77) main_image_pane_g

0x2ee0,	// (0x0008e81c) main_image_pane_t1_ParamLimits

0x8474,	// (0x00093db0) main_image_pane_t2_ParamLimits

0x8474,	// (0x00093db0) main_image_pane_t2

0x8486,	// (0x00093dc2) main_image_pane_t3_ParamLimits

0x8486,	// (0x00093dc2) main_image_pane_t3

0x8498,	// (0x00093dd4) main_image_pane_t4_ParamLimits

0x8498,	// (0x00093dd4) main_image_pane_t4

0x0003,

0xf442,	// (0x0009ad7e) main_image_pane_t_ParamLimits

0xf442,	// (0x0009ad7e) main_image_pane_t

0x84aa,	// (0x00093de6) popup_image_details_window_cp01

0x84b4,	// (0x00093df0) popup_toobar_trans_pane_cp01_ParamLimits

0x84b4,	// (0x00093df0) popup_toobar_trans_pane_cp01

0x8ac7,	// (0x00094403) popup_image_details_window_ParamLimits

0x8ac7,	// (0x00094403) popup_image_details_window

0x8ad5,	// (0x00094411) popup_image_focus_window

0x5e66,	// (0x000917a2) camera2_autofocus_pane_ParamLimits

0x5e66,	// (0x000917a2) camera2_autofocus_pane

0x0f2d,	// (0x0008c869) bg_popup_sub_pane_cp06

0x4b44,	// (0x00090480) popup_image_focus_window_g1

0x4b4c,	// (0x00090488) popup_image_focus_window_g2

0x4b54,	// (0x00090490) popup_image_focus_window_g3

0x4b5c,	// (0x00090498) popup_image_focus_window_g4

0x0003,

0xf64a,	// (0x0009af86) popup_image_focus_window_g

0x4b64,	// (0x000904a0) popup_image_focus_window_t1

0x4b72,	// (0x000904ae) popup_image_focus_window_t2

0x4b82,	// (0x000904be) popup_image_focus_window_t3

0x0002,

0xf653,	// (0x0009af8f) popup_image_focus_window_t

0x162e,	// (0x0008cf6a) camera2_autofocus_pane_g1

0x0f37,	// (0x0008c873) bg_tb_trans_pane_cp01

0x4b90,	// (0x000904cc) popup_image_details_window_g1

0x4ba3,	// (0x000904df) popup_image_details_window_g2

0x0002,

0xf665,	// (0x0009afa1) popup_image_details_window_g

0x4bcc,	// (0x00090508) popup_image_details_window_t1

0x4bde,	// (0x0009051a) popup_image_details_window_t2

0x4bf7,	// (0x00090533) popup_image_details_window_t3

0x4c0b,	// (0x00090547) popup_image_details_window_t4

0x4c26,	// (0x00090562) popup_image_details_window_t5

0x0004,

0xf66c,	// (0x0009afa8) popup_image_details_window_t

0x168c,	// (0x0008cfc8) bg_calc_paper_pane_ParamLimits

0x5e80,	// (0x000917bc) grid_highlight_pane_cp013

0x608f,	// (0x000919cb) list_calc_pane_ParamLimits

0x60a1,	// (0x000919dd) scroll_pane_cp024

0x16a0,	// (0x0008cfdc) bg_calc_display_pane_ParamLimits

0x60a9,	// (0x000919e5) calc_display_pane_t1_ParamLimits

0x60be,	// (0x000919fa) calc_display_pane_t2_ParamLimits

0x60d3,	// (0x00091a0f) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0009aa08) calc_display_pane_t_ParamLimits

0x61ac,	// (0x00091ae8) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0009aa25) cell_calc_pane_g

0x61b5,	// (0x00091af1) cell_calc_pane_t1

0x16f5,	// (0x0008d031) grid_highlight_pane_cp02_ParamLimits

0x170b,	// (0x0008d047) toolbar_button_pane_cp01_ParamLimits

0x170b,	// (0x0008d047) toolbar_button_pane_cp01

0x2f25,	// (0x0008e861) temp_image_control_pane_ParamLimits

0x2f25,	// (0x0008e861) temp_image_control_pane

0x8a3f,	// (0x0009437b) main_mp3_pane

0x4c40,	// (0x0009057c) temp_image_control_pane_g1_ParamLimits

0x4c40,	// (0x0009057c) temp_image_control_pane_g1

0x4c4e,	// (0x0009058a) temp_image_control_pane_g2_ParamLimits

0x4c4e,	// (0x0009058a) temp_image_control_pane_g2

0x4c60,	// (0x0009059c) temp_image_control_pane_g3_ParamLimits

0x4c60,	// (0x0009059c) temp_image_control_pane_g3

0x8ee7,	// (0x00094823) temp_image_control_pane_g4_ParamLimits

0x8ee7,	// (0x00094823) temp_image_control_pane_g4

0x0003,

0xf677,	// (0x0009afb3) temp_image_control_pane_g_ParamLimits

0xf677,	// (0x0009afb3) temp_image_control_pane_g

0x4c40,	// (0x0009057c) main_mp3_pane_g1

0x8ef8,	// (0x00094834) main_mp3_pane_g2

0x0007,

0xf680,	// (0x0009afbc) main_mp3_pane_g

0x4c95,	// (0x000905d1) main_mp3_pane_t1

0x163c,	// (0x0008cf78) main_camera_pane_g8_ParamLimits

0x163c,	// (0x0008cf78) main_camera_pane_g8

0x68cd,	// (0x00092209) main_video_pane_g7_ParamLimits

0x68cd,	// (0x00092209) main_video_pane_g7

0x8d89,	// (0x000946c5) main_camera2_pane_t7_ParamLimits

0x8d89,	// (0x000946c5) main_camera2_pane_t7

0x1bde,	// (0x0008d51a) scroll_pane_cp025_ParamLimits

0x1bde,	// (0x0008d51a) scroll_pane_cp025

0x1bf2,	// (0x0008d52e) scroll_pane_cp026_ParamLimits

0x1bf2,	// (0x0008d52e) scroll_pane_cp026

0x1c01,	// (0x0008d53d) wml_content_pane_ParamLimits

0x5e80,	// (0x000917bc) main_touch_calib_pane

0x8f9c,	// (0x000948d8) main_touch_calib_pane_g1

0x8fa8,	// (0x000948e4) main_touch_calib_pane_g2

0x8fb4,	// (0x000948f0) main_touch_calib_pane_g3

0x8fc0,	// (0x000948fc) main_touch_calib_pane_g4

0x0003,

0xf69e,	// (0x0009afda) main_touch_calib_pane_g

0x8fcc,	// (0x00094908) main_touch_calib_pane_t1

0x8fe5,	// (0x00094921) main_touch_calib_pane_t2

0x0004,

0xf6a7,	// (0x0009afe3) main_touch_calib_pane_t

0x238f,	// (0x0008dccb) mup_progress_pane_cp02

0x23e4,	// (0x0008dd20) navi_pane_g1

0x249f,	// (0x0008dddb) navi_pane_mp_t3

0x8a3f,	// (0x0009437b) main_mp3_pane_ParamLimits

0x8bb4,	// (0x000944f0) navi_pane_ParamLimits

0x4c40,	// (0x0009057c) main_mp3_pane_g1_ParamLimits

0x8ef8,	// (0x00094834) main_mp3_pane_g2_ParamLimits

0x8f04,	// (0x00094840) main_mp3_pane_g3_ParamLimits

0x8f04,	// (0x00094840) main_mp3_pane_g3

0x8f10,	// (0x0009484c) main_mp3_pane_g4_ParamLimits

0x8f10,	// (0x0009484c) main_mp3_pane_g4

0x162e,	// (0x0008cf6a) main_mp3_pane_g5_ParamLimits

0x162e,	// (0x0008cf6a) main_mp3_pane_g5

0x4c70,	// (0x000905ac) main_mp3_pane_g6_ParamLimits

0x4c70,	// (0x000905ac) main_mp3_pane_g6

0x4c7d,	// (0x000905b9) main_mp3_pane_g7_ParamLimits

0x4c7d,	// (0x000905b9) main_mp3_pane_g7

0x4c89,	// (0x000905c5) main_mp3_pane_g8_ParamLimits

0x4c89,	// (0x000905c5) main_mp3_pane_g8

0xf680,	// (0x0009afbc) main_mp3_pane_g_ParamLimits

0x8f1c,	// (0x00094858) main_mp3_pane_t2

0x8f2c,	// (0x00094868) main_mp3_pane_t3

0x4ca3,	// (0x000905df) main_mp3_pane_t4

0x4cb1,	// (0x000905ed) main_mp3_pane_t5

0x0005,

0xf691,	// (0x0009afcd) main_mp3_pane_t

0x4cbf,	// (0x000905fb) mup_progress_pane_cp01

0x5bff,	// (0x0009153b) aid_zoom_text_secondary2

0x4ab3,	// (0x000903ef) list_cale_ev2_pane

0x4abb,	// (0x000903f7) scroll_pane_cp023_ParamLimits

0x9040,	// (0x0009497c) field_cale_ev2_pane_ParamLimits

0x9040,	// (0x0009497c) field_cale_ev2_pane

0x9069,	// (0x000949a5) field_cale_ev2_pane_g1_ParamLimits

0x9069,	// (0x000949a5) field_cale_ev2_pane_g1

0x9075,	// (0x000949b1) field_cale_ev2_pane_g2_ParamLimits

0x9075,	// (0x000949b1) field_cale_ev2_pane_g2

0x908d,	// (0x000949c9) field_cale_ev2_pane_g3_ParamLimits

0x908d,	// (0x000949c9) field_cale_ev2_pane_g3

0x0003,

0xf6b2,	// (0x0009afee) field_cale_ev2_pane_g_ParamLimits

0xf6b2,	// (0x0009afee) field_cale_ev2_pane_g

0xefcc,	// (0x0009a908) field_cale_ev2_pane_t1_ParamLimits

0xefcc,	// (0x0009a908) field_cale_ev2_pane_t1

0xefe3,	// (0x0009a91f) field_cale_ev2_pane_t2_ParamLimits

0xefe3,	// (0x0009a91f) field_cale_ev2_pane_t2

0x0001,

0xf6bb,	// (0x0009aff7) field_cale_ev2_pane_t_ParamLimits

0xf6bb,	// (0x0009aff7) field_cale_ev2_pane_t

0x833c,	// (0x00093c78) main_postcard_pane_g5_ParamLimits

0x833c,	// (0x00093c78) main_postcard_pane_g5

0x834a,	// (0x00093c86) main_postcard_pane_g6_ParamLimits

0x834a,	// (0x00093c86) main_postcard_pane_g6

0x1620,	// (0x0008cf5c) camera2_autofocus_pane_cp_ParamLimits

0x1620,	// (0x0008cf5c) camera2_autofocus_pane_cp

0x8a3f,	// (0x0009437b) main_mup3_pane

0x90e4,	// (0x00094a20) main_mup3_pane_g1_ParamLimits

0x90e4,	// (0x00094a20) main_mup3_pane_g1

0x9105,	// (0x00094a41) main_mup3_pane_g2_ParamLimits

0x9105,	// (0x00094a41) main_mup3_pane_g2

0x917d,	// (0x00094ab9) main_mup3_pane_g3_ParamLimits

0x917d,	// (0x00094ab9) main_mup3_pane_g3

0x91c0,	// (0x00094afc) main_mup3_pane_g4_ParamLimits

0x91c0,	// (0x00094afc) main_mup3_pane_g4

0x9203,	// (0x00094b3f) main_mup3_pane_g5_ParamLimits

0x9203,	// (0x00094b3f) main_mup3_pane_g5

0x9246,	// (0x00094b82) main_mup3_pane_g6_ParamLimits

0x9246,	// (0x00094b82) main_mup3_pane_g6

0x163c,	// (0x0008cf78) main_mup3_pane_g7_ParamLimits

0x163c,	// (0x0008cf78) main_mup3_pane_g7

0x0007,

0xf6cb,	// (0x0009b007) main_mup3_pane_g_ParamLimits

0xf6cb,	// (0x0009b007) main_mup3_pane_g

0x92bc,	// (0x00094bf8) main_mup3_pane_t1_ParamLimits

0x92bc,	// (0x00094bf8) main_mup3_pane_t1

0x932b,	// (0x00094c67) main_mup3_pane_t2_ParamLimits

0x932b,	// (0x00094c67) main_mup3_pane_t2

0x93f4,	// (0x00094d30) main_mup3_pane_t4_ParamLimits

0x93f4,	// (0x00094d30) main_mup3_pane_t4

0x9442,	// (0x00094d7e) main_mup3_pane_t5_ParamLimits

0x9442,	// (0x00094d7e) main_mup3_pane_t5

0x94f2,	// (0x00094e2e) main_mup3_pane_t6_ParamLimits

0x94f2,	// (0x00094e2e) main_mup3_pane_t6

0x0005,

0xf6dc,	// (0x0009b018) main_mup3_pane_t_ParamLimits

0xf6dc,	// (0x0009b018) main_mup3_pane_t

0x959e,	// (0x00094eda) mup3_progress_pane_ParamLimits

0x959e,	// (0x00094eda) mup3_progress_pane

0x961c,	// (0x00094f58) popup_mup3_control_window_ParamLimits

0x961c,	// (0x00094f58) popup_mup3_control_window

0xe4d7,	// (0x00099e13) popup_mup3_text_window

0x9635,	// (0x00094f71) mup3_progress_pane_t1

0x9654,	// (0x00094f90) mup3_progress_pane_t2

0xe4df,	// (0x00099e1b) mup3_progress_pane_t3

0x0002,

0xf6e9,	// (0x0009b025) mup3_progress_pane_t

0xe4fc,	// (0x00099e38) mup_progress_pane_cp03

0x0f2d,	// (0x0008c869) bg_tb_trans_pane_cp04

0x9673,	// (0x00094faf) mup3_volume_pane

0x967b,	// (0x00094fb7) popup_mup3_control_window_g1

0x9684,	// (0x00094fc0) mup3_volume_pane_g1

0x968d,	// (0x00094fc9) mup3_volume_pane_g2

0x9696,	// (0x00094fd2) mup3_volume_pane_g3

0x0002,

0xf6f0,	// (0x0009b02c) mup3_volume_pane_g

0x0f2d,	// (0x0008c869) bg_tb_trans_pane_cp03

0xe50c,	// (0x00099e48) popup_mup3_text_window_g1

0xe514,	// (0x00099e50) popup_mup3_text_window_t1

0x16e8,	// (0x0008d024) list_calc_item_pane_g1_ParamLimits

0x47ad,	// (0x000900e9) mup_volume_pane_cp_g1

0x8ffe,	// (0x0009493a) main_touch_calib_pane_t3

0x9014,	// (0x00094950) main_touch_calib_pane_t4

0x902a,	// (0x00094966) main_touch_calib_pane_t5

0x5bb7,	// (0x000914f3) aid_cell_size_toolbar2

0x5bbf,	// (0x000914fb) aid_popup3_width_pane

0x5ac7,	// (0x00091403) aid_zoom_text_msg_primary

0x67cf,	// (0x0009210b) vorec_t7

0x16ac,	// (0x0008cfe8) bg_calc_paper_pane_g1_ParamLimits

0x16c4,	// (0x0008d000) bg_calc_paper_pane_g2_ParamLimits

0x16b8,	// (0x0008cff4) bg_calc_paper_pane_g3_ParamLimits

0x16dc,	// (0x0008d018) bg_calc_paper_pane_g4_ParamLimits

0x16d0,	// (0x0008d00c) bg_calc_paper_pane_g5_ParamLimits

0x6112,	// (0x00091a4e) bg_calc_paper_pane_g6_ParamLimits

0x6123,	// (0x00091a5f) bg_calc_paper_pane_g7_ParamLimits

0x6134,	// (0x00091a70) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0009aa0f) bg_calc_paper_pane_g_ParamLimits

0x6145,	// (0x00091a81) calc_bg_paper_pane_g9_ParamLimits

0x1620,	// (0x0008cf5c) image_qvga_pane_ParamLimits

0x1620,	// (0x0008cf5c) image_qvga_pane

0x15b3,	// (0x0008ceef) bg_popup_sub_pane_cp04_ParamLimits

0x2e5c,	// (0x0008e798) popup_mup_playback_window_g1_ParamLimits

0x2e68,	// (0x0008e7a4) popup_mup_playback_window_t1_ParamLimits

0x2e7d,	// (0x0008e7b9) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x0009ad72) popup_mup_playback_window_t_ParamLimits

0x162e,	// (0x0008cf6a) main_mup2_pane_g3_ParamLimits

0x162e,	// (0x0008cf6a) main_mup2_pane_g3

0x6ab4,	// (0x000923f0) popup_toolbar_window_cp04

0x38ee,	// (0x0008f22a) popup_call2_audio_second_window_g3_ParamLimits

0x38ee,	// (0x0008f22a) popup_call2_audio_second_window_g3

0x3d06,	// (0x0008f642) popup_call2_audio_first_window_g4_ParamLimits

0x3d06,	// (0x0008f642) popup_call2_audio_first_window_g4

0x4347,	// (0x0008fc83) popup_call2_audio_in_window_g4_ParamLimits

0x4347,	// (0x0008fc83) popup_call2_audio_in_window_g4

0x844f,	// (0x00093d8b) aid_area_sk_bg_cut_ParamLimits

0x844f,	// (0x00093d8b) aid_area_sk_bg_cut

0x2e92,	// (0x0008e7ce) aid_area_sk_bg_cut_2_ParamLimits

0x2e92,	// (0x0008e7ce) aid_area_sk_bg_cut_2

0x0f2d,	// (0x0008c869) aid_placing_details_win

0x0f2d,	// (0x0008c869) aid_placing_details_win_2

0x162e,	// (0x0008cf6a) camera2_autofocus_pane_g1_ParamLimits

0x5e0c,	// (0x00091748) popup_fixed_preview_cale_window_ParamLimits

0x5e0c,	// (0x00091748) popup_fixed_preview_cale_window

0x252f,	// (0x0008de6b) navi_slider_pane_g3

0x2526,	// (0x0008de62) navi_slider_pane_g4

0x251d,	// (0x0008de59) navi_slider_pane_g5

0x252f,	// (0x0008de6b) navi_slider_pane_g6

0x7ee0,	// (0x0009381c) navi_slider_pane_g7

0x265d,	// (0x0008df99) mup_scale_pane_g3

0x2666,	// (0x0008dfa2) mup_scale_pane_g4

0x266f,	// (0x0008dfab) mup_scale_pane_g5

0x80e1,	// (0x00093a1d) mup_scale_pane_g6

0x80ea,	// (0x00093a26) mup_scale_pane_g7

0x063d,	// (0x0008bf79) cams2_slider_pane_g3

0x063d,	// (0x0008bf79) cams2_slider_pane_g4

0x063d,	// (0x0008bf79) cams2_slider_pane_g5

0x063d,	// (0x0008bf79) cams2_slider_pane_g6

0x063d,	// (0x0008bf79) cams2_slider_pane_g7

0x1ad6,	// (0x0008d412) camera2_autofocus_pane_cp_g1

0x461d,	// (0x0008ff59) bg_popup_preview_window_pane_cp02_ParamLimits

0x461d,	// (0x0008ff59) bg_popup_preview_window_pane_cp02

0xe522,	// (0x00099e5e) list_fp_cale_pane_ParamLimits

0xe522,	// (0x00099e5e) list_fp_cale_pane

0xe52e,	// (0x00099e6a) popup_fixed_preview_cale_window_t1_ParamLimits

0xe52e,	// (0x00099e6a) popup_fixed_preview_cale_window_t1

0x969f,	// (0x00094fdb) popup_fixed_preview_cale_window_t2_ParamLimits

0x969f,	// (0x00094fdb) popup_fixed_preview_cale_window_t2

0x96b4,	// (0x00094ff0) popup_fixed_preview_cale_window_t3_ParamLimits

0x96b4,	// (0x00094ff0) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f7,	// (0x0009b033) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f7,	// (0x0009b033) popup_fixed_preview_cale_window_t

0x96c9,	// (0x00095005) list_single_fp_cale_pane_ParamLimits

0x96c9,	// (0x00095005) list_single_fp_cale_pane

0xe54c,	// (0x00099e88) list_single_fp_cale_pane_g1_ParamLimits

0xe54c,	// (0x00099e88) list_single_fp_cale_pane_g1

0xe558,	// (0x00099e94) list_single_fp_cale_pane_g2_ParamLimits

0xe558,	// (0x00099e94) list_single_fp_cale_pane_g2

0x0002,

0xf6fe,	// (0x0009b03a) list_single_fp_cale_pane_g_ParamLimits

0xf6fe,	// (0x0009b03a) list_single_fp_cale_pane_g

0xe571,	// (0x00099ead) list_single_fp_cale_pane_t1_ParamLimits

0xe571,	// (0x00099ead) list_single_fp_cale_pane_t1

0xe583,	// (0x00099ebf) list_single_fp_cale_pane_t2_ParamLimits

0xe583,	// (0x00099ebf) list_single_fp_cale_pane_t2

0x0001,

0xf705,	// (0x0009b041) list_single_fp_cale_pane_t_ParamLimits

0xf705,	// (0x0009b041) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5e80,	// (0x000917bc) main_dialer_pane

0x0f2d,	// (0x0008c869) aid_cell_size_keypad

0x0f2d,	// (0x0008c869) dialer_ne_pane

0x0f2d,	// (0x0008c869) grid_dialer_command_1_pane

0x0f2d,	// (0x0008c869) grid_dialer_command_2_pane

0x0f2d,	// (0x0008c869) grid_dialer_keypad_pane

0x4285,	// (0x0008fbc1) bg_popup_call_pane_cp06_ParamLimits

0x4285,	// (0x0008fbc1) bg_popup_call_pane_cp06

0x4285,	// (0x0008fbc1) dialer_ne_clear_pane_ParamLimits

0x4285,	// (0x0008fbc1) dialer_ne_clear_pane

0x1ad6,	// (0x0008d412) dialer_ne_pane_g1

0x2397,	// (0x0008dcd3) dialer_ne_pane_t1_ParamLimits

0x2397,	// (0x0008dcd3) dialer_ne_pane_t1

0xe5b6,	// (0x00099ef2) dialer_ne_pane_t2_ParamLimits

0xe5b6,	// (0x00099ef2) dialer_ne_pane_t2

0x96dc,	// (0x00095018) dialer_ne_pane_t3_ParamLimits

0x96dc,	// (0x00095018) dialer_ne_pane_t3

0x0002,

0xf70a,	// (0x0009b046) dialer_ne_pane_t_ParamLimits

0xf70a,	// (0x0009b046) dialer_ne_pane_t

0x96dc,	// (0x00095018) dialer_ne_pane_t3_copy1_ParamLimits

0x96dc,	// (0x00095018) dialer_ne_pane_t3_copy1

0xe5d3,	// (0x00099f0f) cell_dialer_keypad_pane_ParamLimits

0xe5d3,	// (0x00099f0f) cell_dialer_keypad_pane

0x0f37,	// (0x0008c873) cell_dialer_command_1_pane_ParamLimits

0x0f37,	// (0x0008c873) cell_dialer_command_1_pane

0xe5ea,	// (0x00099f26) cell_dialer_command_2_pane_ParamLimits

0xe5ea,	// (0x00099f26) cell_dialer_command_2_pane

0x0f37,	// (0x0008c873) bg_button_pane_cp02_ParamLimits

0x0f37,	// (0x0008c873) bg_button_pane_cp02

0x162e,	// (0x0008cf6a) cell_dialer_keypad_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) cell_dialer_keypad_pane_g1

0x0f37,	// (0x0008c873) bg_button_pane_cp03_ParamLimits

0x0f37,	// (0x0008c873) bg_button_pane_cp03

0x162e,	// (0x0008cf6a) cell_dialer_command_1_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) cell_dialer_command_1_pane_g1

0x0f2d,	// (0x0008c869) bg_button_pane_cp04

0x1ad6,	// (0x0008d412) cell_dialer_command_2_pane_g1

0x0f2d,	// (0x0008c869) bg_button_pane_cp06

0x1ad6,	// (0x0008d412) dialer_ne_clear_pane_g1

0x23f0,	// (0x0008dd2c) navi_pane_g2

0x241e,	// (0x0008dd5a) navi_pane_g3

0x0002,

0xf339,	// (0x0009ac75) navi_pane_g

0x24ad,	// (0x0008dde9) navi_pane_mv_g2

0x24d4,	// (0x0008de10) navi_pane_mv_g5

0x7eab,	// (0x000937e7) navi_pane_mv_t1

0x16a0,	// (0x0008cfdc) main_clock2_pane

0x1620,	// (0x0008cf5c) main_clock2_list_pane_ParamLimits

0x1620,	// (0x0008cf5c) main_clock2_list_pane

0x9752,	// (0x0009508e) main_clock2_pane_t1_ParamLimits

0x9752,	// (0x0009508e) main_clock2_pane_t1

0x9780,	// (0x000950bc) main_clock2_pane_t2_ParamLimits

0x9780,	// (0x000950bc) main_clock2_pane_t2

0x0004,

0xf716,	// (0x0009b052) main_clock2_pane_t_ParamLimits

0xf716,	// (0x0009b052) main_clock2_pane_t

0x97e5,	// (0x00095121) popup_clock_analogue_window_cp03_ParamLimits

0x97e5,	// (0x00095121) popup_clock_analogue_window_cp03

0x9803,	// (0x0009513f) popup_clock_digital_window_cp02_ParamLimits

0x9803,	// (0x0009513f) popup_clock_digital_window_cp02

0x9878,	// (0x000951b4) main_clock2_list_single_pane_ParamLimits

0x9878,	// (0x000951b4) main_clock2_list_single_pane

0x1aa0,	// (0x0008d3dc) list_highlight_pane_cp05

0xe631,	// (0x00099f6d) main_clock2_list_single_pane_t1

0x6ab4,	// (0x000923f0) popup_toolbar_window_cp04_ParamLimits

0x163c,	// (0x0008cf78) camera2_autofocus_pane_g2_ParamLimits

0x163c,	// (0x0008cf78) camera2_autofocus_pane_g2

0x163c,	// (0x0008cf78) camera2_autofocus_pane_g3_ParamLimits

0x163c,	// (0x0008cf78) camera2_autofocus_pane_g3

0x163c,	// (0x0008cf78) camera2_autofocus_pane_g4_ParamLimits

0x163c,	// (0x0008cf78) camera2_autofocus_pane_g4

0x163c,	// (0x0008cf78) camera2_autofocus_pane_g5_ParamLimits

0x163c,	// (0x0008cf78) camera2_autofocus_pane_g5

0x0004,

0xf65a,	// (0x0009af96) camera2_autofocus_pane_g_ParamLimits

0xf65a,	// (0x0009af96) camera2_autofocus_pane_g

0x90a5,	// (0x000949e1) camera2_autofocus_pane_cp_g2

0x90ad,	// (0x000949e9) camera2_autofocus_pane_cp_g3

0x90b5,	// (0x000949f1) camera2_autofocus_pane_cp_g4

0x90bd,	// (0x000949f9) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c0,	// (0x0009affc) camera2_autofocus_pane_cp_g

0x0f2d,	// (0x0008c869) popup_dialer_spcha_window

0x0f2d,	// (0x0008c869) bg_popup_sub_pane_cp07

0x0f2d,	// (0x0008c869) list_spcha_pane

0xe63f,	// (0x00099f7b) list_single_spcha_pane_ParamLimits

0xe63f,	// (0x00099f7b) list_single_spcha_pane

0x0f2d,	// (0x0008c869) list_highlight_pane_cp06

0x2005,	// (0x0008d941) list_single_spcha_pane_t1

0x40d7,	// (0x0008fa13) popup_call2_audio_out_window_g4_ParamLimits

0x40d7,	// (0x0008fa13) popup_call2_audio_out_window_g4

0x5e80,	// (0x000917bc) main_imed2_pane

0x8add,	// (0x00094419) popup_imed_adjust2_window

0x8af0,	// (0x0009442c) popup_imed_trans_window_ParamLimits

0x8af0,	// (0x0009442c) popup_imed_trans_window

0x4882,	// (0x000901be) popup_blid_sat_info2_window_t1

0x4890,	// (0x000901cc) popup_blid_sat_info2_window_t2

0x000a,

0xf5ef,	// (0x0009af2b) popup_blid_sat_info2_window_t

0x992d,	// (0x00095269) aid_size_cell_colour_35

0x9947,	// (0x00095283) aid_size_cell_colour_112

0x995e,	// (0x0009529a) aid_size_cell_effect

0x0f37,	// (0x0008c873) bg_tb_trans_pane_cp02

0x23ab,	// (0x0008dce7) heading_imed_pane

0x9978,	// (0x000952b4) listscroll_imed_pane

0xe651,	// (0x00099f8d) heading_imed_pane_g1

0xe659,	// (0x00099f95) heading_imed_pane_t1

0xe667,	// (0x00099fa3) grid_imed_colour_35_pane_ParamLimits

0xe667,	// (0x00099fa3) grid_imed_colour_35_pane

0x9984,	// (0x000952c0) grid_imed_effect_pane

0xe67e,	// (0x00099fba) list_imed_aspect_pane

0x9994,	// (0x000952d0) scroll_pane_cp027_ParamLimits

0x9994,	// (0x000952d0) scroll_pane_cp027

0x99a0,	// (0x000952dc) cell_imed_effect_pane_ParamLimits

0x99a0,	// (0x000952dc) cell_imed_effect_pane

0xe686,	// (0x00099fc2) cell_imed_colour_pane_ParamLimits

0xe686,	// (0x00099fc2) cell_imed_colour_pane

0xe6c8,	// (0x0009a004) cell_imed_colour_pane_g1_ParamLimits

0xe6c8,	// (0x0009a004) cell_imed_colour_pane_g1

0xe6d9,	// (0x0009a015) hgihlgiht_grid_pane_cp016_ParamLimits

0xe6d9,	// (0x0009a015) hgihlgiht_grid_pane_cp016

0x99b8,	// (0x000952f4) cell_imed_effect_pane_g1

0x99c0,	// (0x000952fc) grid_highlight_pane_cp017

0xe6ea,	// (0x0009a026) list_imed_single_pane_ParamLimits

0xe6ea,	// (0x0009a026) list_imed_single_pane

0x0f2d,	// (0x0008c869) list_highlight_pane_cp07

0xe6ff,	// (0x0009a03b) list_imed_aspect_pane_comp1_t1

0x25ed,	// (0x0008df29) bg_tb_trans_pane_cp05

0xe721,	// (0x0009a05d) popup_imed_adjust2_window_g1

0xe748,	// (0x0009a084) popup_imed_adjust2_window_t1

0xe760,	// (0x0009a09c) slider_imed_adjust_pane

0xe774,	// (0x0009a0b0) slider_imed_adjust_pane_g1

0xe784,	// (0x0009a0c0) slider_imed_adjust_pane_g2

0xe794,	// (0x0009a0d0) slider_imed_adjust_pane_g3

0xe7a5,	// (0x0009a0e1) slider_imed_adjust_pane_g4

0x0003,

0xf733,	// (0x0009b06f) slider_imed_adjust_pane_g

0x99c9,	// (0x00095305) aid_size_cell_clipart2

0x99d5,	// (0x00095311) grid_imed_clipart_pane

0xe7b6,	// (0x0009a0f2) scroll_pane_cp031

0x99df,	// (0x0009531b) cell_imed_clipart_pane_ParamLimits

0x99df,	// (0x0009531b) cell_imed_clipart_pane

0x9a01,	// (0x0009533d) cell_imed_clipart_pane_g1

0x0f2d,	// (0x0008c869) grid_highlight_pane_cp014

0x9734,	// (0x00095070) main_clock2_pane_g1_ParamLimits

0x9734,	// (0x00095070) main_clock2_pane_g1

0x981f,	// (0x0009515b) aid_call2_pane_cp10

0x9831,	// (0x0009516d) aid_call_pane_cp10

0x2331,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g1

0x2331,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g2

0x9843,	// (0x0009517f) popup_clock_analogue_window_cp10_g3

0x9843,	// (0x0009517f) popup_clock_analogue_window_cp10_g4

0x2331,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf721,	// (0x0009b05d) popup_clock_analogue_window_cp10_g

0x9859,	// (0x00095195) popup_clock_analogue_window_cp10_t1

0x988a,	// (0x000951c6) clock_digital_number_pane_cp10_ParamLimits

0x988a,	// (0x000951c6) clock_digital_number_pane_cp10

0x98a4,	// (0x000951e0) clock_digital_number_pane_cp11_ParamLimits

0x98a4,	// (0x000951e0) clock_digital_number_pane_cp11

0x98be,	// (0x000951fa) clock_digital_number_pane_cp12_ParamLimits

0x98be,	// (0x000951fa) clock_digital_number_pane_cp12

0x98d8,	// (0x00095214) clock_digital_number_pane_cp13_ParamLimits

0x98d8,	// (0x00095214) clock_digital_number_pane_cp13

0x98f2,	// (0x0009522e) clock_digital_separator_pane_cp10_ParamLimits

0x98f2,	// (0x0009522e) clock_digital_separator_pane_cp10

0x990c,	// (0x00095248) popup_clock_digital_window_cp02_t1_ParamLimits

0x990c,	// (0x00095248) popup_clock_digital_window_cp02_t1

0x15ab,	// (0x0008cee7) clock_digital_number_pane_cp10_g1

0x15ab,	// (0x0008cee7) clock_digital_number_pane_cp10_g2

0x0001,

0xf73c,	// (0x0009b078) clock_digital_number_pane_cp10_g

0x15ab,	// (0x0008cee7) clock_digital_separator_pane_cp10_g1

0x15ab,	// (0x0008cee7) clock_digital_separator_pane_g2_cp10

0x24dc,	// (0x0008de18) navi_pane_vded_g4

0x24e5,	// (0x0008de21) navi_pane_vded_g5

0x24ee,	// (0x0008de2a) navi_pane_vded_t1

0x5e80,	// (0x000917bc) main_vded_pane

0x9a0a,	// (0x00095346) main_vded_pane_g1

0x9a16,	// (0x00095352) main_vded_pane_g2

0x9a20,	// (0x0009535c) main_vded_pane_g3

0x0002,

0xf741,	// (0x0009b07d) main_vded_pane_g

0x9a2a,	// (0x00095366) main_vded_pane_t1

0x9a38,	// (0x00095374) main_vded_pane_t2

0x0001,

0xf748,	// (0x0009b084) main_vded_pane_t

0x9a46,	// (0x00095382) vded_slider_pane

0x9a50,	// (0x0009538c) vded_video_pane

0xe7be,	// (0x0009a0fa) vded_video_pane_g1

0x9a5a,	// (0x00095396) vded_video_pane_g2

0x1ad6,	// (0x0008d412) vded_video_pane_g3

0x0002,

0xf74d,	// (0x0009b089) vded_video_pane_g

0xe7c8,	// (0x0009a104) vded_slider_pane_g1

0x47ad,	// (0x000900e9) vded_slider_pane_g2

0xe7d1,	// (0x0009a10d) vded_slider_pane_g3

0xe7da,	// (0x0009a116) vded_slider_pane_g4

0xe7e3,	// (0x0009a11f) vded_slider_pane_g5

0x0004,

0xf754,	// (0x0009b090) vded_slider_pane_g

0x960e,	// (0x00094f4a) mup3_rocker_pane_ParamLimits

0x960e,	// (0x00094f4a) mup3_rocker_pane

0x9a63,	// (0x0009539f) mup3_control_keys_pane_g1

0x9a6b,	// (0x000953a7) mup3_control_keys_pane_g2

0x9a73,	// (0x000953af) mup3_control_keys_pane_g3

0x9a7b,	// (0x000953b7) mup3_control_keys_pane_g4

0x0003,

0xf75f,	// (0x0009b09b) mup3_control_keys_pane_g

0x5e34,	// (0x00091770) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5e34,	// (0x00091770) popup_toolbar2_fixed_window_cp01

0x9628,	// (0x00094f64) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9628,	// (0x00094f64) popup_toolbar2_fixed_window_cp02

0x3a60,	// (0x0008f39c) popup_call2_audio_second_window_t4_ParamLimits

0x3a60,	// (0x0008f39c) popup_call2_audio_second_window_t4

0x3f9c,	// (0x0008f8d8) popup_call2_audio_first_window_t6_ParamLimits

0x3f9c,	// (0x0008f8d8) popup_call2_audio_first_window_t6

0x41da,	// (0x0008fb16) popup_call2_audio_out_window_t6_ParamLimits

0x41da,	// (0x0008fb16) popup_call2_audio_out_window_t6

0x5e80,	// (0x000917bc) main_vitu_pane

0x1620,	// (0x0008cf5c) aid_size_cell_itu_ParamLimits

0x1620,	// (0x0008cf5c) aid_size_cell_itu

0x1620,	// (0x0008cf5c) bg_popup_window_pane_cp08_ParamLimits

0x1620,	// (0x0008cf5c) bg_popup_window_pane_cp08

0x1620,	// (0x0008cf5c) field_vitu_entry_pane_ParamLimits

0x1620,	// (0x0008cf5c) field_vitu_entry_pane

0x1620,	// (0x0008cf5c) grid_vitu_function_pane_ParamLimits

0x1620,	// (0x0008cf5c) grid_vitu_function_pane

0x1620,	// (0x0008cf5c) grid_vitu_itu_pane_ParamLimits

0x1620,	// (0x0008cf5c) grid_vitu_itu_pane

0x1620,	// (0x0008cf5c) cell_vitu_itu_pane_ParamLimits

0x1620,	// (0x0008cf5c) cell_vitu_itu_pane

0x1620,	// (0x0008cf5c) cell_vitu_function_pane_ParamLimits

0x1620,	// (0x0008cf5c) cell_vitu_function_pane

0x0f37,	// (0x0008c873) bg_popup_sub_pane_cp08_ParamLimits

0x0f37,	// (0x0008c873) bg_popup_sub_pane_cp08

0x1aa8,	// (0x0008d3e4) field_vitu_entry_pane_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) field_vitu_entry_pane_t1

0xe5b6,	// (0x00099ef2) field_vitu_entry_pane_t2_ParamLimits

0xe5b6,	// (0x00099ef2) field_vitu_entry_pane_t2

0x0001,

0xf768,	// (0x0009b0a4) field_vitu_entry_pane_t_ParamLimits

0xf768,	// (0x0009b0a4) field_vitu_entry_pane_t

0x4285,	// (0x0008fbc1) bg_button_pane_cp05_ParamLimits

0x4285,	// (0x0008fbc1) bg_button_pane_cp05

0xe7ec,	// (0x0009a128) cell_vitu_itu_pane_g1

0x25d9,	// (0x0008df15) cell_vitu_itu_pane_t1_ParamLimits

0x25d9,	// (0x0008df15) cell_vitu_itu_pane_t1

0x25d9,	// (0x0008df15) cell_vitu_itu_pane_t2_ParamLimits

0x25d9,	// (0x0008df15) cell_vitu_itu_pane_t2

0x0002,

0xf76d,	// (0x0009b0a9) cell_vitu_itu_pane_t_ParamLimits

0xf76d,	// (0x0009b0a9) cell_vitu_itu_pane_t

0x0f2d,	// (0x0008c869) bg_button_pane_cp07

0x1ad6,	// (0x0008d412) cell_vitu_function_pane_g1

0x5fb6,	// (0x000918f2) main_calc_pane_g1

0x5bf3,	// (0x0009152f) aid_visual_content_pane

0x5e80,	// (0x000917bc) main_vradio_pane

0x163c,	// (0x0008cf78) main_vradio_pane_g1_ParamLimits

0x163c,	// (0x0008cf78) main_vradio_pane_g1

0x163c,	// (0x0008cf78) main_vradio_pane_g2_ParamLimits

0x163c,	// (0x0008cf78) main_vradio_pane_g2

0x0001,

0xf774,	// (0x0009b0b0) main_vradio_pane_g_ParamLimits

0xf774,	// (0x0009b0b0) main_vradio_pane_g

0x2397,	// (0x0008dcd3) main_vradio_pane_t1_ParamLimits

0x2397,	// (0x0008dcd3) main_vradio_pane_t1

0x2397,	// (0x0008dcd3) main_vradio_pane_t2_ParamLimits

0x2397,	// (0x0008dcd3) main_vradio_pane_t2

0x2397,	// (0x0008dcd3) main_vradio_pane_t3_ParamLimits

0x2397,	// (0x0008dcd3) main_vradio_pane_t3

0x0002,

0xf779,	// (0x0009b0b5) main_vradio_pane_t_ParamLimits

0xf779,	// (0x0009b0b5) main_vradio_pane_t

0x1620,	// (0x0008cf5c) vradio_rocker_control_pane_ParamLimits

0x1620,	// (0x0008cf5c) vradio_rocker_control_pane

0x1620,	// (0x0008cf5c) vradio_station_info_pane_ParamLimits

0x1620,	// (0x0008cf5c) vradio_station_info_pane

0x0f37,	// (0x0008c873) vradio_frequency_info_pane_ParamLimits

0x0f37,	// (0x0008c873) vradio_frequency_info_pane

0x1ad6,	// (0x0008d412) vradio_station_info_pane_g1

0x25d9,	// (0x0008df15) vradio_station_info_pane_t1_ParamLimits

0x25d9,	// (0x0008df15) vradio_station_info_pane_t1

0x2397,	// (0x0008dcd3) vradio_station_info_pane_t2_ParamLimits

0x2397,	// (0x0008dcd3) vradio_station_info_pane_t2

0x0001,

0xf780,	// (0x0009b0bc) vradio_station_info_pane_t_ParamLimits

0xf780,	// (0x0009b0bc) vradio_station_info_pane_t

0x0f2d,	// (0x0008c869) vradio_tuning_pane

0x9a8b,	// (0x000953c7) vradio_rocker_control_pane_g1

0xe808,	// (0x0009a144) vradio_rocker_control_pane_g2

0x9a93,	// (0x000953cf) vradio_rocker_control_pane_g3

0x9a9b,	// (0x000953d7) vradio_rocker_control_pane_g4

0x9aa3,	// (0x000953df) vradio_rocker_control_pane_g5

0x0004,

0xf785,	// (0x0009b0c1) vradio_rocker_control_pane_g

0x1ad6,	// (0x0008d412) vradio_frequency_info_pane_g1

0x1aa8,	// (0x0008d3e4) vradio_frequency_info_pane_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) vradio_frequency_info_pane_t1

0x9aab,	// (0x000953e7) vradio_tuning_pane_g1

0x9ab8,	// (0x000953f4) vradio_tuning_pane_t1

0x5c3c,	// (0x00091578) area_side_right_pane_ParamLimits

0x5c3c,	// (0x00091578) area_side_right_pane

0x45e4,	// (0x0008ff20) status_small_pane_g1

0x45ec,	// (0x0008ff28) status_small_pane_g2

0x45f5,	// (0x0008ff31) status_small_pane_g3

0x45fe,	// (0x0008ff3a) status_small_pane_g4

0x0003,

0xf551,	// (0x0009ae8d) status_small_pane_g

0x4607,	// (0x0008ff43) status_small_pane_t1

0x5e80,	// (0x000917bc) main_video3_pane

0xe810,	// (0x0009a14c) cams_zoom_vslider_pane

0xe818,	// (0x0009a154) image3_wide_pane_ParamLimits

0xe818,	// (0x0009a154) image3_wide_pane

0xe832,	// (0x0009a16e) image3_wide_small_pane

0xe83e,	// (0x0009a17a) main_video3_pane_g1_ParamLimits

0xe83e,	// (0x0009a17a) main_video3_pane_g1

0xe85a,	// (0x0009a196) main_video3_pane_g2_ParamLimits

0xe85a,	// (0x0009a196) main_video3_pane_g2

0x0001,

0xf790,	// (0x0009b0cc) main_video3_pane_g_ParamLimits

0xf790,	// (0x0009b0cc) main_video3_pane_g

0xe876,	// (0x0009a1b2) main_video3_pane_t1_ParamLimits

0xe876,	// (0x0009a1b2) main_video3_pane_t1

0xe8a1,	// (0x0009a1dd) main_video3_pane_t2_ParamLimits

0xe8a1,	// (0x0009a1dd) main_video3_pane_t2

0xe8cc,	// (0x0009a208) main_video3_pane_t3_ParamLimits

0xe8cc,	// (0x0009a208) main_video3_pane_t3

0x0002,

0xf795,	// (0x0009b0d1) main_video3_pane_t_ParamLimits

0xf795,	// (0x0009b0d1) main_video3_pane_t

0xe8f9,	// (0x0009a235) cams_zoom_vslider_pane_g1

0xe902,	// (0x0009a23e) cams_zoom_vslider_pane_g2

0x0001,

0xf79c,	// (0x0009b0d8) cams_zoom_vslider_pane_g

0xe90a,	// (0x0009a246) small_slider_vertical_pane

0x1ad6,	// (0x0008d412) small_slider_vertical_pane_g1

0x1ad6,	// (0x0008d412) small_slider_vertical_pane_g2

0xe912,	// (0x0009a24e) small_slider_vertical_pane_g3

0x0002,

0xf7a1,	// (0x0009b0dd) small_slider_vertical_pane_g

0x5e80,	// (0x000917bc) main_hwr_training_pane

0xe91b,	// (0x0009a257) hwr_training_instruct_pane_ParamLimits

0xe91b,	// (0x0009a257) hwr_training_instruct_pane

0x9ac7,	// (0x00095403) hwr_training_navi_pane_ParamLimits

0x9ac7,	// (0x00095403) hwr_training_navi_pane

0x9ae1,	// (0x0009541d) hwr_training_write_pane_ParamLimits

0x9ae1,	// (0x0009541d) hwr_training_write_pane

0x0f2d,	// (0x0008c869) bg_frame_shadow_pane

0xe952,	// (0x0009a28e) hwr_training_write_pane_g1

0xe95a,	// (0x0009a296) hwr_training_write_pane_g2

0xe962,	// (0x0009a29e) hwr_training_write_pane_g3

0xe96a,	// (0x0009a2a6) hwr_training_write_pane_g4

0xe972,	// (0x0009a2ae) hwr_training_write_pane_g5

0xe97a,	// (0x0009a2b6) hwr_training_write_pane_g6

0xe982,	// (0x0009a2be) hwr_training_write_pane_g7

0x0006,

0xf7a8,	// (0x0009b0e4) hwr_training_write_pane_g

0x9b19,	// (0x00095455) hwr_training_navi_pane_g1_ParamLimits

0x9b19,	// (0x00095455) hwr_training_navi_pane_g1

0x9b2b,	// (0x00095467) hwr_training_navi_pane_g2_ParamLimits

0x9b2b,	// (0x00095467) hwr_training_navi_pane_g2

0x9b3d,	// (0x00095479) hwr_training_navi_pane_g3_ParamLimits

0x9b3d,	// (0x00095479) hwr_training_navi_pane_g3

0x9b4d,	// (0x00095489) hwr_training_navi_pane_g4_ParamLimits

0x9b4d,	// (0x00095489) hwr_training_navi_pane_g4

0x0004,

0xf7b7,	// (0x0009b0f3) hwr_training_navi_pane_g_ParamLimits

0xf7b7,	// (0x0009b0f3) hwr_training_navi_pane_g

0x9b67,	// (0x000954a3) hwr_training_navi_pane_t1

0x9b75,	// (0x000954b1) list_single_hwr_training_instruct_pane_ParamLimits

0x9b75,	// (0x000954b1) list_single_hwr_training_instruct_pane

0xe98a,	// (0x0009a2c6) list_single_hwr_training_instruct_pane_t1

0x4983,	// (0x000902bf) bg_frame_shadow_pane_g1

0xe999,	// (0x0009a2d5) bg_frame_shadow_pane_g2

0xe9a1,	// (0x0009a2dd) bg_frame_shadow_pane_g3

0xe9a9,	// (0x0009a2e5) bg_frame_shadow_pane_g4

0xe9b1,	// (0x0009a2ed) bg_frame_shadow_pane_g5

0xe9b9,	// (0x0009a2f5) bg_frame_shadow_pane_g6

0xe9c1,	// (0x0009a2fd) bg_frame_shadow_pane_g7

0x197f,	// (0x0008d2bb) bg_frame_shadow_pane_g8

0x0007,

0xf7c2,	// (0x0009b0fe) bg_frame_shadow_pane_g

0x5e80,	// (0x000917bc) main_video_tele_dialer_pane

0x9b9a,	// (0x000954d6) aid_size_cell_video_keypad_ParamLimits

0x9b9a,	// (0x000954d6) aid_size_cell_video_keypad

0x9baa,	// (0x000954e6) grid_video_dialer_keypad_pane_ParamLimits

0x9baa,	// (0x000954e6) grid_video_dialer_keypad_pane

0x9bde,	// (0x0009551a) video_down_pane_cp_ParamLimits

0x9bde,	// (0x0009551a) video_down_pane_cp

0x9c08,	// (0x00095544) cell_video_dialer_keypad_pane_ParamLimits

0x9c08,	// (0x00095544) cell_video_dialer_keypad_pane

0xe9c9,	// (0x0009a305) bg_button_pane_cp08_ParamLimits

0xe9c9,	// (0x0009a305) bg_button_pane_cp08

0x9c1d,	// (0x00095559) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9c1d,	// (0x00095559) cell_video_dialer_keypad_pane_g1

0x9602,	// (0x00094f3e) mup3_rocker2_pane_ParamLimits

0x9602,	// (0x00094f3e) mup3_rocker2_pane

0x1ad6,	// (0x0008d412) mup3_rocker2_pane_g1

0x8a4d,	// (0x00094389) main_dialer2_pane

0x5e80,	// (0x000917bc) main_mp4_pane

0x9c72,	// (0x000955ae) main_mp4_pane_g1_ParamLimits

0x9c72,	// (0x000955ae) main_mp4_pane_g1

0x9c80,	// (0x000955bc) main_mp4_pane_g2_ParamLimits

0x9c80,	// (0x000955bc) main_mp4_pane_g2

0x9c8e,	// (0x000955ca) main_mp4_pane_g3_ParamLimits

0x9c8e,	// (0x000955ca) main_mp4_pane_g3

0x9cd3,	// (0x0009560f) main_mp4_pane_g4_ParamLimits

0x9cd3,	// (0x0009560f) main_mp4_pane_g4

0x9d01,	// (0x0009563d) main_mp4_pane_g5_ParamLimits

0x9d01,	// (0x0009563d) main_mp4_pane_g5

0x0007,

0xf7e2,	// (0x0009b11e) main_mp4_pane_g_ParamLimits

0xf7e2,	// (0x0009b11e) main_mp4_pane_g

0x9d75,	// (0x000956b1) main_mp4_pane_t1_ParamLimits

0x9d75,	// (0x000956b1) main_mp4_pane_t1

0x9dd1,	// (0x0009570d) main_mp4_pane_t2_ParamLimits

0x9dd1,	// (0x0009570d) main_mp4_pane_t2

0xe9d5,	// (0x0009a311) main_mp4_pane_t3_ParamLimits

0xe9d5,	// (0x0009a311) main_mp4_pane_t3

0x9e23,	// (0x0009575f) main_mp4_pane_t4_ParamLimits

0x9e23,	// (0x0009575f) main_mp4_pane_t4

0x0003,

0xf7f3,	// (0x0009b12f) main_mp4_pane_t_ParamLimits

0xf7f3,	// (0x0009b12f) main_mp4_pane_t

0x9e67,	// (0x000957a3) mp4_progress_pane_ParamLimits

0x9e67,	// (0x000957a3) mp4_progress_pane

0x9eb1,	// (0x000957ed) mp4_rocker_pane_ParamLimits

0x9eb1,	// (0x000957ed) mp4_rocker_pane

0xea03,	// (0x0009a33f) mp4_progress_pane_t1

0xea1c,	// (0x0009a358) mp4_progress_pane_t2

0x0001,

0xf7fc,	// (0x0009b138) mp4_progress_pane_t

0xea35,	// (0x0009a371) mup_progress_pane_cp04

0x063d,	// (0x0008bf79) mp4_rocker_pane_g1

0x9ed1,	// (0x0009580d) aid_cell_size_keypad2_ParamLimits

0x9ed1,	// (0x0009580d) aid_cell_size_keypad2

0x9ee1,	// (0x0009581d) dialer2_ne_pane_ParamLimits

0x9ee1,	// (0x0009581d) dialer2_ne_pane

0x9eef,	// (0x0009582b) grid_dialer2_keypad_pane_ParamLimits

0x9eef,	// (0x0009582b) grid_dialer2_keypad_pane

0xea48,	// (0x0009a384) bg_popup_call_pane_cp07_ParamLimits

0xea48,	// (0x0009a384) bg_popup_call_pane_cp07

0x9eff,	// (0x0009583b) dialer2_ne_pane_t1_ParamLimits

0x9eff,	// (0x0009583b) dialer2_ne_pane_t1

0x9f24,	// (0x00095860) cell_dialer2_keypad_pane_ParamLimits

0x9f24,	// (0x00095860) cell_dialer2_keypad_pane

0xea68,	// (0x0009a3a4) bg_button_pane_pane_cp04_ParamLimits

0xea68,	// (0x0009a3a4) bg_button_pane_pane_cp04

0x9f39,	// (0x00095875) cell_dialer2_keypad_pane_g1_ParamLimits

0x9f39,	// (0x00095875) cell_dialer2_keypad_pane_g1

0x6976,	// (0x000922b2) aid_placing_vt_set_content_ParamLimits

0x6976,	// (0x000922b2) aid_placing_vt_set_content

0x69a2,	// (0x000922de) aid_placing_vt_set_title_ParamLimits

0x69a2,	// (0x000922de) aid_placing_vt_set_title

0x5e80,	// (0x000917bc) main_image3_pane

0x9fd3,	// (0x0009590f) area_side_right_pane_cp01_ParamLimits

0x9fd3,	// (0x0009590f) area_side_right_pane_cp01

0xa000,	// (0x0009593c) main_image3_pane_g1_ParamLimits

0xa000,	// (0x0009593c) main_image3_pane_g1

0xa00e,	// (0x0009594a) main_image3_pane_g2_ParamLimits

0xa00e,	// (0x0009594a) main_image3_pane_g2

0xa027,	// (0x00095963) main_image3_pane_g3_ParamLimits

0xa027,	// (0x00095963) main_image3_pane_g3

0xa040,	// (0x0009597c) main_image3_pane_g4_ParamLimits

0xa040,	// (0x0009597c) main_image3_pane_g4

0x0003,

0xf80b,	// (0x0009b147) main_image3_pane_g_ParamLimits

0xf80b,	// (0x0009b147) main_image3_pane_g

0xa059,	// (0x00095995) main_image3_pane_t1_ParamLimits

0xa059,	// (0x00095995) main_image3_pane_t1

0xa07e,	// (0x000959ba) main_image3_pane_t2_ParamLimits

0xa07e,	// (0x000959ba) main_image3_pane_t2

0xa09d,	// (0x000959d9) main_image3_pane_t3_ParamLimits

0xa09d,	// (0x000959d9) main_image3_pane_t3

0x0003,

0xf814,	// (0x0009b150) main_image3_pane_t_ParamLimits

0xf814,	// (0x0009b150) main_image3_pane_t

0x1620,	// (0x0008cf5c) grid_sctrl_middle_pane_cp01_ParamLimits

0x1620,	// (0x0008cf5c) grid_sctrl_middle_pane_cp01

0xa0fe,	// (0x00095a3a) cell_sctrl_middle_pane_cp01_ParamLimits

0xa0fe,	// (0x00095a3a) cell_sctrl_middle_pane_cp01

0xa10f,	// (0x00095a4b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa10f,	// (0x00095a4b) cell_sctrl_middle_pane_cp01_g1

0x5e80,	// (0x000917bc) main_call4_pane

0xa11c,	// (0x00095a58) aid_size_button_call4_ParamLimits

0xa11c,	// (0x00095a58) aid_size_button_call4

0xa152,	// (0x00095a8e) call4_windows_pane_ParamLimits

0xa152,	// (0x00095a8e) call4_windows_pane

0xa167,	// (0x00095aa3) grid_call4_button_pane_ParamLimits

0xa167,	// (0x00095aa3) grid_call4_button_pane

0xa195,	// (0x00095ad1) call4_windows_conf_pane

0xa1ac,	// (0x00095ae8) popup_call4_audio_first_window_ParamLimits

0xa1ac,	// (0x00095ae8) popup_call4_audio_first_window

0xa1fc,	// (0x00095b38) popup_call4_audio_second_window_ParamLimits

0xa1fc,	// (0x00095b38) popup_call4_audio_second_window

0xa215,	// (0x00095b51) popup_call4_audio_wait_window_ParamLimits

0xa215,	// (0x00095b51) popup_call4_audio_wait_window

0xa223,	// (0x00095b5f) cell_call4_button_pane_ParamLimits

0xa223,	// (0x00095b5f) cell_call4_button_pane

0xa246,	// (0x00095b82) bg_button_pane_cp09_ParamLimits

0xa246,	// (0x00095b82) bg_button_pane_cp09

0xa252,	// (0x00095b8e) cell_call4_button_pane_g1_ParamLimits

0xa252,	// (0x00095b8e) cell_call4_button_pane_g1

0xa25f,	// (0x00095b9b) cell_call4_button_pane_t1_ParamLimits

0xa25f,	// (0x00095b9b) cell_call4_button_pane_t1

0xea7c,	// (0x0009a3b8) popup_call4_audio_conf_window_ParamLimits

0xea7c,	// (0x0009a3b8) popup_call4_audio_conf_window

0x9635,	// (0x00094f71) mup3_progress_pane_t1_ParamLimits

0x9654,	// (0x00094f90) mup3_progress_pane_t2_ParamLimits

0xe4df,	// (0x00099e1b) mup3_progress_pane_t3_ParamLimits

0xf6e9,	// (0x0009b025) mup3_progress_pane_t_ParamLimits

0xe4fc,	// (0x00099e38) mup_progress_pane_cp03_ParamLimits

0x9a83,	// (0x000953bf) mup3_control_keys_pane_g4_copy1

0x9e95,	// (0x000957d1) mp4_rocker2_pane_ParamLimits

0x9e95,	// (0x000957d1) mp4_rocker2_pane

0xea90,	// (0x0009a3cc) mp4_rocker2_pane_g1

0xea98,	// (0x0009a3d4) mp4_rocker2_pane_g2

0xa2a3,	// (0x00095bdf) mp4_rocker2_pane_g3

0xa2ab,	// (0x00095be7) mp4_rocker2_pane_g4

0xa2b3,	// (0x00095bef) mp4_rocker2_pane_g5

0x0004,

0xf81d,	// (0x0009b159) mp4_rocker2_pane_g

0x5e80,	// (0x000917bc) main_camera4_pane

0x5e80,	// (0x000917bc) main_video4_pane

0x9bba,	// (0x000954f6) main_video_tele_dialer_pane_t1_ParamLimits

0x9bba,	// (0x000954f6) main_video_tele_dialer_pane_t1

0x9bcc,	// (0x00095508) main_video_tele_dialer_pane_t2_ParamLimits

0x9bcc,	// (0x00095508) main_video_tele_dialer_pane_t2

0x0001,

0xf7d3,	// (0x0009b10f) main_video_tele_dialer_pane_t_ParamLimits

0xf7d3,	// (0x0009b10f) main_video_tele_dialer_pane_t

0xa2d3,	// (0x00095c0f) cam4_autofocus_pane_ParamLimits

0xa2d3,	// (0x00095c0f) cam4_autofocus_pane

0xa2ed,	// (0x00095c29) cam4_image_uncrop_pane_ParamLimits

0xa2ed,	// (0x00095c29) cam4_image_uncrop_pane

0xa304,	// (0x00095c40) cam4_indicators_pane_ParamLimits

0xa304,	// (0x00095c40) cam4_indicators_pane

0xa320,	// (0x00095c5c) main_camera4_pane_g1_ParamLimits

0xa320,	// (0x00095c5c) main_camera4_pane_g1

0xa32c,	// (0x00095c68) main_camera4_pane_g2_ParamLimits

0xa32c,	// (0x00095c68) main_camera4_pane_g2

0xa32c,	// (0x00095c68) main_camera4_pane_g3_ParamLimits

0xa32c,	// (0x00095c68) main_camera4_pane_g3

0xa338,	// (0x00095c74) main_camera4_pane_g4_ParamLimits

0xa338,	// (0x00095c74) main_camera4_pane_g4

0xa344,	// (0x00095c80) main_camera4_pane_g5_ParamLimits

0xa344,	// (0x00095c80) main_camera4_pane_g5

0x0005,

0xf828,	// (0x0009b164) main_camera4_pane_g_ParamLimits

0xf828,	// (0x0009b164) main_camera4_pane_g

0xa35e,	// (0x00095c9a) main_camera4_pane_t1_ParamLimits

0xa35e,	// (0x00095c9a) main_camera4_pane_t1

0x191a,	// (0x0008d256) bg_tb_trans_pane_cp06

0xa3ae,	// (0x00095cea) cam4_indicators_pane_g1

0xa3bf,	// (0x00095cfb) cam4_indicators_pane_g2

0x0002,

0xf843,	// (0x0009b17f) cam4_indicators_pane_g

0xa3dd,	// (0x00095d19) cam4_indicators_pane_t1

0xa407,	// (0x00095d43) main_video4_pane_g1_ParamLimits

0xa407,	// (0x00095d43) main_video4_pane_g1

0xa413,	// (0x00095d4f) main_video4_pane_g2_ParamLimits

0xa413,	// (0x00095d4f) main_video4_pane_g2

0xa41f,	// (0x00095d5b) main_video4_pane_g3_ParamLimits

0xa41f,	// (0x00095d5b) main_video4_pane_g3

0xa42b,	// (0x00095d67) main_video4_pane_g4_ParamLimits

0xa42b,	// (0x00095d67) main_video4_pane_g4

0x0004,

0xf84a,	// (0x0009b186) main_video4_pane_g_ParamLimits

0xf84a,	// (0x0009b186) main_video4_pane_g

0xa44b,	// (0x00095d87) vid4_indicators_pane_ParamLimits

0xa44b,	// (0x00095d87) vid4_indicators_pane

0xa46a,	// (0x00095da6) video4_image_uncrop_cif_pane_ParamLimits

0xa46a,	// (0x00095da6) video4_image_uncrop_cif_pane

0xa479,	// (0x00095db5) video4_image_uncrop_nhd_pane_ParamLimits

0xa479,	// (0x00095db5) video4_image_uncrop_nhd_pane

0xa2ed,	// (0x00095c29) video4_image_uncrop_vga_pane_ParamLimits

0xa2ed,	// (0x00095c29) video4_image_uncrop_vga_pane

0x8a3f,	// (0x0009437b) bg_tb_trans_pane_cp07

0xa490,	// (0x00095dcc) vid4_indicators_pane_g1

0xa4a4,	// (0x00095de0) vid4_indicators_pane_g2

0xa4b8,	// (0x00095df4) vid4_indicators_pane_g3

0x0004,

0xf855,	// (0x0009b191) vid4_indicators_pane_g

0xa4e7,	// (0x00095e23) vid4_indicators_pane_t1

0xa4fe,	// (0x00095e3a) cam4_autofocus_pane_g1

0xa506,	// (0x00095e42) cam4_autofocus_pane_g2

0xa50e,	// (0x00095e4a) cam4_autofocus_pane_g3

0x0002,

0xf860,	// (0x0009b19c) cam4_autofocus_pane_g

0xa516,	// (0x00095e52) cam4_autofocus_pane_g3_copy1

0x9bec,	// (0x00095528) video_down_pane_cp_t1

0x9bfa,	// (0x00095536) video_down_pane_cp_t2

0x0001,

0xf7d8,	// (0x0009b114) video_down_pane_cp_t

0x5e66,	// (0x000917a2) popup_vitu2_window_ParamLimits

0x5e66,	// (0x000917a2) popup_vitu2_window

0xa51e,	// (0x00095e5a) aid_size_cell2_itu2_ParamLimits

0xa51e,	// (0x00095e5a) aid_size_cell2_itu2

0xa540,	// (0x00095e7c) aid_size_cell_itu2_ParamLimits

0xa540,	// (0x00095e7c) aid_size_cell_itu2

0xa584,	// (0x00095ec0) bg_popup_window_pane_cp09_ParamLimits

0xa584,	// (0x00095ec0) bg_popup_window_pane_cp09

0xa592,	// (0x00095ece) field_vitu2_entry_pane_ParamLimits

0xa592,	// (0x00095ece) field_vitu2_entry_pane

0xa5b2,	// (0x00095eee) grid_vitu2_function_pane_ParamLimits

0xa5b2,	// (0x00095eee) grid_vitu2_function_pane

0xa5f6,	// (0x00095f32) grid_vitu2_itu_pane_ParamLimits

0xa5f6,	// (0x00095f32) grid_vitu2_itu_pane

0xa66e,	// (0x00095faa) cell_vitu2_itu_pane_ParamLimits

0xa66e,	// (0x00095faa) cell_vitu2_itu_pane

0xa687,	// (0x00095fc3) cell_vitu2_function_pane_ParamLimits

0xa687,	// (0x00095fc3) cell_vitu2_function_pane

0xeaa0,	// (0x0009a3dc) bg_popup_call_pane_cp08_ParamLimits

0xeaa0,	// (0x0009a3dc) bg_popup_call_pane_cp08

0xeab7,	// (0x0009a3f3) field_vitu2_entry_pane_g1

0xeac3,	// (0x0009a3ff) field_vitu2_entry_pane_g2

0x0002,

0xf867,	// (0x0009b1a3) field_vitu2_entry_pane_g

0xa6c8,	// (0x00096004) field_vitu2_entry_pane_t1_ParamLimits

0xa6c8,	// (0x00096004) field_vitu2_entry_pane_t1

0xeff8,	// (0x0009a934) field_vitu2_entry_pane_t2_ParamLimits

0xeff8,	// (0x0009a934) field_vitu2_entry_pane_t2

0x0001,

0xf86e,	// (0x0009b1aa) field_vitu2_entry_pane_t_ParamLimits

0xf86e,	// (0x0009b1aa) field_vitu2_entry_pane_t

0x8d7b,	// (0x000946b7) bg_button_pane_cp010_ParamLimits

0x8d7b,	// (0x000946b7) bg_button_pane_cp010

0xa6fa,	// (0x00096036) cell_vitu2_itu_pane_g1

0xa720,	// (0x0009605c) cell_vitu2_itu_pane_t1_ParamLimits

0xa720,	// (0x0009605c) cell_vitu2_itu_pane_t1

0x5ad7,	// (0x00091413) cell_vitu2_itu_pane_t2_ParamLimits

0x5ad7,	// (0x00091413) cell_vitu2_itu_pane_t2

0x0002,

0xf878,	// (0x0009b1b4) cell_vitu2_itu_pane_t_ParamLimits

0xf878,	// (0x0009b1b4) cell_vitu2_itu_pane_t

0x8a3f,	// (0x0009437b) bg_button_pane_cp011

0xa76c,	// (0x000960a8) cell_vitu2_function_pane_g1

0x5e80,	// (0x000917bc) main_myfav_hc_pane

0xa0df,	// (0x00095a1b) popup_image3_note_pane_ParamLimits

0xa0df,	// (0x00095a1b) popup_image3_note_pane

0xa0ed,	// (0x00095a29) popup_image3_tool_bar_pane_ParamLimits

0xa0ed,	// (0x00095a29) popup_image3_tool_bar_pane

0x5b4d,	// (0x00091489) cell_vitu2_itu_pane_t3_ParamLimits

0x5b4d,	// (0x00091489) cell_vitu2_itu_pane_t3

0x0f2d,	// (0x0008c869) bg_popup_trans_pane

0xead7,	// (0x0009a413) grid_image3_tool_bar_pane

0xeae1,	// (0x0009a41d) bg_popup_trans_pane_g1

0x1ce7,	// (0x0008d623) bg_popup_trans_pane_g2

0xeae9,	// (0x0009a425) bg_popup_trans_pane_g3

0xeaf1,	// (0x0009a42d) bg_popup_trans_pane_g4

0xeaf9,	// (0x0009a435) bg_popup_trans_pane_g5

0xeb01,	// (0x0009a43d) bg_popup_trans_pane_g6

0xeb09,	// (0x0009a445) bg_popup_trans_pane_g7

0xeb11,	// (0x0009a44d) bg_popup_trans_pane_g8

0x1cc7,	// (0x0008d603) bg_popup_trans_pane_g9

0x0008,

0xf87f,	// (0x0009b1bb) bg_popup_trans_pane_g

0xeb19,	// (0x0009a455) cell_image3_tool_bar_pane_ParamLimits

0xeb19,	// (0x0009a455) cell_image3_tool_bar_pane

0x1ad6,	// (0x0008d412) cell_image3_tool_bar_pane_g1

0x0f2d,	// (0x0008c869) bg_popup_trans_pane_cp1

0xeb2d,	// (0x0009a469) popup_image3_note_pane_t1

0xeb3b,	// (0x0009a477) popup_image3_note_pane_t2

0xeb49,	// (0x0009a485) popup_image3_note_pane_t3

0x0002,

0xf892,	// (0x0009b1ce) popup_image3_note_pane_t

0xeb57,	// (0x0009a493) popup_image3_note_pane_t3_copy1

0xa780,	// (0x000960bc) bg_myfav_hc_instruction_pane_ParamLimits

0xa780,	// (0x000960bc) bg_myfav_hc_instruction_pane

0xa798,	// (0x000960d4) cell_myfav_contact_pane_ParamLimits

0xa798,	// (0x000960d4) cell_myfav_contact_pane

0xa7b2,	// (0x000960ee) cell_myfav_contact_pane_cp1_ParamLimits

0xa7b2,	// (0x000960ee) cell_myfav_contact_pane_cp1

0xa7ca,	// (0x00096106) cell_myfav_contact_pane_cp2_ParamLimits

0xa7ca,	// (0x00096106) cell_myfav_contact_pane_cp2

0xa7e2,	// (0x0009611e) cell_myfav_contact_pane_cp3_ParamLimits

0xa7e2,	// (0x0009611e) cell_myfav_contact_pane_cp3

0xa7f9,	// (0x00096135) cell_myfav_contact_pane_cp4_ParamLimits

0xa7f9,	// (0x00096135) cell_myfav_contact_pane_cp4

0xa80f,	// (0x0009614b) cell_myfav_contact_pane_cp5_ParamLimits

0xa80f,	// (0x0009614b) cell_myfav_contact_pane_cp5

0xa823,	// (0x0009615f) cell_myfav_contact_pane_cp6_ParamLimits

0xa823,	// (0x0009615f) cell_myfav_contact_pane_cp6

0xa837,	// (0x00096173) cell_myfav_contact_pane_cp7_ParamLimits

0xa837,	// (0x00096173) cell_myfav_contact_pane_cp7

0xeb65,	// (0x0009a4a1) listscroll_gen_pane_cp05

0xa84f,	// (0x0009618b) main_myfav_hc_pane_g1_ParamLimits

0xa84f,	// (0x0009618b) main_myfav_hc_pane_g1

0xa865,	// (0x000961a1) main_myfav_hc_pane_g2_ParamLimits

0xa865,	// (0x000961a1) main_myfav_hc_pane_g2

0x0002,

0xf899,	// (0x0009b1d5) main_myfav_hc_pane_g_ParamLimits

0xf899,	// (0x0009b1d5) main_myfav_hc_pane_g

0xa893,	// (0x000961cf) main_myfav_hc_pane_t1_ParamLimits

0xa893,	// (0x000961cf) main_myfav_hc_pane_t1

0xeb6e,	// (0x0009a4aa) main_myfav_hc_pane_t2_ParamLimits

0xeb6e,	// (0x0009a4aa) main_myfav_hc_pane_t2

0xeb80,	// (0x0009a4bc) main_myfav_hc_pane_t3_ParamLimits

0xeb80,	// (0x0009a4bc) main_myfav_hc_pane_t3

0xa8aa,	// (0x000961e6) main_myfav_hc_pane_t4_ParamLimits

0xa8aa,	// (0x000961e6) main_myfav_hc_pane_t4

0x0004,

0xf8a0,	// (0x0009b1dc) main_myfav_hc_pane_t_ParamLimits

0xf8a0,	// (0x0009b1dc) main_myfav_hc_pane_t

0x1ad6,	// (0x0008d412) bg_myfav_hc_instruction_pane_g1

0xeb92,	// (0x0009a4ce) cell_myfav_contact_pane_g1_ParamLimits

0xeb92,	// (0x0009a4ce) cell_myfav_contact_pane_g1

0xeb92,	// (0x0009a4ce) cell_myfav_contact_pane_g2_ParamLimits

0xeb92,	// (0x0009a4ce) cell_myfav_contact_pane_g2

0xeb9e,	// (0x0009a4da) cell_myfav_contact_pane_g3_ParamLimits

0xeb9e,	// (0x0009a4da) cell_myfav_contact_pane_g3

0x163c,	// (0x0008cf78) cell_myfav_contact_pane_g4_ParamLimits

0x163c,	// (0x0008cf78) cell_myfav_contact_pane_g4

0xebab,	// (0x0009a4e7) cell_myfav_contact_pane_g5_ParamLimits

0xebab,	// (0x0009a4e7) cell_myfav_contact_pane_g5

0x0004,

0xf8ab,	// (0x0009b1e7) cell_myfav_contact_pane_g_ParamLimits

0xf8ab,	// (0x0009b1e7) cell_myfav_contact_pane_g

0xa87b,	// (0x000961b7) main_myfav_hc_pane_g3_ParamLimits

0xa87b,	// (0x000961b7) main_myfav_hc_pane_g3

0x5d70,	// (0x000916ac) popup_adpt_find_window

0xa8d4,	// (0x00096210) afind_page_pane_ParamLimits

0xa8d4,	// (0x00096210) afind_page_pane

0xa8e1,	// (0x0009621d) aid_size_cell_afind_ParamLimits

0xa8e1,	// (0x0009621d) aid_size_cell_afind

0xa8fb,	// (0x00096237) bg_popup_sub_pane_cp09_ParamLimits

0xa8fb,	// (0x00096237) bg_popup_sub_pane_cp09

0xa908,	// (0x00096244) find_pane_cp01_ParamLimits

0xa908,	// (0x00096244) find_pane_cp01

0xebb7,	// (0x0009a4f3) grid_afind_control_pane_ParamLimits

0xebb7,	// (0x0009a4f3) grid_afind_control_pane

0xa915,	// (0x00096251) grid_afind_pane_ParamLimits

0xa915,	// (0x00096251) grid_afind_pane

0xa931,	// (0x0009626d) cell_afind_pane_ParamLimits

0xa931,	// (0x0009626d) cell_afind_pane

0x1ad6,	// (0x0008d412) afind_page_pane_g1

0xa979,	// (0x000962b5) afind_page_pane_g2

0xa981,	// (0x000962bd) afind_page_pane_g3

0x0002,

0xf8b6,	// (0x0009b1f2) afind_page_pane_g

0xa989,	// (0x000962c5) afind_page_pane_t1

0xebdd,	// (0x0009a519) cell_afind_grid_control_pane_ParamLimits

0xebdd,	// (0x0009a519) cell_afind_grid_control_pane

0xea68,	// (0x0009a3a4) bg_button_pane_cp69_ParamLimits

0xea68,	// (0x0009a3a4) bg_button_pane_cp69

0xa997,	// (0x000962d3) cell_afind_pane_g1_ParamLimits

0xa997,	// (0x000962d3) cell_afind_pane_g1

0xa9a4,	// (0x000962e0) cell_afind_pane_t1_ParamLimits

0xa9a4,	// (0x000962e0) cell_afind_pane_t1

0x1ae0,	// (0x0008d41c) bg_button_pane_cp72

0xebec,	// (0x0009a528) cell_afind_grid_control_pane_g1

0x8576,	// (0x00093eb2) aid_image_placing_area_ParamLimits

0x8576,	// (0x00093eb2) aid_image_placing_area

0x162e,	// (0x0008cf6a) field_vitu_entry_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) field_vitu_entry_pane_g1

0x162e,	// (0x0008cf6a) field_vitu_entry_pane_g2_ParamLimits

0x162e,	// (0x0008cf6a) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0009aafd) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0009aafd) field_vitu_entry_pane_g

0xe7ec,	// (0x0009a128) cell_vitu_itu_pane_g1_ParamLimits

0xe5b6,	// (0x00099ef2) cell_vitu_itu_pane_t3_ParamLimits

0xe5b6,	// (0x00099ef2) cell_vitu_itu_pane_t3

0xea03,	// (0x0009a33f) mp4_progress_pane_t1_ParamLimits

0xea1c,	// (0x0009a358) mp4_progress_pane_t2_ParamLimits

0xf7fc,	// (0x0009b138) mp4_progress_pane_t_ParamLimits

0xea35,	// (0x0009a371) mup_progress_pane_cp04_ParamLimits

0xa8be,	// (0x000961fa) main_myfav_hc_pane_t5_ParamLimits

0xa8be,	// (0x000961fa) main_myfav_hc_pane_t5

0x5acf,	// (0x0009140b) aid_zoom_text_primary

0x5d70,	// (0x000916ac) popup_adpt_find_window_ParamLimits

0x8a3f,	// (0x0009437b) main_cam_set_pane

0xa312,	// (0x00095c4e) cam4_zoom_pane_ParamLimits

0xa312,	// (0x00095c4e) cam4_zoom_pane

0xa9b6,	// (0x000962f2) main_cam_set_pane_g1_ParamLimits

0xa9b6,	// (0x000962f2) main_cam_set_pane_g1

0xa9c4,	// (0x00096300) main_cam_set_pane_g2_ParamLimits

0xa9c4,	// (0x00096300) main_cam_set_pane_g2

0x0001,

0xf8bd,	// (0x0009b1f9) main_cam_set_pane_g_ParamLimits

0xf8bd,	// (0x0009b1f9) main_cam_set_pane_g

0xa9d0,	// (0x0009630c) main_cam_set_pane_t1_ParamLimits

0xa9d0,	// (0x0009630c) main_cam_set_pane_t1

0xa9ec,	// (0x00096328) main_cset_listscroll_pane_ParamLimits

0xa9ec,	// (0x00096328) main_cset_listscroll_pane

0xaa1e,	// (0x0009635a) main_cset_slider_pane_ParamLimits

0xaa1e,	// (0x0009635a) main_cset_slider_pane

0xebfd,	// (0x0009a539) main_cset_list_pane_ParamLimits

0xebfd,	// (0x0009a539) main_cset_list_pane

0xec0d,	// (0x0009a549) scroll_pane_cp028

0xaa3d,	// (0x00096379) aid_area_touch_slider

0xaa59,	// (0x00096395) cset_slider_pane

0xaa7c,	// (0x000963b8) main_cset_slider_pane_g1

0xaa91,	// (0x000963cd) main_cset_slider_pane_g2

0x0011,

0xf8c2,	// (0x0009b1fe) main_cset_slider_pane_g

0xec46,	// (0x0009a582) main_cset_slider_pane_t1

0xab53,	// (0x0009648f) main_cset_slider_pane_t2

0xab6d,	// (0x000964a9) main_cset_slider_pane_t3

0xab87,	// (0x000964c3) main_cset_slider_pane_t4

0xaba1,	// (0x000964dd) main_cset_slider_pane_t5

0xabbf,	// (0x000964fb) main_cset_slider_pane_t6

0xabd6,	// (0x00096512) main_cset_slider_pane_t7

0x000e,

0xf8e7,	// (0x0009b223) main_cset_slider_pane_t

0xace2,	// (0x0009661e) cset_list_set_pane_ParamLimits

0xace2,	// (0x0009661e) cset_list_set_pane

0xece0,	// (0x0009a61c) aid_position_infowindow_above

0xece8,	// (0x0009a624) aid_position_infowindow_below

0xf015,	// (0x0009a951) cset_list_set_pane_g1_ParamLimits

0xf015,	// (0x0009a951) cset_list_set_pane_g1

0xf021,	// (0x0009a95d) cset_list_set_pane_g3_ParamLimits

0xf021,	// (0x0009a95d) cset_list_set_pane_g3

0x0001,

0xf906,	// (0x0009b242) cset_list_set_pane_g_ParamLimits

0xf906,	// (0x0009b242) cset_list_set_pane_g

0xf030,	// (0x0009a96c) cset_list_set_pane_t1_ParamLimits

0xf030,	// (0x0009a96c) cset_list_set_pane_t1

0x0f37,	// (0x0008c873) list_highlight_pane_cp021_ParamLimits

0x0f37,	// (0x0008c873) list_highlight_pane_cp021

0x265d,	// (0x0008df99) cset_slider_pane_g1

0x266f,	// (0x0008dfab) cset_slider_pane_g2

0x2666,	// (0x0008dfa2) cset_slider_pane_g3

0x0002,

0xf90b,	// (0x0009b247) cset_slider_pane_g

0xacf8,	// (0x00096634) aid_area_touch_cam4_zoom

0xad00,	// (0x0009663c) cam4_zoom_cont_pane

0xad08,	// (0x00096644) cam4_zoom_pane_g1

0xad10,	// (0x0009664c) cam4_zoom_pane_g2

0xad18,	// (0x00096654) cam4_zoom_pane_g3

0x0002,

0xf912,	// (0x0009b24e) cam4_zoom_pane_g

0xad20,	// (0x0009665c) cam4_zoom_cont_pane_g1

0xad29,	// (0x00096665) cam4_zoom_cont_pane_g2

0xad32,	// (0x0009666e) cam4_zoom_cont_pane_g3

0x0002,

0xf919,	// (0x0009b255) cam4_zoom_cont_pane_g

0xa136,	// (0x00095a72) call4_image_pane_ParamLimits

0xa136,	// (0x00095a72) call4_image_pane

0xa195,	// (0x00095ad1) call4_windows_conf_pane_ParamLimits

0xa1da,	// (0x00095b16) popup_call4_audio_in_window_ParamLimits

0xa1da,	// (0x00095b16) popup_call4_audio_in_window

0x0f2d,	// (0x0008c869) bg_popup_call2_act_pane_cp02

0xea74,	// (0x0009a3b0) call4_list_conf_pane

0x1ad6,	// (0x0008d412) call4_image_pane_g1

0x1ad6,	// (0x0008d412) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0009acd9) call4_image_pane_g

0xecf0,	// (0x0009a62c) list_single_graphic_popup_conf4_pane_ParamLimits

0xecf0,	// (0x0009a62c) list_single_graphic_popup_conf4_pane

0x0f2d,	// (0x0008c869) list_highlight_pane_cp022

0xed03,	// (0x0009a63f) list_single_graphic_popup_conf4_pane_g1

0x2201,	// (0x0008db3d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf920,	// (0x0009b25c) list_single_graphic_popup_conf4_pane_g

0xed0b,	// (0x0009a647) list_single_graphic_popup_conf4_pane_t1

0x6b06,	// (0x00092442) popup_vtel_slider_window_ParamLimits

0x6b06,	// (0x00092442) popup_vtel_slider_window

0xea56,	// (0x0009a392) dialer2_ne_pane_t2_ParamLimits

0xea56,	// (0x0009a392) dialer2_ne_pane_t2

0x0001,

0xf801,	// (0x0009b13d) dialer2_ne_pane_t_ParamLimits

0xf801,	// (0x0009b13d) dialer2_ne_pane_t

0x0f37,	// (0x0008c873) bg_popup_sub_pane_cp010_ParamLimits

0x0f37,	// (0x0008c873) bg_popup_sub_pane_cp010

0xad3b,	// (0x00096677) popup_vtel_slider_window_g1_ParamLimits

0xad3b,	// (0x00096677) popup_vtel_slider_window_g1

0xad47,	// (0x00096683) popup_vtel_slider_window_g2_ParamLimits

0xad47,	// (0x00096683) popup_vtel_slider_window_g2

0x0003,

0xf925,	// (0x0009b261) popup_vtel_slider_window_g_ParamLimits

0xf925,	// (0x0009b261) popup_vtel_slider_window_g

0xad8f,	// (0x000966cb) vtel_slider_pane_ParamLimits

0xad8f,	// (0x000966cb) vtel_slider_pane

0xad9e,	// (0x000966da) vtel_slider_pane_g1_ParamLimits

0xad9e,	// (0x000966da) vtel_slider_pane_g1

0xadab,	// (0x000966e7) vtel_slider_pane_g2_ParamLimits

0xadab,	// (0x000966e7) vtel_slider_pane_g2

0xadb8,	// (0x000966f4) vtel_slider_pane_g3_ParamLimits

0xadb8,	// (0x000966f4) vtel_slider_pane_g3

0xad9e,	// (0x000966da) vtel_slider_pane_g4_ParamLimits

0xad9e,	// (0x000966da) vtel_slider_pane_g4

0xadc5,	// (0x00096701) vtel_slider_pane_g5_ParamLimits

0xadc5,	// (0x00096701) vtel_slider_pane_g5

0x0004,

0xf92e,	// (0x0009b26a) vtel_slider_pane_g_ParamLimits

0xf92e,	// (0x0009b26a) vtel_slider_pane_g

0x8a3f,	// (0x0009437b) main_gallery2_pane

0xa566,	// (0x00095ea2) aid_size_row_itut2_dropdow_list_ParamLimits

0xa566,	// (0x00095ea2) aid_size_row_itut2_dropdow_list

0xa5d4,	// (0x00095f10) grid_vitu2_function_top_pane_ParamLimits

0xa5d4,	// (0x00095f10) grid_vitu2_function_top_pane

0xa62e,	// (0x00095f6a) popup_vitu2_dropdown_list_window_ParamLimits

0xa62e,	// (0x00095f6a) popup_vitu2_dropdown_list_window

0xa64c,	// (0x00095f88) popup_vitu2_match_list_window

0xadd2,	// (0x0009670e) cell_vitu2_function_top_pane_ParamLimits

0xadd2,	// (0x0009670e) cell_vitu2_function_top_pane

0xadec,	// (0x00096728) cell_vitu2_function_top_pane_cp01_ParamLimits

0xadec,	// (0x00096728) cell_vitu2_function_top_pane_cp01

0xae08,	// (0x00096744) cell_vitu2_function_top_wide_pane_ParamLimits

0xae08,	// (0x00096744) cell_vitu2_function_top_wide_pane

0x8a3f,	// (0x0009437b) bg_button_pane_cp012

0xae26,	// (0x00096762) cell_vitu2_function_top_pane_g1

0xae3a,	// (0x00096776) bg_button_pane_cp013_ParamLimits

0xae3a,	// (0x00096776) bg_button_pane_cp013

0xae56,	// (0x00096792) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xae56,	// (0x00096792) cell_vitu2_function_top_wide_pane_g1

0x5e66,	// (0x000917a2) bg_popup_sub_pane_cp20

0xae6e,	// (0x000967aa) list_vitu2_match_list_pane

0xeae1,	// (0x0009a41d) bg_popup_sub_pane_cp20_g1

0xeae9,	// (0x0009a425) bg_popup_sub_pane_cp20_g2

0x1ce7,	// (0x0008d623) bg_popup_sub_pane_cp20_g3

0xeaf1,	// (0x0009a42d) bg_popup_sub_pane_cp20_g4

0x1cc7,	// (0x0008d603) bg_popup_sub_pane_cp20_g5

0xed21,	// (0x0009a65d) bg_popup_sub_pane_cp20_g6

0xeb01,	// (0x0009a43d) bg_popup_sub_pane_cp20_g7

0xeb09,	// (0x0009a445) bg_popup_sub_pane_cp20_g8

0xeb11,	// (0x0009a44d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf939,	// (0x0009b275) bg_popup_sub_pane_cp20_g

0xae86,	// (0x000967c2) list_vitu2_match_list_item_pane_ParamLimits

0xae86,	// (0x000967c2) list_vitu2_match_list_item_pane

0xae98,	// (0x000967d4) list_vitu2_match_list_item_pane_t1

0x5e80,	// (0x000917bc) bg_popup_sub_pane_cp21

0x1aa0,	// (0x0008d3dc) grid_vitu2_dropdown_list_pane

0xaea6,	// (0x000967e2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xaea6,	// (0x000967e2) cell_vitu2_dropdown_list_char_pane

0xaec8,	// (0x00096804) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xaec8,	// (0x00096804) cell_vitu2_dropdown_list_ctrl_pane

0xed29,	// (0x0009a665) cell_vitu2_dropdown_list_char_pane_g1

0xed32,	// (0x0009a66e) cell_vitu2_dropdown_list_char_pane_g2

0xed3b,	// (0x0009a677) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94c,	// (0x0009b288) cell_vitu2_dropdown_list_char_pane_g

0xaef0,	// (0x0009682c) cell_vitu2_dropdown_list_char_pane_t1

0xaefe,	// (0x0009683a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xaefe,	// (0x0009683a) cell_vitu2_dropdown_list_ctrl_pane_g1

0xaf0b,	// (0x00096847) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xaf0b,	// (0x00096847) cell_vitu2_dropdown_list_ctrl_pane_g2

0xaf18,	// (0x00096854) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xaf18,	// (0x00096854) cell_vitu2_dropdown_list_ctrl_pane_g3

0xaf25,	// (0x00096861) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xaf25,	// (0x00096861) cell_vitu2_dropdown_list_ctrl_pane_g4

0x191a,	// (0x0008d256) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x191a,	// (0x0008d256) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf953,	// (0x0009b28f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf953,	// (0x0009b28f) cell_vitu2_dropdown_list_ctrl_pane_g

0xaf41,	// (0x0009687d) aid_size_cell_gallery2_ParamLimits

0xaf41,	// (0x0009687d) aid_size_cell_gallery2

0xaf5b,	// (0x00096897) grid_gallery2_pane_ParamLimits

0xaf5b,	// (0x00096897) grid_gallery2_pane

0xaf72,	// (0x000968ae) scroll_pane_cp029_ParamLimits

0xaf72,	// (0x000968ae) scroll_pane_cp029

0xaf82,	// (0x000968be) cell_gallery2_pane_ParamLimits

0xaf82,	// (0x000968be) cell_gallery2_pane

0xed44,	// (0x0009a680) cell_gallery2_pane_g2

0x0f25,	// (0x0008c861) cell_gallery2_pane_g3

0xed4c,	// (0x0009a688) cell_gallery2_pane_g4

0xed54,	// (0x0009a690) cell_gallery2_pane_g5

0x1aa0,	// (0x0008d3dc) grid_highlight_pane_cp10

0xa64c,	// (0x00095f88) popup_vitu2_match_list_window_ParamLimits

0xa65e,	// (0x00095f9a) popup_vitu2_query_window_ParamLimits

0xa65e,	// (0x00095f9a) popup_vitu2_query_window

0x5e80,	// (0x000917bc) bg_vitu2_candi_button_pane

0xed29,	// (0x0009a665) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed32,	// (0x0009a66e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed3b,	// (0x0009a677) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xafd7,	// (0x00096913) bg_button_pane_cp015

0xafec,	// (0x00096928) bg_button_pane_cp016

0xaff8,	// (0x00096934) bg_button_pane_cp017

0x25ed,	// (0x0008df29) bg_popup_sub_pane_cp22

0xed5c,	// (0x0009a698) popup_vitu2_query_window_g1

0xb038,	// (0x00096974) popup_vitu2_query_window_g2

0x0002,

0xf95e,	// (0x0009b29a) popup_vitu2_query_window_g

0xb05c,	// (0x00096998) popup_vitu2_query_window_t1_ParamLimits

0xb05c,	// (0x00096998) popup_vitu2_query_window_t1

0xb08f,	// (0x000969cb) popup_vitu2_query_window_t2_ParamLimits

0xb08f,	// (0x000969cb) popup_vitu2_query_window_t2

0xb0a1,	// (0x000969dd) popup_vitu2_query_window_t3_ParamLimits

0xb0a1,	// (0x000969dd) popup_vitu2_query_window_t3

0xb0c9,	// (0x00096a05) popup_vitu2_query_window_t4_ParamLimits

0xb0c9,	// (0x00096a05) popup_vitu2_query_window_t4

0xb0dd,	// (0x00096a19) popup_vitu2_query_window_t5_ParamLimits

0xb0dd,	// (0x00096a19) popup_vitu2_query_window_t5

0x0006,

0xf965,	// (0x0009b2a1) popup_vitu2_query_window_t_ParamLimits

0xf965,	// (0x0009b2a1) popup_vitu2_query_window_t

0xebf5,	// (0x0009a531) main_cset_text_pane

0xaa3d,	// (0x00096379) aid_area_touch_slider_ParamLimits

0xaa59,	// (0x00096395) cset_slider_pane_ParamLimits

0xaa7c,	// (0x000963b8) main_cset_slider_pane_g1_ParamLimits

0xaa91,	// (0x000963cd) main_cset_slider_pane_g2_ParamLimits

0xec16,	// (0x0009a552) main_cset_slider_pane_g3_ParamLimits

0xec16,	// (0x0009a552) main_cset_slider_pane_g3

0xaaa6,	// (0x000963e2) main_cset_slider_pane_g4_ParamLimits

0xaaa6,	// (0x000963e2) main_cset_slider_pane_g4

0xaab5,	// (0x000963f1) main_cset_slider_pane_g5_ParamLimits

0xaab5,	// (0x000963f1) main_cset_slider_pane_g5

0xaac3,	// (0x000963ff) main_cset_slider_pane_g6_ParamLimits

0xaac3,	// (0x000963ff) main_cset_slider_pane_g6

0xf8c2,	// (0x0009b1fe) main_cset_slider_pane_g_ParamLimits

0xec46,	// (0x0009a582) main_cset_slider_pane_t1_ParamLimits

0xab53,	// (0x0009648f) main_cset_slider_pane_t2_ParamLimits

0xab6d,	// (0x000964a9) main_cset_slider_pane_t3_ParamLimits

0xab87,	// (0x000964c3) main_cset_slider_pane_t4_ParamLimits

0xaba1,	// (0x000964dd) main_cset_slider_pane_t5_ParamLimits

0xabbf,	// (0x000964fb) main_cset_slider_pane_t6_ParamLimits

0xabd6,	// (0x00096512) main_cset_slider_pane_t7_ParamLimits

0xac04,	// (0x00096540) main_cset_slider_pane_t8_ParamLimits

0xac04,	// (0x00096540) main_cset_slider_pane_t8

0xac2c,	// (0x00096568) main_cset_slider_pane_t9_ParamLimits

0xac2c,	// (0x00096568) main_cset_slider_pane_t9

0xac54,	// (0x00096590) main_cset_slider_pane_t10_ParamLimits

0xac54,	// (0x00096590) main_cset_slider_pane_t10

0xac7c,	// (0x000965b8) main_cset_slider_pane_t11_ParamLimits

0xac7c,	// (0x000965b8) main_cset_slider_pane_t11

0xaca6,	// (0x000965e2) main_cset_slider_pane_t12_ParamLimits

0xaca6,	// (0x000965e2) main_cset_slider_pane_t12

0xacc3,	// (0x000965ff) main_cset_slider_pane_t13_ParamLimits

0xacc3,	// (0x000965ff) main_cset_slider_pane_t13

0xf8e7,	// (0x0009b223) main_cset_slider_pane_t_ParamLimits

0x0f2d,	// (0x0008c869) bg_popup_sub_pane_cp011

0xed68,	// (0x0009a6a4) main_cset_text_pane_g1

0xed70,	// (0x0009a6ac) main_cset_text_pane_t1

0xed7e,	// (0x0009a6ba) main_cset_text_pane_t2

0xed8c,	// (0x0009a6c8) main_cset_text_pane_t3

0xed9a,	// (0x0009a6d6) main_cset_text_pane_t4

0xeda8,	// (0x0009a6e4) main_cset_text_pane_t5

0xedb6,	// (0x0009a6f2) main_cset_text_pane_t6

0xedc4,	// (0x0009a700) main_cset_text_pane_t7

0x0006,

0xf974,	// (0x0009b2b0) main_cset_text_pane_t

0x5e80,	// (0x000917bc) main_cam4_burst_pane

0x5e80,	// (0x000917bc) main_cam5_pane

0xebcb,	// (0x0009a507) bg_button_pane_cp019

0xebd4,	// (0x0009a510) bg_button_pane_cp020

0xec22,	// (0x0009a55e) main_cset_slider_pane_g7_ParamLimits

0xec22,	// (0x0009a55e) main_cset_slider_pane_g7

0xec2e,	// (0x0009a56a) main_cset_slider_pane_g8_ParamLimits

0xec2e,	// (0x0009a56a) main_cset_slider_pane_g8

0xaad7,	// (0x00096413) main_cset_slider_pane_g9_ParamLimits

0xaad7,	// (0x00096413) main_cset_slider_pane_g9

0xaae3,	// (0x0009641f) main_cset_slider_pane_g10_ParamLimits

0xaae3,	// (0x0009641f) main_cset_slider_pane_g10

0xaaef,	// (0x0009642b) main_cset_slider_pane_g11_ParamLimits

0xaaef,	// (0x0009642b) main_cset_slider_pane_g11

0xaafb,	// (0x00096437) main_cset_slider_pane_g12_ParamLimits

0xaafb,	// (0x00096437) main_cset_slider_pane_g12

0xab07,	// (0x00096443) main_cset_slider_pane_g13_ParamLimits

0xab07,	// (0x00096443) main_cset_slider_pane_g13

0xab13,	// (0x0009644f) main_cset_slider_pane_g14_ParamLimits

0xab13,	// (0x0009644f) main_cset_slider_pane_g14

0xab1f,	// (0x0009645b) main_cset_slider_pane_g15_ParamLimits

0xab1f,	// (0x0009645b) main_cset_slider_pane_g15

0xec6e,	// (0x0009a5aa) main_cset_slider_pane_t14_ParamLimits

0xec6e,	// (0x0009a5aa) main_cset_slider_pane_t14

0xeca7,	// (0x0009a5e3) main_cset_slider_pane_t15_ParamLimits

0xeca7,	// (0x0009a5e3) main_cset_slider_pane_t15

0xb147,	// (0x00096a83) aid_cam4_burst_size_cell_ParamLimits

0xb147,	// (0x00096a83) aid_cam4_burst_size_cell

0xb163,	// (0x00096a9f) grid_cam4_burst_pane_ParamLimits

0xb163,	// (0x00096a9f) grid_cam4_burst_pane

0xb193,	// (0x00096acf) linegrid_cam4_burst_pane_ParamLimits

0xb193,	// (0x00096acf) linegrid_cam4_burst_pane

0xb1b3,	// (0x00096aef) scroll_pane_cp30_ParamLimits

0xb1b3,	// (0x00096aef) scroll_pane_cp30

0xb1bf,	// (0x00096afb) cell_cam4_burst_pane_ParamLimits

0xb1bf,	// (0x00096afb) cell_cam4_burst_pane

0xedd2,	// (0x0009a70e) linegrid_cam4_burst_pane_g1_ParamLimits

0xedd2,	// (0x0009a70e) linegrid_cam4_burst_pane_g1

0xb1fb,	// (0x00096b37) linegrid_cam4_burst_pane_g2_ParamLimits

0xb1fb,	// (0x00096b37) linegrid_cam4_burst_pane_g2

0xeddf,	// (0x0009a71b) linegrid_cam4_burst_pane_g3_ParamLimits

0xeddf,	// (0x0009a71b) linegrid_cam4_burst_pane_g3

0x0002,

0xf983,	// (0x0009b2bf) linegrid_cam4_burst_pane_g_ParamLimits

0xf983,	// (0x0009b2bf) linegrid_cam4_burst_pane_g

0xb20c,	// (0x00096b48) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb20c,	// (0x00096b48) linegrid_cam4_burst_pane_g3_copy1

0xedec,	// (0x0009a728) linegrid_cam4_burst_pane_g4_ParamLimits

0xedec,	// (0x0009a728) linegrid_cam4_burst_pane_g4

0xb226,	// (0x00096b62) linegrid_cam4_burst_pane_g5_ParamLimits

0xb226,	// (0x00096b62) linegrid_cam4_burst_pane_g5

0xb237,	// (0x00096b73) linegrid_cam4_burst_pane_g6_ParamLimits

0xb237,	// (0x00096b73) linegrid_cam4_burst_pane_g6

0xedf9,	// (0x0009a735) linegrid_cam4_burst_pane_g7_ParamLimits

0xedf9,	// (0x0009a735) linegrid_cam4_burst_pane_g7

0xb248,	// (0x00096b84) cell_cam4_burst_pane_g1

0xee12,	// (0x0009a74e) main_cam5_pane_t1_ParamLimits

0xee12,	// (0x0009a74e) main_cam5_pane_t1

0xee24,	// (0x0009a760) main_cam5_pane_t2_ParamLimits

0xee24,	// (0x0009a760) main_cam5_pane_t2

0xee36,	// (0x0009a772) main_cam5_pane_t3_ParamLimits

0xee36,	// (0x0009a772) main_cam5_pane_t3

0xee48,	// (0x0009a784) main_cam5_pane_t4_ParamLimits

0xee48,	// (0x0009a784) main_cam5_pane_t4

0xee60,	// (0x0009a79c) main_cam5_pane_t5_ParamLimits

0xee60,	// (0x0009a79c) main_cam5_pane_t5

0xee74,	// (0x0009a7b0) main_cam5_pane_t6_ParamLimits

0xee74,	// (0x0009a7b0) main_cam5_pane_t6

0xee88,	// (0x0009a7c4) main_cam5_pane_t7_ParamLimits

0xee88,	// (0x0009a7c4) main_cam5_pane_t7

0xee9a,	// (0x0009a7d6) main_cam5_pane_t8_ParamLimits

0xee9a,	// (0x0009a7d6) main_cam5_pane_t8

0xeeb6,	// (0x0009a7f2) main_cam5_pane_t9_ParamLimits

0xeeb6,	// (0x0009a7f2) main_cam5_pane_t9

0xeec8,	// (0x0009a804) main_cam5_pane_t10_ParamLimits

0xeec8,	// (0x0009a804) main_cam5_pane_t10

0xeeda,	// (0x0009a816) main_cam5_pane_t11_ParamLimits

0xeeda,	// (0x0009a816) main_cam5_pane_t11

0xeeec,	// (0x0009a828) main_cam5_pane_t12_ParamLimits

0xeeec,	// (0x0009a828) main_cam5_pane_t12

0xef01,	// (0x0009a83d) main_cam5_pane_t13_ParamLimits

0xef01,	// (0x0009a83d) main_cam5_pane_t13

0x000c,

0xf98f,	// (0x0009b2cb) main_cam5_pane_t_ParamLimits

0xf98f,	// (0x0009b2cb) main_cam5_pane_t

0x5e25,	// (0x00091761) popup_scut_keymap_window_ParamLimits

0x5e25,	// (0x00091761) popup_scut_keymap_window

0xb25b,	// (0x00096b97) aid_size_cell_brow_shortcut

0x1aa0,	// (0x0008d3dc) bg_popup_window_pane_cp010

0xb267,	// (0x00096ba3) grid_scut_pane

0xb273,	// (0x00096baf) cell_scut_pane_ParamLimits

0xb273,	// (0x00096baf) cell_scut_pane

0xb28a,	// (0x00096bc6) cell_scut_pane_g1

0xef1e,	// (0x0009a85a) cell_scut_pane_t1

0xef2d,	// (0x0009a869) cell_scut_pane_t2

0xb293,	// (0x00096bcf) cell_scut_pane_t3

0x0002,

0xf9aa,	// (0x0009b2e6) cell_scut_pane_t

0x9254,	// (0x00094b90) main_mup3_pane_g8_ParamLimits

0x9254,	// (0x00094b90) main_mup3_pane_g8

0xa574,	// (0x00095eb0) area_vitu2_query_pane_ParamLimits

0xa574,	// (0x00095eb0) area_vitu2_query_pane

0xb004,	// (0x00096940) input_focus_pane_cp08

0xef3c,	// (0x0009a878) area_vitu2_query_pane_g1

0xb2a1,	// (0x00096bdd) area_vitu2_query_pane_g2

0x0001,

0xf9b1,	// (0x0009b2ed) area_vitu2_query_pane_g

0xb2b2,	// (0x00096bee) area_vitu2_query_pane_t1_ParamLimits

0xb2b2,	// (0x00096bee) area_vitu2_query_pane_t1

0xb2c6,	// (0x00096c02) area_vitu2_query_pane_t2_ParamLimits

0xb2c6,	// (0x00096c02) area_vitu2_query_pane_t2

0xb2da,	// (0x00096c16) area_vitu2_query_pane_t3_ParamLimits

0xb2da,	// (0x00096c16) area_vitu2_query_pane_t3

0x0013,	// (0x0008b94f) area_vitu2_query_pane_t4_ParamLimits

0x0013,	// (0x0008b94f) area_vitu2_query_pane_t4

0x003b,	// (0x0008b977) area_vitu2_query_pane_t5_ParamLimits

0x003b,	// (0x0008b977) area_vitu2_query_pane_t5

0x0063,	// (0x0008b99f) area_vitu2_query_pane_t6_ParamLimits

0x0063,	// (0x0008b99f) area_vitu2_query_pane_t6

0x0006,

0xf9b6,	// (0x0009b2f2) area_vitu2_query_pane_t_ParamLimits

0xf9b6,	// (0x0009b2f2) area_vitu2_query_pane_t

0xafec,	// (0x00096928) bg_button_pane_cp018

0xb302,	// (0x00096c3e) bg_button_pane_cp021

0xb30e,	// (0x00096c4a) bg_button_pane_cp022

0xb331,	// (0x00096c6d) input_focus_pane_cp09

0x233d,	// (0x0008dc79) aid_size_touch_mv_arrow_left

0x2366,	// (0x0008dca2) aid_size_touch_mv_arrow_right

0xab37,	// (0x00096473) main_cset_slider_pane_g16_ParamLimits

0xab37,	// (0x00096473) main_cset_slider_pane_g16

0xab45,	// (0x00096481) main_cset_slider_pane_g17_ParamLimits

0xab45,	// (0x00096481) main_cset_slider_pane_g17

0xb248,	// (0x00096b84) cell_cam4_burst_pane_g1_ParamLimits

0x0f2d,	// (0x0008c869) compa_mode_pane

0xad53,	// (0x0009668f) popup_vtel_slider_window_g3_ParamLimits

0xad53,	// (0x0009668f) popup_vtel_slider_window_g3

0xad67,	// (0x000966a3) popup_vtel_slider_window_g4_ParamLimits

0xad67,	// (0x000966a3) popup_vtel_slider_window_g4

0xad7b,	// (0x000966b7) popup_vtel_slider_window_t1_ParamLimits

0xad7b,	// (0x000966b7) popup_vtel_slider_window_t1

0x5e80,	// (0x000917bc) main_cl_pane

0x8add,	// (0x00094419) popup_imed_adjust2_window_ParamLimits

0x25ed,	// (0x0008df29) bg_tb_trans_pane_cp05_ParamLimits

0xe721,	// (0x0009a05d) popup_imed_adjust2_window_g1_ParamLimits

0xe730,	// (0x0009a06c) popup_imed_adjust2_window_g2_ParamLimits

0xe730,	// (0x0009a06c) popup_imed_adjust2_window_g2

0xe73c,	// (0x0009a078) popup_imed_adjust2_window_g3_ParamLimits

0xe73c,	// (0x0009a078) popup_imed_adjust2_window_g3

0x0002,

0xf72c,	// (0x0009b068) popup_imed_adjust2_window_g_ParamLimits

0xf72c,	// (0x0009b068) popup_imed_adjust2_window_g

0xe748,	// (0x0009a084) popup_imed_adjust2_window_t1_ParamLimits

0xe760,	// (0x0009a09c) slider_imed_adjust_pane_ParamLimits

0xe774,	// (0x0009a0b0) slider_imed_adjust_pane_g1_ParamLimits

0xe784,	// (0x0009a0c0) slider_imed_adjust_pane_g2_ParamLimits

0xe794,	// (0x0009a0d0) slider_imed_adjust_pane_g3_ParamLimits

0xe7a5,	// (0x0009a0e1) slider_imed_adjust_pane_g4_ParamLimits

0xf733,	// (0x0009b06f) slider_imed_adjust_pane_g_ParamLimits

0xa2bb,	// (0x00095bf7) aid_touch_area_cam4_ParamLimits

0xa2bb,	// (0x00095bf7) aid_touch_area_cam4

0xa2cb,	// (0x00095c07) battery_pane_cp01

0xa352,	// (0x00095c8e) main_camera4_pane_g6_ParamLimits

0xa352,	// (0x00095c8e) main_camera4_pane_g6

0xa370,	// (0x00095cac) main_camera4_pane_t2_ParamLimits

0xa370,	// (0x00095cac) main_camera4_pane_t2

0x0001,

0xf835,	// (0x0009b171) main_camera4_pane_t_ParamLimits

0xf835,	// (0x0009b171) main_camera4_pane_t

0xa3f7,	// (0x00095d33) aid_touch_area_vid4_ParamLimits

0xa3f7,	// (0x00095d33) aid_touch_area_vid4

0xa437,	// (0x00095d73) main_video4_pane_g5_ParamLimits

0xa437,	// (0x00095d73) main_video4_pane_g5

0xa45b,	// (0x00095d97) vid4_progress_pane_ParamLimits

0xa45b,	// (0x00095d97) vid4_progress_pane

0xec3a,	// (0x0009a576) main_cset_slider_pane_g18_ParamLimits

0xec3a,	// (0x0009a576) main_cset_slider_pane_g18

0xee06,	// (0x0009a742) cell_cam4_burst_pane_g2_ParamLimits

0xee06,	// (0x0009a742) cell_cam4_burst_pane_g2

0x0001,

0xf98a,	// (0x0009b2c6) cell_cam4_burst_pane_g_ParamLimits

0xf98a,	// (0x0009b2c6) cell_cam4_burst_pane_g

0xb341,	// (0x00096c7d) bg_cl_pane_ParamLimits

0xb341,	// (0x00096c7d) bg_cl_pane

0xb34d,	// (0x00096c89) cl_header_pane_ParamLimits

0xb34d,	// (0x00096c89) cl_header_pane

0xb359,	// (0x00096c95) cl_listscroll_pane_ParamLimits

0xb359,	// (0x00096c95) cl_listscroll_pane

0xef48,	// (0x0009a884) bg_cl_pane_g1

0xef50,	// (0x0009a88c) bg_cl_pane_g2

0xef58,	// (0x0009a894) bg_cl_pane_g3

0xef60,	// (0x0009a89c) bg_cl_pane_g4

0xef68,	// (0x0009a8a4) bg_cl_pane_g5

0xef70,	// (0x0009a8ac) bg_cl_pane_g6

0xef78,	// (0x0009a8b4) bg_cl_pane_g7

0xef80,	// (0x0009a8bc) bg_cl_pane_g8

0xef88,	// (0x0009a8c4) bg_cl_pane_g9

0x0008,

0xf9c5,	// (0x0009b301) bg_cl_pane_g

0xb365,	// (0x00096ca1) aid_height_cl_leading_ParamLimits

0xb365,	// (0x00096ca1) aid_height_cl_leading

0xb371,	// (0x00096cad) aid_height_cl_text_ParamLimits

0xb371,	// (0x00096cad) aid_height_cl_text

0x1620,	// (0x0008cf5c) bg_cl_header_pane_ParamLimits

0x1620,	// (0x0008cf5c) bg_cl_header_pane

0xb389,	// (0x00096cc5) cl_header_pane_g1_ParamLimits

0xb389,	// (0x00096cc5) cl_header_pane_g1

0xb396,	// (0x00096cd2) cl_header_pane_t1_ParamLimits

0xb396,	// (0x00096cd2) cl_header_pane_t1

0xef90,	// (0x0009a8cc) cl_list_pane

0xec0d,	// (0x0009a549) hc_scroll_pane_cp01

0x1cc7,	// (0x0008d603) bg_cl_header_pane_g1

0xeae1,	// (0x0009a41d) bg_cl_header_pane_g2

0x1ce7,	// (0x0008d623) bg_cl_header_pane_g3

0xeaf1,	// (0x0009a42d) bg_cl_header_pane_g4

0xeae9,	// (0x0009a425) bg_cl_header_pane_g5

0xed21,	// (0x0009a65d) bg_cl_header_pane_g6

0xeb09,	// (0x0009a445) bg_cl_header_pane_g7

0xeb11,	// (0x0009a44d) bg_cl_header_pane_g8

0xeb01,	// (0x0009a43d) bg_cl_header_pane_g9

0x0008,

0xf9d8,	// (0x0009b314) bg_cl_header_pane_g

0xb3a8,	// (0x00096ce4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb3a8,	// (0x00096ce4) hc_cl_list_double_graphic_heading_pane

0xb3b9,	// (0x00096cf5) hc_cl_list_single_graphic_pane_ParamLimits

0xb3b9,	// (0x00096cf5) hc_cl_list_single_graphic_pane

0xb3d2,	// (0x00096d0e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb3d2,	// (0x00096d0e) hc_cl_list_single_graphic_pane_g1

0xb3de,	// (0x00096d1a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb3de,	// (0x00096d1a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9eb,	// (0x0009b327) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9eb,	// (0x0009b327) hc_cl_list_single_graphic_pane_g

0xb3f2,	// (0x00096d2e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb3f2,	// (0x00096d2e) hc_cl_list_single_graphic_pane_t1

0xb3d2,	// (0x00096d0e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb3d2,	// (0x00096d0e) hc_cl_list_double_graphic_heading_pane_g1

0xb407,	// (0x00096d43) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb407,	// (0x00096d43) hc_cl_list_double_graphic_heading_pane_g2

0xb41b,	// (0x00096d57) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb41b,	// (0x00096d57) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f0,	// (0x0009b32c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f0,	// (0x0009b32c) hc_cl_list_double_graphic_heading_pane_g

0xb42f,	// (0x00096d6b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb42f,	// (0x00096d6b) hc_cl_list_double_graphic_heading_pane_t1

0xb444,	// (0x00096d80) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb444,	// (0x00096d80) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f7,	// (0x0009b333) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f7,	// (0x0009b333) hc_cl_list_double_graphic_heading_pane_t

0xb461,	// (0x00096d9d) vid4_progress_pane_g1

0xb471,	// (0x00096dad) vid4_progress_pane_g2

0xb481,	// (0x00096dbd) vid4_progress_pane_g3

0xb493,	// (0x00096dcf) vid4_progress_pane_g4

0x0004,

0xf9fc,	// (0x0009b338) vid4_progress_pane_g

0xb4ab,	// (0x00096de7) vid4_progress_pane_t1

0xb4c1,	// (0x00096dfd) vid4_progress_pane_t2

0x0002,

0xfa07,	// (0x0009b343) vid4_progress_pane_t

0xb4eb,	// (0x00096e27) wait_bar_pane_cp07

0x4837,	// (0x00090173) blid_firmament_pane_ParamLimits

0x487a,	// (0x000901b6) popup_blid_sat_info2_window_g1

0x489e,	// (0x000901da) popup_blid_sat_info2_window_t3

0x48ac,	// (0x000901e8) popup_blid_sat_info2_window_t4

0x48ba,	// (0x000901f6) popup_blid_sat_info2_window_t5

0x48c8,	// (0x00090204) popup_blid_sat_info2_window_t6

0x48d8,	// (0x00090214) popup_blid_sat_info2_window_t7

0x48e6,	// (0x00090222) popup_blid_sat_info2_window_t8

0x48f4,	// (0x00090230) popup_blid_sat_info2_window_t9

0x4902,	// (0x0009023e) popup_blid_sat_info2_window_t10

0x49c3,	// (0x000902ff) aid_firma_cardinal_ParamLimits

0x49d7,	// (0x00090313) blid_firmament_pane_t1_ParamLimits

0x49ee,	// (0x0009032a) blid_firmament_pane_t2_ParamLimits

0x4a05,	// (0x00090341) blid_firmament_pane_t3_ParamLimits

0x4a1c,	// (0x00090358) blid_firmament_pane_t4_ParamLimits

0xf625,	// (0x0009af61) blid_firmament_pane_t_ParamLimits

0x4a33,	// (0x0009036f) blid_sat_info_pane_ParamLimits

0x8a3f,	// (0x0009437b) main_cam_set_pane_ParamLimits

0x992d,	// (0x00095269) aid_size_cell_colour_35_ParamLimits

0x9947,	// (0x00095283) aid_size_cell_colour_112_ParamLimits

0x995e,	// (0x0009529a) aid_size_cell_effect_ParamLimits

0x0f37,	// (0x0008c873) bg_tb_trans_pane_cp02_ParamLimits

0x23ab,	// (0x0008dce7) heading_imed_pane_ParamLimits

0x9978,	// (0x000952b4) listscroll_imed_pane_ParamLimits

0x3d18,	// (0x0008f654) popup_call2_audio_first_window_g5_ParamLimits

0x3d18,	// (0x0008f654) popup_call2_audio_first_window_g5

0x9fa1,	// (0x000958dd) aid_size_touch_image3_arrow_left_ParamLimits

0x9fa1,	// (0x000958dd) aid_size_touch_image3_arrow_left

0x9fb7,	// (0x000958f3) aid_size_touch_image3_arrow_right_ParamLimits

0x9fb7,	// (0x000958f3) aid_size_touch_image3_arrow_right

0xb4d6,	// (0x00096e12) vid4_progress_pane_t3

0x9af9,	// (0x00095435) main_hwr_training_symbol_option_pane_ParamLimits

0x9af9,	// (0x00095435) main_hwr_training_symbol_option_pane

0xe93d,	// (0x0009a279) popup_hwr_training_preview_window_ParamLimits

0xe93d,	// (0x0009a279) popup_hwr_training_preview_window

0x9b5a,	// (0x00095496) hwr_training_navi_pane_g5_ParamLimits

0x9b5a,	// (0x00095496) hwr_training_navi_pane_g5

0xeacf,	// (0x0009a40b) popup_char_count_window

0x5e66,	// (0x000917a2) bg_popup_sub_pane_cp20_ParamLimits

0xae6e,	// (0x000967aa) list_vitu2_match_list_pane_ParamLimits

0xae7a,	// (0x000967b6) vitu2_page_scroll_pane_ParamLimits

0xae7a,	// (0x000967b6) vitu2_page_scroll_pane

0x04db,	// (0x0008be17) list_single_hwr_training_symbol_option_pane_ParamLimits

0x04db,	// (0x0008be17) list_single_hwr_training_symbol_option_pane

0x04ee,	// (0x0008be2a) list_single_hwr_training_symbol_option_pane_g1

0x04f6,	// (0x0008be32) list_single_hwr_training_symbol_option_pane_t1

0x0504,	// (0x0008be40) bg_button_pane_cp023

0x050d,	// (0x0008be49) bg_button_pane_cp024

0x0540,	// (0x0008be7c) vitu2_page_scroll_pane_g1

0x0548,	// (0x0008be84) vitu2_page_scroll_pane_g2

0x0001,

0xfa0e,	// (0x0009b34a) vitu2_page_scroll_pane_g

0x0550,	// (0x0008be8c) vitu2_page_scroll_pane_t1

0x47ad,	// (0x000900e9) popup_char_count_window_g1

0x055f,	// (0x0008be9b) popup_char_count_window_g2

0x0568,	// (0x0008bea4) popup_char_count_window_g3

0x0002,

0xfa13,	// (0x0009b34f) popup_char_count_window_g

0x0571,	// (0x0008bead) popup_char_count_window_t1

0x5e80,	// (0x000917bc) main_vded2_pane

0xe70d,	// (0x0009a049) aid_size_cell_imed_line

0xe717,	// (0x0009a053) grid_imed_line_width_pane

0xa4c9,	// (0x00095e05) vid4_indicators_pane_g4

0x057f,	// (0x0008bebb) cell_imed_line_width_pane_ParamLimits

0x057f,	// (0x0008bebb) cell_imed_line_width_pane

0x0593,	// (0x0008becf) cell_imed_line_width_pane_g1

0x059c,	// (0x0008bed8) cell_imed_line_width_pane_g2

0x0001,

0xfa1a,	// (0x0009b356) cell_imed_line_width_pane_g

0xb512,	// (0x00096e4e) main_vded2_pane_g1_ParamLimits

0xb512,	// (0x00096e4e) main_vded2_pane_g1

0xb51f,	// (0x00096e5b) main_vded2_pane_g2_ParamLimits

0xb51f,	// (0x00096e5b) main_vded2_pane_g2

0x0001,

0xfa1f,	// (0x0009b35b) main_vded2_pane_g_ParamLimits

0xfa1f,	// (0x0009b35b) main_vded2_pane_g

0xb52d,	// (0x00096e69) vded2_slider_pane_ParamLimits

0xb52d,	// (0x00096e69) vded2_slider_pane

0xb53a,	// (0x00096e76) aid_size_touch_vded2_end

0xb544,	// (0x00096e80) aid_size_touch_vded2_playhead

0x05a4,	// (0x0008bee0) aid_size_touch_vded2_start

0x05ac,	// (0x0008bee8) vded2_slider_bg_pane

0x05b5,	// (0x0008bef1) vded2_slider_pane_g1

0x05be,	// (0x0008befa) vded2_slider_pane_g2

0xb54c,	// (0x00096e88) vded2_slider_pane_g3

0x0002,

0xfa24,	// (0x0009b360) vded2_slider_pane_g

0x05c6,	// (0x0008bf02) vded2_slider_bg_pane_g1

0x05cf,	// (0x0008bf0b) vded2_slider_bg_pane_g2

0x05d8,	// (0x0008bf14) vded2_slider_bg_pane_g3

0x0002,

0xfa2b,	// (0x0009b367) vded2_slider_bg_pane_g

0x82e0,	// (0x00093c1c) aid_postcard_touch_down_pane_ParamLimits

0x82e0,	// (0x00093c1c) aid_postcard_touch_down_pane

0x82f0,	// (0x00093c2c) aid_postcard_touch_up_pane_ParamLimits

0x82f0,	// (0x00093c2c) aid_postcard_touch_up_pane

0x5e80,	// (0x000917bc) main_blid2_pane

0x8a68,	// (0x000943a4) popup_blid2_search_window

0x0f2d,	// (0x0008c869) blid2_gps_pane

0x0f2d,	// (0x0008c869) blid2_navig_pane

0x0f2d,	// (0x0008c869) blid2_search_pane

0x0f2d,	// (0x0008c869) blid2_tripm_pane

0xb555,	// (0x00096e91) blid2_search_pane_g1_ParamLimits

0xb555,	// (0x00096e91) blid2_search_pane_g1

0xb565,	// (0x00096ea1) blid2_search_pane_t1_ParamLimits

0xb565,	// (0x00096ea1) blid2_search_pane_t1

0xb577,	// (0x00096eb3) aid_size_cell_blid2_gps_ParamLimits

0xb577,	// (0x00096eb3) aid_size_cell_blid2_gps

0xb587,	// (0x00096ec3) blid2_gps_pane_g1_ParamLimits

0xb587,	// (0x00096ec3) blid2_gps_pane_g1

0xb593,	// (0x00096ecf) grid_blid2_satellite_pane_ParamLimits

0xb593,	// (0x00096ecf) grid_blid2_satellite_pane

0xb5a3,	// (0x00096edf) blid2_navig_pane_g1_ParamLimits

0xb5a3,	// (0x00096edf) blid2_navig_pane_g1

0xb5af,	// (0x00096eeb) blid2_navig_pane_t1_ParamLimits

0xb5af,	// (0x00096eeb) blid2_navig_pane_t1

0xb5c1,	// (0x00096efd) blid2_navig_pane_t2_ParamLimits

0xb5c1,	// (0x00096efd) blid2_navig_pane_t2

0x0001,

0xfa32,	// (0x0009b36e) blid2_navig_pane_t_ParamLimits

0xfa32,	// (0x0009b36e) blid2_navig_pane_t

0xb5d3,	// (0x00096f0f) blid2_navig_ring_pane_ParamLimits

0xb5d3,	// (0x00096f0f) blid2_navig_ring_pane

0xb5e3,	// (0x00096f1f) blid2_speed_pane_ParamLimits

0xb5e3,	// (0x00096f1f) blid2_speed_pane

0xb5ef,	// (0x00096f2b) blid2_tripm_pane_g1_ParamLimits

0xb5ef,	// (0x00096f2b) blid2_tripm_pane_g1

0xb5ff,	// (0x00096f3b) blid2_tripm_pane_g2_ParamLimits

0xb5ff,	// (0x00096f3b) blid2_tripm_pane_g2

0xb60b,	// (0x00096f47) blid2_tripm_pane_g3_ParamLimits

0xb60b,	// (0x00096f47) blid2_tripm_pane_g3

0xb617,	// (0x00096f53) blid2_tripm_pane_g4_ParamLimits

0xb617,	// (0x00096f53) blid2_tripm_pane_g4

0xb623,	// (0x00096f5f) blid2_tripm_pane_g5_ParamLimits

0xb623,	// (0x00096f5f) blid2_tripm_pane_g5

0x0005,

0xfa37,	// (0x0009b373) blid2_tripm_pane_g_ParamLimits

0xfa37,	// (0x0009b373) blid2_tripm_pane_g

0xb63f,	// (0x00096f7b) blid2_tripm_pane_t1_ParamLimits

0xb63f,	// (0x00096f7b) blid2_tripm_pane_t1

0xb653,	// (0x00096f8f) blid2_tripm_pane_t2_ParamLimits

0xb653,	// (0x00096f8f) blid2_tripm_pane_t2

0xb665,	// (0x00096fa1) blid2_tripm_pane_t3_ParamLimits

0xb665,	// (0x00096fa1) blid2_tripm_pane_t3

0x0003,

0xfa44,	// (0x0009b380) blid2_tripm_pane_t_ParamLimits

0xfa44,	// (0x0009b380) blid2_tripm_pane_t

0xb697,	// (0x00096fd3) cell_blid2_satellite_pane_ParamLimits

0xb697,	// (0x00096fd3) cell_blid2_satellite_pane

0xb6b1,	// (0x00096fed) cell_blid2_satellite_pane_g1

0x05e1,	// (0x0008bf1d) cell_blid2_satellite_pane_t1

0x1ad6,	// (0x0008d412) blid2_speed_pane_g1

0x05ef,	// (0x0008bf2b) blid2_speed_pane_t1

0x05fd,	// (0x0008bf39) blid2_speed_pane_t2

0x0001,

0xfa4d,	// (0x0009b389) blid2_speed_pane_t

0x1ad6,	// (0x0008d412) blid2_navig_ring_pane_g1

0xb6ba,	// (0x00096ff6) blid2_navig_ring_pane_g2

0xb6c2,	// (0x00096ffe) blid2_navig_ring_pane_g3

0xb6ca,	// (0x00097006) blid2_navig_ring_pane_g4

0xb6d2,	// (0x0009700e) blid2_navig_ring_pane_g5

0x0004,

0xfa52,	// (0x0009b38e) blid2_navig_ring_pane_g

0x0f2d,	// (0x0008c869) bg_popup_window_pane_cp011

0x060b,	// (0x0008bf47) popup_blid2_search_window_g1

0x0613,	// (0x0008bf4f) popup_blid2_search_window_t1

0x0621,	// (0x0008bf5d) popup_blid2_search_window_t2

0x0001,

0xfa5d,	// (0x0009b399) popup_blid2_search_window_t

0x1bd6,	// (0x0008d512) main_browser_pane_g1

0x16a0,	// (0x0008cfdc) main_browser_pane_ParamLimits

0x8a3f,	// (0x0009437b) bg_button_pane_cp011_ParamLimits

0xa76c,	// (0x000960a8) cell_vitu2_function_pane_g1_ParamLimits

0x25ed,	// (0x0008df29) bg_popup_sub_pane_cp22_ParamLimits

0xb004,	// (0x00096940) input_focus_pane_cp08_ParamLimits

0xb01f,	// (0x0009695b) popup_vitu2_query_button_pane_ParamLimits

0xb01f,	// (0x0009695b) popup_vitu2_query_button_pane

0xb02e,	// (0x0009696a) popup_vitu2_query_input_button_pane

0xed5c,	// (0x0009a698) popup_vitu2_query_window_g1_ParamLimits

0xb038,	// (0x00096974) popup_vitu2_query_window_g2_ParamLimits

0xf95e,	// (0x0009b29a) popup_vitu2_query_window_g_ParamLimits

0x0f2d,	// (0x0008c869) bg_button_pane_cp026

0xb6da,	// (0x00097016) popup_vitu2_query_input_button_pane_g1

0x0f2d,	// (0x0008c869) bg_button_pane_cp025

0x062f,	// (0x0008bf6b) popup_vitu2_query_button_pane_t1

0x8f3c,	// (0x00094878) main_mp3_pane_t6

0x8f4c,	// (0x00094888) popup_slider_window_cp01

0xa3a6,	// (0x00095ce2) cam4_battery_pane

0xa486,	// (0x00095dc2) cam4_battery_pane_cp02

0xb459,	// (0x00096d95) cam4_battery_pane_cp01

0xb459,	// (0x00096d95) cam4_battery_pane_cp03

0x063d,	// (0x0008bf79) cam4_battery_pane_g1

0x1ad6,	// (0x0008d412) cam4_battery_pane_g2

0x0001,

0xfa62,	// (0x0009b39e) cam4_battery_pane_g

0x4910,	// (0x0009024c) popup_blid_sat_info2_window_t11

0x233d,	// (0x0008dc79) aid_size_touch_mv_arrow_left_ParamLimits

0x2366,	// (0x0008dca2) aid_size_touch_mv_arrow_right_ParamLimits

0x23e4,	// (0x0008dd20) navi_pane_g1_ParamLimits

0x23f0,	// (0x0008dd2c) navi_pane_g2_ParamLimits

0x241e,	// (0x0008dd5a) navi_pane_g3_ParamLimits

0xf339,	// (0x0009ac75) navi_pane_g_ParamLimits

0x7eab,	// (0x000937e7) navi_pane_mv_t1_ParamLimits

0x9984,	// (0x000952c0) grid_imed_effect_pane_ParamLimits

0x69c6,	// (0x00092302) aid_placing_vt_slider_lsc

0x1b25,	// (0x0008d461) aid_placing_vt_slider_prt

0x0f37,	// (0x0008c873) bg_tb_trans_pane_cp01_ParamLimits

0x4b90,	// (0x000904cc) popup_image_details_window_g1_ParamLimits

0x4ba3,	// (0x000904df) popup_image_details_window_g2_ParamLimits

0x4bb8,	// (0x000904f4) popup_image_details_window_g3_ParamLimits

0x4bb8,	// (0x000904f4) popup_image_details_window_g3

0xf665,	// (0x0009afa1) popup_image_details_window_g_ParamLimits

0x4bcc,	// (0x00090508) popup_image_details_window_t1_ParamLimits

0x4bde,	// (0x0009051a) popup_image_details_window_t2_ParamLimits

0x4bf7,	// (0x00090533) popup_image_details_window_t3_ParamLimits

0x4c0b,	// (0x00090547) popup_image_details_window_t4_ParamLimits

0x4c26,	// (0x00090562) popup_image_details_window_t5_ParamLimits

0xf66c,	// (0x0009afa8) popup_image_details_window_t_ParamLimits

0xb37d,	// (0x00096cb9) cl_header_name_pane_ParamLimits

0xb37d,	// (0x00096cb9) cl_header_name_pane

0xb6e2,	// (0x0009701e) cl_header_name_pane_t1_ParamLimits

0xb6e2,	// (0x0009701e) cl_header_name_pane_t1

0xb6f9,	// (0x00097035) cl_header_name_pane_t2_ParamLimits

0xb6f9,	// (0x00097035) cl_header_name_pane_t2

0xb723,	// (0x0009705f) cl_header_name_pane_t3_ParamLimits

0xb723,	// (0x0009705f) cl_header_name_pane_t3

0x0002,

0xfa67,	// (0x0009b3a3) cl_header_name_pane_t_ParamLimits

0xfa67,	// (0x0009b3a3) cl_header_name_pane_t

0x24ad,	// (0x0008dde9) navi_pane_mv_g2_ParamLimits

0xeab7,	// (0x0009a3f3) field_vitu2_entry_pane_g1_ParamLimits

0xeac3,	// (0x0009a3ff) field_vitu2_entry_pane_g2_ParamLimits

0x25cb,	// (0x0008df07) field_vitu2_entry_pane_g3_ParamLimits

0x25cb,	// (0x0008df07) field_vitu2_entry_pane_g3

0xf867,	// (0x0009b1a3) field_vitu2_entry_pane_g_ParamLimits

0xa6fa,	// (0x00096036) cell_vitu2_itu_pane_g1_ParamLimits

0xa712,	// (0x0009604e) cell_vitu2_itu_pane_g2_ParamLimits

0xa712,	// (0x0009604e) cell_vitu2_itu_pane_g2

0x0001,

0xf873,	// (0x0009b1af) cell_vitu2_itu_pane_g_ParamLimits

0xf873,	// (0x0009b1af) cell_vitu2_itu_pane_g

0x8a3f,	// (0x0009437b) bg_vkb2_func_pane_cp05_ParamLimits

0x8a3f,	// (0x0009437b) bg_vkb2_func_pane_cp05

0x8a3f,	// (0x0009437b) bg_vkb2_func_pane_cp03

0x8a3f,	// (0x0009437b) bg_vkb2_func_pane_cp04

0x8a3f,	// (0x0009437b) bg_vkb2_func_pane_cp10_ParamLimits

0x8a3f,	// (0x0009437b) bg_vkb2_func_pane_cp10

0xb31f,	// (0x00096c5b) bg_vkb2_func_pane_cp08

0xafec,	// (0x00096928) bg_vkb2_func_pane_cp06

0xb302,	// (0x00096c3e) bg_vkb2_func_pane_cp07

0x0516,	// (0x0008be52) bg_vkb2_func_pane_cp11_ParamLimits

0x0516,	// (0x0008be52) bg_vkb2_func_pane_cp11

0x052b,	// (0x0008be67) bg_vkb2_func_pane_cp12_ParamLimits

0x052b,	// (0x0008be67) bg_vkb2_func_pane_cp12

0x0f2d,	// (0x0008c869) bg_vkb2_func_pane_cp09

0xeae1,	// (0x0009a41d) bg_vkb2_func_pane_g1

0x1ce7,	// (0x0008d623) bg_vkb2_func_pane_g2

0xeae9,	// (0x0009a425) bg_vkb2_func_pane_g3

0xeaf1,	// (0x0009a42d) bg_vkb2_func_pane_g4

0xed21,	// (0x0009a65d) bg_vkb2_func_pane_g5

0xeb09,	// (0x0009a445) bg_vkb2_func_pane_g6

0xeb11,	// (0x0009a44d) bg_vkb2_func_pane_g7

0xeb01,	// (0x0009a43d) bg_vkb2_func_pane_g8

0x1cc7,	// (0x0008d603) bg_vkb2_func_pane_g9

0x0008,

0xfa6e,	// (0x0009b3aa) bg_vkb2_func_pane_g

0xb631,	// (0x00096f6d) blid2_tripm_pane_g6_ParamLimits

0xb631,	// (0x00096f6d) blid2_tripm_pane_g6

0xe9fb,	// (0x0009a337) mp4_progress_pane_g1

0xb68b,	// (0x00096fc7) blid2_tripm_values_pane_ParamLimits

0xb68b,	// (0x00096fc7) blid2_tripm_values_pane

0xb748,	// (0x00097084) blid2_tripm_values_pane_t1

0xb756,	// (0x00097092) blid2_tripm_values_pane_t2

0xb764,	// (0x000970a0) blid2_tripm_values_pane_t3

0xb772,	// (0x000970ae) blid2_tripm_values_pane_t4

0xb780,	// (0x000970bc) blid2_tripm_values_pane_t5

0xb78e,	// (0x000970ca) blid2_tripm_values_pane_t6

0xb79c,	// (0x000970d8) blid2_tripm_values_pane_t7

0xb7aa,	// (0x000970e6) blid2_tripm_values_pane_t8

0xb7b8,	// (0x000970f4) blid2_tripm_values_pane_t9

0x0008,

0xfa81,	// (0x0009b3bd) blid2_tripm_values_pane_t

0x6a06,	// (0x00092342) call_video_pane_t1_ParamLimits

0x6a27,	// (0x00092363) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0009ab1e) call_video_pane_t_ParamLimits

0x81a8,	// (0x00093ae4) msg_header_pane_g1_ParamLimits

0x26a2,	// (0x0008dfde) msg_header_pane_g2_ParamLimits

0x26a2,	// (0x0008dfde) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x0009ad18) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x0009ad18) msg_header_pane_g

0x16a0,	// (0x0008cfdc) main_clock2_pane_ParamLimits

0x96fe,	// (0x0009503a) grid_clock2_toolbar_pane_ParamLimits

0x96fe,	// (0x0009503a) grid_clock2_toolbar_pane

0x96fe,	// (0x0009503a) listscroll_clock2_pane_ParamLimits

0x96fe,	// (0x0009503a) listscroll_clock2_pane

0x97ae,	// (0x000950ea) main_clock2_pane_t3_ParamLimits

0x97ae,	// (0x000950ea) main_clock2_pane_t3

0x97c0,	// (0x000950fc) main_clock2_pane_t4_ParamLimits

0x97c0,	// (0x000950fc) main_clock2_pane_t4

0x0647,	// (0x0008bf83) cell_clock2_toolbar_pane

0x064f,	// (0x0008bf8b) cell_clock2_toolbar_pane_cp01

0x064f,	// (0x0008bf8b) cell_clock2_toolbar_pane_cp02

0x0657,	// (0x0008bf93) cell_clock2_toolbar_pane_cp03

0x065f,	// (0x0008bf9b) list_clock2_pane

0x22b3,	// (0x0008dbef) scroll_pane_cp10

0x0667,	// (0x0008bfa3) list_single_clock2_pane_ParamLimits

0x0667,	// (0x0008bfa3) list_single_clock2_pane

0x1aa0,	// (0x0008d3dc) list_highlight_pane_cp08

0x0674,	// (0x0008bfb0) list_single_clock2_pane_t1

0x0682,	// (0x0008bfbe) list_single_clock2_pane_t2

0x0001,

0xfa94,	// (0x0009b3d0) list_single_clock2_pane_t

0x0f2d,	// (0x0008c869) bg_button_pane_cp10

0x0690,	// (0x0008bfcc) cell_clock2_toolbar_pane_g1

0x824e,	// (0x00093b8a) aid_main_viewer_pane_g1_ParamLimits

0x824e,	// (0x00093b8a) aid_main_viewer_pane_g1

0x825a,	// (0x00093b96) aid_main_viewer_pane_g2_ParamLimits

0x825a,	// (0x00093b96) aid_main_viewer_pane_g2

0x8266,	// (0x00093ba2) aid_main_viewer_pane_g3_ParamLimits

0x8266,	// (0x00093ba2) aid_main_viewer_pane_g3

0x8277,	// (0x00093bb3) aid_main_viewer_pane_g4_ParamLimits

0x8277,	// (0x00093bb3) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x0009ad29) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x0009ad29) aid_main_viewer_pane_g

0x8a32,	// (0x0009436e) main_calc_pane_ParamLimits

0x8a4d,	// (0x00094389) main_dialer2_pane_ParamLimits

0x5e80,	// (0x000917bc) main_cam6_pane

0x5e80,	// (0x000917bc) main_vid6_pane

0x970a,	// (0x00095046) listscroll_gen_pane_cp06_ParamLimits

0x970a,	// (0x00095046) listscroll_gen_pane_cp06

0x97d2,	// (0x0009510e) main_clock2_pane_t5_ParamLimits

0x97d2,	// (0x0009510e) main_clock2_pane_t5

0x981f,	// (0x0009515b) aid_call2_pane_cp10_ParamLimits

0x9831,	// (0x0009516d) aid_call_pane_cp10_ParamLimits

0x2331,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2331,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9843,	// (0x0009517f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9843,	// (0x0009517f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2331,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf721,	// (0x0009b05d) popup_clock_analogue_window_cp10_g_ParamLimits

0x9859,	// (0x00095195) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9f4e,	// (0x0009588a) cell_dialer2_keypad_pane_g2_ParamLimits

0x9f4e,	// (0x0009588a) cell_dialer2_keypad_pane_g2

0x0001,

0xf806,	// (0x0009b142) cell_dialer2_keypad_pane_g_ParamLimits

0xf806,	// (0x0009b142) cell_dialer2_keypad_pane_g

0x9f6a,	// (0x000958a6) cell_dialer2_keypad_pane_t1

0xaa2a,	// (0x00096366) main_cset_text2_pane_ParamLimits

0xaa2a,	// (0x00096366) main_cset_text2_pane

0xef3c,	// (0x0009a878) area_vitu2_query_pane_g1_ParamLimits

0xb2a1,	// (0x00096bdd) area_vitu2_query_pane_g2_ParamLimits

0xf9b1,	// (0x0009b2ed) area_vitu2_query_pane_g_ParamLimits

0x008b,	// (0x0008b9c7) area_vitu2_query_pane_t7_ParamLimits

0x008b,	// (0x0008b9c7) area_vitu2_query_pane_t7

0xafec,	// (0x00096928) bg_button_pane_cp018_ParamLimits

0xb302,	// (0x00096c3e) bg_button_pane_cp021_ParamLimits

0xb30e,	// (0x00096c4a) bg_button_pane_cp022_ParamLimits

0xb31f,	// (0x00096c5b) bg_vkb2_func_pane_cp08_ParamLimits

0xafec,	// (0x00096928) bg_vkb2_func_pane_cp06_ParamLimits

0xb302,	// (0x00096c3e) bg_vkb2_func_pane_cp07_ParamLimits

0xb331,	// (0x00096c6d) input_focus_pane_cp09_ParamLimits

0xb7c6,	// (0x00097102) cam6_autofocus_pane_ParamLimits

0xb7c6,	// (0x00097102) cam6_autofocus_pane

0xb7e2,	// (0x0009711e) cam6_image_uncrop_pane_ParamLimits

0xb7e2,	// (0x0009711e) cam6_image_uncrop_pane

0xb81b,	// (0x00097157) cam6_indi_pane_ParamLimits

0xb81b,	// (0x00097157) cam6_indi_pane

0xb835,	// (0x00097171) cam6_mode_pane_ParamLimits

0xb835,	// (0x00097171) cam6_mode_pane

0xb849,	// (0x00097185) cam6_timer_pane_ParamLimits

0xb849,	// (0x00097185) cam6_timer_pane

0xb85d,	// (0x00097199) cam6_zoom_pane_ParamLimits

0xb85d,	// (0x00097199) cam6_zoom_pane

0xb878,	// (0x000971b4) cam6_mode_pane_g1_ParamLimits

0xb878,	// (0x000971b4) cam6_mode_pane_g1

0xb884,	// (0x000971c0) cam6_mode_pane_g2_ParamLimits

0xb884,	// (0x000971c0) cam6_mode_pane_g2

0xb890,	// (0x000971cc) cam6_mode_pane_g3_ParamLimits

0xb890,	// (0x000971cc) cam6_mode_pane_g3

0xb89c,	// (0x000971d8) cam6_mode_pane_g4_ParamLimits

0xb89c,	// (0x000971d8) cam6_mode_pane_g4

0x0003,

0xfa99,	// (0x0009b3d5) cam6_mode_pane_g_ParamLimits

0xfa99,	// (0x0009b3d5) cam6_mode_pane_g

0xea48,	// (0x0009a384) bg_tb_trans_pane_cp08_ParamLimits

0xea48,	// (0x0009a384) bg_tb_trans_pane_cp08

0x0698,	// (0x0008bfd4) cam6_battery_pane_ParamLimits

0x0698,	// (0x0008bfd4) cam6_battery_pane

0x06ae,	// (0x0008bfea) cam6_indi_pane_g1_ParamLimits

0x06ae,	// (0x0008bfea) cam6_indi_pane_g1

0x06c0,	// (0x0008bffc) cam6_indi_pane_g2_ParamLimits

0x06c0,	// (0x0008bffc) cam6_indi_pane_g2

0x06d2,	// (0x0008c00e) cam6_indi_pane_g3_ParamLimits

0x06d2,	// (0x0008c00e) cam6_indi_pane_g3

0x0002,

0xfaa2,	// (0x0009b3de) cam6_indi_pane_g_ParamLimits

0xfaa2,	// (0x0009b3de) cam6_indi_pane_g

0x06e4,	// (0x0008c020) cam6_indi_pane_t1_ParamLimits

0x06e4,	// (0x0008c020) cam6_indi_pane_t1

0xa506,	// (0x00095e42) cam6_autofocus_pane_g1

0xa4fe,	// (0x00095e3a) cam6_autofocus_pane_g2

0xa516,	// (0x00095e52) cam6_autofocus_pane_g3

0xa50e,	// (0x00095e4a) cam6_autofocus_pane_g4

0x0003,

0xfaa9,	// (0x0009b3e5) cam6_autofocus_pane_g

0x070a,	// (0x0008c046) cam6_timer_pane_g1

0x0712,	// (0x0008c04e) cam6_timer_pane_t1

0x0720,	// (0x0008c05c) cam6_zoom_cont_pane

0x0728,	// (0x0008c064) cam6_zoom_pane_g1

0x0731,	// (0x0008c06d) cam6_zoom_pane_g2

0xb8a8,	// (0x000971e4) cam6_zoom_pane_g3

0x0002,

0xfab2,	// (0x0009b3ee) cam6_zoom_pane_g

0x1ad6,	// (0x0008d412) cam6_battery_pane_g1

0x1ad6,	// (0x0008d412) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0009acd9) cam6_battery_pane_g

0x0728,	// (0x0008c064) cam6_zoom_cont_pane_g1

0x0731,	// (0x0008c06d) cam6_zoom_cont_pane_g2

0x073a,	// (0x0008c076) cam6_zoom_cont_pane_g3

0x0002,

0xfab9,	// (0x0009b3f5) cam6_zoom_cont_pane_g

0xb8c6,	// (0x00097202) cam6_mode_pane_cp_ParamLimits

0xb8c6,	// (0x00097202) cam6_mode_pane_cp

0xb8da,	// (0x00097216) cam6_zoom_pane_cp_ParamLimits

0xb8da,	// (0x00097216) cam6_zoom_pane_cp

0xb8f2,	// (0x0009722e) vid6_image_uncrop_cif_pane_ParamLimits

0xb8f2,	// (0x0009722e) vid6_image_uncrop_cif_pane

0xb91e,	// (0x0009725a) vid6_image_uncrop_nhd_pane_ParamLimits

0xb91e,	// (0x0009725a) vid6_image_uncrop_nhd_pane

0xb93b,	// (0x00097277) vid6_image_uncrop_vga_pane_ParamLimits

0xb93b,	// (0x00097277) vid6_image_uncrop_vga_pane

0xb95a,	// (0x00097296) vid6_image_uncrop_wvga_pane_ParamLimits

0xb95a,	// (0x00097296) vid6_image_uncrop_wvga_pane

0xb977,	// (0x000972b3) vid6_indi_pane_ParamLimits

0xb977,	// (0x000972b3) vid6_indi_pane

0xea48,	// (0x0009a384) bg_tb_trans_pane_cp09_ParamLimits

0xea48,	// (0x0009a384) bg_tb_trans_pane_cp09

0x0752,	// (0x0008c08e) cam6_battery_pane_cp_ParamLimits

0x0752,	// (0x0008c08e) cam6_battery_pane_cp

0x075e,	// (0x0008c09a) vid6_indi_pane_g1_ParamLimits

0x075e,	// (0x0008c09a) vid6_indi_pane_g1

0x0770,	// (0x0008c0ac) vid6_indi_pane_g2_ParamLimits

0x0770,	// (0x0008c0ac) vid6_indi_pane_g2

0x0782,	// (0x0008c0be) vid6_indi_pane_g3_ParamLimits

0x0782,	// (0x0008c0be) vid6_indi_pane_g3

0x0797,	// (0x0008c0d3) vid6_indi_pane_g4_ParamLimits

0x0797,	// (0x0008c0d3) vid6_indi_pane_g4

0x07ac,	// (0x0008c0e8) vid6_indi_pane_g5_ParamLimits

0x07ac,	// (0x0008c0e8) vid6_indi_pane_g5

0x0004,

0xfac0,	// (0x0009b3fc) vid6_indi_pane_g_ParamLimits

0xfac0,	// (0x0009b3fc) vid6_indi_pane_g

0x07c6,	// (0x0008c102) vid6_indi_pane_t1_ParamLimits

0x07c6,	// (0x0008c102) vid6_indi_pane_t1

0x07dc,	// (0x0008c118) vid6_indi_pane_t2_ParamLimits

0x07dc,	// (0x0008c118) vid6_indi_pane_t2

0x0804,	// (0x0008c140) vid6_indi_pane_t3_ParamLimits

0x0804,	// (0x0008c140) vid6_indi_pane_t3

0x082c,	// (0x0008c168) vid6_indi_pane_t4_ParamLimits

0x082c,	// (0x0008c168) vid6_indi_pane_t4

0x0003,

0xfacb,	// (0x0009b407) vid6_indi_pane_t_ParamLimits

0xfacb,	// (0x0009b407) vid6_indi_pane_t

0x0850,	// (0x0008c18c) wait_bar_pane_cp08

0xb99c,	// (0x000972d8) main_cset_text2_pane_t1_ParamLimits

0xb99c,	// (0x000972d8) main_cset_text2_pane_t1

0xb8b1,	// (0x000971ed) listscroll_gen_pane_cp06_t1_ParamLimits

0xb8b1,	// (0x000971ed) listscroll_gen_pane_cp06_t1

0x5e80,	// (0x000917bc) main_cam6_set_pane

0x191a,	// (0x0008d256) bg_tb_trans_pane_cp06_ParamLimits

0xa3ae,	// (0x00095cea) cam4_indicators_pane_g1_ParamLimits

0xa3bf,	// (0x00095cfb) cam4_indicators_pane_g2_ParamLimits

0xf843,	// (0x0009b17f) cam4_indicators_pane_g_ParamLimits

0xa3dd,	// (0x00095d19) cam4_indicators_pane_t1_ParamLimits

0x8a3f,	// (0x0009437b) bg_tb_trans_pane_cp07_ParamLimits

0xa490,	// (0x00095dcc) vid4_indicators_pane_g1_ParamLimits

0xa4a4,	// (0x00095de0) vid4_indicators_pane_g2_ParamLimits

0xa4b8,	// (0x00095df4) vid4_indicators_pane_g3_ParamLimits

0xa4c9,	// (0x00095e05) vid4_indicators_pane_g4_ParamLimits

0xf855,	// (0x0009b191) vid4_indicators_pane_g_ParamLimits

0xa4e7,	// (0x00095e23) vid4_indicators_pane_t1_ParamLimits

0xb461,	// (0x00096d9d) vid4_progress_pane_g1_ParamLimits

0xb471,	// (0x00096dad) vid4_progress_pane_g2_ParamLimits

0xb481,	// (0x00096dbd) vid4_progress_pane_g3_ParamLimits

0xb493,	// (0x00096dcf) vid4_progress_pane_g4_ParamLimits

0xf9fc,	// (0x0009b338) vid4_progress_pane_g_ParamLimits

0xb4ab,	// (0x00096de7) vid4_progress_pane_t1_ParamLimits

0xb4c1,	// (0x00096dfd) vid4_progress_pane_t2_ParamLimits

0xb4d6,	// (0x00096e12) vid4_progress_pane_t3_ParamLimits

0xfa07,	// (0x0009b343) vid4_progress_pane_t_ParamLimits

0xb4eb,	// (0x00096e27) wait_bar_pane_cp07_ParamLimits

0xb9cf,	// (0x0009730b) main_cam6_set_pane_g2_ParamLimits

0xb9cf,	// (0x0009730b) main_cam6_set_pane_g2

0xb9db,	// (0x00097317) main_cset6_listscroll_pane_ParamLimits

0xb9db,	// (0x00097317) main_cset6_listscroll_pane

0xba06,	// (0x00097342) main_cset6_slider_pane_ParamLimits

0xba06,	// (0x00097342) main_cset6_slider_pane

0xba12,	// (0x0009734e) main_cset6_text2_pane_ParamLimits

0xba12,	// (0x0009734e) main_cset6_text2_pane

0x085f,	// (0x0008c19b) main_cset6_text_pane

0x0867,	// (0x0008c1a3) main_cset_list_pane_copy1_ParamLimits

0x0867,	// (0x0008c1a3) main_cset_list_pane_copy1

0x0877,	// (0x0008c1b3) scroll_pane_cp028_copy1

0xba25,	// (0x00097361) cset_list_set_pane_copy1

0xba38,	// (0x00097374) aid_position_infowindow_above_copy1

0xba40,	// (0x0009737c) aid_position_infowindow_below_copy1

0xba48,	// (0x00097384) cset_list_set_pane_g1_copy1

0xf021,	// (0x0009a95d) cset_list_set_pane_g3_copy1_ParamLimits

0xf021,	// (0x0009a95d) cset_list_set_pane_g3_copy1

0xf030,	// (0x0009a96c) cset_list_set_pane_t1_copy1_ParamLimits

0xf030,	// (0x0009a96c) cset_list_set_pane_t1_copy1

0x0f37,	// (0x0008c873) list_highlight_pane_cp021_copy1_ParamLimits

0x0f37,	// (0x0008c873) list_highlight_pane_cp021_copy1

0x0880,	// (0x0008c1bc) cset6_slider_pane_ParamLimits

0x0880,	// (0x0008c1bc) cset6_slider_pane

0x08ac,	// (0x0008c1e8) main_cset6_slider_pane_g1_ParamLimits

0x08ac,	// (0x0008c1e8) main_cset6_slider_pane_g1

0xba50,	// (0x0009738c) main_cset6_slider_pane_g2_ParamLimits

0xba50,	// (0x0009738c) main_cset6_slider_pane_g2

0x08d4,	// (0x0008c210) main_cset6_slider_pane_g3_ParamLimits

0x08d4,	// (0x0008c210) main_cset6_slider_pane_g3

0xba78,	// (0x000973b4) main_cset6_slider_pane_g4_ParamLimits

0xba78,	// (0x000973b4) main_cset6_slider_pane_g4

0xba84,	// (0x000973c0) main_cset6_slider_pane_g5_ParamLimits

0xba84,	// (0x000973c0) main_cset6_slider_pane_g5

0xec22,	// (0x0009a55e) main_cset6_slider_pane_g7_ParamLimits

0xec22,	// (0x0009a55e) main_cset6_slider_pane_g7

0xec2e,	// (0x0009a56a) main_cset6_slider_pane_g8_ParamLimits

0xec2e,	// (0x0009a56a) main_cset6_slider_pane_g8

0xba92,	// (0x000973ce) main_cset6_slider_pane_g9_ParamLimits

0xba92,	// (0x000973ce) main_cset6_slider_pane_g9

0xba9e,	// (0x000973da) main_cset6_slider_pane_g10_ParamLimits

0xba9e,	// (0x000973da) main_cset6_slider_pane_g10

0xbaaa,	// (0x000973e6) main_cset6_slider_pane_g11_ParamLimits

0xbaaa,	// (0x000973e6) main_cset6_slider_pane_g11

0xbab6,	// (0x000973f2) main_cset6_slider_pane_g12_ParamLimits

0xbab6,	// (0x000973f2) main_cset6_slider_pane_g12

0xbac2,	// (0x000973fe) main_cset6_slider_pane_g13_ParamLimits

0xbac2,	// (0x000973fe) main_cset6_slider_pane_g13

0xbace,	// (0x0009740a) main_cset6_slider_pane_g14_ParamLimits

0xbace,	// (0x0009740a) main_cset6_slider_pane_g14

0xbada,	// (0x00097416) main_cset6_slider_pane_g15_ParamLimits

0xbada,	// (0x00097416) main_cset6_slider_pane_g15

0xbaf2,	// (0x0009742e) main_cset6_slider_pane_g16_ParamLimits

0xbaf2,	// (0x0009742e) main_cset6_slider_pane_g16

0xbb00,	// (0x0009743c) main_cset6_slider_pane_g17_ParamLimits

0xbb00,	// (0x0009743c) main_cset6_slider_pane_g17

0x0011,

0xfad4,	// (0x0009b410) main_cset6_slider_pane_g_ParamLimits

0xfad4,	// (0x0009b410) main_cset6_slider_pane_g

0x08e0,	// (0x0008c21c) main_cset6_slider_pane_t1_ParamLimits

0x08e0,	// (0x0008c21c) main_cset6_slider_pane_t1

0xbb26,	// (0x00097462) main_cset6_slider_pane_t2_ParamLimits

0xbb26,	// (0x00097462) main_cset6_slider_pane_t2

0xbb51,	// (0x0009748d) main_cset6_slider_pane_t3_ParamLimits

0xbb51,	// (0x0009748d) main_cset6_slider_pane_t3

0xbb7c,	// (0x000974b8) main_cset6_slider_pane_t4_ParamLimits

0xbb7c,	// (0x000974b8) main_cset6_slider_pane_t4

0xbba7,	// (0x000974e3) main_cset6_slider_pane_t5_ParamLimits

0xbba7,	// (0x000974e3) main_cset6_slider_pane_t5

0x0921,	// (0x0008c25d) main_cset6_slider_pane_t7_ParamLimits

0x0921,	// (0x0008c25d) main_cset6_slider_pane_t7

0xbbd4,	// (0x00097510) main_cset6_slider_pane_t8_ParamLimits

0xbbd4,	// (0x00097510) main_cset6_slider_pane_t8

0xbbf8,	// (0x00097534) main_cset6_slider_pane_t9_ParamLimits

0xbbf8,	// (0x00097534) main_cset6_slider_pane_t9

0xbc1c,	// (0x00097558) main_cset6_slider_pane_t10_ParamLimits

0xbc1c,	// (0x00097558) main_cset6_slider_pane_t10

0xbc40,	// (0x0009757c) main_cset6_slider_pane_t11_ParamLimits

0xbc40,	// (0x0009757c) main_cset6_slider_pane_t11

0x0957,	// (0x0008c293) main_cset6_slider_pane_t14_ParamLimits

0x0957,	// (0x0008c293) main_cset6_slider_pane_t14

0x0990,	// (0x0008c2cc) main_cset6_slider_pane_t15_ParamLimits

0x0990,	// (0x0008c2cc) main_cset6_slider_pane_t15

0x000b,

0xfaf9,	// (0x0009b435) main_cset6_slider_pane_t_ParamLimits

0xfaf9,	// (0x0009b435) main_cset6_slider_pane_t

0xef99,	// (0x0009a8d5) cset_slider_pane_g1_copy1

0xefa2,	// (0x0009a8de) cset_slider_pane_g2_copy1

0xefab,	// (0x0009a8e7) cset_slider_pane_g3_copy1

0x0f2d,	// (0x0008c869) bg_popup_sub_pane_cp011_copy1

0x09c9,	// (0x0008c305) main_cset_text_pane_g1_copy1

0xed70,	// (0x0009a6ac) main_cset_text_pane_t1_copy1

0xed7e,	// (0x0009a6ba) main_cset_text_pane_t2_copy1

0xed8c,	// (0x0009a6c8) main_cset_text_pane_t3_copy1

0xed9a,	// (0x0009a6d6) main_cset_text_pane_t4_copy1

0xeda8,	// (0x0009a6e4) main_cset_text_pane_t5_copy1

0x09d1,	// (0x0008c30d) main_cset_text_pane_t6_copy1

0x09df,	// (0x0008c31b) main_cset_text_pane_t7_copy1

0xbc81,	// (0x000975bd) main_cset_text2_pane_t1_copy1

0x8a3f,	// (0x0009437b) main_ncimui_pane

0x8a9e,	// (0x000943da) popup_query_ncimui_window_ParamLimits

0x8a9e,	// (0x000943da) popup_query_ncimui_window

0xefc0,	// (0x0009a8fc) field_cale_ev2_pane_g4_ParamLimits

0xefc0,	// (0x0009a8fc) field_cale_ev2_pane_g4

0x9c2e,	// (0x0009556a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9c2e,	// (0x0009556a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dd,	// (0x0009b119) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dd,	// (0x0009b119) cell_video_dialer_keypad_pane_g

0x9c46,	// (0x00095582) cell_video_dialer_keypad_pane_t1

0x0f2d,	// (0x0008c869) bg_popup_window_pane_cp012

0x4585,	// (0x0008fec1) heading_pane_cp06

0x0a0b,	// (0x0008c347) ncim_query_content_pane

0x0f2d,	// (0x0008c869) bg_popup_heading_pane_cp01

0x0a13,	// (0x0008c34f) ncim_heading_pane_t1

0x0a21,	// (0x0008c35d) ncim_indicator_popup_pane

0x0a33,	// (0x0008c36f) ncim_query_button_pane

0x0a47,	// (0x0008c383) ncim_query_content_pane_t1

0x0a59,	// (0x0008c395) ncim_query_content_pane_t2

0x0005,

0xfb3d,	// (0x0009b479) ncim_query_content_pane_t

0x0a93,	// (0x0008c3cf) ncim_query_list_pane

0x0aa5,	// (0x0008c3e1) ncim_query_popup_pane

0x0a21,	// (0x0008c35d) ncim_indicator_popup_pane_ParamLimits

0xbdd4,	// (0x00097710) ncim_query_content_pane_g1_ParamLimits

0xbdd4,	// (0x00097710) ncim_query_content_pane_g1

0x0a47,	// (0x0008c383) ncim_query_content_pane_t1_ParamLimits

0x0a59,	// (0x0008c395) ncim_query_content_pane_t2_ParamLimits

0xbde0,	// (0x0009771c) ncim_query_content_pane_t3_ParamLimits

0xbde0,	// (0x0009771c) ncim_query_content_pane_t3

0xbdfd,	// (0x00097739) ncim_query_content_pane_t4_ParamLimits

0xbdfd,	// (0x00097739) ncim_query_content_pane_t4

0xbe1a,	// (0x00097756) ncim_query_content_pane_t5_ParamLimits

0xbe1a,	// (0x00097756) ncim_query_content_pane_t5

0x0a6b,	// (0x0008c3a7) ncim_query_content_pane_t6_ParamLimits

0x0a6b,	// (0x0008c3a7) ncim_query_content_pane_t6

0xfb3d,	// (0x0009b479) ncim_query_content_pane_t_ParamLimits

0x0a93,	// (0x0008c3cf) ncim_query_list_pane_ParamLimits

0x0aa5,	// (0x0008c3e1) ncim_query_popup_pane_ParamLimits

0x0ab9,	// (0x0008c3f5) wait_bar_pane_cp04

0x0f2d,	// (0x0008c869) input_focus_pane_cp011

0x0ac1,	// (0x0008c3fd) ncim_query_popup_pane_t1

0x0acf,	// (0x0008c40b) ncim_list_query_list_pane_ParamLimits

0x0acf,	// (0x0008c40b) ncim_list_query_list_pane

0x0f2d,	// (0x0008c869) bg_button_pane_cp027

0x0adc,	// (0x0008c418) ncim_query_button_pane_g1

0x0f2d,	// (0x0008c869) list_highlight_pane_cp012

0x0ae6,	// (0x0008c422) ncim_list_query_list_pane_g1

0x0aee,	// (0x0008c42a) ncim_list_query_list_pane_t1

0xa3ce,	// (0x00095d0a) cam4_indicators_pane_g3_ParamLimits

0xa3ce,	// (0x00095d0a) cam4_indicators_pane_g3

0xa4d5,	// (0x00095e11) vid4_indicators_pane_g5_ParamLimits

0xa4d5,	// (0x00095e11) vid4_indicators_pane_g5

0xb49f,	// (0x00096ddb) vid4_progress_pane_g5_ParamLimits

0xb49f,	// (0x00096ddb) vid4_progress_pane_g5

0xbcc0,	// (0x000975fc) main_ncimui_pane_g1

0xbd28,	// (0x00097664) ncimui_group_query_pane_ParamLimits

0xbd28,	// (0x00097664) ncimui_group_query_pane

0xbd70,	// (0x000976ac) ncimui_list_pane_ParamLimits

0xbd70,	// (0x000976ac) ncimui_list_pane

0xbd97,	// (0x000976d3) ncimui_text_pane_ParamLimits

0xbd97,	// (0x000976d3) ncimui_text_pane

0xbe37,	// (0x00097773) ncimui_text_pane_t1_ParamLimits

0xbe37,	// (0x00097773) ncimui_text_pane_t1

0x0afc,	// (0x0008c438) ncimui_list_single_graphic_pane_ParamLimits

0x0afc,	// (0x0008c438) ncimui_list_single_graphic_pane

0xbe56,	// (0x00097792) ncimui_query_pane_ParamLimits

0xbe56,	// (0x00097792) ncimui_query_pane

0x0f2d,	// (0x0008c869) list_highlight_pane_cp013

0x0b0c,	// (0x0008c448) ncim_list_query_list_pane_t1_copy1

0x0ae6,	// (0x0008c422) ncim_list_single_graphic_pane_g1

0xbe69,	// (0x000977a5) ncim_query_button_pane_cp01

0xbe75,	// (0x000977b1) ncim_query_entry_pane_ParamLimits

0xbe75,	// (0x000977b1) ncim_query_entry_pane

0xbe88,	// (0x000977c4) ncimui_query_pane_g1

0xbe94,	// (0x000977d0) ncimui_query_pane_t1_ParamLimits

0xbe94,	// (0x000977d0) ncimui_query_pane_t1

0x0f37,	// (0x0008c873) input_focus_pane_cp012

0x0b1a,	// (0x0008c456) ncim_query_entry_pane_t1

0x16a0,	// (0x0008cfdc) main_im_pane_ParamLimits

0x8a3f,	// (0x0009437b) main_mobtv_pane_ParamLimits

0x8a3f,	// (0x0009437b) main_mobtv_pane

0xbb0e,	// (0x0009744a) main_cset6_slider_pane_g18_ParamLimits

0xbb0e,	// (0x0009744a) main_cset6_slider_pane_g18

0xbb1a,	// (0x00097456) main_cset6_slider_pane_g19_ParamLimits

0xbb1a,	// (0x00097456) main_cset6_slider_pane_g19

0x25cb,	// (0x0008df07) bg_main_mobtv_pane_ParamLimits

0x25cb,	// (0x0008df07) bg_main_mobtv_pane

0xbead,	// (0x000977e9) main_mobtv_info_pane

0xbeb8,	// (0x000977f4) main_mobtv_loading_pane_ParamLimits

0xbeb8,	// (0x000977f4) main_mobtv_loading_pane

0x0b2c,	// (0x0008c468) main_mobtv_pg_channel_list_pane

0x0b36,	// (0x0008c472) main_mobtv_pg_hdr_pane

0xbec5,	// (0x00097801) main_mobtv_programe_curr_pane_ParamLimits

0xbec5,	// (0x00097801) main_mobtv_programe_curr_pane

0xbed2,	// (0x0009780e) main_mobtv_programe_next_pane_ParamLimits

0xbed2,	// (0x0009780e) main_mobtv_programe_next_pane

0x0b3f,	// (0x0008c47b) popup_mobtv_noti_window

0x1ad6,	// (0x0008d412) main_tv_pg_hdr_pane_g1

0x0b47,	// (0x0008c483) main_tv_pg_hdr_pane_g2

0x0b4f,	// (0x0008c48b) main_tv_pg_hdr_pane_g3

0x0b57,	// (0x0008c493) main_tv_pg_hdr_pane_g4

0x0b5f,	// (0x0008c49b) main_tv_pg_hdr_pane_g5

0x0b69,	// (0x0008c4a5) main_tv_pg_hdr_pane_g6

0x0b73,	// (0x0008c4af) main_tv_pg_hdr_pane_g7

0x0b7d,	// (0x0008c4b9) main_tv_pg_hdr_pane_g8

0x0b87,	// (0x0008c4c3) main_tv_pg_hdr_pane_g9

0x0b91,	// (0x0008c4cd) main_tv_pg_hdr_pane_g10

0x0b9b,	// (0x0008c4d7) main_tv_pg_hdr_pane_g11

0x000a,

0xfb4a,	// (0x0009b486) main_tv_pg_hdr_pane_g

0x0ba5,	// (0x0008c4e1) main_tv_pg_hdr_pane_t1

0x0bb3,	// (0x0008c4ef) main_tv_pg_hdr_pane_t2

0x0bc1,	// (0x0008c4fd) main_tv_pg_hdr_pane_t3

0x0bd1,	// (0x0008c50d) main_tv_pg_hdr_pane_t4

0x0be1,	// (0x0008c51d) main_tv_pg_hdr_pane_t5

0x0004,

0xfb61,	// (0x0009b49d) main_tv_pg_hdr_pane_t

0x0bf1,	// (0x0008c52d) single_mobtv_pg_channel_pane_ParamLimits

0x0bf1,	// (0x0008c52d) single_mobtv_pg_channel_pane

0x0c03,	// (0x0008c53f) single_mobtv_pg_channel_table_pane

0x0c0c,	// (0x0008c548) single_mobtv_pg_channel_thumb_pane

0x0c15,	// (0x0008c551) single_tv_pg_channel_pane_g1

0x0c1e,	// (0x0008c55a) single_tv_pg_channel_pane_g2

0x0001,

0xfb6c,	// (0x0009b4a8) single_tv_pg_channel_pane_g

0x162e,	// (0x0008cf6a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x162e,	// (0x0008cf6a) bg_single_mobtv_pg_channel_thumb_pane

0x0c27,	// (0x0008c563) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0c27,	// (0x0008c563) single_mobtv_pg_channel_thumb_pane_g1

0x0c35,	// (0x0008c571) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0c35,	// (0x0008c571) single_mobtv_pg_channel_thumb_pane_g2

0x0c41,	// (0x0008c57d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0c41,	// (0x0008c57d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb71,	// (0x0009b4ad) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb71,	// (0x0009b4ad) single_mobtv_pg_channel_thumb_pane_g

0x0c4d,	// (0x0008c589) single_mobtv_pg_channel_thumb_pane_t1

0x0c5b,	// (0x0008c597) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb78,	// (0x0009b4b4) single_mobtv_pg_channel_thumb_pane_t

0x1ad6,	// (0x0008d412) bg_single_mobtv_pg_channel_table_pane_g1

0x1ad6,	// (0x0008d412) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0009acd9) bg_single_mobtv_pg_channel_table_pane_g

0x0c69,	// (0x0008c5a5) single_mobtv_pg_channel_table_pane_t1

0x0c77,	// (0x0008c5b3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb7d,	// (0x0009b4b9) single_mobtv_pg_channel_table_pane_t

0xbee7,	// (0x00097823) main_mobtv_info_pane_g1_ParamLimits

0xbee7,	// (0x00097823) main_mobtv_info_pane_g1

0xbf03,	// (0x0009783f) main_mobtv_info_pane_t1_ParamLimits

0xbf03,	// (0x0009783f) main_mobtv_info_pane_t1

0xbf7b,	// (0x000978b7) main_mobtv_info_pane_t2_ParamLimits

0xbf7b,	// (0x000978b7) main_mobtv_info_pane_t2

0x0002,

0xfb87,	// (0x0009b4c3) main_mobtv_info_pane_t_ParamLimits

0xfb87,	// (0x0009b4c3) main_mobtv_info_pane_t

0xc00a,	// (0x00097946) wait_bar_pane_cp05

0xc01c,	// (0x00097958) main_mobtv_loading_pane_g1_ParamLimits

0xc01c,	// (0x00097958) main_mobtv_loading_pane_g1

0xc02a,	// (0x00097966) main_mobtv_loading_pane_g2_ParamLimits

0xc02a,	// (0x00097966) main_mobtv_loading_pane_g2

0xc036,	// (0x00097972) main_mobtv_loading_pane_g3_ParamLimits

0xc036,	// (0x00097972) main_mobtv_loading_pane_g3

0x0002,

0xfb8e,	// (0x0009b4ca) main_mobtv_loading_pane_g_ParamLimits

0xfb8e,	// (0x0009b4ca) main_mobtv_loading_pane_g

0x0c85,	// (0x0008c5c1) main_mobtv_loading_pane_t1_ParamLimits

0x0c85,	// (0x0008c5c1) main_mobtv_loading_pane_t1

0x0c9d,	// (0x0008c5d9) main_mobtv_loading_pane_t2_ParamLimits

0x0c9d,	// (0x0008c5d9) main_mobtv_loading_pane_t2

0x0001,

0xfb95,	// (0x0009b4d1) main_mobtv_loading_pane_t_ParamLimits

0xfb95,	// (0x0009b4d1) main_mobtv_loading_pane_t

0xc044,	// (0x00097980) wait_bar_pane_cp06_ParamLimits

0xc044,	// (0x00097980) wait_bar_pane_cp06

0x0cc1,	// (0x0008c5fd) main_mobtv_programe_curr_pane_t1

0x0ccf,	// (0x0008c60b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb9a,	// (0x0009b4d6) main_mobtv_programe_curr_pane_t

0x0cdd,	// (0x0008c619) main_mobtv_programe_next_pane_t1

0x0ceb,	// (0x0008c627) main_mobtv_programe_next_pane_t2

0x0cf9,	// (0x0008c635) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9f,	// (0x0009b4db) main_mobtv_programe_next_pane_t

0x0f2d,	// (0x0008c869) bg_popup_mobtv_noti_window_pane

0x0d07,	// (0x0008c643) popup_mobtv_noti_window_g1

0x0d0f,	// (0x0008c64b) popup_mobtv_noti_window_t1

0x0d1d,	// (0x0008c659) popup_mobtv_noti_window_t2

0x0001,

0xfba6,	// (0x0009b4e2) popup_mobtv_noti_window_t

0x1ad6,	// (0x0008d412) bg_popup_mobtv_noti_window_pane_g1

0x5e80,	// (0x000917bc) sc_clock_pane

0x5e80,	// (0x000917bc) main_fs_bigclock_pane

0xb679,	// (0x00096fb5) blid2_tripm_pane_t4_ParamLimits

0xb679,	// (0x00096fb5) blid2_tripm_pane_t4

0xc050,	// (0x0009798c) sc_clock_pane_g1_ParamLimits

0xc050,	// (0x0009798c) sc_clock_pane_g1

0xc05e,	// (0x0009799a) sc_clock_pane_t1_ParamLimits

0xc05e,	// (0x0009799a) sc_clock_pane_t1

0xc071,	// (0x000979ad) sc_clock_pane_t2_ParamLimits

0xc071,	// (0x000979ad) sc_clock_pane_t2

0xc083,	// (0x000979bf) sc_clock_pane_t3_ParamLimits

0xc083,	// (0x000979bf) sc_clock_pane_t3

0x0004,

0xfbab,	// (0x0009b4e7) sc_clock_pane_t_ParamLimits

0xfbab,	// (0x0009b4e7) sc_clock_pane_t

0xccb7,	// (0x000985f3) main_fs_bigclock_indicator_pane_ParamLimits

0xccb7,	// (0x000985f3) main_fs_bigclock_indicator_pane

0xc106,	// (0x00097a42) main_fs_bigclock_pane_g1_ParamLimits

0xc106,	// (0x00097a42) main_fs_bigclock_pane_g1

0xccc3,	// (0x000985ff) main_fs_bigclock_pane_t1_ParamLimits

0xccc3,	// (0x000985ff) main_fs_bigclock_pane_t1

0xccd5,	// (0x00098611) main_fs_bigclock_pane_t2_ParamLimits

0xccd5,	// (0x00098611) main_fs_bigclock_pane_t2

0xcce9,	// (0x00098625) main_fs_bigclock_pane_t3_ParamLimits

0xcce9,	// (0x00098625) main_fs_bigclock_pane_t3

0x0002,

0xfd3c,	// (0x0009b678) main_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0009b678) main_fs_bigclock_pane_t

0x2afd,	// (0x0008e439) main_fs_bigclock_indicator_pane_g1

0x0a3b,	// (0x0008c377) ncim_query_content_pane_g2_ParamLimits

0x0a3b,	// (0x0008c377) ncim_query_content_pane_g2

0x0001,

0xfb38,	// (0x0009b474) ncim_query_content_pane_g_ParamLimits

0xfb38,	// (0x0009b474) ncim_query_content_pane_g

0xc097,	// (0x000979d3) sc_clock_pane_t4_ParamLimits

0xc097,	// (0x000979d3) sc_clock_pane_t4

0x8a3f,	// (0x0009437b) main_radioblah_pane

0xa271,	// (0x00095bad) cell_call4_button_pane_t1_copy1_ParamLimits

0xa271,	// (0x00095bad) cell_call4_button_pane_t1_copy1

0xbcda,	// (0x00097616) main_ncimui_pane_t1_ParamLimits

0xbcda,	// (0x00097616) main_ncimui_pane_t1

0xbcf4,	// (0x00097630) main_ncimui_pane_t2_ParamLimits

0xbcf4,	// (0x00097630) main_ncimui_pane_t2

0x0002,

0xfb31,	// (0x0009b46d) main_ncimui_pane_t_ParamLimits

0xfb31,	// (0x0009b46d) main_ncimui_pane_t

0x0e62,	// (0x0008c79e) main_radioblah_anim_pane_ParamLimits

0x0e62,	// (0x0008c79e) main_radioblah_anim_pane

0x0e73,	// (0x0008c7af) main_radioblah_info_pane_ParamLimits

0x0e73,	// (0x0008c7af) main_radioblah_info_pane

0x0e87,	// (0x0008c7c3) main_radioblah_pane_t1_ParamLimits

0x0e87,	// (0x0008c7c3) main_radioblah_pane_t1

0x0ea3,	// (0x0008c7df) main_radioblah_pane_t2_ParamLimits

0x0ea3,	// (0x0008c7df) main_radioblah_pane_t2

0x0003,

0xfbcc,	// (0x0009b508) main_radioblah_pane_t_ParamLimits

0xfbcc,	// (0x0009b508) main_radioblah_pane_t

0xc15c,	// (0x00097a98) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc15c,	// (0x00097a98) main_radioblah_rocker_ctrl_pane

0x0eeb,	// (0x0008c827) main_radioblah_info_pane_t1_ParamLimits

0x0eeb,	// (0x0008c827) main_radioblah_info_pane_t1

0xc1a1,	// (0x00097add) main_radioblah_info_pane_t2_ParamLimits

0xc1a1,	// (0x00097add) main_radioblah_info_pane_t2

0x0003,

0xfbd5,	// (0x0009b511) main_radioblah_info_pane_t_ParamLimits

0xfbd5,	// (0x0009b511) main_radioblah_info_pane_t

0x1ad6,	// (0x0008d412) main_radioblah_rocker_ctrl_pane_g1

0xc251,	// (0x00097b8d) main_radioblah_rocker_ctrl_pane_g2

0xc259,	// (0x00097b95) main_radioblah_rocker_ctrl_pane_g3

0xc261,	// (0x00097b9d) main_radioblah_rocker_ctrl_pane_g4

0xc269,	// (0x00097ba5) main_radioblah_rocker_ctrl_pane_g5

0xc271,	// (0x00097bad) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbde,	// (0x0009b51a) main_radioblah_rocker_ctrl_pane_g

0xbc81,	// (0x000975bd) main_cset_text2_pane_t1_copy1_ParamLimits

0xa2fc,	// (0x00095c38) cam4_image_uncrop_qvga_pane

0xa443,	// (0x00095d7f) vid4_image_uncrop_qcif_pane

0xb80d,	// (0x00097149) cam6_image_uncrop_qvga_pane_ParamLimits

0xb80d,	// (0x00097149) cam6_image_uncrop_qvga_pane

0x0742,	// (0x0008c07e) vid6_image_uncrop_qcif_pane_ParamLimits

0x0742,	// (0x0008c07e) vid6_image_uncrop_qcif_pane

0x0f2d,	// (0x0008c869) bg_popup_preview_window_pane_cp03

0x09ed,	// (0x0008c329) list_cset_text2_pane

0x09f5,	// (0x0008c331) main_cset6_text2_pane_g1

0x09fd,	// (0x0008c339) main_cset6_text2_pane_t1

0xc279,	// (0x00097bb5) list_cset_text2_pane_t1_ParamLimits

0xc279,	// (0x00097bb5) list_cset_text2_pane_t1

0x8a3f,	// (0x0009437b) main_radioblah_pane_ParamLimits

0xbff6,	// (0x00097932) main_mobtv_info_pane_t3_ParamLimits

0xbff6,	// (0x00097932) main_mobtv_info_pane_t3

0xc14a,	// (0x00097a86) main_radioblah_pane_g1

0xc175,	// (0x00097ab1) main_radioblah_info_pane_g1

0xc1f6,	// (0x00097b32) main_radioblah_info_pane_t3_ParamLimits

0xc1f6,	// (0x00097b32) main_radioblah_info_pane_t3

0x7a27,	// (0x00093363) highlight_cell_cale_month_pane_ParamLimits

0x7a27,	// (0x00093363) highlight_cell_cale_month_pane

0x5e80,	// (0x000917bc) main_phob_fisheye_pane

0xe540,	// (0x00099e7c) scroll_pane_cp0031_ParamLimits

0xe540,	// (0x00099e7c) scroll_pane_cp0031

0x0850,	// (0x0008c18c) wait_bar_pane_cp08_ParamLimits

0xba25,	// (0x00097361) cset_list_set_pane_copy1_ParamLimits

0x1759,	// (0x0008d095) highlight_cell_cale_month_pane_g1

0xc296,	// (0x00097bd2) highlight_cell_cale_month_pane_t1

0xef90,	// (0x0009a8cc) list_gen_pane_cp01

0xec0d,	// (0x0009a549) scroll_pane_01

0xc2a4,	// (0x00097be0) list_single_double_fisheye_pane

0xc2ad,	// (0x00097be9) list_double_fisheye_pane_g1_ParamLimits

0xc2ad,	// (0x00097be9) list_double_fisheye_pane_g1

0xc2b9,	// (0x00097bf5) list_double_fisheye_pane_g2_ParamLimits

0xc2b9,	// (0x00097bf5) list_double_fisheye_pane_g2

0xc2cd,	// (0x00097c09) list_double_fisheye_pane_g3_ParamLimits

0xc2cd,	// (0x00097c09) list_double_fisheye_pane_g3

0x0004,

0xfbeb,	// (0x0009b527) list_double_fisheye_pane_g_ParamLimits

0xfbeb,	// (0x0009b527) list_double_fisheye_pane_g

0xc2f6,	// (0x00097c32) list_double_fisheye_pane_t1_ParamLimits

0xc2f6,	// (0x00097c32) list_double_fisheye_pane_t1

0xc311,	// (0x00097c4d) list_double_fisheye_pane_t2_ParamLimits

0xc311,	// (0x00097c4d) list_double_fisheye_pane_t2

0x0001,

0xfbf6,	// (0x0009b532) list_double_fisheye_pane_t_ParamLimits

0xfbf6,	// (0x0009b532) list_double_fisheye_pane_t

0x5e80,	// (0x000917bc) main_call5_pane

0xc0bd,	// (0x000979f9) sc_swipe_pane_ParamLimits

0xc0bd,	// (0x000979f9) sc_swipe_pane

0xc33f,	// (0x00097c7b) call5_image_pane_ParamLimits

0xc33f,	// (0x00097c7b) call5_image_pane

0xc34f,	// (0x00097c8b) call5_swipe_1_pane_ParamLimits

0xc34f,	// (0x00097c8b) call5_swipe_1_pane

0xc35b,	// (0x00097c97) call5_swipe_2_pane_ParamLimits

0xc35b,	// (0x00097c97) call5_swipe_2_pane

0xc375,	// (0x00097cb1) popup_call5_audio_first_window_ParamLimits

0xc375,	// (0x00097cb1) popup_call5_audio_first_window

0x162e,	// (0x0008cf6a) call5_swipe_1_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) call5_swipe_1_pane_g1

0x1761,	// (0x0008d09d) call5_swipe_1_pane_g2_ParamLimits

0x1761,	// (0x0008d09d) call5_swipe_1_pane_g2

0x0001,

0xfbfb,	// (0x0009b537) call5_swipe_1_pane_g_ParamLimits

0xfbfb,	// (0x0009b537) call5_swipe_1_pane_g

0x176d,	// (0x0008d0a9) call5_swipe_1_pane_t1_ParamLimits

0x176d,	// (0x0008d0a9) call5_swipe_1_pane_t1

0x162e,	// (0x0008cf6a) call5_swipe_2_pane_g1_ParamLimits

0x162e,	// (0x0008cf6a) call5_swipe_2_pane_g1

0x1782,	// (0x0008d0be) call5_swipe_2_pane_g2_ParamLimits

0x1782,	// (0x0008d0be) call5_swipe_2_pane_g2

0x0001,

0xfc00,	// (0x0009b53c) call5_swipe_2_pane_g_ParamLimits

0xfc00,	// (0x0009b53c) call5_swipe_2_pane_g

0x178e,	// (0x0008d0ca) call5_swipe_2_pane_t1_ParamLimits

0x178e,	// (0x0008d0ca) call5_swipe_2_pane_t1

0x17a3,	// (0x0008d0df) sc_swipe_pane_g1_ParamLimits

0x17a3,	// (0x0008d0df) sc_swipe_pane_g1

0x17b0,	// (0x0008d0ec) sc_swipe_pane_g2_ParamLimits

0x17b0,	// (0x0008d0ec) sc_swipe_pane_g2

0x0001,

0xfc05,	// (0x0009b541) sc_swipe_pane_g_ParamLimits

0xfc05,	// (0x0009b541) sc_swipe_pane_g

0x17bc,	// (0x0008d0f8) sc_swipe_pane_t1_ParamLimits

0x17bc,	// (0x0008d0f8) sc_swipe_pane_t1

0x5e80,	// (0x000917bc) main_cmail_launcher_pane

0xc383,	// (0x00097cbf) aid_size_cell_cmail_l_ParamLimits

0xc383,	// (0x00097cbf) aid_size_cell_cmail_l

0xc391,	// (0x00097ccd) grid_cmail_l_pane_ParamLimits

0xc391,	// (0x00097ccd) grid_cmail_l_pane

0xc3a1,	// (0x00097cdd) cell_cmail_l_pane_ParamLimits

0xc3a1,	// (0x00097cdd) cell_cmail_l_pane

0x17d1,	// (0x0008d10d) cell_cmail_l_pane_g1_ParamLimits

0x17d1,	// (0x0008d10d) cell_cmail_l_pane_g1

0x17dd,	// (0x0008d119) cell_cmail_l_pane_t1_ParamLimits

0x17dd,	// (0x0008d119) cell_cmail_l_pane_t1

0x17f3,	// (0x0008d12f) cell_cmail_l_pane_t2_ParamLimits

0x17f3,	// (0x0008d12f) cell_cmail_l_pane_t2

0x0001,

0xfc0a,	// (0x0009b546) cell_cmail_l_pane_t_ParamLimits

0xfc0a,	// (0x0009b546) cell_cmail_l_pane_t

0x0f37,	// (0x0008c873) grid_highlight_pane_cp018_ParamLimits

0x0f37,	// (0x0008c873) grid_highlight_pane_cp018

0x5cd7,	// (0x00091613) main2_pane_ParamLimits

0x5cd7,	// (0x00091613) main2_pane

0x172f,	// (0x0008d06b) popup_sp_fs_action_menu_bg_pane_g1

0x1737,	// (0x0008d073) popup_sp_fs_action_menu_bg_pane_g2

0x173f,	// (0x0008d07b) popup_sp_fs_action_menu_bg_pane_g3

0x1977,	// (0x0008d2b3) popup_sp_fs_action_menu_bg_pane_g4

0x197f,	// (0x0008d2bb) popup_sp_fs_action_menu_bg_pane_g5

0x1987,	// (0x0008d2c3) popup_sp_fs_action_menu_bg_pane_g6

0x198f,	// (0x0008d2cb) popup_sp_fs_action_menu_bg_pane_g7

0x1997,	// (0x0008d2d3) popup_sp_fs_action_menu_bg_pane_g8

0x199f,	// (0x0008d2db) popup_sp_fs_action_menu_bg_pane_g9

0x19a7,	// (0x0008d2e3) popup_sp_fs_action_menu_bg_pane_g10

0x19a7,	// (0x0008d2e3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0009aa41) popup_sp_fs_action_menu_bg_pane_g

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g2

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0009aaef) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0009aaef) list_medium_line_x2_t3_g3_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0009aaf6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0009aaf6) list_medium_line_x2_t3_g3_t

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g2_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0009aafd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0009aafd) list_medium_line_x2_t3_g2_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0009aaf6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0009aaf6) list_medium_line_x2_t3_g2_t

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g2

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g3

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0009ab02) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0009ab02) list_medium_line_x2_t4_g4_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t3

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009ab0b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009ab0b) list_medium_line_x2_t4_g4_t

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g2

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g3

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0009ab02) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0009ab02) list_medium_line_x2_t2_g4_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g4_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x0009ab72) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x0009ab72) list_medium_line_x2_t2_g4_t

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g2

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0009aaef) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0009aaef) list_medium_line_x2_t2_g3_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g3_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x0009ab72) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x0009ab72) list_medium_line_x2_t2_g3_t

0x7bf7,	// (0x00093533) main_sp_fs_list_pane_ParamLimits

0x7bf7,	// (0x00093533) main_sp_fs_list_pane

0x7c03,	// (0x0009353f) sp_fs_scroll_pane_ParamLimits

0x7c03,	// (0x0009353f) sp_fs_scroll_pane

0x2005,	// (0x0008d941) list_medium_line_x2_t3_t1

0x2005,	// (0x0008d941) list_medium_line_x2_t3_t2

0x2005,	// (0x0008d941) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x0009abbd) list_medium_line_x2_t3_t

0x2005,	// (0x0008d941) list_medium_line_x3_t4_t1

0x2005,	// (0x0008d941) list_medium_line_x3_t4_t2

0x2005,	// (0x0008d941) list_medium_line_x3_t4_t3

0x2005,	// (0x0008d941) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x0009abc4) list_medium_line_x3_t4_t

0x2005,	// (0x0008d941) list_medium_line_x4_t5_t1

0x2005,	// (0x0008d941) list_medium_line_x4_t5_t2

0x2005,	// (0x0008d941) list_medium_line_x4_t5_t3

0x2005,	// (0x0008d941) list_medium_line_x4_t5_t4

0x2005,	// (0x0008d941) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x0009abcd) list_medium_line_x4_t5_t

0x162e,	// (0x0008cf6a) list_medium_line_t4_g4_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t4_g4_g1

0x162e,	// (0x0008cf6a) list_medium_line_t4_g4_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t4_g4_g2

0x162e,	// (0x0008cf6a) list_medium_line_t4_g4_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t4_g4_g3

0x162e,	// (0x0008cf6a) list_medium_line_t4_g4_g4_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0009ab02) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0009ab02) list_medium_line_t4_g4_g

0x1aa8,	// (0x0008d3e4) list_medium_line_t4_g4_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t4_g4_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_t4_g4_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t4_g4_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_t4_g4_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t4_g4_t3

0x1aa8,	// (0x0008d3e4) list_medium_line_t4_g4_t4_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009ab0b) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009ab0b) list_medium_line_t4_g4_t

0x7cec,	// (0x00093628) chi_dic_find_pane_g1

0x8a5b,	// (0x00094397) main_tport_pane

0x2005,	// (0x0008d941) list_medium_line_plain_t1

0x162e,	// (0x0008cf6a) list_medium_line_t2_g2_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t2_g2_g1

0x162e,	// (0x0008cf6a) list_medium_line_t2_g2_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0009aafd) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0009aafd) list_medium_line_t2_g2_g

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_g2_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_g2_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_g2_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x0009ab72) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x0009ab72) list_medium_line_t2_g2_t

0x0119,	// (0x0008ba55) aid_sp_fs_list_icon_a_sm

0x0121,	// (0x0008ba5d) aid_sp_fs_list_icon_d

0x04d2,	// (0x0008be0e) aid_sp_fs_text_primary

0x0129,	// (0x0008ba65) aid_sp_fs_text_secondary

0x0f2d,	// (0x0008c869) list_medium_line

0x0f2d,	// (0x0008c869) list_medium_line_g2

0x0f2d,	// (0x0008c869) list_medium_line_g3

0x0f2d,	// (0x0008c869) list_medium_line_plain

0x0f2d,	// (0x0008c869) list_medium_line_plain_t2

0x0f2d,	// (0x0008c869) list_medium_line_plain_t3

0x0f2d,	// (0x0008c869) list_medium_line_right_icon

0x0f2d,	// (0x0008c869) list_medium_line_right_iconx2

0x0f2d,	// (0x0008c869) list_medium_line_t2

0x0f2d,	// (0x0008c869) list_medium_line_t2_g2

0x0f2d,	// (0x0008c869) list_medium_line_t2_g3

0x0f2d,	// (0x0008c869) list_medium_line_t2_right_icon

0x0f2d,	// (0x0008c869) list_medium_line_t2_right_iconx2

0x0f2d,	// (0x0008c869) list_medium_line_t3

0x0f2d,	// (0x0008c869) list_medium_line_t3_g2

0x0f2d,	// (0x0008c869) list_medium_line_t3_g3

0x0f2d,	// (0x0008c869) list_medium_line_t3_right_iconx2

0x0f2d,	// (0x0008c869) list_medium_line_t4_g4

0x0f2d,	// (0x0008c869) list_medium_line_x2

0x0f2d,	// (0x0008c869) list_medium_line_x2_t2_g2

0x0f2d,	// (0x0008c869) list_medium_line_x2_t2_g3

0x0f2d,	// (0x0008c869) list_medium_line_x2_t2_g4

0x0f2d,	// (0x0008c869) list_medium_line_x2_t3

0x0f2d,	// (0x0008c869) list_medium_line_x2_t3_g2

0x0f2d,	// (0x0008c869) list_medium_line_x2_t3_g3

0x0f2d,	// (0x0008c869) list_medium_line_x2_t3_g4

0x0f2d,	// (0x0008c869) list_medium_line_x2_t4_g2

0x0f2d,	// (0x0008c869) list_medium_line_x2_t4_g4

0x0f2d,	// (0x0008c869) list_medium_line_x3

0x0f2d,	// (0x0008c869) list_medium_line_x3_t4

0x0f2d,	// (0x0008c869) list_medium_line_x3_t4_g4

0x0f2d,	// (0x0008c869) list_medium_line_x4_t4

0x0f2d,	// (0x0008c869) list_medium_line_x4_t4_g7

0x0f2d,	// (0x0008c869) list_medium_line_x4_t5

0xb4fe,	// (0x00096e3a) list_single_fs_dyc_pane_ParamLimits

0xb4fe,	// (0x00096e3a) list_single_fs_dyc_pane

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g1

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g2

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g3

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g4

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g5

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g6

0x163c,	// (0x0008cf78) list_medium_line_x4_t4_g7_g7_ParamLimits

0x163c,	// (0x0008cf78) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb12,	// (0x0009b44e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb12,	// (0x0009b44e) list_medium_line_x4_t4_g7_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t3

0x2397,	// (0x0008dcd3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2397,	// (0x0008dcd3) list_medium_line_x4_t4_g7_t4

0x2397,	// (0x0008dcd3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2397,	// (0x0008dcd3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb21,	// (0x0009b45d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb21,	// (0x0009b45d) list_medium_line_x4_t4_g7_t

0xbc64,	// (0x000975a0) list_single_dyc_row_pane_ParamLimits

0xbc64,	// (0x000975a0) list_single_dyc_row_pane

0xc333,	// (0x00097c6f) call5_gesture_pane_ParamLimits

0xc333,	// (0x00097c6f) call5_gesture_pane

0xc367,	// (0x00097ca3) call5_windows_pane_ParamLimits

0xc367,	// (0x00097ca3) call5_windows_pane

0xc3ba,	// (0x00097cf6) call5_swipe_1_pane_cp_ParamLimits

0xc3ba,	// (0x00097cf6) call5_swipe_1_pane_cp

0xc3c6,	// (0x00097d02) call5_swipe_2_pane_cp_ParamLimits

0xc3c6,	// (0x00097d02) call5_swipe_2_pane_cp

0x1aa0,	// (0x0008d3dc) call5_image_pane_cp

0xc3d2,	// (0x00097d0e) popup_call5_audio_first_window_cp_ParamLimits

0xc3d2,	// (0x00097d0e) popup_call5_audio_first_window_cp

0x17a3,	// (0x0008d0df) call5_swipe_1_pane_g1_cp_ParamLimits

0x17a3,	// (0x0008d0df) call5_swipe_1_pane_g1_cp

0x1810,	// (0x0008d14c) call5_swipe_1_pane_g2_cp

0x17bc,	// (0x0008d0f8) call5_swipe_1_pane_t1_cp_ParamLimits

0x17bc,	// (0x0008d0f8) call5_swipe_1_pane_t1_cp

0x17a3,	// (0x0008d0df) call5_swipe_2_pane_g1_cp_ParamLimits

0x17a3,	// (0x0008d0df) call5_swipe_2_pane_g1_cp

0x1818,	// (0x0008d154) call5_swipe_2_pane_g2_cp

0x1820,	// (0x0008d15c) call5_swipe_2_pane_t1_cp_ParamLimits

0x1820,	// (0x0008d15c) call5_swipe_2_pane_t1_cp

0x0f37,	// (0x0008c873) main_sp_fs_email_pane

0x1835,	// (0x0008d171) main_sp_fs_listscroll_pane_te

0x0140,	// (0x0008ba7c) popup_sp_fs_action_menu_pane_ParamLimits

0x0140,	// (0x0008ba7c) popup_sp_fs_action_menu_pane

0x1ad6,	// (0x0008d412) bg_sp_fs_ctrlbar_pane_g1

0x183e,	// (0x0008d17a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1847,	// (0x0008d183) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1850,	// (0x0008d18c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1ad6,	// (0x0008d412) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0f,	// (0x0009b54b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4285,	// (0x0008fbc1) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4285,	// (0x0008fbc1) bg_sp_fs_ctrlbar_ddmenu_pane

0x1859,	// (0x0008d195) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1859,	// (0x0008d195) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1865,	// (0x0008d1a1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1865,	// (0x0008d1a1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc18,	// (0x0009b554) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc18,	// (0x0009b554) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1871,	// (0x0008d1ad) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1871,	// (0x0008d1ad) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1ad6,	// (0x0008d412) list_medium_line_t2_right_icon_g1

0x2005,	// (0x0008d941) list_medium_line_t2_right_icon_t1

0x2005,	// (0x0008d941) list_medium_line_t2_right_icon_t2

0x0001,

0xfc1d,	// (0x0009b559) list_medium_line_t2_right_icon_t

0x25ed,	// (0x0008df29) bg_sp_fs_ctrlbar_pane_ParamLimits

0x25ed,	// (0x0008df29) bg_sp_fs_ctrlbar_pane

0xc437,	// (0x00097d73) main_sp_fs_ctrlbar_button_pane_cp01

0xc43f,	// (0x00097d7b) main_sp_fs_ctrlbar_ddmenu_pane

0x18c3,	// (0x0008d1ff) main_sp_fs_ctrlbar_pane_g1

0x18cf,	// (0x0008d20b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc22,	// (0x0009b55e) main_sp_fs_ctrlbar_pane_g

0xc47b,	// (0x00097db7) main_sp_fs_ctrlbar_pane_t1

0xc4b6,	// (0x00097df2) main_sp_fs_ctrlbar_pane

0xc4cc,	// (0x00097e08) main_sp_fs_listscroll_pane_te_cp01

0xc4dd,	// (0x00097e19) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc4dd,	// (0x00097e19) popup_sp_fs_action_menu_pane_cp01

0x0f37,	// (0x0008c873) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0f37,	// (0x0008c873) bg_sp_fs_highlight_list_pane_cp01

0x0184,	// (0x0008bac0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0184,	// (0x0008bac0) sp_fs_action_menu_list_gene_pane_g1

0x18f6,	// (0x0008d232) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x18f6,	// (0x0008d232) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc30,	// (0x0009b56c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc30,	// (0x0009b56c) sp_fs_action_menu_list_gene_pane_g

0x0193,	// (0x0008bacf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0193,	// (0x0008bacf) sp_fs_action_menu_list_gene_pane_t1

0x01ab,	// (0x0008bae7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x01ab,	// (0x0008bae7) sp_fs_action_menu_list_gene_pane

0x1903,	// (0x0008d23f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1903,	// (0x0008d23f) popup_sp_fs_action_menu_bg_pane

0x01cc,	// (0x0008bb08) sp_fs_action_menu_list_pane_ParamLimits

0x01cc,	// (0x0008bb08) sp_fs_action_menu_list_pane

0x01ee,	// (0x0008bb2a) sp_fs_scroll_pane_cp01_ParamLimits

0x01ee,	// (0x0008bb2a) sp_fs_scroll_pane_cp01

0x2005,	// (0x0008d941) list_medium_line_plain_t2_t1

0x2005,	// (0x0008d941) list_medium_line_plain_t2_t2

0x0001,

0xfc1d,	// (0x0009b559) list_medium_line_plain_t2_t

0x2005,	// (0x0008d941) list_medium_line_plain_t3_t1

0x2005,	// (0x0008d941) list_medium_line_plain_t3_t2

0x2005,	// (0x0008d941) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x0009abbd) list_medium_line_plain_t3_t

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g2_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0009aafd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0009aafd) list_medium_line_x2_t2_g2_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g2_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x0009ab72) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x0009ab72) list_medium_line_x2_t2_g2_t

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g2_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0009aafd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0009aafd) list_medium_line_x2_t4_g2_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t3

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0009ab0b) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0009ab0b) list_medium_line_x2_t4_g2_t

0x1ad6,	// (0x0008d412) list_medium_line_t3_right_iconx2_g1

0x1ad6,	// (0x0008d412) list_medium_line_t3_right_iconx2_g2

0x1ad6,	// (0x0008d412) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x0009acde) list_medium_line_t3_right_iconx2_g

0x2005,	// (0x0008d941) list_medium_line_t3_right_iconx2_t1

0x2005,	// (0x0008d941) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc1d,	// (0x0009b559) list_medium_line_t3_right_iconx2_t

0x162e,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g1

0x162e,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g2

0x162e,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g3

0x162e,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0009ab02) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0009ab02) list_medium_line_x3_t4_g4_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t3

0x1aa8,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009ab0b) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009ab0b) list_medium_line_x3_t4_g4_t

0xc4fd,	// (0x00097e39) list_single_dyc_row_text_pane_t1_ParamLimits

0xc4fd,	// (0x00097e39) list_single_dyc_row_text_pane_t1

0xc534,	// (0x00097e70) list_single_dyc_row_text_pane_t2_ParamLimits

0xc534,	// (0x00097e70) list_single_dyc_row_text_pane_t2

0x0214,	// (0x0008bb50) list_single_dyc_row_text_pane_t3_ParamLimits

0x0214,	// (0x0008bb50) list_single_dyc_row_text_pane_t3

0x0005,

0xfc35,	// (0x0009b571) list_single_dyc_row_text_pane_t_ParamLimits

0xfc35,	// (0x0009b571) list_single_dyc_row_text_pane_t

0x0238,	// (0x0008bb74) list_single_dyc_row_pane_g1_ParamLimits

0x0238,	// (0x0008bb74) list_single_dyc_row_pane_g1

0x0244,	// (0x0008bb80) list_single_dyc_row_pane_g2_ParamLimits

0x0244,	// (0x0008bb80) list_single_dyc_row_pane_g2

0x0250,	// (0x0008bb8c) list_single_dyc_row_pane_g3_ParamLimits

0x0250,	// (0x0008bb8c) list_single_dyc_row_pane_g3

0x025c,	// (0x0008bb98) list_single_dyc_row_pane_g4_ParamLimits

0x025c,	// (0x0008bb98) list_single_dyc_row_pane_g4

0x0003,

0xfc42,	// (0x0009b57e) list_single_dyc_row_pane_g_ParamLimits

0xfc42,	// (0x0009b57e) list_single_dyc_row_pane_g

0x0268,	// (0x0008bba4) list_single_dyc_row_text_pane_ParamLimits

0x0268,	// (0x0008bba4) list_single_dyc_row_text_pane

0x0f2d,	// (0x0008c869) bg_sp_fs_scroll_pane

0x1911,	// (0x0008d24d) thumb_sp_fs_scroll_pane

0x162e,	// (0x0008cf6a) list_medium_line_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_g1

0x1aa8,	// (0x0008d3e4) list_medium_line_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t1

0x162e,	// (0x0008cf6a) list_medium_line_x2_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0009aafd) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0009aafd) list_medium_line_x2_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t1

0x162e,	// (0x0008cf6a) list_medium_line_x3_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x3_g1

0x191a,	// (0x0008d256) list_medium_line_x3_g2_ParamLimits

0x191a,	// (0x0008d256) list_medium_line_x3_g2

0x0001,

0xfc4b,	// (0x0009b587) list_medium_line_x3_g_ParamLimits

0xfc4b,	// (0x0009b587) list_medium_line_x3_g

0x1928,	// (0x0008d264) list_medium_line_x3_t1_ParamLimits

0x1928,	// (0x0008d264) list_medium_line_x3_t1

0x193c,	// (0x0008d278) thumb_sp_fs_scroll_pane_g1

0x1945,	// (0x0008d281) thumb_sp_fs_scroll_pane_g2

0x194e,	// (0x0008d28a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x0009b58c) thumb_sp_fs_scroll_pane_g

0x193c,	// (0x0008d278) bg_sp_fs_scroll_pane_g1

0x1945,	// (0x0008d281) bg_sp_fs_scroll_pane_g2

0x194e,	// (0x0008d28a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x0009b58c) bg_sp_fs_scroll_pane_g

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g1

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g2

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g3

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0009ab02) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0009ab02) list_medium_line_x2_t3_g4_g

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0009aaf6) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0009aaf6) list_medium_line_x2_t3_g4_t

0x162e,	// (0x0008cf6a) list_medium_line_g2_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_g2_g1

0x162e,	// (0x0008cf6a) list_medium_line_g2_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0009aafd) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0009aafd) list_medium_line_g2_g

0x1aa8,	// (0x0008d3e4) list_medium_line_g2_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_g2_t1

0x162e,	// (0x0008cf6a) list_medium_line_t3_g2_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t3_g2_g1

0x162e,	// (0x0008cf6a) list_medium_line_t3_g2_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0009aafd) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0009aafd) list_medium_line_t3_g2_g

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g2_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g2_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g2_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g2_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g2_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0009aaf6) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0009aaf6) list_medium_line_t3_g2_t

0x1ad6,	// (0x0008d412) list_medium_line_right_icon_g1

0x2005,	// (0x0008d941) list_medium_line_right_icon_t1

0x162e,	// (0x0008cf6a) list_medium_line_t2_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t2_g1

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x0009ab72) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x0009ab72) list_medium_line_t2_t

0x162e,	// (0x0008cf6a) list_medium_line_t3_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t3_g1

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0009aaf6) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0009aaf6) list_medium_line_t3_t

0x162e,	// (0x0008cf6a) list_medium_line_g3_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_g3_g1

0x162e,	// (0x0008cf6a) list_medium_line_g3_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_g3_g2

0x162e,	// (0x0008cf6a) list_medium_line_g3_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0009aaef) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0009aaef) list_medium_line_g3_g

0x1aa8,	// (0x0008d3e4) list_medium_line_g3_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_g3_t1

0x162e,	// (0x0008cf6a) list_medium_line_t2_g3_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t2_g3_g1

0x162e,	// (0x0008cf6a) list_medium_line_t2_g3_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t2_g3_g2

0x162e,	// (0x0008cf6a) list_medium_line_t2_g3_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0009aaef) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0009aaef) list_medium_line_t2_g3_g

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_g3_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_g3_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_g3_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x0009ab72) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x0009ab72) list_medium_line_t2_g3_t

0x162e,	// (0x0008cf6a) list_medium_line_t3_g3_g1_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t3_g3_g1

0x162e,	// (0x0008cf6a) list_medium_line_t3_g3_g2_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t3_g3_g2

0x162e,	// (0x0008cf6a) list_medium_line_t3_g3_g3_ParamLimits

0x162e,	// (0x0008cf6a) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0009aaef) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0009aaef) list_medium_line_t3_g3_g

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g3_t1_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g3_t1

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g3_t2_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g3_t2

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g3_t3_ParamLimits

0x1aa8,	// (0x0008d3e4) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0009aaf6) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0009aaf6) list_medium_line_t3_g3_t

0x1ad6,	// (0x0008d412) list_medium_line_right_iconx2_g1

0x1ad6,	// (0x0008d412) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0009acd9) list_medium_line_right_iconx2_g

0x2005,	// (0x0008d941) list_medium_line_right_iconx2_t1

0x1ad6,	// (0x0008d412) list_medium_line_t2_right_iconx2_g1

0x1ad6,	// (0x0008d412) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0009acd9) list_medium_line_t2_right_iconx2_g

0x2005,	// (0x0008d941) list_medium_line_t2_right_iconx2_t1

0x2005,	// (0x0008d941) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc1d,	// (0x0009b559) list_medium_line_t2_right_iconx2_t

0x2005,	// (0x0008d941) list_medium_line_x4_t4_t1

0x2005,	// (0x0008d941) list_medium_line_x4_t4_t2

0x2005,	// (0x0008d941) list_medium_line_x4_t4_t3

0x2005,	// (0x0008d941) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x0009abc4) list_medium_line_x4_t4_t

0xc681,	// (0x00097fbd) tport_appsw_pane_ParamLimits

0xc681,	// (0x00097fbd) tport_appsw_pane

0xc68f,	// (0x00097fcb) tport_contact_pane_ParamLimits

0xc68f,	// (0x00097fcb) tport_contact_pane

0xc69f,	// (0x00097fdb) tport_listscroll_pane_ParamLimits

0xc69f,	// (0x00097fdb) tport_listscroll_pane

0xc6af,	// (0x00097feb) cell_tport_appsw_pane_ParamLimits

0xc6af,	// (0x00097feb) cell_tport_appsw_pane

0x163c,	// (0x0008cf78) tport_appsw_pane_g1_ParamLimits

0x163c,	// (0x0008cf78) tport_appsw_pane_g1

0x1957,	// (0x0008d293) tport_contact_pane_g1

0x0ac1,	// (0x0008c3fd) tport_contact_pane_t1

0x1960,	// (0x0008d29c) tport_contact_pane_t2

0x0001,

0xfc57,	// (0x0009b593) tport_contact_pane_t

0x26b6,	// (0x0008dff2) list_tport_pane

0x26bf,	// (0x0008dffb) scroll_pane_cp_030

0xc6e2,	// (0x0009801e) cell_tport_appsw_pane_g1

0xc6f2,	// (0x0009802e) cell_tport_appsw_pane_t1

0xc700,	// (0x0009803c) grid_highlight_pane_cp019

0xc708,	// (0x00098044) list_tport_double_graphic_pane_ParamLimits

0xc708,	// (0x00098044) list_tport_double_graphic_pane

0x0f37,	// (0x0008c873) list_highlight_pane_cp023_ParamLimits

0x0f37,	// (0x0008c873) list_highlight_pane_cp023

0xc719,	// (0x00098055) list_tport_double_graphic_pane_g1_ParamLimits

0xc719,	// (0x00098055) list_tport_double_graphic_pane_g1

0xc726,	// (0x00098062) list_tport_double_graphic_pane_t1_ParamLimits

0xc726,	// (0x00098062) list_tport_double_graphic_pane_t1

0xc73b,	// (0x00098077) list_tport_double_graphic_pane_t2_ParamLimits

0xc73b,	// (0x00098077) list_tport_double_graphic_pane_t2

0x0001,

0xfc63,	// (0x0009b59f) list_tport_double_graphic_pane_t_ParamLimits

0xfc63,	// (0x0009b59f) list_tport_double_graphic_pane_t

0x0f2d,	// (0x0008c869) main_cale_note_pane

0xa6ae,	// (0x00095fea) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa6ae,	// (0x00095fea) cell_vitu2_function_top_wide_pane_cp01

0xc00a,	// (0x00097946) wait_bar_pane_cp05_ParamLimits

0x0f37,	// (0x0008c873) listscroll_cmail_pane

0x26d0,	// (0x0008e00c) list_cmail_pane

0xc74d,	// (0x00098089) list_cmail_body_pane

0xc774,	// (0x000980b0) list_single_cmail_header_caption_pane

0xc79d,	// (0x000980d9) list_single_cmail_header_detail_pane_ParamLimits

0xc79d,	// (0x000980d9) list_single_cmail_header_detail_pane

0x26e7,	// (0x0008e023) list_single_cmail_header_caption_pane_t1

0xc7d7,	// (0x00098113) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc7d7,	// (0x00098113) list_single_cmail_header_detail_pane_g1

0x0287,	// (0x0008bbc3) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0287,	// (0x0008bbc3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc68,	// (0x0009b5a4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc68,	// (0x0009b5a4) list_single_cmail_header_detail_pane_g

0xc7ed,	// (0x00098129) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc7ed,	// (0x00098129) list_single_cmail_header_detail_pane_t1

0xc829,	// (0x00098165) list_single_cmail_header_editor_pane_bg_ParamLimits

0xc829,	// (0x00098165) list_single_cmail_header_editor_pane_bg

0x0c1e,	// (0x0008c55a) list_cmail_body_pane_g1

0x270b,	// (0x0008e047) list_cmail_body_pane_t1

0xeae1,	// (0x0009a41d) list_single_cmail_header_editor_pane_bg_g1

0x1ce7,	// (0x0008d623) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeaf1,	// (0x0009a42d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeae9,	// (0x0009a425) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed21,	// (0x0009a65d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeb11,	// (0x0009a44d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeb01,	// (0x0009a43d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeb09,	// (0x0009a445) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1cc7,	// (0x0008d603) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc840,	// (0x0009817c) calenote_gesture_pane_ParamLimits

0xc840,	// (0x0009817c) calenote_gesture_pane

0xc85a,	// (0x00098196) calenote_window_pane_ParamLimits

0xc85a,	// (0x00098196) calenote_window_pane

0x2719,	// (0x0008e055) popup_note_window_cp01

0xc872,	// (0x000981ae) calenote_swipe_1_pane_ParamLimits

0xc872,	// (0x000981ae) calenote_swipe_1_pane

0xc3c6,	// (0x00097d02) calenote_swipe_2_pane_ParamLimits

0xc3c6,	// (0x00097d02) calenote_swipe_2_pane

0x17a3,	// (0x0008d0df) calenote_swipe_1_pane_g1_ParamLimits

0x17a3,	// (0x0008d0df) calenote_swipe_1_pane_g1

0x17b0,	// (0x0008d0ec) calenote_swipe_1_pane_g2_ParamLimits

0x17b0,	// (0x0008d0ec) calenote_swipe_1_pane_g2

0x0001,

0xfc05,	// (0x0009b541) calenote_swipe_1_pane_g_ParamLimits

0xfc05,	// (0x0009b541) calenote_swipe_1_pane_g

0x272b,	// (0x0008e067) calenote_swipe_1_pane_t1_ParamLimits

0x272b,	// (0x0008e067) calenote_swipe_1_pane_t1

0x17a3,	// (0x0008d0df) calenote_swipe_2_pane_g1_ParamLimits

0x17a3,	// (0x0008d0df) calenote_swipe_2_pane_g1

0x274a,	// (0x0008e086) calenote_swipe_2_pane_g2_ParamLimits

0x274a,	// (0x0008e086) calenote_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x0009b5b0) calenote_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x0009b5b0) calenote_swipe_2_pane_g

0x2756,	// (0x0008e092) calenote_swipe_2_pane_t1_ParamLimits

0x2756,	// (0x0008e092) calenote_swipe_2_pane_t1

0x0f2d,	// (0x0008c869) main_mup_navstr_pane

0x9504,	// (0x00094e40) main_mup3_pane_t7_ParamLimits

0x9504,	// (0x00094e40) main_mup3_pane_t7

0x9d2f,	// (0x0009566b) main_mp4_pane_g6_ParamLimits

0x9d2f,	// (0x0009566b) main_mp4_pane_g6

0xa0cd,	// (0x00095a09) main_image3_pane_t4_ParamLimits

0xa0cd,	// (0x00095a09) main_image3_pane_t4

0xc885,	// (0x000981c1) popup_navstr_preview_pane_ParamLimits

0xc885,	// (0x000981c1) popup_navstr_preview_pane

0xc891,	// (0x000981cd) scroll_navstr_pane_ParamLimits

0xc891,	// (0x000981cd) scroll_navstr_pane

0x0f2d,	// (0x0008c869) bg_popup_preview_window_pane_cp04

0x277d,	// (0x0008e0b9) popup_navstr_preview_pane_t1

0xc89d,	// (0x000981d9) scroll_navstr_pane_g1_ParamLimits

0xc89d,	// (0x000981d9) scroll_navstr_pane_g1

0xc8aa,	// (0x000981e6) scroll_navstr_pane_t1_ParamLimits

0xc8aa,	// (0x000981e6) scroll_navstr_pane_t1

0x2722,	// (0x0008e05e) bg_button_pane_cp014

0x2722,	// (0x0008e05e) bg_button_pane_cp030

0xc2d9,	// (0x00097c15) list_double_fisheye_pane_g4_ParamLimits

0xc2d9,	// (0x00097c15) list_double_fisheye_pane_g4

0xc2e5,	// (0x00097c21) list_double_fisheye_pane_g5_ParamLimits

0xc2e5,	// (0x00097c21) list_double_fisheye_pane_g5

0x4293,	// (0x0008fbcf) sp_fs_scroll_pane_cp03

0x18c3,	// (0x0008d1ff) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x18cf,	// (0x0008d20b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc22,	// (0x0009b55e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc47b,	// (0x00097db7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x26df,	// (0x0008e01b) sp_fs_scroll_pane_cp02

0x19e8,	// (0x0008d324) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x19e8,	// (0x0008d324) popup_sp_fs_calendar_preview_list_single_pane

0x0f2d,	// (0x0008c869) main_cam6_pano_pane

0x8a3f,	// (0x0009437b) main_mup3_pane_ParamLimits

0x0f2d,	// (0x0008c869) main_phacti_pane

0xbedf,	// (0x0009781b) bg_button_pane_cp11

0xbef7,	// (0x00097833) main_mobtv_info_pane_g2_ParamLimits

0xbef7,	// (0x00097833) main_mobtv_info_pane_g2

0x0001,

0xfb82,	// (0x0009b4be) main_mobtv_info_pane_g_ParamLimits

0xfb82,	// (0x0009b4be) main_mobtv_info_pane_g

0xc0a9,	// (0x000979e5) sc_clock_pane_t5_ParamLimits

0xc0a9,	// (0x000979e5) sc_clock_pane_t5

0xc14a,	// (0x00097a86) main_radioblah_pane_g1_ParamLimits

0x0ebb,	// (0x0008c7f7) main_radioblah_pane_t3_ParamLimits

0x0ebb,	// (0x0008c7f7) main_radioblah_pane_t3

0x0ed3,	// (0x0008c80f) main_radioblah_pane_t4_ParamLimits

0x0ed3,	// (0x0008c80f) main_radioblah_pane_t4

0xc168,	// (0x00097aa4) main_radioblah_text_pane_ParamLimits

0xc168,	// (0x00097aa4) main_radioblah_text_pane

0xc175,	// (0x00097ab1) main_radioblah_info_pane_g1_ParamLimits

0xc20a,	// (0x00097b46) main_radioblah_info_pane_t4_ParamLimits

0xc20a,	// (0x00097b46) main_radioblah_info_pane_t4

0x0f37,	// (0x0008c873) main_sp_fs_calendar_pane

0xc8bc,	// (0x000981f8) main_phacti_pane_g1

0xc8c4,	// (0x00098200) phacti_note_pane_ParamLimits

0xc8c4,	// (0x00098200) phacti_note_pane

0x2794,	// (0x0008e0d0) phacti_term_pane_ParamLimits

0x2794,	// (0x0008e0d0) phacti_term_pane

0x27a9,	// (0x0008e0e5) phacti_note_pane_t1_ParamLimits

0x27a9,	// (0x0008e0e5) phacti_note_pane_t1

0x02b7,	// (0x0008bbf3) phacti_term_pane_g1

0x02bf,	// (0x0008bbfb) phacti_term_pane_t1_ParamLimits

0x02bf,	// (0x0008bbfb) phacti_term_pane_t1

0x27c0,	// (0x0008e0fc) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1a87,	// (0x0008d3c3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc7e,	// (0x0009b5ba) popup_sp_fs_calendar_preview_list_single_pane_g

0x27c8,	// (0x0008e104) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x27c8,	// (0x0008e104) popup_sp_fs_calendar_preview_list_single_pane_t1

0x27de,	// (0x0008e11a) aid_popup_sp_fs_bg_corner_pane

0x1ad6,	// (0x0008d412) popup_sp_fs_calendar_preview_bg_pane_g1

0x0f2d,	// (0x0008c869) popup_sp_fs_calendar_preview_bg_pane

0x27e6,	// (0x0008e122) popup_sp_fs_calendar_preview_list_pane

0x25ed,	// (0x0008df29) bg_main_sp_fs_cale_pane_ParamLimits

0x25ed,	// (0x0008df29) bg_main_sp_fs_cale_pane

0x02f2,	// (0x0008bc2e) listscroll_cale_mrui_pane_ParamLimits

0x02f2,	// (0x0008bc2e) listscroll_cale_mrui_pane

0x0307,	// (0x0008bc43) listscroll_sp_fs_schedule_track_pane

0x0310,	// (0x0008bc4c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0310,	// (0x0008bc4c) main_sp_fs_ctrlbar_pane_cp01

0x27ee,	// (0x0008e12a) main_sp_fs_ribbon_pane

0x0323,	// (0x0008bc5f) popup_sp_fs_cale_preview_window

0xc927,	// (0x00098263) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc927,	// (0x00098263) list_single_sp_fs_schedule_track_pane

0x1620,	// (0x0008cf5c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1620,	// (0x0008cf5c) bg_sp_fs_highlight_list_pane_cp03

0xc947,	// (0x00098283) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc947,	// (0x00098283) list_single_sp_fs_schedule_track_pane_g1

0xc953,	// (0x0009828f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc953,	// (0x0009828f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc83,	// (0x0009b5bf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc83,	// (0x0009b5bf) list_single_sp_fs_schedule_track_pane_g

0xc95f,	// (0x0009829b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc95f,	// (0x0009829b) list_single_sp_fs_schedule_track_pane_t1

0xc977,	// (0x000982b3) sp_fs_schedule_track_pane_ParamLimits

0xc977,	// (0x000982b3) sp_fs_schedule_track_pane

0x27f6,	// (0x0008e132) sp_fs_schedule_track_pane_g1

0x27fe,	// (0x0008e13a) sp_fs_schedule_track_pane_g2

0x2806,	// (0x0008e142) sp_fs_schedule_track_pane_g3

0x280e,	// (0x0008e14a) sp_fs_schedule_track_pane_g4

0x2816,	// (0x0008e152) sp_fs_schedule_track_pane_g5

0x0004,

0xfc88,	// (0x0009b5c4) sp_fs_schedule_track_pane_g

0xeae1,	// (0x0009a41d) bg_sp_fs_schedule_viewer_highlight_g1

0x1ce7,	// (0x0008d623) bg_sp_fs_schedule_viewer_highlight_g2

0xeae9,	// (0x0009a425) bg_sp_fs_schedule_viewer_highlight_g3

0xeaf1,	// (0x0009a42d) bg_sp_fs_schedule_viewer_highlight_g4

0xed21,	// (0x0009a65d) bg_sp_fs_schedule_viewer_highlight_g5

0xeb01,	// (0x0009a43d) bg_sp_fs_schedule_viewer_highlight_g6

0xeb09,	// (0x0009a445) bg_sp_fs_schedule_viewer_highlight_g7

0xeb11,	// (0x0009a44d) bg_sp_fs_schedule_viewer_highlight_g8

0x1cc7,	// (0x0008d603) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc93,	// (0x0009b5cf) bg_sp_fs_schedule_viewer_highlight_g

0x0f2d,	// (0x0008c869) bg_main_sp_fs_ribbon_pane

0xc987,	// (0x000982c3) main_sp_fs_ribbon_pane_g1

0x281e,	// (0x0008e15a) main_sp_fs_ribbon_pane_t1

0xc990,	// (0x000982cc) main_sp_fs_ribbon_pane_t2

0x282d,	// (0x0008e169) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca6,	// (0x0009b5e2) main_sp_fs_ribbon_pane_t

0x283c,	// (0x0008e178) main_sp_fs_ribbon_scheduler_pane

0x2844,	// (0x0008e180) bg_main_sp_fs_ribbon_pane_g1

0x284d,	// (0x0008e189) bg_main_sp_fs_ribbon_pane_g2

0x2856,	// (0x0008e192) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcad,	// (0x0009b5e9) bg_main_sp_fs_ribbon_pane_g

0x285e,	// (0x0008e19a) main_sp_fs_ribbon_scheduler_pane_g1

0x2867,	// (0x0008e1a3) main_sp_fs_ribbon_scheduler_pane_g2

0x2870,	// (0x0008e1ac) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcb4,	// (0x0009b5f0) main_sp_fs_ribbon_scheduler_pane_g

0x2879,	// (0x0008e1b5) list_cale_mrui_pane

0xc99f,	// (0x000982db) sp_fs_scroll_pane_cp07_ParamLimits

0xc99f,	// (0x000982db) sp_fs_scroll_pane_cp07

0xc9bb,	// (0x000982f7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc9bb,	// (0x000982f7) bg_sp_fs_schedule_viewer_highlight

0x2886,	// (0x0008e1c2) list_single_sp_fs_schedule_track_pane_cp01

0x288e,	// (0x0008e1ca) list_sp_fs_schedule_track_pane

0x2896,	// (0x0008e1d2) sp_fs_scroll_pane_cp06_ParamLimits

0x2896,	// (0x0008e1d2) sp_fs_scroll_pane_cp06

0x1ad6,	// (0x0008d412) bgmain_sp_fs_calendar_pane_g1

0xc9c8,	// (0x00098304) list_single_cale_mrui_pane_ParamLimits

0xc9c8,	// (0x00098304) list_single_cale_mrui_pane

0x0335,	// (0x0008bc71) list_single_cale_mrui_row_pane_ParamLimits

0x0335,	// (0x0008bc71) list_single_cale_mrui_row_pane

0x0342,	// (0x0008bc7e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0342,	// (0x0008bc7e) list_single_cale_mrui_row_pane_g1

0x037a,	// (0x0008bcb6) list_single_cale_mrui_row_pane_t1_ParamLimits

0x037a,	// (0x0008bcb6) list_single_cale_mrui_row_pane_t1

0xc9f2,	// (0x0009832e) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc9f2,	// (0x0009832e) list_single_cale_mrui_row_pane_t2

0x038c,	// (0x0008bcc8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x038c,	// (0x0008bcc8) list_single_cale_mrui_row_pane_t3

0x03bb,	// (0x0008bcf7) list_single_cale_mrui_row_pane_t4_ParamLimits

0x03bb,	// (0x0008bcf7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcc2,	// (0x0009b5fe) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcc2,	// (0x0009b5fe) list_single_cale_mrui_row_pane_t

0xca58,	// (0x00098394) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xca58,	// (0x00098394) list_single_cmail_header_editor_pane_bg_cp01

0xca80,	// (0x000983bc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xca80,	// (0x000983bc) list_single_cmail_header_editor_pane_bg_cp02

0xca9c,	// (0x000983d8) main_radioblah_text_pane_t1_ParamLimits

0xca9c,	// (0x000983d8) main_radioblah_text_pane_t1

0x28b5,	// (0x0008e1f1) cam6_indi_pane_cp01

0x28bd,	// (0x0008e1f9) cam6_mode_pane_cp01

0x28c5,	// (0x0008e201) cam6_pano_pane

0x28ce,	// (0x0008e20a) cam6_zoom_pane_cp01

0x28d6,	// (0x0008e212) cam6_pano_image_pane

0x28e1,	// (0x0008e21d) cam6_pano_pane_g1

0x0c1e,	// (0x0008c55a) cam6_pano_pane_g2

0x28ea,	// (0x0008e226) cam6_pano_pane_g3

0x28f3,	// (0x0008e22f) cam6_pano_pane_g4

0xe7be,	// (0x0009a0fa) cam6_pano_pane_g5

0x28fc,	// (0x0008e238) cam6_pano_pane_g6

0x0f25,	// (0x0008c861) cam6_pano_pane_g7

0x2906,	// (0x0008e242) cam6_pano_pane_g8

0x290f,	// (0x0008e24b) cam6_pano_pane_g9

0x0008,

0xfccb,	// (0x0009b607) cam6_pano_pane_g

0x0f2d,	// (0x0008c869) main_browser_tag_pane

0x2775,	// (0x0008e0b1) grid_navstr_albumart_pane

0x291a,	// (0x0008e256) cell_navstr_albumart_pane_ParamLimits

0x291a,	// (0x0008e256) cell_navstr_albumart_pane

0x293a,	// (0x0008e276) cell_navstr_albumart_pane_g1

0x44c5,	// (0x0008fe01) cell_navstr_albumart_pane_g2

0x44d5,	// (0x0008fe11) cell_navstr_albumart_pane_g3

0x44cd,	// (0x0008fe09) cell_navstr_albumart_pane_g4

0x0003,

0xfcde,	// (0x0009b61a) cell_navstr_albumart_pane_g

0xcab7,	// (0x000983f3) bt_list_pane_ParamLimits

0xcab7,	// (0x000983f3) bt_list_pane

0xcad7,	// (0x00098413) bt_list_pane_t1

0xcae6,	// (0x00098422) bt_list_pane_t2

0x0001,

0xfce7,	// (0x0009b623) bt_list_pane_t

0x0f2d,	// (0x0008c869) main_cale_prevew_pane

0xcaf5,	// (0x00098431) popup_cale_preview_window_ParamLimits

0xcaf5,	// (0x00098431) popup_cale_preview_window

0x0f37,	// (0x0008c873) bg_popup_preview_window_pane_cp05_ParamLimits

0x0f37,	// (0x0008c873) bg_popup_preview_window_pane_cp05

0x2942,	// (0x0008e27e) list_cale_preview_pane_ParamLimits

0x2942,	// (0x0008e27e) list_cale_preview_pane

0xcb0e,	// (0x0009844a) list_double_cale_preview_pane_ParamLimits

0xcb0e,	// (0x0009844a) list_double_cale_preview_pane

0xcb20,	// (0x0009845c) list_single_cale_preview_pane_ParamLimits

0xcb20,	// (0x0009845c) list_single_cale_preview_pane

0xcb36,	// (0x00098472) list_single_cale_preview_pane_g1

0xcb3e,	// (0x0009847a) list_single_cale_preview_pane_t1_ParamLimits

0xcb3e,	// (0x0009847a) list_single_cale_preview_pane_t1

0xcb53,	// (0x0009848f) list_double_cale_preview_pane_g1

0xcb5b,	// (0x00098497) list_double_cale_preview_pane_t1_ParamLimits

0xcb5b,	// (0x00098497) list_double_cale_preview_pane_t1

0xcb70,	// (0x000984ac) list_double_cale_preview_pane_t2_ParamLimits

0xcb70,	// (0x000984ac) list_double_cale_preview_pane_t2

0x0001,

0xfcec,	// (0x0009b628) list_double_cale_preview_pane_t_ParamLimits

0xfcec,	// (0x0009b628) list_double_cale_preview_pane_t

0x0f2d,	// (0x0008c869) main_ezdial_pane

0x0f37,	// (0x0008c873) main_sp_fs_email_pane_ParamLimits

0xc3e0,	// (0x00097d1c) cmail_ddmenu_btn01_pane_ParamLimits

0xc3e0,	// (0x00097d1c) cmail_ddmenu_btn01_pane

0xc3fd,	// (0x00097d39) cmail_ddmenu_btn02_pane_ParamLimits

0xc3fd,	// (0x00097d39) cmail_ddmenu_btn02_pane

0xc41b,	// (0x00097d57) cmail_ddmenu_btn03_pane_ParamLimits

0xc41b,	// (0x00097d57) cmail_ddmenu_btn03_pane

0xc4b6,	// (0x00097df2) main_sp_fs_ctrlbar_pane_ParamLimits

0xc4cc,	// (0x00097e08) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc74d,	// (0x00098089) list_cmail_body_pane_ParamLimits

0x26f5,	// (0x0008e031) bg_button_pane_cp12

0x26fe,	// (0x0008e03a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x26fe,	// (0x0008e03a) list_single_cmail_header_detail_pane_g3

0x0293,	// (0x0008bbcf) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0293,	// (0x0008bbcf) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6f,	// (0x0009b5ab) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6f,	// (0x0009b5ab) list_single_cmail_header_detail_pane_t

0x02d4,	// (0x0008bc10) phacti_term_pane_t2_ParamLimits

0x02d4,	// (0x0008bc10) phacti_term_pane_t2

0x0001,

0xfc79,	// (0x0009b5b5) phacti_term_pane_t_ParamLimits

0xfc79,	// (0x0009b5b5) phacti_term_pane_t

0x294e,	// (0x0008e28a) aid_size_list_single_double

0xcb88,	// (0x000984c4) popup_ezdial_listscroll_window

0xcba9,	// (0x000984e5) popup_number_entry_window_cp01

0x1aa0,	// (0x0008d3dc) bg_popup_call_pane_cp09

0x295a,	// (0x0008e296) ezdial_list_pane

0x2962,	// (0x0008e29e) scroll_pane_cp23

0x4285,	// (0x0008fbc1) bg_button_pane_cp028_ParamLimits

0x4285,	// (0x0008fbc1) bg_button_pane_cp028

0xcbb7,	// (0x000984f3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcbb7,	// (0x000984f3) cmail_ddmenu_btn01_pane_g1

0xcbc7,	// (0x00098503) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcbc7,	// (0x00098503) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcf1,	// (0x0009b62d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcf1,	// (0x0009b62d) cmail_ddmenu_btn01_pane_g

0x296a,	// (0x0008e2a6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x296a,	// (0x0008e2a6) cmail_ddmenu_btn01_pane_t1

0x25ed,	// (0x0008df29) bg_button_pane_cp029_ParamLimits

0x25ed,	// (0x0008df29) bg_button_pane_cp029

0xcbd3,	// (0x0009850f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcbd3,	// (0x0009850f) cmail_ddmenu_btn02_pane_g1

0xcbeb,	// (0x00098527) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcbeb,	// (0x00098527) cmail_ddmenu_btn02_pane_t1

0x1620,	// (0x0008cf5c) bg_button_pane_cp031_ParamLimits

0x1620,	// (0x0008cf5c) bg_button_pane_cp031

0xcbd3,	// (0x0009850f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcbd3,	// (0x0009850f) cmail_ddmenu_btn03_pane_g1

0xcbeb,	// (0x00098527) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcbeb,	// (0x00098527) cmail_ddmenu_btn03_pane_t1

0x9f6a,	// (0x000958a6) cell_dialer2_keypad_pane_t1_ParamLimits

0x9f84,	// (0x000958c0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9f84,	// (0x000958c0) cell_dialer2_keypad_pane_t1_copy1

0xbd20,	// (0x0009765c) ncimui_group_button_pane

0x0f37,	// (0x0008c873) main_sp_fs_calendar_pane_ParamLimits

0xc774,	// (0x000980b0) list_single_cmail_header_caption_pane_ParamLimits

0x02e9,	// (0x0008bc25) aid_recal_txt_sm_pane

0x0f2d,	// (0x0008c869) mian_recal_day_pane

0x0323,	// (0x0008bc5f) popup_sp_fs_cale_preview_window_ParamLimits

0x2980,	// (0x0008e2bc) list_recal_day_pane

0x0405,	// (0x0008bd41) list_single_recal_day_pane_ParamLimits

0x0405,	// (0x0008bd41) list_single_recal_day_pane

0x29a7,	// (0x0008e2e3) list_single_recal_day_pane_g1_ParamLimits

0x29a7,	// (0x0008e2e3) list_single_recal_day_pane_g1

0x0417,	// (0x0008bd53) list_single_recal_day_pane_g2_ParamLimits

0x0417,	// (0x0008bd53) list_single_recal_day_pane_g2

0x0423,	// (0x0008bd5f) list_single_recal_day_pane_g3_ParamLimits

0x0423,	// (0x0008bd5f) list_single_recal_day_pane_g3

0xcc0f,	// (0x0009854b) list_single_recal_day_pane_g4_ParamLimits

0xcc0f,	// (0x0009854b) list_single_recal_day_pane_g4

0x042f,	// (0x0008bd6b) list_single_recal_day_pane_g5_ParamLimits

0x042f,	// (0x0008bd6b) list_single_recal_day_pane_g5

0x043b,	// (0x0008bd77) list_single_recal_day_pane_g6_ParamLimits

0x043b,	// (0x0008bd77) list_single_recal_day_pane_g6

0x0004,

0xfd00,	// (0x0009b63c) list_single_recal_day_pane_g_ParamLimits

0xfd00,	// (0x0009b63c) list_single_recal_day_pane_g

0x044f,	// (0x0008bd8b) list_single_recal_day_pane_t1

0x0461,	// (0x0008bd9d) list_single_recal_day_pane_t2

0x0001,

0xfd0b,	// (0x0009b647) list_single_recal_day_pane_t

0xcc27,	// (0x00098563) ncimui_query_button_pane_ParamLimits

0xcc27,	// (0x00098563) ncimui_query_button_pane

0xcc37,	// (0x00098573) ncimui_query_button_pane_t1_ParamLimits

0xcc37,	// (0x00098573) ncimui_query_button_pane_t1

0x29b3,	// (0x0008e2ef) ncimui_query_button_pane_t2_ParamLimits

0x29b3,	// (0x0008e2ef) ncimui_query_button_pane_t2

0x0001,

0xfd10,	// (0x0009b64c) ncimui_query_button_pane_t_ParamLimits

0xfd10,	// (0x0009b64c) ncimui_query_button_pane_t

0xcc4a,	// (0x00098586) query_button_pane_ParamLimits

0xcc4a,	// (0x00098586) query_button_pane

0x0f2d,	// (0x0008c869) bg_button_pane_cp0028

0x29c6,	// (0x0008e302) query_button_pane_t1

0x8a5b,	// (0x00094397) main_tport_pane_ParamLimits

0xc657,	// (0x00097f93) bg_popup_window_pane_cp01_ParamLimits

0xc657,	// (0x00097f93) bg_popup_window_pane_cp01

0xc665,	// (0x00097fa1) heading_pane_cp08_ParamLimits

0xc665,	// (0x00097fa1) heading_pane_cp08

0xc673,	// (0x00097faf) heading_pane_cp07_ParamLimits

0xc673,	// (0x00097faf) heading_pane_cp07

0xc6e2,	// (0x0009801e) cell_tport_appsw_pane_g2

0x0002,

0xfc5c,	// (0x0009b598) cell_tport_appsw_pane_g

0x8111,	// (0x00093a4d) input_candi_list_open_g1

0x1eb2,	// (0x0008d7ee) list_cale_time_pane_g6_ParamLimits

0x1eb2,	// (0x0008d7ee) list_cale_time_pane_g6

0x8f56,	// (0x00094892) aid_size_touch_calib_1_ParamLimits

0x8f56,	// (0x00094892) aid_size_touch_calib_1

0x8f62,	// (0x0009489e) aid_size_touch_calib_2_ParamLimits

0x8f62,	// (0x0009489e) aid_size_touch_calib_2

0x8f70,	// (0x000948ac) aid_size_touch_calib_3_ParamLimits

0x8f70,	// (0x000948ac) aid_size_touch_calib_3

0x8f80,	// (0x000948bc) aid_size_touch_calib_4_ParamLimits

0x8f80,	// (0x000948bc) aid_size_touch_calib_4

0x8f8e,	// (0x000948ca) main_touch_calib_button_group_pane_ParamLimits

0x8f8e,	// (0x000948ca) main_touch_calib_button_group_pane

0x8f9c,	// (0x000948d8) main_touch_calib_pane_g1_ParamLimits

0x8fa8,	// (0x000948e4) main_touch_calib_pane_g2_ParamLimits

0x8fb4,	// (0x000948f0) main_touch_calib_pane_g3_ParamLimits

0x8fc0,	// (0x000948fc) main_touch_calib_pane_g4_ParamLimits

0xf69e,	// (0x0009afda) main_touch_calib_pane_g_ParamLimits

0x8fcc,	// (0x00094908) main_touch_calib_pane_t1_ParamLimits

0x8fe5,	// (0x00094921) main_touch_calib_pane_t2_ParamLimits

0x8ffe,	// (0x0009493a) main_touch_calib_pane_t3_ParamLimits

0x9014,	// (0x00094950) main_touch_calib_pane_t4_ParamLimits

0x902a,	// (0x00094966) main_touch_calib_pane_t5_ParamLimits

0xf6a7,	// (0x0009afe3) main_touch_calib_pane_t_ParamLimits

0xe564,	// (0x00099ea0) list_single_fp_cale_pane_g3_ParamLimits

0xe564,	// (0x00099ea0) list_single_fp_cale_pane_g3

0x8a3f,	// (0x0009437b) bg_button_pane_cp012_ParamLimits

0x8a3f,	// (0x0009437b) bg_vkb2_func_pane_cp03_ParamLimits

0xae26,	// (0x00096762) cell_vitu2_function_top_pane_g1_ParamLimits

0x8a3f,	// (0x0009437b) bg_vkb2_func_pane_cp04_ParamLimits

0xbca8,	// (0x000975e4) main_ncimui_button_group_pane_ParamLimits

0xbca8,	// (0x000975e4) main_ncimui_button_group_pane

0xbd0e,	// (0x0009764a) main_ncimui_pane_t3_ParamLimits

0xbd0e,	// (0x0009764a) main_ncimui_pane_t3

0x278b,	// (0x0008e0c7) phacti_button_group_pane

0x294e,	// (0x0008e28a) aid_size_list_single_double_ParamLimits

0xcb88,	// (0x000984c4) popup_ezdial_listscroll_window_ParamLimits

0xcba9,	// (0x000984e5) popup_number_entry_window_cp01_ParamLimits

0xcc57,	// (0x00098593) phacti_button_pane_ParamLimits

0xcc57,	// (0x00098593) phacti_button_pane

0x0f2d,	// (0x0008c869) bg_button_pane_cp14

0x29d4,	// (0x0008e310) phacti_button_pane_t1

0xcc68,	// (0x000985a4) main_touch_calib_button_pane_ParamLimits

0xcc68,	// (0x000985a4) main_touch_calib_button_pane

0x16a0,	// (0x0008cfdc) bg_button_pane_cp18_ParamLimits

0x16a0,	// (0x0008cfdc) bg_button_pane_cp18

0x29e2,	// (0x0008e31e) main_touch_calib_button_pane_t1_ParamLimits

0x29e2,	// (0x0008e31e) main_touch_calib_button_pane_t1

0x29f8,	// (0x0008e334) main_touch_calib_button_pane_t2_ParamLimits

0x29f8,	// (0x0008e334) main_touch_calib_button_pane_t2

0x0001,

0xfd15,	// (0x0009b651) main_touch_calib_button_pane_t_ParamLimits

0xfd15,	// (0x0009b651) main_touch_calib_button_pane_t

0x0f2d,	// (0x0008c869) cell_ncimui_button_pane

0x0f2d,	// (0x0008c869) bg_button_pane_cp032

0x2a16,	// (0x0008e352) cell_ncimui_button_pane_t1

0x9fe0,	// (0x0009591c) image3_infobar_pane_ParamLimits

0x9fe0,	// (0x0009591c) image3_infobar_pane

0xc0cb,	// (0x00097a07) fs_bigclock_status_pane_ParamLimits

0xc0cb,	// (0x00097a07) fs_bigclock_status_pane

0xc0d8,	// (0x00097a14) main_fs_bigclock_clock_pane_ParamLimits

0xc0d8,	// (0x00097a14) main_fs_bigclock_clock_pane

0xc0ec,	// (0x00097a28) main_fs_bigclock_indi_pane_ParamLimits

0xc0ec,	// (0x00097a28) main_fs_bigclock_indi_pane

0xc114,	// (0x00097a50) main_fs_bigclock_swipe_pane_ParamLimits

0xc114,	// (0x00097a50) main_fs_bigclock_swipe_pane

0x0f2d,	// (0x0008c869) main_fs_clock_dumped_data

0x0d2b,	// (0x0008c667) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0d2b,	// (0x0008c667) list_single_fs_bigclock_indicator_pane_g1

0x0d46,	// (0x0008c682) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x0d46,	// (0x0008c682) list_single_fs_bigclock_indicator_pane_g2

0x0d60,	// (0x0008c69c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0d60,	// (0x0008c69c) list_single_fs_bigclock_indicator_pane_g3

0x0d7a,	// (0x0008c6b6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0d7a,	// (0x0008c6b6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb6,	// (0x0009b4f2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb6,	// (0x0009b4f2) list_single_fs_bigclock_indicator_pane_g

0x0da5,	// (0x0008c6e1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0da5,	// (0x0008c6e1) list_single_fs_bigclock_indicator_pane_t1

0x0dcd,	// (0x0008c709) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0dcd,	// (0x0008c709) list_single_fs_bigclock_indicator_pane_t2

0x0df5,	// (0x0008c731) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0df5,	// (0x0008c731) list_single_fs_bigclock_indicator_pane_t3

0x0e1d,	// (0x0008c759) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0e1d,	// (0x0008c759) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbc1,	// (0x0009b4fd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbc1,	// (0x0009b4fd) list_single_fs_bigclock_indicator_pane_t

0x2a24,	// (0x0008e360) image3_infobar_fav_pane_ParamLimits

0x2a24,	// (0x0008e360) image3_infobar_fav_pane

0x2a34,	// (0x0008e370) image3_infobar_loc_pane_ParamLimits

0x2a34,	// (0x0008e370) image3_infobar_loc_pane

0x2a48,	// (0x0008e384) image3_infobar_time_pane_ParamLimits

0x2a48,	// (0x0008e384) image3_infobar_time_pane

0x1ad6,	// (0x0008d412) image3_infobar_time_pane_g1

0x2a58,	// (0x0008e394) image3_infobar_time_pane_t1

0x1ad6,	// (0x0008d412) image3_infobar_loc_pane_g1

0x2a66,	// (0x0008e3a2) image3_infobar_loc_pane_g2

0x0001,

0xfd1a,	// (0x0009b656) image3_infobar_loc_pane_g

0x2a6e,	// (0x0008e3aa) image3_infobar_loc_pane_t1

0x1ad6,	// (0x0008d412) image3_infobar_fav_pane_g1

0x2a7c,	// (0x0008e3b8) image3_infobar_fav_pane_g2

0x0001,

0xfd1f,	// (0x0009b65b) image3_infobar_fav_pane_g

0x2a84,	// (0x0008e3c0) fs_bigclock_status_battery_pane

0x2a8d,	// (0x0008e3c9) fs_bigclock_status_signal_pane

0x2a96,	// (0x0008e3d2) fs_bigclock_status_title_pane

0x2a9f,	// (0x0008e3db) fs_bigclock_status_signal_pane_g1

0x2aa8,	// (0x0008e3e4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd24,	// (0x0009b660) fs_bigclock_status_signal_pane_g

0x2ab0,	// (0x0008e3ec) fs_bigclock_status_battery_pane_g1

0x2ab9,	// (0x0008e3f5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd29,	// (0x0009b665) fs_bigclock_status_battery_pane_g

0x2ac1,	// (0x0008e3fd) fs_bigclock_status_title_pane_t1

0xcc78,	// (0x000985b4) main_fs_bigclock_clock_pane_g1

0xcc78,	// (0x000985b4) main_fs_bigclock_clock_pane_g2

0xcc85,	// (0x000985c1) main_fs_bigclock_clock_pane_g3

0xcc85,	// (0x000985c1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd2e,	// (0x0009b66a) main_fs_bigclock_clock_pane_g

0xcc91,	// (0x000985cd) main_fs_bigclock_clock_pane_t1

0xcca4,	// (0x000985e0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd37,	// (0x0009b673) main_fs_bigclock_clock_pane_t

0x2acf,	// (0x0008e40b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2acf,	// (0x0008e40b) list_single_fs_bigclock_indicator_pane

0x2ae0,	// (0x0008e41c) list_single_fs_bigclock_pane_ParamLimits

0x2ae0,	// (0x0008e41c) list_single_fs_bigclock_pane

0x2b06,	// (0x0008e442) main_fs_bigclock_indicator_pane_t1

0x2b15,	// (0x0008e451) list_single_fs_bigclock_pane_g1

0x2b1d,	// (0x0008e459) list_single_fs_bigclock_pane_t1

0x1ad6,	// (0x0008d412) main_fs_bigclock_swipe_pane_g1

0x2b60,	// (0x0008e49c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd48,	// (0x0009b684) main_fs_bigclock_swipe_pane_g

0x2b68,	// (0x0008e4a4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2b68,	// (0x0008e4a4) main_fs_bigclock_swipe_pane_t1

0x7c0f,	// (0x0009354b) call_type_pane_ParamLimits

0x0f2d,	// (0x0008c869) main_btmg_pane

0x036e,	// (0x0008bcaa) list_single_cale_mrui_row_pane_g2_ParamLimits

0x036e,	// (0x0008bcaa) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcbb,	// (0x0009b5f7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcbb,	// (0x0009b5f7) list_single_cale_mrui_row_pane_g

0x03f4,	// (0x0008bd30) list_recal_vselct_arw_lo_pane

0x299f,	// (0x0008e2db) list_recal_vselct_arw_up_pane

0x03fc,	// (0x0008bd38) list_recal_vselct_pane

0xccfb,	// (0x00098637) btmg_button_pane

0xcd07,	// (0x00098643) main_btmg_pane_g1

0x0f2d,	// (0x0008c869) bg_button_pane_cp044

0x2b85,	// (0x0008e4c1) btmg_button_pane_t1

0x4615,	// (0x0008ff51) aid_listscroll_gen

0x0f37,	// (0x0008c873) main_cntbar_detail_pane

0x26c8,	// (0x0008e004) list_cmail_folder_pane

0x4293,	// (0x0008fbcf) sp_fs_scroll_pane_cp03_ParamLimits

0xcd0f,	// (0x0009864b) list_single_fs_dyc_pane_cp01_ParamLimits

0xcd0f,	// (0x0009864b) list_single_fs_dyc_pane_cp01

0x2b93,	// (0x0008e4cf) aid_size_cmail_indent

0x0473,	// (0x0008bdaf) list_single_dyc_row_pane_cp01

0xcd57,	// (0x00098693) cntbar_detail_list_pane_ParamLimits

0xcd57,	// (0x00098693) cntbar_detail_list_pane

0xcd91,	// (0x000986cd) main_cntbar_detail_cont_pane_ParamLimits

0xcd91,	// (0x000986cd) main_cntbar_detail_cont_pane

0x7c03,	// (0x0009353f) scroll_pane_cp032_ParamLimits

0x7c03,	// (0x0009353f) scroll_pane_cp032

0xcd9d,	// (0x000986d9) cntbar_detail_list_event_pane_ParamLimits

0xcd9d,	// (0x000986d9) cntbar_detail_list_event_pane

0xcd63,	// (0x0009869f) cntbar_detail_list_shct_pane

0x1d35,	// (0x0008d671) aid_list_gen

0x2b9c,	// (0x0008e4d8) aid_scroll

0x2ba5,	// (0x0008e4e1) aid_size_touch_scroll_bar

0xcdb1,	// (0x000986ed) aid_list_double

0x2bae,	// (0x0008e4ea) aid_list_single

0xcdba,	// (0x000986f6) aid_list_single_lg

0x047c,	// (0x0008bdb8) aid_list_z_g_a_sm

0x0484,	// (0x0008bdc0) aid_list_z_g_d

0x048c,	// (0x0008bdc8) aid_txt_z_prm

0xcdc3,	// (0x000986ff) aid_txt_z_prm_cp01

0xcdd1,	// (0x0009870d) aid_txt_z_sec

0xcddf,	// (0x0009871b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcddf,	// (0x0009871b) main_cntbar_detail_cont_pane_g1

0xcdec,	// (0x00098728) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcdec,	// (0x00098728) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd4d,	// (0x0009b689) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd4d,	// (0x0009b689) main_cntbar_detail_cont_pane_g

0x2bb7,	// (0x0008e4f3) main_cntbar_detail_cont_pane_t1

0x2bc5,	// (0x0008e501) main_cntbar_detail_cont_pane_t2

0x2bd3,	// (0x0008e50f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd52,	// (0x0009b68e) main_cntbar_detail_cont_pane_t

0xcdf8,	// (0x00098734) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcdf8,	// (0x00098734) cell_cntbar_detail_list_shct_pane

0x2be1,	// (0x0008e51d) cntbar_detail_list_shct_pane_g1

0x2bea,	// (0x0008e526) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd59,	// (0x0009b695) cntbar_detail_list_shct_pane_g

0xce0c,	// (0x00098748) cntbar_detail_list_event_pane_g1_ParamLimits

0xce0c,	// (0x00098748) cntbar_detail_list_event_pane_g1

0xce18,	// (0x00098754) cntbar_detail_list_event_pane_g2_ParamLimits

0xce18,	// (0x00098754) cntbar_detail_list_event_pane_g2

0x0005,

0xfd5e,	// (0x0009b69a) cntbar_detail_list_event_pane_g_ParamLimits

0xfd5e,	// (0x0009b69a) cntbar_detail_list_event_pane_g

0xce84,	// (0x000987c0) cntbar_detail_list_event_pane_t1_ParamLimits

0xce84,	// (0x000987c0) cntbar_detail_list_event_pane_t1

0xce99,	// (0x000987d5) cntbar_detail_list_event_pane_t2_ParamLimits

0xce99,	// (0x000987d5) cntbar_detail_list_event_pane_t2

0x0002,

0xfd6b,	// (0x0009b6a7) cntbar_detail_list_event_pane_t_ParamLimits

0xfd6b,	// (0x0009b6a7) cntbar_detail_list_event_pane_t

0x1ad6,	// (0x0008d412) cell_cntbar_detail_list_shct_pane_g1

0x24cc,	// (0x0008de08) navi_pane_mv_g3

0x0f37,	// (0x0008c873) main_cntbar_detail_pane_ParamLimits

0x0f2d,	// (0x0008c869) main_notif_wgt_pane

0x9c6a,	// (0x000955a6) aid_tch_main_mp4_pane_g4

0x9ec9,	// (0x00095805) popup_slider_window_cp02

0x03ea,	// (0x0008bd26) list_recal_day_event_pane

0xcd37,	// (0x00098673) cntbar_detail_btn_pane_ParamLimits

0xcd37,	// (0x00098673) cntbar_detail_btn_pane

0xcd47,	// (0x00098683) cntbar_detail_btn_pane_cp01_ParamLimits

0xcd47,	// (0x00098683) cntbar_detail_btn_pane_cp01

0xcd63,	// (0x0009869f) cntbar_detail_list_shct_pane_ParamLimits

0xcd6f,	// (0x000986ab) cntbar_detail_pane_g1_ParamLimits

0xcd6f,	// (0x000986ab) cntbar_detail_pane_g1

0xcd7b,	// (0x000986b7) cntbar_detail_pane_t1_ParamLimits

0xcd7b,	// (0x000986b7) cntbar_detail_pane_t1

0xce24,	// (0x00098760) cntbar_detail_list_event_pane_g3_ParamLimits

0xce24,	// (0x00098760) cntbar_detail_list_event_pane_g3

0xce3c,	// (0x00098778) cntbar_detail_list_event_pane_g4_ParamLimits

0xce3c,	// (0x00098778) cntbar_detail_list_event_pane_g4

0xce54,	// (0x00098790) cntbar_detail_list_event_pane_g5_ParamLimits

0xce54,	// (0x00098790) cntbar_detail_list_event_pane_g5

0xce6c,	// (0x000987a8) cntbar_detail_list_event_pane_g6_ParamLimits

0xce6c,	// (0x000987a8) cntbar_detail_list_event_pane_g6

0xceae,	// (0x000987ea) cntbar_detail_list_event_pane_t3_ParamLimits

0xceae,	// (0x000987ea) cntbar_detail_list_event_pane_t3

0xcec0,	// (0x000987fc) popup_notif_wgt_window_ParamLimits

0xcec0,	// (0x000987fc) popup_notif_wgt_window

0xced0,	// (0x0009880c) popup_submenu_window_cp01_ParamLimits

0xced0,	// (0x0009880c) popup_submenu_window_cp01

0x1aa0,	// (0x0008d3dc) bg_popup_window_pane_cp10

0x2bf3,	// (0x0008e52f) listscroll_notif_wgt_pane

0x2c05,	// (0x0008e541) list_notif_wgt_window

0x2c0e,	// (0x0008e54a) scroll_pane_cp033

0xcee2,	// (0x0009881e) list_notif_wgt_row_pane_ParamLimits

0xcee2,	// (0x0009881e) list_notif_wgt_row_pane

0x2c17,	// (0x0008e553) aid_size_list_notif_wgt_del

0x2c24,	// (0x0008e560) list_notif_wgt_row_pane_g1

0x2c30,	// (0x0008e56c) list_notif_wgt_row_pane_g2

0x2c3f,	// (0x0008e57b) list_notif_wgt_row_pane_g3

0x0002,

0xfd72,	// (0x0009b6ae) list_notif_wgt_row_pane_g

0x2c4c,	// (0x0008e588) list_notif_wgt_row_pane_t1

0x2c62,	// (0x0008e59e) list_notif_wgt_row_pane_t2

0x2c74,	// (0x0008e5b0) list_notif_wgt_row_pane_t3

0x0002,

0xfd79,	// (0x0009b6b5) list_notif_wgt_row_pane_t

0xed3b,	// (0x0009a677) list_recal_day_event_pane_g1

0x2c86,	// (0x0008e5c2) list_recal_day_event_pane_t1

0x0f2d,	// (0x0008c869) bg_button_pane_cp045

0x2c95,	// (0x0008e5d1) cntbar_detail_btn_pane_t1

0x25ed,	// (0x0008df29) main_callh_pane_ParamLimits

0x25ed,	// (0x0008df29) main_callh_pane

0x0f2d,	// (0x0008c869) main_coverflow0_pane

0x0f2d,	// (0x0008c869) main_wgtman_pane

0xc12c,	// (0x00097a68) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc12c,	// (0x00097a68) main_fs_bigclock_unlock_btn_pane

0xc6da,	// (0x00098016) bg_button_pane_cp16

0xc6ea,	// (0x00098026) cell_tport_appsw_pane_g3

0xcef4,	// (0x00098830) cf0_flow_pane_ParamLimits

0xcef4,	// (0x00098830) cf0_flow_pane

0x2ca3,	// (0x0008e5df) listscroll_cf0_pane

0x2cae,	// (0x0008e5ea) main_cf0_pane_g1

0xcf03,	// (0x0009883f) main_cf0_pane_t1_ParamLimits

0xcf03,	// (0x0009883f) main_cf0_pane_t1

0xcf17,	// (0x00098853) main_cf0_pane_t2_ParamLimits

0xcf17,	// (0x00098853) main_cf0_pane_t2

0x0001,

0xfd85,	// (0x0009b6c1) main_cf0_pane_t_ParamLimits

0xfd85,	// (0x0009b6c1) main_cf0_pane_t

0x2cc0,	// (0x0008e5fc) scroll_pane_cp11

0xcf2b,	// (0x00098867) cf0_flow_pane_g1

0xcf33,	// (0x0009886f) cf0_flow_pane_g2

0x0001,

0xfd8a,	// (0x0009b6c6) cf0_flow_pane_g

0xcf3b,	// (0x00098877) cf0_flow_pane_t1

0x0f2d,	// (0x0008c869) main_call6_pane

0x0f2d,	// (0x0008c869) main_calllock_pane

0xcf49,	// (0x00098885) call6_btn_grp_pane_ParamLimits

0xcf49,	// (0x00098885) call6_btn_grp_pane

0xcf58,	// (0x00098894) call6_pane_g1_ParamLimits

0xcf58,	// (0x00098894) call6_pane_g1

0xcf68,	// (0x000988a4) popup_call6_1st_window_ParamLimits

0xcf68,	// (0x000988a4) popup_call6_1st_window

0xcf76,	// (0x000988b2) popup_call6_2nd_window_ParamLimits

0xcf76,	// (0x000988b2) popup_call6_2nd_window

0xcf84,	// (0x000988c0) cell_call6_btn_pane_ParamLimits

0xcf84,	// (0x000988c0) cell_call6_btn_pane

0x1aa0,	// (0x0008d3dc) bg_popup_call2_in_pane_cp03

0x2ccb,	// (0x0008e607) popup_call6_1st_window_g1

0x2cd3,	// (0x0008e60f) popup_call6_1st_window_g2

0x2cdb,	// (0x0008e617) popup_call6_1st_window_g3

0x0002,

0xfd8f,	// (0x0009b6cb) popup_call6_1st_window_g

0x2ce3,	// (0x0008e61f) popup_call6_1st_window_t1

0x2cf2,	// (0x0008e62e) popup_call6_1st_window_t2

0x2d00,	// (0x0008e63c) popup_call6_1st_window_t3

0x0002,

0xfd96,	// (0x0009b6d2) popup_call6_1st_window_t

0x1aa0,	// (0x0008d3dc) bg_popup_call2_in_pane_cp04

0x2d0e,	// (0x0008e64a) popup_call6_2nd_window_g1

0x2d16,	// (0x0008e652) popup_call6_2nd_window_g2

0x2d1e,	// (0x0008e65a) popup_call6_2nd_window_g3

0x0002,

0xfd9d,	// (0x0009b6d9) popup_call6_2nd_window_g

0x2d26,	// (0x0008e662) popup_call6_2nd_window_t1

0x5e80,	// (0x000917bc) bg_button_pane_cp15

0xcf93,	// (0x000988cf) cell_call6_btn_pane_g1

0xcf9c,	// (0x000988d8) cell_call6_btn_pane_t1

0xcfab,	// (0x000988e7) listscroll_wgtman_pane_ParamLimits

0xcfab,	// (0x000988e7) listscroll_wgtman_pane

0xcfc7,	// (0x00098903) wgtman_btn_pane_ParamLimits

0xcfc7,	// (0x00098903) wgtman_btn_pane

0x22b3,	// (0x0008dbef) aid_scroll_copy1

0x2d3e,	// (0x0008e67a) list_wgtman_pane

0xcffc,	// (0x00098938) wgtman_btn_pane_g1_ParamLimits

0xcffc,	// (0x00098938) wgtman_btn_pane_g1

0xd024,	// (0x00098960) wgtman_btn_pane_t1_ParamLimits

0xd024,	// (0x00098960) wgtman_btn_pane_t1

0x2d48,	// (0x0008e684) wgtman_btn_pane_t2_ParamLimits

0x2d48,	// (0x0008e684) wgtman_btn_pane_t2

0x0001,

0xfda4,	// (0x0009b6e0) wgtman_btn_pane_t_ParamLimits

0xfda4,	// (0x0009b6e0) wgtman_btn_pane_t

0xd05b,	// (0x00098997) listrow_wgtman_pane_ParamLimits

0xd05b,	// (0x00098997) listrow_wgtman_pane

0xd076,	// (0x000989b2) listrow_wgtman_pane_g1

0xd083,	// (0x000989bf) listrow_wgtman_pane_g2

0x0001,

0xfda9,	// (0x0009b6e5) listrow_wgtman_pane_g

0xd0a1,	// (0x000989dd) listrow_wgtman_pane_t1

0xd0b9,	// (0x000989f5) listrow_wgtman_pane_t2

0x0001,

0xfdae,	// (0x0009b6ea) listrow_wgtman_pane_t

0xd0df,	// (0x00098a1b) wait_bar_pane_cp09

0x2d5f,	// (0x0008e69b) main_calllock_btn_pane

0x2d69,	// (0x0008e6a5) main_calllock_pane_g1

0x0f2d,	// (0x0008c869) bg_button_pane_cp17

0x2d35,	// (0x0008e671) main_calllock_btn_pane_g1

0x2d71,	// (0x0008e6ad) main_calllock_btn_pane_t1

0x0f2d,	// (0x0008c869) main_dialer3_pane

0x0f2d,	// (0x0008c869) main_fmrd2_pane

0x1ad6,	// (0x0008d412) main_fs_bigclock_unlock_btn_pane_g1

0xd0f9,	// (0x00098a35) main_fs_bigclock_unlock_btn_pane_t1

0xd107,	// (0x00098a43) area_fmrd2_info_pane_ParamLimits

0xd107,	// (0x00098a43) area_fmrd2_info_pane

0xd115,	// (0x00098a51) area_fmrd2_visual_pane_ParamLimits

0xd115,	// (0x00098a51) area_fmrd2_visual_pane

0xd123,	// (0x00098a5f) fmrd2_indi_pane_ParamLimits

0xd123,	// (0x00098a5f) fmrd2_indi_pane

0xd130,	// (0x00098a6c) area_fmrd2_visual_pane_g1

0xd138,	// (0x00098a74) area_fmrd2_visual_pane_t1

0xd148,	// (0x00098a84) area_fmrd2_visual_pane_t2

0xd158,	// (0x00098a94) area_fmrd2_visual_pane_t3

0x0002,

0xfdb8,	// (0x0009b6f4) area_fmrd2_visual_pane_t

0xd168,	// (0x00098aa4) area_fmrd2_info_pane_g1

0xd170,	// (0x00098aac) area_fmrd2_info_pane_t1

0xd180,	// (0x00098abc) area_fmrd2_info_pane_t2

0xd190,	// (0x00098acc) area_fmrd2_info_pane_t3

0xd1a0,	// (0x00098adc) area_fmrd2_info_pane_t4

0x0003,

0xfdbf,	// (0x0009b6fb) area_fmrd2_info_pane_t

0xd1ae,	// (0x00098aea) fmrd2_indi_pane_t1

0xd1be,	// (0x00098afa) fmrd2_indi_pane_t2

0xd1ce,	// (0x00098b0a) fmrd2_indi_pane_t3

0x0002,

0xfdc8,	// (0x0009b704) fmrd2_indi_pane_t

0x0d89,	// (0x0008c6c5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0d89,	// (0x0008c6c5) list_single_fs_bigclock_indicator_pane_g5

0x0e3a,	// (0x0008c776) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0e3a,	// (0x0008c776) list_single_fs_bigclock_indicator_pane_t5

0xc8da,	// (0x00098216) aid_cell_bcale_month_pane_ParamLimits

0xc8da,	// (0x00098216) aid_cell_bcale_month_pane

0xc8f8,	// (0x00098234) bcale_month_pane_ParamLimits

0xc8f8,	// (0x00098234) bcale_month_pane

0xc916,	// (0x00098252) bcale_preview_pane_ParamLimits

0xc916,	// (0x00098252) bcale_preview_pane

0x2b1d,	// (0x0008e459) list_single_fs_bigclock_pane_t1_ParamLimits

0x2b3c,	// (0x0008e478) list_single_fs_bigclock_pane_t2_ParamLimits

0x2b3c,	// (0x0008e478) list_single_fs_bigclock_pane_t2

0x0001,

0xfd43,	// (0x0009b67f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd43,	// (0x0009b67f) list_single_fs_bigclock_pane_t

0xd0f1,	// (0x00098a2d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdb3,	// (0x0009b6ef) main_fs_bigclock_unlock_btn_pane_g

0xd1dc,	// (0x00098b18) aid_dia3_key_size_ParamLimits

0xd1dc,	// (0x00098b18) aid_dia3_key_size

0xd1e8,	// (0x00098b24) aid_dia3_listrow_size_ParamLimits

0xd1e8,	// (0x00098b24) aid_dia3_listrow_size

0xd1f8,	// (0x00098b34) dia3_keypad_fun_pane_ParamLimits

0xd1f8,	// (0x00098b34) dia3_keypad_fun_pane

0xd20a,	// (0x00098b46) dia3_keypad_num_pane_ParamLimits

0xd20a,	// (0x00098b46) dia3_keypad_num_pane

0xd21c,	// (0x00098b58) dia3_listscroll_pane_ParamLimits

0xd21c,	// (0x00098b58) dia3_listscroll_pane

0xd22a,	// (0x00098b66) dia3_numentry_pane_ParamLimits

0xd22a,	// (0x00098b66) dia3_numentry_pane

0x2d80,	// (0x0008e6bc) dia3_list_pane

0x2d8b,	// (0x0008e6c7) scroll_pane_cp12

0x0f2d,	// (0x0008c869) bg_dia3_numentry_pane

0xd238,	// (0x00098b74) dia3_numentry_pane_t1

0xd247,	// (0x00098b83) cell_dia3_key_num_pane

0xd24f,	// (0x00098b8b) cell_dia3_key0_fun_pane_ParamLimits

0xd24f,	// (0x00098b8b) cell_dia3_key0_fun_pane

0xd25c,	// (0x00098b98) cell_dia3_key1_fun_pane_ParamLimits

0xd25c,	// (0x00098b98) cell_dia3_key1_fun_pane

0xd269,	// (0x00098ba5) dia3_listrow_pane

0x0adc,	// (0x0008c418) bg_dia3_numentry_pane_g1

0x0f2d,	// (0x0008c869) bg_button_pane_cp21

0x2d96,	// (0x0008e6d2) cell_dia3_key_num_pane_t1

0x2da4,	// (0x0008e6e0) cell_dia3_key_num_pane_t2

0x2db3,	// (0x0008e6ef) cell_dia3_key_num_pane_t3

0x2dc2,	// (0x0008e6fe) cell_dia3_key_num_pane_t4

0x0003,

0xfdcf,	// (0x0009b70b) cell_dia3_key_num_pane_t

0x0f2d,	// (0x0008c869) bg_button_pane_cp19

0xd276,	// (0x00098bb2) cell_dia3_key0_fun_pane_g1

0x0f2d,	// (0x0008c869) bg_button_pane_cp20

0xd27e,	// (0x00098bba) cell_dia3_key1_fun_pane_g1

0xd286,	// (0x00098bc2) area_left_week_number_pane

0xd299,	// (0x00098bd5) area_top_day_name_pane

0xd2a7,	// (0x00098be3) frame_month_view_pane

0x2dd1,	// (0x0008e70d) grid_month_view_pane

0xd2bc,	// (0x00098bf8) cell_top_day_name_pane_ParamLimits

0xd2bc,	// (0x00098bf8) cell_top_day_name_pane

0xd2d6,	// (0x00098c12) cell_area_left_week_number_pane_ParamLimits

0xd2d6,	// (0x00098c12) cell_area_left_week_number_pane

0xd2f9,	// (0x00098c35) cell_month_view_pane_ParamLimits

0xd2f9,	// (0x00098c35) cell_month_view_pane

0x2ddf,	// (0x0008e71b) frm_month_g1

0xd325,	// (0x00098c61) frm_month_g2

0xd336,	// (0x00098c72) frm_month_g3

0xd347,	// (0x00098c83) frm_month_g4

0xd358,	// (0x00098c94) frm_month_g5

0xd36b,	// (0x00098ca7) frm_month_g6

0xd37e,	// (0x00098cba) frm_month_g7

0x31c6,	// (0x0008eb02) frm_month_g8

0xd391,	// (0x00098ccd) frm_month_g9

0xd39e,	// (0x00098cda) frm_month_g10

0xd3ab,	// (0x00098ce7) frm_month_g11

0xd3b8,	// (0x00098cf4) frm_month_g12

0xd3c5,	// (0x00098d01) frm_month_g13

0xd3d2,	// (0x00098d0e) frm_month_g14

0xd3e1,	// (0x00098d1d) frm_month_g15

0xd3f0,	// (0x00098d2c) frm_month_g16

0x000f,

0xfdd8,	// (0x0009b714) frm_month_g

0x31d3,	// (0x0008eb0f) cell_top_day_name_pane_t1

0xd3ff,	// (0x00098d3b) cell_area_left_week_number_pane_g1

0xd40e,	// (0x00098d4a) cell_area_left_week_number_pane_t1

0x162e,	// (0x0008cf6a) cell_month_view_pane_g1

0xd424,	// (0x00098d60) cell_month_view_pane_t1

0x0f2d,	// (0x0008c869) main_fps_pane

0x188b,	// (0x0008d1c7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x188b,	// (0x0008d1c7) cmail_ddmenu_btn02_pane_cp1

0x18a7,	// (0x0008d1e3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x18a7,	// (0x0008d1e3) cmail_ddmenu_btn02_pane_cp2

0xcbdf,	// (0x0009851b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcbdf,	// (0x0009851b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf6,	// (0x0009b632) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf6,	// (0x0009b632) cmail_ddmenu_btn02_pane_g

0xcbfd,	// (0x00098539) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcbfd,	// (0x00098539) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcfb,	// (0x0009b637) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcfb,	// (0x0009b637) cmail_ddmenu_btn02_pane_t

0xd43a,	// (0x00098d76) fps_text_pane_ParamLimits

0xd43a,	// (0x00098d76) fps_text_pane

0xd447,	// (0x00098d83) main_fps_pane_g1_ParamLimits

0xd447,	// (0x00098d83) main_fps_pane_g1

0xd455,	// (0x00098d91) wait_bar_pane_cp010_ParamLimits

0xd455,	// (0x00098d91) wait_bar_pane_cp010

0xd461,	// (0x00098d9d) fps_text_pane_t1_ParamLimits

0xd461,	// (0x00098d9d) fps_text_pane_t1

0xa382,	// (0x00095cbe) cam4_image_uncrop_pane_g1

0xa38b,	// (0x00095cc7) cam4_image_uncrop_pane_g2

0xa394,	// (0x00095cd0) cam4_image_uncrop_pane_g3

0xa39d,	// (0x00095cd9) cam4_image_uncrop_pane_g4

0x0003,

0xf83a,	// (0x0009b176) cam4_image_uncrop_pane_g

0xd269,	// (0x00098ba5) dia3_listrow_pane_ParamLimits

0x0f2d,	// (0x0008c869) main_phob2_pane

0xc6bc,	// (0x00097ff8) cell_tport_appsw_pane_cp02_ParamLimits

0xc6bc,	// (0x00097ff8) cell_tport_appsw_pane_cp02

0xc6cb,	// (0x00098007) cell_tport_appsw_pane_cp03_ParamLimits

0xc6cb,	// (0x00098007) cell_tport_appsw_pane_cp03

0x0f2d,	// (0x0008c869) phob2_contact_card_pane

0x0f2d,	// (0x0008c869) phob2_listscroll_pane

0x31e6,	// (0x0008eb22) phob2_list_pane

0x31ee,	// (0x0008eb2a) scroll_pane_cp034

0xd47a,	// (0x00098db6) phob2_cc_data_pane_ParamLimits

0xd47a,	// (0x00098db6) phob2_cc_data_pane

0xd494,	// (0x00098dd0) phob2_cc_listscroll_pane_ParamLimits

0xd494,	// (0x00098dd0) phob2_cc_listscroll_pane

0xd05b,	// (0x00098997) list_double_large_graphic_phob2_pane_ParamLimits

0xd05b,	// (0x00098997) list_double_large_graphic_phob2_pane

0xd4ae,	// (0x00098dea) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd4ae,	// (0x00098dea) list_double_large_graphic_phob2_pane_g1

0xd4bb,	// (0x00098df7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd4bb,	// (0x00098df7) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf9,	// (0x0009b735) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf9,	// (0x0009b735) list_double_large_graphic_phob2_pane_g

0xd4e1,	// (0x00098e1d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd4e1,	// (0x00098e1d) list_double_large_graphic_phob2_pane_t1

0xd4f6,	// (0x00098e32) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd4f6,	// (0x00098e32) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe02,	// (0x0009b73e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe02,	// (0x0009b73e) list_double_large_graphic_phob2_pane_t

0x0f2d,	// (0x0008c869) list_highlight_pane_cp024

0x31f6,	// (0x0008eb32) phob2_cc_button_pane

0xd50b,	// (0x00098e47) phob2_cc_data_pane_g1_ParamLimits

0xd50b,	// (0x00098e47) phob2_cc_data_pane_g1

0xd51a,	// (0x00098e56) phob2_cc_data_pane_g2_ParamLimits

0xd51a,	// (0x00098e56) phob2_cc_data_pane_g2

0x0001,

0xfe07,	// (0x0009b743) phob2_cc_data_pane_g_ParamLimits

0xfe07,	// (0x0009b743) phob2_cc_data_pane_g

0xd529,	// (0x00098e65) phob2_cc_data_pane_t1_ParamLimits

0xd529,	// (0x00098e65) phob2_cc_data_pane_t1

0xd53e,	// (0x00098e7a) phob2_cc_data_pane_t2_ParamLimits

0xd53e,	// (0x00098e7a) phob2_cc_data_pane_t2

0xd553,	// (0x00098e8f) phob2_cc_data_pane_t3_ParamLimits

0xd553,	// (0x00098e8f) phob2_cc_data_pane_t3

0x0002,

0xfe0c,	// (0x0009b748) phob2_cc_data_pane_t_ParamLimits

0xfe0c,	// (0x0009b748) phob2_cc_data_pane_t

0x31fe,	// (0x0008eb3a) phob2_cc_list_pane_ParamLimits

0x31fe,	// (0x0008eb3a) phob2_cc_list_pane

0xefb4,	// (0x0009a8f0) scroll_pane_cp035_ParamLimits

0xefb4,	// (0x0009a8f0) scroll_pane_cp035

0x0f37,	// (0x0008c873) bg_button_pane_cp033

0x320a,	// (0x0008eb46) phob2_cc_button_pane_g1

0x3216,	// (0x0008eb52) phob2_cc_button_pane_t1

0x322b,	// (0x0008eb67) phob2_cc_button_pane_t2

0x0001,

0xfe13,	// (0x0009b74f) phob2_cc_button_pane_t

0xd568,	// (0x00098ea4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd568,	// (0x00098ea4) list_double_large_graphic_phob2_cc_pane

0xd5d6,	// (0x00098f12) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd5d6,	// (0x00098f12) list_double_large_graphic_phob2_cc_pane_g1

0xd5e7,	// (0x00098f23) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd5e7,	// (0x00098f23) list_double_large_graphic_phob2_cc_pane_g2

0xd5f3,	// (0x00098f2f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd5f3,	// (0x00098f2f) list_double_large_graphic_phob2_cc_pane_g3

0xd5ff,	// (0x00098f3b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd5ff,	// (0x00098f3b) list_double_large_graphic_phob2_cc_pane_g4

0xd60b,	// (0x00098f47) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd60b,	// (0x00098f47) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe18,	// (0x0009b754) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe18,	// (0x0009b754) list_double_large_graphic_phob2_cc_pane_g

0xd617,	// (0x00098f53) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd617,	// (0x00098f53) list_double_large_graphic_phob2_cc_pane_t1

0xd640,	// (0x00098f7c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd640,	// (0x00098f7c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe23,	// (0x0009b75f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe23,	// (0x0009b75f) list_double_large_graphic_phob2_cc_pane_t

0x323d,	// (0x0008eb79) list_highlight_pane_cp025_ParamLimits

0x323d,	// (0x0008eb79) list_highlight_pane_cp025

0x0f37,	// (0x0008c873) bg_button_pane_cp033_ParamLimits

0x320a,	// (0x0008eb46) phob2_cc_button_pane_g1_ParamLimits

0x3216,	// (0x0008eb52) phob2_cc_button_pane_t1_ParamLimits

0x322b,	// (0x0008eb67) phob2_cc_button_pane_t2_ParamLimits

0xfe13,	// (0x0009b74f) phob2_cc_button_pane_t_ParamLimits

0x5e74,	// (0x000917b0) popup_wgtman_window

0xec0d,	// (0x0009a549) scroll_pane_cp038

0xcfe4,	// (0x00098920) wgtman_btn_pane_cp_01_ParamLimits

0xcfe4,	// (0x00098920) wgtman_btn_pane_cp_01

0x324b,	// (0x0008eb87) wgtman_content_pane

0x3254,	// (0x0008eb90) wgtman_heading_pane

0x0f2d,	// (0x0008c869) bg_heading_pane_cp02

0x325d,	// (0x0008eb99) wgtman_heading_pane_g1

0x3265,	// (0x0008eba1) wgtman_heading_pane_t1

0x3273,	// (0x0008ebaf) scroll_pane_cp036

0x327b,	// (0x0008ebb7) wgtman_list_pane

0x3283,	// (0x0008ebbf) wgtman_list_pane_t1_ParamLimits

0x3283,	// (0x0008ebbf) wgtman_list_pane_t1

0xa2e1,	// (0x00095c1d) cam4_grid_pane

0xafd7,	// (0x00096913) bg_button_pane_cp015_ParamLimits

0xafec,	// (0x00096928) bg_button_pane_cp016_ParamLimits

0xaff8,	// (0x00096934) bg_button_pane_cp017_ParamLimits

0xb050,	// (0x0009698c) popup_vitu2_query_window_g3_ParamLimits

0xb050,	// (0x0009698c) popup_vitu2_query_window_g3

0xb0f1,	// (0x00096a2d) popup_vitu2_query_window_t6_ParamLimits

0xb0f1,	// (0x00096a2d) popup_vitu2_query_window_t6

0xb11c,	// (0x00096a58) popup_vitu2_query_window_t7_ParamLimits

0xb11c,	// (0x00096a58) popup_vitu2_query_window_t7

0x1747,	// (0x0008d083) cam4_grid_pane_g1

0x1750,	// (0x0008d08c) cam4_grid_pane_g2

0x329d,	// (0x0008ebd9) cam4_grid_pane_g3

0x32a6,	// (0x0008ebe2) cam4_grid_pane_g4

0x0003,

0xfe28,	// (0x0009b764) cam4_grid_pane_g

0x69c6,	// (0x00092302) aid_placing_vt_slider_lsc_ParamLimits

0x6d12,	// (0x0009264e) vidtel_button_pane_ParamLimits

0x6d12,	// (0x0009264e) vidtel_button_pane

0x0f2d,	// (0x0008c869) bg_button_pane_cp034

0x32b1,	// (0x0008ebed) vidtel_button_pane_g1

0x32b9,	// (0x0008ebf5) vidtel_button_pane_t1

0xed19,	// (0x0009a655) aid_size_vtel_slider_touch

0xefb4,	// (0x0009a8f0) scroll_pane_cp039

0xbe69,	// (0x000977a5) ncim_query_button_pane_cp01_ParamLimits

0xbe88,	// (0x000977c4) ncimui_query_pane_g1_ParamLimits

0x0f37,	// (0x0008c873) input_focus_pane_cp012_ParamLimits

0x0b1a,	// (0x0008c456) ncim_query_entry_pane_t1_ParamLimits

0xefb4,	// (0x0009a8f0) scroll_pane_cp039_ParamLimits

0x23b7,	// (0x0008dcf3) navi_pane_bcale_mc_g1

0x23bf,	// (0x0008dcfb) navi_pane_bcale_mc_t1

0x18db,	// (0x0008d217) main_sp_fs_email_pane_g1

0x18e7,	// (0x0008d223) main_sp_fs_email_pane_g2

0x0001,

0xfc2b,	// (0x0009b567) main_sp_fs_email_pane_g

0x28a8,	// (0x0008e1e4) list_single_cale_mrui_row_pane_g3_ParamLimits

0x28a8,	// (0x0008e1e4) list_single_cale_mrui_row_pane_g3

0xcc1d,	// (0x00098559) list_single_recal_day_pane_g5_event_pane

0x0447,	// (0x0008bd83) list_single_recal_day_pane_g7

0x32cf,	// (0x0008ec0b) list_recal_day_event_pane_cp01

0x32d8,	// (0x0008ec14) list_recal_vselct_arw_lo_pane_cp01

0x32e0,	// (0x0008ec1c) list_recal_vselct_arw_up_pane_cp01

0x32e8,	// (0x0008ec24) list_recal_vselct_pane_cp01

0xed3b,	// (0x0009a677) list_recal_day_event_pane_cp01_g1

0x049a,	// (0x0008bdd6) list_recal_day_event_pane_cp01_t1

0x044f,	// (0x0008bd8b) list_single_recal_day_pane_t1_ParamLimits

0x0461,	// (0x0008bd9d) list_single_recal_day_pane_t2_ParamLimits

0xfd0b,	// (0x0009b647) list_single_recal_day_pane_t_ParamLimits

0x15b3,	// (0x0008ceef) bg_notes_pane_ParamLimits

0x167e,	// (0x0008cfba) list_notes_pane_ParamLimits

0x6080,	// (0x000919bc) scroll_pane_cp06_ParamLimits

0x16a0,	// (0x0008cfdc) main_notes_pane_ParamLimits

0x0f37,	// (0x0008c873) main_welc_pane

0xd68b,	// (0x00098fc7) main_welc_body_pane_ParamLimits

0xd68b,	// (0x00098fc7) main_welc_body_pane

0xd6a5,	// (0x00098fe1) main_welc_opti_pane_ParamLimits

0xd6a5,	// (0x00098fe1) main_welc_opti_pane

0xd704,	// (0x00099040) main_welc_pane_t1_ParamLimits

0xd704,	// (0x00099040) main_welc_pane_t1

0xd89a,	// (0x000991d6) main_welc_body_row_pane_ParamLimits

0xd89a,	// (0x000991d6) main_welc_body_row_pane

0x1620,	// (0x0008cf5c) main_welc_opti_row_pane_ParamLimits

0x1620,	// (0x0008cf5c) main_welc_opti_row_pane

0x3302,	// (0x0008ec3e) main_welc_opti_row_pane_g1

0xd8bf,	// (0x000991fb) main_welc_opti_row_pane_t1

0x330a,	// (0x0008ec46) main_welc_body_row_pane_t1

0x2bfd,	// (0x0008e539) popup_notif_wgt_heading_pane

0x2c17,	// (0x0008e553) aid_size_list_notif_wgt_del_ParamLimits

0x2c24,	// (0x0008e560) list_notif_wgt_row_pane_g1_ParamLimits

0x2c30,	// (0x0008e56c) list_notif_wgt_row_pane_g2_ParamLimits

0x2c3f,	// (0x0008e57b) list_notif_wgt_row_pane_g3_ParamLimits

0xfd72,	// (0x0009b6ae) list_notif_wgt_row_pane_g_ParamLimits

0x2c4c,	// (0x0008e588) list_notif_wgt_row_pane_t1_ParamLimits

0x2c62,	// (0x0008e59e) list_notif_wgt_row_pane_t2_ParamLimits

0x2c74,	// (0x0008e5b0) list_notif_wgt_row_pane_t3_ParamLimits

0xfd79,	// (0x0009b6b5) list_notif_wgt_row_pane_t_ParamLimits

0xd076,	// (0x000989b2) listrow_wgtman_pane_g1_ParamLimits

0xd083,	// (0x000989bf) listrow_wgtman_pane_g2_ParamLimits

0xfda9,	// (0x0009b6e5) listrow_wgtman_pane_g_ParamLimits

0xd0a1,	// (0x000989dd) listrow_wgtman_pane_t1_ParamLimits

0xd0b9,	// (0x000989f5) listrow_wgtman_pane_t2_ParamLimits

0xfdae,	// (0x0009b6ea) listrow_wgtman_pane_t_ParamLimits

0xd0df,	// (0x00098a1b) wait_bar_pane_cp09_ParamLimits

0x0f2d,	// (0x0008c869) bg_popup_heading_pane_cp02

0x3319,	// (0x0008ec55) popup_notif_wgt_heading_pane_g1

0x3321,	// (0x0008ec5d) popup_notif_wgt_heading_pane_t1

0x0f2d,	// (0x0008c869) main_vids_pane

0x0f2d,	// (0x0008c869) vids_listscroll_pane

0xd8ce,	// (0x0009920a) scroll_pane_cp040

0x0f2d,	// (0x0008c869) vids_list_pane

0xd8d9,	// (0x00099215) vids_list_double_pane_ParamLimits

0xd8d9,	// (0x00099215) vids_list_double_pane

0xd8f0,	// (0x0009922c) vids_list_double_pane_g1

0xd8f9,	// (0x00099235) vids_list_double_pane_t1

0xd909,	// (0x00099245) vids_list_double_pane_t2

0x0001,

0xfe47,	// (0x0009b783) vids_list_double_pane_t

0x8a3f,	// (0x0009437b) main_ncimui_pane_ParamLimits

0xbcc0,	// (0x000975fc) main_ncimui_pane_g1_ParamLimits

0xbccc,	// (0x00097608) main_ncimui_pane_g2_ParamLimits

0xbccc,	// (0x00097608) main_ncimui_pane_g2

0x0001,

0xfb2c,	// (0x0009b468) main_ncimui_pane_g_ParamLimits

0xfb2c,	// (0x0009b468) main_ncimui_pane_g

0xd6be,	// (0x00098ffa) main_welc_pane_g1_ParamLimits

0xd6be,	// (0x00098ffa) main_welc_pane_g1

0xd6ca,	// (0x00099006) main_welc_pane_g2_ParamLimits

0xd6ca,	// (0x00099006) main_welc_pane_g2

0x0003,

0xfe31,	// (0x0009b76d) main_welc_pane_g_ParamLimits

0xfe31,	// (0x0009b76d) main_welc_pane_g

0x15b3,	// (0x0008ceef) listscroll_mce_pane_ParamLimits

0x250c,	// (0x0008de48) wait_bar_pane_cp10

0x461d,	// (0x0008ff59) main_cale_day_pane_ParamLimits

0x461d,	// (0x0008ff59) main_cale_week_pane_ParamLimits

0x15b3,	// (0x0008ceef) main_messa_pane_ParamLimits

0x9728,	// (0x00095064) main_clock2_btn_pane_ParamLimits

0x9728,	// (0x00095064) main_clock2_btn_pane

0xe5fb,	// (0x00099f37) main_clock2_btn_pane_cp01_ParamLimits

0xe5fb,	// (0x00099f37) main_clock2_btn_pane_cp01

0x2879,	// (0x0008e1b5) list_cale_mrui_pane_ParamLimits

0x2cb8,	// (0x0008e5f4) main_cf0_pane_g2

0x0001,

0xfd80,	// (0x0009b6bc) main_cf0_pane_g

0xd286,	// (0x00098bc2) area_left_week_number_pane_ParamLimits

0xd299,	// (0x00098bd5) area_top_day_name_pane_ParamLimits

0xd2a7,	// (0x00098be3) frame_month_view_pane_ParamLimits

0x2dd1,	// (0x0008e70d) grid_month_view_pane_ParamLimits

0x2ddf,	// (0x0008e71b) frm_month_g1_ParamLimits

0xd325,	// (0x00098c61) frm_month_g2_ParamLimits

0xd336,	// (0x00098c72) frm_month_g3_ParamLimits

0xd347,	// (0x00098c83) frm_month_g4_ParamLimits

0xd358,	// (0x00098c94) frm_month_g5_ParamLimits

0xd36b,	// (0x00098ca7) frm_month_g6_ParamLimits

0xd37e,	// (0x00098cba) frm_month_g7_ParamLimits

0x31c6,	// (0x0008eb02) frm_month_g8_ParamLimits

0xd391,	// (0x00098ccd) frm_month_g9_ParamLimits

0xd39e,	// (0x00098cda) frm_month_g10_ParamLimits

0xd3ab,	// (0x00098ce7) frm_month_g11_ParamLimits

0xd3b8,	// (0x00098cf4) frm_month_g12_ParamLimits

0xd3c5,	// (0x00098d01) frm_month_g13_ParamLimits

0xd3d2,	// (0x00098d0e) frm_month_g14_ParamLimits

0xd3e1,	// (0x00098d1d) frm_month_g15_ParamLimits

0xd3f0,	// (0x00098d2c) frm_month_g16_ParamLimits

0xfdd8,	// (0x0009b714) frm_month_g_ParamLimits

0x31d3,	// (0x0008eb0f) cell_top_day_name_pane_t1_ParamLimits

0xd3ff,	// (0x00098d3b) cell_area_left_week_number_pane_g1_ParamLimits

0xd40e,	// (0x00098d4a) cell_area_left_week_number_pane_t1_ParamLimits

0x162e,	// (0x0008cf6a) cell_month_view_pane_g1_ParamLimits

0xd424,	// (0x00098d60) cell_month_view_pane_t1_ParamLimits

0x15ab,	// (0x0008cee7) main_clock2_btn_pane_g1

0x332f,	// (0x0008ec6b) main_clock2_btn_pane_t1

0x0f37,	// (0x0008c873) listscroll_cmail_pane_ParamLimits

0x18db,	// (0x0008d217) main_sp_fs_email_pane_g1_ParamLimits

0x18e7,	// (0x0008d223) main_sp_fs_email_pane_g2_ParamLimits

0xfc2b,	// (0x0009b567) main_sp_fs_email_pane_g_ParamLimits

0x2980,	// (0x0008e2bc) list_recal_day_pane_ParamLimits

0x2991,	// (0x0008e2cd) mian_recal_day_pane_t1

0xc5aa,	// (0x00097ee6) list_single_dyc_row_text_pane_t4_ParamLimits

0xc5aa,	// (0x00097ee6) list_single_dyc_row_text_pane_t4

0xc5e1,	// (0x00097f1d) list_single_dyc_row_text_pane_t5_ParamLimits

0xc5e1,	// (0x00097f1d) list_single_dyc_row_text_pane_t5

0x0226,	// (0x0008bb62) list_single_dyc_row_text_pane_t6_ParamLimits

0x0226,	// (0x0008bb62) list_single_dyc_row_text_pane_t6

0x1e91,	// (0x0008d7cd) aid_mgn_list_cale_time_pane

0x8a3f,	// (0x0009437b) main_gallery2_pane_ParamLimits

0xe611,	// (0x00099f4d) main_clock2_pane_cp01_t1

0xe621,	// (0x00099f5d) main_clock2_pane_cp01_t3

0x0001,

0xf711,	// (0x0009b04d) main_clock2_pane_cp01_t

0x64d5,	// (0x00091e11) cale_week_scroll_pane_g16_ParamLimits

0x64d5,	// (0x00091e11) cale_week_scroll_pane_g16

0x1aa0,	// (0x0008d3dc) vorec_slider_pane

0x32b9,	// (0x0008ebf5) vidtel_button_pane_t1_ParamLimits

0xcc78,	// (0x000985b4) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcc78,	// (0x000985b4) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcc85,	// (0x000985c1) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcc85,	// (0x000985c1) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd2e,	// (0x0009b66a) main_fs_bigclock_clock_pane_g_ParamLimits

0xcc91,	// (0x000985cd) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcca4,	// (0x000985e0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd37,	// (0x0009b673) main_fs_bigclock_clock_pane_t_ParamLimits

0x90c5,	// (0x00094a01) main_mup3_lyrics_pane_ParamLimits

0x90c5,	// (0x00094a01) main_mup3_lyrics_pane

0xd93c,	// (0x00099278) main_mup3_lyrics_pane_t1_ParamLimits

0xd93c,	// (0x00099278) main_mup3_lyrics_pane_t1

0x9c54,	// (0x00095590) aid_main_mp4_pane_t1_area

0x9c5e,	// (0x0009559a) aid_main_mp4_pane_t2_area

0x9d5d,	// (0x00095699) main_mp4_pane_g7_ParamLimits

0x9d5d,	// (0x00095699) main_mp4_pane_g7

0x9d69,	// (0x000956a5) main_mp4_pane_g8_ParamLimits

0x9d69,	// (0x000956a5) main_mp4_pane_g8

0xa189,	// (0x00095ac5) aid_call6_pane_g1_size

0xd5aa,	// (0x00098ee6) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd5aa,	// (0x00098ee6) list_double_large_graphic_phob2_other_pane

0x1e49,	// (0x0008d785) list_double_large_graphic_phob2_other_pane_g1

0x0f2d,	// (0x0008c869) list_highlight_pane_cp026

0x0f37,	// (0x0008c873) main_welc_pane_ParamLimits

0xc449,	// (0x00097d85) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc449,	// (0x00097d85) main_sp_fs_ctrlbar_pane_g3

0xc461,	// (0x00097d9d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc461,	// (0x00097d9d) main_sp_fs_ctrlbar_pane_g4

0xc493,	// (0x00097dcf) toolbar2_fixed_button_pane_cp01

0xc49e,	// (0x00097dda) toolbar2_fixed_button_pane_cp02

0xc4a9,	// (0x00097de5) toolbar2_fixed_button_pane_cp03

0xd67b,	// (0x00098fb7) list_welc_entry_pane_ParamLimits

0xd67b,	// (0x00098fb7) list_welc_entry_pane

0xd6d8,	// (0x00099014) main_welc_pane_g3_ParamLimits

0xd6d8,	// (0x00099014) main_welc_pane_g3

0xd71e,	// (0x0009905a) main_welc_pane_t2_ParamLimits

0xd71e,	// (0x0009905a) main_welc_pane_t2

0xd732,	// (0x0009906e) main_welc_pane_t3_ParamLimits

0xd732,	// (0x0009906e) main_welc_pane_t3

0x0005,

0xfe3a,	// (0x0009b776) main_welc_pane_t_ParamLimits

0xfe3a,	// (0x0009b776) main_welc_pane_t

0xd82e,	// (0x0009916a) welc_button_pane_ParamLimits

0xd82e,	// (0x0009916a) welc_button_pane

0xd88c,	// (0x000991c8) welc_service_logo_pane_ParamLimits

0xd88c,	// (0x000991c8) welc_service_logo_pane

0xd96e,	// (0x000992aa) list_single_welc_entry_pane_ParamLimits

0xd96e,	// (0x000992aa) list_single_welc_entry_pane

0xd97f,	// (0x000992bb) list_single_welc_entry_pane_g1

0xd987,	// (0x000992c3) list_single_welc_entry_pane_t1

0xd995,	// (0x000992d1) list_single_welc_entry_pane_t2

0x0001,

0xfe4c,	// (0x0009b788) list_single_welc_entry_pane_t

0x0f2d,	// (0x0008c869) bg_button_pane_cp035

0xd9a3,	// (0x000992df) welc_button_pane_t1

0x333d,	// (0x0008ec79) welc_service_logo_pane_g1

0x3346,	// (0x0008ec82) welc_service_logo_pane_g2

0x0001,

0xfe51,	// (0x0009b78d) welc_service_logo_pane_g

0x5e80,	// (0x000917bc) main_int_radio_pane

0x196e,	// (0x0008d2aa) list_single_fs_dyc_pane_g1

0xd4c7,	// (0x00098e03) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd4c7,	// (0x00098e03) list_double_large_graphic_phob2_pane_g3

0xd4d3,	// (0x00098e0f) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd4d3,	// (0x00098e0f) list_double_large_graphic_phob2_pane_g4

0xd9b1,	// (0x000992ed) main_int_radio1_pane_ParamLimits

0xd9b1,	// (0x000992ed) main_int_radio1_pane

0x334f,	// (0x0008ec8b) find_pane_cp02

0xd9c3,	// (0x000992ff) input_focus_pane_cp12_ParamLimits

0xd9c3,	// (0x000992ff) input_focus_pane_cp12

0xd9cf,	// (0x0009930b) input_focus_pane_cp13_ParamLimits

0xd9cf,	// (0x0009930b) input_focus_pane_cp13

0xd9e7,	// (0x00099323) input_focus_pane_cp14_ParamLimits

0xd9e7,	// (0x00099323) input_focus_pane_cp14

0x3358,	// (0x0008ec94) int_radio1_listscroll_pane

0xd9ff,	// (0x0009933b) main_int_radio1_pane_g1_ParamLimits

0xd9ff,	// (0x0009933b) main_int_radio1_pane_g1

0xda0f,	// (0x0009934b) main_int_radio1_pane_t1_ParamLimits

0xda0f,	// (0x0009934b) main_int_radio1_pane_t1

0xda23,	// (0x0009935f) main_int_radio1_pane_t2_ParamLimits

0xda23,	// (0x0009935f) main_int_radio1_pane_t2

0xda37,	// (0x00099373) main_int_radio1_pane_t3_ParamLimits

0xda37,	// (0x00099373) main_int_radio1_pane_t3

0xda4b,	// (0x00099387) main_int_radio1_pane_t4_ParamLimits

0xda4b,	// (0x00099387) main_int_radio1_pane_t4

0x3362,	// (0x0008ec9e) main_int_radio1_pane_t5_ParamLimits

0x3362,	// (0x0008ec9e) main_int_radio1_pane_t5

0xda62,	// (0x0009939e) main_int_radio1_pane_t6_ParamLimits

0xda62,	// (0x0009939e) main_int_radio1_pane_t6

0xda74,	// (0x000993b0) main_int_radio1_pane_t7_ParamLimits

0xda74,	// (0x000993b0) main_int_radio1_pane_t7

0xda86,	// (0x000993c2) main_int_radio1_pane_t8_ParamLimits

0xda86,	// (0x000993c2) main_int_radio1_pane_t8

0xda9a,	// (0x000993d6) main_int_radio1_pane_t9_ParamLimits

0xda9a,	// (0x000993d6) main_int_radio1_pane_t9

0xdaac,	// (0x000993e8) main_int_radio1_pane_t10_ParamLimits

0xdaac,	// (0x000993e8) main_int_radio1_pane_t10

0xdadd,	// (0x00099419) main_int_radio1_pane_t11_ParamLimits

0xdadd,	// (0x00099419) main_int_radio1_pane_t11

0xdb0e,	// (0x0009944a) main_int_radio1_pane_t12_ParamLimits

0xdb0e,	// (0x0009944a) main_int_radio1_pane_t12

0x000b,

0xfe56,	// (0x0009b792) main_int_radio1_pane_t_ParamLimits

0xfe56,	// (0x0009b792) main_int_radio1_pane_t

0x3374,	// (0x0008ecb0) int_radio_list_pane

0x31ee,	// (0x0008eb2a) scroll_pane_cp037

0x337c,	// (0x0008ecb8) list_double_large_graphic_int_radio_pane_ParamLimits

0x337c,	// (0x0008ecb8) list_double_large_graphic_int_radio_pane

0x3394,	// (0x0008ecd0) list_double_large_graphic_int_radio_pane_g1

0x04b6,	// (0x0008bdf2) list_double_large_graphic_int_radio_pane_t1

0x04c4,	// (0x0008be00) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6f,	// (0x0009b7ab) list_double_large_graphic_int_radio_pane_t

0x0f2d,	// (0x0008c869) list_highlight_pane_cp027

0x32f2,	// (0x0008ec2e) main_button_pane_4

0xd6e4,	// (0x00099020) main_welc_pane_g4_ParamLimits

0xd6e4,	// (0x00099020) main_welc_pane_g4

0xd744,	// (0x00099080) main_welc_pane_t4_ParamLimits

0xd744,	// (0x00099080) main_welc_pane_t4

0xd756,	// (0x00099092) main_welc_pane_t5_ParamLimits

0xd756,	// (0x00099092) main_welc_pane_t5

0xd786,	// (0x000990c2) main_welc_pane_t6_ParamLimits

0xd786,	// (0x000990c2) main_welc_pane_t6

0xd83c,	// (0x00099178) welc_button_pane_2_ParamLimits

0xd83c,	// (0x00099178) welc_button_pane_2

0xd854,	// (0x00099190) welc_button_pane_3_ParamLimits

0xd854,	// (0x00099190) welc_button_pane_3

0x32fa,	// (0x0008ec36) welc_button_pane_4

0xd86e,	// (0x000991aa) welc_button_pane_5_ParamLimits

0xd86e,	// (0x000991aa) welc_button_pane_5

0x5bf3,	// (0x0009152f) main_popup_welc_pane

0x33ac,	// (0x0008ece8) main_welc_sk_g3

0x33b6,	// (0x0008ecf2) main_welc_sk_g4

0x33c0,	// (0x0008ecfc) main_welc_sk_t3

0x33d0,	// (0x0008ed0c) main_welc_sk_t4

0x33e0,	// (0x0008ed1c) popup_welc_pane_t4

0x33ee,	// (0x0008ed2a) popup_welc_pane_t5

0x33fc,	// (0x0008ed38) popup_welc_pane_t6

0x5e80,	// (0x000917bc) main_acti_pane

0x0f2d,	// (0x0008c869) main_sso_pane

0xdb25,	// (0x00099461) sso_body_pane_ParamLimits

0xdb25,	// (0x00099461) sso_body_pane

0xdb33,	// (0x0009946f) sso_logo_pane_ParamLimits

0xdb33,	// (0x0009946f) sso_logo_pane

0xdb5c,	// (0x00099498) sso_sk_pane_ParamLimits

0xdb5c,	// (0x00099498) sso_sk_pane

0x1ad6,	// (0x0008d412) main_sso_logo_pane_g1

0xdb69,	// (0x000994a5) sso_sk_pane_t1_ParamLimits

0xdb69,	// (0x000994a5) sso_sk_pane_t1

0xdb7d,	// (0x000994b9) sso_sk_pane_t2_ParamLimits

0xdb7d,	// (0x000994b9) sso_sk_pane_t2

0x0001,

0xfe74,	// (0x0009b7b0) sso_sk_pane_t_ParamLimits

0xfe74,	// (0x0009b7b0) sso_sk_pane_t

0x343a,	// (0x0008ed76) aid_sso_gap

0x3443,	// (0x0008ed7f) aid_sso_txt1

0x344d,	// (0x0008ed89) aid_sso_txt2

0x3457,	// (0x0008ed93) aid_sso_txt3

0x0002,

0xfe79,	// (0x0009b7b5) aid_sso_txt

0x3461,	// (0x0008ed9d) aid_sso_widget

0xdbdc,	// (0x00099518) sso_btn_pane_ParamLimits

0xdbdc,	// (0x00099518) sso_btn_pane

0xdc55,	// (0x00099591) sso_option_pane_ParamLimits

0xdc55,	// (0x00099591) sso_option_pane

0xdccf,	// (0x0009960b) sso_query_pane_ParamLimits

0xdccf,	// (0x0009960b) sso_query_pane

0xdd1f,	// (0x0009965b) sso_query_pane_cp01_ParamLimits

0xdd1f,	// (0x0009965b) sso_query_pane_cp01

0xdd71,	// (0x000996ad) sso_t_hdr_pane_ParamLimits

0xdd71,	// (0x000996ad) sso_t_hdr_pane

0xdd95,	// (0x000996d1) sso_t_nml_pane_ParamLimits

0xdd95,	// (0x000996d1) sso_t_nml_pane

0x346b,	// (0x0008eda7) sso_t_sub_pane

0xdb40,	// (0x0009947c) sso_popup_window_ParamLimits

0xdb40,	// (0x0009947c) sso_popup_window

0xdb8f,	// (0x000994cb) sso_apps_pane_ParamLimits

0xdb8f,	// (0x000994cb) sso_apps_pane

0xdbb2,	// (0x000994ee) sso_body_pane_g1

0xdbbc,	// (0x000994f8) sso_body_pane_t1

0xdbcc,	// (0x00099508) sso_body_pane_t2

0x0001,

0xfe80,	// (0x0009b7bc) sso_body_pane_t

0xdc27,	// (0x00099563) sso_btn_pane_cp01_ParamLimits

0xdc27,	// (0x00099563) sso_btn_pane_cp01

0xdca1,	// (0x000995dd) sso_prog_pane_ParamLimits

0xdca1,	// (0x000995dd) sso_prog_pane

0x3645,	// (0x0008ef81) sso_t_hdr_pane_t1_ParamLimits

0x3645,	// (0x0008ef81) sso_t_hdr_pane_t1

0x3480,	// (0x0008edbc) input_focus_pane_cp10_ParamLimits

0x3480,	// (0x0008edbc) input_focus_pane_cp10

0x349a,	// (0x0008edd6) sso_query_pane_t1_ParamLimits

0x349a,	// (0x0008edd6) sso_query_pane_t1

0x34ad,	// (0x0008ede9) sso_query_pane_t2_ParamLimits

0x34ad,	// (0x0008ede9) sso_query_pane_t2

0x34c8,	// (0x0008ee04) sso_query_pane_t3_ParamLimits

0x34c8,	// (0x0008ee04) sso_query_pane_t3

0x34f2,	// (0x0008ee2e) sso_query_pane_t4_ParamLimits

0x34f2,	// (0x0008ee2e) sso_query_pane_t4

0x0003,

0xfe85,	// (0x0009b7c1) sso_query_pane_t_ParamLimits

0xfe85,	// (0x0009b7c1) sso_query_pane_t

0x0f2d,	// (0x0008c869) bg_button_pane_cp22

0x339d,	// (0x0008ecd9) sso_btn_pane_t1

0xdde5,	// (0x00099721) sso_t_nml_pane_t1_ParamLimits

0xdde5,	// (0x00099721) sso_t_nml_pane_t1

0x3516,	// (0x0008ee52) sso_option_row_pane_ParamLimits

0x3516,	// (0x0008ee52) sso_option_row_pane

0x3529,	// (0x0008ee65) sso_t_sub_pane_t1_ParamLimits

0x3529,	// (0x0008ee65) sso_t_sub_pane_t1

0x0f37,	// (0x0008c873) bg_popup_window_pane_cp11_ParamLimits

0x0f37,	// (0x0008c873) bg_popup_window_pane_cp11

0x3546,	// (0x0008ee82) popup_sk_window_cp01_ParamLimits

0x3546,	// (0x0008ee82) popup_sk_window_cp01

0x3553,	// (0x0008ee8f) sso_popup_body_pane_ParamLimits

0x3553,	// (0x0008ee8f) sso_popup_body_pane

0x3560,	// (0x0008ee9c) scroll_pane_cp21_ParamLimits

0x3560,	// (0x0008ee9c) scroll_pane_cp21

0x356d,	// (0x0008eea9) sso_popup_body_t_pane_ParamLimits

0x356d,	// (0x0008eea9) sso_popup_body_t_pane

0x357a,	// (0x0008eeb6) sso_popup_body_t_hdr_pane_ParamLimits

0x357a,	// (0x0008eeb6) sso_popup_body_t_hdr_pane

0x358d,	// (0x0008eec9) sso_popup_body_t_nml_pane_ParamLimits

0x358d,	// (0x0008eec9) sso_popup_body_t_nml_pane

0x35ab,	// (0x0008eee7) sso_popup_body_t_sub_pane_ParamLimits

0x35ab,	// (0x0008eee7) sso_popup_body_t_sub_pane

0x35ce,	// (0x0008ef0a) sso_popup_body_t_hdr_pane_t1

0xde02,	// (0x0009973e) sso_popup_body_t_nml_pane_t1_ParamLimits

0xde02,	// (0x0009973e) sso_popup_body_t_nml_pane_t1

0x35de,	// (0x0008ef1a) sso_popup_body_t_sub_pane_t1_ParamLimits

0x35de,	// (0x0008ef1a) sso_popup_body_t_sub_pane_t1

0x1ad6,	// (0x0008d412) sso_prog_pane_g1

0xde43,	// (0x0009977f) sso_apps_pane_comp1_ParamLimits

0xde43,	// (0x0009977f) sso_apps_pane_comp1

0x3603,	// (0x0008ef3f) sso_apps_pane_comp1_g1

0x360b,	// (0x0008ef47) sso_apps_pane_comp1_t1

0x3627,	// (0x0008ef63) sso_option_row_pane_g1

0x362f,	// (0x0008ef6b) sso_option_row_pane_t1

0xd669,	// (0x00098fa5) bg_welc_area_ParamLimits

0xd669,	// (0x00098fa5) bg_welc_area

0xd7bc,	// (0x000990f8) sso_t_hdr_pane_a_t1_ParamLimits

0xd7bc,	// (0x000990f8) sso_t_hdr_pane_a_t1

0xd7d0,	// (0x0009910c) sso_t_nml_pane_a_t1_ParamLimits

0xd7d0,	// (0x0009910c) sso_t_nml_pane_a_t1

0xd7fa,	// (0x00099136) sso_t_sub_pane_a_t1_ParamLimits

0xd7fa,	// (0x00099136) sso_t_sub_pane_a_t1

0x339d,	// (0x0008ecd9) sso_btn_pane_t1_copy1

0x0f2d,	// (0x0008c869) welc_button_pane_2_comp1

0x340a,	// (0x0008ed46) sso_t_hdr_pane_p_t1

0x341a,	// (0x0008ed56) sso_t_nml_pane_p_t1

0x342a,	// (0x0008ed66) sso_t_sub_pane_p_t1

0x26d0,	// (0x0008e00c) list_cmail_pane_ParamLimits

0xd87e,	// (0x000991ba) welc_button_pane_cp01_ParamLimits

0xd87e,	// (0x000991ba) welc_button_pane_cp01

0x0f2d,	// (0x0008c869) main_att_pane

0x3619,	// (0x0008ef55) input_focus_pane_cp10_t1

0x362f,	// (0x0008ef6b) sso_option_row_pane_t1_ParamLimits

0xde5d,	// (0x00099799) main_att_body_pane_ParamLimits

0xde5d,	// (0x00099799) main_att_body_pane

0xde89,	// (0x000997c5) att_btn_pane_ParamLimits

0xde89,	// (0x000997c5) att_btn_pane

0xdeab,	// (0x000997e7) att_btn_pane_cp01_ParamLimits

0xdeab,	// (0x000997e7) att_btn_pane_cp01

0xdec5,	// (0x00099801) att_li_srv_pane_ParamLimits

0xdec5,	// (0x00099801) att_li_srv_pane

0xded7,	// (0x00099813) att_opt_pane_ParamLimits

0xded7,	// (0x00099813) att_opt_pane

0xdf1b,	// (0x00099857) att_query_pane_ParamLimits

0xdf1b,	// (0x00099857) att_query_pane

0xdf5f,	// (0x0009989b) att_query_pane_cp01_ParamLimits

0xdf5f,	// (0x0009989b) att_query_pane_cp01

0xdfa3,	// (0x000998df) att_t_hdr_pane_ParamLimits

0xdfa3,	// (0x000998df) att_t_hdr_pane

0xdff5,	// (0x00099931) att_t_nml_pane_ParamLimits

0xdff5,	// (0x00099931) att_t_nml_pane

0xe029,	// (0x00099965) att_t_nml_pane_cp01_ParamLimits

0xe029,	// (0x00099965) att_t_nml_pane_cp01

0xe04d,	// (0x00099989) att_t_nmlb_pane_ParamLimits

0xe04d,	// (0x00099989) att_t_nmlb_pane

0xe067,	// (0x000999a3) att_term_pane_ParamLimits

0xe067,	// (0x000999a3) att_term_pane

0xe0ab,	// (0x000999e7) main_att_body_pane_g1_ParamLimits

0xe0ab,	// (0x000999e7) main_att_body_pane_g1

0x3645,	// (0x0008ef81) att_t_hdr_pane_t1_ParamLimits

0x3645,	// (0x0008ef81) att_t_hdr_pane_t1

0x365e,	// (0x0008ef9a) att_t_nml_pane_t1_ParamLimits

0x365e,	// (0x0008ef9a) att_t_nml_pane_t1

0x3683,	// (0x0008efbf) att_btn_pane_t1

0x0f2d,	// (0x0008c869) bg_button_pane_cp23

0xe0df,	// (0x00099a1b) att_li_srv_row_pane_ParamLimits

0xe0df,	// (0x00099a1b) att_li_srv_row_pane

0x3693,	// (0x0008efcf) att_t_nmlb_pane_t1_ParamLimits

0x3693,	// (0x0008efcf) att_t_nmlb_pane_t1

0x36ac,	// (0x0008efe8) att_query_pane_t1

0x36bb,	// (0x0008eff7) att_query_pane_t2

0x36ca,	// (0x0008f006) att_query_pane_t3

0x0002,

0xfe8e,	// (0x0009b7ca) att_query_pane_t

0x36d9,	// (0x0008f015) input_focus_pane_cp11

0x36e2,	// (0x0008f01e) att_term_pane_t1_ParamLimits

0x36e2,	// (0x0008f01e) att_term_pane_t1

0x0f2d,	// (0x0008c869) att_opt_row_pane

0x36ff,	// (0x0008f03b) att_opt_row_pane_g1

0x3707,	// (0x0008f043) att_opt_row_pane_t1_ParamLimits

0x3707,	// (0x0008f043) att_opt_row_pane_t1

0xe0ef,	// (0x00099a2b) att_li_srv_row_pane_g1

0xe0f7,	// (0x00099a33) att_li_srv_row_pane_t1

0xe10c,	// (0x00099a48) att_li_srv_row_pane_t2

0x0001,

0xfe95,	// (0x0009b7d1) att_li_srv_row_pane_t

0x0f2d,	// (0x0008c869) main_call7_pane

0x0f2d,	// (0x0008c869) main_vod_pane

0x346b,	// (0x0008eda7) sso_t_sub_pane_ParamLimits

0xde71,	// (0x000997ad) att_btn_emg_pane_ParamLimits

0xde71,	// (0x000997ad) att_btn_emg_pane

0xe0f7,	// (0x00099a33) att_li_srv_row_pane_t1_ParamLimits

0xe10c,	// (0x00099a48) att_li_srv_row_pane_t2_ParamLimits

0xfe95,	// (0x0009b7d1) att_li_srv_row_pane_t_ParamLimits

0x3720,	// (0x0008f05c) att_btn_close_pane_g1

0x0f2d,	// (0x0008c869) bg_button_pane_cp24

0xe121,	// (0x00099a5d) main_vod_body_pane_ParamLimits

0xe121,	// (0x00099a5d) main_vod_body_pane

0xe12f,	// (0x00099a6b) main_vod_body_pane_g1_ParamLimits

0xe12f,	// (0x00099a6b) main_vod_body_pane_g1

0xe15f,	// (0x00099a9b) scroll_pane_cp24_ParamLimits

0xe15f,	// (0x00099a9b) scroll_pane_cp24

0xe1a7,	// (0x00099ae3) vod_btn_pane_ParamLimits

0xe1a7,	// (0x00099ae3) vod_btn_pane

0xe1e7,	// (0x00099b23) vod_det_pane_ParamLimits

0xe1e7,	// (0x00099b23) vod_det_pane

0xe213,	// (0x00099b4f) vod_logo_g1_ParamLimits

0xe213,	// (0x00099b4f) vod_logo_g1

0xe24d,	// (0x00099b89) vod_opt_pane_ParamLimits

0xe24d,	// (0x00099b89) vod_opt_pane

0xe27d,	// (0x00099bb9) vod_opt_pane_cp01_ParamLimits

0xe27d,	// (0x00099bb9) vod_opt_pane_cp01

0xe2a5,	// (0x00099be1) vod_query_pane_ParamLimits

0xe2a5,	// (0x00099be1) vod_query_pane

0xe2cf,	// (0x00099c0b) vod_query_pane_cp01_ParamLimits

0xe2cf,	// (0x00099c0b) vod_query_pane_cp01

0xe2db,	// (0x00099c17) vod_t_nml_pane_ParamLimits

0xe2db,	// (0x00099c17) vod_t_nml_pane

0xe381,	// (0x00099cbd) vod_t_nml_pane_cp01_ParamLimits

0xe381,	// (0x00099cbd) vod_t_nml_pane_cp01

0xe3b9,	// (0x00099cf5) vod_t_sub_pane_ParamLimits

0xe3b9,	// (0x00099cf5) vod_t_sub_pane

0xe3e7,	// (0x00099d23) vod_t_sub_pane_cp01_ParamLimits

0xe3e7,	// (0x00099d23) vod_t_sub_pane_cp01

0x36d9,	// (0x0008f015) vod_query_field_pane

0x36ac,	// (0x0008efe8) vod_query_pane_t1

0x0f2d,	// (0x0008c869) bg_button_pane_cp25

0x3683,	// (0x0008efbf) sso_btn_pane_t1_copy2

0xe40f,	// (0x00099d4b) vod_t_nml_pane_t1_ParamLimits

0xe40f,	// (0x00099d4b) vod_t_nml_pane_t1

0x3728,	// (0x0008f064) vod_opt_row_pane_ParamLimits

0x3728,	// (0x0008f064) vod_opt_row_pane

0x373a,	// (0x0008f076) vod_t_sub_pane_t1_ParamLimits

0x373a,	// (0x0008f076) vod_t_sub_pane_t1

0xe446,	// (0x00099d82) vod_det_cell_pane_ParamLimits

0xe446,	// (0x00099d82) vod_det_cell_pane

0x0f2d,	// (0x0008c869) input_focus_pane_cp15

0x3753,	// (0x0008f08f) vod_query_field_pane_t1

0x3761,	// (0x0008f09d) vod_opt_row_pane_g1_ParamLimits

0x3761,	// (0x0008f09d) vod_opt_row_pane_g1

0x376d,	// (0x0008f0a9) vod_opt_row_pane_t1_ParamLimits

0x376d,	// (0x0008f0a9) vod_opt_row_pane_t1

0x3792,	// (0x0008f0ce) vod_det_cell_field_pane

0x379b,	// (0x0008f0d7) vod_det_cell_pane_g1

0x36ac,	// (0x0008efe8) vod_det_cell_pane_t1

0x0f2d,	// (0x0008c869) input_focus_pane_cp16

0x3753,	// (0x0008f08f) vod_det_cell_field_pane_t1

0xe458,	// (0x00099d94) call7_btn_grp_pane_ParamLimits

0xe458,	// (0x00099d94) call7_btn_grp_pane

0xe467,	// (0x00099da3) call7_bubble_pane_ParamLimits

0xe467,	// (0x00099da3) call7_bubble_pane

0xe475,	// (0x00099db1) cell_call7_btn_pane_ParamLimits

0xe475,	// (0x00099db1) cell_call7_btn_pane

0xe484,	// (0x00099dc0) call7_pane_g1_ParamLimits

0xe484,	// (0x00099dc0) call7_pane_g1

0xe493,	// (0x00099dcf) call7_windows_conf_pane_ParamLimits

0xe493,	// (0x00099dcf) call7_windows_conf_pane

0xe4ad,	// (0x00099de9) popup_call7_1st_window_ParamLimits

0xe4ad,	// (0x00099de9) popup_call7_1st_window

0xe4bb,	// (0x00099df7) popup_call7_2nd_window_ParamLimits

0xe4bb,	// (0x00099df7) popup_call7_2nd_window

0xe4c9,	// (0x00099e05) popup_call7_3rd_window_ParamLimits

0xe4c9,	// (0x00099e05) popup_call7_3rd_window

0x0f2d,	// (0x0008c869) bg_button_pane_cp26

0x2d35,	// (0x0008e671) cell_call7_btn_pane_g1

0x31b7,	// (0x0008eaf3) cell_call7_btn_pane_t1

0x0f2d,	// (0x0008c869) bg_popup_window_pane_cp12

0x37a3,	// (0x0008f0df) popup_call7_1st_window_g1

0x37ab,	// (0x0008f0e7) popup_call7_1st_window_g2

0x37b3,	// (0x0008f0ef) popup_call7_1st_window_g3

0x0002,

0xfe9a,	// (0x0009b7d6) popup_call7_1st_window_g

0x37bb,	// (0x0008f0f7) popup_call7_1st_window_t1

0x37ca,	// (0x0008f106) popup_call7_1st_window_t2

0x37d8,	// (0x0008f114) popup_call7_1st_window_t3

0x0002,

0xfea1,	// (0x0009b7dd) popup_call7_1st_window_t

0x0f2d,	// (0x0008c869) bg_popup_window_pane_cp13

0x37e6,	// (0x0008f122) popup_call7_2nd_window_g1

0x37ee,	// (0x0008f12a) popup_call7_2nd_window_g2

0x37f6,	// (0x0008f132) popup_call7_2nd_window_g3

0x0002,

0xfea8,	// (0x0009b7e4) popup_call7_2nd_window_g

0x37fe,	// (0x0008f13a) popup_call7_2nd_window_t1

0x0f2d,	// (0x0008c869) bg_popup_window_pane_cp14

0x380d,	// (0x0008f149) call7_list_conf_pane

0x3815,	// (0x0008f151) call7_list_conf_row_pane_ParamLimits

0x3815,	// (0x0008f151) call7_list_conf_row_pane

0x3828,	// (0x0008f164) call7_list_conf_row_pane_g1

0x3830,	// (0x0008f16c) call7_list_conf_row_pane_g2

0x0001,

0xfeaf,	// (0x0009b7eb) call7_list_conf_row_pane_g

0x3838,	// (0x0008f174) call7_list_conf_row_pane_t1

0x0f2d,	// (0x0008c869) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
