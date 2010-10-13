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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00044d85 };

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
0x11c8,	// (0x00045f4d) Screen

0x11d4,	// (0x00045f59) application_window

0x121a,	// (0x00045f9f) area_bottom_pane_ParamLimits

0x121a,	// (0x00045f9f) area_bottom_pane

0x1253,	// (0x00045fd8) area_top_pane_ParamLimits

0x1253,	// (0x00045fd8) area_top_pane

0xa627,	// (0x0004f3ac) call_video_uplink_pane_ParamLimits

0xa627,	// (0x0004f3ac) call_video_uplink_pane

0x12e1,	// (0x00046066) main_pane_ParamLimits

0x12e1,	// (0x00046066) main_pane

0xc0c9,	// (0x00050e4e) context_pane

0x4c6c,	// (0x000499f1) navi_pane

0x4c9e,	// (0x00049a23) popup_cale_events_window_ParamLimits

0x4c9e,	// (0x00049a23) popup_cale_events_window

0xc0dc,	// (0x00050e61) popup_mup_playback_window

0x4cb6,	// (0x00049a3b) signal_pane

0x1c95,	// (0x00046a1a) main_browser_pane

0x2569,	// (0x000472ee) main_burst_pane

0x49cc,	// (0x00049751) main_calc_pane

0xc069,	// (0x00050dee) main_cale_day_pane

0x1f6b,	// (0x00046cf0) main_cale_month_pane

0xc069,	// (0x00050dee) main_cale_week_pane

0x2569,	// (0x000472ee) main_call_pane

0x187b,	// (0x00046600) main_call_poc_pane

0x2569,	// (0x000472ee) main_camera_pane

0x2569,	// (0x000472ee) main_chi_dic_pane

0xaac4,	// (0x0004f849) main_clock_pane

0x187b,	// (0x00046600) main_fmradio_pane

0x2569,	// (0x000472ee) main_graph_messa_pane

0x187b,	// (0x00046600) main_help_pane

0x1c95,	// (0x00046a1a) main_im_pane

0x1ad6,	// (0x0004685b) main_image_pane_ParamLimits

0x1ad6,	// (0x0004685b) main_image_pane

0x187b,	// (0x00046600) main_location2_pane

0x2569,	// (0x000472ee) main_location_pane

0x1ad6,	// (0x0004685b) main_messa_pane

0x187b,	// (0x00046600) main_mp2_pane

0x2569,	// (0x000472ee) main_mp_pane

0x187b,	// (0x00046600) main_msg_pane

0x187b,	// (0x00046600) main_mup_eq_pane

0x187b,	// (0x00046600) main_mup_pane

0x1c95,	// (0x00046a1a) main_notes_pane

0x187b,	// (0x00046600) main_pec_pane

0x187b,	// (0x00046600) main_phob_pane

0x187b,	// (0x00046600) main_pinb_pane

0x187b,	// (0x00046600) main_postcard_pane

0x187b,	// (0x00046600) main_qdial_pane

0x2569,	// (0x000472ee) main_skin_pane

0x187b,	// (0x00046600) main_smil2_pane

0x2569,	// (0x000472ee) main_smil_pane

0x2569,	// (0x000472ee) main_video_pane

0x2569,	// (0x000472ee) main_video_tele_pane

0x1ad6,	// (0x0004685b) main_viewer_pane_ParamLimits

0x1ad6,	// (0x0004685b) main_viewer_pane

0x2569,	// (0x000472ee) main_vorec_pane

0x4a20,	// (0x000497a5) popup_blid_sat_info_window_ParamLimits

0x4a20,	// (0x000497a5) popup_blid_sat_info_window

0x4a78,	// (0x000497fd) popup_dyc_status_message_window_ParamLimits

0x4a78,	// (0x000497fd) popup_dyc_status_message_window

0x4a92,	// (0x00049817) popup_grid_large_graphic_window_ParamLimits

0x4a92,	// (0x00049817) popup_grid_large_graphic_window

0x4b4e,	// (0x000498d3) popup_loc_request_window_ParamLimits

0x4b4e,	// (0x000498d3) popup_loc_request_window

0x4c44,	// (0x000499c9) popup_wml_address_window_ParamLimits

0x4c44,	// (0x000499c9) popup_wml_address_window

0x4806,	// (0x0004958b) call_muted_g1

0x44fc,	// (0x00049281) popup_call_audio_conf_window_ParamLimits

0x44fc,	// (0x00049281) popup_call_audio_conf_window

0x481a,	// (0x0004959f) popup_call_audio_first_window_ParamLimits

0x481a,	// (0x0004959f) popup_call_audio_first_window

0x4890,	// (0x00049615) popup_call_audio_in_window_ParamLimits

0x4890,	// (0x00049615) popup_call_audio_in_window

0x48cc,	// (0x00049651) popup_call_audio_out_window_ParamLimits

0x48cc,	// (0x00049651) popup_call_audio_out_window

0x4906,	// (0x0004968b) popup_call_audio_second_window_ParamLimits

0x4906,	// (0x0004968b) popup_call_audio_second_window

0x495c,	// (0x000496e1) popup_call_audio_wait_window_ParamLimits

0x495c,	// (0x000496e1) popup_call_audio_wait_window

0x4991,	// (0x00049716) popup_number_entry_window_ParamLimits

0x4991,	// (0x00049716) popup_number_entry_window

0x1410,	// (0x00046195) bg_popup_call_pane_cp05_ParamLimits

0x1410,	// (0x00046195) bg_popup_call_pane_cp05

0x1430,	// (0x000461b5) popup_number_entry_window_t1

0x1443,	// (0x000461c8) popup_number_entry_window_t2

0x1455,	// (0x000461da) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00053dc5) popup_number_entry_window_t

0x149b,	// (0x00046220) text_title_cp2

0x14ae,	// (0x00046233) bg_popup_call_pane_cp_ParamLimits

0x14ae,	// (0x00046233) bg_popup_call_pane_cp

0x14bc,	// (0x00046241) call_thumbnail_pane

0x14c4,	// (0x00046249) popup_call_audio_in_window_g1_ParamLimits

0x14c4,	// (0x00046249) popup_call_audio_in_window_g1

0x14d0,	// (0x00046255) popup_call_audio_in_window_g2_ParamLimits

0x14d0,	// (0x00046255) popup_call_audio_in_window_g2

0x14dc,	// (0x00046261) popup_call_audio_in_window_g3_ParamLimits

0x14dc,	// (0x00046261) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00053dce) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00053dce) popup_call_audio_in_window_g

0x14e8,	// (0x0004626d) popup_call_audio_in_window_t1_ParamLimits

0x14e8,	// (0x0004626d) popup_call_audio_in_window_t1

0x1504,	// (0x00046289) popup_call_audio_in_window_t2_ParamLimits

0x1504,	// (0x00046289) popup_call_audio_in_window_t2

0x1520,	// (0x000462a5) popup_call_audio_in_window_t3_ParamLimits

0x1520,	// (0x000462a5) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00053dd5) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00053dd5) popup_call_audio_in_window_t

0x14ae,	// (0x00046233) bg_popup_call_pane_cp01_ParamLimits

0x14ae,	// (0x00046233) bg_popup_call_pane_cp01

0x14bc,	// (0x00046241) call_thumbnail_pane_cp02

0x1533,	// (0x000462b8) call_type_pane_cp022

0x153b,	// (0x000462c0) popup_call_audio_out_window_g1_ParamLimits

0x153b,	// (0x000462c0) popup_call_audio_out_window_g1

0x154d,	// (0x000462d2) popup_call_audio_out_window_g2_ParamLimits

0x154d,	// (0x000462d2) popup_call_audio_out_window_g2

0x1559,	// (0x000462de) popup_call_audio_out_window_g3_ParamLimits

0x1559,	// (0x000462de) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00053ddc) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00053ddc) popup_call_audio_out_window_g

0x156b,	// (0x000462f0) popup_call_audio_out_window_t1_ParamLimits

0x156b,	// (0x000462f0) popup_call_audio_out_window_t1

0x1583,	// (0x00046308) popup_call_audio_out_window_t2_ParamLimits

0x1583,	// (0x00046308) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00053de3) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00053de3) popup_call_audio_out_window_t

0x1598,	// (0x0004631d) bg_popup_call_pane_ParamLimits

0x1598,	// (0x0004631d) bg_popup_call_pane

0x161c,	// (0x000463a1) call_thumbnail_pane_cp_ParamLimits

0x161c,	// (0x000463a1) call_thumbnail_pane_cp

0x1640,	// (0x000463c5) call_type_pane_cp01_ParamLimits

0x1640,	// (0x000463c5) call_type_pane_cp01

0x1684,	// (0x00046409) popup_call_audio_first_window_g1_ParamLimits

0x1684,	// (0x00046409) popup_call_audio_first_window_g1

0x16d0,	// (0x00046455) popup_call_audio_first_window_g2_ParamLimits

0x16d0,	// (0x00046455) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00053de8) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00053de8) popup_call_audio_first_window_g

0x1714,	// (0x00046499) popup_call_audio_first_window_t1_ParamLimits

0x1714,	// (0x00046499) popup_call_audio_first_window_t1

0x17c0,	// (0x00046545) popup_call_audio_first_window_t4_ParamLimits

0x17c0,	// (0x00046545) popup_call_audio_first_window_t4

0x184c,	// (0x000465d1) popup_call_audio_first_window_t5_ParamLimits

0x184c,	// (0x000465d1) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00053ded) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00053ded) popup_call_audio_first_window_t

0x187b,	// (0x00046600) bg_popup_call_pane_cp02

0x1885,	// (0x0004660a) call_type_pane_cp023

0x188d,	// (0x00046612) popup_call_audio_wait_window_g1

0x1895,	// (0x0004661a) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00053df4) popup_call_audio_wait_window_g

0x189d,	// (0x00046622) popup_call_audio_wait_window_t3

0x18ab,	// (0x00046630) bg_popup_call_pane_cp03_ParamLimits

0x18ab,	// (0x00046630) bg_popup_call_pane_cp03

0x190b,	// (0x00046690) call_thumbnail_pane_cp011_ParamLimits

0x190b,	// (0x00046690) call_thumbnail_pane_cp011

0x1917,	// (0x0004669c) call_type_pane_cp034_ParamLimits

0x1917,	// (0x0004669c) call_type_pane_cp034

0x1953,	// (0x000466d8) popup_call_audio_second_window_g1_ParamLimits

0x1953,	// (0x000466d8) popup_call_audio_second_window_g1

0x198f,	// (0x00046714) popup_call_audio_second_window_g2_ParamLimits

0x198f,	// (0x00046714) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00053df9) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00053df9) popup_call_audio_second_window_g

0x19cb,	// (0x00046750) popup_call_audio_second_window_t1_ParamLimits

0x19cb,	// (0x00046750) popup_call_audio_second_window_t1

0x1a4c,	// (0x000467d1) popup_call_audio_second_window_t2_ParamLimits

0x1a4c,	// (0x000467d1) popup_call_audio_second_window_t2

0x1a82,	// (0x00046807) popup_call_audio_second_window_t3_ParamLimits

0x1a82,	// (0x00046807) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00053dfe) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00053dfe) popup_call_audio_second_window_t

0x187b,	// (0x00046600) bg_popup_call_pane_cp04

0x1ab8,	// (0x0004683d) list_conf_pane

0x1ac0,	// (0x00046845) popup_call_audio_conf_window_t1

0x1ace,	// (0x00046853) call_thumbnail_pane_g1

0x1ad6,	// (0x0004685b) bg_pinb_pane_ParamLimits

0x1ad6,	// (0x0004685b) bg_pinb_pane

0x1ae4,	// (0x00046869) find_pinb_pane

0x1ad6,	// (0x0004685b) listscroll_pinb_pane_ParamLimits

0x1ad6,	// (0x0004685b) listscroll_pinb_pane

0x1aee,	// (0x00046873) pinb_bg_pane_g1

0x1aee,	// (0x00046873) pinb_bg_pane_g2

0x1aee,	// (0x00046873) pinb_bg_pane_g3

0x1aee,	// (0x00046873) pinb_bg_pane_g4

0x1aee,	// (0x00046873) pinb_bg_pane_g5

0x1aee,	// (0x00046873) pinb_bg_pane_g6

0x1aee,	// (0x00046873) pinb_bg_pane_g7

0x1aee,	// (0x00046873) pinb_bg_pane_g8

0x1aee,	// (0x00046873) pinb_bg_pane_g9

0x1aee,	// (0x00046873) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00053e05) pinb_bg_pane_g

0x11e0,	// (0x00045f65) grid_pinb_pane

0x11e0,	// (0x00045f65) list_pinb_pane

0x13a4,	// (0x00046129) scroll_pane_cp01_ParamLimits

0x13a4,	// (0x00046129) scroll_pane_cp01

0x1af8,	// (0x0004687d) find_pinb_pane_g1_ParamLimits

0x1af8,	// (0x0004687d) find_pinb_pane_g1

0x1b10,	// (0x00046895) find_pinb_pane_t1

0x1b22,	// (0x000468a7) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00053e1f) find_pinb_pane_t

0x1b37,	// (0x000468bc) input_focus_pane_cp01_ParamLimits

0x1b37,	// (0x000468bc) input_focus_pane_cp01

0x1b43,	// (0x000468c8) cell_pinb_pane_ParamLimits

0x1b43,	// (0x000468c8) cell_pinb_pane

0x1b51,	// (0x000468d6) cell_pinb_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) cell_pinb_pane_g1

0x1b5f,	// (0x000468e4) cell_pinb_pane_g2_ParamLimits

0x1b5f,	// (0x000468e4) cell_pinb_pane_g2

0x1b5f,	// (0x000468e4) cell_pinb_pane_g3_ParamLimits

0x1b5f,	// (0x000468e4) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00053e24) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00053e24) cell_pinb_pane_g

0x187b,	// (0x00046600) grid_highlight_pane_cp01

0x1b43,	// (0x000468c8) list_pinb_item_pane_ParamLimits

0x1b43,	// (0x000468c8) list_pinb_item_pane

0x11e0,	// (0x00045f65) list_highlight_pane_cp02

0x1b6d,	// (0x000468f2) list_pinb_item_pane_g1_ParamLimits

0x1b6d,	// (0x000468f2) list_pinb_item_pane_g1

0x1b5f,	// (0x000468e4) list_pinb_item_pane_g2_ParamLimits

0x1b5f,	// (0x000468e4) list_pinb_item_pane_g2

0x1b51,	// (0x000468d6) list_pinb_item_pane_g3_ParamLimits

0x1b51,	// (0x000468d6) list_pinb_item_pane_g3

0x1b5f,	// (0x000468e4) list_pinb_item_pane_g4_ParamLimits

0x1b5f,	// (0x000468e4) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00053e2b) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00053e2b) list_pinb_item_pane_g

0x1b7b,	// (0x00046900) list_pinb_item_pane_t1_ParamLimits

0x1b7b,	// (0x00046900) list_pinb_item_pane_t1

0x1bad,	// (0x00046932) calc_display_pane

0x1bd2,	// (0x00046957) calc_paper_pane

0x1bf5,	// (0x0004697a) grid_calc_pane

0x11e0,	// (0x00045f65) bg_list_pane_cp01

0x1c23,	// (0x000469a8) clock_g1

0x1c23,	// (0x000469a8) clock_g2

0x0001,

0xf0af,	// (0x00053e34) clock_g

0x1c2d,	// (0x000469b2) clock_t1_ParamLimits

0x1c2d,	// (0x000469b2) clock_t1

0x1c41,	// (0x000469c6) clock_t2_ParamLimits

0x1c41,	// (0x000469c6) clock_t2

0x1c41,	// (0x000469c6) clock_t3_ParamLimits

0x1c41,	// (0x000469c6) clock_t3

0x1c41,	// (0x000469c6) clock_t4_ParamLimits

0x1c41,	// (0x000469c6) clock_t4

0x1c2d,	// (0x000469b2) clock_t5_ParamLimits

0x1c2d,	// (0x000469b2) clock_t5

0x1c41,	// (0x000469c6) clock_t6_ParamLimits

0x1c41,	// (0x000469c6) clock_t6

0x1c41,	// (0x000469c6) clock_t7_ParamLimits

0x1c41,	// (0x000469c6) clock_t7

0x1c41,	// (0x000469c6) clock_t8_ParamLimits

0x1c41,	// (0x000469c6) clock_t8

0x1c41,	// (0x000469c6) clock_t9_ParamLimits

0x1c41,	// (0x000469c6) clock_t9

0x0008,

0xf0b4,	// (0x00053e39) clock_t_ParamLimits

0xf0b4,	// (0x00053e39) clock_t

0x11e0,	// (0x00045f65) popup_clock_analogue_window_cp02

0x11e0,	// (0x00045f65) popup_clock_digital_window_cp01

0x187b,	// (0x00046600) listscroll_help_pane

0x187b,	// (0x00046600) phob_pre_status_pane

0x1c55,	// (0x000469da) grid_qdial_pane

0x1ad6,	// (0x0004685b) listscroll_mce_pane

0x1ad6,	// (0x0004685b) bg_notes_pane

0x1c5f,	// (0x000469e4) list_notes_pane

0x1c6d,	// (0x000469f2) scroll_pane_cp06

0x1c81,	// (0x00046a06) bg_calc_paper_pane

0xa64d,	// (0x0004f3d2) list_calc_pane

0x1c95,	// (0x00046a1a) bg_calc_display_pane

0x1ca1,	// (0x00046a26) calc_display_pane_t1

0x1cb6,	// (0x00046a3b) calc_display_pane_t2

0xa667,	// (0x0004f3ec) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00053e4c) calc_display_pane_t

0x1ccb,	// (0x00046a50) cell_calc_pane_ParamLimits

0x1ccb,	// (0x00046a50) cell_calc_pane

0x1d00,	// (0x00046a85) bg_calc_paper_pane_g1

0x1d0c,	// (0x00046a91) bg_calc_paper_pane_g2

0x1d18,	// (0x00046a9d) bg_calc_paper_pane_g3

0x1d24,	// (0x00046aa9) bg_calc_paper_pane_g4

0x1d30,	// (0x00046ab5) bg_calc_paper_pane_g5

0x1d3c,	// (0x00046ac1) bg_calc_paper_pane_g6

0x1d4b,	// (0x00046ad0) bg_calc_paper_pane_g7

0x1d5a,	// (0x00046adf) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00053e53) bg_calc_paper_pane_g

0x1d6d,	// (0x00046af2) calc_bg_paper_pane_g9

0x1d80,	// (0x00046b05) list_calc_item_pane_ParamLimits

0x1d80,	// (0x00046b05) list_calc_item_pane

0x1d98,	// (0x00046b1d) list_calc_item_pane_g1

0xa679,	// (0x0004f3fe) list_calc_item_pane_t1_ParamLimits

0xa679,	// (0x0004f3fe) list_calc_item_pane_t1

0x1da5,	// (0x00046b2a) list_calc_item_pane_t2_ParamLimits

0x1da5,	// (0x00046b2a) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00053e64) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00053e64) list_calc_item_pane_t

0x1aee,	// (0x00046873) cell_calc_pane_g1

0x1dd7,	// (0x00046b5c) grid_highlight_pane_cp02

0x1df9,	// (0x00046b7e) bg_calc_display_pane_g1

0x1e02,	// (0x00046b87) bg_calc_display_pane_g2

0x1e0c,	// (0x00046b91) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00053e6e) bg_calc_display_pane_g

0x1e15,	// (0x00046b9a) cell_qdial_pane_ParamLimits

0x1e15,	// (0x00046b9a) cell_qdial_pane

0x1e29,	// (0x00046bae) cell_qdial_pane_g1_ParamLimits

0x1e29,	// (0x00046bae) cell_qdial_pane_g1

0x1e3f,	// (0x00046bc4) cell_qdial_pane_g2_ParamLimits

0x1e3f,	// (0x00046bc4) cell_qdial_pane_g2

0x1e50,	// (0x00046bd5) cell_qdial_pane_g3_ParamLimits

0x1e50,	// (0x00046bd5) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00053e75) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00053e75) cell_qdial_pane_g

0x1e72,	// (0x00046bf7) cell_qdial_pane_t1_ParamLimits

0x1e72,	// (0x00046bf7) cell_qdial_pane_t1

0x1e8a,	// (0x00046c0f) cell_qdial_pane_t2_ParamLimits

0x1e8a,	// (0x00046c0f) cell_qdial_pane_t2

0x1e9d,	// (0x00046c22) cell_qdial_pane_t3_ParamLimits

0x1e9d,	// (0x00046c22) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00053e7e) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00053e7e) cell_qdial_pane_t

0x187b,	// (0x00046600) grid_highlight_pane_cp04

0x1eb0,	// (0x00046c35) thumbnail_qdial_pane_ParamLimits

0x1eb0,	// (0x00046c35) thumbnail_qdial_pane

0x1f0c,	// (0x00046c91) list_help_pane

0x1f15,	// (0x00046c9a) scroll_pane_cp02

0x1f1e,	// (0x00046ca3) help_list_pane_t1_ParamLimits

0x1f1e,	// (0x00046ca3) help_list_pane_t1

0xa68b,	// (0x0004f410) bg_notes_pane_g2

0xa693,	// (0x0004f418) bg_notes_pane_g3

0xa69b,	// (0x0004f420) notes_bg_pane_g1

0xa6a3,	// (0x0004f428) notes_bg_pane_g4

0xa6ab,	// (0x0004f430) notes_bg_pane_g5

0xa6b3,	// (0x0004f438) notes_bg_pane_g6

0xa6bb,	// (0x0004f440) notes_bg_pane_g7

0xa6c3,	// (0x0004f448) notes_bg_pane_g8

0xa6cb,	// (0x0004f450) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00053e9c) notes_bg_pane_g

0x1f3c,	// (0x00046cc1) list_notes_text_pane_ParamLimits

0x1f3c,	// (0x00046cc1) list_notes_text_pane

0x1f51,	// (0x00046cd6) list_notes_text_pane_g1

0x0873,	// (0x000455f8) list_notes_text_pane_t1

0x1f6b,	// (0x00046cf0) listscroll_cale_week_pane

0x1fa0,	// (0x00046d25) bg_cale_heading_pane

0x1fb8,	// (0x00046d3d) bg_cale_pane_cp01

0x1fd5,	// (0x00046d5a) cale_week_corner_pane

0x1ff4,	// (0x00046d79) cale_week_day_heading_pane

0x2011,	// (0x00046d96) cale_week_scroll_pane_g1

0x2024,	// (0x00046da9) cale_week_scroll_pane_g2

0x203c,	// (0x00046dc1) cale_week_scroll_pane_g3

0x2054,	// (0x00046dd9) cale_week_scroll_pane_g4

0x206c,	// (0x00046df1) cale_week_scroll_pane_g5

0x208c,	// (0x00046e11) cale_week_scroll_pane_g6

0x20ac,	// (0x00046e31) cale_week_scroll_pane_g7

0x20cc,	// (0x00046e51) cale_week_scroll_pane_g8

0x20f0,	// (0x00046e75) cale_week_scroll_pane_g9

0x2108,	// (0x00046e8d) cale_week_scroll_pane_g10

0x2120,	// (0x00046ea5) cale_week_scroll_pane_g11

0x2138,	// (0x00046ebd) cale_week_scroll_pane_g12

0x2150,	// (0x00046ed5) cale_week_scroll_pane_g13

0x2150,	// (0x00046ed5) cale_week_scroll_pane_g14

0x2150,	// (0x00046ed5) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00053eab) cale_week_scroll_pane_g

0x218c,	// (0x00046f11) cale_week_time_pane

0x21b0,	// (0x00046f35) grid_cale_week_pane

0x21e8,	// (0x00046f6d) scroll_pane_cp08

0x2205,	// (0x00046f8a) cell_cale_week_pane_ParamLimits

0x2205,	// (0x00046f8a) cell_cale_week_pane

0x2293,	// (0x00047018) cale_week_day_heading_pane_t1

0x22bd,	// (0x00047042) cale_week_day_heading_pane_t2

0x22ec,	// (0x00047071) cale_week_day_heading_pane_t3

0x231b,	// (0x000470a0) cale_week_day_heading_pane_t4

0x234a,	// (0x000470cf) cale_week_day_heading_pane_t5

0x2381,	// (0x00047106) cale_week_day_heading_pane_t6

0x23b8,	// (0x0004713d) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00053ecc) cale_week_day_heading_pane_t

0x23e2,	// (0x00047167) bg_cale_side_pane

0x23f0,	// (0x00047175) cale_week_time_pane_t1

0x240a,	// (0x0004718f) cale_week_time_pane_t2

0x2424,	// (0x000471a9) cale_week_time_pane_t3

0x243e,	// (0x000471c3) cale_week_time_pane_t4

0x2458,	// (0x000471dd) cale_week_time_pane_t5

0x2472,	// (0x000471f7) cale_week_time_pane_t6

0x248c,	// (0x00047211) cale_week_time_pane_t7

0x24a6,	// (0x0004722b) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00053edb) cale_week_time_pane_t

0x24c0,	// (0x00047245) cell_cale_week_pane_g2

0x24df,	// (0x00047264) cell_cale_week_pane_g3_ParamLimits

0x24df,	// (0x00047264) cell_cale_week_pane_g3

0x24f7,	// (0x0004727c) grid_highlight_pane_cp07

0x24ff,	// (0x00047284) listscroll_gms_pane

0x2509,	// (0x0004728e) grid_gms_pane

0x2512,	// (0x00047297) listscroll_gms_pane_g1

0x251a,	// (0x0004729f) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00053eec) listscroll_gms_pane_g

0x2522,	// (0x000472a7) scroll_pane_cp010

0x252d,	// (0x000472b2) cell_gms_pane_ParamLimits

0x252d,	// (0x000472b2) cell_gms_pane

0x2540,	// (0x000472c5) cell_gms_pane_g1

0x2548,	// (0x000472cd) cell_gms_pane_g2

0x1f51,	// (0x00046cd6) cell_gms_pane_g3

0x2550,	// (0x000472d5) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00053ef1) cell_gms_pane_g

0x2559,	// (0x000472de) grid_highlight_pane_cp09

0x478e,	// (0x00049513) phob_pre_status_pane_g1

0x4796,	// (0x0004951b) phob_pre_status_pane_g2

0x479e,	// (0x00049523) phob_pre_status_pane_g3

0x47a6,	// (0x0004952b) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x000542a0) phob_pre_status_pane_g

0x47b6,	// (0x0004953b) phob_pre_status_pane_t1

0x47c4,	// (0x00049549) phob_pre_status_pane_t2

0x47d4,	// (0x00049559) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x000542ab) phob_pre_status_pane_t

0x2569,	// (0x000472ee) bg_list_pane_cp05

0x2571,	// (0x000472f6) grid_vorec_pane

0x2579,	// (0x000472fe) vorec_t1

0x2587,	// (0x0004730c) vorec_t2

0x2595,	// (0x0004731a) vorec_t3

0x25a3,	// (0x00047328) vorec_t4

0xdbe5,	// (0x0005296a) vorec_t5

0x92ba,	// (0x0004e03f) vorec_t6

0x0004,

0xf175,	// (0x00053efa) vorec_t

0x92c8,	// (0x0004e04d) wait_bar_pane_cp01

0x25bf,	// (0x00047344) cell_vorec_pane_ParamLimits

0x25bf,	// (0x00047344) cell_vorec_pane

0xa6d3,	// (0x0004f458) cell_vorec_pane_g1

0x187b,	// (0x00046600) grid_highlight_pane_cp05

0x13a4,	// (0x00046129) cams_zoom_pane

0x13a4,	// (0x00046129) image_vga_pane

0x1b51,	// (0x000468d6) main_camera_pane_g1

0x1b51,	// (0x000468d6) main_camera_pane_g2

0x1b51,	// (0x000468d6) main_camera_pane_g3

0x1b51,	// (0x000468d6) main_camera_pane_g4

0x1b51,	// (0x000468d6) main_camera_pane_g5

0x1b51,	// (0x000468d6) main_camera_pane_g6

0x1b51,	// (0x000468d6) main_camera_pane_g7

0x0007,

0xf180,	// (0x00053f05) main_camera_pane_g

0x1c2d,	// (0x000469b2) main_camera_pane_t1

0x1c2d,	// (0x000469b2) main_camera_pane_t2

0x0001,

0xf191,	// (0x00053f16) main_camera_pane_t

0x25e6,	// (0x0004736b) cams_zoom_pane_cp_ParamLimits

0x25e6,	// (0x0004736b) cams_zoom_pane_cp

0x261a,	// (0x0004739f) image_cif_pane_ParamLimits

0x261a,	// (0x0004739f) image_cif_pane

0x11e0,	// (0x00045f65) image_subqcif_pane

0x262c,	// (0x000473b1) main_video_pane_g1_ParamLimits

0x262c,	// (0x000473b1) main_video_pane_g1

0x265a,	// (0x000473df) main_video_pane_g2_ParamLimits

0x265a,	// (0x000473df) main_video_pane_g2

0x2694,	// (0x00047419) main_video_pane_g3_ParamLimits

0x2694,	// (0x00047419) main_video_pane_g3

0x2694,	// (0x00047419) main_video_pane_g4_ParamLimits

0x2694,	// (0x00047419) main_video_pane_g4

0x26c8,	// (0x0004744d) main_video_pane_g5_ParamLimits

0x26c8,	// (0x0004744d) main_video_pane_g5

0x26d6,	// (0x0004745b) main_video_pane_g6_ParamLimits

0x26d6,	// (0x0004745b) main_video_pane_g6

0x0006,

0xf196,	// (0x00053f1b) main_video_pane_g_ParamLimits

0xf196,	// (0x00053f1b) main_video_pane_g

0x26fe,	// (0x00047483) main_video_pane_t1_ParamLimits

0x26fe,	// (0x00047483) main_video_pane_t1

0x1c23,	// (0x000469a8) cams_zoom_pane_g1

0x1c23,	// (0x000469a8) cams_zoom_pane_g2

0x1c23,	// (0x000469a8) cams_zoom_pane_g3

0x1c23,	// (0x000469a8) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00053f2a) cams_zoom_pane_g

0x13a4,	// (0x00046129) grid_cams_pane

0x13a4,	// (0x00046129) linegrid_cams_pane

0x2742,	// (0x000474c7) cell_cams_pane_ParamLimits

0x2742,	// (0x000474c7) cell_cams_pane

0x11e0,	// (0x00045f65) cams_burst_image_pane

0x1c23,	// (0x000469a8) cell_cams_pane_g1

0x11e0,	// (0x00045f65) grid_highlight_pane_cp03

0x1aee,	// (0x00046873) mp_bg_pane_g1

0x11e0,	// (0x00045f65) bg_list_pane_cp03

0x11e0,	// (0x00045f65) bg_mp_pane

0x11e0,	// (0x00045f65) grid_mp_pane

0x1c23,	// (0x000469a8) media_player_g1

0xa7e5,	// (0x0004f56a) media_player_t1

0xa7e5,	// (0x0004f56a) media_player_t2

0xa7e5,	// (0x0004f56a) media_player_t3

0xa7e5,	// (0x0004f56a) media_player_t4

0xa7e5,	// (0x0004f56a) media_player_t5

0xa7e5,	// (0x0004f56a) media_player_t6

0xa7e5,	// (0x0004f56a) media_player_t7

0x0006,

0xf505,	// (0x0005428a) media_player_t

0x11e0,	// (0x00045f65) wait_bar_pane_cp02

0xf4ea,	// (0x0005426f) main_usb_pane_t

0xaac4,	// (0x0004f849) cell_mp_pane

0x1aee,	// (0x00046873) cell_mp_pane_g1

0x187b,	// (0x00046600) grid_highlight_pane_cp06

0x2757,	// (0x000474dc) grid_skin_colour_pane

0x275f,	// (0x000474e4) list_highlight_pane_cp03

0x2767,	// (0x000474ec) skin_g1

0x276f,	// (0x000474f4) skin_t1

0x277e,	// (0x00047503) skin_t2

0x0001,

0xf1d3,	// (0x00053f58) skin_t

0x278c,	// (0x00047511) cell_skin_colour_pane_ParamLimits

0x278c,	// (0x00047511) cell_skin_colour_pane

0x27ac,	// (0x00047531) cell_skin_colour_pane_g1

0x2817,	// (0x0004759c) call_video_g1_ParamLimits

0x2817,	// (0x0004759c) call_video_g1

0x2833,	// (0x000475b8) call_video_g2_ParamLimits

0x2833,	// (0x000475b8) call_video_g2

0x0001,

0xf1d8,	// (0x00053f5d) call_video_g_ParamLimits

0xf1d8,	// (0x00053f5d) call_video_g

0x2885,	// (0x0004760a) call_video_uplink_pane_cp1_ParamLimits

0x2885,	// (0x0004760a) call_video_uplink_pane_cp1

0x28ea,	// (0x0004766f) call_video_uplink_pane_cp2

0x292c,	// (0x000476b1) video_down_crop_pane_ParamLimits

0x292c,	// (0x000476b1) video_down_crop_pane

0x2a23,	// (0x000477a8) video_down_pane_ParamLimits

0x2a23,	// (0x000477a8) video_down_pane

0x2b1a,	// (0x0004789f) video_down_subqcif_pane_ParamLimits

0x2b1a,	// (0x0004789f) video_down_subqcif_pane

0x2b32,	// (0x000478b7) video_down_subqcif_pane_cp_ParamLimits

0x2b32,	// (0x000478b7) video_down_subqcif_pane_cp

0x2b71,	// (0x000478f6) im_reading_pane_ParamLimits

0x2b71,	// (0x000478f6) im_reading_pane

0x2b83,	// (0x00047908) im_writing_pane_ParamLimits

0x2b83,	// (0x00047908) im_writing_pane

0x2ba1,	// (0x00047926) im_reading_pane_t1

0x2bda,	// (0x0004795f) list_im_pane

0x2beb,	// (0x00047970) scroll_pane_cp07

0x2c04,	// (0x00047989) im_writing_pane_t1_ParamLimits

0x2c04,	// (0x00047989) im_writing_pane_t1

0x2c19,	// (0x0004799e) im_writing_pane_t2_ParamLimits

0x2c19,	// (0x0004799e) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00053f67) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00053f67) im_writing_pane_t

0x187b,	// (0x00046600) input_focus_pane_cp04

0x187b,	// (0x00046600) input_focus_pane_cp05

0x2c36,	// (0x000479bb) list_im_single_pane_ParamLimits

0x2c36,	// (0x000479bb) list_im_single_pane

0x2c4a,	// (0x000479cf) list_single_im_pane_t1

0x2569,	// (0x000472ee) blid_accuracy_pane

0x2569,	// (0x000472ee) blid_compass_pane

0xc021,	// (0x00050da6) main_location_t1

0xc021,	// (0x00050da6) main_location_t2

0xc021,	// (0x00050da6) main_location_t3

0x0002,

0xf514,	// (0x00054299) main_location_t

0x187b,	// (0x00046600) aid_levels_location

0x1aee,	// (0x00046873) blid_accuracy_pane_g1

0x1aee,	// (0x00046873) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x00053fb6) blid_accuracy_pane_g

0x2c84,	// (0x00047a09) wml_content_pane

0x2cc2,	// (0x00047a47) wml_button_pane_ParamLimits

0x2cc2,	// (0x00047a47) wml_button_pane

0x2cd6,	// (0x00047a5b) wml_list_single_large_pane_ParamLimits

0x2cd6,	// (0x00047a5b) wml_list_single_large_pane

0x2ceb,	// (0x00047a70) wml_list_single_medium_pane_ParamLimits

0x2ceb,	// (0x00047a70) wml_list_single_medium_pane

0x2d01,	// (0x00047a86) wml_list_single_small_pane_ParamLimits

0x2d01,	// (0x00047a86) wml_list_single_small_pane

0x2d19,	// (0x00047a9e) wml_selection_box_pane_ParamLimits

0x2d19,	// (0x00047a9e) wml_selection_box_pane

0x2d2c,	// (0x00047ab1) wml_list_single_pane_t1

0x2d3b,	// (0x00047ac0) wml_list_single_medium_pane_t1

0x2d4a,	// (0x00047acf) wml_list_single_large_pane_t1

0x2d59,	// (0x00047ade) input_focus_pane_cp02_ParamLimits

0x2d59,	// (0x00047ade) input_focus_pane_cp02

0x2d6c,	// (0x00047af1) wml_selection_box_pane_g1

0x2d75,	// (0x00047afa) wml_selection_box_pane_t1_ParamLimits

0x2d75,	// (0x00047afa) wml_selection_box_pane_t1

0x1ad6,	// (0x0004685b) bg_wml_button_pane_ParamLimits

0x1ad6,	// (0x0004685b) bg_wml_button_pane

0x2d8d,	// (0x00047b12) wml_button_pane_g1

0x2d95,	// (0x00047b1a) wml_button_pane_t1

0x2d8d,	// (0x00047b12) wml_button_bg_pane_g1

0x2da5,	// (0x00047b2a) wml_button_bg_pane_g2

0x2dad,	// (0x00047b32) wml_button_bg_pane_g3

0x2db5,	// (0x00047b3a) wml_button_bg_pane_g4

0x2dbd,	// (0x00047b42) wml_button_bg_pane_g5

0x2dc5,	// (0x00047b4a) wml_button_bg_pane_g6

0x2dcd,	// (0x00047b52) wml_button_bg_pane_g7

0x2dd5,	// (0x00047b5a) wml_button_bg_pane_g8

0x2ddd,	// (0x00047b62) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00053f6c) wml_button_bg_pane_g

0x2de5,	// (0x00047b6a) bg_list_pane_cp02

0x2ded,	// (0x00047b72) mce_header_pane_ParamLimits

0x2ded,	// (0x00047b72) mce_header_pane

0x2e03,	// (0x00047b88) mce_icon_pane

0x2e03,	// (0x00047b88) mce_image_pane

0x2e0c,	// (0x00047b91) mce_text_pane_ParamLimits

0x2e0c,	// (0x00047b91) mce_text_pane

0x2e1f,	// (0x00047ba4) scroll_pane_cp03

0x2cba,	// (0x00047a3f) scroll_pane_cp04

0x2e29,	// (0x00047bae) scroll_pane_cp05_ParamLimits

0x2e29,	// (0x00047bae) scroll_pane_cp05

0x2e35,	// (0x00047bba) mce_header_field_pane_ParamLimits

0x2e35,	// (0x00047bba) mce_header_field_pane

0x2e4c,	// (0x00047bd1) mce_header_field_pane_2_ParamLimits

0x2e4c,	// (0x00047bd1) mce_header_field_pane_2

0x2e62,	// (0x00047be7) mce_header_field_pane_3

0x2e6a,	// (0x00047bef) list_single_mce_message_pane_ParamLimits

0x2e6a,	// (0x00047bef) list_single_mce_message_pane

0x2e7f,	// (0x00047c04) list_single_mce_smart_pane_ParamLimits

0x2e7f,	// (0x00047c04) list_single_mce_smart_pane

0x2e9f,	// (0x00047c24) input_focus_pane_cp03

0x2ea8,	// (0x00047c2d) list_header_data_pane

0x2eb0,	// (0x00047c35) mce_header_field_pane_t1

0x2ec0,	// (0x00047c45) list_single_mce_header_pane_ParamLimits

0x2ec0,	// (0x00047c45) list_single_mce_header_pane

0x2ed4,	// (0x00047c59) list_single_mce_header_pane_t1

0x2ee3,	// (0x00047c68) list_single_mce_message_pane_g1

0x2eeb,	// (0x00047c70) list_single_mce_message_pane_t1

0x2f1f,	// (0x00047ca4) bg_cale_heading_pane_cp01_ParamLimits

0x2f1f,	// (0x00047ca4) bg_cale_heading_pane_cp01

0x2f59,	// (0x00047cde) bg_cale_pane_cp02_ParamLimits

0x2f59,	// (0x00047cde) bg_cale_pane_cp02

0x2f86,	// (0x00047d0b) cale_month_corner_pane

0x2fa5,	// (0x00047d2a) cale_month_day_heading_pane_ParamLimits

0x2fa5,	// (0x00047d2a) cale_month_day_heading_pane

0x2ff7,	// (0x00047d7c) cale_month_pane_g1_ParamLimits

0x2ff7,	// (0x00047d7c) cale_month_pane_g1

0x3026,	// (0x00047dab) cale_month_pane_g2_ParamLimits

0x3026,	// (0x00047dab) cale_month_pane_g2

0x3056,	// (0x00047ddb) cale_month_pane_g3_ParamLimits

0x3056,	// (0x00047ddb) cale_month_pane_g3

0x3092,	// (0x00047e17) cale_month_pane_g4_ParamLimits

0x3092,	// (0x00047e17) cale_month_pane_g4

0x30ce,	// (0x00047e53) cale_month_pane_g5_ParamLimits

0x30ce,	// (0x00047e53) cale_month_pane_g5

0x3116,	// (0x00047e9b) cale_month_pane_g6_ParamLimits

0x3116,	// (0x00047e9b) cale_month_pane_g6

0x3162,	// (0x00047ee7) cale_month_pane_g7_ParamLimits

0x3162,	// (0x00047ee7) cale_month_pane_g7

0x31b6,	// (0x00047f3b) cale_month_pane_g8_ParamLimits

0x31b6,	// (0x00047f3b) cale_month_pane_g8

0x320a,	// (0x00047f8f) cale_month_pane_g9_ParamLimits

0x320a,	// (0x00047f8f) cale_month_pane_g9

0x325c,	// (0x00047fe1) cale_month_pane_g10_ParamLimits

0x325c,	// (0x00047fe1) cale_month_pane_g10

0x32ae,	// (0x00048033) cale_month_pane_g11_ParamLimits

0x32ae,	// (0x00048033) cale_month_pane_g11

0x3300,	// (0x00048085) cale_month_pane_g12_ParamLimits

0x3300,	// (0x00048085) cale_month_pane_g12

0x3352,	// (0x000480d7) cale_month_pane_g13_ParamLimits

0x3352,	// (0x000480d7) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00053f7f) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00053f7f) cale_month_pane_g

0x33b6,	// (0x0004813b) cale_month_week_pane

0x33da,	// (0x0004815f) grid_cale_month_pane_ParamLimits

0x33da,	// (0x0004815f) grid_cale_month_pane

0x3423,	// (0x000481a8) cale_month_day_heading_pane_t1

0x34a9,	// (0x0004822e) cale_month_day_heading_pane_t2

0x3522,	// (0x000482a7) cale_month_day_heading_pane_t3

0x359b,	// (0x00048320) cale_month_day_heading_pane_t4

0x361c,	// (0x000483a1) cale_month_day_heading_pane_t5

0x36a5,	// (0x0004842a) cale_month_day_heading_pane_t6

0x372e,	// (0x000484b3) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00053f9a) cale_month_day_heading_pane_t

0x23e2,	// (0x00047167) bg_cale_side_pane_cp01

0x37bf,	// (0x00048544) cale_month_week_pane_t1

0x37d8,	// (0x0004855d) cale_month_week_pane_t2

0x37f1,	// (0x00048576) cale_month_week_pane_t3

0x380a,	// (0x0004858f) cale_month_week_pane_t4

0x3823,	// (0x000485a8) cale_month_week_pane_t5

0x383c,	// (0x000485c1) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00053fa9) cale_month_week_pane_t

0x3855,	// (0x000485da) cell_cale_month_pane_ParamLimits

0x3855,	// (0x000485da) cell_cale_month_pane

0xa6dd,	// (0x0004f462) cell_cale_month_pane_g1

0x3983,	// (0x00048708) cell_cale_month_pane_t1_ParamLimits

0x3983,	// (0x00048708) cell_cale_month_pane_t1

0x24f7,	// (0x0004727c) grid_highlight_pane_cp08

0x1aee,	// (0x00046873) main_smil_g1

0x39af,	// (0x00048734) smil_status_pane

0x39b8,	// (0x0004873d) smil_text_pane

0xbf39,	// (0x00050cbe) bg_popup_call3_rect_pane_g8

0xbf41,	// (0x00050cc6) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x00054232) bg_popup_call3_rect_pane_g

0xc13e,	// (0x00050ec3) smil_status_volume_pane_g1

0x39cc,	// (0x00048751) smil_status_pane_t1

0xc171,	// (0x00050ef6) volume_smil_pane

0x39e3,	// (0x00048768) list_smil_text_pane

0x39ed,	// (0x00048772) scroll_pane_cp011

0x39f8,	// (0x0004877d) smil_text_list_pane_t1_ParamLimits

0x39f8,	// (0x0004877d) smil_text_list_pane_t1

0xa6e9,	// (0x0004f46e) aid_volume_smil_ParamLimits

0xa6e9,	// (0x0004f46e) aid_volume_smil

0x1aee,	// (0x00046873) smil_volume_pane_g1

0x1aee,	// (0x00046873) smil_volume_pane_g2

0x0001,

0xf231,	// (0x00053fb6) smil_volume_pane_g

0x1f6b,	// (0x00046cf0) listscroll_cale_day_pane

0x3a34,	// (0x000487b9) bg_cale_pane

0x3a4c,	// (0x000487d1) list_cale_pane

0x3a6f,	// (0x000487f4) scroll_pane_cp09

0x3a80,	// (0x00048805) cale_bg_pane_g1

0x3a88,	// (0x0004880d) cale_bg_pane_g2

0x3a90,	// (0x00048815) cale_bg_pane_g3

0x3a98,	// (0x0004881d) cale_bg_pane_g4

0x3aa0,	// (0x00048825) cale_bg_pane_g5

0x3aa8,	// (0x0004882d) cale_bg_pane_g6

0x3ab0,	// (0x00048835) cale_bg_pane_g7

0x3ab8,	// (0x0004883d) cale_bg_pane_g8

0x3ac0,	// (0x00048845) cale_bg_pane_g9

0x0008,

0xf236,	// (0x00053fbb) cale_bg_pane_g

0x3ad0,	// (0x00048855) list_cale_time_pane_ParamLimits

0x3ad0,	// (0x00048855) list_cale_time_pane

0x3ae5,	// (0x0004886a) list_cale_time_pane_g1_ParamLimits

0x3ae5,	// (0x0004886a) list_cale_time_pane_g1

0x3af1,	// (0x00048876) list_cale_time_pane_g2_ParamLimits

0x3af1,	// (0x00048876) list_cale_time_pane_g2

0x3afe,	// (0x00048883) list_cale_time_pane_g3_ParamLimits

0x3afe,	// (0x00048883) list_cale_time_pane_g3

0x3b0c,	// (0x00048891) list_cale_time_pane_g4_ParamLimits

0x3b0c,	// (0x00048891) list_cale_time_pane_g4

0x3b1a,	// (0x0004889f) list_cale_time_pane_g5_ParamLimits

0x3b1a,	// (0x0004889f) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x00053fce) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x00053fce) list_cale_time_pane_g

0x3b35,	// (0x000488ba) list_cale_time_pane_t1_ParamLimits

0x3b35,	// (0x000488ba) list_cale_time_pane_t1

0x3b5d,	// (0x000488e2) list_cale_time_pane_t2_ParamLimits

0x3b5d,	// (0x000488e2) list_cale_time_pane_t2

0x3e01,	// (0x00048b86) aid_blid_cardinal_pane

0x3e3f,	// (0x00048bc4) compass_pane_t4

0x3b85,	// (0x0004890a) list_cale_time_pane_t4_ParamLimits

0x3b85,	// (0x0004890a) list_cale_time_pane_t4

0x3e4d,	// (0x00048bd2) compass_pane_t5

0x3e5b,	// (0x00048be0) compass_pane_t6

0x3e69,	// (0x00048bee) compass_pane_t7

0xac09,	// (0x0004f98e) navi_pane_cc_t1

0xadf8,	// (0x0004fb7d) aid_phob_thumbnail_center_pane

0x41e1,	// (0x00048f66) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x00053fdb) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x00053fdb) list_cale_time_pane_t

0x14ae,	// (0x00046233) bg_popup_window_pane_cp02_ParamLimits

0x14ae,	// (0x00046233) bg_popup_window_pane_cp02

0xa70b,	// (0x0004f490) heading_pane_cp01_ParamLimits

0xa70b,	// (0x0004f490) heading_pane_cp01

0xa717,	// (0x0004f49c) loc_req_pane_ParamLimits

0xa717,	// (0x0004f49c) loc_req_pane

0xa727,	// (0x0004f4ac) loc_type_pane_ParamLimits

0xa727,	// (0x0004f4ac) loc_type_pane

0xa739,	// (0x0004f4be) loc_type_pane_t1_ParamLimits

0xa739,	// (0x0004f4be) loc_type_pane_t1

0xa74b,	// (0x0004f4d0) loc_type_pane_t2_ParamLimits

0xa74b,	// (0x0004f4d0) loc_type_pane_t2

0xa75d,	// (0x0004f4e2) loc_type_pane_t3_ParamLimits

0xa75d,	// (0x0004f4e2) loc_type_pane_t3

0x0002,

0xf25d,	// (0x00053fe2) loc_type_pane_t_ParamLimits

0xf25d,	// (0x00053fe2) loc_type_pane_t

0xa76f,	// (0x0004f4f4) list_loc_req_pane

0xa779,	// (0x0004f4fe) scroll_pane_cp012

0x3bad,	// (0x00048932) list_single_loc_request_popup_menu_pane_ParamLimits

0x3bad,	// (0x00048932) list_single_loc_request_popup_menu_pane

0xa784,	// (0x0004f509) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa784,	// (0x0004f509) list_single_loc_request_popup_menu_pane_g1

0xa790,	// (0x0004f515) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa790,	// (0x0004f515) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x00053fe9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x00053fe9) list_single_loc_request_popup_menu_pane_g

0xa79c,	// (0x0004f521) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa79c,	// (0x0004f521) list_single_loc_request_popup_menu_pane_t1

0x1ad6,	// (0x0004685b) bg_popup_window_pane_cp03_ParamLimits

0x1ad6,	// (0x0004685b) bg_popup_window_pane_cp03

0xa7b2,	// (0x0004f537) heading_loc_req_pane_ParamLimits

0xa7b2,	// (0x0004f537) heading_loc_req_pane

0x3bba,	// (0x0004893f) popup_dyc_status_message_window_g1_ParamLimits

0x3bba,	// (0x0004893f) popup_dyc_status_message_window_g1

0x3bce,	// (0x00048953) popup_dyc_status_message_window_t1_ParamLimits

0x3bce,	// (0x00048953) popup_dyc_status_message_window_t1

0x3be3,	// (0x00048968) popup_dyc_status_message_window_t2_ParamLimits

0x3be3,	// (0x00048968) popup_dyc_status_message_window_t2

0x3bf8,	// (0x0004897d) popup_dyc_status_message_window_t3_ParamLimits

0x3bf8,	// (0x0004897d) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x00053fee) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x00053fee) popup_dyc_status_message_window_t

0x187b,	// (0x00046600) bg_heading_pane_cp01

0xa7be,	// (0x0004f543) heading_loc_req_pane_g1

0xa7c6,	// (0x0004f54b) heading_loc_req_pane_g2

0xa7ce,	// (0x0004f553) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x00053ff5) heading_loc_req_pane_g

0xa7d6,	// (0x0004f55b) heading_loc_req_pane_t1

0xa7f5,	// (0x0004f57a) bg_popup_sub_pane_cp01_ParamLimits

0xa7f5,	// (0x0004f57a) bg_popup_sub_pane_cp01

0xa803,	// (0x0004f588) popup_cale_events_window_g1_ParamLimits

0xa803,	// (0x0004f588) popup_cale_events_window_g1

0xa823,	// (0x0004f5a8) popup_cale_events_window_g2_ParamLimits

0xa823,	// (0x0004f5a8) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x00054017) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x00054017) popup_cale_events_window_g

0xa843,	// (0x0004f5c8) popup_cale_events_window_t1_ParamLimits

0xa843,	// (0x0004f5c8) popup_cale_events_window_t1

0xa855,	// (0x0004f5da) popup_cale_events_window_t2_ParamLimits

0xa855,	// (0x0004f5da) popup_cale_events_window_t2

0xa893,	// (0x0004f618) popup_cale_events_window_t3_ParamLimits

0xa893,	// (0x0004f618) popup_cale_events_window_t3

0xa8cd,	// (0x0004f652) popup_cale_events_window_t4_ParamLimits

0xa8cd,	// (0x0004f652) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x0005401c) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x0005401c) popup_cale_events_window_t

0x3c20,	// (0x000489a5) call_type_pane

0x3c30,	// (0x000489b5) popup_call_status_window_g1

0x3c44,	// (0x000489c9) popup_call_status_window_g2

0x3c58,	// (0x000489dd) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00054025) popup_call_status_window_g

0xa903,	// (0x0004f688) call_type_pane_g1

0xa90c,	// (0x0004f691) call_type_pane_g2

0x0001,

0xf2a7,	// (0x0005402c) call_type_pane_g

0x187b,	// (0x00046600) bg_popup_sub_pane_cp02

0xa915,	// (0x0004f69a) listscroll_popup_wml_pane

0xa91d,	// (0x0004f6a2) list_wml_pane

0xa927,	// (0x0004f6ac) scroll_pane_cp013

0xa932,	// (0x0004f6b7) list_single_graphic_popup_wml_pane_ParamLimits

0xa932,	// (0x0004f6b7) list_single_graphic_popup_wml_pane

0x1aee,	// (0x00046873) list_single_graphic_popup_wml_pane_g1

0xa946,	// (0x0004f6cb) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x00054031) list_single_graphic_popup_wml_pane_g

0xa94e,	// (0x0004f6d3) list_single_graphic_popup_wml_pane_t1

0xa964,	// (0x0004f6e9) aid_call_pane

0x1ace,	// (0x00046853) popup_clock_analogue_window_g1

0x1ace,	// (0x00046853) popup_clock_analogue_window_g2

0xa96c,	// (0x0004f6f1) popup_clock_analogue_window_g3

0xa96c,	// (0x0004f6f1) popup_clock_analogue_window_g4

0x1aee,	// (0x00046873) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00054036) popup_clock_analogue_window_g

0xa974,	// (0x0004f6f9) popup_clock_analogue_window_t1

0xa982,	// (0x0004f707) clock_digital_number_pane_ParamLimits

0xa982,	// (0x0004f707) clock_digital_number_pane

0xa98e,	// (0x0004f713) clock_digital_number_pane_cp02_ParamLimits

0xa98e,	// (0x0004f713) clock_digital_number_pane_cp02

0xa99a,	// (0x0004f71f) clock_digital_number_pane_cp03_ParamLimits

0xa99a,	// (0x0004f71f) clock_digital_number_pane_cp03

0xa9a6,	// (0x0004f72b) clock_digital_number_pane_cp04_ParamLimits

0xa9a6,	// (0x0004f72b) clock_digital_number_pane_cp04

0xa9b6,	// (0x0004f73b) clock_digital_separator_pane_ParamLimits

0xa9b6,	// (0x0004f73b) clock_digital_separator_pane

0xa9c2,	// (0x0004f747) popup_clock_digital_window_t1

0x1aee,	// (0x00046873) clock_digital_number_pane_g1

0x1aee,	// (0x00046873) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x00053fb6) clock_digital_number_pane_g

0x1aee,	// (0x00046873) clock_digital_separator_pane_g1

0x1aee,	// (0x00046873) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x00053fb6) clock_digital_separator_pane_g

0x187b,	// (0x00046600) bg_popup_window_pane_cp04

0xa9df,	// (0x0004f764) heading_pane_cp03

0x2569,	// (0x000472ee) listscroll_popup_gms_pane

0x187b,	// (0x00046600) grid_large_graphic_popup_pane

0xa9e8,	// (0x0004f76d) listscroll_popup_gms_pane_g1

0xa9f1,	// (0x0004f776) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x00054041) listscroll_popup_gms_pane_g

0xa9fa,	// (0x0004f77f) scroll_pane_cp014

0x1b43,	// (0x000468c8) cell_large_graphic_popup_pane_ParamLimits

0x1b43,	// (0x000468c8) cell_large_graphic_popup_pane

0x1b51,	// (0x000468d6) cell_large_graphic_popup_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) cell_large_graphic_popup_pane_g1

0xaa03,	// (0x0004f788) cell_large_graphic_popup_pane_g2_ParamLimits

0xaa03,	// (0x0004f788) cell_large_graphic_popup_pane_g2

0xaa11,	// (0x0004f796) cell_large_graphic_popup_pane_g3_ParamLimits

0xaa11,	// (0x0004f796) cell_large_graphic_popup_pane_g3

0xaa1f,	// (0x0004f7a4) cell_large_graphic_popup_pane_g4_ParamLimits

0xaa1f,	// (0x0004f7a4) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00054046) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00054046) cell_large_graphic_popup_pane_g

0x187b,	// (0x00046600) grid_highlight_pane_cp010

0x1aee,	// (0x00046873) bg_popup_call_pane_g1

0xaa30,	// (0x0004f7b5) list_single_graphic_popup_conf_pane_ParamLimits

0xaa30,	// (0x0004f7b5) list_single_graphic_popup_conf_pane

0xaa43,	// (0x0004f7c8) list_highlight_pane_cp01

0xaa4c,	// (0x0004f7d1) list_single_graphic_popup_conf_pane_g1

0xaa54,	// (0x0004f7d9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0005404f) list_single_graphic_popup_conf_pane_g

0xaa5c,	// (0x0004f7e1) list_single_graphic_popup_conf_pane_t1

0xaa6a,	// (0x0004f7ef) linegrid_cams_pane_g1

0x3c67,	// (0x000489ec) linegrid_cams_pane_g2

0x1f51,	// (0x00046cd6) linegrid_cams_pane_g3

0xaa73,	// (0x0004f7f8) linegrid_cams_pane_g4

0x3c70,	// (0x000489f5) linegrid_cams_pane_g5

0x3c79,	// (0x000489fe) linegrid_cams_pane_g6

0x2550,	// (0x000472d5) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x00054054) linegrid_cams_pane_g

0xaa7c,	// (0x0004f801) popup_clock_analogue_window

0xaa7c,	// (0x0004f801) popup_clock_digital_window

0x187b,	// (0x00046600) popup_phob_thumbnail_window

0x1aee,	// (0x00046873) call_video_uplink_pane_g1

0xaa85,	// (0x0004f80a) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x00054063) call_video_uplink_pane_g

0xaa8d,	// (0x0004f812) video_uplink_pane

0xaa95,	// (0x0004f81a) mce_image_pane_g1

0x3c84,	// (0x00048a09) mce_image_pane_g2

0x3c8e,	// (0x00048a13) mce_image_pane_g3

0x3c96,	// (0x00048a1b) mce_image_pane_g4

0x3c9e,	// (0x00048a23) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x00054068) mce_image_pane_g

0xaa9f,	// (0x0004f824) control_top_pane_stacon_cp01_ParamLimits

0xaa9f,	// (0x0004f824) control_top_pane_stacon_cp01

0xaab3,	// (0x0004f838) uni_indicator_pane_stacon_cp01_ParamLimits

0xaab3,	// (0x0004f838) uni_indicator_pane_stacon_cp01

0xaac4,	// (0x0004f849) bg_popup_sub_pane_cp03

0xaace,	// (0x0004f853) chi_dic_find_pane

0x3ca6,	// (0x00048a2b) listscroll_chi_dic_pane

0xaad6,	// (0x0004f85b) main_pane_chidic_g1

0xaade,	// (0x0004f863) chi_dic_find_pane_t1

0xaaec,	// (0x0004f871) find_chidic_pane

0xaaf5,	// (0x0004f87a) chi_dic_list_pane_ParamLimits

0xaaf5,	// (0x0004f87a) chi_dic_list_pane

0xab06,	// (0x0004f88b) scroll_pane_cp020

0xab0e,	// (0x0004f893) find_chidic_pane_t1

0x187b,	// (0x00046600) input_focus_pane_cp06

0x3cba,	// (0x00048a3f) list_chi_dic_pane_ParamLimits

0x3cba,	// (0x00048a3f) list_chi_dic_pane

0x3ccc,	// (0x00048a51) list_chi_dic_pane_t1_ParamLimits

0x3ccc,	// (0x00048a51) list_chi_dic_pane_t1

0x187b,	// (0x00046600) list_highlight_pane_cp020

0xab1d,	// (0x0004f8a2) bg_cale_heading_pane_g1

0x3cdf,	// (0x00048a64) bg_cale_heading_pane_g2

0x3ce7,	// (0x00048a6c) bg_cale_heading_pane_g3

0x3cef,	// (0x00048a74) bg_cale_heading_pane_g4

0x3cf9,	// (0x00048a7e) bg_cale_heading_pane_g5

0x3d03,	// (0x00048a88) bg_cale_heading_pane_g6

0x3d0b,	// (0x00048a90) bg_cale_heading_pane_g7

0x3d13,	// (0x00048a98) bg_cale_heading_pane_g8

0x3d1d,	// (0x00048aa2) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x00054073) bg_cale_heading_pane_g

0xab1d,	// (0x0004f8a2) bg_cale_side_pane_g1

0x3d27,	// (0x00048aac) bg_cale_side_pane_g2

0x3d2f,	// (0x00048ab4) bg_cale_side_pane_g3

0x3d37,	// (0x00048abc) bg_cale_side_pane_g4

0x3d3f,	// (0x00048ac4) bg_cale_side_pane_g5

0x3d47,	// (0x00048acc) bg_cale_side_pane_g6

0x3d4f,	// (0x00048ad4) bg_cale_side_pane_g7

0x3d57,	// (0x00048adc) bg_cale_side_pane_g8

0x3d5f,	// (0x00048ae4) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x00054086) bg_cale_side_pane_g

0x3d67,	// (0x00048aec) popup_call_status_window_ParamLimits

0x3d67,	// (0x00048aec) popup_call_status_window

0xab25,	// (0x0004f8aa) stacon_top_pane

0xab2d,	// (0x0004f8b2) status_pane_ParamLimits

0xab2d,	// (0x0004f8b2) status_pane

0xab42,	// (0x0004f8c7) status_small_pane

0xab4a,	// (0x0004f8cf) control_pane

0x187b,	// (0x00046600) stacon_bottom_pane

0xab52,	// (0x0004f8d7) list_single_mce_smart_pane_t1_ParamLimits

0xab52,	// (0x0004f8d7) list_single_mce_smart_pane_t1

0xab65,	// (0x0004f8ea) list_single_mce_smart_pane_t2_ParamLimits

0xab65,	// (0x0004f8ea) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x00054099) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x00054099) list_single_mce_smart_pane_t

0x3db0,	// (0x00048b35) compass_pane

0x3db9,	// (0x00048b3e) main_location2_pane_t1

0x3dcb,	// (0x00048b50) main_location2_pane_t2

0x3ddd,	// (0x00048b62) main_location2_pane_t3

0x0003,

0xf319,	// (0x0005409e) main_location2_pane_t

0xab84,	// (0x0004f909) compass_pane_g1_ParamLimits

0xab84,	// (0x0004f909) compass_pane_g1

0x3e21,	// (0x00048ba6) compass_pane_t1

0x3e30,	// (0x00048bb5) compass_pane_t2

0x0005,

0xf322,	// (0x000540a7) compass_pane_t

0x3e77,	// (0x00048bfc) text_secondary_cp61

0xac00,	// (0x0004f985) navi_pane_cams_g5

0xac7c,	// (0x0004fa01) navi_pane_im_t1

0xac8a,	// (0x0004fa0f) navi_pane_mp_g1_ParamLimits

0xac8a,	// (0x0004fa0f) navi_pane_mp_g1

0xac9e,	// (0x0004fa23) navi_pane_mp_g2_ParamLimits

0xac9e,	// (0x0004fa23) navi_pane_mp_g2

0xacaa,	// (0x0004fa2f) navi_pane_mp_g3_ParamLimits

0xacaa,	// (0x0004fa2f) navi_pane_mp_g3

0x0002,

0xf336,	// (0x000540bb) navi_pane_mp_g_ParamLimits

0xf336,	// (0x000540bb) navi_pane_mp_g

0xacb6,	// (0x0004fa3b) navi_pane_mp_t1

0xacc4,	// (0x0004fa49) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x000540c2) navi_pane_mp_t

0xad2f,	// (0x0004fab4) navi_pane_vt_g1

0xacb6,	// (0x0004fa3b) navi_pane_vt_t1

0xad37,	// (0x0004fabc) navi_slider_pane

0x2569,	// (0x000472ee) zooming_pane

0xad47,	// (0x0004facc) navi_slider_pane_g1

0xad50,	// (0x0004fad5) navi_slider_pane_g2

0x0006,

0xf344,	// (0x000540c9) navi_slider_pane_g

0xad7d,	// (0x0004fb02) aid_levels_zoom

0xad85,	// (0x0004fb0a) zooming_pane_g1

0xad8d,	// (0x0004fb12) zooming_pane_g2

0xad8d,	// (0x0004fb12) zooming_pane_g3

0x0002,

0xf353,	// (0x000540d8) zooming_pane_g

0xad95,	// (0x0004fb1a) level_10_zoom

0xad9e,	// (0x0004fb23) level_11_zoom

0xada7,	// (0x0004fb2c) level_1_zoom

0xadb0,	// (0x0004fb35) level_2_zoom

0xadb9,	// (0x0004fb3e) level_3_zoom

0xadc2,	// (0x0004fb47) level_4_zoom

0xadcb,	// (0x0004fb50) level_5_zoom

0xadd4,	// (0x0004fb59) level_6_zoom

0xaddd,	// (0x0004fb62) level_7_zoom

0xade6,	// (0x0004fb6b) level_8_zoom

0xadef,	// (0x0004fb74) level_9_zoom

0xae00,	// (0x0004fb85) popup_phob_thumbnail_window_g1

0xae08,	// (0x0004fb8d) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x000540df) popup_phob_thumbnail_window_g

0x47e4,	// (0x00049569) level_1_location

0x47ec,	// (0x00049571) level_2_location

0x47f4,	// (0x00049579) level_3_location

0x47fc,	// (0x00049581) level_4_location

0x2569,	// (0x000472ee) level_5_location

0x3ec8,	// (0x00048c4d) mce_icon_pane_g1

0x3ed2,	// (0x00048c57) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x000540e4) mce_icon_pane_g

0xae10,	// (0x0004fb95) main_mup_pane_g1_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g1

0xae10,	// (0x0004fb95) main_mup_pane_g2_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g2

0xae10,	// (0x0004fb95) main_mup_pane_g3_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g3

0xae10,	// (0x0004fb95) main_mup_pane_g4_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g4

0xae10,	// (0x0004fb95) main_mup_pane_g5_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g5

0xae10,	// (0x0004fb95) main_mup_pane_g6_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g6

0xae10,	// (0x0004fb95) main_mup_pane_g7_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g7

0xae10,	// (0x0004fb95) main_mup_pane_g8_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g8

0xae10,	// (0x0004fb95) main_mup_pane_g9_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g9

0xae10,	// (0x0004fb95) main_mup_pane_g10_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g10

0xae10,	// (0x0004fb95) main_mup_pane_g11_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g11

0x1b51,	// (0x000468d6) main_mup_pane_g12_ParamLimits

0x1b51,	// (0x000468d6) main_mup_pane_g12

0xae10,	// (0x0004fb95) main_mup_pane_g13_ParamLimits

0xae10,	// (0x0004fb95) main_mup_pane_g13

0x000c,

0xf364,	// (0x000540e9) main_mup_pane_g_ParamLimits

0xf364,	// (0x000540e9) main_mup_pane_g

0xae1e,	// (0x0004fba3) main_mup_pane_t1_ParamLimits

0xae1e,	// (0x0004fba3) main_mup_pane_t1

0xae1e,	// (0x0004fba3) main_mup_pane_t2_ParamLimits

0xae1e,	// (0x0004fba3) main_mup_pane_t2

0xae1e,	// (0x0004fba3) main_mup_pane_t3_ParamLimits

0xae1e,	// (0x0004fba3) main_mup_pane_t3

0x1c2d,	// (0x000469b2) main_mup_pane_t4_ParamLimits

0x1c2d,	// (0x000469b2) main_mup_pane_t4

0x1c2d,	// (0x000469b2) main_mup_pane_t5_ParamLimits

0x1c2d,	// (0x000469b2) main_mup_pane_t5

0x1c41,	// (0x000469c6) main_mup_pane_t6_ParamLimits

0x1c41,	// (0x000469c6) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00054104) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00054104) main_mup_pane_t

0x1b43,	// (0x000468c8) mup_progress_pane_ParamLimits

0x1b43,	// (0x000468c8) mup_progress_pane

0xae32,	// (0x0004fbb7) mup_visualizer_pane_ParamLimits

0xae32,	// (0x0004fbb7) mup_visualizer_pane

0xae32,	// (0x0004fbb7) mup_volume_pane_ParamLimits

0xae32,	// (0x0004fbb7) mup_volume_pane

0x1b5f,	// (0x000468e4) mup_visualizer_pane_g1_ParamLimits

0x1b5f,	// (0x000468e4) mup_visualizer_pane_g1

0xae40,	// (0x0004fbc5) mup_visualizer_pane_g2_ParamLimits

0xae40,	// (0x0004fbc5) mup_visualizer_pane_g2

0x1b51,	// (0x000468d6) mup_visualizer_pane_g3_ParamLimits

0x1b51,	// (0x000468d6) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x00054111) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x00054111) mup_visualizer_pane_g

0x1c23,	// (0x000469a8) mup_volume_pane_g1

0x1c23,	// (0x000469a8) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00053e34) mup_volume_pane_g

0x1c23,	// (0x000469a8) mup_progress_pane_g1

0x1c23,	// (0x000469a8) mup_progress_pane_g2

0x1c23,	// (0x000469a8) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00054118) mup_progress_pane_g

0x187b,	// (0x00046600) bg_popup_window_pane_cp05

0xae4e,	// (0x0004fbd3) heading_pane_cp02_ParamLimits

0xae4e,	// (0x0004fbd3) heading_pane_cp02

0xae68,	// (0x0004fbed) list_popup_blid_pane

0xae70,	// (0x0004fbf5) list_blid_sat_info_pane_ParamLimits

0xae70,	// (0x0004fbf5) list_blid_sat_info_pane

0xae83,	// (0x0004fc08) list_blid_sat_info_pane_g1

0xae8b,	// (0x0004fc10) list_blid_sat_info_pane_t1

0x3fd2,	// (0x00048d57) mup_equalizer_pane_ParamLimits

0x3fd2,	// (0x00048d57) mup_equalizer_pane

0x3feb,	// (0x00048d70) mup_equalizer_pane_cp1_ParamLimits

0x3feb,	// (0x00048d70) mup_equalizer_pane_cp1

0x4008,	// (0x00048d8d) mup_equalizer_pane_cp2_ParamLimits

0x4008,	// (0x00048d8d) mup_equalizer_pane_cp2

0x4025,	// (0x00048daa) mup_equalizer_pane_cp3_ParamLimits

0x4025,	// (0x00048daa) mup_equalizer_pane_cp3

0x4046,	// (0x00048dcb) mup_equalizer_pane_cp4_ParamLimits

0x4046,	// (0x00048dcb) mup_equalizer_pane_cp4

0x4067,	// (0x00048dec) mup_equalizer_pane_cp5

0x407b,	// (0x00048e00) mup_equalizer_pane_cp6

0x408f,	// (0x00048e14) mup_equalizer_pane_cp7

0xbfb9,	// (0x00050d3e) bg_popup_call_poc_act_pane_g9

0xbfc1,	// (0x00050d46) bg_popup_call_poc_act_pane_g10

0xbfc9,	// (0x00050d4e) bg_popup_call_poc_act_pane_g11

0x000a,

0x1ad6,	// (0x0004685b) mup_scale_pane

0x1aee,	// (0x00046873) mup_scale_pane_g1

0xae99,	// (0x0004fc1e) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00054134) mup_scale_pane_g

0xaebd,	// (0x0004fc42) msg_data_pane

0xaec5,	// (0x0004fc4a) scroll_pane_cp017

0x0881,	// (0x00045606) bg_list_pane_cp04_ParamLimits

0x0881,	// (0x00045606) bg_list_pane_cp04

0xaecd,	// (0x0004fc52) msg_data_pane_g1

0x40b5,	// (0x00048e3a) msg_data_pane_g2

0x40bf,	// (0x00048e44) msg_data_pane_g3

0x40c7,	// (0x00048e4c) msg_data_pane_g4

0x40cf,	// (0x00048e54) msg_data_pane_g5

0x40d7,	// (0x00048e5c) msg_data_pane_g6

0x40df,	// (0x00048e64) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00054143) msg_data_pane_g

0x08a5,	// (0x0004562a) msg_text_pane_ParamLimits

0x08a5,	// (0x0004562a) msg_text_pane

0x40e7,	// (0x00048e6c) qrid_highlight_pane_cp011_ParamLimits

0x40e7,	// (0x00048e6c) qrid_highlight_pane_cp011

0x187b,	// (0x00046600) msg_body_pane

0x1ad6,	// (0x0004685b) msg_header_pane

0xaee9,	// (0x0004fc6e) input_focus_pane_cp07

0xaf0a,	// (0x0004fc8f) msg_header_pane_t1_ParamLimits

0xaf0a,	// (0x0004fc8f) msg_header_pane_t1

0x08e8,	// (0x0004566d) msg_header_pane_t2_ParamLimits

0x08e8,	// (0x0004566d) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x00054157) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x00054157) msg_header_pane_t

0xaf26,	// (0x0004fcab) msg_body_pane_g1

0x0908,	// (0x0004568d) msg_body_pane_t1_ParamLimits

0x0908,	// (0x0004568d) msg_body_pane_t1

0x0939,	// (0x000456be) msg_body_pane_t2_ParamLimits

0x0939,	// (0x000456be) msg_body_pane_t2

0x094b,	// (0x000456d0) msg_body_pane_t3_ParamLimits

0x094b,	// (0x000456d0) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x0005415c) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x0005415c) msg_body_pane_t

0x4137,	// (0x00048ebc) main_viewer_pane_g1_ParamLimits

0x4137,	// (0x00048ebc) main_viewer_pane_g1

0x4145,	// (0x00048eca) main_viewer_pane_g2_ParamLimits

0x4145,	// (0x00048eca) main_viewer_pane_g2

0x4153,	// (0x00048ed8) main_viewer_pane_g3_ParamLimits

0x4153,	// (0x00048ed8) main_viewer_pane_g3

0x4162,	// (0x00048ee7) main_viewer_pane_g4_ParamLimits

0x4162,	// (0x00048ee7) main_viewer_pane_g4

0xaf46,	// (0x0004fccb) main_viewer_pane_g5_ParamLimits

0xaf46,	// (0x0004fccb) main_viewer_pane_g5

0xaf46,	// (0x0004fccb) main_viewer_pane_g7_ParamLimits

0xaf46,	// (0x0004fccb) main_viewer_pane_g7

0xaf58,	// (0x0004fcdd) main_viewer_pane_g8_ParamLimits

0xaf58,	// (0x0004fcdd) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x0005416c) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x0005416c) main_viewer_pane_g

0xaf70,	// (0x0004fcf5) viewer_content_pane_ParamLimits

0xaf70,	// (0x0004fcf5) viewer_content_pane

0x419e,	// (0x00048f23) main_postcard_pane_g1_ParamLimits

0x419e,	// (0x00048f23) main_postcard_pane_g1

0x41b4,	// (0x00048f39) main_postcard_pane_g2_ParamLimits

0x41b4,	// (0x00048f39) main_postcard_pane_g2

0x41ca,	// (0x00048f4f) main_postcard_pane_g3_ParamLimits

0x41ca,	// (0x00048f4f) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x0005417d) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x0005417d) main_postcard_pane_g

0x41e1,	// (0x00048f66) main_postcard_pane_g4

0xc151,	// (0x00050ed6) smil_status_volume_pane_g2

0x4224,	// (0x00048fa9) postcard_pane_ParamLimits

0x4224,	// (0x00048fa9) postcard_pane

0xaf7e,	// (0x0004fd03) postcard_pane_g1_ParamLimits

0xaf7e,	// (0x0004fd03) postcard_pane_g1

0x4266,	// (0x00048feb) postcard_pane_g2_ParamLimits

0x4266,	// (0x00048feb) postcard_pane_g2

0x4272,	// (0x00048ff7) postcard_pane_g3_ParamLimits

0x4272,	// (0x00048ff7) postcard_pane_g3

0xaf8c,	// (0x0004fd11) postcard_pane_g4_ParamLimits

0xaf8c,	// (0x0004fd11) postcard_pane_g4

0x427e,	// (0x00049003) postcard_pane_g5_ParamLimits

0x427e,	// (0x00049003) postcard_pane_g5

0x4293,	// (0x00049018) postcard_pane_g6_ParamLimits

0x4293,	// (0x00049018) postcard_pane_g6

0xaf7e,	// (0x0004fd03) postcard_pane_g7_ParamLimits

0xaf7e,	// (0x0004fd03) postcard_pane_g7

0x0006,

0xf405,	// (0x0005418a) postcard_pane_g_ParamLimits

0xf405,	// (0x0005418a) postcard_pane_g

0x42a7,	// (0x0004902c) main_mp2_pane_g1_ParamLimits

0x42a7,	// (0x0004902c) main_mp2_pane_g1

0x42b3,	// (0x00049038) main_mp2_pane_g2_ParamLimits

0x42b3,	// (0x00049038) main_mp2_pane_g2

0x42bf,	// (0x00049044) main_mp2_pane_g3_ParamLimits

0x42bf,	// (0x00049044) main_mp2_pane_g3

0x0002,

0xf414,	// (0x00054199) main_mp2_pane_g_ParamLimits

0xf414,	// (0x00054199) main_mp2_pane_g

0x42cb,	// (0x00049050) main_mp2_pane_t1_ParamLimits

0x42cb,	// (0x00049050) main_mp2_pane_t1

0x42e0,	// (0x00049065) main_mp2_pane_t2_ParamLimits

0x42e0,	// (0x00049065) main_mp2_pane_t2

0x42f2,	// (0x00049077) main_mp2_pane_t3_ParamLimits

0x42f2,	// (0x00049077) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x000541a0) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x000541a0) main_mp2_pane_t

0x13a4,	// (0x00046129) pec_content_pane_ParamLimits

0x13a4,	// (0x00046129) pec_content_pane

0x11e0,	// (0x00045f65) scroll_pane_cp015

0xae32,	// (0x0004fbb7) pec_attribute_pane_ParamLimits

0xae32,	// (0x0004fbb7) pec_attribute_pane

0x1b51,	// (0x000468d6) pec_content_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) pec_content_pane_g1

0xaf9a,	// (0x0004fd1f) pec_content_pane_t1_ParamLimits

0xaf9a,	// (0x0004fd1f) pec_content_pane_t1

0xafae,	// (0x0004fd33) pec_content_pane_t2_ParamLimits

0xafae,	// (0x0004fd33) pec_content_pane_t2

0x0001,

0xf422,	// (0x000541a7) pec_content_pane_t_ParamLimits

0xf422,	// (0x000541a7) pec_content_pane_t

0x1b43,	// (0x000468c8) list_single_graphic_pane_cp01_ParamLimits

0x1b43,	// (0x000468c8) list_single_graphic_pane_cp01

0x1ad6,	// (0x0004685b) bg_popup_sub_pane_cp04

0xafc2,	// (0x0004fd47) popup_mup_playback_window_g1

0xafce,	// (0x0004fd53) popup_mup_playback_window_t1

0xafe3,	// (0x0004fd68) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000541ac) popup_mup_playback_window_t

0xb01a,	// (0x0004fd9f) main_image_pane_g1_ParamLimits

0xb01a,	// (0x0004fd9f) main_image_pane_g1

0xb05d,	// (0x0004fde2) scroll_pane_cp018_ParamLimits

0xb05d,	// (0x0004fde2) scroll_pane_cp018

0xb075,	// (0x0004fdfa) scroll_pane_cp016_ParamLimits

0xb075,	// (0x0004fdfa) scroll_pane_cp016

0x43bc,	// (0x00049141) smil2_image_pane_ParamLimits

0x43bc,	// (0x00049141) smil2_image_pane

0x43ec,	// (0x00049171) smil2_root_pane_ParamLimits

0x43ec,	// (0x00049171) smil2_root_pane

0x4424,	// (0x000491a9) smil2_text_pane_ParamLimits

0x4424,	// (0x000491a9) smil2_text_pane

0x11e0,	// (0x00045f65) bg_list_pane_cp06

0x11e0,	// (0x00045f65) grid_radio_pane

0x187b,	// (0x00046600) bg_popup_window_pane_cp06

0xa7e5,	// (0x0004f56a) main_fmradio_pane_t1

0xbfd1,	// (0x00050d56) heading_pane_cp04

0xa7e5,	// (0x0004f56a) main_fmradio_pane_t2

0xbfd9,	// (0x00050d5e) popup_cale_lunar_info_window_g1

0xa7e5,	// (0x0004f56a) main_fmradio_pane_t3

0xbfe1,	// (0x00050d66) popup_cale_lunar_info_window_g2

0xa7e5,	// (0x0004f56a) main_fmradio_pane_t4

0x0001,

0xa7e5,	// (0x0004f56a) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x0005427c) popup_cale_lunar_info_window_g

0xf287,	// (0x0005400c) main_fmradio_pane_t

0x11e0,	// (0x00045f65) wait_bar_pane_cp03

0x1b43,	// (0x000468c8) cell_fmradio_pane_ParamLimits

0x1b43,	// (0x000468c8) cell_fmradio_pane

0x1b51,	// (0x000468d6) cell_fmradio_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) cell_fmradio_pane_g1

0x11e0,	// (0x00045f65) grid_highlight_pane_cp011

0xb0a9,	// (0x0004fe2e) poc_content_pane_ParamLimits

0xb0a9,	// (0x0004fe2e) poc_content_pane

0xb0bb,	// (0x0004fe40) scroll_pane_cp019

0x44a4,	// (0x00049229) popup_call_poc_act_window_ParamLimits

0x44a4,	// (0x00049229) popup_call_poc_act_window

0x44c8,	// (0x0004924d) popup_call_poc_inact_window_ParamLimits

0x44c8,	// (0x0004924d) popup_call_poc_inact_window

0xf4d3,	// (0x00054258) bg_popup_call_poc_act_pane_g

0xbf49,	// (0x00050cce) bg_popup_call_poc_inact_pane_g1

0xbf51,	// (0x00050cd6) bg_popup_call_poc_inact_pane_g2

0xb0c3,	// (0x0004fe48) popup_call_poc_act_window_g2

0xbf59,	// (0x00050cde) bg_popup_call_poc_inact_pane_g3

0xbf61,	// (0x00050ce6) bg_popup_call_poc_inact_pane_g4

0xbf69,	// (0x00050cee) bg_popup_call_poc_inact_pane_g5

0xb0cb,	// (0x0004fe50) popup_call_poc_act_window_t1_ParamLimits

0xb0cb,	// (0x0004fe50) popup_call_poc_act_window_t1

0xb0f3,	// (0x0004fe78) popup_call_poc_act_window_t2_ParamLimits

0xb0f3,	// (0x0004fe78) popup_call_poc_act_window_t2

0xb11b,	// (0x0004fea0) popup_call_poc_act_window_t3_ParamLimits

0xb11b,	// (0x0004fea0) popup_call_poc_act_window_t3

0xb143,	// (0x0004fec8) popup_call_poc_act_window_t4_ParamLimits

0xb143,	// (0x0004fec8) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x000541c1) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x000541c1) popup_call_poc_act_window_t

0xbf71,	// (0x00050cf6) bg_popup_call_poc_inact_pane_g6

0xbf79,	// (0x00050cfe) bg_popup_call_poc_inact_pane_g7

0xbf81,	// (0x00050d06) bg_popup_call_poc_inact_pane_g8

0xb155,	// (0x0004feda) popup_call_poc_inact_window_g2

0xbf89,	// (0x00050d0e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x00054245) bg_popup_call_poc_inact_pane_g

0xb15d,	// (0x0004fee2) popup_call_poc_inact_window_t1_ParamLimits

0xb15d,	// (0x0004fee2) popup_call_poc_inact_window_t1

0xb172,	// (0x0004fef7) popup_call_poc_inact_window_t2_ParamLimits

0xb172,	// (0x0004fef7) popup_call_poc_inact_window_t2

0xb187,	// (0x0004ff0c) popup_call_poc_inact_window_t3_ParamLimits

0xb187,	// (0x0004ff0c) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x000541ca) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x000541ca) popup_call_poc_inact_window_t

0xc0c9,	// (0x00050e4e) context_pane_ParamLimits

0x4cb6,	// (0x00049a3b) signal_pane_ParamLimits

0x2569,	// (0x000472ee) main_call2_pane

0xc0a2,	// (0x00050e27) popup_phob_thumbnail2_window_ParamLimits

0xc0a2,	// (0x00050e27) popup_phob_thumbnail2_window

0xaf2e,	// (0x0004fcb3) aid_hotspot_pointer_arrow_pane

0xaf36,	// (0x0004fcbb) aid_hotspot_pointer_hand_pane

0x47ae,	// (0x00049533) phob_pre_status_pane_g5

0x13a4,	// (0x00046129) cams_zoom_pane_ParamLimits

0x13a4,	// (0x00046129) image_vga_pane_ParamLimits

0x1b51,	// (0x000468d6) main_camera_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) main_camera_pane_g2_ParamLimits

0x1b51,	// (0x000468d6) main_camera_pane_g3_ParamLimits

0x1b51,	// (0x000468d6) main_camera_pane_g4_ParamLimits

0x1b51,	// (0x000468d6) main_camera_pane_g5_ParamLimits

0x1b51,	// (0x000468d6) main_camera_pane_g6_ParamLimits

0x1b51,	// (0x000468d6) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00053f05) main_camera_pane_g_ParamLimits

0x1c2d,	// (0x000469b2) main_camera_pane_t1_ParamLimits

0x1c2d,	// (0x000469b2) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00053f16) main_camera_pane_t_ParamLimits

0x1ad6,	// (0x0004685b) bg_popup_preview_window_pane_cp01_ParamLimits

0x1ad6,	// (0x0004685b) bg_popup_preview_window_pane_cp01

0xb19c,	// (0x0004ff21) popup_phob_thumbnail2_window_g1_ParamLimits

0xb19c,	// (0x0004ff21) popup_phob_thumbnail2_window_g1

0x187b,	// (0x00046600) call2_cli_visual_pane

0x44fc,	// (0x00049281) popup_call2_audio_conf_window_ParamLimits

0x44fc,	// (0x00049281) popup_call2_audio_conf_window

0x451c,	// (0x000492a1) popup_call2_audio_first_window_ParamLimits

0x451c,	// (0x000492a1) popup_call2_audio_first_window

0x45b2,	// (0x00049337) popup_call2_audio_in_window_ParamLimits

0x45b2,	// (0x00049337) popup_call2_audio_in_window

0x45fa,	// (0x0004937f) popup_call2_audio_out_window_ParamLimits

0x45fa,	// (0x0004937f) popup_call2_audio_out_window

0x4664,	// (0x000493e9) popup_call2_audio_second_window_ParamLimits

0x4664,	// (0x000493e9) popup_call2_audio_second_window

0x46ca,	// (0x0004944f) popup_call2_audio_wait_window_ParamLimits

0x46ca,	// (0x0004944f) popup_call2_audio_wait_window

0x187b,	// (0x00046600) bg_popup_call2_act_pane_cp03

0x1ab8,	// (0x0004683d) list_conf_pane_cp

0xb1a8,	// (0x0004ff2d) popup_call2_audio_conf_window_t1

0xaa30,	// (0x0004f7b5) list_single_graphic_popup_conf2_pane_ParamLimits

0xaa30,	// (0x0004f7b5) list_single_graphic_popup_conf2_pane

0xaa43,	// (0x0004f7c8) list_highlight_pane_cp04

0xb1b6,	// (0x0004ff3b) list_single_graphic_popup_conf2_pane_g1

0xaa54,	// (0x0004f7d9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x000541d1) list_single_graphic_popup_conf2_pane_g

0xb1c0,	// (0x0004ff45) list_single_graphic_popup_conf2_pane_t1

0xb1ce,	// (0x0004ff53) bg_popup_call2_act_pane_cp01_ParamLimits

0xb1ce,	// (0x0004ff53) bg_popup_call2_act_pane_cp01

0xb258,	// (0x0004ffdd) call_type_pane_cp05_ParamLimits

0xb258,	// (0x0004ffdd) call_type_pane_cp05

0xb2ac,	// (0x00050031) popup_call2_audio_second_window_g1_ParamLimits

0xb2ac,	// (0x00050031) popup_call2_audio_second_window_g1

0xb300,	// (0x00050085) popup_call2_audio_second_window_g2_ParamLimits

0xb300,	// (0x00050085) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x000541d6) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x000541d6) popup_call2_audio_second_window_g

0xb365,	// (0x000500ea) popup_call2_audio_second_window_t1_ParamLimits

0xb365,	// (0x000500ea) popup_call2_audio_second_window_t1

0xb420,	// (0x000501a5) popup_call2_audio_second_window_t2_ParamLimits

0xb420,	// (0x000501a5) popup_call2_audio_second_window_t2

0xb473,	// (0x000501f8) popup_call2_audio_second_window_t3_ParamLimits

0xb473,	// (0x000501f8) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x000541dd) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x000541dd) popup_call2_audio_second_window_t

0x187b,	// (0x00046600) bg_popup_call2_in_pane_cp02

0x1885,	// (0x0004660a) call_type_pane_cp04

0x4704,	// (0x00049489) popup_call2_audio_wait_window_g1

0x470c,	// (0x00049491) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x000541e6) popup_call2_audio_wait_window_g

0x189d,	// (0x00046622) popup_call2_audio_wait_window_t3

0xb566,	// (0x000502eb) bg_popup_call2_act_pane_ParamLimits

0xb566,	// (0x000502eb) bg_popup_call2_act_pane

0xb626,	// (0x000503ab) call_type_pane_cp03_ParamLimits

0xb626,	// (0x000503ab) call_type_pane_cp03

0xb68a,	// (0x0005040f) popup_call2_audio_first_window_g1_ParamLimits

0xb68a,	// (0x0005040f) popup_call2_audio_first_window_g1

0xb6fa,	// (0x0005047f) popup_call2_audio_first_window_g2_ParamLimits

0xb6fa,	// (0x0005047f) popup_call2_audio_first_window_g2

0xb75e,	// (0x000504e3) popup_call2_audio_first_window_g3_ParamLimits

0xb75e,	// (0x000504e3) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x000541eb) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x000541eb) popup_call2_audio_first_window_g

0xb7e6,	// (0x0005056b) popup_call2_audio_first_window_t1_ParamLimits

0xb7e6,	// (0x0005056b) popup_call2_audio_first_window_t1

0xb8e9,	// (0x0005066e) popup_call2_audio_first_window_t4_ParamLimits

0xb8e9,	// (0x0005066e) popup_call2_audio_first_window_t4

0xb9cc,	// (0x00050751) popup_call2_audio_first_window_t5_ParamLimits

0xb9cc,	// (0x00050751) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x000541f6) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x000541f6) popup_call2_audio_first_window_t

0x1ace,	// (0x00046853) bg_popup_call2_act_pane_g1

0xbfe9,	// (0x00050d6e) popup_cale_lunar_info_window_t1

0xbff7,	// (0x00050d7c) popup_cale_lunar_info_window_t2

0xc005,	// (0x00050d8a) popup_cale_lunar_info_window_t3

0x187b,	// (0x00046600) bg_popup_call2_bubble_pane

0xbacd,	// (0x00050852) bg_popup_call2_in_pane_cp01_ParamLimits

0xbacd,	// (0x00050852) bg_popup_call2_in_pane_cp01

0x1533,	// (0x000462b8) call_type_pane_cp02

0x4714,	// (0x00049499) popup_call2_audio_out_window_g1_ParamLimits

0x4714,	// (0x00049499) popup_call2_audio_out_window_g1

0xbb15,	// (0x0005089a) popup_call2_audio_out_window_g2_ParamLimits

0xbb15,	// (0x0005089a) popup_call2_audio_out_window_g2

0x4740,	// (0x000494c5) popup_call2_audio_out_window_g3_ParamLimits

0x4740,	// (0x000494c5) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x000541ff) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x000541ff) popup_call2_audio_out_window_g

0xbb4c,	// (0x000508d1) popup_call2_audio_out_window_t1_ParamLimits

0xbb4c,	// (0x000508d1) popup_call2_audio_out_window_t1

0xbbab,	// (0x00050930) popup_call2_audio_out_window_t2_ParamLimits

0xbbab,	// (0x00050930) popup_call2_audio_out_window_t2

0xbbff,	// (0x00050984) popup_call2_audio_out_window_t3_ParamLimits

0xbbff,	// (0x00050984) popup_call2_audio_out_window_t3

0xbc15,	// (0x0005099a) popup_call2_audio_out_window_t4_ParamLimits

0xbc15,	// (0x0005099a) popup_call2_audio_out_window_t4

0xbc2b,	// (0x000509b0) popup_call2_audio_out_window_t5_ParamLimits

0xbc2b,	// (0x000509b0) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00054208) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00054208) popup_call2_audio_out_window_t

0xbc8f,	// (0x00050a14) bg_popup_call2_in_pane_ParamLimits

0xbc8f,	// (0x00050a14) bg_popup_call2_in_pane

0xbceb,	// (0x00050a70) popup_call2_audio_in_window_g1_ParamLimits

0xbceb,	// (0x00050a70) popup_call2_audio_in_window_g1

0xbd23,	// (0x00050aa8) popup_call2_audio_in_window_g2_ParamLimits

0xbd23,	// (0x00050aa8) popup_call2_audio_in_window_g2

0xbd5b,	// (0x00050ae0) popup_call2_audio_in_window_g3_ParamLimits

0xbd5b,	// (0x00050ae0) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x00054215) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x00054215) popup_call2_audio_in_window_g

0xbdb3,	// (0x00050b38) popup_call2_audio_in_window_t1_ParamLimits

0xbdb3,	// (0x00050b38) popup_call2_audio_in_window_t1

0xbe33,	// (0x00050bb8) popup_call2_audio_in_window_t2_ParamLimits

0xbe33,	// (0x00050bb8) popup_call2_audio_in_window_t2

0xbeb3,	// (0x00050c38) popup_call2_audio_in_window_t3_ParamLimits

0xbeb3,	// (0x00050c38) popup_call2_audio_in_window_t3

0xbecd,	// (0x00050c52) popup_call2_audio_in_window_t4_ParamLimits

0xbecd,	// (0x00050c52) popup_call2_audio_in_window_t4

0xbedf,	// (0x00050c64) popup_call2_audio_in_window_t5_ParamLimits

0xbedf,	// (0x00050c64) popup_call2_audio_in_window_t5

0xbef4,	// (0x00050c79) popup_call2_audio_in_window_t6_ParamLimits

0xbef4,	// (0x00050c79) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0005421e) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0005421e) popup_call2_audio_in_window_t

0x1ace,	// (0x00046853) bg_popup_call2_in_pane_g1

0xc013,	// (0x00050d98) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x00054281) popup_cale_lunar_info_window_t

0x1ad6,	// (0x0004685b) bg_popup_call2_rect_pane_ParamLimits

0x1ad6,	// (0x0004685b) bg_popup_call2_rect_pane

0x187b,	// (0x00046600) call2_cli_visual_graphic_pane

0x187b,	// (0x00046600) call2_cli_visual_text_pane

0xc164,	// (0x00050ee9) smil_status_volume_pane_g3

0x0002,

0x1aee,	// (0x00046873) call2_cli_visual_graphic_pane_g1

0x1aee,	// (0x00046873) call2_cli_visual_graphic_pane_g2

0x1aee,	// (0x00046873) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x0005422b) call2_cli_visual_graphic_pane_g

0xbf09,	// (0x00050c8e) bg_popup_call2_rect_pane_g1

0x1f04,	// (0x00046c89) bg_popup_call2_rect_pane_g2

0xbf11,	// (0x00050c96) bg_popup_call2_rect_pane_g3

0xbf19,	// (0x00050c9e) bg_popup_call2_rect_pane_g4

0xbf21,	// (0x00050ca6) bg_popup_call2_rect_pane_g5

0xbf29,	// (0x00050cae) bg_popup_call2_rect_pane_g6

0xbf31,	// (0x00050cb6) bg_popup_call2_rect_pane_g7

0xbf39,	// (0x00050cbe) bg_popup_call2_rect_pane_g8

0xbf41,	// (0x00050cc6) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x00054232) bg_popup_call2_rect_pane_g

0xbf49,	// (0x00050cce) bg_popup_call2_bubble_pane_g1

0xbf51,	// (0x00050cd6) bg_popup_call2_bubble_pane_g2

0xbf59,	// (0x00050cde) bg_popup_call2_bubble_pane_g3

0xbf61,	// (0x00050ce6) bg_popup_call2_bubble_pane_g4

0xbf69,	// (0x00050cee) bg_popup_call2_bubble_pane_g5

0xbf71,	// (0x00050cf6) bg_popup_call2_bubble_pane_g6

0xbf79,	// (0x00050cfe) bg_popup_call2_bubble_pane_g7

0xbf81,	// (0x00050d06) bg_popup_call2_bubble_pane_g8

0xbf89,	// (0x00050d0e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x00054245) bg_popup_call2_bubble_pane_g

0x1f86,	// (0x00046d0b) aid_cale_week_size_cell_pane

0x25d2,	// (0x00047357) aid_cams_cif_uncrop_pane_ParamLimits

0x25d2,	// (0x00047357) aid_cams_cif_uncrop_pane

0x13a4,	// (0x00046129) aid_cams_size_cell_ParamLimits

0x13a4,	// (0x00046129) aid_cams_size_cell

0x13a4,	// (0x00046129) grid_cams_pane_ParamLimits

0x13a4,	// (0x00046129) linegrid_cams_pane_ParamLimits

0x2849,	// (0x000475ce) call_video_pane_t1

0x2867,	// (0x000475ec) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00053f62) call_video_pane_t

0x2ef9,	// (0x00047c7e) aid_cale_month_size_cell_pane_ParamLimits

0x2ef9,	// (0x00047c7e) aid_cale_month_size_cell_pane

0xf540,	// (0x000542c5) smil_status_volume_pane_g

0xc171,	// (0x00050ef6) volume_smil_pane_ParamLimits

0xa5e0,	// (0x0004f365) aid_popup2_width_pane

0x1e5c,	// (0x00046be1) cell_qdial_pane_g4_ParamLimits

0x1e5c,	// (0x00046be1) cell_qdial_pane_g4

0x3e01,	// (0x00048b86) aid_blid_cardinal_pane_ParamLimits

0x3e0d,	// (0x00048b92) aid_blid_destination_pane_ParamLimits

0x3e0d,	// (0x00048b92) aid_blid_destination_pane

0x1ad6,	// (0x0004685b) bg_popup_call_poc_act_pane_ParamLimits

0x1ad6,	// (0x0004685b) bg_popup_call_poc_act_pane

0x1ad6,	// (0x0004685b) bg_popup_call_poc_inact_pane_ParamLimits

0x1ad6,	// (0x0004685b) bg_popup_call_poc_inact_pane

0xbf91,	// (0x00050d16) bg_popup_call_poc_act_pane_g1

0xbf99,	// (0x00050d1e) bg_popup_call_poc_act_pane_g2

0xbfa1,	// (0x00050d26) bg_popup_call_poc_act_pane_g3

0xbf61,	// (0x00050ce6) bg_popup_call_poc_act_pane_g4

0xbf69,	// (0x00050cee) bg_popup_call_poc_act_pane_g5

0xbfa9,	// (0x00050d2e) bg_popup_call_poc_act_pane_g6

0xbf79,	// (0x00050cfe) bg_popup_call_poc_act_pane_g7

0xbfb1,	// (0x00050d36) bg_popup_call_poc_act_pane_g8

0x187b,	// (0x00046600) main_usb_pane

0xc07d,	// (0x00050e02) popup_cale_lunar_info_window

0x2ba1,	// (0x00047926) im_reading_pane_t1_ParamLimits

0x2bda,	// (0x0004795f) list_im_pane_ParamLimits

0x2beb,	// (0x00047970) scroll_pane_cp07_ParamLimits

0x187b,	// (0x00046600) grid_highlight_pane_cp012

0x1ad6,	// (0x0004685b) mup_scale_pane_ParamLimits

0x1b51,	// (0x000468d6) main_usb_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) main_usb_pane_g1

0x1b51,	// (0x000468d6) main_usb_pane_g2_ParamLimits

0x1b51,	// (0x000468d6) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x00053f41) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x00053f41) main_usb_pane_g

0x1c2d,	// (0x000469b2) main_usb_pane_t1_ParamLimits

0x1c2d,	// (0x000469b2) main_usb_pane_t1

0x1c2d,	// (0x000469b2) main_usb_pane_t2_ParamLimits

0x1c2d,	// (0x000469b2) main_usb_pane_t2

0x1c2d,	// (0x000469b2) main_usb_pane_t3_ParamLimits

0x1c2d,	// (0x000469b2) main_usb_pane_t3

0x1c2d,	// (0x000469b2) main_usb_pane_t4_ParamLimits

0x1c2d,	// (0x000469b2) main_usb_pane_t4

0x1c2d,	// (0x000469b2) main_usb_pane_t5_ParamLimits

0x1c2d,	// (0x000469b2) main_usb_pane_t5

0x1c2d,	// (0x000469b2) main_usb_pane_t6_ParamLimits

0x1c2d,	// (0x000469b2) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x0005426f) main_usb_pane_t_ParamLimits

0x3db0,	// (0x00048b35) aid_text_placing

0x3db9,	// (0x00048b3e) main_location2_pane_t1_ParamLimits

0x3dcb,	// (0x00048b50) main_location2_pane_t2_ParamLimits

0x3ddd,	// (0x00048b62) main_location2_pane_t3_ParamLimits

0x3def,	// (0x00048b74) main_location2_pane_t4_ParamLimits

0x3def,	// (0x00048b74) main_location2_pane_t4

0xf319,	// (0x0005409e) main_location2_pane_t_ParamLimits

0x1b04,	// (0x00046889) find_pinb_pane_g2_ParamLimits

0x1b04,	// (0x00046889) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00053e1a) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00053e1a) find_pinb_pane_g

0x1b10,	// (0x00046895) find_pinb_pane_t1_ParamLimits

0x1b22,	// (0x000468a7) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00053e1f) find_pinb_pane_t_ParamLimits

0x187b,	// (0x00046600) main_call3_pane

0x3423,	// (0x000481a8) cale_month_day_heading_pane_t1_ParamLimits

0x34a9,	// (0x0004822e) cale_month_day_heading_pane_t2_ParamLimits

0x3522,	// (0x000482a7) cale_month_day_heading_pane_t3_ParamLimits

0x359b,	// (0x00048320) cale_month_day_heading_pane_t4_ParamLimits

0x361c,	// (0x000483a1) cale_month_day_heading_pane_t5_ParamLimits

0x36a5,	// (0x0004842a) cale_month_day_heading_pane_t6_ParamLimits

0x372e,	// (0x000484b3) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00053f9a) cale_month_day_heading_pane_t_ParamLimits

0x39da,	// (0x0004875f) smil_status_volume_pane

0x4242,	// (0x00048fc7) postcard_address_pane_ParamLimits

0x4242,	// (0x00048fc7) postcard_address_pane

0x4254,	// (0x00048fd9) postcard_message_pane_ParamLimits

0x4254,	// (0x00048fd9) postcard_message_pane

0x476c,	// (0x000494f1) call2_cli_visual_pane_t1_ParamLimits

0x476c,	// (0x000494f1) call2_cli_visual_pane_t1

0xc19e,	// (0x00050f23) postcard_message_pane_t1_ParamLimits

0xc19e,	// (0x00050f23) postcard_message_pane_t1

0xc186,	// (0x00050f0b) postcard_address_pane_t1_ParamLimits

0xc186,	// (0x00050f0b) postcard_address_pane_t1

0x4e68,	// (0x00049bed) popup_call3_audio_in_window_ParamLimits

0x4e68,	// (0x00049bed) popup_call3_audio_in_window

0x4cf3,	// (0x00049a78) bg_popup_call3_in_pane_ParamLimits

0x4cf3,	// (0x00049a78) bg_popup_call3_in_pane

0x4d69,	// (0x00049aee) popup_call3_audio_in_window_g1_ParamLimits

0x4d69,	// (0x00049aee) popup_call3_audio_in_window_g1

0x4d89,	// (0x00049b0e) popup_call3_audio_in_window_g2_ParamLimits

0x4d89,	// (0x00049b0e) popup_call3_audio_in_window_g2

0x4da9,	// (0x00049b2e) popup_call3_audio_in_window_g3_ParamLimits

0x4da9,	// (0x00049b2e) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x000542cc) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x000542cc) popup_call3_audio_in_window_g

0x4dda,	// (0x00049b5f) popup_call3_audio_in_window_t1_ParamLimits

0x4dda,	// (0x00049b5f) popup_call3_audio_in_window_t1

0x4e18,	// (0x00049b9d) popup_call3_audio_in_window_t2_ParamLimits

0x4e18,	// (0x00049b9d) popup_call3_audio_in_window_t2

0x4e56,	// (0x00049bdb) popup_call3_audio_in_window_t3_ParamLimits

0x4e56,	// (0x00049bdb) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x000542d5) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x000542d5) popup_call3_audio_in_window_t

0x2569,	// (0x000472ee) bg_popup_call3_rect_pane

0xbf09,	// (0x00050c8e) bg_popup_call3_rect_pane_g1

0x1f04,	// (0x00046c89) bg_popup_call3_rect_pane_g2

0xbf11,	// (0x00050c96) bg_popup_call3_rect_pane_g3

0xbf19,	// (0x00050c9e) bg_popup_call3_rect_pane_g4

0xbf21,	// (0x00050ca6) bg_popup_call3_rect_pane_g5

0xbf29,	// (0x00050cae) bg_popup_call3_rect_pane_g6

0xbf31,	// (0x00050cb6) bg_popup_call3_rect_pane_g7

0x11e0,	// (0x00045f65) mup_visualizer_osc_pane

0x11e0,	// (0x00045f65) mup_visualizer_spec_pane

0x4d23,	// (0x00049aa8) call3_video_qcif_pane_ParamLimits

0x4d23,	// (0x00049aa8) call3_video_qcif_pane

0x4d36,	// (0x00049abb) call3_video_qcif_uncrop_pane_ParamLimits

0x4d36,	// (0x00049abb) call3_video_qcif_uncrop_pane

0x4d44,	// (0x00049ac9) call3_video_subqcif_pane_ParamLimits

0x4d44,	// (0x00049ac9) call3_video_subqcif_pane

0x4d58,	// (0x00049add) call3_video_subqcif_uncrop_pane_ParamLimits

0x4d58,	// (0x00049add) call3_video_subqcif_uncrop_pane

0x4dc9,	// (0x00049b4e) popup_call3_audio_in_window_g4_ParamLimits

0x4dc9,	// (0x00049b4e) popup_call3_audio_in_window_g4

0x11e0,	// (0x00045f65) mup_spec_half_pane

0x11e0,	// (0x00045f65) mup_spec_half_pane_cp

0x11e0,	// (0x00045f65) mup_osc_middle_pane

0x1c23,	// (0x000469a8) mup_visualizer_osc_pane_g1

0xc117,	// (0x00050e9c) mup_spec_bar_pane_ParamLimits

0xc117,	// (0x00050e9c) mup_spec_bar_pane

0x1c23,	// (0x000469a8) mup_spec_bar_pane_g1

0x1c23,	// (0x000469a8) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00053e34) mup_spec_bar_pane_g

0x1f86,	// (0x00046d0b) aid_cale_week_size_cell_pane_ParamLimits

0x1fa0,	// (0x00046d25) bg_cale_heading_pane_ParamLimits

0x1fb8,	// (0x00046d3d) bg_cale_pane_cp01_ParamLimits

0x1fd5,	// (0x00046d5a) cale_week_corner_pane_ParamLimits

0x1ff4,	// (0x00046d79) cale_week_day_heading_pane_ParamLimits

0x2011,	// (0x00046d96) cale_week_scroll_pane_g1_ParamLimits

0x2024,	// (0x00046da9) cale_week_scroll_pane_g2_ParamLimits

0x203c,	// (0x00046dc1) cale_week_scroll_pane_g3_ParamLimits

0x2054,	// (0x00046dd9) cale_week_scroll_pane_g4_ParamLimits

0x206c,	// (0x00046df1) cale_week_scroll_pane_g5_ParamLimits

0x208c,	// (0x00046e11) cale_week_scroll_pane_g6_ParamLimits

0x20ac,	// (0x00046e31) cale_week_scroll_pane_g7_ParamLimits

0x20cc,	// (0x00046e51) cale_week_scroll_pane_g8_ParamLimits

0x20f0,	// (0x00046e75) cale_week_scroll_pane_g9_ParamLimits

0x2108,	// (0x00046e8d) cale_week_scroll_pane_g10_ParamLimits

0x2120,	// (0x00046ea5) cale_week_scroll_pane_g11_ParamLimits

0x2138,	// (0x00046ebd) cale_week_scroll_pane_g12_ParamLimits

0x2150,	// (0x00046ed5) cale_week_scroll_pane_g13_ParamLimits

0x2150,	// (0x00046ed5) cale_week_scroll_pane_g14_ParamLimits

0x2150,	// (0x00046ed5) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00053eab) cale_week_scroll_pane_g_ParamLimits

0x218c,	// (0x00046f11) cale_week_time_pane_ParamLimits

0x21b0,	// (0x00046f35) grid_cale_week_pane_ParamLimits

0x21d6,	// (0x00046f5b) listscroll_cale_week_pane_t1

0x21e8,	// (0x00046f6d) scroll_pane_cp08_ParamLimits

0x2f86,	// (0x00047d0b) cale_month_corner_pane_ParamLimits

0x33a4,	// (0x00048129) cale_month_pane_t1

0x33b6,	// (0x0004813b) cale_month_week_pane_ParamLimits

0x3c30,	// (0x000489b5) popup_call_status_window_g1_ParamLimits

0x3c44,	// (0x000489c9) popup_call_status_window_g2_ParamLimits

0x3c58,	// (0x000489dd) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00054025) popup_call_status_window_g_ParamLimits

0xa95c,	// (0x0004f6e1) aid_call2_pane

0x08da,	// (0x0004565f) msg_header_pane_g1

0x4242,	// (0x00048fc7) postcard_address2_pane_ParamLimits

0x4242,	// (0x00048fc7) postcard_address2_pane

0x4254,	// (0x00048fd9) postcard_message2_pane_ParamLimits

0x4254,	// (0x00048fd9) postcard_message2_pane

0x4cc4,	// (0x00049a49) message2_row_pane_ParamLimits

0x4cc4,	// (0x00049a49) message2_row_pane

0x4ce0,	// (0x00049a65) address2_row_pane_ParamLimits

0x4ce0,	// (0x00049a65) address2_row_pane

0xc0e4,	// (0x00050e69) postcard_message2_row_pane_g1

0xc0ec,	// (0x00050e71) postcard_message2_row_pane_t1

0xc0e4,	// (0x00050e69) address2_row_pane_g1

0xc0ec,	// (0x00050e71) address2_row_pane_t1

0x2561,	// (0x000472e6) aid_size_cell_vorec

0x187b,	// (0x00046600) main_rss_pane

0xc0fa,	// (0x00050e7f) rss_list_single_pane_ParamLimits

0xc0fa,	// (0x00050e7f) rss_list_single_pane

0xc108,	// (0x00050e8d) rss_list_single_pane_t1

0xc108,	// (0x00050e8d) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x000542c0) rss_list_single_pane_t

0x187b,	// (0x00046600) main_camera2_pane

0x187b,	// (0x00046600) main_video2_pane

0xc1ba,	// (0x00050f3f) cams_zoom_pane_cp2_ParamLimits

0xc1ba,	// (0x00050f3f) cams_zoom_pane_cp2

0xc1ba,	// (0x00050f3f) image2_vga_pane_ParamLimits

0xc1ba,	// (0x00050f3f) image2_vga_pane

0xc1c8,	// (0x00050f4d) main_camera2_pane_g1_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g1

0xc1c8,	// (0x00050f4d) main_camera2_pane_g2_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g2

0xc1c8,	// (0x00050f4d) main_camera2_pane_g3_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g3

0xc1c8,	// (0x00050f4d) main_camera2_pane_g4_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g4

0xc1c8,	// (0x00050f4d) main_camera2_pane_g5_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g5

0xc1c8,	// (0x00050f4d) main_camera2_pane_g6_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g6

0xc1c8,	// (0x00050f4d) main_camera2_pane_g7_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g7

0xc1c8,	// (0x00050f4d) main_camera2_pane_g8_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g8

0x0008,

0xf557,	// (0x000542dc) main_camera2_pane_g_ParamLimits

0xf557,	// (0x000542dc) main_camera2_pane_g

0x4e8a,	// (0x00049c0f) main_camera2_pane_t1_ParamLimits

0x4e8a,	// (0x00049c0f) main_camera2_pane_t1

0x4e8a,	// (0x00049c0f) main_camera2_pane_t2_ParamLimits

0x4e8a,	// (0x00049c0f) main_camera2_pane_t2

0x4e8a,	// (0x00049c0f) main_camera2_pane_t3_ParamLimits

0x4e8a,	// (0x00049c0f) main_camera2_pane_t3

0x4e8a,	// (0x00049c0f) main_camera2_pane_t4_ParamLimits

0x4e8a,	// (0x00049c0f) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x000542ef) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x000542ef) main_camera2_pane_t

0xc1ea,	// (0x00050f6f) cams_zoom_pane_cp4_ParamLimits

0xc1ea,	// (0x00050f6f) cams_zoom_pane_cp4

0xc1f8,	// (0x00050f7d) image2_cif_pane_ParamLimits

0xc1f8,	// (0x00050f7d) image2_cif_pane

0x13a4,	// (0x00046129) image2_subqcif_pane_ParamLimits

0x13a4,	// (0x00046129) image2_subqcif_pane

0x4e9e,	// (0x00049c23) main_video2_pane_g1_ParamLimits

0x4e9e,	// (0x00049c23) main_video2_pane_g1

0x4e9e,	// (0x00049c23) main_video2_pane_g2_ParamLimits

0x4e9e,	// (0x00049c23) main_video2_pane_g2

0x4e9e,	// (0x00049c23) main_video2_pane_g3_ParamLimits

0x4e9e,	// (0x00049c23) main_video2_pane_g3

0x4e9e,	// (0x00049c23) main_video2_pane_g4_ParamLimits

0x4e9e,	// (0x00049c23) main_video2_pane_g4

0x4e9e,	// (0x00049c23) main_video2_pane_g5_ParamLimits

0x4e9e,	// (0x00049c23) main_video2_pane_g5

0x4e9e,	// (0x00049c23) main_video2_pane_g6_ParamLimits

0x4e9e,	// (0x00049c23) main_video2_pane_g6

0x0005,

0xf579,	// (0x000542fe) main_video2_pane_g_ParamLimits

0xf579,	// (0x000542fe) main_video2_pane_g

0x4eac,	// (0x00049c31) main_video2_pane_t1_ParamLimits

0x4eac,	// (0x00049c31) main_video2_pane_t1

0x4eac,	// (0x00049c31) main_video2_pane_t2_ParamLimits

0x4eac,	// (0x00049c31) main_video2_pane_t2

0x4eac,	// (0x00049c31) main_video2_pane_t3_ParamLimits

0x4eac,	// (0x00049c31) main_video2_pane_t3

0x0002,

0xf586,	// (0x0005430b) main_video2_pane_t_ParamLimits

0xf586,	// (0x0005430b) main_video2_pane_t

0x4810,	// (0x00049595) call_muted_g2

0x0001,

0xf52d,	// (0x000542b2) call_muted_g

0x187b,	// (0x00046600) main_mup2_pane

0xae10,	// (0x0004fb95) main_mup2_pane_g1_ParamLimits

0xae10,	// (0x0004fb95) main_mup2_pane_g1

0xae10,	// (0x0004fb95) main_mup2_pane_g2_ParamLimits

0xae10,	// (0x0004fb95) main_mup2_pane_g2

0x1c23,	// (0x000469a8) main_mup_pane_g13_cp1

0x11e0,	// (0x00045f65) mup_volume_pane_cp1

0xae10,	// (0x0004fb95) main_mup2_pane_g4_ParamLimits

0xae10,	// (0x0004fb95) main_mup2_pane_g4

0xae10,	// (0x0004fb95) main_mup2_pane_g5_ParamLimits

0xae10,	// (0x0004fb95) main_mup2_pane_g5

0xae10,	// (0x0004fb95) main_mup2_pane_g6_ParamLimits

0xae10,	// (0x0004fb95) main_mup2_pane_g6

0xae10,	// (0x0004fb95) main_mup2_pane_g7_ParamLimits

0xae10,	// (0x0004fb95) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x00054312) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x00054312) main_mup2_pane_g

0xae1e,	// (0x0004fba3) main_mup2_pane_t1_ParamLimits

0xae1e,	// (0x0004fba3) main_mup2_pane_t1

0xae1e,	// (0x0004fba3) main_mup2_pane_t2_ParamLimits

0xae1e,	// (0x0004fba3) main_mup2_pane_t2

0xae1e,	// (0x0004fba3) main_mup2_pane_t3_ParamLimits

0xae1e,	// (0x0004fba3) main_mup2_pane_t3

0xae1e,	// (0x0004fba3) main_mup2_pane_t4_ParamLimits

0xae1e,	// (0x0004fba3) main_mup2_pane_t4

0xae1e,	// (0x0004fba3) main_mup2_pane_t5_ParamLimits

0xae1e,	// (0x0004fba3) main_mup2_pane_t5

0xae1e,	// (0x0004fba3) main_mup2_pane_t6_ParamLimits

0xae1e,	// (0x0004fba3) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x00054321) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x00054321) main_mup2_pane_t

0xae32,	// (0x0004fbb7) mup2_visualizer_pane_ParamLimits

0xae32,	// (0x0004fbb7) mup2_visualizer_pane

0xae32,	// (0x0004fbb7) mup_progress_pane_cp_ParamLimits

0xae32,	// (0x0004fbb7) mup_progress_pane_cp

0xc206,	// (0x00050f8b) mup_volume_pane_cp_ParamLimits

0xc206,	// (0x00050f8b) mup_volume_pane_cp

0x1b51,	// (0x000468d6) mup2_visualizer_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) mup2_visualizer_pane_g1

0x1b5f,	// (0x000468e4) mup2_visualizer_pane_g2_ParamLimits

0x1b5f,	// (0x000468e4) mup2_visualizer_pane_g2

0x1b5f,	// (0x000468e4) mup2_visualizer_pane_g3_ParamLimits

0x1b5f,	// (0x000468e4) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00053e24) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00053e24) mup2_visualizer_pane_g

0x11e0,	// (0x00045f65) aid_size_cell_fmradio

0x49c2,	// (0x00049747) aid_height_parent_landcape

0x2ca1,	// (0x00047a26) wml_content_pane_cp

0x2ca9,	// (0x00047a2e) wml_tabs_pane

0x2cb2,	// (0x00047a37) popup_wml_miniature_window

0x2cba,	// (0x00047a3f) scroll_pane_cp021

0x2cce,	// (0x00047a53) wml_content_pane_comp8

0x187b,	// (0x00046600) bg_popup_sub_pane_cp05

0xc21c,	// (0x00050fa1) popup_wml_miniature_window_g1

0xc224,	// (0x00050fa9) wml_miniature_view_pane

0x4ec0,	// (0x00049c45) aid_size_wml_view

0x4ec8,	// (0x00049c4d) wml_miniature_view_pane_g1

0x4ed1,	// (0x00049c56) wml_miniature_view_pane_g2

0x4eda,	// (0x00049c5f) wml_miniature_view_pane_g3

0x4ee2,	// (0x00049c67) wml_miniature_view_pane_g4

0x4eea,	// (0x00049c6f) wml_miniature_view_pane_g5

0x4ef2,	// (0x00049c77) wml_miniature_view_pane_g6

0x4efa,	// (0x00049c7f) wml_miniature_view_pane_g7

0x4f02,	// (0x00049c87) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x0005432e) wml_miniature_view_pane_g

0xc22c,	// (0x00050fb1) background_graphic_ParamLimits

0xc22c,	// (0x00050fb1) background_graphic

0xc238,	// (0x00050fbd) wml_tabs_2_pane

0xc241,	// (0x00050fc6) wml_tabs_3_pane_ParamLimits

0xc241,	// (0x00050fc6) wml_tabs_3_pane

0xc253,	// (0x00050fd8) wml_tabs_4_pane_ParamLimits

0xc253,	// (0x00050fd8) wml_tabs_4_pane

0xc269,	// (0x00050fee) wml_tabs_5_pane_ParamLimits

0xc269,	// (0x00050fee) wml_tabs_5_pane

0xc283,	// (0x00051008) wml_tabs_pane_g2_ParamLimits

0xc283,	// (0x00051008) wml_tabs_pane_g2

0xc298,	// (0x0005101d) wml_tabs_pane_g3_ParamLimits

0xc298,	// (0x0005101d) wml_tabs_pane_g3

0xc2ad,	// (0x00051032) wml_tabs_2_active_pane_ParamLimits

0xc2ad,	// (0x00051032) wml_tabs_2_active_pane

0xc2ad,	// (0x00051032) wml_tabs_2_passive_pane_ParamLimits

0xc2ad,	// (0x00051032) wml_tabs_2_passive_pane

0x4f0a,	// (0x00049c8f) wml_tabs_3_active_pane_cp_ParamLimits

0x4f0a,	// (0x00049c8f) wml_tabs_3_active_pane_cp

0x4f1f,	// (0x00049ca4) wml_tabs_3_passive_pane_ParamLimits

0x4f1f,	// (0x00049ca4) wml_tabs_3_passive_pane

0x4f32,	// (0x00049cb7) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f32,	// (0x00049cb7) wml_tabs_3_passive_pane_cp

0x4f49,	// (0x00049cce) tabs_4_active_pane

0x4f51,	// (0x00049cd6) tabs_4_passive_pane

0x4f5b,	// (0x00049ce0) tabs_4_passive_pane_cp

0x4f63,	// (0x00049ce8) tabs_4_passive_pane_cp2

0x4786,	// (0x0004950b) aid_height_text

0xae32,	// (0x0004fbb7) mup_volume_cont_pane_ParamLimits

0xae32,	// (0x0004fbb7) mup_volume_cont_pane

0x11e0,	// (0x00045f65) aid_size_cell_pinb

0x11e0,	// (0x00045f65) aid_size_list_pinb

0xae32,	// (0x0004fbb7) mup2_volume_cont_pane_ParamLimits

0xae32,	// (0x0004fbb7) mup2_volume_cont_pane

0xc2bb,	// (0x00051040) mup2_volume_cont_pane_g1_ParamLimits

0xc2bb,	// (0x00051040) mup2_volume_cont_pane_g1

0x11ea,	// (0x00045f6f) aid_size_cell_touch_ParamLimits

0x11ea,	// (0x00045f6f) aid_size_cell_touch

0x13be,	// (0x00046143) touch_pane_ParamLimits

0x13be,	// (0x00046143) touch_pane

0x11e0,	// (0x00045f65) main_rss2_pane

0xc2da,	// (0x0005105f) listscroll_rss2_pane

0xc2e3,	// (0x00051068) rss2_navigation_pane

0xc2eb,	// (0x00051070) list_rss2_pane

0xab06,	// (0x0004f88b) scroll_pane_cp22

0xc2f3,	// (0x00051078) rss2_navigation_pane_g1

0xc2fc,	// (0x00051081) rss2_navigation_pane_g2

0xc304,	// (0x00051089) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x0005433f) rss2_navigation_pane_g

0xc30c,	// (0x00051091) rss2_navigation_pane_t1

0x4f6d,	// (0x00049cf2) rss2_list_single_pane_ParamLimits

0x4f6d,	// (0x00049cf2) rss2_list_single_pane

0xc31a,	// (0x0005109f) rss2_list_single_pane_t2

0xc328,	// (0x000510ad) rss2_list_single_pane_t3_ParamLimits

0xc328,	// (0x000510ad) rss2_list_single_pane_t3

0xc345,	// (0x000510ca) rss2_list_single_pane_t4

0x39c2,	// (0x00048747) smil_status_pane_g1

0x13a4,	// (0x00046129) main_image2_pane_ParamLimits

0x13a4,	// (0x00046129) main_image2_pane

0xc1c8,	// (0x00050f4d) main_camera2_pane_g9_ParamLimits

0xc1c8,	// (0x00050f4d) main_camera2_pane_g9

0x4e8a,	// (0x00049c0f) main_camera2_pane_t5_ParamLimits

0x4e8a,	// (0x00049c0f) main_camera2_pane_t5

0xc1d6,	// (0x00050f5b) main_camera2_pane_t6_ParamLimits

0xc1d6,	// (0x00050f5b) main_camera2_pane_t6

0x4f82,	// (0x00049d07) main_image2_pane_g1_ParamLimits

0x4f82,	// (0x00049d07) main_image2_pane_g1

0x445a,	// (0x000491df) smil2_video_pane_ParamLimits

0x445a,	// (0x000491df) smil2_video_pane

0xa5fc,	// (0x0004f381) aid_zoom_text_primary_cp

0xa63b,	// (0x0004f3c0) popup_preview_fixed_window

0x2b99,	// (0x0004791e) im_reading_pane_g1

0x4e7c,	// (0x00049c01) cams2_bc_adjust_pane_cp_ParamLimits

0x4e7c,	// (0x00049c01) cams2_bc_adjust_pane_cp

0xae32,	// (0x0004fbb7) cams2_bc_adjust_pane_ParamLimits

0xae32,	// (0x0004fbb7) cams2_bc_adjust_pane

0x1c23,	// (0x000469a8) cams2_bc_adjust_pane_g1

0x11e0,	// (0x00045f65) cams2_slider_pane

0x1c23,	// (0x000469a8) cams2_slider_pane_g1

0x1c23,	// (0x000469a8) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x00054346) cams2_slider_pane_g

0x1bad,	// (0x00046932) calc_display_pane_ParamLimits

0x1bd2,	// (0x00046957) calc_paper_pane_ParamLimits

0x1bf5,	// (0x0004697a) grid_calc_pane_ParamLimits

0xa9c2,	// (0x0004f747) popup_clock_digital_window_t1_ParamLimits

0xb046,	// (0x0004fdcb) main_image_pane_t1

0x1b8f,	// (0x00046914) aid_size_cell_calc_ParamLimits

0x1b8f,	// (0x00046914) aid_size_cell_calc

0x4a08,	// (0x0004978d) popup_blid_sat_info2_window_ParamLimits

0x4a08,	// (0x0004978d) popup_blid_sat_info2_window

0xc353,	// (0x000510d8) aid_size_cell_blid

0xc1f8,	// (0x00050f7d) bg_popup_window_pane_cp07

0xc370,	// (0x000510f5) grid_popup_blid_pane

0xc37a,	// (0x000510ff) heading_pane_cp05_ParamLimits

0xc37a,	// (0x000510ff) heading_pane_cp05

0xc444,	// (0x000511c9) cell_popup_blid_pane_ParamLimits

0xc444,	// (0x000511c9) cell_popup_blid_pane

0xc468,	// (0x000511ed) cell_popup_blid_pane_g1

0xc470,	// (0x000511f5) cell_popup_blid_pane_t1

0xae32,	// (0x0004fbb7) mup2_indicator_pane_ParamLimits

0xae32,	// (0x0004fbb7) mup2_indicator_pane

0x11e0,	// (0x00045f65) mup2_visualizer_osc_pane

0xc206,	// (0x00050f8b) mup2_visualizer_spec_pane_ParamLimits

0xc206,	// (0x00050f8b) mup2_visualizer_spec_pane

0x11e0,	// (0x00045f65) mup2_spec_half_pane

0x11e0,	// (0x00045f65) mup2_spec_half_pane_cp

0xc47e,	// (0x00051203) mup2_spec_bar_pane_ParamLimits

0xc47e,	// (0x00051203) mup2_spec_bar_pane

0x1c23,	// (0x000469a8) mup2_spec_bar_pane_g1

0xc49d,	// (0x00051222) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x0005436c) mup2_spec_bar_pane_g

0x11e0,	// (0x00045f65) mup2_osc_middle_pane

0x1c23,	// (0x000469a8) mup2_visualizer_osc_pane_g1

0x1430,	// (0x000461b5) popup_number_entry_window_t1_ParamLimits

0x1443,	// (0x000461c8) popup_number_entry_window_t2_ParamLimits

0x1455,	// (0x000461da) popup_number_entry_window_t3_ParamLimits

0x1467,	// (0x000461ec) popup_number_entry_window_t5_ParamLimits

0x1467,	// (0x000461ec) popup_number_entry_window_t5

0xf040,	// (0x00053dc5) popup_number_entry_window_t_ParamLimits

0x149b,	// (0x00046220) text_title_cp2_ParamLimits

0xaf3e,	// (0x0004fcc3) aid_hotspot_pointer_text2_pane

0xaf64,	// (0x0004fce9) main_viewer_pane_g9_ParamLimits

0xaf64,	// (0x0004fce9) main_viewer_pane_g9

0x33a4,	// (0x00048129) cale_month_pane_t1_ParamLimits

0x3a34,	// (0x000487b9) bg_cale_pane_ParamLimits

0x3a4c,	// (0x000487d1) list_cale_pane_ParamLimits

0x3a5d,	// (0x000487e2) listscroll_cale_day_pane_t1

0x3a6f,	// (0x000487f4) scroll_pane_cp09_ParamLimits

0x3eda,	// (0x00048c5f) main_mup_eq_pane_t1_ParamLimits

0x3eda,	// (0x00048c5f) main_mup_eq_pane_t1

0x3ef4,	// (0x00048c79) main_mup_eq_pane_t2_ParamLimits

0x3ef4,	// (0x00048c79) main_mup_eq_pane_t2

0x3f0e,	// (0x00048c93) main_mup_eq_pane_t3_ParamLimits

0x3f0e,	// (0x00048c93) main_mup_eq_pane_t3

0x3f2a,	// (0x00048caf) main_mup_eq_pane_t4_ParamLimits

0x3f2a,	// (0x00048caf) main_mup_eq_pane_t4

0x3f46,	// (0x00048ccb) main_mup_eq_pane_t5_ParamLimits

0x3f46,	// (0x00048ccb) main_mup_eq_pane_t5

0x3f62,	// (0x00048ce7) main_mup_eq_pane_t6_ParamLimits

0x3f62,	// (0x00048ce7) main_mup_eq_pane_t6

0x3f76,	// (0x00048cfb) main_mup_eq_pane_t7_ParamLimits

0x3f76,	// (0x00048cfb) main_mup_eq_pane_t7

0x3f8a,	// (0x00048d0f) main_mup_eq_pane_t8_ParamLimits

0x3f8a,	// (0x00048d0f) main_mup_eq_pane_t8

0x3f9e,	// (0x00048d23) main_mup_eq_pane_t9_ParamLimits

0x3f9e,	// (0x00048d23) main_mup_eq_pane_t9

0x3fb8,	// (0x00048d3d) main_mup_eq_pane_t10_ParamLimits

0x3fb8,	// (0x00048d3d) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0005411f) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0005411f) main_mup_eq_pane_t

0x4067,	// (0x00048dec) mup_equalizer_pane_cp5_ParamLimits

0x407b,	// (0x00048e00) mup_equalizer_pane_cp6_ParamLimits

0x408f,	// (0x00048e14) mup_equalizer_pane_cp7_ParamLimits

0x11e0,	// (0x00045f65) main_gallery_pane

0xc136,	// (0x00050ebb) smil2_volume_pane

0xc13e,	// (0x00050ec3) smil_status_volume_pane_g1_ParamLimits

0xc151,	// (0x00050ed6) smil_status_volume_pane_g2_ParamLimits

0xc164,	// (0x00050ee9) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x000542c5) smil_status_volume_pane_g_ParamLimits

0xc1f8,	// (0x00050f7d) bg_popup_window_pane_cp07_ParamLimits

0xc35b,	// (0x000510e0) blid_firmament_pane

0x13a4,	// (0x00046129) aid_size_cell_gallery_ParamLimits

0x13a4,	// (0x00046129) aid_size_cell_gallery

0x13a4,	// (0x00046129) grid_gallery_pane_ParamLimits

0x13a4,	// (0x00046129) grid_gallery_pane

0xc1f8,	// (0x00050f7d) cell_gallery_pane_ParamLimits

0xc1f8,	// (0x00050f7d) cell_gallery_pane

0x13a4,	// (0x00046129) bg_cell_gallery_focus_pane_ParamLimits

0x13a4,	// (0x00046129) bg_cell_gallery_focus_pane

0x1b51,	// (0x000468d6) cell_gallery_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) cell_gallery_pane_g1

0x1b51,	// (0x000468d6) cell_gallery_pane_g2_ParamLimits

0x1b51,	// (0x000468d6) cell_gallery_pane_g2

0x1b51,	// (0x000468d6) cell_gallery_pane_g3_ParamLimits

0x1b51,	// (0x000468d6) cell_gallery_pane_g3

0x1b5f,	// (0x000468e4) cell_gallery_pane_g4_ParamLimits

0x1b5f,	// (0x000468e4) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x00054371) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x00054371) cell_gallery_pane_g

0xc4a7,	// (0x0005122c) bg_cell_gallery_focus_pane_g1

0xc4af,	// (0x00051234) bg_cell_gallery_focus_pane_g2

0xc4b7,	// (0x0005123c) bg_cell_gallery_focus_pane_g3

0xc4bf,	// (0x00051244) bg_cell_gallery_focus_pane_g4

0xc4c7,	// (0x0005124c) bg_cell_gallery_focus_pane_g5

0xc4cf,	// (0x00051254) bg_cell_gallery_focus_pane_g6

0xc4d7,	// (0x0005125c) bg_cell_gallery_focus_pane_g7

0xc4df,	// (0x00051264) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x0005437a) bg_cell_gallery_focus_pane_g

0xc4e7,	// (0x0005126c) aid_firma_cardinal

0xc4fb,	// (0x00051280) blid_firmament_pane_t1

0xc512,	// (0x00051297) blid_firmament_pane_t2

0xc529,	// (0x000512ae) blid_firmament_pane_t3

0xc540,	// (0x000512c5) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x0005438b) blid_firmament_pane_t

0xc557,	// (0x000512dc) blid_sat_info_pane

0x1c23,	// (0x000469a8) blid_sat_info_pane_g1

0x1c23,	// (0x000469a8) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00053e34) blid_sat_info_pane_g

0xc567,	// (0x000512ec) blid_sat_info_pane_t1

0xc575,	// (0x000512fa) smil2_volume_content_pane

0xc57e,	// (0x00051303) smil2_volume_pane_g1

0x1df9,	// (0x00046b7e) smil2_volume_content_pane_g1

0xc586,	// (0x0005130b) smil2_volume_content_pane_g2

0xc58f,	// (0x00051314) smil2_volume_content_pane_g3

0xc598,	// (0x0005131d) smil2_volume_content_pane_g4

0xc5a1,	// (0x00051326) smil2_volume_content_pane_g5

0xc5aa,	// (0x0005132f) smil2_volume_content_pane_g6

0xc5b3,	// (0x00051338) smil2_volume_content_pane_g7

0xc5bc,	// (0x00051341) smil2_volume_content_pane_g8

0xc5c5,	// (0x0005134a) smil2_volume_content_pane_g9

0xc5ce,	// (0x00051353) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x00054394) smil2_volume_content_pane_g

0x2293,	// (0x00047018) cale_week_day_heading_pane_t1_ParamLimits

0x22bd,	// (0x00047042) cale_week_day_heading_pane_t2_ParamLimits

0x22ec,	// (0x00047071) cale_week_day_heading_pane_t3_ParamLimits

0x231b,	// (0x000470a0) cale_week_day_heading_pane_t4_ParamLimits

0x234a,	// (0x000470cf) cale_week_day_heading_pane_t5_ParamLimits

0x2381,	// (0x00047106) cale_week_day_heading_pane_t6_ParamLimits

0x23b8,	// (0x0004713d) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00053ecc) cale_week_day_heading_pane_t_ParamLimits

0x23e2,	// (0x00047167) bg_cale_side_pane_ParamLimits

0x23f0,	// (0x00047175) cale_week_time_pane_t1_ParamLimits

0x240a,	// (0x0004718f) cale_week_time_pane_t2_ParamLimits

0x2424,	// (0x000471a9) cale_week_time_pane_t3_ParamLimits

0x243e,	// (0x000471c3) cale_week_time_pane_t4_ParamLimits

0x2458,	// (0x000471dd) cale_week_time_pane_t5_ParamLimits

0x2472,	// (0x000471f7) cale_week_time_pane_t6_ParamLimits

0x248c,	// (0x00047211) cale_week_time_pane_t7_ParamLimits

0x24a6,	// (0x0004722b) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00053edb) cale_week_time_pane_t_ParamLimits

0x24c0,	// (0x00047245) cell_cale_week_pane_g2_ParamLimits

0x23e2,	// (0x00047167) bg_cale_side_pane_cp01_ParamLimits

0x37bf,	// (0x00048544) cale_month_week_pane_t1_ParamLimits

0x37d8,	// (0x0004855d) cale_month_week_pane_t2_ParamLimits

0x37f1,	// (0x00048576) cale_month_week_pane_t3_ParamLimits

0x380a,	// (0x0004858f) cale_month_week_pane_t4_ParamLimits

0x3823,	// (0x000485a8) cale_month_week_pane_t5_ParamLimits

0x383c,	// (0x000485c1) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00053fa9) cale_month_week_pane_t_ParamLimits

0xa6dd,	// (0x0004f462) cell_cale_month_pane_g1_ParamLimits

0x11e0,	// (0x00045f65) main_cale_event_viewer_pane

0x11e0,	// (0x00045f65) listscroll_cale_event_viewer_pane

0xc5d7,	// (0x0005135c) list_cale_ev_pane

0xc5df,	// (0x00051364) scroll_pane_cp023

0xc5eb,	// (0x00051370) field_cale_ev_pane_ParamLimits

0xc5eb,	// (0x00051370) field_cale_ev_pane

0xc609,	// (0x0005138e) field_cale_ev_content_pane_ParamLimits

0xc609,	// (0x0005138e) field_cale_ev_content_pane

0xc615,	// (0x0005139a) field_cale_ev_pane_g1_ParamLimits

0xc615,	// (0x0005139a) field_cale_ev_pane_g1

0xc621,	// (0x000513a6) field_cale_ev_pane_g2_ParamLimits

0xc621,	// (0x000513a6) field_cale_ev_pane_g2

0xc639,	// (0x000513be) field_cale_ev_pane_g3_ParamLimits

0xc639,	// (0x000513be) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x000543a9) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x000543a9) field_cale_ev_pane_g

0xc651,	// (0x000513d6) field_cale_ev_pane_t1_ParamLimits

0xc651,	// (0x000513d6) field_cale_ev_pane_t1

0x1f1e,	// (0x00046ca3) field_cale_ev_content_pane_t1_ParamLimits

0x1f1e,	// (0x00046ca3) field_cale_ev_content_pane_t1

0xaed5,	// (0x0004fc5a) bg_button_pane_cp01

0x1f6b,	// (0x00046cf0) listscroll_cale_week_pane_ParamLimits

0x1f7d,	// (0x00046d02) popup_toolbar_window_cp01

0x21d6,	// (0x00046f5b) listscroll_cale_week_pane_t1_ParamLimits

0x1f6b,	// (0x00046cf0) listscroll_cale_day_pane_ParamLimits

0x1f7d,	// (0x00046d02) popup_toolbar_window_cp02

0x3a5d,	// (0x000487e2) listscroll_cale_day_pane_t1_ParamLimits

0x1f6b,	// (0x00046cf0) main_cale_month_pane_ParamLimits

0xc0b4,	// (0x00050e39) popup_toolbar_window_cp03_ParamLimits

0xc0b4,	// (0x00050e39) popup_toolbar_window_cp03

0x4322,	// (0x000490a7) main_image_pane_g2_ParamLimits

0x4322,	// (0x000490a7) main_image_pane_g2

0x4333,	// (0x000490b8) main_image_pane_g3_ParamLimits

0x4333,	// (0x000490b8) main_image_pane_g3

0x0002,

0xf42c,	// (0x000541b1) main_image_pane_g_ParamLimits

0xf42c,	// (0x000541b1) main_image_pane_g

0xb046,	// (0x0004fdcb) main_image_pane_t1_ParamLimits

0x4344,	// (0x000490c9) main_image_pane_t2_ParamLimits

0x4344,	// (0x000490c9) main_image_pane_t2

0x4356,	// (0x000490db) main_image_pane_t3_ParamLimits

0x4356,	// (0x000490db) main_image_pane_t3

0x437e,	// (0x00049103) main_image_pane_t4_ParamLimits

0x437e,	// (0x00049103) main_image_pane_t4

0x0003,

0xf433,	// (0x000541b8) main_image_pane_t_ParamLimits

0xf433,	// (0x000541b8) main_image_pane_t

0x439e,	// (0x00049123) popup_image_details_window_cp01

0x43a8,	// (0x0004912d) popup_toobar_trans_pane_cp01_ParamLimits

0x43a8,	// (0x0004912d) popup_toobar_trans_pane_cp01

0x4ae7,	// (0x0004986c) popup_image_details_window_ParamLimits

0x4ae7,	// (0x0004986c) popup_image_details_window

0xc087,	// (0x00050e0c) popup_image_focus_window

0xc1ba,	// (0x00050f3f) camera2_autofocus_pane_ParamLimits

0xc1ba,	// (0x00050f3f) camera2_autofocus_pane

0x11e0,	// (0x00045f65) bg_popup_sub_pane_cp06

0xc668,	// (0x000513ed) popup_image_focus_window_g1

0xc670,	// (0x000513f5) popup_image_focus_window_g2

0xc678,	// (0x000513fd) popup_image_focus_window_g3

0xc680,	// (0x00051405) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x000543b0) popup_image_focus_window_g

0xc688,	// (0x0005140d) popup_image_focus_window_t1

0xc696,	// (0x0005141b) popup_image_focus_window_t2

0xc6a6,	// (0x0005142b) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x000543b9) popup_image_focus_window_t

0x1b51,	// (0x000468d6) camera2_autofocus_pane_g1

0x13a4,	// (0x00046129) bg_tb_trans_pane_cp01

0xc6b4,	// (0x00051439) popup_image_details_window_g1

0xc6c7,	// (0x0005144c) popup_image_details_window_g2

0x0002,

0xf646,	// (0x000543cb) popup_image_details_window_g

0xc6f0,	// (0x00051475) popup_image_details_window_t1

0xc702,	// (0x00051487) popup_image_details_window_t2

0xc71b,	// (0x000514a0) popup_image_details_window_t3

0xc72f,	// (0x000514b4) popup_image_details_window_t4

0xc74a,	// (0x000514cf) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x000543d2) popup_image_details_window_t

0x1c81,	// (0x00046a06) bg_calc_paper_pane_ParamLimits

0x11e0,	// (0x00045f65) grid_highlight_pane_cp013

0xa64d,	// (0x0004f3d2) list_calc_pane_ParamLimits

0xa65f,	// (0x0004f3e4) scroll_pane_cp024

0x1c95,	// (0x00046a1a) bg_calc_display_pane_ParamLimits

0x1ca1,	// (0x00046a26) calc_display_pane_t1_ParamLimits

0x1cb6,	// (0x00046a3b) calc_display_pane_t2_ParamLimits

0xa667,	// (0x0004f3ec) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00053e4c) calc_display_pane_t_ParamLimits

0x1dbf,	// (0x00046b44) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00053e69) cell_calc_pane_g

0x1dc8,	// (0x00046b4d) cell_calc_pane_t1

0x1dd7,	// (0x00046b5c) grid_highlight_pane_cp02_ParamLimits

0x1ded,	// (0x00046b72) toolbar_button_pane_cp01_ParamLimits

0x1ded,	// (0x00046b72) toolbar_button_pane_cp01

0xb08b,	// (0x0004fe10) temp_image_control_pane_ParamLimits

0xb08b,	// (0x0004fe10) temp_image_control_pane

0x13a4,	// (0x00046129) main_mp3_pane

0xc764,	// (0x000514e9) temp_image_control_pane_g1_ParamLimits

0xc764,	// (0x000514e9) temp_image_control_pane_g1

0xc772,	// (0x000514f7) temp_image_control_pane_g2_ParamLimits

0xc772,	// (0x000514f7) temp_image_control_pane_g2

0xc784,	// (0x00051509) temp_image_control_pane_g3_ParamLimits

0xc784,	// (0x00051509) temp_image_control_pane_g3

0x4f98,	// (0x00049d1d) temp_image_control_pane_g4_ParamLimits

0x4f98,	// (0x00049d1d) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x000543dd) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x000543dd) temp_image_control_pane_g

0xc764,	// (0x000514e9) main_mp3_pane_g1

0x4fab,	// (0x00049d30) main_mp3_pane_g2

0x0007,

0xf661,	// (0x000543e6) main_mp3_pane_g

0xc7b9,	// (0x0005153e) main_mp3_pane_t1

0x1b5f,	// (0x000468e4) main_camera_pane_g8_ParamLimits

0x1b5f,	// (0x000468e4) main_camera_pane_g8

0x26f0,	// (0x00047475) main_video_pane_g7_ParamLimits

0x26f0,	// (0x00047475) main_video_pane_g7

0x1c41,	// (0x000469c6) main_camera2_pane_t7_ParamLimits

0x1c41,	// (0x000469c6) main_camera2_pane_t7

0x2c61,	// (0x000479e6) scroll_pane_cp025_ParamLimits

0x2c61,	// (0x000479e6) scroll_pane_cp025

0x2c75,	// (0x000479fa) scroll_pane_cp026_ParamLimits

0x2c75,	// (0x000479fa) scroll_pane_cp026

0x2c84,	// (0x00047a09) wml_content_pane_ParamLimits

0x11e0,	// (0x00045f65) main_touch_calib_pane

0x507f,	// (0x00049e04) main_touch_calib_pane_g1

0x5091,	// (0x00049e16) main_touch_calib_pane_g2

0x50a3,	// (0x00049e28) main_touch_calib_pane_g3

0x50b5,	// (0x00049e3a) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x00054404) main_touch_calib_pane_g

0x50c7,	// (0x00049e4c) main_touch_calib_pane_t1

0x50e1,	// (0x00049e66) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x0005440d) main_touch_calib_pane_t

0xabe2,	// (0x0004f967) mup_progress_pane_cp02

0xac17,	// (0x0004f99c) navi_pane_g1

0xacd2,	// (0x0004fa57) navi_pane_mp_t3

0x13a4,	// (0x00046129) main_mp3_pane_ParamLimits

0x4c6c,	// (0x000499f1) navi_pane_ParamLimits

0xc764,	// (0x000514e9) main_mp3_pane_g1_ParamLimits

0x4fab,	// (0x00049d30) main_mp3_pane_g2_ParamLimits

0x4fb9,	// (0x00049d3e) main_mp3_pane_g3_ParamLimits

0x4fb9,	// (0x00049d3e) main_mp3_pane_g3

0x4fc7,	// (0x00049d4c) main_mp3_pane_g4_ParamLimits

0x4fc7,	// (0x00049d4c) main_mp3_pane_g4

0x1b51,	// (0x000468d6) main_mp3_pane_g5_ParamLimits

0x1b51,	// (0x000468d6) main_mp3_pane_g5

0xc794,	// (0x00051519) main_mp3_pane_g6_ParamLimits

0xc794,	// (0x00051519) main_mp3_pane_g6

0xc7a1,	// (0x00051526) main_mp3_pane_g7_ParamLimits

0xc7a1,	// (0x00051526) main_mp3_pane_g7

0xc7ad,	// (0x00051532) main_mp3_pane_g8_ParamLimits

0xc7ad,	// (0x00051532) main_mp3_pane_g8

0xf661,	// (0x000543e6) main_mp3_pane_g_ParamLimits

0x4fd3,	// (0x00049d58) main_mp3_pane_t2

0x4fe1,	// (0x00049d66) main_mp3_pane_t3

0xc7c7,	// (0x0005154c) main_mp3_pane_t4

0xc7d5,	// (0x0005155a) main_mp3_pane_t5

0x0005,

0xf672,	// (0x000543f7) main_mp3_pane_t

0xc7e3,	// (0x00051568) mup_progress_pane_cp01

0xa5fc,	// (0x0004f381) aid_zoom_text_secondary2

0xc5d7,	// (0x0005135c) list_cale_ev2_pane

0xc5df,	// (0x00051364) scroll_pane_cp023_ParamLimits

0x5137,	// (0x00049ebc) field_cale_ev2_pane_ParamLimits

0x5137,	// (0x00049ebc) field_cale_ev2_pane

0xc7eb,	// (0x00051570) field_cale_ev2_pane_g1_ParamLimits

0xc7eb,	// (0x00051570) field_cale_ev2_pane_g1

0xc7f7,	// (0x0005157c) field_cale_ev2_pane_g2_ParamLimits

0xc7f7,	// (0x0005157c) field_cale_ev2_pane_g2

0xc80f,	// (0x00051594) field_cale_ev2_pane_g3_ParamLimits

0xc80f,	// (0x00051594) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x00054418) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x00054418) field_cale_ev2_pane_g

0x095d,	// (0x000456e2) field_cale_ev2_pane_t1_ParamLimits

0x095d,	// (0x000456e2) field_cale_ev2_pane_t1

0x0974,	// (0x000456f9) field_cale_ev2_pane_t2_ParamLimits

0x0974,	// (0x000456f9) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x00054421) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x00054421) field_cale_ev2_pane_t

0x41f8,	// (0x00048f7d) main_postcard_pane_g5_ParamLimits

0x41f8,	// (0x00048f7d) main_postcard_pane_g5

0x420e,	// (0x00048f93) main_postcard_pane_g6_ParamLimits

0x420e,	// (0x00048f93) main_postcard_pane_g6

0x13a4,	// (0x00046129) camera2_autofocus_pane_cp_ParamLimits

0x13a4,	// (0x00046129) camera2_autofocus_pane_cp

0x13a4,	// (0x00046129) main_mup3_pane

0x519b,	// (0x00049f20) main_mup3_pane_g1_ParamLimits

0x519b,	// (0x00049f20) main_mup3_pane_g1

0x51bd,	// (0x00049f42) main_mup3_pane_g2_ParamLimits

0x51bd,	// (0x00049f42) main_mup3_pane_g2

0x523b,	// (0x00049fc0) main_mup3_pane_g3_ParamLimits

0x523b,	// (0x00049fc0) main_mup3_pane_g3

0x5281,	// (0x0004a006) main_mup3_pane_g4_ParamLimits

0x5281,	// (0x0004a006) main_mup3_pane_g4

0x52c7,	// (0x0004a04c) main_mup3_pane_g5_ParamLimits

0x52c7,	// (0x0004a04c) main_mup3_pane_g5

0x530d,	// (0x0004a092) main_mup3_pane_g6_ParamLimits

0x530d,	// (0x0004a092) main_mup3_pane_g6

0x1b5f,	// (0x000468e4) main_mup3_pane_g7_ParamLimits

0x1b5f,	// (0x000468e4) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x00054431) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x00054431) main_mup3_pane_g

0x538b,	// (0x0004a110) main_mup3_pane_t1_ParamLimits

0x538b,	// (0x0004a110) main_mup3_pane_t1

0x53ff,	// (0x0004a184) main_mup3_pane_t2_ParamLimits

0x53ff,	// (0x0004a184) main_mup3_pane_t2

0x54d3,	// (0x0004a258) main_mup3_pane_t4_ParamLimits

0x54d3,	// (0x0004a258) main_mup3_pane_t4

0x5529,	// (0x0004a2ae) main_mup3_pane_t5_ParamLimits

0x5529,	// (0x0004a2ae) main_mup3_pane_t5

0x55e5,	// (0x0004a36a) main_mup3_pane_t6_ParamLimits

0x55e5,	// (0x0004a36a) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x00054442) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x00054442) main_mup3_pane_t

0x569d,	// (0x0004a422) mup3_progress_pane_ParamLimits

0x569d,	// (0x0004a422) mup3_progress_pane

0x5733,	// (0x0004a4b8) popup_mup3_control_window_ParamLimits

0x5733,	// (0x0004a4b8) popup_mup3_control_window

0xc833,	// (0x000515b8) popup_mup3_text_window

0x5765,	// (0x0004a4ea) mup3_progress_pane_t1

0x5784,	// (0x0004a509) mup3_progress_pane_t2

0xc83b,	// (0x000515c0) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x0005444f) mup3_progress_pane_t

0xc858,	// (0x000515dd) mup_progress_pane_cp03

0x11e0,	// (0x00045f65) bg_tb_trans_pane_cp04

0x57a3,	// (0x0004a528) mup3_volume_pane

0x57ab,	// (0x0004a530) popup_mup3_control_window_g1

0x57b4,	// (0x0004a539) mup3_volume_pane_g1

0x57bd,	// (0x0004a542) mup3_volume_pane_g2

0x57c6,	// (0x0004a54b) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x00054456) mup3_volume_pane_g

0x11e0,	// (0x00045f65) bg_tb_trans_pane_cp03

0xc868,	// (0x000515ed) popup_mup3_text_window_g1

0xc870,	// (0x000515f5) popup_mup3_text_window_t1

0x1d98,	// (0x00046b1d) list_calc_item_pane_g1_ParamLimits

0xc2d1,	// (0x00051056) mup_volume_pane_cp_g1

0x50fb,	// (0x00049e80) main_touch_calib_pane_t3

0x510f,	// (0x00049e94) main_touch_calib_pane_t4

0x5123,	// (0x00049ea8) main_touch_calib_pane_t5

0xa5d8,	// (0x0004f35d) aid_cell_size_toolbar2

0xa5e0,	// (0x0004f365) aid_popup3_width_pane

0xa5ec,	// (0x0004f371) aid_zoom_text_msg_primary

0x25b1,	// (0x00047336) vorec_t7

0x1d00,	// (0x00046a85) bg_calc_paper_pane_g1_ParamLimits

0x1d0c,	// (0x00046a91) bg_calc_paper_pane_g2_ParamLimits

0x1d18,	// (0x00046a9d) bg_calc_paper_pane_g3_ParamLimits

0x1d24,	// (0x00046aa9) bg_calc_paper_pane_g4_ParamLimits

0x1d30,	// (0x00046ab5) bg_calc_paper_pane_g5_ParamLimits

0x1d3c,	// (0x00046ac1) bg_calc_paper_pane_g6_ParamLimits

0x1d4b,	// (0x00046ad0) bg_calc_paper_pane_g7_ParamLimits

0x1d5a,	// (0x00046adf) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00053e53) bg_calc_paper_pane_g_ParamLimits

0x1d6d,	// (0x00046af2) calc_bg_paper_pane_g9_ParamLimits

0x13a4,	// (0x00046129) image_qvga_pane_ParamLimits

0x13a4,	// (0x00046129) image_qvga_pane

0x1ad6,	// (0x0004685b) bg_popup_sub_pane_cp04_ParamLimits

0xafc2,	// (0x0004fd47) popup_mup_playback_window_g1_ParamLimits

0xafce,	// (0x0004fd53) popup_mup_playback_window_t1_ParamLimits

0xafe3,	// (0x0004fd68) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000541ac) popup_mup_playback_window_t_ParamLimits

0x1b5f,	// (0x000468e4) main_mup2_pane_g3_ParamLimits

0x1b5f,	// (0x000468e4) main_mup2_pane_g3

0x28f2,	// (0x00047677) popup_toolbar_window_cp04

0xb354,	// (0x000500d9) popup_call2_audio_second_window_g3_ParamLimits

0xb354,	// (0x000500d9) popup_call2_audio_second_window_g3

0xb76c,	// (0x000504f1) popup_call2_audio_first_window_g4_ParamLimits

0xb76c,	// (0x000504f1) popup_call2_audio_first_window_g4

0xbd93,	// (0x00050b18) popup_call2_audio_in_window_g4_ParamLimits

0xbd93,	// (0x00050b18) popup_call2_audio_in_window_g4

0x4304,	// (0x00049089) aid_area_sk_bg_cut_ParamLimits

0x4304,	// (0x00049089) aid_area_sk_bg_cut

0xaff8,	// (0x0004fd7d) aid_area_sk_bg_cut_2_ParamLimits

0xaff8,	// (0x0004fd7d) aid_area_sk_bg_cut_2

0x11e0,	// (0x00045f65) aid_placing_details_win

0x11e0,	// (0x00045f65) aid_placing_details_win_2

0x1b51,	// (0x000468d6) camera2_autofocus_pane_g1_ParamLimits

0x1349,	// (0x000460ce) popup_fixed_preview_cale_window_ParamLimits

0x1349,	// (0x000460ce) popup_fixed_preview_cale_window

0xad59,	// (0x0004fade) navi_slider_pane_g3

0xad62,	// (0x0004fae7) navi_slider_pane_g4

0xad6b,	// (0x0004faf0) navi_slider_pane_g5

0xad59,	// (0x0004fade) navi_slider_pane_g6

0xad74,	// (0x0004faf9) navi_slider_pane_g7

0xaea2,	// (0x0004fc27) mup_scale_pane_g3

0xaeab,	// (0x0004fc30) mup_scale_pane_g4

0xaeb4,	// (0x0004fc39) mup_scale_pane_g5

0x40a3,	// (0x00048e28) mup_scale_pane_g6

0x40ac,	// (0x00048e31) mup_scale_pane_g7

0x1c23,	// (0x000469a8) cams2_slider_pane_g3

0x1c23,	// (0x000469a8) cams2_slider_pane_g4

0x1c23,	// (0x000469a8) cams2_slider_pane_g5

0x1c23,	// (0x000469a8) cams2_slider_pane_g6

0x1c23,	// (0x000469a8) cams2_slider_pane_g7

0x1c23,	// (0x000469a8) camera2_autofocus_pane_cp_g1

0xc069,	// (0x00050dee) bg_popup_preview_window_pane_cp02_ParamLimits

0xc069,	// (0x00050dee) bg_popup_preview_window_pane_cp02

0xc87e,	// (0x00051603) list_fp_cale_pane_ParamLimits

0xc87e,	// (0x00051603) list_fp_cale_pane

0xc88a,	// (0x0005160f) popup_fixed_preview_cale_window_t1_ParamLimits

0xc88a,	// (0x0005160f) popup_fixed_preview_cale_window_t1

0x57cf,	// (0x0004a554) popup_fixed_preview_cale_window_t2_ParamLimits

0x57cf,	// (0x0004a554) popup_fixed_preview_cale_window_t2

0x57e4,	// (0x0004a569) popup_fixed_preview_cale_window_t3_ParamLimits

0x57e4,	// (0x0004a569) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x0005445d) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x0005445d) popup_fixed_preview_cale_window_t

0x57f9,	// (0x0004a57e) list_single_fp_cale_pane_ParamLimits

0x57f9,	// (0x0004a57e) list_single_fp_cale_pane

0xc8a8,	// (0x0005162d) list_single_fp_cale_pane_g1_ParamLimits

0xc8a8,	// (0x0005162d) list_single_fp_cale_pane_g1

0xc8b4,	// (0x00051639) list_single_fp_cale_pane_g2_ParamLimits

0xc8b4,	// (0x00051639) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x00054464) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x00054464) list_single_fp_cale_pane_g

0xc8cd,	// (0x00051652) list_single_fp_cale_pane_t1_ParamLimits

0xc8cd,	// (0x00051652) list_single_fp_cale_pane_t1

0xc8df,	// (0x00051664) list_single_fp_cale_pane_t2_ParamLimits

0xc8df,	// (0x00051664) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x0005446b) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x0005446b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11e0,	// (0x00045f65) main_dialer_pane

0x11e0,	// (0x00045f65) aid_cell_size_keypad

0x11e0,	// (0x00045f65) dialer_ne_pane

0x11e0,	// (0x00045f65) grid_dialer_command_1_pane

0x11e0,	// (0x00045f65) grid_dialer_command_2_pane

0x11e0,	// (0x00045f65) grid_dialer_keypad_pane

0x580e,	// (0x0004a593) bg_popup_call_pane_cp06_ParamLimits

0x580e,	// (0x0004a593) bg_popup_call_pane_cp06

0x580e,	// (0x0004a593) dialer_ne_clear_pane_ParamLimits

0x580e,	// (0x0004a593) dialer_ne_clear_pane

0x1c23,	// (0x000469a8) dialer_ne_pane_g1

0x1c41,	// (0x000469c6) dialer_ne_pane_t1_ParamLimits

0x1c41,	// (0x000469c6) dialer_ne_pane_t1

0x581c,	// (0x0004a5a1) dialer_ne_pane_t2_ParamLimits

0x581c,	// (0x0004a5a1) dialer_ne_pane_t2

0x5844,	// (0x0004a5c9) dialer_ne_pane_t3_ParamLimits

0x5844,	// (0x0004a5c9) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x00054470) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x00054470) dialer_ne_pane_t

0x5844,	// (0x0004a5c9) dialer_ne_pane_t3_copy1_ParamLimits

0x5844,	// (0x0004a5c9) dialer_ne_pane_t3_copy1

0xc912,	// (0x00051697) cell_dialer_keypad_pane_ParamLimits

0xc912,	// (0x00051697) cell_dialer_keypad_pane

0x13a4,	// (0x00046129) cell_dialer_command_1_pane_ParamLimits

0x13a4,	// (0x00046129) cell_dialer_command_1_pane

0xc929,	// (0x000516ae) cell_dialer_command_2_pane_ParamLimits

0xc929,	// (0x000516ae) cell_dialer_command_2_pane

0x13a4,	// (0x00046129) bg_button_pane_cp02_ParamLimits

0x13a4,	// (0x00046129) bg_button_pane_cp02

0x1b51,	// (0x000468d6) cell_dialer_keypad_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) cell_dialer_keypad_pane_g1

0x13a4,	// (0x00046129) bg_button_pane_cp03_ParamLimits

0x13a4,	// (0x00046129) bg_button_pane_cp03

0x1b51,	// (0x000468d6) cell_dialer_command_1_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) cell_dialer_command_1_pane_g1

0x11e0,	// (0x00045f65) bg_button_pane_cp04

0x1c23,	// (0x000469a8) cell_dialer_command_2_pane_g1

0x11e0,	// (0x00045f65) bg_button_pane_cp06

0x1c23,	// (0x000469a8) dialer_ne_clear_pane_g1

0xac23,	// (0x0004f9a8) navi_pane_g2

0xac51,	// (0x0004f9d6) navi_pane_g3

0x0002,

0xf32f,	// (0x000540b4) navi_pane_g

0xace0,	// (0x0004fa65) navi_pane_mv_g2

0xad07,	// (0x0004fa8c) navi_pane_mv_g5

0x3e86,	// (0x00048c0b) navi_pane_mv_t1

0x1c95,	// (0x00046a1a) main_clock2_pane

0x13a4,	// (0x00046129) main_clock2_list_pane_ParamLimits

0x13a4,	// (0x00046129) main_clock2_list_pane

0x58da,	// (0x0004a65f) main_clock2_pane_t1_ParamLimits

0x58da,	// (0x0004a65f) main_clock2_pane_t1

0x5915,	// (0x0004a69a) main_clock2_pane_t2_ParamLimits

0x5915,	// (0x0004a69a) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x0005447c) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x0005447c) main_clock2_pane_t

0x59b5,	// (0x0004a73a) popup_clock_analogue_window_cp03_ParamLimits

0x59b5,	// (0x0004a73a) popup_clock_analogue_window_cp03

0x59da,	// (0x0004a75f) popup_clock_digital_window_cp02_ParamLimits

0x59da,	// (0x0004a75f) popup_clock_digital_window_cp02

0x5a53,	// (0x0004a7d8) main_clock2_list_single_pane_ParamLimits

0x5a53,	// (0x0004a7d8) main_clock2_list_single_pane

0x2569,	// (0x000472ee) list_highlight_pane_cp05

0xc970,	// (0x000516f5) main_clock2_list_single_pane_t1

0x28f2,	// (0x00047677) popup_toolbar_window_cp04_ParamLimits

0x1b5f,	// (0x000468e4) camera2_autofocus_pane_g2_ParamLimits

0x1b5f,	// (0x000468e4) camera2_autofocus_pane_g2

0x1b5f,	// (0x000468e4) camera2_autofocus_pane_g3_ParamLimits

0x1b5f,	// (0x000468e4) camera2_autofocus_pane_g3

0x1b5f,	// (0x000468e4) camera2_autofocus_pane_g4_ParamLimits

0x1b5f,	// (0x000468e4) camera2_autofocus_pane_g4

0x1b5f,	// (0x000468e4) camera2_autofocus_pane_g5_ParamLimits

0x1b5f,	// (0x000468e4) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x000543c0) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x000543c0) camera2_autofocus_pane_g

0x5157,	// (0x00049edc) camera2_autofocus_pane_cp_g2

0x515f,	// (0x00049ee4) camera2_autofocus_pane_cp_g3

0x5167,	// (0x00049eec) camera2_autofocus_pane_cp_g4

0x516f,	// (0x00049ef4) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x00054426) camera2_autofocus_pane_cp_g

0x11e0,	// (0x00045f65) popup_dialer_spcha_window

0x11e0,	// (0x00045f65) bg_popup_sub_pane_cp07

0x11e0,	// (0x00045f65) list_spcha_pane

0xc97e,	// (0x00051703) list_single_spcha_pane_ParamLimits

0xc97e,	// (0x00051703) list_single_spcha_pane

0x11e0,	// (0x00045f65) list_highlight_pane_cp06

0xa7e5,	// (0x0004f56a) list_single_spcha_pane_t1

0xbb3d,	// (0x000508c2) popup_call2_audio_out_window_g4_ParamLimits

0xbb3d,	// (0x000508c2) popup_call2_audio_out_window_g4

0x11e0,	// (0x00045f65) main_imed2_pane

0xc08f,	// (0x00050e14) popup_imed_adjust2_window

0x4aff,	// (0x00049884) popup_imed_trans_window_ParamLimits

0x4aff,	// (0x00049884) popup_imed_trans_window

0xc3a6,	// (0x0005112b) popup_blid_sat_info2_window_t1

0xc3b4,	// (0x00051139) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x00054355) popup_blid_sat_info2_window_t

0x5b04,	// (0x0004a889) aid_size_cell_colour_35

0x5b24,	// (0x0004a8a9) aid_size_cell_colour_112

0x5b44,	// (0x0004a8c9) aid_size_cell_effect

0xae32,	// (0x0004fbb7) bg_tb_trans_pane_cp02

0xa70b,	// (0x0004f490) heading_imed_pane

0x5b64,	// (0x0004a8e9) listscroll_imed_pane

0xc990,	// (0x00051715) heading_imed_pane_g1

0xc998,	// (0x0005171d) heading_imed_pane_t1

0xc9a6,	// (0x0005172b) grid_imed_colour_35_pane_ParamLimits

0xc9a6,	// (0x0005172b) grid_imed_colour_35_pane

0x5b70,	// (0x0004a8f5) grid_imed_effect_pane

0xc9bd,	// (0x00051742) list_imed_aspect_pane

0x5b86,	// (0x0004a90b) scroll_pane_cp027_ParamLimits

0x5b86,	// (0x0004a90b) scroll_pane_cp027

0x5b97,	// (0x0004a91c) cell_imed_effect_pane_ParamLimits

0x5b97,	// (0x0004a91c) cell_imed_effect_pane

0xc9c5,	// (0x0005174a) cell_imed_colour_pane_ParamLimits

0xc9c5,	// (0x0005174a) cell_imed_colour_pane

0xca07,	// (0x0005178c) cell_imed_colour_pane_g1_ParamLimits

0xca07,	// (0x0005178c) cell_imed_colour_pane_g1

0xca18,	// (0x0005179d) hgihlgiht_grid_pane_cp016_ParamLimits

0xca18,	// (0x0005179d) hgihlgiht_grid_pane_cp016

0x5bbe,	// (0x0004a943) cell_imed_effect_pane_g1

0x5bc6,	// (0x0004a94b) grid_highlight_pane_cp017

0xca29,	// (0x000517ae) list_imed_single_pane_ParamLimits

0xca29,	// (0x000517ae) list_imed_single_pane

0x11e0,	// (0x00045f65) list_highlight_pane_cp07

0xca3e,	// (0x000517c3) list_imed_aspect_pane_comp1_t1

0xae32,	// (0x0004fbb7) bg_tb_trans_pane_cp05

0xca60,	// (0x000517e5) popup_imed_adjust2_window_g1

0xca87,	// (0x0005180c) popup_imed_adjust2_window_t1

0xca9f,	// (0x00051824) slider_imed_adjust_pane

0xcab3,	// (0x00051838) slider_imed_adjust_pane_g1

0xcac3,	// (0x00051848) slider_imed_adjust_pane_g2

0xcad3,	// (0x00051858) slider_imed_adjust_pane_g3

0xcae4,	// (0x00051869) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x00054499) slider_imed_adjust_pane_g

0x5bcf,	// (0x0004a954) aid_size_cell_clipart2

0x5bdb,	// (0x0004a960) grid_imed_clipart_pane

0xaec5,	// (0x0004fc4a) scroll_pane_cp031

0x5be5,	// (0x0004a96a) cell_imed_clipart_pane_ParamLimits

0x5be5,	// (0x0004a96a) cell_imed_clipart_pane

0x5c07,	// (0x0004a98c) cell_imed_clipart_pane_g1

0x11e0,	// (0x00045f65) grid_highlight_pane_cp014

0x58b6,	// (0x0004a63b) main_clock2_pane_g1_ParamLimits

0x58b6,	// (0x0004a63b) main_clock2_pane_g1

0x59fa,	// (0x0004a77f) aid_call2_pane_cp10

0x5a0c,	// (0x0004a791) aid_call_pane_cp10

0xab84,	// (0x0004f909) popup_clock_analogue_window_cp10_g1

0xab84,	// (0x0004f909) popup_clock_analogue_window_cp10_g2

0x5a1e,	// (0x0004a7a3) popup_clock_analogue_window_cp10_g3

0x5a1e,	// (0x0004a7a3) popup_clock_analogue_window_cp10_g4

0xab84,	// (0x0004f909) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x00054487) popup_clock_analogue_window_cp10_g

0x5a34,	// (0x0004a7b9) popup_clock_analogue_window_cp10_t1

0x5a65,	// (0x0004a7ea) clock_digital_number_pane_cp10_ParamLimits

0x5a65,	// (0x0004a7ea) clock_digital_number_pane_cp10

0x5a7d,	// (0x0004a802) clock_digital_number_pane_cp11_ParamLimits

0x5a7d,	// (0x0004a802) clock_digital_number_pane_cp11

0x5a95,	// (0x0004a81a) clock_digital_number_pane_cp12_ParamLimits

0x5a95,	// (0x0004a81a) clock_digital_number_pane_cp12

0x5aaf,	// (0x0004a834) clock_digital_number_pane_cp13_ParamLimits

0x5aaf,	// (0x0004a834) clock_digital_number_pane_cp13

0x5ac9,	// (0x0004a84e) clock_digital_separator_pane_cp10_ParamLimits

0x5ac9,	// (0x0004a84e) clock_digital_separator_pane_cp10

0x5ae3,	// (0x0004a868) popup_clock_digital_window_cp02_t1_ParamLimits

0x5ae3,	// (0x0004a868) popup_clock_digital_window_cp02_t1

0x1ace,	// (0x00046853) clock_digital_number_pane_cp10_g1

0x1ace,	// (0x00046853) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x000544a2) clock_digital_number_pane_cp10_g

0x1ace,	// (0x00046853) clock_digital_separator_pane_cp10_g1

0x1ace,	// (0x00046853) clock_digital_separator_pane_g2_cp10

0xad0f,	// (0x0004fa94) navi_pane_vded_g4

0xad18,	// (0x0004fa9d) navi_pane_vded_g5

0xad21,	// (0x0004faa6) navi_pane_vded_t1

0x11e0,	// (0x00045f65) main_vded_pane

0x5c10,	// (0x0004a995) main_vded_pane_g1

0x5c1a,	// (0x0004a99f) main_vded_pane_g2

0x5c24,	// (0x0004a9a9) main_vded_pane_g3

0x0002,

0xf722,	// (0x000544a7) main_vded_pane_g

0x5c2e,	// (0x0004a9b3) main_vded_pane_t1

0x5c3c,	// (0x0004a9c1) main_vded_pane_t2

0x0001,

0xf729,	// (0x000544ae) main_vded_pane_t

0x5c4a,	// (0x0004a9cf) vded_slider_pane

0x5c52,	// (0x0004a9d7) vded_video_pane

0xcaf5,	// (0x0005187a) vded_video_pane_g1

0x5c5a,	// (0x0004a9df) vded_video_pane_g2

0x1c23,	// (0x000469a8) vded_video_pane_g3

0x0002,

0xf72e,	// (0x000544b3) vded_video_pane_g

0xcaff,	// (0x00051884) vded_slider_pane_g1

0xc2d1,	// (0x00051056) vded_slider_pane_g2

0xcb08,	// (0x0005188d) vded_slider_pane_g3

0xcb11,	// (0x00051896) vded_slider_pane_g4

0xcb1a,	// (0x0005189f) vded_slider_pane_g5

0x0004,

0xf735,	// (0x000544ba) vded_slider_pane_g

0x571b,	// (0x0004a4a0) mup3_rocker_pane_ParamLimits

0x571b,	// (0x0004a4a0) mup3_rocker_pane

0x5c63,	// (0x0004a9e8) mup3_control_keys_pane_g1

0x5c6b,	// (0x0004a9f0) mup3_control_keys_pane_g2

0x5c73,	// (0x0004a9f8) mup3_control_keys_pane_g3

0x5c7b,	// (0x0004aa00) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x000544c5) mup3_control_keys_pane_g

0x1380,	// (0x00046105) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1380,	// (0x00046105) popup_toolbar2_fixed_window_cp01

0x574f,	// (0x0004a4d4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x574f,	// (0x0004a4d4) popup_toolbar2_fixed_window_cp02

0xb4c6,	// (0x0005024b) popup_call2_audio_second_window_t4_ParamLimits

0xb4c6,	// (0x0005024b) popup_call2_audio_second_window_t4

0xba02,	// (0x00050787) popup_call2_audio_first_window_t6_ParamLimits

0xba02,	// (0x00050787) popup_call2_audio_first_window_t6

0xbc40,	// (0x000509c5) popup_call2_audio_out_window_t6_ParamLimits

0xbc40,	// (0x000509c5) popup_call2_audio_out_window_t6

0x11e0,	// (0x00045f65) main_vitu_pane

0x13a4,	// (0x00046129) aid_size_cell_itu_ParamLimits

0x13a4,	// (0x00046129) aid_size_cell_itu

0x13a4,	// (0x00046129) bg_popup_window_pane_cp08_ParamLimits

0x13a4,	// (0x00046129) bg_popup_window_pane_cp08

0x13a4,	// (0x00046129) field_vitu_entry_pane_ParamLimits

0x13a4,	// (0x00046129) field_vitu_entry_pane

0x13a4,	// (0x00046129) grid_vitu_function_pane_ParamLimits

0x13a4,	// (0x00046129) grid_vitu_function_pane

0x13a4,	// (0x00046129) grid_vitu_itu_pane_ParamLimits

0x13a4,	// (0x00046129) grid_vitu_itu_pane

0x13a4,	// (0x00046129) cell_vitu_itu_pane_ParamLimits

0x13a4,	// (0x00046129) cell_vitu_itu_pane

0x13a4,	// (0x00046129) cell_vitu_function_pane_ParamLimits

0x13a4,	// (0x00046129) cell_vitu_function_pane

0x13a4,	// (0x00046129) bg_popup_sub_pane_cp08_ParamLimits

0x13a4,	// (0x00046129) bg_popup_sub_pane_cp08

0x1c2d,	// (0x000469b2) field_vitu_entry_pane_t1_ParamLimits

0x1c2d,	// (0x000469b2) field_vitu_entry_pane_t1

0xcb23,	// (0x000518a8) field_vitu_entry_pane_t2_ParamLimits

0xcb23,	// (0x000518a8) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x000544ce) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x000544ce) field_vitu_entry_pane_t

0xc1f8,	// (0x00050f7d) bg_button_pane_cp05_ParamLimits

0xc1f8,	// (0x00050f7d) bg_button_pane_cp05

0xcb40,	// (0x000518c5) cell_vitu_itu_pane_g1

0xae1e,	// (0x0004fba3) cell_vitu_itu_pane_t1_ParamLimits

0xae1e,	// (0x0004fba3) cell_vitu_itu_pane_t1

0xae1e,	// (0x0004fba3) cell_vitu_itu_pane_t2_ParamLimits

0xae1e,	// (0x0004fba3) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x000544d3) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x000544d3) cell_vitu_itu_pane_t

0x11e0,	// (0x00045f65) bg_button_pane_cp07

0x1c23,	// (0x000469a8) cell_vitu_function_pane_g1

0xa645,	// (0x0004f3ca) main_calc_pane_g1

0x120e,	// (0x00045f93) aid_visual_content_pane

0x11e0,	// (0x00045f65) main_vradio_pane

0x1b51,	// (0x000468d6) main_vradio_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) main_vradio_pane_g1

0x1b5f,	// (0x000468e4) main_vradio_pane_g2_ParamLimits

0x1b5f,	// (0x000468e4) main_vradio_pane_g2

0x0001,

0xf755,	// (0x000544da) main_vradio_pane_g_ParamLimits

0xf755,	// (0x000544da) main_vradio_pane_g

0x1c2d,	// (0x000469b2) main_vradio_pane_t1_ParamLimits

0x1c2d,	// (0x000469b2) main_vradio_pane_t1

0x1c2d,	// (0x000469b2) main_vradio_pane_t2_ParamLimits

0x1c2d,	// (0x000469b2) main_vradio_pane_t2

0x1c41,	// (0x000469c6) main_vradio_pane_t3_ParamLimits

0x1c41,	// (0x000469c6) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x000544df) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x000544df) main_vradio_pane_t

0x13a4,	// (0x00046129) vradio_rocker_control_pane_ParamLimits

0x13a4,	// (0x00046129) vradio_rocker_control_pane

0x13a4,	// (0x00046129) vradio_station_info_pane_ParamLimits

0x13a4,	// (0x00046129) vradio_station_info_pane

0x13a4,	// (0x00046129) vradio_frequency_info_pane_ParamLimits

0x13a4,	// (0x00046129) vradio_frequency_info_pane

0x1c23,	// (0x000469a8) vradio_station_info_pane_g1

0xae1e,	// (0x0004fba3) vradio_station_info_pane_t1_ParamLimits

0xae1e,	// (0x0004fba3) vradio_station_info_pane_t1

0x1c41,	// (0x000469c6) vradio_station_info_pane_t2_ParamLimits

0x1c41,	// (0x000469c6) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x000544e6) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x000544e6) vradio_station_info_pane_t

0x11e0,	// (0x00045f65) vradio_tuning_pane

0x5c8b,	// (0x0004aa10) vradio_rocker_control_pane_g1

0xcb5c,	// (0x000518e1) vradio_rocker_control_pane_g2

0x5c95,	// (0x0004aa1a) vradio_rocker_control_pane_g3

0x5c9f,	// (0x0004aa24) vradio_rocker_control_pane_g4

0x5ca9,	// (0x0004aa2e) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x000544eb) vradio_rocker_control_pane_g

0x1c23,	// (0x000469a8) vradio_frequency_info_pane_g1

0x1c2d,	// (0x000469b2) vradio_frequency_info_pane_t1_ParamLimits

0x1c2d,	// (0x000469b2) vradio_frequency_info_pane_t1

0x5cb3,	// (0x0004aa38) vradio_tuning_pane_g1

0x5cc0,	// (0x0004aa45) vradio_tuning_pane_t1

0xa604,	// (0x0004f389) area_side_right_pane_ParamLimits

0xa604,	// (0x0004f389) area_side_right_pane

0xc030,	// (0x00050db5) status_small_pane_g1

0xc038,	// (0x00050dbd) status_small_pane_g2

0xc041,	// (0x00050dc6) status_small_pane_g3

0xc04a,	// (0x00050dcf) status_small_pane_g4

0x0003,

0xf532,	// (0x000542b7) status_small_pane_g

0xc053,	// (0x00050dd8) status_small_pane_t1

0x11e0,	// (0x00045f65) main_video3_pane

0x11e0,	// (0x00045f65) cams_zoom_vslider_pane

0xcb64,	// (0x000518e9) image3_wide_pane_ParamLimits

0xcb64,	// (0x000518e9) image3_wide_pane

0x11e0,	// (0x00045f65) image3_wide_small_pane

0xcb7e,	// (0x00051903) main_video3_pane_g1_ParamLimits

0xcb7e,	// (0x00051903) main_video3_pane_g1

0xcb7e,	// (0x00051903) main_video3_pane_g2_ParamLimits

0xcb7e,	// (0x00051903) main_video3_pane_g2

0x0001,

0xf771,	// (0x000544f6) main_video3_pane_g_ParamLimits

0xf771,	// (0x000544f6) main_video3_pane_g

0xcb9c,	// (0x00051921) main_video3_pane_t1_ParamLimits

0xcb9c,	// (0x00051921) main_video3_pane_t1

0xcb9c,	// (0x00051921) main_video3_pane_t2_ParamLimits

0xcb9c,	// (0x00051921) main_video3_pane_t2

0xcb9c,	// (0x00051921) main_video3_pane_t3_ParamLimits

0xcb9c,	// (0x00051921) main_video3_pane_t3

0x0002,

0xf776,	// (0x000544fb) main_video3_pane_t_ParamLimits

0xf776,	// (0x000544fb) main_video3_pane_t

0x1c23,	// (0x000469a8) cams_zoom_vslider_pane_g1

0x1c23,	// (0x000469a8) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00053e34) cams_zoom_vslider_pane_g

0x11e0,	// (0x00045f65) small_slider_vertical_pane

0x1c23,	// (0x000469a8) small_slider_vertical_pane_g1

0x1c23,	// (0x000469a8) small_slider_vertical_pane_g2

0xcbc3,	// (0x00051948) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x00054502) small_slider_vertical_pane_g

0x11e0,	// (0x00045f65) main_hwr_training_pane

0xcbcc,	// (0x00051951) hwr_training_instruct_pane_ParamLimits

0xcbcc,	// (0x00051951) hwr_training_instruct_pane

0x5ccf,	// (0x0004aa54) hwr_training_navi_pane_ParamLimits

0x5ccf,	// (0x0004aa54) hwr_training_navi_pane

0x5cee,	// (0x0004aa73) hwr_training_write_pane_ParamLimits

0x5cee,	// (0x0004aa73) hwr_training_write_pane

0x11e0,	// (0x00045f65) bg_frame_shadow_pane

0xcc03,	// (0x00051988) hwr_training_write_pane_g1

0xcc0b,	// (0x00051990) hwr_training_write_pane_g2

0xcc13,	// (0x00051998) hwr_training_write_pane_g3

0xcc1b,	// (0x000519a0) hwr_training_write_pane_g4

0xcc23,	// (0x000519a8) hwr_training_write_pane_g5

0xcc2b,	// (0x000519b0) hwr_training_write_pane_g6

0xcc33,	// (0x000519b8) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x00054509) hwr_training_write_pane_g

0xcc3b,	// (0x000519c0) hwr_training_navi_pane_g1_ParamLimits

0xcc3b,	// (0x000519c0) hwr_training_navi_pane_g1

0xcc4d,	// (0x000519d2) hwr_training_navi_pane_g2_ParamLimits

0xcc4d,	// (0x000519d2) hwr_training_navi_pane_g2

0xcc5f,	// (0x000519e4) hwr_training_navi_pane_g3_ParamLimits

0xcc5f,	// (0x000519e4) hwr_training_navi_pane_g3

0xcc6f,	// (0x000519f4) hwr_training_navi_pane_g4_ParamLimits

0xcc6f,	// (0x000519f4) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x00054518) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x00054518) hwr_training_navi_pane_g

0xcc7c,	// (0x00051a01) hwr_training_navi_pane_t1

0x5d36,	// (0x0004aabb) list_single_hwr_training_instruct_pane_ParamLimits

0x5d36,	// (0x0004aabb) list_single_hwr_training_instruct_pane

0xcc8a,	// (0x00051a0f) list_single_hwr_training_instruct_pane_t1

0xc4a7,	// (0x0005122c) bg_frame_shadow_pane_g1

0xcc99,	// (0x00051a1e) bg_frame_shadow_pane_g2

0xcca1,	// (0x00051a26) bg_frame_shadow_pane_g3

0xcca9,	// (0x00051a2e) bg_frame_shadow_pane_g4

0xccb1,	// (0x00051a36) bg_frame_shadow_pane_g5

0xccb9,	// (0x00051a3e) bg_frame_shadow_pane_g6

0xccc1,	// (0x00051a46) bg_frame_shadow_pane_g7

0x1edc,	// (0x00046c61) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x00054523) bg_frame_shadow_pane_g

0x11e0,	// (0x00045f65) main_video_tele_dialer_pane

0x5d4b,	// (0x0004aad0) aid_size_cell_video_keypad_ParamLimits

0x5d4b,	// (0x0004aad0) aid_size_cell_video_keypad

0x5d65,	// (0x0004aaea) grid_video_dialer_keypad_pane_ParamLimits

0x5d65,	// (0x0004aaea) grid_video_dialer_keypad_pane

0x5db1,	// (0x0004ab36) video_down_pane_cp_ParamLimits

0x5db1,	// (0x0004ab36) video_down_pane_cp

0x5de3,	// (0x0004ab68) cell_video_dialer_keypad_pane_ParamLimits

0x5de3,	// (0x0004ab68) cell_video_dialer_keypad_pane

0xccc9,	// (0x00051a4e) bg_button_pane_cp08_ParamLimits

0xccc9,	// (0x00051a4e) bg_button_pane_cp08

0x5e05,	// (0x0004ab8a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e05,	// (0x0004ab8a) cell_video_dialer_keypad_pane_g1

0x5705,	// (0x0004a48a) mup3_rocker2_pane_ParamLimits

0x5705,	// (0x0004a48a) mup3_rocker2_pane

0x1c23,	// (0x000469a8) mup3_rocker2_pane_g1

0x49e0,	// (0x00049765) main_dialer2_pane

0x11e0,	// (0x00045f65) main_mp4_pane

0xccf3,	// (0x00051a78) main_mp4_pane_g1_ParamLimits

0xccf3,	// (0x00051a78) main_mp4_pane_g1

0xccf3,	// (0x00051a78) main_mp4_pane_g2_ParamLimits

0xccf3,	// (0x00051a78) main_mp4_pane_g2

0x5e3c,	// (0x0004abc1) main_mp4_pane_g3_ParamLimits

0x5e3c,	// (0x0004abc1) main_mp4_pane_g3

0xcd11,	// (0x00051a96) main_mp4_pane_g4_ParamLimits

0xcd11,	// (0x00051a96) main_mp4_pane_g4

0xcd39,	// (0x00051abe) main_mp4_pane_g5_ParamLimits

0xcd39,	// (0x00051abe) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x00054543) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x00054543) main_mp4_pane_g

0xcda1,	// (0x00051b26) main_mp4_pane_t1_ParamLimits

0xcda1,	// (0x00051b26) main_mp4_pane_t1

0xce03,	// (0x00051b88) main_mp4_pane_t2_ParamLimits

0xce03,	// (0x00051b88) main_mp4_pane_t2

0xce67,	// (0x00051bec) main_mp4_pane_t3_ParamLimits

0xce67,	// (0x00051bec) main_mp4_pane_t3

0xcec5,	// (0x00051c4a) main_mp4_pane_t4_ParamLimits

0xcec5,	// (0x00051c4a) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x00054554) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x00054554) main_mp4_pane_t

0xcf23,	// (0x00051ca8) mp4_progress_pane_ParamLimits

0xcf23,	// (0x00051ca8) mp4_progress_pane

0xcf57,	// (0x00051cdc) mp4_rocker_pane_ParamLimits

0xcf57,	// (0x00051cdc) mp4_rocker_pane

0xd598,	// (0x0005231d) mp4_progress_pane_t1

0xd5ba,	// (0x0005233f) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x0005455d) mp4_progress_pane_t

0xd5dc,	// (0x00052361) mup_progress_pane_cp04

0x1c23,	// (0x000469a8) mp4_rocker_pane_g1

0x13a4,	// (0x00046129) aid_cell_size_keypad2_ParamLimits

0x13a4,	// (0x00046129) aid_cell_size_keypad2

0x13a4,	// (0x00046129) dialer2_ne_pane_ParamLimits

0x13a4,	// (0x00046129) dialer2_ne_pane

0x13a4,	// (0x00046129) grid_dialer2_keypad_pane_ParamLimits

0x13a4,	// (0x00046129) grid_dialer2_keypad_pane

0xc1f8,	// (0x00050f7d) bg_popup_call_pane_cp07_ParamLimits

0xc1f8,	// (0x00050f7d) bg_popup_call_pane_cp07

0x5e6c,	// (0x0004abf1) dialer2_ne_pane_t1_ParamLimits

0x5e6c,	// (0x0004abf1) dialer2_ne_pane_t1

0x5eaa,	// (0x0004ac2f) cell_dialer2_keypad_pane_ParamLimits

0x5eaa,	// (0x0004ac2f) cell_dialer2_keypad_pane

0xc1f8,	// (0x00050f7d) bg_button_pane_pane_cp04_ParamLimits

0xc1f8,	// (0x00050f7d) bg_button_pane_pane_cp04

0x1b51,	// (0x000468d6) cell_dialer2_keypad_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) cell_dialer2_keypad_pane_g1

0x27b4,	// (0x00047539) aid_placing_vt_set_content_ParamLimits

0x27b4,	// (0x00047539) aid_placing_vt_set_content

0x27dc,	// (0x00047561) aid_placing_vt_set_title_ParamLimits

0x27dc,	// (0x00047561) aid_placing_vt_set_title

0x11e0,	// (0x00045f65) main_image3_pane

0x5f1f,	// (0x0004aca4) area_side_right_pane_cp01_ParamLimits

0x5f1f,	// (0x0004aca4) area_side_right_pane_cp01

0x5f36,	// (0x0004acbb) main_image3_pane_g1_ParamLimits

0x5f36,	// (0x0004acbb) main_image3_pane_g1

0x5f44,	// (0x0004acc9) main_image3_pane_g2_ParamLimits

0x5f44,	// (0x0004acc9) main_image3_pane_g2

0x5f6c,	// (0x0004acf1) main_image3_pane_g3_ParamLimits

0x5f6c,	// (0x0004acf1) main_image3_pane_g3

0x5f96,	// (0x0004ad1b) main_image3_pane_g4_ParamLimits

0x5f96,	// (0x0004ad1b) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x0005456c) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x0005456c) main_image3_pane_g

0x5fc0,	// (0x0004ad45) main_image3_pane_t1_ParamLimits

0x5fc0,	// (0x0004ad45) main_image3_pane_t1

0x6018,	// (0x0004ad9d) main_image3_pane_t2_ParamLimits

0x6018,	// (0x0004ad9d) main_image3_pane_t2

0x606a,	// (0x0004adef) main_image3_pane_t3_ParamLimits

0x606a,	// (0x0004adef) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x00054575) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x00054575) main_image3_pane_t

0x13a4,	// (0x00046129) grid_sctrl_middle_pane_cp01_ParamLimits

0x13a4,	// (0x00046129) grid_sctrl_middle_pane_cp01

0x60f2,	// (0x0004ae77) cell_sctrl_middle_pane_cp01_ParamLimits

0x60f2,	// (0x0004ae77) cell_sctrl_middle_pane_cp01

0x610f,	// (0x0004ae94) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x610f,	// (0x0004ae94) cell_sctrl_middle_pane_cp01_g1

0x11e0,	// (0x00045f65) main_call4_pane

0x6125,	// (0x0004aeaa) aid_size_button_call4_ParamLimits

0x6125,	// (0x0004aeaa) aid_size_button_call4

0x6158,	// (0x0004aedd) call4_windows_pane_ParamLimits

0x6158,	// (0x0004aedd) call4_windows_pane

0x6177,	// (0x0004aefc) grid_call4_button_pane_ParamLimits

0x6177,	// (0x0004aefc) grid_call4_button_pane

0x61aa,	// (0x0004af2f) call4_windows_conf_pane

0x61c1,	// (0x0004af46) popup_call4_audio_first_window_ParamLimits

0x61c1,	// (0x0004af46) popup_call4_audio_first_window

0x6211,	// (0x0004af96) popup_call4_audio_second_window_ParamLimits

0x6211,	// (0x0004af96) popup_call4_audio_second_window

0x6228,	// (0x0004afad) popup_call4_audio_wait_window_ParamLimits

0x6228,	// (0x0004afad) popup_call4_audio_wait_window

0x6236,	// (0x0004afbb) cell_call4_button_pane_ParamLimits

0x6236,	// (0x0004afbb) cell_call4_button_pane

0x625b,	// (0x0004afe0) bg_button_pane_cp09_ParamLimits

0x625b,	// (0x0004afe0) bg_button_pane_cp09

0x6267,	// (0x0004afec) cell_call4_button_pane_g1_ParamLimits

0x6267,	// (0x0004afec) cell_call4_button_pane_g1

0x628d,	// (0x0004b012) cell_call4_button_pane_t1_ParamLimits

0x628d,	// (0x0004b012) cell_call4_button_pane_t1

0xd625,	// (0x000523aa) popup_call4_audio_conf_window_ParamLimits

0xd625,	// (0x000523aa) popup_call4_audio_conf_window

0x5765,	// (0x0004a4ea) mup3_progress_pane_t1_ParamLimits

0x5784,	// (0x0004a509) mup3_progress_pane_t2_ParamLimits

0xc83b,	// (0x000515c0) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x0005444f) mup3_progress_pane_t_ParamLimits

0xc858,	// (0x000515dd) mup_progress_pane_cp03_ParamLimits

0x5c83,	// (0x0004aa08) mup3_control_keys_pane_g4_copy1

0xcf57,	// (0x00051cdc) mp4_rocker2_pane_ParamLimits

0xcf57,	// (0x00051cdc) mp4_rocker2_pane

0xcfcf,	// (0x00051d54) mp4_rocker2_pane_g1

0xcfcf,	// (0x00051d54) mp4_rocker2_pane_g2

0xcfcf,	// (0x00051d54) mp4_rocker2_pane_g3

0xcfcf,	// (0x00051d54) mp4_rocker2_pane_g4

0xcfcf,	// (0x00051d54) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x0005457e) mp4_rocker2_pane_g

0x11e0,	// (0x00045f65) main_camera4_pane

0x11e0,	// (0x00045f65) main_video4_pane

0x5d7f,	// (0x0004ab04) main_video_tele_dialer_pane_t1_ParamLimits

0x5d7f,	// (0x0004ab04) main_video_tele_dialer_pane_t1

0x5d98,	// (0x0004ab1d) main_video_tele_dialer_pane_t2_ParamLimits

0x5d98,	// (0x0004ab1d) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x00054534) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x00054534) main_video_tele_dialer_pane_t

0x62cb,	// (0x0004b050) cam4_autofocus_pane_ParamLimits

0x62cb,	// (0x0004b050) cam4_autofocus_pane

0x62e1,	// (0x0004b066) cam4_image_uncrop_pane_ParamLimits

0x62e1,	// (0x0004b066) cam4_image_uncrop_pane

0x62fb,	// (0x0004b080) cam4_indicators_pane_ParamLimits

0x62fb,	// (0x0004b080) cam4_indicators_pane

0x6326,	// (0x0004b0ab) main_camera4_pane_g1_ParamLimits

0x6326,	// (0x0004b0ab) main_camera4_pane_g1

0x6338,	// (0x0004b0bd) main_camera4_pane_g2_ParamLimits

0x6338,	// (0x0004b0bd) main_camera4_pane_g2

0x634b,	// (0x0004b0d0) main_camera4_pane_g3_ParamLimits

0x634b,	// (0x0004b0d0) main_camera4_pane_g3

0x635e,	// (0x0004b0e3) main_camera4_pane_g4_ParamLimits

0x635e,	// (0x0004b0e3) main_camera4_pane_g4

0x6371,	// (0x0004b0f6) main_camera4_pane_g5_ParamLimits

0x6371,	// (0x0004b0f6) main_camera4_pane_g5

0x0005,

0xf804,	// (0x00054589) main_camera4_pane_g_ParamLimits

0xf804,	// (0x00054589) main_camera4_pane_g

0x6395,	// (0x0004b11a) main_camera4_pane_t1_ParamLimits

0x6395,	// (0x0004b11a) main_camera4_pane_t1

0x1b51,	// (0x000468d6) bg_tb_trans_pane_cp06

0xcffb,	// (0x00051d80) cam4_indicators_pane_g1

0xd00c,	// (0x00051d91) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x000545a4) cam4_indicators_pane_g

0xd02a,	// (0x00051daf) cam4_indicators_pane_t1

0x63f9,	// (0x0004b17e) main_video4_pane_g1_ParamLimits

0x63f9,	// (0x0004b17e) main_video4_pane_g1

0x6408,	// (0x0004b18d) main_video4_pane_g2_ParamLimits

0x6408,	// (0x0004b18d) main_video4_pane_g2

0x6417,	// (0x0004b19c) main_video4_pane_g3_ParamLimits

0x6417,	// (0x0004b19c) main_video4_pane_g3

0x6426,	// (0x0004b1ab) main_video4_pane_g4_ParamLimits

0x6426,	// (0x0004b1ab) main_video4_pane_g4

0x0004,

0xf826,	// (0x000545ab) main_video4_pane_g_ParamLimits

0xf826,	// (0x000545ab) main_video4_pane_g

0x6444,	// (0x0004b1c9) vid4_indicators_pane_ParamLimits

0x6444,	// (0x0004b1c9) vid4_indicators_pane

0x6472,	// (0x0004b1f7) video4_image_uncrop_cif_pane_ParamLimits

0x6472,	// (0x0004b1f7) video4_image_uncrop_cif_pane

0x648c,	// (0x0004b211) video4_image_uncrop_nhd_pane_ParamLimits

0x648c,	// (0x0004b211) video4_image_uncrop_nhd_pane

0x62e1,	// (0x0004b066) video4_image_uncrop_vga_pane_ParamLimits

0x62e1,	// (0x0004b066) video4_image_uncrop_vga_pane

0x13a4,	// (0x00046129) bg_tb_trans_pane_cp07

0xd056,	// (0x00051ddb) vid4_indicators_pane_g1

0xd06a,	// (0x00051def) vid4_indicators_pane_g2

0xd07e,	// (0x00051e03) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x000545b6) vid4_indicators_pane_g

0xd0ad,	// (0x00051e32) vid4_indicators_pane_t1

0x64a0,	// (0x0004b225) cam4_autofocus_pane_g1

0x64a8,	// (0x0004b22d) cam4_autofocus_pane_g2

0x64b0,	// (0x0004b235) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x000545c1) cam4_autofocus_pane_g

0x64b8,	// (0x0004b23d) cam4_autofocus_pane_g3_copy1

0x5dc7,	// (0x0004ab4c) video_down_pane_cp_t1

0x5dd5,	// (0x0004ab5a) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x00054539) video_down_pane_cp_t

0x13a4,	// (0x00046129) popup_vitu2_window_ParamLimits

0x13a4,	// (0x00046129) popup_vitu2_window

0x64c0,	// (0x0004b245) aid_size_cell2_itu2_ParamLimits

0x64c0,	// (0x0004b245) aid_size_cell2_itu2

0x64e6,	// (0x0004b26b) aid_size_cell_itu2_ParamLimits

0x64e6,	// (0x0004b26b) aid_size_cell_itu2

0x580e,	// (0x0004a593) bg_popup_window_pane_cp09_ParamLimits

0x580e,	// (0x0004a593) bg_popup_window_pane_cp09

0x6542,	// (0x0004b2c7) field_vitu2_entry_pane_ParamLimits

0x6542,	// (0x0004b2c7) field_vitu2_entry_pane

0x6568,	// (0x0004b2ed) grid_vitu2_function_pane_ParamLimits

0x6568,	// (0x0004b2ed) grid_vitu2_function_pane

0x65b9,	// (0x0004b33e) grid_vitu2_itu_pane_ParamLimits

0x65b9,	// (0x0004b33e) grid_vitu2_itu_pane

0x664f,	// (0x0004b3d4) cell_vitu2_itu_pane_ParamLimits

0x664f,	// (0x0004b3d4) cell_vitu2_itu_pane

0x667b,	// (0x0004b400) cell_vitu2_function_pane_ParamLimits

0x667b,	// (0x0004b400) cell_vitu2_function_pane

0xd639,	// (0x000523be) bg_popup_call_pane_cp08_ParamLimits

0xd639,	// (0x000523be) bg_popup_call_pane_cp08

0xd650,	// (0x000523d5) field_vitu2_entry_pane_g1

0xd65c,	// (0x000523e1) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x000545c8) field_vitu2_entry_pane_g

0x0989,	// (0x0004570e) field_vitu2_entry_pane_t1_ParamLimits

0x0989,	// (0x0004570e) field_vitu2_entry_pane_t1

0xd0c4,	// (0x00051e49) field_vitu2_entry_pane_t2_ParamLimits

0xd0c4,	// (0x00051e49) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x000545cf) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x000545cf) field_vitu2_entry_pane_t

0x66ba,	// (0x0004b43f) bg_button_pane_cp010_ParamLimits

0x66ba,	// (0x0004b43f) bg_button_pane_cp010

0x66c8,	// (0x0004b44d) cell_vitu2_itu_pane_g1

0x66ee,	// (0x0004b473) cell_vitu2_itu_pane_t1_ParamLimits

0x66ee,	// (0x0004b473) cell_vitu2_itu_pane_t1

0x09b9,	// (0x0004573e) cell_vitu2_itu_pane_t2_ParamLimits

0x09b9,	// (0x0004573e) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x000545d9) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x000545d9) cell_vitu2_itu_pane_t

0x13a4,	// (0x00046129) bg_button_pane_cp011

0x674c,	// (0x0004b4d1) cell_vitu2_function_pane_g1

0x11e0,	// (0x00045f65) main_myfav_hc_pane

0x60ba,	// (0x0004ae3f) popup_image3_note_pane_ParamLimits

0x60ba,	// (0x0004ae3f) popup_image3_note_pane

0x60d6,	// (0x0004ae5b) popup_image3_tool_bar_pane_ParamLimits

0x60d6,	// (0x0004ae5b) popup_image3_tool_bar_pane

0x0a47,	// (0x000457cc) cell_vitu2_itu_pane_t3_ParamLimits

0x0a47,	// (0x000457cc) cell_vitu2_itu_pane_t3

0x11e0,	// (0x00045f65) bg_popup_trans_pane

0xd670,	// (0x000523f5) grid_image3_tool_bar_pane

0xd67a,	// (0x000523ff) bg_popup_trans_pane_g1

0x2dad,	// (0x00047b32) bg_popup_trans_pane_g2

0xd682,	// (0x00052407) bg_popup_trans_pane_g3

0xd68a,	// (0x0005240f) bg_popup_trans_pane_g4

0xd692,	// (0x00052417) bg_popup_trans_pane_g5

0xd69a,	// (0x0005241f) bg_popup_trans_pane_g6

0xd6a2,	// (0x00052427) bg_popup_trans_pane_g7

0xd6aa,	// (0x0005242f) bg_popup_trans_pane_g8

0x2d8d,	// (0x00047b12) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x000545e0) bg_popup_trans_pane_g

0xd6b2,	// (0x00052437) cell_image3_tool_bar_pane_ParamLimits

0xd6b2,	// (0x00052437) cell_image3_tool_bar_pane

0x1c23,	// (0x000469a8) cell_image3_tool_bar_pane_g1

0x11e0,	// (0x00045f65) bg_popup_trans_pane_cp1

0xd6c6,	// (0x0005244b) popup_image3_note_pane_t1

0xd6d4,	// (0x00052459) popup_image3_note_pane_t2

0xd6e2,	// (0x00052467) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x000545f3) popup_image3_note_pane_t

0xd6f0,	// (0x00052475) popup_image3_note_pane_t3_copy1

0x6760,	// (0x0004b4e5) bg_myfav_hc_instruction_pane_ParamLimits

0x6760,	// (0x0004b4e5) bg_myfav_hc_instruction_pane

0x6774,	// (0x0004b4f9) cell_myfav_contact_pane_ParamLimits

0x6774,	// (0x0004b4f9) cell_myfav_contact_pane

0x6792,	// (0x0004b517) cell_myfav_contact_pane_cp1_ParamLimits

0x6792,	// (0x0004b517) cell_myfav_contact_pane_cp1

0x67aa,	// (0x0004b52f) cell_myfav_contact_pane_cp2_ParamLimits

0x67aa,	// (0x0004b52f) cell_myfav_contact_pane_cp2

0x67c2,	// (0x0004b547) cell_myfav_contact_pane_cp3_ParamLimits

0x67c2,	// (0x0004b547) cell_myfav_contact_pane_cp3

0x67d9,	// (0x0004b55e) cell_myfav_contact_pane_cp4_ParamLimits

0x67d9,	// (0x0004b55e) cell_myfav_contact_pane_cp4

0x67f1,	// (0x0004b576) cell_myfav_contact_pane_cp5_ParamLimits

0x67f1,	// (0x0004b576) cell_myfav_contact_pane_cp5

0x6805,	// (0x0004b58a) cell_myfav_contact_pane_cp6_ParamLimits

0x6805,	// (0x0004b58a) cell_myfav_contact_pane_cp6

0x681b,	// (0x0004b5a0) cell_myfav_contact_pane_cp7_ParamLimits

0x681b,	// (0x0004b5a0) cell_myfav_contact_pane_cp7

0xd6fe,	// (0x00052483) listscroll_gen_pane_cp05

0x6835,	// (0x0004b5ba) main_myfav_hc_pane_g1_ParamLimits

0x6835,	// (0x0004b5ba) main_myfav_hc_pane_g1

0x684f,	// (0x0004b5d4) main_myfav_hc_pane_g2_ParamLimits

0x684f,	// (0x0004b5d4) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x000545fa) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x000545fa) main_myfav_hc_pane_g

0x6881,	// (0x0004b606) main_myfav_hc_pane_t1_ParamLimits

0x6881,	// (0x0004b606) main_myfav_hc_pane_t1

0xd707,	// (0x0005248c) main_myfav_hc_pane_t2_ParamLimits

0xd707,	// (0x0005248c) main_myfav_hc_pane_t2

0xd719,	// (0x0005249e) main_myfav_hc_pane_t3_ParamLimits

0xd719,	// (0x0005249e) main_myfav_hc_pane_t3

0x6898,	// (0x0004b61d) main_myfav_hc_pane_t4_ParamLimits

0x6898,	// (0x0004b61d) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x00054601) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x00054601) main_myfav_hc_pane_t

0x1c23,	// (0x000469a8) bg_myfav_hc_instruction_pane_g1

0xd72b,	// (0x000524b0) cell_myfav_contact_pane_g1_ParamLimits

0xd72b,	// (0x000524b0) cell_myfav_contact_pane_g1

0xd72b,	// (0x000524b0) cell_myfav_contact_pane_g2_ParamLimits

0xd72b,	// (0x000524b0) cell_myfav_contact_pane_g2

0xd737,	// (0x000524bc) cell_myfav_contact_pane_g3_ParamLimits

0xd737,	// (0x000524bc) cell_myfav_contact_pane_g3

0x1b5f,	// (0x000468e4) cell_myfav_contact_pane_g4_ParamLimits

0x1b5f,	// (0x000468e4) cell_myfav_contact_pane_g4

0xd744,	// (0x000524c9) cell_myfav_contact_pane_g5_ParamLimits

0xd744,	// (0x000524c9) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x0005460c) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x0005460c) cell_myfav_contact_pane_g

0x6869,	// (0x0004b5ee) main_myfav_hc_pane_g3_ParamLimits

0x6869,	// (0x0004b5ee) main_myfav_hc_pane_g3

0x080d,	// (0x00045592) popup_adpt_find_window

0x68c0,	// (0x0004b645) afind_page_pane_ParamLimits

0x68c0,	// (0x0004b645) afind_page_pane

0x68d5,	// (0x0004b65a) aid_size_cell_afind_ParamLimits

0x68d5,	// (0x0004b65a) aid_size_cell_afind

0x68f3,	// (0x0004b678) bg_popup_sub_pane_cp09_ParamLimits

0x68f3,	// (0x0004b678) bg_popup_sub_pane_cp09

0x6900,	// (0x0004b685) find_pane_cp01_ParamLimits

0x6900,	// (0x0004b685) find_pane_cp01

0xd750,	// (0x000524d5) grid_afind_control_pane_ParamLimits

0xd750,	// (0x000524d5) grid_afind_control_pane

0x690d,	// (0x0004b692) grid_afind_pane_ParamLimits

0x690d,	// (0x0004b692) grid_afind_pane

0x692f,	// (0x0004b6b4) cell_afind_pane_ParamLimits

0x692f,	// (0x0004b6b4) cell_afind_pane

0x1c23,	// (0x000469a8) afind_page_pane_g1

0x6996,	// (0x0004b71b) afind_page_pane_g2

0x699e,	// (0x0004b723) afind_page_pane_g3

0x0002,

0xf892,	// (0x00054617) afind_page_pane_g

0x69a6,	// (0x0004b72b) afind_page_pane_t1

0xd776,	// (0x000524fb) cell_afind_grid_control_pane_ParamLimits

0xd776,	// (0x000524fb) cell_afind_grid_control_pane

0xd785,	// (0x0005250a) bg_button_pane_cp69_ParamLimits

0xd785,	// (0x0005250a) bg_button_pane_cp69

0x69b4,	// (0x0004b739) cell_afind_pane_g1_ParamLimits

0x69b4,	// (0x0004b739) cell_afind_pane_g1

0x69c1,	// (0x0004b746) cell_afind_pane_t1_ParamLimits

0x69c1,	// (0x0004b746) cell_afind_pane_t1

0xd791,	// (0x00052516) bg_button_pane_cp72

0xd799,	// (0x0005251e) cell_afind_grid_control_pane_g1

0x44e1,	// (0x00049266) aid_image_placing_area_ParamLimits

0x44e1,	// (0x00049266) aid_image_placing_area

0x1b51,	// (0x000468d6) field_vitu_entry_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) field_vitu_entry_pane_g1

0x1b51,	// (0x000468d6) field_vitu_entry_pane_g2_ParamLimits

0x1b51,	// (0x000468d6) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00053f41) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00053f41) field_vitu_entry_pane_g

0xcb40,	// (0x000518c5) cell_vitu_itu_pane_g1_ParamLimits

0xcb23,	// (0x000518a8) cell_vitu_itu_pane_t3_ParamLimits

0xcb23,	// (0x000518a8) cell_vitu_itu_pane_t3

0xd598,	// (0x0005231d) mp4_progress_pane_t1_ParamLimits

0xd5ba,	// (0x0005233f) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x0005455d) mp4_progress_pane_t_ParamLimits

0xd5dc,	// (0x00052361) mup_progress_pane_cp04_ParamLimits

0x68ac,	// (0x0004b631) main_myfav_hc_pane_t5_ParamLimits

0x68ac,	// (0x0004b631) main_myfav_hc_pane_t5

0xa5f4,	// (0x0004f379) aid_zoom_text_primary

0x080d,	// (0x00045592) popup_adpt_find_window_ParamLimits

0x13a4,	// (0x00046129) main_cam_set_pane

0x6312,	// (0x0004b097) cam4_zoom_pane_ParamLimits

0x6312,	// (0x0004b097) cam4_zoom_pane

0x69d3,	// (0x0004b758) main_cam_set_pane_g1_ParamLimits

0x69d3,	// (0x0004b758) main_cam_set_pane_g1

0x69e1,	// (0x0004b766) main_cam_set_pane_g2_ParamLimits

0x69e1,	// (0x0004b766) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x0005461e) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x0005461e) main_cam_set_pane_g

0x6a02,	// (0x0004b787) main_cam_set_pane_t1_ParamLimits

0x6a02,	// (0x0004b787) main_cam_set_pane_t1

0x6a1d,	// (0x0004b7a2) main_cset_listscroll_pane_ParamLimits

0x6a1d,	// (0x0004b7a2) main_cset_listscroll_pane

0x6a43,	// (0x0004b7c8) main_cset_slider_pane_ParamLimits

0x6a43,	// (0x0004b7c8) main_cset_slider_pane

0xd7aa,	// (0x0005252f) main_cset_list_pane_ParamLimits

0xd7aa,	// (0x0005252f) main_cset_list_pane

0xd7ba,	// (0x0005253f) scroll_pane_cp028

0x6a69,	// (0x0004b7ee) aid_area_touch_slider

0x6a85,	// (0x0004b80a) cset_slider_pane

0x6aa8,	// (0x0004b82d) main_cset_slider_pane_g1

0x6abd,	// (0x0004b842) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x00054623) main_cset_slider_pane_g

0xd7f3,	// (0x00052578) main_cset_slider_pane_t1

0x6b79,	// (0x0004b8fe) main_cset_slider_pane_t2

0x6b93,	// (0x0004b918) main_cset_slider_pane_t3

0x6bad,	// (0x0004b932) main_cset_slider_pane_t4

0x6bc7,	// (0x0004b94c) main_cset_slider_pane_t5

0x6be1,	// (0x0004b966) main_cset_slider_pane_t6

0x6bf6,	// (0x0004b97b) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x00054648) main_cset_slider_pane_t

0x6cfa,	// (0x0004ba7f) cset_list_set_pane_ParamLimits

0x6cfa,	// (0x0004ba7f) cset_list_set_pane

0xd88d,	// (0x00052612) aid_position_infowindow_above

0xd895,	// (0x0005261a) aid_position_infowindow_below

0xd0e1,	// (0x00051e66) cset_list_set_pane_g1_ParamLimits

0xd0e1,	// (0x00051e66) cset_list_set_pane_g1

0xd0ed,	// (0x00051e72) cset_list_set_pane_g3_ParamLimits

0xd0ed,	// (0x00051e72) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x00054667) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x00054667) cset_list_set_pane_g

0xd0fc,	// (0x00051e81) cset_list_set_pane_t1_ParamLimits

0xd0fc,	// (0x00051e81) cset_list_set_pane_t1

0x13a4,	// (0x00046129) list_highlight_pane_cp021_ParamLimits

0x13a4,	// (0x00046129) list_highlight_pane_cp021

0xaea2,	// (0x0004fc27) cset_slider_pane_g1

0xaeb4,	// (0x0004fc39) cset_slider_pane_g2

0xaeab,	// (0x0004fc30) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x0005466c) cset_slider_pane_g

0xd111,	// (0x00051e96) aid_area_touch_cam4_zoom

0xd119,	// (0x00051e9e) cam4_zoom_cont_pane

0xd121,	// (0x00051ea6) cam4_zoom_pane_g1

0xd129,	// (0x00051eae) cam4_zoom_pane_g2

0x6d0c,	// (0x0004ba91) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x00054673) cam4_zoom_pane_g

0xd89d,	// (0x00052622) cam4_zoom_cont_pane_g1

0xd8a6,	// (0x0005262b) cam4_zoom_cont_pane_g2

0xd8af,	// (0x00052634) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x0005467a) cam4_zoom_cont_pane_g

0x6143,	// (0x0004aec8) call4_image_pane_ParamLimits

0x6143,	// (0x0004aec8) call4_image_pane

0x61aa,	// (0x0004af2f) call4_windows_conf_pane_ParamLimits

0x61ef,	// (0x0004af74) popup_call4_audio_in_window_ParamLimits

0x61ef,	// (0x0004af74) popup_call4_audio_in_window

0x11e0,	// (0x00045f65) bg_popup_call2_act_pane_cp02

0xd61d,	// (0x000523a2) call4_list_conf_pane

0x1c23,	// (0x000469a8) call4_image_pane_g1

0x1c23,	// (0x000469a8) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00053e34) call4_image_pane_g

0xd8b8,	// (0x0005263d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8b8,	// (0x0005263d) list_single_graphic_popup_conf4_pane

0x11e0,	// (0x00045f65) list_highlight_pane_cp022

0xd8cb,	// (0x00052650) list_single_graphic_popup_conf4_pane_g1

0xaa54,	// (0x0004f7d9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x00054681) list_single_graphic_popup_conf4_pane_g

0xd8d3,	// (0x00052658) list_single_graphic_popup_conf4_pane_t1

0x2912,	// (0x00047697) popup_vtel_slider_window_ParamLimits

0x2912,	// (0x00047697) popup_vtel_slider_window

0xd5ef,	// (0x00052374) dialer2_ne_pane_t2_ParamLimits

0xd5ef,	// (0x00052374) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x00054562) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x00054562) dialer2_ne_pane_t

0xc1f8,	// (0x00050f7d) bg_popup_sub_pane_cp010_ParamLimits

0xc1f8,	// (0x00050f7d) bg_popup_sub_pane_cp010

0x6d14,	// (0x0004ba99) popup_vtel_slider_window_g1_ParamLimits

0x6d14,	// (0x0004ba99) popup_vtel_slider_window_g1

0x6d27,	// (0x0004baac) popup_vtel_slider_window_g2_ParamLimits

0x6d27,	// (0x0004baac) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x00054686) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x00054686) popup_vtel_slider_window_g

0x6d7d,	// (0x0004bb02) vtel_slider_pane_ParamLimits

0x6d7d,	// (0x0004bb02) vtel_slider_pane

0x6d9f,	// (0x0004bb24) vtel_slider_pane_g1_ParamLimits

0x6d9f,	// (0x0004bb24) vtel_slider_pane_g1

0x6db3,	// (0x0004bb38) vtel_slider_pane_g2_ParamLimits

0x6db3,	// (0x0004bb38) vtel_slider_pane_g2

0x6dcb,	// (0x0004bb50) vtel_slider_pane_g3_ParamLimits

0x6dcb,	// (0x0004bb50) vtel_slider_pane_g3

0x6d9f,	// (0x0004bb24) vtel_slider_pane_g4_ParamLimits

0x6d9f,	// (0x0004bb24) vtel_slider_pane_g4

0x6de1,	// (0x0004bb66) vtel_slider_pane_g5_ParamLimits

0x6de1,	// (0x0004bb66) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x0005468f) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x0005468f) vtel_slider_pane_g

0x13a4,	// (0x00046129) main_gallery2_pane

0x6512,	// (0x0004b297) aid_size_row_itut2_dropdow_list_ParamLimits

0x6512,	// (0x0004b297) aid_size_row_itut2_dropdow_list

0x6590,	// (0x0004b315) grid_vitu2_function_top_pane_ParamLimits

0x6590,	// (0x0004b315) grid_vitu2_function_top_pane

0x65fa,	// (0x0004b37f) popup_vitu2_dropdown_list_window_ParamLimits

0x65fa,	// (0x0004b37f) popup_vitu2_dropdown_list_window

0x6621,	// (0x0004b3a6) popup_vitu2_match_list_window

0x6df7,	// (0x0004bb7c) cell_vitu2_function_top_pane_ParamLimits

0x6df7,	// (0x0004bb7c) cell_vitu2_function_top_pane

0x6e0f,	// (0x0004bb94) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e0f,	// (0x0004bb94) cell_vitu2_function_top_pane_cp01

0x6e2b,	// (0x0004bbb0) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e2b,	// (0x0004bbb0) cell_vitu2_function_top_wide_pane

0x13a4,	// (0x00046129) bg_button_pane_cp012

0x6e49,	// (0x0004bbce) cell_vitu2_function_top_pane_g1

0xd131,	// (0x00051eb6) bg_button_pane_cp013_ParamLimits

0xd131,	// (0x00051eb6) bg_button_pane_cp013

0x6e5d,	// (0x0004bbe2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e5d,	// (0x0004bbe2) cell_vitu2_function_top_wide_pane_g1

0x13a4,	// (0x00046129) bg_popup_sub_pane_cp20

0x6e75,	// (0x0004bbfa) list_vitu2_match_list_pane

0xd67a,	// (0x000523ff) bg_popup_sub_pane_cp20_g1

0xd682,	// (0x00052407) bg_popup_sub_pane_cp20_g2

0x2dad,	// (0x00047b32) bg_popup_sub_pane_cp20_g3

0xd68a,	// (0x0005240f) bg_popup_sub_pane_cp20_g4

0x2d8d,	// (0x00047b12) bg_popup_sub_pane_cp20_g5

0xd8e9,	// (0x0005266e) bg_popup_sub_pane_cp20_g6

0xd69a,	// (0x0005241f) bg_popup_sub_pane_cp20_g7

0xd6a2,	// (0x00052427) bg_popup_sub_pane_cp20_g8

0xd6aa,	// (0x0005242f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x0005469a) bg_popup_sub_pane_cp20_g

0xd14d,	// (0x00051ed2) list_vitu2_match_list_item_pane_ParamLimits

0xd14d,	// (0x00051ed2) list_vitu2_match_list_item_pane

0xd15f,	// (0x00051ee4) list_vitu2_match_list_item_pane_t1

0x11e0,	// (0x00045f65) bg_popup_sub_pane_cp21

0x2569,	// (0x000472ee) grid_vitu2_dropdown_list_pane

0x6e8d,	// (0x0004bc12) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6e8d,	// (0x0004bc12) cell_vitu2_dropdown_list_char_pane

0x6ead,	// (0x0004bc32) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ead,	// (0x0004bc32) cell_vitu2_dropdown_list_ctrl_pane

0xd8f1,	// (0x00052676) cell_vitu2_dropdown_list_char_pane_g1

0xd8fa,	// (0x0005267f) cell_vitu2_dropdown_list_char_pane_g2

0xd903,	// (0x00052688) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x000546ad) cell_vitu2_dropdown_list_char_pane_g

0x6ed5,	// (0x0004bc5a) cell_vitu2_dropdown_list_char_pane_t1

0x6ee3,	// (0x0004bc68) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6ee3,	// (0x0004bc68) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ef0,	// (0x0004bc75) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ef0,	// (0x0004bc75) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6efd,	// (0x0004bc82) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6efd,	// (0x0004bc82) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f0a,	// (0x0004bc8f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f0a,	// (0x0004bc8f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1b51,	// (0x000468d6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1b51,	// (0x000468d6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x000546b4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x000546b4) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f26,	// (0x0004bcab) aid_size_cell_gallery2_ParamLimits

0x6f26,	// (0x0004bcab) aid_size_cell_gallery2

0x6f44,	// (0x0004bcc9) grid_gallery2_pane_ParamLimits

0x6f44,	// (0x0004bcc9) grid_gallery2_pane

0x6f5e,	// (0x0004bce3) scroll_pane_cp029_ParamLimits

0x6f5e,	// (0x0004bce3) scroll_pane_cp029

0x6f6f,	// (0x0004bcf4) cell_gallery2_pane_ParamLimits

0x6f6f,	// (0x0004bcf4) cell_gallery2_pane

0xd90c,	// (0x00052691) cell_gallery2_pane_g2

0x6fce,	// (0x0004bd53) cell_gallery2_pane_g3

0xd914,	// (0x00052699) cell_gallery2_pane_g4

0xd91c,	// (0x000526a1) cell_gallery2_pane_g5

0x2569,	// (0x000472ee) grid_highlight_pane_cp10

0x6621,	// (0x0004b3a6) popup_vitu2_match_list_window_ParamLimits

0x6636,	// (0x0004b3bb) popup_vitu2_query_window_ParamLimits

0x6636,	// (0x0004b3bb) popup_vitu2_query_window

0x11e0,	// (0x00045f65) bg_vitu2_candi_button_pane

0xd8f1,	// (0x00052676) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8fa,	// (0x0005267f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd903,	// (0x00052688) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0aa5,	// (0x0004582a) bg_button_pane_cp015

0x6fd6,	// (0x0004bd5b) bg_button_pane_cp016

0x6fe2,	// (0x0004bd67) bg_button_pane_cp017

0xae32,	// (0x0004fbb7) bg_popup_sub_pane_cp22

0xd924,	// (0x000526a9) popup_vitu2_query_window_g1

0x0ad9,	// (0x0004585e) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x000546bf) popup_vitu2_query_window_g

0x0aef,	// (0x00045874) popup_vitu2_query_window_t1_ParamLimits

0x0aef,	// (0x00045874) popup_vitu2_query_window_t1

0x0b22,	// (0x000458a7) popup_vitu2_query_window_t2_ParamLimits

0x0b22,	// (0x000458a7) popup_vitu2_query_window_t2

0x0b34,	// (0x000458b9) popup_vitu2_query_window_t3_ParamLimits

0x0b34,	// (0x000458b9) popup_vitu2_query_window_t3

0x7009,	// (0x0004bd8e) popup_vitu2_query_window_t4_ParamLimits

0x7009,	// (0x0004bd8e) popup_vitu2_query_window_t4

0x701d,	// (0x0004bda2) popup_vitu2_query_window_t5_ParamLimits

0x701d,	// (0x0004bda2) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x000546c6) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x000546c6) popup_vitu2_query_window_t

0xd7a2,	// (0x00052527) main_cset_text_pane

0x6a69,	// (0x0004b7ee) aid_area_touch_slider_ParamLimits

0x6a85,	// (0x0004b80a) cset_slider_pane_ParamLimits

0x6aa8,	// (0x0004b82d) main_cset_slider_pane_g1_ParamLimits

0x6abd,	// (0x0004b842) main_cset_slider_pane_g2_ParamLimits

0xd7c3,	// (0x00052548) main_cset_slider_pane_g3_ParamLimits

0xd7c3,	// (0x00052548) main_cset_slider_pane_g3

0x6ad2,	// (0x0004b857) main_cset_slider_pane_g4_ParamLimits

0x6ad2,	// (0x0004b857) main_cset_slider_pane_g4

0x6ae1,	// (0x0004b866) main_cset_slider_pane_g5_ParamLimits

0x6ae1,	// (0x0004b866) main_cset_slider_pane_g5

0x6aed,	// (0x0004b872) main_cset_slider_pane_g6_ParamLimits

0x6aed,	// (0x0004b872) main_cset_slider_pane_g6

0xf89e,	// (0x00054623) main_cset_slider_pane_g_ParamLimits

0xd7f3,	// (0x00052578) main_cset_slider_pane_t1_ParamLimits

0x6b79,	// (0x0004b8fe) main_cset_slider_pane_t2_ParamLimits

0x6b93,	// (0x0004b918) main_cset_slider_pane_t3_ParamLimits

0x6bad,	// (0x0004b932) main_cset_slider_pane_t4_ParamLimits

0x6bc7,	// (0x0004b94c) main_cset_slider_pane_t5_ParamLimits

0x6be1,	// (0x0004b966) main_cset_slider_pane_t6_ParamLimits

0x6bf6,	// (0x0004b97b) main_cset_slider_pane_t7_ParamLimits

0x6c20,	// (0x0004b9a5) main_cset_slider_pane_t8_ParamLimits

0x6c20,	// (0x0004b9a5) main_cset_slider_pane_t8

0x6c48,	// (0x0004b9cd) main_cset_slider_pane_t9_ParamLimits

0x6c48,	// (0x0004b9cd) main_cset_slider_pane_t9

0x6c70,	// (0x0004b9f5) main_cset_slider_pane_t10_ParamLimits

0x6c70,	// (0x0004b9f5) main_cset_slider_pane_t10

0x6c98,	// (0x0004ba1d) main_cset_slider_pane_t11_ParamLimits

0x6c98,	// (0x0004ba1d) main_cset_slider_pane_t11

0x6cc0,	// (0x0004ba45) main_cset_slider_pane_t12_ParamLimits

0x6cc0,	// (0x0004ba45) main_cset_slider_pane_t12

0x6cdd,	// (0x0004ba62) main_cset_slider_pane_t13_ParamLimits

0x6cdd,	// (0x0004ba62) main_cset_slider_pane_t13

0xf8c3,	// (0x00054648) main_cset_slider_pane_t_ParamLimits

0x11e0,	// (0x00045f65) bg_popup_sub_pane_cp011

0xd930,	// (0x000526b5) main_cset_text_pane_g1

0xd938,	// (0x000526bd) main_cset_text_pane_t1

0xd946,	// (0x000526cb) main_cset_text_pane_t2

0xd954,	// (0x000526d9) main_cset_text_pane_t3

0xd962,	// (0x000526e7) main_cset_text_pane_t4

0xd970,	// (0x000526f5) main_cset_text_pane_t5

0xd97e,	// (0x00052703) main_cset_text_pane_t6

0xd98c,	// (0x00052711) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x000546d5) main_cset_text_pane_t

0x11e0,	// (0x00045f65) main_cam4_burst_pane

0x11e0,	// (0x00045f65) main_cam5_pane

0xd764,	// (0x000524e9) bg_button_pane_cp019

0xd76d,	// (0x000524f2) bg_button_pane_cp020

0xd7cf,	// (0x00052554) main_cset_slider_pane_g7_ParamLimits

0xd7cf,	// (0x00052554) main_cset_slider_pane_g7

0xd7db,	// (0x00052560) main_cset_slider_pane_g8_ParamLimits

0xd7db,	// (0x00052560) main_cset_slider_pane_g8

0x6b01,	// (0x0004b886) main_cset_slider_pane_g9_ParamLimits

0x6b01,	// (0x0004b886) main_cset_slider_pane_g9

0x6b0d,	// (0x0004b892) main_cset_slider_pane_g10_ParamLimits

0x6b0d,	// (0x0004b892) main_cset_slider_pane_g10

0x6b19,	// (0x0004b89e) main_cset_slider_pane_g11_ParamLimits

0x6b19,	// (0x0004b89e) main_cset_slider_pane_g11

0x6b25,	// (0x0004b8aa) main_cset_slider_pane_g12_ParamLimits

0x6b25,	// (0x0004b8aa) main_cset_slider_pane_g12

0x6b31,	// (0x0004b8b6) main_cset_slider_pane_g13_ParamLimits

0x6b31,	// (0x0004b8b6) main_cset_slider_pane_g13

0x6b3d,	// (0x0004b8c2) main_cset_slider_pane_g14_ParamLimits

0x6b3d,	// (0x0004b8c2) main_cset_slider_pane_g14

0x6b49,	// (0x0004b8ce) main_cset_slider_pane_g15_ParamLimits

0x6b49,	// (0x0004b8ce) main_cset_slider_pane_g15

0xd81b,	// (0x000525a0) main_cset_slider_pane_t14_ParamLimits

0xd81b,	// (0x000525a0) main_cset_slider_pane_t14

0xd854,	// (0x000525d9) main_cset_slider_pane_t15_ParamLimits

0xd854,	// (0x000525d9) main_cset_slider_pane_t15

0x7031,	// (0x0004bdb6) aid_cam4_burst_size_cell_ParamLimits

0x7031,	// (0x0004bdb6) aid_cam4_burst_size_cell

0x7051,	// (0x0004bdd6) grid_cam4_burst_pane_ParamLimits

0x7051,	// (0x0004bdd6) grid_cam4_burst_pane

0x7089,	// (0x0004be0e) linegrid_cam4_burst_pane_ParamLimits

0x7089,	// (0x0004be0e) linegrid_cam4_burst_pane

0xdbf3,	// (0x00052978) scroll_pane_cp30_ParamLimits

0xdbf3,	// (0x00052978) scroll_pane_cp30

0x70ad,	// (0x0004be32) cell_cam4_burst_pane_ParamLimits

0x70ad,	// (0x0004be32) cell_cam4_burst_pane

0xd99a,	// (0x0005271f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd99a,	// (0x0005271f) linegrid_cam4_burst_pane_g1

0x70fa,	// (0x0004be7f) linegrid_cam4_burst_pane_g2_ParamLimits

0x70fa,	// (0x0004be7f) linegrid_cam4_burst_pane_g2

0xd9a7,	// (0x0005272c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9a7,	// (0x0005272c) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x000546e4) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x000546e4) linegrid_cam4_burst_pane_g

0x710b,	// (0x0004be90) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x710b,	// (0x0004be90) linegrid_cam4_burst_pane_g3_copy1

0xd9b4,	// (0x00052739) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9b4,	// (0x00052739) linegrid_cam4_burst_pane_g4

0x7125,	// (0x0004beaa) linegrid_cam4_burst_pane_g5_ParamLimits

0x7125,	// (0x0004beaa) linegrid_cam4_burst_pane_g5

0x7136,	// (0x0004bebb) linegrid_cam4_burst_pane_g6_ParamLimits

0x7136,	// (0x0004bebb) linegrid_cam4_burst_pane_g6

0xd9c1,	// (0x00052746) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9c1,	// (0x00052746) linegrid_cam4_burst_pane_g7

0x714d,	// (0x0004bed2) cell_cam4_burst_pane_g1

0xd9da,	// (0x0005275f) main_cam5_pane_t1_ParamLimits

0xd9da,	// (0x0005275f) main_cam5_pane_t1

0xd9ec,	// (0x00052771) main_cam5_pane_t2_ParamLimits

0xd9ec,	// (0x00052771) main_cam5_pane_t2

0xd9fe,	// (0x00052783) main_cam5_pane_t3_ParamLimits

0xd9fe,	// (0x00052783) main_cam5_pane_t3

0xda10,	// (0x00052795) main_cam5_pane_t4_ParamLimits

0xda10,	// (0x00052795) main_cam5_pane_t4

0xda28,	// (0x000527ad) main_cam5_pane_t5_ParamLimits

0xda28,	// (0x000527ad) main_cam5_pane_t5

0xda3c,	// (0x000527c1) main_cam5_pane_t6_ParamLimits

0xda3c,	// (0x000527c1) main_cam5_pane_t6

0xda50,	// (0x000527d5) main_cam5_pane_t7_ParamLimits

0xda50,	// (0x000527d5) main_cam5_pane_t7

0xda62,	// (0x000527e7) main_cam5_pane_t8_ParamLimits

0xda62,	// (0x000527e7) main_cam5_pane_t8

0xda7e,	// (0x00052803) main_cam5_pane_t9_ParamLimits

0xda7e,	// (0x00052803) main_cam5_pane_t9

0xda90,	// (0x00052815) main_cam5_pane_t10_ParamLimits

0xda90,	// (0x00052815) main_cam5_pane_t10

0xdaa2,	// (0x00052827) main_cam5_pane_t11_ParamLimits

0xdaa2,	// (0x00052827) main_cam5_pane_t11

0xdab4,	// (0x00052839) main_cam5_pane_t12_ParamLimits

0xdab4,	// (0x00052839) main_cam5_pane_t12

0xdac9,	// (0x0005284e) main_cam5_pane_t13_ParamLimits

0xdac9,	// (0x0005284e) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x000546f0) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x000546f0) main_cam5_pane_t

0x1364,	// (0x000460e9) popup_scut_keymap_window_ParamLimits

0x1364,	// (0x000460e9) popup_scut_keymap_window

0x7160,	// (0x0004bee5) aid_size_cell_brow_shortcut

0x2569,	// (0x000472ee) bg_popup_window_pane_cp010

0x716c,	// (0x0004bef1) grid_scut_pane

0x7178,	// (0x0004befd) cell_scut_pane_ParamLimits

0x7178,	// (0x0004befd) cell_scut_pane

0x718f,	// (0x0004bf14) cell_scut_pane_g1

0xdae6,	// (0x0005286b) cell_scut_pane_t1

0xdaf5,	// (0x0005287a) cell_scut_pane_t2

0x7198,	// (0x0004bf1d) cell_scut_pane_t3

0x0002,

0xf986,	// (0x0005470b) cell_scut_pane_t

0x531e,	// (0x0004a0a3) main_mup3_pane_g8_ParamLimits

0x531e,	// (0x0004a0a3) main_mup3_pane_g8

0x652a,	// (0x0004b2af) area_vitu2_query_pane_ParamLimits

0x652a,	// (0x0004b2af) area_vitu2_query_pane

0x0ab6,	// (0x0004583b) input_focus_pane_cp08

0xdb04,	// (0x00052889) area_vitu2_query_pane_g1

0x0bb2,	// (0x00045937) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x00054712) area_vitu2_query_pane_g

0x71a6,	// (0x0004bf2b) area_vitu2_query_pane_t1_ParamLimits

0x71a6,	// (0x0004bf2b) area_vitu2_query_pane_t1

0x71ba,	// (0x0004bf3f) area_vitu2_query_pane_t2_ParamLimits

0x71ba,	// (0x0004bf3f) area_vitu2_query_pane_t2

0x0bc1,	// (0x00045946) area_vitu2_query_pane_t3_ParamLimits

0x0bc1,	// (0x00045946) area_vitu2_query_pane_t3

0xd16d,	// (0x00051ef2) area_vitu2_query_pane_t4_ParamLimits

0xd16d,	// (0x00051ef2) area_vitu2_query_pane_t4

0xd195,	// (0x00051f1a) area_vitu2_query_pane_t5_ParamLimits

0xd195,	// (0x00051f1a) area_vitu2_query_pane_t5

0xd1bd,	// (0x00051f42) area_vitu2_query_pane_t6_ParamLimits

0xd1bd,	// (0x00051f42) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x00054717) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x00054717) area_vitu2_query_pane_t

0x71ce,	// (0x0004bf53) bg_button_pane_cp018

0x71da,	// (0x0004bf5f) bg_button_pane_cp021

0x0be9,	// (0x0004596e) bg_button_pane_cp022

0x0c08,	// (0x0004598d) input_focus_pane_cp09

0xab90,	// (0x0004f915) aid_size_touch_mv_arrow_left

0xabb9,	// (0x0004f93e) aid_size_touch_mv_arrow_right

0x6b61,	// (0x0004b8e6) main_cset_slider_pane_g16_ParamLimits

0x6b61,	// (0x0004b8e6) main_cset_slider_pane_g16

0x6b6d,	// (0x0004b8f2) main_cset_slider_pane_g17_ParamLimits

0x6b6d,	// (0x0004b8f2) main_cset_slider_pane_g17

0x714d,	// (0x0004bed2) cell_cam4_burst_pane_g1_ParamLimits

0x11e0,	// (0x00045f65) compa_mode_pane

0x6d37,	// (0x0004babc) popup_vtel_slider_window_g3_ParamLimits

0x6d37,	// (0x0004babc) popup_vtel_slider_window_g3

0x6d4e,	// (0x0004bad3) popup_vtel_slider_window_g4_ParamLimits

0x6d4e,	// (0x0004bad3) popup_vtel_slider_window_g4

0x6d65,	// (0x0004baea) popup_vtel_slider_window_t1_ParamLimits

0x6d65,	// (0x0004baea) popup_vtel_slider_window_t1

0x11e0,	// (0x00045f65) main_cl_pane

0xc08f,	// (0x00050e14) popup_imed_adjust2_window_ParamLimits

0xae32,	// (0x0004fbb7) bg_tb_trans_pane_cp05_ParamLimits

0xca60,	// (0x000517e5) popup_imed_adjust2_window_g1_ParamLimits

0xca6f,	// (0x000517f4) popup_imed_adjust2_window_g2_ParamLimits

0xca6f,	// (0x000517f4) popup_imed_adjust2_window_g2

0xca7b,	// (0x00051800) popup_imed_adjust2_window_g3_ParamLimits

0xca7b,	// (0x00051800) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x00054492) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x00054492) popup_imed_adjust2_window_g

0xca87,	// (0x0005180c) popup_imed_adjust2_window_t1_ParamLimits

0xca9f,	// (0x00051824) slider_imed_adjust_pane_ParamLimits

0xcab3,	// (0x00051838) slider_imed_adjust_pane_g1_ParamLimits

0xcac3,	// (0x00051848) slider_imed_adjust_pane_g2_ParamLimits

0xcad3,	// (0x00051858) slider_imed_adjust_pane_g3_ParamLimits

0xcae4,	// (0x00051869) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x00054499) slider_imed_adjust_pane_g_ParamLimits

0x62b3,	// (0x0004b038) aid_touch_area_cam4_ParamLimits

0x62b3,	// (0x0004b038) aid_touch_area_cam4

0xcfd7,	// (0x00051d5c) battery_pane_cp01

0x6382,	// (0x0004b107) main_camera4_pane_g6_ParamLimits

0x6382,	// (0x0004b107) main_camera4_pane_g6

0x63ac,	// (0x0004b131) main_camera4_pane_t2_ParamLimits

0x63ac,	// (0x0004b131) main_camera4_pane_t2

0x0001,

0xf811,	// (0x00054596) main_camera4_pane_t_ParamLimits

0xf811,	// (0x00054596) main_camera4_pane_t

0x63e1,	// (0x0004b166) aid_touch_area_vid4_ParamLimits

0x63e1,	// (0x0004b166) aid_touch_area_vid4

0x6435,	// (0x0004b1ba) main_video4_pane_g5_ParamLimits

0x6435,	// (0x0004b1ba) main_video4_pane_g5

0x645a,	// (0x0004b1df) vid4_progress_pane_ParamLimits

0x645a,	// (0x0004b1df) vid4_progress_pane

0xd7e7,	// (0x0005256c) main_cset_slider_pane_g18_ParamLimits

0xd7e7,	// (0x0005256c) main_cset_slider_pane_g18

0xd9ce,	// (0x00052753) cell_cam4_burst_pane_g2_ParamLimits

0xd9ce,	// (0x00052753) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x000546eb) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x000546eb) cell_cam4_burst_pane_g

0x1c95,	// (0x00046a1a) bg_cl_pane_ParamLimits

0x1c95,	// (0x00046a1a) bg_cl_pane

0x71e6,	// (0x0004bf6b) cl_header_pane_ParamLimits

0x71e6,	// (0x0004bf6b) cl_header_pane

0x71fa,	// (0x0004bf7f) cl_listscroll_pane_ParamLimits

0x71fa,	// (0x0004bf7f) cl_listscroll_pane

0xdb10,	// (0x00052895) bg_cl_pane_g1

0xdb18,	// (0x0005289d) bg_cl_pane_g2

0xdb20,	// (0x000528a5) bg_cl_pane_g3

0xdb28,	// (0x000528ad) bg_cl_pane_g4

0xdb30,	// (0x000528b5) bg_cl_pane_g5

0xdb38,	// (0x000528bd) bg_cl_pane_g6

0xdb40,	// (0x000528c5) bg_cl_pane_g7

0xdb48,	// (0x000528cd) bg_cl_pane_g8

0xdb50,	// (0x000528d5) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x00054726) bg_cl_pane_g

0x720a,	// (0x0004bf8f) aid_height_cl_leading_ParamLimits

0x720a,	// (0x0004bf8f) aid_height_cl_leading

0x7216,	// (0x0004bf9b) aid_height_cl_text_ParamLimits

0x7216,	// (0x0004bf9b) aid_height_cl_text

0x13a4,	// (0x00046129) bg_cl_header_pane_ParamLimits

0x13a4,	// (0x00046129) bg_cl_header_pane

0x7235,	// (0x0004bfba) cl_header_pane_g1_ParamLimits

0x7235,	// (0x0004bfba) cl_header_pane_g1

0x724b,	// (0x0004bfd0) cl_header_pane_t1_ParamLimits

0x724b,	// (0x0004bfd0) cl_header_pane_t1

0xdb58,	// (0x000528dd) cl_list_pane

0xd7ba,	// (0x0005253f) hc_scroll_pane_cp01

0x2d8d,	// (0x00047b12) bg_cl_header_pane_g1

0xd67a,	// (0x000523ff) bg_cl_header_pane_g2

0x2dad,	// (0x00047b32) bg_cl_header_pane_g3

0xd68a,	// (0x0005240f) bg_cl_header_pane_g4

0xd682,	// (0x00052407) bg_cl_header_pane_g5

0xd8e9,	// (0x0005266e) bg_cl_header_pane_g6

0xd6a2,	// (0x00052427) bg_cl_header_pane_g7

0xd6aa,	// (0x0005242f) bg_cl_header_pane_g8

0xd69a,	// (0x0005241f) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x00054739) bg_cl_header_pane_g

0x7264,	// (0x0004bfe9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7264,	// (0x0004bfe9) hc_cl_list_double_graphic_heading_pane

0x7275,	// (0x0004bffa) hc_cl_list_single_graphic_pane_ParamLimits

0x7275,	// (0x0004bffa) hc_cl_list_single_graphic_pane

0x728b,	// (0x0004c010) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x728b,	// (0x0004c010) hc_cl_list_single_graphic_pane_g1

0x7297,	// (0x0004c01c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7297,	// (0x0004c01c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x0005474c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x0005474c) hc_cl_list_single_graphic_pane_g

0x72ab,	// (0x0004c030) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x72ab,	// (0x0004c030) hc_cl_list_single_graphic_pane_t1

0x728b,	// (0x0004c010) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x728b,	// (0x0004c010) hc_cl_list_double_graphic_heading_pane_g1

0x72c0,	// (0x0004c045) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x72c0,	// (0x0004c045) hc_cl_list_double_graphic_heading_pane_g2

0x72d4,	// (0x0004c059) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x72d4,	// (0x0004c059) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x00054751) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x00054751) hc_cl_list_double_graphic_heading_pane_g

0x72e8,	// (0x0004c06d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x72e8,	// (0x0004c06d) hc_cl_list_double_graphic_heading_pane_t1

0x72fd,	// (0x0004c082) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x72fd,	// (0x0004c082) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x00054758) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x00054758) hc_cl_list_double_graphic_heading_pane_t

0xd211,	// (0x00051f96) vid4_progress_pane_g1

0xd221,	// (0x00051fa6) vid4_progress_pane_g2

0x7312,	// (0x0004c097) vid4_progress_pane_g3

0xd231,	// (0x00051fb6) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x0005475d) vid4_progress_pane_g

0x7324,	// (0x0004c0a9) vid4_progress_pane_t1

0xd249,	// (0x00051fce) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x00054768) vid4_progress_pane_t

0x733c,	// (0x0004c0c1) wait_bar_pane_cp07

0xc35b,	// (0x000510e0) blid_firmament_pane_ParamLimits

0xc39e,	// (0x00051123) popup_blid_sat_info2_window_g1

0xc3c2,	// (0x00051147) popup_blid_sat_info2_window_t3

0xc3d0,	// (0x00051155) popup_blid_sat_info2_window_t4

0xc3de,	// (0x00051163) popup_blid_sat_info2_window_t5

0xc3ec,	// (0x00051171) popup_blid_sat_info2_window_t6

0xc3fc,	// (0x00051181) popup_blid_sat_info2_window_t7

0xc40a,	// (0x0005118f) popup_blid_sat_info2_window_t8

0xc418,	// (0x0005119d) popup_blid_sat_info2_window_t9

0xc426,	// (0x000511ab) popup_blid_sat_info2_window_t10

0xc4e7,	// (0x0005126c) aid_firma_cardinal_ParamLimits

0xc4fb,	// (0x00051280) blid_firmament_pane_t1_ParamLimits

0xc512,	// (0x00051297) blid_firmament_pane_t2_ParamLimits

0xc529,	// (0x000512ae) blid_firmament_pane_t3_ParamLimits

0xc540,	// (0x000512c5) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x0005438b) blid_firmament_pane_t_ParamLimits

0xc557,	// (0x000512dc) blid_sat_info_pane_ParamLimits

0x13a4,	// (0x00046129) main_cam_set_pane_ParamLimits

0x5b04,	// (0x0004a889) aid_size_cell_colour_35_ParamLimits

0x5b24,	// (0x0004a8a9) aid_size_cell_colour_112_ParamLimits

0x5b44,	// (0x0004a8c9) aid_size_cell_effect_ParamLimits

0xae32,	// (0x0004fbb7) bg_tb_trans_pane_cp02_ParamLimits

0xa70b,	// (0x0004f490) heading_imed_pane_ParamLimits

0x5b64,	// (0x0004a8e9) listscroll_imed_pane_ParamLimits

0xb77e,	// (0x00050503) popup_call2_audio_first_window_g5_ParamLimits

0xb77e,	// (0x00050503) popup_call2_audio_first_window_g5

0x5ec1,	// (0x0004ac46) aid_size_touch_image3_arrow_left_ParamLimits

0x5ec1,	// (0x0004ac46) aid_size_touch_image3_arrow_left

0x5eed,	// (0x0004ac72) aid_size_touch_image3_arrow_right_ParamLimits

0x5eed,	// (0x0004ac72) aid_size_touch_image3_arrow_right

0xd25e,	// (0x00051fe3) vid4_progress_pane_t3

0x5d09,	// (0x0004aa8e) main_hwr_training_symbol_option_pane_ParamLimits

0x5d09,	// (0x0004aa8e) main_hwr_training_symbol_option_pane

0xcbee,	// (0x00051973) popup_hwr_training_preview_window_ParamLimits

0xcbee,	// (0x00051973) popup_hwr_training_preview_window

0x5d29,	// (0x0004aaae) hwr_training_navi_pane_g5_ParamLimits

0x5d29,	// (0x0004aaae) hwr_training_navi_pane_g5

0xd668,	// (0x000523ed) popup_char_count_window

0x13a4,	// (0x00046129) bg_popup_sub_pane_cp20_ParamLimits

0x6e75,	// (0x0004bbfa) list_vitu2_match_list_pane_ParamLimits

0x6e81,	// (0x0004bc06) vitu2_page_scroll_pane_ParamLimits

0x6e81,	// (0x0004bc06) vitu2_page_scroll_pane

0xdb6a,	// (0x000528ef) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb6a,	// (0x000528ef) list_single_hwr_training_symbol_option_pane

0xdb7d,	// (0x00052902) list_single_hwr_training_symbol_option_pane_g1

0xdb85,	// (0x0005290a) list_single_hwr_training_symbol_option_pane_t1

0xdb93,	// (0x00052918) bg_button_pane_cp023

0xdb9c,	// (0x00052921) bg_button_pane_cp024

0xdbff,	// (0x00052984) vitu2_page_scroll_pane_g1

0xdc07,	// (0x0005298c) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x0005476f) vitu2_page_scroll_pane_g

0xdc0f,	// (0x00052994) vitu2_page_scroll_pane_t1

0xc2d1,	// (0x00051056) popup_char_count_window_g1

0xdc1e,	// (0x000529a3) popup_char_count_window_g2

0xdc27,	// (0x000529ac) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x00054774) popup_char_count_window_g

0xdc30,	// (0x000529b5) popup_char_count_window_t1

0x11e0,	// (0x00045f65) main_vded2_pane

0xca4c,	// (0x000517d1) aid_size_cell_imed_line

0xca56,	// (0x000517db) grid_imed_line_width_pane

0xd08f,	// (0x00051e14) vid4_indicators_pane_g4

0xdc3e,	// (0x000529c3) cell_imed_line_width_pane_ParamLimits

0xdc3e,	// (0x000529c3) cell_imed_line_width_pane

0xdc52,	// (0x000529d7) cell_imed_line_width_pane_g1

0xdc5b,	// (0x000529e0) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x0005477b) cell_imed_line_width_pane_g

0x734f,	// (0x0004c0d4) main_vded2_pane_g1_ParamLimits

0x734f,	// (0x0004c0d4) main_vded2_pane_g1

0x7365,	// (0x0004c0ea) main_vded2_pane_g2_ParamLimits

0x7365,	// (0x0004c0ea) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x00054780) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x00054780) main_vded2_pane_g

0x7377,	// (0x0004c0fc) vded2_slider_pane_ParamLimits

0x7377,	// (0x0004c0fc) vded2_slider_pane

0x7387,	// (0x0004c10c) aid_size_touch_vded2_end

0x7391,	// (0x0004c116) aid_size_touch_vded2_playhead

0xdc63,	// (0x000529e8) aid_size_touch_vded2_start

0xdc6b,	// (0x000529f0) vded2_slider_bg_pane

0xdc74,	// (0x000529f9) vded2_slider_pane_g1

0xdc7d,	// (0x00052a02) vded2_slider_pane_g2

0x739b,	// (0x0004c120) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x00054785) vded2_slider_pane_g

0xdc85,	// (0x00052a0a) vded2_slider_bg_pane_g1

0xdc8e,	// (0x00052a13) vded2_slider_bg_pane_g2

0xdc97,	// (0x00052a1c) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x0005478c) vded2_slider_bg_pane_g

0x4171,	// (0x00048ef6) aid_postcard_touch_down_pane_ParamLimits

0x4171,	// (0x00048ef6) aid_postcard_touch_down_pane

0x4187,	// (0x00048f0c) aid_postcard_touch_up_pane_ParamLimits

0x4187,	// (0x00048f0c) aid_postcard_touch_up_pane

0x11e0,	// (0x00045f65) main_blid2_pane

0xc075,	// (0x00050dfa) popup_blid2_search_window

0x11e0,	// (0x00045f65) blid2_gps_pane

0x11e0,	// (0x00045f65) blid2_navig_pane

0x11e0,	// (0x00045f65) blid2_search_pane

0x11e0,	// (0x00045f65) blid2_tripm_pane

0x73a6,	// (0x0004c12b) blid2_search_pane_g1_ParamLimits

0x73a6,	// (0x0004c12b) blid2_search_pane_g1

0x73c0,	// (0x0004c145) blid2_search_pane_t1_ParamLimits

0x73c0,	// (0x0004c145) blid2_search_pane_t1

0x73d2,	// (0x0004c157) aid_size_cell_blid2_gps_ParamLimits

0x73d2,	// (0x0004c157) aid_size_cell_blid2_gps

0x73ea,	// (0x0004c16f) blid2_gps_pane_g1_ParamLimits

0x73ea,	// (0x0004c16f) blid2_gps_pane_g1

0x73fe,	// (0x0004c183) grid_blid2_satellite_pane_ParamLimits

0x73fe,	// (0x0004c183) grid_blid2_satellite_pane

0x7418,	// (0x0004c19d) blid2_navig_pane_g1_ParamLimits

0x7418,	// (0x0004c19d) blid2_navig_pane_g1

0x7424,	// (0x0004c1a9) blid2_navig_pane_t1_ParamLimits

0x7424,	// (0x0004c1a9) blid2_navig_pane_t1

0x743f,	// (0x0004c1c4) blid2_navig_pane_t2_ParamLimits

0x743f,	// (0x0004c1c4) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x00054793) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x00054793) blid2_navig_pane_t

0x745a,	// (0x0004c1df) blid2_navig_ring_pane_ParamLimits

0x745a,	// (0x0004c1df) blid2_navig_ring_pane

0x7473,	// (0x0004c1f8) blid2_speed_pane_ParamLimits

0x7473,	// (0x0004c1f8) blid2_speed_pane

0x747f,	// (0x0004c204) blid2_tripm_pane_g1_ParamLimits

0x747f,	// (0x0004c204) blid2_tripm_pane_g1

0x7498,	// (0x0004c21d) blid2_tripm_pane_g2_ParamLimits

0x7498,	// (0x0004c21d) blid2_tripm_pane_g2

0x74ac,	// (0x0004c231) blid2_tripm_pane_g3_ParamLimits

0x74ac,	// (0x0004c231) blid2_tripm_pane_g3

0x74c0,	// (0x0004c245) blid2_tripm_pane_g4_ParamLimits

0x74c0,	// (0x0004c245) blid2_tripm_pane_g4

0x74d4,	// (0x0004c259) blid2_tripm_pane_g5_ParamLimits

0x74d4,	// (0x0004c259) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x00054798) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x00054798) blid2_tripm_pane_g

0x74fa,	// (0x0004c27f) blid2_tripm_pane_t1_ParamLimits

0x74fa,	// (0x0004c27f) blid2_tripm_pane_t1

0x7515,	// (0x0004c29a) blid2_tripm_pane_t2_ParamLimits

0x7515,	// (0x0004c29a) blid2_tripm_pane_t2

0x752e,	// (0x0004c2b3) blid2_tripm_pane_t3_ParamLimits

0x752e,	// (0x0004c2b3) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x000547a5) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x000547a5) blid2_tripm_pane_t

0x7575,	// (0x0004c2fa) cell_blid2_satellite_pane_ParamLimits

0x7575,	// (0x0004c2fa) cell_blid2_satellite_pane

0x7593,	// (0x0004c318) cell_blid2_satellite_pane_g1

0xdca0,	// (0x00052a25) cell_blid2_satellite_pane_t1

0x1c23,	// (0x000469a8) blid2_speed_pane_g1

0xdcae,	// (0x00052a33) blid2_speed_pane_t1

0xdcbc,	// (0x00052a41) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x000547ae) blid2_speed_pane_t

0x1c23,	// (0x000469a8) blid2_navig_ring_pane_g1

0x759c,	// (0x0004c321) blid2_navig_ring_pane_g2

0x75a4,	// (0x0004c329) blid2_navig_ring_pane_g3

0x75ac,	// (0x0004c331) blid2_navig_ring_pane_g4

0x75b4,	// (0x0004c339) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x000547b3) blid2_navig_ring_pane_g

0x11e0,	// (0x00045f65) bg_popup_window_pane_cp011

0xdcca,	// (0x00052a4f) popup_blid2_search_window_g1

0xdcd2,	// (0x00052a57) popup_blid2_search_window_t1

0xdce0,	// (0x00052a65) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x000547be) popup_blid2_search_window_t

0x2c59,	// (0x000479de) main_browser_pane_g1

0x1c95,	// (0x00046a1a) main_browser_pane_ParamLimits

0x13a4,	// (0x00046129) bg_button_pane_cp011_ParamLimits

0x674c,	// (0x0004b4d1) cell_vitu2_function_pane_g1_ParamLimits

0xae32,	// (0x0004fbb7) bg_popup_sub_pane_cp22_ParamLimits

0x0ab6,	// (0x0004583b) input_focus_pane_cp08_ParamLimits

0x6fee,	// (0x0004bd73) popup_vitu2_query_button_pane_ParamLimits

0x6fee,	// (0x0004bd73) popup_vitu2_query_button_pane

0x0ad1,	// (0x00045856) popup_vitu2_query_input_button_pane

0xd924,	// (0x000526a9) popup_vitu2_query_window_g1_ParamLimits

0x0ad9,	// (0x0004585e) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x000546bf) popup_vitu2_query_window_g_ParamLimits

0x11e0,	// (0x00045f65) bg_button_pane_cp026

0x75bc,	// (0x0004c341) popup_vitu2_query_input_button_pane_g1

0x11e0,	// (0x00045f65) bg_button_pane_cp025

0xdcee,	// (0x00052a73) popup_vitu2_query_button_pane_t1

0x4fef,	// (0x00049d74) main_mp3_pane_t6

0x4ffd,	// (0x00049d82) popup_slider_window_cp01

0xcff3,	// (0x00051d78) cam4_battery_pane

0xd04c,	// (0x00051dd1) cam4_battery_pane_cp02

0xd209,	// (0x00051f8e) cam4_battery_pane_cp01

0xd209,	// (0x00051f8e) cam4_battery_pane_cp03

0x1c23,	// (0x000469a8) cam4_battery_pane_g1

0xdcfc,	// (0x00052a81) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x000547c3) cam4_battery_pane_g

0xc434,	// (0x000511b9) popup_blid_sat_info2_window_t11

0xab90,	// (0x0004f915) aid_size_touch_mv_arrow_left_ParamLimits

0xabb9,	// (0x0004f93e) aid_size_touch_mv_arrow_right_ParamLimits

0xac17,	// (0x0004f99c) navi_pane_g1_ParamLimits

0xac23,	// (0x0004f9a8) navi_pane_g2_ParamLimits

0xac51,	// (0x0004f9d6) navi_pane_g3_ParamLimits

0xf32f,	// (0x000540b4) navi_pane_g_ParamLimits

0x3e86,	// (0x00048c0b) navi_pane_mv_t1_ParamLimits

0x5b70,	// (0x0004a8f5) grid_imed_effect_pane_ParamLimits

0x27fd,	// (0x00047582) aid_placing_vt_slider_lsc

0x280d,	// (0x00047592) aid_placing_vt_slider_prt

0x13a4,	// (0x00046129) bg_tb_trans_pane_cp01_ParamLimits

0xc6b4,	// (0x00051439) popup_image_details_window_g1_ParamLimits

0xc6c7,	// (0x0005144c) popup_image_details_window_g2_ParamLimits

0xc6dc,	// (0x00051461) popup_image_details_window_g3_ParamLimits

0xc6dc,	// (0x00051461) popup_image_details_window_g3

0xf646,	// (0x000543cb) popup_image_details_window_g_ParamLimits

0xc6f0,	// (0x00051475) popup_image_details_window_t1_ParamLimits

0xc702,	// (0x00051487) popup_image_details_window_t2_ParamLimits

0xc71b,	// (0x000514a0) popup_image_details_window_t3_ParamLimits

0xc72f,	// (0x000514b4) popup_image_details_window_t4_ParamLimits

0xc74a,	// (0x000514cf) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x000543d2) popup_image_details_window_t_ParamLimits

0x7222,	// (0x0004bfa7) cl_header_name_pane_ParamLimits

0x7222,	// (0x0004bfa7) cl_header_name_pane

0x75c4,	// (0x0004c349) cl_header_name_pane_t1_ParamLimits

0x75c4,	// (0x0004c349) cl_header_name_pane_t1

0x75e5,	// (0x0004c36a) cl_header_name_pane_t2_ParamLimits

0x75e5,	// (0x0004c36a) cl_header_name_pane_t2

0x7627,	// (0x0004c3ac) cl_header_name_pane_t3_ParamLimits

0x7627,	// (0x0004c3ac) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x000547c8) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x000547c8) cl_header_name_pane_t

0xace0,	// (0x0004fa65) navi_pane_mv_g2_ParamLimits

0xd650,	// (0x000523d5) field_vitu2_entry_pane_g1_ParamLimits

0xd65c,	// (0x000523e1) field_vitu2_entry_pane_g2_ParamLimits

0xae10,	// (0x0004fb95) field_vitu2_entry_pane_g3_ParamLimits

0xae10,	// (0x0004fb95) field_vitu2_entry_pane_g3

0xf843,	// (0x000545c8) field_vitu2_entry_pane_g_ParamLimits

0x66c8,	// (0x0004b44d) cell_vitu2_itu_pane_g1_ParamLimits

0x66e0,	// (0x0004b465) cell_vitu2_itu_pane_g2_ParamLimits

0x66e0,	// (0x0004b465) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x000545d4) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x000545d4) cell_vitu2_itu_pane_g

0x13a4,	// (0x00046129) bg_vkb2_func_pane_cp05_ParamLimits

0x13a4,	// (0x00046129) bg_vkb2_func_pane_cp05

0x13a4,	// (0x00046129) bg_vkb2_func_pane_cp03

0x13a4,	// (0x00046129) bg_vkb2_func_pane_cp04

0x13a4,	// (0x00046129) bg_vkb2_func_pane_cp10_ParamLimits

0x13a4,	// (0x00046129) bg_vkb2_func_pane_cp10

0x0bf8,	// (0x0004597d) bg_vkb2_func_pane_cp08

0x71ce,	// (0x0004bf53) bg_vkb2_func_pane_cp06

0x71da,	// (0x0004bf5f) bg_vkb2_func_pane_cp07

0xdba5,	// (0x0005292a) bg_vkb2_func_pane_cp11_ParamLimits

0xdba5,	// (0x0005292a) bg_vkb2_func_pane_cp11

0xdbba,	// (0x0005293f) bg_vkb2_func_pane_cp12_ParamLimits

0xdbba,	// (0x0005293f) bg_vkb2_func_pane_cp12

0x11e0,	// (0x00045f65) bg_vkb2_func_pane_cp09

0xd67a,	// (0x000523ff) bg_vkb2_func_pane_g1

0x2dad,	// (0x00047b32) bg_vkb2_func_pane_g2

0xd682,	// (0x00052407) bg_vkb2_func_pane_g3

0xd68a,	// (0x0005240f) bg_vkb2_func_pane_g4

0xd8e9,	// (0x0005266e) bg_vkb2_func_pane_g5

0xd6a2,	// (0x00052427) bg_vkb2_func_pane_g6

0xd6aa,	// (0x0005242f) bg_vkb2_func_pane_g7

0xd69a,	// (0x0005241f) bg_vkb2_func_pane_g8

0x2d8d,	// (0x00047b12) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x000547cf) bg_vkb2_func_pane_g

0x74e8,	// (0x0004c26d) blid2_tripm_pane_g6_ParamLimits

0x74e8,	// (0x0004c26d) blid2_tripm_pane_g6

0xd590,	// (0x00052315) mp4_progress_pane_g1

0x7561,	// (0x0004c2e6) blid2_tripm_values_pane_ParamLimits

0x7561,	// (0x0004c2e6) blid2_tripm_values_pane

0x7658,	// (0x0004c3dd) blid2_tripm_values_pane_t1

0x7666,	// (0x0004c3eb) blid2_tripm_values_pane_t2

0x7674,	// (0x0004c3f9) blid2_tripm_values_pane_t3

0x7682,	// (0x0004c407) blid2_tripm_values_pane_t4

0x7690,	// (0x0004c415) blid2_tripm_values_pane_t5

0x769e,	// (0x0004c423) blid2_tripm_values_pane_t6

0x76ac,	// (0x0004c431) blid2_tripm_values_pane_t7

0x76ba,	// (0x0004c43f) blid2_tripm_values_pane_t8

0x76c8,	// (0x0004c44d) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x000547e2) blid2_tripm_values_pane_t

0x2849,	// (0x000475ce) call_video_pane_t1_ParamLimits

0x2867,	// (0x000475ec) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00053f62) call_video_pane_t_ParamLimits

0x08da,	// (0x0004565f) msg_header_pane_g1_ParamLimits

0xaefe,	// (0x0004fc83) msg_header_pane_g2_ParamLimits

0xaefe,	// (0x0004fc83) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x00054152) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x00054152) msg_header_pane_g

0x1c95,	// (0x00046a1a) main_clock2_pane_ParamLimits

0x5871,	// (0x0004a5f6) grid_clock2_toolbar_pane_ParamLimits

0x5871,	// (0x0004a5f6) grid_clock2_toolbar_pane

0x5871,	// (0x0004a5f6) listscroll_clock2_pane_ParamLimits

0x5871,	// (0x0004a5f6) listscroll_clock2_pane

0x5955,	// (0x0004a6da) main_clock2_pane_t3_ParamLimits

0x5955,	// (0x0004a6da) main_clock2_pane_t3

0x5979,	// (0x0004a6fe) main_clock2_pane_t4_ParamLimits

0x5979,	// (0x0004a6fe) main_clock2_pane_t4

0xdd06,	// (0x00052a8b) cell_clock2_toolbar_pane

0xdd0e,	// (0x00052a93) cell_clock2_toolbar_pane_cp01

0xdd0e,	// (0x00052a93) cell_clock2_toolbar_pane_cp02

0xdd16,	// (0x00052a9b) cell_clock2_toolbar_pane_cp03

0xdd1e,	// (0x00052aa3) list_clock2_pane

0xab06,	// (0x0004f88b) scroll_pane_cp10

0xdd26,	// (0x00052aab) list_single_clock2_pane_ParamLimits

0xdd26,	// (0x00052aab) list_single_clock2_pane

0x2569,	// (0x000472ee) list_highlight_pane_cp08

0xdd33,	// (0x00052ab8) list_single_clock2_pane_t1

0xdd41,	// (0x00052ac6) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x000547f5) list_single_clock2_pane_t

0x11e0,	// (0x00045f65) bg_button_pane_cp10

0xdd4f,	// (0x00052ad4) cell_clock2_toolbar_pane_g1

0x40fd,	// (0x00048e82) aid_main_viewer_pane_g1_ParamLimits

0x40fd,	// (0x00048e82) aid_main_viewer_pane_g1

0x410b,	// (0x00048e90) aid_main_viewer_pane_g2_ParamLimits

0x410b,	// (0x00048e90) aid_main_viewer_pane_g2

0x4119,	// (0x00048e9e) aid_main_viewer_pane_g3_ParamLimits

0x4119,	// (0x00048e9e) aid_main_viewer_pane_g3

0x4128,	// (0x00048ead) aid_main_viewer_pane_g4_ParamLimits

0x4128,	// (0x00048ead) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x00054163) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x00054163) aid_main_viewer_pane_g

0x49cc,	// (0x00049751) main_calc_pane_ParamLimits

0x49e0,	// (0x00049765) main_dialer2_pane_ParamLimits

0x11e0,	// (0x00045f65) main_cam6_pane

0x11e0,	// (0x00045f65) main_vid6_pane

0x587d,	// (0x0004a602) listscroll_gen_pane_cp06_ParamLimits

0x587d,	// (0x0004a602) listscroll_gen_pane_cp06

0x599c,	// (0x0004a721) main_clock2_pane_t5_ParamLimits

0x599c,	// (0x0004a721) main_clock2_pane_t5

0x59fa,	// (0x0004a77f) aid_call2_pane_cp10_ParamLimits

0x5a0c,	// (0x0004a791) aid_call_pane_cp10_ParamLimits

0xab84,	// (0x0004f909) popup_clock_analogue_window_cp10_g1_ParamLimits

0xab84,	// (0x0004f909) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5a1e,	// (0x0004a7a3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5a1e,	// (0x0004a7a3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xab84,	// (0x0004f909) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x00054487) popup_clock_analogue_window_cp10_g_ParamLimits

0x5a34,	// (0x0004a7b9) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd601,	// (0x00052386) cell_dialer2_keypad_pane_g2_ParamLimits

0xd601,	// (0x00052386) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x00054567) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x00054567) cell_dialer2_keypad_pane_g

0x1c2d,	// (0x000469b2) cell_dialer2_keypad_pane_t1

0x6a5b,	// (0x0004b7e0) main_cset_text2_pane_ParamLimits

0x6a5b,	// (0x0004b7e0) main_cset_text2_pane

0xdb04,	// (0x00052889) area_vitu2_query_pane_g1_ParamLimits

0x0bb2,	// (0x00045937) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x00054712) area_vitu2_query_pane_g_ParamLimits

0xd1e5,	// (0x00051f6a) area_vitu2_query_pane_t7_ParamLimits

0xd1e5,	// (0x00051f6a) area_vitu2_query_pane_t7

0x71ce,	// (0x0004bf53) bg_button_pane_cp018_ParamLimits

0x71da,	// (0x0004bf5f) bg_button_pane_cp021_ParamLimits

0x0be9,	// (0x0004596e) bg_button_pane_cp022_ParamLimits

0x0bf8,	// (0x0004597d) bg_vkb2_func_pane_cp08_ParamLimits

0x71ce,	// (0x0004bf53) bg_vkb2_func_pane_cp06_ParamLimits

0x71da,	// (0x0004bf5f) bg_vkb2_func_pane_cp07_ParamLimits

0x0c08,	// (0x0004598d) input_focus_pane_cp09_ParamLimits

0x76d6,	// (0x0004c45b) cam6_autofocus_pane_ParamLimits

0x76d6,	// (0x0004c45b) cam6_autofocus_pane

0x76e2,	// (0x0004c467) cam6_image_uncrop_pane_ParamLimits

0x76e2,	// (0x0004c467) cam6_image_uncrop_pane

0x76f2,	// (0x0004c477) cam6_indi_pane_ParamLimits

0x76f2,	// (0x0004c477) cam6_indi_pane

0x7708,	// (0x0004c48d) cam6_mode_pane_ParamLimits

0x7708,	// (0x0004c48d) cam6_mode_pane

0x771a,	// (0x0004c49f) cam6_timer_pane_ParamLimits

0x771a,	// (0x0004c49f) cam6_timer_pane

0x7726,	// (0x0004c4ab) cam6_zoom_pane_ParamLimits

0x7726,	// (0x0004c4ab) cam6_zoom_pane

0x7733,	// (0x0004c4b8) cam6_mode_pane_g1_ParamLimits

0x7733,	// (0x0004c4b8) cam6_mode_pane_g1

0x7743,	// (0x0004c4c8) cam6_mode_pane_g2_ParamLimits

0x7743,	// (0x0004c4c8) cam6_mode_pane_g2

0x7753,	// (0x0004c4d8) cam6_mode_pane_g3_ParamLimits

0x7753,	// (0x0004c4d8) cam6_mode_pane_g3

0x7763,	// (0x0004c4e8) cam6_mode_pane_g4_ParamLimits

0x7763,	// (0x0004c4e8) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x000547fa) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x000547fa) cam6_mode_pane_g

0xc1ea,	// (0x00050f6f) bg_tb_trans_pane_cp08_ParamLimits

0xc1ea,	// (0x00050f6f) bg_tb_trans_pane_cp08

0xdd57,	// (0x00052adc) cam6_battery_pane_ParamLimits

0xdd57,	// (0x00052adc) cam6_battery_pane

0xdd6d,	// (0x00052af2) cam6_indi_pane_g1_ParamLimits

0xdd6d,	// (0x00052af2) cam6_indi_pane_g1

0xdd7f,	// (0x00052b04) cam6_indi_pane_g2_ParamLimits

0xdd7f,	// (0x00052b04) cam6_indi_pane_g2

0xdd91,	// (0x00052b16) cam6_indi_pane_g3_ParamLimits

0xdd91,	// (0x00052b16) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x00054803) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x00054803) cam6_indi_pane_g

0xdda3,	// (0x00052b28) cam6_indi_pane_t1_ParamLimits

0xdda3,	// (0x00052b28) cam6_indi_pane_t1

0x64a0,	// (0x0004b225) cam6_autofocus_pane_g1

0x64a8,	// (0x0004b22d) cam6_autofocus_pane_g2

0x64b0,	// (0x0004b235) cam6_autofocus_pane_g3

0x64b8,	// (0x0004b23d) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x0005480a) cam6_autofocus_pane_g

0xddc9,	// (0x00052b4e) cam6_timer_pane_g1

0xddd1,	// (0x00052b56) cam6_timer_pane_t1

0xdddf,	// (0x00052b64) cam6_zoom_cont_pane

0xdde7,	// (0x00052b6c) cam6_zoom_pane_g1

0xddf0,	// (0x00052b75) cam6_zoom_pane_g2

0x7773,	// (0x0004c4f8) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x00054813) cam6_zoom_pane_g

0x1c23,	// (0x000469a8) cam6_battery_pane_g1

0x1c23,	// (0x000469a8) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00053e34) cam6_battery_pane_g

0xdde7,	// (0x00052b6c) cam6_zoom_cont_pane_g1

0xddf0,	// (0x00052b75) cam6_zoom_cont_pane_g2

0xddf9,	// (0x00052b7e) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x0005481a) cam6_zoom_cont_pane_g

0x778e,	// (0x0004c513) cam6_mode_pane_cp_ParamLimits

0x778e,	// (0x0004c513) cam6_mode_pane_cp

0x77a0,	// (0x0004c525) cam6_zoom_pane_cp_ParamLimits

0x77a0,	// (0x0004c525) cam6_zoom_pane_cp

0x77ac,	// (0x0004c531) vid6_image_uncrop_cif_pane_ParamLimits

0x77ac,	// (0x0004c531) vid6_image_uncrop_cif_pane

0x77bc,	// (0x0004c541) vid6_image_uncrop_nhd_pane_ParamLimits

0x77bc,	// (0x0004c541) vid6_image_uncrop_nhd_pane

0x77cb,	// (0x0004c550) vid6_image_uncrop_vga_pane_ParamLimits

0x77cb,	// (0x0004c550) vid6_image_uncrop_vga_pane

0x77da,	// (0x0004c55f) vid6_image_uncrop_wvga_pane_ParamLimits

0x77da,	// (0x0004c55f) vid6_image_uncrop_wvga_pane

0x77e9,	// (0x0004c56e) vid6_indi_pane_ParamLimits

0x77e9,	// (0x0004c56e) vid6_indi_pane

0xc1ea,	// (0x00050f6f) bg_tb_trans_pane_cp09_ParamLimits

0xc1ea,	// (0x00050f6f) bg_tb_trans_pane_cp09

0xde11,	// (0x00052b96) cam6_battery_pane_cp_ParamLimits

0xde11,	// (0x00052b96) cam6_battery_pane_cp

0xde1d,	// (0x00052ba2) vid6_indi_pane_g1_ParamLimits

0xde1d,	// (0x00052ba2) vid6_indi_pane_g1

0xde2f,	// (0x00052bb4) vid6_indi_pane_g2_ParamLimits

0xde2f,	// (0x00052bb4) vid6_indi_pane_g2

0xde41,	// (0x00052bc6) vid6_indi_pane_g3_ParamLimits

0xde41,	// (0x00052bc6) vid6_indi_pane_g3

0xde56,	// (0x00052bdb) vid6_indi_pane_g4_ParamLimits

0xde56,	// (0x00052bdb) vid6_indi_pane_g4

0xde6b,	// (0x00052bf0) vid6_indi_pane_g5_ParamLimits

0xde6b,	// (0x00052bf0) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x00054821) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x00054821) vid6_indi_pane_g

0xde85,	// (0x00052c0a) vid6_indi_pane_t1_ParamLimits

0xde85,	// (0x00052c0a) vid6_indi_pane_t1

0xde9b,	// (0x00052c20) vid6_indi_pane_t2_ParamLimits

0xde9b,	// (0x00052c20) vid6_indi_pane_t2

0xdec3,	// (0x00052c48) vid6_indi_pane_t3_ParamLimits

0xdec3,	// (0x00052c48) vid6_indi_pane_t3

0xdeeb,	// (0x00052c70) vid6_indi_pane_t4_ParamLimits

0xdeeb,	// (0x00052c70) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x0005482c) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x0005482c) vid6_indi_pane_t

0xdf0f,	// (0x00052c94) wait_bar_pane_cp08

0x7801,	// (0x0004c586) main_cset_text2_pane_t1_ParamLimits

0x7801,	// (0x0004c586) main_cset_text2_pane_t1

0x777c,	// (0x0004c501) listscroll_gen_pane_cp06_t1_ParamLimits

0x777c,	// (0x0004c501) listscroll_gen_pane_cp06_t1

0x11e0,	// (0x00045f65) main_cam6_set_pane

0x1b51,	// (0x000468d6) bg_tb_trans_pane_cp06_ParamLimits

0xcffb,	// (0x00051d80) cam4_indicators_pane_g1_ParamLimits

0xd00c,	// (0x00051d91) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x000545a4) cam4_indicators_pane_g_ParamLimits

0xd02a,	// (0x00051daf) cam4_indicators_pane_t1_ParamLimits

0x13a4,	// (0x00046129) bg_tb_trans_pane_cp07_ParamLimits

0xd056,	// (0x00051ddb) vid4_indicators_pane_g1_ParamLimits

0xd06a,	// (0x00051def) vid4_indicators_pane_g2_ParamLimits

0xd07e,	// (0x00051e03) vid4_indicators_pane_g3_ParamLimits

0xd08f,	// (0x00051e14) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x000545b6) vid4_indicators_pane_g_ParamLimits

0xd0ad,	// (0x00051e32) vid4_indicators_pane_t1_ParamLimits

0xd211,	// (0x00051f96) vid4_progress_pane_g1_ParamLimits

0xd221,	// (0x00051fa6) vid4_progress_pane_g2_ParamLimits

0x7312,	// (0x0004c097) vid4_progress_pane_g3_ParamLimits

0xd231,	// (0x00051fb6) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x0005475d) vid4_progress_pane_g_ParamLimits

0x7324,	// (0x0004c0a9) vid4_progress_pane_t1_ParamLimits

0xd249,	// (0x00051fce) vid4_progress_pane_t2_ParamLimits

0xd25e,	// (0x00051fe3) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x00054768) vid4_progress_pane_t_ParamLimits

0x733c,	// (0x0004c0c1) wait_bar_pane_cp07_ParamLimits

0x781e,	// (0x0004c5a3) main_cam6_set_pane_g2_ParamLimits

0x781e,	// (0x0004c5a3) main_cam6_set_pane_g2

0x7842,	// (0x0004c5c7) main_cset6_listscroll_pane_ParamLimits

0x7842,	// (0x0004c5c7) main_cset6_listscroll_pane

0x7862,	// (0x0004c5e7) main_cset6_slider_pane_ParamLimits

0x7862,	// (0x0004c5e7) main_cset6_slider_pane

0x7878,	// (0x0004c5fd) main_cset6_text2_pane_ParamLimits

0x7878,	// (0x0004c5fd) main_cset6_text2_pane

0xdf1e,	// (0x00052ca3) main_cset6_text_pane

0xdf26,	// (0x00052cab) main_cset_list_pane_copy1_ParamLimits

0xdf26,	// (0x00052cab) main_cset_list_pane_copy1

0xdf36,	// (0x00052cbb) scroll_pane_cp028_copy1

0x7886,	// (0x0004c60b) cset_list_set_pane_copy1

0x7897,	// (0x0004c61c) aid_position_infowindow_above_copy1

0x789f,	// (0x0004c624) aid_position_infowindow_below_copy1

0x0c2c,	// (0x000459b1) cset_list_set_pane_g1_copy1

0x0c34,	// (0x000459b9) cset_list_set_pane_g3_copy1_ParamLimits

0x0c34,	// (0x000459b9) cset_list_set_pane_g3_copy1

0x0c43,	// (0x000459c8) cset_list_set_pane_t1_copy1_ParamLimits

0x0c43,	// (0x000459c8) cset_list_set_pane_t1_copy1

0x13a4,	// (0x00046129) list_highlight_pane_cp021_copy1_ParamLimits

0x13a4,	// (0x00046129) list_highlight_pane_cp021_copy1

0xdf3f,	// (0x00052cc4) cset6_slider_pane_ParamLimits

0xdf3f,	// (0x00052cc4) cset6_slider_pane

0xdf6b,	// (0x00052cf0) main_cset6_slider_pane_g1_ParamLimits

0xdf6b,	// (0x00052cf0) main_cset6_slider_pane_g1

0x78a7,	// (0x0004c62c) main_cset6_slider_pane_g2_ParamLimits

0x78a7,	// (0x0004c62c) main_cset6_slider_pane_g2

0xdf93,	// (0x00052d18) main_cset6_slider_pane_g3_ParamLimits

0xdf93,	// (0x00052d18) main_cset6_slider_pane_g3

0x78cf,	// (0x0004c654) main_cset6_slider_pane_g4_ParamLimits

0x78cf,	// (0x0004c654) main_cset6_slider_pane_g4

0x78db,	// (0x0004c660) main_cset6_slider_pane_g5_ParamLimits

0x78db,	// (0x0004c660) main_cset6_slider_pane_g5

0xd7cf,	// (0x00052554) main_cset6_slider_pane_g7_ParamLimits

0xd7cf,	// (0x00052554) main_cset6_slider_pane_g7

0xd7db,	// (0x00052560) main_cset6_slider_pane_g8_ParamLimits

0xd7db,	// (0x00052560) main_cset6_slider_pane_g8

0x6b01,	// (0x0004b886) main_cset6_slider_pane_g9_ParamLimits

0x6b01,	// (0x0004b886) main_cset6_slider_pane_g9

0x6b0d,	// (0x0004b892) main_cset6_slider_pane_g10_ParamLimits

0x6b0d,	// (0x0004b892) main_cset6_slider_pane_g10

0x6b19,	// (0x0004b89e) main_cset6_slider_pane_g11_ParamLimits

0x6b19,	// (0x0004b89e) main_cset6_slider_pane_g11

0x6b25,	// (0x0004b8aa) main_cset6_slider_pane_g12_ParamLimits

0x6b25,	// (0x0004b8aa) main_cset6_slider_pane_g12

0x6b31,	// (0x0004b8b6) main_cset6_slider_pane_g13_ParamLimits

0x6b31,	// (0x0004b8b6) main_cset6_slider_pane_g13

0x6b3d,	// (0x0004b8c2) main_cset6_slider_pane_g14_ParamLimits

0x6b3d,	// (0x0004b8c2) main_cset6_slider_pane_g14

0x78e7,	// (0x0004c66c) main_cset6_slider_pane_g15_ParamLimits

0x78e7,	// (0x0004c66c) main_cset6_slider_pane_g15

0x6b61,	// (0x0004b8e6) main_cset6_slider_pane_g16_ParamLimits

0x6b61,	// (0x0004b8e6) main_cset6_slider_pane_g16

0x6b6d,	// (0x0004b8f2) main_cset6_slider_pane_g17_ParamLimits

0x6b6d,	// (0x0004b8f2) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x00054835) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x00054835) main_cset6_slider_pane_g

0xdf9f,	// (0x00052d24) main_cset6_slider_pane_t1_ParamLimits

0xdf9f,	// (0x00052d24) main_cset6_slider_pane_t1

0x7917,	// (0x0004c69c) main_cset6_slider_pane_t2_ParamLimits

0x7917,	// (0x0004c69c) main_cset6_slider_pane_t2

0x7942,	// (0x0004c6c7) main_cset6_slider_pane_t3_ParamLimits

0x7942,	// (0x0004c6c7) main_cset6_slider_pane_t3

0x796d,	// (0x0004c6f2) main_cset6_slider_pane_t4_ParamLimits

0x796d,	// (0x0004c6f2) main_cset6_slider_pane_t4

0x7998,	// (0x0004c71d) main_cset6_slider_pane_t5_ParamLimits

0x7998,	// (0x0004c71d) main_cset6_slider_pane_t5

0xdfe0,	// (0x00052d65) main_cset6_slider_pane_t7_ParamLimits

0xdfe0,	// (0x00052d65) main_cset6_slider_pane_t7

0x79c3,	// (0x0004c748) main_cset6_slider_pane_t8_ParamLimits

0x79c3,	// (0x0004c748) main_cset6_slider_pane_t8

0x79e7,	// (0x0004c76c) main_cset6_slider_pane_t9_ParamLimits

0x79e7,	// (0x0004c76c) main_cset6_slider_pane_t9

0x7a0b,	// (0x0004c790) main_cset6_slider_pane_t10_ParamLimits

0x7a0b,	// (0x0004c790) main_cset6_slider_pane_t10

0x7a2f,	// (0x0004c7b4) main_cset6_slider_pane_t11_ParamLimits

0x7a2f,	// (0x0004c7b4) main_cset6_slider_pane_t11

0xe016,	// (0x00052d9b) main_cset6_slider_pane_t14_ParamLimits

0xe016,	// (0x00052d9b) main_cset6_slider_pane_t14

0xe04f,	// (0x00052dd4) main_cset6_slider_pane_t15_ParamLimits

0xe04f,	// (0x00052dd4) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x0005485a) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x0005485a) main_cset6_slider_pane_t

0xd89d,	// (0x00052622) cset_slider_pane_g1_copy1

0xd8a6,	// (0x0005262b) cset_slider_pane_g2_copy1

0xd8af,	// (0x00052634) cset_slider_pane_g3_copy1

0x11e0,	// (0x00045f65) bg_popup_sub_pane_cp011_copy1

0xe088,	// (0x00052e0d) main_cset_text_pane_g1_copy1

0xd938,	// (0x000526bd) main_cset_text_pane_t1_copy1

0xd946,	// (0x000526cb) main_cset_text_pane_t2_copy1

0xd954,	// (0x000526d9) main_cset_text_pane_t3_copy1

0xd962,	// (0x000526e7) main_cset_text_pane_t4_copy1

0xd970,	// (0x000526f5) main_cset_text_pane_t5_copy1

0xe090,	// (0x00052e15) main_cset_text_pane_t6_copy1

0xe09e,	// (0x00052e23) main_cset_text_pane_t7_copy1

0x7801,	// (0x0004c586) main_cset_text2_pane_t1_copy1

0x13a4,	// (0x00046129) main_ncimui_pane

0x4c2a,	// (0x000499af) popup_query_ncimui_window_ParamLimits

0x4c2a,	// (0x000499af) popup_query_ncimui_window

0xc827,	// (0x000515ac) field_cale_ev2_pane_g4_ParamLimits

0xc827,	// (0x000515ac) field_cale_ev2_pane_g4

0x5e16,	// (0x0004ab9b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e16,	// (0x0004ab9b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x0005453e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x0005453e) cell_video_dialer_keypad_pane_g

0x5e2e,	// (0x0004abb3) cell_video_dialer_keypad_pane_t1

0x11e0,	// (0x00045f65) bg_popup_window_pane_cp012

0xbfd1,	// (0x00050d56) heading_pane_cp06

0xe0ca,	// (0x00052e4f) ncim_query_content_pane

0x11e0,	// (0x00045f65) bg_popup_heading_pane_cp01

0xe0d2,	// (0x00052e57) ncim_heading_pane_t1

0xe0e0,	// (0x00052e65) ncim_indicator_popup_pane

0xe0f2,	// (0x00052e77) ncim_query_button_pane

0xe106,	// (0x00052e8b) ncim_query_content_pane_t1

0xe118,	// (0x00052e9d) ncim_query_content_pane_t2

0x0005,

0xfb19,	// (0x0005489e) ncim_query_content_pane_t

0xe152,	// (0x00052ed7) ncim_query_list_pane

0xe164,	// (0x00052ee9) ncim_query_popup_pane

0xe0e0,	// (0x00052e65) ncim_indicator_popup_pane_ParamLimits

0x7b7c,	// (0x0004c901) ncim_query_content_pane_g1_ParamLimits

0x7b7c,	// (0x0004c901) ncim_query_content_pane_g1

0xe106,	// (0x00052e8b) ncim_query_content_pane_t1_ParamLimits

0xe118,	// (0x00052e9d) ncim_query_content_pane_t2_ParamLimits

0x7b88,	// (0x0004c90d) ncim_query_content_pane_t3_ParamLimits

0x7b88,	// (0x0004c90d) ncim_query_content_pane_t3

0x7bb0,	// (0x0004c935) ncim_query_content_pane_t4_ParamLimits

0x7bb0,	// (0x0004c935) ncim_query_content_pane_t4

0x7bd8,	// (0x0004c95d) ncim_query_content_pane_t5_ParamLimits

0x7bd8,	// (0x0004c95d) ncim_query_content_pane_t5

0xe12a,	// (0x00052eaf) ncim_query_content_pane_t6_ParamLimits

0xe12a,	// (0x00052eaf) ncim_query_content_pane_t6

0xfb19,	// (0x0005489e) ncim_query_content_pane_t_ParamLimits

0xe152,	// (0x00052ed7) ncim_query_list_pane_ParamLimits

0xe164,	// (0x00052ee9) ncim_query_popup_pane_ParamLimits

0xe178,	// (0x00052efd) wait_bar_pane_cp04

0x11e0,	// (0x00045f65) input_focus_pane_cp011

0xe180,	// (0x00052f05) ncim_query_popup_pane_t1

0xe18e,	// (0x00052f13) ncim_list_query_list_pane_ParamLimits

0xe18e,	// (0x00052f13) ncim_list_query_list_pane

0x11e0,	// (0x00045f65) bg_button_pane_cp027

0xe19b,	// (0x00052f20) ncim_query_button_pane_g1

0x11e0,	// (0x00045f65) list_highlight_pane_cp012

0xe1a5,	// (0x00052f2a) ncim_list_query_list_pane_g1

0xe1ad,	// (0x00052f32) ncim_list_query_list_pane_t1

0xd01b,	// (0x00051da0) cam4_indicators_pane_g3_ParamLimits

0xd01b,	// (0x00051da0) cam4_indicators_pane_g3

0xd09b,	// (0x00051e20) vid4_indicators_pane_g5_ParamLimits

0xd09b,	// (0x00051e20) vid4_indicators_pane_g5

0xd23d,	// (0x00051fc2) vid4_progress_pane_g5_ParamLimits

0xd23d,	// (0x00051fc2) vid4_progress_pane_g5

0x7a67,	// (0x0004c7ec) main_ncimui_pane_g1

0x7ad0,	// (0x0004c855) ncimui_group_query_pane_ParamLimits

0x7ad0,	// (0x0004c855) ncimui_group_query_pane

0x7b18,	// (0x0004c89d) ncimui_list_pane_ParamLimits

0x7b18,	// (0x0004c89d) ncimui_list_pane

0x7b3f,	// (0x0004c8c4) ncimui_text_pane_ParamLimits

0x7b3f,	// (0x0004c8c4) ncimui_text_pane

0x7c00,	// (0x0004c985) ncimui_text_pane_t1_ParamLimits

0x7c00,	// (0x0004c985) ncimui_text_pane_t1

0xe1bb,	// (0x00052f40) ncimui_list_single_graphic_pane_ParamLimits

0xe1bb,	// (0x00052f40) ncimui_list_single_graphic_pane

0x7c1e,	// (0x0004c9a3) ncimui_query_pane_ParamLimits

0x7c1e,	// (0x0004c9a3) ncimui_query_pane

0x11e0,	// (0x00045f65) list_highlight_pane_cp013

0xe1cb,	// (0x00052f50) ncim_list_query_list_pane_t1_copy1

0xe1a5,	// (0x00052f2a) ncim_list_single_graphic_pane_g1

0x7c31,	// (0x0004c9b6) ncim_query_button_pane_cp01

0x7c3d,	// (0x0004c9c2) ncim_query_entry_pane_ParamLimits

0x7c3d,	// (0x0004c9c2) ncim_query_entry_pane

0x7c50,	// (0x0004c9d5) ncimui_query_pane_g1

0x7c5c,	// (0x0004c9e1) ncimui_query_pane_t1_ParamLimits

0x7c5c,	// (0x0004c9e1) ncimui_query_pane_t1

0x13a4,	// (0x00046129) input_focus_pane_cp012

0xe1d9,	// (0x00052f5e) ncim_query_entry_pane_t1

0x1c95,	// (0x00046a1a) main_im_pane_ParamLimits

0x13a4,	// (0x00046129) main_mobtv_pane_ParamLimits

0x13a4,	// (0x00046129) main_mobtv_pane

0x78ff,	// (0x0004c684) main_cset6_slider_pane_g18_ParamLimits

0x78ff,	// (0x0004c684) main_cset6_slider_pane_g18

0x790b,	// (0x0004c690) main_cset6_slider_pane_g19_ParamLimits

0x790b,	// (0x0004c690) main_cset6_slider_pane_g19

0x1b6d,	// (0x000468f2) bg_main_mobtv_pane_ParamLimits

0x1b6d,	// (0x000468f2) bg_main_mobtv_pane

0x7c75,	// (0x0004c9fa) main_mobtv_info_pane

0x7c7e,	// (0x0004ca03) main_mobtv_loading_pane_ParamLimits

0x7c7e,	// (0x0004ca03) main_mobtv_loading_pane

0xe1eb,	// (0x00052f70) main_mobtv_pg_channel_list_pane

0xe1f5,	// (0x00052f7a) main_mobtv_pg_hdr_pane

0x7c8b,	// (0x0004ca10) main_mobtv_programe_curr_pane_ParamLimits

0x7c8b,	// (0x0004ca10) main_mobtv_programe_curr_pane

0x7c98,	// (0x0004ca1d) main_mobtv_programe_next_pane_ParamLimits

0x7c98,	// (0x0004ca1d) main_mobtv_programe_next_pane

0xe1fe,	// (0x00052f83) popup_mobtv_noti_window

0x1c23,	// (0x000469a8) main_tv_pg_hdr_pane_g1

0xe206,	// (0x00052f8b) main_tv_pg_hdr_pane_g2

0xe20e,	// (0x00052f93) main_tv_pg_hdr_pane_g3

0xe216,	// (0x00052f9b) main_tv_pg_hdr_pane_g4

0xe21e,	// (0x00052fa3) main_tv_pg_hdr_pane_g5

0xe228,	// (0x00052fad) main_tv_pg_hdr_pane_g6

0xe232,	// (0x00052fb7) main_tv_pg_hdr_pane_g7

0xe23c,	// (0x00052fc1) main_tv_pg_hdr_pane_g8

0xe252,	// (0x00052fd7) main_tv_pg_hdr_pane_g9

0xe25c,	// (0x00052fe1) main_tv_pg_hdr_pane_g10

0xe266,	// (0x00052feb) main_tv_pg_hdr_pane_g11

0x000a,

0xfb26,	// (0x000548ab) main_tv_pg_hdr_pane_g

0xe270,	// (0x00052ff5) main_tv_pg_hdr_pane_t1

0xe27e,	// (0x00053003) main_tv_pg_hdr_pane_t2

0xe28c,	// (0x00053011) main_tv_pg_hdr_pane_t3

0xe29c,	// (0x00053021) main_tv_pg_hdr_pane_t4

0xe2ac,	// (0x00053031) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3d,	// (0x000548c2) main_tv_pg_hdr_pane_t

0xe2bc,	// (0x00053041) single_mobtv_pg_channel_pane_ParamLimits

0xe2bc,	// (0x00053041) single_mobtv_pg_channel_pane

0xe2ce,	// (0x00053053) single_mobtv_pg_channel_table_pane

0xe2d7,	// (0x0005305c) single_mobtv_pg_channel_thumb_pane

0xe2e0,	// (0x00053065) single_tv_pg_channel_pane_g1

0xe2e9,	// (0x0005306e) single_tv_pg_channel_pane_g2

0x0001,

0xfb48,	// (0x000548cd) single_tv_pg_channel_pane_g

0x1b51,	// (0x000468d6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1b51,	// (0x000468d6) bg_single_mobtv_pg_channel_thumb_pane

0xe2f2,	// (0x00053077) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f2,	// (0x00053077) single_mobtv_pg_channel_thumb_pane_g1

0xe300,	// (0x00053085) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe300,	// (0x00053085) single_mobtv_pg_channel_thumb_pane_g2

0xe30c,	// (0x00053091) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe30c,	// (0x00053091) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4d,	// (0x000548d2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4d,	// (0x000548d2) single_mobtv_pg_channel_thumb_pane_g

0xe318,	// (0x0005309d) single_mobtv_pg_channel_thumb_pane_t1

0xe326,	// (0x000530ab) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb54,	// (0x000548d9) single_mobtv_pg_channel_thumb_pane_t

0x1c23,	// (0x000469a8) bg_single_mobtv_pg_channel_table_pane_g1

0x1c23,	// (0x000469a8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00053e34) bg_single_mobtv_pg_channel_table_pane_g

0xe334,	// (0x000530b9) single_mobtv_pg_channel_table_pane_t1

0xe342,	// (0x000530c7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb59,	// (0x000548de) single_mobtv_pg_channel_table_pane_t

0x7cad,	// (0x0004ca32) main_mobtv_info_pane_g1_ParamLimits

0x7cad,	// (0x0004ca32) main_mobtv_info_pane_g1

0x7ccb,	// (0x0004ca50) main_mobtv_info_pane_t1_ParamLimits

0x7ccb,	// (0x0004ca50) main_mobtv_info_pane_t1

0x7d43,	// (0x0004cac8) main_mobtv_info_pane_t2_ParamLimits

0x7d43,	// (0x0004cac8) main_mobtv_info_pane_t2

0x0002,

0xfb63,	// (0x000548e8) main_mobtv_info_pane_t_ParamLimits

0xfb63,	// (0x000548e8) main_mobtv_info_pane_t

0x7dd2,	// (0x0004cb57) wait_bar_pane_cp05

0x7de4,	// (0x0004cb69) main_mobtv_loading_pane_g1_ParamLimits

0x7de4,	// (0x0004cb69) main_mobtv_loading_pane_g1

0x7df7,	// (0x0004cb7c) main_mobtv_loading_pane_g2_ParamLimits

0x7df7,	// (0x0004cb7c) main_mobtv_loading_pane_g2

0x7e03,	// (0x0004cb88) main_mobtv_loading_pane_g3_ParamLimits

0x7e03,	// (0x0004cb88) main_mobtv_loading_pane_g3

0x0002,

0xfb6a,	// (0x000548ef) main_mobtv_loading_pane_g_ParamLimits

0xfb6a,	// (0x000548ef) main_mobtv_loading_pane_g

0xe350,	// (0x000530d5) main_mobtv_loading_pane_t1_ParamLimits

0xe350,	// (0x000530d5) main_mobtv_loading_pane_t1

0xe368,	// (0x000530ed) main_mobtv_loading_pane_t2_ParamLimits

0xe368,	// (0x000530ed) main_mobtv_loading_pane_t2

0x0001,

0xfb71,	// (0x000548f6) main_mobtv_loading_pane_t_ParamLimits

0xfb71,	// (0x000548f6) main_mobtv_loading_pane_t

0x7e16,	// (0x0004cb9b) wait_bar_pane_cp06_ParamLimits

0x7e16,	// (0x0004cb9b) wait_bar_pane_cp06

0xe38c,	// (0x00053111) main_mobtv_programe_curr_pane_t1

0xe39a,	// (0x0005311f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb76,	// (0x000548fb) main_mobtv_programe_curr_pane_t

0xe3a8,	// (0x0005312d) main_mobtv_programe_next_pane_t1

0xe3b6,	// (0x0005313b) main_mobtv_programe_next_pane_t2

0xe3c4,	// (0x00053149) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7b,	// (0x00054900) main_mobtv_programe_next_pane_t

0x11e0,	// (0x00045f65) bg_popup_mobtv_noti_window_pane

0xe3d2,	// (0x00053157) popup_mobtv_noti_window_g1

0xe3da,	// (0x0005315f) popup_mobtv_noti_window_t1

0xe3e8,	// (0x0005316d) popup_mobtv_noti_window_t2

0x0001,

0xfb82,	// (0x00054907) popup_mobtv_noti_window_t

0x1c23,	// (0x000469a8) bg_popup_mobtv_noti_window_pane_g1

0x11e0,	// (0x00045f65) sc_clock_pane

0x11e0,	// (0x00045f65) main_fs_bigclock_pane

0x754b,	// (0x0004c2d0) blid2_tripm_pane_t4_ParamLimits

0x754b,	// (0x0004c2d0) blid2_tripm_pane_t4

0x1b51,	// (0x000468d6) sc_clock_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) sc_clock_pane_g1

0x1c2d,	// (0x000469b2) sc_clock_pane_t1_ParamLimits

0x1c2d,	// (0x000469b2) sc_clock_pane_t1

0x1c2d,	// (0x000469b2) sc_clock_pane_t2_ParamLimits

0x1c2d,	// (0x000469b2) sc_clock_pane_t2

0x1c2d,	// (0x000469b2) sc_clock_pane_t3_ParamLimits

0x1c2d,	// (0x000469b2) sc_clock_pane_t3

0x0004,

0xfb87,	// (0x0005490c) sc_clock_pane_t_ParamLimits

0xfb87,	// (0x0005490c) sc_clock_pane_t

0x8636,	// (0x0004d3bb) main_fs_bigclock_indicator_pane_ParamLimits

0x8636,	// (0x0004d3bb) main_fs_bigclock_indicator_pane

0x7e74,	// (0x0004cbf9) main_fs_bigclock_pane_g1_ParamLimits

0x7e74,	// (0x0004cbf9) main_fs_bigclock_pane_g1

0x8642,	// (0x0004d3c7) main_fs_bigclock_pane_t1_ParamLimits

0x8642,	// (0x0004d3c7) main_fs_bigclock_pane_t1

0x8654,	// (0x0004d3d9) main_fs_bigclock_pane_t2_ParamLimits

0x8654,	// (0x0004d3d9) main_fs_bigclock_pane_t2

0x8668,	// (0x0004d3ed) main_fs_bigclock_pane_t3_ParamLimits

0x8668,	// (0x0004d3ed) main_fs_bigclock_pane_t3

0x0002,

0xfd18,	// (0x00054a9d) main_fs_bigclock_pane_t_ParamLimits

0xfd18,	// (0x00054a9d) main_fs_bigclock_pane_t

0xec41,	// (0x000539c6) main_fs_bigclock_indicator_pane_g1

0xe0fa,	// (0x00052e7f) ncim_query_content_pane_g2_ParamLimits

0xe0fa,	// (0x00052e7f) ncim_query_content_pane_g2

0x0001,

0xfb14,	// (0x00054899) ncim_query_content_pane_g_ParamLimits

0xfb14,	// (0x00054899) ncim_query_content_pane_g

0x1c2d,	// (0x000469b2) sc_clock_pane_t4_ParamLimits

0x1c2d,	// (0x000469b2) sc_clock_pane_t4

0x13a4,	// (0x00046129) main_radioblah_pane

0xcf9d,	// (0x00051d22) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf9d,	// (0x00051d22) cell_call4_button_pane_t1_copy1

0x7a7f,	// (0x0004c804) main_ncimui_pane_t1_ParamLimits

0x7a7f,	// (0x0004c804) main_ncimui_pane_t1

0x7a99,	// (0x0004c81e) main_ncimui_pane_t2_ParamLimits

0x7a99,	// (0x0004c81e) main_ncimui_pane_t2

0x0002,

0xfb0d,	// (0x00054892) main_ncimui_pane_t_ParamLimits

0xfb0d,	// (0x00054892) main_ncimui_pane_t

0xae32,	// (0x0004fbb7) main_radioblah_anim_pane_ParamLimits

0xae32,	// (0x0004fbb7) main_radioblah_anim_pane

0xae32,	// (0x0004fbb7) main_radioblah_info_pane_ParamLimits

0xae32,	// (0x0004fbb7) main_radioblah_info_pane

0xae1e,	// (0x0004fba3) main_radioblah_pane_t1_ParamLimits

0xae1e,	// (0x0004fba3) main_radioblah_pane_t1

0xae1e,	// (0x0004fba3) main_radioblah_pane_t2_ParamLimits

0xae1e,	// (0x0004fba3) main_radioblah_pane_t2

0x0003,

0xfba8,	// (0x0005492d) main_radioblah_pane_t_ParamLimits

0xfba8,	// (0x0005492d) main_radioblah_pane_t

0x13a4,	// (0x00046129) main_radioblah_rocker_ctrl_pane_ParamLimits

0x13a4,	// (0x00046129) main_radioblah_rocker_ctrl_pane

0xc1d6,	// (0x00050f5b) main_radioblah_info_pane_t1_ParamLimits

0xc1d6,	// (0x00050f5b) main_radioblah_info_pane_t1

0xe55d,	// (0x000532e2) main_radioblah_info_pane_t2_ParamLimits

0xe55d,	// (0x000532e2) main_radioblah_info_pane_t2

0x0003,

0xfbb1,	// (0x00054936) main_radioblah_info_pane_t_ParamLimits

0xfbb1,	// (0x00054936) main_radioblah_info_pane_t

0x1c23,	// (0x000469a8) main_radioblah_rocker_ctrl_pane_g1

0x1c23,	// (0x000469a8) main_radioblah_rocker_ctrl_pane_g2

0x1c23,	// (0x000469a8) main_radioblah_rocker_ctrl_pane_g3

0x1c23,	// (0x000469a8) main_radioblah_rocker_ctrl_pane_g4

0x1c23,	// (0x000469a8) main_radioblah_rocker_ctrl_pane_g5

0x1c23,	// (0x000469a8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbba,	// (0x0005493f) main_radioblah_rocker_ctrl_pane_g

0x7801,	// (0x0004c586) main_cset_text2_pane_t1_copy1_ParamLimits

0xcfeb,	// (0x00051d70) cam4_image_uncrop_qvga_pane

0xd044,	// (0x00051dc9) vid4_image_uncrop_qcif_pane

0xdbcf,	// (0x00052954) cam6_image_uncrop_qvga_pane_ParamLimits

0xdbcf,	// (0x00052954) cam6_image_uncrop_qvga_pane

0xde01,	// (0x00052b86) vid6_image_uncrop_qcif_pane_ParamLimits

0xde01,	// (0x00052b86) vid6_image_uncrop_qcif_pane

0x11e0,	// (0x00045f65) bg_popup_preview_window_pane_cp03

0xe0ac,	// (0x00052e31) list_cset_text2_pane

0xe0b4,	// (0x00052e39) main_cset6_text2_pane_g1

0xe0bc,	// (0x00052e41) main_cset6_text2_pane_t1

0x7ec1,	// (0x0004cc46) list_cset_text2_pane_t1_ParamLimits

0x7ec1,	// (0x0004cc46) list_cset_text2_pane_t1

0x13a4,	// (0x00046129) main_radioblah_pane_ParamLimits

0x7dbe,	// (0x0004cb43) main_mobtv_info_pane_t3_ParamLimits

0x7dbe,	// (0x0004cb43) main_mobtv_info_pane_t3

0xae10,	// (0x0004fb95) main_radioblah_pane_g1

0xe52d,	// (0x000532b2) main_radioblah_info_pane_g1

0x1c41,	// (0x000469c6) main_radioblah_info_pane_t3_ParamLimits

0x1c41,	// (0x000469c6) main_radioblah_info_pane_t3

0x395d,	// (0x000486e2) highlight_cell_cale_month_pane_ParamLimits

0x395d,	// (0x000486e2) highlight_cell_cale_month_pane

0x11e0,	// (0x00045f65) main_phob_fisheye_pane

0xc89c,	// (0x00051621) scroll_pane_cp0031_ParamLimits

0xc89c,	// (0x00051621) scroll_pane_cp0031

0xdf0f,	// (0x00052c94) wait_bar_pane_cp08_ParamLimits

0x7886,	// (0x0004c60b) cset_list_set_pane_copy1_ParamLimits

0xe5ac,	// (0x00053331) highlight_cell_cale_month_pane_g1

0x7eda,	// (0x0004cc5f) highlight_cell_cale_month_pane_t1

0xdb58,	// (0x000528dd) list_gen_pane_cp01

0xd7ba,	// (0x0005253f) scroll_pane_01

0x7ee8,	// (0x0004cc6d) list_single_double_fisheye_pane

0x0c75,	// (0x000459fa) list_double_fisheye_pane_g1_ParamLimits

0x0c75,	// (0x000459fa) list_double_fisheye_pane_g1

0x0c81,	// (0x00045a06) list_double_fisheye_pane_g2_ParamLimits

0x0c81,	// (0x00045a06) list_double_fisheye_pane_g2

0x7ef1,	// (0x0004cc76) list_double_fisheye_pane_g3_ParamLimits

0x7ef1,	// (0x0004cc76) list_double_fisheye_pane_g3

0x0004,

0xfbc7,	// (0x0005494c) list_double_fisheye_pane_g_ParamLimits

0xfbc7,	// (0x0005494c) list_double_fisheye_pane_g

0x0cb2,	// (0x00045a37) list_double_fisheye_pane_t1_ParamLimits

0x0cb2,	// (0x00045a37) list_double_fisheye_pane_t1

0x0ccd,	// (0x00045a52) list_double_fisheye_pane_t2_ParamLimits

0x0ccd,	// (0x00045a52) list_double_fisheye_pane_t2

0x0001,

0xfbd2,	// (0x00054957) list_double_fisheye_pane_t_ParamLimits

0xfbd2,	// (0x00054957) list_double_fisheye_pane_t

0x11e0,	// (0x00045f65) main_call5_pane

0x13a4,	// (0x00046129) sc_swipe_pane_ParamLimits

0x13a4,	// (0x00046129) sc_swipe_pane

0x7f10,	// (0x0004cc95) call5_image_pane_ParamLimits

0x7f10,	// (0x0004cc95) call5_image_pane

0x7f2d,	// (0x0004ccb2) call5_swipe_1_pane_ParamLimits

0x7f2d,	// (0x0004ccb2) call5_swipe_1_pane

0x7f40,	// (0x0004ccc5) call5_swipe_2_pane_ParamLimits

0x7f40,	// (0x0004ccc5) call5_swipe_2_pane

0x7f6b,	// (0x0004ccf0) popup_call5_audio_first_window_ParamLimits

0x7f6b,	// (0x0004ccf0) popup_call5_audio_first_window

0x1b51,	// (0x000468d6) call5_swipe_1_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) call5_swipe_1_pane_g1

0xe5b4,	// (0x00053339) call5_swipe_1_pane_g2_ParamLimits

0xe5b4,	// (0x00053339) call5_swipe_1_pane_g2

0x0001,

0xfbd7,	// (0x0005495c) call5_swipe_1_pane_g_ParamLimits

0xfbd7,	// (0x0005495c) call5_swipe_1_pane_g

0xe5c0,	// (0x00053345) call5_swipe_1_pane_t1_ParamLimits

0xe5c0,	// (0x00053345) call5_swipe_1_pane_t1

0x1b51,	// (0x000468d6) call5_swipe_2_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) call5_swipe_2_pane_g1

0xe5d5,	// (0x0005335a) call5_swipe_2_pane_g2_ParamLimits

0xe5d5,	// (0x0005335a) call5_swipe_2_pane_g2

0x0001,

0xfbdc,	// (0x00054961) call5_swipe_2_pane_g_ParamLimits

0xfbdc,	// (0x00054961) call5_swipe_2_pane_g

0xe5e1,	// (0x00053366) call5_swipe_2_pane_t1_ParamLimits

0xe5e1,	// (0x00053366) call5_swipe_2_pane_t1

0x1b51,	// (0x000468d6) sc_swipe_pane_g1_ParamLimits

0x1b51,	// (0x000468d6) sc_swipe_pane_g1

0x1b5f,	// (0x000468e4) sc_swipe_pane_g2_ParamLimits

0x1b5f,	// (0x000468e4) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x000544da) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x000544da) sc_swipe_pane_g

0x1c2d,	// (0x000469b2) sc_swipe_pane_t1_ParamLimits

0x1c2d,	// (0x000469b2) sc_swipe_pane_t1

0x11e0,	// (0x00045f65) main_cmail_launcher_pane

0x7f7c,	// (0x0004cd01) aid_size_cell_cmail_l_ParamLimits

0x7f7c,	// (0x0004cd01) aid_size_cell_cmail_l

0x7f8a,	// (0x0004cd0f) grid_cmail_l_pane_ParamLimits

0x7f8a,	// (0x0004cd0f) grid_cmail_l_pane

0x7fa4,	// (0x0004cd29) cell_cmail_l_pane_ParamLimits

0x7fa4,	// (0x0004cd29) cell_cmail_l_pane

0xe5f6,	// (0x0005337b) cell_cmail_l_pane_g1_ParamLimits

0xe5f6,	// (0x0005337b) cell_cmail_l_pane_g1

0xe602,	// (0x00053387) cell_cmail_l_pane_t1_ParamLimits

0xe602,	// (0x00053387) cell_cmail_l_pane_t1

0xe618,	// (0x0005339d) cell_cmail_l_pane_t2_ParamLimits

0xe618,	// (0x0005339d) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x00054966) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x00054966) cell_cmail_l_pane_t

0x13a4,	// (0x00046129) grid_highlight_pane_cp018_ParamLimits

0x13a4,	// (0x00046129) grid_highlight_pane_cp018

0x12b0,	// (0x00046035) main2_pane_ParamLimits

0x12b0,	// (0x00046035) main2_pane

0x1ebc,	// (0x00046c41) popup_sp_fs_action_menu_bg_pane_g1

0x1ec4,	// (0x00046c49) popup_sp_fs_action_menu_bg_pane_g2

0x1ecc,	// (0x00046c51) popup_sp_fs_action_menu_bg_pane_g3

0x1ed4,	// (0x00046c59) popup_sp_fs_action_menu_bg_pane_g4

0x1edc,	// (0x00046c61) popup_sp_fs_action_menu_bg_pane_g5

0x1ee4,	// (0x00046c69) popup_sp_fs_action_menu_bg_pane_g6

0x1eec,	// (0x00046c71) popup_sp_fs_action_menu_bg_pane_g7

0x1ef4,	// (0x00046c79) popup_sp_fs_action_menu_bg_pane_g8

0x1efc,	// (0x00046c81) popup_sp_fs_action_menu_bg_pane_g9

0x1f04,	// (0x00046c89) popup_sp_fs_action_menu_bg_pane_g10

0x1f04,	// (0x00046c89) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00053e85) popup_sp_fs_action_menu_bg_pane_g

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g3_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g3_g2

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00053f33) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00053f33) list_medium_line_x2_t3_g3_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g3_t1

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g3_t2

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00053f3a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00053f3a) list_medium_line_x2_t3_g3_t

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g2_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00053f41) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00053f41) list_medium_line_x2_t3_g2_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g2_t1

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g2_t2

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00053f3a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00053f3a) list_medium_line_x2_t3_g2_t

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g4_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g4_g2

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g4_g3

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00053f46) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00053f46) list_medium_line_x2_t4_g4_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g4_t1

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g4_t2

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g4_t3

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00053f4f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00053f4f) list_medium_line_x2_t4_g4_t

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g4_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g4_g2

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g4_g3

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00053f46) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00053f46) list_medium_line_x2_t2_g4_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g4_t1

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x00053f16) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x00053f16) list_medium_line_x2_t2_g4_t

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g3_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g3_g2

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00053f33) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00053f33) list_medium_line_x2_t2_g3_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g3_t1

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x00053f16) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x00053f16) list_medium_line_x2_t2_g3_t

0x3c14,	// (0x00048999) main_sp_fs_list_pane_ParamLimits

0x3c14,	// (0x00048999) main_sp_fs_list_pane

0xe246,	// (0x00052fcb) sp_fs_scroll_pane_ParamLimits

0xe246,	// (0x00052fcb) sp_fs_scroll_pane

0xa7e5,	// (0x0004f56a) list_medium_line_x2_t3_t1

0xa7e5,	// (0x0004f56a) list_medium_line_x2_t3_t2

0xa7e5,	// (0x0004f56a) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x00053ffc) list_medium_line_x2_t3_t

0xa7e5,	// (0x0004f56a) list_medium_line_x3_t4_t1

0xa7e5,	// (0x0004f56a) list_medium_line_x3_t4_t2

0xa7e5,	// (0x0004f56a) list_medium_line_x3_t4_t3

0xa7e5,	// (0x0004f56a) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00054003) list_medium_line_x3_t4_t

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t5_t1

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t5_t2

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t5_t3

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t5_t4

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x0005400c) list_medium_line_x4_t5_t

0x1b51,	// (0x000468d6) list_medium_line_t4_g4_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t4_g4_g1

0x1b51,	// (0x000468d6) list_medium_line_t4_g4_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t4_g4_g2

0x1b51,	// (0x000468d6) list_medium_line_t4_g4_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t4_g4_g3

0x1b51,	// (0x000468d6) list_medium_line_t4_g4_g4_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00053f46) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00053f46) list_medium_line_t4_g4_g

0x1c2d,	// (0x000469b2) list_medium_line_t4_g4_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t4_g4_t1

0x1c2d,	// (0x000469b2) list_medium_line_t4_g4_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t4_g4_t2

0x1c2d,	// (0x000469b2) list_medium_line_t4_g4_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t4_g4_t3

0x1c2d,	// (0x000469b2) list_medium_line_t4_g4_t4_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00053f4f) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00053f4f) list_medium_line_t4_g4_t

0x3caf,	// (0x00048a34) chi_dic_find_pane_g1

0x49f4,	// (0x00049779) main_tport_pane

0xa7e5,	// (0x0004f56a) list_medium_line_plain_t1

0x1b51,	// (0x000468d6) list_medium_line_t2_g2_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t2_g2_g1

0x1b51,	// (0x000468d6) list_medium_line_t2_g2_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00053f41) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00053f41) list_medium_line_t2_g2_g

0x1c2d,	// (0x000469b2) list_medium_line_t2_g2_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t2_g2_t1

0x1c2d,	// (0x000469b2) list_medium_line_t2_g2_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x00053f16) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x00053f16) list_medium_line_t2_g2_t

0xd273,	// (0x00051ff8) aid_sp_fs_list_icon_a_sm

0xd27b,	// (0x00052000) aid_sp_fs_list_icon_d

0xdb61,	// (0x000528e6) aid_sp_fs_text_primary

0xd283,	// (0x00052008) aid_sp_fs_text_secondary

0x11e0,	// (0x00045f65) list_medium_line

0x11e0,	// (0x00045f65) list_medium_line_g2

0x11e0,	// (0x00045f65) list_medium_line_g3

0x11e0,	// (0x00045f65) list_medium_line_plain

0x11e0,	// (0x00045f65) list_medium_line_plain_t2

0x11e0,	// (0x00045f65) list_medium_line_plain_t3

0x11e0,	// (0x00045f65) list_medium_line_right_icon

0x11e0,	// (0x00045f65) list_medium_line_right_iconx2

0x11e0,	// (0x00045f65) list_medium_line_t2

0x11e0,	// (0x00045f65) list_medium_line_t2_g2

0x11e0,	// (0x00045f65) list_medium_line_t2_g3

0x11e0,	// (0x00045f65) list_medium_line_t2_right_icon

0x11e0,	// (0x00045f65) list_medium_line_t2_right_iconx2

0x11e0,	// (0x00045f65) list_medium_line_t3

0x11e0,	// (0x00045f65) list_medium_line_t3_g2

0x11e0,	// (0x00045f65) list_medium_line_t3_g3

0x11e0,	// (0x00045f65) list_medium_line_t3_right_iconx2

0x11e0,	// (0x00045f65) list_medium_line_t4_g4

0x11e0,	// (0x00045f65) list_medium_line_x2

0x11e0,	// (0x00045f65) list_medium_line_x2_t2_g2

0x11e0,	// (0x00045f65) list_medium_line_x2_t2_g3

0x11e0,	// (0x00045f65) list_medium_line_x2_t2_g4

0x11e0,	// (0x00045f65) list_medium_line_x2_t3

0x11e0,	// (0x00045f65) list_medium_line_x2_t3_g2

0x11e0,	// (0x00045f65) list_medium_line_x2_t3_g3

0x11e0,	// (0x00045f65) list_medium_line_x2_t3_g4

0x11e0,	// (0x00045f65) list_medium_line_x2_t4_g2

0x11e0,	// (0x00045f65) list_medium_line_x2_t4_g4

0x11e0,	// (0x00045f65) list_medium_line_x3

0x11e0,	// (0x00045f65) list_medium_line_x3_t4

0x11e0,	// (0x00045f65) list_medium_line_x3_t4_g4

0x11e0,	// (0x00045f65) list_medium_line_x4_t4

0x11e0,	// (0x00045f65) list_medium_line_x4_t4_g7

0x11e0,	// (0x00045f65) list_medium_line_x4_t5

0x0c18,	// (0x0004599d) list_single_fs_dyc_pane_ParamLimits

0x0c18,	// (0x0004599d) list_single_fs_dyc_pane

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g1

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g2

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g3

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g4

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g5

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x4_t4_g7_g6

0x1b5f,	// (0x000468e4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1b5f,	// (0x000468e4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaee,	// (0x00054873) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaee,	// (0x00054873) list_medium_line_x4_t4_g7_g

0x1c2d,	// (0x000469b2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x4_t4_g7_t1

0x1c2d,	// (0x000469b2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x4_t4_g7_t2

0x1c2d,	// (0x000469b2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x4_t4_g7_t3

0x1c41,	// (0x000469c6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1c41,	// (0x000469c6) list_medium_line_x4_t4_g7_t4

0x1c41,	// (0x000469c6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1c41,	// (0x000469c6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafd,	// (0x00054882) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafd,	// (0x00054882) list_medium_line_x4_t4_g7_t

0x0c58,	// (0x000459dd) list_single_dyc_row_pane_ParamLimits

0x0c58,	// (0x000459dd) list_single_dyc_row_pane

0x7efd,	// (0x0004cc82) call5_gesture_pane_ParamLimits

0x7efd,	// (0x0004cc82) call5_gesture_pane

0x7f53,	// (0x0004ccd8) call5_windows_pane_ParamLimits

0x7f53,	// (0x0004ccd8) call5_windows_pane

0x7fbe,	// (0x0004cd43) call5_swipe_1_pane_cp_ParamLimits

0x7fbe,	// (0x0004cd43) call5_swipe_1_pane_cp

0x7fca,	// (0x0004cd4f) call5_swipe_2_pane_cp_ParamLimits

0x7fca,	// (0x0004cd4f) call5_swipe_2_pane_cp

0x2569,	// (0x000472ee) call5_image_pane_cp

0x7fd6,	// (0x0004cd5b) popup_call5_audio_first_window_cp_ParamLimits

0x7fd6,	// (0x0004cd5b) popup_call5_audio_first_window_cp

0xe635,	// (0x000533ba) call5_swipe_1_pane_g1_cp_ParamLimits

0xe635,	// (0x000533ba) call5_swipe_1_pane_g1_cp

0xe642,	// (0x000533c7) call5_swipe_1_pane_g2_cp

0xe64a,	// (0x000533cf) call5_swipe_1_pane_t1_cp_ParamLimits

0xe64a,	// (0x000533cf) call5_swipe_1_pane_t1_cp

0xe635,	// (0x000533ba) call5_swipe_2_pane_g1_cp_ParamLimits

0xe635,	// (0x000533ba) call5_swipe_2_pane_g1_cp

0xe65f,	// (0x000533e4) call5_swipe_2_pane_g2_cp

0xe667,	// (0x000533ec) call5_swipe_2_pane_t1_cp_ParamLimits

0xe667,	// (0x000533ec) call5_swipe_2_pane_t1_cp

0x13a4,	// (0x00046129) main_sp_fs_email_pane

0xe67c,	// (0x00053401) main_sp_fs_listscroll_pane_te

0x0cef,	// (0x00045a74) popup_sp_fs_action_menu_pane_ParamLimits

0x0cef,	// (0x00045a74) popup_sp_fs_action_menu_pane

0x1c23,	// (0x000469a8) bg_sp_fs_ctrlbar_pane_g1

0xe685,	// (0x0005340a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe68e,	// (0x00053413) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe697,	// (0x0005341c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1c23,	// (0x000469a8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x0005496b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1f8,	// (0x00050f7d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1f8,	// (0x00050f7d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6a0,	// (0x00053425) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6a0,	// (0x00053425) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ac,	// (0x00053431) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ac,	// (0x00053431) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x00054974) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x00054974) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6b8,	// (0x0005343d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6b8,	// (0x0005343d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1c23,	// (0x000469a8) list_medium_line_t2_right_icon_g1

0xa7e5,	// (0x0004f56a) list_medium_line_t2_right_icon_t1

0xa7e5,	// (0x0004f56a) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x00054979) list_medium_line_t2_right_icon_t

0xae32,	// (0x0004fbb7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xae32,	// (0x0004fbb7) bg_sp_fs_ctrlbar_pane

0x802c,	// (0x0004cdb1) main_sp_fs_ctrlbar_button_pane_cp01

0x8036,	// (0x0004cdbb) main_sp_fs_ctrlbar_ddmenu_pane

0xe70a,	// (0x0005348f) main_sp_fs_ctrlbar_pane_g1

0xe716,	// (0x0005349b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x0005497e) main_sp_fs_ctrlbar_pane_g

0x8074,	// (0x0004cdf9) main_sp_fs_ctrlbar_pane_t1

0x80b3,	// (0x0004ce38) main_sp_fs_ctrlbar_pane

0x80d7,	// (0x0004ce5c) main_sp_fs_listscroll_pane_te_cp01

0x0d31,	// (0x00045ab6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0d31,	// (0x00045ab6) popup_sp_fs_action_menu_pane_cp01

0x13a4,	// (0x00046129) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x13a4,	// (0x00046129) bg_sp_fs_highlight_list_pane_cp01

0xd28c,	// (0x00052011) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd28c,	// (0x00052011) sp_fs_action_menu_list_gene_pane_g1

0xe73d,	// (0x000534c2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe73d,	// (0x000534c2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x0005498c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x0005498c) sp_fs_action_menu_list_gene_pane_g

0xd29b,	// (0x00052020) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd29b,	// (0x00052020) sp_fs_action_menu_list_gene_pane_t1

0xd2b3,	// (0x00052038) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd2b3,	// (0x00052038) sp_fs_action_menu_list_gene_pane

0xe74a,	// (0x000534cf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe74a,	// (0x000534cf) popup_sp_fs_action_menu_bg_pane

0xd2d2,	// (0x00052057) sp_fs_action_menu_list_pane_ParamLimits

0xd2d2,	// (0x00052057) sp_fs_action_menu_list_pane

0x0d56,	// (0x00045adb) sp_fs_scroll_pane_cp01_ParamLimits

0x0d56,	// (0x00045adb) sp_fs_scroll_pane_cp01

0xa7e5,	// (0x0004f56a) list_medium_line_plain_t2_t1

0xa7e5,	// (0x0004f56a) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x00054979) list_medium_line_plain_t2_t

0xa7e5,	// (0x0004f56a) list_medium_line_plain_t3_t1

0xa7e5,	// (0x0004f56a) list_medium_line_plain_t3_t2

0xa7e5,	// (0x0004f56a) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x00053ffc) list_medium_line_plain_t3_t

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g2_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00053f41) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00053f41) list_medium_line_x2_t2_g2_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g2_t1

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x00053f16) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x00053f16) list_medium_line_x2_t2_g2_t

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g2_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00053f41) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00053f41) list_medium_line_x2_t4_g2_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g2_t1

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g2_t2

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g2_t3

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00053f4f) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00053f4f) list_medium_line_x2_t4_g2_t

0x1c23,	// (0x000469a8) list_medium_line_t3_right_iconx2_g1

0x1c23,	// (0x000469a8) list_medium_line_t3_right_iconx2_g2

0x1c23,	// (0x000469a8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00054118) list_medium_line_t3_right_iconx2_g

0xa7e5,	// (0x0004f56a) list_medium_line_t3_right_iconx2_t1

0xa7e5,	// (0x0004f56a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x00054979) list_medium_line_t3_right_iconx2_t

0x1b51,	// (0x000468d6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x3_t4_g4_g1

0x1b51,	// (0x000468d6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x3_t4_g4_g2

0x1b51,	// (0x000468d6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x3_t4_g4_g3

0x1b51,	// (0x000468d6) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00053f46) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00053f46) list_medium_line_x3_t4_g4_g

0x1c2d,	// (0x000469b2) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x3_t4_g4_t1

0x1c2d,	// (0x000469b2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x3_t4_g4_t2

0x1c2d,	// (0x000469b2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x3_t4_g4_t3

0x1c2d,	// (0x000469b2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00053f4f) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00053f4f) list_medium_line_x3_t4_g4_t

0x0d7c,	// (0x00045b01) list_single_dyc_row_text_pane_t1_ParamLimits

0x0d7c,	// (0x00045b01) list_single_dyc_row_text_pane_t1

0x0dc5,	// (0x00045b4a) list_single_dyc_row_text_pane_t2_ParamLimits

0x0dc5,	// (0x00045b4a) list_single_dyc_row_text_pane_t2

0xd2f2,	// (0x00052077) list_single_dyc_row_text_pane_t3_ParamLimits

0xd2f2,	// (0x00052077) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x00054991) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x00054991) list_single_dyc_row_text_pane_t

0xd316,	// (0x0005209b) list_single_dyc_row_pane_g1_ParamLimits

0xd316,	// (0x0005209b) list_single_dyc_row_pane_g1

0xd322,	// (0x000520a7) list_single_dyc_row_pane_g2_ParamLimits

0xd322,	// (0x000520a7) list_single_dyc_row_pane_g2

0xd32e,	// (0x000520b3) list_single_dyc_row_pane_g3_ParamLimits

0xd32e,	// (0x000520b3) list_single_dyc_row_pane_g3

0xd33a,	// (0x000520bf) list_single_dyc_row_pane_g4_ParamLimits

0xd33a,	// (0x000520bf) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x0005499e) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x0005499e) list_single_dyc_row_pane_g

0xd346,	// (0x000520cb) list_single_dyc_row_text_pane_ParamLimits

0xd346,	// (0x000520cb) list_single_dyc_row_text_pane

0x11e0,	// (0x00045f65) bg_sp_fs_scroll_pane

0xe758,	// (0x000534dd) thumb_sp_fs_scroll_pane

0x1b51,	// (0x000468d6) list_medium_line_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_g1

0x1c2d,	// (0x000469b2) list_medium_line_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t1

0x1b51,	// (0x000468d6) list_medium_line_x2_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00053f41) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00053f41) list_medium_line_x2_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t1

0x1b51,	// (0x000468d6) list_medium_line_x3_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x3_g1

0xe761,	// (0x000534e6) list_medium_line_x3_g2_ParamLimits

0xe761,	// (0x000534e6) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x000549a7) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x000549a7) list_medium_line_x3_g

0xe76f,	// (0x000534f4) list_medium_line_x3_t1_ParamLimits

0xe76f,	// (0x000534f4) list_medium_line_x3_t1

0xe783,	// (0x00053508) thumb_sp_fs_scroll_pane_g1

0xe78c,	// (0x00053511) thumb_sp_fs_scroll_pane_g2

0xe795,	// (0x0005351a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x000549ac) thumb_sp_fs_scroll_pane_g

0xe783,	// (0x00053508) bg_sp_fs_scroll_pane_g1

0xe78c,	// (0x00053511) bg_sp_fs_scroll_pane_g2

0xe795,	// (0x0005351a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x000549ac) bg_sp_fs_scroll_pane_g

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g4_g1

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g4_g2

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g4_g3

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00053f46) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00053f46) list_medium_line_x2_t3_g4_g

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g4_t1

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g4_t2

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00053f3a) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00053f3a) list_medium_line_x2_t3_g4_t

0x1b51,	// (0x000468d6) list_medium_line_g2_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_g2_g1

0x1b51,	// (0x000468d6) list_medium_line_g2_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00053f41) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00053f41) list_medium_line_g2_g

0x1c2d,	// (0x000469b2) list_medium_line_g2_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_g2_t1

0x1b51,	// (0x000468d6) list_medium_line_t3_g2_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t3_g2_g1

0x1b51,	// (0x000468d6) list_medium_line_t3_g2_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00053f41) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00053f41) list_medium_line_t3_g2_g

0x1c2d,	// (0x000469b2) list_medium_line_t3_g2_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_g2_t1

0x1c2d,	// (0x000469b2) list_medium_line_t3_g2_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_g2_t2

0x1c2d,	// (0x000469b2) list_medium_line_t3_g2_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00053f3a) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00053f3a) list_medium_line_t3_g2_t

0x1c23,	// (0x000469a8) list_medium_line_right_icon_g1

0xa7e5,	// (0x0004f56a) list_medium_line_right_icon_t1

0x1b51,	// (0x000468d6) list_medium_line_t2_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t2_g1

0x1c2d,	// (0x000469b2) list_medium_line_t2_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t2_t1

0x1c2d,	// (0x000469b2) list_medium_line_t2_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x00053f16) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x00053f16) list_medium_line_t2_t

0x1b51,	// (0x000468d6) list_medium_line_t3_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t3_g1

0x1c2d,	// (0x000469b2) list_medium_line_t3_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_t1

0x1c2d,	// (0x000469b2) list_medium_line_t3_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_t2

0x1c2d,	// (0x000469b2) list_medium_line_t3_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00053f3a) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00053f3a) list_medium_line_t3_t

0x1b51,	// (0x000468d6) list_medium_line_g3_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_g3_g1

0x1b51,	// (0x000468d6) list_medium_line_g3_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_g3_g2

0x1b51,	// (0x000468d6) list_medium_line_g3_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00053f33) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00053f33) list_medium_line_g3_g

0x1c2d,	// (0x000469b2) list_medium_line_g3_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_g3_t1

0x1b51,	// (0x000468d6) list_medium_line_t2_g3_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t2_g3_g1

0x1b51,	// (0x000468d6) list_medium_line_t2_g3_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t2_g3_g2

0x1b51,	// (0x000468d6) list_medium_line_t2_g3_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00053f33) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00053f33) list_medium_line_t2_g3_g

0x1c2d,	// (0x000469b2) list_medium_line_t2_g3_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t2_g3_t1

0x1c2d,	// (0x000469b2) list_medium_line_t2_g3_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x00053f16) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x00053f16) list_medium_line_t2_g3_t

0x1b51,	// (0x000468d6) list_medium_line_t3_g3_g1_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t3_g3_g1

0x1b51,	// (0x000468d6) list_medium_line_t3_g3_g2_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t3_g3_g2

0x1b51,	// (0x000468d6) list_medium_line_t3_g3_g3_ParamLimits

0x1b51,	// (0x000468d6) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00053f33) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00053f33) list_medium_line_t3_g3_g

0x1c2d,	// (0x000469b2) list_medium_line_t3_g3_t1_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_g3_t1

0x1c2d,	// (0x000469b2) list_medium_line_t3_g3_t2_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_g3_t2

0x1c2d,	// (0x000469b2) list_medium_line_t3_g3_t3_ParamLimits

0x1c2d,	// (0x000469b2) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00053f3a) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00053f3a) list_medium_line_t3_g3_t

0x1c23,	// (0x000469a8) list_medium_line_right_iconx2_g1

0x1c23,	// (0x000469a8) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00053e34) list_medium_line_right_iconx2_g

0xa7e5,	// (0x0004f56a) list_medium_line_right_iconx2_t1

0x1c23,	// (0x000469a8) list_medium_line_t2_right_iconx2_g1

0x1c23,	// (0x000469a8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00053e34) list_medium_line_t2_right_iconx2_g

0xa7e5,	// (0x0004f56a) list_medium_line_t2_right_iconx2_t1

0xa7e5,	// (0x0004f56a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x00054979) list_medium_line_t2_right_iconx2_t

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t4_t1

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t4_t2

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t4_t3

0xa7e5,	// (0x0004f56a) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00054003) list_medium_line_x4_t4_t

0x8144,	// (0x0004cec9) tport_appsw_pane_ParamLimits

0x8144,	// (0x0004cec9) tport_appsw_pane

0x815c,	// (0x0004cee1) tport_contact_pane_ParamLimits

0x815c,	// (0x0004cee1) tport_contact_pane

0x8174,	// (0x0004cef9) tport_listscroll_pane_ParamLimits

0x8174,	// (0x0004cef9) tport_listscroll_pane

0x818e,	// (0x0004cf13) cell_tport_appsw_pane_ParamLimits

0x818e,	// (0x0004cf13) cell_tport_appsw_pane

0xae10,	// (0x0004fb95) tport_appsw_pane_g1_ParamLimits

0xae10,	// (0x0004fb95) tport_appsw_pane_g1

0xe79e,	// (0x00053523) tport_contact_pane_g1

0xe180,	// (0x00052f05) tport_contact_pane_t1

0xe7a7,	// (0x0005352c) tport_contact_pane_t2

0x0001,

0xfc2e,	// (0x000549b3) tport_contact_pane_t

0xe7b5,	// (0x0005353a) list_tport_pane

0xe7be,	// (0x00053543) scroll_pane_cp_030

0x81d6,	// (0x0004cf5b) cell_tport_appsw_pane_g1

0x81e6,	// (0x0004cf6b) cell_tport_appsw_pane_t1

0x81f4,	// (0x0004cf79) grid_highlight_pane_cp019

0x81fc,	// (0x0004cf81) list_tport_double_graphic_pane_ParamLimits

0x81fc,	// (0x0004cf81) list_tport_double_graphic_pane

0x13a4,	// (0x00046129) list_highlight_pane_cp023_ParamLimits

0x13a4,	// (0x00046129) list_highlight_pane_cp023

0x8209,	// (0x0004cf8e) list_tport_double_graphic_pane_g1_ParamLimits

0x8209,	// (0x0004cf8e) list_tport_double_graphic_pane_g1

0x8216,	// (0x0004cf9b) list_tport_double_graphic_pane_t1_ParamLimits

0x8216,	// (0x0004cf9b) list_tport_double_graphic_pane_t1

0x822b,	// (0x0004cfb0) list_tport_double_graphic_pane_t2_ParamLimits

0x822b,	// (0x0004cfb0) list_tport_double_graphic_pane_t2

0x0001,

0xfc3a,	// (0x000549bf) list_tport_double_graphic_pane_t_ParamLimits

0xfc3a,	// (0x000549bf) list_tport_double_graphic_pane_t

0x11e0,	// (0x00045f65) main_cale_note_pane

0x66a0,	// (0x0004b425) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x66a0,	// (0x0004b425) cell_vitu2_function_top_wide_pane_cp01

0x7dd2,	// (0x0004cb57) wait_bar_pane_cp05_ParamLimits

0x13a4,	// (0x00046129) listscroll_cmail_pane

0xe7cf,	// (0x00053554) list_cmail_pane

0x823d,	// (0x0004cfc2) list_cmail_body_pane

0x8252,	// (0x0004cfd7) list_single_cmail_header_caption_pane

0x8268,	// (0x0004cfed) list_single_cmail_header_detail_pane_ParamLimits

0x8268,	// (0x0004cfed) list_single_cmail_header_detail_pane

0xe7e6,	// (0x0005356b) list_single_cmail_header_caption_pane_t1

0x0efa,	// (0x00045c7f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0efa,	// (0x00045c7f) list_single_cmail_header_detail_pane_g1

0xd365,	// (0x000520ea) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd365,	// (0x000520ea) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc3f,	// (0x000549c4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc3f,	// (0x000549c4) list_single_cmail_header_detail_pane_g

0x0f12,	// (0x00045c97) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0f12,	// (0x00045c97) list_single_cmail_header_detail_pane_t1

0x0f50,	// (0x00045cd5) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0f50,	// (0x00045cd5) list_single_cmail_header_editor_pane_bg

0xe2e9,	// (0x0005306e) list_cmail_body_pane_g1

0xe80a,	// (0x0005358f) list_cmail_body_pane_t1

0xd67a,	// (0x000523ff) list_single_cmail_header_editor_pane_bg_g1

0x2dad,	// (0x00047b32) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd68a,	// (0x0005240f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd682,	// (0x00052407) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8e9,	// (0x0005266e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6aa,	// (0x0005242f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd69a,	// (0x0005241f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6a2,	// (0x00052427) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2d8d,	// (0x00047b12) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8295,	// (0x0004d01a) calenote_gesture_pane_ParamLimits

0x8295,	// (0x0004d01a) calenote_gesture_pane

0x82b5,	// (0x0004d03a) calenote_window_pane_ParamLimits

0x82b5,	// (0x0004d03a) calenote_window_pane

0xe818,	// (0x0005359d) popup_note_window_cp01

0x82d1,	// (0x0004d056) calenote_swipe_1_pane_ParamLimits

0x82d1,	// (0x0004d056) calenote_swipe_1_pane

0x7fca,	// (0x0004cd4f) calenote_swipe_2_pane_ParamLimits

0x7fca,	// (0x0004cd4f) calenote_swipe_2_pane

0xe635,	// (0x000533ba) calenote_swipe_1_pane_g1_ParamLimits

0xe635,	// (0x000533ba) calenote_swipe_1_pane_g1

0xe82a,	// (0x000535af) calenote_swipe_1_pane_g2_ParamLimits

0xe82a,	// (0x000535af) calenote_swipe_1_pane_g2

0x0001,

0xfc4b,	// (0x000549d0) calenote_swipe_1_pane_g_ParamLimits

0xfc4b,	// (0x000549d0) calenote_swipe_1_pane_g

0xe836,	// (0x000535bb) calenote_swipe_1_pane_t1_ParamLimits

0xe836,	// (0x000535bb) calenote_swipe_1_pane_t1

0xe635,	// (0x000533ba) calenote_swipe_2_pane_g1_ParamLimits

0xe635,	// (0x000533ba) calenote_swipe_2_pane_g1

0xe855,	// (0x000535da) calenote_swipe_2_pane_g2_ParamLimits

0xe855,	// (0x000535da) calenote_swipe_2_pane_g2

0x0001,

0xfc50,	// (0x000549d5) calenote_swipe_2_pane_g_ParamLimits

0xfc50,	// (0x000549d5) calenote_swipe_2_pane_g

0xe861,	// (0x000535e6) calenote_swipe_2_pane_t1_ParamLimits

0xe861,	// (0x000535e6) calenote_swipe_2_pane_t1

0x11e0,	// (0x00045f65) main_mup_navstr_pane

0x55f7,	// (0x0004a37c) main_mup3_pane_t7_ParamLimits

0x55f7,	// (0x0004a37c) main_mup3_pane_t7

0xcd61,	// (0x00051ae6) main_mp4_pane_g6_ParamLimits

0xcd61,	// (0x00051ae6) main_mp4_pane_g6

0xcf8b,	// (0x00051d10) main_image3_pane_t4_ParamLimits

0xcf8b,	// (0x00051d10) main_image3_pane_t4

0x82e6,	// (0x0004d06b) popup_navstr_preview_pane_ParamLimits

0x82e6,	// (0x0004d06b) popup_navstr_preview_pane

0x82fa,	// (0x0004d07f) scroll_navstr_pane_ParamLimits

0x82fa,	// (0x0004d07f) scroll_navstr_pane

0x11e0,	// (0x00045f65) bg_popup_preview_window_pane_cp04

0xe888,	// (0x0005360d) popup_navstr_preview_pane_t1

0x830e,	// (0x0004d093) scroll_navstr_pane_g1_ParamLimits

0x830e,	// (0x0004d093) scroll_navstr_pane_g1

0x8322,	// (0x0004d0a7) scroll_navstr_pane_t1_ParamLimits

0x8322,	// (0x0004d0a7) scroll_navstr_pane_t1

0xe821,	// (0x000535a6) bg_button_pane_cp014

0xe821,	// (0x000535a6) bg_button_pane_cp030

0x0c95,	// (0x00045a1a) list_double_fisheye_pane_g4_ParamLimits

0x0c95,	// (0x00045a1a) list_double_fisheye_pane_g4

0x0ca1,	// (0x00045a26) list_double_fisheye_pane_g5_ParamLimits

0x0ca1,	// (0x00045a26) list_double_fisheye_pane_g5

0xe246,	// (0x00052fcb) sp_fs_scroll_pane_cp03

0xe70a,	// (0x0005348f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe716,	// (0x0005349b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x0005497e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8074,	// (0x0004cdf9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7de,	// (0x00053563) sp_fs_scroll_pane_cp02

0x1f5a,	// (0x00046cdf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1f5a,	// (0x00046cdf) popup_sp_fs_calendar_preview_list_single_pane

0x11e0,	// (0x00045f65) main_cam6_pano_pane

0x13a4,	// (0x00046129) main_mup3_pane_ParamLimits

0x11e0,	// (0x00045f65) main_phacti_pane

0x7ca5,	// (0x0004ca2a) bg_button_pane_cp11

0x7cbf,	// (0x0004ca44) main_mobtv_info_pane_g2_ParamLimits

0x7cbf,	// (0x0004ca44) main_mobtv_info_pane_g2

0x0001,

0xfb5e,	// (0x000548e3) main_mobtv_info_pane_g_ParamLimits

0xfb5e,	// (0x000548e3) main_mobtv_info_pane_g

0x1c2d,	// (0x000469b2) sc_clock_pane_t5_ParamLimits

0x1c2d,	// (0x000469b2) sc_clock_pane_t5

0xae10,	// (0x0004fb95) main_radioblah_pane_g1_ParamLimits

0xae1e,	// (0x0004fba3) main_radioblah_pane_t3_ParamLimits

0xae1e,	// (0x0004fba3) main_radioblah_pane_t3

0xae1e,	// (0x0004fba3) main_radioblah_pane_t4_ParamLimits

0xae1e,	// (0x0004fba3) main_radioblah_pane_t4

0x13a4,	// (0x00046129) main_radioblah_text_pane_ParamLimits

0x13a4,	// (0x00046129) main_radioblah_text_pane

0xe52d,	// (0x000532b2) main_radioblah_info_pane_g1_ParamLimits

0xe571,	// (0x000532f6) main_radioblah_info_pane_t4_ParamLimits

0xe571,	// (0x000532f6) main_radioblah_info_pane_t4

0x13a4,	// (0x00046129) main_sp_fs_calendar_pane

0x8339,	// (0x0004d0be) main_phacti_pane_g1

0x8341,	// (0x0004d0c6) phacti_note_pane_ParamLimits

0x8341,	// (0x0004d0c6) phacti_note_pane

0xe8b1,	// (0x00053636) phacti_term_pane_ParamLimits

0xe8b1,	// (0x00053636) phacti_term_pane

0xe8c6,	// (0x0005364b) phacti_note_pane_t1_ParamLimits

0xe8c6,	// (0x0005364b) phacti_note_pane_t1

0xd395,	// (0x0005211a) phacti_term_pane_g1

0xd39d,	// (0x00052122) phacti_term_pane_t1_ParamLimits

0xd39d,	// (0x00052122) phacti_term_pane_t1

0xe8dd,	// (0x00053662) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2548,	// (0x000472cd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5a,	// (0x000549df) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8e5,	// (0x0005366a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8e5,	// (0x0005366a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8fb,	// (0x00053680) aid_popup_sp_fs_bg_corner_pane

0x1c23,	// (0x000469a8) popup_sp_fs_calendar_preview_bg_pane_g1

0x11e0,	// (0x00045f65) popup_sp_fs_calendar_preview_bg_pane

0xe903,	// (0x00053688) popup_sp_fs_calendar_preview_list_pane

0xae32,	// (0x0004fbb7) bg_main_sp_fs_cale_pane_ParamLimits

0xae32,	// (0x0004fbb7) bg_main_sp_fs_cale_pane

0xd3d0,	// (0x00052155) listscroll_cale_mrui_pane_ParamLimits

0xd3d0,	// (0x00052155) listscroll_cale_mrui_pane

0xd3e5,	// (0x0005216a) listscroll_sp_fs_schedule_track_pane

0xd3ee,	// (0x00052173) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd3ee,	// (0x00052173) main_sp_fs_ctrlbar_pane_cp01

0xe90b,	// (0x00053690) main_sp_fs_ribbon_pane

0xd401,	// (0x00052186) popup_sp_fs_cale_preview_window

0x83b6,	// (0x0004d13b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x83b6,	// (0x0004d13b) list_single_sp_fs_schedule_track_pane

0x13a4,	// (0x00046129) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x13a4,	// (0x00046129) bg_sp_fs_highlight_list_pane_cp03

0x83c9,	// (0x0004d14e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x83c9,	// (0x0004d14e) list_single_sp_fs_schedule_track_pane_g1

0x83d5,	// (0x0004d15a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x83d5,	// (0x0004d15a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc5f,	// (0x000549e4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc5f,	// (0x000549e4) list_single_sp_fs_schedule_track_pane_g

0x83e1,	// (0x0004d166) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x83e1,	// (0x0004d166) list_single_sp_fs_schedule_track_pane_t1

0x83fb,	// (0x0004d180) sp_fs_schedule_track_pane_ParamLimits

0x83fb,	// (0x0004d180) sp_fs_schedule_track_pane

0xe913,	// (0x00053698) sp_fs_schedule_track_pane_g1

0xe91b,	// (0x000536a0) sp_fs_schedule_track_pane_g2

0xe923,	// (0x000536a8) sp_fs_schedule_track_pane_g3

0xe92b,	// (0x000536b0) sp_fs_schedule_track_pane_g4

0xe933,	// (0x000536b8) sp_fs_schedule_track_pane_g5

0x0004,

0xfc64,	// (0x000549e9) sp_fs_schedule_track_pane_g

0xd67a,	// (0x000523ff) bg_sp_fs_schedule_viewer_highlight_g1

0x2dad,	// (0x00047b32) bg_sp_fs_schedule_viewer_highlight_g2

0xd682,	// (0x00052407) bg_sp_fs_schedule_viewer_highlight_g3

0xd68a,	// (0x0005240f) bg_sp_fs_schedule_viewer_highlight_g4

0xd8e9,	// (0x0005266e) bg_sp_fs_schedule_viewer_highlight_g5

0xd69a,	// (0x0005241f) bg_sp_fs_schedule_viewer_highlight_g6

0xd6a2,	// (0x00052427) bg_sp_fs_schedule_viewer_highlight_g7

0xd6aa,	// (0x0005242f) bg_sp_fs_schedule_viewer_highlight_g8

0x2d8d,	// (0x00047b12) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc6f,	// (0x000549f4) bg_sp_fs_schedule_viewer_highlight_g

0x11e0,	// (0x00045f65) bg_main_sp_fs_ribbon_pane

0x840c,	// (0x0004d191) main_sp_fs_ribbon_pane_g1

0xe93b,	// (0x000536c0) main_sp_fs_ribbon_pane_t1

0x8415,	// (0x0004d19a) main_sp_fs_ribbon_pane_t2

0xe94a,	// (0x000536cf) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc82,	// (0x00054a07) main_sp_fs_ribbon_pane_t

0xe959,	// (0x000536de) main_sp_fs_ribbon_scheduler_pane

0xe961,	// (0x000536e6) bg_main_sp_fs_ribbon_pane_g1

0xe96a,	// (0x000536ef) bg_main_sp_fs_ribbon_pane_g2

0xe973,	// (0x000536f8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc89,	// (0x00054a0e) bg_main_sp_fs_ribbon_pane_g

0xe97b,	// (0x00053700) main_sp_fs_ribbon_scheduler_pane_g1

0xe984,	// (0x00053709) main_sp_fs_ribbon_scheduler_pane_g2

0xe98d,	// (0x00053712) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc90,	// (0x00054a15) main_sp_fs_ribbon_scheduler_pane_g

0xe996,	// (0x0005371b) list_cale_mrui_pane

0x8424,	// (0x0004d1a9) sp_fs_scroll_pane_cp07_ParamLimits

0x8424,	// (0x0004d1a9) sp_fs_scroll_pane_cp07

0x8440,	// (0x0004d1c5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8440,	// (0x0004d1c5) bg_sp_fs_schedule_viewer_highlight

0xe9a3,	// (0x00053728) list_single_sp_fs_schedule_track_pane_cp01

0xe9ab,	// (0x00053730) list_sp_fs_schedule_track_pane

0xe9b3,	// (0x00053738) sp_fs_scroll_pane_cp06_ParamLimits

0xe9b3,	// (0x00053738) sp_fs_scroll_pane_cp06

0x1c23,	// (0x000469a8) bgmain_sp_fs_calendar_pane_g1

0x0f69,	// (0x00045cee) list_single_cale_mrui_pane_ParamLimits

0x0f69,	// (0x00045cee) list_single_cale_mrui_pane

0xd413,	// (0x00052198) list_single_cale_mrui_row_pane_ParamLimits

0xd413,	// (0x00052198) list_single_cale_mrui_row_pane

0xd420,	// (0x000521a5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd420,	// (0x000521a5) list_single_cale_mrui_row_pane_g1

0xd458,	// (0x000521dd) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd458,	// (0x000521dd) list_single_cale_mrui_row_pane_t1

0x0f8a,	// (0x00045d0f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0f8a,	// (0x00045d0f) list_single_cale_mrui_row_pane_t2

0xd46a,	// (0x000521ef) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd46a,	// (0x000521ef) list_single_cale_mrui_row_pane_t3

0xd499,	// (0x0005221e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd499,	// (0x0005221e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9e,	// (0x00054a23) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9e,	// (0x00054a23) list_single_cale_mrui_row_pane_t

0x0ff2,	// (0x00045d77) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0ff2,	// (0x00045d77) list_single_cmail_header_editor_pane_bg_cp01

0x1020,	// (0x00045da5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1020,	// (0x00045da5) list_single_cmail_header_editor_pane_bg_cp02

0xe9d2,	// (0x00053757) main_radioblah_text_pane_t1_ParamLimits

0xe9d2,	// (0x00053757) main_radioblah_text_pane_t1

0xe9ec,	// (0x00053771) cam6_indi_pane_cp01

0xe9f4,	// (0x00053779) cam6_mode_pane_cp01

0xe9fc,	// (0x00053781) cam6_pano_pane

0xea05,	// (0x0005378a) cam6_zoom_pane_cp01

0xea0d,	// (0x00053792) cam6_pano_image_pane

0xea18,	// (0x0005379d) cam6_pano_pane_g1

0xe2e9,	// (0x0005306e) cam6_pano_pane_g2

0xea21,	// (0x000537a6) cam6_pano_pane_g3

0xea2a,	// (0x000537af) cam6_pano_pane_g4

0xcaf5,	// (0x0005187a) cam6_pano_pane_g5

0xea33,	// (0x000537b8) cam6_pano_pane_g6

0xdbdd,	// (0x00052962) cam6_pano_pane_g7

0xea3d,	// (0x000537c2) cam6_pano_pane_g8

0xea46,	// (0x000537cb) cam6_pano_pane_g9

0x0008,

0xfca7,	// (0x00054a2c) cam6_pano_pane_g

0x11e0,	// (0x00045f65) main_browser_tag_pane

0xe880,	// (0x00053605) grid_navstr_albumart_pane

0xea51,	// (0x000537d6) cell_navstr_albumart_pane_ParamLimits

0xea51,	// (0x000537d6) cell_navstr_albumart_pane

0xea71,	// (0x000537f6) cell_navstr_albumart_pane_g1

0xbf11,	// (0x00050c96) cell_navstr_albumart_pane_g2

0xbf21,	// (0x00050ca6) cell_navstr_albumart_pane_g3

0xbf19,	// (0x00050c9e) cell_navstr_albumart_pane_g4

0x0003,

0xfcba,	// (0x00054a3f) cell_navstr_albumart_pane_g

0x8450,	// (0x0004d1d5) bt_list_pane_ParamLimits

0x8450,	// (0x0004d1d5) bt_list_pane

0x8464,	// (0x0004d1e9) bt_list_pane_t1

0x8473,	// (0x0004d1f8) bt_list_pane_t2

0x0001,

0xfcc3,	// (0x00054a48) bt_list_pane_t

0x11e0,	// (0x00045f65) main_cale_prevew_pane

0x8482,	// (0x0004d207) popup_cale_preview_window_ParamLimits

0x8482,	// (0x0004d207) popup_cale_preview_window

0x13a4,	// (0x00046129) bg_popup_preview_window_pane_cp05_ParamLimits

0x13a4,	// (0x00046129) bg_popup_preview_window_pane_cp05

0xea79,	// (0x000537fe) list_cale_preview_pane_ParamLimits

0xea79,	// (0x000537fe) list_cale_preview_pane

0x849d,	// (0x0004d222) list_double_cale_preview_pane_ParamLimits

0x849d,	// (0x0004d222) list_double_cale_preview_pane

0x84af,	// (0x0004d234) list_single_cale_preview_pane_ParamLimits

0x84af,	// (0x0004d234) list_single_cale_preview_pane

0x84c5,	// (0x0004d24a) list_single_cale_preview_pane_g1

0x84cd,	// (0x0004d252) list_single_cale_preview_pane_t1_ParamLimits

0x84cd,	// (0x0004d252) list_single_cale_preview_pane_t1

0x84e2,	// (0x0004d267) list_double_cale_preview_pane_g1

0x84ea,	// (0x0004d26f) list_double_cale_preview_pane_t1_ParamLimits

0x84ea,	// (0x0004d26f) list_double_cale_preview_pane_t1

0x84ff,	// (0x0004d284) list_double_cale_preview_pane_t2_ParamLimits

0x84ff,	// (0x0004d284) list_double_cale_preview_pane_t2

0x0001,

0xfcc8,	// (0x00054a4d) list_double_cale_preview_pane_t_ParamLimits

0xfcc8,	// (0x00054a4d) list_double_cale_preview_pane_t

0x11e0,	// (0x00045f65) main_ezdial_pane

0x13a4,	// (0x00046129) main_sp_fs_email_pane_ParamLimits

0x7fe4,	// (0x0004cd69) cmail_ddmenu_btn01_pane_ParamLimits

0x7fe4,	// (0x0004cd69) cmail_ddmenu_btn01_pane

0x7ff7,	// (0x0004cd7c) cmail_ddmenu_btn02_pane_ParamLimits

0x7ff7,	// (0x0004cd7c) cmail_ddmenu_btn02_pane

0x801a,	// (0x0004cd9f) cmail_ddmenu_btn03_pane_ParamLimits

0x801a,	// (0x0004cd9f) cmail_ddmenu_btn03_pane

0x80b3,	// (0x0004ce38) main_sp_fs_ctrlbar_pane_ParamLimits

0x80d7,	// (0x0004ce5c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x823d,	// (0x0004cfc2) list_cmail_body_pane_ParamLimits

0xe7f4,	// (0x00053579) bg_button_pane_cp12

0xe7fd,	// (0x00053582) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7fd,	// (0x00053582) list_single_cmail_header_detail_pane_g3

0xd371,	// (0x000520f6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd371,	// (0x000520f6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc46,	// (0x000549cb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc46,	// (0x000549cb) list_single_cmail_header_detail_pane_t

0xd3b2,	// (0x00052137) phacti_term_pane_t2_ParamLimits

0xd3b2,	// (0x00052137) phacti_term_pane_t2

0x0001,

0xfc55,	// (0x000549da) phacti_term_pane_t_ParamLimits

0xfc55,	// (0x000549da) phacti_term_pane_t

0xea85,	// (0x0005380a) aid_size_list_single_double

0x8517,	// (0x0004d29c) popup_ezdial_listscroll_window

0xea91,	// (0x00053816) popup_number_entry_window_cp01

0x2569,	// (0x000472ee) bg_popup_call_pane_cp09

0xea9e,	// (0x00053823) ezdial_list_pane

0xeaa6,	// (0x0005382b) scroll_pane_cp23

0xae32,	// (0x0004fbb7) bg_button_pane_cp028_ParamLimits

0xae32,	// (0x0004fbb7) bg_button_pane_cp028

0x852e,	// (0x0004d2b3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x852e,	// (0x0004d2b3) cmail_ddmenu_btn01_pane_g1

0x853a,	// (0x0004d2bf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x853a,	// (0x0004d2bf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfccd,	// (0x00054a52) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfccd,	// (0x00054a52) cmail_ddmenu_btn01_pane_g

0xeaae,	// (0x00053833) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaae,	// (0x00053833) cmail_ddmenu_btn01_pane_t1

0xae32,	// (0x0004fbb7) bg_button_pane_cp029_ParamLimits

0xae32,	// (0x0004fbb7) bg_button_pane_cp029

0x854e,	// (0x0004d2d3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x854e,	// (0x0004d2d3) cmail_ddmenu_btn02_pane_g1

0x8566,	// (0x0004d2eb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8566,	// (0x0004d2eb) cmail_ddmenu_btn02_pane_t1

0x13a4,	// (0x00046129) bg_button_pane_cp031_ParamLimits

0x13a4,	// (0x00046129) bg_button_pane_cp031

0x854e,	// (0x0004d2d3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x854e,	// (0x0004d2d3) cmail_ddmenu_btn03_pane_g1

0x8566,	// (0x0004d2eb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8566,	// (0x0004d2eb) cmail_ddmenu_btn03_pane_t1

0x1c2d,	// (0x000469b2) cell_dialer2_keypad_pane_t1_ParamLimits

0xcb23,	// (0x000518a8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xcb23,	// (0x000518a8) cell_dialer2_keypad_pane_t1_copy1

0x7ac8,	// (0x0004c84d) ncimui_group_button_pane

0x13a4,	// (0x00046129) main_sp_fs_calendar_pane_ParamLimits

0x8252,	// (0x0004cfd7) list_single_cmail_header_caption_pane_ParamLimits

0xd3c7,	// (0x0005214c) aid_recal_txt_sm_pane

0x11e0,	// (0x00045f65) mian_recal_day_pane

0xd401,	// (0x00052186) popup_sp_fs_cale_preview_window_ParamLimits

0xeac4,	// (0x00053849) list_recal_day_pane

0xd4e3,	// (0x00052268) list_single_recal_day_pane_ParamLimits

0xd4e3,	// (0x00052268) list_single_recal_day_pane

0xeaeb,	// (0x00053870) list_single_recal_day_pane_g1_ParamLimits

0xeaeb,	// (0x00053870) list_single_recal_day_pane_g1

0xd4f5,	// (0x0005227a) list_single_recal_day_pane_g2_ParamLimits

0xd4f5,	// (0x0005227a) list_single_recal_day_pane_g2

0xd501,	// (0x00052286) list_single_recal_day_pane_g3_ParamLimits

0xd501,	// (0x00052286) list_single_recal_day_pane_g3

0x1040,	// (0x00045dc5) list_single_recal_day_pane_g4_ParamLimits

0x1040,	// (0x00045dc5) list_single_recal_day_pane_g4

0xd50d,	// (0x00052292) list_single_recal_day_pane_g5_ParamLimits

0xd50d,	// (0x00052292) list_single_recal_day_pane_g5

0xd519,	// (0x0005229e) list_single_recal_day_pane_g6_ParamLimits

0xd519,	// (0x0005229e) list_single_recal_day_pane_g6

0x0004,

0xfcdc,	// (0x00054a61) list_single_recal_day_pane_g_ParamLimits

0xfcdc,	// (0x00054a61) list_single_recal_day_pane_g

0xd52d,	// (0x000522b2) list_single_recal_day_pane_t1

0xd53f,	// (0x000522c4) list_single_recal_day_pane_t2

0x0001,

0xfce7,	// (0x00054a6c) list_single_recal_day_pane_t

0x858a,	// (0x0004d30f) ncimui_query_button_pane_ParamLimits

0x858a,	// (0x0004d30f) ncimui_query_button_pane

0x859a,	// (0x0004d31f) ncimui_query_button_pane_t1_ParamLimits

0x859a,	// (0x0004d31f) ncimui_query_button_pane_t1

0xeaf7,	// (0x0005387c) ncimui_query_button_pane_t2_ParamLimits

0xeaf7,	// (0x0005387c) ncimui_query_button_pane_t2

0x0001,

0xfcec,	// (0x00054a71) ncimui_query_button_pane_t_ParamLimits

0xfcec,	// (0x00054a71) ncimui_query_button_pane_t

0x85ad,	// (0x0004d332) query_button_pane_ParamLimits

0x85ad,	// (0x0004d332) query_button_pane

0x11e0,	// (0x00045f65) bg_button_pane_cp0028

0xeb0a,	// (0x0005388f) query_button_pane_t1

0x49f4,	// (0x00049779) main_tport_pane_ParamLimits

0x8101,	// (0x0004ce86) bg_popup_window_pane_cp01_ParamLimits

0x8101,	// (0x0004ce86) bg_popup_window_pane_cp01

0x811c,	// (0x0004cea1) heading_pane_cp08_ParamLimits

0x811c,	// (0x0004cea1) heading_pane_cp08

0x812f,	// (0x0004ceb4) heading_pane_cp07_ParamLimits

0x812f,	// (0x0004ceb4) heading_pane_cp07

0x81d6,	// (0x0004cf5b) cell_tport_appsw_pane_g2

0x0002,

0xfc33,	// (0x000549b8) cell_tport_appsw_pane_g

0x089d,	// (0x00045622) input_candi_list_open_g1

0x3b28,	// (0x000488ad) list_cale_time_pane_g6_ParamLimits

0x3b28,	// (0x000488ad) list_cale_time_pane_g6

0x5007,	// (0x00049d8c) aid_size_touch_calib_1_ParamLimits

0x5007,	// (0x00049d8c) aid_size_touch_calib_1

0x5019,	// (0x00049d9e) aid_size_touch_calib_2_ParamLimits

0x5019,	// (0x00049d9e) aid_size_touch_calib_2

0x5031,	// (0x00049db6) aid_size_touch_calib_3_ParamLimits

0x5031,	// (0x00049db6) aid_size_touch_calib_3

0x504f,	// (0x00049dd4) aid_size_touch_calib_4_ParamLimits

0x504f,	// (0x00049dd4) aid_size_touch_calib_4

0x5067,	// (0x00049dec) main_touch_calib_button_group_pane_ParamLimits

0x5067,	// (0x00049dec) main_touch_calib_button_group_pane

0x507f,	// (0x00049e04) main_touch_calib_pane_g1_ParamLimits

0x5091,	// (0x00049e16) main_touch_calib_pane_g2_ParamLimits

0x50a3,	// (0x00049e28) main_touch_calib_pane_g3_ParamLimits

0x50b5,	// (0x00049e3a) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x00054404) main_touch_calib_pane_g_ParamLimits

0x50c7,	// (0x00049e4c) main_touch_calib_pane_t1_ParamLimits

0x50e1,	// (0x00049e66) main_touch_calib_pane_t2_ParamLimits

0x50fb,	// (0x00049e80) main_touch_calib_pane_t3_ParamLimits

0x510f,	// (0x00049e94) main_touch_calib_pane_t4_ParamLimits

0x5123,	// (0x00049ea8) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x0005440d) main_touch_calib_pane_t_ParamLimits

0xc8c0,	// (0x00051645) list_single_fp_cale_pane_g3_ParamLimits

0xc8c0,	// (0x00051645) list_single_fp_cale_pane_g3

0x13a4,	// (0x00046129) bg_button_pane_cp012_ParamLimits

0x13a4,	// (0x00046129) bg_vkb2_func_pane_cp03_ParamLimits

0x6e49,	// (0x0004bbce) cell_vitu2_function_top_pane_g1_ParamLimits

0x13a4,	// (0x00046129) bg_vkb2_func_pane_cp04_ParamLimits

0x7a53,	// (0x0004c7d8) main_ncimui_button_group_pane_ParamLimits

0x7a53,	// (0x0004c7d8) main_ncimui_button_group_pane

0x7ab3,	// (0x0004c838) main_ncimui_pane_t3_ParamLimits

0x7ab3,	// (0x0004c838) main_ncimui_pane_t3

0xe896,	// (0x0005361b) phacti_button_group_pane

0xea85,	// (0x0005380a) aid_size_list_single_double_ParamLimits

0x8517,	// (0x0004d29c) popup_ezdial_listscroll_window_ParamLimits

0xea91,	// (0x00053816) popup_number_entry_window_cp01_ParamLimits

0x85c0,	// (0x0004d345) phacti_button_pane_ParamLimits

0x85c0,	// (0x0004d345) phacti_button_pane

0x11e0,	// (0x00045f65) bg_button_pane_cp14

0xeb18,	// (0x0005389d) phacti_button_pane_t1

0x85d1,	// (0x0004d356) main_touch_calib_button_pane_ParamLimits

0x85d1,	// (0x0004d356) main_touch_calib_button_pane

0x1c95,	// (0x00046a1a) bg_button_pane_cp18_ParamLimits

0x1c95,	// (0x00046a1a) bg_button_pane_cp18

0xeb26,	// (0x000538ab) main_touch_calib_button_pane_t1_ParamLimits

0xeb26,	// (0x000538ab) main_touch_calib_button_pane_t1

0xeb3c,	// (0x000538c1) main_touch_calib_button_pane_t2_ParamLimits

0xeb3c,	// (0x000538c1) main_touch_calib_button_pane_t2

0x0001,

0xfcf1,	// (0x00054a76) main_touch_calib_button_pane_t_ParamLimits

0xfcf1,	// (0x00054a76) main_touch_calib_button_pane_t

0x11e0,	// (0x00045f65) cell_ncimui_button_pane

0x11e0,	// (0x00045f65) bg_button_pane_cp032

0xeb5a,	// (0x000538df) cell_ncimui_button_pane_t1

0xcf6b,	// (0x00051cf0) image3_infobar_pane_ParamLimits

0xcf6b,	// (0x00051cf0) image3_infobar_pane

0x7e25,	// (0x0004cbaa) fs_bigclock_status_pane_ParamLimits

0x7e25,	// (0x0004cbaa) fs_bigclock_status_pane

0x7e32,	// (0x0004cbb7) main_fs_bigclock_clock_pane_ParamLimits

0x7e32,	// (0x0004cbb7) main_fs_bigclock_clock_pane

0x7e50,	// (0x0004cbd5) main_fs_bigclock_indi_pane_ParamLimits

0x7e50,	// (0x0004cbd5) main_fs_bigclock_indi_pane

0x7e82,	// (0x0004cc07) main_fs_bigclock_swipe_pane_ParamLimits

0x7e82,	// (0x0004cc07) main_fs_bigclock_swipe_pane

0x11e0,	// (0x00045f65) main_fs_clock_dumped_data

0xe3f6,	// (0x0005317b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3f6,	// (0x0005317b) list_single_fs_bigclock_indicator_pane_g1

0xe411,	// (0x00053196) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe411,	// (0x00053196) list_single_fs_bigclock_indicator_pane_g2

0xe42b,	// (0x000531b0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe42b,	// (0x000531b0) list_single_fs_bigclock_indicator_pane_g3

0xe445,	// (0x000531ca) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe445,	// (0x000531ca) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb92,	// (0x00054917) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb92,	// (0x00054917) list_single_fs_bigclock_indicator_pane_g

0xe470,	// (0x000531f5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe470,	// (0x000531f5) list_single_fs_bigclock_indicator_pane_t1

0xe498,	// (0x0005321d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe498,	// (0x0005321d) list_single_fs_bigclock_indicator_pane_t2

0xe4c0,	// (0x00053245) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c0,	// (0x00053245) list_single_fs_bigclock_indicator_pane_t3

0xe4e8,	// (0x0005326d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4e8,	// (0x0005326d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9d,	// (0x00054922) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9d,	// (0x00054922) list_single_fs_bigclock_indicator_pane_t

0xeb68,	// (0x000538ed) image3_infobar_fav_pane_ParamLimits

0xeb68,	// (0x000538ed) image3_infobar_fav_pane

0xeb78,	// (0x000538fd) image3_infobar_loc_pane_ParamLimits

0xeb78,	// (0x000538fd) image3_infobar_loc_pane

0xeb8c,	// (0x00053911) image3_infobar_time_pane_ParamLimits

0xeb8c,	// (0x00053911) image3_infobar_time_pane

0x1c23,	// (0x000469a8) image3_infobar_time_pane_g1

0xeb9c,	// (0x00053921) image3_infobar_time_pane_t1

0x1c23,	// (0x000469a8) image3_infobar_loc_pane_g1

0xebaa,	// (0x0005392f) image3_infobar_loc_pane_g2

0x0001,

0xfcf6,	// (0x00054a7b) image3_infobar_loc_pane_g

0xebb2,	// (0x00053937) image3_infobar_loc_pane_t1

0x1c23,	// (0x000469a8) image3_infobar_fav_pane_g1

0xebc0,	// (0x00053945) image3_infobar_fav_pane_g2

0x0001,

0xfcfb,	// (0x00054a80) image3_infobar_fav_pane_g

0xebc8,	// (0x0005394d) fs_bigclock_status_battery_pane

0xebd1,	// (0x00053956) fs_bigclock_status_signal_pane

0xebda,	// (0x0005395f) fs_bigclock_status_title_pane

0xebe3,	// (0x00053968) fs_bigclock_status_signal_pane_g1

0xebec,	// (0x00053971) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd00,	// (0x00054a85) fs_bigclock_status_signal_pane_g

0xebf4,	// (0x00053979) fs_bigclock_status_battery_pane_g1

0xebfd,	// (0x00053982) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd05,	// (0x00054a8a) fs_bigclock_status_battery_pane_g

0xec05,	// (0x0005398a) fs_bigclock_status_title_pane_t1

0x85e6,	// (0x0004d36b) main_fs_bigclock_clock_pane_g1

0x85e6,	// (0x0004d36b) main_fs_bigclock_clock_pane_g2

0x85f7,	// (0x0004d37c) main_fs_bigclock_clock_pane_g3

0x85f7,	// (0x0004d37c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0a,	// (0x00054a8f) main_fs_bigclock_clock_pane_g

0x860a,	// (0x0004d38f) main_fs_bigclock_clock_pane_t1

0x8620,	// (0x0004d3a5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd13,	// (0x00054a98) main_fs_bigclock_clock_pane_t

0xec13,	// (0x00053998) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec13,	// (0x00053998) list_single_fs_bigclock_indicator_pane

0xec24,	// (0x000539a9) list_single_fs_bigclock_pane_ParamLimits

0xec24,	// (0x000539a9) list_single_fs_bigclock_pane

0xec4a,	// (0x000539cf) main_fs_bigclock_indicator_pane_t1

0xec59,	// (0x000539de) list_single_fs_bigclock_pane_g1

0xec61,	// (0x000539e6) list_single_fs_bigclock_pane_t1

0x1c23,	// (0x000469a8) main_fs_bigclock_swipe_pane_g1

0xeca4,	// (0x00053a29) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd24,	// (0x00054aa9) main_fs_bigclock_swipe_pane_g

0xecac,	// (0x00053a31) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecac,	// (0x00053a31) main_fs_bigclock_swipe_pane_t1

0x3c20,	// (0x000489a5) call_type_pane_ParamLimits

0x11e0,	// (0x00045f65) main_btmg_pane

0xd44c,	// (0x000521d1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd44c,	// (0x000521d1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc97,	// (0x00054a1c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc97,	// (0x00054a1c) list_single_cale_mrui_row_pane_g

0xd4d2,	// (0x00052257) list_recal_vselct_arw_lo_pane

0xeae3,	// (0x00053868) list_recal_vselct_arw_up_pane

0xd4da,	// (0x0005225f) list_recal_vselct_pane

0x867a,	// (0x0004d3ff) btmg_button_pane

0x8684,	// (0x0004d409) main_btmg_pane_g1

0x11e0,	// (0x00045f65) bg_button_pane_cp044

0xecc9,	// (0x00053a4e) btmg_button_pane_t1

0xc061,	// (0x00050de6) aid_listscroll_gen

0x13a4,	// (0x00046129) main_cntbar_detail_pane

0xe7c7,	// (0x0005354c) list_cmail_folder_pane

0xe246,	// (0x00052fcb) sp_fs_scroll_pane_cp03_ParamLimits

0x1058,	// (0x00045ddd) list_single_fs_dyc_pane_cp01_ParamLimits

0x1058,	// (0x00045ddd) list_single_fs_dyc_pane_cp01

0xecd7,	// (0x00053a5c) aid_size_cmail_indent

0xd551,	// (0x000522d6) list_single_dyc_row_pane_cp01

0x86ba,	// (0x0004d43f) cntbar_detail_list_pane_ParamLimits

0x86ba,	// (0x0004d43f) cntbar_detail_list_pane

0x8706,	// (0x0004d48b) main_cntbar_detail_cont_pane_ParamLimits

0x8706,	// (0x0004d48b) main_cntbar_detail_cont_pane

0xe246,	// (0x00052fcb) scroll_pane_cp032_ParamLimits

0xe246,	// (0x00052fcb) scroll_pane_cp032

0x871a,	// (0x0004d49f) cntbar_detail_list_event_pane_ParamLimits

0x871a,	// (0x0004d49f) cntbar_detail_list_event_pane

0x86ca,	// (0x0004d44f) cntbar_detail_list_shct_pane

0x2e03,	// (0x00047b88) aid_list_gen

0xece0,	// (0x00053a65) aid_scroll

0xece9,	// (0x00053a6e) aid_size_touch_scroll_bar

0x7ee8,	// (0x0004cc6d) aid_list_double

0x106f,	// (0x00045df4) aid_list_single

0xecf2,	// (0x00053a77) aid_list_single_lg

0x1078,	// (0x00045dfd) aid_list_z_g_a_sm

0x1080,	// (0x00045e05) aid_list_z_g_d

0x1088,	// (0x00045e0d) aid_txt_z_prm

0x1096,	// (0x00045e1b) aid_txt_z_prm_cp01

0x10a4,	// (0x00045e29) aid_txt_z_sec

0x872a,	// (0x0004d4af) main_cntbar_detail_cont_pane_g1_ParamLimits

0x872a,	// (0x0004d4af) main_cntbar_detail_cont_pane_g1

0x873e,	// (0x0004d4c3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x873e,	// (0x0004d4c3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd29,	// (0x00054aae) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd29,	// (0x00054aae) main_cntbar_detail_cont_pane_g

0xecfb,	// (0x00053a80) main_cntbar_detail_cont_pane_t1

0xed09,	// (0x00053a8e) main_cntbar_detail_cont_pane_t2

0xed17,	// (0x00053a9c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2e,	// (0x00054ab3) main_cntbar_detail_cont_pane_t

0x874e,	// (0x0004d4d3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x874e,	// (0x0004d4d3) cell_cntbar_detail_list_shct_pane

0xed25,	// (0x00053aaa) cntbar_detail_list_shct_pane_g1

0xed2e,	// (0x00053ab3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd35,	// (0x00054aba) cntbar_detail_list_shct_pane_g

0x8762,	// (0x0004d4e7) cntbar_detail_list_event_pane_g1_ParamLimits

0x8762,	// (0x0004d4e7) cntbar_detail_list_event_pane_g1

0x876e,	// (0x0004d4f3) cntbar_detail_list_event_pane_g2_ParamLimits

0x876e,	// (0x0004d4f3) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3a,	// (0x00054abf) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3a,	// (0x00054abf) cntbar_detail_list_event_pane_g

0x87da,	// (0x0004d55f) cntbar_detail_list_event_pane_t1_ParamLimits

0x87da,	// (0x0004d55f) cntbar_detail_list_event_pane_t1

0x87ef,	// (0x0004d574) cntbar_detail_list_event_pane_t2_ParamLimits

0x87ef,	// (0x0004d574) cntbar_detail_list_event_pane_t2

0x0002,

0xfd47,	// (0x00054acc) cntbar_detail_list_event_pane_t_ParamLimits

0xfd47,	// (0x00054acc) cntbar_detail_list_event_pane_t

0x1c23,	// (0x000469a8) cell_cntbar_detail_list_shct_pane_g1

0xacff,	// (0x0004fa84) navi_pane_mv_g3

0x13a4,	// (0x00046129) main_cntbar_detail_pane_ParamLimits

0x11e0,	// (0x00045f65) main_notif_wgt_pane

0xcceb,	// (0x00051a70) aid_tch_main_mp4_pane_g4

0xcf63,	// (0x00051ce8) popup_slider_window_cp02

0xd4c8,	// (0x0005224d) list_recal_day_event_pane

0x868e,	// (0x0004d413) cntbar_detail_btn_pane_ParamLimits

0x868e,	// (0x0004d413) cntbar_detail_btn_pane

0x86a4,	// (0x0004d429) cntbar_detail_btn_pane_cp01_ParamLimits

0x86a4,	// (0x0004d429) cntbar_detail_btn_pane_cp01

0x86ca,	// (0x0004d44f) cntbar_detail_list_shct_pane_ParamLimits

0x86da,	// (0x0004d45f) cntbar_detail_pane_g1_ParamLimits

0x86da,	// (0x0004d45f) cntbar_detail_pane_g1

0x86ea,	// (0x0004d46f) cntbar_detail_pane_t1_ParamLimits

0x86ea,	// (0x0004d46f) cntbar_detail_pane_t1

0x877a,	// (0x0004d4ff) cntbar_detail_list_event_pane_g3_ParamLimits

0x877a,	// (0x0004d4ff) cntbar_detail_list_event_pane_g3

0x8792,	// (0x0004d517) cntbar_detail_list_event_pane_g4_ParamLimits

0x8792,	// (0x0004d517) cntbar_detail_list_event_pane_g4

0x87aa,	// (0x0004d52f) cntbar_detail_list_event_pane_g5_ParamLimits

0x87aa,	// (0x0004d52f) cntbar_detail_list_event_pane_g5

0x87c2,	// (0x0004d547) cntbar_detail_list_event_pane_g6_ParamLimits

0x87c2,	// (0x0004d547) cntbar_detail_list_event_pane_g6

0x8804,	// (0x0004d589) cntbar_detail_list_event_pane_t3_ParamLimits

0x8804,	// (0x0004d589) cntbar_detail_list_event_pane_t3

0x8816,	// (0x0004d59b) popup_notif_wgt_window_ParamLimits

0x8816,	// (0x0004d59b) popup_notif_wgt_window

0x882f,	// (0x0004d5b4) popup_submenu_window_cp01_ParamLimits

0x882f,	// (0x0004d5b4) popup_submenu_window_cp01

0x2569,	// (0x000472ee) bg_popup_window_pane_cp10

0xed37,	// (0x00053abc) listscroll_notif_wgt_pane

0xed49,	// (0x00053ace) list_notif_wgt_window

0xed52,	// (0x00053ad7) scroll_pane_cp033

0x8845,	// (0x0004d5ca) list_notif_wgt_row_pane_ParamLimits

0x8845,	// (0x0004d5ca) list_notif_wgt_row_pane

0xed5b,	// (0x00053ae0) aid_size_list_notif_wgt_del

0xed68,	// (0x00053aed) list_notif_wgt_row_pane_g1

0xed74,	// (0x00053af9) list_notif_wgt_row_pane_g2

0xed83,	// (0x00053b08) list_notif_wgt_row_pane_g3

0x0002,

0xfd4e,	// (0x00054ad3) list_notif_wgt_row_pane_g

0xed90,	// (0x00053b15) list_notif_wgt_row_pane_t1

0xeda6,	// (0x00053b2b) list_notif_wgt_row_pane_t2

0xedb8,	// (0x00053b3d) list_notif_wgt_row_pane_t3

0x0002,

0xfd55,	// (0x00054ada) list_notif_wgt_row_pane_t

0xd8f1,	// (0x00052676) list_recal_day_event_pane_g1

0xedca,	// (0x00053b4f) list_recal_day_event_pane_t1

0x11e0,	// (0x00045f65) bg_button_pane_cp045

0xedd9,	// (0x00053b5e) cntbar_detail_btn_pane_t1

0xae32,	// (0x0004fbb7) main_callh_pane_ParamLimits

0xae32,	// (0x0004fbb7) main_callh_pane

0x11e0,	// (0x00045f65) main_coverflow0_pane

0x11e0,	// (0x00045f65) main_wgtman_pane

0x7e9a,	// (0x0004cc1f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7e9a,	// (0x0004cc1f) main_fs_bigclock_unlock_btn_pane

0x81ce,	// (0x0004cf53) bg_button_pane_cp16

0x81de,	// (0x0004cf63) cell_tport_appsw_pane_g3

0x8855,	// (0x0004d5da) cf0_flow_pane_ParamLimits

0x8855,	// (0x0004d5da) cf0_flow_pane

0xede7,	// (0x00053b6c) listscroll_cf0_pane

0xedf2,	// (0x00053b77) main_cf0_pane_g1

0x886a,	// (0x0004d5ef) main_cf0_pane_t1_ParamLimits

0x886a,	// (0x0004d5ef) main_cf0_pane_t1

0x8881,	// (0x0004d606) main_cf0_pane_t2_ParamLimits

0x8881,	// (0x0004d606) main_cf0_pane_t2

0x0001,

0xfd61,	// (0x00054ae6) main_cf0_pane_t_ParamLimits

0xfd61,	// (0x00054ae6) main_cf0_pane_t

0xee04,	// (0x00053b89) scroll_pane_cp11

0x8898,	// (0x0004d61d) cf0_flow_pane_g1

0x88a0,	// (0x0004d625) cf0_flow_pane_g2

0x0001,

0xfd66,	// (0x00054aeb) cf0_flow_pane_g

0x88a8,	// (0x0004d62d) cf0_flow_pane_t1

0x11e0,	// (0x00045f65) main_call6_pane

0x11e0,	// (0x00045f65) main_calllock_pane

0x88b6,	// (0x0004d63b) call6_btn_grp_pane_ParamLimits

0x88b6,	// (0x0004d63b) call6_btn_grp_pane

0x88d0,	// (0x0004d655) call6_pane_g1_ParamLimits

0x88d0,	// (0x0004d655) call6_pane_g1

0x88e6,	// (0x0004d66b) popup_call6_1st_window_ParamLimits

0x88e6,	// (0x0004d66b) popup_call6_1st_window

0x88f7,	// (0x0004d67c) popup_call6_2nd_window_ParamLimits

0x88f7,	// (0x0004d67c) popup_call6_2nd_window

0x8908,	// (0x0004d68d) cell_call6_btn_pane_ParamLimits

0x8908,	// (0x0004d68d) cell_call6_btn_pane

0x2569,	// (0x000472ee) bg_popup_call2_in_pane_cp03

0xee0f,	// (0x00053b94) popup_call6_1st_window_g1

0xee17,	// (0x00053b9c) popup_call6_1st_window_g2

0xee1f,	// (0x00053ba4) popup_call6_1st_window_g3

0x0002,

0xfd6b,	// (0x00054af0) popup_call6_1st_window_g

0xee27,	// (0x00053bac) popup_call6_1st_window_t1

0xee36,	// (0x00053bbb) popup_call6_1st_window_t2

0xee44,	// (0x00053bc9) popup_call6_1st_window_t3

0x0002,

0xfd72,	// (0x00054af7) popup_call6_1st_window_t

0x2569,	// (0x000472ee) bg_popup_call2_in_pane_cp04

0xee52,	// (0x00053bd7) popup_call6_2nd_window_g1

0xee5a,	// (0x00053bdf) popup_call6_2nd_window_g2

0xee62,	// (0x00053be7) popup_call6_2nd_window_g3

0x0002,

0xfd79,	// (0x00054afe) popup_call6_2nd_window_g

0xee6a,	// (0x00053bef) popup_call6_2nd_window_t1

0x11e0,	// (0x00045f65) bg_button_pane_cp15

0xee79,	// (0x00053bfe) cell_call6_btn_pane_g1

0xee82,	// (0x00053c07) cell_call6_btn_pane_t1

0x891b,	// (0x0004d6a0) listscroll_wgtman_pane_ParamLimits

0x891b,	// (0x0004d6a0) listscroll_wgtman_pane

0x893c,	// (0x0004d6c1) wgtman_btn_pane_ParamLimits

0x893c,	// (0x0004d6c1) wgtman_btn_pane

0xab06,	// (0x0004f88b) aid_scroll_copy1

0xee91,	// (0x00053c16) list_wgtman_pane

0x897f,	// (0x0004d704) wgtman_btn_pane_g1_ParamLimits

0x897f,	// (0x0004d704) wgtman_btn_pane_g1

0x89ab,	// (0x0004d730) wgtman_btn_pane_t1_ParamLimits

0x89ab,	// (0x0004d730) wgtman_btn_pane_t1

0xee9b,	// (0x00053c20) wgtman_btn_pane_t2_ParamLimits

0xee9b,	// (0x00053c20) wgtman_btn_pane_t2

0x0001,

0xfd80,	// (0x00054b05) wgtman_btn_pane_t_ParamLimits

0xfd80,	// (0x00054b05) wgtman_btn_pane_t

0x89e8,	// (0x0004d76d) listrow_wgtman_pane_ParamLimits

0x89e8,	// (0x0004d76d) listrow_wgtman_pane

0x89fa,	// (0x0004d77f) listrow_wgtman_pane_g1

0x8a07,	// (0x0004d78c) listrow_wgtman_pane_g2

0x0001,

0xfd85,	// (0x00054b0a) listrow_wgtman_pane_g

0x10b2,	// (0x00045e37) listrow_wgtman_pane_t1

0x10ca,	// (0x00045e4f) listrow_wgtman_pane_t2

0x0001,

0xfd8a,	// (0x00054b0f) listrow_wgtman_pane_t

0x10f0,	// (0x00045e75) wait_bar_pane_cp09

0xeeb2,	// (0x00053c37) main_calllock_btn_pane

0xeebc,	// (0x00053c41) main_calllock_pane_g1

0x11e0,	// (0x00045f65) bg_button_pane_cp17

0xee79,	// (0x00053bfe) main_calllock_btn_pane_g1

0xeec4,	// (0x00053c49) main_calllock_btn_pane_t1

0x11e0,	// (0x00045f65) main_dialer3_pane

0x11e0,	// (0x00045f65) main_fmrd2_pane

0x1c23,	// (0x000469a8) main_fs_bigclock_unlock_btn_pane_g1

0x8a2d,	// (0x0004d7b2) main_fs_bigclock_unlock_btn_pane_t1

0x8a3b,	// (0x0004d7c0) area_fmrd2_info_pane_ParamLimits

0x8a3b,	// (0x0004d7c0) area_fmrd2_info_pane

0x8a4c,	// (0x0004d7d1) area_fmrd2_visual_pane_ParamLimits

0x8a4c,	// (0x0004d7d1) area_fmrd2_visual_pane

0x8a5a,	// (0x0004d7df) fmrd2_indi_pane_ParamLimits

0x8a5a,	// (0x0004d7df) fmrd2_indi_pane

0x8a67,	// (0x0004d7ec) area_fmrd2_visual_pane_g1

0x8a6f,	// (0x0004d7f4) area_fmrd2_visual_pane_t1

0x8a7f,	// (0x0004d804) area_fmrd2_visual_pane_t2

0x8a8f,	// (0x0004d814) area_fmrd2_visual_pane_t3

0x0002,

0xfd94,	// (0x00054b19) area_fmrd2_visual_pane_t

0x8a9f,	// (0x0004d824) area_fmrd2_info_pane_g1

0x8aa7,	// (0x0004d82c) area_fmrd2_info_pane_t1

0x8ab7,	// (0x0004d83c) area_fmrd2_info_pane_t2

0x8ac7,	// (0x0004d84c) area_fmrd2_info_pane_t3

0x8ad7,	// (0x0004d85c) area_fmrd2_info_pane_t4

0x0003,

0xfd9b,	// (0x00054b20) area_fmrd2_info_pane_t

0x8ae5,	// (0x0004d86a) fmrd2_indi_pane_t1

0x8af5,	// (0x0004d87a) fmrd2_indi_pane_t2

0x8b05,	// (0x0004d88a) fmrd2_indi_pane_t3

0x0002,

0xfda4,	// (0x00054b29) fmrd2_indi_pane_t

0xe454,	// (0x000531d9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe454,	// (0x000531d9) list_single_fs_bigclock_indicator_pane_g5

0xe505,	// (0x0005328a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe505,	// (0x0005328a) list_single_fs_bigclock_indicator_pane_t5

0x8355,	// (0x0004d0da) aid_cell_bcale_month_pane_ParamLimits

0x8355,	// (0x0004d0da) aid_cell_bcale_month_pane

0x8373,	// (0x0004d0f8) bcale_month_pane_ParamLimits

0x8373,	// (0x0004d0f8) bcale_month_pane

0x8397,	// (0x0004d11c) bcale_preview_pane_ParamLimits

0x8397,	// (0x0004d11c) bcale_preview_pane

0xec61,	// (0x000539e6) list_single_fs_bigclock_pane_t1_ParamLimits

0xec80,	// (0x00053a05) list_single_fs_bigclock_pane_t2_ParamLimits

0xec80,	// (0x00053a05) list_single_fs_bigclock_pane_t2

0x0001,

0xfd1f,	// (0x00054aa4) list_single_fs_bigclock_pane_t_ParamLimits

0xfd1f,	// (0x00054aa4) list_single_fs_bigclock_pane_t

0x8a25,	// (0x0004d7aa) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd8f,	// (0x00054b14) main_fs_bigclock_unlock_btn_pane_g

0x8b15,	// (0x0004d89a) aid_dia3_key_size_ParamLimits

0x8b15,	// (0x0004d89a) aid_dia3_key_size

0x8b24,	// (0x0004d8a9) aid_dia3_listrow_size_ParamLimits

0x8b24,	// (0x0004d8a9) aid_dia3_listrow_size

0x8b39,	// (0x0004d8be) dia3_keypad_fun_pane_ParamLimits

0x8b39,	// (0x0004d8be) dia3_keypad_fun_pane

0x8b55,	// (0x0004d8da) dia3_keypad_num_pane_ParamLimits

0x8b55,	// (0x0004d8da) dia3_keypad_num_pane

0x8b70,	// (0x0004d8f5) dia3_listscroll_pane_ParamLimits

0x8b70,	// (0x0004d8f5) dia3_listscroll_pane

0x8b83,	// (0x0004d908) dia3_numentry_pane_ParamLimits

0x8b83,	// (0x0004d908) dia3_numentry_pane

0xeed3,	// (0x00053c58) dia3_list_pane

0xeede,	// (0x00053c63) scroll_pane_cp12

0x11e0,	// (0x00045f65) bg_dia3_numentry_pane

0x8b9b,	// (0x0004d920) dia3_numentry_pane_t1

0x8baa,	// (0x0004d92f) cell_dia3_key_num_pane

0x8bb2,	// (0x0004d937) cell_dia3_key0_fun_pane_ParamLimits

0x8bb2,	// (0x0004d937) cell_dia3_key0_fun_pane

0x8bc6,	// (0x0004d94b) cell_dia3_key1_fun_pane_ParamLimits

0x8bc6,	// (0x0004d94b) cell_dia3_key1_fun_pane

0x8bde,	// (0x0004d963) dia3_listrow_pane

0xe19b,	// (0x00052f20) bg_dia3_numentry_pane_g1

0x11e0,	// (0x00045f65) bg_button_pane_cp21

0xeee9,	// (0x00053c6e) cell_dia3_key_num_pane_t1

0xeef7,	// (0x00053c7c) cell_dia3_key_num_pane_t2

0xef06,	// (0x00053c8b) cell_dia3_key_num_pane_t3

0xef15,	// (0x00053c9a) cell_dia3_key_num_pane_t4

0x0003,

0x0723,	// (0x000454a8) cell_dia3_key_num_pane_t

0x11e0,	// (0x00045f65) bg_button_pane_cp19

0x8bf0,	// (0x0004d975) cell_dia3_key0_fun_pane_g1

0x11e0,	// (0x00045f65) bg_button_pane_cp20

0x8bf8,	// (0x0004d97d) cell_dia3_key1_fun_pane_g1

0x8c00,	// (0x0004d985) area_left_week_number_pane

0x8c0c,	// (0x0004d991) area_top_day_name_pane

0x8c1f,	// (0x0004d9a4) frame_month_view_pane

0xef24,	// (0x00053ca9) grid_month_view_pane

0x8c32,	// (0x0004d9b7) cell_top_day_name_pane_ParamLimits

0x8c32,	// (0x0004d9b7) cell_top_day_name_pane

0x8c5f,	// (0x0004d9e4) cell_area_left_week_number_pane_ParamLimits

0x8c5f,	// (0x0004d9e4) cell_area_left_week_number_pane

0x8c73,	// (0x0004d9f8) cell_month_view_pane_ParamLimits

0x8c73,	// (0x0004d9f8) cell_month_view_pane

0xef32,	// (0x00053cb7) frm_month_g1

0x8ca0,	// (0x0004da25) frm_month_g2

0x8cb3,	// (0x0004da38) frm_month_g3

0x8cc6,	// (0x0004da4b) frm_month_g4

0x8cd9,	// (0x0004da5e) frm_month_g5

0x8cec,	// (0x0004da71) frm_month_g6

0x8cff,	// (0x0004da84) frm_month_g7

0xef3f,	// (0x00053cc4) frm_month_g8

0x8d12,	// (0x0004da97) frm_month_g9

0x8d22,	// (0x0004daa7) frm_month_g10

0x8d32,	// (0x0004dab7) frm_month_g11

0x8d42,	// (0x0004dac7) frm_month_g12

0x8d54,	// (0x0004dad9) frm_month_g13

0x8d66,	// (0x0004daeb) frm_month_g14

0x8d7a,	// (0x0004daff) frm_month_g15

0x8d8e,	// (0x0004db13) frm_month_g16

0x000f,

0xfdab,	// (0x00054b30) frm_month_g

0xef4c,	// (0x00053cd1) cell_top_day_name_pane_t1

0x8da2,	// (0x0004db27) cell_area_left_week_number_pane_g1

0x8dae,	// (0x0004db33) cell_area_left_week_number_pane_t1

0x1b51,	// (0x000468d6) cell_month_view_pane_g1

0x8dc1,	// (0x0004db46) cell_month_view_pane_t1

0x11e0,	// (0x00045f65) main_fps_pane

0xe6d2,	// (0x00053457) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6d2,	// (0x00053457) cmail_ddmenu_btn02_pane_cp1

0xe6ee,	// (0x00053473) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6ee,	// (0x00053473) cmail_ddmenu_btn02_pane_cp2

0x855a,	// (0x0004d2df) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x855a,	// (0x0004d2df) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd2,	// (0x00054a57) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd2,	// (0x00054a57) cmail_ddmenu_btn02_pane_g

0x8578,	// (0x0004d2fd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8578,	// (0x0004d2fd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd7,	// (0x00054a5c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd7,	// (0x00054a5c) cmail_ddmenu_btn02_pane_t

0x8dd4,	// (0x0004db59) fps_text_pane_ParamLimits

0x8dd4,	// (0x0004db59) fps_text_pane

0x8deb,	// (0x0004db70) main_fps_pane_g1_ParamLimits

0x8deb,	// (0x0004db70) main_fps_pane_g1

0x8e05,	// (0x0004db8a) wait_bar_pane_cp010_ParamLimits

0x8e05,	// (0x0004db8a) wait_bar_pane_cp010

0x8e16,	// (0x0004db9b) fps_text_pane_t1_ParamLimits

0x8e16,	// (0x0004db9b) fps_text_pane_t1

0xe89f,	// (0x00053624) cam4_image_uncrop_pane_g1

0xe8a8,	// (0x0005362d) cam4_image_uncrop_pane_g2

0x63cd,	// (0x0004b152) cam4_image_uncrop_pane_g3

0x63d6,	// (0x0004b15b) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x0005459b) cam4_image_uncrop_pane_g

0x8bde,	// (0x0004d963) dia3_listrow_pane_ParamLimits

0x11e0,	// (0x00045f65) main_phob2_pane

0x819f,	// (0x0004cf24) cell_tport_appsw_pane_cp02_ParamLimits

0x819f,	// (0x0004cf24) cell_tport_appsw_pane_cp02

0x81b3,	// (0x0004cf38) cell_tport_appsw_pane_cp03_ParamLimits

0x81b3,	// (0x0004cf38) cell_tport_appsw_pane_cp03

0x11e0,	// (0x00045f65) phob2_contact_card_pane

0x11e0,	// (0x00045f65) phob2_listscroll_pane

0xef5f,	// (0x00053ce4) phob2_list_pane

0xeaa6,	// (0x0005382b) scroll_pane_cp034

0x8e2e,	// (0x0004dbb3) phob2_cc_data_pane_ParamLimits

0x8e2e,	// (0x0004dbb3) phob2_cc_data_pane

0x8e4d,	// (0x0004dbd2) phob2_cc_listscroll_pane_ParamLimits

0x8e4d,	// (0x0004dbd2) phob2_cc_listscroll_pane

0x89e8,	// (0x0004d76d) list_double_large_graphic_phob2_pane_ParamLimits

0x89e8,	// (0x0004d76d) list_double_large_graphic_phob2_pane

0x8e6b,	// (0x0004dbf0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8e6b,	// (0x0004dbf0) list_double_large_graphic_phob2_pane_g1

0x1102,	// (0x00045e87) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1102,	// (0x00045e87) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdcc,	// (0x00054b51) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdcc,	// (0x00054b51) list_double_large_graphic_phob2_pane_g

0x1128,	// (0x00045ead) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1128,	// (0x00045ead) list_double_large_graphic_phob2_pane_t1

0x113d,	// (0x00045ec2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x113d,	// (0x00045ec2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdd5,	// (0x00054b5a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdd5,	// (0x00054b5a) list_double_large_graphic_phob2_pane_t

0x11e0,	// (0x00045f65) list_highlight_pane_cp024

0xef67,	// (0x00053cec) phob2_cc_button_pane

0x8e78,	// (0x0004dbfd) phob2_cc_data_pane_g1_ParamLimits

0x8e78,	// (0x0004dbfd) phob2_cc_data_pane_g1

0x8e8f,	// (0x0004dc14) phob2_cc_data_pane_g2_ParamLimits

0x8e8f,	// (0x0004dc14) phob2_cc_data_pane_g2

0x0001,

0xfdda,	// (0x00054b5f) phob2_cc_data_pane_g_ParamLimits

0xfdda,	// (0x00054b5f) phob2_cc_data_pane_g

0x8ea1,	// (0x0004dc26) phob2_cc_data_pane_t1_ParamLimits

0x8ea1,	// (0x0004dc26) phob2_cc_data_pane_t1

0x8eb9,	// (0x0004dc3e) phob2_cc_data_pane_t2_ParamLimits

0x8eb9,	// (0x0004dc3e) phob2_cc_data_pane_t2

0x8ed1,	// (0x0004dc56) phob2_cc_data_pane_t3_ParamLimits

0x8ed1,	// (0x0004dc56) phob2_cc_data_pane_t3

0x0002,

0xfddf,	// (0x00054b64) phob2_cc_data_pane_t_ParamLimits

0xfddf,	// (0x00054b64) phob2_cc_data_pane_t

0xef6f,	// (0x00053cf4) phob2_cc_list_pane_ParamLimits

0xef6f,	// (0x00053cf4) phob2_cc_list_pane

0xdbf3,	// (0x00052978) scroll_pane_cp035_ParamLimits

0xdbf3,	// (0x00052978) scroll_pane_cp035

0x13a4,	// (0x00046129) bg_button_pane_cp033

0xef7b,	// (0x00053d00) phob2_cc_button_pane_g1

0xef87,	// (0x00053d0c) phob2_cc_button_pane_t1

0xef9c,	// (0x00053d21) phob2_cc_button_pane_t2

0x0001,

0x0767,	// (0x000454ec) phob2_cc_button_pane_t

0x8ee9,	// (0x0004dc6e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8ee9,	// (0x0004dc6e) list_double_large_graphic_phob2_cc_pane

0x8f19,	// (0x0004dc9e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8f19,	// (0x0004dc9e) list_double_large_graphic_phob2_cc_pane_g1

0x1152,	// (0x00045ed7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1152,	// (0x00045ed7) list_double_large_graphic_phob2_cc_pane_g2

0x115e,	// (0x00045ee3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x115e,	// (0x00045ee3) list_double_large_graphic_phob2_cc_pane_g3

0x116a,	// (0x00045eef) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x116a,	// (0x00045eef) list_double_large_graphic_phob2_cc_pane_g4

0xd55a,	// (0x000522df) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd55a,	// (0x000522df) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfde6,	// (0x00054b6b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfde6,	// (0x00054b6b) list_double_large_graphic_phob2_cc_pane_g

0x1176,	// (0x00045efb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1176,	// (0x00045efb) list_double_large_graphic_phob2_cc_pane_t1

0x119f,	// (0x00045f24) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x119f,	// (0x00045f24) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdf1,	// (0x00054b76) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdf1,	// (0x00054b76) list_double_large_graphic_phob2_cc_pane_t

0xefae,	// (0x00053d33) list_highlight_pane_cp025_ParamLimits

0xefae,	// (0x00053d33) list_highlight_pane_cp025

0x13a4,	// (0x00046129) bg_button_pane_cp033_ParamLimits

0xef7b,	// (0x00053d00) phob2_cc_button_pane_g1_ParamLimits

0xef87,	// (0x00053d0c) phob2_cc_button_pane_t1_ParamLimits

0xef9c,	// (0x00053d21) phob2_cc_button_pane_t2_ParamLimits

0x0767,	// (0x000454ec) phob2_cc_button_pane_t_ParamLimits

0x13b2,	// (0x00046137) popup_wgtman_window

0xd7ba,	// (0x0005253f) scroll_pane_cp038

0x8961,	// (0x0004d6e6) wgtman_btn_pane_cp_01_ParamLimits

0x8961,	// (0x0004d6e6) wgtman_btn_pane_cp_01

0xefbc,	// (0x00053d41) wgtman_content_pane

0xefc5,	// (0x00053d4a) wgtman_heading_pane

0x11e0,	// (0x00045f65) bg_heading_pane_cp02

0xefce,	// (0x00053d53) wgtman_heading_pane_g1

0xefd6,	// (0x00053d5b) wgtman_heading_pane_t1

0xefe4,	// (0x00053d69) scroll_pane_cp036

0xefec,	// (0x00053d71) wgtman_list_pane

0xeff4,	// (0x00053d79) wgtman_list_pane_t1_ParamLimits

0xeff4,	// (0x00053d79) wgtman_list_pane_t1

0xcfdf,	// (0x00051d64) cam4_grid_pane

0x0aa5,	// (0x0004582a) bg_button_pane_cp015_ParamLimits

0x6fd6,	// (0x0004bd5b) bg_button_pane_cp016_ParamLimits

0x6fe2,	// (0x0004bd67) bg_button_pane_cp017_ParamLimits

0x6ffd,	// (0x0004bd82) popup_vitu2_query_window_g3_ParamLimits

0x6ffd,	// (0x0004bd82) popup_vitu2_query_window_g3

0x0b5c,	// (0x000458e1) popup_vitu2_query_window_t6_ParamLimits

0x0b5c,	// (0x000458e1) popup_vitu2_query_window_t6

0x0b87,	// (0x0004590c) popup_vitu2_query_window_t7_ParamLimits

0x0b87,	// (0x0004590c) popup_vitu2_query_window_t7

0xe89f,	// (0x00053624) cam4_grid_pane_g1

0xe8a8,	// (0x0005362d) cam4_grid_pane_g2

0xf00e,	// (0x00053d93) cam4_grid_pane_g3

0xf017,	// (0x00053d9c) cam4_grid_pane_g4

0x0003,

0xfdf6,	// (0x00054b7b) cam4_grid_pane_g

0x27fd,	// (0x00047582) aid_placing_vt_slider_lsc_ParamLimits

0x2b58,	// (0x000478dd) vidtel_button_pane_ParamLimits

0x2b58,	// (0x000478dd) vidtel_button_pane

0x11e0,	// (0x00045f65) bg_button_pane_cp034

0xf022,	// (0x00053da7) vidtel_button_pane_g1

0xf02a,	// (0x00053daf) vidtel_button_pane_t1

0xd8e1,	// (0x00052666) aid_size_vtel_slider_touch

0xdbf3,	// (0x00052978) scroll_pane_cp039

0x7c31,	// (0x0004c9b6) ncim_query_button_pane_cp01_ParamLimits

0x7c50,	// (0x0004c9d5) ncimui_query_pane_g1_ParamLimits

0x13a4,	// (0x00046129) input_focus_pane_cp012_ParamLimits

0xe1d9,	// (0x00052f5e) ncim_query_entry_pane_t1_ParamLimits

0xdbf3,	// (0x00052978) scroll_pane_cp039_ParamLimits

0xabea,	// (0x0004f96f) navi_pane_bcale_mc_g1

0xabf2,	// (0x0004f977) navi_pane_bcale_mc_t1

0xe722,	// (0x000534a7) main_sp_fs_email_pane_g1

0xe72e,	// (0x000534b3) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x00054987) main_sp_fs_email_pane_g

0xe9c5,	// (0x0005374a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9c5,	// (0x0005374a) list_single_cale_mrui_row_pane_g3

0x104e,	// (0x00045dd3) list_single_recal_day_pane_g5_event_pane

0xd525,	// (0x000522aa) list_single_recal_day_pane_g7

0x8f25,	// (0x0004dcaa) list_recal_day_event_pane_cp01

0x8f2e,	// (0x0004dcb3) list_recal_vselct_arw_lo_pane_cp01

0x8f36,	// (0x0004dcbb) list_recal_vselct_arw_up_pane_cp01

0x8f3e,	// (0x0004dcc3) list_recal_vselct_pane_cp01

0xd8f1,	// (0x00052676) list_recal_day_event_pane_cp01_g1

0xd566,	// (0x000522eb) list_recal_day_event_pane_cp01_t1

0xd52d,	// (0x000522b2) list_single_recal_day_pane_t1_ParamLimits

0xd53f,	// (0x000522c4) list_single_recal_day_pane_t2_ParamLimits

0xfce7,	// (0x00054a6c) list_single_recal_day_pane_t_ParamLimits

0x1ad6,	// (0x0004685b) bg_notes_pane_ParamLimits

0x1c5f,	// (0x000469e4) list_notes_pane_ParamLimits

0x1c6d,	// (0x000469f2) scroll_pane_cp06_ParamLimits

0x1c95,	// (0x00046a1a) main_notes_pane_ParamLimits

0x13a4,	// (0x00046129) main_welc_pane

0x8f7d,	// (0x0004dd02) main_welc_body_pane_ParamLimits

0x8f7d,	// (0x0004dd02) main_welc_body_pane

0x8f9b,	// (0x0004dd20) main_welc_opti_pane_ParamLimits

0x8f9b,	// (0x0004dd20) main_welc_opti_pane

0x9017,	// (0x0004dd9c) main_welc_pane_t1_ParamLimits

0x9017,	// (0x0004dd9c) main_welc_pane_t1

0x9217,	// (0x0004df9c) main_welc_body_row_pane_ParamLimits

0x9217,	// (0x0004df9c) main_welc_body_row_pane

0x1b43,	// (0x000468c8) main_welc_opti_row_pane_ParamLimits

0x1b43,	// (0x000468c8) main_welc_opti_row_pane

0x922b,	// (0x0004dfb0) main_welc_opti_row_pane_g1

0x9233,	// (0x0004dfb8) main_welc_opti_row_pane_t1

0x9242,	// (0x0004dfc7) main_welc_body_row_pane_t1

0xed41,	// (0x00053ac6) popup_notif_wgt_heading_pane

0xed5b,	// (0x00053ae0) aid_size_list_notif_wgt_del_ParamLimits

0xed68,	// (0x00053aed) list_notif_wgt_row_pane_g1_ParamLimits

0xed74,	// (0x00053af9) list_notif_wgt_row_pane_g2_ParamLimits

0xed83,	// (0x00053b08) list_notif_wgt_row_pane_g3_ParamLimits

0xfd4e,	// (0x00054ad3) list_notif_wgt_row_pane_g_ParamLimits

0xed90,	// (0x00053b15) list_notif_wgt_row_pane_t1_ParamLimits

0xeda6,	// (0x00053b2b) list_notif_wgt_row_pane_t2_ParamLimits

0xedb8,	// (0x00053b3d) list_notif_wgt_row_pane_t3_ParamLimits

0xfd55,	// (0x00054ada) list_notif_wgt_row_pane_t_ParamLimits

0x89fa,	// (0x0004d77f) listrow_wgtman_pane_g1_ParamLimits

0x8a07,	// (0x0004d78c) listrow_wgtman_pane_g2_ParamLimits

0xfd85,	// (0x00054b0a) listrow_wgtman_pane_g_ParamLimits

0x10b2,	// (0x00045e37) listrow_wgtman_pane_t1_ParamLimits

0x10ca,	// (0x00045e4f) listrow_wgtman_pane_t2_ParamLimits

0xfd8a,	// (0x00054b0f) listrow_wgtman_pane_t_ParamLimits

0x10f0,	// (0x00045e75) wait_bar_pane_cp09_ParamLimits

0x11e0,	// (0x00045f65) bg_popup_heading_pane_cp02

0x9251,	// (0x0004dfd6) popup_notif_wgt_heading_pane_g1

0x9259,	// (0x0004dfde) popup_notif_wgt_heading_pane_t1

0x11e0,	// (0x00045f65) main_vids_pane

0x11e0,	// (0x00045f65) vids_listscroll_pane

0x9267,	// (0x0004dfec) scroll_pane_cp040

0x11e0,	// (0x00045f65) vids_list_pane

0x9272,	// (0x0004dff7) vids_list_double_pane_ParamLimits

0x9272,	// (0x0004dff7) vids_list_double_pane

0x9283,	// (0x0004e008) vids_list_double_pane_g1

0x928c,	// (0x0004e011) vids_list_double_pane_t1

0x929c,	// (0x0004e021) vids_list_double_pane_t2

0x0001,

0xfe15,	// (0x00054b9a) vids_list_double_pane_t

0x13a4,	// (0x00046129) main_ncimui_pane_ParamLimits

0x7a67,	// (0x0004c7ec) main_ncimui_pane_g1_ParamLimits

0x7a73,	// (0x0004c7f8) main_ncimui_pane_g2_ParamLimits

0x7a73,	// (0x0004c7f8) main_ncimui_pane_g2

0x0001,

0xfb08,	// (0x0005488d) main_ncimui_pane_g_ParamLimits

0xfb08,	// (0x0005488d) main_ncimui_pane_g

0x8fb6,	// (0x0004dd3b) main_welc_pane_g1_ParamLimits

0x8fb6,	// (0x0004dd3b) main_welc_pane_g1

0x8fcb,	// (0x0004dd50) main_welc_pane_g2_ParamLimits

0x8fcb,	// (0x0004dd50) main_welc_pane_g2

0x0003,

0xfdff,	// (0x00054b84) main_welc_pane_g_ParamLimits

0xfdff,	// (0x00054b84) main_welc_pane_g

0x1ad6,	// (0x0004685b) listscroll_mce_pane_ParamLimits

0xad3f,	// (0x0004fac4) wait_bar_pane_cp10

0xc069,	// (0x00050dee) main_cale_day_pane_ParamLimits

0xc069,	// (0x00050dee) main_cale_week_pane_ParamLimits

0x1ad6,	// (0x0004685b) main_messa_pane_ParamLimits

0x58a2,	// (0x0004a627) main_clock2_btn_pane_ParamLimits

0x58a2,	// (0x0004a627) main_clock2_btn_pane

0xc93a,	// (0x000516bf) main_clock2_btn_pane_cp01_ParamLimits

0xc93a,	// (0x000516bf) main_clock2_btn_pane_cp01

0xe996,	// (0x0005371b) list_cale_mrui_pane_ParamLimits

0xedfc,	// (0x00053b81) main_cf0_pane_g2

0x0001,

0xfd5c,	// (0x00054ae1) main_cf0_pane_g

0x8c00,	// (0x0004d985) area_left_week_number_pane_ParamLimits

0x8c0c,	// (0x0004d991) area_top_day_name_pane_ParamLimits

0x8c1f,	// (0x0004d9a4) frame_month_view_pane_ParamLimits

0xef24,	// (0x00053ca9) grid_month_view_pane_ParamLimits

0xef32,	// (0x00053cb7) frm_month_g1_ParamLimits

0x8ca0,	// (0x0004da25) frm_month_g2_ParamLimits

0x8cb3,	// (0x0004da38) frm_month_g3_ParamLimits

0x8cc6,	// (0x0004da4b) frm_month_g4_ParamLimits

0x8cd9,	// (0x0004da5e) frm_month_g5_ParamLimits

0x8cec,	// (0x0004da71) frm_month_g6_ParamLimits

0x8cff,	// (0x0004da84) frm_month_g7_ParamLimits

0xef3f,	// (0x00053cc4) frm_month_g8_ParamLimits

0x8d12,	// (0x0004da97) frm_month_g9_ParamLimits

0x8d22,	// (0x0004daa7) frm_month_g10_ParamLimits

0x8d32,	// (0x0004dab7) frm_month_g11_ParamLimits

0x8d42,	// (0x0004dac7) frm_month_g12_ParamLimits

0x8d54,	// (0x0004dad9) frm_month_g13_ParamLimits

0x8d66,	// (0x0004daeb) frm_month_g14_ParamLimits

0x8d7a,	// (0x0004daff) frm_month_g15_ParamLimits

0x8d8e,	// (0x0004db13) frm_month_g16_ParamLimits

0xfdab,	// (0x00054b30) frm_month_g_ParamLimits

0xef4c,	// (0x00053cd1) cell_top_day_name_pane_t1_ParamLimits

0x8da2,	// (0x0004db27) cell_area_left_week_number_pane_g1_ParamLimits

0x8dae,	// (0x0004db33) cell_area_left_week_number_pane_t1_ParamLimits

0x1b51,	// (0x000468d6) cell_month_view_pane_g1_ParamLimits

0x8dc1,	// (0x0004db46) cell_month_view_pane_t1_ParamLimits

0x1ace,	// (0x00046853) main_clock2_btn_pane_g1

0x92ac,	// (0x0004e031) main_clock2_btn_pane_t1

0x13a4,	// (0x00046129) listscroll_cmail_pane_ParamLimits

0xe722,	// (0x000534a7) main_sp_fs_email_pane_g1_ParamLimits

0xe72e,	// (0x000534b3) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x00054987) main_sp_fs_email_pane_g_ParamLimits

0xeac4,	// (0x00053849) list_recal_day_pane_ParamLimits

0xead5,	// (0x0005385a) mian_recal_day_pane_t1

0x0e3b,	// (0x00045bc0) list_single_dyc_row_text_pane_t4_ParamLimits

0x0e3b,	// (0x00045bc0) list_single_dyc_row_text_pane_t4

0x0e84,	// (0x00045c09) list_single_dyc_row_text_pane_t5_ParamLimits

0x0e84,	// (0x00045c09) list_single_dyc_row_text_pane_t5

0xd304,	// (0x00052089) list_single_dyc_row_text_pane_t6_ParamLimits

0xd304,	// (0x00052089) list_single_dyc_row_text_pane_t6

0x3ac8,	// (0x0004884d) aid_mgn_list_cale_time_pane

0x13a4,	// (0x00046129) main_gallery2_pane_ParamLimits

0xc950,	// (0x000516d5) main_clock2_pane_cp01_t1

0xc960,	// (0x000516e5) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x00054477) main_clock2_pane_cp01_t

0x2168,	// (0x00046eed) cale_week_scroll_pane_g16_ParamLimits

0x2168,	// (0x00046eed) cale_week_scroll_pane_g16

0x2569,	// (0x000472ee) vorec_slider_pane

0xf02a,	// (0x00053daf) vidtel_button_pane_t1_ParamLimits

0x85e6,	// (0x0004d36b) main_fs_bigclock_clock_pane_g1_ParamLimits

0x85e6,	// (0x0004d36b) main_fs_bigclock_clock_pane_g2_ParamLimits

0x85f7,	// (0x0004d37c) main_fs_bigclock_clock_pane_g3_ParamLimits

0x85f7,	// (0x0004d37c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0a,	// (0x00054a8f) main_fs_bigclock_clock_pane_g_ParamLimits

0x860a,	// (0x0004d38f) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8620,	// (0x0004d3a5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd13,	// (0x00054a98) main_fs_bigclock_clock_pane_t_ParamLimits

0x5177,	// (0x00049efc) main_mup3_lyrics_pane_ParamLimits

0x5177,	// (0x00049efc) main_mup3_lyrics_pane

0x92d2,	// (0x0004e057) main_mup3_lyrics_pane_t1_ParamLimits

0x92d2,	// (0x0004e057) main_mup3_lyrics_pane_t1

0xccd5,	// (0x00051a5a) aid_main_mp4_pane_t1_area

0xccdf,	// (0x00051a64) aid_main_mp4_pane_t2_area

0xcd89,	// (0x00051b0e) main_mp4_pane_g7_ParamLimits

0xcd89,	// (0x00051b0e) main_mp4_pane_g7

0xcd95,	// (0x00051b1a) main_mp4_pane_g8_ParamLimits

0xcd95,	// (0x00051b1a) main_mp4_pane_g8

0x61a0,	// (0x0004af25) aid_call6_pane_g1_size

0x8f03,	// (0x0004dc88) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8f03,	// (0x0004dc88) list_double_large_graphic_phob2_other_pane

0x3a80,	// (0x00048805) list_double_large_graphic_phob2_other_pane_g1

0x11e0,	// (0x00045f65) list_highlight_pane_cp026

0x13a4,	// (0x00046129) main_welc_pane_ParamLimits

0x8040,	// (0x0004cdc5) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8040,	// (0x0004cdc5) main_sp_fs_ctrlbar_pane_g3

0x805a,	// (0x0004cddf) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x805a,	// (0x0004cddf) main_sp_fs_ctrlbar_pane_g4

0x808e,	// (0x0004ce13) toolbar2_fixed_button_pane_cp01

0x8099,	// (0x0004ce1e) toolbar2_fixed_button_pane_cp02

0x80a6,	// (0x0004ce2b) toolbar2_fixed_button_pane_cp03

0x8f5b,	// (0x0004dce0) list_welc_entry_pane_ParamLimits

0x8f5b,	// (0x0004dce0) list_welc_entry_pane

0x8fe0,	// (0x0004dd65) main_welc_pane_g3_ParamLimits

0x8fe0,	// (0x0004dd65) main_welc_pane_g3

0x9035,	// (0x0004ddba) main_welc_pane_t2_ParamLimits

0x9035,	// (0x0004ddba) main_welc_pane_t2

0x9050,	// (0x0004ddd5) main_welc_pane_t3_ParamLimits

0x9050,	// (0x0004ddd5) main_welc_pane_t3

0x0005,

0xfe08,	// (0x00054b8d) main_welc_pane_t_ParamLimits

0xfe08,	// (0x00054b8d) main_welc_pane_t

0x9180,	// (0x0004df05) welc_button_pane_ParamLimits

0x9180,	// (0x0004df05) welc_button_pane

0x9202,	// (0x0004df87) welc_service_logo_pane_ParamLimits

0x9202,	// (0x0004df87) welc_service_logo_pane

0x92ee,	// (0x0004e073) list_single_welc_entry_pane_ParamLimits

0x92ee,	// (0x0004e073) list_single_welc_entry_pane

0x92ff,	// (0x0004e084) list_single_welc_entry_pane_g1

0x9307,	// (0x0004e08c) list_single_welc_entry_pane_t1

0x9315,	// (0x0004e09a) list_single_welc_entry_pane_t2

0x0001,

0xfe1a,	// (0x00054b9f) list_single_welc_entry_pane_t

0x11e0,	// (0x00045f65) bg_button_pane_cp035

0x9323,	// (0x0004e0a8) welc_button_pane_t1

0x9331,	// (0x0004e0b6) welc_service_logo_pane_g1

0x933a,	// (0x0004e0bf) welc_service_logo_pane_g2

0x0001,

0xfe1f,	// (0x00054ba4) welc_service_logo_pane_g

0x11e0,	// (0x00045f65) main_int_radio_pane

0x1df9,	// (0x00046b7e) list_single_fs_dyc_pane_g1

0x110e,	// (0x00045e93) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x110e,	// (0x00045e93) list_double_large_graphic_phob2_pane_g3

0x111a,	// (0x00045e9f) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x111a,	// (0x00045e9f) list_double_large_graphic_phob2_pane_g4

0x9343,	// (0x0004e0c8) main_int_radio1_pane_ParamLimits

0x9343,	// (0x0004e0c8) main_int_radio1_pane

0x9360,	// (0x0004e0e5) find_pane_cp02

0x9369,	// (0x0004e0ee) input_focus_pane_cp12_ParamLimits

0x9369,	// (0x0004e0ee) input_focus_pane_cp12

0x9379,	// (0x0004e0fe) input_focus_pane_cp13_ParamLimits

0x9379,	// (0x0004e0fe) input_focus_pane_cp13

0x938d,	// (0x0004e112) input_focus_pane_cp14_ParamLimits

0x938d,	// (0x0004e112) input_focus_pane_cp14

0x93a1,	// (0x0004e126) int_radio1_listscroll_pane

0x93ab,	// (0x0004e130) main_int_radio1_pane_g1_ParamLimits

0x93ab,	// (0x0004e130) main_int_radio1_pane_g1

0x93c3,	// (0x0004e148) main_int_radio1_pane_t1_ParamLimits

0x93c3,	// (0x0004e148) main_int_radio1_pane_t1

0x93de,	// (0x0004e163) main_int_radio1_pane_t2_ParamLimits

0x93de,	// (0x0004e163) main_int_radio1_pane_t2

0x93f9,	// (0x0004e17e) main_int_radio1_pane_t3_ParamLimits

0x93f9,	// (0x0004e17e) main_int_radio1_pane_t3

0x9414,	// (0x0004e199) main_int_radio1_pane_t4_ParamLimits

0x9414,	// (0x0004e199) main_int_radio1_pane_t4

0x9426,	// (0x0004e1ab) main_int_radio1_pane_t5_ParamLimits

0x9426,	// (0x0004e1ab) main_int_radio1_pane_t5

0x9438,	// (0x0004e1bd) main_int_radio1_pane_t6_ParamLimits

0x9438,	// (0x0004e1bd) main_int_radio1_pane_t6

0x944d,	// (0x0004e1d2) main_int_radio1_pane_t7_ParamLimits

0x944d,	// (0x0004e1d2) main_int_radio1_pane_t7

0x9462,	// (0x0004e1e7) main_int_radio1_pane_t8_ParamLimits

0x9462,	// (0x0004e1e7) main_int_radio1_pane_t8

0x9481,	// (0x0004e206) main_int_radio1_pane_t9_ParamLimits

0x9481,	// (0x0004e206) main_int_radio1_pane_t9

0x9493,	// (0x0004e218) main_int_radio1_pane_t10_ParamLimits

0x9493,	// (0x0004e218) main_int_radio1_pane_t10

0x94b9,	// (0x0004e23e) main_int_radio1_pane_t11_ParamLimits

0x94b9,	// (0x0004e23e) main_int_radio1_pane_t11

0x94df,	// (0x0004e264) main_int_radio1_pane_t12_ParamLimits

0x94df,	// (0x0004e264) main_int_radio1_pane_t12

0x000b,

0xfe24,	// (0x00054ba9) main_int_radio1_pane_t_ParamLimits

0xfe24,	// (0x00054ba9) main_int_radio1_pane_t

0x94f1,	// (0x0004e276) int_radio_list_pane

0xeaa6,	// (0x0005382b) scroll_pane_cp037

0x94f9,	// (0x0004e27e) list_double_large_graphic_int_radio_pane_ParamLimits

0x94f9,	// (0x0004e27e) list_double_large_graphic_int_radio_pane

0x9511,	// (0x0004e296) list_double_large_graphic_int_radio_pane_g1

0xd574,	// (0x000522f9) list_double_large_graphic_int_radio_pane_t1

0xd582,	// (0x00052307) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe3d,	// (0x00054bc2) list_double_large_graphic_int_radio_pane_t

0x11e0,	// (0x00045f65) list_highlight_pane_cp027

0x8f75,	// (0x0004dcfa) main_button_pane_4

0x8ff3,	// (0x0004dd78) main_welc_pane_g4_ParamLimits

0x8ff3,	// (0x0004dd78) main_welc_pane_g4

0x9069,	// (0x0004ddee) main_welc_pane_t4_ParamLimits

0x9069,	// (0x0004ddee) main_welc_pane_t4

0x9080,	// (0x0004de05) main_welc_pane_t5_ParamLimits

0x9080,	// (0x0004de05) main_welc_pane_t5

0x90bd,	// (0x0004de42) main_welc_pane_t6_ParamLimits

0x90bd,	// (0x0004de42) main_welc_pane_t6

0x9197,	// (0x0004df1c) welc_button_pane_2_ParamLimits

0x9197,	// (0x0004df1c) welc_button_pane_2

0x91b3,	// (0x0004df38) welc_button_pane_3_ParamLimits

0x91b3,	// (0x0004df38) welc_button_pane_3

0x91d2,	// (0x0004df57) welc_button_pane_4

0x91da,	// (0x0004df5f) welc_button_pane_5_ParamLimits

0x91da,	// (0x0004df5f) welc_button_pane_5

0x120e,	// (0x00045f93) main_popup_welc_pane

0x9532,	// (0x0004e2b7) main_welc_sk_g3

0x953c,	// (0x0004e2c1) main_welc_sk_g4

0x9546,	// (0x0004e2cb) main_welc_sk_t3

0x9556,	// (0x0004e2db) main_welc_sk_t4

0x9566,	// (0x0004e2eb) popup_welc_pane_t4

0x9574,	// (0x0004e2f9) popup_welc_pane_t5

0x9582,	// (0x0004e307) popup_welc_pane_t6

0x11e0,	// (0x00045f65) main_acti_pane

0x11e0,	// (0x00045f65) main_sso_pane

0x95c0,	// (0x0004e345) sso_body_pane_ParamLimits

0x95c0,	// (0x0004e345) sso_body_pane

0x95d4,	// (0x0004e359) sso_logo_pane_ParamLimits

0x95d4,	// (0x0004e359) sso_logo_pane

0x960d,	// (0x0004e392) sso_sk_pane_ParamLimits

0x960d,	// (0x0004e392) sso_sk_pane

0x961f,	// (0x0004e3a4) main_sso_logo_pane_g1

0x962a,	// (0x0004e3af) sso_sk_pane_t1_ParamLimits

0x962a,	// (0x0004e3af) sso_sk_pane_t1

0x9644,	// (0x0004e3c9) sso_sk_pane_t2_ParamLimits

0x9644,	// (0x0004e3c9) sso_sk_pane_t2

0x0001,

0xfe42,	// (0x00054bc7) sso_sk_pane_t_ParamLimits

0xfe42,	// (0x00054bc7) sso_sk_pane_t

0x965a,	// (0x0004e3df) aid_sso_gap

0x9663,	// (0x0004e3e8) aid_sso_txt1

0x966d,	// (0x0004e3f2) aid_sso_txt2

0x9677,	// (0x0004e3fc) aid_sso_txt3

0x0002,

0xfe47,	// (0x00054bcc) aid_sso_txt

0x9681,	// (0x0004e406) aid_sso_widget

0x96df,	// (0x0004e464) sso_btn_pane_ParamLimits

0x96df,	// (0x0004e464) sso_btn_pane

0x9763,	// (0x0004e4e8) sso_option_pane_ParamLimits

0x9763,	// (0x0004e4e8) sso_option_pane

0x9819,	// (0x0004e59e) sso_query_pane_ParamLimits

0x9819,	// (0x0004e59e) sso_query_pane

0x986f,	// (0x0004e5f4) sso_query_pane_cp01_ParamLimits

0x986f,	// (0x0004e5f4) sso_query_pane_cp01

0x98c9,	// (0x0004e64e) sso_t_hdr_pane_ParamLimits

0x98c9,	// (0x0004e64e) sso_t_hdr_pane

0x98f3,	// (0x0004e678) sso_t_nml_pane_ParamLimits

0x98f3,	// (0x0004e678) sso_t_nml_pane

0x9949,	// (0x0004e6ce) sso_t_sub_pane

0x95e1,	// (0x0004e366) sso_popup_window_ParamLimits

0x95e1,	// (0x0004e366) sso_popup_window

0x968b,	// (0x0004e410) sso_apps_pane_ParamLimits

0x968b,	// (0x0004e410) sso_apps_pane

0x96b5,	// (0x0004e43a) sso_body_pane_g1

0x96bf,	// (0x0004e444) sso_body_pane_t1

0x96cf,	// (0x0004e454) sso_body_pane_t2

0x0001,

0xfe4e,	// (0x00054bd3) sso_body_pane_t

0x972b,	// (0x0004e4b0) sso_btn_pane_cp01_ParamLimits

0x972b,	// (0x0004e4b0) sso_btn_pane_cp01

0x97ed,	// (0x0004e572) sso_prog_pane_ParamLimits

0x97ed,	// (0x0004e572) sso_prog_pane

0x995e,	// (0x0004e6e3) sso_t_hdr_pane_t1_ParamLimits

0x995e,	// (0x0004e6e3) sso_t_hdr_pane_t1

0x9971,	// (0x0004e6f6) input_focus_pane_cp10_ParamLimits

0x9971,	// (0x0004e6f6) input_focus_pane_cp10

0x9985,	// (0x0004e70a) sso_query_pane_t1_ParamLimits

0x9985,	// (0x0004e70a) sso_query_pane_t1

0x9998,	// (0x0004e71d) sso_query_pane_t2_ParamLimits

0x9998,	// (0x0004e71d) sso_query_pane_t2

0x99b1,	// (0x0004e736) sso_query_pane_t3_ParamLimits

0x99b1,	// (0x0004e736) sso_query_pane_t3

0x99db,	// (0x0004e760) sso_query_pane_t4_ParamLimits

0x99db,	// (0x0004e760) sso_query_pane_t4

0x0003,

0xfe53,	// (0x00054bd8) sso_query_pane_t_ParamLimits

0xfe53,	// (0x00054bd8) sso_query_pane_t

0x9529,	// (0x0004e2ae) bg_button_pane_cp22

0x951a,	// (0x0004e29f) sso_btn_pane_t1

0x99ff,	// (0x0004e784) sso_t_nml_pane_t1_ParamLimits

0x99ff,	// (0x0004e784) sso_t_nml_pane_t1

0x9a1a,	// (0x0004e79f) sso_option_row_pane_ParamLimits

0x9a1a,	// (0x0004e79f) sso_option_row_pane

0x9a27,	// (0x0004e7ac) sso_t_sub_pane_t1_ParamLimits

0x9a27,	// (0x0004e7ac) sso_t_sub_pane_t1

0x13a4,	// (0x00046129) bg_popup_window_pane_cp11_ParamLimits

0x13a4,	// (0x00046129) bg_popup_window_pane_cp11

0x9a44,	// (0x0004e7c9) popup_sk_window_cp01_ParamLimits

0x9a44,	// (0x0004e7c9) popup_sk_window_cp01

0x9a51,	// (0x0004e7d6) sso_popup_body_pane_ParamLimits

0x9a51,	// (0x0004e7d6) sso_popup_body_pane

0x9a5e,	// (0x0004e7e3) scroll_pane_cp21_ParamLimits

0x9a5e,	// (0x0004e7e3) scroll_pane_cp21

0x9a6b,	// (0x0004e7f0) sso_popup_body_t_pane_ParamLimits

0x9a6b,	// (0x0004e7f0) sso_popup_body_t_pane

0x9a78,	// (0x0004e7fd) sso_popup_body_t_hdr_pane_ParamLimits

0x9a78,	// (0x0004e7fd) sso_popup_body_t_hdr_pane

0x9a8a,	// (0x0004e80f) sso_popup_body_t_nml_pane_ParamLimits

0x9a8a,	// (0x0004e80f) sso_popup_body_t_nml_pane

0x9ab1,	// (0x0004e836) sso_popup_body_t_sub_pane_ParamLimits

0x9ab1,	// (0x0004e836) sso_popup_body_t_sub_pane

0x9ad4,	// (0x0004e859) sso_popup_body_t_hdr_pane_t1

0x9ae4,	// (0x0004e869) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9ae4,	// (0x0004e869) sso_popup_body_t_nml_pane_t1

0x9b1c,	// (0x0004e8a1) sso_popup_body_t_sub_pane_t1_ParamLimits

0x9b1c,	// (0x0004e8a1) sso_popup_body_t_sub_pane_t1

0x1c23,	// (0x000469a8) sso_prog_pane_g1

0x9b41,	// (0x0004e8c6) sso_apps_pane_comp1_ParamLimits

0x9b41,	// (0x0004e8c6) sso_apps_pane_comp1

0x9b5b,	// (0x0004e8e0) sso_apps_pane_comp1_g1

0x9b63,	// (0x0004e8e8) sso_apps_pane_comp1_t1

0x9b7f,	// (0x0004e904) sso_option_row_pane_g1

0x9b87,	// (0x0004e90c) sso_option_row_pane_t1

0xe7cf,	// (0x00053554) list_cmail_pane_ParamLimits

0x11e0,	// (0x00045f65) main_call7_pane

0x8f48,	// (0x0004dccd) bg_welc_area_ParamLimits

0x8f48,	// (0x0004dccd) bg_welc_area

0x90fb,	// (0x0004de80) sso_t_hdr_pane_a_t1_ParamLimits

0x90fb,	// (0x0004de80) sso_t_hdr_pane_a_t1

0x9116,	// (0x0004de9b) sso_t_nml_pane_a_t1_ParamLimits

0x9116,	// (0x0004de9b) sso_t_nml_pane_a_t1

0x9145,	// (0x0004deca) sso_t_sub_pane_a_t1_ParamLimits

0x9145,	// (0x0004deca) sso_t_sub_pane_a_t1

0x91f0,	// (0x0004df75) welc_button_pane_cp01_ParamLimits

0x91f0,	// (0x0004df75) welc_button_pane_cp01

0x951a,	// (0x0004e29f) sso_btn_pane_t1_copy1

0x9529,	// (0x0004e2ae) welc_button_pane_2_comp1

0x9590,	// (0x0004e315) sso_t_hdr_pane_p_t1

0x95a0,	// (0x0004e325) sso_t_nml_pane_p_t1

0x95b0,	// (0x0004e335) sso_t_sub_pane_p_t1

0x11e0,	// (0x00045f65) main_att_pane

0x11e0,	// (0x00045f65) main_vod_pane

0x9949,	// (0x0004e6ce) sso_t_sub_pane_ParamLimits

0x9b71,	// (0x0004e8f6) input_focus_pane_cp10_t1

0x9b87,	// (0x0004e90c) sso_option_row_pane_t1_ParamLimits

0x9ba0,	// (0x0004e925) main_att_body_pane_ParamLimits

0x9ba0,	// (0x0004e925) main_att_body_pane

0x9bb6,	// (0x0004e93b) att_btn_emg_pane_ParamLimits

0x9bb6,	// (0x0004e93b) att_btn_emg_pane

0x9bd5,	// (0x0004e95a) att_btn_pane_ParamLimits

0x9bd5,	// (0x0004e95a) att_btn_pane

0x9c46,	// (0x0004e9cb) att_btn_pane_cp01_ParamLimits

0x9c46,	// (0x0004e9cb) att_btn_pane_cp01

0x9c66,	// (0x0004e9eb) att_li_srv_pane_ParamLimits

0x9c66,	// (0x0004e9eb) att_li_srv_pane

0x9c83,	// (0x0004ea08) att_opt_pane_ParamLimits

0x9c83,	// (0x0004ea08) att_opt_pane

0x9ccd,	// (0x0004ea52) att_query_pane_ParamLimits

0x9ccd,	// (0x0004ea52) att_query_pane

0x9d46,	// (0x0004eacb) att_query_pane_cp01_ParamLimits

0x9d46,	// (0x0004eacb) att_query_pane_cp01

0x9d92,	// (0x0004eb17) att_t_hdr_pane_ParamLimits

0x9d92,	// (0x0004eb17) att_t_hdr_pane

0x9dfe,	// (0x0004eb83) att_t_nml_pane_ParamLimits

0x9dfe,	// (0x0004eb83) att_t_nml_pane

0x9e6e,	// (0x0004ebf3) att_t_nml_pane_cp01_ParamLimits

0x9e6e,	// (0x0004ebf3) att_t_nml_pane_cp01

0x9e9a,	// (0x0004ec1f) att_t_nmlb_pane_ParamLimits

0x9e9a,	// (0x0004ec1f) att_t_nmlb_pane

0x9f07,	// (0x0004ec8c) att_term_pane_ParamLimits

0x9f07,	// (0x0004ec8c) att_term_pane

0x9f51,	// (0x0004ecd6) main_att_body_pane_g1_ParamLimits

0x9f51,	// (0x0004ecd6) main_att_body_pane_g1

0x9f7d,	// (0x0004ed02) att_t_hdr_pane_t1_ParamLimits

0x9f7d,	// (0x0004ed02) att_t_hdr_pane_t1

0x9f96,	// (0x0004ed1b) att_t_nml_pane_t1_ParamLimits

0x9f96,	// (0x0004ed1b) att_t_nml_pane_t1

0x9fbb,	// (0x0004ed40) att_btn_pane_t1

0x9529,	// (0x0004e2ae) bg_button_pane_cp23

0x9fcb,	// (0x0004ed50) att_li_srv_row_pane_ParamLimits

0x9fcb,	// (0x0004ed50) att_li_srv_row_pane

0x9fdb,	// (0x0004ed60) att_t_nmlb_pane_t1_ParamLimits

0x9fdb,	// (0x0004ed60) att_t_nmlb_pane_t1

0x9ff9,	// (0x0004ed7e) att_query_pane_t1

0xa008,	// (0x0004ed8d) att_query_pane_t2

0xa017,	// (0x0004ed9c) att_query_pane_t3

0x0002,

0xfe5c,	// (0x00054be1) att_query_pane_t

0xa026,	// (0x0004edab) input_focus_pane_cp11

0xa02f,	// (0x0004edb4) att_term_pane_t1_ParamLimits

0xa02f,	// (0x0004edb4) att_term_pane_t1

0x11e0,	// (0x00045f65) att_opt_row_pane

0x9b7f,	// (0x0004e904) att_opt_row_pane_g1

0xa04c,	// (0x0004edd1) att_opt_row_pane_t1_ParamLimits

0xa04c,	// (0x0004edd1) att_opt_row_pane_t1

0xa065,	// (0x0004edea) att_li_srv_row_pane_g1

0xa06d,	// (0x0004edf2) att_li_srv_row_pane_t1_ParamLimits

0xa06d,	// (0x0004edf2) att_li_srv_row_pane_t1

0xa082,	// (0x0004ee07) att_li_srv_row_pane_t2_ParamLimits

0xa082,	// (0x0004ee07) att_li_srv_row_pane_t2

0x0001,

0xfe63,	// (0x00054be8) att_li_srv_row_pane_t_ParamLimits

0xfe63,	// (0x00054be8) att_li_srv_row_pane_t

0xa097,	// (0x0004ee1c) att_btn_close_pane_g1

0x11e0,	// (0x00045f65) bg_button_pane_cp24

0xa09f,	// (0x0004ee24) main_vod_body_pane_ParamLimits

0xa09f,	// (0x0004ee24) main_vod_body_pane

0xa0b3,	// (0x0004ee38) main_vod_body_pane_g1_ParamLimits

0xa0b3,	// (0x0004ee38) main_vod_body_pane_g1

0xa0e7,	// (0x0004ee6c) scroll_pane_cp24_ParamLimits

0xa0e7,	// (0x0004ee6c) scroll_pane_cp24

0xa135,	// (0x0004eeba) vod_btn_pane_ParamLimits

0xa135,	// (0x0004eeba) vod_btn_pane

0xa177,	// (0x0004eefc) vod_det_pane_ParamLimits

0xa177,	// (0x0004eefc) vod_det_pane

0xa1ab,	// (0x0004ef30) vod_logo_g1_ParamLimits

0xa1ab,	// (0x0004ef30) vod_logo_g1

0xa1e9,	// (0x0004ef6e) vod_opt_pane_ParamLimits

0xa1e9,	// (0x0004ef6e) vod_opt_pane

0xa21c,	// (0x0004efa1) vod_opt_pane_cp01_ParamLimits

0xa21c,	// (0x0004efa1) vod_opt_pane_cp01

0xa248,	// (0x0004efcd) vod_query_pane_ParamLimits

0xa248,	// (0x0004efcd) vod_query_pane

0xa273,	// (0x0004eff8) vod_query_pane_cp01_ParamLimits

0xa273,	// (0x0004eff8) vod_query_pane_cp01

0xa27f,	// (0x0004f004) vod_t_nml_pane_ParamLimits

0xa27f,	// (0x0004f004) vod_t_nml_pane

0xa32c,	// (0x0004f0b1) vod_t_nml_pane_cp01_ParamLimits

0xa32c,	// (0x0004f0b1) vod_t_nml_pane_cp01

0xa368,	// (0x0004f0ed) vod_t_sub_pane_ParamLimits

0xa368,	// (0x0004f0ed) vod_t_sub_pane

0xa399,	// (0x0004f11e) vod_t_sub_pane_cp01_ParamLimits

0xa399,	// (0x0004f11e) vod_t_sub_pane_cp01

0xa026,	// (0x0004edab) vod_query_field_pane

0xa3c5,	// (0x0004f14a) vod_query_pane_t1

0x9529,	// (0x0004e2ae) bg_button_pane_cp25

0x951a,	// (0x0004e29f) sso_btn_pane_t1_copy2

0xa3d4,	// (0x0004f159) vod_t_nml_pane_t1_ParamLimits

0xa3d4,	// (0x0004f159) vod_t_nml_pane_t1

0xa405,	// (0x0004f18a) vod_opt_row_pane_ParamLimits

0xa405,	// (0x0004f18a) vod_opt_row_pane

0xa417,	// (0x0004f19c) vod_t_sub_pane_t1_ParamLimits

0xa417,	// (0x0004f19c) vod_t_sub_pane_t1

0xa430,	// (0x0004f1b5) vod_det_cell_pane_ParamLimits

0xa430,	// (0x0004f1b5) vod_det_cell_pane

0x11e0,	// (0x00045f65) input_focus_pane_cp15

0xa441,	// (0x0004f1c6) vod_query_field_pane_t1

0xa44f,	// (0x0004f1d4) vod_opt_row_pane_g1_ParamLimits

0xa44f,	// (0x0004f1d4) vod_opt_row_pane_g1

0xa45b,	// (0x0004f1e0) vod_opt_row_pane_t1_ParamLimits

0xa45b,	// (0x0004f1e0) vod_opt_row_pane_t1

0xa47a,	// (0x0004f1ff) vod_det_cell_field_pane

0xa483,	// (0x0004f208) vod_det_cell_pane_g1

0xa48b,	// (0x0004f210) vod_det_cell_pane_t1

0x11e0,	// (0x00045f65) input_focus_pane_cp16

0xa49a,	// (0x0004f21f) vod_det_cell_field_pane_t1

0x88b6,	// (0x0004d63b) call7_btn_grp_pane_ParamLimits

0x88b6,	// (0x0004d63b) call7_btn_grp_pane

0xa4a8,	// (0x0004f22d) call7_bubble_pane_ParamLimits

0xa4a8,	// (0x0004f22d) call7_bubble_pane

0xa4bf,	// (0x0004f244) cell_call7_btn_pane_ParamLimits

0xa4bf,	// (0x0004f244) cell_call7_btn_pane

0xa4d2,	// (0x0004f257) call7_pane_g1_ParamLimits

0xa4d2,	// (0x0004f257) call7_pane_g1

0xa4e1,	// (0x0004f266) call7_windows_conf_pane_ParamLimits

0xa4e1,	// (0x0004f266) call7_windows_conf_pane

0xa4fb,	// (0x0004f280) popup_call7_1st_window_ParamLimits

0xa4fb,	// (0x0004f280) popup_call7_1st_window

0xa50c,	// (0x0004f291) popup_call7_2nd_window_ParamLimits

0xa50c,	// (0x0004f291) popup_call7_2nd_window

0xa51d,	// (0x0004f2a2) popup_call7_3rd_window_ParamLimits

0xa51d,	// (0x0004f2a2) popup_call7_3rd_window

0x11e0,	// (0x00045f65) bg_button_pane_cp26

0xee79,	// (0x00053bfe) cell_call7_btn_pane_g1

0xee82,	// (0x00053c07) cell_call7_btn_pane_t1

0x11e0,	// (0x00045f65) bg_popup_window_pane_cp12

0xa52e,	// (0x0004f2b3) popup_call7_1st_window_g1

0xa536,	// (0x0004f2bb) popup_call7_1st_window_g2

0xa53e,	// (0x0004f2c3) popup_call7_1st_window_g3

0x0002,

0xfe68,	// (0x00054bed) popup_call7_1st_window_g

0xa546,	// (0x0004f2cb) popup_call7_1st_window_t1

0xa555,	// (0x0004f2da) popup_call7_1st_window_t2

0xa563,	// (0x0004f2e8) popup_call7_1st_window_t3

0x0002,

0xfe6f,	// (0x00054bf4) popup_call7_1st_window_t

0x11e0,	// (0x00045f65) bg_popup_window_pane_cp13

0xa571,	// (0x0004f2f6) popup_call7_2nd_window_g1

0xa579,	// (0x0004f2fe) popup_call7_2nd_window_g2

0xa581,	// (0x0004f306) popup_call7_2nd_window_g3

0x0002,

0xfe76,	// (0x00054bfb) popup_call7_2nd_window_g

0xa546,	// (0x0004f2cb) popup_call7_2nd_window_t1

0x11e0,	// (0x00045f65) bg_popup_window_pane_cp14

0xa589,	// (0x0004f30e) call7_list_conf_pane

0xa591,	// (0x0004f316) call7_list_conf_row_pane_ParamLimits

0xa591,	// (0x0004f316) call7_list_conf_row_pane

0xa5a4,	// (0x0004f329) call7_list_conf_row_pane_g1

0xa5ac,	// (0x0004f331) call7_list_conf_row_pane_g2

0x0001,

0xfe7d,	// (0x00054c02) call7_list_conf_row_pane_g

0xa5b4,	// (0x0004f339) call7_list_conf_row_pane_t1

0x11e0,	// (0x00045f65) list_highlight_pane_cp22

0x97b9,	// (0x0004e53e) sso_option_pane_cp01_ParamLimits

0x97b9,	// (0x0004e53e) sso_option_pane_cp01

0x1ad6,	// (0x0004685b) msg_header_pane_ParamLimits

0xaed5,	// (0x0004fc5a) bg_button_pane_cp01_ParamLimits

0xaee9,	// (0x0004fc6e) input_focus_pane_cp07_ParamLimits

0x80f7,	// (0x0004ce7c) popup_email_progress_window

0x1c23,	// (0x000469a8) popup_email_progress_window_g1

0xa5c2,	// (0x0004f347) popup_email_progress_window_g2

0x0001,

0xfe82,	// (0x00054c07) popup_email_progress_window_g

0xa5ca,	// (0x0004f34f) popup_email_progress_window_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
