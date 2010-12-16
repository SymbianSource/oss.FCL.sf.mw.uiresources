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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00019ad3 };

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
0x5c49,	// (0x0001f71c) Screen

0x5c55,	// (0x0001f728) application_window

0x5c61,	// (0x0001f734) area_bottom_pane_ParamLimits

0x5c61,	// (0x0001f734) area_bottom_pane

0x4421,	// (0x0001def4) area_top_pane_ParamLimits

0x4421,	// (0x0001def4) area_top_pane

0x4485,	// (0x0001df58) call_video_uplink_pane_ParamLimits

0x4485,	// (0x0001df58) call_video_uplink_pane

0x44c4,	// (0x0001df97) main_pane_ParamLimits

0x44c4,	// (0x0001df97) main_pane

0xef82,	// (0x00028a55) context_pane

0x82a5,	// (0x00021d78) navi_pane

0x82cb,	// (0x00021d9e) popup_cale_events_window_ParamLimits

0x82cb,	// (0x00021d9e) popup_cale_events_window

0xef95,	// (0x00028a68) popup_mup_playback_window

0x82e3,	// (0x00021db6) signal_pane

0xd100,	// (0x00026bd3) main_browser_pane

0xd318,	// (0x00026deb) main_burst_pane

0x4a42,	// (0x0001e515) main_calc_pane

0xef76,	// (0x00028a49) main_cale_day_pane

0x5e68,	// (0x0001f93b) main_cale_month_pane

0xef76,	// (0x00028a49) main_cale_week_pane

0xd318,	// (0x00026deb) main_call_pane

0xcd8e,	// (0x00026861) main_call_poc_pane

0xd318,	// (0x00026deb) main_camera_pane

0xd318,	// (0x00026deb) main_chi_dic_pane

0xda89,	// (0x0002755c) main_clock_pane

0xcd8e,	// (0x00026861) main_fmradio_pane

0xd318,	// (0x00026deb) main_graph_messa_pane

0xcd8e,	// (0x00026861) main_help_pane

0xd100,	// (0x00026bd3) main_im_pane

0xcfe9,	// (0x00026abc) main_image_pane_ParamLimits

0xcfe9,	// (0x00026abc) main_image_pane

0xcd8e,	// (0x00026861) main_location2_pane

0xd318,	// (0x00026deb) main_location_pane

0xcfe9,	// (0x00026abc) main_messa_pane

0xcd8e,	// (0x00026861) main_mp2_pane

0xd318,	// (0x00026deb) main_mp_pane

0xcd8e,	// (0x00026861) main_msg_pane

0xcd8e,	// (0x00026861) main_mup_eq_pane

0xcd8e,	// (0x00026861) main_mup_pane

0xd100,	// (0x00026bd3) main_notes_pane

0xcd8e,	// (0x00026861) main_pec_pane

0xcd8e,	// (0x00026861) main_phob_pane

0xcd8e,	// (0x00026861) main_pinb_pane

0xcd8e,	// (0x00026861) main_postcard_pane

0xcd8e,	// (0x00026861) main_qdial_pane

0xd318,	// (0x00026deb) main_skin_pane

0xcd8e,	// (0x00026861) main_smil2_pane

0xd318,	// (0x00026deb) main_smil_pane

0xd318,	// (0x00026deb) main_video_pane

0xd318,	// (0x00026deb) main_video_tele_pane

0xcfe9,	// (0x00026abc) main_viewer_pane_ParamLimits

0xcfe9,	// (0x00026abc) main_viewer_pane

0xd318,	// (0x00026deb) main_vorec_pane

0x4a8e,	// (0x0001e561) popup_blid_sat_info_window_ParamLimits

0x4a8e,	// (0x0001e561) popup_blid_sat_info_window

0x4aae,	// (0x0001e581) popup_dyc_status_message_window_ParamLimits

0x4aae,	// (0x0001e581) popup_dyc_status_message_window

0x4abe,	// (0x0001e591) popup_grid_large_graphic_window_ParamLimits

0x4abe,	// (0x0001e591) popup_grid_large_graphic_window

0x4b4f,	// (0x0001e622) popup_loc_request_window_ParamLimits

0x4b4f,	// (0x0001e622) popup_loc_request_window

0x4b9c,	// (0x0001e66f) popup_wml_address_window_ParamLimits

0x4b9c,	// (0x0001e66f) popup_wml_address_window

0x8187,	// (0x00021c5a) call_muted_g1

0x7e7a,	// (0x0002194d) popup_call_audio_conf_window_ParamLimits

0x7e7a,	// (0x0002194d) popup_call_audio_conf_window

0x8197,	// (0x00021c6a) popup_call_audio_first_window_ParamLimits

0x8197,	// (0x00021c6a) popup_call_audio_first_window

0x81d7,	// (0x00021caa) popup_call_audio_in_window_ParamLimits

0x81d7,	// (0x00021caa) popup_call_audio_in_window

0x81fb,	// (0x00021cce) popup_call_audio_out_window_ParamLimits

0x81fb,	// (0x00021cce) popup_call_audio_out_window

0x821d,	// (0x00021cf0) popup_call_audio_second_window_ParamLimits

0x821d,	// (0x00021cf0) popup_call_audio_second_window

0x824d,	// (0x00021d20) popup_call_audio_wait_window_ParamLimits

0x824d,	// (0x00021d20) popup_call_audio_wait_window

0x826e,	// (0x00021d41) popup_number_entry_window_ParamLimits

0x826e,	// (0x00021d41) popup_number_entry_window

0xc96d,	// (0x00026440) bg_popup_call_pane_cp05_ParamLimits

0xc96d,	// (0x00026440) bg_popup_call_pane_cp05

0xc98d,	// (0x00026460) popup_number_entry_window_t1

0xc9a0,	// (0x00026473) popup_number_entry_window_t2

0xc9b2,	// (0x00026485) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00028af0) popup_number_entry_window_t

0xc9c4,	// (0x00026497) text_title_cp2

0xc9d7,	// (0x000264aa) bg_popup_call_pane_cp_ParamLimits

0xc9d7,	// (0x000264aa) bg_popup_call_pane_cp

0xc9e5,	// (0x000264b8) call_thumbnail_pane

0xc9ed,	// (0x000264c0) popup_call_audio_in_window_g1_ParamLimits

0xc9ed,	// (0x000264c0) popup_call_audio_in_window_g1

0xc9f9,	// (0x000264cc) popup_call_audio_in_window_g2_ParamLimits

0xc9f9,	// (0x000264cc) popup_call_audio_in_window_g2

0xca05,	// (0x000264d8) popup_call_audio_in_window_g3_ParamLimits

0xca05,	// (0x000264d8) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00028af9) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00028af9) popup_call_audio_in_window_g

0xca11,	// (0x000264e4) popup_call_audio_in_window_t1_ParamLimits

0xca11,	// (0x000264e4) popup_call_audio_in_window_t1

0xca2d,	// (0x00026500) popup_call_audio_in_window_t2_ParamLimits

0xca2d,	// (0x00026500) popup_call_audio_in_window_t2

0xca49,	// (0x0002651c) popup_call_audio_in_window_t3_ParamLimits

0xca49,	// (0x0002651c) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00028b00) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00028b00) popup_call_audio_in_window_t

0xc9d7,	// (0x000264aa) bg_popup_call_pane_cp01_ParamLimits

0xc9d7,	// (0x000264aa) bg_popup_call_pane_cp01

0xc9e5,	// (0x000264b8) call_thumbnail_pane_cp02

0xca5c,	// (0x0002652f) call_type_pane_cp022

0xca64,	// (0x00026537) popup_call_audio_out_window_g1_ParamLimits

0xca64,	// (0x00026537) popup_call_audio_out_window_g1

0xca76,	// (0x00026549) popup_call_audio_out_window_g2_ParamLimits

0xca76,	// (0x00026549) popup_call_audio_out_window_g2

0xca82,	// (0x00026555) popup_call_audio_out_window_g3_ParamLimits

0xca82,	// (0x00026555) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00028b07) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00028b07) popup_call_audio_out_window_g

0xca94,	// (0x00026567) popup_call_audio_out_window_t1_ParamLimits

0xca94,	// (0x00026567) popup_call_audio_out_window_t1

0xcaac,	// (0x0002657f) popup_call_audio_out_window_t2_ParamLimits

0xcaac,	// (0x0002657f) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00028b0e) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00028b0e) popup_call_audio_out_window_t

0xcac1,	// (0x00026594) bg_popup_call_pane_ParamLimits

0xcac1,	// (0x00026594) bg_popup_call_pane

0x5cdb,	// (0x0001f7ae) call_thumbnail_pane_cp_ParamLimits

0x5cdb,	// (0x0001f7ae) call_thumbnail_pane_cp

0xcb53,	// (0x00026626) call_type_pane_cp01_ParamLimits

0xcb53,	// (0x00026626) call_type_pane_cp01

0xcb97,	// (0x0002666a) popup_call_audio_first_window_g1_ParamLimits

0xcb97,	// (0x0002666a) popup_call_audio_first_window_g1

0xcbe3,	// (0x000266b6) popup_call_audio_first_window_g2_ParamLimits

0xcbe3,	// (0x000266b6) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00028b13) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00028b13) popup_call_audio_first_window_g

0xcc27,	// (0x000266fa) popup_call_audio_first_window_t1_ParamLimits

0xcc27,	// (0x000266fa) popup_call_audio_first_window_t1

0xccd3,	// (0x000267a6) popup_call_audio_first_window_t4_ParamLimits

0xccd3,	// (0x000267a6) popup_call_audio_first_window_t4

0xcd5f,	// (0x00026832) popup_call_audio_first_window_t5_ParamLimits

0xcd5f,	// (0x00026832) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00028b18) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00028b18) popup_call_audio_first_window_t

0xcd8e,	// (0x00026861) bg_popup_call_pane_cp02

0xcd98,	// (0x0002686b) call_type_pane_cp023

0xcda0,	// (0x00026873) popup_call_audio_wait_window_g1

0xcda8,	// (0x0002687b) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00028b1f) popup_call_audio_wait_window_g

0xcdb0,	// (0x00026883) popup_call_audio_wait_window_t3

0xcdbe,	// (0x00026891) bg_popup_call_pane_cp03_ParamLimits

0xcdbe,	// (0x00026891) bg_popup_call_pane_cp03

0xce1e,	// (0x000268f1) call_thumbnail_pane_cp011_ParamLimits

0xce1e,	// (0x000268f1) call_thumbnail_pane_cp011

0xce2a,	// (0x000268fd) call_type_pane_cp034_ParamLimits

0xce2a,	// (0x000268fd) call_type_pane_cp034

0xce66,	// (0x00026939) popup_call_audio_second_window_g1_ParamLimits

0xce66,	// (0x00026939) popup_call_audio_second_window_g1

0xcea2,	// (0x00026975) popup_call_audio_second_window_g2_ParamLimits

0xcea2,	// (0x00026975) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00028b24) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00028b24) popup_call_audio_second_window_g

0xcede,	// (0x000269b1) popup_call_audio_second_window_t1_ParamLimits

0xcede,	// (0x000269b1) popup_call_audio_second_window_t1

0xcf5f,	// (0x00026a32) popup_call_audio_second_window_t2_ParamLimits

0xcf5f,	// (0x00026a32) popup_call_audio_second_window_t2

0xcf95,	// (0x00026a68) popup_call_audio_second_window_t3_ParamLimits

0xcf95,	// (0x00026a68) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00028b29) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00028b29) popup_call_audio_second_window_t

0xcd8e,	// (0x00026861) bg_popup_call_pane_cp04

0xcfcb,	// (0x00026a9e) list_conf_pane

0xcfd3,	// (0x00026aa6) popup_call_audio_conf_window_t1

0xcfe1,	// (0x00026ab4) call_thumbnail_pane_g1

0xcfe9,	// (0x00026abc) bg_pinb_pane_ParamLimits

0xcfe9,	// (0x00026abc) bg_pinb_pane

0xcff7,	// (0x00026aca) find_pinb_pane

0xcfe9,	// (0x00026abc) listscroll_pinb_pane_ParamLimits

0xcfe9,	// (0x00026abc) listscroll_pinb_pane

0xd001,	// (0x00026ad4) pinb_bg_pane_g1

0xd001,	// (0x00026ad4) pinb_bg_pane_g2

0xd001,	// (0x00026ad4) pinb_bg_pane_g3

0xd001,	// (0x00026ad4) pinb_bg_pane_g4

0xd001,	// (0x00026ad4) pinb_bg_pane_g5

0xd001,	// (0x00026ad4) pinb_bg_pane_g6

0xd001,	// (0x00026ad4) pinb_bg_pane_g7

0xd001,	// (0x00026ad4) pinb_bg_pane_g8

0xd001,	// (0x00026ad4) pinb_bg_pane_g9

0xd001,	// (0x00026ad4) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00028b30) pinb_bg_pane_g

0xc963,	// (0x00026436) grid_pinb_pane

0xc963,	// (0x00026436) list_pinb_pane

0xcb45,	// (0x00026618) scroll_pane_cp01_ParamLimits

0xcb45,	// (0x00026618) scroll_pane_cp01

0xd00b,	// (0x00026ade) find_pinb_pane_g1_ParamLimits

0xd00b,	// (0x00026ade) find_pinb_pane_g1

0xd023,	// (0x00026af6) find_pinb_pane_t1

0xd035,	// (0x00026b08) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00028b4a) find_pinb_pane_t

0xd04a,	// (0x00026b1d) input_focus_pane_cp01_ParamLimits

0xd04a,	// (0x00026b1d) input_focus_pane_cp01

0xd056,	// (0x00026b29) cell_pinb_pane_ParamLimits

0xd056,	// (0x00026b29) cell_pinb_pane

0xd064,	// (0x00026b37) cell_pinb_pane_g1_ParamLimits

0xd064,	// (0x00026b37) cell_pinb_pane_g1

0xd072,	// (0x00026b45) cell_pinb_pane_g2_ParamLimits

0xd072,	// (0x00026b45) cell_pinb_pane_g2

0xd072,	// (0x00026b45) cell_pinb_pane_g3_ParamLimits

0xd072,	// (0x00026b45) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00028b4f) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00028b4f) cell_pinb_pane_g

0xcd8e,	// (0x00026861) grid_highlight_pane_cp01

0xd056,	// (0x00026b29) list_pinb_item_pane_ParamLimits

0xd056,	// (0x00026b29) list_pinb_item_pane

0xc963,	// (0x00026436) list_highlight_pane_cp02

0xd080,	// (0x00026b53) list_pinb_item_pane_g1_ParamLimits

0xd080,	// (0x00026b53) list_pinb_item_pane_g1

0xd072,	// (0x00026b45) list_pinb_item_pane_g2_ParamLimits

0xd072,	// (0x00026b45) list_pinb_item_pane_g2

0xd064,	// (0x00026b37) list_pinb_item_pane_g3_ParamLimits

0xd064,	// (0x00026b37) list_pinb_item_pane_g3

0xd072,	// (0x00026b45) list_pinb_item_pane_g4_ParamLimits

0xd072,	// (0x00026b45) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00028b56) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00028b56) list_pinb_item_pane_g

0xd08e,	// (0x00026b61) list_pinb_item_pane_t1_ParamLimits

0xd08e,	// (0x00026b61) list_pinb_item_pane_t1

0x46b1,	// (0x0001e184) calc_display_pane

0x46cf,	// (0x0001e1a2) calc_paper_pane

0x46eb,	// (0x0001e1be) grid_calc_pane

0xc963,	// (0x00026436) bg_list_pane_cp01

0xd0a2,	// (0x00026b75) clock_g1

0xd0a2,	// (0x00026b75) clock_g2

0x0001,

0xf08c,	// (0x00028b5f) clock_g

0xd0ac,	// (0x00026b7f) clock_t1_ParamLimits

0xd0ac,	// (0x00026b7f) clock_t1

0xd0c0,	// (0x00026b93) clock_t2_ParamLimits

0xd0c0,	// (0x00026b93) clock_t2

0xd0c0,	// (0x00026b93) clock_t3_ParamLimits

0xd0c0,	// (0x00026b93) clock_t3

0xd0c0,	// (0x00026b93) clock_t4_ParamLimits

0xd0c0,	// (0x00026b93) clock_t4

0xd0ac,	// (0x00026b7f) clock_t5_ParamLimits

0xd0ac,	// (0x00026b7f) clock_t5

0xd0c0,	// (0x00026b93) clock_t6_ParamLimits

0xd0c0,	// (0x00026b93) clock_t6

0xd0c0,	// (0x00026b93) clock_t7_ParamLimits

0xd0c0,	// (0x00026b93) clock_t7

0xd0c0,	// (0x00026b93) clock_t8_ParamLimits

0xd0c0,	// (0x00026b93) clock_t8

0xd0c0,	// (0x00026b93) clock_t9_ParamLimits

0xd0c0,	// (0x00026b93) clock_t9

0x0008,

0xf091,	// (0x00028b64) clock_t_ParamLimits

0xf091,	// (0x00028b64) clock_t

0xc963,	// (0x00026436) popup_clock_analogue_window_cp02

0xc963,	// (0x00026436) popup_clock_digital_window_cp01

0xcd8e,	// (0x00026861) listscroll_help_pane

0xcd8e,	// (0x00026861) phob_pre_status_pane

0xd0d4,	// (0x00026ba7) grid_qdial_pane

0xcfe9,	// (0x00026abc) listscroll_mce_pane

0xcfe9,	// (0x00026abc) bg_notes_pane

0xd0de,	// (0x00026bb1) list_notes_pane

0x5cff,	// (0x0001f7d2) scroll_pane_cp06

0xd0ec,	// (0x00026bbf) bg_calc_paper_pane

0x4717,	// (0x0001e1ea) list_calc_pane

0xd100,	// (0x00026bd3) bg_calc_display_pane

0x4731,	// (0x0001e204) calc_display_pane_t1

0x4746,	// (0x0001e219) calc_display_pane_t2

0x475b,	// (0x0001e22e) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00028b77) calc_display_pane_t

0x476d,	// (0x0001e240) cell_calc_pane_ParamLimits

0x476d,	// (0x0001e240) cell_calc_pane

0xd10c,	// (0x00026bdf) bg_calc_paper_pane_g1

0xd118,	// (0x00026beb) bg_calc_paper_pane_g2

0xd124,	// (0x00026bf7) bg_calc_paper_pane_g3

0xd130,	// (0x00026c03) bg_calc_paper_pane_g4

0xd13c,	// (0x00026c0f) bg_calc_paper_pane_g5

0x5d0e,	// (0x0001f7e1) bg_calc_paper_pane_g6

0x5d1f,	// (0x0001f7f2) bg_calc_paper_pane_g7

0x5d30,	// (0x0001f803) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00028b7e) bg_calc_paper_pane_g

0x5d41,	// (0x0001f814) calc_bg_paper_pane_g9

0x5d52,	// (0x0001f825) list_calc_item_pane_ParamLimits

0x5d52,	// (0x0001f825) list_calc_item_pane

0xd148,	// (0x00026c1b) list_calc_item_pane_g1

0x479a,	// (0x0001e26d) list_calc_item_pane_t1_ParamLimits

0x479a,	// (0x0001e26d) list_calc_item_pane_t1

0x47ac,	// (0x0001e27f) list_calc_item_pane_t2_ParamLimits

0x47ac,	// (0x0001e27f) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00028b8f) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00028b8f) list_calc_item_pane_t

0xd001,	// (0x00026ad4) cell_calc_pane_g1

0xd155,	// (0x00026c28) grid_highlight_pane_cp02

0x5d7e,	// (0x0001f851) bg_calc_display_pane_g1

0x47dc,	// (0x0001e2af) bg_calc_display_pane_g2

0x5d87,	// (0x0001f85a) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00028b99) bg_calc_display_pane_g

0x47e6,	// (0x0001e2b9) cell_qdial_pane_ParamLimits

0x47e6,	// (0x0001e2b9) cell_qdial_pane

0x5d90,	// (0x0001f863) cell_qdial_pane_g1_ParamLimits

0x5d90,	// (0x0001f863) cell_qdial_pane_g1

0x5d9d,	// (0x0001f870) cell_qdial_pane_g2_ParamLimits

0x5d9d,	// (0x0001f870) cell_qdial_pane_g2

0xd177,	// (0x00026c4a) cell_qdial_pane_g3_ParamLimits

0xd177,	// (0x00026c4a) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00028ba0) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00028ba0) cell_qdial_pane_g

0x5dbb,	// (0x0001f88e) cell_qdial_pane_t1_ParamLimits

0x5dbb,	// (0x0001f88e) cell_qdial_pane_t1

0x5dd3,	// (0x0001f8a6) cell_qdial_pane_t2_ParamLimits

0x5dd3,	// (0x0001f8a6) cell_qdial_pane_t2

0x5de6,	// (0x0001f8b9) cell_qdial_pane_t3_ParamLimits

0x5de6,	// (0x0001f8b9) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00028ba9) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00028ba9) cell_qdial_pane_t

0xcd8e,	// (0x00026861) grid_highlight_pane_cp04

0xd183,	// (0x00026c56) thumbnail_qdial_pane_ParamLimits

0xd183,	// (0x00026c56) thumbnail_qdial_pane

0xd1df,	// (0x00026cb2) list_help_pane

0xd1e8,	// (0x00026cbb) scroll_pane_cp02

0x5df9,	// (0x0001f8cc) help_list_pane_t1_ParamLimits

0x5df9,	// (0x0001f8cc) help_list_pane_t1

0xd1f1,	// (0x00026cc4) bg_notes_pane_g2

0xd1f9,	// (0x00026ccc) bg_notes_pane_g3

0xd201,	// (0x00026cd4) notes_bg_pane_g1

0xd209,	// (0x00026cdc) notes_bg_pane_g4

0xd211,	// (0x00026ce4) notes_bg_pane_g5

0xd219,	// (0x00026cec) notes_bg_pane_g6

0xd221,	// (0x00026cf4) notes_bg_pane_g7

0xd229,	// (0x00026cfc) notes_bg_pane_g8

0xd231,	// (0x00026d04) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00028bc7) notes_bg_pane_g

0x5e2f,	// (0x0001f902) list_notes_text_pane_ParamLimits

0x5e2f,	// (0x0001f902) list_notes_text_pane

0xd239,	// (0x00026d0c) list_notes_text_pane_g1

0x5e5a,	// (0x0001f92d) list_notes_text_pane_t1

0x5e68,	// (0x0001f93b) listscroll_cale_week_pane

0x5e8d,	// (0x0001f960) bg_cale_heading_pane

0xd27a,	// (0x00026d4d) bg_cale_pane_cp01

0x5ead,	// (0x0001f980) cale_week_corner_pane

0x5ec7,	// (0x0001f99a) cale_week_day_heading_pane

0x5ee7,	// (0x0001f9ba) cale_week_scroll_pane_g1

0x5f02,	// (0x0001f9d5) cale_week_scroll_pane_g2

0x5f15,	// (0x0001f9e8) cale_week_scroll_pane_g3

0x5f28,	// (0x0001f9fb) cale_week_scroll_pane_g4

0x5f3b,	// (0x0001fa0e) cale_week_scroll_pane_g5

0x5f4e,	// (0x0001fa21) cale_week_scroll_pane_g6

0x5f61,	// (0x0001fa34) cale_week_scroll_pane_g7

0x5f76,	// (0x0001fa49) cale_week_scroll_pane_g8

0x5f8b,	// (0x0001fa5e) cale_week_scroll_pane_g9

0x5f9e,	// (0x0001fa71) cale_week_scroll_pane_g10

0x5fb1,	// (0x0001fa84) cale_week_scroll_pane_g11

0x5fc4,	// (0x0001fa97) cale_week_scroll_pane_g12

0x5fdb,	// (0x0001faae) cale_week_scroll_pane_g13

0x5ff6,	// (0x0001fac9) cale_week_scroll_pane_g14

0x6011,	// (0x0001fae4) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00028bd6) cale_week_scroll_pane_g

0x6041,	// (0x0001fb14) cale_week_time_pane

0x6056,	// (0x0001fb29) grid_cale_week_pane

0xd2a9,	// (0x00026d7c) scroll_pane_cp08

0x6075,	// (0x0001fb48) cell_cale_week_pane_ParamLimits

0x6075,	// (0x0001fb48) cell_cale_week_pane

0x60d7,	// (0x0001fbaa) cale_week_day_heading_pane_t1

0x60f2,	// (0x0001fbc5) cale_week_day_heading_pane_t2

0x610d,	// (0x0001fbe0) cale_week_day_heading_pane_t3

0x6128,	// (0x0001fbfb) cale_week_day_heading_pane_t4

0x6143,	// (0x0001fc16) cale_week_day_heading_pane_t5

0x615e,	// (0x0001fc31) cale_week_day_heading_pane_t6

0x6179,	// (0x0001fc4c) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00028bf7) cale_week_day_heading_pane_t

0xd2c6,	// (0x00026d99) bg_cale_side_pane

0x4803,	// (0x0001e2d6) cale_week_time_pane_t1

0x481d,	// (0x0001e2f0) cale_week_time_pane_t2

0x4837,	// (0x0001e30a) cale_week_time_pane_t3

0x4851,	// (0x0001e324) cale_week_time_pane_t4

0x486b,	// (0x0001e33e) cale_week_time_pane_t5

0x4885,	// (0x0001e358) cale_week_time_pane_t6

0x48a3,	// (0x0001e376) cale_week_time_pane_t7

0x48c5,	// (0x0001e398) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00028c06) cale_week_time_pane_t

0x6194,	// (0x0001fc67) cell_cale_week_pane_g2

0x61b8,	// (0x0001fc8b) cell_cale_week_pane_g3_ParamLimits

0x61b8,	// (0x0001fc8b) cell_cale_week_pane_g3

0xd2d4,	// (0x00026da7) grid_highlight_pane_cp07

0xd2dc,	// (0x00026daf) listscroll_gms_pane

0xd2e6,	// (0x00026db9) grid_gms_pane

0xd2ef,	// (0x00026dc2) listscroll_gms_pane_g1

0xd2f7,	// (0x00026dca) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00028c17) listscroll_gms_pane_g

0x61d0,	// (0x0001fca3) scroll_pane_cp010

0x61db,	// (0x0001fcae) cell_gms_pane_ParamLimits

0x61db,	// (0x0001fcae) cell_gms_pane

0x61ee,	// (0x0001fcc1) cell_gms_pane_g1

0xd2ff,	// (0x00026dd2) cell_gms_pane_g2

0xd239,	// (0x00026d0c) cell_gms_pane_g3

0xd307,	// (0x00026dda) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00028c1c) cell_gms_pane_g

0xd310,	// (0x00026de3) grid_highlight_pane_cp09

0x810b,	// (0x00021bde) phob_pre_status_pane_g1

0x8113,	// (0x00021be6) phob_pre_status_pane_g2

0x811b,	// (0x00021bee) phob_pre_status_pane_g3

0x8123,	// (0x00021bf6) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x00028fc2) phob_pre_status_pane_g

0x8133,	// (0x00021c06) phob_pre_status_pane_t1

0x8143,	// (0x00021c16) phob_pre_status_pane_t2

0x8153,	// (0x00021c26) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x00028fcd) phob_pre_status_pane_t

0xd318,	// (0x00026deb) bg_list_pane_cp05

0x61fe,	// (0x0001fcd1) grid_vorec_pane

0x6208,	// (0x0001fcdb) vorec_t1

0x6216,	// (0x0001fce9) vorec_t2

0x6224,	// (0x0001fcf7) vorec_t3

0x6232,	// (0x0001fd05) vorec_t4

0x5c24,	// (0x0001f6f7) vorec_t5

0x5c32,	// (0x0001f705) vorec_t6

0x0004,

0xf152,	// (0x00028c25) vorec_t

0x5c40,	// (0x0001f713) wait_bar_pane_cp01

0x624e,	// (0x0001fd21) cell_vorec_pane_ParamLimits

0x624e,	// (0x0001fd21) cell_vorec_pane

0x48e9,	// (0x0001e3bc) cell_vorec_pane_g1

0xcd8e,	// (0x00026861) grid_highlight_pane_cp05

0xd056,	// (0x00026b29) cams_zoom_pane

0xd056,	// (0x00026b29) image_vga_pane

0xd072,	// (0x00026b45) main_camera_pane_g1

0xd072,	// (0x00026b45) main_camera_pane_g2

0xd072,	// (0x00026b45) main_camera_pane_g3

0xd072,	// (0x00026b45) main_camera_pane_g4

0xd072,	// (0x00026b45) main_camera_pane_g5

0xd072,	// (0x00026b45) main_camera_pane_g6

0xd072,	// (0x00026b45) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00028c30) main_camera_pane_g

0xd0c0,	// (0x00026b93) main_camera_pane_t1

0xd0c0,	// (0x00026b93) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00028c41) main_camera_pane_t

0x6261,	// (0x0001fd34) cams_zoom_pane_cp_ParamLimits

0x6261,	// (0x0001fd34) cams_zoom_pane_cp

0x628f,	// (0x0001fd62) image_cif_pane_ParamLimits

0x628f,	// (0x0001fd62) image_cif_pane

0xc963,	// (0x00026436) image_subqcif_pane

0x629d,	// (0x0001fd70) main_video_pane_g1_ParamLimits

0x629d,	// (0x0001fd70) main_video_pane_g1

0x62c5,	// (0x0001fd98) main_video_pane_g2_ParamLimits

0x62c5,	// (0x0001fd98) main_video_pane_g2

0x62f8,	// (0x0001fdcb) main_video_pane_g3_ParamLimits

0x62f8,	// (0x0001fdcb) main_video_pane_g3

0x62f8,	// (0x0001fdcb) main_video_pane_g4_ParamLimits

0x62f8,	// (0x0001fdcb) main_video_pane_g4

0x6326,	// (0x0001fdf9) main_video_pane_g5_ParamLimits

0x6326,	// (0x0001fdf9) main_video_pane_g5

0xd320,	// (0x00026df3) main_video_pane_g6_ParamLimits

0xd320,	// (0x00026df3) main_video_pane_g6

0x0006,

0xf173,	// (0x00028c46) main_video_pane_g_ParamLimits

0xf173,	// (0x00028c46) main_video_pane_g

0x6342,	// (0x0001fe15) main_video_pane_t1_ParamLimits

0x6342,	// (0x0001fe15) main_video_pane_t1

0xd0a2,	// (0x00026b75) cams_zoom_pane_g1

0xd0a2,	// (0x00026b75) cams_zoom_pane_g2

0xd0a2,	// (0x00026b75) cams_zoom_pane_g3

0xd0a2,	// (0x00026b75) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00028c55) cams_zoom_pane_g

0xd056,	// (0x00026b29) grid_cams_pane

0xd056,	// (0x00026b29) linegrid_cams_pane

0x637c,	// (0x0001fe4f) cell_cams_pane_ParamLimits

0x637c,	// (0x0001fe4f) cell_cams_pane

0xc963,	// (0x00026436) cams_burst_image_pane

0xd0a2,	// (0x00026b75) cell_cams_pane_g1

0xc963,	// (0x00026436) grid_highlight_pane_cp03

0xd001,	// (0x00026ad4) mp_bg_pane_g1

0xc963,	// (0x00026436) bg_list_pane_cp03

0xc963,	// (0x00026436) bg_mp_pane

0xc963,	// (0x00026436) grid_mp_pane

0xd0a2,	// (0x00026b75) media_player_g1

0xd812,	// (0x000272e5) media_player_t1

0xd812,	// (0x000272e5) media_player_t2

0xd812,	// (0x000272e5) media_player_t3

0xd812,	// (0x000272e5) media_player_t4

0xd812,	// (0x000272e5) media_player_t5

0xd812,	// (0x000272e5) media_player_t6

0xd812,	// (0x000272e5) media_player_t7

0x0006,

0xf4d9,	// (0x00028fac) media_player_t

0xc963,	// (0x00026436) wait_bar_pane_cp02

0xf4be,	// (0x00028f91) main_usb_pane_t

0xda89,	// (0x0002755c) cell_mp_pane

0xd001,	// (0x00026ad4) cell_mp_pane_g1

0xcd8e,	// (0x00026861) grid_highlight_pane_cp06

0xd33a,	// (0x00026e0d) grid_skin_colour_pane

0xd342,	// (0x00026e15) list_highlight_pane_cp03

0x6391,	// (0x0001fe64) skin_g1

0xd34a,	// (0x00026e1d) skin_t1

0xd359,	// (0x00026e2c) skin_t2

0x0001,

0xf1b0,	// (0x00028c83) skin_t

0x639b,	// (0x0001fe6e) cell_skin_colour_pane_ParamLimits

0x639b,	// (0x0001fe6e) cell_skin_colour_pane

0xd367,	// (0x00026e3a) cell_skin_colour_pane_g1

0x641f,	// (0x0001fef2) call_video_g1_ParamLimits

0x641f,	// (0x0001fef2) call_video_g1

0x642f,	// (0x0001ff02) call_video_g2_ParamLimits

0x642f,	// (0x0001ff02) call_video_g2

0x0001,

0xf1b5,	// (0x00028c88) call_video_g_ParamLimits

0xf1b5,	// (0x00028c88) call_video_g

0x6489,	// (0x0001ff5c) call_video_uplink_pane_cp1_ParamLimits

0x6489,	// (0x0001ff5c) call_video_uplink_pane_cp1

0xd379,	// (0x00026e4c) call_video_uplink_pane_cp2

0x6555,	// (0x00020028) video_down_crop_pane_ParamLimits

0x6555,	// (0x00020028) video_down_crop_pane

0x6653,	// (0x00020126) video_down_pane_ParamLimits

0x6653,	// (0x00020126) video_down_pane

0xd381,	// (0x00026e54) video_down_subqcif_pane_ParamLimits

0xd381,	// (0x00026e54) video_down_subqcif_pane

0xd399,	// (0x00026e6c) video_down_subqcif_pane_cp_ParamLimits

0xd399,	// (0x00026e6c) video_down_subqcif_pane_cp

0xd3c8,	// (0x00026e9b) im_reading_pane_ParamLimits

0xd3c8,	// (0x00026e9b) im_reading_pane

0x6773,	// (0x00020246) im_writing_pane_ParamLimits

0x6773,	// (0x00020246) im_writing_pane

0x6791,	// (0x00020264) im_reading_pane_t1

0xd3e2,	// (0x00026eb5) list_im_pane

0xd3f3,	// (0x00026ec6) scroll_pane_cp07

0x67e5,	// (0x000202b8) im_writing_pane_t1_ParamLimits

0x67e5,	// (0x000202b8) im_writing_pane_t1

0xd40c,	// (0x00026edf) im_writing_pane_t2_ParamLimits

0xd40c,	// (0x00026edf) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00028c92) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00028c92) im_writing_pane_t

0xcd8e,	// (0x00026861) input_focus_pane_cp04

0xcd8e,	// (0x00026861) input_focus_pane_cp05

0x67fa,	// (0x000202cd) list_im_single_pane_ParamLimits

0x67fa,	// (0x000202cd) list_im_single_pane

0x681e,	// (0x000202f1) list_single_im_pane_t1

0xd318,	// (0x00026deb) blid_accuracy_pane

0xd318,	// (0x00026deb) blid_compass_pane

0xef2e,	// (0x00028a01) main_location_t1

0xef2e,	// (0x00028a01) main_location_t2

0xef2e,	// (0x00028a01) main_location_t3

0x0002,

0xf4e8,	// (0x00028fbb) main_location_t

0xcd8e,	// (0x00026861) aid_levels_location

0xd001,	// (0x00026ad4) blid_accuracy_pane_g1

0xd001,	// (0x00026ad4) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00028ce6) blid_accuracy_pane_g

0xd454,	// (0x00026f27) wml_content_pane

0xd492,	// (0x00026f65) wml_button_pane_ParamLimits

0xd492,	// (0x00026f65) wml_button_pane

0x682d,	// (0x00020300) wml_list_single_large_pane_ParamLimits

0x682d,	// (0x00020300) wml_list_single_large_pane

0x6857,	// (0x0002032a) wml_list_single_medium_pane_ParamLimits

0x6857,	// (0x0002032a) wml_list_single_medium_pane

0x6888,	// (0x0002035b) wml_list_single_small_pane_ParamLimits

0x6888,	// (0x0002035b) wml_list_single_small_pane

0xd4a6,	// (0x00026f79) wml_selection_box_pane_ParamLimits

0xd4a6,	// (0x00026f79) wml_selection_box_pane

0xd4b9,	// (0x00026f8c) wml_list_single_pane_t1

0xd4c8,	// (0x00026f9b) wml_list_single_medium_pane_t1

0xd4d7,	// (0x00026faa) wml_list_single_large_pane_t1

0xd4e6,	// (0x00026fb9) input_focus_pane_cp02_ParamLimits

0xd4e6,	// (0x00026fb9) input_focus_pane_cp02

0xd4f9,	// (0x00026fcc) wml_selection_box_pane_g1

0xd502,	// (0x00026fd5) wml_selection_box_pane_t1_ParamLimits

0xd502,	// (0x00026fd5) wml_selection_box_pane_t1

0xcfe9,	// (0x00026abc) bg_wml_button_pane_ParamLimits

0xcfe9,	// (0x00026abc) bg_wml_button_pane

0xd51a,	// (0x00026fed) wml_button_pane_g1

0xd522,	// (0x00026ff5) wml_button_pane_t1

0xd51a,	// (0x00026fed) wml_button_bg_pane_g1

0xd532,	// (0x00027005) wml_button_bg_pane_g2

0xd53a,	// (0x0002700d) wml_button_bg_pane_g3

0xd542,	// (0x00027015) wml_button_bg_pane_g4

0xd54a,	// (0x0002701d) wml_button_bg_pane_g5

0xd552,	// (0x00027025) wml_button_bg_pane_g6

0xd55a,	// (0x0002702d) wml_button_bg_pane_g7

0xd562,	// (0x00027035) wml_button_bg_pane_g8

0xd56a,	// (0x0002703d) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00028c97) wml_button_bg_pane_g

0x68c2,	// (0x00020395) bg_list_pane_cp02

0xd572,	// (0x00027045) mce_header_pane_ParamLimits

0xd572,	// (0x00027045) mce_header_pane

0xd588,	// (0x0002705b) mce_icon_pane

0xd588,	// (0x0002705b) mce_image_pane

0xd591,	// (0x00027064) mce_text_pane_ParamLimits

0xd591,	// (0x00027064) mce_text_pane

0x68cc,	// (0x0002039f) scroll_pane_cp03

0xd48a,	// (0x00026f5d) scroll_pane_cp04

0xd5a4,	// (0x00027077) scroll_pane_cp05_ParamLimits

0xd5a4,	// (0x00027077) scroll_pane_cp05

0x68d6,	// (0x000203a9) mce_header_field_pane_ParamLimits

0x68d6,	// (0x000203a9) mce_header_field_pane

0x68f6,	// (0x000203c9) mce_header_field_pane_2_ParamLimits

0x68f6,	// (0x000203c9) mce_header_field_pane_2

0x690c,	// (0x000203df) mce_header_field_pane_3

0x6914,	// (0x000203e7) list_single_mce_message_pane_ParamLimits

0x6914,	// (0x000203e7) list_single_mce_message_pane

0x693f,	// (0x00020412) list_single_mce_smart_pane_ParamLimits

0x693f,	// (0x00020412) list_single_mce_smart_pane

0xd5b0,	// (0x00027083) input_focus_pane_cp03

0xd5b9,	// (0x0002708c) list_header_data_pane

0x6975,	// (0x00020448) mce_header_field_pane_t1

0x6983,	// (0x00020456) list_single_mce_header_pane_ParamLimits

0x6983,	// (0x00020456) list_single_mce_header_pane

0xd5c1,	// (0x00027094) list_single_mce_header_pane_t1

0xd5d0,	// (0x000270a3) list_single_mce_message_pane_g1

0xd5d8,	// (0x000270ab) list_single_mce_message_pane_t1

0x69d5,	// (0x000204a8) bg_cale_heading_pane_cp01_ParamLimits

0x69d5,	// (0x000204a8) bg_cale_heading_pane_cp01

0xd5e6,	// (0x000270b9) bg_cale_pane_cp02_ParamLimits

0xd5e6,	// (0x000270b9) bg_cale_pane_cp02

0x6a23,	// (0x000204f6) cale_month_corner_pane

0x6a42,	// (0x00020515) cale_month_day_heading_pane_ParamLimits

0x6a42,	// (0x00020515) cale_month_day_heading_pane

0x6aa8,	// (0x0002057b) cale_month_pane_g1_ParamLimits

0x6aa8,	// (0x0002057b) cale_month_pane_g1

0x6aeb,	// (0x000205be) cale_month_pane_g2_ParamLimits

0x6aeb,	// (0x000205be) cale_month_pane_g2

0x6b23,	// (0x000205f6) cale_month_pane_g3_ParamLimits

0x6b23,	// (0x000205f6) cale_month_pane_g3

0x6b6f,	// (0x00020642) cale_month_pane_g4_ParamLimits

0x6b6f,	// (0x00020642) cale_month_pane_g4

0x6bbb,	// (0x0002068e) cale_month_pane_g5_ParamLimits

0x6bbb,	// (0x0002068e) cale_month_pane_g5

0x6c07,	// (0x000206da) cale_month_pane_g6_ParamLimits

0x6c07,	// (0x000206da) cale_month_pane_g6

0x6c53,	// (0x00020726) cale_month_pane_g7_ParamLimits

0x6c53,	// (0x00020726) cale_month_pane_g7

0x6cb7,	// (0x0002078a) cale_month_pane_g8_ParamLimits

0x6cb7,	// (0x0002078a) cale_month_pane_g8

0x6d1b,	// (0x000207ee) cale_month_pane_g9_ParamLimits

0x6d1b,	// (0x000207ee) cale_month_pane_g9

0x6d79,	// (0x0002084c) cale_month_pane_g10_ParamLimits

0x6d79,	// (0x0002084c) cale_month_pane_g10

0x6dd5,	// (0x000208a8) cale_month_pane_g11_ParamLimits

0x6dd5,	// (0x000208a8) cale_month_pane_g11

0x6e29,	// (0x000208fc) cale_month_pane_g12_ParamLimits

0x6e29,	// (0x000208fc) cale_month_pane_g12

0x6e7f,	// (0x00020952) cale_month_pane_g13_ParamLimits

0x6e7f,	// (0x00020952) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00028caa) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00028caa) cale_month_pane_g

0x6ed5,	// (0x000209a8) cale_month_week_pane

0x6ef9,	// (0x000209cc) grid_cale_month_pane_ParamLimits

0x6ef9,	// (0x000209cc) grid_cale_month_pane

0x6f52,	// (0x00020a25) cale_month_day_heading_pane_t1

0x6fd8,	// (0x00020aab) cale_month_day_heading_pane_t2

0x7051,	// (0x00020b24) cale_month_day_heading_pane_t3

0x70ca,	// (0x00020b9d) cale_month_day_heading_pane_t4

0x7143,	// (0x00020c16) cale_month_day_heading_pane_t5

0x71bc,	// (0x00020c8f) cale_month_day_heading_pane_t6

0x7235,	// (0x00020d08) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00028cc5) cale_month_day_heading_pane_t

0xd2c6,	// (0x00026d99) bg_cale_side_pane_cp01

0x72c6,	// (0x00020d99) cale_month_week_pane_t1

0x72df,	// (0x00020db2) cale_month_week_pane_t2

0x72f8,	// (0x00020dcb) cale_month_week_pane_t3

0x7311,	// (0x00020de4) cale_month_week_pane_t4

0x732a,	// (0x00020dfd) cale_month_week_pane_t5

0x734b,	// (0x00020e1e) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00028cd4) cale_month_week_pane_t

0x736c,	// (0x00020e3f) cell_cale_month_pane_ParamLimits

0x736c,	// (0x00020e3f) cell_cale_month_pane

0x48f3,	// (0x0001e3c6) cell_cale_month_pane_g1

0x48ff,	// (0x0001e3d2) cell_cale_month_pane_t1_ParamLimits

0x48ff,	// (0x0001e3d2) cell_cale_month_pane_t1

0xd2d4,	// (0x00026da7) grid_highlight_pane_cp08

0xd001,	// (0x00026ad4) main_smil_g1

0x748e,	// (0x00020f61) smil_status_pane

0xd625,	// (0x000270f8) smil_text_pane

0xd231,	// (0x00026d04) bg_popup_call3_rect_pane_g8

0xd229,	// (0x00026cfc) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x00028ceb) bg_popup_call3_rect_pane_g

0xf00a,	// (0x00028add) smil_status_volume_pane_g1

0xd62f,	// (0x00027102) smil_status_pane_t1

0x4bd1,	// (0x0001e6a4) volume_smil_pane

0xd646,	// (0x00027119) list_smil_text_pane

0x74a1,	// (0x00020f74) scroll_pane_cp011

0x74ac,	// (0x00020f7f) smil_text_list_pane_t1_ParamLimits

0x74ac,	// (0x00020f7f) smil_text_list_pane_t1

0x492b,	// (0x0001e3fe) aid_volume_smil_ParamLimits

0x492b,	// (0x0001e3fe) aid_volume_smil

0xd001,	// (0x00026ad4) smil_volume_pane_g1

0xd001,	// (0x00026ad4) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00028ce6) smil_volume_pane_g

0x5e68,	// (0x0001f93b) listscroll_cale_day_pane

0xd650,	// (0x00027123) bg_cale_pane

0xd668,	// (0x0002713b) list_cale_pane

0xd68b,	// (0x0002715e) scroll_pane_cp09

0xd201,	// (0x00026cd4) cale_bg_pane_g1

0xd1f9,	// (0x00026ccc) cale_bg_pane_g2

0xd1f1,	// (0x00026cc4) cale_bg_pane_g3

0xd211,	// (0x00026ce4) cale_bg_pane_g4

0xd209,	// (0x00026cdc) cale_bg_pane_g5

0xd219,	// (0x00026cec) cale_bg_pane_g6

0xd221,	// (0x00026cf4) cale_bg_pane_g7

0xd231,	// (0x00026d04) cale_bg_pane_g8

0xd229,	// (0x00026cfc) cale_bg_pane_g9

0x0008,

0xf218,	// (0x00028ceb) cale_bg_pane_g

0x7524,	// (0x00020ff7) list_cale_time_pane_ParamLimits

0x7524,	// (0x00020ff7) list_cale_time_pane

0xd6a4,	// (0x00027177) list_cale_time_pane_g1_ParamLimits

0xd6a4,	// (0x00027177) list_cale_time_pane_g1

0xd6b0,	// (0x00027183) list_cale_time_pane_g2_ParamLimits

0xd6b0,	// (0x00027183) list_cale_time_pane_g2

0x7546,	// (0x00021019) list_cale_time_pane_g3_ParamLimits

0x7546,	// (0x00021019) list_cale_time_pane_g3

0x7554,	// (0x00021027) list_cale_time_pane_g4_ParamLimits

0x7554,	// (0x00021027) list_cale_time_pane_g4

0x7562,	// (0x00021035) list_cale_time_pane_g5_ParamLimits

0x7562,	// (0x00021035) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x00028cfe) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x00028cfe) list_cale_time_pane_g

0xd6ca,	// (0x0002719d) list_cale_time_pane_t1_ParamLimits

0xd6ca,	// (0x0002719d) list_cale_time_pane_t1

0xd6f2,	// (0x000271c5) list_cale_time_pane_t2_ParamLimits

0xd6f2,	// (0x000271c5) list_cale_time_pane_t2

0x7792,	// (0x00021265) aid_blid_cardinal_pane

0x77d4,	// (0x000212a7) compass_pane_t4

0xd71a,	// (0x000271ed) list_cale_time_pane_t4_ParamLimits

0xd71a,	// (0x000271ed) list_cale_time_pane_t4

0x77e2,	// (0x000212b5) compass_pane_t5

0x77f2,	// (0x000212c5) compass_pane_t6

0x7800,	// (0x000212d3) compass_pane_t7

0xdbce,	// (0x000276a1) navi_pane_cc_t1

0xddab,	// (0x0002787e) aid_phob_thumbnail_center_pane

0x7c55,	// (0x00021728) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x00028d0b) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x00028d0b) list_cale_time_pane_t

0xc9d7,	// (0x000264aa) bg_popup_window_pane_cp02_ParamLimits

0xc9d7,	// (0x000264aa) bg_popup_window_pane_cp02

0xd742,	// (0x00027215) heading_pane_cp01_ParamLimits

0xd742,	// (0x00027215) heading_pane_cp01

0xd74e,	// (0x00027221) loc_req_pane_ParamLimits

0xd74e,	// (0x00027221) loc_req_pane

0xd760,	// (0x00027233) loc_type_pane_ParamLimits

0xd760,	// (0x00027233) loc_type_pane

0xd772,	// (0x00027245) loc_type_pane_t1_ParamLimits

0xd772,	// (0x00027245) loc_type_pane_t1

0xd784,	// (0x00027257) loc_type_pane_t2_ParamLimits

0xd784,	// (0x00027257) loc_type_pane_t2

0xd796,	// (0x00027269) loc_type_pane_t3_ParamLimits

0xd796,	// (0x00027269) loc_type_pane_t3

0x0002,

0xf23f,	// (0x00028d12) loc_type_pane_t_ParamLimits

0xf23f,	// (0x00028d12) loc_type_pane_t

0xd7a8,	// (0x0002727b) list_loc_req_pane

0xd7b2,	// (0x00027285) scroll_pane_cp012

0x7570,	// (0x00021043) list_single_loc_request_popup_menu_pane_ParamLimits

0x7570,	// (0x00021043) list_single_loc_request_popup_menu_pane

0xd7bd,	// (0x00027290) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd7bd,	// (0x00027290) list_single_loc_request_popup_menu_pane_g1

0xd7c9,	// (0x0002729c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd7c9,	// (0x0002729c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x00028d19) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x00028d19) list_single_loc_request_popup_menu_pane_g

0xd7d5,	// (0x000272a8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd7d5,	// (0x000272a8) list_single_loc_request_popup_menu_pane_t1

0x7582,	// (0x00021055) bg_popup_window_pane_cp03_ParamLimits

0x7582,	// (0x00021055) bg_popup_window_pane_cp03

0x7590,	// (0x00021063) heading_loc_req_pane_ParamLimits

0x7590,	// (0x00021063) heading_loc_req_pane

0x759c,	// (0x0002106f) popup_dyc_status_message_window_g1_ParamLimits

0x759c,	// (0x0002106f) popup_dyc_status_message_window_g1

0x75a8,	// (0x0002107b) popup_dyc_status_message_window_t1_ParamLimits

0x75a8,	// (0x0002107b) popup_dyc_status_message_window_t1

0x75ba,	// (0x0002108d) popup_dyc_status_message_window_t2_ParamLimits

0x75ba,	// (0x0002108d) popup_dyc_status_message_window_t2

0x75cc,	// (0x0002109f) popup_dyc_status_message_window_t3_ParamLimits

0x75cc,	// (0x0002109f) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x00028d1e) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x00028d1e) popup_dyc_status_message_window_t

0xcd8e,	// (0x00026861) bg_heading_pane_cp01

0xd7eb,	// (0x000272be) heading_loc_req_pane_g1

0xd7f3,	// (0x000272c6) heading_loc_req_pane_g2

0xd7fb,	// (0x000272ce) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x00028d25) heading_loc_req_pane_g

0xd803,	// (0x000272d6) heading_loc_req_pane_t1

0xd822,	// (0x000272f5) bg_popup_sub_pane_cp01_ParamLimits

0xd822,	// (0x000272f5) bg_popup_sub_pane_cp01

0xd830,	// (0x00027303) popup_cale_events_window_g1_ParamLimits

0xd830,	// (0x00027303) popup_cale_events_window_g1

0xd850,	// (0x00027323) popup_cale_events_window_g2_ParamLimits

0xd850,	// (0x00027323) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x00028d47) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x00028d47) popup_cale_events_window_g

0xd870,	// (0x00027343) popup_cale_events_window_t1_ParamLimits

0xd870,	// (0x00027343) popup_cale_events_window_t1

0xd882,	// (0x00027355) popup_cale_events_window_t2_ParamLimits

0xd882,	// (0x00027355) popup_cale_events_window_t2

0xd8c0,	// (0x00027393) popup_cale_events_window_t3_ParamLimits

0xd8c0,	// (0x00027393) popup_cale_events_window_t3

0xd906,	// (0x000273d9) popup_cale_events_window_t4_ParamLimits

0xd906,	// (0x000273d9) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x00028d4c) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x00028d4c) popup_cale_events_window_t

0x75f6,	// (0x000210c9) call_type_pane

0xe64f,	// (0x00028122) popup_call_status_window_g1

0x7602,	// (0x000210d5) popup_call_status_window_g2

0x760e,	// (0x000210e1) popup_call_status_window_g3

0x0002,

0xf282,	// (0x00028d55) popup_call_status_window_g

0xd93c,	// (0x0002740f) call_type_pane_g1

0xd945,	// (0x00027418) call_type_pane_g2

0x0001,

0xf289,	// (0x00028d5c) call_type_pane_g

0xcd8e,	// (0x00026861) bg_popup_sub_pane_cp02

0xd94e,	// (0x00027421) listscroll_popup_wml_pane

0xd956,	// (0x00027429) list_wml_pane

0xd960,	// (0x00027433) scroll_pane_cp013

0xd96b,	// (0x0002743e) list_single_graphic_popup_wml_pane_ParamLimits

0xd96b,	// (0x0002743e) list_single_graphic_popup_wml_pane

0xd001,	// (0x00026ad4) list_single_graphic_popup_wml_pane_g1

0xd97f,	// (0x00027452) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00028d61) list_single_graphic_popup_wml_pane_g

0xd987,	// (0x0002745a) list_single_graphic_popup_wml_pane_t1

0xd99d,	// (0x00027470) aid_call_pane

0xcfe1,	// (0x00026ab4) popup_clock_analogue_window_g1

0xcfe1,	// (0x00026ab4) popup_clock_analogue_window_g2

0x494d,	// (0x0001e420) popup_clock_analogue_window_g3

0x494d,	// (0x0001e420) popup_clock_analogue_window_g4

0xd001,	// (0x00026ad4) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x00028d66) popup_clock_analogue_window_g

0x4955,	// (0x0001e428) popup_clock_analogue_window_t1

0x4963,	// (0x0001e436) clock_digital_number_pane_ParamLimits

0x4963,	// (0x0001e436) clock_digital_number_pane

0x496f,	// (0x0001e442) clock_digital_number_pane_cp02_ParamLimits

0x496f,	// (0x0001e442) clock_digital_number_pane_cp02

0x497b,	// (0x0001e44e) clock_digital_number_pane_cp03_ParamLimits

0x497b,	// (0x0001e44e) clock_digital_number_pane_cp03

0x4987,	// (0x0001e45a) clock_digital_number_pane_cp04_ParamLimits

0x4987,	// (0x0001e45a) clock_digital_number_pane_cp04

0x4997,	// (0x0001e46a) clock_digital_separator_pane_ParamLimits

0x4997,	// (0x0001e46a) clock_digital_separator_pane

0x49a3,	// (0x0001e476) popup_clock_digital_window_t1

0xd001,	// (0x00026ad4) clock_digital_number_pane_g1

0xd001,	// (0x00026ad4) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00028ce6) clock_digital_number_pane_g

0xd001,	// (0x00026ad4) clock_digital_separator_pane_g1

0xd001,	// (0x00026ad4) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00028ce6) clock_digital_separator_pane_g

0xcd8e,	// (0x00026861) bg_popup_window_pane_cp04

0xd9a5,	// (0x00027478) heading_pane_cp03

0xd318,	// (0x00026deb) listscroll_popup_gms_pane

0xcd8e,	// (0x00026861) grid_large_graphic_popup_pane

0xd9ad,	// (0x00027480) listscroll_popup_gms_pane_g1

0xd9b6,	// (0x00027489) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00028d71) listscroll_popup_gms_pane_g

0xd9bf,	// (0x00027492) scroll_pane_cp014

0xd056,	// (0x00026b29) cell_large_graphic_popup_pane_ParamLimits

0xd056,	// (0x00026b29) cell_large_graphic_popup_pane

0xd064,	// (0x00026b37) cell_large_graphic_popup_pane_g1_ParamLimits

0xd064,	// (0x00026b37) cell_large_graphic_popup_pane_g1

0xd9c8,	// (0x0002749b) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9c8,	// (0x0002749b) cell_large_graphic_popup_pane_g2

0xd9d6,	// (0x000274a9) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9d6,	// (0x000274a9) cell_large_graphic_popup_pane_g3

0xd9e4,	// (0x000274b7) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9e4,	// (0x000274b7) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00028d76) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00028d76) cell_large_graphic_popup_pane_g

0xcd8e,	// (0x00026861) grid_highlight_pane_cp010

0xd001,	// (0x00026ad4) bg_popup_call_pane_g1

0xd9f5,	// (0x000274c8) list_single_graphic_popup_conf_pane_ParamLimits

0xd9f5,	// (0x000274c8) list_single_graphic_popup_conf_pane

0xda08,	// (0x000274db) list_highlight_pane_cp01

0xda11,	// (0x000274e4) list_single_graphic_popup_conf_pane_g1

0xda19,	// (0x000274ec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x00028d7f) list_single_graphic_popup_conf_pane_g

0xda21,	// (0x000274f4) list_single_graphic_popup_conf_pane_t1

0xda2f,	// (0x00027502) linegrid_cams_pane_g1

0x761a,	// (0x000210ed) linegrid_cams_pane_g2

0xd239,	// (0x00026d0c) linegrid_cams_pane_g3

0xda38,	// (0x0002750b) linegrid_cams_pane_g4

0x7623,	// (0x000210f6) linegrid_cams_pane_g5

0x762c,	// (0x000210ff) linegrid_cams_pane_g6

0xd307,	// (0x00026dda) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00028d84) linegrid_cams_pane_g

0xda41,	// (0x00027514) popup_clock_analogue_window

0xda41,	// (0x00027514) popup_clock_digital_window

0xcd8e,	// (0x00026861) popup_phob_thumbnail_window

0xd001,	// (0x00026ad4) call_video_uplink_pane_g1

0xda4a,	// (0x0002751d) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00028d93) call_video_uplink_pane_g

0xda52,	// (0x00027525) video_uplink_pane

0xda5a,	// (0x0002752d) mce_image_pane_g1

0x7635,	// (0x00021108) mce_image_pane_g2

0x763f,	// (0x00021112) mce_image_pane_g3

0x7647,	// (0x0002111a) mce_image_pane_g4

0x764f,	// (0x00021122) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x00028d98) mce_image_pane_g

0xda64,	// (0x00027537) control_top_pane_stacon_cp01_ParamLimits

0xda64,	// (0x00027537) control_top_pane_stacon_cp01

0xda78,	// (0x0002754b) uni_indicator_pane_stacon_cp01_ParamLimits

0xda78,	// (0x0002754b) uni_indicator_pane_stacon_cp01

0xda89,	// (0x0002755c) bg_popup_sub_pane_cp03

0xda93,	// (0x00027566) chi_dic_find_pane

0x7657,	// (0x0002112a) listscroll_chi_dic_pane

0xda9b,	// (0x0002756e) main_pane_chidic_g1

0xdaa3,	// (0x00027576) chi_dic_find_pane_t1

0xdab1,	// (0x00027584) find_chidic_pane

0xdaba,	// (0x0002758d) chi_dic_list_pane_ParamLimits

0xdaba,	// (0x0002758d) chi_dic_list_pane

0xdacb,	// (0x0002759e) scroll_pane_cp020

0xdad3,	// (0x000275a6) find_chidic_pane_t1

0xcd8e,	// (0x00026861) input_focus_pane_cp06

0x766b,	// (0x0002113e) list_chi_dic_pane_ParamLimits

0x766b,	// (0x0002113e) list_chi_dic_pane

0x7685,	// (0x00021158) list_chi_dic_pane_t1_ParamLimits

0x7685,	// (0x00021158) list_chi_dic_pane_t1

0xcd8e,	// (0x00026861) list_highlight_pane_cp020

0xdae2,	// (0x000275b5) bg_cale_heading_pane_g1

0x7698,	// (0x0002116b) bg_cale_heading_pane_g2

0x76a0,	// (0x00021173) bg_cale_heading_pane_g3

0x76a8,	// (0x0002117b) bg_cale_heading_pane_g4

0x76b2,	// (0x00021185) bg_cale_heading_pane_g5

0x76bc,	// (0x0002118f) bg_cale_heading_pane_g6

0x76c4,	// (0x00021197) bg_cale_heading_pane_g7

0x76cc,	// (0x0002119f) bg_cale_heading_pane_g8

0x76d6,	// (0x000211a9) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00028da3) bg_cale_heading_pane_g

0xdae2,	// (0x000275b5) bg_cale_side_pane_g1

0x76e0,	// (0x000211b3) bg_cale_side_pane_g2

0x76ea,	// (0x000211bd) bg_cale_side_pane_g3

0x76f4,	// (0x000211c7) bg_cale_side_pane_g4

0x76fe,	// (0x000211d1) bg_cale_side_pane_g5

0x7708,	// (0x000211db) bg_cale_side_pane_g6

0x7712,	// (0x000211e5) bg_cale_side_pane_g7

0x771c,	// (0x000211ef) bg_cale_side_pane_g8

0x7724,	// (0x000211f7) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x00028db6) bg_cale_side_pane_g

0x772c,	// (0x000211ff) popup_call_status_window_ParamLimits

0x772c,	// (0x000211ff) popup_call_status_window

0xdaea,	// (0x000275bd) stacon_top_pane

0xdaf2,	// (0x000275c5) status_pane_ParamLimits

0xdaf2,	// (0x000275c5) status_pane

0xdb07,	// (0x000275da) status_small_pane

0xdb0f,	// (0x000275e2) control_pane

0xcd8e,	// (0x00026861) stacon_bottom_pane

0xdb17,	// (0x000275ea) list_single_mce_smart_pane_t1_ParamLimits

0xdb17,	// (0x000275ea) list_single_mce_smart_pane_t1

0xdb2a,	// (0x000275fd) list_single_mce_smart_pane_t2_ParamLimits

0xdb2a,	// (0x000275fd) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x00028dc9) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x00028dc9) list_single_mce_smart_pane_t

0x7738,	// (0x0002120b) compass_pane

0x7744,	// (0x00021217) main_location2_pane_t1

0x7758,	// (0x0002122b) main_location2_pane_t2

0x776c,	// (0x0002123f) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x00028dce) main_location2_pane_t

0xdb49,	// (0x0002761c) compass_pane_g1_ParamLimits

0xdb49,	// (0x0002761c) compass_pane_g1

0x77b6,	// (0x00021289) compass_pane_t1

0x77c5,	// (0x00021298) compass_pane_t2

0x0005,

0xf304,	// (0x00028dd7) compass_pane_t

0x7810,	// (0x000212e3) text_secondary_cp61

0xdbc5,	// (0x00027698) navi_pane_cams_g5

0xdc41,	// (0x00027714) navi_pane_im_t1

0xdc4f,	// (0x00027722) navi_pane_mp_g1_ParamLimits

0xdc4f,	// (0x00027722) navi_pane_mp_g1

0xdc63,	// (0x00027736) navi_pane_mp_g2_ParamLimits

0xdc63,	// (0x00027736) navi_pane_mp_g2

0xdc6f,	// (0x00027742) navi_pane_mp_g3_ParamLimits

0xdc6f,	// (0x00027742) navi_pane_mp_g3

0x0002,

0xf318,	// (0x00028deb) navi_pane_mp_g_ParamLimits

0xf318,	// (0x00028deb) navi_pane_mp_g

0xdc7b,	// (0x0002774e) navi_pane_mp_t1

0xdc89,	// (0x0002775c) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00028df2) navi_pane_mp_t

0xdcf4,	// (0x000277c7) navi_pane_vt_g1

0xdc7b,	// (0x0002774e) navi_pane_vt_t1

0xdcfc,	// (0x000277cf) navi_slider_pane

0xd318,	// (0x00026deb) zooming_pane

0xdd0c,	// (0x000277df) navi_slider_pane_g1

0x49c0,	// (0x0001e493) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00028df9) navi_slider_pane_g

0xdd30,	// (0x00027803) aid_levels_zoom

0xdd38,	// (0x0002780b) zooming_pane_g1

0xdd40,	// (0x00027813) zooming_pane_g2

0xdd40,	// (0x00027813) zooming_pane_g3

0x0002,

0xf335,	// (0x00028e08) zooming_pane_g

0xdd48,	// (0x0002781b) level_10_zoom

0xdd51,	// (0x00027824) level_11_zoom

0xdd5a,	// (0x0002782d) level_1_zoom

0xdd63,	// (0x00027836) level_2_zoom

0xdd6c,	// (0x0002783f) level_3_zoom

0xdd75,	// (0x00027848) level_4_zoom

0xdd7e,	// (0x00027851) level_5_zoom

0xdd87,	// (0x0002785a) level_6_zoom

0xdd90,	// (0x00027863) level_7_zoom

0xdd99,	// (0x0002786c) level_8_zoom

0xdda2,	// (0x00027875) level_9_zoom

0xddb3,	// (0x00027886) popup_phob_thumbnail_window_g1

0xddbb,	// (0x0002788e) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00028e0f) popup_phob_thumbnail_window_g

0x8163,	// (0x00021c36) level_1_location

0x816b,	// (0x00021c3e) level_2_location

0x8173,	// (0x00021c46) level_3_location

0x817d,	// (0x00021c50) level_4_location

0xd318,	// (0x00026deb) level_5_location

0x784b,	// (0x0002131e) mce_icon_pane_g1

0x7853,	// (0x00021326) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00028e14) mce_icon_pane_g

0x785b,	// (0x0002132e) main_mup_pane_g1_ParamLimits

0x785b,	// (0x0002132e) main_mup_pane_g1

0xd080,	// (0x00026b53) main_mup_pane_g2_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g2

0xd080,	// (0x00026b53) main_mup_pane_g3_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g3

0xd080,	// (0x00026b53) main_mup_pane_g4_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g4

0xd080,	// (0x00026b53) main_mup_pane_g5_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g5

0xd080,	// (0x00026b53) main_mup_pane_g6_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g6

0xd080,	// (0x00026b53) main_mup_pane_g7_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g7

0xd080,	// (0x00026b53) main_mup_pane_g8_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g8

0xd080,	// (0x00026b53) main_mup_pane_g9_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g9

0xd080,	// (0x00026b53) main_mup_pane_g10_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g10

0xd080,	// (0x00026b53) main_mup_pane_g11_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g11

0xd072,	// (0x00026b45) main_mup_pane_g12_ParamLimits

0xd072,	// (0x00026b45) main_mup_pane_g12

0xd080,	// (0x00026b53) main_mup_pane_g13_ParamLimits

0xd080,	// (0x00026b53) main_mup_pane_g13

0x000c,

0xf346,	// (0x00028e19) main_mup_pane_g_ParamLimits

0xf346,	// (0x00028e19) main_mup_pane_g

0xd08e,	// (0x00026b61) main_mup_pane_t1_ParamLimits

0xd08e,	// (0x00026b61) main_mup_pane_t1

0xd08e,	// (0x00026b61) main_mup_pane_t2_ParamLimits

0xd08e,	// (0x00026b61) main_mup_pane_t2

0xd08e,	// (0x00026b61) main_mup_pane_t3_ParamLimits

0xd08e,	// (0x00026b61) main_mup_pane_t3

0xd0c0,	// (0x00026b93) main_mup_pane_t4_ParamLimits

0xd0c0,	// (0x00026b93) main_mup_pane_t4

0xd0c0,	// (0x00026b93) main_mup_pane_t5_ParamLimits

0xd0c0,	// (0x00026b93) main_mup_pane_t5

0xd0ac,	// (0x00026b7f) main_mup_pane_t6_ParamLimits

0xd0ac,	// (0x00026b7f) main_mup_pane_t6

0x0005,

0xf361,	// (0x00028e34) main_mup_pane_t_ParamLimits

0xf361,	// (0x00028e34) main_mup_pane_t

0xcb45,	// (0x00026618) mup_progress_pane_ParamLimits

0xcb45,	// (0x00026618) mup_progress_pane

0x007e,	// (0x00019b51) mup_visualizer_pane_ParamLimits

0x007e,	// (0x00019b51) mup_visualizer_pane

0x007e,	// (0x00019b51) mup_volume_pane_ParamLimits

0x007e,	// (0x00019b51) mup_volume_pane

0xd072,	// (0x00026b45) mup_visualizer_pane_g1_ParamLimits

0xd072,	// (0x00026b45) mup_visualizer_pane_g1

0xddc3,	// (0x00027896) mup_visualizer_pane_g2_ParamLimits

0xddc3,	// (0x00027896) mup_visualizer_pane_g2

0xd064,	// (0x00026b37) mup_visualizer_pane_g3_ParamLimits

0xd064,	// (0x00026b37) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00028e41) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00028e41) mup_visualizer_pane_g

0xd0a2,	// (0x00026b75) mup_volume_pane_g1

0xd0a2,	// (0x00026b75) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00028b5f) mup_volume_pane_g

0xd0a2,	// (0x00026b75) mup_progress_pane_g1

0xd0a2,	// (0x00026b75) mup_progress_pane_g2

0xd0a2,	// (0x00026b75) mup_progress_pane_g3

0x0002,

0xf375,	// (0x00028e48) mup_progress_pane_g

0xcd8e,	// (0x00026861) bg_popup_window_pane_cp05

0xddd1,	// (0x000278a4) heading_pane_cp02_ParamLimits

0xddd1,	// (0x000278a4) heading_pane_cp02

0xddeb,	// (0x000278be) list_popup_blid_pane

0xddf3,	// (0x000278c6) list_blid_sat_info_pane_ParamLimits

0xddf3,	// (0x000278c6) list_blid_sat_info_pane

0xde36,	// (0x00027909) list_blid_sat_info_pane_g1

0xde3e,	// (0x00027911) list_blid_sat_info_pane_t1

0x7958,	// (0x0002142b) mup_equalizer_pane_ParamLimits

0x7958,	// (0x0002142b) mup_equalizer_pane

0x7979,	// (0x0002144c) mup_equalizer_pane_cp1_ParamLimits

0x7979,	// (0x0002144c) mup_equalizer_pane_cp1

0x799a,	// (0x0002146d) mup_equalizer_pane_cp2_ParamLimits

0x799a,	// (0x0002146d) mup_equalizer_pane_cp2

0x79bb,	// (0x0002148e) mup_equalizer_pane_cp3_ParamLimits

0x79bb,	// (0x0002148e) mup_equalizer_pane_cp3

0x79dc,	// (0x000214af) mup_equalizer_pane_cp4_ParamLimits

0x79dc,	// (0x000214af) mup_equalizer_pane_cp4

0x79fd,	// (0x000214d0) mup_equalizer_pane_cp5

0x7a13,	// (0x000214e6) mup_equalizer_pane_cp6

0x7a2b,	// (0x000214fe) mup_equalizer_pane_cp7

0xeece,	// (0x000289a1) bg_popup_call_poc_act_pane_g9

0xeed6,	// (0x000289a9) bg_popup_call_poc_act_pane_g10

0xeede,	// (0x000289b1) bg_popup_call_poc_act_pane_g11

0x000a,

0xcfe9,	// (0x00026abc) mup_scale_pane

0xd001,	// (0x00026ad4) mup_scale_pane_g1

0xde4c,	// (0x0002791f) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00028e64) mup_scale_pane_g

0xde70,	// (0x00027943) msg_data_pane

0xde78,	// (0x0002794b) scroll_pane_cp017

0x7a55,	// (0x00021528) bg_list_pane_cp04_ParamLimits

0x7a55,	// (0x00021528) bg_list_pane_cp04

0xde80,	// (0x00027953) msg_data_pane_g1

0x7a79,	// (0x0002154c) msg_data_pane_g2

0x7a83,	// (0x00021556) msg_data_pane_g3

0x7a8b,	// (0x0002155e) msg_data_pane_g4

0x7a93,	// (0x00021566) msg_data_pane_g5

0x7a9b,	// (0x0002156e) msg_data_pane_g6

0x7aa3,	// (0x00021576) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00028e73) msg_data_pane_g

0x7aab,	// (0x0002157e) msg_text_pane_ParamLimits

0x7aab,	// (0x0002157e) msg_text_pane

0x7b0c,	// (0x000215df) qrid_highlight_pane_cp011_ParamLimits

0x7b0c,	// (0x000215df) qrid_highlight_pane_cp011

0xcd8e,	// (0x00026861) msg_body_pane

0xcfe9,	// (0x00026abc) msg_header_pane

0xde9c,	// (0x0002796f) input_focus_pane_cp07

0x7b34,	// (0x00021607) msg_header_pane_t1_ParamLimits

0x7b34,	// (0x00021607) msg_header_pane_t1

0x7b50,	// (0x00021623) msg_header_pane_t2_ParamLimits

0x7b50,	// (0x00021623) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00028e87) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00028e87) msg_header_pane_t

0xdebd,	// (0x00027990) msg_body_pane_g1

0x7b70,	// (0x00021643) msg_body_pane_t1_ParamLimits

0x7b70,	// (0x00021643) msg_body_pane_t1

0x7ba1,	// (0x00021674) msg_body_pane_t2_ParamLimits

0x7ba1,	// (0x00021674) msg_body_pane_t2

0x7bb3,	// (0x00021686) msg_body_pane_t3_ParamLimits

0x7bb3,	// (0x00021686) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x00028e8c) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x00028e8c) msg_body_pane_t

0x4a02,	// (0x0001e4d5) main_viewer_pane_g1_ParamLimits

0x4a02,	// (0x0001e4d5) main_viewer_pane_g1

0x4a0e,	// (0x0001e4e1) main_viewer_pane_g2_ParamLimits

0x4a0e,	// (0x0001e4e1) main_viewer_pane_g2

0x7be7,	// (0x000216ba) main_viewer_pane_g3_ParamLimits

0x7be7,	// (0x000216ba) main_viewer_pane_g3

0x7bf8,	// (0x000216cb) main_viewer_pane_g4_ParamLimits

0x7bf8,	// (0x000216cb) main_viewer_pane_g4

0x4a1a,	// (0x0001e4ed) main_viewer_pane_g5_ParamLimits

0x4a1a,	// (0x0001e4ed) main_viewer_pane_g5

0x4a1a,	// (0x0001e4ed) main_viewer_pane_g7_ParamLimits

0x4a1a,	// (0x0001e4ed) main_viewer_pane_g7

0xd7bd,	// (0x00027290) main_viewer_pane_g8_ParamLimits

0xd7bd,	// (0x00027290) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x00028e9c) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x00028e9c) main_viewer_pane_g

0xdec5,	// (0x00027998) viewer_content_pane_ParamLimits

0xdec5,	// (0x00027998) viewer_content_pane

0x7c29,	// (0x000216fc) main_postcard_pane_g1_ParamLimits

0x7c29,	// (0x000216fc) main_postcard_pane_g1

0x7c37,	// (0x0002170a) main_postcard_pane_g2_ParamLimits

0x7c37,	// (0x0002170a) main_postcard_pane_g2

0x7c45,	// (0x00021718) main_postcard_pane_g3_ParamLimits

0x7c45,	// (0x00021718) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x00028ead) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x00028ead) main_postcard_pane_g

0x7c55,	// (0x00021728) main_postcard_pane_g4

0xeff7,	// (0x00028aca) smil_status_volume_pane_g2

0x7c81,	// (0x00021754) postcard_pane_ParamLimits

0x7c81,	// (0x00021754) postcard_pane

0xe64f,	// (0x00028122) postcard_pane_g1_ParamLimits

0xe64f,	// (0x00028122) postcard_pane_g1

0x7cb3,	// (0x00021786) postcard_pane_g2_ParamLimits

0x7cb3,	// (0x00021786) postcard_pane_g2

0x7cbf,	// (0x00021792) postcard_pane_g3_ParamLimits

0x7cbf,	// (0x00021792) postcard_pane_g3

0xded3,	// (0x000279a6) postcard_pane_g4_ParamLimits

0xded3,	// (0x000279a6) postcard_pane_g4

0x7ccb,	// (0x0002179e) postcard_pane_g5_ParamLimits

0x7ccb,	// (0x0002179e) postcard_pane_g5

0x7cd7,	// (0x000217aa) postcard_pane_g6_ParamLimits

0x7cd7,	// (0x000217aa) postcard_pane_g6

0xdee1,	// (0x000279b4) postcard_pane_g7_ParamLimits

0xdee1,	// (0x000279b4) postcard_pane_g7

0x0006,

0xf3e7,	// (0x00028eba) postcard_pane_g_ParamLimits

0xf3e7,	// (0x00028eba) postcard_pane_g

0x7ce3,	// (0x000217b6) main_mp2_pane_g1_ParamLimits

0x7ce3,	// (0x000217b6) main_mp2_pane_g1

0x7cef,	// (0x000217c2) main_mp2_pane_g2_ParamLimits

0x7cef,	// (0x000217c2) main_mp2_pane_g2

0x7cfb,	// (0x000217ce) main_mp2_pane_g3_ParamLimits

0x7cfb,	// (0x000217ce) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00028ec9) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00028ec9) main_mp2_pane_g

0x7d07,	// (0x000217da) main_mp2_pane_t1_ParamLimits

0x7d07,	// (0x000217da) main_mp2_pane_t1

0x7d1e,	// (0x000217f1) main_mp2_pane_t2_ParamLimits

0x7d1e,	// (0x000217f1) main_mp2_pane_t2

0x7d32,	// (0x00021805) main_mp2_pane_t3_ParamLimits

0x7d32,	// (0x00021805) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00028ed0) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00028ed0) main_mp2_pane_t

0xcb45,	// (0x00026618) pec_content_pane_ParamLimits

0xcb45,	// (0x00026618) pec_content_pane

0xc963,	// (0x00026436) scroll_pane_cp015

0xde06,	// (0x000278d9) pec_attribute_pane_ParamLimits

0xde06,	// (0x000278d9) pec_attribute_pane

0xd064,	// (0x00026b37) pec_content_pane_g1_ParamLimits

0xd064,	// (0x00026b37) pec_content_pane_g1

0xdeef,	// (0x000279c2) pec_content_pane_t1_ParamLimits

0xdeef,	// (0x000279c2) pec_content_pane_t1

0xdf03,	// (0x000279d6) pec_content_pane_t2_ParamLimits

0xdf03,	// (0x000279d6) pec_content_pane_t2

0x0001,

0xf404,	// (0x00028ed7) pec_content_pane_t_ParamLimits

0xf404,	// (0x00028ed7) pec_content_pane_t

0xd056,	// (0x00026b29) list_single_graphic_pane_cp01_ParamLimits

0xd056,	// (0x00026b29) list_single_graphic_pane_cp01

0xcfe9,	// (0x00026abc) bg_popup_sub_pane_cp04

0xdf17,	// (0x000279ea) popup_mup_playback_window_g1

0xdf23,	// (0x000279f6) popup_mup_playback_window_t1

0xdf38,	// (0x00027a0b) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x00028edc) popup_mup_playback_window_t

0xdf6f,	// (0x00027a42) main_image_pane_g1_ParamLimits

0xdf6f,	// (0x00027a42) main_image_pane_g1

0xdfb2,	// (0x00027a85) scroll_pane_cp018_ParamLimits

0xdfb2,	// (0x00027a85) scroll_pane_cp018

0xdfca,	// (0x00027a9d) scroll_pane_cp016_ParamLimits

0xdfca,	// (0x00027a9d) scroll_pane_cp016

0x7db5,	// (0x00021888) smil2_image_pane_ParamLimits

0x7db5,	// (0x00021888) smil2_image_pane

0x7de5,	// (0x000218b8) smil2_root_pane_ParamLimits

0x7de5,	// (0x000218b8) smil2_root_pane

0x7e11,	// (0x000218e4) smil2_text_pane_ParamLimits

0x7e11,	// (0x000218e4) smil2_text_pane

0xc963,	// (0x00026436) bg_list_pane_cp06

0xc963,	// (0x00026436) grid_radio_pane

0xcd8e,	// (0x00026861) bg_popup_window_pane_cp06

0xd812,	// (0x000272e5) main_fmradio_pane_t1

0xd9a5,	// (0x00027478) heading_pane_cp04

0xd812,	// (0x000272e5) main_fmradio_pane_t2

0xeee6,	// (0x000289b9) popup_cale_lunar_info_window_g1

0xd812,	// (0x000272e5) main_fmradio_pane_t3

0xeeee,	// (0x000289c1) popup_cale_lunar_info_window_g2

0xd812,	// (0x000272e5) main_fmradio_pane_t4

0x0001,

0xd812,	// (0x000272e5) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x00028f9e) popup_cale_lunar_info_window_g

0xf269,	// (0x00028d3c) main_fmradio_pane_t

0xc963,	// (0x00026436) wait_bar_pane_cp03

0xd056,	// (0x00026b29) cell_fmradio_pane_ParamLimits

0xd056,	// (0x00026b29) cell_fmradio_pane

0xd064,	// (0x00026b37) cell_fmradio_pane_g1_ParamLimits

0xd064,	// (0x00026b37) cell_fmradio_pane_g1

0xc963,	// (0x00026436) grid_highlight_pane_cp011

0xdffe,	// (0x00027ad1) poc_content_pane_ParamLimits

0xdffe,	// (0x00027ad1) poc_content_pane

0xe010,	// (0x00027ae3) scroll_pane_cp019

0x7e51,	// (0x00021924) popup_call_poc_act_window_ParamLimits

0x7e51,	// (0x00021924) popup_call_poc_act_window

0x7e5e,	// (0x00021931) popup_call_poc_inact_window_ParamLimits

0x7e5e,	// (0x00021931) popup_call_poc_inact_window

0xf4a2,	// (0x00028f75) bg_popup_call_poc_act_pane_g

0xee5e,	// (0x00028931) bg_popup_call_poc_inact_pane_g1

0xee66,	// (0x00028939) bg_popup_call_poc_inact_pane_g2

0xe018,	// (0x00027aeb) popup_call_poc_act_window_g2

0xee6e,	// (0x00028941) bg_popup_call_poc_inact_pane_g3

0xee76,	// (0x00028949) bg_popup_call_poc_inact_pane_g4

0xee7e,	// (0x00028951) bg_popup_call_poc_inact_pane_g5

0xe020,	// (0x00027af3) popup_call_poc_act_window_t1_ParamLimits

0xe020,	// (0x00027af3) popup_call_poc_act_window_t1

0xe048,	// (0x00027b1b) popup_call_poc_act_window_t2_ParamLimits

0xe048,	// (0x00027b1b) popup_call_poc_act_window_t2

0xe070,	// (0x00027b43) popup_call_poc_act_window_t3_ParamLimits

0xe070,	// (0x00027b43) popup_call_poc_act_window_t3

0xe098,	// (0x00027b6b) popup_call_poc_act_window_t4_ParamLimits

0xe098,	// (0x00027b6b) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00028ef1) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00028ef1) popup_call_poc_act_window_t

0xee86,	// (0x00028959) bg_popup_call_poc_inact_pane_g6

0xee8e,	// (0x00028961) bg_popup_call_poc_inact_pane_g7

0xee96,	// (0x00028969) bg_popup_call_poc_inact_pane_g8

0xe0aa,	// (0x00027b7d) popup_call_poc_inact_window_g2

0xee9e,	// (0x00028971) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x00028f62) bg_popup_call_poc_inact_pane_g

0xe0b2,	// (0x00027b85) popup_call_poc_inact_window_t1_ParamLimits

0xe0b2,	// (0x00027b85) popup_call_poc_inact_window_t1

0xe0c7,	// (0x00027b9a) popup_call_poc_inact_window_t2_ParamLimits

0xe0c7,	// (0x00027b9a) popup_call_poc_inact_window_t2

0xe0dc,	// (0x00027baf) popup_call_poc_inact_window_t3_ParamLimits

0xe0dc,	// (0x00027baf) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x00028efa) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x00028efa) popup_call_poc_inact_window_t

0xef82,	// (0x00028a55) context_pane_ParamLimits

0x82e3,	// (0x00021db6) signal_pane_ParamLimits

0xd318,	// (0x00026deb) main_call2_pane

0x4b75,	// (0x0001e648) popup_phob_thumbnail2_window_ParamLimits

0x4b75,	// (0x0001e648) popup_phob_thumbnail2_window

0x49d2,	// (0x0001e4a5) aid_hotspot_pointer_arrow_pane

0x49da,	// (0x0001e4ad) aid_hotspot_pointer_hand_pane

0x812b,	// (0x00021bfe) phob_pre_status_pane_g5

0xd056,	// (0x00026b29) cams_zoom_pane_ParamLimits

0xd056,	// (0x00026b29) image_vga_pane_ParamLimits

0xd072,	// (0x00026b45) main_camera_pane_g1_ParamLimits

0xd072,	// (0x00026b45) main_camera_pane_g2_ParamLimits

0xd072,	// (0x00026b45) main_camera_pane_g3_ParamLimits

0xd072,	// (0x00026b45) main_camera_pane_g4_ParamLimits

0xd072,	// (0x00026b45) main_camera_pane_g5_ParamLimits

0xd072,	// (0x00026b45) main_camera_pane_g6_ParamLimits

0xd072,	// (0x00026b45) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00028c30) main_camera_pane_g_ParamLimits

0xd0c0,	// (0x00026b93) main_camera_pane_t1_ParamLimits

0xd0c0,	// (0x00026b93) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00028c41) main_camera_pane_t_ParamLimits

0xcfe9,	// (0x00026abc) bg_popup_preview_window_pane_cp01_ParamLimits

0xcfe9,	// (0x00026abc) bg_popup_preview_window_pane_cp01

0xe0f1,	// (0x00027bc4) popup_phob_thumbnail2_window_g1_ParamLimits

0xe0f1,	// (0x00027bc4) popup_phob_thumbnail2_window_g1

0xcd8e,	// (0x00026861) call2_cli_visual_pane

0x7e7a,	// (0x0002194d) popup_call2_audio_conf_window_ParamLimits

0x7e7a,	// (0x0002194d) popup_call2_audio_conf_window

0x7e8f,	// (0x00021962) popup_call2_audio_first_window_ParamLimits

0x7e8f,	// (0x00021962) popup_call2_audio_first_window

0x7f2d,	// (0x00021a00) popup_call2_audio_in_window_ParamLimits

0x7f2d,	// (0x00021a00) popup_call2_audio_in_window

0x7f6f,	// (0x00021a42) popup_call2_audio_out_window_ParamLimits

0x7f6f,	// (0x00021a42) popup_call2_audio_out_window

0x7fd1,	// (0x00021aa4) popup_call2_audio_second_window_ParamLimits

0x7fd1,	// (0x00021aa4) popup_call2_audio_second_window

0x802f,	// (0x00021b02) popup_call2_audio_wait_window_ParamLimits

0x802f,	// (0x00021b02) popup_call2_audio_wait_window

0xcd8e,	// (0x00026861) bg_popup_call2_act_pane_cp03

0xcfcb,	// (0x00026a9e) list_conf_pane_cp

0xe0fd,	// (0x00027bd0) popup_call2_audio_conf_window_t1

0xd9f5,	// (0x000274c8) list_single_graphic_popup_conf2_pane_ParamLimits

0xd9f5,	// (0x000274c8) list_single_graphic_popup_conf2_pane

0xda08,	// (0x000274db) list_highlight_pane_cp04

0xe10b,	// (0x00027bde) list_single_graphic_popup_conf2_pane_g1

0xda19,	// (0x000274ec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00028f01) list_single_graphic_popup_conf2_pane_g

0xe115,	// (0x00027be8) list_single_graphic_popup_conf2_pane_t1

0xe123,	// (0x00027bf6) bg_popup_call2_act_pane_cp01_ParamLimits

0xe123,	// (0x00027bf6) bg_popup_call2_act_pane_cp01

0xe1ad,	// (0x00027c80) call_type_pane_cp05_ParamLimits

0xe1ad,	// (0x00027c80) call_type_pane_cp05

0xe201,	// (0x00027cd4) popup_call2_audio_second_window_g1_ParamLimits

0xe201,	// (0x00027cd4) popup_call2_audio_second_window_g1

0xe255,	// (0x00027d28) popup_call2_audio_second_window_g2_ParamLimits

0xe255,	// (0x00027d28) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00028f06) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00028f06) popup_call2_audio_second_window_g

0xe2ba,	// (0x00027d8d) popup_call2_audio_second_window_t1_ParamLimits

0xe2ba,	// (0x00027d8d) popup_call2_audio_second_window_t1

0xe375,	// (0x00027e48) popup_call2_audio_second_window_t2_ParamLimits

0xe375,	// (0x00027e48) popup_call2_audio_second_window_t2

0xe3c8,	// (0x00027e9b) popup_call2_audio_second_window_t3_ParamLimits

0xe3c8,	// (0x00027e9b) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x00028f0d) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x00028f0d) popup_call2_audio_second_window_t

0xcd8e,	// (0x00026861) bg_popup_call2_in_pane_cp02

0xcd98,	// (0x0002686b) call_type_pane_cp04

0x806e,	// (0x00021b41) popup_call2_audio_wait_window_g1

0x8076,	// (0x00021b49) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00028f16) popup_call2_audio_wait_window_g

0xcdb0,	// (0x00026883) popup_call2_audio_wait_window_t3

0xe4bb,	// (0x00027f8e) bg_popup_call2_act_pane_ParamLimits

0xe4bb,	// (0x00027f8e) bg_popup_call2_act_pane

0xe57b,	// (0x0002804e) call_type_pane_cp03_ParamLimits

0xe57b,	// (0x0002804e) call_type_pane_cp03

0xe5df,	// (0x000280b2) popup_call2_audio_first_window_g1_ParamLimits

0xe5df,	// (0x000280b2) popup_call2_audio_first_window_g1

0xe65d,	// (0x00028130) popup_call2_audio_first_window_g2_ParamLimits

0xe65d,	// (0x00028130) popup_call2_audio_first_window_g2

0xe64f,	// (0x00028122) popup_call2_audio_first_window_g3_ParamLimits

0xe64f,	// (0x00028122) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x00028f1b) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x00028f1b) popup_call2_audio_first_window_g

0xe73b,	// (0x0002820e) popup_call2_audio_first_window_t1_ParamLimits

0xe73b,	// (0x0002820e) popup_call2_audio_first_window_t1

0xe83e,	// (0x00028311) popup_call2_audio_first_window_t4_ParamLimits

0xe83e,	// (0x00028311) popup_call2_audio_first_window_t4

0xe921,	// (0x000283f4) popup_call2_audio_first_window_t5_ParamLimits

0xe921,	// (0x000283f4) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00028f26) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00028f26) popup_call2_audio_first_window_t

0xcfe1,	// (0x00026ab4) bg_popup_call2_act_pane_g1

0xeef6,	// (0x000289c9) popup_cale_lunar_info_window_t1

0xef04,	// (0x000289d7) popup_cale_lunar_info_window_t2

0xef12,	// (0x000289e5) popup_cale_lunar_info_window_t3

0xcd8e,	// (0x00026861) bg_popup_call2_bubble_pane

0xea22,	// (0x000284f5) bg_popup_call2_in_pane_cp01_ParamLimits

0xea22,	// (0x000284f5) bg_popup_call2_in_pane_cp01

0xca5c,	// (0x0002652f) call_type_pane_cp02

0x807e,	// (0x00021b51) popup_call2_audio_out_window_g1_ParamLimits

0x807e,	// (0x00021b51) popup_call2_audio_out_window_g1

0xea6a,	// (0x0002853d) popup_call2_audio_out_window_g2_ParamLimits

0xea6a,	// (0x0002853d) popup_call2_audio_out_window_g2

0x80aa,	// (0x00021b7d) popup_call2_audio_out_window_g3_ParamLimits

0x80aa,	// (0x00021b7d) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00028f2f) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00028f2f) popup_call2_audio_out_window_g

0xeaa1,	// (0x00028574) popup_call2_audio_out_window_t1_ParamLimits

0xeaa1,	// (0x00028574) popup_call2_audio_out_window_t1

0xeb00,	// (0x000285d3) popup_call2_audio_out_window_t2_ParamLimits

0xeb00,	// (0x000285d3) popup_call2_audio_out_window_t2

0xeb54,	// (0x00028627) popup_call2_audio_out_window_t3_ParamLimits

0xeb54,	// (0x00028627) popup_call2_audio_out_window_t3

0xeb6a,	// (0x0002863d) popup_call2_audio_out_window_t4_ParamLimits

0xeb6a,	// (0x0002863d) popup_call2_audio_out_window_t4

0xeb80,	// (0x00028653) popup_call2_audio_out_window_t5_ParamLimits

0xeb80,	// (0x00028653) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x00028f38) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x00028f38) popup_call2_audio_out_window_t

0xebe4,	// (0x000286b7) bg_popup_call2_in_pane_ParamLimits

0xebe4,	// (0x000286b7) bg_popup_call2_in_pane

0xec40,	// (0x00028713) popup_call2_audio_in_window_g1_ParamLimits

0xec40,	// (0x00028713) popup_call2_audio_in_window_g1

0xec78,	// (0x0002874b) popup_call2_audio_in_window_g2_ParamLimits

0xec78,	// (0x0002874b) popup_call2_audio_in_window_g2

0xecb0,	// (0x00028783) popup_call2_audio_in_window_g3_ParamLimits

0xecb0,	// (0x00028783) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00028f45) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00028f45) popup_call2_audio_in_window_g

0xed08,	// (0x000287db) popup_call2_audio_in_window_t1_ParamLimits

0xed08,	// (0x000287db) popup_call2_audio_in_window_t1

0xed88,	// (0x0002885b) popup_call2_audio_in_window_t2_ParamLimits

0xed88,	// (0x0002885b) popup_call2_audio_in_window_t2

0xee08,	// (0x000288db) popup_call2_audio_in_window_t3_ParamLimits

0xee08,	// (0x000288db) popup_call2_audio_in_window_t3

0xee22,	// (0x000288f5) popup_call2_audio_in_window_t4_ParamLimits

0xee22,	// (0x000288f5) popup_call2_audio_in_window_t4

0xee34,	// (0x00028907) popup_call2_audio_in_window_t5_ParamLimits

0xee34,	// (0x00028907) popup_call2_audio_in_window_t5

0xee49,	// (0x0002891c) popup_call2_audio_in_window_t6_ParamLimits

0xee49,	// (0x0002891c) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x00028f4e) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x00028f4e) popup_call2_audio_in_window_t

0xcfe1,	// (0x00026ab4) bg_popup_call2_in_pane_g1

0xef20,	// (0x000289f3) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x00028fa3) popup_cale_lunar_info_window_t

0xcfe9,	// (0x00026abc) bg_popup_call2_rect_pane_ParamLimits

0xcfe9,	// (0x00026abc) bg_popup_call2_rect_pane

0xcd8e,	// (0x00026861) call2_cli_visual_graphic_pane

0xcd8e,	// (0x00026861) call2_cli_visual_text_pane

0x4bc4,	// (0x0001e697) smil_status_volume_pane_g3

0x0002,

0xd001,	// (0x00026ad4) call2_cli_visual_graphic_pane_g1

0xd001,	// (0x00026ad4) call2_cli_visual_graphic_pane_g2

0xd001,	// (0x00026ad4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x00028f5b) call2_cli_visual_graphic_pane_g

0xd201,	// (0x00026cd4) bg_popup_call2_rect_pane_g1

0xd1f9,	// (0x00026ccc) bg_popup_call2_rect_pane_g2

0xd1f1,	// (0x00026cc4) bg_popup_call2_rect_pane_g3

0xd211,	// (0x00026ce4) bg_popup_call2_rect_pane_g4

0xd209,	// (0x00026cdc) bg_popup_call2_rect_pane_g5

0xd219,	// (0x00026cec) bg_popup_call2_rect_pane_g6

0xd221,	// (0x00026cf4) bg_popup_call2_rect_pane_g7

0xd231,	// (0x00026d04) bg_popup_call2_rect_pane_g8

0xd229,	// (0x00026cfc) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x00028ceb) bg_popup_call2_rect_pane_g

0xee5e,	// (0x00028931) bg_popup_call2_bubble_pane_g1

0xee66,	// (0x00028939) bg_popup_call2_bubble_pane_g2

0xee6e,	// (0x00028941) bg_popup_call2_bubble_pane_g3

0xee76,	// (0x00028949) bg_popup_call2_bubble_pane_g4

0xee7e,	// (0x00028951) bg_popup_call2_bubble_pane_g5

0xee86,	// (0x00028959) bg_popup_call2_bubble_pane_g6

0xee8e,	// (0x00028961) bg_popup_call2_bubble_pane_g7

0xee96,	// (0x00028969) bg_popup_call2_bubble_pane_g8

0xee9e,	// (0x00028971) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00028f62) bg_popup_call2_bubble_pane_g

0x5e78,	// (0x0001f94b) aid_cale_week_size_cell_pane

0xcfe9,	// (0x00026abc) aid_cams_cif_uncrop_pane_ParamLimits

0xcfe9,	// (0x00026abc) aid_cams_cif_uncrop_pane

0xd056,	// (0x00026b29) aid_cams_size_cell_ParamLimits

0xd056,	// (0x00026b29) aid_cams_size_cell

0xd056,	// (0x00026b29) grid_cams_pane_ParamLimits

0xd056,	// (0x00026b29) linegrid_cams_pane_ParamLimits

0x6447,	// (0x0001ff1a) call_video_pane_t1

0x6468,	// (0x0001ff3b) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00028c8d) call_video_pane_t

0x69af,	// (0x00020482) aid_cale_month_size_cell_pane_ParamLimits

0x69af,	// (0x00020482) aid_cale_month_size_cell_pane

0xf514,	// (0x00028fe7) smil_status_volume_pane_g

0x4bd1,	// (0x0001e6a4) volume_smil_pane_ParamLimits

0x43ae,	// (0x0001de81) aid_popup2_width_pane

0x5dae,	// (0x0001f881) cell_qdial_pane_g4_ParamLimits

0x5dae,	// (0x0001f881) cell_qdial_pane_g4

0x7792,	// (0x00021265) aid_blid_cardinal_pane_ParamLimits

0x77a2,	// (0x00021275) aid_blid_destination_pane_ParamLimits

0x77a2,	// (0x00021275) aid_blid_destination_pane

0xcfe9,	// (0x00026abc) bg_popup_call_poc_act_pane_ParamLimits

0xcfe9,	// (0x00026abc) bg_popup_call_poc_act_pane

0xcfe9,	// (0x00026abc) bg_popup_call_poc_inact_pane_ParamLimits

0xcfe9,	// (0x00026abc) bg_popup_call_poc_inact_pane

0xeea6,	// (0x00028979) bg_popup_call_poc_act_pane_g1

0xeeae,	// (0x00028981) bg_popup_call_poc_act_pane_g2

0xeeb6,	// (0x00028989) bg_popup_call_poc_act_pane_g3

0xee76,	// (0x00028949) bg_popup_call_poc_act_pane_g4

0xee7e,	// (0x00028951) bg_popup_call_poc_act_pane_g5

0xeebe,	// (0x00028991) bg_popup_call_poc_act_pane_g6

0xee8e,	// (0x00028961) bg_popup_call_poc_act_pane_g7

0xeec6,	// (0x00028999) bg_popup_call_poc_act_pane_g8

0xcd8e,	// (0x00026861) main_usb_pane

0x4aa4,	// (0x0001e577) popup_cale_lunar_info_window

0x6791,	// (0x00020264) im_reading_pane_t1_ParamLimits

0xd3e2,	// (0x00026eb5) list_im_pane_ParamLimits

0xd3f3,	// (0x00026ec6) scroll_pane_cp07_ParamLimits

0xcd8e,	// (0x00026861) grid_highlight_pane_cp012

0xcfe9,	// (0x00026abc) mup_scale_pane_ParamLimits

0xd072,	// (0x00026b45) main_usb_pane_g1_ParamLimits

0xd072,	// (0x00026b45) main_usb_pane_g1

0xd072,	// (0x00026b45) main_usb_pane_g2_ParamLimits

0xd072,	// (0x00026b45) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x00028f8c) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x00028f8c) main_usb_pane_g

0xd0c0,	// (0x00026b93) main_usb_pane_t1_ParamLimits

0xd0c0,	// (0x00026b93) main_usb_pane_t1

0xd0c0,	// (0x00026b93) main_usb_pane_t2_ParamLimits

0xd0c0,	// (0x00026b93) main_usb_pane_t2

0xd0c0,	// (0x00026b93) main_usb_pane_t3_ParamLimits

0xd0c0,	// (0x00026b93) main_usb_pane_t3

0xd0c0,	// (0x00026b93) main_usb_pane_t4_ParamLimits

0xd0c0,	// (0x00026b93) main_usb_pane_t4

0xd0c0,	// (0x00026b93) main_usb_pane_t5_ParamLimits

0xd0c0,	// (0x00026b93) main_usb_pane_t5

0xd0c0,	// (0x00026b93) main_usb_pane_t6_ParamLimits

0xd0c0,	// (0x00026b93) main_usb_pane_t6

0x0005,

0xf4be,	// (0x00028f91) main_usb_pane_t_ParamLimits

0x7738,	// (0x0002120b) aid_text_placing

0x7744,	// (0x00021217) main_location2_pane_t1_ParamLimits

0x7758,	// (0x0002122b) main_location2_pane_t2_ParamLimits

0x776c,	// (0x0002123f) main_location2_pane_t3_ParamLimits

0x7780,	// (0x00021253) main_location2_pane_t4_ParamLimits

0x7780,	// (0x00021253) main_location2_pane_t4

0xf2fb,	// (0x00028dce) main_location2_pane_t_ParamLimits

0xd017,	// (0x00026aea) find_pinb_pane_g2_ParamLimits

0xd017,	// (0x00026aea) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00028b45) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00028b45) find_pinb_pane_g

0xd023,	// (0x00026af6) find_pinb_pane_t1_ParamLimits

0xd035,	// (0x00026b08) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00028b4a) find_pinb_pane_t_ParamLimits

0xcd8e,	// (0x00026861) main_call3_pane

0x6f52,	// (0x00020a25) cale_month_day_heading_pane_t1_ParamLimits

0x6fd8,	// (0x00020aab) cale_month_day_heading_pane_t2_ParamLimits

0x7051,	// (0x00020b24) cale_month_day_heading_pane_t3_ParamLimits

0x70ca,	// (0x00020b9d) cale_month_day_heading_pane_t4_ParamLimits

0x7143,	// (0x00020c16) cale_month_day_heading_pane_t5_ParamLimits

0x71bc,	// (0x00020c8f) cale_month_day_heading_pane_t6_ParamLimits

0x7235,	// (0x00020d08) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00028cc5) cale_month_day_heading_pane_t_ParamLimits

0xd63d,	// (0x00027110) smil_status_volume_pane

0x7c9b,	// (0x0002176e) postcard_address_pane_ParamLimits

0x7c9b,	// (0x0002176e) postcard_address_pane

0x7ca7,	// (0x0002177a) postcard_message_pane_ParamLimits

0x7ca7,	// (0x0002177a) postcard_message_pane

0x80d6,	// (0x00021ba9) call2_cli_visual_pane_t1_ParamLimits

0x80d6,	// (0x00021ba9) call2_cli_visual_pane_t1

0x0024,	// (0x00019af7) postcard_message_pane_t1_ParamLimits

0x0024,	// (0x00019af7) postcard_message_pane_t1

0x000c,	// (0x00019adf) postcard_address_pane_t1_ParamLimits

0x000c,	// (0x00019adf) postcard_address_pane_t1

0x843b,	// (0x00021f0e) popup_call3_audio_in_window_ParamLimits

0x843b,	// (0x00021f0e) popup_call3_audio_in_window

0x831f,	// (0x00021df2) bg_popup_call3_in_pane_ParamLimits

0x831f,	// (0x00021df2) bg_popup_call3_in_pane

0x8381,	// (0x00021e54) popup_call3_audio_in_window_g1_ParamLimits

0x8381,	// (0x00021e54) popup_call3_audio_in_window_g1

0x8399,	// (0x00021e6c) popup_call3_audio_in_window_g2_ParamLimits

0x8399,	// (0x00021e6c) popup_call3_audio_in_window_g2

0x83b1,	// (0x00021e84) popup_call3_audio_in_window_g3_ParamLimits

0x83b1,	// (0x00021e84) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x00028fee) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x00028fee) popup_call3_audio_in_window_g

0x83d9,	// (0x00021eac) popup_call3_audio_in_window_t1_ParamLimits

0x83d9,	// (0x00021eac) popup_call3_audio_in_window_t1

0x8401,	// (0x00021ed4) popup_call3_audio_in_window_t2_ParamLimits

0x8401,	// (0x00021ed4) popup_call3_audio_in_window_t2

0x8429,	// (0x00021efc) popup_call3_audio_in_window_t3_ParamLimits

0x8429,	// (0x00021efc) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x00028ff7) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x00028ff7) popup_call3_audio_in_window_t

0xd318,	// (0x00026deb) bg_popup_call3_rect_pane

0xd201,	// (0x00026cd4) bg_popup_call3_rect_pane_g1

0xd1f9,	// (0x00026ccc) bg_popup_call3_rect_pane_g2

0xd1f1,	// (0x00026cc4) bg_popup_call3_rect_pane_g3

0xd211,	// (0x00026ce4) bg_popup_call3_rect_pane_g4

0xd209,	// (0x00026cdc) bg_popup_call3_rect_pane_g5

0xd219,	// (0x00026cec) bg_popup_call3_rect_pane_g6

0xd221,	// (0x00026cf4) bg_popup_call3_rect_pane_g7

0xc963,	// (0x00026436) mup_visualizer_osc_pane

0xc963,	// (0x00026436) mup_visualizer_spec_pane

0x833f,	// (0x00021e12) call3_video_qcif_pane_ParamLimits

0x833f,	// (0x00021e12) call3_video_qcif_pane

0x8351,	// (0x00021e24) call3_video_qcif_uncrop_pane_ParamLimits

0x8351,	// (0x00021e24) call3_video_qcif_uncrop_pane

0x835f,	// (0x00021e32) call3_video_subqcif_pane_ParamLimits

0x835f,	// (0x00021e32) call3_video_subqcif_pane

0x8371,	// (0x00021e44) call3_video_subqcif_uncrop_pane_ParamLimits

0x8371,	// (0x00021e44) call3_video_subqcif_uncrop_pane

0x83c9,	// (0x00021e9c) popup_call3_audio_in_window_g4_ParamLimits

0x83c9,	// (0x00021e9c) popup_call3_audio_in_window_g4

0xc963,	// (0x00026436) mup_spec_half_pane

0xc963,	// (0x00026436) mup_spec_half_pane_cp

0xc963,	// (0x00026436) mup_osc_middle_pane

0xd0a2,	// (0x00026b75) mup_visualizer_osc_pane_g1

0xefd0,	// (0x00028aa3) mup_spec_bar_pane_ParamLimits

0xefd0,	// (0x00028aa3) mup_spec_bar_pane

0xd0a2,	// (0x00026b75) mup_spec_bar_pane_g1

0xd0a2,	// (0x00026b75) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00028b5f) mup_spec_bar_pane_g

0x5e78,	// (0x0001f94b) aid_cale_week_size_cell_pane_ParamLimits

0x5e8d,	// (0x0001f960) bg_cale_heading_pane_ParamLimits

0xd27a,	// (0x00026d4d) bg_cale_pane_cp01_ParamLimits

0x5ead,	// (0x0001f980) cale_week_corner_pane_ParamLimits

0x5ec7,	// (0x0001f99a) cale_week_day_heading_pane_ParamLimits

0x5ee7,	// (0x0001f9ba) cale_week_scroll_pane_g1_ParamLimits

0x5f02,	// (0x0001f9d5) cale_week_scroll_pane_g2_ParamLimits

0x5f15,	// (0x0001f9e8) cale_week_scroll_pane_g3_ParamLimits

0x5f28,	// (0x0001f9fb) cale_week_scroll_pane_g4_ParamLimits

0x5f3b,	// (0x0001fa0e) cale_week_scroll_pane_g5_ParamLimits

0x5f4e,	// (0x0001fa21) cale_week_scroll_pane_g6_ParamLimits

0x5f61,	// (0x0001fa34) cale_week_scroll_pane_g7_ParamLimits

0x5f76,	// (0x0001fa49) cale_week_scroll_pane_g8_ParamLimits

0x5f8b,	// (0x0001fa5e) cale_week_scroll_pane_g9_ParamLimits

0x5f9e,	// (0x0001fa71) cale_week_scroll_pane_g10_ParamLimits

0x5fb1,	// (0x0001fa84) cale_week_scroll_pane_g11_ParamLimits

0x5fc4,	// (0x0001fa97) cale_week_scroll_pane_g12_ParamLimits

0x5fdb,	// (0x0001faae) cale_week_scroll_pane_g13_ParamLimits

0x5ff6,	// (0x0001fac9) cale_week_scroll_pane_g14_ParamLimits

0x6011,	// (0x0001fae4) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00028bd6) cale_week_scroll_pane_g_ParamLimits

0x6041,	// (0x0001fb14) cale_week_time_pane_ParamLimits

0x6056,	// (0x0001fb29) grid_cale_week_pane_ParamLimits

0xd297,	// (0x00026d6a) listscroll_cale_week_pane_t1

0xd2a9,	// (0x00026d7c) scroll_pane_cp08_ParamLimits

0x6a23,	// (0x000204f6) cale_month_corner_pane_ParamLimits

0xd613,	// (0x000270e6) cale_month_pane_t1

0x6ed5,	// (0x000209a8) cale_month_week_pane_ParamLimits

0xe64f,	// (0x00028122) popup_call_status_window_g1_ParamLimits

0x7602,	// (0x000210d5) popup_call_status_window_g2_ParamLimits

0x760e,	// (0x000210e1) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x00028d55) popup_call_status_window_g_ParamLimits

0xd995,	// (0x00027468) aid_call2_pane

0x7b28,	// (0x000215fb) msg_header_pane_g1

0x7c9b,	// (0x0002176e) postcard_address2_pane_ParamLimits

0x7c9b,	// (0x0002176e) postcard_address2_pane

0x7ca7,	// (0x0002177a) postcard_message2_pane_ParamLimits

0x7ca7,	// (0x0002177a) postcard_message2_pane

0x82f1,	// (0x00021dc4) message2_row_pane_ParamLimits

0x82f1,	// (0x00021dc4) message2_row_pane

0x830c,	// (0x00021ddf) address2_row_pane_ParamLimits

0x830c,	// (0x00021ddf) address2_row_pane

0xef9d,	// (0x00028a70) postcard_message2_row_pane_g1

0xefa5,	// (0x00028a78) postcard_message2_row_pane_t1

0xef9d,	// (0x00028a70) address2_row_pane_g1

0xefa5,	// (0x00028a78) address2_row_pane_t1

0x61f6,	// (0x0001fcc9) aid_size_cell_vorec

0xcd8e,	// (0x00026861) main_rss_pane

0xefb3,	// (0x00028a86) rss_list_single_pane_ParamLimits

0xefb3,	// (0x00028a86) rss_list_single_pane

0xefc1,	// (0x00028a94) rss_list_single_pane_t1

0xefc1,	// (0x00028a94) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x00028fe2) rss_list_single_pane_t

0xcd8e,	// (0x00026861) main_camera2_pane

0xcd8e,	// (0x00026861) main_video2_pane

0x4628,	// (0x0001e0fb) cams_zoom_pane_cp2_ParamLimits

0x4628,	// (0x0001e0fb) cams_zoom_pane_cp2

0x4628,	// (0x0001e0fb) image2_vga_pane_ParamLimits

0x4628,	// (0x0001e0fb) image2_vga_pane

0xd9c8,	// (0x0002749b) main_camera2_pane_g1_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g1

0xd9c8,	// (0x0002749b) main_camera2_pane_g2_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g2

0xd9c8,	// (0x0002749b) main_camera2_pane_g3_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g3

0xd9c8,	// (0x0002749b) main_camera2_pane_g4_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g4

0xd9c8,	// (0x0002749b) main_camera2_pane_g5_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g5

0xd9c8,	// (0x0002749b) main_camera2_pane_g6_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g6

0xd9c8,	// (0x0002749b) main_camera2_pane_g7_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g7

0xd9c8,	// (0x0002749b) main_camera2_pane_g8_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x00028ffe) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x00028ffe) main_camera2_pane_g

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t1_ParamLimits

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t1

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t2_ParamLimits

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t2

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t3_ParamLimits

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t3

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t4_ParamLimits

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x00029011) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x00029011) main_camera2_pane_t

0x4c1c,	// (0x0001e6ef) cams_zoom_pane_cp4_ParamLimits

0x4c1c,	// (0x0001e6ef) cams_zoom_pane_cp4

0x4a4f,	// (0x0001e522) image2_cif_pane_ParamLimits

0x4a4f,	// (0x0001e522) image2_cif_pane

0x4628,	// (0x0001e0fb) image2_subqcif_pane_ParamLimits

0x4628,	// (0x0001e0fb) image2_subqcif_pane

0x4c2a,	// (0x0001e6fd) main_video2_pane_g1_ParamLimits

0x4c2a,	// (0x0001e6fd) main_video2_pane_g1

0x4c2a,	// (0x0001e6fd) main_video2_pane_g2_ParamLimits

0x4c2a,	// (0x0001e6fd) main_video2_pane_g2

0x4c2a,	// (0x0001e6fd) main_video2_pane_g3_ParamLimits

0x4c2a,	// (0x0001e6fd) main_video2_pane_g3

0x4c2a,	// (0x0001e6fd) main_video2_pane_g4_ParamLimits

0x4c2a,	// (0x0001e6fd) main_video2_pane_g4

0x4c2a,	// (0x0001e6fd) main_video2_pane_g5_ParamLimits

0x4c2a,	// (0x0001e6fd) main_video2_pane_g5

0x4c2a,	// (0x0001e6fd) main_video2_pane_g6_ParamLimits

0x4c2a,	// (0x0001e6fd) main_video2_pane_g6

0x0005,

0xf54d,	// (0x00029020) main_video2_pane_g_ParamLimits

0xf54d,	// (0x00029020) main_video2_pane_g

0x4c38,	// (0x0001e70b) main_video2_pane_t1_ParamLimits

0x4c38,	// (0x0001e70b) main_video2_pane_t1

0x4c38,	// (0x0001e70b) main_video2_pane_t2_ParamLimits

0x4c38,	// (0x0001e70b) main_video2_pane_t2

0x4c38,	// (0x0001e70b) main_video2_pane_t3_ParamLimits

0x4c38,	// (0x0001e70b) main_video2_pane_t3

0x0002,

0xf55a,	// (0x0002902d) main_video2_pane_t_ParamLimits

0xf55a,	// (0x0002902d) main_video2_pane_t

0x818f,	// (0x00021c62) call_muted_g2

0x0001,

0xf501,	// (0x00028fd4) call_muted_g

0xcd8e,	// (0x00026861) main_mup2_pane

0xd080,	// (0x00026b53) main_mup2_pane_g1_ParamLimits

0xd080,	// (0x00026b53) main_mup2_pane_g1

0xd080,	// (0x00026b53) main_mup2_pane_g2_ParamLimits

0xd080,	// (0x00026b53) main_mup2_pane_g2

0x1846,	// (0x0001b319) main_mup_pane_g13_cp1

0x4636,	// (0x0001e109) mup_volume_pane_cp1

0xd080,	// (0x00026b53) main_mup2_pane_g4_ParamLimits

0xd080,	// (0x00026b53) main_mup2_pane_g4

0xd080,	// (0x00026b53) main_mup2_pane_g5_ParamLimits

0xd080,	// (0x00026b53) main_mup2_pane_g5

0xd080,	// (0x00026b53) main_mup2_pane_g6_ParamLimits

0xd080,	// (0x00026b53) main_mup2_pane_g6

0xd080,	// (0x00026b53) main_mup2_pane_g7_ParamLimits

0xd080,	// (0x00026b53) main_mup2_pane_g7

0x0006,

0xf561,	// (0x00029034) main_mup2_pane_g_ParamLimits

0xf561,	// (0x00029034) main_mup2_pane_g

0xd08e,	// (0x00026b61) main_mup2_pane_t1_ParamLimits

0xd08e,	// (0x00026b61) main_mup2_pane_t1

0xd08e,	// (0x00026b61) main_mup2_pane_t2_ParamLimits

0xd08e,	// (0x00026b61) main_mup2_pane_t2

0xd08e,	// (0x00026b61) main_mup2_pane_t3_ParamLimits

0xd08e,	// (0x00026b61) main_mup2_pane_t3

0xd08e,	// (0x00026b61) main_mup2_pane_t4_ParamLimits

0xd08e,	// (0x00026b61) main_mup2_pane_t4

0xd08e,	// (0x00026b61) main_mup2_pane_t5_ParamLimits

0xd08e,	// (0x00026b61) main_mup2_pane_t5

0xd08e,	// (0x00026b61) main_mup2_pane_t6_ParamLimits

0xd08e,	// (0x00026b61) main_mup2_pane_t6

0x0005,

0xf570,	// (0x00029043) main_mup2_pane_t_ParamLimits

0xf570,	// (0x00029043) main_mup2_pane_t

0x007e,	// (0x00019b51) mup2_visualizer_pane_ParamLimits

0x007e,	// (0x00019b51) mup2_visualizer_pane

0x007e,	// (0x00019b51) mup_progress_pane_cp_ParamLimits

0x007e,	// (0x00019b51) mup_progress_pane_cp

0x4c62,	// (0x0001e735) mup_volume_pane_cp_ParamLimits

0x4c62,	// (0x0001e735) mup_volume_pane_cp

0xd064,	// (0x00026b37) mup2_visualizer_pane_g1_ParamLimits

0xd064,	// (0x00026b37) mup2_visualizer_pane_g1

0xd072,	// (0x00026b45) mup2_visualizer_pane_g2_ParamLimits

0xd072,	// (0x00026b45) mup2_visualizer_pane_g2

0xd072,	// (0x00026b45) mup2_visualizer_pane_g3_ParamLimits

0xd072,	// (0x00026b45) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00028b4f) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00028b4f) mup2_visualizer_pane_g

0xc963,	// (0x00026436) aid_size_cell_fmradio

0x4a38,	// (0x0001e50b) aid_height_parent_landcape

0xd471,	// (0x00026f44) wml_content_pane_cp

0xd479,	// (0x00026f4c) wml_tabs_pane

0xd482,	// (0x00026f55) popup_wml_miniature_window

0xd48a,	// (0x00026f5d) scroll_pane_cp021

0xd49e,	// (0x00026f71) wml_content_pane_comp8

0xcd8e,	// (0x00026861) bg_popup_sub_pane_cp05

0x00a2,	// (0x00019b75) popup_wml_miniature_window_g1

0x00aa,	// (0x00019b7d) wml_miniature_view_pane

0x844a,	// (0x00021f1d) aid_size_wml_view

0x8452,	// (0x00021f25) wml_miniature_view_pane_g1

0x845b,	// (0x00021f2e) wml_miniature_view_pane_g2

0x8464,	// (0x00021f37) wml_miniature_view_pane_g3

0x846c,	// (0x00021f3f) wml_miniature_view_pane_g4

0x8474,	// (0x00021f47) wml_miniature_view_pane_g5

0x847c,	// (0x00021f4f) wml_miniature_view_pane_g6

0x8484,	// (0x00021f57) wml_miniature_view_pane_g7

0x848c,	// (0x00021f5f) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x00029050) wml_miniature_view_pane_g

0x00b2,	// (0x00019b85) background_graphic_ParamLimits

0x00b2,	// (0x00019b85) background_graphic

0x00be,	// (0x00019b91) wml_tabs_2_pane

0x00c7,	// (0x00019b9a) wml_tabs_3_pane_ParamLimits

0x00c7,	// (0x00019b9a) wml_tabs_3_pane

0x00d9,	// (0x00019bac) wml_tabs_4_pane_ParamLimits

0x00d9,	// (0x00019bac) wml_tabs_4_pane

0x00ef,	// (0x00019bc2) wml_tabs_5_pane_ParamLimits

0x00ef,	// (0x00019bc2) wml_tabs_5_pane

0x0109,	// (0x00019bdc) wml_tabs_pane_g2_ParamLimits

0x0109,	// (0x00019bdc) wml_tabs_pane_g2

0x011e,	// (0x00019bf1) wml_tabs_pane_g3_ParamLimits

0x011e,	// (0x00019bf1) wml_tabs_pane_g3

0x0133,	// (0x00019c06) wml_tabs_2_active_pane_ParamLimits

0x0133,	// (0x00019c06) wml_tabs_2_active_pane

0x0133,	// (0x00019c06) wml_tabs_2_passive_pane_ParamLimits

0x0133,	// (0x00019c06) wml_tabs_2_passive_pane

0x8494,	// (0x00021f67) wml_tabs_3_active_pane_cp_ParamLimits

0x8494,	// (0x00021f67) wml_tabs_3_active_pane_cp

0x84a5,	// (0x00021f78) wml_tabs_3_passive_pane_ParamLimits

0x84a5,	// (0x00021f78) wml_tabs_3_passive_pane

0x84b6,	// (0x00021f89) wml_tabs_3_passive_pane_cp_ParamLimits

0x84b6,	// (0x00021f89) wml_tabs_3_passive_pane_cp

0x84c7,	// (0x00021f9a) tabs_4_active_pane

0x84cf,	// (0x00021fa2) tabs_4_passive_pane

0x84d7,	// (0x00021faa) tabs_4_passive_pane_cp

0x84df,	// (0x00021fb2) tabs_4_passive_pane_cp2

0x8103,	// (0x00021bd6) aid_height_text

0x007e,	// (0x00019b51) mup_volume_cont_pane_ParamLimits

0x007e,	// (0x00019b51) mup_volume_cont_pane

0xc963,	// (0x00026436) aid_size_cell_pinb

0xc963,	// (0x00026436) aid_size_list_pinb

0x007e,	// (0x00019b51) mup2_volume_cont_pane_ParamLimits

0x007e,	// (0x00019b51) mup2_volume_cont_pane

0x4c4c,	// (0x0001e71f) mup2_volume_cont_pane_g1_ParamLimits

0x4c4c,	// (0x0001e71f) mup2_volume_cont_pane_g1

0x43ba,	// (0x0001de8d) aid_size_cell_touch_ParamLimits

0x43ba,	// (0x0001de8d) aid_size_cell_touch

0x4640,	// (0x0001e113) touch_pane_ParamLimits

0x4640,	// (0x0001e113) touch_pane

0x4636,	// (0x0001e109) main_rss2_pane

0x0160,	// (0x00019c33) listscroll_rss2_pane

0x0169,	// (0x00019c3c) rss2_navigation_pane

0x0171,	// (0x00019c44) list_rss2_pane

0xdacb,	// (0x0002759e) scroll_pane_cp22

0x0179,	// (0x00019c4c) rss2_navigation_pane_g1

0x0182,	// (0x00019c55) rss2_navigation_pane_g2

0x018a,	// (0x00019c5d) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x00029061) rss2_navigation_pane_g

0x0192,	// (0x00019c65) rss2_navigation_pane_t1

0x84e7,	// (0x00021fba) rss2_list_single_pane_ParamLimits

0x84e7,	// (0x00021fba) rss2_list_single_pane

0x01a0,	// (0x00019c73) rss2_list_single_pane_t2

0x01ae,	// (0x00019c81) rss2_list_single_pane_t3_ParamLimits

0x01ae,	// (0x00019c81) rss2_list_single_pane_t3

0x01cb,	// (0x00019c9e) rss2_list_single_pane_t4

0x7499,	// (0x00020f6c) smil_status_pane_g1

0x4a4f,	// (0x0001e522) main_image2_pane_ParamLimits

0x4a4f,	// (0x0001e522) main_image2_pane

0xd9c8,	// (0x0002749b) main_camera2_pane_g9_ParamLimits

0xd9c8,	// (0x0002749b) main_camera2_pane_g9

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t5_ParamLimits

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t5

0x4c08,	// (0x0001e6db) main_camera2_pane_t6_ParamLimits

0x4c08,	// (0x0001e6db) main_camera2_pane_t6

0x8518,	// (0x00021feb) main_image2_pane_g1_ParamLimits

0x8518,	// (0x00021feb) main_image2_pane_g1

0x7e3b,	// (0x0002190e) smil2_video_pane_ParamLimits

0x7e3b,	// (0x0002190e) smil2_video_pane

0x43ee,	// (0x0001dec1) aid_zoom_text_primary_cp

0x45dd,	// (0x0001e0b0) popup_preview_fixed_window

0xd3da,	// (0x00026ead) im_reading_pane_g1

0x4be6,	// (0x0001e6b9) cams2_bc_adjust_pane_cp_ParamLimits

0x4be6,	// (0x0001e6b9) cams2_bc_adjust_pane_cp

0x4628,	// (0x0001e0fb) cams2_bc_adjust_pane_ParamLimits

0x4628,	// (0x0001e0fb) cams2_bc_adjust_pane

0x1846,	// (0x0001b319) cams2_bc_adjust_pane_g1

0x4636,	// (0x0001e109) cams2_slider_pane

0x1846,	// (0x0001b319) cams2_slider_pane_g1

0x1846,	// (0x0001b319) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x00029068) cams2_slider_pane_g

0x46b1,	// (0x0001e184) calc_display_pane_ParamLimits

0x46cf,	// (0x0001e1a2) calc_paper_pane_ParamLimits

0x46eb,	// (0x0001e1be) grid_calc_pane_ParamLimits

0x49a3,	// (0x0001e476) popup_clock_digital_window_t1_ParamLimits

0xdf9b,	// (0x00027a6e) main_image_pane_t1

0x4697,	// (0x0001e16a) aid_size_cell_calc_ParamLimits

0x4697,	// (0x0001e16a) aid_size_cell_calc

0x4a80,	// (0x0001e553) popup_blid_sat_info2_window_ParamLimits

0x4a80,	// (0x0001e553) popup_blid_sat_info2_window

0x01d9,	// (0x00019cac) aid_size_cell_blid

0x007e,	// (0x00019b51) bg_popup_window_pane_cp07

0x01f6,	// (0x00019cc9) grid_popup_blid_pane

0x0200,	// (0x00019cd3) heading_pane_cp05_ParamLimits

0x0200,	// (0x00019cd3) heading_pane_cp05

0x02ca,	// (0x00019d9d) cell_popup_blid_pane_ParamLimits

0x02ca,	// (0x00019d9d) cell_popup_blid_pane

0x02ee,	// (0x00019dc1) cell_popup_blid_pane_g1

0x02f6,	// (0x00019dc9) cell_popup_blid_pane_t1

0x007e,	// (0x00019b51) mup2_indicator_pane_ParamLimits

0x007e,	// (0x00019b51) mup2_indicator_pane

0xc963,	// (0x00026436) mup2_visualizer_osc_pane

0x008c,	// (0x00019b5f) mup2_visualizer_spec_pane_ParamLimits

0x008c,	// (0x00019b5f) mup2_visualizer_spec_pane

0xc963,	// (0x00026436) mup2_spec_half_pane

0xc963,	// (0x00026436) mup2_spec_half_pane_cp

0x0304,	// (0x00019dd7) mup2_spec_bar_pane_ParamLimits

0x0304,	// (0x00019dd7) mup2_spec_bar_pane

0xd0a2,	// (0x00026b75) mup2_spec_bar_pane_g1

0x0323,	// (0x00019df6) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x0002908e) mup2_spec_bar_pane_g

0xc963,	// (0x00026436) mup2_osc_middle_pane

0xd0a2,	// (0x00026b75) mup2_visualizer_osc_pane_g1

0xc98d,	// (0x00026460) popup_number_entry_window_t1_ParamLimits

0xc9a0,	// (0x00026473) popup_number_entry_window_t2_ParamLimits

0xc9b2,	// (0x00026485) popup_number_entry_window_t3_ParamLimits

0x5ca2,	// (0x0001f775) popup_number_entry_window_t5_ParamLimits

0x5ca2,	// (0x0001f775) popup_number_entry_window_t5

0xf01d,	// (0x00028af0) popup_number_entry_window_t_ParamLimits

0xc9c4,	// (0x00026497) text_title_cp2_ParamLimits

0x49e2,	// (0x0001e4b5) aid_hotspot_pointer_text2_pane

0x4a2c,	// (0x0001e4ff) main_viewer_pane_g9_ParamLimits

0x4a2c,	// (0x0001e4ff) main_viewer_pane_g9

0xd613,	// (0x000270e6) cale_month_pane_t1_ParamLimits

0xd650,	// (0x00027123) bg_cale_pane_ParamLimits

0xd668,	// (0x0002713b) list_cale_pane_ParamLimits

0xd679,	// (0x0002714c) listscroll_cale_day_pane_t1

0xd68b,	// (0x0002715e) scroll_pane_cp09_ParamLimits

0x786e,	// (0x00021341) main_mup_eq_pane_t1_ParamLimits

0x786e,	// (0x00021341) main_mup_eq_pane_t1

0x7888,	// (0x0002135b) main_mup_eq_pane_t2_ParamLimits

0x7888,	// (0x0002135b) main_mup_eq_pane_t2

0x78a2,	// (0x00021375) main_mup_eq_pane_t3_ParamLimits

0x78a2,	// (0x00021375) main_mup_eq_pane_t3

0x78ba,	// (0x0002138d) main_mup_eq_pane_t4_ParamLimits

0x78ba,	// (0x0002138d) main_mup_eq_pane_t4

0x78d2,	// (0x000213a5) main_mup_eq_pane_t5_ParamLimits

0x78d2,	// (0x000213a5) main_mup_eq_pane_t5

0x78ea,	// (0x000213bd) main_mup_eq_pane_t6_ParamLimits

0x78ea,	// (0x000213bd) main_mup_eq_pane_t6

0x78fe,	// (0x000213d1) main_mup_eq_pane_t7_ParamLimits

0x78fe,	// (0x000213d1) main_mup_eq_pane_t7

0x7912,	// (0x000213e5) main_mup_eq_pane_t8_ParamLimits

0x7912,	// (0x000213e5) main_mup_eq_pane_t8

0x7928,	// (0x000213fb) main_mup_eq_pane_t9_ParamLimits

0x7928,	// (0x000213fb) main_mup_eq_pane_t9

0x7940,	// (0x00021413) main_mup_eq_pane_t10_ParamLimits

0x7940,	// (0x00021413) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x00028e4f) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x00028e4f) main_mup_eq_pane_t

0x79fd,	// (0x000214d0) mup_equalizer_pane_cp5_ParamLimits

0x7a13,	// (0x000214e6) mup_equalizer_pane_cp6_ParamLimits

0x7a2b,	// (0x000214fe) mup_equalizer_pane_cp7_ParamLimits

0x4636,	// (0x0001e109) main_gallery_pane

0xefef,	// (0x00028ac2) smil2_volume_pane

0xf00a,	// (0x00028add) smil_status_volume_pane_g1_ParamLimits

0xeff7,	// (0x00028aca) smil_status_volume_pane_g2_ParamLimits

0x4bc4,	// (0x0001e697) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x00028fe7) smil_status_volume_pane_g_ParamLimits

0x007e,	// (0x00019b51) bg_popup_window_pane_cp07_ParamLimits

0x01e1,	// (0x00019cb4) blid_firmament_pane

0xd056,	// (0x00026b29) aid_size_cell_gallery_ParamLimits

0xd056,	// (0x00026b29) aid_size_cell_gallery

0xd056,	// (0x00026b29) grid_gallery_pane_ParamLimits

0xd056,	// (0x00026b29) grid_gallery_pane

0xde06,	// (0x000278d9) cell_gallery_pane_ParamLimits

0xde06,	// (0x000278d9) cell_gallery_pane

0xcb45,	// (0x00026618) bg_cell_gallery_focus_pane_ParamLimits

0xcb45,	// (0x00026618) bg_cell_gallery_focus_pane

0xd064,	// (0x00026b37) cell_gallery_pane_g1_ParamLimits

0xd064,	// (0x00026b37) cell_gallery_pane_g1

0xd064,	// (0x00026b37) cell_gallery_pane_g2_ParamLimits

0xd064,	// (0x00026b37) cell_gallery_pane_g2

0xd064,	// (0x00026b37) cell_gallery_pane_g3_ParamLimits

0xd064,	// (0x00026b37) cell_gallery_pane_g3

0xd072,	// (0x00026b45) cell_gallery_pane_g4_ParamLimits

0xd072,	// (0x00026b45) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x00029093) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x00029093) cell_gallery_pane_g

0x032d,	// (0x00019e00) bg_cell_gallery_focus_pane_g1

0x0335,	// (0x00019e08) bg_cell_gallery_focus_pane_g2

0x033d,	// (0x00019e10) bg_cell_gallery_focus_pane_g3

0x0345,	// (0x00019e18) bg_cell_gallery_focus_pane_g4

0x034d,	// (0x00019e20) bg_cell_gallery_focus_pane_g5

0x0355,	// (0x00019e28) bg_cell_gallery_focus_pane_g6

0x035d,	// (0x00019e30) bg_cell_gallery_focus_pane_g7

0x0365,	// (0x00019e38) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x0002909c) bg_cell_gallery_focus_pane_g

0x036d,	// (0x00019e40) aid_firma_cardinal

0x0381,	// (0x00019e54) blid_firmament_pane_t1

0x0398,	// (0x00019e6b) blid_firmament_pane_t2

0x03af,	// (0x00019e82) blid_firmament_pane_t3

0x03c6,	// (0x00019e99) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x000290ad) blid_firmament_pane_t

0x03dd,	// (0x00019eb0) blid_sat_info_pane

0xd0a2,	// (0x00026b75) blid_sat_info_pane_g1

0xd0a2,	// (0x00026b75) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00028b5f) blid_sat_info_pane_g

0x03ed,	// (0x00019ec0) blid_sat_info_pane_t1

0x03fb,	// (0x00019ece) smil2_volume_content_pane

0x0404,	// (0x00019ed7) smil2_volume_pane_g1

0xd242,	// (0x00026d15) smil2_volume_content_pane_g1

0x040c,	// (0x00019edf) smil2_volume_content_pane_g2

0x0415,	// (0x00019ee8) smil2_volume_content_pane_g3

0x041e,	// (0x00019ef1) smil2_volume_content_pane_g4

0x0427,	// (0x00019efa) smil2_volume_content_pane_g5

0x0430,	// (0x00019f03) smil2_volume_content_pane_g6

0x0439,	// (0x00019f0c) smil2_volume_content_pane_g7

0x0442,	// (0x00019f15) smil2_volume_content_pane_g8

0x044b,	// (0x00019f1e) smil2_volume_content_pane_g9

0x0454,	// (0x00019f27) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x000290b6) smil2_volume_content_pane_g

0x60d7,	// (0x0001fbaa) cale_week_day_heading_pane_t1_ParamLimits

0x60f2,	// (0x0001fbc5) cale_week_day_heading_pane_t2_ParamLimits

0x610d,	// (0x0001fbe0) cale_week_day_heading_pane_t3_ParamLimits

0x6128,	// (0x0001fbfb) cale_week_day_heading_pane_t4_ParamLimits

0x6143,	// (0x0001fc16) cale_week_day_heading_pane_t5_ParamLimits

0x615e,	// (0x0001fc31) cale_week_day_heading_pane_t6_ParamLimits

0x6179,	// (0x0001fc4c) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00028bf7) cale_week_day_heading_pane_t_ParamLimits

0xd2c6,	// (0x00026d99) bg_cale_side_pane_ParamLimits

0x4803,	// (0x0001e2d6) cale_week_time_pane_t1_ParamLimits

0x481d,	// (0x0001e2f0) cale_week_time_pane_t2_ParamLimits

0x4837,	// (0x0001e30a) cale_week_time_pane_t3_ParamLimits

0x4851,	// (0x0001e324) cale_week_time_pane_t4_ParamLimits

0x486b,	// (0x0001e33e) cale_week_time_pane_t5_ParamLimits

0x4885,	// (0x0001e358) cale_week_time_pane_t6_ParamLimits

0x48a3,	// (0x0001e376) cale_week_time_pane_t7_ParamLimits

0x48c5,	// (0x0001e398) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00028c06) cale_week_time_pane_t_ParamLimits

0x6194,	// (0x0001fc67) cell_cale_week_pane_g2_ParamLimits

0xd2c6,	// (0x00026d99) bg_cale_side_pane_cp01_ParamLimits

0x72c6,	// (0x00020d99) cale_month_week_pane_t1_ParamLimits

0x72df,	// (0x00020db2) cale_month_week_pane_t2_ParamLimits

0x72f8,	// (0x00020dcb) cale_month_week_pane_t3_ParamLimits

0x7311,	// (0x00020de4) cale_month_week_pane_t4_ParamLimits

0x732a,	// (0x00020dfd) cale_month_week_pane_t5_ParamLimits

0x734b,	// (0x00020e1e) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00028cd4) cale_month_week_pane_t_ParamLimits

0x48f3,	// (0x0001e3c6) cell_cale_month_pane_g1_ParamLimits

0x4636,	// (0x0001e109) main_cale_event_viewer_pane

0xc963,	// (0x00026436) listscroll_cale_event_viewer_pane

0x045d,	// (0x00019f30) list_cale_ev_pane

0x0465,	// (0x00019f38) scroll_pane_cp023

0x0471,	// (0x00019f44) field_cale_ev_pane_ParamLimits

0x0471,	// (0x00019f44) field_cale_ev_pane

0x048f,	// (0x00019f62) field_cale_ev_content_pane_ParamLimits

0x048f,	// (0x00019f62) field_cale_ev_content_pane

0x049b,	// (0x00019f6e) field_cale_ev_pane_g1_ParamLimits

0x049b,	// (0x00019f6e) field_cale_ev_pane_g1

0x04a7,	// (0x00019f7a) field_cale_ev_pane_g2_ParamLimits

0x04a7,	// (0x00019f7a) field_cale_ev_pane_g2

0x04bf,	// (0x00019f92) field_cale_ev_pane_g3_ParamLimits

0x04bf,	// (0x00019f92) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x000290cb) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x000290cb) field_cale_ev_pane_g

0x04d7,	// (0x00019faa) field_cale_ev_pane_t1_ParamLimits

0x04d7,	// (0x00019faa) field_cale_ev_pane_t1

0xd24b,	// (0x00026d1e) field_cale_ev_content_pane_t1_ParamLimits

0xd24b,	// (0x00026d1e) field_cale_ev_content_pane_t1

0xde88,	// (0x0002795b) bg_button_pane_cp01

0x5e68,	// (0x0001f93b) listscroll_cale_week_pane_ParamLimits

0x47fa,	// (0x0001e2cd) popup_toolbar_window_cp01

0xd297,	// (0x00026d6a) listscroll_cale_week_pane_t1_ParamLimits

0x5e68,	// (0x0001f93b) listscroll_cale_day_pane_ParamLimits

0xd3bf,	// (0x00026e92) popup_toolbar_window_cp02

0xd679,	// (0x0002714c) listscroll_cale_day_pane_t1_ParamLimits

0x5e68,	// (0x0001f93b) main_cale_month_pane_ParamLimits

0x4b87,	// (0x0001e65a) popup_toolbar_window_cp03_ParamLimits

0x4b87,	// (0x0001e65a) popup_toolbar_window_cp03

0x7d51,	// (0x00021824) main_image_pane_g2_ParamLimits

0x7d51,	// (0x00021824) main_image_pane_g2

0x7d5d,	// (0x00021830) main_image_pane_g3_ParamLimits

0x7d5d,	// (0x00021830) main_image_pane_g3

0x0002,

0xf40e,	// (0x00028ee1) main_image_pane_g_ParamLimits

0xf40e,	// (0x00028ee1) main_image_pane_g

0xdf9b,	// (0x00027a6e) main_image_pane_t1_ParamLimits

0x7d69,	// (0x0002183c) main_image_pane_t2_ParamLimits

0x7d69,	// (0x0002183c) main_image_pane_t2

0x7d7b,	// (0x0002184e) main_image_pane_t3_ParamLimits

0x7d7b,	// (0x0002184e) main_image_pane_t3

0x7d8d,	// (0x00021860) main_image_pane_t4_ParamLimits

0x7d8d,	// (0x00021860) main_image_pane_t4

0x0003,

0xf415,	// (0x00028ee8) main_image_pane_t_ParamLimits

0xf415,	// (0x00028ee8) main_image_pane_t

0x7d9f,	// (0x00021872) popup_image_details_window_cp01

0x7da9,	// (0x0002187c) popup_toobar_trans_pane_cp01_ParamLimits

0x7da9,	// (0x0002187c) popup_toobar_trans_pane_cp01

0x4ad7,	// (0x0001e5aa) popup_image_details_window_ParamLimits

0x4ad7,	// (0x0001e5aa) popup_image_details_window

0x4ae5,	// (0x0001e5b8) popup_image_focus_window

0x4628,	// (0x0001e0fb) camera2_autofocus_pane_ParamLimits

0x4628,	// (0x0001e0fb) camera2_autofocus_pane

0xc963,	// (0x00026436) bg_popup_sub_pane_cp06

0x04ee,	// (0x00019fc1) popup_image_focus_window_g1

0x04f6,	// (0x00019fc9) popup_image_focus_window_g2

0x04fe,	// (0x00019fd1) popup_image_focus_window_g3

0x0506,	// (0x00019fd9) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x000290d2) popup_image_focus_window_g

0x050e,	// (0x00019fe1) popup_image_focus_window_t1

0x051c,	// (0x00019fef) popup_image_focus_window_t2

0x052c,	// (0x00019fff) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x000290db) popup_image_focus_window_t

0xd064,	// (0x00026b37) camera2_autofocus_pane_g1

0xcb45,	// (0x00026618) bg_tb_trans_pane_cp01

0x053a,	// (0x0001a00d) popup_image_details_window_g1

0x054d,	// (0x0001a020) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x000290ed) popup_image_details_window_g

0x0576,	// (0x0001a049) popup_image_details_window_t1

0x0588,	// (0x0001a05b) popup_image_details_window_t2

0x05a1,	// (0x0001a074) popup_image_details_window_t3

0x05b5,	// (0x0001a088) popup_image_details_window_t4

0x05d0,	// (0x0001a0a3) popup_image_details_window_t5

0x0004,

0xf621,	// (0x000290f4) popup_image_details_window_t

0xd0ec,	// (0x00026bbf) bg_calc_paper_pane_ParamLimits

0x4636,	// (0x0001e109) grid_highlight_pane_cp013

0x4717,	// (0x0001e1ea) list_calc_pane_ParamLimits

0x4729,	// (0x0001e1fc) scroll_pane_cp024

0xd100,	// (0x00026bd3) bg_calc_display_pane_ParamLimits

0x4731,	// (0x0001e204) calc_display_pane_t1_ParamLimits

0x4746,	// (0x0001e219) calc_display_pane_t2_ParamLimits

0x475b,	// (0x0001e22e) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00028b77) calc_display_pane_t_ParamLimits

0x47c4,	// (0x0001e297) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00028b94) cell_calc_pane_g

0x47cd,	// (0x0001e2a0) cell_calc_pane_t1

0xd155,	// (0x00026c28) grid_highlight_pane_cp02_ParamLimits

0xd16b,	// (0x00026c3e) toolbar_button_pane_cp01_ParamLimits

0xd16b,	// (0x00026c3e) toolbar_button_pane_cp01

0xdfe0,	// (0x00027ab3) temp_image_control_pane_ParamLimits

0xdfe0,	// (0x00027ab3) temp_image_control_pane

0x4a4f,	// (0x0001e522) main_mp3_pane

0x05ea,	// (0x0001a0bd) temp_image_control_pane_g1_ParamLimits

0x05ea,	// (0x0001a0bd) temp_image_control_pane_g1

0x05f8,	// (0x0001a0cb) temp_image_control_pane_g2_ParamLimits

0x05f8,	// (0x0001a0cb) temp_image_control_pane_g2

0x060a,	// (0x0001a0dd) temp_image_control_pane_g3_ParamLimits

0x060a,	// (0x0001a0dd) temp_image_control_pane_g3

0x8524,	// (0x00021ff7) temp_image_control_pane_g4_ParamLimits

0x8524,	// (0x00021ff7) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x000290ff) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x000290ff) temp_image_control_pane_g

0x05ea,	// (0x0001a0bd) main_mp3_pane_g1

0x8535,	// (0x00022008) main_mp3_pane_g2

0x0007,

0xf635,	// (0x00029108) main_mp3_pane_g

0x063f,	// (0x0001a112) main_mp3_pane_t1

0xd072,	// (0x00026b45) main_camera_pane_g8_ParamLimits

0xd072,	// (0x00026b45) main_camera_pane_g8

0x6334,	// (0x0001fe07) main_video_pane_g7_ParamLimits

0x6334,	// (0x0001fe07) main_video_pane_g7

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t7_ParamLimits

0x4bf4,	// (0x0001e6c7) main_camera2_pane_t7

0xd431,	// (0x00026f04) scroll_pane_cp025_ParamLimits

0xd431,	// (0x00026f04) scroll_pane_cp025

0xd445,	// (0x00026f18) scroll_pane_cp026_ParamLimits

0xd445,	// (0x00026f18) scroll_pane_cp026

0xd454,	// (0x00026f27) wml_content_pane_ParamLimits

0x4636,	// (0x0001e109) main_touch_calib_pane

0x85d9,	// (0x000220ac) main_touch_calib_pane_g1

0x85e5,	// (0x000220b8) main_touch_calib_pane_g2

0x85f1,	// (0x000220c4) main_touch_calib_pane_g3

0x85fd,	// (0x000220d0) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x00029126) main_touch_calib_pane_g

0x8609,	// (0x000220dc) main_touch_calib_pane_t1

0x8622,	// (0x000220f5) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x0002912f) main_touch_calib_pane_t

0xdba7,	// (0x0002767a) mup_progress_pane_cp02

0xdbdc,	// (0x000276af) navi_pane_g1

0xdc97,	// (0x0002776a) navi_pane_mp_t3

0x4a4f,	// (0x0001e522) main_mp3_pane_ParamLimits

0x82a5,	// (0x00021d78) navi_pane_ParamLimits

0x05ea,	// (0x0001a0bd) main_mp3_pane_g1_ParamLimits

0x8535,	// (0x00022008) main_mp3_pane_g2_ParamLimits

0x8541,	// (0x00022014) main_mp3_pane_g3_ParamLimits

0x8541,	// (0x00022014) main_mp3_pane_g3

0x854d,	// (0x00022020) main_mp3_pane_g4_ParamLimits

0x854d,	// (0x00022020) main_mp3_pane_g4

0xd064,	// (0x00026b37) main_mp3_pane_g5_ParamLimits

0xd064,	// (0x00026b37) main_mp3_pane_g5

0x061a,	// (0x0001a0ed) main_mp3_pane_g6_ParamLimits

0x061a,	// (0x0001a0ed) main_mp3_pane_g6

0x0627,	// (0x0001a0fa) main_mp3_pane_g7_ParamLimits

0x0627,	// (0x0001a0fa) main_mp3_pane_g7

0x0633,	// (0x0001a106) main_mp3_pane_g8_ParamLimits

0x0633,	// (0x0001a106) main_mp3_pane_g8

0xf635,	// (0x00029108) main_mp3_pane_g_ParamLimits

0x8559,	// (0x0002202c) main_mp3_pane_t2

0x8569,	// (0x0002203c) main_mp3_pane_t3

0x064d,	// (0x0001a120) main_mp3_pane_t4

0x065b,	// (0x0001a12e) main_mp3_pane_t5

0x0005,

0xf646,	// (0x00029119) main_mp3_pane_t

0x0669,	// (0x0001a13c) mup_progress_pane_cp01

0x43ee,	// (0x0001dec1) aid_zoom_text_secondary2

0x045d,	// (0x00019f30) list_cale_ev2_pane

0x0465,	// (0x00019f38) scroll_pane_cp023_ParamLimits

0x867d,	// (0x00022150) field_cale_ev2_pane_ParamLimits

0x867d,	// (0x00022150) field_cale_ev2_pane

0x86a6,	// (0x00022179) field_cale_ev2_pane_g1_ParamLimits

0x86a6,	// (0x00022179) field_cale_ev2_pane_g1

0x86b2,	// (0x00022185) field_cale_ev2_pane_g2_ParamLimits

0x86b2,	// (0x00022185) field_cale_ev2_pane_g2

0x86ca,	// (0x0002219d) field_cale_ev2_pane_g3_ParamLimits

0x86ca,	// (0x0002219d) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x0002913a) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x0002913a) field_cale_ev2_pane_g

0x86e2,	// (0x000221b5) field_cale_ev2_pane_t1_ParamLimits

0x86e2,	// (0x000221b5) field_cale_ev2_pane_t1

0x86f9,	// (0x000221cc) field_cale_ev2_pane_t2_ParamLimits

0x86f9,	// (0x000221cc) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x00029143) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x00029143) field_cale_ev2_pane_t

0x7c65,	// (0x00021738) main_postcard_pane_g5_ParamLimits

0x7c65,	// (0x00021738) main_postcard_pane_g5

0x7c73,	// (0x00021746) main_postcard_pane_g6_ParamLimits

0x7c73,	// (0x00021746) main_postcard_pane_g6

0xd056,	// (0x00026b29) camera2_autofocus_pane_cp_ParamLimits

0xd056,	// (0x00026b29) camera2_autofocus_pane_cp

0x4a4f,	// (0x0001e522) main_mup3_pane

0x874d,	// (0x00022220) main_mup3_pane_g1_ParamLimits

0x874d,	// (0x00022220) main_mup3_pane_g1

0x879c,	// (0x0002226f) main_mup3_pane_g2_ParamLimits

0x879c,	// (0x0002226f) main_mup3_pane_g2

0x87ff,	// (0x000222d2) main_mup3_pane_g3_ParamLimits

0x87ff,	// (0x000222d2) main_mup3_pane_g3

0x885e,	// (0x00022331) main_mup3_pane_g4_ParamLimits

0x885e,	// (0x00022331) main_mup3_pane_g4

0x88bd,	// (0x00022390) main_mup3_pane_g5_ParamLimits

0x88bd,	// (0x00022390) main_mup3_pane_g5

0x891c,	// (0x000223ef) main_mup3_pane_g6_ParamLimits

0x891c,	// (0x000223ef) main_mup3_pane_g6

0xd072,	// (0x00026b45) main_mup3_pane_g7_ParamLimits

0xd072,	// (0x00026b45) main_mup3_pane_g7

0x0007,

0xf680,	// (0x00029153) main_mup3_pane_g_ParamLimits

0xf680,	// (0x00029153) main_mup3_pane_g

0x898c,	// (0x0002245f) main_mup3_pane_t1_ParamLimits

0x898c,	// (0x0002245f) main_mup3_pane_t1

0x8a6d,	// (0x00022540) main_mup3_pane_t2_ParamLimits

0x8a6d,	// (0x00022540) main_mup3_pane_t2

0x8b4e,	// (0x00022621) main_mup3_pane_t4_ParamLimits

0x8b4e,	// (0x00022621) main_mup3_pane_t4

0x8b60,	// (0x00022633) main_mup3_pane_t5_ParamLimits

0x8b60,	// (0x00022633) main_mup3_pane_t5

0x8c26,	// (0x000226f9) main_mup3_pane_t6_ParamLimits

0x8c26,	// (0x000226f9) main_mup3_pane_t6

0x0005,

0xf691,	// (0x00029164) main_mup3_pane_t_ParamLimits

0xf691,	// (0x00029164) main_mup3_pane_t

0x8cc3,	// (0x00022796) mup3_progress_pane_ParamLimits

0x8cc3,	// (0x00022796) mup3_progress_pane

0x1192,	// (0x0001ac65) popup_mup3_control_window_ParamLimits

0x1192,	// (0x0001ac65) popup_mup3_control_window

0x067d,	// (0x0001a150) popup_mup3_text_window

0x8d26,	// (0x000227f9) mup3_progress_pane_t1

0x8d45,	// (0x00022818) mup3_progress_pane_t2

0x0685,	// (0x0001a158) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x00029171) mup3_progress_pane_t

0x06a2,	// (0x0001a175) mup_progress_pane_cp03

0x06b2,	// (0x0001a185) bg_tb_trans_pane_cp04

0x06b2,	// (0x0001a185) mup3_volume_pane

0x06ba,	// (0x0001a18d) popup_mup3_control_window_g1

0x06ba,	// (0x0001a18d) mup3_volume_pane_g1

0x06ba,	// (0x0001a18d) mup3_volume_pane_g2

0x06ba,	// (0x0001a18d) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x00029178) mup3_volume_pane_g

0xc963,	// (0x00026436) bg_tb_trans_pane_cp03

0x06c2,	// (0x0001a195) popup_mup3_text_window_g1

0x06ca,	// (0x0001a19d) popup_mup3_text_window_t1

0xd148,	// (0x00026c1b) list_calc_item_pane_g1_ParamLimits

0x0157,	// (0x00019c2a) mup_volume_pane_cp_g1

0x863b,	// (0x0002210e) main_touch_calib_pane_t3

0x8651,	// (0x00022124) main_touch_calib_pane_t4

0x8667,	// (0x0002213a) main_touch_calib_pane_t5

0x43a6,	// (0x0001de79) aid_cell_size_toolbar2

0x43ae,	// (0x0001de81) aid_popup3_width_pane

0x43ee,	// (0x0001dec1) aid_zoom_text_msg_primary

0x6240,	// (0x0001fd13) vorec_t7

0xd10c,	// (0x00026bdf) bg_calc_paper_pane_g1_ParamLimits

0xd118,	// (0x00026beb) bg_calc_paper_pane_g2_ParamLimits

0xd124,	// (0x00026bf7) bg_calc_paper_pane_g3_ParamLimits

0xd130,	// (0x00026c03) bg_calc_paper_pane_g4_ParamLimits

0xd13c,	// (0x00026c0f) bg_calc_paper_pane_g5_ParamLimits

0x5d0e,	// (0x0001f7e1) bg_calc_paper_pane_g6_ParamLimits

0x5d1f,	// (0x0001f7f2) bg_calc_paper_pane_g7_ParamLimits

0x5d30,	// (0x0001f803) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00028b7e) bg_calc_paper_pane_g_ParamLimits

0x5d41,	// (0x0001f814) calc_bg_paper_pane_g9_ParamLimits

0xd056,	// (0x00026b29) image_qvga_pane_ParamLimits

0xd056,	// (0x00026b29) image_qvga_pane

0xcfe9,	// (0x00026abc) bg_popup_sub_pane_cp04_ParamLimits

0xdf17,	// (0x000279ea) popup_mup_playback_window_g1_ParamLimits

0xdf23,	// (0x000279f6) popup_mup_playback_window_t1_ParamLimits

0xdf38,	// (0x00027a0b) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x00028edc) popup_mup_playback_window_t_ParamLimits

0xd064,	// (0x00026b37) main_mup2_pane_g3_ParamLimits

0xd064,	// (0x00026b37) main_mup2_pane_g3

0x64f5,	// (0x0001ffc8) popup_toolbar_window_cp04

0xe2a9,	// (0x00027d7c) popup_call2_audio_second_window_g3_ParamLimits

0xe2a9,	// (0x00027d7c) popup_call2_audio_second_window_g3

0xe6c1,	// (0x00028194) popup_call2_audio_first_window_g4_ParamLimits

0xe6c1,	// (0x00028194) popup_call2_audio_first_window_g4

0xece8,	// (0x000287bb) popup_call2_audio_in_window_g4_ParamLimits

0xece8,	// (0x000287bb) popup_call2_audio_in_window_g4

0x7d44,	// (0x00021817) aid_area_sk_bg_cut_ParamLimits

0x7d44,	// (0x00021817) aid_area_sk_bg_cut

0xdf4d,	// (0x00027a20) aid_area_sk_bg_cut_2_ParamLimits

0xdf4d,	// (0x00027a20) aid_area_sk_bg_cut_2

0xc963,	// (0x00026436) aid_placing_details_win

0xc963,	// (0x00026436) aid_placing_details_win_2

0xd064,	// (0x00026b37) camera2_autofocus_pane_g1_ParamLimits

0x45ce,	// (0x0001e0a1) popup_fixed_preview_cale_window_ParamLimits

0x45ce,	// (0x0001e0a1) popup_fixed_preview_cale_window

0xdd15,	// (0x000277e8) navi_slider_pane_g3

0xdd1e,	// (0x000277f1) navi_slider_pane_g4

0xdd27,	// (0x000277fa) navi_slider_pane_g5

0xdd15,	// (0x000277e8) navi_slider_pane_g6

0x49c9,	// (0x0001e49c) navi_slider_pane_g7

0xde55,	// (0x00027928) mup_scale_pane_g3

0xde5e,	// (0x00027931) mup_scale_pane_g4

0xde67,	// (0x0002793a) mup_scale_pane_g5

0x7a43,	// (0x00021516) mup_scale_pane_g6

0x7a4c,	// (0x0002151f) mup_scale_pane_g7

0x1846,	// (0x0001b319) cams2_slider_pane_g3

0x1846,	// (0x0001b319) cams2_slider_pane_g4

0x1846,	// (0x0001b319) cams2_slider_pane_g5

0x1846,	// (0x0001b319) cams2_slider_pane_g6

0x1846,	// (0x0001b319) cams2_slider_pane_g7

0xd0a2,	// (0x00026b75) camera2_autofocus_pane_cp_g1

0xef76,	// (0x00028a49) bg_popup_preview_window_pane_cp02_ParamLimits

0xef76,	// (0x00028a49) bg_popup_preview_window_pane_cp02

0x06d8,	// (0x0001a1ab) list_fp_cale_pane_ParamLimits

0x06d8,	// (0x0001a1ab) list_fp_cale_pane

0x06e4,	// (0x0001a1b7) popup_fixed_preview_cale_window_t1_ParamLimits

0x06e4,	// (0x0001a1b7) popup_fixed_preview_cale_window_t1

0x8d64,	// (0x00022837) popup_fixed_preview_cale_window_t2_ParamLimits

0x8d64,	// (0x00022837) popup_fixed_preview_cale_window_t2

0x8d79,	// (0x0002284c) popup_fixed_preview_cale_window_t3_ParamLimits

0x8d79,	// (0x0002284c) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x0002917f) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x0002917f) popup_fixed_preview_cale_window_t

0x8d8e,	// (0x00022861) list_single_fp_cale_pane_ParamLimits

0x8d8e,	// (0x00022861) list_single_fp_cale_pane

0x0702,	// (0x0001a1d5) list_single_fp_cale_pane_g1_ParamLimits

0x0702,	// (0x0001a1d5) list_single_fp_cale_pane_g1

0x070e,	// (0x0001a1e1) list_single_fp_cale_pane_g2_ParamLimits

0x070e,	// (0x0001a1e1) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x00029186) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x00029186) list_single_fp_cale_pane_g

0x0727,	// (0x0001a1fa) list_single_fp_cale_pane_t1_ParamLimits

0x0727,	// (0x0001a1fa) list_single_fp_cale_pane_t1

0x0739,	// (0x0001a20c) list_single_fp_cale_pane_t2_ParamLimits

0x0739,	// (0x0001a20c) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x0002918d) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x0002918d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4636,	// (0x0001e109) main_dialer_pane

0xc963,	// (0x00026436) aid_cell_size_keypad

0xc963,	// (0x00026436) dialer_ne_pane

0xc963,	// (0x00026436) grid_dialer_command_1_pane

0xc963,	// (0x00026436) grid_dialer_command_2_pane

0xc963,	// (0x00026436) grid_dialer_keypad_pane

0x007e,	// (0x00019b51) bg_popup_call_pane_cp06_ParamLimits

0x007e,	// (0x00019b51) bg_popup_call_pane_cp06

0x007e,	// (0x00019b51) dialer_ne_clear_pane_ParamLimits

0x007e,	// (0x00019b51) dialer_ne_clear_pane

0xd0a2,	// (0x00026b75) dialer_ne_pane_g1

0xd0c0,	// (0x00026b93) dialer_ne_pane_t1_ParamLimits

0xd0c0,	// (0x00026b93) dialer_ne_pane_t1

0x098b,	// (0x0001a45e) dialer_ne_pane_t2_ParamLimits

0x098b,	// (0x0001a45e) dialer_ne_pane_t2

0x8da1,	// (0x00022874) dialer_ne_pane_t3_ParamLimits

0x8da1,	// (0x00022874) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x00029192) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x00029192) dialer_ne_pane_t

0x8da1,	// (0x00022874) dialer_ne_pane_t3_copy1_ParamLimits

0x8da1,	// (0x00022874) dialer_ne_pane_t3_copy1

0x076c,	// (0x0001a23f) cell_dialer_keypad_pane_ParamLimits

0x076c,	// (0x0001a23f) cell_dialer_keypad_pane

0xcb45,	// (0x00026618) cell_dialer_command_1_pane_ParamLimits

0xcb45,	// (0x00026618) cell_dialer_command_1_pane

0x0783,	// (0x0001a256) cell_dialer_command_2_pane_ParamLimits

0x0783,	// (0x0001a256) cell_dialer_command_2_pane

0xcb45,	// (0x00026618) bg_button_pane_cp02_ParamLimits

0xcb45,	// (0x00026618) bg_button_pane_cp02

0xd064,	// (0x00026b37) cell_dialer_keypad_pane_g1_ParamLimits

0xd064,	// (0x00026b37) cell_dialer_keypad_pane_g1

0xcb45,	// (0x00026618) bg_button_pane_cp03_ParamLimits

0xcb45,	// (0x00026618) bg_button_pane_cp03

0xd064,	// (0x00026b37) cell_dialer_command_1_pane_g1_ParamLimits

0xd064,	// (0x00026b37) cell_dialer_command_1_pane_g1

0xc963,	// (0x00026436) bg_button_pane_cp04

0xd0a2,	// (0x00026b75) cell_dialer_command_2_pane_g1

0xc963,	// (0x00026436) bg_button_pane_cp06

0xd0a2,	// (0x00026b75) dialer_ne_clear_pane_g1

0xdbe8,	// (0x000276bb) navi_pane_g2

0xdc16,	// (0x000276e9) navi_pane_g3

0x0002,

0xf311,	// (0x00028de4) navi_pane_g

0xdca5,	// (0x00027778) navi_pane_mv_g2

0xdccc,	// (0x0002779f) navi_pane_mv_g5

0x781f,	// (0x000212f2) navi_pane_mv_t1

0xd100,	// (0x00026bd3) main_clock2_pane

0xd056,	// (0x00026b29) main_clock2_list_pane_ParamLimits

0xd056,	// (0x00026b29) main_clock2_list_pane

0x8e17,	// (0x000228ea) main_clock2_pane_t1_ParamLimits

0x8e17,	// (0x000228ea) main_clock2_pane_t1

0x8e45,	// (0x00022918) main_clock2_pane_t2_ParamLimits

0x8e45,	// (0x00022918) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x0002919e) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x0002919e) main_clock2_pane_t

0x8eaa,	// (0x0002297d) popup_clock_analogue_window_cp03_ParamLimits

0x8eaa,	// (0x0002297d) popup_clock_analogue_window_cp03

0x8ec8,	// (0x0002299b) popup_clock_digital_window_cp02_ParamLimits

0x8ec8,	// (0x0002299b) popup_clock_digital_window_cp02

0x8f08,	// (0x000229db) main_clock2_list_single_pane_ParamLimits

0x8f08,	// (0x000229db) main_clock2_list_single_pane

0xd318,	// (0x00026deb) list_highlight_pane_cp05

0x07c8,	// (0x0001a29b) main_clock2_list_single_pane_t1

0x64f5,	// (0x0001ffc8) popup_toolbar_window_cp04_ParamLimits

0xd072,	// (0x00026b45) camera2_autofocus_pane_g2_ParamLimits

0xd072,	// (0x00026b45) camera2_autofocus_pane_g2

0xd072,	// (0x00026b45) camera2_autofocus_pane_g3_ParamLimits

0xd072,	// (0x00026b45) camera2_autofocus_pane_g3

0xd072,	// (0x00026b45) camera2_autofocus_pane_g4_ParamLimits

0xd072,	// (0x00026b45) camera2_autofocus_pane_g4

0xd072,	// (0x00026b45) camera2_autofocus_pane_g5_ParamLimits

0xd072,	// (0x00026b45) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x000290e2) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x000290e2) camera2_autofocus_pane_g

0x870e,	// (0x000221e1) camera2_autofocus_pane_cp_g2

0x8716,	// (0x000221e9) camera2_autofocus_pane_cp_g3

0x871e,	// (0x000221f1) camera2_autofocus_pane_cp_g4

0x8726,	// (0x000221f9) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x00029148) camera2_autofocus_pane_cp_g

0xc963,	// (0x00026436) popup_dialer_spcha_window

0xc963,	// (0x00026436) bg_popup_sub_pane_cp07

0xc963,	// (0x00026436) list_spcha_pane

0x07d6,	// (0x0001a2a9) list_single_spcha_pane_ParamLimits

0x07d6,	// (0x0001a2a9) list_single_spcha_pane

0xc963,	// (0x00026436) list_highlight_pane_cp06

0xd812,	// (0x000272e5) list_single_spcha_pane_t1

0xea92,	// (0x00028565) popup_call2_audio_out_window_g4_ParamLimits

0xea92,	// (0x00028565) popup_call2_audio_out_window_g4

0x4636,	// (0x0001e109) main_imed2_pane

0x4aed,	// (0x0001e5c0) popup_imed_adjust2_window

0x4b00,	// (0x0001e5d3) popup_imed_trans_window_ParamLimits

0x4b00,	// (0x0001e5d3) popup_imed_trans_window

0x022c,	// (0x00019cff) popup_blid_sat_info2_window_t1

0x023a,	// (0x00019d0d) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x00029077) popup_blid_sat_info2_window_t

0x8f1a,	// (0x000229ed) aid_size_cell_colour_35

0x8f34,	// (0x00022a07) aid_size_cell_colour_112

0x8f4b,	// (0x00022a1e) aid_size_cell_effect

0xcb45,	// (0x00026618) bg_tb_trans_pane_cp02

0xd8fa,	// (0x000273cd) heading_imed_pane

0x8f65,	// (0x00022a38) listscroll_imed_pane

0x07e8,	// (0x0001a2bb) heading_imed_pane_g1

0x07f0,	// (0x0001a2c3) heading_imed_pane_t1

0x07fe,	// (0x0001a2d1) grid_imed_colour_35_pane_ParamLimits

0x07fe,	// (0x0001a2d1) grid_imed_colour_35_pane

0x8f71,	// (0x00022a44) grid_imed_effect_pane

0x0815,	// (0x0001a2e8) list_imed_aspect_pane

0x8f81,	// (0x00022a54) scroll_pane_cp027_ParamLimits

0x8f81,	// (0x00022a54) scroll_pane_cp027

0x8f8d,	// (0x00022a60) cell_imed_effect_pane_ParamLimits

0x8f8d,	// (0x00022a60) cell_imed_effect_pane

0x081d,	// (0x0001a2f0) cell_imed_colour_pane_ParamLimits

0x081d,	// (0x0001a2f0) cell_imed_colour_pane

0x085f,	// (0x0001a332) cell_imed_colour_pane_g1_ParamLimits

0x085f,	// (0x0001a332) cell_imed_colour_pane_g1

0x0870,	// (0x0001a343) hgihlgiht_grid_pane_cp016_ParamLimits

0x0870,	// (0x0001a343) hgihlgiht_grid_pane_cp016

0x8fa5,	// (0x00022a78) cell_imed_effect_pane_g1

0x8fad,	// (0x00022a80) grid_highlight_pane_cp017

0x0881,	// (0x0001a354) list_imed_single_pane_ParamLimits

0x0881,	// (0x0001a354) list_imed_single_pane

0xc963,	// (0x00026436) list_highlight_pane_cp07

0x0896,	// (0x0001a369) list_imed_aspect_pane_comp1_t1

0xde06,	// (0x000278d9) bg_tb_trans_pane_cp05

0x08b8,	// (0x0001a38b) popup_imed_adjust2_window_g1

0x08df,	// (0x0001a3b2) popup_imed_adjust2_window_t1

0x08f7,	// (0x0001a3ca) slider_imed_adjust_pane

0x090b,	// (0x0001a3de) slider_imed_adjust_pane_g1

0x091b,	// (0x0001a3ee) slider_imed_adjust_pane_g2

0x092b,	// (0x0001a3fe) slider_imed_adjust_pane_g3

0x093c,	// (0x0001a40f) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x000291bb) slider_imed_adjust_pane_g

0x8fb6,	// (0x00022a89) aid_size_cell_clipart2

0x8fc2,	// (0x00022a95) grid_imed_clipart_pane

0xde78,	// (0x0002794b) scroll_pane_cp031

0x8fcc,	// (0x00022a9f) cell_imed_clipart_pane_ParamLimits

0x8fcc,	// (0x00022a9f) cell_imed_clipart_pane

0x8fee,	// (0x00022ac1) cell_imed_clipart_pane_g1

0xc963,	// (0x00026436) grid_highlight_pane_cp014

0x8df9,	// (0x000228cc) main_clock2_pane_g1_ParamLimits

0x8df9,	// (0x000228cc) main_clock2_pane_g1

0x8ee4,	// (0x000229b7) aid_call2_pane_cp10

0x8ef6,	// (0x000229c9) aid_call_pane_cp10

0xdb49,	// (0x0002761c) popup_clock_analogue_window_cp10_g1

0xdb49,	// (0x0002761c) popup_clock_analogue_window_cp10_g2

0x4c78,	// (0x0001e74b) popup_clock_analogue_window_cp10_g3

0x4c78,	// (0x0001e74b) popup_clock_analogue_window_cp10_g4

0xdb49,	// (0x0002761c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x000291a9) popup_clock_analogue_window_cp10_g

0x4c8e,	// (0x0001e761) popup_clock_analogue_window_cp10_t1

0x4cad,	// (0x0001e780) clock_digital_number_pane_cp10_ParamLimits

0x4cad,	// (0x0001e780) clock_digital_number_pane_cp10

0x4cc7,	// (0x0001e79a) clock_digital_number_pane_cp11_ParamLimits

0x4cc7,	// (0x0001e79a) clock_digital_number_pane_cp11

0x4ce1,	// (0x0001e7b4) clock_digital_number_pane_cp12_ParamLimits

0x4ce1,	// (0x0001e7b4) clock_digital_number_pane_cp12

0x4cfb,	// (0x0001e7ce) clock_digital_number_pane_cp13_ParamLimits

0x4cfb,	// (0x0001e7ce) clock_digital_number_pane_cp13

0x4d15,	// (0x0001e7e8) clock_digital_separator_pane_cp10_ParamLimits

0x4d15,	// (0x0001e7e8) clock_digital_separator_pane_cp10

0x4d2f,	// (0x0001e802) popup_clock_digital_window_cp02_t1_ParamLimits

0x4d2f,	// (0x0001e802) popup_clock_digital_window_cp02_t1

0xcfe1,	// (0x00026ab4) clock_digital_number_pane_cp10_g1

0xcfe1,	// (0x00026ab4) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x000291c4) clock_digital_number_pane_cp10_g

0xcfe1,	// (0x00026ab4) clock_digital_separator_pane_cp10_g1

0xcfe1,	// (0x00026ab4) clock_digital_separator_pane_g2_cp10

0xdcd4,	// (0x000277a7) navi_pane_vded_g4

0xdcdd,	// (0x000277b0) navi_pane_vded_g5

0xdce6,	// (0x000277b9) navi_pane_vded_t1

0x4636,	// (0x0001e109) main_vded_pane

0x8ff7,	// (0x00022aca) main_vded_pane_g1

0x9003,	// (0x00022ad6) main_vded_pane_g2

0x900d,	// (0x00022ae0) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x000291c9) main_vded_pane_g

0x9017,	// (0x00022aea) main_vded_pane_t1

0x9025,	// (0x00022af8) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x000291d0) main_vded_pane_t

0x9033,	// (0x00022b06) vded_slider_pane

0x903d,	// (0x00022b10) vded_video_pane

0x094d,	// (0x0001a420) vded_video_pane_g1

0x9047,	// (0x00022b1a) vded_video_pane_g2

0xd0a2,	// (0x00026b75) vded_video_pane_g3

0x0002,

0xf702,	// (0x000291d5) vded_video_pane_g

0x0957,	// (0x0001a42a) vded_slider_pane_g1

0x0157,	// (0x00019c2a) vded_slider_pane_g2

0x0960,	// (0x0001a433) vded_slider_pane_g3

0x0969,	// (0x0001a43c) vded_slider_pane_g4

0x0972,	// (0x0001a445) vded_slider_pane_g5

0x0004,

0xf709,	// (0x000291dc) vded_slider_pane_g

0x1192,	// (0x0001ac65) mup3_rocker_pane_ParamLimits

0x1192,	// (0x0001ac65) mup3_rocker_pane

0x06ba,	// (0x0001a18d) mup3_control_keys_pane_g1

0x097b,	// (0x0001a44e) mup3_control_keys_pane_g2

0x06ba,	// (0x0001a18d) mup3_control_keys_pane_g3

0x0983,	// (0x0001a456) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x000291e7) mup3_control_keys_pane_g

0x45f6,	// (0x0001e0c9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x45f6,	// (0x0001e0c9) popup_toolbar2_fixed_window_cp01

0x1192,	// (0x0001ac65) popup_toolbar2_fixed_window_cp02_ParamLimits

0x1192,	// (0x0001ac65) popup_toolbar2_fixed_window_cp02

0xe41b,	// (0x00027eee) popup_call2_audio_second_window_t4_ParamLimits

0xe41b,	// (0x00027eee) popup_call2_audio_second_window_t4

0xe957,	// (0x0002842a) popup_call2_audio_first_window_t6_ParamLimits

0xe957,	// (0x0002842a) popup_call2_audio_first_window_t6

0xeb95,	// (0x00028668) popup_call2_audio_out_window_t6_ParamLimits

0xeb95,	// (0x00028668) popup_call2_audio_out_window_t6

0x4636,	// (0x0001e109) main_vitu_pane

0xd056,	// (0x00026b29) aid_size_cell_itu_ParamLimits

0xd056,	// (0x00026b29) aid_size_cell_itu

0xd056,	// (0x00026b29) bg_popup_window_pane_cp08_ParamLimits

0xd056,	// (0x00026b29) bg_popup_window_pane_cp08

0xd056,	// (0x00026b29) field_vitu_entry_pane_ParamLimits

0xd056,	// (0x00026b29) field_vitu_entry_pane

0xd056,	// (0x00026b29) grid_vitu_function_pane_ParamLimits

0xd056,	// (0x00026b29) grid_vitu_function_pane

0xd056,	// (0x00026b29) grid_vitu_itu_pane_ParamLimits

0xd056,	// (0x00026b29) grid_vitu_itu_pane

0xd056,	// (0x00026b29) cell_vitu_itu_pane_ParamLimits

0xd056,	// (0x00026b29) cell_vitu_itu_pane

0xd056,	// (0x00026b29) cell_vitu_function_pane_ParamLimits

0xd056,	// (0x00026b29) cell_vitu_function_pane

0xcb45,	// (0x00026618) bg_popup_sub_pane_cp08_ParamLimits

0xcb45,	// (0x00026618) bg_popup_sub_pane_cp08

0xd0ac,	// (0x00026b7f) field_vitu_entry_pane_t1_ParamLimits

0xd0ac,	// (0x00026b7f) field_vitu_entry_pane_t1

0x098b,	// (0x0001a45e) field_vitu_entry_pane_t2_ParamLimits

0x098b,	// (0x0001a45e) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x000291f0) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x000291f0) field_vitu_entry_pane_t

0x007e,	// (0x00019b51) bg_button_pane_cp05_ParamLimits

0x007e,	// (0x00019b51) bg_button_pane_cp05

0x09a8,	// (0x0001a47b) cell_vitu_itu_pane_g1

0xde14,	// (0x000278e7) cell_vitu_itu_pane_t1_ParamLimits

0xde14,	// (0x000278e7) cell_vitu_itu_pane_t1

0xde14,	// (0x000278e7) cell_vitu_itu_pane_t2_ParamLimits

0xde14,	// (0x000278e7) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x000291f5) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x000291f5) cell_vitu_itu_pane_t

0xc963,	// (0x00026436) bg_button_pane_cp07

0xd0a2,	// (0x00026b75) cell_vitu_function_pane_g1

0x470f,	// (0x0001e1e2) main_calc_pane_g1

0x43e2,	// (0x0001deb5) aid_visual_content_pane

0x4636,	// (0x0001e109) main_vradio_pane

0xd072,	// (0x00026b45) main_vradio_pane_g1_ParamLimits

0xd072,	// (0x00026b45) main_vradio_pane_g1

0xd072,	// (0x00026b45) main_vradio_pane_g2_ParamLimits

0xd072,	// (0x00026b45) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x00028f8c) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x00028f8c) main_vradio_pane_g

0xd0c0,	// (0x00026b93) main_vradio_pane_t1_ParamLimits

0xd0c0,	// (0x00026b93) main_vradio_pane_t1

0xd0c0,	// (0x00026b93) main_vradio_pane_t2_ParamLimits

0xd0c0,	// (0x00026b93) main_vradio_pane_t2

0xd0c0,	// (0x00026b93) main_vradio_pane_t3_ParamLimits

0xd0c0,	// (0x00026b93) main_vradio_pane_t3

0x0002,

0xf729,	// (0x000291fc) main_vradio_pane_t_ParamLimits

0xf729,	// (0x000291fc) main_vradio_pane_t

0xd056,	// (0x00026b29) vradio_rocker_control_pane_ParamLimits

0xd056,	// (0x00026b29) vradio_rocker_control_pane

0xd056,	// (0x00026b29) vradio_station_info_pane_ParamLimits

0xd056,	// (0x00026b29) vradio_station_info_pane

0xcb45,	// (0x00026618) vradio_frequency_info_pane_ParamLimits

0xcb45,	// (0x00026618) vradio_frequency_info_pane

0xd0a2,	// (0x00026b75) vradio_station_info_pane_g1

0xde14,	// (0x000278e7) vradio_station_info_pane_t1_ParamLimits

0xde14,	// (0x000278e7) vradio_station_info_pane_t1

0xd0c0,	// (0x00026b93) vradio_station_info_pane_t2_ParamLimits

0xd0c0,	// (0x00026b93) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x00029203) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x00029203) vradio_station_info_pane_t

0xc963,	// (0x00026436) vradio_tuning_pane

0x9050,	// (0x00022b23) vradio_rocker_control_pane_g1

0x09c4,	// (0x0001a497) vradio_rocker_control_pane_g2

0x9058,	// (0x00022b2b) vradio_rocker_control_pane_g3

0x9060,	// (0x00022b33) vradio_rocker_control_pane_g4

0x9068,	// (0x00022b3b) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x00029208) vradio_rocker_control_pane_g

0xd0a2,	// (0x00026b75) vradio_frequency_info_pane_g1

0xd0ac,	// (0x00026b7f) vradio_frequency_info_pane_t1_ParamLimits

0xd0ac,	// (0x00026b7f) vradio_frequency_info_pane_t1

0x9070,	// (0x00022b43) vradio_tuning_pane_g1

0x907d,	// (0x00022b50) vradio_tuning_pane_t1

0x43fe,	// (0x0001ded1) area_side_right_pane_ParamLimits

0x43fe,	// (0x0001ded1) area_side_right_pane

0xef3d,	// (0x00028a10) status_small_pane_g1

0xef45,	// (0x00028a18) status_small_pane_g2

0xef4e,	// (0x00028a21) status_small_pane_g3

0xef57,	// (0x00028a2a) status_small_pane_g4

0x0003,

0xf506,	// (0x00028fd9) status_small_pane_g

0xef60,	// (0x00028a33) status_small_pane_t1

0x4636,	// (0x0001e109) main_video3_pane

0xc963,	// (0x00026436) cams_zoom_vslider_pane

0x09cc,	// (0x0001a49f) image3_wide_pane_ParamLimits

0x09cc,	// (0x0001a49f) image3_wide_pane

0xc963,	// (0x00026436) image3_wide_small_pane

0x09e6,	// (0x0001a4b9) main_video3_pane_g1_ParamLimits

0x09e6,	// (0x0001a4b9) main_video3_pane_g1

0x09e6,	// (0x0001a4b9) main_video3_pane_g2_ParamLimits

0x09e6,	// (0x0001a4b9) main_video3_pane_g2

0x0001,

0xf740,	// (0x00029213) main_video3_pane_g_ParamLimits

0xf740,	// (0x00029213) main_video3_pane_g

0x0a04,	// (0x0001a4d7) main_video3_pane_t1_ParamLimits

0x0a04,	// (0x0001a4d7) main_video3_pane_t1

0x0a04,	// (0x0001a4d7) main_video3_pane_t2_ParamLimits

0x0a04,	// (0x0001a4d7) main_video3_pane_t2

0x0a04,	// (0x0001a4d7) main_video3_pane_t3_ParamLimits

0x0a04,	// (0x0001a4d7) main_video3_pane_t3

0x0002,

0xf745,	// (0x00029218) main_video3_pane_t_ParamLimits

0xf745,	// (0x00029218) main_video3_pane_t

0xd0a2,	// (0x00026b75) cams_zoom_vslider_pane_g1

0xd0a2,	// (0x00026b75) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00028b5f) cams_zoom_vslider_pane_g

0xc963,	// (0x00026436) small_slider_vertical_pane

0xd0a2,	// (0x00026b75) small_slider_vertical_pane_g1

0xd0a2,	// (0x00026b75) small_slider_vertical_pane_g2

0x0a2b,	// (0x0001a4fe) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x0002921f) small_slider_vertical_pane_g

0x4636,	// (0x0001e109) main_hwr_training_pane

0x0a34,	// (0x0001a507) hwr_training_instruct_pane_ParamLimits

0x0a34,	// (0x0001a507) hwr_training_instruct_pane

0x908c,	// (0x00022b5f) hwr_training_navi_pane_ParamLimits

0x908c,	// (0x00022b5f) hwr_training_navi_pane

0x90a6,	// (0x00022b79) hwr_training_write_pane_ParamLimits

0x90a6,	// (0x00022b79) hwr_training_write_pane

0xc963,	// (0x00026436) bg_frame_shadow_pane

0x0a6b,	// (0x0001a53e) hwr_training_write_pane_g1

0x0a73,	// (0x0001a546) hwr_training_write_pane_g2

0x0a7b,	// (0x0001a54e) hwr_training_write_pane_g3

0x0a83,	// (0x0001a556) hwr_training_write_pane_g4

0x0a8b,	// (0x0001a55e) hwr_training_write_pane_g5

0x0a93,	// (0x0001a566) hwr_training_write_pane_g6

0x0a9b,	// (0x0001a56e) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x00029226) hwr_training_write_pane_g

0x4d50,	// (0x0001e823) hwr_training_navi_pane_g1_ParamLimits

0x4d50,	// (0x0001e823) hwr_training_navi_pane_g1

0x4d62,	// (0x0001e835) hwr_training_navi_pane_g2_ParamLimits

0x4d62,	// (0x0001e835) hwr_training_navi_pane_g2

0x4d74,	// (0x0001e847) hwr_training_navi_pane_g3_ParamLimits

0x4d74,	// (0x0001e847) hwr_training_navi_pane_g3

0x4d84,	// (0x0001e857) hwr_training_navi_pane_g4_ParamLimits

0x4d84,	// (0x0001e857) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x00029235) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x00029235) hwr_training_navi_pane_g

0x4d9e,	// (0x0001e871) hwr_training_navi_pane_t1

0x90de,	// (0x00022bb1) list_single_hwr_training_instruct_pane_ParamLimits

0x90de,	// (0x00022bb1) list_single_hwr_training_instruct_pane

0x0af2,	// (0x0001a5c5) list_single_hwr_training_instruct_pane_t1

0x032d,	// (0x00019e00) bg_frame_shadow_pane_g1

0x0b01,	// (0x0001a5d4) bg_frame_shadow_pane_g2

0x0b09,	// (0x0001a5dc) bg_frame_shadow_pane_g3

0x0b11,	// (0x0001a5e4) bg_frame_shadow_pane_g4

0x0b19,	// (0x0001a5ec) bg_frame_shadow_pane_g5

0x0b21,	// (0x0001a5f4) bg_frame_shadow_pane_g6

0x0b29,	// (0x0001a5fc) bg_frame_shadow_pane_g7

0xd1af,	// (0x00026c82) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x00029240) bg_frame_shadow_pane_g

0x4636,	// (0x0001e109) main_video_tele_dialer_pane

0x4dac,	// (0x0001e87f) aid_size_cell_video_keypad_ParamLimits

0x4dac,	// (0x0001e87f) aid_size_cell_video_keypad

0x4dbc,	// (0x0001e88f) grid_video_dialer_keypad_pane_ParamLimits

0x4dbc,	// (0x0001e88f) grid_video_dialer_keypad_pane

0x4df0,	// (0x0001e8c3) video_down_pane_cp_ParamLimits

0x4df0,	// (0x0001e8c3) video_down_pane_cp

0x4dfe,	// (0x0001e8d1) cell_video_dialer_keypad_pane_ParamLimits

0x4dfe,	// (0x0001e8d1) cell_video_dialer_keypad_pane

0x0b31,	// (0x0001a604) bg_button_pane_cp08_ParamLimits

0x0b31,	// (0x0001a604) bg_button_pane_cp08

0x911f,	// (0x00022bf2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x911f,	// (0x00022bf2) cell_video_dialer_keypad_pane_g1

0x1192,	// (0x0001ac65) mup3_rocker2_pane_ParamLimits

0x1192,	// (0x0001ac65) mup3_rocker2_pane

0xd0a2,	// (0x00026b75) mup3_rocker2_pane_g1

0x4a5d,	// (0x0001e530) main_dialer2_pane

0x4636,	// (0x0001e109) main_mp4_pane

0x4e31,	// (0x0001e904) main_mp4_pane_g1_ParamLimits

0x4e31,	// (0x0001e904) main_mp4_pane_g1

0x4e53,	// (0x0001e926) main_mp4_pane_g2_ParamLimits

0x4e53,	// (0x0001e926) main_mp4_pane_g2

0x4e71,	// (0x0001e944) main_mp4_pane_g3_ParamLimits

0x4e71,	// (0x0001e944) main_mp4_pane_g3

0x4eaa,	// (0x0001e97d) main_mp4_pane_g4_ParamLimits

0x4eaa,	// (0x0001e97d) main_mp4_pane_g4

0x4ed2,	// (0x0001e9a5) main_mp4_pane_g5_ParamLimits

0x4ed2,	// (0x0001e9a5) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x00029260) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x00029260) main_mp4_pane_g

0x4f3a,	// (0x0001ea0d) main_mp4_pane_t1_ParamLimits

0x4f3a,	// (0x0001ea0d) main_mp4_pane_t1

0x4f9c,	// (0x0001ea6f) main_mp4_pane_t2_ParamLimits

0x4f9c,	// (0x0001ea6f) main_mp4_pane_t2

0x5000,	// (0x0001ead3) main_mp4_pane_t3_ParamLimits

0x5000,	// (0x0001ead3) main_mp4_pane_t3

0x505e,	// (0x0001eb31) main_mp4_pane_t4_ParamLimits

0x505e,	// (0x0001eb31) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x00029271) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x00029271) main_mp4_pane_t

0x50bc,	// (0x0001eb8f) mp4_progress_pane_ParamLimits

0x50bc,	// (0x0001eb8f) mp4_progress_pane

0x50f0,	// (0x0001ebc3) mp4_rocker_pane_ParamLimits

0x50f0,	// (0x0001ebc3) mp4_rocker_pane

0x0ddb,	// (0x0001a8ae) mp4_progress_pane_t1

0x0dfa,	// (0x0001a8cd) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x0002927a) mp4_progress_pane_t

0x0e19,	// (0x0001a8ec) mup_progress_pane_cp04

0x1846,	// (0x0001b319) mp4_rocker_pane_g1

0x4628,	// (0x0001e0fb) aid_cell_size_keypad2_ParamLimits

0x4628,	// (0x0001e0fb) aid_cell_size_keypad2

0x4628,	// (0x0001e0fb) dialer2_ne_pane_ParamLimits

0x4628,	// (0x0001e0fb) dialer2_ne_pane

0x4628,	// (0x0001e0fb) grid_dialer2_keypad_pane_ParamLimits

0x4628,	// (0x0001e0fb) grid_dialer2_keypad_pane

0x0070,	// (0x00019b43) bg_popup_call_pane_cp07_ParamLimits

0x0070,	// (0x00019b43) bg_popup_call_pane_cp07

0x9156,	// (0x00022c29) dialer2_ne_pane_t1_ParamLimits

0x9156,	// (0x00022c29) dialer2_ne_pane_t1

0x5104,	// (0x0001ebd7) cell_dialer2_keypad_pane_ParamLimits

0x5104,	// (0x0001ebd7) cell_dialer2_keypad_pane

0x007e,	// (0x00019b51) bg_button_pane_pane_cp04_ParamLimits

0x007e,	// (0x00019b51) bg_button_pane_pane_cp04

0xd064,	// (0x00026b37) cell_dialer2_keypad_pane_g1_ParamLimits

0xd064,	// (0x00026b37) cell_dialer2_keypad_pane_g1

0x63b7,	// (0x0001fe8a) aid_placing_vt_set_content_ParamLimits

0x63b7,	// (0x0001fe8a) aid_placing_vt_set_content

0x63e3,	// (0x0001feb6) aid_placing_vt_set_title_ParamLimits

0x63e3,	// (0x0001feb6) aid_placing_vt_set_title

0x4636,	// (0x0001e109) main_image3_pane

0x514d,	// (0x0001ec20) area_side_right_pane_cp01_ParamLimits

0x514d,	// (0x0001ec20) area_side_right_pane_cp01

0x517a,	// (0x0001ec4d) main_image3_pane_g1_ParamLimits

0x517a,	// (0x0001ec4d) main_image3_pane_g1

0x5188,	// (0x0001ec5b) main_image3_pane_g2_ParamLimits

0x5188,	// (0x0001ec5b) main_image3_pane_g2

0x51a1,	// (0x0001ec74) main_image3_pane_g3_ParamLimits

0x51a1,	// (0x0001ec74) main_image3_pane_g3

0x51ba,	// (0x0001ec8d) main_image3_pane_g4_ParamLimits

0x51ba,	// (0x0001ec8d) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x00029289) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x00029289) main_image3_pane_g

0x51d3,	// (0x0001eca6) main_image3_pane_t1_ParamLimits

0x51d3,	// (0x0001eca6) main_image3_pane_t1

0x51f8,	// (0x0001eccb) main_image3_pane_t2_ParamLimits

0x51f8,	// (0x0001eccb) main_image3_pane_t2

0x5217,	// (0x0001ecea) main_image3_pane_t3_ParamLimits

0x5217,	// (0x0001ecea) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x00029292) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x00029292) main_image3_pane_t

0xd056,	// (0x00026b29) grid_sctrl_middle_pane_cp01_ParamLimits

0xd056,	// (0x00026b29) grid_sctrl_middle_pane_cp01

0x917d,	// (0x00022c50) cell_sctrl_middle_pane_cp01_ParamLimits

0x917d,	// (0x00022c50) cell_sctrl_middle_pane_cp01

0x918e,	// (0x00022c61) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x918e,	// (0x00022c61) cell_sctrl_middle_pane_cp01_g1

0x4636,	// (0x0001e109) main_call4_pane

0x5278,	// (0x0001ed4b) aid_size_button_call4_ParamLimits

0x5278,	// (0x0001ed4b) aid_size_button_call4

0x52ae,	// (0x0001ed81) call4_windows_pane_ParamLimits

0x52ae,	// (0x0001ed81) call4_windows_pane

0x52c3,	// (0x0001ed96) grid_call4_button_pane_ParamLimits

0x52c3,	// (0x0001ed96) grid_call4_button_pane

0x52f1,	// (0x0001edc4) call4_windows_conf_pane

0x5308,	// (0x0001eddb) popup_call4_audio_first_window_ParamLimits

0x5308,	// (0x0001eddb) popup_call4_audio_first_window

0x5358,	// (0x0001ee2b) popup_call4_audio_second_window_ParamLimits

0x5358,	// (0x0001ee2b) popup_call4_audio_second_window

0x5371,	// (0x0001ee44) popup_call4_audio_wait_window_ParamLimits

0x5371,	// (0x0001ee44) popup_call4_audio_wait_window

0x537f,	// (0x0001ee52) cell_call4_button_pane_ParamLimits

0x537f,	// (0x0001ee52) cell_call4_button_pane

0x919b,	// (0x00022c6e) bg_button_pane_cp09_ParamLimits

0x919b,	// (0x00022c6e) bg_button_pane_cp09

0x53a2,	// (0x0001ee75) cell_call4_button_pane_g1_ParamLimits

0x53a2,	// (0x0001ee75) cell_call4_button_pane_g1

0x91a7,	// (0x00022c7a) cell_call4_button_pane_t1_ParamLimits

0x91a7,	// (0x00022c7a) cell_call4_button_pane_t1

0x0ec6,	// (0x0001a999) popup_call4_audio_conf_window_ParamLimits

0x0ec6,	// (0x0001a999) popup_call4_audio_conf_window

0x8d26,	// (0x000227f9) mup3_progress_pane_t1_ParamLimits

0x8d45,	// (0x00022818) mup3_progress_pane_t2_ParamLimits

0x0685,	// (0x0001a158) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x00029171) mup3_progress_pane_t_ParamLimits

0x06a2,	// (0x0001a175) mup_progress_pane_cp03_ParamLimits

0x06ba,	// (0x0001a18d) mup3_control_keys_pane_g4_copy1

0x50f0,	// (0x0001ebc3) mp4_rocker2_pane_ParamLimits

0x50f0,	// (0x0001ebc3) mp4_rocker2_pane

0x097b,	// (0x0001a44e) mp4_rocker2_pane_g1

0x097b,	// (0x0001a44e) mp4_rocker2_pane_g2

0x097b,	// (0x0001a44e) mp4_rocker2_pane_g3

0x097b,	// (0x0001a44e) mp4_rocker2_pane_g4

0x097b,	// (0x0001a44e) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x0002929b) mp4_rocker2_pane_g

0x4636,	// (0x0001e109) main_camera4_pane

0x4636,	// (0x0001e109) main_video4_pane

0x4dcc,	// (0x0001e89f) main_video_tele_dialer_pane_t1_ParamLimits

0x4dcc,	// (0x0001e89f) main_video_tele_dialer_pane_t1

0x4dde,	// (0x0001e8b1) main_video_tele_dialer_pane_t2_ParamLimits

0x4dde,	// (0x0001e8b1) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x00029251) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x00029251) main_video_tele_dialer_pane_t

0x53f9,	// (0x0001eecc) cam4_autofocus_pane_ParamLimits

0x53f9,	// (0x0001eecc) cam4_autofocus_pane

0x5413,	// (0x0001eee6) cam4_image_uncrop_pane_ParamLimits

0x5413,	// (0x0001eee6) cam4_image_uncrop_pane

0x542a,	// (0x0001eefd) cam4_indicators_pane_ParamLimits

0x542a,	// (0x0001eefd) cam4_indicators_pane

0x5446,	// (0x0001ef19) main_camera4_pane_g1_ParamLimits

0x5446,	// (0x0001ef19) main_camera4_pane_g1

0x5452,	// (0x0001ef25) main_camera4_pane_g2_ParamLimits

0x5452,	// (0x0001ef25) main_camera4_pane_g2

0x5452,	// (0x0001ef25) main_camera4_pane_g3_ParamLimits

0x5452,	// (0x0001ef25) main_camera4_pane_g3

0x545e,	// (0x0001ef31) main_camera4_pane_g4_ParamLimits

0x545e,	// (0x0001ef31) main_camera4_pane_g4

0x546a,	// (0x0001ef3d) main_camera4_pane_g5_ParamLimits

0x546a,	// (0x0001ef3d) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x000292a6) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x000292a6) main_camera4_pane_g

0x5484,	// (0x0001ef57) main_camera4_pane_t1_ParamLimits

0x5484,	// (0x0001ef57) main_camera4_pane_t1

0x2443,	// (0x0001bf16) bg_tb_trans_pane_cp06

0x54b0,	// (0x0001ef83) cam4_indicators_pane_g1

0x54c1,	// (0x0001ef94) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x000292c1) cam4_indicators_pane_g

0x54df,	// (0x0001efb2) cam4_indicators_pane_t1

0x5509,	// (0x0001efdc) main_video4_pane_g1_ParamLimits

0x5509,	// (0x0001efdc) main_video4_pane_g1

0x5515,	// (0x0001efe8) main_video4_pane_g2_ParamLimits

0x5515,	// (0x0001efe8) main_video4_pane_g2

0x5521,	// (0x0001eff4) main_video4_pane_g3_ParamLimits

0x5521,	// (0x0001eff4) main_video4_pane_g3

0x552d,	// (0x0001f000) main_video4_pane_g4_ParamLimits

0x552d,	// (0x0001f000) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x000292c8) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x000292c8) main_video4_pane_g

0x554d,	// (0x0001f020) vid4_indicators_pane_ParamLimits

0x554d,	// (0x0001f020) vid4_indicators_pane

0x556c,	// (0x0001f03f) video4_image_uncrop_cif_pane_ParamLimits

0x556c,	// (0x0001f03f) video4_image_uncrop_cif_pane

0x557b,	// (0x0001f04e) video4_image_uncrop_nhd_pane_ParamLimits

0x557b,	// (0x0001f04e) video4_image_uncrop_nhd_pane

0x5413,	// (0x0001eee6) video4_image_uncrop_vga_pane_ParamLimits

0x5413,	// (0x0001eee6) video4_image_uncrop_vga_pane

0x4a4f,	// (0x0001e522) bg_tb_trans_pane_cp07

0x5592,	// (0x0001f065) vid4_indicators_pane_g1

0x55a6,	// (0x0001f079) vid4_indicators_pane_g2

0x55ba,	// (0x0001f08d) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x000292d3) vid4_indicators_pane_g

0x55e9,	// (0x0001f0bc) vid4_indicators_pane_t1

0x91dd,	// (0x00022cb0) cam4_autofocus_pane_g1

0x91e5,	// (0x00022cb8) cam4_autofocus_pane_g2

0x91ed,	// (0x00022cc0) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x000292de) cam4_autofocus_pane_g

0x91f5,	// (0x00022cc8) cam4_autofocus_pane_g3_copy1

0x9103,	// (0x00022bd6) video_down_pane_cp_t1

0x9111,	// (0x00022be4) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x00029256) video_down_pane_cp_t

0x4628,	// (0x0001e0fb) popup_vitu2_window_ParamLimits

0x4628,	// (0x0001e0fb) popup_vitu2_window

0x5600,	// (0x0001f0d3) aid_size_cell2_itu2_ParamLimits

0x5600,	// (0x0001f0d3) aid_size_cell2_itu2

0x5622,	// (0x0001f0f5) aid_size_cell_itu2_ParamLimits

0x5622,	// (0x0001f0f5) aid_size_cell_itu2

0x5666,	// (0x0001f139) bg_popup_window_pane_cp09_ParamLimits

0x5666,	// (0x0001f139) bg_popup_window_pane_cp09

0x5674,	// (0x0001f147) field_vitu2_entry_pane_ParamLimits

0x5674,	// (0x0001f147) field_vitu2_entry_pane

0x5694,	// (0x0001f167) grid_vitu2_function_pane_ParamLimits

0x5694,	// (0x0001f167) grid_vitu2_function_pane

0x56d8,	// (0x0001f1ab) grid_vitu2_itu_pane_ParamLimits

0x56d8,	// (0x0001f1ab) grid_vitu2_itu_pane

0x5750,	// (0x0001f223) cell_vitu2_itu_pane_ParamLimits

0x5750,	// (0x0001f223) cell_vitu2_itu_pane

0x5769,	// (0x0001f23c) cell_vitu2_function_pane_ParamLimits

0x5769,	// (0x0001f23c) cell_vitu2_function_pane

0x0fc7,	// (0x0001aa9a) bg_popup_call_pane_cp08_ParamLimits

0x0fc7,	// (0x0001aa9a) bg_popup_call_pane_cp08

0x0fde,	// (0x0001aab1) field_vitu2_entry_pane_g1

0x0fea,	// (0x0001aabd) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x000292e5) field_vitu2_entry_pane_g

0x91fd,	// (0x00022cd0) field_vitu2_entry_pane_t1_ParamLimits

0x91fd,	// (0x00022cd0) field_vitu2_entry_pane_t1

0x0ff6,	// (0x0001aac9) field_vitu2_entry_pane_t2_ParamLimits

0x0ff6,	// (0x0001aac9) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x000292ec) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x000292ec) field_vitu2_entry_pane_t

0x4be6,	// (0x0001e6b9) bg_button_pane_cp010_ParamLimits

0x4be6,	// (0x0001e6b9) bg_button_pane_cp010

0x57aa,	// (0x0001f27d) cell_vitu2_itu_pane_g1

0x57d0,	// (0x0001f2a3) cell_vitu2_itu_pane_t1_ParamLimits

0x57d0,	// (0x0001f2a3) cell_vitu2_itu_pane_t1

0x581c,	// (0x0001f2ef) cell_vitu2_itu_pane_t2_ParamLimits

0x581c,	// (0x0001f2ef) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x000292f6) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x000292f6) cell_vitu2_itu_pane_t

0x4a4f,	// (0x0001e522) bg_button_pane_cp011

0x58e4,	// (0x0001f3b7) cell_vitu2_function_pane_g1

0x4636,	// (0x0001e109) main_myfav_hc_pane

0x5259,	// (0x0001ed2c) popup_image3_note_pane_ParamLimits

0x5259,	// (0x0001ed2c) popup_image3_note_pane

0x5267,	// (0x0001ed3a) popup_image3_tool_bar_pane_ParamLimits

0x5267,	// (0x0001ed3a) popup_image3_tool_bar_pane

0x5892,	// (0x0001f365) cell_vitu2_itu_pane_t3_ParamLimits

0x5892,	// (0x0001f365) cell_vitu2_itu_pane_t3

0xc963,	// (0x00026436) bg_popup_trans_pane

0x101b,	// (0x0001aaee) grid_image3_tool_bar_pane

0x1025,	// (0x0001aaf8) bg_popup_trans_pane_g1

0xd53a,	// (0x0002700d) bg_popup_trans_pane_g2

0x102d,	// (0x0001ab00) bg_popup_trans_pane_g3

0x1035,	// (0x0001ab08) bg_popup_trans_pane_g4

0x103d,	// (0x0001ab10) bg_popup_trans_pane_g5

0x1045,	// (0x0001ab18) bg_popup_trans_pane_g6

0x104d,	// (0x0001ab20) bg_popup_trans_pane_g7

0x1055,	// (0x0001ab28) bg_popup_trans_pane_g8

0xd51a,	// (0x00026fed) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x000292fd) bg_popup_trans_pane_g

0x105d,	// (0x0001ab30) cell_image3_tool_bar_pane_ParamLimits

0x105d,	// (0x0001ab30) cell_image3_tool_bar_pane

0xd0a2,	// (0x00026b75) cell_image3_tool_bar_pane_g1

0xc963,	// (0x00026436) bg_popup_trans_pane_cp1

0x1071,	// (0x0001ab44) popup_image3_note_pane_t1

0x107f,	// (0x0001ab52) popup_image3_note_pane_t2

0x108d,	// (0x0001ab60) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x00029310) popup_image3_note_pane_t

0x109b,	// (0x0001ab6e) popup_image3_note_pane_t3_copy1

0x9230,	// (0x00022d03) bg_myfav_hc_instruction_pane_ParamLimits

0x9230,	// (0x00022d03) bg_myfav_hc_instruction_pane

0x9248,	// (0x00022d1b) cell_myfav_contact_pane_ParamLimits

0x9248,	// (0x00022d1b) cell_myfav_contact_pane

0x9262,	// (0x00022d35) cell_myfav_contact_pane_cp1_ParamLimits

0x9262,	// (0x00022d35) cell_myfav_contact_pane_cp1

0x927a,	// (0x00022d4d) cell_myfav_contact_pane_cp2_ParamLimits

0x927a,	// (0x00022d4d) cell_myfav_contact_pane_cp2

0x9292,	// (0x00022d65) cell_myfav_contact_pane_cp3_ParamLimits

0x9292,	// (0x00022d65) cell_myfav_contact_pane_cp3

0x92a9,	// (0x00022d7c) cell_myfav_contact_pane_cp4_ParamLimits

0x92a9,	// (0x00022d7c) cell_myfav_contact_pane_cp4

0x92bf,	// (0x00022d92) cell_myfav_contact_pane_cp5_ParamLimits

0x92bf,	// (0x00022d92) cell_myfav_contact_pane_cp5

0x92d3,	// (0x00022da6) cell_myfav_contact_pane_cp6_ParamLimits

0x92d3,	// (0x00022da6) cell_myfav_contact_pane_cp6

0x92e7,	// (0x00022dba) cell_myfav_contact_pane_cp7_ParamLimits

0x92e7,	// (0x00022dba) cell_myfav_contact_pane_cp7

0x10a9,	// (0x0001ab7c) listscroll_gen_pane_cp05

0x92ff,	// (0x00022dd2) main_myfav_hc_pane_g1_ParamLimits

0x92ff,	// (0x00022dd2) main_myfav_hc_pane_g1

0x9315,	// (0x00022de8) main_myfav_hc_pane_g2_ParamLimits

0x9315,	// (0x00022de8) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x00029317) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x00029317) main_myfav_hc_pane_g

0x9343,	// (0x00022e16) main_myfav_hc_pane_t1_ParamLimits

0x9343,	// (0x00022e16) main_myfav_hc_pane_t1

0x10b2,	// (0x0001ab85) main_myfav_hc_pane_t2_ParamLimits

0x10b2,	// (0x0001ab85) main_myfav_hc_pane_t2

0x10c4,	// (0x0001ab97) main_myfav_hc_pane_t3_ParamLimits

0x10c4,	// (0x0001ab97) main_myfav_hc_pane_t3

0x935a,	// (0x00022e2d) main_myfav_hc_pane_t4_ParamLimits

0x935a,	// (0x00022e2d) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x0002931e) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x0002931e) main_myfav_hc_pane_t

0xd0a2,	// (0x00026b75) bg_myfav_hc_instruction_pane_g1

0x10d6,	// (0x0001aba9) cell_myfav_contact_pane_g1_ParamLimits

0x10d6,	// (0x0001aba9) cell_myfav_contact_pane_g1

0x10d6,	// (0x0001aba9) cell_myfav_contact_pane_g2_ParamLimits

0x10d6,	// (0x0001aba9) cell_myfav_contact_pane_g2

0x10e2,	// (0x0001abb5) cell_myfav_contact_pane_g3_ParamLimits

0x10e2,	// (0x0001abb5) cell_myfav_contact_pane_g3

0xd072,	// (0x00026b45) cell_myfav_contact_pane_g4_ParamLimits

0xd072,	// (0x00026b45) cell_myfav_contact_pane_g4

0x10ef,	// (0x0001abc2) cell_myfav_contact_pane_g5_ParamLimits

0x10ef,	// (0x0001abc2) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x00029329) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x00029329) cell_myfav_contact_pane_g

0x932b,	// (0x00022dfe) main_myfav_hc_pane_g3_ParamLimits

0x932b,	// (0x00022dfe) main_myfav_hc_pane_g3

0x4532,	// (0x0001e005) popup_adpt_find_window

0x9384,	// (0x00022e57) afind_page_pane_ParamLimits

0x9384,	// (0x00022e57) afind_page_pane

0x9391,	// (0x00022e64) aid_size_cell_afind_ParamLimits

0x9391,	// (0x00022e64) aid_size_cell_afind

0x93ab,	// (0x00022e7e) bg_popup_sub_pane_cp09_ParamLimits

0x93ab,	// (0x00022e7e) bg_popup_sub_pane_cp09

0x93b8,	// (0x00022e8b) find_pane_cp01_ParamLimits

0x93b8,	// (0x00022e8b) find_pane_cp01

0x10fb,	// (0x0001abce) grid_afind_control_pane_ParamLimits

0x10fb,	// (0x0001abce) grid_afind_control_pane

0x93c5,	// (0x00022e98) grid_afind_pane_ParamLimits

0x93c5,	// (0x00022e98) grid_afind_pane

0x93e1,	// (0x00022eb4) cell_afind_pane_ParamLimits

0x93e1,	// (0x00022eb4) cell_afind_pane

0xd0a2,	// (0x00026b75) afind_page_pane_g1

0x9429,	// (0x00022efc) afind_page_pane_g2

0x9431,	// (0x00022f04) afind_page_pane_g3

0x0002,

0xf861,	// (0x00029334) afind_page_pane_g

0x9439,	// (0x00022f0c) afind_page_pane_t1

0x1121,	// (0x0001abf4) cell_afind_grid_control_pane_ParamLimits

0x1121,	// (0x0001abf4) cell_afind_grid_control_pane

0x1130,	// (0x0001ac03) bg_button_pane_cp69_ParamLimits

0x1130,	// (0x0001ac03) bg_button_pane_cp69

0x9447,	// (0x00022f1a) cell_afind_pane_g1_ParamLimits

0x9447,	// (0x00022f1a) cell_afind_pane_g1

0x9454,	// (0x00022f27) cell_afind_pane_t1_ParamLimits

0x9454,	// (0x00022f27) cell_afind_pane_t1

0x113c,	// (0x0001ac0f) bg_button_pane_cp72

0x1144,	// (0x0001ac17) cell_afind_grid_control_pane_g1

0x7e6b,	// (0x0002193e) aid_image_placing_area_ParamLimits

0x7e6b,	// (0x0002193e) aid_image_placing_area

0xd064,	// (0x00026b37) field_vitu_entry_pane_g1_ParamLimits

0xd064,	// (0x00026b37) field_vitu_entry_pane_g1

0xd064,	// (0x00026b37) field_vitu_entry_pane_g2_ParamLimits

0xd064,	// (0x00026b37) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00028c6c) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00028c6c) field_vitu_entry_pane_g

0x09a8,	// (0x0001a47b) cell_vitu_itu_pane_g1_ParamLimits

0x098b,	// (0x0001a45e) cell_vitu_itu_pane_t3_ParamLimits

0x098b,	// (0x0001a45e) cell_vitu_itu_pane_t3

0x0ddb,	// (0x0001a8ae) mp4_progress_pane_t1_ParamLimits

0x0dfa,	// (0x0001a8cd) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x0002927a) mp4_progress_pane_t_ParamLimits

0x0e19,	// (0x0001a8ec) mup_progress_pane_cp04_ParamLimits

0x936e,	// (0x00022e41) main_myfav_hc_pane_t5_ParamLimits

0x936e,	// (0x00022e41) main_myfav_hc_pane_t5

0x43f6,	// (0x0001dec9) aid_zoom_text_primary

0x4532,	// (0x0001e005) popup_adpt_find_window_ParamLimits

0x4a4f,	// (0x0001e522) main_cam_set_pane

0x5438,	// (0x0001ef0b) cam4_zoom_pane_ParamLimits

0x5438,	// (0x0001ef0b) cam4_zoom_pane

0x9466,	// (0x00022f39) main_cam_set_pane_g1_ParamLimits

0x9466,	// (0x00022f39) main_cam_set_pane_g1

0x9474,	// (0x00022f47) main_cam_set_pane_g2_ParamLimits

0x9474,	// (0x00022f47) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x0002933b) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x0002933b) main_cam_set_pane_g

0x9480,	// (0x00022f53) main_cam_set_pane_t1_ParamLimits

0x9480,	// (0x00022f53) main_cam_set_pane_t1

0x949c,	// (0x00022f6f) main_cset_listscroll_pane_ParamLimits

0x949c,	// (0x00022f6f) main_cset_listscroll_pane

0x94ce,	// (0x00022fa1) main_cset_slider_pane_ParamLimits

0x94ce,	// (0x00022fa1) main_cset_slider_pane

0x1155,	// (0x0001ac28) main_cset_list_pane_ParamLimits

0x1155,	// (0x0001ac28) main_cset_list_pane

0x1165,	// (0x0001ac38) scroll_pane_cp028

0x94ed,	// (0x00022fc0) aid_area_touch_slider

0x9509,	// (0x00022fdc) cset_slider_pane

0x952c,	// (0x00022fff) main_cset_slider_pane_g1

0x9541,	// (0x00023014) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x00029340) main_cset_slider_pane_g

0x11b6,	// (0x0001ac89) main_cset_slider_pane_t1

0x9603,	// (0x000230d6) main_cset_slider_pane_t2

0x961d,	// (0x000230f0) main_cset_slider_pane_t3

0x9637,	// (0x0002310a) main_cset_slider_pane_t4

0x9651,	// (0x00023124) main_cset_slider_pane_t5

0x966f,	// (0x00023142) main_cset_slider_pane_t6

0x9686,	// (0x00023159) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x00029365) main_cset_slider_pane_t

0x9792,	// (0x00023265) cset_list_set_pane_ParamLimits

0x9792,	// (0x00023265) cset_list_set_pane

0x1250,	// (0x0001ad23) aid_position_infowindow_above

0x1258,	// (0x0001ad2b) aid_position_infowindow_below

0x1260,	// (0x0001ad33) cset_list_set_pane_g1_ParamLimits

0x1260,	// (0x0001ad33) cset_list_set_pane_g1

0x126c,	// (0x0001ad3f) cset_list_set_pane_g3_ParamLimits

0x126c,	// (0x0001ad3f) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x00029384) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x00029384) cset_list_set_pane_g

0x127b,	// (0x0001ad4e) cset_list_set_pane_t1_ParamLimits

0x127b,	// (0x0001ad4e) cset_list_set_pane_t1

0xcb45,	// (0x00026618) list_highlight_pane_cp021_ParamLimits

0xcb45,	// (0x00026618) list_highlight_pane_cp021

0xde55,	// (0x00027928) cset_slider_pane_g1

0xde67,	// (0x0002793a) cset_slider_pane_g2

0xde5e,	// (0x00027931) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x00029389) cset_slider_pane_g

0x58f8,	// (0x0001f3cb) aid_area_touch_cam4_zoom

0x5900,	// (0x0001f3d3) cam4_zoom_cont_pane

0x5908,	// (0x0001f3db) cam4_zoom_pane_g1

0x5910,	// (0x0001f3e3) cam4_zoom_pane_g2

0x5918,	// (0x0001f3eb) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x00029390) cam4_zoom_pane_g

0x5920,	// (0x0001f3f3) cam4_zoom_cont_pane_g1

0x5929,	// (0x0001f3fc) cam4_zoom_cont_pane_g2

0x5932,	// (0x0001f405) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x00029397) cam4_zoom_cont_pane_g

0x5292,	// (0x0001ed65) call4_image_pane_ParamLimits

0x5292,	// (0x0001ed65) call4_image_pane

0x52f1,	// (0x0001edc4) call4_windows_conf_pane_ParamLimits

0x5336,	// (0x0001ee09) popup_call4_audio_in_window_ParamLimits

0x5336,	// (0x0001ee09) popup_call4_audio_in_window

0xc963,	// (0x00026436) bg_popup_call2_act_pane_cp02

0x0ebe,	// (0x0001a991) call4_list_conf_pane

0xd0a2,	// (0x00026b75) call4_image_pane_g1

0xd0a2,	// (0x00026b75) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00028b5f) call4_image_pane_g

0x12cb,	// (0x0001ad9e) list_single_graphic_popup_conf4_pane_ParamLimits

0x12cb,	// (0x0001ad9e) list_single_graphic_popup_conf4_pane

0xc963,	// (0x00026436) list_highlight_pane_cp022

0x12de,	// (0x0001adb1) list_single_graphic_popup_conf4_pane_g1

0xda19,	// (0x000274ec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x0002939e) list_single_graphic_popup_conf4_pane_g

0x12e6,	// (0x0001adb9) list_single_graphic_popup_conf4_pane_t1

0x6547,	// (0x0002001a) popup_vtel_slider_window_ParamLimits

0x6547,	// (0x0002001a) popup_vtel_slider_window

0x0e2c,	// (0x0001a8ff) dialer2_ne_pane_t2_ParamLimits

0x0e2c,	// (0x0001a8ff) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x0002927f) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x0002927f) dialer2_ne_pane_t

0xcb45,	// (0x00026618) bg_popup_sub_pane_cp010_ParamLimits

0xcb45,	// (0x00026618) bg_popup_sub_pane_cp010

0x97a8,	// (0x0002327b) popup_vtel_slider_window_g1_ParamLimits

0x97a8,	// (0x0002327b) popup_vtel_slider_window_g1

0x97b4,	// (0x00023287) popup_vtel_slider_window_g2_ParamLimits

0x97b4,	// (0x00023287) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x000293a3) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x000293a3) popup_vtel_slider_window_g

0x97fc,	// (0x000232cf) vtel_slider_pane_ParamLimits

0x97fc,	// (0x000232cf) vtel_slider_pane

0x980b,	// (0x000232de) vtel_slider_pane_g1_ParamLimits

0x980b,	// (0x000232de) vtel_slider_pane_g1

0x9818,	// (0x000232eb) vtel_slider_pane_g2_ParamLimits

0x9818,	// (0x000232eb) vtel_slider_pane_g2

0x9825,	// (0x000232f8) vtel_slider_pane_g3_ParamLimits

0x9825,	// (0x000232f8) vtel_slider_pane_g3

0x980b,	// (0x000232de) vtel_slider_pane_g4_ParamLimits

0x980b,	// (0x000232de) vtel_slider_pane_g4

0x9832,	// (0x00023305) vtel_slider_pane_g5_ParamLimits

0x9832,	// (0x00023305) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x000293ac) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x000293ac) vtel_slider_pane_g

0x4a4f,	// (0x0001e522) main_gallery2_pane

0x5648,	// (0x0001f11b) aid_size_row_itut2_dropdow_list_ParamLimits

0x5648,	// (0x0001f11b) aid_size_row_itut2_dropdow_list

0x56b6,	// (0x0001f189) grid_vitu2_function_top_pane_ParamLimits

0x56b6,	// (0x0001f189) grid_vitu2_function_top_pane

0x5710,	// (0x0001f1e3) popup_vitu2_dropdown_list_window_ParamLimits

0x5710,	// (0x0001f1e3) popup_vitu2_dropdown_list_window

0x572e,	// (0x0001f201) popup_vitu2_match_list_window

0x593b,	// (0x0001f40e) cell_vitu2_function_top_pane_ParamLimits

0x593b,	// (0x0001f40e) cell_vitu2_function_top_pane

0x5955,	// (0x0001f428) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5955,	// (0x0001f428) cell_vitu2_function_top_pane_cp01

0x5971,	// (0x0001f444) cell_vitu2_function_top_wide_pane_ParamLimits

0x5971,	// (0x0001f444) cell_vitu2_function_top_wide_pane

0x4a4f,	// (0x0001e522) bg_button_pane_cp012

0x598f,	// (0x0001f462) cell_vitu2_function_top_pane_g1

0x59a3,	// (0x0001f476) bg_button_pane_cp013_ParamLimits

0x59a3,	// (0x0001f476) bg_button_pane_cp013

0x983f,	// (0x00023312) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x983f,	// (0x00023312) cell_vitu2_function_top_wide_pane_g1

0x4628,	// (0x0001e0fb) bg_popup_sub_pane_cp20

0x59bf,	// (0x0001f492) list_vitu2_match_list_pane

0x1025,	// (0x0001aaf8) bg_popup_sub_pane_cp20_g1

0x102d,	// (0x0001ab00) bg_popup_sub_pane_cp20_g2

0xd53a,	// (0x0002700d) bg_popup_sub_pane_cp20_g3

0x1035,	// (0x0001ab08) bg_popup_sub_pane_cp20_g4

0xd51a,	// (0x00026fed) bg_popup_sub_pane_cp20_g5

0x1318,	// (0x0001adeb) bg_popup_sub_pane_cp20_g6

0x1045,	// (0x0001ab18) bg_popup_sub_pane_cp20_g7

0x104d,	// (0x0001ab20) bg_popup_sub_pane_cp20_g8

0x1055,	// (0x0001ab28) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x000293b7) bg_popup_sub_pane_cp20_g

0x59d7,	// (0x0001f4aa) list_vitu2_match_list_item_pane_ParamLimits

0x59d7,	// (0x0001f4aa) list_vitu2_match_list_item_pane

0x59e9,	// (0x0001f4bc) list_vitu2_match_list_item_pane_t1

0x4636,	// (0x0001e109) bg_popup_sub_pane_cp21

0xd318,	// (0x00026deb) grid_vitu2_dropdown_list_pane

0x59f7,	// (0x0001f4ca) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x59f7,	// (0x0001f4ca) cell_vitu2_dropdown_list_char_pane

0x5a19,	// (0x0001f4ec) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5a19,	// (0x0001f4ec) cell_vitu2_dropdown_list_ctrl_pane

0x1352,	// (0x0001ae25) cell_vitu2_dropdown_list_char_pane_g1

0x1349,	// (0x0001ae1c) cell_vitu2_dropdown_list_char_pane_g2

0x1340,	// (0x0001ae13) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x000293ca) cell_vitu2_dropdown_list_char_pane_g

0x5a41,	// (0x0001f514) cell_vitu2_dropdown_list_char_pane_t1

0x9857,	// (0x0002332a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9857,	// (0x0002332a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9864,	// (0x00023337) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9864,	// (0x00023337) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9871,	// (0x00023344) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9871,	// (0x00023344) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5a4f,	// (0x0001f522) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5a4f,	// (0x0001f522) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2443,	// (0x0001bf16) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2443,	// (0x0001bf16) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x000293d1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x000293d1) cell_vitu2_dropdown_list_ctrl_pane_g

0x987e,	// (0x00023351) aid_size_cell_gallery2_ParamLimits

0x987e,	// (0x00023351) aid_size_cell_gallery2

0x9898,	// (0x0002336b) grid_gallery2_pane_ParamLimits

0x9898,	// (0x0002336b) grid_gallery2_pane

0x98af,	// (0x00023382) scroll_pane_cp029_ParamLimits

0x98af,	// (0x00023382) scroll_pane_cp029

0x98bf,	// (0x00023392) cell_gallery2_pane_ParamLimits

0x98bf,	// (0x00023392) cell_gallery2_pane

0x135b,	// (0x0001ae2e) cell_gallery2_pane_g2

0x27fa,	// (0x0001c2cd) cell_gallery2_pane_g3

0x1363,	// (0x0001ae36) cell_gallery2_pane_g4

0x136b,	// (0x0001ae3e) cell_gallery2_pane_g5

0xd318,	// (0x00026deb) grid_highlight_pane_cp10

0x572e,	// (0x0001f201) popup_vitu2_match_list_window_ParamLimits

0x5740,	// (0x0001f213) popup_vitu2_query_window_ParamLimits

0x5740,	// (0x0001f213) popup_vitu2_query_window

0x4636,	// (0x0001e109) bg_vitu2_candi_button_pane

0x1352,	// (0x0001ae25) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1349,	// (0x0001ae1c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1340,	// (0x0001ae13) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9914,	// (0x000233e7) bg_button_pane_cp015

0x9929,	// (0x000233fc) bg_button_pane_cp016

0x9935,	// (0x00023408) bg_button_pane_cp017

0xde06,	// (0x000278d9) bg_popup_sub_pane_cp22

0x1373,	// (0x0001ae46) popup_vitu2_query_window_g1

0x9975,	// (0x00023448) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x000293dc) popup_vitu2_query_window_g

0x9999,	// (0x0002346c) popup_vitu2_query_window_t1_ParamLimits

0x9999,	// (0x0002346c) popup_vitu2_query_window_t1

0x99cc,	// (0x0002349f) popup_vitu2_query_window_t2_ParamLimits

0x99cc,	// (0x0002349f) popup_vitu2_query_window_t2

0x99de,	// (0x000234b1) popup_vitu2_query_window_t3_ParamLimits

0x99de,	// (0x000234b1) popup_vitu2_query_window_t3

0x9a06,	// (0x000234d9) popup_vitu2_query_window_t4_ParamLimits

0x9a06,	// (0x000234d9) popup_vitu2_query_window_t4

0x9a1a,	// (0x000234ed) popup_vitu2_query_window_t5_ParamLimits

0x9a1a,	// (0x000234ed) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x000293e3) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x000293e3) popup_vitu2_query_window_t

0x114d,	// (0x0001ac20) main_cset_text_pane

0x94ed,	// (0x00022fc0) aid_area_touch_slider_ParamLimits

0x9509,	// (0x00022fdc) cset_slider_pane_ParamLimits

0x952c,	// (0x00022fff) main_cset_slider_pane_g1_ParamLimits

0x9541,	// (0x00023014) main_cset_slider_pane_g2_ParamLimits

0x116e,	// (0x0001ac41) main_cset_slider_pane_g3_ParamLimits

0x116e,	// (0x0001ac41) main_cset_slider_pane_g3

0x9556,	// (0x00023029) main_cset_slider_pane_g4_ParamLimits

0x9556,	// (0x00023029) main_cset_slider_pane_g4

0x9565,	// (0x00023038) main_cset_slider_pane_g5_ParamLimits

0x9565,	// (0x00023038) main_cset_slider_pane_g5

0x9573,	// (0x00023046) main_cset_slider_pane_g6_ParamLimits

0x9573,	// (0x00023046) main_cset_slider_pane_g6

0xf86d,	// (0x00029340) main_cset_slider_pane_g_ParamLimits

0x11b6,	// (0x0001ac89) main_cset_slider_pane_t1_ParamLimits

0x9603,	// (0x000230d6) main_cset_slider_pane_t2_ParamLimits

0x961d,	// (0x000230f0) main_cset_slider_pane_t3_ParamLimits

0x9637,	// (0x0002310a) main_cset_slider_pane_t4_ParamLimits

0x9651,	// (0x00023124) main_cset_slider_pane_t5_ParamLimits

0x966f,	// (0x00023142) main_cset_slider_pane_t6_ParamLimits

0x9686,	// (0x00023159) main_cset_slider_pane_t7_ParamLimits

0x96b4,	// (0x00023187) main_cset_slider_pane_t8_ParamLimits

0x96b4,	// (0x00023187) main_cset_slider_pane_t8

0x96dc,	// (0x000231af) main_cset_slider_pane_t9_ParamLimits

0x96dc,	// (0x000231af) main_cset_slider_pane_t9

0x9704,	// (0x000231d7) main_cset_slider_pane_t10_ParamLimits

0x9704,	// (0x000231d7) main_cset_slider_pane_t10

0x972c,	// (0x000231ff) main_cset_slider_pane_t11_ParamLimits

0x972c,	// (0x000231ff) main_cset_slider_pane_t11

0x9756,	// (0x00023229) main_cset_slider_pane_t12_ParamLimits

0x9756,	// (0x00023229) main_cset_slider_pane_t12

0x9773,	// (0x00023246) main_cset_slider_pane_t13_ParamLimits

0x9773,	// (0x00023246) main_cset_slider_pane_t13

0xf892,	// (0x00029365) main_cset_slider_pane_t_ParamLimits

0xc963,	// (0x00026436) bg_popup_sub_pane_cp011

0x137f,	// (0x0001ae52) main_cset_text_pane_g1

0x1387,	// (0x0001ae5a) main_cset_text_pane_t1

0x1395,	// (0x0001ae68) main_cset_text_pane_t2

0x13a3,	// (0x0001ae76) main_cset_text_pane_t3

0x13b1,	// (0x0001ae84) main_cset_text_pane_t4

0x13bf,	// (0x0001ae92) main_cset_text_pane_t5

0x13cd,	// (0x0001aea0) main_cset_text_pane_t6

0x13db,	// (0x0001aeae) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x000293f2) main_cset_text_pane_t

0x4636,	// (0x0001e109) main_cam4_burst_pane

0x4636,	// (0x0001e109) main_cam5_pane

0x110f,	// (0x0001abe2) bg_button_pane_cp019

0x1118,	// (0x0001abeb) bg_button_pane_cp020

0x117a,	// (0x0001ac4d) main_cset_slider_pane_g7_ParamLimits

0x117a,	// (0x0001ac4d) main_cset_slider_pane_g7

0x1186,	// (0x0001ac59) main_cset_slider_pane_g8_ParamLimits

0x1186,	// (0x0001ac59) main_cset_slider_pane_g8

0x9587,	// (0x0002305a) main_cset_slider_pane_g9_ParamLimits

0x9587,	// (0x0002305a) main_cset_slider_pane_g9

0x9593,	// (0x00023066) main_cset_slider_pane_g10_ParamLimits

0x9593,	// (0x00023066) main_cset_slider_pane_g10

0x959f,	// (0x00023072) main_cset_slider_pane_g11_ParamLimits

0x959f,	// (0x00023072) main_cset_slider_pane_g11

0x95ab,	// (0x0002307e) main_cset_slider_pane_g12_ParamLimits

0x95ab,	// (0x0002307e) main_cset_slider_pane_g12

0x95b7,	// (0x0002308a) main_cset_slider_pane_g13_ParamLimits

0x95b7,	// (0x0002308a) main_cset_slider_pane_g13

0x95c3,	// (0x00023096) main_cset_slider_pane_g14_ParamLimits

0x95c3,	// (0x00023096) main_cset_slider_pane_g14

0x95cf,	// (0x000230a2) main_cset_slider_pane_g15_ParamLimits

0x95cf,	// (0x000230a2) main_cset_slider_pane_g15

0x11de,	// (0x0001acb1) main_cset_slider_pane_t14_ParamLimits

0x11de,	// (0x0001acb1) main_cset_slider_pane_t14

0x1217,	// (0x0001acea) main_cset_slider_pane_t15_ParamLimits

0x1217,	// (0x0001acea) main_cset_slider_pane_t15

0x9a84,	// (0x00023557) aid_cam4_burst_size_cell_ParamLimits

0x9a84,	// (0x00023557) aid_cam4_burst_size_cell

0x9aa0,	// (0x00023573) grid_cam4_burst_pane_ParamLimits

0x9aa0,	// (0x00023573) grid_cam4_burst_pane

0x9ad0,	// (0x000235a3) linegrid_cam4_burst_pane_ParamLimits

0x9ad0,	// (0x000235a3) linegrid_cam4_burst_pane

0x9af0,	// (0x000235c3) scroll_pane_cp30_ParamLimits

0x9af0,	// (0x000235c3) scroll_pane_cp30

0x9afc,	// (0x000235cf) cell_cam4_burst_pane_ParamLimits

0x9afc,	// (0x000235cf) cell_cam4_burst_pane

0x13f5,	// (0x0001aec8) linegrid_cam4_burst_pane_g1_ParamLimits

0x13f5,	// (0x0001aec8) linegrid_cam4_burst_pane_g1

0x9b38,	// (0x0002360b) linegrid_cam4_burst_pane_g2_ParamLimits

0x9b38,	// (0x0002360b) linegrid_cam4_burst_pane_g2

0x1402,	// (0x0001aed5) linegrid_cam4_burst_pane_g3_ParamLimits

0x1402,	// (0x0001aed5) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x00029401) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x00029401) linegrid_cam4_burst_pane_g

0x9b49,	// (0x0002361c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9b49,	// (0x0002361c) linegrid_cam4_burst_pane_g3_copy1

0x140f,	// (0x0001aee2) linegrid_cam4_burst_pane_g4_ParamLimits

0x140f,	// (0x0001aee2) linegrid_cam4_burst_pane_g4

0x9b63,	// (0x00023636) linegrid_cam4_burst_pane_g5_ParamLimits

0x9b63,	// (0x00023636) linegrid_cam4_burst_pane_g5

0x9b74,	// (0x00023647) linegrid_cam4_burst_pane_g6_ParamLimits

0x9b74,	// (0x00023647) linegrid_cam4_burst_pane_g6

0x141c,	// (0x0001aeef) linegrid_cam4_burst_pane_g7_ParamLimits

0x141c,	// (0x0001aeef) linegrid_cam4_burst_pane_g7

0x9b85,	// (0x00023658) cell_cam4_burst_pane_g1

0x1435,	// (0x0001af08) main_cam5_pane_t1_ParamLimits

0x1435,	// (0x0001af08) main_cam5_pane_t1

0x1447,	// (0x0001af1a) main_cam5_pane_t2_ParamLimits

0x1447,	// (0x0001af1a) main_cam5_pane_t2

0x1459,	// (0x0001af2c) main_cam5_pane_t3_ParamLimits

0x1459,	// (0x0001af2c) main_cam5_pane_t3

0x146b,	// (0x0001af3e) main_cam5_pane_t4_ParamLimits

0x146b,	// (0x0001af3e) main_cam5_pane_t4

0x1483,	// (0x0001af56) main_cam5_pane_t5_ParamLimits

0x1483,	// (0x0001af56) main_cam5_pane_t5

0x1497,	// (0x0001af6a) main_cam5_pane_t6_ParamLimits

0x1497,	// (0x0001af6a) main_cam5_pane_t6

0x14ab,	// (0x0001af7e) main_cam5_pane_t7_ParamLimits

0x14ab,	// (0x0001af7e) main_cam5_pane_t7

0x14bd,	// (0x0001af90) main_cam5_pane_t8_ParamLimits

0x14bd,	// (0x0001af90) main_cam5_pane_t8

0x14d9,	// (0x0001afac) main_cam5_pane_t9_ParamLimits

0x14d9,	// (0x0001afac) main_cam5_pane_t9

0x14eb,	// (0x0001afbe) main_cam5_pane_t10_ParamLimits

0x14eb,	// (0x0001afbe) main_cam5_pane_t10

0x14fd,	// (0x0001afd0) main_cam5_pane_t11_ParamLimits

0x14fd,	// (0x0001afd0) main_cam5_pane_t11

0x150f,	// (0x0001afe2) main_cam5_pane_t12_ParamLimits

0x150f,	// (0x0001afe2) main_cam5_pane_t12

0x1524,	// (0x0001aff7) main_cam5_pane_t13_ParamLimits

0x1524,	// (0x0001aff7) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x0002940d) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x0002940d) main_cam5_pane_t

0x45e7,	// (0x0001e0ba) popup_scut_keymap_window_ParamLimits

0x45e7,	// (0x0001e0ba) popup_scut_keymap_window

0x9b98,	// (0x0002366b) aid_size_cell_brow_shortcut

0xd318,	// (0x00026deb) bg_popup_window_pane_cp010

0x9ba4,	// (0x00023677) grid_scut_pane

0x9bb0,	// (0x00023683) cell_scut_pane_ParamLimits

0x9bb0,	// (0x00023683) cell_scut_pane

0x9bc7,	// (0x0002369a) cell_scut_pane_g1

0x1541,	// (0x0001b014) cell_scut_pane_t1

0x1550,	// (0x0001b023) cell_scut_pane_t2

0x9bd0,	// (0x000236a3) cell_scut_pane_t3

0x0002,

0xf955,	// (0x00029428) cell_scut_pane_t

0x8928,	// (0x000223fb) main_mup3_pane_g8_ParamLimits

0x8928,	// (0x000223fb) main_mup3_pane_g8

0x5656,	// (0x0001f129) area_vitu2_query_pane_ParamLimits

0x5656,	// (0x0001f129) area_vitu2_query_pane

0x9941,	// (0x00023414) input_focus_pane_cp08

0x155f,	// (0x0001b032) area_vitu2_query_pane_g1

0x9bde,	// (0x000236b1) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x0002942f) area_vitu2_query_pane_g

0x9bef,	// (0x000236c2) area_vitu2_query_pane_t1_ParamLimits

0x9bef,	// (0x000236c2) area_vitu2_query_pane_t1

0x9c03,	// (0x000236d6) area_vitu2_query_pane_t2_ParamLimits

0x9c03,	// (0x000236d6) area_vitu2_query_pane_t2

0x9c17,	// (0x000236ea) area_vitu2_query_pane_t3_ParamLimits

0x9c17,	// (0x000236ea) area_vitu2_query_pane_t3

0x156b,	// (0x0001b03e) area_vitu2_query_pane_t4_ParamLimits

0x156b,	// (0x0001b03e) area_vitu2_query_pane_t4

0x1593,	// (0x0001b066) area_vitu2_query_pane_t5_ParamLimits

0x1593,	// (0x0001b066) area_vitu2_query_pane_t5

0x15bb,	// (0x0001b08e) area_vitu2_query_pane_t6_ParamLimits

0x15bb,	// (0x0001b08e) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x00029434) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x00029434) area_vitu2_query_pane_t

0x9929,	// (0x000233fc) bg_button_pane_cp018

0x9c3f,	// (0x00023712) bg_button_pane_cp021

0x9c4b,	// (0x0002371e) bg_button_pane_cp022

0x9c6e,	// (0x00023741) input_focus_pane_cp09

0xdb55,	// (0x00027628) aid_size_touch_mv_arrow_left

0xdb7e,	// (0x00027651) aid_size_touch_mv_arrow_right

0x95e7,	// (0x000230ba) main_cset_slider_pane_g16_ParamLimits

0x95e7,	// (0x000230ba) main_cset_slider_pane_g16

0x95f5,	// (0x000230c8) main_cset_slider_pane_g17_ParamLimits

0x95f5,	// (0x000230c8) main_cset_slider_pane_g17

0x9b85,	// (0x00023658) cell_cam4_burst_pane_g1_ParamLimits

0xc963,	// (0x00026436) compa_mode_pane

0x97c0,	// (0x00023293) popup_vtel_slider_window_g3_ParamLimits

0x97c0,	// (0x00023293) popup_vtel_slider_window_g3

0x97d4,	// (0x000232a7) popup_vtel_slider_window_g4_ParamLimits

0x97d4,	// (0x000232a7) popup_vtel_slider_window_g4

0x97e8,	// (0x000232bb) popup_vtel_slider_window_t1_ParamLimits

0x97e8,	// (0x000232bb) popup_vtel_slider_window_t1

0x4636,	// (0x0001e109) main_cl_pane

0x4aed,	// (0x0001e5c0) popup_imed_adjust2_window_ParamLimits

0xde06,	// (0x000278d9) bg_tb_trans_pane_cp05_ParamLimits

0x08b8,	// (0x0001a38b) popup_imed_adjust2_window_g1_ParamLimits

0x08c7,	// (0x0001a39a) popup_imed_adjust2_window_g2_ParamLimits

0x08c7,	// (0x0001a39a) popup_imed_adjust2_window_g2

0x08d3,	// (0x0001a3a6) popup_imed_adjust2_window_g3_ParamLimits

0x08d3,	// (0x0001a3a6) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x000291b4) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x000291b4) popup_imed_adjust2_window_g

0x08df,	// (0x0001a3b2) popup_imed_adjust2_window_t1_ParamLimits

0x08f7,	// (0x0001a3ca) slider_imed_adjust_pane_ParamLimits

0x090b,	// (0x0001a3de) slider_imed_adjust_pane_g1_ParamLimits

0x091b,	// (0x0001a3ee) slider_imed_adjust_pane_g2_ParamLimits

0x092b,	// (0x0001a3fe) slider_imed_adjust_pane_g3_ParamLimits

0x093c,	// (0x0001a40f) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x000291bb) slider_imed_adjust_pane_g_ParamLimits

0x53e1,	// (0x0001eeb4) aid_touch_area_cam4_ParamLimits

0x53e1,	// (0x0001eeb4) aid_touch_area_cam4

0x53f1,	// (0x0001eec4) battery_pane_cp01

0x5478,	// (0x0001ef4b) main_camera4_pane_g6_ParamLimits

0x5478,	// (0x0001ef4b) main_camera4_pane_g6

0x5496,	// (0x0001ef69) main_camera4_pane_t2_ParamLimits

0x5496,	// (0x0001ef69) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x000292b3) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x000292b3) main_camera4_pane_t

0x54f9,	// (0x0001efcc) aid_touch_area_vid4_ParamLimits

0x54f9,	// (0x0001efcc) aid_touch_area_vid4

0x5539,	// (0x0001f00c) main_video4_pane_g5_ParamLimits

0x5539,	// (0x0001f00c) main_video4_pane_g5

0x555d,	// (0x0001f030) vid4_progress_pane_ParamLimits

0x555d,	// (0x0001f030) vid4_progress_pane

0x11aa,	// (0x0001ac7d) main_cset_slider_pane_g18_ParamLimits

0x11aa,	// (0x0001ac7d) main_cset_slider_pane_g18

0x1429,	// (0x0001aefc) cell_cam4_burst_pane_g2_ParamLimits

0x1429,	// (0x0001aefc) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x00029408) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x00029408) cell_cam4_burst_pane_g

0x9c7e,	// (0x00023751) bg_cl_pane_ParamLimits

0x9c7e,	// (0x00023751) bg_cl_pane

0x9c8a,	// (0x0002375d) cl_header_pane_ParamLimits

0x9c8a,	// (0x0002375d) cl_header_pane

0x9c96,	// (0x00023769) cl_listscroll_pane_ParamLimits

0x9c96,	// (0x00023769) cl_listscroll_pane

0x1607,	// (0x0001b0da) bg_cl_pane_g1

0x160f,	// (0x0001b0e2) bg_cl_pane_g2

0x1617,	// (0x0001b0ea) bg_cl_pane_g3

0x161f,	// (0x0001b0f2) bg_cl_pane_g4

0x1627,	// (0x0001b0fa) bg_cl_pane_g5

0x162f,	// (0x0001b102) bg_cl_pane_g6

0x1637,	// (0x0001b10a) bg_cl_pane_g7

0x163f,	// (0x0001b112) bg_cl_pane_g8

0x1647,	// (0x0001b11a) bg_cl_pane_g9

0x0008,

0xf970,	// (0x00029443) bg_cl_pane_g

0x9ca2,	// (0x00023775) aid_height_cl_leading_ParamLimits

0x9ca2,	// (0x00023775) aid_height_cl_leading

0x9cae,	// (0x00023781) aid_height_cl_text_ParamLimits

0x9cae,	// (0x00023781) aid_height_cl_text

0xd056,	// (0x00026b29) bg_cl_header_pane_ParamLimits

0xd056,	// (0x00026b29) bg_cl_header_pane

0x9cc6,	// (0x00023799) cl_header_pane_g1_ParamLimits

0x9cc6,	// (0x00023799) cl_header_pane_g1

0x9cd3,	// (0x000237a6) cl_header_pane_t1_ParamLimits

0x9cd3,	// (0x000237a6) cl_header_pane_t1

0x164f,	// (0x0001b122) cl_list_pane

0x1165,	// (0x0001ac38) hc_scroll_pane_cp01

0xd51a,	// (0x00026fed) bg_cl_header_pane_g1

0x1025,	// (0x0001aaf8) bg_cl_header_pane_g2

0xd53a,	// (0x0002700d) bg_cl_header_pane_g3

0x1035,	// (0x0001ab08) bg_cl_header_pane_g4

0x102d,	// (0x0001ab00) bg_cl_header_pane_g5

0x1318,	// (0x0001adeb) bg_cl_header_pane_g6

0x104d,	// (0x0001ab20) bg_cl_header_pane_g7

0x1055,	// (0x0001ab28) bg_cl_header_pane_g8

0x1045,	// (0x0001ab18) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x00029456) bg_cl_header_pane_g

0x9ce5,	// (0x000237b8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9ce5,	// (0x000237b8) hc_cl_list_double_graphic_heading_pane

0x9cf6,	// (0x000237c9) hc_cl_list_single_graphic_pane_ParamLimits

0x9cf6,	// (0x000237c9) hc_cl_list_single_graphic_pane

0x9d0f,	// (0x000237e2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9d0f,	// (0x000237e2) hc_cl_list_single_graphic_pane_g1

0x9d1b,	// (0x000237ee) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9d1b,	// (0x000237ee) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x00029469) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x00029469) hc_cl_list_single_graphic_pane_g

0x9d2f,	// (0x00023802) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9d2f,	// (0x00023802) hc_cl_list_single_graphic_pane_t1

0x9d0f,	// (0x000237e2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9d0f,	// (0x000237e2) hc_cl_list_double_graphic_heading_pane_g1

0x9d44,	// (0x00023817) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9d44,	// (0x00023817) hc_cl_list_double_graphic_heading_pane_g2

0x9d58,	// (0x0002382b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9d58,	// (0x0002382b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x0002946e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x0002946e) hc_cl_list_double_graphic_heading_pane_g

0x9d6c,	// (0x0002383f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9d6c,	// (0x0002383f) hc_cl_list_double_graphic_heading_pane_t1

0x9d81,	// (0x00023854) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9d81,	// (0x00023854) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x00029475) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x00029475) hc_cl_list_double_graphic_heading_pane_t

0x5a73,	// (0x0001f546) vid4_progress_pane_g1

0x5a83,	// (0x0001f556) vid4_progress_pane_g2

0x5a93,	// (0x0001f566) vid4_progress_pane_g3

0x5aa5,	// (0x0001f578) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x0002947a) vid4_progress_pane_g

0x5abd,	// (0x0001f590) vid4_progress_pane_t1

0x5ad3,	// (0x0001f5a6) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x00029485) vid4_progress_pane_t

0x5afd,	// (0x0001f5d0) wait_bar_pane_cp07

0x01e1,	// (0x00019cb4) blid_firmament_pane_ParamLimits

0x0224,	// (0x00019cf7) popup_blid_sat_info2_window_g1

0x0248,	// (0x00019d1b) popup_blid_sat_info2_window_t3

0x0256,	// (0x00019d29) popup_blid_sat_info2_window_t4

0x0264,	// (0x00019d37) popup_blid_sat_info2_window_t5

0x0272,	// (0x00019d45) popup_blid_sat_info2_window_t6

0x0282,	// (0x00019d55) popup_blid_sat_info2_window_t7

0x0290,	// (0x00019d63) popup_blid_sat_info2_window_t8

0x029e,	// (0x00019d71) popup_blid_sat_info2_window_t9

0x02ac,	// (0x00019d7f) popup_blid_sat_info2_window_t10

0x036d,	// (0x00019e40) aid_firma_cardinal_ParamLimits

0x0381,	// (0x00019e54) blid_firmament_pane_t1_ParamLimits

0x0398,	// (0x00019e6b) blid_firmament_pane_t2_ParamLimits

0x03af,	// (0x00019e82) blid_firmament_pane_t3_ParamLimits

0x03c6,	// (0x00019e99) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x000290ad) blid_firmament_pane_t_ParamLimits

0x03dd,	// (0x00019eb0) blid_sat_info_pane_ParamLimits

0x4a4f,	// (0x0001e522) main_cam_set_pane_ParamLimits

0x8f1a,	// (0x000229ed) aid_size_cell_colour_35_ParamLimits

0x8f34,	// (0x00022a07) aid_size_cell_colour_112_ParamLimits

0x8f4b,	// (0x00022a1e) aid_size_cell_effect_ParamLimits

0xcb45,	// (0x00026618) bg_tb_trans_pane_cp02_ParamLimits

0xd8fa,	// (0x000273cd) heading_imed_pane_ParamLimits

0x8f65,	// (0x00022a38) listscroll_imed_pane_ParamLimits

0xe6d3,	// (0x000281a6) popup_call2_audio_first_window_g5_ParamLimits

0xe6d3,	// (0x000281a6) popup_call2_audio_first_window_g5

0x511b,	// (0x0001ebee) aid_size_touch_image3_arrow_left_ParamLimits

0x511b,	// (0x0001ebee) aid_size_touch_image3_arrow_left

0x5131,	// (0x0001ec04) aid_size_touch_image3_arrow_right_ParamLimits

0x5131,	// (0x0001ec04) aid_size_touch_image3_arrow_right

0x5ae8,	// (0x0001f5bb) vid4_progress_pane_t3

0x90be,	// (0x00022b91) main_hwr_training_symbol_option_pane_ParamLimits

0x90be,	// (0x00022b91) main_hwr_training_symbol_option_pane

0x0a56,	// (0x0001a529) popup_hwr_training_preview_window_ParamLimits

0x0a56,	// (0x0001a529) popup_hwr_training_preview_window

0x4d91,	// (0x0001e864) hwr_training_navi_pane_g5_ParamLimits

0x4d91,	// (0x0001e864) hwr_training_navi_pane_g5

0x1013,	// (0x0001aae6) popup_char_count_window

0x4628,	// (0x0001e0fb) bg_popup_sub_pane_cp20_ParamLimits

0x59bf,	// (0x0001f492) list_vitu2_match_list_pane_ParamLimits

0x59cb,	// (0x0001f49e) vitu2_page_scroll_pane_ParamLimits

0x59cb,	// (0x0001f49e) vitu2_page_scroll_pane

0x16e4,	// (0x0001b1b7) list_single_hwr_training_symbol_option_pane_ParamLimits

0x16e4,	// (0x0001b1b7) list_single_hwr_training_symbol_option_pane

0x16f7,	// (0x0001b1ca) list_single_hwr_training_symbol_option_pane_g1

0x16ff,	// (0x0001b1d2) list_single_hwr_training_symbol_option_pane_t1

0x170d,	// (0x0001b1e0) bg_button_pane_cp023

0x1716,	// (0x0001b1e9) bg_button_pane_cp024

0x1749,	// (0x0001b21c) vitu2_page_scroll_pane_g1

0x1751,	// (0x0001b224) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x0002948c) vitu2_page_scroll_pane_g

0x1759,	// (0x0001b22c) vitu2_page_scroll_pane_t1

0x0157,	// (0x00019c2a) popup_char_count_window_g1

0x1768,	// (0x0001b23b) popup_char_count_window_g2

0x1771,	// (0x0001b244) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x00029491) popup_char_count_window_g

0x177a,	// (0x0001b24d) popup_char_count_window_t1

0x4636,	// (0x0001e109) main_vded2_pane

0x08a4,	// (0x0001a377) aid_size_cell_imed_line

0x08ae,	// (0x0001a381) grid_imed_line_width_pane

0x55cb,	// (0x0001f09e) vid4_indicators_pane_g4

0x1788,	// (0x0001b25b) cell_imed_line_width_pane_ParamLimits

0x1788,	// (0x0001b25b) cell_imed_line_width_pane

0x179c,	// (0x0001b26f) cell_imed_line_width_pane_g1

0x17a5,	// (0x0001b278) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x00029498) cell_imed_line_width_pane_g

0x9daa,	// (0x0002387d) main_vded2_pane_g1_ParamLimits

0x9daa,	// (0x0002387d) main_vded2_pane_g1

0x9db7,	// (0x0002388a) main_vded2_pane_g2_ParamLimits

0x9db7,	// (0x0002388a) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x0002949d) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x0002949d) main_vded2_pane_g

0x9dc5,	// (0x00023898) vded2_slider_pane_ParamLimits

0x9dc5,	// (0x00023898) vded2_slider_pane

0x9dd2,	// (0x000238a5) aid_size_touch_vded2_end

0x9ddc,	// (0x000238af) aid_size_touch_vded2_playhead

0x17ad,	// (0x0001b280) aid_size_touch_vded2_start

0x17b5,	// (0x0001b288) vded2_slider_bg_pane

0x17be,	// (0x0001b291) vded2_slider_pane_g1

0x17c7,	// (0x0001b29a) vded2_slider_pane_g2

0x9de4,	// (0x000238b7) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x000294a2) vded2_slider_pane_g

0x17cf,	// (0x0001b2a2) vded2_slider_bg_pane_g1

0x17d8,	// (0x0001b2ab) vded2_slider_bg_pane_g2

0x17e1,	// (0x0001b2b4) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x000294a9) vded2_slider_bg_pane_g

0x7c09,	// (0x000216dc) aid_postcard_touch_down_pane_ParamLimits

0x7c09,	// (0x000216dc) aid_postcard_touch_down_pane

0x7c19,	// (0x000216ec) aid_postcard_touch_up_pane_ParamLimits

0x7c19,	// (0x000216ec) aid_postcard_touch_up_pane

0x4636,	// (0x0001e109) main_blid2_pane

0x4a78,	// (0x0001e54b) popup_blid2_search_window

0xc963,	// (0x00026436) blid2_gps_pane

0xc963,	// (0x00026436) blid2_navig_pane

0xc963,	// (0x00026436) blid2_search_pane

0xc963,	// (0x00026436) blid2_tripm_pane

0x9ded,	// (0x000238c0) blid2_search_pane_g1_ParamLimits

0x9ded,	// (0x000238c0) blid2_search_pane_g1

0x9dfd,	// (0x000238d0) blid2_search_pane_t1_ParamLimits

0x9dfd,	// (0x000238d0) blid2_search_pane_t1

0x9e0f,	// (0x000238e2) aid_size_cell_blid2_gps_ParamLimits

0x9e0f,	// (0x000238e2) aid_size_cell_blid2_gps

0x9e1f,	// (0x000238f2) blid2_gps_pane_g1_ParamLimits

0x9e1f,	// (0x000238f2) blid2_gps_pane_g1

0x9e2b,	// (0x000238fe) grid_blid2_satellite_pane_ParamLimits

0x9e2b,	// (0x000238fe) grid_blid2_satellite_pane

0x9e3b,	// (0x0002390e) blid2_navig_pane_g1_ParamLimits

0x9e3b,	// (0x0002390e) blid2_navig_pane_g1

0x9e47,	// (0x0002391a) blid2_navig_pane_t1_ParamLimits

0x9e47,	// (0x0002391a) blid2_navig_pane_t1

0x9e59,	// (0x0002392c) blid2_navig_pane_t2_ParamLimits

0x9e59,	// (0x0002392c) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x000294b0) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x000294b0) blid2_navig_pane_t

0x9e6b,	// (0x0002393e) blid2_navig_ring_pane_ParamLimits

0x9e6b,	// (0x0002393e) blid2_navig_ring_pane

0x9e7b,	// (0x0002394e) blid2_speed_pane_ParamLimits

0x9e7b,	// (0x0002394e) blid2_speed_pane

0x9e87,	// (0x0002395a) blid2_tripm_pane_g1_ParamLimits

0x9e87,	// (0x0002395a) blid2_tripm_pane_g1

0x9e97,	// (0x0002396a) blid2_tripm_pane_g2_ParamLimits

0x9e97,	// (0x0002396a) blid2_tripm_pane_g2

0x9ea3,	// (0x00023976) blid2_tripm_pane_g3_ParamLimits

0x9ea3,	// (0x00023976) blid2_tripm_pane_g3

0x9eaf,	// (0x00023982) blid2_tripm_pane_g4_ParamLimits

0x9eaf,	// (0x00023982) blid2_tripm_pane_g4

0x9ebb,	// (0x0002398e) blid2_tripm_pane_g5_ParamLimits

0x9ebb,	// (0x0002398e) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x000294b5) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x000294b5) blid2_tripm_pane_g

0x9ed7,	// (0x000239aa) blid2_tripm_pane_t1_ParamLimits

0x9ed7,	// (0x000239aa) blid2_tripm_pane_t1

0x9eeb,	// (0x000239be) blid2_tripm_pane_t2_ParamLimits

0x9eeb,	// (0x000239be) blid2_tripm_pane_t2

0x9efd,	// (0x000239d0) blid2_tripm_pane_t3_ParamLimits

0x9efd,	// (0x000239d0) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x000294c2) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x000294c2) blid2_tripm_pane_t

0x9f2f,	// (0x00023a02) cell_blid2_satellite_pane_ParamLimits

0x9f2f,	// (0x00023a02) cell_blid2_satellite_pane

0x9f49,	// (0x00023a1c) cell_blid2_satellite_pane_g1

0x17ea,	// (0x0001b2bd) cell_blid2_satellite_pane_t1

0xd0a2,	// (0x00026b75) blid2_speed_pane_g1

0x17f8,	// (0x0001b2cb) blid2_speed_pane_t1

0x1806,	// (0x0001b2d9) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x000294cb) blid2_speed_pane_t

0xd0a2,	// (0x00026b75) blid2_navig_ring_pane_g1

0x9f52,	// (0x00023a25) blid2_navig_ring_pane_g2

0x9f5a,	// (0x00023a2d) blid2_navig_ring_pane_g3

0x9f62,	// (0x00023a35) blid2_navig_ring_pane_g4

0x9f6a,	// (0x00023a3d) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x000294d0) blid2_navig_ring_pane_g

0xc963,	// (0x00026436) bg_popup_window_pane_cp011

0x1814,	// (0x0001b2e7) popup_blid2_search_window_g1

0x181c,	// (0x0001b2ef) popup_blid2_search_window_t1

0x182a,	// (0x0001b2fd) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x000294db) popup_blid2_search_window_t

0xd429,	// (0x00026efc) main_browser_pane_g1

0xd100,	// (0x00026bd3) main_browser_pane_ParamLimits

0x4a4f,	// (0x0001e522) bg_button_pane_cp011_ParamLimits

0x58e4,	// (0x0001f3b7) cell_vitu2_function_pane_g1_ParamLimits

0xde06,	// (0x000278d9) bg_popup_sub_pane_cp22_ParamLimits

0x9941,	// (0x00023414) input_focus_pane_cp08_ParamLimits

0x995c,	// (0x0002342f) popup_vitu2_query_button_pane_ParamLimits

0x995c,	// (0x0002342f) popup_vitu2_query_button_pane

0x996b,	// (0x0002343e) popup_vitu2_query_input_button_pane

0x1373,	// (0x0001ae46) popup_vitu2_query_window_g1_ParamLimits

0x9975,	// (0x00023448) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x000293dc) popup_vitu2_query_window_g_ParamLimits

0xc963,	// (0x00026436) bg_button_pane_cp026

0x9f72,	// (0x00023a45) popup_vitu2_query_input_button_pane_g1

0xc963,	// (0x00026436) bg_button_pane_cp025

0x1838,	// (0x0001b30b) popup_vitu2_query_button_pane_t1

0x8579,	// (0x0002204c) main_mp3_pane_t6

0x8589,	// (0x0002205c) popup_slider_window_cp01

0x54a8,	// (0x0001ef7b) cam4_battery_pane

0x5588,	// (0x0001f05b) cam4_battery_pane_cp02

0x5a6b,	// (0x0001f53e) cam4_battery_pane_cp01

0x5a6b,	// (0x0001f53e) cam4_battery_pane_cp03

0x1846,	// (0x0001b319) cam4_battery_pane_g1

0xd0a2,	// (0x00026b75) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x000294e0) cam4_battery_pane_g

0x02ba,	// (0x00019d8d) popup_blid_sat_info2_window_t11

0xdb55,	// (0x00027628) aid_size_touch_mv_arrow_left_ParamLimits

0xdb7e,	// (0x00027651) aid_size_touch_mv_arrow_right_ParamLimits

0xdbdc,	// (0x000276af) navi_pane_g1_ParamLimits

0xdbe8,	// (0x000276bb) navi_pane_g2_ParamLimits

0xdc16,	// (0x000276e9) navi_pane_g3_ParamLimits

0xf311,	// (0x00028de4) navi_pane_g_ParamLimits

0x781f,	// (0x000212f2) navi_pane_mv_t1_ParamLimits

0x8f71,	// (0x00022a44) grid_imed_effect_pane_ParamLimits

0x6407,	// (0x0001feda) aid_placing_vt_slider_lsc

0xd36f,	// (0x00026e42) aid_placing_vt_slider_prt

0xcb45,	// (0x00026618) bg_tb_trans_pane_cp01_ParamLimits

0x053a,	// (0x0001a00d) popup_image_details_window_g1_ParamLimits

0x054d,	// (0x0001a020) popup_image_details_window_g2_ParamLimits

0x0562,	// (0x0001a035) popup_image_details_window_g3_ParamLimits

0x0562,	// (0x0001a035) popup_image_details_window_g3

0xf61a,	// (0x000290ed) popup_image_details_window_g_ParamLimits

0x0576,	// (0x0001a049) popup_image_details_window_t1_ParamLimits

0x0588,	// (0x0001a05b) popup_image_details_window_t2_ParamLimits

0x05a1,	// (0x0001a074) popup_image_details_window_t3_ParamLimits

0x05b5,	// (0x0001a088) popup_image_details_window_t4_ParamLimits

0x05d0,	// (0x0001a0a3) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x000290f4) popup_image_details_window_t_ParamLimits

0x9cba,	// (0x0002378d) cl_header_name_pane_ParamLimits

0x9cba,	// (0x0002378d) cl_header_name_pane

0x9f7a,	// (0x00023a4d) cl_header_name_pane_t1_ParamLimits

0x9f7a,	// (0x00023a4d) cl_header_name_pane_t1

0x9f91,	// (0x00023a64) cl_header_name_pane_t2_ParamLimits

0x9f91,	// (0x00023a64) cl_header_name_pane_t2

0x9fbb,	// (0x00023a8e) cl_header_name_pane_t3_ParamLimits

0x9fbb,	// (0x00023a8e) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x000294e5) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x000294e5) cl_header_name_pane_t

0xdca5,	// (0x00027778) navi_pane_mv_g2_ParamLimits

0x0fde,	// (0x0001aab1) field_vitu2_entry_pane_g1_ParamLimits

0x0fea,	// (0x0001aabd) field_vitu2_entry_pane_g2_ParamLimits

0xde28,	// (0x000278fb) field_vitu2_entry_pane_g3_ParamLimits

0xde28,	// (0x000278fb) field_vitu2_entry_pane_g3

0xf812,	// (0x000292e5) field_vitu2_entry_pane_g_ParamLimits

0x57aa,	// (0x0001f27d) cell_vitu2_itu_pane_g1_ParamLimits

0x57c2,	// (0x0001f295) cell_vitu2_itu_pane_g2_ParamLimits

0x57c2,	// (0x0001f295) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x000292f1) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x000292f1) cell_vitu2_itu_pane_g

0x4a4f,	// (0x0001e522) bg_vkb2_func_pane_cp05_ParamLimits

0x4a4f,	// (0x0001e522) bg_vkb2_func_pane_cp05

0x4a4f,	// (0x0001e522) bg_vkb2_func_pane_cp03

0x4a4f,	// (0x0001e522) bg_vkb2_func_pane_cp04

0x4a4f,	// (0x0001e522) bg_vkb2_func_pane_cp10_ParamLimits

0x4a4f,	// (0x0001e522) bg_vkb2_func_pane_cp10

0x9c5c,	// (0x0002372f) bg_vkb2_func_pane_cp08

0x9929,	// (0x000233fc) bg_vkb2_func_pane_cp06

0x9c3f,	// (0x00023712) bg_vkb2_func_pane_cp07

0x171f,	// (0x0001b1f2) bg_vkb2_func_pane_cp11_ParamLimits

0x171f,	// (0x0001b1f2) bg_vkb2_func_pane_cp11

0x1734,	// (0x0001b207) bg_vkb2_func_pane_cp12_ParamLimits

0x1734,	// (0x0001b207) bg_vkb2_func_pane_cp12

0xc963,	// (0x00026436) bg_vkb2_func_pane_cp09

0x1025,	// (0x0001aaf8) bg_vkb2_func_pane_g1

0xd53a,	// (0x0002700d) bg_vkb2_func_pane_g2

0x102d,	// (0x0001ab00) bg_vkb2_func_pane_g3

0x1035,	// (0x0001ab08) bg_vkb2_func_pane_g4

0x1318,	// (0x0001adeb) bg_vkb2_func_pane_g5

0x104d,	// (0x0001ab20) bg_vkb2_func_pane_g6

0x1055,	// (0x0001ab28) bg_vkb2_func_pane_g7

0x1045,	// (0x0001ab18) bg_vkb2_func_pane_g8

0xd51a,	// (0x00026fed) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x000294ec) bg_vkb2_func_pane_g

0x9ec9,	// (0x0002399c) blid2_tripm_pane_g6_ParamLimits

0x9ec9,	// (0x0002399c) blid2_tripm_pane_g6

0x0dd3,	// (0x0001a8a6) mp4_progress_pane_g1

0x9f23,	// (0x000239f6) blid2_tripm_values_pane_ParamLimits

0x9f23,	// (0x000239f6) blid2_tripm_values_pane

0x9fe0,	// (0x00023ab3) blid2_tripm_values_pane_t1

0x9fee,	// (0x00023ac1) blid2_tripm_values_pane_t2

0x9ffc,	// (0x00023acf) blid2_tripm_values_pane_t3

0xa00a,	// (0x00023add) blid2_tripm_values_pane_t4

0xa018,	// (0x00023aeb) blid2_tripm_values_pane_t5

0xa026,	// (0x00023af9) blid2_tripm_values_pane_t6

0xa034,	// (0x00023b07) blid2_tripm_values_pane_t7

0xa042,	// (0x00023b15) blid2_tripm_values_pane_t8

0xa050,	// (0x00023b23) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x000294ff) blid2_tripm_values_pane_t

0x6447,	// (0x0001ff1a) call_video_pane_t1_ParamLimits

0x6468,	// (0x0001ff3b) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00028c8d) call_video_pane_t_ParamLimits

0x7b28,	// (0x000215fb) msg_header_pane_g1_ParamLimits

0xdeb1,	// (0x00027984) msg_header_pane_g2_ParamLimits

0xdeb1,	// (0x00027984) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00028e82) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00028e82) msg_header_pane_g

0xd100,	// (0x00026bd3) main_clock2_pane_ParamLimits

0x8dc3,	// (0x00022896) grid_clock2_toolbar_pane_ParamLimits

0x8dc3,	// (0x00022896) grid_clock2_toolbar_pane

0x8dc3,	// (0x00022896) listscroll_clock2_pane_ParamLimits

0x8dc3,	// (0x00022896) listscroll_clock2_pane

0x8e73,	// (0x00022946) main_clock2_pane_t3_ParamLimits

0x8e73,	// (0x00022946) main_clock2_pane_t3

0x8e85,	// (0x00022958) main_clock2_pane_t4_ParamLimits

0x8e85,	// (0x00022958) main_clock2_pane_t4

0x1850,	// (0x0001b323) cell_clock2_toolbar_pane

0x1858,	// (0x0001b32b) cell_clock2_toolbar_pane_cp01

0x1858,	// (0x0001b32b) cell_clock2_toolbar_pane_cp02

0x1860,	// (0x0001b333) cell_clock2_toolbar_pane_cp03

0x1868,	// (0x0001b33b) list_clock2_pane

0xdacb,	// (0x0002759e) scroll_pane_cp10

0x1870,	// (0x0001b343) list_single_clock2_pane_ParamLimits

0x1870,	// (0x0001b343) list_single_clock2_pane

0xd318,	// (0x00026deb) list_highlight_pane_cp08

0x187d,	// (0x0001b350) list_single_clock2_pane_t1

0x188b,	// (0x0001b35e) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x00029512) list_single_clock2_pane_t

0xc963,	// (0x00026436) bg_button_pane_cp10

0x1899,	// (0x0001b36c) cell_clock2_toolbar_pane_g1

0x49ea,	// (0x0001e4bd) aid_main_viewer_pane_g1_ParamLimits

0x49ea,	// (0x0001e4bd) aid_main_viewer_pane_g1

0x49f6,	// (0x0001e4c9) aid_main_viewer_pane_g2_ParamLimits

0x49f6,	// (0x0001e4c9) aid_main_viewer_pane_g2

0x7bc5,	// (0x00021698) aid_main_viewer_pane_g3_ParamLimits

0x7bc5,	// (0x00021698) aid_main_viewer_pane_g3

0x7bd6,	// (0x000216a9) aid_main_viewer_pane_g4_ParamLimits

0x7bd6,	// (0x000216a9) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00028e93) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00028e93) aid_main_viewer_pane_g

0x4a42,	// (0x0001e515) main_calc_pane_ParamLimits

0x4a5d,	// (0x0001e530) main_dialer2_pane_ParamLimits

0x4636,	// (0x0001e109) main_cam6_pane

0x4636,	// (0x0001e109) main_vid6_pane

0x8dcf,	// (0x000228a2) listscroll_gen_pane_cp06_ParamLimits

0x8dcf,	// (0x000228a2) listscroll_gen_pane_cp06

0x8e97,	// (0x0002296a) main_clock2_pane_t5_ParamLimits

0x8e97,	// (0x0002296a) main_clock2_pane_t5

0x8ee4,	// (0x000229b7) aid_call2_pane_cp10_ParamLimits

0x8ef6,	// (0x000229c9) aid_call_pane_cp10_ParamLimits

0xdb49,	// (0x0002761c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb49,	// (0x0002761c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4c78,	// (0x0001e74b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4c78,	// (0x0001e74b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb49,	// (0x0002761c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x000291a9) popup_clock_analogue_window_cp10_g_ParamLimits

0x4c8e,	// (0x0001e761) popup_clock_analogue_window_cp10_t1_ParamLimits

0x0e3e,	// (0x0001a911) cell_dialer2_keypad_pane_g2_ParamLimits

0x0e3e,	// (0x0001a911) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x00029284) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x00029284) cell_dialer2_keypad_pane_g

0xd0ac,	// (0x00026b7f) cell_dialer2_keypad_pane_t1

0x94da,	// (0x00022fad) main_cset_text2_pane_ParamLimits

0x94da,	// (0x00022fad) main_cset_text2_pane

0x155f,	// (0x0001b032) area_vitu2_query_pane_g1_ParamLimits

0x9bde,	// (0x000236b1) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x0002942f) area_vitu2_query_pane_g_ParamLimits

0x15e3,	// (0x0001b0b6) area_vitu2_query_pane_t7_ParamLimits

0x15e3,	// (0x0001b0b6) area_vitu2_query_pane_t7

0x9929,	// (0x000233fc) bg_button_pane_cp018_ParamLimits

0x9c3f,	// (0x00023712) bg_button_pane_cp021_ParamLimits

0x9c4b,	// (0x0002371e) bg_button_pane_cp022_ParamLimits

0x9c5c,	// (0x0002372f) bg_vkb2_func_pane_cp08_ParamLimits

0x9929,	// (0x000233fc) bg_vkb2_func_pane_cp06_ParamLimits

0x9c3f,	// (0x00023712) bg_vkb2_func_pane_cp07_ParamLimits

0x9c6e,	// (0x00023741) input_focus_pane_cp09_ParamLimits

0x5b10,	// (0x0001f5e3) cam6_autofocus_pane_ParamLimits

0x5b10,	// (0x0001f5e3) cam6_autofocus_pane

0x5b2c,	// (0x0001f5ff) cam6_image_uncrop_pane_ParamLimits

0x5b2c,	// (0x0001f5ff) cam6_image_uncrop_pane

0x5b65,	// (0x0001f638) cam6_indi_pane_ParamLimits

0x5b65,	// (0x0001f638) cam6_indi_pane

0x5b7f,	// (0x0001f652) cam6_mode_pane_ParamLimits

0x5b7f,	// (0x0001f652) cam6_mode_pane

0x5b93,	// (0x0001f666) cam6_timer_pane_ParamLimits

0x5b93,	// (0x0001f666) cam6_timer_pane

0x5ba7,	// (0x0001f67a) cam6_zoom_pane_ParamLimits

0x5ba7,	// (0x0001f67a) cam6_zoom_pane

0xa05e,	// (0x00023b31) cam6_mode_pane_g1_ParamLimits

0xa05e,	// (0x00023b31) cam6_mode_pane_g1

0xa06a,	// (0x00023b3d) cam6_mode_pane_g2_ParamLimits

0xa06a,	// (0x00023b3d) cam6_mode_pane_g2

0xa076,	// (0x00023b49) cam6_mode_pane_g3_ParamLimits

0xa076,	// (0x00023b49) cam6_mode_pane_g3

0xa082,	// (0x00023b55) cam6_mode_pane_g4_ParamLimits

0xa082,	// (0x00023b55) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x00029517) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x00029517) cam6_mode_pane_g

0x0070,	// (0x00019b43) bg_tb_trans_pane_cp08_ParamLimits

0x0070,	// (0x00019b43) bg_tb_trans_pane_cp08

0x18af,	// (0x0001b382) cam6_battery_pane_ParamLimits

0x18af,	// (0x0001b382) cam6_battery_pane

0x18c5,	// (0x0001b398) cam6_indi_pane_g1_ParamLimits

0x18c5,	// (0x0001b398) cam6_indi_pane_g1

0x18d7,	// (0x0001b3aa) cam6_indi_pane_g2_ParamLimits

0x18d7,	// (0x0001b3aa) cam6_indi_pane_g2

0x18e9,	// (0x0001b3bc) cam6_indi_pane_g3_ParamLimits

0x18e9,	// (0x0001b3bc) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x00029520) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x00029520) cam6_indi_pane_g

0x18fb,	// (0x0001b3ce) cam6_indi_pane_t1_ParamLimits

0x18fb,	// (0x0001b3ce) cam6_indi_pane_t1

0x91e5,	// (0x00022cb8) cam6_autofocus_pane_g1

0x91dd,	// (0x00022cb0) cam6_autofocus_pane_g2

0x91f5,	// (0x00022cc8) cam6_autofocus_pane_g3

0x91ed,	// (0x00022cc0) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x00029527) cam6_autofocus_pane_g

0x1921,	// (0x0001b3f4) cam6_timer_pane_g1

0x1929,	// (0x0001b3fc) cam6_timer_pane_t1

0x1937,	// (0x0001b40a) cam6_zoom_cont_pane

0x193f,	// (0x0001b412) cam6_zoom_pane_g1

0x1948,	// (0x0001b41b) cam6_zoom_pane_g2

0xa08e,	// (0x00023b61) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x00029530) cam6_zoom_pane_g

0xd0a2,	// (0x00026b75) cam6_battery_pane_g1

0xd0a2,	// (0x00026b75) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00028b5f) cam6_battery_pane_g

0x193f,	// (0x0001b412) cam6_zoom_cont_pane_g1

0x1948,	// (0x0001b41b) cam6_zoom_cont_pane_g2

0x1951,	// (0x0001b424) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x00029537) cam6_zoom_cont_pane_g

0xa0ac,	// (0x00023b7f) cam6_mode_pane_cp_ParamLimits

0xa0ac,	// (0x00023b7f) cam6_mode_pane_cp

0xa0c0,	// (0x00023b93) cam6_zoom_pane_cp_ParamLimits

0xa0c0,	// (0x00023b93) cam6_zoom_pane_cp

0xa0d8,	// (0x00023bab) vid6_image_uncrop_cif_pane_ParamLimits

0xa0d8,	// (0x00023bab) vid6_image_uncrop_cif_pane

0xa104,	// (0x00023bd7) vid6_image_uncrop_nhd_pane_ParamLimits

0xa104,	// (0x00023bd7) vid6_image_uncrop_nhd_pane

0xa121,	// (0x00023bf4) vid6_image_uncrop_vga_pane_ParamLimits

0xa121,	// (0x00023bf4) vid6_image_uncrop_vga_pane

0xa140,	// (0x00023c13) vid6_image_uncrop_wvga_pane_ParamLimits

0xa140,	// (0x00023c13) vid6_image_uncrop_wvga_pane

0xa15d,	// (0x00023c30) vid6_indi_pane_ParamLimits

0xa15d,	// (0x00023c30) vid6_indi_pane

0x0070,	// (0x00019b43) bg_tb_trans_pane_cp09_ParamLimits

0x0070,	// (0x00019b43) bg_tb_trans_pane_cp09

0x1969,	// (0x0001b43c) cam6_battery_pane_cp_ParamLimits

0x1969,	// (0x0001b43c) cam6_battery_pane_cp

0x1975,	// (0x0001b448) vid6_indi_pane_g1_ParamLimits

0x1975,	// (0x0001b448) vid6_indi_pane_g1

0x1987,	// (0x0001b45a) vid6_indi_pane_g2_ParamLimits

0x1987,	// (0x0001b45a) vid6_indi_pane_g2

0x1999,	// (0x0001b46c) vid6_indi_pane_g3_ParamLimits

0x1999,	// (0x0001b46c) vid6_indi_pane_g3

0x19ae,	// (0x0001b481) vid6_indi_pane_g4_ParamLimits

0x19ae,	// (0x0001b481) vid6_indi_pane_g4

0x19c3,	// (0x0001b496) vid6_indi_pane_g5_ParamLimits

0x19c3,	// (0x0001b496) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x0002953e) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x0002953e) vid6_indi_pane_g

0x19dd,	// (0x0001b4b0) vid6_indi_pane_t1_ParamLimits

0x19dd,	// (0x0001b4b0) vid6_indi_pane_t1

0x19f3,	// (0x0001b4c6) vid6_indi_pane_t2_ParamLimits

0x19f3,	// (0x0001b4c6) vid6_indi_pane_t2

0x1a1b,	// (0x0001b4ee) vid6_indi_pane_t3_ParamLimits

0x1a1b,	// (0x0001b4ee) vid6_indi_pane_t3

0x1a43,	// (0x0001b516) vid6_indi_pane_t4_ParamLimits

0x1a43,	// (0x0001b516) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x00029549) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x00029549) vid6_indi_pane_t

0x1a67,	// (0x0001b53a) wait_bar_pane_cp08

0xa182,	// (0x00023c55) main_cset_text2_pane_t1_ParamLimits

0xa182,	// (0x00023c55) main_cset_text2_pane_t1

0xa097,	// (0x00023b6a) listscroll_gen_pane_cp06_t1_ParamLimits

0xa097,	// (0x00023b6a) listscroll_gen_pane_cp06_t1

0x4636,	// (0x0001e109) main_cam6_set_pane

0x2443,	// (0x0001bf16) bg_tb_trans_pane_cp06_ParamLimits

0x54b0,	// (0x0001ef83) cam4_indicators_pane_g1_ParamLimits

0x54c1,	// (0x0001ef94) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x000292c1) cam4_indicators_pane_g_ParamLimits

0x54df,	// (0x0001efb2) cam4_indicators_pane_t1_ParamLimits

0x4a4f,	// (0x0001e522) bg_tb_trans_pane_cp07_ParamLimits

0x5592,	// (0x0001f065) vid4_indicators_pane_g1_ParamLimits

0x55a6,	// (0x0001f079) vid4_indicators_pane_g2_ParamLimits

0x55ba,	// (0x0001f08d) vid4_indicators_pane_g3_ParamLimits

0x55cb,	// (0x0001f09e) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x000292d3) vid4_indicators_pane_g_ParamLimits

0x55e9,	// (0x0001f0bc) vid4_indicators_pane_t1_ParamLimits

0x5a73,	// (0x0001f546) vid4_progress_pane_g1_ParamLimits

0x5a83,	// (0x0001f556) vid4_progress_pane_g2_ParamLimits

0x5a93,	// (0x0001f566) vid4_progress_pane_g3_ParamLimits

0x5aa5,	// (0x0001f578) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x0002947a) vid4_progress_pane_g_ParamLimits

0x5abd,	// (0x0001f590) vid4_progress_pane_t1_ParamLimits

0x5ad3,	// (0x0001f5a6) vid4_progress_pane_t2_ParamLimits

0x5ae8,	// (0x0001f5bb) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x00029485) vid4_progress_pane_t_ParamLimits

0x5afd,	// (0x0001f5d0) wait_bar_pane_cp07_ParamLimits

0xa1b5,	// (0x00023c88) main_cam6_set_pane_g2_ParamLimits

0xa1b5,	// (0x00023c88) main_cam6_set_pane_g2

0xa1c1,	// (0x00023c94) main_cset6_listscroll_pane_ParamLimits

0xa1c1,	// (0x00023c94) main_cset6_listscroll_pane

0xa1ec,	// (0x00023cbf) main_cset6_slider_pane_ParamLimits

0xa1ec,	// (0x00023cbf) main_cset6_slider_pane

0xa1f8,	// (0x00023ccb) main_cset6_text2_pane_ParamLimits

0xa1f8,	// (0x00023ccb) main_cset6_text2_pane

0x1a76,	// (0x0001b549) main_cset6_text_pane

0x1a7e,	// (0x0001b551) main_cset_list_pane_copy1_ParamLimits

0x1a7e,	// (0x0001b551) main_cset_list_pane_copy1

0x1a8e,	// (0x0001b561) scroll_pane_cp028_copy1

0xa20b,	// (0x00023cde) cset_list_set_pane_copy1

0xa21e,	// (0x00023cf1) aid_position_infowindow_above_copy1

0xa226,	// (0x00023cf9) aid_position_infowindow_below_copy1

0xa22e,	// (0x00023d01) cset_list_set_pane_g1_copy1

0x126c,	// (0x0001ad3f) cset_list_set_pane_g3_copy1_ParamLimits

0x126c,	// (0x0001ad3f) cset_list_set_pane_g3_copy1

0x127b,	// (0x0001ad4e) cset_list_set_pane_t1_copy1_ParamLimits

0x127b,	// (0x0001ad4e) cset_list_set_pane_t1_copy1

0xcb45,	// (0x00026618) list_highlight_pane_cp021_copy1_ParamLimits

0xcb45,	// (0x00026618) list_highlight_pane_cp021_copy1

0x1a97,	// (0x0001b56a) cset6_slider_pane_ParamLimits

0x1a97,	// (0x0001b56a) cset6_slider_pane

0x1ac3,	// (0x0001b596) main_cset6_slider_pane_g1_ParamLimits

0x1ac3,	// (0x0001b596) main_cset6_slider_pane_g1

0xa236,	// (0x00023d09) main_cset6_slider_pane_g2_ParamLimits

0xa236,	// (0x00023d09) main_cset6_slider_pane_g2

0x1aeb,	// (0x0001b5be) main_cset6_slider_pane_g3_ParamLimits

0x1aeb,	// (0x0001b5be) main_cset6_slider_pane_g3

0xa25e,	// (0x00023d31) main_cset6_slider_pane_g4_ParamLimits

0xa25e,	// (0x00023d31) main_cset6_slider_pane_g4

0xa26a,	// (0x00023d3d) main_cset6_slider_pane_g5_ParamLimits

0xa26a,	// (0x00023d3d) main_cset6_slider_pane_g5

0x117a,	// (0x0001ac4d) main_cset6_slider_pane_g7_ParamLimits

0x117a,	// (0x0001ac4d) main_cset6_slider_pane_g7

0x1186,	// (0x0001ac59) main_cset6_slider_pane_g8_ParamLimits

0x1186,	// (0x0001ac59) main_cset6_slider_pane_g8

0xa278,	// (0x00023d4b) main_cset6_slider_pane_g9_ParamLimits

0xa278,	// (0x00023d4b) main_cset6_slider_pane_g9

0xa284,	// (0x00023d57) main_cset6_slider_pane_g10_ParamLimits

0xa284,	// (0x00023d57) main_cset6_slider_pane_g10

0xa290,	// (0x00023d63) main_cset6_slider_pane_g11_ParamLimits

0xa290,	// (0x00023d63) main_cset6_slider_pane_g11

0xa29c,	// (0x00023d6f) main_cset6_slider_pane_g12_ParamLimits

0xa29c,	// (0x00023d6f) main_cset6_slider_pane_g12

0xa2a8,	// (0x00023d7b) main_cset6_slider_pane_g13_ParamLimits

0xa2a8,	// (0x00023d7b) main_cset6_slider_pane_g13

0xa2b4,	// (0x00023d87) main_cset6_slider_pane_g14_ParamLimits

0xa2b4,	// (0x00023d87) main_cset6_slider_pane_g14

0xa2c0,	// (0x00023d93) main_cset6_slider_pane_g15_ParamLimits

0xa2c0,	// (0x00023d93) main_cset6_slider_pane_g15

0xa2d8,	// (0x00023dab) main_cset6_slider_pane_g16_ParamLimits

0xa2d8,	// (0x00023dab) main_cset6_slider_pane_g16

0xa2e6,	// (0x00023db9) main_cset6_slider_pane_g17_ParamLimits

0xa2e6,	// (0x00023db9) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x00029552) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x00029552) main_cset6_slider_pane_g

0x1af7,	// (0x0001b5ca) main_cset6_slider_pane_t1_ParamLimits

0x1af7,	// (0x0001b5ca) main_cset6_slider_pane_t1

0xa30c,	// (0x00023ddf) main_cset6_slider_pane_t2_ParamLimits

0xa30c,	// (0x00023ddf) main_cset6_slider_pane_t2

0xa337,	// (0x00023e0a) main_cset6_slider_pane_t3_ParamLimits

0xa337,	// (0x00023e0a) main_cset6_slider_pane_t3

0xa362,	// (0x00023e35) main_cset6_slider_pane_t4_ParamLimits

0xa362,	// (0x00023e35) main_cset6_slider_pane_t4

0xa38d,	// (0x00023e60) main_cset6_slider_pane_t5_ParamLimits

0xa38d,	// (0x00023e60) main_cset6_slider_pane_t5

0x1b38,	// (0x0001b60b) main_cset6_slider_pane_t7_ParamLimits

0x1b38,	// (0x0001b60b) main_cset6_slider_pane_t7

0xa3ba,	// (0x00023e8d) main_cset6_slider_pane_t8_ParamLimits

0xa3ba,	// (0x00023e8d) main_cset6_slider_pane_t8

0xa3de,	// (0x00023eb1) main_cset6_slider_pane_t9_ParamLimits

0xa3de,	// (0x00023eb1) main_cset6_slider_pane_t9

0xa402,	// (0x00023ed5) main_cset6_slider_pane_t10_ParamLimits

0xa402,	// (0x00023ed5) main_cset6_slider_pane_t10

0xa426,	// (0x00023ef9) main_cset6_slider_pane_t11_ParamLimits

0xa426,	// (0x00023ef9) main_cset6_slider_pane_t11

0x1b6e,	// (0x0001b641) main_cset6_slider_pane_t14_ParamLimits

0x1b6e,	// (0x0001b641) main_cset6_slider_pane_t14

0x1ba7,	// (0x0001b67a) main_cset6_slider_pane_t15_ParamLimits

0x1ba7,	// (0x0001b67a) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x00029577) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x00029577) main_cset6_slider_pane_t

0x12b0,	// (0x0001ad83) cset_slider_pane_g1_copy1

0x12b9,	// (0x0001ad8c) cset_slider_pane_g2_copy1

0x12c2,	// (0x0001ad95) cset_slider_pane_g3_copy1

0xc963,	// (0x00026436) bg_popup_sub_pane_cp011_copy1

0x1be0,	// (0x0001b6b3) main_cset_text_pane_g1_copy1

0x1387,	// (0x0001ae5a) main_cset_text_pane_t1_copy1

0x1395,	// (0x0001ae68) main_cset_text_pane_t2_copy1

0x13a3,	// (0x0001ae76) main_cset_text_pane_t3_copy1

0x13b1,	// (0x0001ae84) main_cset_text_pane_t4_copy1

0x13bf,	// (0x0001ae92) main_cset_text_pane_t5_copy1

0x1be8,	// (0x0001b6bb) main_cset_text_pane_t6_copy1

0x1bf6,	// (0x0001b6c9) main_cset_text_pane_t7_copy1

0xa467,	// (0x00023f3a) main_cset_text2_pane_t1_copy1

0x4a4f,	// (0x0001e522) main_ncimui_pane

0x4aae,	// (0x0001e581) popup_query_ncimui_window_ParamLimits

0x4aae,	// (0x0001e581) popup_query_ncimui_window

0x0671,	// (0x0001a144) field_cale_ev2_pane_g4_ParamLimits

0x0671,	// (0x0001a144) field_cale_ev2_pane_g4

0x9130,	// (0x00022c03) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9130,	// (0x00022c03) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x0002925b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x0002925b) cell_video_dialer_keypad_pane_g

0x9148,	// (0x00022c1b) cell_video_dialer_keypad_pane_t1

0xc963,	// (0x00026436) bg_popup_window_pane_cp012

0xd9a5,	// (0x00027478) heading_pane_cp06

0x1c22,	// (0x0001b6f5) ncim_query_content_pane

0xc963,	// (0x00026436) bg_popup_heading_pane_cp01

0x1c2a,	// (0x0001b6fd) ncim_heading_pane_t1

0x1c38,	// (0x0001b70b) ncim_indicator_popup_pane

0x1c4a,	// (0x0001b71d) ncim_query_button_pane

0x1c5e,	// (0x0001b731) ncim_query_content_pane_t1

0x1c70,	// (0x0001b743) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x000295bb) ncim_query_content_pane_t

0x1caa,	// (0x0001b77d) ncim_query_list_pane

0x1cbc,	// (0x0001b78f) ncim_query_popup_pane

0x1c38,	// (0x0001b70b) ncim_indicator_popup_pane_ParamLimits

0xa5ba,	// (0x0002408d) ncim_query_content_pane_g1_ParamLimits

0xa5ba,	// (0x0002408d) ncim_query_content_pane_g1

0x1c5e,	// (0x0001b731) ncim_query_content_pane_t1_ParamLimits

0x1c70,	// (0x0001b743) ncim_query_content_pane_t2_ParamLimits

0xa5c6,	// (0x00024099) ncim_query_content_pane_t3_ParamLimits

0xa5c6,	// (0x00024099) ncim_query_content_pane_t3

0xa5e3,	// (0x000240b6) ncim_query_content_pane_t4_ParamLimits

0xa5e3,	// (0x000240b6) ncim_query_content_pane_t4

0xa600,	// (0x000240d3) ncim_query_content_pane_t5_ParamLimits

0xa600,	// (0x000240d3) ncim_query_content_pane_t5

0x1c82,	// (0x0001b755) ncim_query_content_pane_t6_ParamLimits

0x1c82,	// (0x0001b755) ncim_query_content_pane_t6

0xfae8,	// (0x000295bb) ncim_query_content_pane_t_ParamLimits

0x1caa,	// (0x0001b77d) ncim_query_list_pane_ParamLimits

0x1cbc,	// (0x0001b78f) ncim_query_popup_pane_ParamLimits

0x1cd0,	// (0x0001b7a3) wait_bar_pane_cp04

0xc963,	// (0x00026436) input_focus_pane_cp011

0x1cd8,	// (0x0001b7ab) ncim_query_popup_pane_t1

0x1ce6,	// (0x0001b7b9) ncim_list_query_list_pane_ParamLimits

0x1ce6,	// (0x0001b7b9) ncim_list_query_list_pane

0xc963,	// (0x00026436) bg_button_pane_cp027

0x1cf3,	// (0x0001b7c6) ncim_query_button_pane_g1

0xc963,	// (0x00026436) list_highlight_pane_cp012

0x1cfd,	// (0x0001b7d0) ncim_list_query_list_pane_g1

0x1d05,	// (0x0001b7d8) ncim_list_query_list_pane_t1

0x54d0,	// (0x0001efa3) cam4_indicators_pane_g3_ParamLimits

0x54d0,	// (0x0001efa3) cam4_indicators_pane_g3

0x55d7,	// (0x0001f0aa) vid4_indicators_pane_g5_ParamLimits

0x55d7,	// (0x0001f0aa) vid4_indicators_pane_g5

0x5ab1,	// (0x0001f584) vid4_progress_pane_g5_ParamLimits

0x5ab1,	// (0x0001f584) vid4_progress_pane_g5

0xa4a6,	// (0x00023f79) main_ncimui_pane_g1

0xa50e,	// (0x00023fe1) ncimui_group_query_pane_ParamLimits

0xa50e,	// (0x00023fe1) ncimui_group_query_pane

0xa556,	// (0x00024029) ncimui_list_pane_ParamLimits

0xa556,	// (0x00024029) ncimui_list_pane

0xa57d,	// (0x00024050) ncimui_text_pane_ParamLimits

0xa57d,	// (0x00024050) ncimui_text_pane

0xa61d,	// (0x000240f0) ncimui_text_pane_t1_ParamLimits

0xa61d,	// (0x000240f0) ncimui_text_pane_t1

0x1d13,	// (0x0001b7e6) ncimui_list_single_graphic_pane_ParamLimits

0x1d13,	// (0x0001b7e6) ncimui_list_single_graphic_pane

0xa63c,	// (0x0002410f) ncimui_query_pane_ParamLimits

0xa63c,	// (0x0002410f) ncimui_query_pane

0xc963,	// (0x00026436) list_highlight_pane_cp013

0x1d23,	// (0x0001b7f6) ncim_list_query_list_pane_t1_copy1

0x1cfd,	// (0x0001b7d0) ncim_list_single_graphic_pane_g1

0xa64f,	// (0x00024122) ncim_query_button_pane_cp01

0xa65b,	// (0x0002412e) ncim_query_entry_pane_ParamLimits

0xa65b,	// (0x0002412e) ncim_query_entry_pane

0xa66e,	// (0x00024141) ncimui_query_pane_g1

0xa67a,	// (0x0002414d) ncimui_query_pane_t1_ParamLimits

0xa67a,	// (0x0002414d) ncimui_query_pane_t1

0xcb45,	// (0x00026618) input_focus_pane_cp012

0x1d31,	// (0x0001b804) ncim_query_entry_pane_t1

0xd100,	// (0x00026bd3) main_im_pane_ParamLimits

0x4a4f,	// (0x0001e522) main_mobtv_pane_ParamLimits

0x4a4f,	// (0x0001e522) main_mobtv_pane

0xa2f4,	// (0x00023dc7) main_cset6_slider_pane_g18_ParamLimits

0xa2f4,	// (0x00023dc7) main_cset6_slider_pane_g18

0xa300,	// (0x00023dd3) main_cset6_slider_pane_g19_ParamLimits

0xa300,	// (0x00023dd3) main_cset6_slider_pane_g19

0xde28,	// (0x000278fb) bg_main_mobtv_pane_ParamLimits

0xde28,	// (0x000278fb) bg_main_mobtv_pane

0xa693,	// (0x00024166) main_mobtv_info_pane

0xa69e,	// (0x00024171) main_mobtv_loading_pane_ParamLimits

0xa69e,	// (0x00024171) main_mobtv_loading_pane

0x1d43,	// (0x0001b816) main_mobtv_pg_channel_list_pane

0x1d4d,	// (0x0001b820) main_mobtv_pg_hdr_pane

0xa6ab,	// (0x0002417e) main_mobtv_programe_curr_pane_ParamLimits

0xa6ab,	// (0x0002417e) main_mobtv_programe_curr_pane

0xa6b8,	// (0x0002418b) main_mobtv_programe_next_pane_ParamLimits

0xa6b8,	// (0x0002418b) main_mobtv_programe_next_pane

0x1d56,	// (0x0001b829) popup_mobtv_noti_window

0xd0a2,	// (0x00026b75) main_tv_pg_hdr_pane_g1

0x1d5e,	// (0x0001b831) main_tv_pg_hdr_pane_g2

0x1d66,	// (0x0001b839) main_tv_pg_hdr_pane_g3

0x1d6e,	// (0x0001b841) main_tv_pg_hdr_pane_g4

0x1d76,	// (0x0001b849) main_tv_pg_hdr_pane_g5

0x1d80,	// (0x0001b853) main_tv_pg_hdr_pane_g6

0x1d8a,	// (0x0001b85d) main_tv_pg_hdr_pane_g7

0x1d94,	// (0x0001b867) main_tv_pg_hdr_pane_g8

0x1d9e,	// (0x0001b871) main_tv_pg_hdr_pane_g9

0x1da8,	// (0x0001b87b) main_tv_pg_hdr_pane_g10

0x1db2,	// (0x0001b885) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x000295c8) main_tv_pg_hdr_pane_g

0x1dbc,	// (0x0001b88f) main_tv_pg_hdr_pane_t1

0x1dca,	// (0x0001b89d) main_tv_pg_hdr_pane_t2

0x1dd8,	// (0x0001b8ab) main_tv_pg_hdr_pane_t3

0x1de8,	// (0x0001b8bb) main_tv_pg_hdr_pane_t4

0x1df8,	// (0x0001b8cb) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x000295df) main_tv_pg_hdr_pane_t

0x1e08,	// (0x0001b8db) single_mobtv_pg_channel_pane_ParamLimits

0x1e08,	// (0x0001b8db) single_mobtv_pg_channel_pane

0x1e1a,	// (0x0001b8ed) single_mobtv_pg_channel_table_pane

0x1e23,	// (0x0001b8f6) single_mobtv_pg_channel_thumb_pane

0x1e2c,	// (0x0001b8ff) single_tv_pg_channel_pane_g1

0x1e35,	// (0x0001b908) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x000295ea) single_tv_pg_channel_pane_g

0xd064,	// (0x00026b37) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd064,	// (0x00026b37) bg_single_mobtv_pg_channel_thumb_pane

0x1e3e,	// (0x0001b911) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1e3e,	// (0x0001b911) single_mobtv_pg_channel_thumb_pane_g1

0x1e4c,	// (0x0001b91f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1e4c,	// (0x0001b91f) single_mobtv_pg_channel_thumb_pane_g2

0x1e58,	// (0x0001b92b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1e58,	// (0x0001b92b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x000295ef) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x000295ef) single_mobtv_pg_channel_thumb_pane_g

0x1e64,	// (0x0001b937) single_mobtv_pg_channel_thumb_pane_t1

0x1e72,	// (0x0001b945) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x000295f6) single_mobtv_pg_channel_thumb_pane_t

0xd0a2,	// (0x00026b75) bg_single_mobtv_pg_channel_table_pane_g1

0xd0a2,	// (0x00026b75) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00028b5f) bg_single_mobtv_pg_channel_table_pane_g

0x1e80,	// (0x0001b953) single_mobtv_pg_channel_table_pane_t1

0x1e8e,	// (0x0001b961) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x000295fb) single_mobtv_pg_channel_table_pane_t

0xa6cd,	// (0x000241a0) main_mobtv_info_pane_g1_ParamLimits

0xa6cd,	// (0x000241a0) main_mobtv_info_pane_g1

0xa6e9,	// (0x000241bc) main_mobtv_info_pane_t1_ParamLimits

0xa6e9,	// (0x000241bc) main_mobtv_info_pane_t1

0xa761,	// (0x00024234) main_mobtv_info_pane_t2_ParamLimits

0xa761,	// (0x00024234) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x00029605) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x00029605) main_mobtv_info_pane_t

0xa7f0,	// (0x000242c3) wait_bar_pane_cp05

0xa802,	// (0x000242d5) main_mobtv_loading_pane_g1_ParamLimits

0xa802,	// (0x000242d5) main_mobtv_loading_pane_g1

0xa810,	// (0x000242e3) main_mobtv_loading_pane_g2_ParamLimits

0xa810,	// (0x000242e3) main_mobtv_loading_pane_g2

0xa81c,	// (0x000242ef) main_mobtv_loading_pane_g3_ParamLimits

0xa81c,	// (0x000242ef) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x0002960c) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x0002960c) main_mobtv_loading_pane_g

0x1e9c,	// (0x0001b96f) main_mobtv_loading_pane_t1_ParamLimits

0x1e9c,	// (0x0001b96f) main_mobtv_loading_pane_t1

0x1eb4,	// (0x0001b987) main_mobtv_loading_pane_t2_ParamLimits

0x1eb4,	// (0x0001b987) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x00029613) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x00029613) main_mobtv_loading_pane_t

0xa82a,	// (0x000242fd) wait_bar_pane_cp06_ParamLimits

0xa82a,	// (0x000242fd) wait_bar_pane_cp06

0x1ed8,	// (0x0001b9ab) main_mobtv_programe_curr_pane_t1

0x1ee6,	// (0x0001b9b9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x00029618) main_mobtv_programe_curr_pane_t

0x1ef4,	// (0x0001b9c7) main_mobtv_programe_next_pane_t1

0x1f02,	// (0x0001b9d5) main_mobtv_programe_next_pane_t2

0x1f10,	// (0x0001b9e3) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x0002961d) main_mobtv_programe_next_pane_t

0xc963,	// (0x00026436) bg_popup_mobtv_noti_window_pane

0x1f1e,	// (0x0001b9f1) popup_mobtv_noti_window_g1

0x1f26,	// (0x0001b9f9) popup_mobtv_noti_window_t1

0x1f34,	// (0x0001ba07) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x00029624) popup_mobtv_noti_window_t

0xd0a2,	// (0x00026b75) bg_popup_mobtv_noti_window_pane_g1

0x4636,	// (0x0001e109) sc_clock_pane

0x4636,	// (0x0001e109) main_fs_bigclock_pane

0x9f11,	// (0x000239e4) blid2_tripm_pane_t4_ParamLimits

0x9f11,	// (0x000239e4) blid2_tripm_pane_t4

0xd072,	// (0x00026b45) sc_clock_pane_g1_ParamLimits

0xd072,	// (0x00026b45) sc_clock_pane_g1

0xd0c0,	// (0x00026b93) sc_clock_pane_t1_ParamLimits

0xd0c0,	// (0x00026b93) sc_clock_pane_t1

0xd0c0,	// (0x00026b93) sc_clock_pane_t2_ParamLimits

0xd0c0,	// (0x00026b93) sc_clock_pane_t2

0xd0c0,	// (0x00026b93) sc_clock_pane_t3_ParamLimits

0xd0c0,	// (0x00026b93) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x00029629) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x00029629) sc_clock_pane_t

0xb200,	// (0x00024cd3) main_fs_bigclock_indicator_pane_ParamLimits

0xb200,	// (0x00024cd3) main_fs_bigclock_indicator_pane

0xa871,	// (0x00024344) main_fs_bigclock_pane_g1_ParamLimits

0xa871,	// (0x00024344) main_fs_bigclock_pane_g1

0xb20c,	// (0x00024cdf) main_fs_bigclock_pane_t1_ParamLimits

0xb20c,	// (0x00024cdf) main_fs_bigclock_pane_t1

0xb21e,	// (0x00024cf1) main_fs_bigclock_pane_t2_ParamLimits

0xb21e,	// (0x00024cf1) main_fs_bigclock_pane_t2

0xb232,	// (0x00024d05) main_fs_bigclock_pane_t3_ParamLimits

0xb232,	// (0x00024d05) main_fs_bigclock_pane_t3

0x0002,

0xfce4,	// (0x000297b7) main_fs_bigclock_pane_t_ParamLimits

0xfce4,	// (0x000297b7) main_fs_bigclock_pane_t

0x2aa7,	// (0x0001c57a) main_fs_bigclock_indicator_pane_g1

0x1c52,	// (0x0001b725) ncim_query_content_pane_g2_ParamLimits

0x1c52,	// (0x0001b725) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x000295b6) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x000295b6) ncim_query_content_pane_g

0xd0c0,	// (0x00026b93) sc_clock_pane_t4_ParamLimits

0xd0c0,	// (0x00026b93) sc_clock_pane_t4

0x4a4f,	// (0x0001e522) main_radioblah_pane

0x53af,	// (0x0001ee82) cell_call4_button_pane_t1_copy1_ParamLimits

0x53af,	// (0x0001ee82) cell_call4_button_pane_t1_copy1

0xa4c0,	// (0x00023f93) main_ncimui_pane_t1_ParamLimits

0xa4c0,	// (0x00023f93) main_ncimui_pane_t1

0xa4da,	// (0x00023fad) main_ncimui_pane_t2_ParamLimits

0xa4da,	// (0x00023fad) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x000295af) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x000295af) main_ncimui_pane_t

0xde06,	// (0x000278d9) main_radioblah_anim_pane_ParamLimits

0xde06,	// (0x000278d9) main_radioblah_anim_pane

0xde06,	// (0x000278d9) main_radioblah_info_pane_ParamLimits

0xde06,	// (0x000278d9) main_radioblah_info_pane

0xde14,	// (0x000278e7) main_radioblah_pane_t1_ParamLimits

0xde14,	// (0x000278e7) main_radioblah_pane_t1

0xde14,	// (0x000278e7) main_radioblah_pane_t2_ParamLimits

0xde14,	// (0x000278e7) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x0002964a) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x0002964a) main_radioblah_pane_t

0xd056,	// (0x00026b29) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd056,	// (0x00026b29) main_radioblah_rocker_ctrl_pane

0x005c,	// (0x00019b2f) main_radioblah_info_pane_t1_ParamLimits

0x005c,	// (0x00019b2f) main_radioblah_info_pane_t1

0x20a9,	// (0x0001bb7c) main_radioblah_info_pane_t2_ParamLimits

0x20a9,	// (0x0001bb7c) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x00029653) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x00029653) main_radioblah_info_pane_t

0xd0a2,	// (0x00026b75) main_radioblah_rocker_ctrl_pane_g1

0xd0a2,	// (0x00026b75) main_radioblah_rocker_ctrl_pane_g2

0xd0a2,	// (0x00026b75) main_radioblah_rocker_ctrl_pane_g3

0xd0a2,	// (0x00026b75) main_radioblah_rocker_ctrl_pane_g4

0xd0a2,	// (0x00026b75) main_radioblah_rocker_ctrl_pane_g5

0xd0a2,	// (0x00026b75) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x0002965c) main_radioblah_rocker_ctrl_pane_g

0xa467,	// (0x00023f3a) main_cset_text2_pane_t1_copy1_ParamLimits

0x5422,	// (0x0001eef5) cam4_image_uncrop_qvga_pane

0x5545,	// (0x0001f018) vid4_image_uncrop_qcif_pane

0x5b57,	// (0x0001f62a) cam6_image_uncrop_qvga_pane_ParamLimits

0x5b57,	// (0x0001f62a) cam6_image_uncrop_qvga_pane

0x1959,	// (0x0001b42c) vid6_image_uncrop_qcif_pane_ParamLimits

0x1959,	// (0x0001b42c) vid6_image_uncrop_qcif_pane

0xc963,	// (0x00026436) bg_popup_preview_window_pane_cp03

0x1c04,	// (0x0001b6d7) list_cset_text2_pane

0x1c0c,	// (0x0001b6df) main_cset6_text2_pane_g1

0x1c14,	// (0x0001b6e7) main_cset6_text2_pane_t1

0xa8b5,	// (0x00024388) list_cset_text2_pane_t1_ParamLimits

0xa8b5,	// (0x00024388) list_cset_text2_pane_t1

0x4a4f,	// (0x0001e522) main_radioblah_pane_ParamLimits

0xa7dc,	// (0x000242af) main_mobtv_info_pane_t3_ParamLimits

0xa7dc,	// (0x000242af) main_mobtv_info_pane_t3

0xde28,	// (0x000278fb) main_radioblah_pane_g1

0x2079,	// (0x0001bb4c) main_radioblah_info_pane_g1

0xd0c0,	// (0x00026b93) main_radioblah_info_pane_t3_ParamLimits

0xd0c0,	// (0x00026b93) main_radioblah_info_pane_t3

0x7468,	// (0x00020f3b) highlight_cell_cale_month_pane_ParamLimits

0x7468,	// (0x00020f3b) highlight_cell_cale_month_pane

0x4636,	// (0x0001e109) main_phob_fisheye_pane

0x06f6,	// (0x0001a1c9) scroll_pane_cp0031_ParamLimits

0x06f6,	// (0x0001a1c9) scroll_pane_cp0031

0x1a67,	// (0x0001b53a) wait_bar_pane_cp08_ParamLimits

0xa20b,	// (0x00023cde) cset_list_set_pane_copy1_ParamLimits

0x20f8,	// (0x0001bbcb) highlight_cell_cale_month_pane_g1

0xa8d2,	// (0x000243a5) highlight_cell_cale_month_pane_t1

0x164f,	// (0x0001b122) list_gen_pane_cp01

0x1165,	// (0x0001ac38) scroll_pane_01

0xa8e0,	// (0x000243b3) list_single_double_fisheye_pane

0xa8e9,	// (0x000243bc) list_double_fisheye_pane_g1_ParamLimits

0xa8e9,	// (0x000243bc) list_double_fisheye_pane_g1

0xa8f5,	// (0x000243c8) list_double_fisheye_pane_g2_ParamLimits

0xa8f5,	// (0x000243c8) list_double_fisheye_pane_g2

0xa909,	// (0x000243dc) list_double_fisheye_pane_g3_ParamLimits

0xa909,	// (0x000243dc) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x00029669) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x00029669) list_double_fisheye_pane_g

0xa932,	// (0x00024405) list_double_fisheye_pane_t1_ParamLimits

0xa932,	// (0x00024405) list_double_fisheye_pane_t1

0xa94d,	// (0x00024420) list_double_fisheye_pane_t2_ParamLimits

0xa94d,	// (0x00024420) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x00029674) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x00029674) list_double_fisheye_pane_t

0x4636,	// (0x0001e109) main_call5_pane

0xd056,	// (0x00026b29) sc_swipe_pane_ParamLimits

0xd056,	// (0x00026b29) sc_swipe_pane

0xa97b,	// (0x0002444e) call5_image_pane_ParamLimits

0xa97b,	// (0x0002444e) call5_image_pane

0xa98b,	// (0x0002445e) call5_swipe_1_pane_ParamLimits

0xa98b,	// (0x0002445e) call5_swipe_1_pane

0xa997,	// (0x0002446a) call5_swipe_2_pane_ParamLimits

0xa997,	// (0x0002446a) call5_swipe_2_pane

0xa9b1,	// (0x00024484) popup_call5_audio_first_window_ParamLimits

0xa9b1,	// (0x00024484) popup_call5_audio_first_window

0xd064,	// (0x00026b37) call5_swipe_1_pane_g1_ParamLimits

0xd064,	// (0x00026b37) call5_swipe_1_pane_g1

0x2100,	// (0x0001bbd3) call5_swipe_1_pane_g2_ParamLimits

0x2100,	// (0x0001bbd3) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x00029679) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x00029679) call5_swipe_1_pane_g

0x210c,	// (0x0001bbdf) call5_swipe_1_pane_t1_ParamLimits

0x210c,	// (0x0001bbdf) call5_swipe_1_pane_t1

0xd064,	// (0x00026b37) call5_swipe_2_pane_g1_ParamLimits

0xd064,	// (0x00026b37) call5_swipe_2_pane_g1

0x2121,	// (0x0001bbf4) call5_swipe_2_pane_g2_ParamLimits

0x2121,	// (0x0001bbf4) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x0002967e) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x0002967e) call5_swipe_2_pane_g

0x212d,	// (0x0001bc00) call5_swipe_2_pane_t1_ParamLimits

0x212d,	// (0x0001bc00) call5_swipe_2_pane_t1

0xd064,	// (0x00026b37) sc_swipe_pane_g1_ParamLimits

0xd064,	// (0x00026b37) sc_swipe_pane_g1

0xd072,	// (0x00026b45) sc_swipe_pane_g2_ParamLimits

0xd072,	// (0x00026b45) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x00029683) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x00029683) sc_swipe_pane_g

0xd0ac,	// (0x00026b7f) sc_swipe_pane_t1_ParamLimits

0xd0ac,	// (0x00026b7f) sc_swipe_pane_t1

0x4636,	// (0x0001e109) main_cmail_launcher_pane

0xa9bf,	// (0x00024492) aid_size_cell_cmail_l_ParamLimits

0xa9bf,	// (0x00024492) aid_size_cell_cmail_l

0xa9cd,	// (0x000244a0) grid_cmail_l_pane_ParamLimits

0xa9cd,	// (0x000244a0) grid_cmail_l_pane

0xa9dd,	// (0x000244b0) cell_cmail_l_pane_ParamLimits

0xa9dd,	// (0x000244b0) cell_cmail_l_pane

0x2142,	// (0x0001bc15) cell_cmail_l_pane_g1_ParamLimits

0x2142,	// (0x0001bc15) cell_cmail_l_pane_g1

0x214e,	// (0x0001bc21) cell_cmail_l_pane_t1_ParamLimits

0x214e,	// (0x0001bc21) cell_cmail_l_pane_t1

0x2164,	// (0x0001bc37) cell_cmail_l_pane_t2_ParamLimits

0x2164,	// (0x0001bc37) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x00029688) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x00029688) cell_cmail_l_pane_t

0xcb45,	// (0x00026618) grid_highlight_pane_cp018_ParamLimits

0xcb45,	// (0x00026618) grid_highlight_pane_cp018

0x4499,	// (0x0001df6c) main2_pane_ParamLimits

0x4499,	// (0x0001df6c) main2_pane

0xd18f,	// (0x00026c62) popup_sp_fs_action_menu_bg_pane_g1

0xd197,	// (0x00026c6a) popup_sp_fs_action_menu_bg_pane_g2

0xd19f,	// (0x00026c72) popup_sp_fs_action_menu_bg_pane_g3

0xd1a7,	// (0x00026c7a) popup_sp_fs_action_menu_bg_pane_g4

0xd1af,	// (0x00026c82) popup_sp_fs_action_menu_bg_pane_g5

0xd1b7,	// (0x00026c8a) popup_sp_fs_action_menu_bg_pane_g6

0xd1bf,	// (0x00026c92) popup_sp_fs_action_menu_bg_pane_g7

0xd1c7,	// (0x00026c9a) popup_sp_fs_action_menu_bg_pane_g8

0xd1cf,	// (0x00026ca2) popup_sp_fs_action_menu_bg_pane_g9

0xd1d7,	// (0x00026caa) popup_sp_fs_action_menu_bg_pane_g10

0xd1d7,	// (0x00026caa) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00028bb0) popup_sp_fs_action_menu_bg_pane_g

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g3_g1

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g3_g2

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00028c5e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00028c5e) list_medium_line_x2_t3_g3_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g3_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g3_t2

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00028c65) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00028c65) list_medium_line_x2_t3_g3_t

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g2_g1

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00028c6c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00028c6c) list_medium_line_x2_t3_g2_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g2_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g2_t2

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00028c65) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00028c65) list_medium_line_x2_t3_g2_t

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g4_g1

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g4_g2

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g4_g3

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00028c71) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00028c71) list_medium_line_x2_t4_g4_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g4_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g4_t2

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g4_t3

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00028c7a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00028c7a) list_medium_line_x2_t4_g4_t

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g4_g1

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g4_g2

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g4_g3

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00028c71) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00028c71) list_medium_line_x2_t2_g4_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g4_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00028ce1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00028ce1) list_medium_line_x2_t2_g4_t

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g3_g1

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g3_g2

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00028c5e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00028c5e) list_medium_line_x2_t2_g3_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g3_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00028ce1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00028ce1) list_medium_line_x2_t2_g3_t

0x75de,	// (0x000210b1) main_sp_fs_list_pane_ParamLimits

0x75de,	// (0x000210b1) main_sp_fs_list_pane

0x75ea,	// (0x000210bd) sp_fs_scroll_pane_ParamLimits

0x75ea,	// (0x000210bd) sp_fs_scroll_pane

0xd812,	// (0x000272e5) list_medium_line_x2_t3_t1

0xd812,	// (0x000272e5) list_medium_line_x2_t3_t2

0xd812,	// (0x000272e5) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x00028d2c) list_medium_line_x2_t3_t

0xd812,	// (0x000272e5) list_medium_line_x3_t4_t1

0xd812,	// (0x000272e5) list_medium_line_x3_t4_t2

0xd812,	// (0x000272e5) list_medium_line_x3_t4_t3

0xd812,	// (0x000272e5) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x00028d33) list_medium_line_x3_t4_t

0xd812,	// (0x000272e5) list_medium_line_x4_t5_t1

0xd812,	// (0x000272e5) list_medium_line_x4_t5_t2

0xd812,	// (0x000272e5) list_medium_line_x4_t5_t3

0xd812,	// (0x000272e5) list_medium_line_x4_t5_t4

0xd812,	// (0x000272e5) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x00028d3c) list_medium_line_x4_t5_t

0xd064,	// (0x00026b37) list_medium_line_t4_g4_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t4_g4_g1

0xd064,	// (0x00026b37) list_medium_line_t4_g4_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t4_g4_g2

0xd064,	// (0x00026b37) list_medium_line_t4_g4_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t4_g4_g3

0xd064,	// (0x00026b37) list_medium_line_t4_g4_g4_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00028c71) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00028c71) list_medium_line_t4_g4_g

0xd0ac,	// (0x00026b7f) list_medium_line_t4_g4_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t4_g4_t1

0xd0ac,	// (0x00026b7f) list_medium_line_t4_g4_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t4_g4_t2

0xd0ac,	// (0x00026b7f) list_medium_line_t4_g4_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t4_g4_t3

0xd0ac,	// (0x00026b7f) list_medium_line_t4_g4_t4_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00028c7a) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00028c7a) list_medium_line_t4_g4_t

0x7660,	// (0x00021133) chi_dic_find_pane_g1

0x4a6b,	// (0x0001e53e) main_tport_pane

0xd812,	// (0x000272e5) list_medium_line_plain_t1

0xd064,	// (0x00026b37) list_medium_line_t2_g2_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t2_g2_g1

0xd064,	// (0x00026b37) list_medium_line_t2_g2_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00028c6c) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00028c6c) list_medium_line_t2_g2_g

0xd0ac,	// (0x00026b7f) list_medium_line_t2_g2_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t2_g2_t1

0xd0ac,	// (0x00026b7f) list_medium_line_t2_g2_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00028ce1) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00028ce1) list_medium_line_t2_g2_t

0x16c2,	// (0x0001b195) aid_sp_fs_list_icon_a_sm

0x16ca,	// (0x0001b19d) aid_sp_fs_list_icon_d

0x16d2,	// (0x0001b1a5) aid_sp_fs_text_primary

0x16db,	// (0x0001b1ae) aid_sp_fs_text_secondary

0xc963,	// (0x00026436) list_medium_line

0xc963,	// (0x00026436) list_medium_line_g2

0xc963,	// (0x00026436) list_medium_line_g3

0xc963,	// (0x00026436) list_medium_line_plain

0xc963,	// (0x00026436) list_medium_line_plain_t2

0xc963,	// (0x00026436) list_medium_line_plain_t3

0xc963,	// (0x00026436) list_medium_line_right_icon

0xc963,	// (0x00026436) list_medium_line_right_iconx2

0xc963,	// (0x00026436) list_medium_line_t2

0xc963,	// (0x00026436) list_medium_line_t2_g2

0xc963,	// (0x00026436) list_medium_line_t2_g3

0xc963,	// (0x00026436) list_medium_line_t2_right_icon

0xc963,	// (0x00026436) list_medium_line_t2_right_iconx2

0xc963,	// (0x00026436) list_medium_line_t3

0xc963,	// (0x00026436) list_medium_line_t3_g2

0xc963,	// (0x00026436) list_medium_line_t3_g3

0xc963,	// (0x00026436) list_medium_line_t3_right_iconx2

0xc963,	// (0x00026436) list_medium_line_t4_g4

0xc963,	// (0x00026436) list_medium_line_x2

0xc963,	// (0x00026436) list_medium_line_x2_t2_g2

0xc963,	// (0x00026436) list_medium_line_x2_t2_g3

0xc963,	// (0x00026436) list_medium_line_x2_t2_g4

0xc963,	// (0x00026436) list_medium_line_x2_t3

0xc963,	// (0x00026436) list_medium_line_x2_t3_g2

0xc963,	// (0x00026436) list_medium_line_x2_t3_g3

0xc963,	// (0x00026436) list_medium_line_x2_t3_g4

0xc963,	// (0x00026436) list_medium_line_x2_t4_g2

0xc963,	// (0x00026436) list_medium_line_x2_t4_g4

0xc963,	// (0x00026436) list_medium_line_x3

0xc963,	// (0x00026436) list_medium_line_x3_t4

0xc963,	// (0x00026436) list_medium_line_x3_t4_g4

0xc963,	// (0x00026436) list_medium_line_x4_t4

0xc963,	// (0x00026436) list_medium_line_x4_t4_g7

0xc963,	// (0x00026436) list_medium_line_x4_t5

0x9d96,	// (0x00023869) list_single_fs_dyc_pane_ParamLimits

0x9d96,	// (0x00023869) list_single_fs_dyc_pane

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g1

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g2

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g3

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g4

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g5

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x4_t4_g7_g6

0xd072,	// (0x00026b45) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd072,	// (0x00026b45) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x00029590) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x00029590) list_medium_line_x4_t4_g7_g

0xd0ac,	// (0x00026b7f) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x4_t4_g7_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x4_t4_g7_t2

0xd0ac,	// (0x00026b7f) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x4_t4_g7_t3

0xd0c0,	// (0x00026b93) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd0c0,	// (0x00026b93) list_medium_line_x4_t4_g7_t4

0xd0c0,	// (0x00026b93) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd0c0,	// (0x00026b93) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x0002959f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x0002959f) list_medium_line_x4_t4_g7_t

0xa44a,	// (0x00023f1d) list_single_dyc_row_pane_ParamLimits

0xa44a,	// (0x00023f1d) list_single_dyc_row_pane

0xa96f,	// (0x00024442) call5_gesture_pane_ParamLimits

0xa96f,	// (0x00024442) call5_gesture_pane

0xa9a3,	// (0x00024476) call5_windows_pane_ParamLimits

0xa9a3,	// (0x00024476) call5_windows_pane

0xa9f6,	// (0x000244c9) call5_swipe_1_pane_cp_ParamLimits

0xa9f6,	// (0x000244c9) call5_swipe_1_pane_cp

0xaa02,	// (0x000244d5) call5_swipe_2_pane_cp_ParamLimits

0xaa02,	// (0x000244d5) call5_swipe_2_pane_cp

0xd318,	// (0x00026deb) call5_image_pane_cp

0xaa0e,	// (0x000244e1) popup_call5_audio_first_window_cp_ParamLimits

0xaa0e,	// (0x000244e1) popup_call5_audio_first_window_cp

0x2181,	// (0x0001bc54) call5_swipe_1_pane_g1_cp_ParamLimits

0x2181,	// (0x0001bc54) call5_swipe_1_pane_g1_cp

0x218e,	// (0x0001bc61) call5_swipe_1_pane_g2_cp

0x2196,	// (0x0001bc69) call5_swipe_1_pane_t1_cp_ParamLimits

0x2196,	// (0x0001bc69) call5_swipe_1_pane_t1_cp

0x2181,	// (0x0001bc54) call5_swipe_2_pane_g1_cp_ParamLimits

0x2181,	// (0x0001bc54) call5_swipe_2_pane_g1_cp

0x21ab,	// (0x0001bc7e) call5_swipe_2_pane_g2_cp

0x21b3,	// (0x0001bc86) call5_swipe_2_pane_t1_cp_ParamLimits

0x21b3,	// (0x0001bc86) call5_swipe_2_pane_t1_cp

0xcb45,	// (0x00026618) main_sp_fs_email_pane

0x21c8,	// (0x0001bc9b) main_sp_fs_listscroll_pane_te

0x21d1,	// (0x0001bca4) popup_sp_fs_action_menu_pane_ParamLimits

0x21d1,	// (0x0001bca4) popup_sp_fs_action_menu_pane

0xd0a2,	// (0x00026b75) bg_sp_fs_ctrlbar_pane_g1

0x2215,	// (0x0001bce8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x221e,	// (0x0001bcf1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2227,	// (0x0001bcfa) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd0a2,	// (0x00026b75) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x0002968d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x007e,	// (0x00019b51) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x007e,	// (0x00019b51) bg_sp_fs_ctrlbar_ddmenu_pane

0x2230,	// (0x0001bd03) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2230,	// (0x0001bd03) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x223c,	// (0x0001bd0f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x223c,	// (0x0001bd0f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x00029696) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x00029696) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2248,	// (0x0001bd1b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2248,	// (0x0001bd1b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd0a2,	// (0x00026b75) list_medium_line_t2_right_icon_g1

0xd812,	// (0x000272e5) list_medium_line_t2_right_icon_t1

0xd812,	// (0x000272e5) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x0002969b) list_medium_line_t2_right_icon_t

0xde06,	// (0x000278d9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xde06,	// (0x000278d9) bg_sp_fs_ctrlbar_pane

0xaa73,	// (0x00024546) main_sp_fs_ctrlbar_button_pane_cp01

0xaa7b,	// (0x0002454e) main_sp_fs_ctrlbar_ddmenu_pane

0x229a,	// (0x0001bd6d) main_sp_fs_ctrlbar_pane_g1

0x22a6,	// (0x0001bd79) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x000296a0) main_sp_fs_ctrlbar_pane_g

0xaab7,	// (0x0002458a) main_sp_fs_ctrlbar_pane_t1

0xaaf2,	// (0x000245c5) main_sp_fs_ctrlbar_pane

0xab08,	// (0x000245db) main_sp_fs_listscroll_pane_te_cp01

0xab23,	// (0x000245f6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xab23,	// (0x000245f6) popup_sp_fs_action_menu_pane_cp01

0xcb45,	// (0x00026618) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcb45,	// (0x00026618) bg_sp_fs_highlight_list_pane_cp01

0x22cd,	// (0x0001bda0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x22cd,	// (0x0001bda0) sp_fs_action_menu_list_gene_pane_g1

0x22dc,	// (0x0001bdaf) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x22dc,	// (0x0001bdaf) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x000296ae) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x000296ae) sp_fs_action_menu_list_gene_pane_g

0x22e9,	// (0x0001bdbc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x22e9,	// (0x0001bdbc) sp_fs_action_menu_list_gene_pane_t1

0x2301,	// (0x0001bdd4) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2301,	// (0x0001bdd4) sp_fs_action_menu_list_gene_pane

0x2320,	// (0x0001bdf3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2320,	// (0x0001bdf3) popup_sp_fs_action_menu_bg_pane

0x232e,	// (0x0001be01) sp_fs_action_menu_list_pane_ParamLimits

0x232e,	// (0x0001be01) sp_fs_action_menu_list_pane

0x234e,	// (0x0001be21) sp_fs_scroll_pane_cp01_ParamLimits

0x234e,	// (0x0001be21) sp_fs_scroll_pane_cp01

0xd812,	// (0x000272e5) list_medium_line_plain_t2_t1

0xd812,	// (0x000272e5) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x0002969b) list_medium_line_plain_t2_t

0xd812,	// (0x000272e5) list_medium_line_plain_t3_t1

0xd812,	// (0x000272e5) list_medium_line_plain_t3_t2

0xd812,	// (0x000272e5) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x00028d2c) list_medium_line_plain_t3_t

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g2_g1

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00028c6c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00028c6c) list_medium_line_x2_t2_g2_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g2_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00028ce1) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00028ce1) list_medium_line_x2_t2_g2_t

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g2_g1

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00028c6c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00028c6c) list_medium_line_x2_t4_g2_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g2_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g2_t2

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g2_t3

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00028c7a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00028c7a) list_medium_line_x2_t4_g2_t

0xd0a2,	// (0x00026b75) list_medium_line_t3_right_iconx2_g1

0xd0a2,	// (0x00026b75) list_medium_line_t3_right_iconx2_g2

0xd0a2,	// (0x00026b75) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x00028e48) list_medium_line_t3_right_iconx2_g

0xd812,	// (0x000272e5) list_medium_line_t3_right_iconx2_t1

0xd812,	// (0x000272e5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0002969b) list_medium_line_t3_right_iconx2_t

0xd064,	// (0x00026b37) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x3_t4_g4_g1

0xd064,	// (0x00026b37) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x3_t4_g4_g2

0xd064,	// (0x00026b37) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x3_t4_g4_g3

0xd064,	// (0x00026b37) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00028c71) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00028c71) list_medium_line_x3_t4_g4_g

0xd0ac,	// (0x00026b7f) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x3_t4_g4_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x3_t4_g4_t2

0xd0ac,	// (0x00026b7f) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x3_t4_g4_t3

0xd0ac,	// (0x00026b7f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00028c7a) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00028c7a) list_medium_line_x3_t4_g4_t

0xab43,	// (0x00024616) list_single_dyc_row_text_pane_t1_ParamLimits

0xab43,	// (0x00024616) list_single_dyc_row_text_pane_t1

0xab7a,	// (0x0002464d) list_single_dyc_row_text_pane_t2_ParamLimits

0xab7a,	// (0x0002464d) list_single_dyc_row_text_pane_t2

0x2374,	// (0x0001be47) list_single_dyc_row_text_pane_t3_ParamLimits

0x2374,	// (0x0001be47) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x000296b3) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x000296b3) list_single_dyc_row_text_pane_t

0x2398,	// (0x0001be6b) list_single_dyc_row_pane_g1_ParamLimits

0x2398,	// (0x0001be6b) list_single_dyc_row_pane_g1

0x23a4,	// (0x0001be77) list_single_dyc_row_pane_g2_ParamLimits

0x23a4,	// (0x0001be77) list_single_dyc_row_pane_g2

0x23b0,	// (0x0001be83) list_single_dyc_row_pane_g3_ParamLimits

0x23b0,	// (0x0001be83) list_single_dyc_row_pane_g3

0x23c3,	// (0x0001be96) list_single_dyc_row_pane_g4_ParamLimits

0x23c3,	// (0x0001be96) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x000296c0) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x000296c0) list_single_dyc_row_pane_g

0x2415,	// (0x0001bee8) list_single_dyc_row_text_pane_ParamLimits

0x2415,	// (0x0001bee8) list_single_dyc_row_text_pane

0xc963,	// (0x00026436) bg_sp_fs_scroll_pane

0x243a,	// (0x0001bf0d) thumb_sp_fs_scroll_pane

0xd064,	// (0x00026b37) list_medium_line_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_g1

0xd0ac,	// (0x00026b7f) list_medium_line_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t1

0xd064,	// (0x00026b37) list_medium_line_x2_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_g1

0xd064,	// (0x00026b37) list_medium_line_x2_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00028c6c) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00028c6c) list_medium_line_x2_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t1

0xd064,	// (0x00026b37) list_medium_line_x3_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x3_g1

0x2443,	// (0x0001bf16) list_medium_line_x3_g2_ParamLimits

0x2443,	// (0x0001bf16) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x000296cf) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x000296cf) list_medium_line_x3_g

0x2451,	// (0x0001bf24) list_medium_line_x3_t1_ParamLimits

0x2451,	// (0x0001bf24) list_medium_line_x3_t1

0x2465,	// (0x0001bf38) thumb_sp_fs_scroll_pane_g1

0x246e,	// (0x0001bf41) thumb_sp_fs_scroll_pane_g2

0x2477,	// (0x0001bf4a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x000296d4) thumb_sp_fs_scroll_pane_g

0x2465,	// (0x0001bf38) bg_sp_fs_scroll_pane_g1

0x246e,	// (0x0001bf41) bg_sp_fs_scroll_pane_g2

0x2477,	// (0x0001bf4a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x000296d4) bg_sp_fs_scroll_pane_g

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g4_g1

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g4_g2

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g4_g3

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00028c71) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00028c71) list_medium_line_x2_t3_g4_g

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g4_t1

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g4_t2

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00028c65) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00028c65) list_medium_line_x2_t3_g4_t

0xd064,	// (0x00026b37) list_medium_line_g2_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_g2_g1

0xd064,	// (0x00026b37) list_medium_line_g2_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00028c6c) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00028c6c) list_medium_line_g2_g

0xd0ac,	// (0x00026b7f) list_medium_line_g2_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_g2_t1

0xd064,	// (0x00026b37) list_medium_line_t3_g2_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t3_g2_g1

0xd064,	// (0x00026b37) list_medium_line_t3_g2_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00028c6c) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00028c6c) list_medium_line_t3_g2_g

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g2_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g2_t1

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g2_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g2_t2

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g2_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00028c65) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00028c65) list_medium_line_t3_g2_t

0xd0a2,	// (0x00026b75) list_medium_line_right_icon_g1

0xd812,	// (0x000272e5) list_medium_line_right_icon_t1

0xd064,	// (0x00026b37) list_medium_line_t2_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t2_g1

0xd0ac,	// (0x00026b7f) list_medium_line_t2_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t2_t1

0xd0ac,	// (0x00026b7f) list_medium_line_t2_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00028ce1) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00028ce1) list_medium_line_t2_t

0xd064,	// (0x00026b37) list_medium_line_t3_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t3_g1

0xd0ac,	// (0x00026b7f) list_medium_line_t3_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_t1

0xd0ac,	// (0x00026b7f) list_medium_line_t3_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_t2

0xd0ac,	// (0x00026b7f) list_medium_line_t3_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00028c65) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00028c65) list_medium_line_t3_t

0xd064,	// (0x00026b37) list_medium_line_g3_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_g3_g1

0xd064,	// (0x00026b37) list_medium_line_g3_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_g3_g2

0xd064,	// (0x00026b37) list_medium_line_g3_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00028c5e) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00028c5e) list_medium_line_g3_g

0xd0ac,	// (0x00026b7f) list_medium_line_g3_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_g3_t1

0xd064,	// (0x00026b37) list_medium_line_t2_g3_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t2_g3_g1

0xd064,	// (0x00026b37) list_medium_line_t2_g3_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t2_g3_g2

0xd064,	// (0x00026b37) list_medium_line_t2_g3_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00028c5e) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00028c5e) list_medium_line_t2_g3_g

0xd0ac,	// (0x00026b7f) list_medium_line_t2_g3_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t2_g3_t1

0xd0ac,	// (0x00026b7f) list_medium_line_t2_g3_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00028ce1) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00028ce1) list_medium_line_t2_g3_t

0xd064,	// (0x00026b37) list_medium_line_t3_g3_g1_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t3_g3_g1

0xd064,	// (0x00026b37) list_medium_line_t3_g3_g2_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t3_g3_g2

0xd064,	// (0x00026b37) list_medium_line_t3_g3_g3_ParamLimits

0xd064,	// (0x00026b37) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00028c5e) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00028c5e) list_medium_line_t3_g3_g

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g3_t1_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g3_t1

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g3_t2_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g3_t2

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g3_t3_ParamLimits

0xd0ac,	// (0x00026b7f) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00028c65) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00028c65) list_medium_line_t3_g3_t

0xd0a2,	// (0x00026b75) list_medium_line_right_iconx2_g1

0xd0a2,	// (0x00026b75) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00028b5f) list_medium_line_right_iconx2_g

0xd812,	// (0x000272e5) list_medium_line_right_iconx2_t1

0xd0a2,	// (0x00026b75) list_medium_line_t2_right_iconx2_g1

0xd0a2,	// (0x00026b75) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00028b5f) list_medium_line_t2_right_iconx2_g

0xd812,	// (0x000272e5) list_medium_line_t2_right_iconx2_t1

0xd812,	// (0x000272e5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0002969b) list_medium_line_t2_right_iconx2_t

0xd812,	// (0x000272e5) list_medium_line_x4_t4_t1

0xd812,	// (0x000272e5) list_medium_line_x4_t4_t2

0xd812,	// (0x000272e5) list_medium_line_x4_t4_t3

0xd812,	// (0x000272e5) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x00028d33) list_medium_line_x4_t4_t

0xacc7,	// (0x0002479a) tport_appsw_pane_ParamLimits

0xacc7,	// (0x0002479a) tport_appsw_pane

0xacd5,	// (0x000247a8) tport_contact_pane_ParamLimits

0xacd5,	// (0x000247a8) tport_contact_pane

0xace5,	// (0x000247b8) tport_listscroll_pane_ParamLimits

0xace5,	// (0x000247b8) tport_listscroll_pane

0xacf5,	// (0x000247c8) cell_tport_appsw_pane_ParamLimits

0xacf5,	// (0x000247c8) cell_tport_appsw_pane

0xd072,	// (0x00026b45) tport_appsw_pane_g1_ParamLimits

0xd072,	// (0x00026b45) tport_appsw_pane_g1

0x2480,	// (0x0001bf53) tport_contact_pane_g1

0x1cd8,	// (0x0001b7ab) tport_contact_pane_t1

0x2489,	// (0x0001bf5c) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x000296db) tport_contact_pane_t

0x2497,	// (0x0001bf6a) list_tport_pane

0x24a0,	// (0x0001bf73) scroll_pane_cp_030

0xad28,	// (0x000247fb) cell_tport_appsw_pane_g1

0xad38,	// (0x0002480b) cell_tport_appsw_pane_t1

0xad46,	// (0x00024819) grid_highlight_pane_cp019

0xad4e,	// (0x00024821) list_tport_double_graphic_pane_ParamLimits

0xad4e,	// (0x00024821) list_tport_double_graphic_pane

0xcb45,	// (0x00026618) list_highlight_pane_cp023_ParamLimits

0xcb45,	// (0x00026618) list_highlight_pane_cp023

0xad5f,	// (0x00024832) list_tport_double_graphic_pane_g1_ParamLimits

0xad5f,	// (0x00024832) list_tport_double_graphic_pane_g1

0xad6c,	// (0x0002483f) list_tport_double_graphic_pane_t1_ParamLimits

0xad6c,	// (0x0002483f) list_tport_double_graphic_pane_t1

0xad81,	// (0x00024854) list_tport_double_graphic_pane_t2_ParamLimits

0xad81,	// (0x00024854) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x000296e7) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x000296e7) list_tport_double_graphic_pane_t

0xc963,	// (0x00026436) main_cale_note_pane

0x5790,	// (0x0001f263) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5790,	// (0x0001f263) cell_vitu2_function_top_wide_pane_cp01

0xa7f0,	// (0x000242c3) wait_bar_pane_cp05_ParamLimits

0xcb45,	// (0x00026618) listscroll_cmail_pane

0x24b1,	// (0x0001bf84) list_cmail_pane

0xad93,	// (0x00024866) list_cmail_body_pane

0xadba,	// (0x0002488d) list_single_cmail_header_caption_pane

0xade3,	// (0x000248b6) list_single_cmail_header_detail_pane_ParamLimits

0xade3,	// (0x000248b6) list_single_cmail_header_detail_pane

0x24c8,	// (0x0001bf9b) list_single_cmail_header_caption_pane_t1

0xae1d,	// (0x000248f0) list_single_cmail_header_detail_pane_g1_ParamLimits

0xae1d,	// (0x000248f0) list_single_cmail_header_detail_pane_g1

0x24df,	// (0x0001bfb2) list_single_cmail_header_detail_pane_g2_ParamLimits

0x24df,	// (0x0001bfb2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x000296ec) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x000296ec) list_single_cmail_header_detail_pane_g

0xae33,	// (0x00024906) list_single_cmail_header_detail_pane_t1_ParamLimits

0xae33,	// (0x00024906) list_single_cmail_header_detail_pane_t1

0xae6f,	// (0x00024942) list_single_cmail_header_editor_pane_bg_ParamLimits

0xae6f,	// (0x00024942) list_single_cmail_header_editor_pane_bg

0x1e35,	// (0x0001b908) list_cmail_body_pane_g1

0x251c,	// (0x0001bfef) list_cmail_body_pane_t1

0x1025,	// (0x0001aaf8) list_single_cmail_header_editor_pane_bg_g1

0xd53a,	// (0x0002700d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1035,	// (0x0001ab08) list_single_cmail_header_editor_pane_bg_g1_copy2

0x102d,	// (0x0001ab00) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1318,	// (0x0001adeb) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1055,	// (0x0001ab28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1045,	// (0x0001ab18) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x104d,	// (0x0001ab20) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd51a,	// (0x00026fed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xae86,	// (0x00024959) calenote_gesture_pane_ParamLimits

0xae86,	// (0x00024959) calenote_gesture_pane

0xaea0,	// (0x00024973) calenote_window_pane_ParamLimits

0xaea0,	// (0x00024973) calenote_window_pane

0x252a,	// (0x0001bffd) popup_note_window_cp01

0xaeb8,	// (0x0002498b) calenote_swipe_1_pane_ParamLimits

0xaeb8,	// (0x0002498b) calenote_swipe_1_pane

0xaa02,	// (0x000244d5) calenote_swipe_2_pane_ParamLimits

0xaa02,	// (0x000244d5) calenote_swipe_2_pane

0x2181,	// (0x0001bc54) calenote_swipe_1_pane_g1_ParamLimits

0x2181,	// (0x0001bc54) calenote_swipe_1_pane_g1

0x253c,	// (0x0001c00f) calenote_swipe_1_pane_g2_ParamLimits

0x253c,	// (0x0001c00f) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x000296f8) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x000296f8) calenote_swipe_1_pane_g

0x2548,	// (0x0001c01b) calenote_swipe_1_pane_t1_ParamLimits

0x2548,	// (0x0001c01b) calenote_swipe_1_pane_t1

0x2181,	// (0x0001bc54) calenote_swipe_2_pane_g1_ParamLimits

0x2181,	// (0x0001bc54) calenote_swipe_2_pane_g1

0x2567,	// (0x0001c03a) calenote_swipe_2_pane_g2_ParamLimits

0x2567,	// (0x0001c03a) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x000296fd) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x000296fd) calenote_swipe_2_pane_g

0x2573,	// (0x0001c046) calenote_swipe_2_pane_t1_ParamLimits

0x2573,	// (0x0001c046) calenote_swipe_2_pane_t1

0xc963,	// (0x00026436) main_mup_navstr_pane

0x8c38,	// (0x0002270b) main_mup3_pane_t7_ParamLimits

0x8c38,	// (0x0002270b) main_mup3_pane_t7

0x4efa,	// (0x0001e9cd) main_mp4_pane_g6_ParamLimits

0x4efa,	// (0x0001e9cd) main_mp4_pane_g6

0x5247,	// (0x0001ed1a) main_image3_pane_t4_ParamLimits

0x5247,	// (0x0001ed1a) main_image3_pane_t4

0xaecb,	// (0x0002499e) popup_navstr_preview_pane_ParamLimits

0xaecb,	// (0x0002499e) popup_navstr_preview_pane

0xaed7,	// (0x000249aa) scroll_navstr_pane_ParamLimits

0xaed7,	// (0x000249aa) scroll_navstr_pane

0xc963,	// (0x00026436) bg_popup_preview_window_pane_cp04

0x259a,	// (0x0001c06d) popup_navstr_preview_pane_t1

0xaee3,	// (0x000249b6) scroll_navstr_pane_g1_ParamLimits

0xaee3,	// (0x000249b6) scroll_navstr_pane_g1

0xaef0,	// (0x000249c3) scroll_navstr_pane_t1_ParamLimits

0xaef0,	// (0x000249c3) scroll_navstr_pane_t1

0x2533,	// (0x0001c006) bg_button_pane_cp014

0x2533,	// (0x0001c006) bg_button_pane_cp030

0xa915,	// (0x000243e8) list_double_fisheye_pane_g4_ParamLimits

0xa915,	// (0x000243e8) list_double_fisheye_pane_g4

0xa921,	// (0x000243f4) list_double_fisheye_pane_g5_ParamLimits

0xa921,	// (0x000243f4) list_double_fisheye_pane_g5

0x119e,	// (0x0001ac71) sp_fs_scroll_pane_cp03

0x229a,	// (0x0001bd6d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x22a6,	// (0x0001bd79) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x000296a0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xaab7,	// (0x0002458a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x24c0,	// (0x0001bf93) sp_fs_scroll_pane_cp02

0xd269,	// (0x00026d3c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd269,	// (0x00026d3c) popup_sp_fs_calendar_preview_list_single_pane

0xc963,	// (0x00026436) main_cam6_pano_pane

0x4a4f,	// (0x0001e522) main_mup3_pane_ParamLimits

0xc963,	// (0x00026436) main_phacti_pane

0xa6c5,	// (0x00024198) bg_button_pane_cp11

0xa6dd,	// (0x000241b0) main_mobtv_info_pane_g2_ParamLimits

0xa6dd,	// (0x000241b0) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x00029600) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x00029600) main_mobtv_info_pane_g

0xd0c0,	// (0x00026b93) sc_clock_pane_t5_ParamLimits

0xd0c0,	// (0x00026b93) sc_clock_pane_t5

0xde28,	// (0x000278fb) main_radioblah_pane_g1_ParamLimits

0xde14,	// (0x000278e7) main_radioblah_pane_t3_ParamLimits

0xde14,	// (0x000278e7) main_radioblah_pane_t3

0xde14,	// (0x000278e7) main_radioblah_pane_t4_ParamLimits

0xde14,	// (0x000278e7) main_radioblah_pane_t4

0xd056,	// (0x00026b29) main_radioblah_text_pane_ParamLimits

0xd056,	// (0x00026b29) main_radioblah_text_pane

0x2079,	// (0x0001bb4c) main_radioblah_info_pane_g1_ParamLimits

0x20bd,	// (0x0001bb90) main_radioblah_info_pane_t4_ParamLimits

0x20bd,	// (0x0001bb90) main_radioblah_info_pane_t4

0xcb45,	// (0x00026618) main_sp_fs_calendar_pane

0xaf02,	// (0x000249d5) main_phacti_pane_g1

0xaf0a,	// (0x000249dd) phacti_note_pane_ParamLimits

0xaf0a,	// (0x000249dd) phacti_note_pane

0x25b1,	// (0x0001c084) phacti_term_pane_ParamLimits

0x25b1,	// (0x0001c084) phacti_term_pane

0x25c6,	// (0x0001c099) phacti_note_pane_t1_ParamLimits

0x25c6,	// (0x0001c099) phacti_note_pane_t1

0x25dd,	// (0x0001c0b0) phacti_term_pane_g1

0x25e5,	// (0x0001c0b8) phacti_term_pane_t1_ParamLimits

0x25e5,	// (0x0001c0b8) phacti_term_pane_t1

0x260f,	// (0x0001c0e2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd2ff,	// (0x00026dd2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x00029707) popup_sp_fs_calendar_preview_list_single_pane_g

0x2617,	// (0x0001c0ea) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2617,	// (0x0001c0ea) popup_sp_fs_calendar_preview_list_single_pane_t1

0x262d,	// (0x0001c100) aid_popup_sp_fs_bg_corner_pane

0xd0a2,	// (0x00026b75) popup_sp_fs_calendar_preview_bg_pane_g1

0xc963,	// (0x00026436) popup_sp_fs_calendar_preview_bg_pane

0x2635,	// (0x0001c108) popup_sp_fs_calendar_preview_list_pane

0x2646,	// (0x0001c119) bg_main_sp_fs_cale_pane_ParamLimits

0x2646,	// (0x0001c119) bg_main_sp_fs_cale_pane

0x265e,	// (0x0001c131) listscroll_cale_mrui_pane_ParamLimits

0x265e,	// (0x0001c131) listscroll_cale_mrui_pane

0x06b2,	// (0x0001a185) listscroll_sp_fs_schedule_track_pane

0x2676,	// (0x0001c149) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2676,	// (0x0001c149) main_sp_fs_ctrlbar_pane_cp01

0x06b2,	// (0x0001a185) main_sp_fs_ribbon_pane

0x268c,	// (0x0001c15f) popup_sp_fs_cale_preview_window

0x1192,	// (0x0001ac65) list_single_sp_fs_schedule_track_pane_ParamLimits

0x1192,	// (0x0001ac65) list_single_sp_fs_schedule_track_pane

0x1192,	// (0x0001ac65) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1192,	// (0x0001ac65) bg_sp_fs_highlight_list_pane_cp03

0x891c,	// (0x000223ef) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x891c,	// (0x000223ef) list_single_sp_fs_schedule_track_pane_g1

0x891c,	// (0x000223ef) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x891c,	// (0x000223ef) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x0002970c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x0002970c) list_single_sp_fs_schedule_track_pane_g

0xaf20,	// (0x000249f3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaf20,	// (0x000249f3) list_single_sp_fs_schedule_track_pane_t1

0x0dbf,	// (0x0001a892) sp_fs_schedule_track_pane_ParamLimits

0x0dbf,	// (0x0001a892) sp_fs_schedule_track_pane

0x06ba,	// (0x0001a18d) sp_fs_schedule_track_pane_g1

0x06ba,	// (0x0001a18d) sp_fs_schedule_track_pane_g2

0x06ba,	// (0x0001a18d) sp_fs_schedule_track_pane_g3

0x06ba,	// (0x0001a18d) sp_fs_schedule_track_pane_g4

0x06ba,	// (0x0001a18d) sp_fs_schedule_track_pane_g5

0x0004,

0xfc3e,	// (0x00029711) sp_fs_schedule_track_pane_g

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g1

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g2

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g3

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g4

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g5

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g6

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g7

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g8

0x06ba,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc49,	// (0x0002971c) bg_sp_fs_schedule_viewer_highlight_g

0x06b2,	// (0x0001a185) bg_main_sp_fs_ribbon_pane

0x06ba,	// (0x0001a18d) main_sp_fs_ribbon_pane_g1

0x269e,	// (0x0001c171) main_sp_fs_ribbon_pane_t1

0x269e,	// (0x0001c171) main_sp_fs_ribbon_pane_t2

0x269e,	// (0x0001c171) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5c,	// (0x0002972f) main_sp_fs_ribbon_pane_t

0x06b2,	// (0x0001a185) main_sp_fs_ribbon_scheduler_pane

0x06ba,	// (0x0001a18d) bg_main_sp_fs_ribbon_pane_g1

0x06ba,	// (0x0001a18d) bg_main_sp_fs_ribbon_pane_g2

0x06ba,	// (0x0001a18d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x00029178) bg_main_sp_fs_ribbon_pane_g

0x06ba,	// (0x0001a18d) main_sp_fs_ribbon_scheduler_pane_g1

0x06ba,	// (0x0001a18d) main_sp_fs_ribbon_scheduler_pane_g2

0x06ba,	// (0x0001a18d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x00029178) main_sp_fs_ribbon_scheduler_pane_g

0x26ac,	// (0x0001c17f) list_cale_mrui_pane

0xaf32,	// (0x00024a05) sp_fs_scroll_pane_cp07_ParamLimits

0xaf32,	// (0x00024a05) sp_fs_scroll_pane_cp07

0x1192,	// (0x0001ac65) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x1192,	// (0x0001ac65) bg_sp_fs_schedule_viewer_highlight

0x06b2,	// (0x0001a185) list_single_sp_fs_schedule_track_pane_cp01

0x06b2,	// (0x0001a185) list_sp_fs_schedule_track_pane

0x26b9,	// (0x0001c18c) sp_fs_scroll_pane_cp06_ParamLimits

0x26b9,	// (0x0001c18c) sp_fs_scroll_pane_cp06

0xd0a2,	// (0x00026b75) bgmain_sp_fs_calendar_pane_g1

0xaf4e,	// (0x00024a21) list_single_cale_mrui_pane_ParamLimits

0xaf4e,	// (0x00024a21) list_single_cale_mrui_pane

0x26cd,	// (0x0001c1a0) list_single_cale_mrui_row_pane_ParamLimits

0x26cd,	// (0x0001c1a0) list_single_cale_mrui_row_pane

0x26da,	// (0x0001c1ad) list_single_cale_mrui_row_pane_g1_ParamLimits

0x26da,	// (0x0001c1ad) list_single_cale_mrui_row_pane_g1

0x271f,	// (0x0001c1f2) list_single_cale_mrui_row_pane_t1_ParamLimits

0x271f,	// (0x0001c1f2) list_single_cale_mrui_row_pane_t1

0xaf78,	// (0x00024a4b) list_single_cale_mrui_row_pane_t2_ParamLimits

0xaf78,	// (0x00024a4b) list_single_cale_mrui_row_pane_t2

0x2731,	// (0x0001c204) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2731,	// (0x0001c204) list_single_cale_mrui_row_pane_t3

0x2760,	// (0x0001c233) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2760,	// (0x0001c233) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc6a,	// (0x0002973d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc6a,	// (0x0002973d) list_single_cale_mrui_row_pane_t

0xafde,	// (0x00024ab1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xafde,	// (0x00024ab1) list_single_cmail_header_editor_pane_bg_cp01

0xb006,	// (0x00024ad9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb006,	// (0x00024ad9) list_single_cmail_header_editor_pane_bg_cp02

0x278f,	// (0x0001c262) main_radioblah_text_pane_t1_ParamLimits

0x278f,	// (0x0001c262) main_radioblah_text_pane_t1

0x27a9,	// (0x0001c27c) cam6_indi_pane_cp01

0x27b1,	// (0x0001c284) cam6_mode_pane_cp01

0x27b9,	// (0x0001c28c) cam6_pano_pane

0x27c2,	// (0x0001c295) cam6_zoom_pane_cp01

0x27ca,	// (0x0001c29d) cam6_pano_image_pane

0x27d5,	// (0x0001c2a8) cam6_pano_pane_g1

0x1e35,	// (0x0001b908) cam6_pano_pane_g2

0x27de,	// (0x0001c2b1) cam6_pano_pane_g3

0x27e7,	// (0x0001c2ba) cam6_pano_pane_g4

0x094d,	// (0x0001a420) cam6_pano_pane_g5

0x27f0,	// (0x0001c2c3) cam6_pano_pane_g6

0x27fa,	// (0x0001c2cd) cam6_pano_pane_g7

0x2802,	// (0x0001c2d5) cam6_pano_pane_g8

0x280b,	// (0x0001c2de) cam6_pano_pane_g9

0x0008,

0xfc73,	// (0x00029746) cam6_pano_pane_g

0xc963,	// (0x00026436) main_browser_tag_pane

0x2592,	// (0x0001c065) grid_navstr_albumart_pane

0x2816,	// (0x0001c2e9) cell_navstr_albumart_pane_ParamLimits

0x2816,	// (0x0001c2e9) cell_navstr_albumart_pane

0x2836,	// (0x0001c309) cell_navstr_albumart_pane_g1

0x283e,	// (0x0001c311) cell_navstr_albumart_pane_g2

0x2846,	// (0x0001c319) cell_navstr_albumart_pane_g3

0x284e,	// (0x0001c321) cell_navstr_albumart_pane_g4

0x0003,

0xfc86,	// (0x00029759) cell_navstr_albumart_pane_g

0xb022,	// (0x00024af5) bt_list_pane_ParamLimits

0xb022,	// (0x00024af5) bt_list_pane

0xb042,	// (0x00024b15) bt_list_pane_t1

0xb051,	// (0x00024b24) bt_list_pane_t2

0x0001,

0xfc8f,	// (0x00029762) bt_list_pane_t

0xc963,	// (0x00026436) main_cale_prevew_pane

0xb060,	// (0x00024b33) popup_cale_preview_window_ParamLimits

0xb060,	// (0x00024b33) popup_cale_preview_window

0xcb45,	// (0x00026618) bg_popup_preview_window_pane_cp05_ParamLimits

0xcb45,	// (0x00026618) bg_popup_preview_window_pane_cp05

0x2856,	// (0x0001c329) list_cale_preview_pane_ParamLimits

0x2856,	// (0x0001c329) list_cale_preview_pane

0xb079,	// (0x00024b4c) list_double_cale_preview_pane_ParamLimits

0xb079,	// (0x00024b4c) list_double_cale_preview_pane

0xb08b,	// (0x00024b5e) list_single_cale_preview_pane_ParamLimits

0xb08b,	// (0x00024b5e) list_single_cale_preview_pane

0xb0a1,	// (0x00024b74) list_single_cale_preview_pane_g1

0xb0a9,	// (0x00024b7c) list_single_cale_preview_pane_t1_ParamLimits

0xb0a9,	// (0x00024b7c) list_single_cale_preview_pane_t1

0xb0be,	// (0x00024b91) list_double_cale_preview_pane_g1

0xb0c6,	// (0x00024b99) list_double_cale_preview_pane_t1_ParamLimits

0xb0c6,	// (0x00024b99) list_double_cale_preview_pane_t1

0xb0db,	// (0x00024bae) list_double_cale_preview_pane_t2_ParamLimits

0xb0db,	// (0x00024bae) list_double_cale_preview_pane_t2

0x0001,

0xfc94,	// (0x00029767) list_double_cale_preview_pane_t_ParamLimits

0xfc94,	// (0x00029767) list_double_cale_preview_pane_t

0xc963,	// (0x00026436) main_ezdial_pane

0xcb45,	// (0x00026618) main_sp_fs_email_pane_ParamLimits

0xaa1c,	// (0x000244ef) cmail_ddmenu_btn01_pane_ParamLimits

0xaa1c,	// (0x000244ef) cmail_ddmenu_btn01_pane

0xaa39,	// (0x0002450c) cmail_ddmenu_btn02_pane_ParamLimits

0xaa39,	// (0x0002450c) cmail_ddmenu_btn02_pane

0xaa57,	// (0x0002452a) cmail_ddmenu_btn03_pane_ParamLimits

0xaa57,	// (0x0002452a) cmail_ddmenu_btn03_pane

0xaaf2,	// (0x000245c5) main_sp_fs_ctrlbar_pane_ParamLimits

0xab08,	// (0x000245db) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xad93,	// (0x00024866) list_cmail_body_pane_ParamLimits

0x24d6,	// (0x0001bfa9) bg_button_pane_cp12

0x24eb,	// (0x0001bfbe) list_single_cmail_header_detail_pane_g3_ParamLimits

0x24eb,	// (0x0001bfbe) list_single_cmail_header_detail_pane_g3

0x24f8,	// (0x0001bfcb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x24f8,	// (0x0001bfcb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x000296f3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x000296f3) list_single_cmail_header_detail_pane_t

0x25fa,	// (0x0001c0cd) phacti_term_pane_t2_ParamLimits

0x25fa,	// (0x0001c0cd) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x00029702) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x00029702) phacti_term_pane_t

0x2862,	// (0x0001c335) aid_size_list_single_double

0xb0f3,	// (0x00024bc6) popup_ezdial_listscroll_window

0x286e,	// (0x0001c341) popup_number_entry_window_cp01

0xd318,	// (0x00026deb) bg_popup_call_pane_cp09

0x287b,	// (0x0001c34e) ezdial_list_pane

0x2883,	// (0x0001c356) scroll_pane_cp23

0x007e,	// (0x00019b51) bg_button_pane_cp028_ParamLimits

0x007e,	// (0x00019b51) bg_button_pane_cp028

0xb10c,	// (0x00024bdf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb10c,	// (0x00024bdf) cmail_ddmenu_btn01_pane_g1

0xb11c,	// (0x00024bef) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb11c,	// (0x00024bef) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc99,	// (0x0002976c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc99,	// (0x0002976c) cmail_ddmenu_btn01_pane_g

0x288b,	// (0x0001c35e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x288b,	// (0x0001c35e) cmail_ddmenu_btn01_pane_t1

0xde06,	// (0x000278d9) bg_button_pane_cp029_ParamLimits

0xde06,	// (0x000278d9) bg_button_pane_cp029

0xb128,	// (0x00024bfb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb128,	// (0x00024bfb) cmail_ddmenu_btn02_pane_g1

0xb140,	// (0x00024c13) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb140,	// (0x00024c13) cmail_ddmenu_btn02_pane_t1

0xd056,	// (0x00026b29) bg_button_pane_cp031_ParamLimits

0xd056,	// (0x00026b29) bg_button_pane_cp031

0xb128,	// (0x00024bfb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb128,	// (0x00024bfb) cmail_ddmenu_btn03_pane_g1

0xb140,	// (0x00024c13) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb140,	// (0x00024c13) cmail_ddmenu_btn03_pane_t1

0xd0ac,	// (0x00026b7f) cell_dialer2_keypad_pane_t1_ParamLimits

0x098b,	// (0x0001a45e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x098b,	// (0x0001a45e) cell_dialer2_keypad_pane_t1_copy1

0xa506,	// (0x00023fd9) ncimui_group_button_pane

0xcb45,	// (0x00026618) main_sp_fs_calendar_pane_ParamLimits

0xadba,	// (0x0002488d) list_single_cmail_header_caption_pane_ParamLimits

0x263d,	// (0x0001c110) aid_recal_txt_sm_pane

0xc963,	// (0x00026436) mian_recal_day_pane

0x268c,	// (0x0001c15f) popup_sp_fs_cale_preview_window_ParamLimits

0x28a1,	// (0x0001c374) list_recal_day_pane

0x28e3,	// (0x0001c3b6) list_single_recal_day_pane_ParamLimits

0x28e3,	// (0x0001c3b6) list_single_recal_day_pane

0x28f5,	// (0x0001c3c8) list_single_recal_day_pane_g1_ParamLimits

0x28f5,	// (0x0001c3c8) list_single_recal_day_pane_g1

0x2901,	// (0x0001c3d4) list_single_recal_day_pane_g2_ParamLimits

0x2901,	// (0x0001c3d4) list_single_recal_day_pane_g2

0x290d,	// (0x0001c3e0) list_single_recal_day_pane_g3_ParamLimits

0x290d,	// (0x0001c3e0) list_single_recal_day_pane_g3

0xb164,	// (0x00024c37) list_single_recal_day_pane_g4_ParamLimits

0xb164,	// (0x00024c37) list_single_recal_day_pane_g4

0x2919,	// (0x0001c3ec) list_single_recal_day_pane_g5_ParamLimits

0x2919,	// (0x0001c3ec) list_single_recal_day_pane_g5

0x2925,	// (0x0001c3f8) list_single_recal_day_pane_g6_ParamLimits

0x2925,	// (0x0001c3f8) list_single_recal_day_pane_g6

0x0004,

0xfca8,	// (0x0002977b) list_single_recal_day_pane_g_ParamLimits

0xfca8,	// (0x0002977b) list_single_recal_day_pane_g

0x2939,	// (0x0001c40c) list_single_recal_day_pane_t1

0x294b,	// (0x0001c41e) list_single_recal_day_pane_t2

0x0001,

0xfcb3,	// (0x00029786) list_single_recal_day_pane_t

0xb17c,	// (0x00024c4f) ncimui_query_button_pane_ParamLimits

0xb17c,	// (0x00024c4f) ncimui_query_button_pane

0xb18c,	// (0x00024c5f) ncimui_query_button_pane_t1_ParamLimits

0xb18c,	// (0x00024c5f) ncimui_query_button_pane_t1

0x295d,	// (0x0001c430) ncimui_query_button_pane_t2_ParamLimits

0x295d,	// (0x0001c430) ncimui_query_button_pane_t2

0x0001,

0xfcb8,	// (0x0002978b) ncimui_query_button_pane_t_ParamLimits

0xfcb8,	// (0x0002978b) ncimui_query_button_pane_t

0xb19f,	// (0x00024c72) query_button_pane_ParamLimits

0xb19f,	// (0x00024c72) query_button_pane

0xc963,	// (0x00026436) bg_button_pane_cp0028

0x2970,	// (0x0001c443) query_button_pane_t1

0x4a6b,	// (0x0001e53e) main_tport_pane_ParamLimits

0xac9d,	// (0x00024770) bg_popup_window_pane_cp01_ParamLimits

0xac9d,	// (0x00024770) bg_popup_window_pane_cp01

0xacab,	// (0x0002477e) heading_pane_cp08_ParamLimits

0xacab,	// (0x0002477e) heading_pane_cp08

0xacb9,	// (0x0002478c) heading_pane_cp07_ParamLimits

0xacb9,	// (0x0002478c) heading_pane_cp07

0xad28,	// (0x000247fb) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x000296e0) cell_tport_appsw_pane_g

0x7a71,	// (0x00021544) input_candi_list_open_g1

0xd6bd,	// (0x00027190) list_cale_time_pane_g6_ParamLimits

0xd6bd,	// (0x00027190) list_cale_time_pane_g6

0x8593,	// (0x00022066) aid_size_touch_calib_1_ParamLimits

0x8593,	// (0x00022066) aid_size_touch_calib_1

0x859f,	// (0x00022072) aid_size_touch_calib_2_ParamLimits

0x859f,	// (0x00022072) aid_size_touch_calib_2

0x85ad,	// (0x00022080) aid_size_touch_calib_3_ParamLimits

0x85ad,	// (0x00022080) aid_size_touch_calib_3

0x85bd,	// (0x00022090) aid_size_touch_calib_4_ParamLimits

0x85bd,	// (0x00022090) aid_size_touch_calib_4

0x85cb,	// (0x0002209e) main_touch_calib_button_group_pane_ParamLimits

0x85cb,	// (0x0002209e) main_touch_calib_button_group_pane

0x85d9,	// (0x000220ac) main_touch_calib_pane_g1_ParamLimits

0x85e5,	// (0x000220b8) main_touch_calib_pane_g2_ParamLimits

0x85f1,	// (0x000220c4) main_touch_calib_pane_g3_ParamLimits

0x85fd,	// (0x000220d0) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x00029126) main_touch_calib_pane_g_ParamLimits

0x8609,	// (0x000220dc) main_touch_calib_pane_t1_ParamLimits

0x8622,	// (0x000220f5) main_touch_calib_pane_t2_ParamLimits

0x863b,	// (0x0002210e) main_touch_calib_pane_t3_ParamLimits

0x8651,	// (0x00022124) main_touch_calib_pane_t4_ParamLimits

0x8667,	// (0x0002213a) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x0002912f) main_touch_calib_pane_t_ParamLimits

0x071a,	// (0x0001a1ed) list_single_fp_cale_pane_g3_ParamLimits

0x071a,	// (0x0001a1ed) list_single_fp_cale_pane_g3

0x4a4f,	// (0x0001e522) bg_button_pane_cp012_ParamLimits

0x4a4f,	// (0x0001e522) bg_vkb2_func_pane_cp03_ParamLimits

0x598f,	// (0x0001f462) cell_vitu2_function_top_pane_g1_ParamLimits

0x4a4f,	// (0x0001e522) bg_vkb2_func_pane_cp04_ParamLimits

0xa48e,	// (0x00023f61) main_ncimui_button_group_pane_ParamLimits

0xa48e,	// (0x00023f61) main_ncimui_button_group_pane

0xa4f4,	// (0x00023fc7) main_ncimui_pane_t3_ParamLimits

0xa4f4,	// (0x00023fc7) main_ncimui_pane_t3

0x25a8,	// (0x0001c07b) phacti_button_group_pane

0x2862,	// (0x0001c335) aid_size_list_single_double_ParamLimits

0xb0f3,	// (0x00024bc6) popup_ezdial_listscroll_window_ParamLimits

0x286e,	// (0x0001c341) popup_number_entry_window_cp01_ParamLimits

0xb1ac,	// (0x00024c7f) phacti_button_pane_ParamLimits

0xb1ac,	// (0x00024c7f) phacti_button_pane

0xc963,	// (0x00026436) bg_button_pane_cp14

0x297e,	// (0x0001c451) phacti_button_pane_t1

0xb1bd,	// (0x00024c90) main_touch_calib_button_pane_ParamLimits

0xb1bd,	// (0x00024c90) main_touch_calib_button_pane

0xd100,	// (0x00026bd3) bg_button_pane_cp18_ParamLimits

0xd100,	// (0x00026bd3) bg_button_pane_cp18

0x298c,	// (0x0001c45f) main_touch_calib_button_pane_t1_ParamLimits

0x298c,	// (0x0001c45f) main_touch_calib_button_pane_t1

0x29a2,	// (0x0001c475) main_touch_calib_button_pane_t2_ParamLimits

0x29a2,	// (0x0001c475) main_touch_calib_button_pane_t2

0x0001,

0xfcbd,	// (0x00029790) main_touch_calib_button_pane_t_ParamLimits

0xfcbd,	// (0x00029790) main_touch_calib_button_pane_t

0xc963,	// (0x00026436) cell_ncimui_button_pane

0xc963,	// (0x00026436) bg_button_pane_cp032

0x29c0,	// (0x0001c493) cell_ncimui_button_pane_t1

0x515a,	// (0x0001ec2d) image3_infobar_pane_ParamLimits

0x515a,	// (0x0001ec2d) image3_infobar_pane

0xa836,	// (0x00024309) fs_bigclock_status_pane_ParamLimits

0xa836,	// (0x00024309) fs_bigclock_status_pane

0xa843,	// (0x00024316) main_fs_bigclock_clock_pane_ParamLimits

0xa843,	// (0x00024316) main_fs_bigclock_clock_pane

0xa857,	// (0x0002432a) main_fs_bigclock_indi_pane_ParamLimits

0xa857,	// (0x0002432a) main_fs_bigclock_indi_pane

0xa87f,	// (0x00024352) main_fs_bigclock_swipe_pane_ParamLimits

0xa87f,	// (0x00024352) main_fs_bigclock_swipe_pane

0xc963,	// (0x00026436) main_fs_clock_dumped_data

0x1f42,	// (0x0001ba15) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1f42,	// (0x0001ba15) list_single_fs_bigclock_indicator_pane_g1

0x1f5d,	// (0x0001ba30) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1f5d,	// (0x0001ba30) list_single_fs_bigclock_indicator_pane_g2

0x1f77,	// (0x0001ba4a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1f77,	// (0x0001ba4a) list_single_fs_bigclock_indicator_pane_g3

0x1f91,	// (0x0001ba64) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1f91,	// (0x0001ba64) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x00029634) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x00029634) list_single_fs_bigclock_indicator_pane_g

0x1fbc,	// (0x0001ba8f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1fbc,	// (0x0001ba8f) list_single_fs_bigclock_indicator_pane_t1

0x1fe4,	// (0x0001bab7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1fe4,	// (0x0001bab7) list_single_fs_bigclock_indicator_pane_t2

0x200c,	// (0x0001badf) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x200c,	// (0x0001badf) list_single_fs_bigclock_indicator_pane_t3

0x2034,	// (0x0001bb07) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2034,	// (0x0001bb07) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x0002963f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x0002963f) list_single_fs_bigclock_indicator_pane_t

0x29ce,	// (0x0001c4a1) image3_infobar_fav_pane_ParamLimits

0x29ce,	// (0x0001c4a1) image3_infobar_fav_pane

0x29de,	// (0x0001c4b1) image3_infobar_loc_pane_ParamLimits

0x29de,	// (0x0001c4b1) image3_infobar_loc_pane

0x29f2,	// (0x0001c4c5) image3_infobar_time_pane_ParamLimits

0x29f2,	// (0x0001c4c5) image3_infobar_time_pane

0xd0a2,	// (0x00026b75) image3_infobar_time_pane_g1

0x2a02,	// (0x0001c4d5) image3_infobar_time_pane_t1

0xd0a2,	// (0x00026b75) image3_infobar_loc_pane_g1

0x2a10,	// (0x0001c4e3) image3_infobar_loc_pane_g2

0x0001,

0xfcc2,	// (0x00029795) image3_infobar_loc_pane_g

0x2a18,	// (0x0001c4eb) image3_infobar_loc_pane_t1

0xd0a2,	// (0x00026b75) image3_infobar_fav_pane_g1

0x2a26,	// (0x0001c4f9) image3_infobar_fav_pane_g2

0x0001,

0xfcc7,	// (0x0002979a) image3_infobar_fav_pane_g

0x2a2e,	// (0x0001c501) fs_bigclock_status_battery_pane

0x2a37,	// (0x0001c50a) fs_bigclock_status_signal_pane

0x2a40,	// (0x0001c513) fs_bigclock_status_title_pane

0x2a49,	// (0x0001c51c) fs_bigclock_status_signal_pane_g1

0x2a52,	// (0x0001c525) fs_bigclock_status_signal_pane_g2

0x0001,

0xfccc,	// (0x0002979f) fs_bigclock_status_signal_pane_g

0x2a5a,	// (0x0001c52d) fs_bigclock_status_battery_pane_g1

0x2a63,	// (0x0001c536) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd1,	// (0x000297a4) fs_bigclock_status_battery_pane_g

0x2a6b,	// (0x0001c53e) fs_bigclock_status_title_pane_t1

0xb1cd,	// (0x00024ca0) main_fs_bigclock_clock_pane_g1

0xb1cd,	// (0x00024ca0) main_fs_bigclock_clock_pane_g2

0xb1cd,	// (0x00024ca0) main_fs_bigclock_clock_pane_g3

0xb1cd,	// (0x00024ca0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd6,	// (0x000297a9) main_fs_bigclock_clock_pane_g

0xb1d9,	// (0x00024cac) main_fs_bigclock_clock_pane_t1

0xb1ed,	// (0x00024cc0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcdf,	// (0x000297b2) main_fs_bigclock_clock_pane_t

0x2a79,	// (0x0001c54c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2a79,	// (0x0001c54c) list_single_fs_bigclock_indicator_pane

0x2a8a,	// (0x0001c55d) list_single_fs_bigclock_pane_ParamLimits

0x2a8a,	// (0x0001c55d) list_single_fs_bigclock_pane

0x2ab0,	// (0x0001c583) main_fs_bigclock_indicator_pane_t1

0x2abf,	// (0x0001c592) list_single_fs_bigclock_pane_g1

0x2ac7,	// (0x0001c59a) list_single_fs_bigclock_pane_t1

0xd0a2,	// (0x00026b75) main_fs_bigclock_swipe_pane_g1

0x2b0a,	// (0x0001c5dd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf0,	// (0x000297c3) main_fs_bigclock_swipe_pane_g

0x2b12,	// (0x0001c5e5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2b12,	// (0x0001c5e5) main_fs_bigclock_swipe_pane_t1

0x75f6,	// (0x000210c9) call_type_pane_ParamLimits

0xc963,	// (0x00026436) main_btmg_pane

0x2706,	// (0x0001c1d9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2706,	// (0x0001c1d9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc63,	// (0x00029736) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc63,	// (0x00029736) list_single_cale_mrui_row_pane_g

0x28ca,	// (0x0001c39d) list_recal_vselct_arw_lo_pane

0x28d2,	// (0x0001c3a5) list_recal_vselct_arw_up_pane

0x28da,	// (0x0001c3ad) list_recal_vselct_pane

0xb244,	// (0x00024d17) btmg_button_pane

0xb250,	// (0x00024d23) main_btmg_pane_g1

0xc963,	// (0x00026436) bg_button_pane_cp044

0x2b2f,	// (0x0001c602) btmg_button_pane_t1

0xef6e,	// (0x00028a41) aid_listscroll_gen

0xcb45,	// (0x00026618) main_cntbar_detail_pane

0x24a9,	// (0x0001bf7c) list_cmail_folder_pane

0x119e,	// (0x0001ac71) sp_fs_scroll_pane_cp03_ParamLimits

0xadba,	// (0x0002488d) list_single_fs_dyc_pane_cp01_ParamLimits

0xadba,	// (0x0002488d) list_single_fs_dyc_pane_cp01

0x2b3d,	// (0x0001c610) aid_size_cmail_indent

0x2b46,	// (0x0001c619) list_single_dyc_row_pane_cp01

0xb278,	// (0x00024d4b) cntbar_detail_list_pane_ParamLimits

0xb278,	// (0x00024d4b) cntbar_detail_list_pane

0xb2b2,	// (0x00024d85) main_cntbar_detail_cont_pane_ParamLimits

0xb2b2,	// (0x00024d85) main_cntbar_detail_cont_pane

0x75ea,	// (0x000210bd) scroll_pane_cp032_ParamLimits

0x75ea,	// (0x000210bd) scroll_pane_cp032

0xb2be,	// (0x00024d91) cntbar_detail_list_event_pane_ParamLimits

0xb2be,	// (0x00024d91) cntbar_detail_list_event_pane

0xb284,	// (0x00024d57) cntbar_detail_list_shct_pane

0xd588,	// (0x0002705b) aid_list_gen

0x2b4f,	// (0x0001c622) aid_scroll

0x2b58,	// (0x0001c62b) aid_size_touch_scroll_bar

0xa8e0,	// (0x000243b3) aid_list_double

0x2b61,	// (0x0001c634) aid_list_single

0x2b61,	// (0x0001c634) aid_list_single_lg

0x2b6a,	// (0x0001c63d) aid_list_z_g_a_sm

0x2b72,	// (0x0001c645) aid_list_z_g_d

0x2b7a,	// (0x0001c64d) aid_txt_z_prm

0xb2d2,	// (0x00024da5) aid_txt_z_prm_cp01

0xb2e0,	// (0x00024db3) aid_txt_z_sec

0xb2ee,	// (0x00024dc1) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb2ee,	// (0x00024dc1) main_cntbar_detail_cont_pane_g1

0xb2fb,	// (0x00024dce) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb2fb,	// (0x00024dce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf5,	// (0x000297c8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf5,	// (0x000297c8) main_cntbar_detail_cont_pane_g

0x2b88,	// (0x0001c65b) main_cntbar_detail_cont_pane_t1

0x2b96,	// (0x0001c669) main_cntbar_detail_cont_pane_t2

0x2ba4,	// (0x0001c677) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcfa,	// (0x000297cd) main_cntbar_detail_cont_pane_t

0xb307,	// (0x00024dda) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb307,	// (0x00024dda) cell_cntbar_detail_list_shct_pane

0x2bb2,	// (0x0001c685) cntbar_detail_list_shct_pane_g1

0x2bbb,	// (0x0001c68e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd01,	// (0x000297d4) cntbar_detail_list_shct_pane_g

0xb31b,	// (0x00024dee) cntbar_detail_list_event_pane_g1_ParamLimits

0xb31b,	// (0x00024dee) cntbar_detail_list_event_pane_g1

0xb327,	// (0x00024dfa) cntbar_detail_list_event_pane_g2_ParamLimits

0xb327,	// (0x00024dfa) cntbar_detail_list_event_pane_g2

0x0005,

0xfd06,	// (0x000297d9) cntbar_detail_list_event_pane_g_ParamLimits

0xfd06,	// (0x000297d9) cntbar_detail_list_event_pane_g

0xb393,	// (0x00024e66) cntbar_detail_list_event_pane_t1_ParamLimits

0xb393,	// (0x00024e66) cntbar_detail_list_event_pane_t1

0xb3a8,	// (0x00024e7b) cntbar_detail_list_event_pane_t2_ParamLimits

0xb3a8,	// (0x00024e7b) cntbar_detail_list_event_pane_t2

0x0002,

0xfd13,	// (0x000297e6) cntbar_detail_list_event_pane_t_ParamLimits

0xfd13,	// (0x000297e6) cntbar_detail_list_event_pane_t

0xd0a2,	// (0x00026b75) cell_cntbar_detail_list_shct_pane_g1

0xdcc4,	// (0x00027797) navi_pane_mv_g3

0xcb45,	// (0x00026618) main_cntbar_detail_pane_ParamLimits

0xc963,	// (0x00026436) main_notif_wgt_pane

0x4e29,	// (0x0001e8fc) aid_tch_main_mp4_pane_g4

0x50fc,	// (0x0001ebcf) popup_slider_window_cp02

0x28c0,	// (0x0001c393) list_recal_day_event_pane

0xb258,	// (0x00024d2b) cntbar_detail_btn_pane_ParamLimits

0xb258,	// (0x00024d2b) cntbar_detail_btn_pane

0xb268,	// (0x00024d3b) cntbar_detail_btn_pane_cp01_ParamLimits

0xb268,	// (0x00024d3b) cntbar_detail_btn_pane_cp01

0xb284,	// (0x00024d57) cntbar_detail_list_shct_pane_ParamLimits

0xb290,	// (0x00024d63) cntbar_detail_pane_g1_ParamLimits

0xb290,	// (0x00024d63) cntbar_detail_pane_g1

0xb29c,	// (0x00024d6f) cntbar_detail_pane_t1_ParamLimits

0xb29c,	// (0x00024d6f) cntbar_detail_pane_t1

0xb333,	// (0x00024e06) cntbar_detail_list_event_pane_g3_ParamLimits

0xb333,	// (0x00024e06) cntbar_detail_list_event_pane_g3

0xb34b,	// (0x00024e1e) cntbar_detail_list_event_pane_g4_ParamLimits

0xb34b,	// (0x00024e1e) cntbar_detail_list_event_pane_g4

0xb363,	// (0x00024e36) cntbar_detail_list_event_pane_g5_ParamLimits

0xb363,	// (0x00024e36) cntbar_detail_list_event_pane_g5

0xb37b,	// (0x00024e4e) cntbar_detail_list_event_pane_g6_ParamLimits

0xb37b,	// (0x00024e4e) cntbar_detail_list_event_pane_g6

0xb3bd,	// (0x00024e90) cntbar_detail_list_event_pane_t3_ParamLimits

0xb3bd,	// (0x00024e90) cntbar_detail_list_event_pane_t3

0xb3cf,	// (0x00024ea2) popup_notif_wgt_window_ParamLimits

0xb3cf,	// (0x00024ea2) popup_notif_wgt_window

0xb3df,	// (0x00024eb2) popup_submenu_window_cp01_ParamLimits

0xb3df,	// (0x00024eb2) popup_submenu_window_cp01

0xd318,	// (0x00026deb) bg_popup_window_pane_cp10

0x2bc4,	// (0x0001c697) listscroll_notif_wgt_pane

0x2bd6,	// (0x0001c6a9) list_notif_wgt_window

0x2bdf,	// (0x0001c6b2) scroll_pane_cp033

0xb3f1,	// (0x00024ec4) list_notif_wgt_row_pane_ParamLimits

0xb3f1,	// (0x00024ec4) list_notif_wgt_row_pane

0x2be8,	// (0x0001c6bb) aid_size_list_notif_wgt_del

0x2c1f,	// (0x0001c6f2) list_notif_wgt_row_pane_g1

0x2c2b,	// (0x0001c6fe) list_notif_wgt_row_pane_g2

0x2c3a,	// (0x0001c70d) list_notif_wgt_row_pane_g3

0x0002,

0xfd1a,	// (0x000297ed) list_notif_wgt_row_pane_g

0x2c47,	// (0x0001c71a) list_notif_wgt_row_pane_t1

0x2c5d,	// (0x0001c730) list_notif_wgt_row_pane_t2

0x2c6f,	// (0x0001c742) list_notif_wgt_row_pane_t3

0x0002,

0xfd21,	// (0x000297f4) list_notif_wgt_row_pane_t

0x1340,	// (0x0001ae13) list_recal_day_event_pane_g1

0x2c81,	// (0x0001c754) list_recal_day_event_pane_t1

0xc963,	// (0x00026436) bg_button_pane_cp045

0x2c90,	// (0x0001c763) cntbar_detail_btn_pane_t1

0xde06,	// (0x000278d9) main_callh_pane_ParamLimits

0xde06,	// (0x000278d9) main_callh_pane

0xc963,	// (0x00026436) main_coverflow0_pane

0xc963,	// (0x00026436) main_wgtman_pane

0xa897,	// (0x0002436a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa897,	// (0x0002436a) main_fs_bigclock_unlock_btn_pane

0xad20,	// (0x000247f3) bg_button_pane_cp16

0xad30,	// (0x00024803) cell_tport_appsw_pane_g3

0xb403,	// (0x00024ed6) cf0_flow_pane_ParamLimits

0xb403,	// (0x00024ed6) cf0_flow_pane

0x2c9e,	// (0x0001c771) listscroll_cf0_pane

0x2ca9,	// (0x0001c77c) main_cf0_pane_g1

0xb412,	// (0x00024ee5) main_cf0_pane_t1_ParamLimits

0xb412,	// (0x00024ee5) main_cf0_pane_t1

0xb426,	// (0x00024ef9) main_cf0_pane_t2_ParamLimits

0xb426,	// (0x00024ef9) main_cf0_pane_t2

0x0001,

0xfd2d,	// (0x00029800) main_cf0_pane_t_ParamLimits

0xfd2d,	// (0x00029800) main_cf0_pane_t

0x2cbb,	// (0x0001c78e) scroll_pane_cp11

0xb43a,	// (0x00024f0d) cf0_flow_pane_g1

0xb442,	// (0x00024f15) cf0_flow_pane_g2

0x0001,

0xfd32,	// (0x00029805) cf0_flow_pane_g

0xb44a,	// (0x00024f1d) cf0_flow_pane_t1

0xc963,	// (0x00026436) main_call6_pane

0xc963,	// (0x00026436) main_calllock_pane

0x5bc2,	// (0x0001f695) call6_btn_grp_pane_ParamLimits

0x5bc2,	// (0x0001f695) call6_btn_grp_pane

0x5bd1,	// (0x0001f6a4) call6_pane_g1_ParamLimits

0x5bd1,	// (0x0001f6a4) call6_pane_g1

0x5be1,	// (0x0001f6b4) popup_call6_1st_window_ParamLimits

0x5be1,	// (0x0001f6b4) popup_call6_1st_window

0x5bef,	// (0x0001f6c2) popup_call6_2nd_window_ParamLimits

0x5bef,	// (0x0001f6c2) popup_call6_2nd_window

0x5bfd,	// (0x0001f6d0) cell_call6_btn_pane_ParamLimits

0x5bfd,	// (0x0001f6d0) cell_call6_btn_pane

0xd318,	// (0x00026deb) bg_popup_call2_in_pane_cp03

0x2cc6,	// (0x0001c799) popup_call6_1st_window_g1

0x2cce,	// (0x0001c7a1) popup_call6_1st_window_g2

0x2cd6,	// (0x0001c7a9) popup_call6_1st_window_g3

0x0002,

0xfd37,	// (0x0002980a) popup_call6_1st_window_g

0x2cde,	// (0x0001c7b1) popup_call6_1st_window_t1

0x2ced,	// (0x0001c7c0) popup_call6_1st_window_t2

0x2cfb,	// (0x0001c7ce) popup_call6_1st_window_t3

0x0002,

0xfd3e,	// (0x00029811) popup_call6_1st_window_t

0xd318,	// (0x00026deb) bg_popup_call2_in_pane_cp04

0x2d09,	// (0x0001c7dc) popup_call6_2nd_window_g1

0x2d11,	// (0x0001c7e4) popup_call6_2nd_window_g2

0x2d19,	// (0x0001c7ec) popup_call6_2nd_window_g3

0x0002,

0xfd45,	// (0x00029818) popup_call6_2nd_window_g

0x2d21,	// (0x0001c7f4) popup_call6_2nd_window_t1

0x4636,	// (0x0001e109) bg_button_pane_cp15

0x5c0c,	// (0x0001f6df) cell_call6_btn_pane_g1

0x5c15,	// (0x0001f6e8) cell_call6_btn_pane_t1

0xb458,	// (0x00024f2b) listscroll_wgtman_pane_ParamLimits

0xb458,	// (0x00024f2b) listscroll_wgtman_pane

0xb474,	// (0x00024f47) wgtman_btn_pane_ParamLimits

0xb474,	// (0x00024f47) wgtman_btn_pane

0xdacb,	// (0x0002759e) aid_scroll_copy1

0x2d48,	// (0x0001c81b) list_wgtman_pane

0xb4a9,	// (0x00024f7c) wgtman_btn_pane_g1_ParamLimits

0xb4a9,	// (0x00024f7c) wgtman_btn_pane_g1

0xb4d1,	// (0x00024fa4) wgtman_btn_pane_t1_ParamLimits

0xb4d1,	// (0x00024fa4) wgtman_btn_pane_t1

0x2d52,	// (0x0001c825) wgtman_btn_pane_t2_ParamLimits

0x2d52,	// (0x0001c825) wgtman_btn_pane_t2

0x0001,

0xfd4c,	// (0x0002981f) wgtman_btn_pane_t_ParamLimits

0xfd4c,	// (0x0002981f) wgtman_btn_pane_t

0xb508,	// (0x00024fdb) listrow_wgtman_pane_ParamLimits

0xb508,	// (0x00024fdb) listrow_wgtman_pane

0xb523,	// (0x00024ff6) listrow_wgtman_pane_g1

0xb530,	// (0x00025003) listrow_wgtman_pane_g2

0x0001,

0xfd51,	// (0x00029824) listrow_wgtman_pane_g

0xb54e,	// (0x00025021) listrow_wgtman_pane_t1

0xb566,	// (0x00025039) listrow_wgtman_pane_t2

0x0001,

0xfd56,	// (0x00029829) listrow_wgtman_pane_t

0xb58c,	// (0x0002505f) wait_bar_pane_cp09

0x2d69,	// (0x0001c83c) main_calllock_btn_pane

0x2d73,	// (0x0001c846) main_calllock_pane_g1

0xc963,	// (0x00026436) bg_button_pane_cp17

0x2d30,	// (0x0001c803) main_calllock_btn_pane_g1

0x2d7b,	// (0x0001c84e) main_calllock_btn_pane_t1

0xc963,	// (0x00026436) main_dialer3_pane

0xc963,	// (0x00026436) main_fmrd2_pane

0xd0a2,	// (0x00026b75) main_fs_bigclock_unlock_btn_pane_g1

0xb5a6,	// (0x00025079) main_fs_bigclock_unlock_btn_pane_t1

0xb5b4,	// (0x00025087) area_fmrd2_info_pane_ParamLimits

0xb5b4,	// (0x00025087) area_fmrd2_info_pane

0xb5c2,	// (0x00025095) area_fmrd2_visual_pane_ParamLimits

0xb5c2,	// (0x00025095) area_fmrd2_visual_pane

0xb5d0,	// (0x000250a3) fmrd2_indi_pane_ParamLimits

0xb5d0,	// (0x000250a3) fmrd2_indi_pane

0xb5dd,	// (0x000250b0) area_fmrd2_visual_pane_g1

0xb5e5,	// (0x000250b8) area_fmrd2_visual_pane_t1

0xb5f5,	// (0x000250c8) area_fmrd2_visual_pane_t2

0xb605,	// (0x000250d8) area_fmrd2_visual_pane_t3

0x0002,

0xfd60,	// (0x00029833) area_fmrd2_visual_pane_t

0xb615,	// (0x000250e8) area_fmrd2_info_pane_g1

0xb61d,	// (0x000250f0) area_fmrd2_info_pane_t1

0xb62d,	// (0x00025100) area_fmrd2_info_pane_t2

0xb63d,	// (0x00025110) area_fmrd2_info_pane_t3

0xb64d,	// (0x00025120) area_fmrd2_info_pane_t4

0x0003,

0xfd67,	// (0x0002983a) area_fmrd2_info_pane_t

0xb65b,	// (0x0002512e) fmrd2_indi_pane_t1

0xb66b,	// (0x0002513e) fmrd2_indi_pane_t2

0xb67b,	// (0x0002514e) fmrd2_indi_pane_t3

0x0002,

0xfd70,	// (0x00029843) fmrd2_indi_pane_t

0x1fa0,	// (0x0001ba73) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1fa0,	// (0x0001ba73) list_single_fs_bigclock_indicator_pane_g5

0x2051,	// (0x0001bb24) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2051,	// (0x0001bb24) list_single_fs_bigclock_indicator_pane_t5

0x0dbf,	// (0x0001a892) aid_cell_bcale_month_pane_ParamLimits

0x0dbf,	// (0x0001a892) aid_cell_bcale_month_pane

0x0dbf,	// (0x0001a892) bcale_month_pane_ParamLimits

0x0dbf,	// (0x0001a892) bcale_month_pane

0x1192,	// (0x0001ac65) bcale_preview_pane_ParamLimits

0x1192,	// (0x0001ac65) bcale_preview_pane

0x2ac7,	// (0x0001c59a) list_single_fs_bigclock_pane_t1_ParamLimits

0x2ae6,	// (0x0001c5b9) list_single_fs_bigclock_pane_t2_ParamLimits

0x2ae6,	// (0x0001c5b9) list_single_fs_bigclock_pane_t2

0x0001,

0xfceb,	// (0x000297be) list_single_fs_bigclock_pane_t_ParamLimits

0xfceb,	// (0x000297be) list_single_fs_bigclock_pane_t

0xb59e,	// (0x00025071) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd5b,	// (0x0002982e) main_fs_bigclock_unlock_btn_pane_g

0xb689,	// (0x0002515c) aid_dia3_key_size_ParamLimits

0xb689,	// (0x0002515c) aid_dia3_key_size

0xb695,	// (0x00025168) aid_dia3_listrow_size_ParamLimits

0xb695,	// (0x00025168) aid_dia3_listrow_size

0xb6a5,	// (0x00025178) dia3_keypad_fun_pane_ParamLimits

0xb6a5,	// (0x00025178) dia3_keypad_fun_pane

0xb6b7,	// (0x0002518a) dia3_keypad_num_pane_ParamLimits

0xb6b7,	// (0x0002518a) dia3_keypad_num_pane

0xb6c9,	// (0x0002519c) dia3_listscroll_pane_ParamLimits

0xb6c9,	// (0x0002519c) dia3_listscroll_pane

0xb6d7,	// (0x000251aa) dia3_numentry_pane_ParamLimits

0xb6d7,	// (0x000251aa) dia3_numentry_pane

0x2d8a,	// (0x0001c85d) dia3_list_pane

0x2d95,	// (0x0001c868) scroll_pane_cp12

0xc963,	// (0x00026436) bg_dia3_numentry_pane

0xb6e5,	// (0x000251b8) dia3_numentry_pane_t1

0xb6f4,	// (0x000251c7) cell_dia3_key_num_pane

0xb6fc,	// (0x000251cf) cell_dia3_key0_fun_pane_ParamLimits

0xb6fc,	// (0x000251cf) cell_dia3_key0_fun_pane

0xb709,	// (0x000251dc) cell_dia3_key1_fun_pane_ParamLimits

0xb709,	// (0x000251dc) cell_dia3_key1_fun_pane

0xb716,	// (0x000251e9) dia3_listrow_pane

0x1cf3,	// (0x0001b7c6) bg_dia3_numentry_pane_g1

0xc963,	// (0x00026436) bg_button_pane_cp21

0x2da0,	// (0x0001c873) cell_dia3_key_num_pane_t1

0x2dae,	// (0x0001c881) cell_dia3_key_num_pane_t2

0x2dbd,	// (0x0001c890) cell_dia3_key_num_pane_t3

0x2dcc,	// (0x0001c89f) cell_dia3_key_num_pane_t4

0x0003,

0xfd77,	// (0x0002984a) cell_dia3_key_num_pane_t

0xc963,	// (0x00026436) bg_button_pane_cp19

0xb723,	// (0x000251f6) cell_dia3_key0_fun_pane_g1

0xc963,	// (0x00026436) bg_button_pane_cp20

0xb72b,	// (0x000251fe) cell_dia3_key1_fun_pane_g1

0x2c01,	// (0x0001c6d4) area_left_week_number_pane

0x2c01,	// (0x0001c6d4) area_top_day_name_pane

0x2c01,	// (0x0001c6d4) frame_month_view_pane

0x2c01,	// (0x0001c6d4) grid_month_view_pane

0x2c01,	// (0x0001c6d4) cell_top_day_name_pane_ParamLimits

0x2c01,	// (0x0001c6d4) cell_top_day_name_pane

0x2c01,	// (0x0001c6d4) cell_area_left_week_number_pane_ParamLimits

0x2c01,	// (0x0001c6d4) cell_area_left_week_number_pane

0x2c01,	// (0x0001c6d4) cell_month_view_pane_ParamLimits

0x2c01,	// (0x0001c6d4) cell_month_view_pane

0x2bf5,	// (0x0001c6c8) frm_month_g1

0x2bf5,	// (0x0001c6c8) frm_month_g2

0x2bf5,	// (0x0001c6c8) frm_month_g3

0x2bf5,	// (0x0001c6c8) frm_month_g4

0x2bf5,	// (0x0001c6c8) frm_month_g5

0x2bf5,	// (0x0001c6c8) frm_month_g6

0x2bf5,	// (0x0001c6c8) frm_month_g7

0x2bf5,	// (0x0001c6c8) frm_month_g8

0x2bf5,	// (0x0001c6c8) frm_month_g9

0x2bf5,	// (0x0001c6c8) frm_month_g10

0x2bf5,	// (0x0001c6c8) frm_month_g11

0x2bf5,	// (0x0001c6c8) frm_month_g12

0x2bf5,	// (0x0001c6c8) frm_month_g13

0x2bf5,	// (0x0001c6c8) frm_month_g14

0x2bf5,	// (0x0001c6c8) frm_month_g15

0x2bf5,	// (0x0001c6c8) frm_month_g16

0x000f,

0xfd80,	// (0x00029853) frm_month_g

0x2ddb,	// (0x0001c8ae) cell_top_day_name_pane_t1

0x2bf5,	// (0x0001c6c8) cell_area_left_week_number_pane_g1

0x2ddb,	// (0x0001c8ae) cell_area_left_week_number_pane_t1

0x2bf5,	// (0x0001c6c8) cell_month_view_pane_g1

0x2ddb,	// (0x0001c8ae) cell_month_view_pane_t1

0xc963,	// (0x00026436) main_fps_pane

0x2262,	// (0x0001bd35) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2262,	// (0x0001bd35) cmail_ddmenu_btn02_pane_cp1

0x227e,	// (0x0001bd51) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x227e,	// (0x0001bd51) cmail_ddmenu_btn02_pane_cp2

0xb134,	// (0x00024c07) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb134,	// (0x00024c07) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc9e,	// (0x00029771) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc9e,	// (0x00029771) cmail_ddmenu_btn02_pane_g

0xb152,	// (0x00024c25) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb152,	// (0x00024c25) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca3,	// (0x00029776) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca3,	// (0x00029776) cmail_ddmenu_btn02_pane_t

0xb733,	// (0x00025206) fps_text_pane_ParamLimits

0xb733,	// (0x00025206) fps_text_pane

0xb740,	// (0x00025213) main_fps_pane_g1_ParamLimits

0xb740,	// (0x00025213) main_fps_pane_g1

0xb74e,	// (0x00025221) wait_bar_pane_cp010_ParamLimits

0xb74e,	// (0x00025221) wait_bar_pane_cp010

0xb75a,	// (0x0002522d) fps_text_pane_t1_ParamLimits

0xb75a,	// (0x0002522d) fps_text_pane_t1

0x91b9,	// (0x00022c8c) cam4_image_uncrop_pane_g1

0x91c2,	// (0x00022c95) cam4_image_uncrop_pane_g2

0x91cb,	// (0x00022c9e) cam4_image_uncrop_pane_g3

0x91d4,	// (0x00022ca7) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x000292b8) cam4_image_uncrop_pane_g

0xb716,	// (0x000251e9) dia3_listrow_pane_ParamLimits

0xc963,	// (0x00026436) main_phob2_pane

0xad02,	// (0x000247d5) cell_tport_appsw_pane_cp02_ParamLimits

0xad02,	// (0x000247d5) cell_tport_appsw_pane_cp02

0xad11,	// (0x000247e4) cell_tport_appsw_pane_cp03_ParamLimits

0xad11,	// (0x000247e4) cell_tport_appsw_pane_cp03

0xc963,	// (0x00026436) phob2_contact_card_pane

0xc963,	// (0x00026436) phob2_listscroll_pane

0x2ded,	// (0x0001c8c0) phob2_list_pane

0x2883,	// (0x0001c356) scroll_pane_cp034

0xb773,	// (0x00025246) phob2_cc_data_pane_ParamLimits

0xb773,	// (0x00025246) phob2_cc_data_pane

0xb78d,	// (0x00025260) phob2_cc_listscroll_pane_ParamLimits

0xb78d,	// (0x00025260) phob2_cc_listscroll_pane

0xb508,	// (0x00024fdb) list_double_large_graphic_phob2_pane_ParamLimits

0xb508,	// (0x00024fdb) list_double_large_graphic_phob2_pane

0xb7a7,	// (0x0002527a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb7a7,	// (0x0002527a) list_double_large_graphic_phob2_pane_g1

0xb7b4,	// (0x00025287) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb7b4,	// (0x00025287) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfda1,	// (0x00029874) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda1,	// (0x00029874) list_double_large_graphic_phob2_pane_g

0xb7da,	// (0x000252ad) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb7da,	// (0x000252ad) list_double_large_graphic_phob2_pane_t1

0xb7ef,	// (0x000252c2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb7ef,	// (0x000252c2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdaa,	// (0x0002987d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdaa,	// (0x0002987d) list_double_large_graphic_phob2_pane_t

0xd056,	// (0x00026b29) list_highlight_pane_cp024

0x2df5,	// (0x0001c8c8) phob2_cc_button_pane

0xb804,	// (0x000252d7) phob2_cc_data_pane_g1_ParamLimits

0xb804,	// (0x000252d7) phob2_cc_data_pane_g1

0xb813,	// (0x000252e6) phob2_cc_data_pane_g2_ParamLimits

0xb813,	// (0x000252e6) phob2_cc_data_pane_g2

0x0001,

0xfdaf,	// (0x00029882) phob2_cc_data_pane_g_ParamLimits

0xfdaf,	// (0x00029882) phob2_cc_data_pane_g

0xb822,	// (0x000252f5) phob2_cc_data_pane_t1_ParamLimits

0xb822,	// (0x000252f5) phob2_cc_data_pane_t1

0xb837,	// (0x0002530a) phob2_cc_data_pane_t2_ParamLimits

0xb837,	// (0x0002530a) phob2_cc_data_pane_t2

0xb84c,	// (0x0002531f) phob2_cc_data_pane_t3_ParamLimits

0xb84c,	// (0x0002531f) phob2_cc_data_pane_t3

0x0002,

0xfdb4,	// (0x00029887) phob2_cc_data_pane_t_ParamLimits

0xfdb4,	// (0x00029887) phob2_cc_data_pane_t

0x2dfd,	// (0x0001c8d0) phob2_cc_list_pane_ParamLimits

0x2dfd,	// (0x0001c8d0) phob2_cc_list_pane

0x13e9,	// (0x0001aebc) scroll_pane_cp035_ParamLimits

0x13e9,	// (0x0001aebc) scroll_pane_cp035

0xcb45,	// (0x00026618) bg_button_pane_cp033

0x2e09,	// (0x0001c8dc) phob2_cc_button_pane_g1

0x2e15,	// (0x0001c8e8) phob2_cc_button_pane_t1

0x2e2a,	// (0x0001c8fd) phob2_cc_button_pane_t2

0x0001,

0xfdbb,	// (0x0002988e) phob2_cc_button_pane_t

0xb861,	// (0x00025334) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb861,	// (0x00025334) list_double_large_graphic_phob2_cc_pane

0xb8cf,	// (0x000253a2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb8cf,	// (0x000253a2) list_double_large_graphic_phob2_cc_pane_g1

0xb8e0,	// (0x000253b3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb8e0,	// (0x000253b3) list_double_large_graphic_phob2_cc_pane_g2

0xb8ef,	// (0x000253c2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb8ef,	// (0x000253c2) list_double_large_graphic_phob2_cc_pane_g3

0xb8fe,	// (0x000253d1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb8fe,	// (0x000253d1) list_double_large_graphic_phob2_cc_pane_g4

0xb90f,	// (0x000253e2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb90f,	// (0x000253e2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc0,	// (0x00029893) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc0,	// (0x00029893) list_double_large_graphic_phob2_cc_pane_g

0xb91e,	// (0x000253f1) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb91e,	// (0x000253f1) list_double_large_graphic_phob2_cc_pane_t1

0xb947,	// (0x0002541a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb947,	// (0x0002541a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdcb,	// (0x0002989e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdcb,	// (0x0002989e) list_double_large_graphic_phob2_cc_pane_t

0x2e3c,	// (0x0001c90f) list_highlight_pane_cp025_ParamLimits

0x2e3c,	// (0x0001c90f) list_highlight_pane_cp025

0xcb45,	// (0x00026618) bg_button_pane_cp033_ParamLimits

0x2e09,	// (0x0001c8dc) phob2_cc_button_pane_g1_ParamLimits

0x2e15,	// (0x0001c8e8) phob2_cc_button_pane_t1_ParamLimits

0x2e2a,	// (0x0001c8fd) phob2_cc_button_pane_t2_ParamLimits

0xfdbb,	// (0x0002988e) phob2_cc_button_pane_t_ParamLimits

0x5c96,	// (0x0001f769) popup_wgtman_window

0x1165,	// (0x0001ac38) scroll_pane_cp038

0xb491,	// (0x00024f64) wgtman_btn_pane_cp_01_ParamLimits

0xb491,	// (0x00024f64) wgtman_btn_pane_cp_01

0x2e4a,	// (0x0001c91d) wgtman_content_pane

0x2e53,	// (0x0001c926) wgtman_heading_pane

0xc963,	// (0x00026436) bg_heading_pane_cp02

0x2e5c,	// (0x0001c92f) wgtman_heading_pane_g1

0x2e64,	// (0x0001c937) wgtman_heading_pane_t1

0x2e72,	// (0x0001c945) scroll_pane_cp036

0x2e7a,	// (0x0001c94d) wgtman_list_pane

0x2e82,	// (0x0001c955) wgtman_list_pane_t1_ParamLimits

0x2e82,	// (0x0001c955) wgtman_list_pane_t1

0x5407,	// (0x0001eeda) cam4_grid_pane

0x9914,	// (0x000233e7) bg_button_pane_cp015_ParamLimits

0x9929,	// (0x000233fc) bg_button_pane_cp016_ParamLimits

0x9935,	// (0x00023408) bg_button_pane_cp017_ParamLimits

0x998d,	// (0x00023460) popup_vitu2_query_window_g3_ParamLimits

0x998d,	// (0x00023460) popup_vitu2_query_window_g3

0x9a2e,	// (0x00023501) popup_vitu2_query_window_t6_ParamLimits

0x9a2e,	// (0x00023501) popup_vitu2_query_window_t6

0x9a59,	// (0x0002352c) popup_vitu2_query_window_t7_ParamLimits

0x9a59,	// (0x0002352c) popup_vitu2_query_window_t7

0x2c0d,	// (0x0001c6e0) cam4_grid_pane_g1

0x2c16,	// (0x0001c6e9) cam4_grid_pane_g2

0x2e9c,	// (0x0001c96f) cam4_grid_pane_g3

0x2ea5,	// (0x0001c978) cam4_grid_pane_g4

0x0003,

0xfdd0,	// (0x000298a3) cam4_grid_pane_g

0x6407,	// (0x0001feda) aid_placing_vt_slider_lsc_ParamLimits

0x6753,	// (0x00020226) vidtel_button_pane_ParamLimits

0x6753,	// (0x00020226) vidtel_button_pane

0xc963,	// (0x00026436) bg_button_pane_cp034

0x2eb0,	// (0x0001c983) vidtel_button_pane_g1

0x2eb8,	// (0x0001c98b) vidtel_button_pane_t1

0x12f4,	// (0x0001adc7) aid_size_vtel_slider_touch

0x13e9,	// (0x0001aebc) scroll_pane_cp039

0xa64f,	// (0x00024122) ncim_query_button_pane_cp01_ParamLimits

0xa66e,	// (0x00024141) ncimui_query_pane_g1_ParamLimits

0xcb45,	// (0x00026618) input_focus_pane_cp012_ParamLimits

0x1d31,	// (0x0001b804) ncim_query_entry_pane_t1_ParamLimits

0x13e9,	// (0x0001aebc) scroll_pane_cp039_ParamLimits

0xdbaf,	// (0x00027682) navi_pane_bcale_mc_g1

0xdbb7,	// (0x0002768a) navi_pane_bcale_mc_t1

0x22b2,	// (0x0001bd85) main_sp_fs_email_pane_g1

0x22be,	// (0x0001bd91) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x000296a9) main_sp_fs_email_pane_g

0x2712,	// (0x0001c1e5) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2712,	// (0x0001c1e5) list_single_cale_mrui_row_pane_g3

0xb172,	// (0x00024c45) list_single_recal_day_pane_g5_event_pane

0x2931,	// (0x0001c404) list_single_recal_day_pane_g7

0x2ece,	// (0x0001c9a1) list_recal_day_event_pane_cp01

0x2ed7,	// (0x0001c9aa) list_recal_vselct_arw_lo_pane_cp01

0x2edf,	// (0x0001c9b2) list_recal_vselct_arw_up_pane_cp01

0x2ee7,	// (0x0001c9ba) list_recal_vselct_pane_cp01

0x1340,	// (0x0001ae13) list_recal_day_event_pane_cp01_g1

0x2ef1,	// (0x0001c9c4) list_recal_day_event_pane_cp01_t1

0x2939,	// (0x0001c40c) list_single_recal_day_pane_t1_ParamLimits

0x294b,	// (0x0001c41e) list_single_recal_day_pane_t2_ParamLimits

0xfcb3,	// (0x00029786) list_single_recal_day_pane_t_ParamLimits

0xcfe9,	// (0x00026abc) bg_notes_pane_ParamLimits

0xd0de,	// (0x00026bb1) list_notes_pane_ParamLimits

0x5cff,	// (0x0001f7d2) scroll_pane_cp06_ParamLimits

0xd100,	// (0x00026bd3) main_notes_pane_ParamLimits

0xcb45,	// (0x00026618) main_welc_pane

0xb99e,	// (0x00025471) main_welc_body_pane_ParamLimits

0xb99e,	// (0x00025471) main_welc_body_pane

0xb9b8,	// (0x0002548b) main_welc_opti_pane_ParamLimits

0xb9b8,	// (0x0002548b) main_welc_opti_pane

0xba0d,	// (0x000254e0) main_welc_pane_t1_ParamLimits

0xba0d,	// (0x000254e0) main_welc_pane_t1

0xbbad,	// (0x00025680) main_welc_body_row_pane_ParamLimits

0xbbad,	// (0x00025680) main_welc_body_row_pane

0xd056,	// (0x00026b29) main_welc_opti_row_pane_ParamLimits

0xd056,	// (0x00026b29) main_welc_opti_row_pane

0x2f07,	// (0x0001c9da) main_welc_opti_row_pane_g1

0xbbd2,	// (0x000256a5) main_welc_opti_row_pane_t1

0x2f0f,	// (0x0001c9e2) main_welc_body_row_pane_t1

0x2bce,	// (0x0001c6a1) popup_notif_wgt_heading_pane

0x2be8,	// (0x0001c6bb) aid_size_list_notif_wgt_del_ParamLimits

0x2c1f,	// (0x0001c6f2) list_notif_wgt_row_pane_g1_ParamLimits

0x2c2b,	// (0x0001c6fe) list_notif_wgt_row_pane_g2_ParamLimits

0x2c3a,	// (0x0001c70d) list_notif_wgt_row_pane_g3_ParamLimits

0xfd1a,	// (0x000297ed) list_notif_wgt_row_pane_g_ParamLimits

0x2c47,	// (0x0001c71a) list_notif_wgt_row_pane_t1_ParamLimits

0x2c5d,	// (0x0001c730) list_notif_wgt_row_pane_t2_ParamLimits

0x2c6f,	// (0x0001c742) list_notif_wgt_row_pane_t3_ParamLimits

0xfd21,	// (0x000297f4) list_notif_wgt_row_pane_t_ParamLimits

0xb523,	// (0x00024ff6) listrow_wgtman_pane_g1_ParamLimits

0xb530,	// (0x00025003) listrow_wgtman_pane_g2_ParamLimits

0xfd51,	// (0x00029824) listrow_wgtman_pane_g_ParamLimits

0xb54e,	// (0x00025021) listrow_wgtman_pane_t1_ParamLimits

0xb566,	// (0x00025039) listrow_wgtman_pane_t2_ParamLimits

0xfd56,	// (0x00029829) listrow_wgtman_pane_t_ParamLimits

0xb58c,	// (0x0002505f) wait_bar_pane_cp09_ParamLimits

0xc963,	// (0x00026436) bg_popup_heading_pane_cp02

0x2f1e,	// (0x0001c9f1) popup_notif_wgt_heading_pane_g1

0x2f26,	// (0x0001c9f9) popup_notif_wgt_heading_pane_t1

0xc963,	// (0x00026436) main_vids_pane

0xc963,	// (0x00026436) vids_listscroll_pane

0xbbe1,	// (0x000256b4) scroll_pane_cp040

0xc963,	// (0x00026436) vids_list_pane

0xbbec,	// (0x000256bf) vids_list_double_pane_ParamLimits

0xbbec,	// (0x000256bf) vids_list_double_pane

0xbc03,	// (0x000256d6) vids_list_double_pane_g1

0xbc0c,	// (0x000256df) vids_list_double_pane_t1

0xbc1c,	// (0x000256ef) vids_list_double_pane_t2

0x0001,

0xfdef,	// (0x000298c2) vids_list_double_pane_t

0x4a4f,	// (0x0001e522) main_ncimui_pane_ParamLimits

0xa4a6,	// (0x00023f79) main_ncimui_pane_g1_ParamLimits

0xa4b2,	// (0x00023f85) main_ncimui_pane_g2_ParamLimits

0xa4b2,	// (0x00023f85) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x000295aa) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x000295aa) main_ncimui_pane_g

0xb9d1,	// (0x000254a4) main_welc_pane_g1_ParamLimits

0xb9d1,	// (0x000254a4) main_welc_pane_g1

0xb9dd,	// (0x000254b0) main_welc_pane_g2_ParamLimits

0xb9dd,	// (0x000254b0) main_welc_pane_g2

0x0003,

0xfdd9,	// (0x000298ac) main_welc_pane_g_ParamLimits

0xfdd9,	// (0x000298ac) main_welc_pane_g

0xcfe9,	// (0x00026abc) listscroll_mce_pane_ParamLimits

0xdd04,	// (0x000277d7) wait_bar_pane_cp10

0xef76,	// (0x00028a49) main_cale_day_pane_ParamLimits

0xef76,	// (0x00028a49) main_cale_week_pane_ParamLimits

0xcfe9,	// (0x00026abc) main_messa_pane_ParamLimits

0x8ded,	// (0x000228c0) main_clock2_btn_pane_ParamLimits

0x8ded,	// (0x000228c0) main_clock2_btn_pane

0x0794,	// (0x0001a267) main_clock2_btn_pane_cp01_ParamLimits

0x0794,	// (0x0001a267) main_clock2_btn_pane_cp01

0x26ac,	// (0x0001c17f) list_cale_mrui_pane_ParamLimits

0x2cb3,	// (0x0001c786) main_cf0_pane_g2

0x0001,

0xfd28,	// (0x000297fb) main_cf0_pane_g

0x2c01,	// (0x0001c6d4) area_left_week_number_pane_ParamLimits

0x2c01,	// (0x0001c6d4) area_top_day_name_pane_ParamLimits

0x2c01,	// (0x0001c6d4) frame_month_view_pane_ParamLimits

0x2c01,	// (0x0001c6d4) grid_month_view_pane_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g1_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g2_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g3_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g4_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g5_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g6_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g7_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g8_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g9_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g10_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g11_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g12_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g13_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g14_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g15_ParamLimits

0x2bf5,	// (0x0001c6c8) frm_month_g16_ParamLimits

0xfd80,	// (0x00029853) frm_month_g_ParamLimits

0x2ddb,	// (0x0001c8ae) cell_top_day_name_pane_t1_ParamLimits

0x2bf5,	// (0x0001c6c8) cell_area_left_week_number_pane_g1_ParamLimits

0x2ddb,	// (0x0001c8ae) cell_area_left_week_number_pane_t1_ParamLimits

0x2bf5,	// (0x0001c6c8) cell_month_view_pane_g1_ParamLimits

0x2ddb,	// (0x0001c8ae) cell_month_view_pane_t1_ParamLimits

0xcfe1,	// (0x00026ab4) main_clock2_btn_pane_g1

0x2f34,	// (0x0001ca07) main_clock2_btn_pane_t1

0xcb45,	// (0x00026618) listscroll_cmail_pane_ParamLimits

0x22b2,	// (0x0001bd85) main_sp_fs_email_pane_g1_ParamLimits

0x22be,	// (0x0001bd91) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x000296a9) main_sp_fs_email_pane_g_ParamLimits

0x28a1,	// (0x0001c374) list_recal_day_pane_ParamLimits

0x28b2,	// (0x0001c385) mian_recal_day_pane_t1

0xabf0,	// (0x000246c3) list_single_dyc_row_text_pane_t4_ParamLimits

0xabf0,	// (0x000246c3) list_single_dyc_row_text_pane_t4

0xac27,	// (0x000246fa) list_single_dyc_row_text_pane_t5_ParamLimits

0xac27,	// (0x000246fa) list_single_dyc_row_text_pane_t5

0x2386,	// (0x0001be59) list_single_dyc_row_text_pane_t6_ParamLimits

0x2386,	// (0x0001be59) list_single_dyc_row_text_pane_t6

0xd69c,	// (0x0002716f) aid_mgn_list_cale_time_pane

0x4a4f,	// (0x0001e522) main_gallery2_pane_ParamLimits

0x07aa,	// (0x0001a27d) main_clock2_pane_cp01_t1

0x07ba,	// (0x0001a28d) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x00029199) main_clock2_pane_cp01_t

0x602c,	// (0x0001faff) cale_week_scroll_pane_g16_ParamLimits

0x602c,	// (0x0001faff) cale_week_scroll_pane_g16

0xd318,	// (0x00026deb) vorec_slider_pane

0x2eb8,	// (0x0001c98b) vidtel_button_pane_t1_ParamLimits

0xb1cd,	// (0x00024ca0) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb1cd,	// (0x00024ca0) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb1cd,	// (0x00024ca0) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb1cd,	// (0x00024ca0) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd6,	// (0x000297a9) main_fs_bigclock_clock_pane_g_ParamLimits

0xb1d9,	// (0x00024cac) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb1ed,	// (0x00024cc0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcdf,	// (0x000297b2) main_fs_bigclock_clock_pane_t_ParamLimits

0x872e,	// (0x00022201) main_mup3_lyrics_pane_ParamLimits

0x872e,	// (0x00022201) main_mup3_lyrics_pane

0xbc2a,	// (0x000256fd) main_mup3_lyrics_pane_t1_ParamLimits

0xbc2a,	// (0x000256fd) main_mup3_lyrics_pane_t1

0x4e13,	// (0x0001e8e6) aid_main_mp4_pane_t1_area

0x4e1d,	// (0x0001e8f0) aid_main_mp4_pane_t2_area

0x4f22,	// (0x0001e9f5) main_mp4_pane_g7_ParamLimits

0x4f22,	// (0x0001e9f5) main_mp4_pane_g7

0x4f2e,	// (0x0001ea01) main_mp4_pane_g8_ParamLimits

0x4f2e,	// (0x0001ea01) main_mp4_pane_g8

0x52e5,	// (0x0001edb8) aid_call6_pane_g1_size

0xb8a3,	// (0x00025376) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb8a3,	// (0x00025376) list_double_large_graphic_phob2_other_pane

0xd201,	// (0x00026cd4) list_double_large_graphic_phob2_other_pane_g1

0xc963,	// (0x00026436) list_highlight_pane_cp026

0xcb45,	// (0x00026618) main_welc_pane_ParamLimits

0xaa85,	// (0x00024558) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xaa85,	// (0x00024558) main_sp_fs_ctrlbar_pane_g3

0xaa9d,	// (0x00024570) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xaa9d,	// (0x00024570) main_sp_fs_ctrlbar_pane_g4

0xaacf,	// (0x000245a2) toolbar2_fixed_button_pane_cp01

0xaada,	// (0x000245ad) toolbar2_fixed_button_pane_cp02

0xaae5,	// (0x000245b8) toolbar2_fixed_button_pane_cp03

0xb982,	// (0x00025455) list_welc_entry_pane_ParamLimits

0xb982,	// (0x00025455) list_welc_entry_pane

0xb9eb,	// (0x000254be) main_welc_pane_g3_ParamLimits

0xb9eb,	// (0x000254be) main_welc_pane_g3

0xba27,	// (0x000254fa) main_welc_pane_t2_ParamLimits

0xba27,	// (0x000254fa) main_welc_pane_t2

0xba3b,	// (0x0002550e) main_welc_pane_t3_ParamLimits

0xba3b,	// (0x0002550e) main_welc_pane_t3

0x0005,

0xfde2,	// (0x000298b5) main_welc_pane_t_ParamLimits

0xfde2,	// (0x000298b5) main_welc_pane_t

0xbb41,	// (0x00025614) welc_button_pane_ParamLimits

0xbb41,	// (0x00025614) welc_button_pane

0xbb9f,	// (0x00025672) welc_service_logo_pane_ParamLimits

0xbb9f,	// (0x00025672) welc_service_logo_pane

0xbc5c,	// (0x0002572f) list_single_welc_entry_pane_ParamLimits

0xbc5c,	// (0x0002572f) list_single_welc_entry_pane

0xbc6d,	// (0x00025740) list_single_welc_entry_pane_g1

0xbc75,	// (0x00025748) list_single_welc_entry_pane_t1

0xbc83,	// (0x00025756) list_single_welc_entry_pane_t2

0x0001,

0xfdf4,	// (0x000298c7) list_single_welc_entry_pane_t

0xc963,	// (0x00026436) bg_button_pane_cp035

0xbc91,	// (0x00025764) welc_button_pane_t1

0x2f50,	// (0x0001ca23) welc_service_logo_pane_g1

0x2f59,	// (0x0001ca2c) welc_service_logo_pane_g2

0x0001,

0xfdf9,	// (0x000298cc) welc_service_logo_pane_g

0x4636,	// (0x0001e109) main_int_radio_pane

0xd242,	// (0x00026d15) list_single_fs_dyc_pane_g1

0xb7c0,	// (0x00025293) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xb7c0,	// (0x00025293) list_double_large_graphic_phob2_pane_g3

0xb7cc,	// (0x0002529f) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xb7cc,	// (0x0002529f) list_double_large_graphic_phob2_pane_g4

0xbc9f,	// (0x00025772) main_int_radio1_pane_ParamLimits

0xbc9f,	// (0x00025772) main_int_radio1_pane

0x2f62,	// (0x0001ca35) find_pane_cp02

0xbcb1,	// (0x00025784) input_focus_pane_cp12_ParamLimits

0xbcb1,	// (0x00025784) input_focus_pane_cp12

0xbcbd,	// (0x00025790) input_focus_pane_cp13_ParamLimits

0xbcbd,	// (0x00025790) input_focus_pane_cp13

0xbcd5,	// (0x000257a8) input_focus_pane_cp14_ParamLimits

0xbcd5,	// (0x000257a8) input_focus_pane_cp14

0x2f6b,	// (0x0001ca3e) int_radio1_listscroll_pane

0xbced,	// (0x000257c0) main_int_radio1_pane_g1_ParamLimits

0xbced,	// (0x000257c0) main_int_radio1_pane_g1

0xbcfd,	// (0x000257d0) main_int_radio1_pane_t1_ParamLimits

0xbcfd,	// (0x000257d0) main_int_radio1_pane_t1

0xbd11,	// (0x000257e4) main_int_radio1_pane_t2_ParamLimits

0xbd11,	// (0x000257e4) main_int_radio1_pane_t2

0xbd25,	// (0x000257f8) main_int_radio1_pane_t3_ParamLimits

0xbd25,	// (0x000257f8) main_int_radio1_pane_t3

0xbd39,	// (0x0002580c) main_int_radio1_pane_t4_ParamLimits

0xbd39,	// (0x0002580c) main_int_radio1_pane_t4

0x2f75,	// (0x0001ca48) main_int_radio1_pane_t5_ParamLimits

0x2f75,	// (0x0001ca48) main_int_radio1_pane_t5

0xbd50,	// (0x00025823) main_int_radio1_pane_t6_ParamLimits

0xbd50,	// (0x00025823) main_int_radio1_pane_t6

0xbd62,	// (0x00025835) main_int_radio1_pane_t7_ParamLimits

0xbd62,	// (0x00025835) main_int_radio1_pane_t7

0xbd74,	// (0x00025847) main_int_radio1_pane_t8_ParamLimits

0xbd74,	// (0x00025847) main_int_radio1_pane_t8

0xbd88,	// (0x0002585b) main_int_radio1_pane_t9_ParamLimits

0xbd88,	// (0x0002585b) main_int_radio1_pane_t9

0xbd9a,	// (0x0002586d) main_int_radio1_pane_t10_ParamLimits

0xbd9a,	// (0x0002586d) main_int_radio1_pane_t10

0xbdcb,	// (0x0002589e) main_int_radio1_pane_t11_ParamLimits

0xbdcb,	// (0x0002589e) main_int_radio1_pane_t11

0xbdfc,	// (0x000258cf) main_int_radio1_pane_t12_ParamLimits

0xbdfc,	// (0x000258cf) main_int_radio1_pane_t12

0x000b,

0xfdfe,	// (0x000298d1) main_int_radio1_pane_t_ParamLimits

0xfdfe,	// (0x000298d1) main_int_radio1_pane_t

0x2f87,	// (0x0001ca5a) int_radio_list_pane

0x2883,	// (0x0001c356) scroll_pane_cp037

0x2f8f,	// (0x0001ca62) list_double_large_graphic_int_radio_pane_ParamLimits

0x2f8f,	// (0x0001ca62) list_double_large_graphic_int_radio_pane

0x2fa7,	// (0x0001ca7a) list_double_large_graphic_int_radio_pane_g1

0x2fb0,	// (0x0001ca83) list_double_large_graphic_int_radio_pane_t1

0x2fbe,	// (0x0001ca91) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe17,	// (0x000298ea) list_double_large_graphic_int_radio_pane_t

0xc963,	// (0x00026436) list_highlight_pane_cp027

0x2eff,	// (0x0001c9d2) main_button_pane_4

0xb9f7,	// (0x000254ca) main_welc_pane_g4_ParamLimits

0xb9f7,	// (0x000254ca) main_welc_pane_g4

0xba4d,	// (0x00025520) main_welc_pane_t4_ParamLimits

0xba4d,	// (0x00025520) main_welc_pane_t4

0xba61,	// (0x00025534) main_welc_pane_t5_ParamLimits

0xba61,	// (0x00025534) main_welc_pane_t5

0xba99,	// (0x0002556c) main_welc_pane_t6_ParamLimits

0xba99,	// (0x0002556c) main_welc_pane_t6

0xbb4f,	// (0x00025622) welc_button_pane_2_ParamLimits

0xbb4f,	// (0x00025622) welc_button_pane_2

0xbb67,	// (0x0002563a) welc_button_pane_3_ParamLimits

0xbb67,	// (0x0002563a) welc_button_pane_3

0x2eff,	// (0x0001c9d2) welc_button_pane_4

0xbb81,	// (0x00025654) welc_button_pane_5_ParamLimits

0xbb81,	// (0x00025654) welc_button_pane_5

0x43e2,	// (0x0001deb5) main_popup_welc_pane

0x2fe4,	// (0x0001cab7) main_welc_sk_g3

0x2fee,	// (0x0001cac1) main_welc_sk_g4

0x2ff8,	// (0x0001cacb) main_welc_sk_t3

0x3008,	// (0x0001cadb) main_welc_sk_t4

0x3018,	// (0x0001caeb) popup_welc_pane_t4

0x3026,	// (0x0001caf9) popup_welc_pane_t5

0x3034,	// (0x0001cb07) popup_welc_pane_t6

0x4636,	// (0x0001e109) main_acti_pane

0xc963,	// (0x00026436) main_sso_pane

0xbe13,	// (0x000258e6) sso_body_pane_ParamLimits

0xbe13,	// (0x000258e6) sso_body_pane

0xbe2d,	// (0x00025900) sso_logo_pane_ParamLimits

0xbe2d,	// (0x00025900) sso_logo_pane

0xbe5e,	// (0x00025931) sso_sk_pane_ParamLimits

0xbe5e,	// (0x00025931) sso_sk_pane

0x3072,	// (0x0001cb45) main_sso_logo_pane_g1

0xbe6b,	// (0x0002593e) sso_sk_pane_t1_ParamLimits

0xbe6b,	// (0x0002593e) sso_sk_pane_t1

0xbe7f,	// (0x00025952) sso_sk_pane_t2_ParamLimits

0xbe7f,	// (0x00025952) sso_sk_pane_t2

0x0001,

0xfe1c,	// (0x000298ef) sso_sk_pane_t_ParamLimits

0xfe1c,	// (0x000298ef) sso_sk_pane_t

0x307b,	// (0x0001cb4e) aid_sso_gap

0x3084,	// (0x0001cb57) aid_sso_txt1

0x308e,	// (0x0001cb61) aid_sso_txt2

0x3098,	// (0x0001cb6b) aid_sso_txt3

0x0002,

0xfe21,	// (0x000298f4) aid_sso_txt

0x30a2,	// (0x0001cb75) aid_sso_widget

0xbedc,	// (0x000259af) sso_btn_pane_ParamLimits

0xbedc,	// (0x000259af) sso_btn_pane

0xbf62,	// (0x00025a35) sso_option_pane_ParamLimits

0xbf62,	// (0x00025a35) sso_option_pane

0xc00c,	// (0x00025adf) sso_query_pane_ParamLimits

0xc00c,	// (0x00025adf) sso_query_pane

0xc05c,	// (0x00025b2f) sso_query_pane_cp01_ParamLimits

0xc05c,	// (0x00025b2f) sso_query_pane_cp01

0xc0ac,	// (0x00025b7f) sso_t_hdr_pane_ParamLimits

0xc0ac,	// (0x00025b7f) sso_t_hdr_pane

0xc0d0,	// (0x00025ba3) sso_t_nml_pane_ParamLimits

0xc0d0,	// (0x00025ba3) sso_t_nml_pane

0xc120,	// (0x00025bf3) sso_t_sub_pane

0xbe3a,	// (0x0002590d) sso_popup_window_ParamLimits

0xbe3a,	// (0x0002590d) sso_popup_window

0xbe91,	// (0x00025964) sso_apps_pane_ParamLimits

0xbe91,	// (0x00025964) sso_apps_pane

0xbeb4,	// (0x00025987) sso_body_pane_g1

0xbebc,	// (0x0002598f) sso_body_pane_t1

0xbecc,	// (0x0002599f) sso_body_pane_t2

0x0001,

0xfe28,	// (0x000298fb) sso_body_pane_t

0xbf22,	// (0x000259f5) sso_btn_pane_cp01_ParamLimits

0xbf22,	// (0x000259f5) sso_btn_pane_cp01

0xbfde,	// (0x00025ab1) sso_prog_pane_ParamLimits

0xbfde,	// (0x00025ab1) sso_prog_pane

0xc145,	// (0x00025c18) sso_t_hdr_pane_t1_ParamLimits

0xc145,	// (0x00025c18) sso_t_hdr_pane_t1

0x30ac,	// (0x0001cb7f) input_focus_pane_cp10_ParamLimits

0x30ac,	// (0x0001cb7f) input_focus_pane_cp10

0x30c0,	// (0x0001cb93) sso_query_pane_t1_ParamLimits

0x30c0,	// (0x0001cb93) sso_query_pane_t1

0x30d3,	// (0x0001cba6) sso_query_pane_t2_ParamLimits

0x30d3,	// (0x0001cba6) sso_query_pane_t2

0x30ec,	// (0x0001cbbf) sso_query_pane_t3_ParamLimits

0x30ec,	// (0x0001cbbf) sso_query_pane_t3

0x3116,	// (0x0001cbe9) sso_query_pane_t4_ParamLimits

0x3116,	// (0x0001cbe9) sso_query_pane_t4

0x0003,

0xfe2d,	// (0x00029900) sso_query_pane_t_ParamLimits

0xfe2d,	// (0x00029900) sso_query_pane_t

0x2b61,	// (0x0001c634) bg_button_pane_cp22

0x2fcc,	// (0x0001ca9f) sso_btn_pane_t1

0xc15e,	// (0x00025c31) sso_t_nml_pane_t1_ParamLimits

0xc15e,	// (0x00025c31) sso_t_nml_pane_t1

0x313a,	// (0x0001cc0d) sso_option_row_pane_ParamLimits

0x313a,	// (0x0001cc0d) sso_option_row_pane

0x3147,	// (0x0001cc1a) sso_t_sub_pane_t1_ParamLimits

0x3147,	// (0x0001cc1a) sso_t_sub_pane_t1

0xcb45,	// (0x00026618) bg_popup_window_pane_cp11_ParamLimits

0xcb45,	// (0x00026618) bg_popup_window_pane_cp11

0x3164,	// (0x0001cc37) popup_sk_window_cp01_ParamLimits

0x3164,	// (0x0001cc37) popup_sk_window_cp01

0x3171,	// (0x0001cc44) sso_popup_body_pane_ParamLimits

0x3171,	// (0x0001cc44) sso_popup_body_pane

0x317e,	// (0x0001cc51) scroll_pane_cp21_ParamLimits

0x317e,	// (0x0001cc51) scroll_pane_cp21

0x318b,	// (0x0001cc5e) sso_popup_body_t_pane_ParamLimits

0x318b,	// (0x0001cc5e) sso_popup_body_t_pane

0x3198,	// (0x0001cc6b) sso_popup_body_t_hdr_pane_ParamLimits

0x3198,	// (0x0001cc6b) sso_popup_body_t_hdr_pane

0xc17b,	// (0x00025c4e) sso_popup_body_t_nml_pane_ParamLimits

0xc17b,	// (0x00025c4e) sso_popup_body_t_nml_pane

0xc199,	// (0x00025c6c) sso_popup_body_t_sub_pane_ParamLimits

0xc199,	// (0x00025c6c) sso_popup_body_t_sub_pane

0x31aa,	// (0x0001cc7d) sso_popup_body_t_hdr_pane_t1

0xc1bc,	// (0x00025c8f) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc1bc,	// (0x00025c8f) sso_popup_body_t_nml_pane_t1

0x31ba,	// (0x0001cc8d) sso_popup_body_t_sub_pane_t1_ParamLimits

0x31ba,	// (0x0001cc8d) sso_popup_body_t_sub_pane_t1

0xd0a2,	// (0x00026b75) sso_prog_pane_g1

0xc200,	// (0x00025cd3) sso_apps_pane_comp1_ParamLimits

0xc200,	// (0x00025cd3) sso_apps_pane_comp1

0x31df,	// (0x0001ccb2) sso_apps_pane_comp1_g1

0x31e7,	// (0x0001ccba) sso_apps_pane_comp1_t1

0x3203,	// (0x0001ccd6) sso_option_row_pane_g1

0x321b,	// (0x0001ccee) sso_option_row_pane_t1

0x24b1,	// (0x0001bf84) list_cmail_pane_ParamLimits

0xc963,	// (0x00026436) main_call7_pane

0xb970,	// (0x00025443) bg_welc_area_ParamLimits

0xb970,	// (0x00025443) bg_welc_area

0xbacf,	// (0x000255a2) sso_t_hdr_pane_a_t1_ParamLimits

0xbacf,	// (0x000255a2) sso_t_hdr_pane_a_t1

0xbae3,	// (0x000255b6) sso_t_nml_pane_a_t1_ParamLimits

0xbae3,	// (0x000255b6) sso_t_nml_pane_a_t1

0xbb0d,	// (0x000255e0) sso_t_sub_pane_a_t1_ParamLimits

0xbb0d,	// (0x000255e0) sso_t_sub_pane_a_t1

0xbb91,	// (0x00025664) welc_button_pane_cp01_ParamLimits

0xbb91,	// (0x00025664) welc_button_pane_cp01

0x2fcc,	// (0x0001ca9f) sso_btn_pane_t1_copy1

0x2fdb,	// (0x0001caae) welc_button_pane_2_comp1

0x3042,	// (0x0001cb15) sso_t_hdr_pane_p_t1

0x3052,	// (0x0001cb25) sso_t_nml_pane_p_t1

0x3062,	// (0x0001cb35) sso_t_sub_pane_p_t1

0xc963,	// (0x00026436) main_att_pane

0xc963,	// (0x00026436) main_vod_pane

0xc120,	// (0x00025bf3) sso_t_sub_pane_ParamLimits

0x31f5,	// (0x0001ccc8) input_focus_pane_cp10_t1

0x321b,	// (0x0001ccee) sso_option_row_pane_t1_ParamLimits

0xc21a,	// (0x00025ced) main_att_body_pane_ParamLimits

0xc21a,	// (0x00025ced) main_att_body_pane

0xc22e,	// (0x00025d01) att_btn_emg_pane_ParamLimits

0xc22e,	// (0x00025d01) att_btn_emg_pane

0xc246,	// (0x00025d19) att_btn_pane_ParamLimits

0xc246,	// (0x00025d19) att_btn_pane

0xc2ac,	// (0x00025d7f) att_btn_pane_cp01_ParamLimits

0xc2ac,	// (0x00025d7f) att_btn_pane_cp01

0xc2de,	// (0x00025db1) att_li_srv_pane_ParamLimits

0xc2de,	// (0x00025db1) att_li_srv_pane

0xc2f0,	// (0x00025dc3) att_opt_pane_ParamLimits

0xc2f0,	// (0x00025dc3) att_opt_pane

0xc334,	// (0x00025e07) att_query_pane_ParamLimits

0xc334,	// (0x00025e07) att_query_pane

0xc3a4,	// (0x00025e77) att_query_pane_cp01_ParamLimits

0xc3a4,	// (0x00025e77) att_query_pane_cp01

0xc3e8,	// (0x00025ebb) att_t_hdr_pane_ParamLimits

0xc3e8,	// (0x00025ebb) att_t_hdr_pane

0xc44e,	// (0x00025f21) att_t_nml_pane_ParamLimits

0xc44e,	// (0x00025f21) att_t_nml_pane

0xc4b6,	// (0x00025f89) att_t_nml_pane_cp01_ParamLimits

0xc4b6,	// (0x00025f89) att_t_nml_pane_cp01

0xc4da,	// (0x00025fad) att_t_nmlb_pane_ParamLimits

0xc4da,	// (0x00025fad) att_t_nmlb_pane

0xc53e,	// (0x00026011) att_term_pane_ParamLimits

0xc53e,	// (0x00026011) att_term_pane

0xc580,	// (0x00026053) main_att_body_pane_g1_ParamLimits

0xc580,	// (0x00026053) main_att_body_pane_g1

0x3237,	// (0x0001cd0a) att_t_hdr_pane_t1_ParamLimits

0x3237,	// (0x0001cd0a) att_t_hdr_pane_t1

0x3250,	// (0x0001cd23) att_t_nml_pane_t1_ParamLimits

0x3250,	// (0x0001cd23) att_t_nml_pane_t1

0x3275,	// (0x0001cd48) att_btn_pane_t1

0x2b61,	// (0x0001c634) bg_button_pane_cp23

0xb17c,	// (0x00024c4f) att_li_srv_row_pane_ParamLimits

0xb17c,	// (0x00024c4f) att_li_srv_row_pane

0x3284,	// (0x0001cd57) att_t_nmlb_pane_t1_ParamLimits

0x3284,	// (0x0001cd57) att_t_nmlb_pane_t1

0x32a0,	// (0x0001cd73) att_query_pane_t1

0x32af,	// (0x0001cd82) att_query_pane_t2

0x32be,	// (0x0001cd91) att_query_pane_t3

0x0002,

0xfe3b,	// (0x0002990e) att_query_pane_t

0x32cd,	// (0x0001cda0) input_focus_pane_cp11

0x32d6,	// (0x0001cda9) att_term_pane_t1_ParamLimits

0x32d6,	// (0x0001cda9) att_term_pane_t1

0xc963,	// (0x00026436) att_opt_row_pane

0x32f3,	// (0x0001cdc6) att_opt_row_pane_g1

0x32fb,	// (0x0001cdce) att_opt_row_pane_t1_ParamLimits

0x32fb,	// (0x0001cdce) att_opt_row_pane_t1

0xc5aa,	// (0x0002607d) att_li_srv_row_pane_g1

0xc5b2,	// (0x00026085) att_li_srv_row_pane_t1_ParamLimits

0xc5b2,	// (0x00026085) att_li_srv_row_pane_t1

0xc5b2,	// (0x00026085) att_li_srv_row_pane_t2_ParamLimits

0xc5b2,	// (0x00026085) att_li_srv_row_pane_t2

0x0001,

0xfe42,	// (0x00029915) att_li_srv_row_pane_t_ParamLimits

0xfe42,	// (0x00029915) att_li_srv_row_pane_t

0x3314,	// (0x0001cde7) att_btn_close_pane_g1

0xc963,	// (0x00026436) bg_button_pane_cp24

0xc5c7,	// (0x0002609a) main_vod_body_pane_ParamLimits

0xc5c7,	// (0x0002609a) main_vod_body_pane

0xc5d5,	// (0x000260a8) main_vod_body_pane_g1_ParamLimits

0xc5d5,	// (0x000260a8) main_vod_body_pane_g1

0xc605,	// (0x000260d8) scroll_pane_cp24_ParamLimits

0xc605,	// (0x000260d8) scroll_pane_cp24

0xc64d,	// (0x00026120) vod_btn_pane_ParamLimits

0xc64d,	// (0x00026120) vod_btn_pane

0xc68b,	// (0x0002615e) vod_det_pane_ParamLimits

0xc68b,	// (0x0002615e) vod_det_pane

0xc6b5,	// (0x00026188) vod_logo_g1_ParamLimits

0xc6b5,	// (0x00026188) vod_logo_g1

0xc6ef,	// (0x000261c2) vod_opt_pane_ParamLimits

0xc6ef,	// (0x000261c2) vod_opt_pane

0xc71f,	// (0x000261f2) vod_opt_pane_cp01_ParamLimits

0xc71f,	// (0x000261f2) vod_opt_pane_cp01

0xc747,	// (0x0002621a) vod_query_pane_ParamLimits

0xc747,	// (0x0002621a) vod_query_pane

0xc76f,	// (0x00026242) vod_query_pane_cp01_ParamLimits

0xc76f,	// (0x00026242) vod_query_pane_cp01

0xc77b,	// (0x0002624e) vod_t_nml_pane_ParamLimits

0xc77b,	// (0x0002624e) vod_t_nml_pane

0xc821,	// (0x000262f4) vod_t_nml_pane_cp01_ParamLimits

0xc821,	// (0x000262f4) vod_t_nml_pane_cp01

0xc859,	// (0x0002632c) vod_t_sub_pane_ParamLimits

0xc859,	// (0x0002632c) vod_t_sub_pane

0xc885,	// (0x00026358) vod_t_sub_pane_cp01_ParamLimits

0xc885,	// (0x00026358) vod_t_sub_pane_cp01

0x32cd,	// (0x0001cda0) vod_query_field_pane

0x331c,	// (0x0001cdef) vod_query_pane_t1

0x332b,	// (0x0001cdfe) bg_button_pane_cp25

0x2fcc,	// (0x0001ca9f) sso_btn_pane_t1_copy2

0xc8ad,	// (0x00026380) vod_t_nml_pane_t1_ParamLimits

0xc8ad,	// (0x00026380) vod_t_nml_pane_t1

0x3334,	// (0x0001ce07) vod_opt_row_pane_ParamLimits

0x3334,	// (0x0001ce07) vod_opt_row_pane

0x3346,	// (0x0001ce19) vod_t_sub_pane_t1_ParamLimits

0x3346,	// (0x0001ce19) vod_t_sub_pane_t1

0x335f,	// (0x0001ce32) vod_det_cell_pane_ParamLimits

0x335f,	// (0x0001ce32) vod_det_cell_pane

0xc963,	// (0x00026436) input_focus_pane_cp15

0x3370,	// (0x0001ce43) vod_query_field_pane_t1

0x337e,	// (0x0001ce51) vod_opt_row_pane_g1_ParamLimits

0x337e,	// (0x0001ce51) vod_opt_row_pane_g1

0x338a,	// (0x0001ce5d) vod_opt_row_pane_t1_ParamLimits

0x338a,	// (0x0001ce5d) vod_opt_row_pane_t1

0x33aa,	// (0x0001ce7d) vod_det_cell_field_pane

0x33b3,	// (0x0001ce86) vod_det_cell_pane_g1

0x33bb,	// (0x0001ce8e) vod_det_cell_pane_t1

0xc963,	// (0x00026436) input_focus_pane_cp16

0x33ca,	// (0x0001ce9d) vod_det_cell_field_pane_t1

0xc8e4,	// (0x000263b7) call7_btn_grp_pane_ParamLimits

0xc8e4,	// (0x000263b7) call7_btn_grp_pane

0xc8f3,	// (0x000263c6) call7_bubble_pane_ParamLimits

0xc8f3,	// (0x000263c6) call7_bubble_pane

0xc901,	// (0x000263d4) cell_call7_btn_pane_ParamLimits

0xc901,	// (0x000263d4) cell_call7_btn_pane

0xc910,	// (0x000263e3) call7_pane_g1_ParamLimits

0xc910,	// (0x000263e3) call7_pane_g1

0xc91f,	// (0x000263f2) call7_windows_conf_pane_ParamLimits

0xc91f,	// (0x000263f2) call7_windows_conf_pane

0xc939,	// (0x0002640c) popup_call7_1st_window_ParamLimits

0xc939,	// (0x0002640c) popup_call7_1st_window

0xc947,	// (0x0002641a) popup_call7_2nd_window_ParamLimits

0xc947,	// (0x0002641a) popup_call7_2nd_window

0xc955,	// (0x00026428) popup_call7_3rd_window_ParamLimits

0xc955,	// (0x00026428) popup_call7_3rd_window

0xc963,	// (0x00026436) bg_button_pane_cp26

0x2d30,	// (0x0001c803) cell_call7_btn_pane_g1

0x2d39,	// (0x0001c80c) cell_call7_btn_pane_t1

0xc963,	// (0x00026436) bg_popup_window_pane_cp12

0x33d8,	// (0x0001ceab) popup_call7_1st_window_g1

0x33e0,	// (0x0001ceb3) popup_call7_1st_window_g2

0x33e8,	// (0x0001cebb) popup_call7_1st_window_g3

0x0002,

0xfe47,	// (0x0002991a) popup_call7_1st_window_g

0x33f0,	// (0x0001cec3) popup_call7_1st_window_t1

0x33ff,	// (0x0001ced2) popup_call7_1st_window_t2

0x340d,	// (0x0001cee0) popup_call7_1st_window_t3

0x0002,

0xfe4e,	// (0x00029921) popup_call7_1st_window_t

0xc963,	// (0x00026436) bg_popup_window_pane_cp13

0x341b,	// (0x0001ceee) popup_call7_2nd_window_g1

0x3423,	// (0x0001cef6) popup_call7_2nd_window_g2

0x342b,	// (0x0001cefe) popup_call7_2nd_window_g3

0x0002,

0xfe55,	// (0x00029928) popup_call7_2nd_window_g

0x3433,	// (0x0001cf06) popup_call7_2nd_window_t1

0xc963,	// (0x00026436) bg_popup_window_pane_cp14

0x3442,	// (0x0001cf15) call7_list_conf_pane

0x344a,	// (0x0001cf1d) call7_list_conf_row_pane_ParamLimits

0x344a,	// (0x0001cf1d) call7_list_conf_row_pane

0x345d,	// (0x0001cf30) call7_list_conf_row_pane_g1

0x3465,	// (0x0001cf38) call7_list_conf_row_pane_g2

0x0001,

0xfe5c,	// (0x0002992f) call7_list_conf_row_pane_g

0x346d,	// (0x0001cf40) call7_list_conf_row_pane_t1

0xc963,	// (0x00026436) list_highlight_pane_cp22

0xbfb0,	// (0x00025a83) sso_option_pane_cp01_ParamLimits

0xbfb0,	// (0x00025a83) sso_option_pane_cp01

0xcfe9,	// (0x00026abc) msg_header_pane_ParamLimits

0xde88,	// (0x0002795b) bg_button_pane_cp01_ParamLimits

0xde9c,	// (0x0002796f) input_focus_pane_cp07_ParamLimits

0xab19,	// (0x000245ec) popup_email_progress_window

0xd0a2,	// (0x00026b75) popup_email_progress_window_g1

0x347b,	// (0x0001cf4e) popup_email_progress_window_g2

0x0001,

0xfe61,	// (0x00029934) popup_email_progress_window_g

0x3483,	// (0x0001cf56) popup_email_progress_window_t1

0xc963,	// (0x00026436) cmail_conv_pane

0x23d9,	// (0x0001beac) list_single_dyc_row_pane_g5_ParamLimits

0x23d9,	// (0x0001beac) list_single_dyc_row_pane_g5

0x23e5,	// (0x0001beb8) list_single_dyc_row_pane_g6_ParamLimits

0x23e5,	// (0x0001beb8) list_single_dyc_row_pane_g6

0x23fd,	// (0x0001bed0) list_single_dyc_row_pane_g7_ParamLimits

0x23fd,	// (0x0001bed0) list_single_dyc_row_pane_g7

0xb992,	// (0x00025465) main_button_pane_5_ParamLimits

0xb992,	// (0x00025465) main_button_pane_5

0xbe21,	// (0x000258f4) sso_emg_call_btn_pane_ParamLimits

0xbe21,	// (0x000258f4) sso_emg_call_btn_pane

0xc135,	// (0x00025c08) sso_t_sub_pane_cp01_ParamLimits

0xc135,	// (0x00025c08) sso_t_sub_pane_cp01

0x3203,	// (0x0001ccd6) sso_option_row_pane_g1_ParamLimits

0x320f,	// (0x0001cce2) sso_option_row_pane_g2_ParamLimits

0x320f,	// (0x0001cce2) sso_option_row_pane_g2

0x0001,

0xfe36,	// (0x00029909) sso_option_row_pane_g_ParamLimits

0xfe36,	// (0x00029909) sso_option_row_pane_g

0xc2c4,	// (0x00025d97) att_btn_pane_cp02_ParamLimits

0xc2c4,	// (0x00025d97) att_btn_pane_cp02

0x3491,	// (0x0001cf64) cmail_conv_hdr_pane

0x349a,	// (0x0001cf6d) list_cmail_conv_pane

0x34a4,	// (0x0001cf77) scroll_pane_cp31

0x34ac,	// (0x0001cf7f) cmail_conv_hdr_pane_t1

0x34ba,	// (0x0001cf8d) cmail_conv_hdr_pane_t2

0x0001,

0xfe66,	// (0x00029939) cmail_conv_hdr_pane_t

0x34c8,	// (0x0001cf9b) bubble_cmail_conv_pane_ParamLimits

0x34c8,	// (0x0001cf9b) bubble_cmail_conv_pane

0x34e0,	// (0x0001cfb3) aid_size_colorization_pane

0xd318,	// (0x00026deb) bg_bubble_cmail_conv_pane

0x34e8,	// (0x0001cfbb) body_bubble_cmail_conv_pane

0x34f0,	// (0x0001cfc3) bubble_cmail_conv_pane_g1

0x34f8,	// (0x0001cfcb) bubble_cmail_conv_pane_g2

0x3500,	// (0x0001cfd3) bubble_cmail_conv_pane_g3

0x0002,

0xfe6b,	// (0x0002993e) bubble_cmail_conv_pane_g

0x3508,	// (0x0001cfdb) bubble_cmail_conv_pane_t1

0x3516,	// (0x0001cfe9) bg_bubble_cmail_conv_pane_g1

0x351f,	// (0x0001cff2) bg_bubble_cmail_conv_pane_g2

0x3528,	// (0x0001cffb) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe72,	// (0x00029945) bg_bubble_cmail_conv_pane_g

0x3531,	// (0x0001d004) body_bubble_cmail_conv_pane_t1_ParamLimits

0x3531,	// (0x0001d004) body_bubble_cmail_conv_pane_t1

0x3548,	// (0x0001d01b) body_bubble_cmail_conv_pane_t2_ParamLimits

0x3548,	// (0x0001d01b) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe79,	// (0x0002994c) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe79,	// (0x0002994c) body_bubble_cmail_conv_pane_t

0xd056,	// (0x00026b29) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
