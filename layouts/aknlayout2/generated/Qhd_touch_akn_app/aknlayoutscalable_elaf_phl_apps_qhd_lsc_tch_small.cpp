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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004cbf8 };

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
0x1041,	// (0x0004dc39) Screen

0x104d,	// (0x0004dc45) application_window

0x1099,	// (0x0004dc91) area_bottom_pane_ParamLimits

0x1099,	// (0x0004dc91) area_bottom_pane

0x10d2,	// (0x0004dcca) area_top_pane_ParamLimits

0x10d2,	// (0x0004dcca) area_top_pane

0x974a,	// (0x00056342) call_video_uplink_pane_ParamLimits

0x974a,	// (0x00056342) call_video_uplink_pane

0x1160,	// (0x0004dd58) main_pane_ParamLimits

0x1160,	// (0x0004dd58) main_pane

0xc846,	// (0x0005943e) context_pane

0x4526,	// (0x0005111e) navi_pane

0x4558,	// (0x00051150) popup_cale_events_window_ParamLimits

0x4558,	// (0x00051150) popup_cale_events_window

0xc859,	// (0x00059451) popup_mup_playback_window

0x4570,	// (0x00051168) signal_pane

0xa801,	// (0x000573f9) main_browser_pane

0xa9c6,	// (0x000575be) main_burst_pane

0x4286,	// (0x00050e7e) main_calc_pane

0xc82c,	// (0x00059424) main_cale_day_pane

0x17a8,	// (0x0004e3a0) main_cale_month_pane

0xc82c,	// (0x00059424) main_cale_week_pane

0xa9c6,	// (0x000575be) main_call_pane

0xa4e1,	// (0x000570d9) main_call_poc_pane

0xa9c6,	// (0x000575be) main_camera_pane

0xa9c6,	// (0x000575be) main_chi_dic_pane

0xb1a9,	// (0x00057da1) main_clock_pane

0xa4e1,	// (0x000570d9) main_fmradio_pane

0xa9c6,	// (0x000575be) main_graph_messa_pane

0xa4e1,	// (0x000570d9) main_help_pane

0xa801,	// (0x000573f9) main_im_pane

0xa73c,	// (0x00057334) main_image_pane_ParamLimits

0xa73c,	// (0x00057334) main_image_pane

0xa4e1,	// (0x000570d9) main_location2_pane

0xa9c6,	// (0x000575be) main_location_pane

0xa73c,	// (0x00057334) main_messa_pane

0xa4e1,	// (0x000570d9) main_mp2_pane

0xa9c6,	// (0x000575be) main_mp_pane

0xa4e1,	// (0x000570d9) main_msg_pane

0xa4e1,	// (0x000570d9) main_mup_eq_pane

0xa4e1,	// (0x000570d9) main_mup_pane

0xa801,	// (0x000573f9) main_notes_pane

0xa4e1,	// (0x000570d9) main_pec_pane

0xa4e1,	// (0x000570d9) main_phob_pane

0xa4e1,	// (0x000570d9) main_pinb_pane

0xa4e1,	// (0x000570d9) main_postcard_pane

0xa4e1,	// (0x000570d9) main_qdial_pane

0xa9c6,	// (0x000575be) main_skin_pane

0xa4e1,	// (0x000570d9) main_smil2_pane

0xa9c6,	// (0x000575be) main_smil_pane

0xa9c6,	// (0x000575be) main_video_pane

0xa9c6,	// (0x000575be) main_video_tele_pane

0xa73c,	// (0x00057334) main_viewer_pane_ParamLimits

0xa73c,	// (0x00057334) main_viewer_pane

0xa9c6,	// (0x000575be) main_vorec_pane

0x42da,	// (0x00050ed2) popup_blid_sat_info_window_ParamLimits

0x42da,	// (0x00050ed2) popup_blid_sat_info_window

0x4332,	// (0x00050f2a) popup_dyc_status_message_window_ParamLimits

0x4332,	// (0x00050f2a) popup_dyc_status_message_window

0x434c,	// (0x00050f44) popup_grid_large_graphic_window_ParamLimits

0x434c,	// (0x00050f44) popup_grid_large_graphic_window

0x4408,	// (0x00051000) popup_loc_request_window_ParamLimits

0x4408,	// (0x00051000) popup_loc_request_window

0x44fe,	// (0x000510f6) popup_wml_address_window_ParamLimits

0x44fe,	// (0x000510f6) popup_wml_address_window

0x40c0,	// (0x00050cb8) call_muted_g1

0x3d75,	// (0x0005096d) popup_call_audio_conf_window_ParamLimits

0x3d75,	// (0x0005096d) popup_call_audio_conf_window

0x40d4,	// (0x00050ccc) popup_call_audio_first_window_ParamLimits

0x40d4,	// (0x00050ccc) popup_call_audio_first_window

0x414a,	// (0x00050d42) popup_call_audio_in_window_ParamLimits

0x414a,	// (0x00050d42) popup_call_audio_in_window

0x4186,	// (0x00050d7e) popup_call_audio_out_window_ParamLimits

0x4186,	// (0x00050d7e) popup_call_audio_out_window

0x41c0,	// (0x00050db8) popup_call_audio_second_window_ParamLimits

0x41c0,	// (0x00050db8) popup_call_audio_second_window

0x4216,	// (0x00050e0e) popup_call_audio_wait_window_ParamLimits

0x4216,	// (0x00050e0e) popup_call_audio_wait_window

0x424b,	// (0x00050e43) popup_number_entry_window_ParamLimits

0x424b,	// (0x00050e43) popup_number_entry_window

0x9768,	// (0x00056360) bg_popup_call_pane_cp05_ParamLimits

0x9768,	// (0x00056360) bg_popup_call_pane_cp05

0x9788,	// (0x00056380) popup_number_entry_window_t1

0x979b,	// (0x00056393) popup_number_entry_window_t2

0x97ad,	// (0x000563a5) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005bcc2) popup_number_entry_window_t

0x97bf,	// (0x000563b7) text_title_cp2

0x97d2,	// (0x000563ca) bg_popup_call_pane_cp_ParamLimits

0x97d2,	// (0x000563ca) bg_popup_call_pane_cp

0x97e0,	// (0x000563d8) call_thumbnail_pane

0x97e8,	// (0x000563e0) popup_call_audio_in_window_g1_ParamLimits

0x97e8,	// (0x000563e0) popup_call_audio_in_window_g1

0x97f4,	// (0x000563ec) popup_call_audio_in_window_g2_ParamLimits

0x97f4,	// (0x000563ec) popup_call_audio_in_window_g2

0x9800,	// (0x000563f8) popup_call_audio_in_window_g3_ParamLimits

0x9800,	// (0x000563f8) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005bccb) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005bccb) popup_call_audio_in_window_g

0x980c,	// (0x00056404) popup_call_audio_in_window_t1_ParamLimits

0x980c,	// (0x00056404) popup_call_audio_in_window_t1

0x9828,	// (0x00056420) popup_call_audio_in_window_t2_ParamLimits

0x9828,	// (0x00056420) popup_call_audio_in_window_t2

0x9844,	// (0x0005643c) popup_call_audio_in_window_t3_ParamLimits

0x9844,	// (0x0005643c) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005bcd2) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005bcd2) popup_call_audio_in_window_t

0x97d2,	// (0x000563ca) bg_popup_call_pane_cp01_ParamLimits

0x97d2,	// (0x000563ca) bg_popup_call_pane_cp01

0x97e0,	// (0x000563d8) call_thumbnail_pane_cp02

0x9857,	// (0x0005644f) call_type_pane_cp022

0x985f,	// (0x00056457) popup_call_audio_out_window_g1_ParamLimits

0x985f,	// (0x00056457) popup_call_audio_out_window_g1

0x9871,	// (0x00056469) popup_call_audio_out_window_g2_ParamLimits

0x9871,	// (0x00056469) popup_call_audio_out_window_g2

0x987d,	// (0x00056475) popup_call_audio_out_window_g3_ParamLimits

0x987d,	// (0x00056475) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005bcd9) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005bcd9) popup_call_audio_out_window_g

0x988f,	// (0x00056487) popup_call_audio_out_window_t1_ParamLimits

0x988f,	// (0x00056487) popup_call_audio_out_window_t1

0x98a7,	// (0x0005649f) popup_call_audio_out_window_t2_ParamLimits

0x98a7,	// (0x0005649f) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005bce0) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005bce0) popup_call_audio_out_window_t

0x98bc,	// (0x000564b4) bg_popup_call_pane_ParamLimits

0x98bc,	// (0x000564b4) bg_popup_call_pane

0x131c,	// (0x0004df14) call_thumbnail_pane_cp_ParamLimits

0x131c,	// (0x0004df14) call_thumbnail_pane_cp

0x9940,	// (0x00056538) call_type_pane_cp01_ParamLimits

0x9940,	// (0x00056538) call_type_pane_cp01

0x9984,	// (0x0005657c) popup_call_audio_first_window_g1_ParamLimits

0x9984,	// (0x0005657c) popup_call_audio_first_window_g1

0x99d0,	// (0x000565c8) popup_call_audio_first_window_g2_ParamLimits

0x99d0,	// (0x000565c8) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005bce5) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005bce5) popup_call_audio_first_window_g

0x9a14,	// (0x0005660c) popup_call_audio_first_window_t1_ParamLimits

0x9a14,	// (0x0005660c) popup_call_audio_first_window_t1

0x9ac0,	// (0x000566b8) popup_call_audio_first_window_t4_ParamLimits

0x9ac0,	// (0x000566b8) popup_call_audio_first_window_t4

0xa4b2,	// (0x000570aa) popup_call_audio_first_window_t5_ParamLimits

0xa4b2,	// (0x000570aa) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005bcea) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005bcea) popup_call_audio_first_window_t

0xa4e1,	// (0x000570d9) bg_popup_call_pane_cp02

0xa4eb,	// (0x000570e3) call_type_pane_cp023

0xa4f3,	// (0x000570eb) popup_call_audio_wait_window_g1

0xa4fb,	// (0x000570f3) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005bcf1) popup_call_audio_wait_window_g

0xa503,	// (0x000570fb) popup_call_audio_wait_window_t3

0xa511,	// (0x00057109) bg_popup_call_pane_cp03_ParamLimits

0xa511,	// (0x00057109) bg_popup_call_pane_cp03

0xa571,	// (0x00057169) call_thumbnail_pane_cp011_ParamLimits

0xa571,	// (0x00057169) call_thumbnail_pane_cp011

0xa57d,	// (0x00057175) call_type_pane_cp034_ParamLimits

0xa57d,	// (0x00057175) call_type_pane_cp034

0xa5b9,	// (0x000571b1) popup_call_audio_second_window_g1_ParamLimits

0xa5b9,	// (0x000571b1) popup_call_audio_second_window_g1

0xa5f5,	// (0x000571ed) popup_call_audio_second_window_g2_ParamLimits

0xa5f5,	// (0x000571ed) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005bcf6) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005bcf6) popup_call_audio_second_window_g

0xa631,	// (0x00057229) popup_call_audio_second_window_t1_ParamLimits

0xa631,	// (0x00057229) popup_call_audio_second_window_t1

0xa6b2,	// (0x000572aa) popup_call_audio_second_window_t2_ParamLimits

0xa6b2,	// (0x000572aa) popup_call_audio_second_window_t2

0xa6e8,	// (0x000572e0) popup_call_audio_second_window_t3_ParamLimits

0xa6e8,	// (0x000572e0) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005bcfb) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005bcfb) popup_call_audio_second_window_t

0xa4e1,	// (0x000570d9) bg_popup_call_pane_cp04

0xa71e,	// (0x00057316) list_conf_pane

0xa726,	// (0x0005731e) popup_call_audio_conf_window_t1

0xa734,	// (0x0005732c) call_thumbnail_pane_g1

0xa73c,	// (0x00057334) bg_pinb_pane_ParamLimits

0xa73c,	// (0x00057334) bg_pinb_pane

0xa74a,	// (0x00057342) find_pinb_pane

0xa753,	// (0x0005734b) listscroll_pinb_pane_ParamLimits

0xa753,	// (0x0005734b) listscroll_pinb_pane

0xa762,	// (0x0005735a) pinb_bg_pane_g1

0x1340,	// (0x0004df38) pinb_bg_pane_g2

0x134c,	// (0x0004df44) pinb_bg_pane_g3

0x1358,	// (0x0004df50) pinb_bg_pane_g4

0x1364,	// (0x0004df5c) pinb_bg_pane_g5

0x1370,	// (0x0004df68) pinb_bg_pane_g6

0x137b,	// (0x0004df73) pinb_bg_pane_g7

0x1386,	// (0x0004df7e) pinb_bg_pane_g8

0x1391,	// (0x0004df89) pinb_bg_pane_g9

0x139b,	// (0x0004df93) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005bd02) pinb_bg_pane_g

0x13b8,	// (0x0004dfb0) grid_pinb_pane

0x13c1,	// (0x0004dfb9) list_pinb_pane

0x13ca,	// (0x0004dfc2) scroll_pane_cp01_ParamLimits

0x13ca,	// (0x0004dfc2) scroll_pane_cp01

0xa76c,	// (0x00057364) find_pinb_pane_g1_ParamLimits

0xa76c,	// (0x00057364) find_pinb_pane_g1

0xa784,	// (0x0005737c) find_pinb_pane_t1

0xa796,	// (0x0005738e) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005bd1c) find_pinb_pane_t

0xa7ab,	// (0x000573a3) input_focus_pane_cp01_ParamLimits

0xa7ab,	// (0x000573a3) input_focus_pane_cp01

0x13dc,	// (0x0004dfd4) cell_pinb_pane_ParamLimits

0x13dc,	// (0x0004dfd4) cell_pinb_pane

0x1405,	// (0x0004dffd) cell_pinb_pane_g1_ParamLimits

0x1405,	// (0x0004dffd) cell_pinb_pane_g1

0x1415,	// (0x0004e00d) cell_pinb_pane_g2_ParamLimits

0x1415,	// (0x0004e00d) cell_pinb_pane_g2

0xa7b7,	// (0x000573af) cell_pinb_pane_g3_ParamLimits

0xa7b7,	// (0x000573af) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005bd21) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005bd21) cell_pinb_pane_g

0xa4e1,	// (0x000570d9) grid_highlight_pane_cp01

0x1421,	// (0x0004e019) list_pinb_item_pane_ParamLimits

0x1421,	// (0x0004e019) list_pinb_item_pane

0xa4e1,	// (0x000570d9) list_highlight_pane_cp02

0x1433,	// (0x0004e02b) list_pinb_item_pane_g1_ParamLimits

0x1433,	// (0x0004e02b) list_pinb_item_pane_g1

0x1440,	// (0x0004e038) list_pinb_item_pane_g2_ParamLimits

0x1440,	// (0x0004e038) list_pinb_item_pane_g2

0x144c,	// (0x0004e044) list_pinb_item_pane_g3_ParamLimits

0x144c,	// (0x0004e044) list_pinb_item_pane_g3

0x145d,	// (0x0004e055) list_pinb_item_pane_g4_ParamLimits

0x145d,	// (0x0004e055) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005bd28) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005bd28) list_pinb_item_pane_g

0x1469,	// (0x0004e061) list_pinb_item_pane_t1_ParamLimits

0x1469,	// (0x0004e061) list_pinb_item_pane_t1

0x149e,	// (0x0004e096) calc_display_pane

0x14c6,	// (0x0004e0be) calc_paper_pane

0x14e9,	// (0x0004e0e1) grid_calc_pane

0xa4e1,	// (0x000570d9) bg_list_pane_cp01

0x1517,	// (0x0004e10f) clock_g1

0x151f,	// (0x0004e117) clock_g2

0x0001,

0xf139,	// (0x0005bd31) clock_g

0x1527,	// (0x0004e11f) clock_t1_ParamLimits

0x1527,	// (0x0004e11f) clock_t1

0x153c,	// (0x0004e134) clock_t2_ParamLimits

0x153c,	// (0x0004e134) clock_t2

0x154e,	// (0x0004e146) clock_t3_ParamLimits

0x154e,	// (0x0004e146) clock_t3

0x1560,	// (0x0004e158) clock_t4_ParamLimits

0x1560,	// (0x0004e158) clock_t4

0x1572,	// (0x0004e16a) clock_t5_ParamLimits

0x1572,	// (0x0004e16a) clock_t5

0x1587,	// (0x0004e17f) clock_t6_ParamLimits

0x1587,	// (0x0004e17f) clock_t6

0x1599,	// (0x0004e191) clock_t7_ParamLimits

0x1599,	// (0x0004e191) clock_t7

0x15ab,	// (0x0004e1a3) clock_t8_ParamLimits

0x15ab,	// (0x0004e1a3) clock_t8

0x15bf,	// (0x0004e1b7) clock_t9_ParamLimits

0x15bf,	// (0x0004e1b7) clock_t9

0x0008,

0xf13e,	// (0x0005bd36) clock_t_ParamLimits

0xf13e,	// (0x0005bd36) clock_t

0xa7c3,	// (0x000573bb) popup_clock_analogue_window_cp02

0xa7c3,	// (0x000573bb) popup_clock_digital_window_cp01

0xa7cb,	// (0x000573c3) listscroll_help_pane

0xa4e1,	// (0x000570d9) phob_pre_status_pane

0xa7d5,	// (0x000573cd) grid_qdial_pane

0xa73c,	// (0x00057334) listscroll_mce_pane

0xa73c,	// (0x00057334) bg_notes_pane

0xa7df,	// (0x000573d7) list_notes_pane

0x15d3,	// (0x0004e1cb) scroll_pane_cp06

0xa7ed,	// (0x000573e5) bg_calc_paper_pane

0x9b54,	// (0x0005674c) list_calc_pane

0xa801,	// (0x000573f9) bg_calc_display_pane

0x15e7,	// (0x0004e1df) calc_display_pane_t1

0x15f9,	// (0x0004e1f1) calc_display_pane_t2

0x9b6e,	// (0x00056766) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005bd49) calc_display_pane_t

0x160b,	// (0x0004e203) cell_calc_pane_ParamLimits

0x160b,	// (0x0004e203) cell_calc_pane

0xa80d,	// (0x00057405) bg_calc_paper_pane_g1

0xa819,	// (0x00057411) bg_calc_paper_pane_g2

0xa825,	// (0x0005741d) bg_calc_paper_pane_g3

0xa831,	// (0x00057429) bg_calc_paper_pane_g4

0xa83d,	// (0x00057435) bg_calc_paper_pane_g5

0x1640,	// (0x0004e238) bg_calc_paper_pane_g6

0x164f,	// (0x0004e247) bg_calc_paper_pane_g7

0x165e,	// (0x0004e256) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005bd50) bg_calc_paper_pane_g

0x1671,	// (0x0004e269) calc_bg_paper_pane_g9

0x1684,	// (0x0004e27c) list_calc_item_pane_ParamLimits

0x1684,	// (0x0004e27c) list_calc_item_pane

0xa849,	// (0x00057441) list_calc_item_pane_g1

0x9b80,	// (0x00056778) list_calc_item_pane_t1_ParamLimits

0x9b80,	// (0x00056778) list_calc_item_pane_t1

0x1699,	// (0x0004e291) list_calc_item_pane_t2_ParamLimits

0x1699,	// (0x0004e291) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005bd61) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005bd61) list_calc_item_pane_t

0xa856,	// (0x0005744e) cell_calc_pane_g1

0xa860,	// (0x00057458) grid_highlight_pane_cp02

0x16cb,	// (0x0004e2c3) bg_calc_display_pane_g1

0x16d4,	// (0x0004e2cc) bg_calc_display_pane_g2

0x16de,	// (0x0004e2d6) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005bd6b) bg_calc_display_pane_g

0x16e7,	// (0x0004e2df) cell_qdial_pane_ParamLimits

0x16e7,	// (0x0004e2df) cell_qdial_pane

0x16fb,	// (0x0004e2f3) cell_qdial_pane_g1_ParamLimits

0x16fb,	// (0x0004e2f3) cell_qdial_pane_g1

0x1711,	// (0x0004e309) cell_qdial_pane_g2_ParamLimits

0x1711,	// (0x0004e309) cell_qdial_pane_g2

0xa882,	// (0x0005747a) cell_qdial_pane_g3_ParamLimits

0xa882,	// (0x0005747a) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005bd72) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005bd72) cell_qdial_pane_g

0x1738,	// (0x0004e330) cell_qdial_pane_t1_ParamLimits

0x1738,	// (0x0004e330) cell_qdial_pane_t1

0x1750,	// (0x0004e348) cell_qdial_pane_t2_ParamLimits

0x1750,	// (0x0004e348) cell_qdial_pane_t2

0x1763,	// (0x0004e35b) cell_qdial_pane_t3_ParamLimits

0x1763,	// (0x0004e35b) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005bd7b) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005bd7b) cell_qdial_pane_t

0xa4e1,	// (0x000570d9) grid_highlight_pane_cp04

0xa88e,	// (0x00057486) thumbnail_qdial_pane_ParamLimits

0xa88e,	// (0x00057486) thumbnail_qdial_pane

0xa8ea,	// (0x000574e2) list_help_pane

0xa8f3,	// (0x000574eb) scroll_pane_cp02

0x1776,	// (0x0004e36e) help_list_pane_t1_ParamLimits

0x1776,	// (0x0004e36e) help_list_pane_t1

0x9b92,	// (0x0005678a) bg_notes_pane_g2

0x9b9a,	// (0x00056792) bg_notes_pane_g3

0x9ba2,	// (0x0005679a) notes_bg_pane_g1

0x9baa,	// (0x000567a2) notes_bg_pane_g4

0x9bb2,	// (0x000567aa) notes_bg_pane_g5

0x9bba,	// (0x000567b2) notes_bg_pane_g6

0x9bc2,	// (0x000567ba) notes_bg_pane_g7

0x9bca,	// (0x000567c2) notes_bg_pane_g8

0x9bd2,	// (0x000567ca) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005bd99) notes_bg_pane_g

0x1793,	// (0x0004e38b) list_notes_text_pane_ParamLimits

0x1793,	// (0x0004e38b) list_notes_text_pane

0xa8fc,	// (0x000574f4) list_notes_text_pane_g1

0x016a,	// (0x0004cd62) list_notes_text_pane_t1

0x17a8,	// (0x0004e3a0) listscroll_cale_week_pane

0x17d4,	// (0x0004e3cc) bg_cale_heading_pane

0xa91f,	// (0x00057517) bg_cale_pane_cp01

0x17ec,	// (0x0004e3e4) cale_week_corner_pane

0x180b,	// (0x0004e403) cale_week_day_heading_pane

0x1828,	// (0x0004e420) cale_week_scroll_pane_g1

0x183b,	// (0x0004e433) cale_week_scroll_pane_g2

0x1853,	// (0x0004e44b) cale_week_scroll_pane_g3

0x186b,	// (0x0004e463) cale_week_scroll_pane_g4

0x1883,	// (0x0004e47b) cale_week_scroll_pane_g5

0x18a3,	// (0x0004e49b) cale_week_scroll_pane_g6

0x18c3,	// (0x0004e4bb) cale_week_scroll_pane_g7

0x18e3,	// (0x0004e4db) cale_week_scroll_pane_g8

0x1907,	// (0x0004e4ff) cale_week_scroll_pane_g9

0x191f,	// (0x0004e517) cale_week_scroll_pane_g10

0x1937,	// (0x0004e52f) cale_week_scroll_pane_g11

0x194f,	// (0x0004e547) cale_week_scroll_pane_g12

0x1967,	// (0x0004e55f) cale_week_scroll_pane_g13

0x1967,	// (0x0004e55f) cale_week_scroll_pane_g14

0x1967,	// (0x0004e55f) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005bda8) cale_week_scroll_pane_g

0x19a3,	// (0x0004e59b) cale_week_time_pane

0x19c7,	// (0x0004e5bf) grid_cale_week_pane

0xa94e,	// (0x00057546) scroll_pane_cp08

0x19ed,	// (0x0004e5e5) cell_cale_week_pane_ParamLimits

0x19ed,	// (0x0004e5e5) cell_cale_week_pane

0x1a7b,	// (0x0004e673) cale_week_day_heading_pane_t1

0x1ac0,	// (0x0004e6b8) cale_week_day_heading_pane_t2

0x1b0a,	// (0x0004e702) cale_week_day_heading_pane_t3

0x1b54,	// (0x0004e74c) cale_week_day_heading_pane_t4

0x1b9e,	// (0x0004e796) cale_week_day_heading_pane_t5

0x1bf0,	// (0x0004e7e8) cale_week_day_heading_pane_t6

0x1c42,	// (0x0004e83a) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005bdc9) cale_week_day_heading_pane_t

0xa96b,	// (0x00057563) bg_cale_side_pane

0x1c87,	// (0x0004e87f) cale_week_time_pane_t1

0x1ca1,	// (0x0004e899) cale_week_time_pane_t2

0x1cbb,	// (0x0004e8b3) cale_week_time_pane_t3

0x1cd5,	// (0x0004e8cd) cale_week_time_pane_t4

0x1cef,	// (0x0004e8e7) cale_week_time_pane_t5

0x1d09,	// (0x0004e901) cale_week_time_pane_t6

0x1d23,	// (0x0004e91b) cale_week_time_pane_t7

0x1d3d,	// (0x0004e935) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005bdd8) cale_week_time_pane_t

0x1d5d,	// (0x0004e955) cell_cale_week_pane_g2

0x1d7c,	// (0x0004e974) cell_cale_week_pane_g3_ParamLimits

0x1d7c,	// (0x0004e974) cell_cale_week_pane_g3

0xa979,	// (0x00057571) grid_highlight_pane_cp07

0xa981,	// (0x00057579) listscroll_gms_pane

0xa98b,	// (0x00057583) grid_gms_pane

0xa994,	// (0x0005758c) listscroll_gms_pane_g1

0xa99c,	// (0x00057594) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005bde9) listscroll_gms_pane_g

0x1d94,	// (0x0004e98c) scroll_pane_cp010

0x1d9f,	// (0x0004e997) cell_gms_pane_ParamLimits

0x1d9f,	// (0x0004e997) cell_gms_pane

0x1db2,	// (0x0004e9aa) cell_gms_pane_g1

0xa9a4,	// (0x0005759c) cell_gms_pane_g2

0xa9ac,	// (0x000575a4) cell_gms_pane_g3

0xa9b5,	// (0x000575ad) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005bdee) cell_gms_pane_g

0xa9be,	// (0x000575b6) grid_highlight_pane_cp09

0x406a,	// (0x00050c62) phob_pre_status_pane_g1

0x4072,	// (0x00050c6a) phob_pre_status_pane_g2

0x407a,	// (0x00050c72) phob_pre_status_pane_g3

0x4082,	// (0x00050c7a) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0005c1d9) phob_pre_status_pane_g

0x4092,	// (0x00050c8a) phob_pre_status_pane_t1

0x40a0,	// (0x00050c98) phob_pre_status_pane_t2

0x40b0,	// (0x00050ca8) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0005c1e4) phob_pre_status_pane_t

0xa9c6,	// (0x000575be) bg_list_pane_cp05

0x1dc2,	// (0x0004e9ba) grid_vorec_pane

0x1dca,	// (0x0004e9c2) vorec_t1

0x1dd8,	// (0x0004e9d0) vorec_t2

0x1de6,	// (0x0004e9de) vorec_t3

0x1df4,	// (0x0004e9ec) vorec_t4

0x96da,	// (0x000562d2) vorec_t5

0x96e8,	// (0x000562e0) vorec_t6

0x0004,

0xf1ff,	// (0x0005bdf7) vorec_t

0x96f6,	// (0x000562ee) wait_bar_pane_cp01

0x1e10,	// (0x0004ea08) cell_vorec_pane_ParamLimits

0x1e10,	// (0x0004ea08) cell_vorec_pane

0x9bda,	// (0x000567d2) cell_vorec_pane_g1

0xa4e1,	// (0x000570d9) grid_highlight_pane_cp05

0x1e38,	// (0x0004ea30) cams_zoom_pane

0x1e47,	// (0x0004ea3f) image_vga_pane

0x1e61,	// (0x0004ea59) main_camera_pane_g1

0x1e73,	// (0x0004ea6b) main_camera_pane_g2

0x1e83,	// (0x0004ea7b) main_camera_pane_g3

0x1e93,	// (0x0004ea8b) main_camera_pane_g4

0x1ea3,	// (0x0004ea9b) main_camera_pane_g5

0x1eb3,	// (0x0004eaab) main_camera_pane_g6

0x1ec5,	// (0x0004eabd) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005be02) main_camera_pane_g

0x1ed5,	// (0x0004eacd) main_camera_pane_t1

0x1eeb,	// (0x0004eae3) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005be13) main_camera_pane_t

0x1f25,	// (0x0004eb1d) cams_zoom_pane_cp_ParamLimits

0x1f25,	// (0x0004eb1d) cams_zoom_pane_cp

0x1f4d,	// (0x0004eb45) image_cif_pane_ParamLimits

0x1f4d,	// (0x0004eb45) image_cif_pane

0x1f83,	// (0x0004eb7b) image_subqcif_pane

0x1f8b,	// (0x0004eb83) main_video_pane_g1_ParamLimits

0x1f8b,	// (0x0004eb83) main_video_pane_g1

0x1faf,	// (0x0004eba7) main_video_pane_g2_ParamLimits

0x1faf,	// (0x0004eba7) main_video_pane_g2

0x1fe3,	// (0x0004ebdb) main_video_pane_g3_ParamLimits

0x1fe3,	// (0x0004ebdb) main_video_pane_g3

0x2011,	// (0x0004ec09) main_video_pane_g4_ParamLimits

0x2011,	// (0x0004ec09) main_video_pane_g4

0x203f,	// (0x0004ec37) main_video_pane_g5_ParamLimits

0x203f,	// (0x0004ec37) main_video_pane_g5

0xa9da,	// (0x000575d2) main_video_pane_g6_ParamLimits

0xa9da,	// (0x000575d2) main_video_pane_g6

0x0006,

0xf220,	// (0x0005be18) main_video_pane_g_ParamLimits

0xf220,	// (0x0005be18) main_video_pane_g

0x2068,	// (0x0004ec60) main_video_pane_t1_ParamLimits

0x2068,	// (0x0004ec60) main_video_pane_t1

0xa9f4,	// (0x000575ec) cams_zoom_pane_g1

0xa9fd,	// (0x000575f5) cams_zoom_pane_g2

0xaa06,	// (0x000575fe) cams_zoom_pane_g3

0xaa0f,	// (0x00057607) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005be27) cams_zoom_pane_g

0x20c5,	// (0x0004ecbd) grid_cams_pane

0x20df,	// (0x0004ecd7) linegrid_cams_pane

0x20f3,	// (0x0004eceb) cell_cams_pane_ParamLimits

0x20f3,	// (0x0004eceb) cell_cams_pane

0xaa18,	// (0x00057610) cams_burst_image_pane

0xaa20,	// (0x00057618) cell_cams_pane_g1

0xa4e1,	// (0x000570d9) grid_highlight_pane_cp03

0xa856,	// (0x0005744e) mp_bg_pane_g1

0xa4e1,	// (0x000570d9) bg_list_pane_cp03

0xc751,	// (0x00059349) bg_mp_pane

0xc759,	// (0x00059351) grid_mp_pane

0xc761,	// (0x00059359) media_player_g1

0xc769,	// (0x00059361) media_player_t1

0xc777,	// (0x0005936f) media_player_t2

0xc785,	// (0x0005937d) media_player_t3

0xc793,	// (0x0005938b) media_player_t4

0xc7a1,	// (0x00059399) media_player_t5

0xc7af,	// (0x000593a7) media_player_t6

0xc7bd,	// (0x000593b5) media_player_t7

0x0006,

0xf5cb,	// (0x0005c1c3) media_player_t

0xc7cb,	// (0x000593c3) wait_bar_pane_cp02

0xf5b0,	// (0x0005c1a8) main_usb_pane_t

0x4061,	// (0x00050c59) cell_mp_pane

0xa856,	// (0x0005744e) cell_mp_pane_g1

0xa4e1,	// (0x000570d9) grid_highlight_pane_cp06

0xaa28,	// (0x00057620) grid_skin_colour_pane

0xaa30,	// (0x00057628) list_highlight_pane_cp03

0x2113,	// (0x0004ed0b) skin_g1

0xaa38,	// (0x00057630) skin_t1

0xaa47,	// (0x0005763f) skin_t2

0x0001,

0xf264,	// (0x0005be5c) skin_t

0x211b,	// (0x0004ed13) cell_skin_colour_pane_ParamLimits

0x211b,	// (0x0004ed13) cell_skin_colour_pane

0xaa55,	// (0x0005764d) cell_skin_colour_pane_g1

0x2194,	// (0x0004ed8c) call_video_g1_ParamLimits

0x2194,	// (0x0004ed8c) call_video_g1

0x21b0,	// (0x0004eda8) call_video_g2_ParamLimits

0x21b0,	// (0x0004eda8) call_video_g2

0x0001,

0xf269,	// (0x0005be61) call_video_g_ParamLimits

0xf269,	// (0x0005be61) call_video_g

0x2202,	// (0x0004edfa) call_video_uplink_pane_cp1_ParamLimits

0x2202,	// (0x0004edfa) call_video_uplink_pane_cp1

0xaa67,	// (0x0005765f) call_video_uplink_pane_cp2

0x22a1,	// (0x0004ee99) video_down_crop_pane_ParamLimits

0x22a1,	// (0x0004ee99) video_down_crop_pane

0x2398,	// (0x0004ef90) video_down_pane_ParamLimits

0x2398,	// (0x0004ef90) video_down_pane

0xaa6f,	// (0x00057667) video_down_subqcif_pane_ParamLimits

0xaa6f,	// (0x00057667) video_down_subqcif_pane

0xaa87,	// (0x0005767f) video_down_subqcif_pane_cp_ParamLimits

0xaa87,	// (0x0005767f) video_down_subqcif_pane_cp

0xaaad,	// (0x000576a5) im_reading_pane_ParamLimits

0xaaad,	// (0x000576a5) im_reading_pane

0x24a6,	// (0x0004f09e) im_writing_pane_ParamLimits

0x24a6,	// (0x0004f09e) im_writing_pane

0x24bc,	// (0x0004f0b4) im_reading_pane_t1

0xaac7,	// (0x000576bf) list_im_pane

0xaad8,	// (0x000576d0) scroll_pane_cp07

0x24f5,	// (0x0004f0ed) im_writing_pane_t1_ParamLimits

0x24f5,	// (0x0004f0ed) im_writing_pane_t1

0xaaf1,	// (0x000576e9) im_writing_pane_t2_ParamLimits

0xaaf1,	// (0x000576e9) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005be6b) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005be6b) im_writing_pane_t

0xa4e1,	// (0x000570d9) input_focus_pane_cp04

0xa4e1,	// (0x000570d9) input_focus_pane_cp05

0x250a,	// (0x0004f102) list_im_single_pane_ParamLimits

0x250a,	// (0x0004f102) list_im_single_pane

0x251e,	// (0x0004f116) list_single_im_pane_t1

0x4021,	// (0x00050c19) blid_accuracy_pane

0x4029,	// (0x00050c21) blid_compass_pane

0x4033,	// (0x00050c2b) main_location_t1

0x4043,	// (0x00050c3b) main_location_t2

0x4053,	// (0x00050c4b) main_location_t3

0x0002,

0xf5da,	// (0x0005c1d2) main_location_t

0xa4e1,	// (0x000570d9) aid_levels_location

0xa856,	// (0x0005744e) blid_accuracy_pane_g1

0xa856,	// (0x0005744e) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005becd) blid_accuracy_pane_g

0xab39,	// (0x00057731) wml_content_pane

0xab77,	// (0x0005776f) wml_button_pane_ParamLimits

0xab77,	// (0x0005776f) wml_button_pane

0x252d,	// (0x0004f125) wml_list_single_large_pane_ParamLimits

0x252d,	// (0x0004f125) wml_list_single_large_pane

0x2542,	// (0x0004f13a) wml_list_single_medium_pane_ParamLimits

0x2542,	// (0x0004f13a) wml_list_single_medium_pane

0x2558,	// (0x0004f150) wml_list_single_small_pane_ParamLimits

0x2558,	// (0x0004f150) wml_list_single_small_pane

0xab8b,	// (0x00057783) wml_selection_box_pane_ParamLimits

0xab8b,	// (0x00057783) wml_selection_box_pane

0xab9e,	// (0x00057796) wml_list_single_pane_t1

0xabad,	// (0x000577a5) wml_list_single_medium_pane_t1

0xabbc,	// (0x000577b4) wml_list_single_large_pane_t1

0xabcb,	// (0x000577c3) input_focus_pane_cp02_ParamLimits

0xabcb,	// (0x000577c3) input_focus_pane_cp02

0xabde,	// (0x000577d6) wml_selection_box_pane_g1

0xabe7,	// (0x000577df) wml_selection_box_pane_t1_ParamLimits

0xabe7,	// (0x000577df) wml_selection_box_pane_t1

0xa73c,	// (0x00057334) bg_wml_button_pane_ParamLimits

0xa73c,	// (0x00057334) bg_wml_button_pane

0xabff,	// (0x000577f7) wml_button_pane_g1

0xac07,	// (0x000577ff) wml_button_pane_t1

0xabff,	// (0x000577f7) wml_button_bg_pane_g1

0xac17,	// (0x0005780f) wml_button_bg_pane_g2

0xac1f,	// (0x00057817) wml_button_bg_pane_g3

0xac27,	// (0x0005781f) wml_button_bg_pane_g4

0xac2f,	// (0x00057827) wml_button_bg_pane_g5

0xac37,	// (0x0005782f) wml_button_bg_pane_g6

0xac3f,	// (0x00057837) wml_button_bg_pane_g7

0xac47,	// (0x0005783f) wml_button_bg_pane_g8

0xac4f,	// (0x00057847) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005be70) wml_button_bg_pane_g

0x2570,	// (0x0004f168) bg_list_pane_cp02

0xac57,	// (0x0005784f) mce_header_pane_ParamLimits

0xac57,	// (0x0005784f) mce_header_pane

0xac6d,	// (0x00057865) mce_icon_pane

0xac6d,	// (0x00057865) mce_image_pane

0xac76,	// (0x0005786e) mce_text_pane_ParamLimits

0xac76,	// (0x0005786e) mce_text_pane

0x2578,	// (0x0004f170) scroll_pane_cp03

0xab6f,	// (0x00057767) scroll_pane_cp04

0xac89,	// (0x00057881) scroll_pane_cp05_ParamLimits

0xac89,	// (0x00057881) scroll_pane_cp05

0x2582,	// (0x0004f17a) mce_header_field_pane_ParamLimits

0x2582,	// (0x0004f17a) mce_header_field_pane

0x2599,	// (0x0004f191) mce_header_field_pane_2_ParamLimits

0x2599,	// (0x0004f191) mce_header_field_pane_2

0x25af,	// (0x0004f1a7) mce_header_field_pane_3

0x25b7,	// (0x0004f1af) list_single_mce_message_pane_ParamLimits

0x25b7,	// (0x0004f1af) list_single_mce_message_pane

0x25cc,	// (0x0004f1c4) list_single_mce_smart_pane_ParamLimits

0x25cc,	// (0x0004f1c4) list_single_mce_smart_pane

0xac95,	// (0x0005788d) input_focus_pane_cp03

0xac9e,	// (0x00057896) list_header_data_pane

0x25ec,	// (0x0004f1e4) mce_header_field_pane_t1

0x25fc,	// (0x0004f1f4) list_single_mce_header_pane_ParamLimits

0x25fc,	// (0x0004f1f4) list_single_mce_header_pane

0xaca6,	// (0x0005789e) list_single_mce_header_pane_t1

0xacb5,	// (0x000578ad) list_single_mce_message_pane_g1

0xacbd,	// (0x000578b5) list_single_mce_message_pane_t1

0x2636,	// (0x0004f22e) bg_cale_heading_pane_cp01_ParamLimits

0x2636,	// (0x0004f22e) bg_cale_heading_pane_cp01

0xaccb,	// (0x000578c3) bg_cale_pane_cp02_ParamLimits

0xaccb,	// (0x000578c3) bg_cale_pane_cp02

0x2665,	// (0x0004f25d) cale_month_corner_pane

0x2684,	// (0x0004f27c) cale_month_day_heading_pane_ParamLimits

0x2684,	// (0x0004f27c) cale_month_day_heading_pane

0x26cb,	// (0x0004f2c3) cale_month_pane_g1_ParamLimits

0x26cb,	// (0x0004f2c3) cale_month_pane_g1

0x26ef,	// (0x0004f2e7) cale_month_pane_g2_ParamLimits

0x26ef,	// (0x0004f2e7) cale_month_pane_g2

0x271f,	// (0x0004f317) cale_month_pane_g3_ParamLimits

0x271f,	// (0x0004f317) cale_month_pane_g3

0x275b,	// (0x0004f353) cale_month_pane_g4_ParamLimits

0x275b,	// (0x0004f353) cale_month_pane_g4

0x2797,	// (0x0004f38f) cale_month_pane_g5_ParamLimits

0x2797,	// (0x0004f38f) cale_month_pane_g5

0x27df,	// (0x0004f3d7) cale_month_pane_g6_ParamLimits

0x27df,	// (0x0004f3d7) cale_month_pane_g6

0x282b,	// (0x0004f423) cale_month_pane_g7_ParamLimits

0x282b,	// (0x0004f423) cale_month_pane_g7

0x287f,	// (0x0004f477) cale_month_pane_g8_ParamLimits

0x287f,	// (0x0004f477) cale_month_pane_g8

0x28d3,	// (0x0004f4cb) cale_month_pane_g9_ParamLimits

0x28d3,	// (0x0004f4cb) cale_month_pane_g9

0x2925,	// (0x0004f51d) cale_month_pane_g10_ParamLimits

0x2925,	// (0x0004f51d) cale_month_pane_g10

0x2977,	// (0x0004f56f) cale_month_pane_g11_ParamLimits

0x2977,	// (0x0004f56f) cale_month_pane_g11

0x29c9,	// (0x0004f5c1) cale_month_pane_g12_ParamLimits

0x29c9,	// (0x0004f5c1) cale_month_pane_g12

0x2a1b,	// (0x0004f613) cale_month_pane_g13_ParamLimits

0x2a1b,	// (0x0004f613) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005be83) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005be83) cale_month_pane_g

0x2a6d,	// (0x0004f665) cale_month_week_pane

0x2a91,	// (0x0004f689) grid_cale_month_pane_ParamLimits

0x2a91,	// (0x0004f689) grid_cale_month_pane

0x2acf,	// (0x0004f6c7) cale_month_day_heading_pane_t1

0x2b55,	// (0x0004f74d) cale_month_day_heading_pane_t2

0x2be6,	// (0x0004f7de) cale_month_day_heading_pane_t3

0x2c77,	// (0x0004f86f) cale_month_day_heading_pane_t4

0x2d0c,	// (0x0004f904) cale_month_day_heading_pane_t5

0x2dad,	// (0x0004f9a5) cale_month_day_heading_pane_t6

0x2e4e,	// (0x0004fa46) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005be9e) cale_month_day_heading_pane_t

0xa96b,	// (0x00057563) bg_cale_side_pane_cp01

0x2ef7,	// (0x0004faef) cale_month_week_pane_t1

0x2f10,	// (0x0004fb08) cale_month_week_pane_t2

0x2f29,	// (0x0004fb21) cale_month_week_pane_t3

0x2f42,	// (0x0004fb3a) cale_month_week_pane_t4

0x2f5b,	// (0x0004fb53) cale_month_week_pane_t5

0x2f74,	// (0x0004fb6c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005bead) cale_month_week_pane_t

0x2f8d,	// (0x0004fb85) cell_cale_month_pane_ParamLimits

0x2f8d,	// (0x0004fb85) cell_cale_month_pane

0x9be4,	// (0x000567dc) cell_cale_month_pane_g1

0x30b7,	// (0x0004fcaf) cell_cale_month_pane_t1_ParamLimits

0x30b7,	// (0x0004fcaf) cell_cale_month_pane_t1

0xa979,	// (0x00057571) grid_highlight_pane_cp08

0xa856,	// (0x0005744e) main_smil_g1

0x30e3,	// (0x0004fcdb) smil_status_pane

0xad0a,	// (0x00057902) smil_text_pane

0xc671,	// (0x00059269) bg_popup_call3_rect_pane_g8

0xc679,	// (0x00059271) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005c166) bg_popup_call3_rect_pane_g

0xc8c0,	// (0x000594b8) smil_status_volume_pane_g1

0xad14,	// (0x0005790c) smil_status_pane_t1

0x9d3a,	// (0x00056932) volume_smil_pane

0xad2b,	// (0x00057923) list_smil_text_pane

0x30f6,	// (0x0004fcee) scroll_pane_cp011

0x3101,	// (0x0004fcf9) smil_text_list_pane_t1_ParamLimits

0x3101,	// (0x0004fcf9) smil_text_list_pane_t1

0x9bf0,	// (0x000567e8) aid_volume_smil_ParamLimits

0x9bf0,	// (0x000567e8) aid_volume_smil

0xa856,	// (0x0005744e) smil_volume_pane_g1

0xa856,	// (0x0005744e) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005becd) smil_volume_pane_g

0x17a8,	// (0x0004e3a0) listscroll_cale_day_pane

0xad35,	// (0x0005792d) bg_cale_pane

0xad4d,	// (0x00057945) list_cale_pane

0xad70,	// (0x00057968) scroll_pane_cp09

0xad81,	// (0x00057979) cale_bg_pane_g1

0xad89,	// (0x00057981) cale_bg_pane_g2

0xad91,	// (0x00057989) cale_bg_pane_g3

0xad99,	// (0x00057991) cale_bg_pane_g4

0xada1,	// (0x00057999) cale_bg_pane_g5

0xada9,	// (0x000579a1) cale_bg_pane_g6

0xadb1,	// (0x000579a9) cale_bg_pane_g7

0xadb9,	// (0x000579b1) cale_bg_pane_g8

0xadc1,	// (0x000579b9) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005bed2) cale_bg_pane_g

0x3145,	// (0x0004fd3d) list_cale_time_pane_ParamLimits

0x3145,	// (0x0004fd3d) list_cale_time_pane

0xadc9,	// (0x000579c1) list_cale_time_pane_g1_ParamLimits

0xadc9,	// (0x000579c1) list_cale_time_pane_g1

0xadd5,	// (0x000579cd) list_cale_time_pane_g2_ParamLimits

0xadd5,	// (0x000579cd) list_cale_time_pane_g2

0x315a,	// (0x0004fd52) list_cale_time_pane_g3_ParamLimits

0x315a,	// (0x0004fd52) list_cale_time_pane_g3

0x3168,	// (0x0004fd60) list_cale_time_pane_g4_ParamLimits

0x3168,	// (0x0004fd60) list_cale_time_pane_g4

0x3176,	// (0x0004fd6e) list_cale_time_pane_g5_ParamLimits

0x3176,	// (0x0004fd6e) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005bee5) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005bee5) list_cale_time_pane_g

0xadef,	// (0x000579e7) list_cale_time_pane_t1_ParamLimits

0xadef,	// (0x000579e7) list_cale_time_pane_t1

0xae17,	// (0x00057a0f) list_cale_time_pane_t2_ParamLimits

0xae17,	// (0x00057a0f) list_cale_time_pane_t2

0x33fc,	// (0x0004fff4) aid_blid_cardinal_pane

0x343a,	// (0x00050032) compass_pane_t4

0xae3f,	// (0x00057a37) list_cale_time_pane_t4_ParamLimits

0xae3f,	// (0x00057a37) list_cale_time_pane_t4

0x3448,	// (0x00050040) compass_pane_t5

0x3456,	// (0x0005004e) compass_pane_t6

0x3464,	// (0x0005005c) compass_pane_t7

0xb30a,	// (0x00057f02) navi_pane_cc_t1

0xb4e7,	// (0x000580df) aid_phob_thumbnail_center_pane

0x3a39,	// (0x00050631) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005bef2) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005bef2) list_cale_time_pane_t

0x97d2,	// (0x000563ca) bg_popup_window_pane_cp02_ParamLimits

0x97d2,	// (0x000563ca) bg_popup_window_pane_cp02

0xae67,	// (0x00057a5f) heading_pane_cp01_ParamLimits

0xae67,	// (0x00057a5f) heading_pane_cp01

0xae73,	// (0x00057a6b) loc_req_pane_ParamLimits

0xae73,	// (0x00057a6b) loc_req_pane

0xae83,	// (0x00057a7b) loc_type_pane_ParamLimits

0xae83,	// (0x00057a7b) loc_type_pane

0xae95,	// (0x00057a8d) loc_type_pane_t1_ParamLimits

0xae95,	// (0x00057a8d) loc_type_pane_t1

0xaea7,	// (0x00057a9f) loc_type_pane_t2_ParamLimits

0xaea7,	// (0x00057a9f) loc_type_pane_t2

0xaeb9,	// (0x00057ab1) loc_type_pane_t3_ParamLimits

0xaeb9,	// (0x00057ab1) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005bef9) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005bef9) loc_type_pane_t

0xaecb,	// (0x00057ac3) list_loc_req_pane

0xaed5,	// (0x00057acd) scroll_pane_cp012

0x3184,	// (0x0004fd7c) list_single_loc_request_popup_menu_pane_ParamLimits

0x3184,	// (0x0004fd7c) list_single_loc_request_popup_menu_pane

0xaee0,	// (0x00057ad8) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaee0,	// (0x00057ad8) list_single_loc_request_popup_menu_pane_g1

0xaeec,	// (0x00057ae4) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaeec,	// (0x00057ae4) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005bf00) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005bf00) list_single_loc_request_popup_menu_pane_g

0xaef8,	// (0x00057af0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaef8,	// (0x00057af0) list_single_loc_request_popup_menu_pane_t1

0xa73c,	// (0x00057334) bg_popup_window_pane_cp03_ParamLimits

0xa73c,	// (0x00057334) bg_popup_window_pane_cp03

0xaf0e,	// (0x00057b06) heading_loc_req_pane_ParamLimits

0xaf0e,	// (0x00057b06) heading_loc_req_pane

0x3191,	// (0x0004fd89) popup_dyc_status_message_window_g1_ParamLimits

0x3191,	// (0x0004fd89) popup_dyc_status_message_window_g1

0x31a5,	// (0x0004fd9d) popup_dyc_status_message_window_t1_ParamLimits

0x31a5,	// (0x0004fd9d) popup_dyc_status_message_window_t1

0x31ba,	// (0x0004fdb2) popup_dyc_status_message_window_t2_ParamLimits

0x31ba,	// (0x0004fdb2) popup_dyc_status_message_window_t2

0x31cf,	// (0x0004fdc7) popup_dyc_status_message_window_t3_ParamLimits

0x31cf,	// (0x0004fdc7) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005bf05) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005bf05) popup_dyc_status_message_window_t

0xa4e1,	// (0x000570d9) bg_heading_pane_cp01

0xaf1a,	// (0x00057b12) heading_loc_req_pane_g1

0xaf22,	// (0x00057b1a) heading_loc_req_pane_g2

0xaf2a,	// (0x00057b22) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005bf0c) heading_loc_req_pane_g

0xaf32,	// (0x00057b2a) heading_loc_req_pane_t1

0xaf41,	// (0x00057b39) bg_popup_sub_pane_cp01_ParamLimits

0xaf41,	// (0x00057b39) bg_popup_sub_pane_cp01

0xaf4f,	// (0x00057b47) popup_cale_events_window_g1_ParamLimits

0xaf4f,	// (0x00057b47) popup_cale_events_window_g1

0xaf6f,	// (0x00057b67) popup_cale_events_window_g2_ParamLimits

0xaf6f,	// (0x00057b67) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005bf40) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005bf40) popup_cale_events_window_g

0xaf8f,	// (0x00057b87) popup_cale_events_window_t1_ParamLimits

0xaf8f,	// (0x00057b87) popup_cale_events_window_t1

0xafa1,	// (0x00057b99) popup_cale_events_window_t2_ParamLimits

0xafa1,	// (0x00057b99) popup_cale_events_window_t2

0xafdf,	// (0x00057bd7) popup_cale_events_window_t3_ParamLimits

0xafdf,	// (0x00057bd7) popup_cale_events_window_t3

0xb019,	// (0x00057c11) popup_cale_events_window_t4_ParamLimits

0xb019,	// (0x00057c11) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005bf45) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005bf45) popup_cale_events_window_t

0x31f7,	// (0x0004fdef) call_type_pane

0x3207,	// (0x0004fdff) popup_call_status_window_g1

0x321b,	// (0x0004fe13) popup_call_status_window_g2

0x322f,	// (0x0004fe27) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005bf4e) popup_call_status_window_g

0xb04f,	// (0x00057c47) call_type_pane_g1

0xb058,	// (0x00057c50) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005bf55) call_type_pane_g

0xa4e1,	// (0x000570d9) bg_popup_sub_pane_cp02

0xb061,	// (0x00057c59) listscroll_popup_wml_pane

0xb069,	// (0x00057c61) list_wml_pane

0xb073,	// (0x00057c6b) scroll_pane_cp013

0xb07e,	// (0x00057c76) list_single_graphic_popup_wml_pane_ParamLimits

0xb07e,	// (0x00057c76) list_single_graphic_popup_wml_pane

0xa856,	// (0x0005744e) list_single_graphic_popup_wml_pane_g1

0xb092,	// (0x00057c8a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005bf5a) list_single_graphic_popup_wml_pane_g

0xb09a,	// (0x00057c92) list_single_graphic_popup_wml_pane_t1

0xb0b0,	// (0x00057ca8) aid_call_pane

0xa734,	// (0x0005732c) popup_clock_analogue_window_g1

0xa734,	// (0x0005732c) popup_clock_analogue_window_g2

0x9c12,	// (0x0005680a) popup_clock_analogue_window_g3

0x9c12,	// (0x0005680a) popup_clock_analogue_window_g4

0xa856,	// (0x0005744e) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005bf5f) popup_clock_analogue_window_g

0x9c1a,	// (0x00056812) popup_clock_analogue_window_t1

0x9c28,	// (0x00056820) clock_digital_number_pane_ParamLimits

0x9c28,	// (0x00056820) clock_digital_number_pane

0x9c34,	// (0x0005682c) clock_digital_number_pane_cp02_ParamLimits

0x9c34,	// (0x0005682c) clock_digital_number_pane_cp02

0x9c40,	// (0x00056838) clock_digital_number_pane_cp03_ParamLimits

0x9c40,	// (0x00056838) clock_digital_number_pane_cp03

0x9c4c,	// (0x00056844) clock_digital_number_pane_cp04_ParamLimits

0x9c4c,	// (0x00056844) clock_digital_number_pane_cp04

0x9c5c,	// (0x00056854) clock_digital_separator_pane_ParamLimits

0x9c5c,	// (0x00056854) clock_digital_separator_pane

0x9c68,	// (0x00056860) popup_clock_digital_window_t1

0xa856,	// (0x0005744e) clock_digital_number_pane_g1

0xa856,	// (0x0005744e) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005becd) clock_digital_number_pane_g

0xa856,	// (0x0005744e) clock_digital_separator_pane_g1

0xa856,	// (0x0005744e) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005becd) clock_digital_separator_pane_g

0xa4e1,	// (0x000570d9) bg_popup_window_pane_cp04

0xb0b8,	// (0x00057cb0) heading_pane_cp03

0xb0c0,	// (0x00057cb8) listscroll_popup_gms_pane

0xb0c8,	// (0x00057cc0) grid_large_graphic_popup_pane

0xb0d2,	// (0x00057cca) listscroll_popup_gms_pane_g1

0xb0da,	// (0x00057cd2) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005bf6a) listscroll_popup_gms_pane_g

0xab6f,	// (0x00057767) scroll_pane_cp014

0x323e,	// (0x0004fe36) cell_large_graphic_popup_pane_ParamLimits

0x323e,	// (0x0004fe36) cell_large_graphic_popup_pane

0x3256,	// (0x0004fe4e) cell_large_graphic_popup_pane_g1_ParamLimits

0x3256,	// (0x0004fe4e) cell_large_graphic_popup_pane_g1

0xb0e2,	// (0x00057cda) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0e2,	// (0x00057cda) cell_large_graphic_popup_pane_g2

0xb0ee,	// (0x00057ce6) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0ee,	// (0x00057ce6) cell_large_graphic_popup_pane_g3

0xb0fb,	// (0x00057cf3) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0fb,	// (0x00057cf3) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005bf6f) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005bf6f) cell_large_graphic_popup_pane_g

0xb10b,	// (0x00057d03) grid_highlight_pane_cp010

0xa856,	// (0x0005744e) bg_popup_call_pane_g1

0xb115,	// (0x00057d0d) list_single_graphic_popup_conf_pane_ParamLimits

0xb115,	// (0x00057d0d) list_single_graphic_popup_conf_pane

0xb128,	// (0x00057d20) list_highlight_pane_cp01

0xb131,	// (0x00057d29) list_single_graphic_popup_conf_pane_g1

0xb139,	// (0x00057d31) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005bf78) list_single_graphic_popup_conf_pane_g

0xb141,	// (0x00057d39) list_single_graphic_popup_conf_pane_t1

0xb14f,	// (0x00057d47) linegrid_cams_pane_g1

0x3262,	// (0x0004fe5a) linegrid_cams_pane_g2

0xa9ac,	// (0x000575a4) linegrid_cams_pane_g3

0xb158,	// (0x00057d50) linegrid_cams_pane_g4

0x326b,	// (0x0004fe63) linegrid_cams_pane_g5

0x3274,	// (0x0004fe6c) linegrid_cams_pane_g6

0xa9b5,	// (0x000575ad) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005bf7d) linegrid_cams_pane_g

0xb161,	// (0x00057d59) popup_clock_analogue_window

0xb161,	// (0x00057d59) popup_clock_digital_window

0xa4e1,	// (0x000570d9) popup_phob_thumbnail_window

0xa856,	// (0x0005744e) call_video_uplink_pane_g1

0xb16a,	// (0x00057d62) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005bf8c) call_video_uplink_pane_g

0xb172,	// (0x00057d6a) video_uplink_pane

0xb17a,	// (0x00057d72) mce_image_pane_g1

0x327f,	// (0x0004fe77) mce_image_pane_g2

0x3289,	// (0x0004fe81) mce_image_pane_g3

0x3291,	// (0x0004fe89) mce_image_pane_g4

0x3299,	// (0x0004fe91) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005bf91) mce_image_pane_g

0xb184,	// (0x00057d7c) control_top_pane_stacon_cp01_ParamLimits

0xb184,	// (0x00057d7c) control_top_pane_stacon_cp01

0xb198,	// (0x00057d90) uni_indicator_pane_stacon_cp01_ParamLimits

0xb198,	// (0x00057d90) uni_indicator_pane_stacon_cp01

0xb1a9,	// (0x00057da1) bg_popup_sub_pane_cp03

0xb1b3,	// (0x00057dab) chi_dic_find_pane

0x32a1,	// (0x0004fe99) listscroll_chi_dic_pane

0xb1d7,	// (0x00057dcf) main_pane_chidic_g1

0xb1df,	// (0x00057dd7) chi_dic_find_pane_t1

0xb1ed,	// (0x00057de5) find_chidic_pane

0xb1f6,	// (0x00057dee) chi_dic_list_pane_ParamLimits

0xb1f6,	// (0x00057dee) chi_dic_list_pane

0xb207,	// (0x00057dff) scroll_pane_cp020

0xb20f,	// (0x00057e07) find_chidic_pane_t1

0xa4e1,	// (0x000570d9) input_focus_pane_cp06

0x32b5,	// (0x0004fead) list_chi_dic_pane_ParamLimits

0x32b5,	// (0x0004fead) list_chi_dic_pane

0x32c7,	// (0x0004febf) list_chi_dic_pane_t1_ParamLimits

0x32c7,	// (0x0004febf) list_chi_dic_pane_t1

0xa4e1,	// (0x000570d9) list_highlight_pane_cp020

0xb21e,	// (0x00057e16) bg_cale_heading_pane_g1

0x32da,	// (0x0004fed2) bg_cale_heading_pane_g2

0x32e2,	// (0x0004feda) bg_cale_heading_pane_g3

0x32ea,	// (0x0004fee2) bg_cale_heading_pane_g4

0x32f4,	// (0x0004feec) bg_cale_heading_pane_g5

0x32fe,	// (0x0004fef6) bg_cale_heading_pane_g6

0x3306,	// (0x0004fefe) bg_cale_heading_pane_g7

0x330e,	// (0x0004ff06) bg_cale_heading_pane_g8

0x3318,	// (0x0004ff10) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005bf9c) bg_cale_heading_pane_g

0xb21e,	// (0x00057e16) bg_cale_side_pane_g1

0x3322,	// (0x0004ff1a) bg_cale_side_pane_g2

0x332a,	// (0x0004ff22) bg_cale_side_pane_g3

0x3332,	// (0x0004ff2a) bg_cale_side_pane_g4

0x333a,	// (0x0004ff32) bg_cale_side_pane_g5

0x3342,	// (0x0004ff3a) bg_cale_side_pane_g6

0x334a,	// (0x0004ff42) bg_cale_side_pane_g7

0x3352,	// (0x0004ff4a) bg_cale_side_pane_g8

0x335a,	// (0x0004ff52) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005bfaf) bg_cale_side_pane_g

0x3362,	// (0x0004ff5a) popup_call_status_window_ParamLimits

0x3362,	// (0x0004ff5a) popup_call_status_window

0xb226,	// (0x00057e1e) stacon_top_pane

0xb22e,	// (0x00057e26) status_pane_ParamLimits

0xb22e,	// (0x00057e26) status_pane

0xb243,	// (0x00057e3b) status_small_pane

0xb24b,	// (0x00057e43) control_pane

0xa4e1,	// (0x000570d9) stacon_bottom_pane

0xb253,	// (0x00057e4b) list_single_mce_smart_pane_t1_ParamLimits

0xb253,	// (0x00057e4b) list_single_mce_smart_pane_t1

0xb266,	// (0x00057e5e) list_single_mce_smart_pane_t2_ParamLimits

0xb266,	// (0x00057e5e) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005bfc2) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005bfc2) list_single_mce_smart_pane_t

0x33ab,	// (0x0004ffa3) compass_pane

0x33b4,	// (0x0004ffac) main_location2_pane_t1

0x33c6,	// (0x0004ffbe) main_location2_pane_t2

0x33d8,	// (0x0004ffd0) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005bfc7) main_location2_pane_t

0xb285,	// (0x00057e7d) compass_pane_g1_ParamLimits

0xb285,	// (0x00057e7d) compass_pane_g1

0x341c,	// (0x00050014) compass_pane_t1

0x342b,	// (0x00050023) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005bfd0) compass_pane_t

0x3472,	// (0x0005006a) text_secondary_cp61

0xb301,	// (0x00057ef9) navi_pane_cams_g5

0xb37d,	// (0x00057f75) navi_pane_im_t1

0xb38b,	// (0x00057f83) navi_pane_mp_g1_ParamLimits

0xb38b,	// (0x00057f83) navi_pane_mp_g1

0xb39f,	// (0x00057f97) navi_pane_mp_g2_ParamLimits

0xb39f,	// (0x00057f97) navi_pane_mp_g2

0xb3ab,	// (0x00057fa3) navi_pane_mp_g3_ParamLimits

0xb3ab,	// (0x00057fa3) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005bfe4) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005bfe4) navi_pane_mp_g

0xb3b7,	// (0x00057faf) navi_pane_mp_t1

0xb3c5,	// (0x00057fbd) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005bfeb) navi_pane_mp_t

0xb430,	// (0x00058028) navi_pane_vt_g1

0xb3b7,	// (0x00057faf) navi_pane_vt_t1

0xb438,	// (0x00058030) navi_slider_pane

0xa9c6,	// (0x000575be) zooming_pane

0xb448,	// (0x00058040) navi_slider_pane_g1

0x9c85,	// (0x0005687d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005bff2) navi_slider_pane_g

0xb46c,	// (0x00058064) aid_levels_zoom

0xb474,	// (0x0005806c) zooming_pane_g1

0xb47c,	// (0x00058074) zooming_pane_g2

0xb47c,	// (0x00058074) zooming_pane_g3

0x0002,

0xf409,	// (0x0005c001) zooming_pane_g

0xb484,	// (0x0005807c) level_10_zoom

0xb48d,	// (0x00058085) level_11_zoom

0xb496,	// (0x0005808e) level_1_zoom

0xb49f,	// (0x00058097) level_2_zoom

0xb4a8,	// (0x000580a0) level_3_zoom

0xb4b1,	// (0x000580a9) level_4_zoom

0xb4ba,	// (0x000580b2) level_5_zoom

0xb4c3,	// (0x000580bb) level_6_zoom

0xb4cc,	// (0x000580c4) level_7_zoom

0xb4d5,	// (0x000580cd) level_8_zoom

0xb4de,	// (0x000580d6) level_9_zoom

0xb4ef,	// (0x000580e7) popup_phob_thumbnail_window_g1

0xb4f7,	// (0x000580ef) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005c008) popup_phob_thumbnail_window_g

0xc7d3,	// (0x000593cb) level_1_location

0xc7db,	// (0x000593d3) level_2_location

0xc7e3,	// (0x000593db) level_3_location

0xc7eb,	// (0x000593e3) level_4_location

0xa9c6,	// (0x000575be) level_5_location

0x34c3,	// (0x000500bb) mce_icon_pane_g1

0x34cd,	// (0x000500c5) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005c00d) mce_icon_pane_g

0x34d5,	// (0x000500cd) main_mup_pane_g1_ParamLimits

0x34d5,	// (0x000500cd) main_mup_pane_g1

0x34eb,	// (0x000500e3) main_mup_pane_g2_ParamLimits

0x34eb,	// (0x000500e3) main_mup_pane_g2

0x3503,	// (0x000500fb) main_mup_pane_g3_ParamLimits

0x3503,	// (0x000500fb) main_mup_pane_g3

0x351b,	// (0x00050113) main_mup_pane_g4_ParamLimits

0x351b,	// (0x00050113) main_mup_pane_g4

0x3533,	// (0x0005012b) main_mup_pane_g5_ParamLimits

0x3533,	// (0x0005012b) main_mup_pane_g5

0x354f,	// (0x00050147) main_mup_pane_g6_ParamLimits

0x354f,	// (0x00050147) main_mup_pane_g6

0x3567,	// (0x0005015f) main_mup_pane_g7_ParamLimits

0x3567,	// (0x0005015f) main_mup_pane_g7

0x357f,	// (0x00050177) main_mup_pane_g8_ParamLimits

0x357f,	// (0x00050177) main_mup_pane_g8

0x3599,	// (0x00050191) main_mup_pane_g9_ParamLimits

0x3599,	// (0x00050191) main_mup_pane_g9

0x35b3,	// (0x000501ab) main_mup_pane_g10_ParamLimits

0x35b3,	// (0x000501ab) main_mup_pane_g10

0x35cd,	// (0x000501c5) main_mup_pane_g11_ParamLimits

0x35cd,	// (0x000501c5) main_mup_pane_g11

0x35e1,	// (0x000501d9) main_mup_pane_g12_ParamLimits

0x35e1,	// (0x000501d9) main_mup_pane_g12

0x35f7,	// (0x000501ef) main_mup_pane_g13_ParamLimits

0x35f7,	// (0x000501ef) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005c012) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005c012) main_mup_pane_g

0x360b,	// (0x00050203) main_mup_pane_t1_ParamLimits

0x360b,	// (0x00050203) main_mup_pane_t1

0x3625,	// (0x0005021d) main_mup_pane_t2_ParamLimits

0x3625,	// (0x0005021d) main_mup_pane_t2

0x363d,	// (0x00050235) main_mup_pane_t3_ParamLimits

0x363d,	// (0x00050235) main_mup_pane_t3

0x3655,	// (0x0005024d) main_mup_pane_t4_ParamLimits

0x3655,	// (0x0005024d) main_mup_pane_t4

0x3673,	// (0x0005026b) main_mup_pane_t5_ParamLimits

0x3673,	// (0x0005026b) main_mup_pane_t5

0x3688,	// (0x00050280) main_mup_pane_t6_ParamLimits

0x3688,	// (0x00050280) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005c02d) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005c02d) main_mup_pane_t

0x369a,	// (0x00050292) mup_progress_pane_ParamLimits

0x369a,	// (0x00050292) mup_progress_pane

0x36a6,	// (0x0005029e) mup_visualizer_pane_ParamLimits

0x36a6,	// (0x0005029e) mup_visualizer_pane

0x36d6,	// (0x000502ce) mup_volume_pane_ParamLimits

0x36d6,	// (0x000502ce) mup_volume_pane

0xb1bb,	// (0x00057db3) mup_visualizer_pane_g1_ParamLimits

0xb1bb,	// (0x00057db3) mup_visualizer_pane_g1

0xb1bb,	// (0x00057db3) mup_visualizer_pane_g2_ParamLimits

0xb1bb,	// (0x00057db3) mup_visualizer_pane_g2

0xb285,	// (0x00057e7d) mup_visualizer_pane_g3_ParamLimits

0xb285,	// (0x00057e7d) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005c03a) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005c03a) mup_visualizer_pane_g

0xa856,	// (0x0005744e) mup_volume_pane_g1

0xb507,	// (0x000580ff) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005c041) mup_volume_pane_g

0xa856,	// (0x0005744e) mup_progress_pane_g1

0xb510,	// (0x00058108) mup_progress_pane_g2

0xb519,	// (0x00058111) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005c046) mup_progress_pane_g

0xa4e1,	// (0x000570d9) bg_popup_window_pane_cp05

0xb522,	// (0x0005811a) heading_pane_cp02_ParamLimits

0xb522,	// (0x0005811a) heading_pane_cp02

0xb53c,	// (0x00058134) list_popup_blid_pane

0xb544,	// (0x0005813c) list_blid_sat_info_pane_ParamLimits

0xb544,	// (0x0005813c) list_blid_sat_info_pane

0xb557,	// (0x0005814f) list_blid_sat_info_pane_g1

0xb55f,	// (0x00058157) list_blid_sat_info_pane_t1

0x37ec,	// (0x000503e4) mup_equalizer_pane_ParamLimits

0x37ec,	// (0x000503e4) mup_equalizer_pane

0x3805,	// (0x000503fd) mup_equalizer_pane_cp1_ParamLimits

0x3805,	// (0x000503fd) mup_equalizer_pane_cp1

0x3822,	// (0x0005041a) mup_equalizer_pane_cp2_ParamLimits

0x3822,	// (0x0005041a) mup_equalizer_pane_cp2

0x383f,	// (0x00050437) mup_equalizer_pane_cp3_ParamLimits

0x383f,	// (0x00050437) mup_equalizer_pane_cp3

0x3860,	// (0x00050458) mup_equalizer_pane_cp4_ParamLimits

0x3860,	// (0x00050458) mup_equalizer_pane_cp4

0x3881,	// (0x00050479) mup_equalizer_pane_cp5

0x3895,	// (0x0005048d) mup_equalizer_pane_cp6

0x38a9,	// (0x000504a1) mup_equalizer_pane_cp7

0xc6f1,	// (0x000592e9) bg_popup_call_poc_act_pane_g9

0xc6f9,	// (0x000592f1) bg_popup_call_poc_act_pane_g10

0xc701,	// (0x000592f9) bg_popup_call_poc_act_pane_g11

0x000a,

0xa73c,	// (0x00057334) mup_scale_pane

0xa856,	// (0x0005744e) mup_scale_pane_g1

0xb56d,	// (0x00058165) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005c062) mup_scale_pane_g

0xb591,	// (0x00058189) msg_data_pane

0xb599,	// (0x00058191) scroll_pane_cp017

0x0393,	// (0x0004cf8b) bg_list_pane_cp04_ParamLimits

0x0393,	// (0x0004cf8b) bg_list_pane_cp04

0xb5a1,	// (0x00058199) msg_data_pane_g1

0x38d7,	// (0x000504cf) msg_data_pane_g2

0x38e1,	// (0x000504d9) msg_data_pane_g3

0x38e9,	// (0x000504e1) msg_data_pane_g4

0x38f1,	// (0x000504e9) msg_data_pane_g5

0x38f9,	// (0x000504f1) msg_data_pane_g6

0x3901,	// (0x000504f9) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005c071) msg_data_pane_g

0x03ab,	// (0x0004cfa3) msg_text_pane_ParamLimits

0x03ab,	// (0x0004cfa3) msg_text_pane

0x3909,	// (0x00050501) qrid_highlight_pane_cp011_ParamLimits

0x3909,	// (0x00050501) qrid_highlight_pane_cp011

0xa4e1,	// (0x000570d9) msg_body_pane

0xa4e1,	// (0x000570d9) msg_header_pane

0xb5b2,	// (0x000581aa) input_focus_pane_cp07

0x03de,	// (0x0004cfd6) msg_header_pane_t1_ParamLimits

0x03de,	// (0x0004cfd6) msg_header_pane_t1

0x391f,	// (0x00050517) msg_header_pane_t2_ParamLimits

0x391f,	// (0x00050517) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005c085) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005c085) msg_header_pane_t

0xb5c7,	// (0x000581bf) msg_body_pane_g1

0x03f0,	// (0x0004cfe8) msg_body_pane_t1_ParamLimits

0x03f0,	// (0x0004cfe8) msg_body_pane_t1

0x3931,	// (0x00050529) msg_body_pane_t2_ParamLimits

0x3931,	// (0x00050529) msg_body_pane_t2

0x3943,	// (0x0005053b) msg_body_pane_t3_ParamLimits

0x3943,	// (0x0005053b) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005c08a) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005c08a) msg_body_pane_t

0x398f,	// (0x00050587) main_viewer_pane_g1_ParamLimits

0x398f,	// (0x00050587) main_viewer_pane_g1

0x399d,	// (0x00050595) main_viewer_pane_g2_ParamLimits

0x399d,	// (0x00050595) main_viewer_pane_g2

0x39ab,	// (0x000505a3) main_viewer_pane_g3_ParamLimits

0x39ab,	// (0x000505a3) main_viewer_pane_g3

0x39ba,	// (0x000505b2) main_viewer_pane_g4_ParamLimits

0x39ba,	// (0x000505b2) main_viewer_pane_g4

0x9caf,	// (0x000568a7) main_viewer_pane_g5_ParamLimits

0x9caf,	// (0x000568a7) main_viewer_pane_g5

0x9caf,	// (0x000568a7) main_viewer_pane_g7_ParamLimits

0x9caf,	// (0x000568a7) main_viewer_pane_g7

0x9cc1,	// (0x000568b9) main_viewer_pane_g8_ParamLimits

0x9cc1,	// (0x000568b9) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005c09a) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005c09a) main_viewer_pane_g

0xb5cf,	// (0x000581c7) viewer_content_pane_ParamLimits

0xb5cf,	// (0x000581c7) viewer_content_pane

0x39f6,	// (0x000505ee) main_postcard_pane_g1_ParamLimits

0x39f6,	// (0x000505ee) main_postcard_pane_g1

0x3a0c,	// (0x00050604) main_postcard_pane_g2_ParamLimits

0x3a0c,	// (0x00050604) main_postcard_pane_g2

0x3a22,	// (0x0005061a) main_postcard_pane_g3_ParamLimits

0x3a22,	// (0x0005061a) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005c0ab) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005c0ab) main_postcard_pane_g

0x3a39,	// (0x00050631) main_postcard_pane_g4

0xc8d3,	// (0x000594cb) smil_status_volume_pane_g2

0x3a7c,	// (0x00050674) postcard_pane_ParamLimits

0x3a7c,	// (0x00050674) postcard_pane

0xb5dd,	// (0x000581d5) postcard_pane_g1_ParamLimits

0xb5dd,	// (0x000581d5) postcard_pane_g1

0x3abe,	// (0x000506b6) postcard_pane_g2_ParamLimits

0x3abe,	// (0x000506b6) postcard_pane_g2

0x3aca,	// (0x000506c2) postcard_pane_g3_ParamLimits

0x3aca,	// (0x000506c2) postcard_pane_g3

0xb5eb,	// (0x000581e3) postcard_pane_g4_ParamLimits

0xb5eb,	// (0x000581e3) postcard_pane_g4

0x3ad6,	// (0x000506ce) postcard_pane_g5_ParamLimits

0x3ad6,	// (0x000506ce) postcard_pane_g5

0x3aeb,	// (0x000506e3) postcard_pane_g6_ParamLimits

0x3aeb,	// (0x000506e3) postcard_pane_g6

0xb5dd,	// (0x000581d5) postcard_pane_g7_ParamLimits

0xb5dd,	// (0x000581d5) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005c0b8) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005c0b8) postcard_pane_g

0x3aff,	// (0x000506f7) main_mp2_pane_g1_ParamLimits

0x3aff,	// (0x000506f7) main_mp2_pane_g1

0x3b0b,	// (0x00050703) main_mp2_pane_g2_ParamLimits

0x3b0b,	// (0x00050703) main_mp2_pane_g2

0x3b17,	// (0x0005070f) main_mp2_pane_g3_ParamLimits

0x3b17,	// (0x0005070f) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005c0c7) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005c0c7) main_mp2_pane_g

0x3b23,	// (0x0005071b) main_mp2_pane_t1_ParamLimits

0x3b23,	// (0x0005071b) main_mp2_pane_t1

0x3b38,	// (0x00050730) main_mp2_pane_t2_ParamLimits

0x3b38,	// (0x00050730) main_mp2_pane_t2

0x3b4a,	// (0x00050742) main_mp2_pane_t3_ParamLimits

0x3b4a,	// (0x00050742) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005c0ce) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005c0ce) main_mp2_pane_t

0xb5f9,	// (0x000581f1) pec_content_pane_ParamLimits

0xb5f9,	// (0x000581f1) pec_content_pane

0xab6f,	// (0x00057767) scroll_pane_cp015

0xb60b,	// (0x00058203) pec_attribute_pane_ParamLimits

0xb60b,	// (0x00058203) pec_attribute_pane

0x3b5c,	// (0x00050754) pec_content_pane_g1_ParamLimits

0x3b5c,	// (0x00050754) pec_content_pane_g1

0xb61b,	// (0x00058213) pec_content_pane_t1_ParamLimits

0xb61b,	// (0x00058213) pec_content_pane_t1

0xb62d,	// (0x00058225) pec_content_pane_t2_ParamLimits

0xb62d,	// (0x00058225) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005c0d5) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005c0d5) pec_content_pane_t

0x3b68,	// (0x00050760) list_single_graphic_pane_cp01_ParamLimits

0x3b68,	// (0x00050760) list_single_graphic_pane_cp01

0xa73c,	// (0x00057334) bg_popup_sub_pane_cp04

0xb63f,	// (0x00058237) popup_mup_playback_window_g1

0xb64b,	// (0x00058243) popup_mup_playback_window_t1

0xb660,	// (0x00058258) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005c0da) popup_mup_playback_window_t

0xb697,	// (0x0005828f) main_image_pane_g1_ParamLimits

0xb697,	// (0x0005828f) main_image_pane_g1

0xb6da,	// (0x000582d2) scroll_pane_cp018_ParamLimits

0xb6da,	// (0x000582d2) scroll_pane_cp018

0xb6f2,	// (0x000582ea) scroll_pane_cp016_ParamLimits

0xb6f2,	// (0x000582ea) scroll_pane_cp016

0x3c35,	// (0x0005082d) smil2_image_pane_ParamLimits

0x3c35,	// (0x0005082d) smil2_image_pane

0x3c65,	// (0x0005085d) smil2_root_pane_ParamLimits

0x3c65,	// (0x0005085d) smil2_root_pane

0x3c9d,	// (0x00050895) smil2_text_pane_ParamLimits

0x3c9d,	// (0x00050895) smil2_text_pane

0xa4e1,	// (0x000570d9) bg_list_pane_cp06

0xb72e,	// (0x00058326) grid_radio_pane

0xa4e1,	// (0x000570d9) bg_popup_window_pane_cp06

0xb736,	// (0x0005832e) main_fmradio_pane_t1

0xb0b8,	// (0x00057cb0) heading_pane_cp04

0xb744,	// (0x0005833c) main_fmradio_pane_t2

0xc709,	// (0x00059301) popup_cale_lunar_info_window_g1

0xb752,	// (0x0005834a) main_fmradio_pane_t3

0xc711,	// (0x00059309) popup_cale_lunar_info_window_g2

0xb760,	// (0x00058358) main_fmradio_pane_t4

0x0001,

0xb76e,	// (0x00058366) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0005c1b5) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005c0ef) main_fmradio_pane_t

0xb77c,	// (0x00058374) wait_bar_pane_cp03

0xb784,	// (0x0005837c) cell_fmradio_pane_ParamLimits

0xb784,	// (0x0005837c) cell_fmradio_pane

0xb5dd,	// (0x000581d5) cell_fmradio_pane_g1_ParamLimits

0xb5dd,	// (0x000581d5) cell_fmradio_pane_g1

0xa4e1,	// (0x000570d9) grid_highlight_pane_cp011

0xb797,	// (0x0005838f) poc_content_pane_ParamLimits

0xb797,	// (0x0005838f) poc_content_pane

0xb7a9,	// (0x000583a1) scroll_pane_cp019

0x3d1d,	// (0x00050915) popup_call_poc_act_window_ParamLimits

0x3d1d,	// (0x00050915) popup_call_poc_act_window

0x3d41,	// (0x00050939) popup_call_poc_inact_window_ParamLimits

0x3d41,	// (0x00050939) popup_call_poc_inact_window

0xf594,	// (0x0005c18c) bg_popup_call_poc_act_pane_g

0xc681,	// (0x00059279) bg_popup_call_poc_inact_pane_g1

0xc689,	// (0x00059281) bg_popup_call_poc_inact_pane_g2

0xb7b1,	// (0x000583a9) popup_call_poc_act_window_g2

0xc691,	// (0x00059289) bg_popup_call_poc_inact_pane_g3

0xc699,	// (0x00059291) bg_popup_call_poc_inact_pane_g4

0xc6a1,	// (0x00059299) bg_popup_call_poc_inact_pane_g5

0xb7b9,	// (0x000583b1) popup_call_poc_act_window_t1_ParamLimits

0xb7b9,	// (0x000583b1) popup_call_poc_act_window_t1

0xb7e1,	// (0x000583d9) popup_call_poc_act_window_t2_ParamLimits

0xb7e1,	// (0x000583d9) popup_call_poc_act_window_t2

0xb809,	// (0x00058401) popup_call_poc_act_window_t3_ParamLimits

0xb809,	// (0x00058401) popup_call_poc_act_window_t3

0xb831,	// (0x00058429) popup_call_poc_act_window_t4_ParamLimits

0xb831,	// (0x00058429) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005c0fa) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005c0fa) popup_call_poc_act_window_t

0xc6a9,	// (0x000592a1) bg_popup_call_poc_inact_pane_g6

0xc6b1,	// (0x000592a9) bg_popup_call_poc_inact_pane_g7

0xc6b9,	// (0x000592b1) bg_popup_call_poc_inact_pane_g8

0xb843,	// (0x0005843b) popup_call_poc_inact_window_g2

0xc6c1,	// (0x000592b9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0005c179) bg_popup_call_poc_inact_pane_g

0xb84b,	// (0x00058443) popup_call_poc_inact_window_t1_ParamLimits

0xb84b,	// (0x00058443) popup_call_poc_inact_window_t1

0xb860,	// (0x00058458) popup_call_poc_inact_window_t2_ParamLimits

0xb860,	// (0x00058458) popup_call_poc_inact_window_t2

0xb875,	// (0x0005846d) popup_call_poc_inact_window_t3_ParamLimits

0xb875,	// (0x0005846d) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005c103) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005c103) popup_call_poc_inact_window_t

0xc846,	// (0x0005943e) context_pane_ParamLimits

0x4570,	// (0x00051168) signal_pane_ParamLimits

0xa9c6,	// (0x000575be) main_call2_pane

0x9d06,	// (0x000568fe) popup_phob_thumbnail2_window_ParamLimits

0x9d06,	// (0x000568fe) popup_phob_thumbnail2_window

0x9c97,	// (0x0005688f) aid_hotspot_pointer_arrow_pane

0x9c9f,	// (0x00056897) aid_hotspot_pointer_hand_pane

0x408a,	// (0x00050c82) phob_pre_status_pane_g5

0x1e38,	// (0x0004ea30) cams_zoom_pane_ParamLimits

0x1e47,	// (0x0004ea3f) image_vga_pane_ParamLimits

0x1e61,	// (0x0004ea59) main_camera_pane_g1_ParamLimits

0x1e73,	// (0x0004ea6b) main_camera_pane_g2_ParamLimits

0x1e83,	// (0x0004ea7b) main_camera_pane_g3_ParamLimits

0x1e93,	// (0x0004ea8b) main_camera_pane_g4_ParamLimits

0x1ea3,	// (0x0004ea9b) main_camera_pane_g5_ParamLimits

0x1eb3,	// (0x0004eaab) main_camera_pane_g6_ParamLimits

0x1ec5,	// (0x0004eabd) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005be02) main_camera_pane_g_ParamLimits

0x1ed5,	// (0x0004eacd) main_camera_pane_t1_ParamLimits

0x1eeb,	// (0x0004eae3) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005be13) main_camera_pane_t_ParamLimits

0xa73c,	// (0x00057334) bg_popup_preview_window_pane_cp01_ParamLimits

0xa73c,	// (0x00057334) bg_popup_preview_window_pane_cp01

0xb88a,	// (0x00058482) popup_phob_thumbnail2_window_g1_ParamLimits

0xb88a,	// (0x00058482) popup_phob_thumbnail2_window_g1

0xa4e1,	// (0x000570d9) call2_cli_visual_pane

0x3d75,	// (0x0005096d) popup_call2_audio_conf_window_ParamLimits

0x3d75,	// (0x0005096d) popup_call2_audio_conf_window

0x3d95,	// (0x0005098d) popup_call2_audio_first_window_ParamLimits

0x3d95,	// (0x0005098d) popup_call2_audio_first_window

0x3e2b,	// (0x00050a23) popup_call2_audio_in_window_ParamLimits

0x3e2b,	// (0x00050a23) popup_call2_audio_in_window

0x3e73,	// (0x00050a6b) popup_call2_audio_out_window_ParamLimits

0x3e73,	// (0x00050a6b) popup_call2_audio_out_window

0x3edd,	// (0x00050ad5) popup_call2_audio_second_window_ParamLimits

0x3edd,	// (0x00050ad5) popup_call2_audio_second_window

0x3f43,	// (0x00050b3b) popup_call2_audio_wait_window_ParamLimits

0x3f43,	// (0x00050b3b) popup_call2_audio_wait_window

0xa4e1,	// (0x000570d9) bg_popup_call2_act_pane_cp03

0xa71e,	// (0x00057316) list_conf_pane_cp

0xb896,	// (0x0005848e) popup_call2_audio_conf_window_t1

0xb115,	// (0x00057d0d) list_single_graphic_popup_conf2_pane_ParamLimits

0xb115,	// (0x00057d0d) list_single_graphic_popup_conf2_pane

0xb128,	// (0x00057d20) list_highlight_pane_cp04

0xb8a4,	// (0x0005849c) list_single_graphic_popup_conf2_pane_g1

0xb139,	// (0x00057d31) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005c10a) list_single_graphic_popup_conf2_pane_g

0xb8ae,	// (0x000584a6) list_single_graphic_popup_conf2_pane_t1

0xb8bc,	// (0x000584b4) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8bc,	// (0x000584b4) bg_popup_call2_act_pane_cp01

0xb946,	// (0x0005853e) call_type_pane_cp05_ParamLimits

0xb946,	// (0x0005853e) call_type_pane_cp05

0xb99a,	// (0x00058592) popup_call2_audio_second_window_g1_ParamLimits

0xb99a,	// (0x00058592) popup_call2_audio_second_window_g1

0xb9ee,	// (0x000585e6) popup_call2_audio_second_window_g2_ParamLimits

0xb9ee,	// (0x000585e6) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005c10f) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005c10f) popup_call2_audio_second_window_g

0xba53,	// (0x0005864b) popup_call2_audio_second_window_t1_ParamLimits

0xba53,	// (0x0005864b) popup_call2_audio_second_window_t1

0xbb0e,	// (0x00058706) popup_call2_audio_second_window_t2_ParamLimits

0xbb0e,	// (0x00058706) popup_call2_audio_second_window_t2

0xbb61,	// (0x00058759) popup_call2_audio_second_window_t3_ParamLimits

0xbb61,	// (0x00058759) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005c116) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005c116) popup_call2_audio_second_window_t

0xa4e1,	// (0x000570d9) bg_popup_call2_in_pane_cp02

0xa4eb,	// (0x000570e3) call_type_pane_cp04

0xa4f3,	// (0x000570eb) popup_call2_audio_wait_window_g1

0xa4fb,	// (0x000570f3) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005bcf1) popup_call2_audio_wait_window_g

0xa503,	// (0x000570fb) popup_call2_audio_wait_window_t3

0xbc54,	// (0x0005884c) bg_popup_call2_act_pane_ParamLimits

0xbc54,	// (0x0005884c) bg_popup_call2_act_pane

0xbd14,	// (0x0005890c) call_type_pane_cp03_ParamLimits

0xbd14,	// (0x0005890c) call_type_pane_cp03

0xbd78,	// (0x00058970) popup_call2_audio_first_window_g1_ParamLimits

0xbd78,	// (0x00058970) popup_call2_audio_first_window_g1

0xbde8,	// (0x000589e0) popup_call2_audio_first_window_g2_ParamLimits

0xbde8,	// (0x000589e0) popup_call2_audio_first_window_g2

0xb1bb,	// (0x00057db3) popup_call2_audio_first_window_g3_ParamLimits

0xb1bb,	// (0x00057db3) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005c11f) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005c11f) popup_call2_audio_first_window_g

0xbec6,	// (0x00058abe) popup_call2_audio_first_window_t1_ParamLimits

0xbec6,	// (0x00058abe) popup_call2_audio_first_window_t1

0xbfc9,	// (0x00058bc1) popup_call2_audio_first_window_t4_ParamLimits

0xbfc9,	// (0x00058bc1) popup_call2_audio_first_window_t4

0xc0ac,	// (0x00058ca4) popup_call2_audio_first_window_t5_ParamLimits

0xc0ac,	// (0x00058ca4) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005c12a) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005c12a) popup_call2_audio_first_window_t

0xa734,	// (0x0005732c) bg_popup_call2_act_pane_g1

0xc719,	// (0x00059311) popup_cale_lunar_info_window_t1

0xc727,	// (0x0005931f) popup_cale_lunar_info_window_t2

0xc735,	// (0x0005932d) popup_cale_lunar_info_window_t3

0xa4e1,	// (0x000570d9) bg_popup_call2_bubble_pane

0xc1ad,	// (0x00058da5) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1ad,	// (0x00058da5) bg_popup_call2_in_pane_cp01

0x9857,	// (0x0005644f) call_type_pane_cp02

0xc1f5,	// (0x00058ded) popup_call2_audio_out_window_g1_ParamLimits

0xc1f5,	// (0x00058ded) popup_call2_audio_out_window_g1

0xc221,	// (0x00058e19) popup_call2_audio_out_window_g2_ParamLimits

0xc221,	// (0x00058e19) popup_call2_audio_out_window_g2

0xc249,	// (0x00058e41) popup_call2_audio_out_window_g3_ParamLimits

0xc249,	// (0x00058e41) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005c133) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005c133) popup_call2_audio_out_window_g

0xc284,	// (0x00058e7c) popup_call2_audio_out_window_t1_ParamLimits

0xc284,	// (0x00058e7c) popup_call2_audio_out_window_t1

0xc2e3,	// (0x00058edb) popup_call2_audio_out_window_t2_ParamLimits

0xc2e3,	// (0x00058edb) popup_call2_audio_out_window_t2

0xc337,	// (0x00058f2f) popup_call2_audio_out_window_t3_ParamLimits

0xc337,	// (0x00058f2f) popup_call2_audio_out_window_t3

0xc34d,	// (0x00058f45) popup_call2_audio_out_window_t4_ParamLimits

0xc34d,	// (0x00058f45) popup_call2_audio_out_window_t4

0xc363,	// (0x00058f5b) popup_call2_audio_out_window_t5_ParamLimits

0xc363,	// (0x00058f5b) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005c13c) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005c13c) popup_call2_audio_out_window_t

0xc3c7,	// (0x00058fbf) bg_popup_call2_in_pane_ParamLimits

0xc3c7,	// (0x00058fbf) bg_popup_call2_in_pane

0xc423,	// (0x0005901b) popup_call2_audio_in_window_g1_ParamLimits

0xc423,	// (0x0005901b) popup_call2_audio_in_window_g1

0xc45b,	// (0x00059053) popup_call2_audio_in_window_g2_ParamLimits

0xc45b,	// (0x00059053) popup_call2_audio_in_window_g2

0xc493,	// (0x0005908b) popup_call2_audio_in_window_g3_ParamLimits

0xc493,	// (0x0005908b) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005c149) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005c149) popup_call2_audio_in_window_g

0xc4eb,	// (0x000590e3) popup_call2_audio_in_window_t1_ParamLimits

0xc4eb,	// (0x000590e3) popup_call2_audio_in_window_t1

0xc56b,	// (0x00059163) popup_call2_audio_in_window_t2_ParamLimits

0xc56b,	// (0x00059163) popup_call2_audio_in_window_t2

0xc5eb,	// (0x000591e3) popup_call2_audio_in_window_t3_ParamLimits

0xc5eb,	// (0x000591e3) popup_call2_audio_in_window_t3

0xc605,	// (0x000591fd) popup_call2_audio_in_window_t4_ParamLimits

0xc605,	// (0x000591fd) popup_call2_audio_in_window_t4

0xc617,	// (0x0005920f) popup_call2_audio_in_window_t5_ParamLimits

0xc617,	// (0x0005920f) popup_call2_audio_in_window_t5

0xc62c,	// (0x00059224) popup_call2_audio_in_window_t6_ParamLimits

0xc62c,	// (0x00059224) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005c152) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005c152) popup_call2_audio_in_window_t

0xa734,	// (0x0005732c) bg_popup_call2_in_pane_g1

0xc743,	// (0x0005933b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0005c1ba) popup_cale_lunar_info_window_t

0xa73c,	// (0x00057334) bg_popup_call2_rect_pane_ParamLimits

0xa73c,	// (0x00057334) bg_popup_call2_rect_pane

0xa4e1,	// (0x000570d9) call2_cli_visual_graphic_pane

0xa4e1,	// (0x000570d9) call2_cli_visual_text_pane

0x9d2d,	// (0x00056925) smil_status_volume_pane_g3

0x0002,

0xa856,	// (0x0005744e) call2_cli_visual_graphic_pane_g1

0xa856,	// (0x0005744e) call2_cli_visual_graphic_pane_g2

0xa856,	// (0x0005744e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005c15f) call2_cli_visual_graphic_pane_g

0xc641,	// (0x00059239) bg_popup_call2_rect_pane_g1

0xa8e2,	// (0x000574da) bg_popup_call2_rect_pane_g2

0xc649,	// (0x00059241) bg_popup_call2_rect_pane_g3

0xc651,	// (0x00059249) bg_popup_call2_rect_pane_g4

0xc659,	// (0x00059251) bg_popup_call2_rect_pane_g5

0xc661,	// (0x00059259) bg_popup_call2_rect_pane_g6

0xc669,	// (0x00059261) bg_popup_call2_rect_pane_g7

0xc671,	// (0x00059269) bg_popup_call2_rect_pane_g8

0xc679,	// (0x00059271) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005c166) bg_popup_call2_rect_pane_g

0xc681,	// (0x00059279) bg_popup_call2_bubble_pane_g1

0xc689,	// (0x00059281) bg_popup_call2_bubble_pane_g2

0xc691,	// (0x00059289) bg_popup_call2_bubble_pane_g3

0xc699,	// (0x00059291) bg_popup_call2_bubble_pane_g4

0xc6a1,	// (0x00059299) bg_popup_call2_bubble_pane_g5

0xc6a9,	// (0x000592a1) bg_popup_call2_bubble_pane_g6

0xc6b1,	// (0x000592a9) bg_popup_call2_bubble_pane_g7

0xc6b9,	// (0x000592b1) bg_popup_call2_bubble_pane_g8

0xc6c1,	// (0x000592b9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005c179) bg_popup_call2_bubble_pane_g

0x17ba,	// (0x0004e3b2) aid_cale_week_size_cell_pane

0x1f01,	// (0x0004eaf9) aid_cams_cif_uncrop_pane_ParamLimits

0x1f01,	// (0x0004eaf9) aid_cams_cif_uncrop_pane

0x20b1,	// (0x0004eca9) aid_cams_size_cell_ParamLimits

0x20b1,	// (0x0004eca9) aid_cams_size_cell

0x20c5,	// (0x0004ecbd) grid_cams_pane_ParamLimits

0x20df,	// (0x0004ecd7) linegrid_cams_pane_ParamLimits

0x21c6,	// (0x0004edbe) call_video_pane_t1

0x21e4,	// (0x0004eddc) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005be66) call_video_pane_t

0x2610,	// (0x0004f208) aid_cale_month_size_cell_pane_ParamLimits

0x2610,	// (0x0004f208) aid_cale_month_size_cell_pane

0xf60b,	// (0x0005c203) smil_status_volume_pane_g

0x9d3a,	// (0x00056932) volume_smil_pane_ParamLimits

0x9712,	// (0x0005630a) aid_popup2_width_pane

0x1722,	// (0x0004e31a) cell_qdial_pane_g4_ParamLimits

0x1722,	// (0x0004e31a) cell_qdial_pane_g4

0x33fc,	// (0x0004fff4) aid_blid_cardinal_pane_ParamLimits

0x3408,	// (0x00050000) aid_blid_destination_pane_ParamLimits

0x3408,	// (0x00050000) aid_blid_destination_pane

0xa73c,	// (0x00057334) bg_popup_call_poc_act_pane_ParamLimits

0xa73c,	// (0x00057334) bg_popup_call_poc_act_pane

0xa73c,	// (0x00057334) bg_popup_call_poc_inact_pane_ParamLimits

0xa73c,	// (0x00057334) bg_popup_call_poc_inact_pane

0xc6c9,	// (0x000592c1) bg_popup_call_poc_act_pane_g1

0xc6d1,	// (0x000592c9) bg_popup_call_poc_act_pane_g2

0xc6d9,	// (0x000592d1) bg_popup_call_poc_act_pane_g3

0xc699,	// (0x00059291) bg_popup_call_poc_act_pane_g4

0xc6a1,	// (0x00059299) bg_popup_call_poc_act_pane_g5

0xc6e1,	// (0x000592d9) bg_popup_call_poc_act_pane_g6

0xc6b1,	// (0x000592a9) bg_popup_call_poc_act_pane_g7

0xc6e9,	// (0x000592e1) bg_popup_call_poc_act_pane_g8

0xa4e1,	// (0x000570d9) main_usb_pane

0x9ce1,	// (0x000568d9) popup_cale_lunar_info_window

0x24bc,	// (0x0004f0b4) im_reading_pane_t1_ParamLimits

0xaac7,	// (0x000576bf) list_im_pane_ParamLimits

0xaad8,	// (0x000576d0) scroll_pane_cp07_ParamLimits

0xa4e1,	// (0x000570d9) grid_highlight_pane_cp012

0xa73c,	// (0x00057334) mup_scale_pane_ParamLimits

0xb5dd,	// (0x000581d5) main_usb_pane_g1_ParamLimits

0xb5dd,	// (0x000581d5) main_usb_pane_g1

0x3f9f,	// (0x00050b97) main_usb_pane_g2_ParamLimits

0x3f9f,	// (0x00050b97) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0005c1a3) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0005c1a3) main_usb_pane_g

0x3fb5,	// (0x00050bad) main_usb_pane_t1_ParamLimits

0x3fb5,	// (0x00050bad) main_usb_pane_t1

0x3fc7,	// (0x00050bbf) main_usb_pane_t2_ParamLimits

0x3fc7,	// (0x00050bbf) main_usb_pane_t2

0x3fd9,	// (0x00050bd1) main_usb_pane_t3_ParamLimits

0x3fd9,	// (0x00050bd1) main_usb_pane_t3

0x3feb,	// (0x00050be3) main_usb_pane_t4_ParamLimits

0x3feb,	// (0x00050be3) main_usb_pane_t4

0x3ffd,	// (0x00050bf5) main_usb_pane_t5_ParamLimits

0x3ffd,	// (0x00050bf5) main_usb_pane_t5

0x400f,	// (0x00050c07) main_usb_pane_t6_ParamLimits

0x400f,	// (0x00050c07) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0005c1a8) main_usb_pane_t_ParamLimits

0x33ab,	// (0x0004ffa3) aid_text_placing

0x33b4,	// (0x0004ffac) main_location2_pane_t1_ParamLimits

0x33c6,	// (0x0004ffbe) main_location2_pane_t2_ParamLimits

0x33d8,	// (0x0004ffd0) main_location2_pane_t3_ParamLimits

0x33ea,	// (0x0004ffe2) main_location2_pane_t4_ParamLimits

0x33ea,	// (0x0004ffe2) main_location2_pane_t4

0xf3cf,	// (0x0005bfc7) main_location2_pane_t_ParamLimits

0xa778,	// (0x00057370) find_pinb_pane_g2_ParamLimits

0xa778,	// (0x00057370) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005bd17) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005bd17) find_pinb_pane_g

0xa784,	// (0x0005737c) find_pinb_pane_t1_ParamLimits

0xa796,	// (0x0005738e) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005bd1c) find_pinb_pane_t_ParamLimits

0xa4e1,	// (0x000570d9) main_call3_pane

0x2acf,	// (0x0004f6c7) cale_month_day_heading_pane_t1_ParamLimits

0x2b55,	// (0x0004f74d) cale_month_day_heading_pane_t2_ParamLimits

0x2be6,	// (0x0004f7de) cale_month_day_heading_pane_t3_ParamLimits

0x2c77,	// (0x0004f86f) cale_month_day_heading_pane_t4_ParamLimits

0x2d0c,	// (0x0004f904) cale_month_day_heading_pane_t5_ParamLimits

0x2dad,	// (0x0004f9a5) cale_month_day_heading_pane_t6_ParamLimits

0x2e4e,	// (0x0004fa46) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005be9e) cale_month_day_heading_pane_t_ParamLimits

0xad22,	// (0x0005791a) smil_status_volume_pane

0x3a9a,	// (0x00050692) postcard_address_pane_ParamLimits

0x3a9a,	// (0x00050692) postcard_address_pane

0x3aac,	// (0x000506a4) postcard_message_pane_ParamLimits

0x3aac,	// (0x000506a4) postcard_message_pane

0x3f7d,	// (0x00050b75) call2_cli_visual_pane_t1_ParamLimits

0x3f7d,	// (0x00050b75) call2_cli_visual_pane_t1

0x479d,	// (0x00051395) postcard_message_pane_t1_ParamLimits

0x479d,	// (0x00051395) postcard_message_pane_t1

0x4786,	// (0x0005137e) postcard_address_pane_t1_ParamLimits

0x4786,	// (0x0005137e) postcard_address_pane_t1

0x4772,	// (0x0005136a) popup_call3_audio_in_window_ParamLimits

0x4772,	// (0x0005136a) popup_call3_audio_in_window

0x45fd,	// (0x000511f5) bg_popup_call3_in_pane_ParamLimits

0x45fd,	// (0x000511f5) bg_popup_call3_in_pane

0x4673,	// (0x0005126b) popup_call3_audio_in_window_g1_ParamLimits

0x4673,	// (0x0005126b) popup_call3_audio_in_window_g1

0x4693,	// (0x0005128b) popup_call3_audio_in_window_g2_ParamLimits

0x4693,	// (0x0005128b) popup_call3_audio_in_window_g2

0x46b3,	// (0x000512ab) popup_call3_audio_in_window_g3_ParamLimits

0x46b3,	// (0x000512ab) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0005c20a) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0005c20a) popup_call3_audio_in_window_g

0x46e4,	// (0x000512dc) popup_call3_audio_in_window_t1_ParamLimits

0x46e4,	// (0x000512dc) popup_call3_audio_in_window_t1

0x4722,	// (0x0005131a) popup_call3_audio_in_window_t2_ParamLimits

0x4722,	// (0x0005131a) popup_call3_audio_in_window_t2

0x4760,	// (0x00051358) popup_call3_audio_in_window_t3_ParamLimits

0x4760,	// (0x00051358) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0005c213) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0005c213) popup_call3_audio_in_window_t

0xa9c6,	// (0x000575be) bg_popup_call3_rect_pane

0xc641,	// (0x00059239) bg_popup_call3_rect_pane_g1

0xa8e2,	// (0x000574da) bg_popup_call3_rect_pane_g2

0xc649,	// (0x00059241) bg_popup_call3_rect_pane_g3

0xc651,	// (0x00059249) bg_popup_call3_rect_pane_g4

0xc659,	// (0x00059251) bg_popup_call3_rect_pane_g5

0xc661,	// (0x00059259) bg_popup_call3_rect_pane_g6

0xc669,	// (0x00059261) bg_popup_call3_rect_pane_g7

0x36ec,	// (0x000502e4) mup_visualizer_osc_pane

0xb4ff,	// (0x000580f7) mup_visualizer_spec_pane

0x462d,	// (0x00051225) call3_video_qcif_pane_ParamLimits

0x462d,	// (0x00051225) call3_video_qcif_pane

0x4640,	// (0x00051238) call3_video_qcif_uncrop_pane_ParamLimits

0x4640,	// (0x00051238) call3_video_qcif_uncrop_pane

0x464e,	// (0x00051246) call3_video_subqcif_pane_ParamLimits

0x464e,	// (0x00051246) call3_video_subqcif_pane

0x4662,	// (0x0005125a) call3_video_subqcif_uncrop_pane_ParamLimits

0x4662,	// (0x0005125a) call3_video_subqcif_uncrop_pane

0x46d3,	// (0x000512cb) popup_call3_audio_in_window_g4_ParamLimits

0x46d3,	// (0x000512cb) popup_call3_audio_in_window_g4

0x45ec,	// (0x000511e4) mup_spec_half_pane

0x45f5,	// (0x000511ed) mup_spec_half_pane_cp

0xc8a6,	// (0x0005949e) mup_osc_middle_pane

0xc8af,	// (0x000594a7) mup_visualizer_osc_pane_g1

0x45cc,	// (0x000511c4) mup_spec_bar_pane_ParamLimits

0x45cc,	// (0x000511c4) mup_spec_bar_pane

0xc893,	// (0x0005948b) mup_spec_bar_pane_g1

0xc89d,	// (0x00059495) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005c1fe) mup_spec_bar_pane_g

0x17ba,	// (0x0004e3b2) aid_cale_week_size_cell_pane_ParamLimits

0x17d4,	// (0x0004e3cc) bg_cale_heading_pane_ParamLimits

0xa91f,	// (0x00057517) bg_cale_pane_cp01_ParamLimits

0x17ec,	// (0x0004e3e4) cale_week_corner_pane_ParamLimits

0x180b,	// (0x0004e403) cale_week_day_heading_pane_ParamLimits

0x1828,	// (0x0004e420) cale_week_scroll_pane_g1_ParamLimits

0x183b,	// (0x0004e433) cale_week_scroll_pane_g2_ParamLimits

0x1853,	// (0x0004e44b) cale_week_scroll_pane_g3_ParamLimits

0x186b,	// (0x0004e463) cale_week_scroll_pane_g4_ParamLimits

0x1883,	// (0x0004e47b) cale_week_scroll_pane_g5_ParamLimits

0x18a3,	// (0x0004e49b) cale_week_scroll_pane_g6_ParamLimits

0x18c3,	// (0x0004e4bb) cale_week_scroll_pane_g7_ParamLimits

0x18e3,	// (0x0004e4db) cale_week_scroll_pane_g8_ParamLimits

0x1907,	// (0x0004e4ff) cale_week_scroll_pane_g9_ParamLimits

0x191f,	// (0x0004e517) cale_week_scroll_pane_g10_ParamLimits

0x1937,	// (0x0004e52f) cale_week_scroll_pane_g11_ParamLimits

0x194f,	// (0x0004e547) cale_week_scroll_pane_g12_ParamLimits

0x1967,	// (0x0004e55f) cale_week_scroll_pane_g13_ParamLimits

0x1967,	// (0x0004e55f) cale_week_scroll_pane_g14_ParamLimits

0x1967,	// (0x0004e55f) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005bda8) cale_week_scroll_pane_g_ParamLimits

0x19a3,	// (0x0004e59b) cale_week_time_pane_ParamLimits

0x19c7,	// (0x0004e5bf) grid_cale_week_pane_ParamLimits

0xa93c,	// (0x00057534) listscroll_cale_week_pane_t1

0xa94e,	// (0x00057546) scroll_pane_cp08_ParamLimits

0x2665,	// (0x0004f25d) cale_month_corner_pane_ParamLimits

0xacf8,	// (0x000578f0) cale_month_pane_t1

0x2a6d,	// (0x0004f665) cale_month_week_pane_ParamLimits

0x3207,	// (0x0004fdff) popup_call_status_window_g1_ParamLimits

0x321b,	// (0x0004fe13) popup_call_status_window_g2_ParamLimits

0x322f,	// (0x0004fe27) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005bf4e) popup_call_status_window_g_ParamLimits

0xb0a8,	// (0x00057ca0) aid_call2_pane

0x03d0,	// (0x0004cfc8) msg_header_pane_g1

0x3a9a,	// (0x00050692) postcard_address2_pane_ParamLimits

0x3a9a,	// (0x00050692) postcard_address2_pane

0x3aac,	// (0x000506a4) postcard_message2_pane_ParamLimits

0x3aac,	// (0x000506a4) postcard_message2_pane

0x457e,	// (0x00051176) message2_row_pane_ParamLimits

0x457e,	// (0x00051176) message2_row_pane

0x459a,	// (0x00051192) address2_row_pane_ParamLimits

0x459a,	// (0x00051192) address2_row_pane

0xc861,	// (0x00059459) postcard_message2_row_pane_g1

0xc869,	// (0x00059461) postcard_message2_row_pane_t1

0xc861,	// (0x00059459) address2_row_pane_g1

0xc869,	// (0x00059461) address2_row_pane_t1

0x1dba,	// (0x0004e9b2) aid_size_cell_vorec

0xa4e1,	// (0x000570d9) main_rss_pane

0x45ad,	// (0x000511a5) rss_list_single_pane_ParamLimits

0x45ad,	// (0x000511a5) rss_list_single_pane

0xc877,	// (0x0005946f) rss_list_single_pane_t1

0xc885,	// (0x0005947d) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0005c1f9) rss_list_single_pane_t

0xa4e1,	// (0x000570d9) main_camera2_pane

0xa4e1,	// (0x000570d9) main_video2_pane

0x4816,	// (0x0005140e) cams_zoom_pane_cp2_ParamLimits

0x4816,	// (0x0005140e) cams_zoom_pane_cp2

0x4836,	// (0x0005142e) image2_vga_pane_ParamLimits

0x4836,	// (0x0005142e) image2_vga_pane

0x4887,	// (0x0005147f) main_camera2_pane_g1_ParamLimits

0x4887,	// (0x0005147f) main_camera2_pane_g1

0x48a7,	// (0x0005149f) main_camera2_pane_g2_ParamLimits

0x48a7,	// (0x0005149f) main_camera2_pane_g2

0x48c7,	// (0x000514bf) main_camera2_pane_g3_ParamLimits

0x48c7,	// (0x000514bf) main_camera2_pane_g3

0x48e7,	// (0x000514df) main_camera2_pane_g4_ParamLimits

0x48e7,	// (0x000514df) main_camera2_pane_g4

0x4907,	// (0x000514ff) main_camera2_pane_g5_ParamLimits

0x4907,	// (0x000514ff) main_camera2_pane_g5

0x4927,	// (0x0005151f) main_camera2_pane_g6_ParamLimits

0x4927,	// (0x0005151f) main_camera2_pane_g6

0x4947,	// (0x0005153f) main_camera2_pane_g7_ParamLimits

0x4947,	// (0x0005153f) main_camera2_pane_g7

0x4967,	// (0x0005155f) main_camera2_pane_g8_ParamLimits

0x4967,	// (0x0005155f) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0005c21a) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0005c21a) main_camera2_pane_g

0x49a7,	// (0x0005159f) main_camera2_pane_t1_ParamLimits

0x49a7,	// (0x0005159f) main_camera2_pane_t1

0x49dc,	// (0x000515d4) main_camera2_pane_t2_ParamLimits

0x49dc,	// (0x000515d4) main_camera2_pane_t2

0x4a02,	// (0x000515fa) main_camera2_pane_t3_ParamLimits

0x4a02,	// (0x000515fa) main_camera2_pane_t3

0x4a60,	// (0x00051658) main_camera2_pane_t4_ParamLimits

0x4a60,	// (0x00051658) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0005c22d) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0005c22d) main_camera2_pane_t

0x4af2,	// (0x000516ea) cams_zoom_pane_cp4_ParamLimits

0x4af2,	// (0x000516ea) cams_zoom_pane_cp4

0x4b08,	// (0x00051700) image2_cif_pane_ParamLimits

0x4b08,	// (0x00051700) image2_cif_pane

0x4b33,	// (0x0005172b) image2_subqcif_pane_ParamLimits

0x4b33,	// (0x0005172b) image2_subqcif_pane

0x4b4d,	// (0x00051745) main_video2_pane_g1_ParamLimits

0x4b4d,	// (0x00051745) main_video2_pane_g1

0x4b67,	// (0x0005175f) main_video2_pane_g2_ParamLimits

0x4b67,	// (0x0005175f) main_video2_pane_g2

0x4b7d,	// (0x00051775) main_video2_pane_g3_ParamLimits

0x4b7d,	// (0x00051775) main_video2_pane_g3

0x4b93,	// (0x0005178b) main_video2_pane_g4_ParamLimits

0x4b93,	// (0x0005178b) main_video2_pane_g4

0x4ba9,	// (0x000517a1) main_video2_pane_g5_ParamLimits

0x4ba9,	// (0x000517a1) main_video2_pane_g5

0x4bbf,	// (0x000517b7) main_video2_pane_g6_ParamLimits

0x4bbf,	// (0x000517b7) main_video2_pane_g6

0x0005,

0xf644,	// (0x0005c23c) main_video2_pane_g_ParamLimits

0xf644,	// (0x0005c23c) main_video2_pane_g

0x4bd9,	// (0x000517d1) main_video2_pane_t1_ParamLimits

0x4bd9,	// (0x000517d1) main_video2_pane_t1

0x4bfd,	// (0x000517f5) main_video2_pane_t2_ParamLimits

0x4bfd,	// (0x000517f5) main_video2_pane_t2

0x4c4b,	// (0x00051843) main_video2_pane_t3_ParamLimits

0x4c4b,	// (0x00051843) main_video2_pane_t3

0x0002,

0xf651,	// (0x0005c249) main_video2_pane_t_ParamLimits

0xf651,	// (0x0005c249) main_video2_pane_t

0x40ca,	// (0x00050cc2) call_muted_g2

0x0001,

0xf5f3,	// (0x0005c1eb) call_muted_g

0xa4e1,	// (0x000570d9) main_mup2_pane

0x4c8f,	// (0x00051887) main_mup2_pane_g1_ParamLimits

0x4c8f,	// (0x00051887) main_mup2_pane_g1

0x4c9b,	// (0x00051893) main_mup2_pane_g2_ParamLimits

0x4c9b,	// (0x00051893) main_mup2_pane_g2

0x9da8,	// (0x000569a0) main_mup_pane_g13_cp1

0x9db0,	// (0x000569a8) mup_volume_pane_cp1

0x4cb7,	// (0x000518af) main_mup2_pane_g4_ParamLimits

0x4cb7,	// (0x000518af) main_mup2_pane_g4

0x4cc9,	// (0x000518c1) main_mup2_pane_g5_ParamLimits

0x4cc9,	// (0x000518c1) main_mup2_pane_g5

0x4cdb,	// (0x000518d3) main_mup2_pane_g6_ParamLimits

0x4cdb,	// (0x000518d3) main_mup2_pane_g6

0x4ced,	// (0x000518e5) main_mup2_pane_g7_ParamLimits

0x4ced,	// (0x000518e5) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0005c250) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0005c250) main_mup2_pane_g

0x4d05,	// (0x000518fd) main_mup2_pane_t1_ParamLimits

0x4d05,	// (0x000518fd) main_mup2_pane_t1

0x4d1b,	// (0x00051913) main_mup2_pane_t2_ParamLimits

0x4d1b,	// (0x00051913) main_mup2_pane_t2

0x4d31,	// (0x00051929) main_mup2_pane_t3_ParamLimits

0x4d31,	// (0x00051929) main_mup2_pane_t3

0x4d47,	// (0x0005193f) main_mup2_pane_t4_ParamLimits

0x4d47,	// (0x0005193f) main_mup2_pane_t4

0x4d5f,	// (0x00051957) main_mup2_pane_t5_ParamLimits

0x4d5f,	// (0x00051957) main_mup2_pane_t5

0x4d77,	// (0x0005196f) main_mup2_pane_t6_ParamLimits

0x4d77,	// (0x0005196f) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0005c25f) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0005c25f) main_mup2_pane_t

0x4da7,	// (0x0005199f) mup2_visualizer_pane_ParamLimits

0x4da7,	// (0x0005199f) mup2_visualizer_pane

0x4dd5,	// (0x000519cd) mup_progress_pane_cp_ParamLimits

0x4dd5,	// (0x000519cd) mup_progress_pane_cp

0x9d93,	// (0x0005698b) mup_volume_pane_cp_ParamLimits

0x9d93,	// (0x0005698b) mup_volume_pane_cp

0x4de9,	// (0x000519e1) mup2_visualizer_pane_g1_ParamLimits

0x4de9,	// (0x000519e1) mup2_visualizer_pane_g1

0xc8e6,	// (0x000594de) mup2_visualizer_pane_g2_ParamLimits

0xc8e6,	// (0x000594de) mup2_visualizer_pane_g2

0x4e00,	// (0x000519f8) mup2_visualizer_pane_g3_ParamLimits

0x4e00,	// (0x000519f8) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0005c26c) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0005c26c) mup2_visualizer_pane_g

0xb726,	// (0x0005831e) aid_size_cell_fmradio

0x427c,	// (0x00050e74) aid_height_parent_landcape

0xab56,	// (0x0005774e) wml_content_pane_cp

0xab5e,	// (0x00057756) wml_tabs_pane

0xab67,	// (0x0005775f) popup_wml_miniature_window

0xab6f,	// (0x00057767) scroll_pane_cp021

0xab83,	// (0x0005777b) wml_content_pane_comp8

0xa4e1,	// (0x000570d9) bg_popup_sub_pane_cp05

0xc904,	// (0x000594fc) popup_wml_miniature_window_g1

0xc90c,	// (0x00059504) wml_miniature_view_pane

0x4e0c,	// (0x00051a04) aid_size_wml_view

0x4e14,	// (0x00051a0c) wml_miniature_view_pane_g1

0x4e1d,	// (0x00051a15) wml_miniature_view_pane_g2

0x4e26,	// (0x00051a1e) wml_miniature_view_pane_g3

0x4e2e,	// (0x00051a26) wml_miniature_view_pane_g4

0x4e36,	// (0x00051a2e) wml_miniature_view_pane_g5

0x4e3e,	// (0x00051a36) wml_miniature_view_pane_g6

0x4e46,	// (0x00051a3e) wml_miniature_view_pane_g7

0x4e4e,	// (0x00051a46) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0005c273) wml_miniature_view_pane_g

0xc914,	// (0x0005950c) background_graphic_ParamLimits

0xc914,	// (0x0005950c) background_graphic

0xc920,	// (0x00059518) wml_tabs_2_pane

0xc929,	// (0x00059521) wml_tabs_3_pane_ParamLimits

0xc929,	// (0x00059521) wml_tabs_3_pane

0xc93b,	// (0x00059533) wml_tabs_4_pane_ParamLimits

0xc93b,	// (0x00059533) wml_tabs_4_pane

0xc951,	// (0x00059549) wml_tabs_5_pane_ParamLimits

0xc951,	// (0x00059549) wml_tabs_5_pane

0xc96b,	// (0x00059563) wml_tabs_pane_g2_ParamLimits

0xc96b,	// (0x00059563) wml_tabs_pane_g2

0xc97f,	// (0x00059577) wml_tabs_pane_g3_ParamLimits

0xc97f,	// (0x00059577) wml_tabs_pane_g3

0x4e56,	// (0x00051a4e) wml_tabs_2_active_pane_ParamLimits

0x4e56,	// (0x00051a4e) wml_tabs_2_active_pane

0x4e6a,	// (0x00051a62) wml_tabs_2_passive_pane_ParamLimits

0x4e6a,	// (0x00051a62) wml_tabs_2_passive_pane

0x4e7e,	// (0x00051a76) wml_tabs_3_active_pane_cp_ParamLimits

0x4e7e,	// (0x00051a76) wml_tabs_3_active_pane_cp

0x4e93,	// (0x00051a8b) wml_tabs_3_passive_pane_ParamLimits

0x4e93,	// (0x00051a8b) wml_tabs_3_passive_pane

0x4ea6,	// (0x00051a9e) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ea6,	// (0x00051a9e) wml_tabs_3_passive_pane_cp

0x4ebd,	// (0x00051ab5) tabs_4_active_pane

0x4ec5,	// (0x00051abd) tabs_4_passive_pane

0x4ecf,	// (0x00051ac7) tabs_4_passive_pane_cp

0x4ed7,	// (0x00051acf) tabs_4_passive_pane_cp2

0x3f97,	// (0x00050b8f) aid_height_text

0x36c2,	// (0x000502ba) mup_volume_cont_pane_ParamLimits

0x36c2,	// (0x000502ba) mup_volume_cont_pane

0x13a6,	// (0x0004df9e) aid_size_cell_pinb

0x13b0,	// (0x0004dfa8) aid_size_list_pinb

0x4dc1,	// (0x000519b9) mup2_volume_cont_pane_ParamLimits

0x4dc1,	// (0x000519b9) mup2_volume_cont_pane

0x9d7f,	// (0x00056977) mup2_volume_cont_pane_g1_ParamLimits

0x9d7f,	// (0x00056977) mup2_volume_cont_pane_g1

0x1059,	// (0x0004dc51) aid_size_cell_touch_ParamLimits

0x1059,	// (0x0004dc51) aid_size_cell_touch

0x1296,	// (0x0004de8e) touch_pane_ParamLimits

0x1296,	// (0x0004de8e) touch_pane

0x9700,	// (0x000562f8) main_rss2_pane

0xc99c,	// (0x00059594) listscroll_rss2_pane

0xc9a5,	// (0x0005959d) rss2_navigation_pane

0xc9ad,	// (0x000595a5) list_rss2_pane

0xb207,	// (0x00057dff) scroll_pane_cp22

0xc9b5,	// (0x000595ad) rss2_navigation_pane_g1

0xc9be,	// (0x000595b6) rss2_navigation_pane_g2

0xc9c6,	// (0x000595be) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0005c284) rss2_navigation_pane_g

0xc9ce,	// (0x000595c6) rss2_navigation_pane_t1

0x4ee1,	// (0x00051ad9) rss2_list_single_pane_ParamLimits

0x4ee1,	// (0x00051ad9) rss2_list_single_pane

0xc9dc,	// (0x000595d4) rss2_list_single_pane_t2

0xc9ea,	// (0x000595e2) rss2_list_single_pane_t3_ParamLimits

0xc9ea,	// (0x000595e2) rss2_list_single_pane_t3

0xca07,	// (0x000595ff) rss2_list_single_pane_t4

0x30ec,	// (0x0004fce4) smil_status_pane_g1

0xa4a4,	// (0x0005709c) main_image2_pane_ParamLimits

0xa4a4,	// (0x0005709c) main_image2_pane

0x4987,	// (0x0005157f) main_camera2_pane_g9_ParamLimits

0x4987,	// (0x0005157f) main_camera2_pane_g9

0x4ab5,	// (0x000516ad) main_camera2_pane_t5_ParamLimits

0x4ab5,	// (0x000516ad) main_camera2_pane_t5

0x9d4f,	// (0x00056947) main_camera2_pane_t6_ParamLimits

0x9d4f,	// (0x00056947) main_camera2_pane_t6

0x4ef6,	// (0x00051aee) main_image2_pane_g1_ParamLimits

0x4ef6,	// (0x00051aee) main_image2_pane_g1

0x3cd3,	// (0x000508cb) smil2_video_pane_ParamLimits

0x3cd3,	// (0x000508cb) smil2_video_pane

0x1091,	// (0x0004dc89) aid_zoom_text_primary_cp

0x975e,	// (0x00056356) popup_preview_fixed_window

0xaabf,	// (0x000576b7) im_reading_pane_g1

0x47fe,	// (0x000513f6) cams2_bc_adjust_pane_cp_ParamLimits

0x47fe,	// (0x000513f6) cams2_bc_adjust_pane_cp

0x4ae4,	// (0x000516dc) cams2_bc_adjust_pane_ParamLimits

0x4ae4,	// (0x000516dc) cams2_bc_adjust_pane

0x9db8,	// (0x000569b0) cams2_bc_adjust_pane_g1

0x9dc0,	// (0x000569b8) cams2_slider_pane

0x9dc9,	// (0x000569c1) cams2_slider_pane_g1

0x9dd2,	// (0x000569ca) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0005c28b) cams2_slider_pane_g

0x149e,	// (0x0004e096) calc_display_pane_ParamLimits

0x14c6,	// (0x0004e0be) calc_paper_pane_ParamLimits

0x14e9,	// (0x0004e0e1) grid_calc_pane_ParamLimits

0x9c68,	// (0x00056860) popup_clock_digital_window_t1_ParamLimits

0xb6c3,	// (0x000582bb) main_image_pane_t1

0x1480,	// (0x0004e078) aid_size_cell_calc_ParamLimits

0x1480,	// (0x0004e078) aid_size_cell_calc

0x42c2,	// (0x00050eba) popup_blid_sat_info2_window_ParamLimits

0x42c2,	// (0x00050eba) popup_blid_sat_info2_window

0xca1d,	// (0x00059615) aid_size_cell_blid

0xca25,	// (0x0005961d) bg_popup_window_pane_cp07

0xca48,	// (0x00059640) grid_popup_blid_pane

0xca52,	// (0x0005964a) heading_pane_cp05_ParamLimits

0xca52,	// (0x0005964a) heading_pane_cp05

0xcb1c,	// (0x00059714) cell_popup_blid_pane_ParamLimits

0xcb1c,	// (0x00059714) cell_popup_blid_pane

0xcb40,	// (0x00059738) cell_popup_blid_pane_g1

0xcb48,	// (0x00059740) cell_popup_blid_pane_t1

0x4d91,	// (0x00051989) mup2_indicator_pane_ParamLimits

0x4d91,	// (0x00051989) mup2_indicator_pane

0xa9c6,	// (0x000575be) mup2_visualizer_osc_pane

0xc8f2,	// (0x000594ea) mup2_visualizer_spec_pane_ParamLimits

0xc8f2,	// (0x000594ea) mup2_visualizer_spec_pane

0x4f0c,	// (0x00051b04) mup2_spec_half_pane

0x4f15,	// (0x00051b0d) mup2_spec_half_pane_cp

0x4f1d,	// (0x00051b15) mup2_spec_bar_pane_ParamLimits

0x4f1d,	// (0x00051b15) mup2_spec_bar_pane

0xc893,	// (0x0005948b) mup2_spec_bar_pane_g1

0xc89d,	// (0x00059495) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005c1fe) mup2_spec_bar_pane_g

0x4f3d,	// (0x00051b35) mup2_osc_middle_pane

0xc8af,	// (0x000594a7) mup2_visualizer_osc_pane_g1

0x9788,	// (0x00056380) popup_number_entry_window_t1_ParamLimits

0x979b,	// (0x00056393) popup_number_entry_window_t2_ParamLimits

0x97ad,	// (0x000563a5) popup_number_entry_window_t3_ParamLimits

0x12e8,	// (0x0004dee0) popup_number_entry_window_t5_ParamLimits

0x12e8,	// (0x0004dee0) popup_number_entry_window_t5

0xf0ca,	// (0x0005bcc2) popup_number_entry_window_t_ParamLimits

0x97bf,	// (0x000563b7) text_title_cp2_ParamLimits

0x9ca7,	// (0x0005689f) aid_hotspot_pointer_text2_pane

0x9ccd,	// (0x000568c5) main_viewer_pane_g9_ParamLimits

0x9ccd,	// (0x000568c5) main_viewer_pane_g9

0xacf8,	// (0x000578f0) cale_month_pane_t1_ParamLimits

0xad35,	// (0x0005792d) bg_cale_pane_ParamLimits

0xad4d,	// (0x00057945) list_cale_pane_ParamLimits

0xad5e,	// (0x00057956) listscroll_cale_day_pane_t1

0xad70,	// (0x00057968) scroll_pane_cp09_ParamLimits

0x36f4,	// (0x000502ec) main_mup_eq_pane_t1_ParamLimits

0x36f4,	// (0x000502ec) main_mup_eq_pane_t1

0x370e,	// (0x00050306) main_mup_eq_pane_t2_ParamLimits

0x370e,	// (0x00050306) main_mup_eq_pane_t2

0x3728,	// (0x00050320) main_mup_eq_pane_t3_ParamLimits

0x3728,	// (0x00050320) main_mup_eq_pane_t3

0x3744,	// (0x0005033c) main_mup_eq_pane_t4_ParamLimits

0x3744,	// (0x0005033c) main_mup_eq_pane_t4

0x3760,	// (0x00050358) main_mup_eq_pane_t5_ParamLimits

0x3760,	// (0x00050358) main_mup_eq_pane_t5

0x377c,	// (0x00050374) main_mup_eq_pane_t6_ParamLimits

0x377c,	// (0x00050374) main_mup_eq_pane_t6

0x3790,	// (0x00050388) main_mup_eq_pane_t7_ParamLimits

0x3790,	// (0x00050388) main_mup_eq_pane_t7

0x37a4,	// (0x0005039c) main_mup_eq_pane_t8_ParamLimits

0x37a4,	// (0x0005039c) main_mup_eq_pane_t8

0x37b8,	// (0x000503b0) main_mup_eq_pane_t9_ParamLimits

0x37b8,	// (0x000503b0) main_mup_eq_pane_t9

0x37d2,	// (0x000503ca) main_mup_eq_pane_t10_ParamLimits

0x37d2,	// (0x000503ca) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005c04d) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005c04d) main_mup_eq_pane_t

0x3881,	// (0x00050479) mup_equalizer_pane_cp5_ParamLimits

0x3895,	// (0x0005048d) mup_equalizer_pane_cp6_ParamLimits

0x38a9,	// (0x000504a1) mup_equalizer_pane_cp7_ParamLimits

0x9700,	// (0x000562f8) main_gallery_pane

0xc8b8,	// (0x000594b0) smil2_volume_pane

0xc8c0,	// (0x000594b8) smil_status_volume_pane_g1_ParamLimits

0xc8d3,	// (0x000594cb) smil_status_volume_pane_g2_ParamLimits

0x9d2d,	// (0x00056925) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0005c203) smil_status_volume_pane_g_ParamLimits

0xca25,	// (0x0005961d) bg_popup_window_pane_cp07_ParamLimits

0xca33,	// (0x0005962b) blid_firmament_pane

0x4f46,	// (0x00051b3e) aid_size_cell_gallery_ParamLimits

0x4f46,	// (0x00051b3e) aid_size_cell_gallery

0x4f5c,	// (0x00051b54) grid_gallery_pane_ParamLimits

0x4f5c,	// (0x00051b54) grid_gallery_pane

0x4f75,	// (0x00051b6d) cell_gallery_pane_ParamLimits

0x4f75,	// (0x00051b6d) cell_gallery_pane

0xcb56,	// (0x0005974e) bg_cell_gallery_focus_pane_ParamLimits

0xcb56,	// (0x0005974e) bg_cell_gallery_focus_pane

0xcb68,	// (0x00059760) cell_gallery_pane_g1_ParamLimits

0xcb68,	// (0x00059760) cell_gallery_pane_g1

0x4fbe,	// (0x00051bb6) cell_gallery_pane_g2_ParamLimits

0x4fbe,	// (0x00051bb6) cell_gallery_pane_g2

0x4fcb,	// (0x00051bc3) cell_gallery_pane_g3_ParamLimits

0x4fcb,	// (0x00051bc3) cell_gallery_pane_g3

0xcb74,	// (0x0005976c) cell_gallery_pane_g4_ParamLimits

0xcb74,	// (0x0005976c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0005c2b1) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0005c2b1) cell_gallery_pane_g

0xcb80,	// (0x00059778) bg_cell_gallery_focus_pane_g1

0xcb88,	// (0x00059780) bg_cell_gallery_focus_pane_g2

0xcb90,	// (0x00059788) bg_cell_gallery_focus_pane_g3

0xcb98,	// (0x00059790) bg_cell_gallery_focus_pane_g4

0xcba0,	// (0x00059798) bg_cell_gallery_focus_pane_g5

0xcba8,	// (0x000597a0) bg_cell_gallery_focus_pane_g6

0xcbb0,	// (0x000597a8) bg_cell_gallery_focus_pane_g7

0xcbb8,	// (0x000597b0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0005c2ba) bg_cell_gallery_focus_pane_g

0xcbc0,	// (0x000597b8) aid_firma_cardinal

0xcbd4,	// (0x000597cc) blid_firmament_pane_t1

0xcbeb,	// (0x000597e3) blid_firmament_pane_t2

0xcc02,	// (0x000597fa) blid_firmament_pane_t3

0xcc19,	// (0x00059811) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0005c2cb) blid_firmament_pane_t

0xcc30,	// (0x00059828) blid_sat_info_pane

0xcc40,	// (0x00059838) blid_sat_info_pane_g1

0xcc40,	// (0x00059838) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0005c2d4) blid_sat_info_pane_g

0xcc4a,	// (0x00059842) blid_sat_info_pane_t1

0xcc58,	// (0x00059850) smil2_volume_content_pane

0xcc61,	// (0x00059859) smil2_volume_pane_g1

0xcc69,	// (0x00059861) smil2_volume_content_pane_g1

0xcc72,	// (0x0005986a) smil2_volume_content_pane_g2

0xcc7b,	// (0x00059873) smil2_volume_content_pane_g3

0xcc84,	// (0x0005987c) smil2_volume_content_pane_g4

0xcc8d,	// (0x00059885) smil2_volume_content_pane_g5

0xcc96,	// (0x0005988e) smil2_volume_content_pane_g6

0xcc9f,	// (0x00059897) smil2_volume_content_pane_g7

0xcca8,	// (0x000598a0) smil2_volume_content_pane_g8

0xccb1,	// (0x000598a9) smil2_volume_content_pane_g9

0xccba,	// (0x000598b2) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0005c2d9) smil2_volume_content_pane_g

0x1a7b,	// (0x0004e673) cale_week_day_heading_pane_t1_ParamLimits

0x1ac0,	// (0x0004e6b8) cale_week_day_heading_pane_t2_ParamLimits

0x1b0a,	// (0x0004e702) cale_week_day_heading_pane_t3_ParamLimits

0x1b54,	// (0x0004e74c) cale_week_day_heading_pane_t4_ParamLimits

0x1b9e,	// (0x0004e796) cale_week_day_heading_pane_t5_ParamLimits

0x1bf0,	// (0x0004e7e8) cale_week_day_heading_pane_t6_ParamLimits

0x1c42,	// (0x0004e83a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005bdc9) cale_week_day_heading_pane_t_ParamLimits

0xa96b,	// (0x00057563) bg_cale_side_pane_ParamLimits

0x1c87,	// (0x0004e87f) cale_week_time_pane_t1_ParamLimits

0x1ca1,	// (0x0004e899) cale_week_time_pane_t2_ParamLimits

0x1cbb,	// (0x0004e8b3) cale_week_time_pane_t3_ParamLimits

0x1cd5,	// (0x0004e8cd) cale_week_time_pane_t4_ParamLimits

0x1cef,	// (0x0004e8e7) cale_week_time_pane_t5_ParamLimits

0x1d09,	// (0x0004e901) cale_week_time_pane_t6_ParamLimits

0x1d23,	// (0x0004e91b) cale_week_time_pane_t7_ParamLimits

0x1d3d,	// (0x0004e935) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005bdd8) cale_week_time_pane_t_ParamLimits

0x1d5d,	// (0x0004e955) cell_cale_week_pane_g2_ParamLimits

0xa96b,	// (0x00057563) bg_cale_side_pane_cp01_ParamLimits

0x2ef7,	// (0x0004faef) cale_month_week_pane_t1_ParamLimits

0x2f10,	// (0x0004fb08) cale_month_week_pane_t2_ParamLimits

0x2f29,	// (0x0004fb21) cale_month_week_pane_t3_ParamLimits

0x2f42,	// (0x0004fb3a) cale_month_week_pane_t4_ParamLimits

0x2f5b,	// (0x0004fb53) cale_month_week_pane_t5_ParamLimits

0x2f74,	// (0x0004fb6c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005bead) cale_month_week_pane_t_ParamLimits

0x9be4,	// (0x000567dc) cell_cale_month_pane_g1_ParamLimits

0x9700,	// (0x000562f8) main_cale_event_viewer_pane

0x9700,	// (0x000562f8) listscroll_cale_event_viewer_pane

0xccc3,	// (0x000598bb) list_cale_ev_pane

0xcccb,	// (0x000598c3) scroll_pane_cp023

0xccd7,	// (0x000598cf) field_cale_ev_pane_ParamLimits

0xccd7,	// (0x000598cf) field_cale_ev_pane

0xccf5,	// (0x000598ed) field_cale_ev_content_pane_ParamLimits

0xccf5,	// (0x000598ed) field_cale_ev_content_pane

0xcd0d,	// (0x00059905) field_cale_ev_pane_g1_ParamLimits

0xcd0d,	// (0x00059905) field_cale_ev_pane_g1

0xcd19,	// (0x00059911) field_cale_ev_pane_g2_ParamLimits

0xcd19,	// (0x00059911) field_cale_ev_pane_g2

0xcd31,	// (0x00059929) field_cale_ev_pane_g3_ParamLimits

0xcd31,	// (0x00059929) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0005c2ee) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0005c2ee) field_cale_ev_pane_g

0xcd49,	// (0x00059941) field_cale_ev_pane_t1_ParamLimits

0xcd49,	// (0x00059941) field_cale_ev_pane_t1

0xcd60,	// (0x00059958) field_cale_ev_content_pane_t1_ParamLimits

0xcd60,	// (0x00059958) field_cale_ev_content_pane_t1

0xb5a9,	// (0x000581a1) bg_button_pane_cp01

0x17a8,	// (0x0004e3a0) listscroll_cale_week_pane_ParamLimits

0xa916,	// (0x0005750e) popup_toolbar_window_cp01

0xa93c,	// (0x00057534) listscroll_cale_week_pane_t1_ParamLimits

0x17a8,	// (0x0004e3a0) listscroll_cale_day_pane_ParamLimits

0xa916,	// (0x0005750e) popup_toolbar_window_cp02

0xad5e,	// (0x00057956) listscroll_cale_day_pane_t1_ParamLimits

0x17a8,	// (0x0004e3a0) main_cale_month_pane_ParamLimits

0x9d18,	// (0x00056910) popup_toolbar_window_cp03_ParamLimits

0x9d18,	// (0x00056910) popup_toolbar_window_cp03

0x3b9b,	// (0x00050793) main_image_pane_g2_ParamLimits

0x3b9b,	// (0x00050793) main_image_pane_g2

0x3bac,	// (0x000507a4) main_image_pane_g3_ParamLimits

0x3bac,	// (0x000507a4) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005c0df) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005c0df) main_image_pane_g

0xb6c3,	// (0x000582bb) main_image_pane_t1_ParamLimits

0x3bbd,	// (0x000507b5) main_image_pane_t2_ParamLimits

0x3bbd,	// (0x000507b5) main_image_pane_t2

0x3bcf,	// (0x000507c7) main_image_pane_t3_ParamLimits

0x3bcf,	// (0x000507c7) main_image_pane_t3

0x3bf7,	// (0x000507ef) main_image_pane_t4_ParamLimits

0x3bf7,	// (0x000507ef) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005c0e6) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005c0e6) main_image_pane_t

0x3c17,	// (0x0005080f) popup_image_details_window_cp01

0x3c21,	// (0x00050819) popup_toobar_trans_pane_cp01_ParamLimits

0x3c21,	// (0x00050819) popup_toobar_trans_pane_cp01

0x43a1,	// (0x00050f99) popup_image_details_window_ParamLimits

0x43a1,	// (0x00050f99) popup_image_details_window

0x9ceb,	// (0x000568e3) popup_image_focus_window

0x47b8,	// (0x000513b0) camera2_autofocus_pane_ParamLimits

0x47b8,	// (0x000513b0) camera2_autofocus_pane

0x9700,	// (0x000562f8) bg_popup_sub_pane_cp06

0xcd7e,	// (0x00059976) popup_image_focus_window_g1

0xcd86,	// (0x0005997e) popup_image_focus_window_g2

0xcd8e,	// (0x00059986) popup_image_focus_window_g3

0xcd96,	// (0x0005998e) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0005c2f5) popup_image_focus_window_g

0xcd9e,	// (0x00059996) popup_image_focus_window_t1

0xcdac,	// (0x000599a4) popup_image_focus_window_t2

0xcdbc,	// (0x000599b4) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0005c2fe) popup_image_focus_window_t

0xcdca,	// (0x000599c2) camera2_autofocus_pane_g1

0xa4a4,	// (0x0005709c) bg_tb_trans_pane_cp01

0xcdd8,	// (0x000599d0) popup_image_details_window_g1

0xcdeb,	// (0x000599e3) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0005c310) popup_image_details_window_g

0xce14,	// (0x00059a0c) popup_image_details_window_t1

0xce26,	// (0x00059a1e) popup_image_details_window_t2

0xce3f,	// (0x00059a37) popup_image_details_window_t3

0xce53,	// (0x00059a4b) popup_image_details_window_t4

0xce6e,	// (0x00059a66) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0005c317) popup_image_details_window_t

0xa7ed,	// (0x000573e5) bg_calc_paper_pane_ParamLimits

0x9700,	// (0x000562f8) grid_highlight_pane_cp013

0x9b54,	// (0x0005674c) list_calc_pane_ParamLimits

0x9b66,	// (0x0005675e) scroll_pane_cp024

0xa801,	// (0x000573f9) bg_calc_display_pane_ParamLimits

0x15e7,	// (0x0004e1df) calc_display_pane_t1_ParamLimits

0x15f9,	// (0x0004e1f1) calc_display_pane_t2_ParamLimits

0x9b6e,	// (0x00056766) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005bd49) calc_display_pane_t_ParamLimits

0x16b3,	// (0x0004e2ab) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005bd66) cell_calc_pane_g

0x16bc,	// (0x0004e2b4) cell_calc_pane_t1

0xa860,	// (0x00057458) grid_highlight_pane_cp02_ParamLimits

0xa876,	// (0x0005746e) toolbar_button_pane_cp01_ParamLimits

0xa876,	// (0x0005746e) toolbar_button_pane_cp01

0xb708,	// (0x00058300) temp_image_control_pane_ParamLimits

0xb708,	// (0x00058300) temp_image_control_pane

0xa4a4,	// (0x0005709c) main_mp3_pane

0xce88,	// (0x00059a80) temp_image_control_pane_g1_ParamLimits

0xce88,	// (0x00059a80) temp_image_control_pane_g1

0xce96,	// (0x00059a8e) temp_image_control_pane_g2_ParamLimits

0xce96,	// (0x00059a8e) temp_image_control_pane_g2

0xcea8,	// (0x00059aa0) temp_image_control_pane_g3_ParamLimits

0xcea8,	// (0x00059aa0) temp_image_control_pane_g3

0x5008,	// (0x00051c00) temp_image_control_pane_g4_ParamLimits

0x5008,	// (0x00051c00) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0005c322) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0005c322) temp_image_control_pane_g

0xce88,	// (0x00059a80) main_mp3_pane_g1

0x501b,	// (0x00051c13) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0005c32b) main_mp3_pane_g

0xceeb,	// (0x00059ae3) main_mp3_pane_t1

0xa9ce,	// (0x000575c6) main_camera_pane_g8_ParamLimits

0xa9ce,	// (0x000575c6) main_camera_pane_g8

0x2057,	// (0x0004ec4f) main_video_pane_g7_ParamLimits

0x2057,	// (0x0004ec4f) main_video_pane_g7

0x9d6d,	// (0x00056965) main_camera2_pane_t7_ParamLimits

0x9d6d,	// (0x00056965) main_camera2_pane_t7

0xab16,	// (0x0005770e) scroll_pane_cp025_ParamLimits

0xab16,	// (0x0005770e) scroll_pane_cp025

0xab2a,	// (0x00057722) scroll_pane_cp026_ParamLimits

0xab2a,	// (0x00057722) scroll_pane_cp026

0xab39,	// (0x00057731) wml_content_pane_ParamLimits

0x9700,	// (0x000562f8) main_touch_calib_pane

0x50ef,	// (0x00051ce7) main_touch_calib_pane_g1

0x5101,	// (0x00051cf9) main_touch_calib_pane_g2

0x5113,	// (0x00051d0b) main_touch_calib_pane_g3

0x5125,	// (0x00051d1d) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0005c349) main_touch_calib_pane_g

0x5137,	// (0x00051d2f) main_touch_calib_pane_t1

0x5151,	// (0x00051d49) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0005c352) main_touch_calib_pane_t

0xb2e3,	// (0x00057edb) mup_progress_pane_cp02

0xb318,	// (0x00057f10) navi_pane_g1

0xb3d3,	// (0x00057fcb) navi_pane_mp_t3

0xa4a4,	// (0x0005709c) main_mp3_pane_ParamLimits

0x4526,	// (0x0005111e) navi_pane_ParamLimits

0xce88,	// (0x00059a80) main_mp3_pane_g1_ParamLimits

0x501b,	// (0x00051c13) main_mp3_pane_g2_ParamLimits

0x5029,	// (0x00051c21) main_mp3_pane_g3_ParamLimits

0x5029,	// (0x00051c21) main_mp3_pane_g3

0x5037,	// (0x00051c2f) main_mp3_pane_g4_ParamLimits

0x5037,	// (0x00051c2f) main_mp3_pane_g4

0xceb8,	// (0x00059ab0) main_mp3_pane_g5_ParamLimits

0xceb8,	// (0x00059ab0) main_mp3_pane_g5

0xcec6,	// (0x00059abe) main_mp3_pane_g6_ParamLimits

0xcec6,	// (0x00059abe) main_mp3_pane_g6

0xced3,	// (0x00059acb) main_mp3_pane_g7_ParamLimits

0xced3,	// (0x00059acb) main_mp3_pane_g7

0xcedf,	// (0x00059ad7) main_mp3_pane_g8_ParamLimits

0xcedf,	// (0x00059ad7) main_mp3_pane_g8

0xf733,	// (0x0005c32b) main_mp3_pane_g_ParamLimits

0x5043,	// (0x00051c3b) main_mp3_pane_t2

0x5051,	// (0x00051c49) main_mp3_pane_t3

0xcef9,	// (0x00059af1) main_mp3_pane_t4

0xcf07,	// (0x00059aff) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0005c33c) main_mp3_pane_t

0xcf15,	// (0x00059b0d) mup_progress_pane_cp01

0x1091,	// (0x0004dc89) aid_zoom_text_secondary2

0xccc3,	// (0x000598bb) list_cale_ev2_pane

0xcccb,	// (0x000598c3) scroll_pane_cp023_ParamLimits

0x51a7,	// (0x00051d9f) field_cale_ev2_pane_ParamLimits

0x51a7,	// (0x00051d9f) field_cale_ev2_pane

0x51c7,	// (0x00051dbf) field_cale_ev2_pane_g1_ParamLimits

0x51c7,	// (0x00051dbf) field_cale_ev2_pane_g1

0x51d3,	// (0x00051dcb) field_cale_ev2_pane_g2_ParamLimits

0x51d3,	// (0x00051dcb) field_cale_ev2_pane_g2

0x51eb,	// (0x00051de3) field_cale_ev2_pane_g3_ParamLimits

0x51eb,	// (0x00051de3) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0005c35d) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0005c35d) field_cale_ev2_pane_g

0x0421,	// (0x0004d019) field_cale_ev2_pane_t1_ParamLimits

0x0421,	// (0x0004d019) field_cale_ev2_pane_t1

0x0438,	// (0x0004d030) field_cale_ev2_pane_t2_ParamLimits

0x0438,	// (0x0004d030) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0005c366) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0005c366) field_cale_ev2_pane_t

0x3a50,	// (0x00050648) main_postcard_pane_g5_ParamLimits

0x3a50,	// (0x00050648) main_postcard_pane_g5

0x3a66,	// (0x0005065e) main_postcard_pane_g6_ParamLimits

0x3a66,	// (0x0005065e) main_postcard_pane_g6

0x1e23,	// (0x0004ea1b) camera2_autofocus_pane_cp_ParamLimits

0x1e23,	// (0x0004ea1b) camera2_autofocus_pane_cp

0xa4a4,	// (0x0005709c) main_mup3_pane

0x520f,	// (0x00051e07) main_mup3_pane_g1_ParamLimits

0x520f,	// (0x00051e07) main_mup3_pane_g1

0x5231,	// (0x00051e29) main_mup3_pane_g2_ParamLimits

0x5231,	// (0x00051e29) main_mup3_pane_g2

0x52af,	// (0x00051ea7) main_mup3_pane_g3_ParamLimits

0x52af,	// (0x00051ea7) main_mup3_pane_g3

0x52f5,	// (0x00051eed) main_mup3_pane_g4_ParamLimits

0x52f5,	// (0x00051eed) main_mup3_pane_g4

0x533b,	// (0x00051f33) main_mup3_pane_g5_ParamLimits

0x533b,	// (0x00051f33) main_mup3_pane_g5

0x5381,	// (0x00051f79) main_mup3_pane_g6_ParamLimits

0x5381,	// (0x00051f79) main_mup3_pane_g6

0xcf3d,	// (0x00059b35) main_mup3_pane_g7_ParamLimits

0xcf3d,	// (0x00059b35) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0005c376) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0005c376) main_mup3_pane_g

0x53ff,	// (0x00051ff7) main_mup3_pane_t1_ParamLimits

0x53ff,	// (0x00051ff7) main_mup3_pane_t1

0x5473,	// (0x0005206b) main_mup3_pane_t2_ParamLimits

0x5473,	// (0x0005206b) main_mup3_pane_t2

0x5547,	// (0x0005213f) main_mup3_pane_t4_ParamLimits

0x5547,	// (0x0005213f) main_mup3_pane_t4

0x559d,	// (0x00052195) main_mup3_pane_t5_ParamLimits

0x559d,	// (0x00052195) main_mup3_pane_t5

0x5659,	// (0x00052251) main_mup3_pane_t6_ParamLimits

0x5659,	// (0x00052251) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0005c387) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0005c387) main_mup3_pane_t

0x5711,	// (0x00052309) mup3_progress_pane_ParamLimits

0x5711,	// (0x00052309) mup3_progress_pane

0x57a7,	// (0x0005239f) popup_mup3_control_window_ParamLimits

0x57a7,	// (0x0005239f) popup_mup3_control_window

0xcf4b,	// (0x00059b43) popup_mup3_text_window

0x57d9,	// (0x000523d1) mup3_progress_pane_t1

0x57f8,	// (0x000523f0) mup3_progress_pane_t2

0xcf53,	// (0x00059b4b) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0005c394) mup3_progress_pane_t

0xcf70,	// (0x00059b68) mup_progress_pane_cp03

0x9700,	// (0x000562f8) bg_tb_trans_pane_cp04

0x5817,	// (0x0005240f) mup3_volume_pane

0x581f,	// (0x00052417) popup_mup3_control_window_g1

0x5828,	// (0x00052420) mup3_volume_pane_g1

0x5831,	// (0x00052429) mup3_volume_pane_g2

0x583a,	// (0x00052432) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0005c39b) mup3_volume_pane_g

0x9700,	// (0x000562f8) bg_tb_trans_pane_cp03

0xcf80,	// (0x00059b78) popup_mup3_text_window_g1

0xcf88,	// (0x00059b80) popup_mup3_text_window_t1

0xa849,	// (0x00057441) list_calc_item_pane_g1_ParamLimits

0xc993,	// (0x0005958b) mup_volume_pane_cp_g1

0x516b,	// (0x00051d63) main_touch_calib_pane_t3

0x517f,	// (0x00051d77) main_touch_calib_pane_t4

0x5193,	// (0x00051d8b) main_touch_calib_pane_t5

0x970a,	// (0x00056302) aid_cell_size_toolbar2

0x9712,	// (0x0005630a) aid_popup3_width_pane

0x1089,	// (0x0004dc81) aid_zoom_text_msg_primary

0x1e02,	// (0x0004e9fa) vorec_t7

0xa80d,	// (0x00057405) bg_calc_paper_pane_g1_ParamLimits

0xa819,	// (0x00057411) bg_calc_paper_pane_g2_ParamLimits

0xa825,	// (0x0005741d) bg_calc_paper_pane_g3_ParamLimits

0xa831,	// (0x00057429) bg_calc_paper_pane_g4_ParamLimits

0xa83d,	// (0x00057435) bg_calc_paper_pane_g5_ParamLimits

0x1640,	// (0x0004e238) bg_calc_paper_pane_g6_ParamLimits

0x164f,	// (0x0004e247) bg_calc_paper_pane_g7_ParamLimits

0x165e,	// (0x0004e256) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005bd50) bg_calc_paper_pane_g_ParamLimits

0x1671,	// (0x0004e269) calc_bg_paper_pane_g9_ParamLimits

0x1f6e,	// (0x0004eb66) image_qvga_pane_ParamLimits

0x1f6e,	// (0x0004eb66) image_qvga_pane

0xa73c,	// (0x00057334) bg_popup_sub_pane_cp04_ParamLimits

0xb63f,	// (0x00058237) popup_mup_playback_window_g1_ParamLimits

0xb64b,	// (0x00058243) popup_mup_playback_window_t1_ParamLimits

0xb660,	// (0x00058258) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005c0da) popup_mup_playback_window_t_ParamLimits

0x4cab,	// (0x000518a3) main_mup2_pane_g3_ParamLimits

0x4cab,	// (0x000518a3) main_mup2_pane_g3

0x2267,	// (0x0004ee5f) popup_toolbar_window_cp04

0xba42,	// (0x0005863a) popup_call2_audio_second_window_g3_ParamLimits

0xba42,	// (0x0005863a) popup_call2_audio_second_window_g3

0xbe4c,	// (0x00058a44) popup_call2_audio_first_window_g4_ParamLimits

0xbe4c,	// (0x00058a44) popup_call2_audio_first_window_g4

0xc4cb,	// (0x000590c3) popup_call2_audio_in_window_g4_ParamLimits

0xc4cb,	// (0x000590c3) popup_call2_audio_in_window_g4

0x3b7d,	// (0x00050775) aid_area_sk_bg_cut_ParamLimits

0x3b7d,	// (0x00050775) aid_area_sk_bg_cut

0xb675,	// (0x0005826d) aid_area_sk_bg_cut_2_ParamLimits

0xb675,	// (0x0005826d) aid_area_sk_bg_cut_2

0x4fae,	// (0x00051ba6) aid_placing_details_win

0x4fb6,	// (0x00051bae) aid_placing_details_win_2

0xcdca,	// (0x000599c2) camera2_autofocus_pane_g1_ParamLimits

0x122f,	// (0x0004de27) popup_fixed_preview_cale_window_ParamLimits

0x122f,	// (0x0004de27) popup_fixed_preview_cale_window

0xb451,	// (0x00058049) navi_slider_pane_g3

0xb45a,	// (0x00058052) navi_slider_pane_g4

0xb463,	// (0x0005805b) navi_slider_pane_g5

0xb451,	// (0x00058049) navi_slider_pane_g6

0x9c8e,	// (0x00056886) navi_slider_pane_g7

0xb576,	// (0x0005816e) mup_scale_pane_g3

0xb57f,	// (0x00058177) mup_scale_pane_g4

0xb588,	// (0x00058180) mup_scale_pane_g5

0x38bd,	// (0x000504b5) mup_scale_pane_g6

0x38c6,	// (0x000504be) mup_scale_pane_g7

0xb451,	// (0x00058049) cams2_slider_pane_g3

0xca15,	// (0x0005960d) cams2_slider_pane_g4

0x9ddb,	// (0x000569d3) cams2_slider_pane_g5

0xb451,	// (0x00058049) cams2_slider_pane_g6

0x9de3,	// (0x000569db) cams2_slider_pane_g7

0xcc40,	// (0x00059838) camera2_autofocus_pane_cp_g1

0xc82c,	// (0x00059424) bg_popup_preview_window_pane_cp02_ParamLimits

0xc82c,	// (0x00059424) bg_popup_preview_window_pane_cp02

0xcf96,	// (0x00059b8e) list_fp_cale_pane_ParamLimits

0xcf96,	// (0x00059b8e) list_fp_cale_pane

0xcfa2,	// (0x00059b9a) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfa2,	// (0x00059b9a) popup_fixed_preview_cale_window_t1

0x5843,	// (0x0005243b) popup_fixed_preview_cale_window_t2_ParamLimits

0x5843,	// (0x0005243b) popup_fixed_preview_cale_window_t2

0x5858,	// (0x00052450) popup_fixed_preview_cale_window_t3_ParamLimits

0x5858,	// (0x00052450) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0005c3a2) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0005c3a2) popup_fixed_preview_cale_window_t

0x586d,	// (0x00052465) list_single_fp_cale_pane_ParamLimits

0x586d,	// (0x00052465) list_single_fp_cale_pane

0xcfc0,	// (0x00059bb8) list_single_fp_cale_pane_g1_ParamLimits

0xcfc0,	// (0x00059bb8) list_single_fp_cale_pane_g1

0xcfcc,	// (0x00059bc4) list_single_fp_cale_pane_g2_ParamLimits

0xcfcc,	// (0x00059bc4) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0005c3a9) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0005c3a9) list_single_fp_cale_pane_g

0xcfe5,	// (0x00059bdd) list_single_fp_cale_pane_t1_ParamLimits

0xcfe5,	// (0x00059bdd) list_single_fp_cale_pane_t1

0xcff7,	// (0x00059bef) list_single_fp_cale_pane_t2_ParamLimits

0xcff7,	// (0x00059bef) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0005c3b0) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0005c3b0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9700,	// (0x000562f8) main_dialer_pane

0x5882,	// (0x0005247a) aid_cell_size_keypad

0x588c,	// (0x00052484) dialer_ne_pane

0x5894,	// (0x0005248c) grid_dialer_command_1_pane

0x589c,	// (0x00052494) grid_dialer_command_2_pane

0x58a4,	// (0x0005249c) grid_dialer_keypad_pane

0x58b6,	// (0x000524ae) bg_popup_call_pane_cp06_ParamLimits

0x58b6,	// (0x000524ae) bg_popup_call_pane_cp06

0x58c2,	// (0x000524ba) dialer_ne_clear_pane_ParamLimits

0x58c2,	// (0x000524ba) dialer_ne_clear_pane

0xd02a,	// (0x00059c22) dialer_ne_pane_g1

0xd032,	// (0x00059c2a) dialer_ne_pane_t1_ParamLimits

0xd032,	// (0x00059c2a) dialer_ne_pane_t1

0x58ce,	// (0x000524c6) dialer_ne_pane_t2_ParamLimits

0x58ce,	// (0x000524c6) dialer_ne_pane_t2

0x58f8,	// (0x000524f0) dialer_ne_pane_t3_ParamLimits

0x58f8,	// (0x000524f0) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0005c3b5) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0005c3b5) dialer_ne_pane_t

0x5928,	// (0x00052520) dialer_ne_pane_t3_copy1_ParamLimits

0x5928,	// (0x00052520) dialer_ne_pane_t3_copy1

0x5957,	// (0x0005254f) cell_dialer_keypad_pane_ParamLimits

0x5957,	// (0x0005254f) cell_dialer_keypad_pane

0x596e,	// (0x00052566) cell_dialer_command_1_pane_ParamLimits

0x596e,	// (0x00052566) cell_dialer_command_1_pane

0x5984,	// (0x0005257c) cell_dialer_command_2_pane_ParamLimits

0x5984,	// (0x0005257c) cell_dialer_command_2_pane

0xd044,	// (0x00059c3c) bg_button_pane_cp02_ParamLimits

0xd044,	// (0x00059c3c) bg_button_pane_cp02

0x5993,	// (0x0005258b) cell_dialer_keypad_pane_g1_ParamLimits

0x5993,	// (0x0005258b) cell_dialer_keypad_pane_g1

0xd044,	// (0x00059c3c) bg_button_pane_cp03_ParamLimits

0xd044,	// (0x00059c3c) bg_button_pane_cp03

0x59a7,	// (0x0005259f) cell_dialer_command_1_pane_g1_ParamLimits

0x59a7,	// (0x0005259f) cell_dialer_command_1_pane_g1

0xd050,	// (0x00059c48) bg_button_pane_cp04

0x59bb,	// (0x000525b3) cell_dialer_command_2_pane_g1

0xa9c6,	// (0x000575be) bg_button_pane_cp06

0xd058,	// (0x00059c50) dialer_ne_clear_pane_g1

0xb324,	// (0x00057f1c) navi_pane_g2

0xb352,	// (0x00057f4a) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005bfdd) navi_pane_g

0xb3e1,	// (0x00057fd9) navi_pane_mv_g2

0xb408,	// (0x00058000) navi_pane_mv_g5

0x3481,	// (0x00050079) navi_pane_mv_t1

0xa801,	// (0x000573f9) main_clock2_pane

0x5a06,	// (0x000525fe) main_clock2_list_pane_ParamLimits

0x5a06,	// (0x000525fe) main_clock2_list_pane

0x5a3c,	// (0x00052634) main_clock2_pane_t1_ParamLimits

0x5a3c,	// (0x00052634) main_clock2_pane_t1

0x5a78,	// (0x00052670) main_clock2_pane_t2_ParamLimits

0x5a78,	// (0x00052670) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005c3c1) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005c3c1) main_clock2_pane_t

0x5b16,	// (0x0005270e) popup_clock_analogue_window_cp03_ParamLimits

0x5b16,	// (0x0005270e) popup_clock_analogue_window_cp03

0x5b3b,	// (0x00052733) popup_clock_digital_window_cp02_ParamLimits

0x5b3b,	// (0x00052733) popup_clock_digital_window_cp02

0x5bac,	// (0x000527a4) main_clock2_list_single_pane_ParamLimits

0x5bac,	// (0x000527a4) main_clock2_list_single_pane

0xa9c6,	// (0x000575be) list_highlight_pane_cp05

0xd096,	// (0x00059c8e) main_clock2_list_single_pane_t1

0x2267,	// (0x0004ee5f) popup_toolbar_window_cp04_ParamLimits

0x4fd8,	// (0x00051bd0) camera2_autofocus_pane_g2_ParamLimits

0x4fd8,	// (0x00051bd0) camera2_autofocus_pane_g2

0x4fe4,	// (0x00051bdc) camera2_autofocus_pane_g3_ParamLimits

0x4fe4,	// (0x00051bdc) camera2_autofocus_pane_g3

0x4ff0,	// (0x00051be8) camera2_autofocus_pane_g4_ParamLimits

0x4ff0,	// (0x00051be8) camera2_autofocus_pane_g4

0x4ffc,	// (0x00051bf4) camera2_autofocus_pane_g5_ParamLimits

0x4ffc,	// (0x00051bf4) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0005c305) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0005c305) camera2_autofocus_pane_g

0xcf1d,	// (0x00059b15) camera2_autofocus_pane_cp_g2

0xcf25,	// (0x00059b1d) camera2_autofocus_pane_cp_g3

0xcf2d,	// (0x00059b25) camera2_autofocus_pane_cp_g4

0xcf35,	// (0x00059b2d) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0005c36b) camera2_autofocus_pane_cp_g

0x58ae,	// (0x000524a6) popup_dialer_spcha_window

0x9700,	// (0x000562f8) bg_popup_sub_pane_cp07

0xd0a4,	// (0x00059c9c) list_spcha_pane

0xd0ac,	// (0x00059ca4) list_single_spcha_pane_ParamLimits

0xd0ac,	// (0x00059ca4) list_single_spcha_pane

0x9700,	// (0x000562f8) list_highlight_pane_cp06

0xd0bd,	// (0x00059cb5) list_single_spcha_pane_t1

0xc275,	// (0x00058e6d) popup_call2_audio_out_window_g4_ParamLimits

0xc275,	// (0x00058e6d) popup_call2_audio_out_window_g4

0x9700,	// (0x000562f8) main_imed2_pane

0x9cf3,	// (0x000568eb) popup_imed_adjust2_window

0x43b9,	// (0x00050fb1) popup_imed_trans_window_ParamLimits

0x43b9,	// (0x00050fb1) popup_imed_trans_window

0xca7e,	// (0x00059676) popup_blid_sat_info2_window_t1

0xca8c,	// (0x00059684) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0005c29a) popup_blid_sat_info2_window_t

0x5c56,	// (0x0005284e) aid_size_cell_colour_35

0x5c76,	// (0x0005286e) aid_size_cell_colour_112

0x5c96,	// (0x0005288e) aid_size_cell_effect

0xc838,	// (0x00059430) bg_tb_trans_pane_cp02

0xae67,	// (0x00057a5f) heading_imed_pane

0x5cb6,	// (0x000528ae) listscroll_imed_pane

0xd0cb,	// (0x00059cc3) heading_imed_pane_g1

0xd0d3,	// (0x00059ccb) heading_imed_pane_t1

0xd0e1,	// (0x00059cd9) grid_imed_colour_35_pane_ParamLimits

0xd0e1,	// (0x00059cd9) grid_imed_colour_35_pane

0x5cc2,	// (0x000528ba) grid_imed_effect_pane

0xd0f8,	// (0x00059cf0) list_imed_aspect_pane

0x5cd8,	// (0x000528d0) scroll_pane_cp027_ParamLimits

0x5cd8,	// (0x000528d0) scroll_pane_cp027

0x5ce9,	// (0x000528e1) cell_imed_effect_pane_ParamLimits

0x5ce9,	// (0x000528e1) cell_imed_effect_pane

0xd100,	// (0x00059cf8) cell_imed_colour_pane_ParamLimits

0xd100,	// (0x00059cf8) cell_imed_colour_pane

0xd142,	// (0x00059d3a) cell_imed_colour_pane_g1_ParamLimits

0xd142,	// (0x00059d3a) cell_imed_colour_pane_g1

0xd153,	// (0x00059d4b) hgihlgiht_grid_pane_cp016_ParamLimits

0xd153,	// (0x00059d4b) hgihlgiht_grid_pane_cp016

0x5d10,	// (0x00052908) cell_imed_effect_pane_g1

0x5d18,	// (0x00052910) grid_highlight_pane_cp017

0xd164,	// (0x00059d5c) list_imed_single_pane_ParamLimits

0xd164,	// (0x00059d5c) list_imed_single_pane

0x9700,	// (0x000562f8) list_highlight_pane_cp07

0xd179,	// (0x00059d71) list_imed_aspect_pane_comp1_t1

0xc838,	// (0x00059430) bg_tb_trans_pane_cp05

0xd19b,	// (0x00059d93) popup_imed_adjust2_window_g1

0xd1c2,	// (0x00059dba) popup_imed_adjust2_window_t1

0xd1da,	// (0x00059dd2) slider_imed_adjust_pane

0xd1ee,	// (0x00059de6) slider_imed_adjust_pane_g1

0xd1fe,	// (0x00059df6) slider_imed_adjust_pane_g2

0xd20e,	// (0x00059e06) slider_imed_adjust_pane_g3

0xd21f,	// (0x00059e17) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005c3de) slider_imed_adjust_pane_g

0x5d21,	// (0x00052919) aid_size_cell_clipart2

0x5d2d,	// (0x00052925) grid_imed_clipart_pane

0xd230,	// (0x00059e28) scroll_pane_cp031

0x5d37,	// (0x0005292f) cell_imed_clipart_pane_ParamLimits

0x5d37,	// (0x0005292f) cell_imed_clipart_pane

0x5d59,	// (0x00052951) cell_imed_clipart_pane_g1

0x9700,	// (0x000562f8) grid_highlight_pane_cp014

0x5a1b,	// (0x00052613) main_clock2_pane_g1_ParamLimits

0x5a1b,	// (0x00052613) main_clock2_pane_g1

0x5b57,	// (0x0005274f) aid_call2_pane_cp10

0x5b69,	// (0x00052761) aid_call_pane_cp10

0xb285,	// (0x00057e7d) popup_clock_analogue_window_cp10_g1

0xb285,	// (0x00057e7d) popup_clock_analogue_window_cp10_g2

0x5b7b,	// (0x00052773) popup_clock_analogue_window_cp10_g3

0x5b7b,	// (0x00052773) popup_clock_analogue_window_cp10_g4

0xb285,	// (0x00057e7d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0005c3cc) popup_clock_analogue_window_cp10_g

0x5b8d,	// (0x00052785) popup_clock_analogue_window_cp10_t1

0x5bbe,	// (0x000527b6) clock_digital_number_pane_cp10_ParamLimits

0x5bbe,	// (0x000527b6) clock_digital_number_pane_cp10

0x5bd6,	// (0x000527ce) clock_digital_number_pane_cp11_ParamLimits

0x5bd6,	// (0x000527ce) clock_digital_number_pane_cp11

0x5bee,	// (0x000527e6) clock_digital_number_pane_cp12_ParamLimits

0x5bee,	// (0x000527e6) clock_digital_number_pane_cp12

0x5c06,	// (0x000527fe) clock_digital_number_pane_cp13_ParamLimits

0x5c06,	// (0x000527fe) clock_digital_number_pane_cp13

0x5c1e,	// (0x00052816) clock_digital_separator_pane_cp10_ParamLimits

0x5c1e,	// (0x00052816) clock_digital_separator_pane_cp10

0x5c36,	// (0x0005282e) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c36,	// (0x0005282e) popup_clock_digital_window_cp02_t1

0xa734,	// (0x0005732c) clock_digital_number_pane_cp10_g1

0xa734,	// (0x0005732c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0005c3e7) clock_digital_number_pane_cp10_g

0xa734,	// (0x0005732c) clock_digital_separator_pane_cp10_g1

0xa734,	// (0x0005732c) clock_digital_separator_pane_g2_cp10

0xb410,	// (0x00058008) navi_pane_vded_g4

0xb419,	// (0x00058011) navi_pane_vded_g5

0xb422,	// (0x0005801a) navi_pane_vded_t1

0x9700,	// (0x000562f8) main_vded_pane

0x5d62,	// (0x0005295a) main_vded_pane_g1

0x5d6c,	// (0x00052964) main_vded_pane_g2

0x5d76,	// (0x0005296e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0005c3ec) main_vded_pane_g

0x5d80,	// (0x00052978) main_vded_pane_t1

0x5d8e,	// (0x00052986) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005c3f3) main_vded_pane_t

0x5d9c,	// (0x00052994) vded_slider_pane

0x5da4,	// (0x0005299c) vded_video_pane

0xd238,	// (0x00059e30) vded_video_pane_g1

0x5dac,	// (0x000529a4) vded_video_pane_g2

0xcc40,	// (0x00059838) vded_video_pane_g3

0x0002,

0xf800,	// (0x0005c3f8) vded_video_pane_g

0xd242,	// (0x00059e3a) vded_slider_pane_g1

0xc993,	// (0x0005958b) vded_slider_pane_g2

0xd24b,	// (0x00059e43) vded_slider_pane_g3

0xd254,	// (0x00059e4c) vded_slider_pane_g4

0xd25d,	// (0x00059e55) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005c3ff) vded_slider_pane_g

0x578f,	// (0x00052387) mup3_rocker_pane_ParamLimits

0x578f,	// (0x00052387) mup3_rocker_pane

0x5db5,	// (0x000529ad) mup3_control_keys_pane_g1

0x5dbd,	// (0x000529b5) mup3_control_keys_pane_g2

0x5dc5,	// (0x000529bd) mup3_control_keys_pane_g3

0x5dcd,	// (0x000529c5) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0005c40a) mup3_control_keys_pane_g

0x1266,	// (0x0004de5e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1266,	// (0x0004de5e) popup_toolbar2_fixed_window_cp01

0x57c3,	// (0x000523bb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57c3,	// (0x000523bb) popup_toolbar2_fixed_window_cp02

0xbbb4,	// (0x000587ac) popup_call2_audio_second_window_t4_ParamLimits

0xbbb4,	// (0x000587ac) popup_call2_audio_second_window_t4

0xc0e2,	// (0x00058cda) popup_call2_audio_first_window_t6_ParamLimits

0xc0e2,	// (0x00058cda) popup_call2_audio_first_window_t6

0xc378,	// (0x00058f70) popup_call2_audio_out_window_t6_ParamLimits

0xc378,	// (0x00058f70) popup_call2_audio_out_window_t6

0x9700,	// (0x000562f8) main_vitu_pane

0x5ddd,	// (0x000529d5) aid_size_cell_itu_ParamLimits

0x5ddd,	// (0x000529d5) aid_size_cell_itu

0xa4a4,	// (0x0005709c) bg_popup_window_pane_cp08_ParamLimits

0xa4a4,	// (0x0005709c) bg_popup_window_pane_cp08

0x5df3,	// (0x000529eb) field_vitu_entry_pane_ParamLimits

0x5df3,	// (0x000529eb) field_vitu_entry_pane

0x5e0a,	// (0x00052a02) grid_vitu_function_pane_ParamLimits

0x5e0a,	// (0x00052a02) grid_vitu_function_pane

0x5e25,	// (0x00052a1d) grid_vitu_itu_pane_ParamLimits

0x5e25,	// (0x00052a1d) grid_vitu_itu_pane

0x5e43,	// (0x00052a3b) cell_vitu_itu_pane_ParamLimits

0x5e43,	// (0x00052a3b) cell_vitu_itu_pane

0x5e65,	// (0x00052a5d) cell_vitu_function_pane_ParamLimits

0x5e65,	// (0x00052a5d) cell_vitu_function_pane

0xa4a4,	// (0x0005709c) bg_popup_sub_pane_cp08_ParamLimits

0xa4a4,	// (0x0005709c) bg_popup_sub_pane_cp08

0x5e7e,	// (0x00052a76) field_vitu_entry_pane_t1_ParamLimits

0x5e7e,	// (0x00052a76) field_vitu_entry_pane_t1

0xd27e,	// (0x00059e76) field_vitu_entry_pane_t2_ParamLimits

0xd27e,	// (0x00059e76) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0005c418) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0005c418) field_vitu_entry_pane_t

0xd29b,	// (0x00059e93) bg_button_pane_cp05_ParamLimits

0xd29b,	// (0x00059e93) bg_button_pane_cp05

0x5e9c,	// (0x00052a94) cell_vitu_itu_pane_g1

0x5eb4,	// (0x00052aac) cell_vitu_itu_pane_t1_ParamLimits

0x5eb4,	// (0x00052aac) cell_vitu_itu_pane_t1

0x5ec6,	// (0x00052abe) cell_vitu_itu_pane_t2_ParamLimits

0x5ec6,	// (0x00052abe) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0005c41d) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0005c41d) cell_vitu_itu_pane_t

0xd2a9,	// (0x00059ea1) bg_button_pane_cp07

0x5efb,	// (0x00052af3) cell_vitu_function_pane_g1

0x9b4c,	// (0x00056744) main_calc_pane_g1

0x107d,	// (0x0004dc75) aid_visual_content_pane

0x9700,	// (0x000562f8) main_vradio_pane

0x5f04,	// (0x00052afc) main_vradio_pane_g1_ParamLimits

0x5f04,	// (0x00052afc) main_vradio_pane_g1

0xd2b3,	// (0x00059eab) main_vradio_pane_g2_ParamLimits

0xd2b3,	// (0x00059eab) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0005c424) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0005c424) main_vradio_pane_g

0x5f1d,	// (0x00052b15) main_vradio_pane_t1_ParamLimits

0x5f1d,	// (0x00052b15) main_vradio_pane_t1

0x5f32,	// (0x00052b2a) main_vradio_pane_t2_ParamLimits

0x5f32,	// (0x00052b2a) main_vradio_pane_t2

0xd2c0,	// (0x00059eb8) main_vradio_pane_t3_ParamLimits

0xd2c0,	// (0x00059eb8) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0005c429) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0005c429) main_vradio_pane_t

0x5f47,	// (0x00052b3f) vradio_rocker_control_pane_ParamLimits

0x5f47,	// (0x00052b3f) vradio_rocker_control_pane

0x5f59,	// (0x00052b51) vradio_station_info_pane_ParamLimits

0x5f59,	// (0x00052b51) vradio_station_info_pane

0xd2d4,	// (0x00059ecc) vradio_frequency_info_pane_ParamLimits

0xd2d4,	// (0x00059ecc) vradio_frequency_info_pane

0xcc40,	// (0x00059838) vradio_station_info_pane_g1

0xd2e3,	// (0x00059edb) vradio_station_info_pane_t1_ParamLimits

0xd2e3,	// (0x00059edb) vradio_station_info_pane_t1

0xd305,	// (0x00059efd) vradio_station_info_pane_t2_ParamLimits

0xd305,	// (0x00059efd) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0005c430) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0005c430) vradio_station_info_pane_t

0xd317,	// (0x00059f0f) vradio_tuning_pane

0xd31f,	// (0x00059f17) vradio_rocker_control_pane_g1

0xd327,	// (0x00059f1f) vradio_rocker_control_pane_g2

0xd32f,	// (0x00059f27) vradio_rocker_control_pane_g3

0xd337,	// (0x00059f2f) vradio_rocker_control_pane_g4

0xd33f,	// (0x00059f37) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0005c435) vradio_rocker_control_pane_g

0x5f6b,	// (0x00052b63) vradio_frequency_info_pane_g1

0xd347,	// (0x00059f3f) vradio_frequency_info_pane_t1_ParamLimits

0xd347,	// (0x00059f3f) vradio_frequency_info_pane_t1

0x5f75,	// (0x00052b6d) vradio_tuning_pane_g1

0x5f80,	// (0x00052b78) vradio_tuning_pane_t1

0x9726,	// (0x0005631e) area_side_right_pane_ParamLimits

0x9726,	// (0x0005631e) area_side_right_pane

0xc7f3,	// (0x000593eb) status_small_pane_g1

0xc7fb,	// (0x000593f3) status_small_pane_g2

0xc804,	// (0x000593fc) status_small_pane_g3

0xc80d,	// (0x00059405) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0005c1f0) status_small_pane_g

0xc816,	// (0x0005940e) status_small_pane_t1

0x9700,	// (0x000562f8) main_video3_pane

0xd35b,	// (0x00059f53) cams_zoom_vslider_pane

0xd363,	// (0x00059f5b) image3_wide_pane_ParamLimits

0xd363,	// (0x00059f5b) image3_wide_pane

0xd37d,	// (0x00059f75) image3_wide_small_pane

0xd389,	// (0x00059f81) main_video3_pane_g1_ParamLimits

0xd389,	// (0x00059f81) main_video3_pane_g1

0xd3a5,	// (0x00059f9d) main_video3_pane_g2_ParamLimits

0xd3a5,	// (0x00059f9d) main_video3_pane_g2

0x0001,

0xf848,	// (0x0005c440) main_video3_pane_g_ParamLimits

0xf848,	// (0x0005c440) main_video3_pane_g

0xd3c1,	// (0x00059fb9) main_video3_pane_t1_ParamLimits

0xd3c1,	// (0x00059fb9) main_video3_pane_t1

0xd3ec,	// (0x00059fe4) main_video3_pane_t2_ParamLimits

0xd3ec,	// (0x00059fe4) main_video3_pane_t2

0xd417,	// (0x0005a00f) main_video3_pane_t3_ParamLimits

0xd417,	// (0x0005a00f) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0005c445) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0005c445) main_video3_pane_t

0xd444,	// (0x0005a03c) cams_zoom_vslider_pane_g1

0xd44d,	// (0x0005a045) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0005c44c) cams_zoom_vslider_pane_g

0xd455,	// (0x0005a04d) small_slider_vertical_pane

0xcc40,	// (0x00059838) small_slider_vertical_pane_g1

0xcc40,	// (0x00059838) small_slider_vertical_pane_g2

0xd45d,	// (0x0005a055) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0005c451) small_slider_vertical_pane_g

0x9700,	// (0x000562f8) main_hwr_training_pane

0xd466,	// (0x0005a05e) hwr_training_instruct_pane_ParamLimits

0xd466,	// (0x0005a05e) hwr_training_instruct_pane

0x5f8f,	// (0x00052b87) hwr_training_navi_pane_ParamLimits

0x5f8f,	// (0x00052b87) hwr_training_navi_pane

0x5fae,	// (0x00052ba6) hwr_training_write_pane_ParamLimits

0x5fae,	// (0x00052ba6) hwr_training_write_pane

0x9700,	// (0x000562f8) bg_frame_shadow_pane

0xd49d,	// (0x0005a095) hwr_training_write_pane_g1

0xd4a5,	// (0x0005a09d) hwr_training_write_pane_g2

0xd4ad,	// (0x0005a0a5) hwr_training_write_pane_g3

0xd4b5,	// (0x0005a0ad) hwr_training_write_pane_g4

0xd4bd,	// (0x0005a0b5) hwr_training_write_pane_g5

0xd4c5,	// (0x0005a0bd) hwr_training_write_pane_g6

0xd4cd,	// (0x0005a0c5) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0005c458) hwr_training_write_pane_g

0x9dec,	// (0x000569e4) hwr_training_navi_pane_g1_ParamLimits

0x9dec,	// (0x000569e4) hwr_training_navi_pane_g1

0x9dfe,	// (0x000569f6) hwr_training_navi_pane_g2_ParamLimits

0x9dfe,	// (0x000569f6) hwr_training_navi_pane_g2

0x9e10,	// (0x00056a08) hwr_training_navi_pane_g3_ParamLimits

0x9e10,	// (0x00056a08) hwr_training_navi_pane_g3

0x9e20,	// (0x00056a18) hwr_training_navi_pane_g4_ParamLimits

0x9e20,	// (0x00056a18) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0005c467) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0005c467) hwr_training_navi_pane_g

0x9e2d,	// (0x00056a25) hwr_training_navi_pane_t1

0x5ff6,	// (0x00052bee) list_single_hwr_training_instruct_pane_ParamLimits

0x5ff6,	// (0x00052bee) list_single_hwr_training_instruct_pane

0xd4d5,	// (0x0005a0cd) list_single_hwr_training_instruct_pane_t1

0xcb80,	// (0x00059778) bg_frame_shadow_pane_g1

0xd4e4,	// (0x0005a0dc) bg_frame_shadow_pane_g2

0xd4ec,	// (0x0005a0e4) bg_frame_shadow_pane_g3

0xd4f4,	// (0x0005a0ec) bg_frame_shadow_pane_g4

0xd4fc,	// (0x0005a0f4) bg_frame_shadow_pane_g5

0xd504,	// (0x0005a0fc) bg_frame_shadow_pane_g6

0xd50c,	// (0x0005a104) bg_frame_shadow_pane_g7

0xa8ba,	// (0x000574b2) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005c472) bg_frame_shadow_pane_g

0x9700,	// (0x000562f8) main_video_tele_dialer_pane

0x600b,	// (0x00052c03) aid_size_cell_video_keypad_ParamLimits

0x600b,	// (0x00052c03) aid_size_cell_video_keypad

0x6025,	// (0x00052c1d) grid_video_dialer_keypad_pane_ParamLimits

0x6025,	// (0x00052c1d) grid_video_dialer_keypad_pane

0x6071,	// (0x00052c69) video_down_pane_cp_ParamLimits

0x6071,	// (0x00052c69) video_down_pane_cp

0x60a3,	// (0x00052c9b) cell_video_dialer_keypad_pane_ParamLimits

0x60a3,	// (0x00052c9b) cell_video_dialer_keypad_pane

0xd514,	// (0x0005a10c) bg_button_pane_cp08_ParamLimits

0xd514,	// (0x0005a10c) bg_button_pane_cp08

0x60c5,	// (0x00052cbd) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60c5,	// (0x00052cbd) cell_video_dialer_keypad_pane_g1

0x5779,	// (0x00052371) mup3_rocker2_pane_ParamLimits

0x5779,	// (0x00052371) mup3_rocker2_pane

0xcc40,	// (0x00059838) mup3_rocker2_pane_g1

0x429a,	// (0x00050e92) main_dialer2_pane

0x9700,	// (0x000562f8) main_mp4_pane

0x9e43,	// (0x00056a3b) main_mp4_pane_g1_ParamLimits

0x9e43,	// (0x00056a3b) main_mp4_pane_g1

0x9e43,	// (0x00056a3b) main_mp4_pane_g2_ParamLimits

0x9e43,	// (0x00056a3b) main_mp4_pane_g2

0x60fc,	// (0x00052cf4) main_mp4_pane_g3_ParamLimits

0x60fc,	// (0x00052cf4) main_mp4_pane_g3

0x9e51,	// (0x00056a49) main_mp4_pane_g4_ParamLimits

0x9e51,	// (0x00056a49) main_mp4_pane_g4

0x9e79,	// (0x00056a71) main_mp4_pane_g5_ParamLimits

0x9e79,	// (0x00056a71) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005c492) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005c492) main_mp4_pane_g

0x9ec9,	// (0x00056ac1) main_mp4_pane_t1_ParamLimits

0x9ec9,	// (0x00056ac1) main_mp4_pane_t1

0x9f25,	// (0x00056b1d) main_mp4_pane_t2_ParamLimits

0x9f25,	// (0x00056b1d) main_mp4_pane_t2

0xd520,	// (0x0005a118) main_mp4_pane_t3_ParamLimits

0xd520,	// (0x0005a118) main_mp4_pane_t3

0x9f77,	// (0x00056b6f) main_mp4_pane_t4_ParamLimits

0x9f77,	// (0x00056b6f) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005c49f) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005c49f) main_mp4_pane_t

0x9fbb,	// (0x00056bb3) mp4_progress_pane_ParamLimits

0x9fbb,	// (0x00056bb3) mp4_progress_pane

0xa005,	// (0x00056bfd) mp4_rocker_pane_ParamLimits

0xa005,	// (0x00056bfd) mp4_rocker_pane

0xd548,	// (0x0005a140) mp4_progress_pane_t1

0xd561,	// (0x0005a159) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005c4a8) mp4_progress_pane_t

0xd57a,	// (0x0005a172) mup_progress_pane_cp04

0xcc40,	// (0x00059838) mp4_rocker_pane_g1

0x6138,	// (0x00052d30) aid_cell_size_keypad2_ParamLimits

0x6138,	// (0x00052d30) aid_cell_size_keypad2

0x614e,	// (0x00052d46) dialer2_ne_pane_ParamLimits

0x614e,	// (0x00052d46) dialer2_ne_pane

0x6168,	// (0x00052d60) grid_dialer2_keypad_pane_ParamLimits

0x6168,	// (0x00052d60) grid_dialer2_keypad_pane

0xca25,	// (0x0005961d) bg_popup_call_pane_cp07_ParamLimits

0xca25,	// (0x0005961d) bg_popup_call_pane_cp07

0x6184,	// (0x00052d7c) dialer2_ne_pane_t1_ParamLimits

0x6184,	// (0x00052d7c) dialer2_ne_pane_t1

0x61bf,	// (0x00052db7) cell_dialer2_keypad_pane_ParamLimits

0x61bf,	// (0x00052db7) cell_dialer2_keypad_pane

0xd598,	// (0x0005a190) bg_button_pane_pane_cp04_ParamLimits

0xd598,	// (0x0005a190) bg_button_pane_pane_cp04

0x61e1,	// (0x00052dd9) cell_dialer2_keypad_pane_g1_ParamLimits

0x61e1,	// (0x00052dd9) cell_dialer2_keypad_pane_g1

0x213b,	// (0x0004ed33) aid_placing_vt_set_content_ParamLimits

0x213b,	// (0x0004ed33) aid_placing_vt_set_content

0x2163,	// (0x0004ed5b) aid_placing_vt_set_title_ParamLimits

0x2163,	// (0x0004ed5b) aid_placing_vt_set_title

0x9700,	// (0x000562f8) main_image3_pane

0x62a7,	// (0x00052e9f) area_side_right_pane_cp01_ParamLimits

0x62a7,	// (0x00052e9f) area_side_right_pane_cp01

0x9e43,	// (0x00056a3b) main_image3_pane_g1_ParamLimits

0x9e43,	// (0x00056a3b) main_image3_pane_g1

0x62be,	// (0x00052eb6) main_image3_pane_g2_ParamLimits

0x62be,	// (0x00052eb6) main_image3_pane_g2

0x62e6,	// (0x00052ede) main_image3_pane_g3_ParamLimits

0x62e6,	// (0x00052ede) main_image3_pane_g3

0x6310,	// (0x00052f08) main_image3_pane_g4_ParamLimits

0x6310,	// (0x00052f08) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005c4b7) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005c4b7) main_image3_pane_g

0x633a,	// (0x00052f32) main_image3_pane_t1_ParamLimits

0x633a,	// (0x00052f32) main_image3_pane_t1

0x6392,	// (0x00052f8a) main_image3_pane_t2_ParamLimits

0x6392,	// (0x00052f8a) main_image3_pane_t2

0x63e4,	// (0x00052fdc) main_image3_pane_t3_ParamLimits

0x63e4,	// (0x00052fdc) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005c4c0) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005c4c0) main_image3_pane_t

0xa4a4,	// (0x0005709c) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4a4,	// (0x0005709c) grid_sctrl_middle_pane_cp01

0x646c,	// (0x00053064) cell_sctrl_middle_pane_cp01_ParamLimits

0x646c,	// (0x00053064) cell_sctrl_middle_pane_cp01

0x6489,	// (0x00053081) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6489,	// (0x00053081) cell_sctrl_middle_pane_cp01_g1

0x9700,	// (0x000562f8) main_call4_pane

0x649f,	// (0x00053097) aid_size_button_call4_ParamLimits

0x649f,	// (0x00053097) aid_size_button_call4

0x64d0,	// (0x000530c8) call4_windows_pane_ParamLimits

0x64d0,	// (0x000530c8) call4_windows_pane

0x64f0,	// (0x000530e8) grid_call4_button_pane_ParamLimits

0x64f0,	// (0x000530e8) grid_call4_button_pane

0xd5a4,	// (0x0005a19c) call4_windows_conf_pane

0xd5bb,	// (0x0005a1b3) popup_call4_audio_first_window_ParamLimits

0xd5bb,	// (0x0005a1b3) popup_call4_audio_first_window

0xd607,	// (0x0005a1ff) popup_call4_audio_second_window_ParamLimits

0xd607,	// (0x0005a1ff) popup_call4_audio_second_window

0xd61b,	// (0x0005a213) popup_call4_audio_wait_window_ParamLimits

0xd61b,	// (0x0005a213) popup_call4_audio_wait_window

0x651d,	// (0x00053115) cell_call4_button_pane_ParamLimits

0x651d,	// (0x00053115) cell_call4_button_pane

0x6546,	// (0x0005313e) bg_button_pane_cp09_ParamLimits

0x6546,	// (0x0005313e) bg_button_pane_cp09

0x6552,	// (0x0005314a) cell_call4_button_pane_g1_ParamLimits

0x6552,	// (0x0005314a) cell_call4_button_pane_g1

0x6578,	// (0x00053170) cell_call4_button_pane_t1_ParamLimits

0x6578,	// (0x00053170) cell_call4_button_pane_t1

0xd663,	// (0x0005a25b) popup_call4_audio_conf_window_ParamLimits

0xd663,	// (0x0005a25b) popup_call4_audio_conf_window

0x57d9,	// (0x000523d1) mup3_progress_pane_t1_ParamLimits

0x57f8,	// (0x000523f0) mup3_progress_pane_t2_ParamLimits

0xcf53,	// (0x00059b4b) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0005c394) mup3_progress_pane_t_ParamLimits

0xcf70,	// (0x00059b68) mup_progress_pane_cp03_ParamLimits

0x5dd5,	// (0x000529cd) mup3_control_keys_pane_g4_copy1

0x9fe9,	// (0x00056be1) mp4_rocker2_pane_ParamLimits

0x9fe9,	// (0x00056be1) mp4_rocker2_pane

0xd677,	// (0x0005a26f) mp4_rocker2_pane_g1

0xd67f,	// (0x0005a277) mp4_rocker2_pane_g2

0xa057,	// (0x00056c4f) mp4_rocker2_pane_g3

0xa05f,	// (0x00056c57) mp4_rocker2_pane_g4

0xa067,	// (0x00056c5f) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005c4c9) mp4_rocker2_pane_g

0x9700,	// (0x000562f8) main_camera4_pane

0x9700,	// (0x000562f8) main_video4_pane

0x603f,	// (0x00052c37) main_video_tele_dialer_pane_t1_ParamLimits

0x603f,	// (0x00052c37) main_video_tele_dialer_pane_t1

0x6058,	// (0x00052c50) main_video_tele_dialer_pane_t2_ParamLimits

0x6058,	// (0x00052c50) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005c483) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005c483) main_video_tele_dialer_pane_t

0x65b6,	// (0x000531ae) cam4_autofocus_pane_ParamLimits

0x65b6,	// (0x000531ae) cam4_autofocus_pane

0x65cc,	// (0x000531c4) cam4_image_uncrop_pane_ParamLimits

0x65cc,	// (0x000531c4) cam4_image_uncrop_pane

0x65e6,	// (0x000531de) cam4_indicators_pane_ParamLimits

0x65e6,	// (0x000531de) cam4_indicators_pane

0x6611,	// (0x00053209) main_camera4_pane_g1_ParamLimits

0x6611,	// (0x00053209) main_camera4_pane_g1

0x6623,	// (0x0005321b) main_camera4_pane_g2_ParamLimits

0x6623,	// (0x0005321b) main_camera4_pane_g2

0x6636,	// (0x0005322e) main_camera4_pane_g3_ParamLimits

0x6636,	// (0x0005322e) main_camera4_pane_g3

0x6649,	// (0x00053241) main_camera4_pane_g4_ParamLimits

0x6649,	// (0x00053241) main_camera4_pane_g4

0x665c,	// (0x00053254) main_camera4_pane_g5_ParamLimits

0x665c,	// (0x00053254) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005c4d4) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005c4d4) main_camera4_pane_g

0x6680,	// (0x00053278) main_camera4_pane_t1_ParamLimits

0x6680,	// (0x00053278) main_camera4_pane_t1

0xceb8,	// (0x00059ab0) bg_tb_trans_pane_cp06

0xa093,	// (0x00056c8b) cam4_indicators_pane_g1

0xa0a4,	// (0x00056c9c) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005c4ef) cam4_indicators_pane_g

0xa0c2,	// (0x00056cba) cam4_indicators_pane_t1

0x66e4,	// (0x000532dc) main_video4_pane_g1_ParamLimits

0x66e4,	// (0x000532dc) main_video4_pane_g1

0x66f3,	// (0x000532eb) main_video4_pane_g2_ParamLimits

0x66f3,	// (0x000532eb) main_video4_pane_g2

0x6702,	// (0x000532fa) main_video4_pane_g3_ParamLimits

0x6702,	// (0x000532fa) main_video4_pane_g3

0x6711,	// (0x00053309) main_video4_pane_g4_ParamLimits

0x6711,	// (0x00053309) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005c4f6) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005c4f6) main_video4_pane_g

0x672f,	// (0x00053327) vid4_indicators_pane_ParamLimits

0x672f,	// (0x00053327) vid4_indicators_pane

0x675d,	// (0x00053355) video4_image_uncrop_cif_pane_ParamLimits

0x675d,	// (0x00053355) video4_image_uncrop_cif_pane

0x6777,	// (0x0005336f) video4_image_uncrop_nhd_pane_ParamLimits

0x6777,	// (0x0005336f) video4_image_uncrop_nhd_pane

0x65cc,	// (0x000531c4) video4_image_uncrop_vga_pane_ParamLimits

0x65cc,	// (0x000531c4) video4_image_uncrop_vga_pane

0xa4a4,	// (0x0005709c) bg_tb_trans_pane_cp07

0xa0ee,	// (0x00056ce6) vid4_indicators_pane_g1

0xa102,	// (0x00056cfa) vid4_indicators_pane_g2

0xa116,	// (0x00056d0e) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005c501) vid4_indicators_pane_g

0xa145,	// (0x00056d3d) vid4_indicators_pane_t1

0x678b,	// (0x00053383) cam4_autofocus_pane_g1

0x6793,	// (0x0005338b) cam4_autofocus_pane_g2

0x679b,	// (0x00053393) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005c50c) cam4_autofocus_pane_g

0x67a3,	// (0x0005339b) cam4_autofocus_pane_g3_copy1

0x6087,	// (0x00052c7f) video_down_pane_cp_t1

0x6095,	// (0x00052c8d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0005c488) video_down_pane_cp_t

0xa4a4,	// (0x0005709c) popup_vitu2_window_ParamLimits

0xa4a4,	// (0x0005709c) popup_vitu2_window

0x67ab,	// (0x000533a3) aid_size_cell2_itu2_ParamLimits

0x67ab,	// (0x000533a3) aid_size_cell2_itu2

0x67d1,	// (0x000533c9) aid_size_cell_itu2_ParamLimits

0x67d1,	// (0x000533c9) aid_size_cell_itu2

0x682d,	// (0x00053425) bg_popup_window_pane_cp09_ParamLimits

0x682d,	// (0x00053425) bg_popup_window_pane_cp09

0x683b,	// (0x00053433) field_vitu2_entry_pane_ParamLimits

0x683b,	// (0x00053433) field_vitu2_entry_pane

0x6861,	// (0x00053459) grid_vitu2_function_pane_ParamLimits

0x6861,	// (0x00053459) grid_vitu2_function_pane

0x68b2,	// (0x000534aa) grid_vitu2_itu_pane_ParamLimits

0x68b2,	// (0x000534aa) grid_vitu2_itu_pane

0x694a,	// (0x00053542) cell_vitu2_itu_pane_ParamLimits

0x694a,	// (0x00053542) cell_vitu2_itu_pane

0x6976,	// (0x0005356e) cell_vitu2_function_pane_ParamLimits

0x6976,	// (0x0005356e) cell_vitu2_function_pane

0xd687,	// (0x0005a27f) bg_popup_call_pane_cp08_ParamLimits

0xd687,	// (0x0005a27f) bg_popup_call_pane_cp08

0xd69e,	// (0x0005a296) field_vitu2_entry_pane_g1

0xd6aa,	// (0x0005a2a2) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005c513) field_vitu2_entry_pane_g

0x044d,	// (0x0004d045) field_vitu2_entry_pane_t1_ParamLimits

0x044d,	// (0x0004d045) field_vitu2_entry_pane_t1

0x69b5,	// (0x000535ad) field_vitu2_entry_pane_t2_ParamLimits

0x69b5,	// (0x000535ad) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005c51a) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005c51a) field_vitu2_entry_pane_t

0x69d2,	// (0x000535ca) bg_button_pane_cp010_ParamLimits

0x69d2,	// (0x000535ca) bg_button_pane_cp010

0xa15c,	// (0x00056d54) cell_vitu2_itu_pane_g1

0x69ee,	// (0x000535e6) cell_vitu2_itu_pane_t1_ParamLimits

0x69ee,	// (0x000535e6) cell_vitu2_itu_pane_t1

0x047d,	// (0x0004d075) cell_vitu2_itu_pane_t2_ParamLimits

0x047d,	// (0x0004d075) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005c524) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005c524) cell_vitu2_itu_pane_t

0xa4a4,	// (0x0005709c) bg_button_pane_cp011

0x6a4c,	// (0x00053644) cell_vitu2_function_pane_g1

0x9700,	// (0x000562f8) main_myfav_hc_pane

0x6434,	// (0x0005302c) popup_image3_note_pane_ParamLimits

0x6434,	// (0x0005302c) popup_image3_note_pane

0x6450,	// (0x00053048) popup_image3_tool_bar_pane_ParamLimits

0x6450,	// (0x00053048) popup_image3_tool_bar_pane

0x050b,	// (0x0004d103) cell_vitu2_itu_pane_t3_ParamLimits

0x050b,	// (0x0004d103) cell_vitu2_itu_pane_t3

0x9700,	// (0x000562f8) bg_popup_trans_pane

0xd6cc,	// (0x0005a2c4) grid_image3_tool_bar_pane

0xd6d6,	// (0x0005a2ce) bg_popup_trans_pane_g1

0xac1f,	// (0x00057817) bg_popup_trans_pane_g2

0xd6de,	// (0x0005a2d6) bg_popup_trans_pane_g3

0xd6e6,	// (0x0005a2de) bg_popup_trans_pane_g4

0xd6ee,	// (0x0005a2e6) bg_popup_trans_pane_g5

0xd6f6,	// (0x0005a2ee) bg_popup_trans_pane_g6

0xd6fe,	// (0x0005a2f6) bg_popup_trans_pane_g7

0xd706,	// (0x0005a2fe) bg_popup_trans_pane_g8

0xabff,	// (0x000577f7) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005c52b) bg_popup_trans_pane_g

0xd70e,	// (0x0005a306) cell_image3_tool_bar_pane_ParamLimits

0xd70e,	// (0x0005a306) cell_image3_tool_bar_pane

0xcc40,	// (0x00059838) cell_image3_tool_bar_pane_g1

0x9700,	// (0x000562f8) bg_popup_trans_pane_cp1

0xd722,	// (0x0005a31a) popup_image3_note_pane_t1

0xd730,	// (0x0005a328) popup_image3_note_pane_t2

0xd73e,	// (0x0005a336) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005c53e) popup_image3_note_pane_t

0xd74c,	// (0x0005a344) popup_image3_note_pane_t3_copy1

0x6a60,	// (0x00053658) bg_myfav_hc_instruction_pane_ParamLimits

0x6a60,	// (0x00053658) bg_myfav_hc_instruction_pane

0x6a74,	// (0x0005366c) cell_myfav_contact_pane_ParamLimits

0x6a74,	// (0x0005366c) cell_myfav_contact_pane

0x6a92,	// (0x0005368a) cell_myfav_contact_pane_cp1_ParamLimits

0x6a92,	// (0x0005368a) cell_myfav_contact_pane_cp1

0x6aaa,	// (0x000536a2) cell_myfav_contact_pane_cp2_ParamLimits

0x6aaa,	// (0x000536a2) cell_myfav_contact_pane_cp2

0x6ac2,	// (0x000536ba) cell_myfav_contact_pane_cp3_ParamLimits

0x6ac2,	// (0x000536ba) cell_myfav_contact_pane_cp3

0x6ad9,	// (0x000536d1) cell_myfav_contact_pane_cp4_ParamLimits

0x6ad9,	// (0x000536d1) cell_myfav_contact_pane_cp4

0x6af1,	// (0x000536e9) cell_myfav_contact_pane_cp5_ParamLimits

0x6af1,	// (0x000536e9) cell_myfav_contact_pane_cp5

0x6b05,	// (0x000536fd) cell_myfav_contact_pane_cp6_ParamLimits

0x6b05,	// (0x000536fd) cell_myfav_contact_pane_cp6

0x6b1b,	// (0x00053713) cell_myfav_contact_pane_cp7_ParamLimits

0x6b1b,	// (0x00053713) cell_myfav_contact_pane_cp7

0xd75a,	// (0x0005a352) listscroll_gen_pane_cp05

0x6b35,	// (0x0005372d) main_myfav_hc_pane_g1_ParamLimits

0x6b35,	// (0x0005372d) main_myfav_hc_pane_g1

0x6b4f,	// (0x00053747) main_myfav_hc_pane_g2_ParamLimits

0x6b4f,	// (0x00053747) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005c545) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005c545) main_myfav_hc_pane_g

0x6b81,	// (0x00053779) main_myfav_hc_pane_t1_ParamLimits

0x6b81,	// (0x00053779) main_myfav_hc_pane_t1

0xd763,	// (0x0005a35b) main_myfav_hc_pane_t2_ParamLimits

0xd763,	// (0x0005a35b) main_myfav_hc_pane_t2

0xd775,	// (0x0005a36d) main_myfav_hc_pane_t3_ParamLimits

0xd775,	// (0x0005a36d) main_myfav_hc_pane_t3

0x6b98,	// (0x00053790) main_myfav_hc_pane_t4_ParamLimits

0x6b98,	// (0x00053790) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005c54c) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005c54c) main_myfav_hc_pane_t

0xcc40,	// (0x00059838) bg_myfav_hc_instruction_pane_g1

0xd787,	// (0x0005a37f) cell_myfav_contact_pane_g1_ParamLimits

0xd787,	// (0x0005a37f) cell_myfav_contact_pane_g1

0xd787,	// (0x0005a37f) cell_myfav_contact_pane_g2_ParamLimits

0xd787,	// (0x0005a37f) cell_myfav_contact_pane_g2

0xd793,	// (0x0005a38b) cell_myfav_contact_pane_g3_ParamLimits

0xd793,	// (0x0005a38b) cell_myfav_contact_pane_g3

0xcf3d,	// (0x00059b35) cell_myfav_contact_pane_g4_ParamLimits

0xcf3d,	// (0x00059b35) cell_myfav_contact_pane_g4

0xd7a0,	// (0x0005a398) cell_myfav_contact_pane_g5_ParamLimits

0xd7a0,	// (0x0005a398) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005c557) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005c557) cell_myfav_contact_pane_g

0x6b69,	// (0x00053761) main_myfav_hc_pane_g3_ParamLimits

0x6b69,	// (0x00053761) main_myfav_hc_pane_g3

0x11c8,	// (0x0004ddc0) popup_adpt_find_window

0x6bc0,	// (0x000537b8) afind_page_pane_ParamLimits

0x6bc0,	// (0x000537b8) afind_page_pane

0x6bd5,	// (0x000537cd) aid_size_cell_afind_ParamLimits

0x6bd5,	// (0x000537cd) aid_size_cell_afind

0x6bf3,	// (0x000537eb) bg_popup_sub_pane_cp09_ParamLimits

0x6bf3,	// (0x000537eb) bg_popup_sub_pane_cp09

0x6c00,	// (0x000537f8) find_pane_cp01_ParamLimits

0x6c00,	// (0x000537f8) find_pane_cp01

0xd7ac,	// (0x0005a3a4) grid_afind_control_pane_ParamLimits

0xd7ac,	// (0x0005a3a4) grid_afind_control_pane

0x6c0d,	// (0x00053805) grid_afind_pane_ParamLimits

0x6c0d,	// (0x00053805) grid_afind_pane

0x6c2f,	// (0x00053827) cell_afind_pane_ParamLimits

0x6c2f,	// (0x00053827) cell_afind_pane

0xcc40,	// (0x00059838) afind_page_pane_g1

0x6c96,	// (0x0005388e) afind_page_pane_g2

0x6c9f,	// (0x00053897) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005c562) afind_page_pane_g

0x6ca8,	// (0x000538a0) afind_page_pane_t1

0xd7c0,	// (0x0005a3b8) cell_afind_grid_control_pane_ParamLimits

0xd7c0,	// (0x0005a3b8) cell_afind_grid_control_pane

0xd598,	// (0x0005a190) bg_button_pane_cp69_ParamLimits

0xd598,	// (0x0005a190) bg_button_pane_cp69

0x6cc8,	// (0x000538c0) cell_afind_pane_g1_ParamLimits

0x6cc8,	// (0x000538c0) cell_afind_pane_g1

0x6cd5,	// (0x000538cd) cell_afind_pane_t1_ParamLimits

0x6cd5,	// (0x000538cd) cell_afind_pane_t1

0xaa18,	// (0x00057610) bg_button_pane_cp72

0xd7cf,	// (0x0005a3c7) cell_afind_grid_control_pane_g1

0x3d5a,	// (0x00050952) aid_image_placing_area_ParamLimits

0x3d5a,	// (0x00050952) aid_image_placing_area

0xd266,	// (0x00059e5e) field_vitu_entry_pane_g1_ParamLimits

0xd266,	// (0x00059e5e) field_vitu_entry_pane_g1

0xd272,	// (0x00059e6a) field_vitu_entry_pane_g2_ParamLimits

0xd272,	// (0x00059e6a) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0005c413) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0005c413) field_vitu_entry_pane_g

0x5e9c,	// (0x00052a94) cell_vitu_itu_pane_g1_ParamLimits

0x5ede,	// (0x00052ad6) cell_vitu_itu_pane_t3_ParamLimits

0x5ede,	// (0x00052ad6) cell_vitu_itu_pane_t3

0xd548,	// (0x0005a140) mp4_progress_pane_t1_ParamLimits

0xd561,	// (0x0005a159) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005c4a8) mp4_progress_pane_t_ParamLimits

0xd57a,	// (0x0005a172) mup_progress_pane_cp04_ParamLimits

0x6bac,	// (0x000537a4) main_myfav_hc_pane_t5_ParamLimits

0x6bac,	// (0x000537a4) main_myfav_hc_pane_t5

0x971e,	// (0x00056316) aid_zoom_text_primary

0x11c8,	// (0x0004ddc0) popup_adpt_find_window_ParamLimits

0xa4a4,	// (0x0005709c) main_cam_set_pane

0x65fd,	// (0x000531f5) cam4_zoom_pane_ParamLimits

0x65fd,	// (0x000531f5) cam4_zoom_pane

0x6ce7,	// (0x000538df) main_cam_set_pane_g1_ParamLimits

0x6ce7,	// (0x000538df) main_cam_set_pane_g1

0x6cf5,	// (0x000538ed) main_cam_set_pane_g2_ParamLimits

0x6cf5,	// (0x000538ed) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005c569) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005c569) main_cam_set_pane_g

0x6d16,	// (0x0005390e) main_cam_set_pane_t1_ParamLimits

0x6d16,	// (0x0005390e) main_cam_set_pane_t1

0x6d31,	// (0x00053929) main_cset_listscroll_pane_ParamLimits

0x6d31,	// (0x00053929) main_cset_listscroll_pane

0x6d51,	// (0x00053949) main_cset_slider_pane_ParamLimits

0x6d51,	// (0x00053949) main_cset_slider_pane

0xd7e0,	// (0x0005a3d8) main_cset_list_pane_ParamLimits

0xd7e0,	// (0x0005a3d8) main_cset_list_pane

0xd7f0,	// (0x0005a3e8) scroll_pane_cp028

0x6d77,	// (0x0005396f) aid_area_touch_slider

0x6d93,	// (0x0005398b) cset_slider_pane

0x6dbd,	// (0x000539b5) main_cset_slider_pane_g1

0x6dd2,	// (0x000539ca) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005c56e) main_cset_slider_pane_g

0xd829,	// (0x0005a421) main_cset_slider_pane_t1

0x6e8e,	// (0x00053a86) main_cset_slider_pane_t2

0x6ea8,	// (0x00053aa0) main_cset_slider_pane_t3

0x6ec2,	// (0x00053aba) main_cset_slider_pane_t4

0x6edc,	// (0x00053ad4) main_cset_slider_pane_t5

0x6ef6,	// (0x00053aee) main_cset_slider_pane_t6

0x6f0b,	// (0x00053b03) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005c593) main_cset_slider_pane_t

0x700f,	// (0x00053c07) cset_list_set_pane_ParamLimits

0x700f,	// (0x00053c07) cset_list_set_pane

0x7021,	// (0x00053c19) aid_position_infowindow_above

0x7029,	// (0x00053c21) aid_position_infowindow_below

0x7031,	// (0x00053c29) cset_list_set_pane_g1_ParamLimits

0x7031,	// (0x00053c29) cset_list_set_pane_g1

0x703d,	// (0x00053c35) cset_list_set_pane_g3_ParamLimits

0x703d,	// (0x00053c35) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005c5b2) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005c5b2) cset_list_set_pane_g

0x704c,	// (0x00053c44) cset_list_set_pane_t1_ParamLimits

0x704c,	// (0x00053c44) cset_list_set_pane_t1

0xa4a4,	// (0x0005709c) list_highlight_pane_cp021_ParamLimits

0xa4a4,	// (0x0005709c) list_highlight_pane_cp021

0xb576,	// (0x0005816e) cset_slider_pane_g1

0xb588,	// (0x00058180) cset_slider_pane_g2

0xb57f,	// (0x00058177) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005c5b7) cset_slider_pane_g

0xa16e,	// (0x00056d66) aid_area_touch_cam4_zoom

0xa176,	// (0x00056d6e) cam4_zoom_cont_pane

0xa17e,	// (0x00056d76) cam4_zoom_pane_g1

0xa186,	// (0x00056d7e) cam4_zoom_pane_g2

0x7061,	// (0x00053c59) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005c5be) cam4_zoom_pane_g

0xd8c9,	// (0x0005a4c1) cam4_zoom_cont_pane_g1

0xd8d2,	// (0x0005a4ca) cam4_zoom_cont_pane_g2

0xd8db,	// (0x0005a4d3) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005c5c5) cam4_zoom_cont_pane_g

0x64bd,	// (0x000530b5) call4_image_pane_ParamLimits

0x64bd,	// (0x000530b5) call4_image_pane

0xd5a4,	// (0x0005a19c) call4_windows_conf_pane_ParamLimits

0xd5e5,	// (0x0005a1dd) popup_call4_audio_in_window_ParamLimits

0xd5e5,	// (0x0005a1dd) popup_call4_audio_in_window

0x9700,	// (0x000562f8) bg_popup_call2_act_pane_cp02

0xd65b,	// (0x0005a253) call4_list_conf_pane

0xcc40,	// (0x00059838) call4_image_pane_g1

0xcc40,	// (0x00059838) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0005c2d4) call4_image_pane_g

0xd8e4,	// (0x0005a4dc) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8e4,	// (0x0005a4dc) list_single_graphic_popup_conf4_pane

0x9700,	// (0x000562f8) list_highlight_pane_cp022

0xd8f7,	// (0x0005a4ef) list_single_graphic_popup_conf4_pane_g1

0xb139,	// (0x00057d31) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005c5cc) list_single_graphic_popup_conf4_pane_g

0xd8ff,	// (0x0005a4f7) list_single_graphic_popup_conf4_pane_t1

0x2287,	// (0x0004ee7f) popup_vtel_slider_window_ParamLimits

0x2287,	// (0x0004ee7f) popup_vtel_slider_window

0xd586,	// (0x0005a17e) dialer2_ne_pane_t2_ParamLimits

0xd586,	// (0x0005a17e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005c4ad) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005c4ad) dialer2_ne_pane_t

0xca25,	// (0x0005961d) bg_popup_sub_pane_cp010_ParamLimits

0xca25,	// (0x0005961d) bg_popup_sub_pane_cp010

0x7069,	// (0x00053c61) popup_vtel_slider_window_g1_ParamLimits

0x7069,	// (0x00053c61) popup_vtel_slider_window_g1

0x707c,	// (0x00053c74) popup_vtel_slider_window_g2_ParamLimits

0x707c,	// (0x00053c74) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005c5d1) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005c5d1) popup_vtel_slider_window_g

0x70d2,	// (0x00053cca) vtel_slider_pane_ParamLimits

0x70d2,	// (0x00053cca) vtel_slider_pane

0x70f4,	// (0x00053cec) vtel_slider_pane_g1_ParamLimits

0x70f4,	// (0x00053cec) vtel_slider_pane_g1

0x7108,	// (0x00053d00) vtel_slider_pane_g2_ParamLimits

0x7108,	// (0x00053d00) vtel_slider_pane_g2

0x7120,	// (0x00053d18) vtel_slider_pane_g3_ParamLimits

0x7120,	// (0x00053d18) vtel_slider_pane_g3

0x70f4,	// (0x00053cec) vtel_slider_pane_g4_ParamLimits

0x70f4,	// (0x00053cec) vtel_slider_pane_g4

0x7136,	// (0x00053d2e) vtel_slider_pane_g5_ParamLimits

0x7136,	// (0x00053d2e) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005c5da) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005c5da) vtel_slider_pane_g

0xa4a4,	// (0x0005709c) main_gallery2_pane

0x67fd,	// (0x000533f5) aid_size_row_itut2_dropdow_list_ParamLimits

0x67fd,	// (0x000533f5) aid_size_row_itut2_dropdow_list

0x6889,	// (0x00053481) grid_vitu2_function_top_pane_ParamLimits

0x6889,	// (0x00053481) grid_vitu2_function_top_pane

0x68f3,	// (0x000534eb) popup_vitu2_dropdown_list_window_ParamLimits

0x68f3,	// (0x000534eb) popup_vitu2_dropdown_list_window

0x691c,	// (0x00053514) popup_vitu2_match_list_window

0x714c,	// (0x00053d44) cell_vitu2_function_top_pane_ParamLimits

0x714c,	// (0x00053d44) cell_vitu2_function_top_pane

0x7164,	// (0x00053d5c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7164,	// (0x00053d5c) cell_vitu2_function_top_pane_cp01

0x7180,	// (0x00053d78) cell_vitu2_function_top_wide_pane_ParamLimits

0x7180,	// (0x00053d78) cell_vitu2_function_top_wide_pane

0xa4a4,	// (0x0005709c) bg_button_pane_cp012

0x719c,	// (0x00053d94) cell_vitu2_function_top_pane_g1

0xa18e,	// (0x00056d86) bg_button_pane_cp013_ParamLimits

0xa18e,	// (0x00056d86) bg_button_pane_cp013

0x71b0,	// (0x00053da8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x71b0,	// (0x00053da8) cell_vitu2_function_top_wide_pane_g1

0xa4a4,	// (0x0005709c) bg_popup_sub_pane_cp20

0x71c8,	// (0x00053dc0) list_vitu2_match_list_pane

0xd6d6,	// (0x0005a2ce) bg_popup_sub_pane_cp20_g1

0xd6de,	// (0x0005a2d6) bg_popup_sub_pane_cp20_g2

0xac1f,	// (0x00057817) bg_popup_sub_pane_cp20_g3

0xd6e6,	// (0x0005a2de) bg_popup_sub_pane_cp20_g4

0xabff,	// (0x000577f7) bg_popup_sub_pane_cp20_g5

0xd915,	// (0x0005a50d) bg_popup_sub_pane_cp20_g6

0xd6f6,	// (0x0005a2ee) bg_popup_sub_pane_cp20_g7

0xd6fe,	// (0x0005a2f6) bg_popup_sub_pane_cp20_g8

0xd706,	// (0x0005a2fe) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005c5e5) bg_popup_sub_pane_cp20_g

0xa1aa,	// (0x00056da2) list_vitu2_match_list_item_pane_ParamLimits

0xa1aa,	// (0x00056da2) list_vitu2_match_list_item_pane

0xa1bc,	// (0x00056db4) list_vitu2_match_list_item_pane_t1

0x9700,	// (0x000562f8) bg_popup_sub_pane_cp21

0xb061,	// (0x00057c59) grid_vitu2_dropdown_list_pane

0x71e6,	// (0x00053dde) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x71e6,	// (0x00053dde) cell_vitu2_dropdown_list_char_pane

0x7207,	// (0x00053dff) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7207,	// (0x00053dff) cell_vitu2_dropdown_list_ctrl_pane

0xd91d,	// (0x0005a515) cell_vitu2_dropdown_list_char_pane_g1

0xd926,	// (0x0005a51e) cell_vitu2_dropdown_list_char_pane_g2

0xd92f,	// (0x0005a527) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005c602) cell_vitu2_dropdown_list_char_pane_g

0x7233,	// (0x00053e2b) cell_vitu2_dropdown_list_char_pane_t1

0x7241,	// (0x00053e39) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7241,	// (0x00053e39) cell_vitu2_dropdown_list_ctrl_pane_g1

0x724e,	// (0x00053e46) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x724e,	// (0x00053e46) cell_vitu2_dropdown_list_ctrl_pane_g2

0x725b,	// (0x00053e53) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x725b,	// (0x00053e53) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7268,	// (0x00053e60) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7268,	// (0x00053e60) cell_vitu2_dropdown_list_ctrl_pane_g4

0xceb8,	// (0x00059ab0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xceb8,	// (0x00059ab0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005c609) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005c609) cell_vitu2_dropdown_list_ctrl_pane_g

0x7284,	// (0x00053e7c) aid_size_cell_gallery2_ParamLimits

0x7284,	// (0x00053e7c) aid_size_cell_gallery2

0x72a2,	// (0x00053e9a) grid_gallery2_pane_ParamLimits

0x72a2,	// (0x00053e9a) grid_gallery2_pane

0x72bc,	// (0x00053eb4) scroll_pane_cp029_ParamLimits

0x72bc,	// (0x00053eb4) scroll_pane_cp029

0x72c8,	// (0x00053ec0) cell_gallery2_pane_ParamLimits

0x72c8,	// (0x00053ec0) cell_gallery2_pane

0xd938,	// (0x0005a530) cell_gallery2_pane_g2

0x7324,	// (0x00053f1c) cell_gallery2_pane_g3

0xd940,	// (0x0005a538) cell_gallery2_pane_g4

0xd948,	// (0x0005a540) cell_gallery2_pane_g5

0xa9c6,	// (0x000575be) grid_highlight_pane_cp10

0x691c,	// (0x00053514) popup_vitu2_match_list_window_ParamLimits

0x6933,	// (0x0005352b) popup_vitu2_query_window_ParamLimits

0x6933,	// (0x0005352b) popup_vitu2_query_window

0x9700,	// (0x000562f8) bg_vitu2_candi_button_pane

0xd91d,	// (0x0005a515) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd926,	// (0x0005a51e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd92f,	// (0x0005a527) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x05c7,	// (0x0004d1bf) bg_button_pane_cp015

0x732c,	// (0x00053f24) bg_button_pane_cp016

0x733f,	// (0x00053f37) bg_button_pane_cp017

0xc838,	// (0x00059430) bg_popup_sub_pane_cp22

0xd950,	// (0x0005a548) popup_vitu2_query_window_g1

0x05fa,	// (0x0004d1f2) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005c614) popup_vitu2_query_window_g

0x0619,	// (0x0004d211) popup_vitu2_query_window_t1_ParamLimits

0x0619,	// (0x0004d211) popup_vitu2_query_window_t1

0x064e,	// (0x0004d246) popup_vitu2_query_window_t2_ParamLimits

0x064e,	// (0x0004d246) popup_vitu2_query_window_t2

0x0660,	// (0x0004d258) popup_vitu2_query_window_t3_ParamLimits

0x0660,	// (0x0004d258) popup_vitu2_query_window_t3

0x7363,	// (0x00053f5b) popup_vitu2_query_window_t4_ParamLimits

0x7363,	// (0x00053f5b) popup_vitu2_query_window_t4

0x7384,	// (0x00053f7c) popup_vitu2_query_window_t5_ParamLimits

0x7384,	// (0x00053f7c) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005c61b) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005c61b) popup_vitu2_query_window_t

0xd7d8,	// (0x0005a3d0) main_cset_text_pane

0x6d77,	// (0x0005396f) aid_area_touch_slider_ParamLimits

0x6d93,	// (0x0005398b) cset_slider_pane_ParamLimits

0x6dbd,	// (0x000539b5) main_cset_slider_pane_g1_ParamLimits

0x6dd2,	// (0x000539ca) main_cset_slider_pane_g2_ParamLimits

0xd7f9,	// (0x0005a3f1) main_cset_slider_pane_g3_ParamLimits

0xd7f9,	// (0x0005a3f1) main_cset_slider_pane_g3

0x6de7,	// (0x000539df) main_cset_slider_pane_g4_ParamLimits

0x6de7,	// (0x000539df) main_cset_slider_pane_g4

0x6df6,	// (0x000539ee) main_cset_slider_pane_g5_ParamLimits

0x6df6,	// (0x000539ee) main_cset_slider_pane_g5

0x6e02,	// (0x000539fa) main_cset_slider_pane_g6_ParamLimits

0x6e02,	// (0x000539fa) main_cset_slider_pane_g6

0xf976,	// (0x0005c56e) main_cset_slider_pane_g_ParamLimits

0xd829,	// (0x0005a421) main_cset_slider_pane_t1_ParamLimits

0x6e8e,	// (0x00053a86) main_cset_slider_pane_t2_ParamLimits

0x6ea8,	// (0x00053aa0) main_cset_slider_pane_t3_ParamLimits

0x6ec2,	// (0x00053aba) main_cset_slider_pane_t4_ParamLimits

0x6edc,	// (0x00053ad4) main_cset_slider_pane_t5_ParamLimits

0x6ef6,	// (0x00053aee) main_cset_slider_pane_t6_ParamLimits

0x6f0b,	// (0x00053b03) main_cset_slider_pane_t7_ParamLimits

0x6f35,	// (0x00053b2d) main_cset_slider_pane_t8_ParamLimits

0x6f35,	// (0x00053b2d) main_cset_slider_pane_t8

0x6f5d,	// (0x00053b55) main_cset_slider_pane_t9_ParamLimits

0x6f5d,	// (0x00053b55) main_cset_slider_pane_t9

0x6f85,	// (0x00053b7d) main_cset_slider_pane_t10_ParamLimits

0x6f85,	// (0x00053b7d) main_cset_slider_pane_t10

0x6fad,	// (0x00053ba5) main_cset_slider_pane_t11_ParamLimits

0x6fad,	// (0x00053ba5) main_cset_slider_pane_t11

0x6fd5,	// (0x00053bcd) main_cset_slider_pane_t12_ParamLimits

0x6fd5,	// (0x00053bcd) main_cset_slider_pane_t12

0x6ff2,	// (0x00053bea) main_cset_slider_pane_t13_ParamLimits

0x6ff2,	// (0x00053bea) main_cset_slider_pane_t13

0xf99b,	// (0x0005c593) main_cset_slider_pane_t_ParamLimits

0x9700,	// (0x000562f8) bg_popup_sub_pane_cp011

0xd95c,	// (0x0005a554) main_cset_text_pane_g1

0xd964,	// (0x0005a55c) main_cset_text_pane_t1

0xd972,	// (0x0005a56a) main_cset_text_pane_t2

0xd980,	// (0x0005a578) main_cset_text_pane_t3

0xd98e,	// (0x0005a586) main_cset_text_pane_t4

0xd99c,	// (0x0005a594) main_cset_text_pane_t5

0xd9aa,	// (0x0005a5a2) main_cset_text_pane_t6

0xd9b8,	// (0x0005a5b0) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005c62a) main_cset_text_pane_t

0x9700,	// (0x000562f8) main_cam4_burst_pane

0x9700,	// (0x000562f8) main_cam5_pane

0x6cb6,	// (0x000538ae) bg_button_pane_cp019

0x6cbf,	// (0x000538b7) bg_button_pane_cp020

0xd805,	// (0x0005a3fd) main_cset_slider_pane_g7_ParamLimits

0xd805,	// (0x0005a3fd) main_cset_slider_pane_g7

0xd811,	// (0x0005a409) main_cset_slider_pane_g8_ParamLimits

0xd811,	// (0x0005a409) main_cset_slider_pane_g8

0x6e16,	// (0x00053a0e) main_cset_slider_pane_g9_ParamLimits

0x6e16,	// (0x00053a0e) main_cset_slider_pane_g9

0x6e22,	// (0x00053a1a) main_cset_slider_pane_g10_ParamLimits

0x6e22,	// (0x00053a1a) main_cset_slider_pane_g10

0x6e2e,	// (0x00053a26) main_cset_slider_pane_g11_ParamLimits

0x6e2e,	// (0x00053a26) main_cset_slider_pane_g11

0x6e3a,	// (0x00053a32) main_cset_slider_pane_g12_ParamLimits

0x6e3a,	// (0x00053a32) main_cset_slider_pane_g12

0x6e46,	// (0x00053a3e) main_cset_slider_pane_g13_ParamLimits

0x6e46,	// (0x00053a3e) main_cset_slider_pane_g13

0x6e52,	// (0x00053a4a) main_cset_slider_pane_g14_ParamLimits

0x6e52,	// (0x00053a4a) main_cset_slider_pane_g14

0x6e5e,	// (0x00053a56) main_cset_slider_pane_g15_ParamLimits

0x6e5e,	// (0x00053a56) main_cset_slider_pane_g15

0xd857,	// (0x0005a44f) main_cset_slider_pane_t14_ParamLimits

0xd857,	// (0x0005a44f) main_cset_slider_pane_t14

0xd890,	// (0x0005a488) main_cset_slider_pane_t15_ParamLimits

0xd890,	// (0x0005a488) main_cset_slider_pane_t15

0x73a5,	// (0x00053f9d) aid_cam4_burst_size_cell_ParamLimits

0x73a5,	// (0x00053f9d) aid_cam4_burst_size_cell

0x73c5,	// (0x00053fbd) grid_cam4_burst_pane_ParamLimits

0x73c5,	// (0x00053fbd) grid_cam4_burst_pane

0x73fd,	// (0x00053ff5) linegrid_cam4_burst_pane_ParamLimits

0x73fd,	// (0x00053ff5) linegrid_cam4_burst_pane

0xda34,	// (0x0005a62c) scroll_pane_cp30_ParamLimits

0xda34,	// (0x0005a62c) scroll_pane_cp30

0x7421,	// (0x00054019) cell_cam4_burst_pane_ParamLimits

0x7421,	// (0x00054019) cell_cam4_burst_pane

0xd9c6,	// (0x0005a5be) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c6,	// (0x0005a5be) linegrid_cam4_burst_pane_g1

0x746e,	// (0x00054066) linegrid_cam4_burst_pane_g2_ParamLimits

0x746e,	// (0x00054066) linegrid_cam4_burst_pane_g2

0xd9d3,	// (0x0005a5cb) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d3,	// (0x0005a5cb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005c639) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005c639) linegrid_cam4_burst_pane_g

0x747f,	// (0x00054077) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x747f,	// (0x00054077) linegrid_cam4_burst_pane_g3_copy1

0xd9e0,	// (0x0005a5d8) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e0,	// (0x0005a5d8) linegrid_cam4_burst_pane_g4

0x7499,	// (0x00054091) linegrid_cam4_burst_pane_g5_ParamLimits

0x7499,	// (0x00054091) linegrid_cam4_burst_pane_g5

0x74aa,	// (0x000540a2) linegrid_cam4_burst_pane_g6_ParamLimits

0x74aa,	// (0x000540a2) linegrid_cam4_burst_pane_g6

0xd9ed,	// (0x0005a5e5) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ed,	// (0x0005a5e5) linegrid_cam4_burst_pane_g7

0x74c1,	// (0x000540b9) cell_cam4_burst_pane_g1

0xda06,	// (0x0005a5fe) main_cam5_pane_t1_ParamLimits

0xda06,	// (0x0005a5fe) main_cam5_pane_t1

0xda40,	// (0x0005a638) main_cam5_pane_t2_ParamLimits

0xda40,	// (0x0005a638) main_cam5_pane_t2

0xda52,	// (0x0005a64a) main_cam5_pane_t3_ParamLimits

0xda52,	// (0x0005a64a) main_cam5_pane_t3

0xda64,	// (0x0005a65c) main_cam5_pane_t4_ParamLimits

0xda64,	// (0x0005a65c) main_cam5_pane_t4

0xda7c,	// (0x0005a674) main_cam5_pane_t5_ParamLimits

0xda7c,	// (0x0005a674) main_cam5_pane_t5

0xda90,	// (0x0005a688) main_cam5_pane_t6_ParamLimits

0xda90,	// (0x0005a688) main_cam5_pane_t6

0xdaa4,	// (0x0005a69c) main_cam5_pane_t7_ParamLimits

0xdaa4,	// (0x0005a69c) main_cam5_pane_t7

0xdab6,	// (0x0005a6ae) main_cam5_pane_t8_ParamLimits

0xdab6,	// (0x0005a6ae) main_cam5_pane_t8

0xdad2,	// (0x0005a6ca) main_cam5_pane_t9_ParamLimits

0xdad2,	// (0x0005a6ca) main_cam5_pane_t9

0xdae4,	// (0x0005a6dc) main_cam5_pane_t10_ParamLimits

0xdae4,	// (0x0005a6dc) main_cam5_pane_t10

0xdaf6,	// (0x0005a6ee) main_cam5_pane_t11_ParamLimits

0xdaf6,	// (0x0005a6ee) main_cam5_pane_t11

0xdb08,	// (0x0005a700) main_cam5_pane_t12_ParamLimits

0xdb08,	// (0x0005a700) main_cam5_pane_t12

0xdb1d,	// (0x0005a715) main_cam5_pane_t13_ParamLimits

0xdb1d,	// (0x0005a715) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005c645) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005c645) main_cam5_pane_t

0x124a,	// (0x0004de42) popup_scut_keymap_window_ParamLimits

0x124a,	// (0x0004de42) popup_scut_keymap_window

0x74d4,	// (0x000540cc) aid_size_cell_brow_shortcut

0xa9c6,	// (0x000575be) bg_popup_window_pane_cp010

0x74e0,	// (0x000540d8) grid_scut_pane

0x74ec,	// (0x000540e4) cell_scut_pane_ParamLimits

0x74ec,	// (0x000540e4) cell_scut_pane

0x7503,	// (0x000540fb) cell_scut_pane_g1

0xdb3a,	// (0x0005a732) cell_scut_pane_t1

0xdb49,	// (0x0005a741) cell_scut_pane_t2

0x750c,	// (0x00054104) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005c660) cell_scut_pane_t

0x5392,	// (0x00051f8a) main_mup3_pane_g8_ParamLimits

0x5392,	// (0x00051f8a) main_mup3_pane_g8

0x6815,	// (0x0005340d) area_vitu2_query_pane_ParamLimits

0x6815,	// (0x0005340d) area_vitu2_query_pane

0x05d9,	// (0x0004d1d1) input_focus_pane_cp08

0xdb58,	// (0x0005a750) area_vitu2_query_pane_g1

0x06de,	// (0x0004d2d6) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005c667) area_vitu2_query_pane_g

0x751a,	// (0x00054112) area_vitu2_query_pane_t1_ParamLimits

0x751a,	// (0x00054112) area_vitu2_query_pane_t1

0x752e,	// (0x00054126) area_vitu2_query_pane_t2_ParamLimits

0x752e,	// (0x00054126) area_vitu2_query_pane_t2

0x06ef,	// (0x0004d2e7) area_vitu2_query_pane_t3_ParamLimits

0x06ef,	// (0x0004d2e7) area_vitu2_query_pane_t3

0x7542,	// (0x0005413a) area_vitu2_query_pane_t4_ParamLimits

0x7542,	// (0x0005413a) area_vitu2_query_pane_t4

0x756a,	// (0x00054162) area_vitu2_query_pane_t5_ParamLimits

0x756a,	// (0x00054162) area_vitu2_query_pane_t5

0x7592,	// (0x0005418a) area_vitu2_query_pane_t6_ParamLimits

0x7592,	// (0x0005418a) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005c66c) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005c66c) area_vitu2_query_pane_t

0x75de,	// (0x000541d6) bg_button_pane_cp018

0x75ec,	// (0x000541e4) bg_button_pane_cp021

0x0717,	// (0x0004d30f) bg_button_pane_cp022

0x0726,	// (0x0004d31e) input_focus_pane_cp09

0xb291,	// (0x00057e89) aid_size_touch_mv_arrow_left

0xb2ba,	// (0x00057eb2) aid_size_touch_mv_arrow_right

0x6e76,	// (0x00053a6e) main_cset_slider_pane_g16_ParamLimits

0x6e76,	// (0x00053a6e) main_cset_slider_pane_g16

0x6e82,	// (0x00053a7a) main_cset_slider_pane_g17_ParamLimits

0x6e82,	// (0x00053a7a) main_cset_slider_pane_g17

0x74c1,	// (0x000540b9) cell_cam4_burst_pane_g1_ParamLimits

0x9700,	// (0x000562f8) compa_mode_pane

0x708c,	// (0x00053c84) popup_vtel_slider_window_g3_ParamLimits

0x708c,	// (0x00053c84) popup_vtel_slider_window_g3

0x70a3,	// (0x00053c9b) popup_vtel_slider_window_g4_ParamLimits

0x70a3,	// (0x00053c9b) popup_vtel_slider_window_g4

0x70ba,	// (0x00053cb2) popup_vtel_slider_window_t1_ParamLimits

0x70ba,	// (0x00053cb2) popup_vtel_slider_window_t1

0x9700,	// (0x000562f8) main_cl_pane

0x9cf3,	// (0x000568eb) popup_imed_adjust2_window_ParamLimits

0xc838,	// (0x00059430) bg_tb_trans_pane_cp05_ParamLimits

0xd19b,	// (0x00059d93) popup_imed_adjust2_window_g1_ParamLimits

0xd1aa,	// (0x00059da2) popup_imed_adjust2_window_g2_ParamLimits

0xd1aa,	// (0x00059da2) popup_imed_adjust2_window_g2

0xd1b6,	// (0x00059dae) popup_imed_adjust2_window_g3_ParamLimits

0xd1b6,	// (0x00059dae) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0005c3d7) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0005c3d7) popup_imed_adjust2_window_g

0xd1c2,	// (0x00059dba) popup_imed_adjust2_window_t1_ParamLimits

0xd1da,	// (0x00059dd2) slider_imed_adjust_pane_ParamLimits

0xd1ee,	// (0x00059de6) slider_imed_adjust_pane_g1_ParamLimits

0xd1fe,	// (0x00059df6) slider_imed_adjust_pane_g2_ParamLimits

0xd20e,	// (0x00059e06) slider_imed_adjust_pane_g3_ParamLimits

0xd21f,	// (0x00059e17) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005c3de) slider_imed_adjust_pane_g_ParamLimits

0x659e,	// (0x00053196) aid_touch_area_cam4_ParamLimits

0x659e,	// (0x00053196) aid_touch_area_cam4

0xa06f,	// (0x00056c67) battery_pane_cp01

0x666d,	// (0x00053265) main_camera4_pane_g6_ParamLimits

0x666d,	// (0x00053265) main_camera4_pane_g6

0x6697,	// (0x0005328f) main_camera4_pane_t2_ParamLimits

0x6697,	// (0x0005328f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005c4e1) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005c4e1) main_camera4_pane_t

0x66cc,	// (0x000532c4) aid_touch_area_vid4_ParamLimits

0x66cc,	// (0x000532c4) aid_touch_area_vid4

0x6720,	// (0x00053318) main_video4_pane_g5_ParamLimits

0x6720,	// (0x00053318) main_video4_pane_g5

0x6745,	// (0x0005333d) vid4_progress_pane_ParamLimits

0x6745,	// (0x0005333d) vid4_progress_pane

0xd81d,	// (0x0005a415) main_cset_slider_pane_g18_ParamLimits

0xd81d,	// (0x0005a415) main_cset_slider_pane_g18

0xd9fa,	// (0x0005a5f2) cell_cam4_burst_pane_g2_ParamLimits

0xd9fa,	// (0x0005a5f2) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005c640) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005c640) cell_cam4_burst_pane_g

0xa801,	// (0x000573f9) bg_cl_pane_ParamLimits

0xa801,	// (0x000573f9) bg_cl_pane

0x75f8,	// (0x000541f0) cl_header_pane_ParamLimits

0x75f8,	// (0x000541f0) cl_header_pane

0x760c,	// (0x00054204) cl_listscroll_pane_ParamLimits

0x760c,	// (0x00054204) cl_listscroll_pane

0xdb64,	// (0x0005a75c) bg_cl_pane_g1

0xdb6c,	// (0x0005a764) bg_cl_pane_g2

0xdb74,	// (0x0005a76c) bg_cl_pane_g3

0xdb7c,	// (0x0005a774) bg_cl_pane_g4

0xdb84,	// (0x0005a77c) bg_cl_pane_g5

0xdb8c,	// (0x0005a784) bg_cl_pane_g6

0xdb94,	// (0x0005a78c) bg_cl_pane_g7

0xdb9c,	// (0x0005a794) bg_cl_pane_g8

0xdba4,	// (0x0005a79c) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005c67b) bg_cl_pane_g

0x761c,	// (0x00054214) aid_height_cl_leading_ParamLimits

0x761c,	// (0x00054214) aid_height_cl_leading

0x7628,	// (0x00054220) aid_height_cl_text_ParamLimits

0x7628,	// (0x00054220) aid_height_cl_text

0xa4a4,	// (0x0005709c) bg_cl_header_pane_ParamLimits

0xa4a4,	// (0x0005709c) bg_cl_header_pane

0x7647,	// (0x0005423f) cl_header_pane_g1_ParamLimits

0x7647,	// (0x0005423f) cl_header_pane_g1

0x765d,	// (0x00054255) cl_header_pane_t1_ParamLimits

0x765d,	// (0x00054255) cl_header_pane_t1

0xdbac,	// (0x0005a7a4) cl_list_pane

0xd7f0,	// (0x0005a3e8) hc_scroll_pane_cp01

0xabff,	// (0x000577f7) bg_cl_header_pane_g1

0xd6d6,	// (0x0005a2ce) bg_cl_header_pane_g2

0xac1f,	// (0x00057817) bg_cl_header_pane_g3

0xd6e6,	// (0x0005a2de) bg_cl_header_pane_g4

0xd6de,	// (0x0005a2d6) bg_cl_header_pane_g5

0xd915,	// (0x0005a50d) bg_cl_header_pane_g6

0xd6fe,	// (0x0005a2f6) bg_cl_header_pane_g7

0xd706,	// (0x0005a2fe) bg_cl_header_pane_g8

0xd6f6,	// (0x0005a2ee) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005c68e) bg_cl_header_pane_g

0x7676,	// (0x0005426e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7676,	// (0x0005426e) hc_cl_list_double_graphic_heading_pane

0x7687,	// (0x0005427f) hc_cl_list_single_graphic_pane_ParamLimits

0x7687,	// (0x0005427f) hc_cl_list_single_graphic_pane

0x769d,	// (0x00054295) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x769d,	// (0x00054295) hc_cl_list_single_graphic_pane_g1

0x76a9,	// (0x000542a1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76a9,	// (0x000542a1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005c6a1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005c6a1) hc_cl_list_single_graphic_pane_g

0x76bd,	// (0x000542b5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76bd,	// (0x000542b5) hc_cl_list_single_graphic_pane_t1

0x769d,	// (0x00054295) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x769d,	// (0x00054295) hc_cl_list_double_graphic_heading_pane_g1

0x76d2,	// (0x000542ca) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76d2,	// (0x000542ca) hc_cl_list_double_graphic_heading_pane_g2

0x76e6,	// (0x000542de) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76e6,	// (0x000542de) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005c6a6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005c6a6) hc_cl_list_double_graphic_heading_pane_g

0x76fa,	// (0x000542f2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76fa,	// (0x000542f2) hc_cl_list_double_graphic_heading_pane_t1

0x770f,	// (0x00054307) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x770f,	// (0x00054307) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005c6ad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005c6ad) hc_cl_list_double_graphic_heading_pane_t

0xa1d2,	// (0x00056dca) vid4_progress_pane_g1

0xa1e2,	// (0x00056dda) vid4_progress_pane_g2

0x7724,	// (0x0005431c) vid4_progress_pane_g3

0xa1f2,	// (0x00056dea) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005c6b2) vid4_progress_pane_g

0x7736,	// (0x0005432e) vid4_progress_pane_t1

0xa20a,	// (0x00056e02) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005c6bd) vid4_progress_pane_t

0x774e,	// (0x00054346) wait_bar_pane_cp07

0xca33,	// (0x0005962b) blid_firmament_pane_ParamLimits

0xca76,	// (0x0005966e) popup_blid_sat_info2_window_g1

0xca9a,	// (0x00059692) popup_blid_sat_info2_window_t3

0xcaa8,	// (0x000596a0) popup_blid_sat_info2_window_t4

0xcab6,	// (0x000596ae) popup_blid_sat_info2_window_t5

0xcac4,	// (0x000596bc) popup_blid_sat_info2_window_t6

0xcad4,	// (0x000596cc) popup_blid_sat_info2_window_t7

0xcae2,	// (0x000596da) popup_blid_sat_info2_window_t8

0xcaf0,	// (0x000596e8) popup_blid_sat_info2_window_t9

0xcafe,	// (0x000596f6) popup_blid_sat_info2_window_t10

0xcbc0,	// (0x000597b8) aid_firma_cardinal_ParamLimits

0xcbd4,	// (0x000597cc) blid_firmament_pane_t1_ParamLimits

0xcbeb,	// (0x000597e3) blid_firmament_pane_t2_ParamLimits

0xcc02,	// (0x000597fa) blid_firmament_pane_t3_ParamLimits

0xcc19,	// (0x00059811) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0005c2cb) blid_firmament_pane_t_ParamLimits

0xcc30,	// (0x00059828) blid_sat_info_pane_ParamLimits

0xa4a4,	// (0x0005709c) main_cam_set_pane_ParamLimits

0x5c56,	// (0x0005284e) aid_size_cell_colour_35_ParamLimits

0x5c76,	// (0x0005286e) aid_size_cell_colour_112_ParamLimits

0x5c96,	// (0x0005288e) aid_size_cell_effect_ParamLimits

0xc838,	// (0x00059430) bg_tb_trans_pane_cp02_ParamLimits

0xae67,	// (0x00057a5f) heading_imed_pane_ParamLimits

0x5cb6,	// (0x000528ae) listscroll_imed_pane_ParamLimits

0xbe5e,	// (0x00058a56) popup_call2_audio_first_window_g5_ParamLimits

0xbe5e,	// (0x00058a56) popup_call2_audio_first_window_g5

0x6249,	// (0x00052e41) aid_size_touch_image3_arrow_left_ParamLimits

0x6249,	// (0x00052e41) aid_size_touch_image3_arrow_left

0x6275,	// (0x00052e6d) aid_size_touch_image3_arrow_right_ParamLimits

0x6275,	// (0x00052e6d) aid_size_touch_image3_arrow_right

0xa21f,	// (0x00056e17) vid4_progress_pane_t3

0x5fc9,	// (0x00052bc1) main_hwr_training_symbol_option_pane_ParamLimits

0x5fc9,	// (0x00052bc1) main_hwr_training_symbol_option_pane

0xd488,	// (0x0005a080) popup_hwr_training_preview_window_ParamLimits

0xd488,	// (0x0005a080) popup_hwr_training_preview_window

0x5fe9,	// (0x00052be1) hwr_training_navi_pane_g5_ParamLimits

0x5fe9,	// (0x00052be1) hwr_training_navi_pane_g5

0xd6c4,	// (0x0005a2bc) popup_char_count_window

0xa4a4,	// (0x0005709c) bg_popup_sub_pane_cp20_ParamLimits

0x71c8,	// (0x00053dc0) list_vitu2_match_list_pane_ParamLimits

0x71d7,	// (0x00053dcf) vitu2_page_scroll_pane_ParamLimits

0x71d7,	// (0x00053dcf) vitu2_page_scroll_pane

0xdbb5,	// (0x0005a7ad) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbb5,	// (0x0005a7ad) list_single_hwr_training_symbol_option_pane

0xdbc8,	// (0x0005a7c0) list_single_hwr_training_symbol_option_pane_g1

0xdbd0,	// (0x0005a7c8) list_single_hwr_training_symbol_option_pane_t1

0xdbde,	// (0x0005a7d6) bg_button_pane_cp023

0xdbe7,	// (0x0005a7df) bg_button_pane_cp024

0x779e,	// (0x00054396) vitu2_page_scroll_pane_g1

0x77a6,	// (0x0005439e) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005c6c4) vitu2_page_scroll_pane_g

0x77ae,	// (0x000543a6) vitu2_page_scroll_pane_t1

0xc993,	// (0x0005958b) popup_char_count_window_g1

0xdc1a,	// (0x0005a812) popup_char_count_window_g2

0xdc23,	// (0x0005a81b) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005c6c9) popup_char_count_window_g

0xdc2c,	// (0x0005a824) popup_char_count_window_t1

0x9700,	// (0x000562f8) main_vded2_pane

0xd187,	// (0x00059d7f) aid_size_cell_imed_line

0xd191,	// (0x00059d89) grid_imed_line_width_pane

0xa127,	// (0x00056d1f) vid4_indicators_pane_g4

0xdc3a,	// (0x0005a832) cell_imed_line_width_pane_ParamLimits

0xdc3a,	// (0x0005a832) cell_imed_line_width_pane

0xdc4e,	// (0x0005a846) cell_imed_line_width_pane_g1

0xdc57,	// (0x0005a84f) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005c6d0) cell_imed_line_width_pane_g

0x77bd,	// (0x000543b5) main_vded2_pane_g1_ParamLimits

0x77bd,	// (0x000543b5) main_vded2_pane_g1

0x77d3,	// (0x000543cb) main_vded2_pane_g2_ParamLimits

0x77d3,	// (0x000543cb) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005c6d5) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005c6d5) main_vded2_pane_g

0x77e5,	// (0x000543dd) vded2_slider_pane_ParamLimits

0x77e5,	// (0x000543dd) vded2_slider_pane

0x77f5,	// (0x000543ed) aid_size_touch_vded2_end

0x77ff,	// (0x000543f7) aid_size_touch_vded2_playhead

0xdc5f,	// (0x0005a857) aid_size_touch_vded2_start

0xdc67,	// (0x0005a85f) vded2_slider_bg_pane

0xdc70,	// (0x0005a868) vded2_slider_pane_g1

0xdc79,	// (0x0005a871) vded2_slider_pane_g2

0x7809,	// (0x00054401) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005c6da) vded2_slider_pane_g

0xdc81,	// (0x0005a879) vded2_slider_bg_pane_g1

0xdc8a,	// (0x0005a882) vded2_slider_bg_pane_g2

0xdc93,	// (0x0005a88b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005c6e1) vded2_slider_bg_pane_g

0x39c9,	// (0x000505c1) aid_postcard_touch_down_pane_ParamLimits

0x39c9,	// (0x000505c1) aid_postcard_touch_down_pane

0x39df,	// (0x000505d7) aid_postcard_touch_up_pane_ParamLimits

0x39df,	// (0x000505d7) aid_postcard_touch_up_pane

0x9700,	// (0x000562f8) main_blid2_pane

0x9cd9,	// (0x000568d1) popup_blid2_search_window

0x9700,	// (0x000562f8) blid2_gps_pane

0x9700,	// (0x000562f8) blid2_navig_pane

0x9700,	// (0x000562f8) blid2_search_pane

0x9700,	// (0x000562f8) blid2_tripm_pane

0x7814,	// (0x0005440c) blid2_search_pane_g1_ParamLimits

0x7814,	// (0x0005440c) blid2_search_pane_g1

0x782e,	// (0x00054426) blid2_search_pane_t1_ParamLimits

0x782e,	// (0x00054426) blid2_search_pane_t1

0x7840,	// (0x00054438) aid_size_cell_blid2_gps_ParamLimits

0x7840,	// (0x00054438) aid_size_cell_blid2_gps

0x7858,	// (0x00054450) blid2_gps_pane_g1_ParamLimits

0x7858,	// (0x00054450) blid2_gps_pane_g1

0x786c,	// (0x00054464) grid_blid2_satellite_pane_ParamLimits

0x786c,	// (0x00054464) grid_blid2_satellite_pane

0x7886,	// (0x0005447e) blid2_navig_pane_g1_ParamLimits

0x7886,	// (0x0005447e) blid2_navig_pane_g1

0x7892,	// (0x0005448a) blid2_navig_pane_t1_ParamLimits

0x7892,	// (0x0005448a) blid2_navig_pane_t1

0x78ad,	// (0x000544a5) blid2_navig_pane_t2_ParamLimits

0x78ad,	// (0x000544a5) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005c6e8) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005c6e8) blid2_navig_pane_t

0x78c8,	// (0x000544c0) blid2_navig_ring_pane_ParamLimits

0x78c8,	// (0x000544c0) blid2_navig_ring_pane

0x78e1,	// (0x000544d9) blid2_speed_pane_ParamLimits

0x78e1,	// (0x000544d9) blid2_speed_pane

0x78ed,	// (0x000544e5) blid2_tripm_pane_g1_ParamLimits

0x78ed,	// (0x000544e5) blid2_tripm_pane_g1

0x7906,	// (0x000544fe) blid2_tripm_pane_g2_ParamLimits

0x7906,	// (0x000544fe) blid2_tripm_pane_g2

0x791a,	// (0x00054512) blid2_tripm_pane_g3_ParamLimits

0x791a,	// (0x00054512) blid2_tripm_pane_g3

0x792e,	// (0x00054526) blid2_tripm_pane_g4_ParamLimits

0x792e,	// (0x00054526) blid2_tripm_pane_g4

0x7942,	// (0x0005453a) blid2_tripm_pane_g5_ParamLimits

0x7942,	// (0x0005453a) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005c6ed) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005c6ed) blid2_tripm_pane_g

0x7968,	// (0x00054560) blid2_tripm_pane_t1_ParamLimits

0x7968,	// (0x00054560) blid2_tripm_pane_t1

0x7983,	// (0x0005457b) blid2_tripm_pane_t2_ParamLimits

0x7983,	// (0x0005457b) blid2_tripm_pane_t2

0x799c,	// (0x00054594) blid2_tripm_pane_t3_ParamLimits

0x799c,	// (0x00054594) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005c6fa) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005c6fa) blid2_tripm_pane_t

0x79e3,	// (0x000545db) cell_blid2_satellite_pane_ParamLimits

0x79e3,	// (0x000545db) cell_blid2_satellite_pane

0x7a01,	// (0x000545f9) cell_blid2_satellite_pane_g1

0xdc9c,	// (0x0005a894) cell_blid2_satellite_pane_t1

0xcc40,	// (0x00059838) blid2_speed_pane_g1

0xdcaa,	// (0x0005a8a2) blid2_speed_pane_t1

0xdcb8,	// (0x0005a8b0) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005c703) blid2_speed_pane_t

0xcc40,	// (0x00059838) blid2_navig_ring_pane_g1

0x7a0a,	// (0x00054602) blid2_navig_ring_pane_g2

0x7a12,	// (0x0005460a) blid2_navig_ring_pane_g3

0x7a1a,	// (0x00054612) blid2_navig_ring_pane_g4

0x7a22,	// (0x0005461a) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005c708) blid2_navig_ring_pane_g

0x9700,	// (0x000562f8) bg_popup_window_pane_cp011

0xdcc6,	// (0x0005a8be) popup_blid2_search_window_g1

0xdcce,	// (0x0005a8c6) popup_blid2_search_window_t1

0xdcdc,	// (0x0005a8d4) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005c713) popup_blid2_search_window_t

0xab0e,	// (0x00057706) main_browser_pane_g1

0xa801,	// (0x000573f9) main_browser_pane_ParamLimits

0xa4a4,	// (0x0005709c) bg_button_pane_cp011_ParamLimits

0x6a4c,	// (0x00053644) cell_vitu2_function_pane_g1_ParamLimits

0xc838,	// (0x00059430) bg_popup_sub_pane_cp22_ParamLimits

0x05d9,	// (0x0004d1d1) input_focus_pane_cp08_ParamLimits

0x7352,	// (0x00053f4a) popup_vitu2_query_button_pane_ParamLimits

0x7352,	// (0x00053f4a) popup_vitu2_query_button_pane

0x05f0,	// (0x0004d1e8) popup_vitu2_query_input_button_pane

0xd950,	// (0x0005a548) popup_vitu2_query_window_g1_ParamLimits

0x05fa,	// (0x0004d1f2) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005c614) popup_vitu2_query_window_g_ParamLimits

0x9700,	// (0x000562f8) bg_button_pane_cp026

0x7a2a,	// (0x00054622) popup_vitu2_query_input_button_pane_g1

0x9700,	// (0x000562f8) bg_button_pane_cp025

0xdcea,	// (0x0005a8e2) popup_vitu2_query_button_pane_t1

0x505f,	// (0x00051c57) main_mp3_pane_t6

0x506d,	// (0x00051c65) popup_slider_window_cp01

0xa08b,	// (0x00056c83) cam4_battery_pane

0xa0e4,	// (0x00056cdc) cam4_battery_pane_cp02

0xa1ca,	// (0x00056dc2) cam4_battery_pane_cp01

0xa1ca,	// (0x00056dc2) cam4_battery_pane_cp03

0xcc40,	// (0x00059838) cam4_battery_pane_g1

0xdcf8,	// (0x0005a8f0) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005c718) cam4_battery_pane_g

0xcb0c,	// (0x00059704) popup_blid_sat_info2_window_t11

0xb291,	// (0x00057e89) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ba,	// (0x00057eb2) aid_size_touch_mv_arrow_right_ParamLimits

0xb318,	// (0x00057f10) navi_pane_g1_ParamLimits

0xb324,	// (0x00057f1c) navi_pane_g2_ParamLimits

0xb352,	// (0x00057f4a) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005bfdd) navi_pane_g_ParamLimits

0x3481,	// (0x00050079) navi_pane_mv_t1_ParamLimits

0x5cc2,	// (0x000528ba) grid_imed_effect_pane_ParamLimits

0x2184,	// (0x0004ed7c) aid_placing_vt_slider_lsc

0xaa5d,	// (0x00057655) aid_placing_vt_slider_prt

0xa4a4,	// (0x0005709c) bg_tb_trans_pane_cp01_ParamLimits

0xcdd8,	// (0x000599d0) popup_image_details_window_g1_ParamLimits

0xcdeb,	// (0x000599e3) popup_image_details_window_g2_ParamLimits

0xce00,	// (0x000599f8) popup_image_details_window_g3_ParamLimits

0xce00,	// (0x000599f8) popup_image_details_window_g3

0xf718,	// (0x0005c310) popup_image_details_window_g_ParamLimits

0xce14,	// (0x00059a0c) popup_image_details_window_t1_ParamLimits

0xce26,	// (0x00059a1e) popup_image_details_window_t2_ParamLimits

0xce3f,	// (0x00059a37) popup_image_details_window_t3_ParamLimits

0xce53,	// (0x00059a4b) popup_image_details_window_t4_ParamLimits

0xce6e,	// (0x00059a66) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0005c317) popup_image_details_window_t_ParamLimits

0x7634,	// (0x0005422c) cl_header_name_pane_ParamLimits

0x7634,	// (0x0005422c) cl_header_name_pane

0x7a32,	// (0x0005462a) cl_header_name_pane_t1_ParamLimits

0x7a32,	// (0x0005462a) cl_header_name_pane_t1

0x7a53,	// (0x0005464b) cl_header_name_pane_t2_ParamLimits

0x7a53,	// (0x0005464b) cl_header_name_pane_t2

0x7a95,	// (0x0005468d) cl_header_name_pane_t3_ParamLimits

0x7a95,	// (0x0005468d) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005c71d) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005c71d) cl_header_name_pane_t

0xb3e1,	// (0x00057fd9) navi_pane_mv_g2_ParamLimits

0xd69e,	// (0x0005a296) field_vitu2_entry_pane_g1_ParamLimits

0xd6aa,	// (0x0005a2a2) field_vitu2_entry_pane_g2_ParamLimits

0xd6b6,	// (0x0005a2ae) field_vitu2_entry_pane_g3_ParamLimits

0xd6b6,	// (0x0005a2ae) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005c513) field_vitu2_entry_pane_g_ParamLimits

0xa15c,	// (0x00056d54) cell_vitu2_itu_pane_g1_ParamLimits

0x69e0,	// (0x000535d8) cell_vitu2_itu_pane_g2_ParamLimits

0x69e0,	// (0x000535d8) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005c51f) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005c51f) cell_vitu2_itu_pane_g

0xa4a4,	// (0x0005709c) bg_vkb2_func_pane_cp05_ParamLimits

0xa4a4,	// (0x0005709c) bg_vkb2_func_pane_cp05

0xa4a4,	// (0x0005709c) bg_vkb2_func_pane_cp03

0xa4a4,	// (0x0005709c) bg_vkb2_func_pane_cp04

0xa4a4,	// (0x0005709c) bg_vkb2_func_pane_cp10_ParamLimits

0xa4a4,	// (0x0005709c) bg_vkb2_func_pane_cp10

0x0717,	// (0x0004d30f) bg_vkb2_func_pane_cp08

0x75de,	// (0x000541d6) bg_vkb2_func_pane_cp06

0x75ec,	// (0x000541e4) bg_vkb2_func_pane_cp07

0xdbf0,	// (0x0005a7e8) bg_vkb2_func_pane_cp11_ParamLimits

0xdbf0,	// (0x0005a7e8) bg_vkb2_func_pane_cp11

0xdc05,	// (0x0005a7fd) bg_vkb2_func_pane_cp12_ParamLimits

0xdc05,	// (0x0005a7fd) bg_vkb2_func_pane_cp12

0x9700,	// (0x000562f8) bg_vkb2_func_pane_cp09

0xd6d6,	// (0x0005a2ce) bg_vkb2_func_pane_g1

0xac1f,	// (0x00057817) bg_vkb2_func_pane_g2

0xd6de,	// (0x0005a2d6) bg_vkb2_func_pane_g3

0xd6e6,	// (0x0005a2de) bg_vkb2_func_pane_g4

0xd915,	// (0x0005a50d) bg_vkb2_func_pane_g5

0xd6fe,	// (0x0005a2f6) bg_vkb2_func_pane_g6

0xd706,	// (0x0005a2fe) bg_vkb2_func_pane_g7

0xd6f6,	// (0x0005a2ee) bg_vkb2_func_pane_g8

0xabff,	// (0x000577f7) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005c724) bg_vkb2_func_pane_g

0x7956,	// (0x0005454e) blid2_tripm_pane_g6_ParamLimits

0x7956,	// (0x0005454e) blid2_tripm_pane_g6

0xd540,	// (0x0005a138) mp4_progress_pane_g1

0x79cf,	// (0x000545c7) blid2_tripm_values_pane_ParamLimits

0x79cf,	// (0x000545c7) blid2_tripm_values_pane

0x7ac6,	// (0x000546be) blid2_tripm_values_pane_t1

0x7ad4,	// (0x000546cc) blid2_tripm_values_pane_t2

0x7ae2,	// (0x000546da) blid2_tripm_values_pane_t3

0x7af0,	// (0x000546e8) blid2_tripm_values_pane_t4

0x7afe,	// (0x000546f6) blid2_tripm_values_pane_t5

0x7b0c,	// (0x00054704) blid2_tripm_values_pane_t6

0x7b1a,	// (0x00054712) blid2_tripm_values_pane_t7

0x7b28,	// (0x00054720) blid2_tripm_values_pane_t8

0x7b36,	// (0x0005472e) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005c737) blid2_tripm_values_pane_t

0x21c6,	// (0x0004edbe) call_video_pane_t1_ParamLimits

0x21e4,	// (0x0004eddc) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005be66) call_video_pane_t_ParamLimits

0x03d0,	// (0x0004cfc8) msg_header_pane_g1_ParamLimits

0xb5bb,	// (0x000581b3) msg_header_pane_g2_ParamLimits

0xb5bb,	// (0x000581b3) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005c080) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005c080) msg_header_pane_g

0xa801,	// (0x000573f9) main_clock2_pane_ParamLimits

0x59c3,	// (0x000525bb) grid_clock2_toolbar_pane_ParamLimits

0x59c3,	// (0x000525bb) grid_clock2_toolbar_pane

0x59c3,	// (0x000525bb) listscroll_clock2_pane_ParamLimits

0x59c3,	// (0x000525bb) listscroll_clock2_pane

0x5ab6,	// (0x000526ae) main_clock2_pane_t3_ParamLimits

0x5ab6,	// (0x000526ae) main_clock2_pane_t3

0x5ada,	// (0x000526d2) main_clock2_pane_t4_ParamLimits

0x5ada,	// (0x000526d2) main_clock2_pane_t4

0xdd02,	// (0x0005a8fa) cell_clock2_toolbar_pane

0xdd0a,	// (0x0005a902) cell_clock2_toolbar_pane_cp01

0xdd0a,	// (0x0005a902) cell_clock2_toolbar_pane_cp02

0xdd12,	// (0x0005a90a) cell_clock2_toolbar_pane_cp03

0xdd1a,	// (0x0005a912) list_clock2_pane

0xb207,	// (0x00057dff) scroll_pane_cp10

0xdd22,	// (0x0005a91a) list_single_clock2_pane_ParamLimits

0xdd22,	// (0x0005a91a) list_single_clock2_pane

0xa9c6,	// (0x000575be) list_highlight_pane_cp08

0xdd2f,	// (0x0005a927) list_single_clock2_pane_t1

0xdd3d,	// (0x0005a935) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005c74a) list_single_clock2_pane_t

0x9700,	// (0x000562f8) bg_button_pane_cp10

0xdd4b,	// (0x0005a943) cell_clock2_toolbar_pane_g1

0x3955,	// (0x0005054d) aid_main_viewer_pane_g1_ParamLimits

0x3955,	// (0x0005054d) aid_main_viewer_pane_g1

0x3963,	// (0x0005055b) aid_main_viewer_pane_g2_ParamLimits

0x3963,	// (0x0005055b) aid_main_viewer_pane_g2

0x3971,	// (0x00050569) aid_main_viewer_pane_g3_ParamLimits

0x3971,	// (0x00050569) aid_main_viewer_pane_g3

0x3980,	// (0x00050578) aid_main_viewer_pane_g4_ParamLimits

0x3980,	// (0x00050578) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005c091) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005c091) aid_main_viewer_pane_g

0x4286,	// (0x00050e7e) main_calc_pane_ParamLimits

0x429a,	// (0x00050e92) main_dialer2_pane_ParamLimits

0x9700,	// (0x000562f8) main_cam6_pane

0x9700,	// (0x000562f8) main_vid6_pane

0x59cf,	// (0x000525c7) listscroll_gen_pane_cp06_ParamLimits

0x59cf,	// (0x000525c7) listscroll_gen_pane_cp06

0x5afd,	// (0x000526f5) main_clock2_pane_t5_ParamLimits

0x5afd,	// (0x000526f5) main_clock2_pane_t5

0x5b57,	// (0x0005274f) aid_call2_pane_cp10_ParamLimits

0x5b69,	// (0x00052761) aid_call_pane_cp10_ParamLimits

0xb285,	// (0x00057e7d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb285,	// (0x00057e7d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b7b,	// (0x00052773) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b7b,	// (0x00052773) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb285,	// (0x00057e7d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0005c3cc) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b8d,	// (0x00052785) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61f6,	// (0x00052dee) cell_dialer2_keypad_pane_g2_ParamLimits

0x61f6,	// (0x00052dee) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005c4b2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005c4b2) cell_dialer2_keypad_pane_g

0x6212,	// (0x00052e0a) cell_dialer2_keypad_pane_t1

0x6d69,	// (0x00053961) main_cset_text2_pane_ParamLimits

0x6d69,	// (0x00053961) main_cset_text2_pane

0xdb58,	// (0x0005a750) area_vitu2_query_pane_g1_ParamLimits

0x06de,	// (0x0004d2d6) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005c667) area_vitu2_query_pane_g_ParamLimits

0x75ba,	// (0x000541b2) area_vitu2_query_pane_t7_ParamLimits

0x75ba,	// (0x000541b2) area_vitu2_query_pane_t7

0x75de,	// (0x000541d6) bg_button_pane_cp018_ParamLimits

0x75ec,	// (0x000541e4) bg_button_pane_cp021_ParamLimits

0x0717,	// (0x0004d30f) bg_button_pane_cp022_ParamLimits

0x0717,	// (0x0004d30f) bg_vkb2_func_pane_cp08_ParamLimits

0x75de,	// (0x000541d6) bg_vkb2_func_pane_cp06_ParamLimits

0x75ec,	// (0x000541e4) bg_vkb2_func_pane_cp07_ParamLimits

0x0726,	// (0x0004d31e) input_focus_pane_cp09_ParamLimits

0xa234,	// (0x00056e2c) cam6_autofocus_pane_ParamLimits

0xa234,	// (0x00056e2c) cam6_autofocus_pane

0x7b44,	// (0x0005473c) cam6_image_uncrop_pane_ParamLimits

0x7b44,	// (0x0005473c) cam6_image_uncrop_pane

0x7b53,	// (0x0005474b) cam6_indi_pane_ParamLimits

0x7b53,	// (0x0005474b) cam6_indi_pane

0x7b69,	// (0x00054761) cam6_mode_pane_ParamLimits

0x7b69,	// (0x00054761) cam6_mode_pane

0x7b7b,	// (0x00054773) cam6_timer_pane_ParamLimits

0x7b7b,	// (0x00054773) cam6_timer_pane

0x7b87,	// (0x0005477f) cam6_zoom_pane_ParamLimits

0x7b87,	// (0x0005477f) cam6_zoom_pane

0x7b93,	// (0x0005478b) cam6_mode_pane_g1_ParamLimits

0x7b93,	// (0x0005478b) cam6_mode_pane_g1

0x7ba3,	// (0x0005479b) cam6_mode_pane_g2_ParamLimits

0x7ba3,	// (0x0005479b) cam6_mode_pane_g2

0x7bb3,	// (0x000547ab) cam6_mode_pane_g3_ParamLimits

0x7bb3,	// (0x000547ab) cam6_mode_pane_g3

0x7bc3,	// (0x000547bb) cam6_mode_pane_g4_ParamLimits

0x7bc3,	// (0x000547bb) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005c74f) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005c74f) cam6_mode_pane_g

0xda18,	// (0x0005a610) bg_tb_trans_pane_cp08_ParamLimits

0xda18,	// (0x0005a610) bg_tb_trans_pane_cp08

0xdd53,	// (0x0005a94b) cam6_battery_pane_ParamLimits

0xdd53,	// (0x0005a94b) cam6_battery_pane

0xdd69,	// (0x0005a961) cam6_indi_pane_g1_ParamLimits

0xdd69,	// (0x0005a961) cam6_indi_pane_g1

0xdd7b,	// (0x0005a973) cam6_indi_pane_g2_ParamLimits

0xdd7b,	// (0x0005a973) cam6_indi_pane_g2

0xdd8d,	// (0x0005a985) cam6_indi_pane_g3_ParamLimits

0xdd8d,	// (0x0005a985) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005c758) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005c758) cam6_indi_pane_g

0xdd9f,	// (0x0005a997) cam6_indi_pane_t1_ParamLimits

0xdd9f,	// (0x0005a997) cam6_indi_pane_t1

0x7bd3,	// (0x000547cb) cam6_autofocus_pane_g1

0x7bdb,	// (0x000547d3) cam6_autofocus_pane_g2

0x7be3,	// (0x000547db) cam6_autofocus_pane_g3

0x7beb,	// (0x000547e3) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005c75f) cam6_autofocus_pane_g

0xddc5,	// (0x0005a9bd) cam6_timer_pane_g1

0xddcd,	// (0x0005a9c5) cam6_timer_pane_t1

0xdddb,	// (0x0005a9d3) cam6_zoom_cont_pane

0xdde3,	// (0x0005a9db) cam6_zoom_pane_g1

0xddeb,	// (0x0005a9e3) cam6_zoom_pane_g2

0x7bf3,	// (0x000547eb) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005c768) cam6_zoom_pane_g

0xcc40,	// (0x00059838) cam6_battery_pane_g1

0xcc40,	// (0x00059838) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0005c2d4) cam6_battery_pane_g

0xddf3,	// (0x0005a9eb) cam6_zoom_cont_pane_g1

0xddfc,	// (0x0005a9f4) cam6_zoom_cont_pane_g2

0xde05,	// (0x0005a9fd) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005c76f) cam6_zoom_cont_pane_g

0x7c10,	// (0x00054808) cam6_mode_pane_cp_ParamLimits

0x7c10,	// (0x00054808) cam6_mode_pane_cp

0x7b87,	// (0x0005477f) cam6_zoom_pane_cp_ParamLimits

0x7b87,	// (0x0005477f) cam6_zoom_pane_cp

0x7c22,	// (0x0005481a) vid6_image_uncrop_cif_pane_ParamLimits

0x7c22,	// (0x0005481a) vid6_image_uncrop_cif_pane

0x7c32,	// (0x0005482a) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c32,	// (0x0005482a) vid6_image_uncrop_nhd_pane

0x7b44,	// (0x0005473c) vid6_image_uncrop_vga_pane_ParamLimits

0x7b44,	// (0x0005473c) vid6_image_uncrop_vga_pane

0x7c41,	// (0x00054839) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c41,	// (0x00054839) vid6_image_uncrop_wvga_pane

0x7c50,	// (0x00054848) vid6_indi_pane_ParamLimits

0x7c50,	// (0x00054848) vid6_indi_pane

0xda18,	// (0x0005a610) bg_tb_trans_pane_cp09_ParamLimits

0xda18,	// (0x0005a610) bg_tb_trans_pane_cp09

0xde1d,	// (0x0005aa15) cam6_battery_pane_cp_ParamLimits

0xde1d,	// (0x0005aa15) cam6_battery_pane_cp

0xde29,	// (0x0005aa21) vid6_indi_pane_g1_ParamLimits

0xde29,	// (0x0005aa21) vid6_indi_pane_g1

0xde3b,	// (0x0005aa33) vid6_indi_pane_g2_ParamLimits

0xde3b,	// (0x0005aa33) vid6_indi_pane_g2

0xde4d,	// (0x0005aa45) vid6_indi_pane_g3_ParamLimits

0xde4d,	// (0x0005aa45) vid6_indi_pane_g3

0xde62,	// (0x0005aa5a) vid6_indi_pane_g4_ParamLimits

0xde62,	// (0x0005aa5a) vid6_indi_pane_g4

0xde77,	// (0x0005aa6f) vid6_indi_pane_g5_ParamLimits

0xde77,	// (0x0005aa6f) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005c776) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005c776) vid6_indi_pane_g

0xde91,	// (0x0005aa89) vid6_indi_pane_t1_ParamLimits

0xde91,	// (0x0005aa89) vid6_indi_pane_t1

0xdea7,	// (0x0005aa9f) vid6_indi_pane_t2_ParamLimits

0xdea7,	// (0x0005aa9f) vid6_indi_pane_t2

0xdecf,	// (0x0005aac7) vid6_indi_pane_t3_ParamLimits

0xdecf,	// (0x0005aac7) vid6_indi_pane_t3

0xdef7,	// (0x0005aaef) vid6_indi_pane_t4_ParamLimits

0xdef7,	// (0x0005aaef) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005c781) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005c781) vid6_indi_pane_t

0xdf1b,	// (0x0005ab13) wait_bar_pane_cp08

0x7c68,	// (0x00054860) main_cset_text2_pane_t1_ParamLimits

0x7c68,	// (0x00054860) main_cset_text2_pane_t1

0x7bfb,	// (0x000547f3) listscroll_gen_pane_cp06_t1_ParamLimits

0x7bfb,	// (0x000547f3) listscroll_gen_pane_cp06_t1

0x9700,	// (0x000562f8) main_cam6_set_pane

0xceb8,	// (0x00059ab0) bg_tb_trans_pane_cp06_ParamLimits

0xa093,	// (0x00056c8b) cam4_indicators_pane_g1_ParamLimits

0xa0a4,	// (0x00056c9c) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005c4ef) cam4_indicators_pane_g_ParamLimits

0xa0c2,	// (0x00056cba) cam4_indicators_pane_t1_ParamLimits

0xa4a4,	// (0x0005709c) bg_tb_trans_pane_cp07_ParamLimits

0xa0ee,	// (0x00056ce6) vid4_indicators_pane_g1_ParamLimits

0xa102,	// (0x00056cfa) vid4_indicators_pane_g2_ParamLimits

0xa116,	// (0x00056d0e) vid4_indicators_pane_g3_ParamLimits

0xa127,	// (0x00056d1f) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005c501) vid4_indicators_pane_g_ParamLimits

0xa145,	// (0x00056d3d) vid4_indicators_pane_t1_ParamLimits

0xa1d2,	// (0x00056dca) vid4_progress_pane_g1_ParamLimits

0xa1e2,	// (0x00056dda) vid4_progress_pane_g2_ParamLimits

0x7724,	// (0x0005431c) vid4_progress_pane_g3_ParamLimits

0xa1f2,	// (0x00056dea) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005c6b2) vid4_progress_pane_g_ParamLimits

0x7736,	// (0x0005432e) vid4_progress_pane_t1_ParamLimits

0xa20a,	// (0x00056e02) vid4_progress_pane_t2_ParamLimits

0xa21f,	// (0x00056e17) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005c6bd) vid4_progress_pane_t_ParamLimits

0x774e,	// (0x00054346) wait_bar_pane_cp07_ParamLimits

0x7c85,	// (0x0005487d) main_cam6_set_pane_g2_ParamLimits

0x7c85,	// (0x0005487d) main_cam6_set_pane_g2

0x7ca9,	// (0x000548a1) main_cset6_listscroll_pane_ParamLimits

0x7ca9,	// (0x000548a1) main_cset6_listscroll_pane

0x7cc9,	// (0x000548c1) main_cset6_slider_pane_ParamLimits

0x7cc9,	// (0x000548c1) main_cset6_slider_pane

0x7cdf,	// (0x000548d7) main_cset6_text2_pane_ParamLimits

0x7cdf,	// (0x000548d7) main_cset6_text2_pane

0xdf2a,	// (0x0005ab22) main_cset6_text_pane

0xdf32,	// (0x0005ab2a) main_cset_list_pane_copy1_ParamLimits

0xdf32,	// (0x0005ab2a) main_cset_list_pane_copy1

0xdf42,	// (0x0005ab3a) scroll_pane_cp028_copy1

0x7ced,	// (0x000548e5) cset_list_set_pane_copy1

0x7cfe,	// (0x000548f6) aid_position_infowindow_above_copy1

0x7d06,	// (0x000548fe) aid_position_infowindow_below_copy1

0x0749,	// (0x0004d341) cset_list_set_pane_g1_copy1

0x0751,	// (0x0004d349) cset_list_set_pane_g3_copy1_ParamLimits

0x0751,	// (0x0004d349) cset_list_set_pane_g3_copy1

0x0760,	// (0x0004d358) cset_list_set_pane_t1_copy1_ParamLimits

0x0760,	// (0x0004d358) cset_list_set_pane_t1_copy1

0xa4a4,	// (0x0005709c) list_highlight_pane_cp021_copy1_ParamLimits

0xa4a4,	// (0x0005709c) list_highlight_pane_cp021_copy1

0xdf4b,	// (0x0005ab43) cset6_slider_pane_ParamLimits

0xdf4b,	// (0x0005ab43) cset6_slider_pane

0xdf77,	// (0x0005ab6f) main_cset6_slider_pane_g1_ParamLimits

0xdf77,	// (0x0005ab6f) main_cset6_slider_pane_g1

0x7d0e,	// (0x00054906) main_cset6_slider_pane_g2_ParamLimits

0x7d0e,	// (0x00054906) main_cset6_slider_pane_g2

0xdf9f,	// (0x0005ab97) main_cset6_slider_pane_g3_ParamLimits

0xdf9f,	// (0x0005ab97) main_cset6_slider_pane_g3

0x7d36,	// (0x0005492e) main_cset6_slider_pane_g4_ParamLimits

0x7d36,	// (0x0005492e) main_cset6_slider_pane_g4

0x7d42,	// (0x0005493a) main_cset6_slider_pane_g5_ParamLimits

0x7d42,	// (0x0005493a) main_cset6_slider_pane_g5

0xd805,	// (0x0005a3fd) main_cset6_slider_pane_g7_ParamLimits

0xd805,	// (0x0005a3fd) main_cset6_slider_pane_g7

0xd811,	// (0x0005a409) main_cset6_slider_pane_g8_ParamLimits

0xd811,	// (0x0005a409) main_cset6_slider_pane_g8

0x6e16,	// (0x00053a0e) main_cset6_slider_pane_g9_ParamLimits

0x6e16,	// (0x00053a0e) main_cset6_slider_pane_g9

0x6e22,	// (0x00053a1a) main_cset6_slider_pane_g10_ParamLimits

0x6e22,	// (0x00053a1a) main_cset6_slider_pane_g10

0x6e2e,	// (0x00053a26) main_cset6_slider_pane_g11_ParamLimits

0x6e2e,	// (0x00053a26) main_cset6_slider_pane_g11

0x6e3a,	// (0x00053a32) main_cset6_slider_pane_g12_ParamLimits

0x6e3a,	// (0x00053a32) main_cset6_slider_pane_g12

0x6e46,	// (0x00053a3e) main_cset6_slider_pane_g13_ParamLimits

0x6e46,	// (0x00053a3e) main_cset6_slider_pane_g13

0x6e52,	// (0x00053a4a) main_cset6_slider_pane_g14_ParamLimits

0x6e52,	// (0x00053a4a) main_cset6_slider_pane_g14

0x7d4e,	// (0x00054946) main_cset6_slider_pane_g15_ParamLimits

0x7d4e,	// (0x00054946) main_cset6_slider_pane_g15

0x6e76,	// (0x00053a6e) main_cset6_slider_pane_g16_ParamLimits

0x6e76,	// (0x00053a6e) main_cset6_slider_pane_g16

0x6e82,	// (0x00053a7a) main_cset6_slider_pane_g17_ParamLimits

0x6e82,	// (0x00053a7a) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005c78a) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005c78a) main_cset6_slider_pane_g

0xdfab,	// (0x0005aba3) main_cset6_slider_pane_t1_ParamLimits

0xdfab,	// (0x0005aba3) main_cset6_slider_pane_t1

0x7d7e,	// (0x00054976) main_cset6_slider_pane_t2_ParamLimits

0x7d7e,	// (0x00054976) main_cset6_slider_pane_t2

0x7da9,	// (0x000549a1) main_cset6_slider_pane_t3_ParamLimits

0x7da9,	// (0x000549a1) main_cset6_slider_pane_t3

0x7dd4,	// (0x000549cc) main_cset6_slider_pane_t4_ParamLimits

0x7dd4,	// (0x000549cc) main_cset6_slider_pane_t4

0x7dff,	// (0x000549f7) main_cset6_slider_pane_t5_ParamLimits

0x7dff,	// (0x000549f7) main_cset6_slider_pane_t5

0xdfec,	// (0x0005abe4) main_cset6_slider_pane_t7_ParamLimits

0xdfec,	// (0x0005abe4) main_cset6_slider_pane_t7

0x7e2a,	// (0x00054a22) main_cset6_slider_pane_t8_ParamLimits

0x7e2a,	// (0x00054a22) main_cset6_slider_pane_t8

0x7e4e,	// (0x00054a46) main_cset6_slider_pane_t9_ParamLimits

0x7e4e,	// (0x00054a46) main_cset6_slider_pane_t9

0x7e72,	// (0x00054a6a) main_cset6_slider_pane_t10_ParamLimits

0x7e72,	// (0x00054a6a) main_cset6_slider_pane_t10

0x7e96,	// (0x00054a8e) main_cset6_slider_pane_t11_ParamLimits

0x7e96,	// (0x00054a8e) main_cset6_slider_pane_t11

0xe022,	// (0x0005ac1a) main_cset6_slider_pane_t14_ParamLimits

0xe022,	// (0x0005ac1a) main_cset6_slider_pane_t14

0xe05b,	// (0x0005ac53) main_cset6_slider_pane_t15_ParamLimits

0xe05b,	// (0x0005ac53) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005c7af) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005c7af) main_cset6_slider_pane_t

0xd8c9,	// (0x0005a4c1) cset_slider_pane_g1_copy1

0xd8d2,	// (0x0005a4ca) cset_slider_pane_g2_copy1

0xd8db,	// (0x0005a4d3) cset_slider_pane_g3_copy1

0x9700,	// (0x000562f8) bg_popup_sub_pane_cp011_copy1

0xe094,	// (0x0005ac8c) main_cset_text_pane_g1_copy1

0xd964,	// (0x0005a55c) main_cset_text_pane_t1_copy1

0xd972,	// (0x0005a56a) main_cset_text_pane_t2_copy1

0xd980,	// (0x0005a578) main_cset_text_pane_t3_copy1

0xd98e,	// (0x0005a586) main_cset_text_pane_t4_copy1

0xd99c,	// (0x0005a594) main_cset_text_pane_t5_copy1

0xe09c,	// (0x0005ac94) main_cset_text_pane_t6_copy1

0xe0aa,	// (0x0005aca2) main_cset_text_pane_t7_copy1

0x7c68,	// (0x00054860) main_cset_text2_pane_t1_copy1

0xa4a4,	// (0x0005709c) main_ncimui_pane

0x44e4,	// (0x000510dc) popup_query_ncimui_window_ParamLimits

0x44e4,	// (0x000510dc) popup_query_ncimui_window

0x5203,	// (0x00051dfb) field_cale_ev2_pane_g4_ParamLimits

0x5203,	// (0x00051dfb) field_cale_ev2_pane_g4

0x60d6,	// (0x00052cce) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60d6,	// (0x00052cce) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0005c48d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0005c48d) cell_video_dialer_keypad_pane_g

0x60ee,	// (0x00052ce6) cell_video_dialer_keypad_pane_t1

0x9700,	// (0x000562f8) bg_popup_window_pane_cp012

0xb0b8,	// (0x00057cb0) heading_pane_cp06

0xe0d6,	// (0x0005acce) ncim_query_content_pane

0x9700,	// (0x000562f8) bg_popup_heading_pane_cp01

0xe0de,	// (0x0005acd6) ncim_heading_pane_t1

0xe0ec,	// (0x0005ace4) ncim_indicator_popup_pane

0xe0fe,	// (0x0005acf6) ncim_query_button_pane

0xe112,	// (0x0005ad0a) ncim_query_content_pane_t1

0xe124,	// (0x0005ad1c) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005c7f3) ncim_query_content_pane_t

0xe15e,	// (0x0005ad56) ncim_query_list_pane

0xe170,	// (0x0005ad68) ncim_query_popup_pane

0xe0ec,	// (0x0005ace4) ncim_indicator_popup_pane_ParamLimits

0x7fe0,	// (0x00054bd8) ncim_query_content_pane_g1_ParamLimits

0x7fe0,	// (0x00054bd8) ncim_query_content_pane_g1

0xe112,	// (0x0005ad0a) ncim_query_content_pane_t1_ParamLimits

0xe124,	// (0x0005ad1c) ncim_query_content_pane_t2_ParamLimits

0x7fec,	// (0x00054be4) ncim_query_content_pane_t3_ParamLimits

0x7fec,	// (0x00054be4) ncim_query_content_pane_t3

0x8014,	// (0x00054c0c) ncim_query_content_pane_t4_ParamLimits

0x8014,	// (0x00054c0c) ncim_query_content_pane_t4

0x803c,	// (0x00054c34) ncim_query_content_pane_t5_ParamLimits

0x803c,	// (0x00054c34) ncim_query_content_pane_t5

0xe136,	// (0x0005ad2e) ncim_query_content_pane_t6_ParamLimits

0xe136,	// (0x0005ad2e) ncim_query_content_pane_t6

0xfbfb,	// (0x0005c7f3) ncim_query_content_pane_t_ParamLimits

0xe15e,	// (0x0005ad56) ncim_query_list_pane_ParamLimits

0xe170,	// (0x0005ad68) ncim_query_popup_pane_ParamLimits

0xe184,	// (0x0005ad7c) wait_bar_pane_cp04

0x9700,	// (0x000562f8) input_focus_pane_cp011

0xe18c,	// (0x0005ad84) ncim_query_popup_pane_t1

0xe19a,	// (0x0005ad92) ncim_list_query_list_pane_ParamLimits

0xe19a,	// (0x0005ad92) ncim_list_query_list_pane

0x9700,	// (0x000562f8) bg_button_pane_cp027

0xe1a7,	// (0x0005ad9f) ncim_query_button_pane_g1

0x9700,	// (0x000562f8) list_highlight_pane_cp012

0xe1b1,	// (0x0005ada9) ncim_list_query_list_pane_g1

0xe1b9,	// (0x0005adb1) ncim_list_query_list_pane_t1

0xa0b3,	// (0x00056cab) cam4_indicators_pane_g3_ParamLimits

0xa0b3,	// (0x00056cab) cam4_indicators_pane_g3

0xa133,	// (0x00056d2b) vid4_indicators_pane_g5_ParamLimits

0xa133,	// (0x00056d2b) vid4_indicators_pane_g5

0xa1fe,	// (0x00056df6) vid4_progress_pane_g5_ParamLimits

0xa1fe,	// (0x00056df6) vid4_progress_pane_g5

0x7ece,	// (0x00054ac6) main_ncimui_pane_g1

0x7f34,	// (0x00054b2c) ncimui_group_query_pane_ParamLimits

0x7f34,	// (0x00054b2c) ncimui_group_query_pane

0x7f7c,	// (0x00054b74) ncimui_list_pane_ParamLimits

0x7f7c,	// (0x00054b74) ncimui_list_pane

0x7fa3,	// (0x00054b9b) ncimui_text_pane_ParamLimits

0x7fa3,	// (0x00054b9b) ncimui_text_pane

0x8064,	// (0x00054c5c) ncimui_text_pane_t1_ParamLimits

0x8064,	// (0x00054c5c) ncimui_text_pane_t1

0xe1c7,	// (0x0005adbf) ncimui_list_single_graphic_pane_ParamLimits

0xe1c7,	// (0x0005adbf) ncimui_list_single_graphic_pane

0x8082,	// (0x00054c7a) ncimui_query_pane_ParamLimits

0x8082,	// (0x00054c7a) ncimui_query_pane

0x9700,	// (0x000562f8) list_highlight_pane_cp013

0xe1d7,	// (0x0005adcf) ncim_list_query_list_pane_t1_copy1

0xe1b1,	// (0x0005ada9) ncim_list_single_graphic_pane_g1

0xe1e5,	// (0x0005addd) ncim_query_button_pane_cp01

0xe1f1,	// (0x0005ade9) ncim_query_entry_pane_ParamLimits

0xe1f1,	// (0x0005ade9) ncim_query_entry_pane

0xe204,	// (0x0005adfc) ncimui_query_pane_g1

0xe210,	// (0x0005ae08) ncimui_query_pane_t1_ParamLimits

0xe210,	// (0x0005ae08) ncimui_query_pane_t1

0xa4a4,	// (0x0005709c) input_focus_pane_cp012

0xe229,	// (0x0005ae21) ncim_query_entry_pane_t1

0xa801,	// (0x000573f9) main_im_pane_ParamLimits

0xa4a4,	// (0x0005709c) main_mobtv_pane_ParamLimits

0xa4a4,	// (0x0005709c) main_mobtv_pane

0x7d66,	// (0x0005495e) main_cset6_slider_pane_g18_ParamLimits

0x7d66,	// (0x0005495e) main_cset6_slider_pane_g18

0x7d72,	// (0x0005496a) main_cset6_slider_pane_g19_ParamLimits

0x7d72,	// (0x0005496a) main_cset6_slider_pane_g19

0xb1c9,	// (0x00057dc1) bg_main_mobtv_pane_ParamLimits

0xb1c9,	// (0x00057dc1) bg_main_mobtv_pane

0x8095,	// (0x00054c8d) main_mobtv_info_pane

0x809e,	// (0x00054c96) main_mobtv_loading_pane_ParamLimits

0x809e,	// (0x00054c96) main_mobtv_loading_pane

0xe23b,	// (0x0005ae33) main_mobtv_pg_channel_list_pane

0xe245,	// (0x0005ae3d) main_mobtv_pg_hdr_pane

0x80ab,	// (0x00054ca3) main_mobtv_programe_curr_pane_ParamLimits

0x80ab,	// (0x00054ca3) main_mobtv_programe_curr_pane

0x80b8,	// (0x00054cb0) main_mobtv_programe_next_pane_ParamLimits

0x80b8,	// (0x00054cb0) main_mobtv_programe_next_pane

0xe24e,	// (0x0005ae46) popup_mobtv_noti_window

0xcc40,	// (0x00059838) main_tv_pg_hdr_pane_g1

0xe256,	// (0x0005ae4e) main_tv_pg_hdr_pane_g2

0xe25e,	// (0x0005ae56) main_tv_pg_hdr_pane_g3

0xe266,	// (0x0005ae5e) main_tv_pg_hdr_pane_g4

0xe26e,	// (0x0005ae66) main_tv_pg_hdr_pane_g5

0xe278,	// (0x0005ae70) main_tv_pg_hdr_pane_g6

0xe282,	// (0x0005ae7a) main_tv_pg_hdr_pane_g7

0xe28c,	// (0x0005ae84) main_tv_pg_hdr_pane_g8

0xe296,	// (0x0005ae8e) main_tv_pg_hdr_pane_g9

0xe2a0,	// (0x0005ae98) main_tv_pg_hdr_pane_g10

0xe2aa,	// (0x0005aea2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005c800) main_tv_pg_hdr_pane_g

0xe2b4,	// (0x0005aeac) main_tv_pg_hdr_pane_t1

0xe2c2,	// (0x0005aeba) main_tv_pg_hdr_pane_t2

0xe2d0,	// (0x0005aec8) main_tv_pg_hdr_pane_t3

0xe2e0,	// (0x0005aed8) main_tv_pg_hdr_pane_t4

0xe2f0,	// (0x0005aee8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005c817) main_tv_pg_hdr_pane_t

0xe300,	// (0x0005aef8) single_mobtv_pg_channel_pane_ParamLimits

0xe300,	// (0x0005aef8) single_mobtv_pg_channel_pane

0xe312,	// (0x0005af0a) single_mobtv_pg_channel_table_pane

0xe31b,	// (0x0005af13) single_mobtv_pg_channel_thumb_pane

0xe324,	// (0x0005af1c) single_tv_pg_channel_pane_g1

0xe32d,	// (0x0005af25) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005c822) single_tv_pg_channel_pane_g

0xceb8,	// (0x00059ab0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb8,	// (0x00059ab0) bg_single_mobtv_pg_channel_thumb_pane

0xe336,	// (0x0005af2e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe336,	// (0x0005af2e) single_mobtv_pg_channel_thumb_pane_g1

0xe344,	// (0x0005af3c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe344,	// (0x0005af3c) single_mobtv_pg_channel_thumb_pane_g2

0xe350,	// (0x0005af48) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe350,	// (0x0005af48) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005c827) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005c827) single_mobtv_pg_channel_thumb_pane_g

0xe35c,	// (0x0005af54) single_mobtv_pg_channel_thumb_pane_t1

0xe36a,	// (0x0005af62) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005c82e) single_mobtv_pg_channel_thumb_pane_t

0xcc40,	// (0x00059838) bg_single_mobtv_pg_channel_table_pane_g1

0xcc40,	// (0x00059838) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0005c2d4) bg_single_mobtv_pg_channel_table_pane_g

0xe378,	// (0x0005af70) single_mobtv_pg_channel_table_pane_t1

0xe386,	// (0x0005af7e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005c833) single_mobtv_pg_channel_table_pane_t

0x80cd,	// (0x00054cc5) main_mobtv_info_pane_g1_ParamLimits

0x80cd,	// (0x00054cc5) main_mobtv_info_pane_g1

0x80eb,	// (0x00054ce3) main_mobtv_info_pane_t1_ParamLimits

0x80eb,	// (0x00054ce3) main_mobtv_info_pane_t1

0x8163,	// (0x00054d5b) main_mobtv_info_pane_t2_ParamLimits

0x8163,	// (0x00054d5b) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005c83d) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005c83d) main_mobtv_info_pane_t

0x81f2,	// (0x00054dea) wait_bar_pane_cp05

0x8204,	// (0x00054dfc) main_mobtv_loading_pane_g1_ParamLimits

0x8204,	// (0x00054dfc) main_mobtv_loading_pane_g1

0x8217,	// (0x00054e0f) main_mobtv_loading_pane_g2_ParamLimits

0x8217,	// (0x00054e0f) main_mobtv_loading_pane_g2

0x8223,	// (0x00054e1b) main_mobtv_loading_pane_g3_ParamLimits

0x8223,	// (0x00054e1b) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005c844) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005c844) main_mobtv_loading_pane_g

0xe394,	// (0x0005af8c) main_mobtv_loading_pane_t1_ParamLimits

0xe394,	// (0x0005af8c) main_mobtv_loading_pane_t1

0xe3ac,	// (0x0005afa4) main_mobtv_loading_pane_t2_ParamLimits

0xe3ac,	// (0x0005afa4) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005c84b) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005c84b) main_mobtv_loading_pane_t

0x8236,	// (0x00054e2e) wait_bar_pane_cp06_ParamLimits

0x8236,	// (0x00054e2e) wait_bar_pane_cp06

0xe3d0,	// (0x0005afc8) main_mobtv_programe_curr_pane_t1

0xe3de,	// (0x0005afd6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005c850) main_mobtv_programe_curr_pane_t

0xe3ec,	// (0x0005afe4) main_mobtv_programe_next_pane_t1

0xe3fa,	// (0x0005aff2) main_mobtv_programe_next_pane_t2

0xe408,	// (0x0005b000) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005c855) main_mobtv_programe_next_pane_t

0x9700,	// (0x000562f8) bg_popup_mobtv_noti_window_pane

0xe416,	// (0x0005b00e) popup_mobtv_noti_window_g1

0xe41e,	// (0x0005b016) popup_mobtv_noti_window_t1

0xe42c,	// (0x0005b024) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005c85c) popup_mobtv_noti_window_t

0xcc40,	// (0x00059838) bg_popup_mobtv_noti_window_pane_g1

0x9700,	// (0x000562f8) sc_clock_pane

0x9700,	// (0x000562f8) main_fs_bigclock_pane

0x79b9,	// (0x000545b1) blid2_tripm_pane_t4_ParamLimits

0x79b9,	// (0x000545b1) blid2_tripm_pane_t4

0x8245,	// (0x00054e3d) sc_clock_pane_g1_ParamLimits

0x8245,	// (0x00054e3d) sc_clock_pane_g1

0x8257,	// (0x00054e4f) sc_clock_pane_t1_ParamLimits

0x8257,	// (0x00054e4f) sc_clock_pane_t1

0x8279,	// (0x00054e71) sc_clock_pane_t2_ParamLimits

0x8279,	// (0x00054e71) sc_clock_pane_t2

0x8291,	// (0x00054e89) sc_clock_pane_t3_ParamLimits

0x8291,	// (0x00054e89) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005c861) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005c861) sc_clock_pane_t

0x8d11,	// (0x00055909) main_fs_bigclock_indicator_pane_ParamLimits

0x8d11,	// (0x00055909) main_fs_bigclock_indicator_pane

0x8331,	// (0x00054f29) main_fs_bigclock_pane_g1_ParamLimits

0x8331,	// (0x00054f29) main_fs_bigclock_pane_g1

0x8d1d,	// (0x00055915) main_fs_bigclock_pane_t1_ParamLimits

0x8d1d,	// (0x00055915) main_fs_bigclock_pane_t1

0x8d2f,	// (0x00055927) main_fs_bigclock_pane_t2_ParamLimits

0x8d2f,	// (0x00055927) main_fs_bigclock_pane_t2

0x8d43,	// (0x0005593b) main_fs_bigclock_pane_t3_ParamLimits

0x8d43,	// (0x0005593b) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x0005ca53) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0005ca53) main_fs_bigclock_pane_t

0xec87,	// (0x0005b87f) main_fs_bigclock_indicator_pane_g1

0xe106,	// (0x0005acfe) ncim_query_content_pane_g2_ParamLimits

0xe106,	// (0x0005acfe) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005c7ee) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005c7ee) ncim_query_content_pane_g

0x82aa,	// (0x00054ea2) sc_clock_pane_t4_ParamLimits

0x82aa,	// (0x00054ea2) sc_clock_pane_t4

0xa4a4,	// (0x0005709c) main_radioblah_pane

0xd629,	// (0x0005a221) cell_call4_button_pane_t1_copy1_ParamLimits

0xd629,	// (0x0005a221) cell_call4_button_pane_t1_copy1

0x7ee6,	// (0x00054ade) main_ncimui_pane_t1_ParamLimits

0x7ee6,	// (0x00054ade) main_ncimui_pane_t1

0x7f00,	// (0x00054af8) main_ncimui_pane_t2_ParamLimits

0x7f00,	// (0x00054af8) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005c7e7) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005c7e7) main_ncimui_pane_t

0xe570,	// (0x0005b168) main_radioblah_anim_pane_ParamLimits

0xe570,	// (0x0005b168) main_radioblah_anim_pane

0xe581,	// (0x0005b179) main_radioblah_info_pane_ParamLimits

0xe581,	// (0x0005b179) main_radioblah_info_pane

0xe595,	// (0x0005b18d) main_radioblah_pane_t1_ParamLimits

0xe595,	// (0x0005b18d) main_radioblah_pane_t1

0xe5b1,	// (0x0005b1a9) main_radioblah_pane_t2_ParamLimits

0xe5b1,	// (0x0005b1a9) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005c882) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005c882) main_radioblah_pane_t

0x8389,	// (0x00054f81) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8389,	// (0x00054f81) main_radioblah_rocker_ctrl_pane

0xe5f9,	// (0x0005b1f1) main_radioblah_info_pane_t1_ParamLimits

0xe5f9,	// (0x0005b1f1) main_radioblah_info_pane_t1

0x83e1,	// (0x00054fd9) main_radioblah_info_pane_t2_ParamLimits

0x83e1,	// (0x00054fd9) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005c88b) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005c88b) main_radioblah_info_pane_t

0xcc40,	// (0x00059838) main_radioblah_rocker_ctrl_pane_g1

0x8491,	// (0x00055089) main_radioblah_rocker_ctrl_pane_g2

0x8499,	// (0x00055091) main_radioblah_rocker_ctrl_pane_g3

0x84a1,	// (0x00055099) main_radioblah_rocker_ctrl_pane_g4

0x84a9,	// (0x000550a1) main_radioblah_rocker_ctrl_pane_g5

0x84b1,	// (0x000550a9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005c894) main_radioblah_rocker_ctrl_pane_g

0x7c68,	// (0x00054860) main_cset_text2_pane_t1_copy1_ParamLimits

0xa083,	// (0x00056c7b) cam4_image_uncrop_qvga_pane

0xa0dc,	// (0x00056cd4) vid4_image_uncrop_qcif_pane

0xa234,	// (0x00056e2c) cam6_image_uncrop_qvga_pane_ParamLimits

0xa234,	// (0x00056e2c) cam6_image_uncrop_qvga_pane

0xde0d,	// (0x0005aa05) vid6_image_uncrop_qcif_pane_ParamLimits

0xde0d,	// (0x0005aa05) vid6_image_uncrop_qcif_pane

0x9700,	// (0x000562f8) bg_popup_preview_window_pane_cp03

0xe0b8,	// (0x0005acb0) list_cset_text2_pane

0xe0c0,	// (0x0005acb8) main_cset6_text2_pane_g1

0xe0c8,	// (0x0005acc0) main_cset6_text2_pane_t1

0x84b9,	// (0x000550b1) list_cset_text2_pane_t1_ParamLimits

0x84b9,	// (0x000550b1) list_cset_text2_pane_t1

0xa4a4,	// (0x0005709c) main_radioblah_pane_ParamLimits

0x81de,	// (0x00054dd6) main_mobtv_info_pane_t3_ParamLimits

0x81de,	// (0x00054dd6) main_mobtv_info_pane_t3

0x8377,	// (0x00054f6f) main_radioblah_pane_g1

0x83b1,	// (0x00054fa9) main_radioblah_info_pane_g1

0x8436,	// (0x0005502e) main_radioblah_info_pane_t3_ParamLimits

0x8436,	// (0x0005502e) main_radioblah_info_pane_t3

0x3091,	// (0x0004fc89) highlight_cell_cale_month_pane_ParamLimits

0x3091,	// (0x0004fc89) highlight_cell_cale_month_pane

0x9700,	// (0x000562f8) main_phob_fisheye_pane

0xcfb4,	// (0x00059bac) scroll_pane_cp0031_ParamLimits

0xcfb4,	// (0x00059bac) scroll_pane_cp0031

0xdf1b,	// (0x0005ab13) wait_bar_pane_cp08_ParamLimits

0x7ced,	// (0x000548e5) cset_list_set_pane_copy1_ParamLimits

0xe633,	// (0x0005b22b) highlight_cell_cale_month_pane_g1

0x84d2,	// (0x000550ca) highlight_cell_cale_month_pane_t1

0xdbac,	// (0x0005a7a4) list_gen_pane_cp01

0xd7f0,	// (0x0005a3e8) scroll_pane_01

0x84e0,	// (0x000550d8) list_single_double_fisheye_pane

0x0846,	// (0x0004d43e) list_double_fisheye_pane_g1_ParamLimits

0x0846,	// (0x0004d43e) list_double_fisheye_pane_g1

0x0852,	// (0x0004d44a) list_double_fisheye_pane_g2_ParamLimits

0x0852,	// (0x0004d44a) list_double_fisheye_pane_g2

0x84e9,	// (0x000550e1) list_double_fisheye_pane_g3_ParamLimits

0x84e9,	// (0x000550e1) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005c8a1) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005c8a1) list_double_fisheye_pane_g

0x0883,	// (0x0004d47b) list_double_fisheye_pane_t1_ParamLimits

0x0883,	// (0x0004d47b) list_double_fisheye_pane_t1

0x089e,	// (0x0004d496) list_double_fisheye_pane_t2_ParamLimits

0x089e,	// (0x0004d496) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005c8ac) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005c8ac) list_double_fisheye_pane_t

0x9700,	// (0x000562f8) main_call5_pane

0x82d5,	// (0x00054ecd) sc_swipe_pane_ParamLimits

0x82d5,	// (0x00054ecd) sc_swipe_pane

0x8508,	// (0x00055100) call5_image_pane_ParamLimits

0x8508,	// (0x00055100) call5_image_pane

0x8525,	// (0x0005511d) call5_swipe_1_pane_ParamLimits

0x8525,	// (0x0005511d) call5_swipe_1_pane

0x8538,	// (0x00055130) call5_swipe_2_pane_ParamLimits

0x8538,	// (0x00055130) call5_swipe_2_pane

0x8563,	// (0x0005515b) popup_call5_audio_first_window_ParamLimits

0x8563,	// (0x0005515b) popup_call5_audio_first_window

0xceb8,	// (0x00059ab0) call5_swipe_1_pane_g1_ParamLimits

0xceb8,	// (0x00059ab0) call5_swipe_1_pane_g1

0xe63b,	// (0x0005b233) call5_swipe_1_pane_g2_ParamLimits

0xe63b,	// (0x0005b233) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005c8b1) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005c8b1) call5_swipe_1_pane_g

0xe647,	// (0x0005b23f) call5_swipe_1_pane_t1_ParamLimits

0xe647,	// (0x0005b23f) call5_swipe_1_pane_t1

0xceb8,	// (0x00059ab0) call5_swipe_2_pane_g1_ParamLimits

0xceb8,	// (0x00059ab0) call5_swipe_2_pane_g1

0xe65c,	// (0x0005b254) call5_swipe_2_pane_g2_ParamLimits

0xe65c,	// (0x0005b254) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005c8b6) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005c8b6) call5_swipe_2_pane_g

0xe668,	// (0x0005b260) call5_swipe_2_pane_t1_ParamLimits

0xe668,	// (0x0005b260) call5_swipe_2_pane_t1

0xe67d,	// (0x0005b275) sc_swipe_pane_g1_ParamLimits

0xe67d,	// (0x0005b275) sc_swipe_pane_g1

0xe68a,	// (0x0005b282) sc_swipe_pane_g2_ParamLimits

0xe68a,	// (0x0005b282) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005c8bb) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005c8bb) sc_swipe_pane_g

0xe696,	// (0x0005b28e) sc_swipe_pane_t1_ParamLimits

0xe696,	// (0x0005b28e) sc_swipe_pane_t1

0x9700,	// (0x000562f8) main_cmail_launcher_pane

0x8574,	// (0x0005516c) aid_size_cell_cmail_l_ParamLimits

0x8574,	// (0x0005516c) aid_size_cell_cmail_l

0x858e,	// (0x00055186) grid_cmail_l_pane_ParamLimits

0x858e,	// (0x00055186) grid_cmail_l_pane

0x85a9,	// (0x000551a1) cell_cmail_l_pane_ParamLimits

0x85a9,	// (0x000551a1) cell_cmail_l_pane

0x85cf,	// (0x000551c7) cell_cmail_l_pane_g1_ParamLimits

0x85cf,	// (0x000551c7) cell_cmail_l_pane_g1

0x85db,	// (0x000551d3) cell_cmail_l_pane_t1_ParamLimits

0x85db,	// (0x000551d3) cell_cmail_l_pane_t1

0xe6ab,	// (0x0005b2a3) cell_cmail_l_pane_t2_ParamLimits

0xe6ab,	// (0x0005b2a3) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005c8c0) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005c8c0) cell_cmail_l_pane_t

0xa4a4,	// (0x0005709c) grid_highlight_pane_cp018_ParamLimits

0xa4a4,	// (0x0005709c) grid_highlight_pane_cp018

0x112f,	// (0x0004dd27) main2_pane_ParamLimits

0x112f,	// (0x0004dd27) main2_pane

0xa89a,	// (0x00057492) popup_sp_fs_action_menu_bg_pane_g1

0xa8a2,	// (0x0005749a) popup_sp_fs_action_menu_bg_pane_g2

0xa8aa,	// (0x000574a2) popup_sp_fs_action_menu_bg_pane_g3

0xa8b2,	// (0x000574aa) popup_sp_fs_action_menu_bg_pane_g4

0xa8ba,	// (0x000574b2) popup_sp_fs_action_menu_bg_pane_g5

0xa8c2,	// (0x000574ba) popup_sp_fs_action_menu_bg_pane_g6

0xa8ca,	// (0x000574c2) popup_sp_fs_action_menu_bg_pane_g7

0xa8d2,	// (0x000574ca) popup_sp_fs_action_menu_bg_pane_g8

0xa8da,	// (0x000574d2) popup_sp_fs_action_menu_bg_pane_g9

0xa8e2,	// (0x000574da) popup_sp_fs_action_menu_bg_pane_g10

0xa8e2,	// (0x000574da) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005bd82) popup_sp_fs_action_menu_bg_pane_g

0x0178,	// (0x0004cd70) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_t3_g3_g1

0x0184,	// (0x0004cd7c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0184,	// (0x0004cd7c) list_medium_line_x2_t3_g3_g2

0x0190,	// (0x0004cd88) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0190,	// (0x0004cd88) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005be30) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005be30) list_medium_line_x2_t3_g3_g

0x019c,	// (0x0004cd94) list_medium_line_x2_t3_g3_t1_ParamLimits

0x019c,	// (0x0004cd94) list_medium_line_x2_t3_g3_t1

0x01b1,	// (0x0004cda9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01b1,	// (0x0004cda9) list_medium_line_x2_t3_g3_t2

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005be37) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005be37) list_medium_line_x2_t3_g3_t

0x0178,	// (0x0004cd70) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_t3_g2_g1

0x0190,	// (0x0004cd88) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0190,	// (0x0004cd88) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005be3e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005be3e) list_medium_line_x2_t3_g2_g

0x01da,	// (0x0004cdd2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x01da,	// (0x0004cdd2) list_medium_line_x2_t3_g2_t1

0x01f0,	// (0x0004cde8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x01f0,	// (0x0004cde8) list_medium_line_x2_t3_g2_t2

0x0202,	// (0x0004cdfa) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0202,	// (0x0004cdfa) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005be43) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005be43) list_medium_line_x2_t3_g2_t

0x0178,	// (0x0004cd70) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_t4_g4_g1

0x021f,	// (0x0004ce17) list_medium_line_x2_t4_g4_g2_ParamLimits

0x021f,	// (0x0004ce17) list_medium_line_x2_t4_g4_g2

0x0184,	// (0x0004cd7c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0184,	// (0x0004cd7c) list_medium_line_x2_t4_g4_g3

0x022b,	// (0x0004ce23) list_medium_line_x2_t4_g4_g4_ParamLimits

0x022b,	// (0x0004ce23) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005be4a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005be4a) list_medium_line_x2_t4_g4_g

0x0237,	// (0x0004ce2f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0237,	// (0x0004ce2f) list_medium_line_x2_t4_g4_t1

0x0251,	// (0x0004ce49) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0251,	// (0x0004ce49) list_medium_line_x2_t4_g4_t2

0x0267,	// (0x0004ce5f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0267,	// (0x0004ce5f) list_medium_line_x2_t4_g4_t3

0x027c,	// (0x0004ce74) list_medium_line_x2_t4_g4_t4_ParamLimits

0x027c,	// (0x0004ce74) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005be53) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005be53) list_medium_line_x2_t4_g4_t

0x0178,	// (0x0004cd70) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_t2_g4_g1

0x021f,	// (0x0004ce17) list_medium_line_x2_t2_g4_g2_ParamLimits

0x021f,	// (0x0004ce17) list_medium_line_x2_t2_g4_g2

0x0184,	// (0x0004cd7c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0184,	// (0x0004cd7c) list_medium_line_x2_t2_g4_g3

0x0190,	// (0x0004cd88) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0190,	// (0x0004cd88) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005beba) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005beba) list_medium_line_x2_t2_g4_g

0x028e,	// (0x0004ce86) list_medium_line_x2_t2_g4_t1_ParamLimits

0x028e,	// (0x0004ce86) list_medium_line_x2_t2_g4_t1

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005bec3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005bec3) list_medium_line_x2_t2_g4_t

0x0178,	// (0x0004cd70) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_t2_g3_g1

0x0184,	// (0x0004cd7c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0184,	// (0x0004cd7c) list_medium_line_x2_t2_g3_g2

0x0190,	// (0x0004cd88) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0190,	// (0x0004cd88) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005be30) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005be30) list_medium_line_x2_t2_g3_g

0x02a3,	// (0x0004ce9b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x02a3,	// (0x0004ce9b) list_medium_line_x2_t2_g3_t1

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005bec8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005bec8) list_medium_line_x2_t2_g3_t

0x31eb,	// (0x0004fde3) main_sp_fs_list_pane_ParamLimits

0x31eb,	// (0x0004fde3) main_sp_fs_list_pane

0xcd01,	// (0x000598f9) sp_fs_scroll_pane_ParamLimits

0xcd01,	// (0x000598f9) sp_fs_scroll_pane

0x02b8,	// (0x0004ceb0) list_medium_line_x2_t3_t1

0x02c8,	// (0x0004cec0) list_medium_line_x2_t3_t2

0x02d6,	// (0x0004cece) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005bf13) list_medium_line_x2_t3_t

0x02e4,	// (0x0004cedc) list_medium_line_x3_t4_t1

0x02f4,	// (0x0004ceec) list_medium_line_x3_t4_t2

0x0302,	// (0x0004cefa) list_medium_line_x3_t4_t3

0x02d6,	// (0x0004cece) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005bf1a) list_medium_line_x3_t4_t

0x0310,	// (0x0004cf08) list_medium_line_x4_t5_t1

0x0320,	// (0x0004cf18) list_medium_line_x4_t5_t2

0x0302,	// (0x0004cefa) list_medium_line_x4_t5_t3

0x032e,	// (0x0004cf26) list_medium_line_x4_t5_t4

0x02d6,	// (0x0004cece) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005bf23) list_medium_line_x4_t5_t

0x0178,	// (0x0004cd70) list_medium_line_t4_g4_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_t4_g4_g1

0x033c,	// (0x0004cf34) list_medium_line_t4_g4_g2_ParamLimits

0x033c,	// (0x0004cf34) list_medium_line_t4_g4_g2

0x0348,	// (0x0004cf40) list_medium_line_t4_g4_g3_ParamLimits

0x0348,	// (0x0004cf40) list_medium_line_t4_g4_g3

0x0190,	// (0x0004cd88) list_medium_line_t4_g4_g4_ParamLimits

0x0190,	// (0x0004cd88) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005bf2e) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005bf2e) list_medium_line_t4_g4_g

0x0354,	// (0x0004cf4c) list_medium_line_t4_g4_t1_ParamLimits

0x0354,	// (0x0004cf4c) list_medium_line_t4_g4_t1

0x0369,	// (0x0004cf61) list_medium_line_t4_g4_t2_ParamLimits

0x0369,	// (0x0004cf61) list_medium_line_t4_g4_t2

0x037e,	// (0x0004cf76) list_medium_line_t4_g4_t3_ParamLimits

0x037e,	// (0x0004cf76) list_medium_line_t4_g4_t3

0x01c5,	// (0x0004cdbd) list_medium_line_t4_g4_t4_ParamLimits

0x01c5,	// (0x0004cdbd) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005bf37) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005bf37) list_medium_line_t4_g4_t

0x32aa,	// (0x0004fea2) chi_dic_find_pane_g1

0x42ae,	// (0x00050ea6) main_tport_pane

0x0569,	// (0x0004d161) list_medium_line_plain_t1

0x0577,	// (0x0004d16f) list_medium_line_t2_g2_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_t2_g2_g1

0x0583,	// (0x0004d17b) list_medium_line_t2_g2_g2_ParamLimits

0x0583,	// (0x0004d17b) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005c5f8) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005c5f8) list_medium_line_t2_g2_g

0x058f,	// (0x0004d187) list_medium_line_t2_g2_t1_ParamLimits

0x058f,	// (0x0004d187) list_medium_line_t2_g2_t1

0x05a9,	// (0x0004d1a1) list_medium_line_t2_g2_t2_ParamLimits

0x05a9,	// (0x0004d1a1) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005c5fd) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005c5fd) list_medium_line_t2_g2_t

0x7761,	// (0x00054359) aid_sp_fs_list_icon_a_sm

0x7769,	// (0x00054361) aid_sp_fs_list_icon_d

0x7771,	// (0x00054369) aid_sp_fs_text_primary

0xe782,	// (0x0005b37a) aid_sp_fs_text_secondary

0x777a,	// (0x00054372) list_medium_line

0x777a,	// (0x00054372) list_medium_line_g2

0x777a,	// (0x00054372) list_medium_line_g3

0x777a,	// (0x00054372) list_medium_line_plain

0x777a,	// (0x00054372) list_medium_line_plain_t2

0x777a,	// (0x00054372) list_medium_line_plain_t3

0x777a,	// (0x00054372) list_medium_line_right_icon

0x777a,	// (0x00054372) list_medium_line_right_iconx2

0x777a,	// (0x00054372) list_medium_line_t2

0x777a,	// (0x00054372) list_medium_line_t2_g2

0x777a,	// (0x00054372) list_medium_line_t2_g3

0x777a,	// (0x00054372) list_medium_line_t2_right_icon

0x777a,	// (0x00054372) list_medium_line_t2_right_iconx2

0x777a,	// (0x00054372) list_medium_line_t3

0x777a,	// (0x00054372) list_medium_line_t3_g2

0x777a,	// (0x00054372) list_medium_line_t3_g3

0x777a,	// (0x00054372) list_medium_line_t3_right_iconx2

0x7783,	// (0x0005437b) list_medium_line_t4_g4

0x778c,	// (0x00054384) list_medium_line_x2

0x778c,	// (0x00054384) list_medium_line_x2_t2_g2

0x778c,	// (0x00054384) list_medium_line_x2_t2_g3

0x778c,	// (0x00054384) list_medium_line_x2_t2_g4

0x778c,	// (0x00054384) list_medium_line_x2_t3

0x778c,	// (0x00054384) list_medium_line_x2_t3_g2

0x778c,	// (0x00054384) list_medium_line_x2_t3_g3

0x778c,	// (0x00054384) list_medium_line_x2_t3_g4

0x778c,	// (0x00054384) list_medium_line_x2_t4_g2

0x778c,	// (0x00054384) list_medium_line_x2_t4_g4

0x7795,	// (0x0005438d) list_medium_line_x3

0x7795,	// (0x0005438d) list_medium_line_x3_t4

0x7795,	// (0x0005438d) list_medium_line_x3_t4_g4

0x7783,	// (0x0005437b) list_medium_line_x4_t4

0x7783,	// (0x0005437b) list_medium_line_x4_t4_g7

0x7783,	// (0x0005437b) list_medium_line_x4_t5

0x0735,	// (0x0004d32d) list_single_fs_dyc_pane_ParamLimits

0x0735,	// (0x0004d32d) list_single_fs_dyc_pane

0x0178,	// (0x0004cd70) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x4_t4_g7_g1

0x0775,	// (0x0004d36d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0775,	// (0x0004d36d) list_medium_line_x4_t4_g7_g2

0x0781,	// (0x0004d379) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0781,	// (0x0004d379) list_medium_line_x4_t4_g7_g3

0x0790,	// (0x0004d388) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0790,	// (0x0004d388) list_medium_line_x4_t4_g7_g4

0x079c,	// (0x0004d394) list_medium_line_x4_t4_g7_g5_ParamLimits

0x079c,	// (0x0004d394) list_medium_line_x4_t4_g7_g5

0x07ab,	// (0x0004d3a3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07ab,	// (0x0004d3a3) list_medium_line_x4_t4_g7_g6

0x07ba,	// (0x0004d3b2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07ba,	// (0x0004d3b2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005c7c8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005c7c8) list_medium_line_x4_t4_g7_g

0x07c6,	// (0x0004d3be) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07c6,	// (0x0004d3be) list_medium_line_x4_t4_g7_t1

0x07db,	// (0x0004d3d3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x07db,	// (0x0004d3d3) list_medium_line_x4_t4_g7_t2

0x07f0,	// (0x0004d3e8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x07f0,	// (0x0004d3e8) list_medium_line_x4_t4_g7_t3

0x0805,	// (0x0004d3fd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0805,	// (0x0004d3fd) list_medium_line_x4_t4_g7_t4

0x0817,	// (0x0004d40f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0817,	// (0x0004d40f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005c7d7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005c7d7) list_medium_line_x4_t4_g7_t

0x0829,	// (0x0004d421) list_single_dyc_row_pane_ParamLimits

0x0829,	// (0x0004d421) list_single_dyc_row_pane

0x84f5,	// (0x000550ed) call5_gesture_pane_ParamLimits

0x84f5,	// (0x000550ed) call5_gesture_pane

0x854b,	// (0x00055143) call5_windows_pane_ParamLimits

0x854b,	// (0x00055143) call5_windows_pane

0x85f1,	// (0x000551e9) call5_swipe_1_pane_cp_ParamLimits

0x85f1,	// (0x000551e9) call5_swipe_1_pane_cp

0x85fd,	// (0x000551f5) call5_swipe_2_pane_cp_ParamLimits

0x85fd,	// (0x000551f5) call5_swipe_2_pane_cp

0xa9c6,	// (0x000575be) call5_image_pane_cp

0x8609,	// (0x00055201) popup_call5_audio_first_window_cp_ParamLimits

0x8609,	// (0x00055201) popup_call5_audio_first_window_cp

0xe67d,	// (0x0005b275) call5_swipe_1_pane_g1_cp_ParamLimits

0xe67d,	// (0x0005b275) call5_swipe_1_pane_g1_cp

0xe6bd,	// (0x0005b2b5) call5_swipe_1_pane_g2_cp

0xe696,	// (0x0005b28e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe696,	// (0x0005b28e) call5_swipe_1_pane_t1_cp

0xe67d,	// (0x0005b275) call5_swipe_2_pane_g1_cp_ParamLimits

0xe67d,	// (0x0005b275) call5_swipe_2_pane_g1_cp

0xe6c5,	// (0x0005b2bd) call5_swipe_2_pane_g2_cp

0xe6cd,	// (0x0005b2c5) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cd,	// (0x0005b2c5) call5_swipe_2_pane_t1_cp

0xa4a4,	// (0x0005709c) main_sp_fs_email_pane

0xe6e2,	// (0x0005b2da) main_sp_fs_listscroll_pane_te

0x8617,	// (0x0005520f) popup_sp_fs_action_menu_pane_ParamLimits

0x8617,	// (0x0005520f) popup_sp_fs_action_menu_pane

0xcc40,	// (0x00059838) bg_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x0005b2e3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x0005b2ec) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fd,	// (0x0005b2f5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc40,	// (0x00059838) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005c8c5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca25,	// (0x0005961d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca25,	// (0x0005961d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe706,	// (0x0005b2fe) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe706,	// (0x0005b2fe) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe712,	// (0x0005b30a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe712,	// (0x0005b30a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005c8ce) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005c8ce) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71e,	// (0x0005b316) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71e,	// (0x0005b316) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x08c0,	// (0x0004d4b8) list_medium_line_t2_right_icon_g1

0x08c8,	// (0x0004d4c0) list_medium_line_t2_right_icon_t1

0x08d8,	// (0x0004d4d0) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005c8d3) list_medium_line_t2_right_icon_t

0xc838,	// (0x00059430) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc838,	// (0x00059430) bg_sp_fs_ctrlbar_pane

0x86a3,	// (0x0005529b) main_sp_fs_ctrlbar_button_pane_cp01

0x86ad,	// (0x000552a5) main_sp_fs_ctrlbar_ddmenu_pane

0xe78b,	// (0x0005b383) main_sp_fs_ctrlbar_pane_g1

0xe797,	// (0x0005b38f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005c8d8) main_sp_fs_ctrlbar_pane_g

0xe7a3,	// (0x0005b39b) main_sp_fs_ctrlbar_pane_t1

0x86b7,	// (0x000552af) main_sp_fs_ctrlbar_pane

0x86db,	// (0x000552d3) main_sp_fs_listscroll_pane_te_cp01

0x08ea,	// (0x0004d4e2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x08ea,	// (0x0004d4e2) popup_sp_fs_action_menu_pane_cp01

0xa4a4,	// (0x0005709c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4a4,	// (0x0005709c) bg_sp_fs_highlight_list_pane_cp01

0x86fb,	// (0x000552f3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x86fb,	// (0x000552f3) sp_fs_action_menu_list_gene_pane_g1

0xe7d3,	// (0x0005b3cb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d3,	// (0x0005b3cb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005c8e2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005c8e2) sp_fs_action_menu_list_gene_pane_g

0x870a,	// (0x00055302) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x870a,	// (0x00055302) sp_fs_action_menu_list_gene_pane_t1

0x8722,	// (0x0005531a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8722,	// (0x0005531a) sp_fs_action_menu_list_gene_pane

0xe7e0,	// (0x0005b3d8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7e0,	// (0x0005b3d8) popup_sp_fs_action_menu_bg_pane

0x8741,	// (0x00055339) sp_fs_action_menu_list_pane_ParamLimits

0x8741,	// (0x00055339) sp_fs_action_menu_list_pane

0x8761,	// (0x00055359) sp_fs_scroll_pane_cp01_ParamLimits

0x8761,	// (0x00055359) sp_fs_scroll_pane_cp01

0x091a,	// (0x0004d512) list_medium_line_plain_t2_t1

0x092a,	// (0x0004d522) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005c8e7) list_medium_line_plain_t2_t

0x093a,	// (0x0004d532) list_medium_line_plain_t3_t1

0x094a,	// (0x0004d542) list_medium_line_plain_t3_t2

0x0958,	// (0x0004d550) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005c8ec) list_medium_line_plain_t3_t

0x0178,	// (0x0004cd70) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_t2_g2_g1

0x0190,	// (0x0004cd88) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0190,	// (0x0004cd88) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005be3e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005be3e) list_medium_line_x2_t2_g2_g

0x0354,	// (0x0004cf4c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0354,	// (0x0004cf4c) list_medium_line_x2_t2_g2_t1

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005c8f3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005c8f3) list_medium_line_x2_t2_g2_t

0x0178,	// (0x0004cd70) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_t4_g2_g1

0x0966,	// (0x0004d55e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0966,	// (0x0004d55e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005c8f8) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005c8f8) list_medium_line_x2_t4_g2_g

0x0978,	// (0x0004d570) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0978,	// (0x0004d570) list_medium_line_x2_t4_g2_t1

0x098f,	// (0x0004d587) list_medium_line_x2_t4_g2_t2_ParamLimits

0x098f,	// (0x0004d587) list_medium_line_x2_t4_g2_t2

0x09a4,	// (0x0004d59c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09a4,	// (0x0004d59c) list_medium_line_x2_t4_g2_t3

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005c8fd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005c8fd) list_medium_line_x2_t4_g2_t

0x09b6,	// (0x0004d5ae) list_medium_line_t3_right_iconx2_g1

0x08c0,	// (0x0004d4b8) list_medium_line_t3_right_iconx2_g2

0x09be,	// (0x0004d5b6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005c906) list_medium_line_t3_right_iconx2_g

0x09c8,	// (0x0004d5c0) list_medium_line_t3_right_iconx2_t1

0x09d8,	// (0x0004d5d0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005c90d) list_medium_line_t3_right_iconx2_t

0x0178,	// (0x0004cd70) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x3_t4_g4_g1

0x0184,	// (0x0004cd7c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0184,	// (0x0004cd7c) list_medium_line_x3_t4_g4_g2

0x033c,	// (0x0004cf34) list_medium_line_x3_t4_g4_g3_ParamLimits

0x033c,	// (0x0004cf34) list_medium_line_x3_t4_g4_g3

0x09e6,	// (0x0004d5de) list_medium_line_x3_t4_g4_g4_ParamLimits

0x09e6,	// (0x0004d5de) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005c912) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005c912) list_medium_line_x3_t4_g4_g

0x09f2,	// (0x0004d5ea) list_medium_line_x3_t4_g4_t1_ParamLimits

0x09f2,	// (0x0004d5ea) list_medium_line_x3_t4_g4_t1

0x0a09,	// (0x0004d601) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a09,	// (0x0004d601) list_medium_line_x3_t4_g4_t2

0x0369,	// (0x0004cf61) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0369,	// (0x0004cf61) list_medium_line_x3_t4_g4_t3

0x0a24,	// (0x0004d61c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a24,	// (0x0004d61c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005c91b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005c91b) list_medium_line_x3_t4_g4_t

0x0a41,	// (0x0004d639) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a41,	// (0x0004d639) list_single_dyc_row_text_pane_t1

0x0a8a,	// (0x0004d682) list_single_dyc_row_text_pane_t2_ParamLimits

0x0a8a,	// (0x0004d682) list_single_dyc_row_text_pane_t2

0x8787,	// (0x0005537f) list_single_dyc_row_text_pane_t3_ParamLimits

0x8787,	// (0x0005537f) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005c924) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005c924) list_single_dyc_row_text_pane_t

0x87ab,	// (0x000553a3) list_single_dyc_row_pane_g1_ParamLimits

0x87ab,	// (0x000553a3) list_single_dyc_row_pane_g1

0x87b7,	// (0x000553af) list_single_dyc_row_pane_g2_ParamLimits

0x87b7,	// (0x000553af) list_single_dyc_row_pane_g2

0x87c3,	// (0x000553bb) list_single_dyc_row_pane_g3_ParamLimits

0x87c3,	// (0x000553bb) list_single_dyc_row_pane_g3

0x87cf,	// (0x000553c7) list_single_dyc_row_pane_g4_ParamLimits

0x87cf,	// (0x000553c7) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005c931) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005c931) list_single_dyc_row_pane_g

0x87db,	// (0x000553d3) list_single_dyc_row_text_pane_ParamLimits

0x87db,	// (0x000553d3) list_single_dyc_row_text_pane

0x9700,	// (0x000562f8) bg_sp_fs_scroll_pane

0xe7ee,	// (0x0005b3e6) thumb_sp_fs_scroll_pane

0x0577,	// (0x0004d16f) list_medium_line_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_g1

0x0bbf,	// (0x0004d7b7) list_medium_line_t1_ParamLimits

0x0bbf,	// (0x0004d7b7) list_medium_line_t1

0x0178,	// (0x0004cd70) list_medium_line_x2_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_g1

0x0184,	// (0x0004cd7c) list_medium_line_x2_g2_ParamLimits

0x0184,	// (0x0004cd7c) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005c93a) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005c93a) list_medium_line_x2_g

0x87fa,	// (0x000553f2) list_medium_line_x2_t1_ParamLimits

0x87fa,	// (0x000553f2) list_medium_line_x2_t1

0x0178,	// (0x0004cd70) list_medium_line_x3_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x3_g1

0x0184,	// (0x0004cd7c) list_medium_line_x3_g2_ParamLimits

0x0184,	// (0x0004cd7c) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005c93a) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005c93a) list_medium_line_x3_g

0x87fa,	// (0x000553f2) list_medium_line_x3_t1_ParamLimits

0x87fa,	// (0x000553f2) list_medium_line_x3_t1

0xe7f7,	// (0x0005b3ef) thumb_sp_fs_scroll_pane_g1

0xe800,	// (0x0005b3f8) thumb_sp_fs_scroll_pane_g2

0xe809,	// (0x0005b401) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005c93f) thumb_sp_fs_scroll_pane_g

0xe7f7,	// (0x0005b3ef) bg_sp_fs_scroll_pane_g1

0xe800,	// (0x0005b3f8) bg_sp_fs_scroll_pane_g2

0xe809,	// (0x0005b401) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005c93f) bg_sp_fs_scroll_pane_g

0x0178,	// (0x0004cd70) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0178,	// (0x0004cd70) list_medium_line_x2_t3_g4_g1

0x021f,	// (0x0004ce17) list_medium_line_x2_t3_g4_g2_ParamLimits

0x021f,	// (0x0004ce17) list_medium_line_x2_t3_g4_g2

0x0184,	// (0x0004cd7c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0184,	// (0x0004cd7c) list_medium_line_x2_t3_g4_g3

0x0190,	// (0x0004cd88) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0190,	// (0x0004cd88) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005beba) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005beba) list_medium_line_x2_t3_g4_g

0x0bd4,	// (0x0004d7cc) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0bd4,	// (0x0004d7cc) list_medium_line_x2_t3_g4_t1

0x0bee,	// (0x0004d7e6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0bee,	// (0x0004d7e6) list_medium_line_x2_t3_g4_t2

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01c5,	// (0x0004cdbd) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005c946) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005c946) list_medium_line_x2_t3_g4_t

0x0577,	// (0x0004d16f) list_medium_line_g2_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_g2_g1

0x0583,	// (0x0004d17b) list_medium_line_g2_g2_ParamLimits

0x0583,	// (0x0004d17b) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005c5f8) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005c5f8) list_medium_line_g2_g

0x0c07,	// (0x0004d7ff) list_medium_line_g2_t1_ParamLimits

0x0c07,	// (0x0004d7ff) list_medium_line_g2_t1

0x0577,	// (0x0004d16f) list_medium_line_t3_g2_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_t3_g2_g1

0x0583,	// (0x0004d17b) list_medium_line_t3_g2_g2_ParamLimits

0x0583,	// (0x0004d17b) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005c5f8) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005c5f8) list_medium_line_t3_g2_g

0x0c1c,	// (0x0004d814) list_medium_line_t3_g2_t1_ParamLimits

0x0c1c,	// (0x0004d814) list_medium_line_t3_g2_t1

0x0c36,	// (0x0004d82e) list_medium_line_t3_g2_t2_ParamLimits

0x0c36,	// (0x0004d82e) list_medium_line_t3_g2_t2

0x0c4c,	// (0x0004d844) list_medium_line_t3_g2_t3_ParamLimits

0x0c4c,	// (0x0004d844) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005c94d) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005c94d) list_medium_line_t3_g2_t

0x08c0,	// (0x0004d4b8) list_medium_line_right_icon_g1

0x0c63,	// (0x0004d85b) list_medium_line_right_icon_t1

0x0577,	// (0x0004d16f) list_medium_line_t2_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_t2_g1

0x0c71,	// (0x0004d869) list_medium_line_t2_t1_ParamLimits

0x0c71,	// (0x0004d869) list_medium_line_t2_t1

0x0c8b,	// (0x0004d883) list_medium_line_t2_t2_ParamLimits

0x0c8b,	// (0x0004d883) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005c954) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005c954) list_medium_line_t2_t

0x0577,	// (0x0004d16f) list_medium_line_t3_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_t3_g1

0x0ca4,	// (0x0004d89c) list_medium_line_t3_t1_ParamLimits

0x0ca4,	// (0x0004d89c) list_medium_line_t3_t1

0x0cbe,	// (0x0004d8b6) list_medium_line_t3_t2_ParamLimits

0x0cbe,	// (0x0004d8b6) list_medium_line_t3_t2

0x0cd4,	// (0x0004d8cc) list_medium_line_t3_t3_ParamLimits

0x0cd4,	// (0x0004d8cc) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005c959) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005c959) list_medium_line_t3_t

0x0577,	// (0x0004d16f) list_medium_line_g3_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_g3_g1

0x0ce9,	// (0x0004d8e1) list_medium_line_g3_g2_ParamLimits

0x0ce9,	// (0x0004d8e1) list_medium_line_g3_g2

0x0583,	// (0x0004d17b) list_medium_line_g3_g3_ParamLimits

0x0583,	// (0x0004d17b) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005c960) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005c960) list_medium_line_g3_g

0x0cf5,	// (0x0004d8ed) list_medium_line_g3_t1_ParamLimits

0x0cf5,	// (0x0004d8ed) list_medium_line_g3_t1

0x0577,	// (0x0004d16f) list_medium_line_t2_g3_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_t2_g3_g1

0x0ce9,	// (0x0004d8e1) list_medium_line_t2_g3_g2_ParamLimits

0x0ce9,	// (0x0004d8e1) list_medium_line_t2_g3_g2

0x0583,	// (0x0004d17b) list_medium_line_t2_g3_g3_ParamLimits

0x0583,	// (0x0004d17b) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005c960) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005c960) list_medium_line_t2_g3_g

0x0d0a,	// (0x0004d902) list_medium_line_t2_g3_t1_ParamLimits

0x0d0a,	// (0x0004d902) list_medium_line_t2_g3_t1

0x0d24,	// (0x0004d91c) list_medium_line_t2_g3_t2_ParamLimits

0x0d24,	// (0x0004d91c) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005c967) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005c967) list_medium_line_t2_g3_t

0x0577,	// (0x0004d16f) list_medium_line_t3_g3_g1_ParamLimits

0x0577,	// (0x0004d16f) list_medium_line_t3_g3_g1

0x0ce9,	// (0x0004d8e1) list_medium_line_t3_g3_g2_ParamLimits

0x0ce9,	// (0x0004d8e1) list_medium_line_t3_g3_g2

0x0583,	// (0x0004d17b) list_medium_line_t3_g3_g3_ParamLimits

0x0583,	// (0x0004d17b) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005c960) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005c960) list_medium_line_t3_g3_g

0x0d42,	// (0x0004d93a) list_medium_line_t3_g3_t1_ParamLimits

0x0d42,	// (0x0004d93a) list_medium_line_t3_g3_t1

0x0d5b,	// (0x0004d953) list_medium_line_t3_g3_t2_ParamLimits

0x0d5b,	// (0x0004d953) list_medium_line_t3_g3_t2

0x0d71,	// (0x0004d969) list_medium_line_t3_g3_t3_ParamLimits

0x0d71,	// (0x0004d969) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005c96c) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005c96c) list_medium_line_t3_g3_t

0x09b6,	// (0x0004d5ae) list_medium_line_right_iconx2_g1

0x08c0,	// (0x0004d4b8) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005c973) list_medium_line_right_iconx2_g

0x0d8b,	// (0x0004d983) list_medium_line_right_iconx2_t1

0x09b6,	// (0x0004d5ae) list_medium_line_t2_right_iconx2_g1

0x08c0,	// (0x0004d4b8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005c973) list_medium_line_t2_right_iconx2_g

0x0d99,	// (0x0004d991) list_medium_line_t2_right_iconx2_t1

0x0da9,	// (0x0004d9a1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005c978) list_medium_line_t2_right_iconx2_t

0x0dbb,	// (0x0004d9b3) list_medium_line_x4_t4_t1

0x0dc9,	// (0x0004d9c1) list_medium_line_x4_t4_t2

0x0dd9,	// (0x0004d9d1) list_medium_line_x4_t4_t3

0x0de9,	// (0x0004d9e1) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005c97d) list_medium_line_x4_t4_t

0x8853,	// (0x0005544b) tport_appsw_pane_ParamLimits

0x8853,	// (0x0005544b) tport_appsw_pane

0x886b,	// (0x00055463) tport_contact_pane_ParamLimits

0x886b,	// (0x00055463) tport_contact_pane

0x8883,	// (0x0005547b) tport_listscroll_pane_ParamLimits

0x8883,	// (0x0005547b) tport_listscroll_pane

0x889d,	// (0x00055495) cell_tport_appsw_pane_ParamLimits

0x889d,	// (0x00055495) cell_tport_appsw_pane

0xd6b6,	// (0x0005a2ae) tport_appsw_pane_g1_ParamLimits

0xd6b6,	// (0x0005a2ae) tport_appsw_pane_g1

0xe812,	// (0x0005b40a) tport_contact_pane_g1

0xe18c,	// (0x0005ad84) tport_contact_pane_t1

0xe81b,	// (0x0005b413) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005c986) tport_contact_pane_t

0xe829,	// (0x0005b421) list_tport_pane

0xe832,	// (0x0005b42a) scroll_pane_cp_030

0x88e5,	// (0x000554dd) cell_tport_appsw_pane_g1

0x88f5,	// (0x000554ed) cell_tport_appsw_pane_t1

0x8903,	// (0x000554fb) grid_highlight_pane_cp019

0x890b,	// (0x00055503) list_tport_double_graphic_pane_ParamLimits

0x890b,	// (0x00055503) list_tport_double_graphic_pane

0xa4a4,	// (0x0005709c) list_highlight_pane_cp023_ParamLimits

0xa4a4,	// (0x0005709c) list_highlight_pane_cp023

0x8918,	// (0x00055510) list_tport_double_graphic_pane_g1_ParamLimits

0x8918,	// (0x00055510) list_tport_double_graphic_pane_g1

0x8925,	// (0x0005551d) list_tport_double_graphic_pane_t1_ParamLimits

0x8925,	// (0x0005551d) list_tport_double_graphic_pane_t1

0x893a,	// (0x00055532) list_tport_double_graphic_pane_t2_ParamLimits

0x893a,	// (0x00055532) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005c992) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005c992) list_tport_double_graphic_pane_t

0x9700,	// (0x000562f8) main_cale_note_pane

0x699b,	// (0x00053593) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x699b,	// (0x00053593) cell_vitu2_function_top_wide_pane_cp01

0x81f2,	// (0x00054dea) wait_bar_pane_cp05_ParamLimits

0xa4a4,	// (0x0005709c) listscroll_cmail_pane

0xe83b,	// (0x0005b433) list_cmail_pane

0xd8e4,	// (0x0005a4dc) list_cmail_body_pane

0x894c,	// (0x00055544) list_single_cmail_header_caption_pane

0x8962,	// (0x0005555a) list_single_cmail_header_detail_pane_ParamLimits

0x8962,	// (0x0005555a) list_single_cmail_header_detail_pane

0xe84b,	// (0x0005b443) list_single_cmail_header_caption_pane_t1

0x0df9,	// (0x0004d9f1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0df9,	// (0x0004d9f1) list_single_cmail_header_detail_pane_g1

0xa242,	// (0x00056e3a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa242,	// (0x00056e3a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005c997) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005c997) list_single_cmail_header_detail_pane_g

0xa24e,	// (0x00056e46) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa24e,	// (0x00056e46) list_single_cmail_header_detail_pane_t1

0xa2ae,	// (0x00056ea6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa2ae,	// (0x00056ea6) list_single_cmail_header_editor_pane_bg

0xe32d,	// (0x0005af25) list_cmail_body_pane_g1

0xe86f,	// (0x0005b467) list_cmail_body_pane_t1

0xd6d6,	// (0x0005a2ce) list_single_cmail_header_editor_pane_bg_g1

0xac1f,	// (0x00057817) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6e6,	// (0x0005a2de) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6de,	// (0x0005a2d6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd915,	// (0x0005a50d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd706,	// (0x0005a2fe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6f6,	// (0x0005a2ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6fe,	// (0x0005a2f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabff,	// (0x000577f7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x898b,	// (0x00055583) calenote_gesture_pane_ParamLimits

0x898b,	// (0x00055583) calenote_gesture_pane

0x89ab,	// (0x000555a3) calenote_window_pane_ParamLimits

0x89ab,	// (0x000555a3) calenote_window_pane

0xe87d,	// (0x0005b475) popup_note_window_cp01

0x89c7,	// (0x000555bf) calenote_swipe_1_pane_ParamLimits

0x89c7,	// (0x000555bf) calenote_swipe_1_pane

0x85fd,	// (0x000551f5) calenote_swipe_2_pane_ParamLimits

0x85fd,	// (0x000551f5) calenote_swipe_2_pane

0xe67d,	// (0x0005b275) calenote_swipe_1_pane_g1_ParamLimits

0xe67d,	// (0x0005b275) calenote_swipe_1_pane_g1

0xe68a,	// (0x0005b282) calenote_swipe_1_pane_g2_ParamLimits

0xe68a,	// (0x0005b282) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005c8bb) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005c8bb) calenote_swipe_1_pane_g

0xe88f,	// (0x0005b487) calenote_swipe_1_pane_t1_ParamLimits

0xe88f,	// (0x0005b487) calenote_swipe_1_pane_t1

0xe67d,	// (0x0005b275) calenote_swipe_2_pane_g1_ParamLimits

0xe67d,	// (0x0005b275) calenote_swipe_2_pane_g1

0xe8ae,	// (0x0005b4a6) calenote_swipe_2_pane_g2_ParamLimits

0xe8ae,	// (0x0005b4a6) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005c9a3) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005c9a3) calenote_swipe_2_pane_g

0xe8ba,	// (0x0005b4b2) calenote_swipe_2_pane_t1_ParamLimits

0xe8ba,	// (0x0005b4b2) calenote_swipe_2_pane_t1

0x9700,	// (0x000562f8) main_mup_navstr_pane

0x566b,	// (0x00052263) main_mup3_pane_t7_ParamLimits

0x566b,	// (0x00052263) main_mup3_pane_t7

0x9ea1,	// (0x00056a99) main_mp4_pane_g6_ParamLimits

0x9ea1,	// (0x00056a99) main_mp4_pane_g6

0xa045,	// (0x00056c3d) main_image3_pane_t4_ParamLimits

0xa045,	// (0x00056c3d) main_image3_pane_t4

0x89dc,	// (0x000555d4) popup_navstr_preview_pane_ParamLimits

0x89dc,	// (0x000555d4) popup_navstr_preview_pane

0x89f0,	// (0x000555e8) scroll_navstr_pane_ParamLimits

0x89f0,	// (0x000555e8) scroll_navstr_pane

0x9700,	// (0x000562f8) bg_popup_preview_window_pane_cp04

0xe8e1,	// (0x0005b4d9) popup_navstr_preview_pane_t1

0x8a04,	// (0x000555fc) scroll_navstr_pane_g1_ParamLimits

0x8a04,	// (0x000555fc) scroll_navstr_pane_g1

0x8a18,	// (0x00055610) scroll_navstr_pane_t1_ParamLimits

0x8a18,	// (0x00055610) scroll_navstr_pane_t1

0xe886,	// (0x0005b47e) bg_button_pane_cp014

0xe886,	// (0x0005b47e) bg_button_pane_cp030

0x0866,	// (0x0004d45e) list_double_fisheye_pane_g4_ParamLimits

0x0866,	// (0x0004d45e) list_double_fisheye_pane_g4

0x0872,	// (0x0004d46a) list_double_fisheye_pane_g5_ParamLimits

0x0872,	// (0x0004d46a) list_double_fisheye_pane_g5

0xcd01,	// (0x000598f9) sp_fs_scroll_pane_cp03

0xe78b,	// (0x0005b383) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe797,	// (0x0005b38f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005c8d8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a3,	// (0x0005b39b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe843,	// (0x0005b43b) sp_fs_scroll_pane_cp02

0xa905,	// (0x000574fd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa905,	// (0x000574fd) popup_sp_fs_calendar_preview_list_single_pane

0x9700,	// (0x000562f8) main_cam6_pano_pane

0xa4a4,	// (0x0005709c) main_mup3_pane_ParamLimits

0x9700,	// (0x000562f8) main_phacti_pane

0x80c5,	// (0x00054cbd) bg_button_pane_cp11

0x80df,	// (0x00054cd7) main_mobtv_info_pane_g2_ParamLimits

0x80df,	// (0x00054cd7) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005c838) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005c838) main_mobtv_info_pane_g

0x82bc,	// (0x00054eb4) sc_clock_pane_t5_ParamLimits

0x82bc,	// (0x00054eb4) sc_clock_pane_t5

0x8377,	// (0x00054f6f) main_radioblah_pane_g1_ParamLimits

0xe5c9,	// (0x0005b1c1) main_radioblah_pane_t3_ParamLimits

0xe5c9,	// (0x0005b1c1) main_radioblah_pane_t3

0xe5e1,	// (0x0005b1d9) main_radioblah_pane_t4_ParamLimits

0xe5e1,	// (0x0005b1d9) main_radioblah_pane_t4

0x839f,	// (0x00054f97) main_radioblah_text_pane_ParamLimits

0x839f,	// (0x00054f97) main_radioblah_text_pane

0x83b1,	// (0x00054fa9) main_radioblah_info_pane_g1_ParamLimits

0x844a,	// (0x00055042) main_radioblah_info_pane_t4_ParamLimits

0x844a,	// (0x00055042) main_radioblah_info_pane_t4

0xa4a4,	// (0x0005709c) main_sp_fs_calendar_pane

0x8a2f,	// (0x00055627) main_phacti_pane_g1

0x8a37,	// (0x0005562f) phacti_note_pane_ParamLimits

0x8a37,	// (0x0005562f) phacti_note_pane

0xe8f8,	// (0x0005b4f0) phacti_term_pane_ParamLimits

0xe8f8,	// (0x0005b4f0) phacti_term_pane

0xe90d,	// (0x0005b505) phacti_note_pane_t1_ParamLimits

0xe90d,	// (0x0005b505) phacti_note_pane_t1

0xa2c5,	// (0x00056ebd) phacti_term_pane_g1

0xa2cd,	// (0x00056ec5) phacti_term_pane_t1_ParamLimits

0xa2cd,	// (0x00056ec5) phacti_term_pane_t1

0xe924,	// (0x0005b51c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa20,	// (0x00057618) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005c9ad) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x0005b524) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x0005b524) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x0005b53a) aid_popup_sp_fs_bg_corner_pane

0xcc40,	// (0x00059838) popup_sp_fs_calendar_preview_bg_pane_g1

0x9700,	// (0x000562f8) popup_sp_fs_calendar_preview_bg_pane

0xe94a,	// (0x0005b542) popup_sp_fs_calendar_preview_list_pane

0xc838,	// (0x00059430) bg_main_sp_fs_cale_pane_ParamLimits

0xc838,	// (0x00059430) bg_main_sp_fs_cale_pane

0xa300,	// (0x00056ef8) listscroll_cale_mrui_pane_ParamLimits

0xa300,	// (0x00056ef8) listscroll_cale_mrui_pane

0xa315,	// (0x00056f0d) listscroll_sp_fs_schedule_track_pane

0xa31e,	// (0x00056f16) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa31e,	// (0x00056f16) main_sp_fs_ctrlbar_pane_cp01

0xe952,	// (0x0005b54a) main_sp_fs_ribbon_pane

0xa331,	// (0x00056f29) popup_sp_fs_cale_preview_window

0x8aac,	// (0x000556a4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8aac,	// (0x000556a4) list_single_sp_fs_schedule_track_pane

0xa4a4,	// (0x0005709c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4a4,	// (0x0005709c) bg_sp_fs_highlight_list_pane_cp03

0x8abf,	// (0x000556b7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8abf,	// (0x000556b7) list_single_sp_fs_schedule_track_pane_g1

0x8acb,	// (0x000556c3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8acb,	// (0x000556c3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005c9b2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005c9b2) list_single_sp_fs_schedule_track_pane_g

0x8ad7,	// (0x000556cf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ad7,	// (0x000556cf) list_single_sp_fs_schedule_track_pane_t1

0x8af1,	// (0x000556e9) sp_fs_schedule_track_pane_ParamLimits

0x8af1,	// (0x000556e9) sp_fs_schedule_track_pane

0xe95a,	// (0x0005b552) sp_fs_schedule_track_pane_g1

0xe962,	// (0x0005b55a) sp_fs_schedule_track_pane_g2

0xe96a,	// (0x0005b562) sp_fs_schedule_track_pane_g3

0xe972,	// (0x0005b56a) sp_fs_schedule_track_pane_g4

0xe97a,	// (0x0005b572) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005c9b7) sp_fs_schedule_track_pane_g

0xd6d6,	// (0x0005a2ce) bg_sp_fs_schedule_viewer_highlight_g1

0xac1f,	// (0x00057817) bg_sp_fs_schedule_viewer_highlight_g2

0xd6de,	// (0x0005a2d6) bg_sp_fs_schedule_viewer_highlight_g3

0xd6e6,	// (0x0005a2de) bg_sp_fs_schedule_viewer_highlight_g4

0xd915,	// (0x0005a50d) bg_sp_fs_schedule_viewer_highlight_g5

0xd6f6,	// (0x0005a2ee) bg_sp_fs_schedule_viewer_highlight_g6

0xd6fe,	// (0x0005a2f6) bg_sp_fs_schedule_viewer_highlight_g7

0xd706,	// (0x0005a2fe) bg_sp_fs_schedule_viewer_highlight_g8

0xabff,	// (0x000577f7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005c9c2) bg_sp_fs_schedule_viewer_highlight_g

0x9700,	// (0x000562f8) bg_main_sp_fs_ribbon_pane

0x8b02,	// (0x000556fa) main_sp_fs_ribbon_pane_g1

0xe982,	// (0x0005b57a) main_sp_fs_ribbon_pane_t1

0x8b0b,	// (0x00055703) main_sp_fs_ribbon_pane_t2

0xe991,	// (0x0005b589) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005c9d5) main_sp_fs_ribbon_pane_t

0xe9a0,	// (0x0005b598) main_sp_fs_ribbon_scheduler_pane

0xe9a8,	// (0x0005b5a0) bg_main_sp_fs_ribbon_pane_g1

0xe9b1,	// (0x0005b5a9) bg_main_sp_fs_ribbon_pane_g2

0xe9ba,	// (0x0005b5b2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0005c9dc) bg_main_sp_fs_ribbon_pane_g

0xe9c2,	// (0x0005b5ba) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cb,	// (0x0005b5c3) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d4,	// (0x0005b5cc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0005c9e3) main_sp_fs_ribbon_scheduler_pane_g

0xe9dd,	// (0x0005b5d5) list_cale_mrui_pane

0x8b1a,	// (0x00055712) sp_fs_scroll_pane_cp07_ParamLimits

0x8b1a,	// (0x00055712) sp_fs_scroll_pane_cp07

0x8b36,	// (0x0005572e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b36,	// (0x0005572e) bg_sp_fs_schedule_viewer_highlight

0xe9ea,	// (0x0005b5e2) list_single_sp_fs_schedule_track_pane_cp01

0xe9f2,	// (0x0005b5ea) list_sp_fs_schedule_track_pane

0xe9fa,	// (0x0005b5f2) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fa,	// (0x0005b5f2) sp_fs_scroll_pane_cp06

0xcc40,	// (0x00059838) bgmain_sp_fs_calendar_pane_g1

0x0e11,	// (0x0004da09) list_single_cale_mrui_pane_ParamLimits

0x0e11,	// (0x0004da09) list_single_cale_mrui_pane

0xa343,	// (0x00056f3b) list_single_cale_mrui_row_pane_ParamLimits

0xa343,	// (0x00056f3b) list_single_cale_mrui_row_pane

0xa350,	// (0x00056f48) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa350,	// (0x00056f48) list_single_cale_mrui_row_pane_g1

0xa388,	// (0x00056f80) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa388,	// (0x00056f80) list_single_cale_mrui_row_pane_t1

0x0e32,	// (0x0004da2a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0e32,	// (0x0004da2a) list_single_cale_mrui_row_pane_t2

0xa39a,	// (0x00056f92) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa39a,	// (0x00056f92) list_single_cale_mrui_row_pane_t3

0xa3c9,	// (0x00056fc1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3c9,	// (0x00056fc1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0005c9f1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0005c9f1) list_single_cale_mrui_row_pane_t

0x0e9a,	// (0x0004da92) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e9a,	// (0x0004da92) list_single_cmail_header_editor_pane_bg_cp01

0x0ec0,	// (0x0004dab8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0ec0,	// (0x0004dab8) list_single_cmail_header_editor_pane_bg_cp02

0x8b46,	// (0x0005573e) main_radioblah_text_pane_t1_ParamLimits

0x8b46,	// (0x0005573e) main_radioblah_text_pane_t1

0xea19,	// (0x0005b611) cam6_indi_pane_cp01

0xea21,	// (0x0005b619) cam6_mode_pane_cp01

0xea29,	// (0x0005b621) cam6_pano_pane

0xea32,	// (0x0005b62a) cam6_zoom_pane_cp01

0xea3a,	// (0x0005b632) cam6_pano_image_pane

0xea45,	// (0x0005b63d) cam6_pano_pane_g1

0xe32d,	// (0x0005af25) cam6_pano_pane_g2

0xea4e,	// (0x0005b646) cam6_pano_pane_g3

0xea57,	// (0x0005b64f) cam6_pano_pane_g4

0xd238,	// (0x00059e30) cam6_pano_pane_g5

0xea60,	// (0x0005b658) cam6_pano_pane_g6

0xea6a,	// (0x0005b662) cam6_pano_pane_g7

0xea72,	// (0x0005b66a) cam6_pano_pane_g8

0xea7b,	// (0x0005b673) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0005c9fa) cam6_pano_pane_g

0x9700,	// (0x000562f8) main_browser_tag_pane

0xe8d9,	// (0x0005b4d1) grid_navstr_albumart_pane

0xea86,	// (0x0005b67e) cell_navstr_albumart_pane_ParamLimits

0xea86,	// (0x0005b67e) cell_navstr_albumart_pane

0xeaa6,	// (0x0005b69e) cell_navstr_albumart_pane_g1

0xc649,	// (0x00059241) cell_navstr_albumart_pane_g2

0xc659,	// (0x00059251) cell_navstr_albumart_pane_g3

0xc651,	// (0x00059249) cell_navstr_albumart_pane_g4

0x0003,

0x0018,	// (0x0004cc10) cell_navstr_albumart_pane_g

0x8b60,	// (0x00055758) bt_list_pane_ParamLimits

0x8b60,	// (0x00055758) bt_list_pane

0x8b74,	// (0x0005576c) bt_list_pane_t1

0x8b83,	// (0x0005577b) bt_list_pane_t2

0x0001,

0xfe15,	// (0x0005ca0d) bt_list_pane_t

0x9700,	// (0x000562f8) main_cale_prevew_pane

0x8b92,	// (0x0005578a) popup_cale_preview_window_ParamLimits

0x8b92,	// (0x0005578a) popup_cale_preview_window

0xa4a4,	// (0x0005709c) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4a4,	// (0x0005709c) bg_popup_preview_window_pane_cp05

0xeaae,	// (0x0005b6a6) list_cale_preview_pane_ParamLimits

0xeaae,	// (0x0005b6a6) list_cale_preview_pane

0x8bad,	// (0x000557a5) list_double_cale_preview_pane_ParamLimits

0x8bad,	// (0x000557a5) list_double_cale_preview_pane

0x8bbf,	// (0x000557b7) list_single_cale_preview_pane_ParamLimits

0x8bbf,	// (0x000557b7) list_single_cale_preview_pane

0x8bd5,	// (0x000557cd) list_single_cale_preview_pane_g1

0x8bdd,	// (0x000557d5) list_single_cale_preview_pane_t1_ParamLimits

0x8bdd,	// (0x000557d5) list_single_cale_preview_pane_t1

0x8bf2,	// (0x000557ea) list_double_cale_preview_pane_g1

0x8bfa,	// (0x000557f2) list_double_cale_preview_pane_t1_ParamLimits

0x8bfa,	// (0x000557f2) list_double_cale_preview_pane_t1

0x8c0f,	// (0x00055807) list_double_cale_preview_pane_t2_ParamLimits

0x8c0f,	// (0x00055807) list_double_cale_preview_pane_t2

0x0001,

0xfe1a,	// (0x0005ca12) list_double_cale_preview_pane_t_ParamLimits

0xfe1a,	// (0x0005ca12) list_double_cale_preview_pane_t

0x9700,	// (0x000562f8) main_ezdial_pane

0xa4a4,	// (0x0005709c) main_sp_fs_email_pane_ParamLimits

0x865b,	// (0x00055253) cmail_ddmenu_btn01_pane_ParamLimits

0x865b,	// (0x00055253) cmail_ddmenu_btn01_pane

0x866e,	// (0x00055266) cmail_ddmenu_btn02_pane_ParamLimits

0x866e,	// (0x00055266) cmail_ddmenu_btn02_pane

0x8691,	// (0x00055289) cmail_ddmenu_btn03_pane_ParamLimits

0x8691,	// (0x00055289) cmail_ddmenu_btn03_pane

0x86b7,	// (0x000552af) main_sp_fs_ctrlbar_pane_ParamLimits

0x86db,	// (0x000552d3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd8e4,	// (0x0005a4dc) list_cmail_body_pane_ParamLimits

0xe859,	// (0x0005b451) bg_button_pane_cp12

0xe862,	// (0x0005b45a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe862,	// (0x0005b45a) list_single_cmail_header_detail_pane_g3

0xa28a,	// (0x00056e82) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa28a,	// (0x00056e82) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005c99e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005c99e) list_single_cmail_header_detail_pane_t

0xa2e2,	// (0x00056eda) phacti_term_pane_t2_ParamLimits

0xa2e2,	// (0x00056eda) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005c9a8) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005c9a8) phacti_term_pane_t

0xeaba,	// (0x0005b6b2) aid_size_list_single_double

0x8c27,	// (0x0005581f) popup_ezdial_listscroll_window

0x8c43,	// (0x0005583b) popup_number_entry_window_cp01

0xa9c6,	// (0x000575be) bg_popup_call_pane_cp09

0xeac6,	// (0x0005b6be) ezdial_list_pane

0xeace,	// (0x0005b6c6) scroll_pane_cp23

0xc838,	// (0x00059430) bg_button_pane_cp028_ParamLimits

0xc838,	// (0x00059430) bg_button_pane_cp028

0x8c51,	// (0x00055849) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c51,	// (0x00055849) cmail_ddmenu_btn01_pane_g1

0x8c5d,	// (0x00055855) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c5d,	// (0x00055855) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1f,	// (0x0005ca17) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1f,	// (0x0005ca17) cmail_ddmenu_btn01_pane_g

0xead6,	// (0x0005b6ce) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead6,	// (0x0005b6ce) cmail_ddmenu_btn01_pane_t1

0xc838,	// (0x00059430) bg_button_pane_cp029_ParamLimits

0xc838,	// (0x00059430) bg_button_pane_cp029

0x8c69,	// (0x00055861) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c69,	// (0x00055861) cmail_ddmenu_btn02_pane_g1

0x8c82,	// (0x0005587a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c82,	// (0x0005587a) cmail_ddmenu_btn02_pane_t1

0xa4a4,	// (0x0005709c) bg_button_pane_cp031_ParamLimits

0xa4a4,	// (0x0005709c) bg_button_pane_cp031

0x8c69,	// (0x00055861) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c69,	// (0x00055861) cmail_ddmenu_btn03_pane_g1

0x8c82,	// (0x0005587a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c82,	// (0x0005587a) cmail_ddmenu_btn03_pane_t1

0x6212,	// (0x00052e0a) cell_dialer2_keypad_pane_t1_ParamLimits

0x622c,	// (0x00052e24) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x622c,	// (0x00052e24) cell_dialer2_keypad_pane_t1_copy1

0x7f2c,	// (0x00054b24) ncimui_group_button_pane

0xa4a4,	// (0x0005709c) main_sp_fs_calendar_pane_ParamLimits

0x894c,	// (0x00055544) list_single_cmail_header_caption_pane_ParamLimits

0xa2f7,	// (0x00056eef) aid_recal_txt_sm_pane

0x9700,	// (0x000562f8) mian_recal_day_pane

0xa331,	// (0x00056f29) popup_sp_fs_cale_preview_window_ParamLimits

0xeaeb,	// (0x0005b6e3) list_recal_day_pane

0xa413,	// (0x0005700b) list_single_recal_day_pane_ParamLimits

0xa413,	// (0x0005700b) list_single_recal_day_pane

0xeb12,	// (0x0005b70a) list_single_recal_day_pane_g1_ParamLimits

0xeb12,	// (0x0005b70a) list_single_recal_day_pane_g1

0xa425,	// (0x0005701d) list_single_recal_day_pane_g2_ParamLimits

0xa425,	// (0x0005701d) list_single_recal_day_pane_g2

0xa431,	// (0x00057029) list_single_recal_day_pane_g3_ParamLimits

0xa431,	// (0x00057029) list_single_recal_day_pane_g3

0x0ee0,	// (0x0004dad8) list_single_recal_day_pane_g4_ParamLimits

0x0ee0,	// (0x0004dad8) list_single_recal_day_pane_g4

0xa43d,	// (0x00057035) list_single_recal_day_pane_g5_ParamLimits

0xa43d,	// (0x00057035) list_single_recal_day_pane_g5

0xa449,	// (0x00057041) list_single_recal_day_pane_g6_ParamLimits

0xa449,	// (0x00057041) list_single_recal_day_pane_g6

0x0004,

0xfe2e,	// (0x0005ca26) list_single_recal_day_pane_g_ParamLimits

0xfe2e,	// (0x0005ca26) list_single_recal_day_pane_g

0xa45d,	// (0x00057055) list_single_recal_day_pane_t1

0xa46f,	// (0x00057067) list_single_recal_day_pane_t2

0x0001,

0xfe39,	// (0x0005ca31) list_single_recal_day_pane_t

0x8ca6,	// (0x0005589e) ncimui_query_button_pane_ParamLimits

0x8ca6,	// (0x0005589e) ncimui_query_button_pane

0x8cb6,	// (0x000558ae) ncimui_query_button_pane_t1_ParamLimits

0x8cb6,	// (0x000558ae) ncimui_query_button_pane_t1

0xeb1e,	// (0x0005b716) ncimui_query_button_pane_t2_ParamLimits

0xeb1e,	// (0x0005b716) ncimui_query_button_pane_t2

0x0001,

0xfe3e,	// (0x0005ca36) ncimui_query_button_pane_t_ParamLimits

0xfe3e,	// (0x0005ca36) ncimui_query_button_pane_t

0x8cc9,	// (0x000558c1) query_button_pane_ParamLimits

0x8cc9,	// (0x000558c1) query_button_pane

0x9700,	// (0x000562f8) bg_button_pane_cp0028

0xeb31,	// (0x0005b729) query_button_pane_t1

0x42ae,	// (0x00050ea6) main_tport_pane_ParamLimits

0x8810,	// (0x00055408) bg_popup_window_pane_cp01_ParamLimits

0x8810,	// (0x00055408) bg_popup_window_pane_cp01

0x882b,	// (0x00055423) heading_pane_cp08_ParamLimits

0x882b,	// (0x00055423) heading_pane_cp08

0x883e,	// (0x00055436) heading_pane_cp07_ParamLimits

0x883e,	// (0x00055436) heading_pane_cp07

0x88e5,	// (0x000554dd) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005c98b) cell_tport_appsw_pane_g

0x38cf,	// (0x000504c7) input_candi_list_open_g1

0xade2,	// (0x000579da) list_cale_time_pane_g6_ParamLimits

0xade2,	// (0x000579da) list_cale_time_pane_g6

0x5077,	// (0x00051c6f) aid_size_touch_calib_1_ParamLimits

0x5077,	// (0x00051c6f) aid_size_touch_calib_1

0x5089,	// (0x00051c81) aid_size_touch_calib_2_ParamLimits

0x5089,	// (0x00051c81) aid_size_touch_calib_2

0x50a1,	// (0x00051c99) aid_size_touch_calib_3_ParamLimits

0x50a1,	// (0x00051c99) aid_size_touch_calib_3

0x50bf,	// (0x00051cb7) aid_size_touch_calib_4_ParamLimits

0x50bf,	// (0x00051cb7) aid_size_touch_calib_4

0x50d7,	// (0x00051ccf) main_touch_calib_button_group_pane_ParamLimits

0x50d7,	// (0x00051ccf) main_touch_calib_button_group_pane

0x50ef,	// (0x00051ce7) main_touch_calib_pane_g1_ParamLimits

0x5101,	// (0x00051cf9) main_touch_calib_pane_g2_ParamLimits

0x5113,	// (0x00051d0b) main_touch_calib_pane_g3_ParamLimits

0x5125,	// (0x00051d1d) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0005c349) main_touch_calib_pane_g_ParamLimits

0x5137,	// (0x00051d2f) main_touch_calib_pane_t1_ParamLimits

0x5151,	// (0x00051d49) main_touch_calib_pane_t2_ParamLimits

0x516b,	// (0x00051d63) main_touch_calib_pane_t3_ParamLimits

0x517f,	// (0x00051d77) main_touch_calib_pane_t4_ParamLimits

0x5193,	// (0x00051d8b) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0005c352) main_touch_calib_pane_t_ParamLimits

0xcfd8,	// (0x00059bd0) list_single_fp_cale_pane_g3_ParamLimits

0xcfd8,	// (0x00059bd0) list_single_fp_cale_pane_g3

0xa4a4,	// (0x0005709c) bg_button_pane_cp012_ParamLimits

0xa4a4,	// (0x0005709c) bg_vkb2_func_pane_cp03_ParamLimits

0x719c,	// (0x00053d94) cell_vitu2_function_top_pane_g1_ParamLimits

0xa4a4,	// (0x0005709c) bg_vkb2_func_pane_cp04_ParamLimits

0x7eba,	// (0x00054ab2) main_ncimui_button_group_pane_ParamLimits

0x7eba,	// (0x00054ab2) main_ncimui_button_group_pane

0x7f1a,	// (0x00054b12) main_ncimui_pane_t3_ParamLimits

0x7f1a,	// (0x00054b12) main_ncimui_pane_t3

0xe8ef,	// (0x0005b4e7) phacti_button_group_pane

0xeaba,	// (0x0005b6b2) aid_size_list_single_double_ParamLimits

0x8c27,	// (0x0005581f) popup_ezdial_listscroll_window_ParamLimits

0x8c43,	// (0x0005583b) popup_number_entry_window_cp01_ParamLimits

0x8cdc,	// (0x000558d4) phacti_button_pane_ParamLimits

0x8cdc,	// (0x000558d4) phacti_button_pane

0x9700,	// (0x000562f8) bg_button_pane_cp14

0xeb3f,	// (0x0005b737) phacti_button_pane_t1

0x8ced,	// (0x000558e5) main_touch_calib_button_pane_ParamLimits

0x8ced,	// (0x000558e5) main_touch_calib_button_pane

0xa801,	// (0x000573f9) bg_button_pane_cp18_ParamLimits

0xa801,	// (0x000573f9) bg_button_pane_cp18

0xeb4d,	// (0x0005b745) main_touch_calib_button_pane_t1_ParamLimits

0xeb4d,	// (0x0005b745) main_touch_calib_button_pane_t1

0xeb63,	// (0x0005b75b) main_touch_calib_button_pane_t2_ParamLimits

0xeb63,	// (0x0005b75b) main_touch_calib_button_pane_t2

0x0001,

0x004f,	// (0x0004cc47) main_touch_calib_button_pane_t_ParamLimits

0x004f,	// (0x0004cc47) main_touch_calib_button_pane_t

0x9700,	// (0x000562f8) cell_ncimui_button_pane

0x9700,	// (0x000562f8) bg_button_pane_cp032

0xeb81,	// (0x0005b779) cell_ncimui_button_pane_t1

0xa025,	// (0x00056c1d) image3_infobar_pane_ParamLimits

0xa025,	// (0x00056c1d) image3_infobar_pane

0x82e8,	// (0x00054ee0) fs_bigclock_status_pane_ParamLimits

0x82e8,	// (0x00054ee0) fs_bigclock_status_pane

0x82f5,	// (0x00054eed) main_fs_bigclock_clock_pane_ParamLimits

0x82f5,	// (0x00054eed) main_fs_bigclock_clock_pane

0x8315,	// (0x00054f0d) main_fs_bigclock_indi_pane_ParamLimits

0x8315,	// (0x00054f0d) main_fs_bigclock_indi_pane

0x833f,	// (0x00054f37) main_fs_bigclock_swipe_pane_ParamLimits

0x833f,	// (0x00054f37) main_fs_bigclock_swipe_pane

0x9700,	// (0x000562f8) main_fs_clock_dumped_data

0xe43a,	// (0x0005b032) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe43a,	// (0x0005b032) list_single_fs_bigclock_indicator_pane_g1

0xe455,	// (0x0005b04d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe455,	// (0x0005b04d) list_single_fs_bigclock_indicator_pane_g2

0xe46f,	// (0x0005b067) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46f,	// (0x0005b067) list_single_fs_bigclock_indicator_pane_g3

0xe489,	// (0x0005b081) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe489,	// (0x0005b081) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005c86c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005c86c) list_single_fs_bigclock_indicator_pane_g

0xe4b4,	// (0x0005b0ac) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b4,	// (0x0005b0ac) list_single_fs_bigclock_indicator_pane_t1

0xe4dc,	// (0x0005b0d4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4dc,	// (0x0005b0d4) list_single_fs_bigclock_indicator_pane_t2

0xe504,	// (0x0005b0fc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe504,	// (0x0005b0fc) list_single_fs_bigclock_indicator_pane_t3

0xe52c,	// (0x0005b124) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52c,	// (0x0005b124) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005c877) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005c877) list_single_fs_bigclock_indicator_pane_t

0xeb8f,	// (0x0005b787) image3_infobar_fav_pane_ParamLimits

0xeb8f,	// (0x0005b787) image3_infobar_fav_pane

0xeb9f,	// (0x0005b797) image3_infobar_loc_pane_ParamLimits

0xeb9f,	// (0x0005b797) image3_infobar_loc_pane

0xebb3,	// (0x0005b7ab) image3_infobar_time_pane_ParamLimits

0xebb3,	// (0x0005b7ab) image3_infobar_time_pane

0xcc40,	// (0x00059838) image3_infobar_time_pane_g1

0xebc3,	// (0x0005b7bb) image3_infobar_time_pane_t1

0xcc40,	// (0x00059838) image3_infobar_loc_pane_g1

0xebd1,	// (0x0005b7c9) image3_infobar_loc_pane_g2

0x0001,

0xfe43,	// (0x0005ca3b) image3_infobar_loc_pane_g

0xebd9,	// (0x0005b7d1) image3_infobar_loc_pane_t1

0xcc40,	// (0x00059838) image3_infobar_fav_pane_g1

0xebe7,	// (0x0005b7df) image3_infobar_fav_pane_g2

0x0001,

0xfe48,	// (0x0005ca40) image3_infobar_fav_pane_g

0xebef,	// (0x0005b7e7) fs_bigclock_status_battery_pane

0xebf8,	// (0x0005b7f0) fs_bigclock_status_signal_pane

0xec01,	// (0x0005b7f9) fs_bigclock_status_title_pane

0xec0a,	// (0x0005b802) fs_bigclock_status_signal_pane_g1

0xec13,	// (0x0005b80b) fs_bigclock_status_signal_pane_g2

0x0001,

0x005e,	// (0x0004cc56) fs_bigclock_status_signal_pane_g

0xec1b,	// (0x0005b813) fs_bigclock_status_battery_pane_g1

0xec24,	// (0x0005b81c) fs_bigclock_status_battery_pane_g2

0x0001,

0x0063,	// (0x0004cc5b) fs_bigclock_status_battery_pane_g

0xec2c,	// (0x0005b824) fs_bigclock_status_title_pane_t1

0xcc40,	// (0x00059838) main_fs_bigclock_clock_pane_g1

0xec3a,	// (0x0005b832) main_fs_bigclock_clock_pane_g2

0xec43,	// (0x0005b83b) main_fs_bigclock_clock_pane_g3

0xec43,	// (0x0005b83b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x0005ca45) main_fs_bigclock_clock_pane_g

0xec4b,	// (0x0005b843) main_fs_bigclock_clock_pane_t1

0x8d02,	// (0x000558fa) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x0005ca4e) main_fs_bigclock_clock_pane_t

0xec59,	// (0x0005b851) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec59,	// (0x0005b851) list_single_fs_bigclock_indicator_pane

0xec6a,	// (0x0005b862) list_single_fs_bigclock_pane_ParamLimits

0xec6a,	// (0x0005b862) list_single_fs_bigclock_pane

0xec90,	// (0x0005b888) main_fs_bigclock_indicator_pane_t1

0xec9f,	// (0x0005b897) list_single_fs_bigclock_pane_g1

0xeca7,	// (0x0005b89f) list_single_fs_bigclock_pane_t1

0xcc40,	// (0x00059838) main_fs_bigclock_swipe_pane_g1

0xecea,	// (0x0005b8e2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe62,	// (0x0005ca5a) main_fs_bigclock_swipe_pane_g

0xecf2,	// (0x0005b8ea) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf2,	// (0x0005b8ea) main_fs_bigclock_swipe_pane_t1

0x31f7,	// (0x0004fdef) call_type_pane_ParamLimits

0x9700,	// (0x000562f8) main_btmg_pane

0xa37c,	// (0x00056f74) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa37c,	// (0x00056f74) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0005c9ea) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0005c9ea) list_single_cale_mrui_row_pane_g

0xa402,	// (0x00056ffa) list_recal_vselct_arw_lo_pane

0xeb0a,	// (0x0005b702) list_recal_vselct_arw_up_pane

0xa40a,	// (0x00057002) list_recal_vselct_pane

0x8d55,	// (0x0005594d) btmg_button_pane

0x8d5f,	// (0x00055957) main_btmg_pane_g1

0x9700,	// (0x000562f8) bg_button_pane_cp044

0xed0f,	// (0x0005b907) btmg_button_pane_t1

0xc824,	// (0x0005941c) aid_listscroll_gen

0xa4a4,	// (0x0005709c) main_cntbar_detail_pane

0xe83b,	// (0x0005b433) list_cmail_folder_pane

0xcd01,	// (0x000598f9) sp_fs_scroll_pane_cp03_ParamLimits

0x0ef8,	// (0x0004daf0) list_single_fs_dyc_pane_cp01_ParamLimits

0x0ef8,	// (0x0004daf0) list_single_fs_dyc_pane_cp01

0xed1d,	// (0x0005b915) aid_size_cmail_indent

0xa481,	// (0x00057079) list_single_dyc_row_pane_cp01

0x8d9b,	// (0x00055993) cntbar_detail_list_pane_ParamLimits

0x8d9b,	// (0x00055993) cntbar_detail_list_pane

0x8de7,	// (0x000559df) main_cntbar_detail_cont_pane_ParamLimits

0x8de7,	// (0x000559df) main_cntbar_detail_cont_pane

0xcd01,	// (0x000598f9) scroll_pane_cp032_ParamLimits

0xcd01,	// (0x000598f9) scroll_pane_cp032

0x8dfb,	// (0x000559f3) cntbar_detail_list_event_pane_ParamLimits

0x8dfb,	// (0x000559f3) cntbar_detail_list_event_pane

0x8dab,	// (0x000559a3) cntbar_detail_list_shct_pane

0xac6d,	// (0x00057865) aid_list_gen

0xed26,	// (0x0005b91e) aid_scroll

0xed2f,	// (0x0005b927) aid_size_touch_scroll_bar

0x778c,	// (0x00054384) aid_list_double

0x777a,	// (0x00054372) aid_list_single

0x777a,	// (0x00054372) aid_list_single_lg

0x0f0e,	// (0x0004db06) aid_list_z_g_a_sm

0x0f16,	// (0x0004db0e) aid_list_z_g_d

0x0f1e,	// (0x0004db16) aid_txt_z_prm

0x0f2c,	// (0x0004db24) aid_txt_z_prm_cp01

0x0f3a,	// (0x0004db32) aid_txt_z_sec

0x8e0b,	// (0x00055a03) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e0b,	// (0x00055a03) main_cntbar_detail_cont_pane_g1

0x8e1f,	// (0x00055a17) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e1f,	// (0x00055a17) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe67,	// (0x0005ca5f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe67,	// (0x0005ca5f) main_cntbar_detail_cont_pane_g

0xed38,	// (0x0005b930) main_cntbar_detail_cont_pane_t1

0xed46,	// (0x0005b93e) main_cntbar_detail_cont_pane_t2

0xed54,	// (0x0005b94c) main_cntbar_detail_cont_pane_t3

0x0002,

0x008c,	// (0x0004cc84) main_cntbar_detail_cont_pane_t

0x8e2f,	// (0x00055a27) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e2f,	// (0x00055a27) cell_cntbar_detail_list_shct_pane

0xed62,	// (0x0005b95a) cntbar_detail_list_shct_pane_g1

0xed6b,	// (0x0005b963) cntbar_detail_list_shct_pane_g2

0x0001,

0x0093,	// (0x0004cc8b) cntbar_detail_list_shct_pane_g

0x8e43,	// (0x00055a3b) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e43,	// (0x00055a3b) cntbar_detail_list_event_pane_g1

0x8e4f,	// (0x00055a47) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e4f,	// (0x00055a47) cntbar_detail_list_event_pane_g2

0x0005,

0xfe6c,	// (0x0005ca64) cntbar_detail_list_event_pane_g_ParamLimits

0xfe6c,	// (0x0005ca64) cntbar_detail_list_event_pane_g

0x8ebb,	// (0x00055ab3) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ebb,	// (0x00055ab3) cntbar_detail_list_event_pane_t1

0x8ed0,	// (0x00055ac8) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ed0,	// (0x00055ac8) cntbar_detail_list_event_pane_t2

0x0002,

0xfe79,	// (0x0005ca71) cntbar_detail_list_event_pane_t_ParamLimits

0xfe79,	// (0x0005ca71) cntbar_detail_list_event_pane_t

0xcc40,	// (0x00059838) cell_cntbar_detail_list_shct_pane_g1

0xb400,	// (0x00057ff8) navi_pane_mv_g3

0xa4a4,	// (0x0005709c) main_cntbar_detail_pane_ParamLimits

0x9700,	// (0x000562f8) main_notif_wgt_pane

0x9e3b,	// (0x00056a33) aid_tch_main_mp4_pane_g4

0xa01d,	// (0x00056c15) popup_slider_window_cp02

0xa3f8,	// (0x00056ff0) list_recal_day_event_pane

0x8d69,	// (0x00055961) cntbar_detail_btn_pane_ParamLimits

0x8d69,	// (0x00055961) cntbar_detail_btn_pane

0x8d82,	// (0x0005597a) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d82,	// (0x0005597a) cntbar_detail_btn_pane_cp01

0x8dab,	// (0x000559a3) cntbar_detail_list_shct_pane_ParamLimits

0x8dbb,	// (0x000559b3) cntbar_detail_pane_g1_ParamLimits

0x8dbb,	// (0x000559b3) cntbar_detail_pane_g1

0x8dcb,	// (0x000559c3) cntbar_detail_pane_t1_ParamLimits

0x8dcb,	// (0x000559c3) cntbar_detail_pane_t1

0x8e5b,	// (0x00055a53) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e5b,	// (0x00055a53) cntbar_detail_list_event_pane_g3

0x8e73,	// (0x00055a6b) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e73,	// (0x00055a6b) cntbar_detail_list_event_pane_g4

0x8e8b,	// (0x00055a83) cntbar_detail_list_event_pane_g5_ParamLimits

0x8e8b,	// (0x00055a83) cntbar_detail_list_event_pane_g5

0x8ea3,	// (0x00055a9b) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ea3,	// (0x00055a9b) cntbar_detail_list_event_pane_g6

0x8ee5,	// (0x00055add) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ee5,	// (0x00055add) cntbar_detail_list_event_pane_t3

0x8ef7,	// (0x00055aef) popup_notif_wgt_window_ParamLimits

0x8ef7,	// (0x00055aef) popup_notif_wgt_window

0x8f10,	// (0x00055b08) popup_submenu_window_cp01_ParamLimits

0x8f10,	// (0x00055b08) popup_submenu_window_cp01

0xa9c6,	// (0x000575be) bg_popup_window_pane_cp10

0xed74,	// (0x0005b96c) listscroll_notif_wgt_pane

0xed86,	// (0x0005b97e) list_notif_wgt_window

0xed8f,	// (0x0005b987) scroll_pane_cp033

0x8f26,	// (0x00055b1e) list_notif_wgt_row_pane_ParamLimits

0x8f26,	// (0x00055b1e) list_notif_wgt_row_pane

0xed98,	// (0x0005b990) aid_size_list_notif_wgt_del

0xeda5,	// (0x0005b99d) list_notif_wgt_row_pane_g1

0xedb1,	// (0x0005b9a9) list_notif_wgt_row_pane_g2

0xedc5,	// (0x0005b9bd) list_notif_wgt_row_pane_g3

0x0002,

0x00ac,	// (0x0004cca4) list_notif_wgt_row_pane_g

0xedd2,	// (0x0005b9ca) list_notif_wgt_row_pane_t1

0xede8,	// (0x0005b9e0) list_notif_wgt_row_pane_t2

0xedfa,	// (0x0005b9f2) list_notif_wgt_row_pane_t3

0x0002,

0x00b3,	// (0x0004ccab) list_notif_wgt_row_pane_t

0xd91d,	// (0x0005a515) list_recal_day_event_pane_g1

0xee0c,	// (0x0005ba04) list_recal_day_event_pane_t1

0x9700,	// (0x000562f8) bg_button_pane_cp045

0x8f36,	// (0x00055b2e) cntbar_detail_btn_pane_t1

0xc838,	// (0x00059430) main_callh_pane_ParamLimits

0xc838,	// (0x00059430) main_callh_pane

0x9700,	// (0x000562f8) main_coverflow0_pane

0x9700,	// (0x000562f8) main_wgtman_pane

0x8357,	// (0x00054f4f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8357,	// (0x00054f4f) main_fs_bigclock_unlock_btn_pane

0x88dd,	// (0x000554d5) bg_button_pane_cp16

0x88ed,	// (0x000554e5) cell_tport_appsw_pane_g3

0x8f44,	// (0x00055b3c) cf0_flow_pane_ParamLimits

0x8f44,	// (0x00055b3c) cf0_flow_pane

0xee1b,	// (0x0005ba13) listscroll_cf0_pane

0xee26,	// (0x0005ba1e) main_cf0_pane_g1

0x8f59,	// (0x00055b51) main_cf0_pane_t1_ParamLimits

0x8f59,	// (0x00055b51) main_cf0_pane_t1

0x8f70,	// (0x00055b68) main_cf0_pane_t2_ParamLimits

0x8f70,	// (0x00055b68) main_cf0_pane_t2

0x0001,

0xfe80,	// (0x0005ca78) main_cf0_pane_t_ParamLimits

0xfe80,	// (0x0005ca78) main_cf0_pane_t

0xee38,	// (0x0005ba30) scroll_pane_cp11

0x8f87,	// (0x00055b7f) cf0_flow_pane_g1

0x8f8f,	// (0x00055b87) cf0_flow_pane_g2

0x0001,

0xfe85,	// (0x0005ca7d) cf0_flow_pane_g

0x8f97,	// (0x00055b8f) cf0_flow_pane_t1

0x9700,	// (0x000562f8) main_call6_pane

0x9700,	// (0x000562f8) main_calllock_pane

0x8fa5,	// (0x00055b9d) call6_btn_grp_pane_ParamLimits

0x8fa5,	// (0x00055b9d) call6_btn_grp_pane

0x8fbf,	// (0x00055bb7) call6_pane_g1_ParamLimits

0x8fbf,	// (0x00055bb7) call6_pane_g1

0x8fd4,	// (0x00055bcc) popup_call6_1st_window_ParamLimits

0x8fd4,	// (0x00055bcc) popup_call6_1st_window

0x8fe5,	// (0x00055bdd) popup_call6_2nd_window_ParamLimits

0x8fe5,	// (0x00055bdd) popup_call6_2nd_window

0x8ff6,	// (0x00055bee) cell_call6_btn_pane_ParamLimits

0x8ff6,	// (0x00055bee) cell_call6_btn_pane

0xa9c6,	// (0x000575be) bg_popup_call2_in_pane_cp03

0xee43,	// (0x0005ba3b) popup_call6_1st_window_g1

0xee4b,	// (0x0005ba43) popup_call6_1st_window_g2

0xee53,	// (0x0005ba4b) popup_call6_1st_window_g3

0x0002,

0x00c9,	// (0x0004ccc1) popup_call6_1st_window_g

0xee5b,	// (0x0005ba53) popup_call6_1st_window_t1

0xee6a,	// (0x0005ba62) popup_call6_1st_window_t2

0xee7a,	// (0x0005ba72) popup_call6_1st_window_t3

0x0002,

0x00d0,	// (0x0004ccc8) popup_call6_1st_window_t

0xa9c6,	// (0x000575be) bg_popup_call2_in_pane_cp04

0xee43,	// (0x0005ba3b) popup_call6_2nd_window_g1

0xee4b,	// (0x0005ba43) popup_call6_2nd_window_g2

0xee53,	// (0x0005ba4b) popup_call6_2nd_window_g3

0x0002,

0x00c9,	// (0x0004ccc1) popup_call6_2nd_window_g

0xee5b,	// (0x0005ba53) popup_call6_2nd_window_t1

0x9700,	// (0x000562f8) bg_button_pane_cp15

0xee8a,	// (0x0005ba82) cell_call6_btn_pane_g1

0xee93,	// (0x0005ba8b) cell_call6_btn_pane_t1

0x900a,	// (0x00055c02) listscroll_wgtman_pane_ParamLimits

0x900a,	// (0x00055c02) listscroll_wgtman_pane

0x902b,	// (0x00055c23) wgtman_btn_pane_ParamLimits

0x902b,	// (0x00055c23) wgtman_btn_pane

0xb207,	// (0x00057dff) aid_scroll_copy1

0xeea2,	// (0x0005ba9a) list_wgtman_pane

0x906e,	// (0x00055c66) wgtman_btn_pane_g1_ParamLimits

0x906e,	// (0x00055c66) wgtman_btn_pane_g1

0x909a,	// (0x00055c92) wgtman_btn_pane_t1_ParamLimits

0x909a,	// (0x00055c92) wgtman_btn_pane_t1

0xeeac,	// (0x0005baa4) wgtman_btn_pane_t2_ParamLimits

0xeeac,	// (0x0005baa4) wgtman_btn_pane_t2

0x0001,

0xfe8a,	// (0x0005ca82) wgtman_btn_pane_t_ParamLimits

0xfe8a,	// (0x0005ca82) wgtman_btn_pane_t

0x90d7,	// (0x00055ccf) listrow_wgtman_pane_ParamLimits

0x90d7,	// (0x00055ccf) listrow_wgtman_pane

0x90e9,	// (0x00055ce1) listrow_wgtman_pane_g1

0x90f6,	// (0x00055cee) listrow_wgtman_pane_g2

0x0001,

0xfe8f,	// (0x0005ca87) listrow_wgtman_pane_g

0x0f48,	// (0x0004db40) listrow_wgtman_pane_t1

0x0f60,	// (0x0004db58) listrow_wgtman_pane_t2

0x0001,

0xfe94,	// (0x0005ca8c) listrow_wgtman_pane_t

0x0f86,	// (0x0004db7e) wait_bar_pane_cp09

0xeec3,	// (0x0005babb) main_calllock_btn_pane

0xeecd,	// (0x0005bac5) main_calllock_pane_g1

0x9700,	// (0x000562f8) bg_button_pane_cp17

0xeed9,	// (0x0005bad1) main_calllock_btn_pane_g1

0xeee2,	// (0x0005bada) main_calllock_btn_pane_t1

0x9700,	// (0x000562f8) main_dialer3_pane

0x9700,	// (0x000562f8) main_fmrd2_pane

0xcc40,	// (0x00059838) main_fs_bigclock_unlock_btn_pane_g1

0xeef9,	// (0x0005baf1) main_fs_bigclock_unlock_btn_pane_t1

0x9114,	// (0x00055d0c) area_fmrd2_info_pane_ParamLimits

0x9114,	// (0x00055d0c) area_fmrd2_info_pane

0x9125,	// (0x00055d1d) area_fmrd2_visual_pane_ParamLimits

0x9125,	// (0x00055d1d) area_fmrd2_visual_pane

0x9133,	// (0x00055d2b) fmrd2_indi_pane_ParamLimits

0x9133,	// (0x00055d2b) fmrd2_indi_pane

0x9140,	// (0x00055d38) area_fmrd2_visual_pane_g1

0x9148,	// (0x00055d40) area_fmrd2_visual_pane_t1

0x9158,	// (0x00055d50) area_fmrd2_visual_pane_t2

0x9168,	// (0x00055d60) area_fmrd2_visual_pane_t3

0x0002,

0xfe9e,	// (0x0005ca96) area_fmrd2_visual_pane_t

0x9178,	// (0x00055d70) area_fmrd2_info_pane_g1

0x9180,	// (0x00055d78) area_fmrd2_info_pane_t1

0x9190,	// (0x00055d88) area_fmrd2_info_pane_t2

0x91a0,	// (0x00055d98) area_fmrd2_info_pane_t3

0x91b0,	// (0x00055da8) area_fmrd2_info_pane_t4

0x0003,

0xfea5,	// (0x0005ca9d) area_fmrd2_info_pane_t

0x91be,	// (0x00055db6) fmrd2_indi_pane_t1

0x91ce,	// (0x00055dc6) fmrd2_indi_pane_t2

0x91de,	// (0x00055dd6) fmrd2_indi_pane_t3

0x0002,

0xfeae,	// (0x0005caa6) fmrd2_indi_pane_t

0xe498,	// (0x0005b090) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe498,	// (0x0005b090) list_single_fs_bigclock_indicator_pane_g5

0xe548,	// (0x0005b140) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe548,	// (0x0005b140) list_single_fs_bigclock_indicator_pane_t5

0x8a4b,	// (0x00055643) aid_cell_bcale_month_pane_ParamLimits

0x8a4b,	// (0x00055643) aid_cell_bcale_month_pane

0x8a69,	// (0x00055661) bcale_month_pane_ParamLimits

0x8a69,	// (0x00055661) bcale_month_pane

0x8a8d,	// (0x00055685) bcale_preview_pane_ParamLimits

0x8a8d,	// (0x00055685) bcale_preview_pane

0xeca7,	// (0x0005b89f) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc6,	// (0x0005b8be) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc6,	// (0x0005b8be) list_single_fs_bigclock_pane_t2

0x0001,

0x007d,	// (0x0004cc75) list_single_fs_bigclock_pane_t_ParamLimits

0x007d,	// (0x0004cc75) list_single_fs_bigclock_pane_t

0xeef1,	// (0x0005bae9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe99,	// (0x0005ca91) main_fs_bigclock_unlock_btn_pane_g

0x91ee,	// (0x00055de6) aid_dia3_key_size_ParamLimits

0x91ee,	// (0x00055de6) aid_dia3_key_size

0x91fd,	// (0x00055df5) aid_dia3_listrow_size_ParamLimits

0x91fd,	// (0x00055df5) aid_dia3_listrow_size

0x9212,	// (0x00055e0a) dia3_keypad_fun_pane_ParamLimits

0x9212,	// (0x00055e0a) dia3_keypad_fun_pane

0x922e,	// (0x00055e26) dia3_keypad_num_pane_ParamLimits

0x922e,	// (0x00055e26) dia3_keypad_num_pane

0x9249,	// (0x00055e41) dia3_listscroll_pane_ParamLimits

0x9249,	// (0x00055e41) dia3_listscroll_pane

0x925c,	// (0x00055e54) dia3_numentry_pane_ParamLimits

0x925c,	// (0x00055e54) dia3_numentry_pane

0xef07,	// (0x0005baff) dia3_list_pane

0xef12,	// (0x0005bb0a) scroll_pane_cp12

0x9700,	// (0x000562f8) bg_dia3_numentry_pane

0x9270,	// (0x00055e68) dia3_numentry_pane_t1

0x927f,	// (0x00055e77) cell_dia3_key_num_pane

0x9287,	// (0x00055e7f) cell_dia3_key0_fun_pane_ParamLimits

0x9287,	// (0x00055e7f) cell_dia3_key0_fun_pane

0x929b,	// (0x00055e93) cell_dia3_key1_fun_pane_ParamLimits

0x929b,	// (0x00055e93) cell_dia3_key1_fun_pane

0x92b3,	// (0x00055eab) dia3_listrow_pane

0xe1a7,	// (0x0005ad9f) bg_dia3_numentry_pane_g1

0x9700,	// (0x000562f8) bg_button_pane_cp21

0xef1d,	// (0x0005bb15) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0005bb23) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0005bb32) cell_dia3_key_num_pane_t3

0xef49,	// (0x0005bb41) cell_dia3_key_num_pane_t4

0x0003,

0x0102,	// (0x0004ccfa) cell_dia3_key_num_pane_t

0x9700,	// (0x000562f8) bg_button_pane_cp19

0x92c5,	// (0x00055ebd) cell_dia3_key0_fun_pane_g1

0x9700,	// (0x000562f8) bg_button_pane_cp20

0x92cd,	// (0x00055ec5) cell_dia3_key1_fun_pane_g1

0x92d5,	// (0x00055ecd) area_left_week_number_pane

0x92e1,	// (0x00055ed9) area_top_day_name_pane

0x92f4,	// (0x00055eec) frame_month_view_pane

0xef58,	// (0x0005bb50) grid_month_view_pane

0x9307,	// (0x00055eff) cell_top_day_name_pane_ParamLimits

0x9307,	// (0x00055eff) cell_top_day_name_pane

0x9334,	// (0x00055f2c) cell_area_left_week_number_pane_ParamLimits

0x9334,	// (0x00055f2c) cell_area_left_week_number_pane

0x9348,	// (0x00055f40) cell_month_view_pane_ParamLimits

0x9348,	// (0x00055f40) cell_month_view_pane

0xef66,	// (0x0005bb5e) frm_month_g1

0x9375,	// (0x00055f6d) frm_month_g2

0x9388,	// (0x00055f80) frm_month_g3

0x939b,	// (0x00055f93) frm_month_g4

0x93ae,	// (0x00055fa6) frm_month_g5

0x93c1,	// (0x00055fb9) frm_month_g6

0x93d4,	// (0x00055fcc) frm_month_g7

0xef73,	// (0x0005bb6b) frm_month_g8

0x93e7,	// (0x00055fdf) frm_month_g9

0x93f7,	// (0x00055fef) frm_month_g10

0x9407,	// (0x00055fff) frm_month_g11

0x9417,	// (0x0005600f) frm_month_g12

0x9429,	// (0x00056021) frm_month_g13

0x943b,	// (0x00056033) frm_month_g14

0x944f,	// (0x00056047) frm_month_g15

0x9463,	// (0x0005605b) frm_month_g16

0x000f,

0xfeb5,	// (0x0005caad) frm_month_g

0xef80,	// (0x0005bb78) cell_top_day_name_pane_t1

0x9477,	// (0x0005606f) cell_area_left_week_number_pane_g1

0x9483,	// (0x0005607b) cell_area_left_week_number_pane_t1

0xceb8,	// (0x00059ab0) cell_month_view_pane_g1

0x9496,	// (0x0005608e) cell_month_view_pane_t1

0x9700,	// (0x000562f8) main_fps_pane

0xe738,	// (0x0005b330) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe738,	// (0x0005b330) cmail_ddmenu_btn02_pane_cp1

0xe754,	// (0x0005b34c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe754,	// (0x0005b34c) cmail_ddmenu_btn02_pane_cp2

0x8c75,	// (0x0005586d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c75,	// (0x0005586d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe24,	// (0x0005ca1c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe24,	// (0x0005ca1c) cmail_ddmenu_btn02_pane_g

0x8c94,	// (0x0005588c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c94,	// (0x0005588c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe29,	// (0x0005ca21) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe29,	// (0x0005ca21) cmail_ddmenu_btn02_pane_t

0x94a9,	// (0x000560a1) fps_text_pane_ParamLimits

0x94a9,	// (0x000560a1) fps_text_pane

0x94c0,	// (0x000560b8) main_fps_pane_g1_ParamLimits

0x94c0,	// (0x000560b8) main_fps_pane_g1

0x94da,	// (0x000560d2) wait_bar_pane_cp010_ParamLimits

0x94da,	// (0x000560d2) wait_bar_pane_cp010

0x94eb,	// (0x000560e3) fps_text_pane_t1_ParamLimits

0x94eb,	// (0x000560e3) fps_text_pane_t1

0xe770,	// (0x0005b368) cam4_image_uncrop_pane_g1

0xe779,	// (0x0005b371) cam4_image_uncrop_pane_g2

0x66b8,	// (0x000532b0) cam4_image_uncrop_pane_g3

0x66c1,	// (0x000532b9) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005c4e6) cam4_image_uncrop_pane_g

0x92b3,	// (0x00055eab) dia3_listrow_pane_ParamLimits

0x9700,	// (0x000562f8) main_phob2_pane

0x88ae,	// (0x000554a6) cell_tport_appsw_pane_cp02_ParamLimits

0x88ae,	// (0x000554a6) cell_tport_appsw_pane_cp02

0x88c2,	// (0x000554ba) cell_tport_appsw_pane_cp03_ParamLimits

0x88c2,	// (0x000554ba) cell_tport_appsw_pane_cp03

0x9700,	// (0x000562f8) phob2_contact_card_pane

0x9700,	// (0x000562f8) phob2_listscroll_pane

0xef93,	// (0x0005bb8b) phob2_list_pane

0xef9b,	// (0x0005bb93) scroll_pane_cp034

0x9503,	// (0x000560fb) phob2_cc_data_pane_ParamLimits

0x9503,	// (0x000560fb) phob2_cc_data_pane

0x9522,	// (0x0005611a) phob2_cc_listscroll_pane_ParamLimits

0x9522,	// (0x0005611a) phob2_cc_listscroll_pane

0x90d7,	// (0x00055ccf) list_double_large_graphic_phob2_pane_ParamLimits

0x90d7,	// (0x00055ccf) list_double_large_graphic_phob2_pane

0x9540,	// (0x00056138) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9540,	// (0x00056138) list_double_large_graphic_phob2_pane_g1

0x0f98,	// (0x0004db90) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0f98,	// (0x0004db90) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfed6,	// (0x0005cace) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfed6,	// (0x0005cace) list_double_large_graphic_phob2_pane_g

0x0fa4,	// (0x0004db9c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0fa4,	// (0x0004db9c) list_double_large_graphic_phob2_pane_t1

0x0fb9,	// (0x0004dbb1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0fb9,	// (0x0004dbb1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfedb,	// (0x0005cad3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfedb,	// (0x0005cad3) list_double_large_graphic_phob2_pane_t

0x9700,	// (0x000562f8) list_highlight_pane_cp024

0x9556,	// (0x0005614e) phob2_cc_button_pane

0x955e,	// (0x00056156) phob2_cc_data_pane_g1_ParamLimits

0x955e,	// (0x00056156) phob2_cc_data_pane_g1

0x9573,	// (0x0005616b) phob2_cc_data_pane_g2_ParamLimits

0x9573,	// (0x0005616b) phob2_cc_data_pane_g2

0x0001,

0xfee0,	// (0x0005cad8) phob2_cc_data_pane_g_ParamLimits

0xfee0,	// (0x0005cad8) phob2_cc_data_pane_g

0x9583,	// (0x0005617b) phob2_cc_data_pane_t1_ParamLimits

0x9583,	// (0x0005617b) phob2_cc_data_pane_t1

0x959b,	// (0x00056193) phob2_cc_data_pane_t2_ParamLimits

0x959b,	// (0x00056193) phob2_cc_data_pane_t2

0x95b3,	// (0x000561ab) phob2_cc_data_pane_t3_ParamLimits

0x95b3,	// (0x000561ab) phob2_cc_data_pane_t3

0x0002,

0xfee5,	// (0x0005cadd) phob2_cc_data_pane_t_ParamLimits

0xfee5,	// (0x0005cadd) phob2_cc_data_pane_t

0xefa3,	// (0x0005bb9b) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0005bb9b) phob2_cc_list_pane

0xda34,	// (0x0005a62c) scroll_pane_cp035_ParamLimits

0xda34,	// (0x0005a62c) scroll_pane_cp035

0xa4a4,	// (0x0005709c) bg_button_pane_cp033

0xefaf,	// (0x0005bba7) phob2_cc_button_pane_g1

0xefbb,	// (0x0005bbb3) phob2_cc_button_pane_t1

0xefd0,	// (0x0005bbc8) phob2_cc_button_pane_t2

0x0001,

0x0142,	// (0x0004cd3a) phob2_cc_button_pane_t

0x95cb,	// (0x000561c3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95cb,	// (0x000561c3) list_double_large_graphic_phob2_cc_pane

0x95dd,	// (0x000561d5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x95dd,	// (0x000561d5) list_double_large_graphic_phob2_cc_pane_g1

0x0fcb,	// (0x0004dbc3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0fcb,	// (0x0004dbc3) list_double_large_graphic_phob2_cc_pane_g2

0x0fd7,	// (0x0004dbcf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0fd7,	// (0x0004dbcf) list_double_large_graphic_phob2_cc_pane_g3

0x0fe3,	// (0x0004dbdb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0fe3,	// (0x0004dbdb) list_double_large_graphic_phob2_cc_pane_g4

0xa48a,	// (0x00057082) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa48a,	// (0x00057082) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeec,	// (0x0005cae4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeec,	// (0x0005cae4) list_double_large_graphic_phob2_cc_pane_g

0x0fef,	// (0x0004dbe7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0fef,	// (0x0004dbe7) list_double_large_graphic_phob2_cc_pane_t1

0x1018,	// (0x0004dc10) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1018,	// (0x0004dc10) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfef7,	// (0x0005caef) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfef7,	// (0x0005caef) list_double_large_graphic_phob2_cc_pane_t

0xefe2,	// (0x0005bbda) list_highlight_pane_cp025_ParamLimits

0xefe2,	// (0x0005bbda) list_highlight_pane_cp025

0xa4a4,	// (0x0005709c) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0005bba7) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0005bbb3) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0005bbc8) phob2_cc_button_pane_t2_ParamLimits

0x0142,	// (0x0004cd3a) phob2_cc_button_pane_t_ParamLimits

0x128a,	// (0x0004de82) popup_wgtman_window

0xd7f0,	// (0x0005a3e8) scroll_pane_cp038

0x9050,	// (0x00055c48) wgtman_btn_pane_cp_01_ParamLimits

0x9050,	// (0x00055c48) wgtman_btn_pane_cp_01

0xeff0,	// (0x0005bbe8) wgtman_content_pane

0xeff9,	// (0x0005bbf1) wgtman_heading_pane

0x9700,	// (0x000562f8) bg_heading_pane_cp02

0xf002,	// (0x0005bbfa) wgtman_heading_pane_g1

0xf00a,	// (0x0005bc02) wgtman_heading_pane_t1

0xf018,	// (0x0005bc10) scroll_pane_cp036

0xf020,	// (0x0005bc18) wgtman_list_pane

0xf028,	// (0x0005bc20) wgtman_list_pane_t1_ParamLimits

0xf028,	// (0x0005bc20) wgtman_list_pane_t1

0xa077,	// (0x00056c6f) cam4_grid_pane

0x05c7,	// (0x0004d1bf) bg_button_pane_cp015_ParamLimits

0x732c,	// (0x00053f24) bg_button_pane_cp016_ParamLimits

0x733f,	// (0x00053f37) bg_button_pane_cp017_ParamLimits

0x060d,	// (0x0004d205) popup_vitu2_query_window_g3_ParamLimits

0x060d,	// (0x0004d205) popup_vitu2_query_window_g3

0x0688,	// (0x0004d280) popup_vitu2_query_window_t6_ParamLimits

0x0688,	// (0x0004d280) popup_vitu2_query_window_t6

0x06b3,	// (0x0004d2ab) popup_vitu2_query_window_t7_ParamLimits

0x06b3,	// (0x0004d2ab) popup_vitu2_query_window_t7

0xe770,	// (0x0005b368) cam4_grid_pane_g1

0xe779,	// (0x0005b371) cam4_grid_pane_g2

0xf042,	// (0x0005bc3a) cam4_grid_pane_g3

0xf04b,	// (0x0005bc43) cam4_grid_pane_g4

0x0003,

0xfefc,	// (0x0005caf4) cam4_grid_pane_g

0x2184,	// (0x0004ed7c) aid_placing_vt_slider_lsc_ParamLimits

0x248f,	// (0x0004f087) vidtel_button_pane_ParamLimits

0x248f,	// (0x0004f087) vidtel_button_pane

0x9700,	// (0x000562f8) bg_button_pane_cp034

0x95e9,	// (0x000561e1) vidtel_button_pane_g1

0xf056,	// (0x0005bc4e) vidtel_button_pane_t1

0xd90d,	// (0x0005a505) aid_size_vtel_slider_touch

0xda34,	// (0x0005a62c) scroll_pane_cp039

0xe1e5,	// (0x0005addd) ncim_query_button_pane_cp01_ParamLimits

0xe204,	// (0x0005adfc) ncimui_query_pane_g1_ParamLimits

0xa4a4,	// (0x0005709c) input_focus_pane_cp012_ParamLimits

0xe229,	// (0x0005ae21) ncim_query_entry_pane_t1_ParamLimits

0xda34,	// (0x0005a62c) scroll_pane_cp039_ParamLimits

0xb2eb,	// (0x00057ee3) navi_pane_bcale_mc_g1

0xb2f3,	// (0x00057eeb) navi_pane_bcale_mc_t1

0xe7b8,	// (0x0005b3b0) main_sp_fs_email_pane_g1

0xe7c4,	// (0x0005b3bc) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005c8dd) main_sp_fs_email_pane_g

0xea0c,	// (0x0005b604) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea0c,	// (0x0005b604) list_single_cale_mrui_row_pane_g3

0x0eee,	// (0x0004dae6) list_single_recal_day_pane_g5_event_pane

0xa455,	// (0x0005704d) list_single_recal_day_pane_g7

0xf06c,	// (0x0005bc64) list_recal_day_event_pane_cp01

0xf075,	// (0x0005bc6d) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0005bc75) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0005bc7d) list_recal_vselct_pane_cp01

0xd91d,	// (0x0005a515) list_recal_day_event_pane_cp01_g1

0xa496,	// (0x0005708e) list_recal_day_event_pane_cp01_t1

0xa45d,	// (0x00057055) list_single_recal_day_pane_t1_ParamLimits

0xa46f,	// (0x00057067) list_single_recal_day_pane_t2_ParamLimits

0xfe39,	// (0x0005ca31) list_single_recal_day_pane_t_ParamLimits

0xa73c,	// (0x00057334) bg_notes_pane_ParamLimits

0xa7df,	// (0x000573d7) list_notes_pane_ParamLimits

0x15d3,	// (0x0004e1cb) scroll_pane_cp06_ParamLimits

0xa801,	// (0x000573f9) main_notes_pane_ParamLimits

0x9700,	// (0x000562f8) main_welc_pane

0x95f1,	// (0x000561e9) main_welc_body_pane_ParamLimits

0x95f1,	// (0x000561e9) main_welc_body_pane

0x960f,	// (0x00056207) main_welc_opti_pane_ParamLimits

0x960f,	// (0x00056207) main_welc_opti_pane

0x9654,	// (0x0005624c) main_welc_pane_t1_ParamLimits

0x9654,	// (0x0005624c) main_welc_pane_t1

0x9672,	// (0x0005626a) main_welc_body_row_pane_ParamLimits

0x9672,	// (0x0005626a) main_welc_body_row_pane

0xda26,	// (0x0005a61e) main_welc_opti_row_pane_ParamLimits

0xda26,	// (0x0005a61e) main_welc_opti_row_pane

0xf08f,	// (0x0005bc87) main_welc_opti_row_pane_g1

0x9686,	// (0x0005627e) main_welc_opti_row_pane_t1

0xf097,	// (0x0005bc8f) main_welc_body_row_pane_t1

0xed7e,	// (0x0005b976) popup_notif_wgt_heading_pane

0xed98,	// (0x0005b990) aid_size_list_notif_wgt_del_ParamLimits

0xeda5,	// (0x0005b99d) list_notif_wgt_row_pane_g1_ParamLimits

0xedb1,	// (0x0005b9a9) list_notif_wgt_row_pane_g2_ParamLimits

0xedc5,	// (0x0005b9bd) list_notif_wgt_row_pane_g3_ParamLimits

0x00ac,	// (0x0004cca4) list_notif_wgt_row_pane_g_ParamLimits

0xedd2,	// (0x0005b9ca) list_notif_wgt_row_pane_t1_ParamLimits

0xede8,	// (0x0005b9e0) list_notif_wgt_row_pane_t2_ParamLimits

0xedfa,	// (0x0005b9f2) list_notif_wgt_row_pane_t3_ParamLimits

0x00b3,	// (0x0004ccab) list_notif_wgt_row_pane_t_ParamLimits

0x90e9,	// (0x00055ce1) listrow_wgtman_pane_g1_ParamLimits

0x90f6,	// (0x00055cee) listrow_wgtman_pane_g2_ParamLimits

0xfe8f,	// (0x0005ca87) listrow_wgtman_pane_g_ParamLimits

0x0f48,	// (0x0004db40) listrow_wgtman_pane_t1_ParamLimits

0x0f60,	// (0x0004db58) listrow_wgtman_pane_t2_ParamLimits

0xfe94,	// (0x0005ca8c) listrow_wgtman_pane_t_ParamLimits

0x0f86,	// (0x0004db7e) wait_bar_pane_cp09_ParamLimits

0x9700,	// (0x000562f8) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0005bc9e) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0005bca6) popup_notif_wgt_heading_pane_t1

0x9700,	// (0x000562f8) main_vids_pane

0x9700,	// (0x000562f8) vids_listscroll_pane

0x9695,	// (0x0005628d) scroll_pane_cp040

0x9700,	// (0x000562f8) vids_list_pane

0x96a0,	// (0x00056298) vids_list_double_pane_ParamLimits

0x96a0,	// (0x00056298) vids_list_double_pane

0x96b1,	// (0x000562a9) vids_list_double_pane_g1

0x96ba,	// (0x000562b2) vids_list_double_pane_t1

0x96ca,	// (0x000562c2) vids_list_double_pane_t2

0x0001,

0xff0a,	// (0x0005cb02) vids_list_double_pane_t

0xa4a4,	// (0x0005709c) main_ncimui_pane_ParamLimits

0x7ece,	// (0x00054ac6) main_ncimui_pane_g1_ParamLimits

0x7eda,	// (0x00054ad2) main_ncimui_pane_g2_ParamLimits

0x7eda,	// (0x00054ad2) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005c7e2) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005c7e2) main_ncimui_pane_g

0x962a,	// (0x00056222) main_welc_pane_g1_ParamLimits

0x962a,	// (0x00056222) main_welc_pane_g1

0x963f,	// (0x00056237) main_welc_pane_g2_ParamLimits

0x963f,	// (0x00056237) main_welc_pane_g2

0x0001,

0xff05,	// (0x0005cafd) main_welc_pane_g_ParamLimits

0xff05,	// (0x0005cafd) main_welc_pane_g

0xa73c,	// (0x00057334) listscroll_mce_pane_ParamLimits

0xb440,	// (0x00058038) wait_bar_pane_cp10

0xc82c,	// (0x00059424) main_cale_day_pane_ParamLimits

0xc82c,	// (0x00059424) main_cale_week_pane_ParamLimits

0xa73c,	// (0x00057334) main_messa_pane_ParamLimits

0x59f4,	// (0x000525ec) main_clock2_btn_pane_ParamLimits

0x59f4,	// (0x000525ec) main_clock2_btn_pane

0xd060,	// (0x00059c58) main_clock2_btn_pane_cp01_ParamLimits

0xd060,	// (0x00059c58) main_clock2_btn_pane_cp01

0xe9dd,	// (0x0005b5d5) list_cale_mrui_pane_ParamLimits

0xee30,	// (0x0005ba28) main_cf0_pane_g2

0x0001,

0x00ba,	// (0x0004ccb2) main_cf0_pane_g

0x92d5,	// (0x00055ecd) area_left_week_number_pane_ParamLimits

0x92e1,	// (0x00055ed9) area_top_day_name_pane_ParamLimits

0x92f4,	// (0x00055eec) frame_month_view_pane_ParamLimits

0xef58,	// (0x0005bb50) grid_month_view_pane_ParamLimits

0xef66,	// (0x0005bb5e) frm_month_g1_ParamLimits

0x9375,	// (0x00055f6d) frm_month_g2_ParamLimits

0x9388,	// (0x00055f80) frm_month_g3_ParamLimits

0x939b,	// (0x00055f93) frm_month_g4_ParamLimits

0x93ae,	// (0x00055fa6) frm_month_g5_ParamLimits

0x93c1,	// (0x00055fb9) frm_month_g6_ParamLimits

0x93d4,	// (0x00055fcc) frm_month_g7_ParamLimits

0xef73,	// (0x0005bb6b) frm_month_g8_ParamLimits

0x93e7,	// (0x00055fdf) frm_month_g9_ParamLimits

0x93f7,	// (0x00055fef) frm_month_g10_ParamLimits

0x9407,	// (0x00055fff) frm_month_g11_ParamLimits

0x9417,	// (0x0005600f) frm_month_g12_ParamLimits

0x9429,	// (0x00056021) frm_month_g13_ParamLimits

0x943b,	// (0x00056033) frm_month_g14_ParamLimits

0x944f,	// (0x00056047) frm_month_g15_ParamLimits

0x9463,	// (0x0005605b) frm_month_g16_ParamLimits

0xfeb5,	// (0x0005caad) frm_month_g_ParamLimits

0xef80,	// (0x0005bb78) cell_top_day_name_pane_t1_ParamLimits

0x9477,	// (0x0005606f) cell_area_left_week_number_pane_g1_ParamLimits

0x9483,	// (0x0005607b) cell_area_left_week_number_pane_t1_ParamLimits

0xceb8,	// (0x00059ab0) cell_month_view_pane_g1_ParamLimits

0x9496,	// (0x0005608e) cell_month_view_pane_t1_ParamLimits

0xa734,	// (0x0005732c) main_clock2_btn_pane_g1

0xf0bc,	// (0x0005bcb4) main_clock2_btn_pane_t1

0xa4a4,	// (0x0005709c) listscroll_cmail_pane_ParamLimits

0xe7b8,	// (0x0005b3b0) main_sp_fs_email_pane_g1_ParamLimits

0xe7c4,	// (0x0005b3bc) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005c8dd) main_sp_fs_email_pane_g_ParamLimits

0xeaeb,	// (0x0005b6e3) list_recal_day_pane_ParamLimits

0xeafc,	// (0x0005b6f4) mian_recal_day_pane_t1

0x0b00,	// (0x0004d6f8) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b00,	// (0x0004d6f8) list_single_dyc_row_text_pane_t4

0x0b49,	// (0x0004d741) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b49,	// (0x0004d741) list_single_dyc_row_text_pane_t5

0x8799,	// (0x00055391) list_single_dyc_row_text_pane_t6_ParamLimits

0x8799,	// (0x00055391) list_single_dyc_row_text_pane_t6

0x313d,	// (0x0004fd35) aid_mgn_list_cale_time_pane

0xa4a4,	// (0x0005709c) main_gallery2_pane_ParamLimits

0xd076,	// (0x00059c6e) main_clock2_pane_cp01_t1

0xd086,	// (0x00059c7e) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0005c3bc) main_clock2_pane_cp01_t

0x197f,	// (0x0004e577) cale_week_scroll_pane_g16_ParamLimits

0x197f,	// (0x0004e577) cale_week_scroll_pane_g16

0xa9c6,	// (0x000575be) vorec_slider_pane

0xf056,	// (0x0005bc4e) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
