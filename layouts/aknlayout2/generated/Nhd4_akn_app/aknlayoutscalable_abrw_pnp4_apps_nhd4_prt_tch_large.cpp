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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007f1f2 };

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
0x547f,	// (0x00084671) Screen

0x548b,	// (0x0008467d) application_window

0x54cb,	// (0x000846bd) area_bottom_pane_ParamLimits

0x54cb,	// (0x000846bd) area_bottom_pane

0x5500,	// (0x000846f2) area_top_pane_ParamLimits

0x5500,	// (0x000846f2) area_top_pane

0x3d29,	// (0x00082f1b) call_video_uplink_pane_ParamLimits

0x3d29,	// (0x00082f1b) call_video_uplink_pane

0x558d,	// (0x0008477f) main_pane_ParamLimits

0x558d,	// (0x0008477f) main_pane

0x0c1a,	// (0x0007fe0c) context_pane

0x8751,	// (0x00087943) navi_pane

0x8771,	// (0x00087963) popup_cale_events_window_ParamLimits

0x8771,	// (0x00087963) popup_cale_events_window

0x0c2d,	// (0x0007fe1f) popup_mup_playback_window

0x8789,	// (0x0008797b) signal_pane

0x44f9,	// (0x000836eb) main_browser_pane

0xe349,	// (0x0008d53b) main_burst_pane

0x8627,	// (0x00087819) main_calc_pane

0xe349,	// (0x0008d53b) main_cale_day_pane

0x44f9,	// (0x000836eb) main_cale_month_pane

0xe349,	// (0x0008d53b) main_cale_week_pane

0xe349,	// (0x0008d53b) main_call_pane

0x418f,	// (0x00083381) main_call_poc_pane

0xe349,	// (0x0008d53b) main_camera_pane

0xe349,	// (0x0008d53b) main_chi_dic_pane

0xe1d8,	// (0x0008d3ca) main_clock_pane

0x418f,	// (0x00083381) main_fmradio_pane

0xe349,	// (0x0008d53b) main_graph_messa_pane

0x418f,	// (0x00083381) main_help_pane

0x44f9,	// (0x000836eb) main_im_pane

0x43ea,	// (0x000835dc) main_image_pane_ParamLimits

0x43ea,	// (0x000835dc) main_image_pane

0x418f,	// (0x00083381) main_location2_pane

0xe349,	// (0x0008d53b) main_location_pane

0x418f,	// (0x00083381) main_messa_pane

0x418f,	// (0x00083381) main_mp2_pane

0xe349,	// (0x0008d53b) main_mp_pane

0x418f,	// (0x00083381) main_msg_pane

0x418f,	// (0x00083381) main_mup_eq_pane

0x418f,	// (0x00083381) main_mup_pane

0xe349,	// (0x0008d53b) main_notes_pane

0x418f,	// (0x00083381) main_pec_pane

0x418f,	// (0x00083381) main_phob_pane

0x418f,	// (0x00083381) main_pinb_pane

0x418f,	// (0x00083381) main_postcard_pane

0x418f,	// (0x00083381) main_qdial_pane

0xe349,	// (0x0008d53b) main_skin_pane

0x418f,	// (0x00083381) main_smil2_pane

0xe349,	// (0x0008d53b) main_smil_pane

0xe349,	// (0x0008d53b) main_video_pane

0xe349,	// (0x0008d53b) main_video_tele_pane

0x43ea,	// (0x000835dc) main_viewer_pane_ParamLimits

0x43ea,	// (0x000835dc) main_viewer_pane

0xe349,	// (0x0008d53b) main_vorec_pane

0x865d,	// (0x0008784f) popup_blid_sat_info_window_ParamLimits

0x865d,	// (0x0008784f) popup_blid_sat_info_window

0x8673,	// (0x00087865) popup_dyc_status_message_window_ParamLimits

0x8673,	// (0x00087865) popup_dyc_status_message_window

0x8681,	// (0x00087873) popup_grid_large_graphic_window_ParamLimits

0x8681,	// (0x00087873) popup_grid_large_graphic_window

0x86f5,	// (0x000878e7) popup_loc_request_window_ParamLimits

0x86f5,	// (0x000878e7) popup_loc_request_window

0x8729,	// (0x0008791b) popup_wml_address_window_ParamLimits

0x8729,	// (0x0008791b) popup_wml_address_window

0x84ff,	// (0x000876f1) call_muted_g1

0x81be,	// (0x000873b0) popup_call_audio_conf_window_ParamLimits

0x81be,	// (0x000873b0) popup_call_audio_conf_window

0x850f,	// (0x00087701) popup_call_audio_first_window_ParamLimits

0x850f,	// (0x00087701) popup_call_audio_first_window

0x854f,	// (0x00087741) popup_call_audio_in_window_ParamLimits

0x854f,	// (0x00087741) popup_call_audio_in_window

0x8573,	// (0x00087765) popup_call_audio_out_window_ParamLimits

0x8573,	// (0x00087765) popup_call_audio_out_window

0x8595,	// (0x00087787) popup_call_audio_second_window_ParamLimits

0x8595,	// (0x00087787) popup_call_audio_second_window

0x85c5,	// (0x000877b7) popup_call_audio_wait_window_ParamLimits

0x85c5,	// (0x000877b7) popup_call_audio_wait_window

0x85e6,	// (0x000877d8) popup_number_entry_window_ParamLimits

0x85e6,	// (0x000877d8) popup_number_entry_window

0x3d55,	// (0x00082f47) bg_popup_call_pane_cp05_ParamLimits

0x3d55,	// (0x00082f47) bg_popup_call_pane_cp05

0x3d75,	// (0x00082f67) popup_number_entry_window_t1

0x3d88,	// (0x00082f7a) popup_number_entry_window_t2

0x3d9a,	// (0x00082f8c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0008e2de) popup_number_entry_window_t

0x3dac,	// (0x00082f9e) text_title_cp2

0x3dbf,	// (0x00082fb1) bg_popup_call_pane_cp_ParamLimits

0x3dbf,	// (0x00082fb1) bg_popup_call_pane_cp

0x3dcd,	// (0x00082fbf) call_thumbnail_pane

0x3dd5,	// (0x00082fc7) popup_call_audio_in_window_g1_ParamLimits

0x3dd5,	// (0x00082fc7) popup_call_audio_in_window_g1

0x3de1,	// (0x00082fd3) popup_call_audio_in_window_g2_ParamLimits

0x3de1,	// (0x00082fd3) popup_call_audio_in_window_g2

0x3ded,	// (0x00082fdf) popup_call_audio_in_window_g3_ParamLimits

0x3ded,	// (0x00082fdf) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008e2e7) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008e2e7) popup_call_audio_in_window_g

0x3df9,	// (0x00082feb) popup_call_audio_in_window_t1_ParamLimits

0x3df9,	// (0x00082feb) popup_call_audio_in_window_t1

0x3e3d,	// (0x0008302f) popup_call_audio_in_window_t2_ParamLimits

0x3e3d,	// (0x0008302f) popup_call_audio_in_window_t2

0x3e58,	// (0x0008304a) popup_call_audio_in_window_t3_ParamLimits

0x3e58,	// (0x0008304a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0008e2ee) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0008e2ee) popup_call_audio_in_window_t

0x3dbf,	// (0x00082fb1) bg_popup_call_pane_cp01_ParamLimits

0x3dbf,	// (0x00082fb1) bg_popup_call_pane_cp01

0x3dcd,	// (0x00082fbf) call_thumbnail_pane_cp02

0x3e6b,	// (0x0008305d) call_type_pane_cp022

0x3e73,	// (0x00083065) popup_call_audio_out_window_g1_ParamLimits

0x3e73,	// (0x00083065) popup_call_audio_out_window_g1

0x3e85,	// (0x00083077) popup_call_audio_out_window_g2_ParamLimits

0x3e85,	// (0x00083077) popup_call_audio_out_window_g2

0x3e91,	// (0x00083083) popup_call_audio_out_window_g3_ParamLimits

0x3e91,	// (0x00083083) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008e2f5) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008e2f5) popup_call_audio_out_window_g

0x3ea3,	// (0x00083095) popup_call_audio_out_window_t1_ParamLimits

0x3ea3,	// (0x00083095) popup_call_audio_out_window_t1

0x3ebb,	// (0x000830ad) popup_call_audio_out_window_t2_ParamLimits

0x3ebb,	// (0x000830ad) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008e2fc) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008e2fc) popup_call_audio_out_window_t

0x3ed0,	// (0x000830c2) bg_popup_call_pane_ParamLimits

0x3ed0,	// (0x000830c2) bg_popup_call_pane

0x5774,	// (0x00084966) call_thumbnail_pane_cp_ParamLimits

0x5774,	// (0x00084966) call_thumbnail_pane_cp

0x3f54,	// (0x00083146) call_type_pane_cp01_ParamLimits

0x3f54,	// (0x00083146) call_type_pane_cp01

0x3f98,	// (0x0008318a) popup_call_audio_first_window_g1_ParamLimits

0x3f98,	// (0x0008318a) popup_call_audio_first_window_g1

0x3fe4,	// (0x000831d6) popup_call_audio_first_window_g2_ParamLimits

0x3fe4,	// (0x000831d6) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0008e301) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0008e301) popup_call_audio_first_window_g

0x4028,	// (0x0008321a) popup_call_audio_first_window_t1_ParamLimits

0x4028,	// (0x0008321a) popup_call_audio_first_window_t1

0x40d4,	// (0x000832c6) popup_call_audio_first_window_t4_ParamLimits

0x40d4,	// (0x000832c6) popup_call_audio_first_window_t4

0x4160,	// (0x00083352) popup_call_audio_first_window_t5_ParamLimits

0x4160,	// (0x00083352) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008e306) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008e306) popup_call_audio_first_window_t

0x418f,	// (0x00083381) bg_popup_call_pane_cp02

0x4199,	// (0x0008338b) call_type_pane_cp023

0x41a1,	// (0x00083393) popup_call_audio_wait_window_g1

0x41a9,	// (0x0008339b) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008e30d) popup_call_audio_wait_window_g

0x41b1,	// (0x000833a3) popup_call_audio_wait_window_t3

0x41bf,	// (0x000833b1) bg_popup_call_pane_cp03_ParamLimits

0x41bf,	// (0x000833b1) bg_popup_call_pane_cp03

0x421f,	// (0x00083411) call_thumbnail_pane_cp011_ParamLimits

0x421f,	// (0x00083411) call_thumbnail_pane_cp011

0x422b,	// (0x0008341d) call_type_pane_cp034_ParamLimits

0x422b,	// (0x0008341d) call_type_pane_cp034

0x4267,	// (0x00083459) popup_call_audio_second_window_g1_ParamLimits

0x4267,	// (0x00083459) popup_call_audio_second_window_g1

0x42a3,	// (0x00083495) popup_call_audio_second_window_g2_ParamLimits

0x42a3,	// (0x00083495) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0008e312) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0008e312) popup_call_audio_second_window_g

0x42df,	// (0x000834d1) popup_call_audio_second_window_t1_ParamLimits

0x42df,	// (0x000834d1) popup_call_audio_second_window_t1

0x4360,	// (0x00083552) popup_call_audio_second_window_t2_ParamLimits

0x4360,	// (0x00083552) popup_call_audio_second_window_t2

0x4396,	// (0x00083588) popup_call_audio_second_window_t3_ParamLimits

0x4396,	// (0x00083588) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008e317) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008e317) popup_call_audio_second_window_t

0x418f,	// (0x00083381) bg_popup_call_pane_cp04

0x43cc,	// (0x000835be) list_conf_pane

0x43d4,	// (0x000835c6) popup_call_audio_conf_window_t1

0x43e2,	// (0x000835d4) call_thumbnail_pane_g1

0x43ea,	// (0x000835dc) bg_pinb_pane_ParamLimits

0x43ea,	// (0x000835dc) bg_pinb_pane

0x43f8,	// (0x000835ea) find_pinb_pane

0x4401,	// (0x000835f3) listscroll_pinb_pane_ParamLimits

0x4401,	// (0x000835f3) listscroll_pinb_pane

0x4410,	// (0x00083602) pinb_bg_pane_g1

0x5798,	// (0x0008498a) pinb_bg_pane_g2

0x57a4,	// (0x00084996) pinb_bg_pane_g3

0x57b0,	// (0x000849a2) pinb_bg_pane_g4

0x57bc,	// (0x000849ae) pinb_bg_pane_g5

0x57c8,	// (0x000849ba) pinb_bg_pane_g6

0x57d3,	// (0x000849c5) pinb_bg_pane_g7

0x57de,	// (0x000849d0) pinb_bg_pane_g8

0x57e9,	// (0x000849db) pinb_bg_pane_g9

0x57f3,	// (0x000849e5) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0008e31e) pinb_bg_pane_g

0x5808,	// (0x000849fa) grid_pinb_pane

0x5813,	// (0x00084a05) list_pinb_pane

0x581e,	// (0x00084a10) scroll_pane_cp01_ParamLimits

0x581e,	// (0x00084a10) scroll_pane_cp01

0x4422,	// (0x00083614) find_pinb_pane_g1_ParamLimits

0x4422,	// (0x00083614) find_pinb_pane_g1

0x443a,	// (0x0008362c) find_pinb_pane_t1

0x444c,	// (0x0008363e) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008e338) find_pinb_pane_t

0x4461,	// (0x00083653) input_focus_pane_cp01_ParamLimits

0x4461,	// (0x00083653) input_focus_pane_cp01

0x5830,	// (0x00084a22) cell_pinb_pane_ParamLimits

0x5830,	// (0x00084a22) cell_pinb_pane

0x585e,	// (0x00084a50) cell_pinb_pane_g1_ParamLimits

0x585e,	// (0x00084a50) cell_pinb_pane_g1

0x5873,	// (0x00084a65) cell_pinb_pane_g2_ParamLimits

0x5873,	// (0x00084a65) cell_pinb_pane_g2

0x446d,	// (0x0008365f) cell_pinb_pane_g3_ParamLimits

0x446d,	// (0x0008365f) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008e33d) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008e33d) cell_pinb_pane_g

0x418f,	// (0x00083381) grid_highlight_pane_cp01

0x587f,	// (0x00084a71) list_pinb_item_pane_ParamLimits

0x587f,	// (0x00084a71) list_pinb_item_pane

0x418f,	// (0x00083381) list_highlight_pane_cp02

0x4479,	// (0x0008366b) list_pinb_item_pane_g1_ParamLimits

0x4479,	// (0x0008366b) list_pinb_item_pane_g1

0x4486,	// (0x00083678) list_pinb_item_pane_g2_ParamLimits

0x4486,	// (0x00083678) list_pinb_item_pane_g2

0x58a9,	// (0x00084a9b) list_pinb_item_pane_g3_ParamLimits

0x58a9,	// (0x00084a9b) list_pinb_item_pane_g3

0x4492,	// (0x00083684) list_pinb_item_pane_g4_ParamLimits

0x4492,	// (0x00083684) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0008e344) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0008e344) list_pinb_item_pane_g

0x449e,	// (0x00083690) list_pinb_item_pane_t1_ParamLimits

0x449e,	// (0x00083690) list_pinb_item_pane_t1

0x58d4,	// (0x00084ac6) calc_display_pane

0x58f2,	// (0x00084ae4) calc_paper_pane

0x590e,	// (0x00084b00) grid_calc_pane

0x418f,	// (0x00083381) bg_list_pane_cp01

0x593a,	// (0x00084b2c) clock_g1

0x5942,	// (0x00084b34) clock_g2

0x0001,

0xf15b,	// (0x0008e34d) clock_g

0x594c,	// (0x00084b3e) clock_t1_ParamLimits

0x594c,	// (0x00084b3e) clock_t1

0x5961,	// (0x00084b53) clock_t2_ParamLimits

0x5961,	// (0x00084b53) clock_t2

0x5973,	// (0x00084b65) clock_t3_ParamLimits

0x5973,	// (0x00084b65) clock_t3

0x5985,	// (0x00084b77) clock_t4_ParamLimits

0x5985,	// (0x00084b77) clock_t4

0x5997,	// (0x00084b89) clock_t5_ParamLimits

0x5997,	// (0x00084b89) clock_t5

0x59ac,	// (0x00084b9e) clock_t6_ParamLimits

0x59ac,	// (0x00084b9e) clock_t6

0x59be,	// (0x00084bb0) clock_t7_ParamLimits

0x59be,	// (0x00084bb0) clock_t7

0x59d0,	// (0x00084bc2) clock_t8_ParamLimits

0x59d0,	// (0x00084bc2) clock_t8

0x59e6,	// (0x00084bd8) clock_t9_ParamLimits

0x59e6,	// (0x00084bd8) clock_t9

0x0008,

0xf160,	// (0x0008e352) clock_t_ParamLimits

0xf160,	// (0x0008e352) clock_t

0x44b5,	// (0x000836a7) popup_clock_analogue_window_cp02

0x44b5,	// (0x000836a7) popup_clock_digital_window_cp01

0x44bd,	// (0x000836af) listscroll_help_pane

0x418f,	// (0x00083381) phob_pre_status_pane

0x44c7,	// (0x000836b9) grid_qdial_pane

0x418f,	// (0x00083381) listscroll_mce_pane

0x44d1,	// (0x000836c3) bg_notes_pane

0x44db,	// (0x000836cd) list_notes_pane

0x59fc,	// (0x00084bee) scroll_pane_cp06

0x44e5,	// (0x000836d7) bg_calc_paper_pane

0x5a11,	// (0x00084c03) list_calc_pane

0x44f9,	// (0x000836eb) bg_calc_display_pane

0x5a2b,	// (0x00084c1d) calc_display_pane_t1

0x5a40,	// (0x00084c32) calc_display_pane_t2

0x5a55,	// (0x00084c47) calc_display_pane_t3

0x0002,

0xf173,	// (0x0008e365) calc_display_pane_t

0x5a67,	// (0x00084c59) cell_calc_pane_ParamLimits

0x5a67,	// (0x00084c59) cell_calc_pane

0x4505,	// (0x000836f7) bg_calc_paper_pane_g1

0x451d,	// (0x0008370f) bg_calc_paper_pane_g2

0x4511,	// (0x00083703) bg_calc_paper_pane_g3

0x4535,	// (0x00083727) bg_calc_paper_pane_g4

0x4529,	// (0x0008371b) bg_calc_paper_pane_g5

0x5a94,	// (0x00084c86) bg_calc_paper_pane_g6

0x5aa5,	// (0x00084c97) bg_calc_paper_pane_g7

0x5ab6,	// (0x00084ca8) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0008e36c) bg_calc_paper_pane_g

0x5ac7,	// (0x00084cb9) calc_bg_paper_pane_g9

0x5ad8,	// (0x00084cca) list_calc_item_pane_ParamLimits

0x5ad8,	// (0x00084cca) list_calc_item_pane

0x4541,	// (0x00083733) list_calc_item_pane_g1

0x5b12,	// (0x00084d04) list_calc_item_pane_t1_ParamLimits

0x5b12,	// (0x00084d04) list_calc_item_pane_t1

0x5b24,	// (0x00084d16) list_calc_item_pane_t2_ParamLimits

0x5b24,	// (0x00084d16) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0008e37d) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0008e37d) list_calc_item_pane_t

0xd916,	// (0x0008cb08) cell_calc_pane_g1

0xd920,	// (0x0008cb12) grid_highlight_pane_cp02

0xd942,	// (0x0008cb34) bg_calc_display_pane_g1

0x5b54,	// (0x00084d46) bg_calc_display_pane_g2

0xd94b,	// (0x0008cb3d) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0008e387) bg_calc_display_pane_g

0x5b5e,	// (0x00084d50) cell_qdial_pane_ParamLimits

0x5b5e,	// (0x00084d50) cell_qdial_pane

0x5b72,	// (0x00084d64) cell_qdial_pane_g1_ParamLimits

0x5b72,	// (0x00084d64) cell_qdial_pane_g1

0x5b7f,	// (0x00084d71) cell_qdial_pane_g2_ParamLimits

0x5b7f,	// (0x00084d71) cell_qdial_pane_g2

0xd954,	// (0x0008cb46) cell_qdial_pane_g3_ParamLimits

0xd954,	// (0x0008cb46) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0008e38e) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0008e38e) cell_qdial_pane_g

0x5b9d,	// (0x00084d8f) cell_qdial_pane_t1_ParamLimits

0x5b9d,	// (0x00084d8f) cell_qdial_pane_t1

0x5bb5,	// (0x00084da7) cell_qdial_pane_t2_ParamLimits

0x5bb5,	// (0x00084da7) cell_qdial_pane_t2

0x5bc8,	// (0x00084dba) cell_qdial_pane_t3_ParamLimits

0x5bc8,	// (0x00084dba) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008e397) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008e397) cell_qdial_pane_t

0x418f,	// (0x00083381) grid_highlight_pane_cp04

0xd960,	// (0x0008cb52) thumbnail_qdial_pane_ParamLimits

0xd960,	// (0x0008cb52) thumbnail_qdial_pane

0xd9bc,	// (0x0008cbae) list_help_pane

0xd9c5,	// (0x0008cbb7) scroll_pane_cp02

0x5bdb,	// (0x00084dcd) help_list_pane_t1_ParamLimits

0x5bdb,	// (0x00084dcd) help_list_pane_t1

0x5c19,	// (0x00084e0b) bg_notes_pane_g2

0x5c21,	// (0x00084e13) bg_notes_pane_g3

0x5c29,	// (0x00084e1b) notes_bg_pane_g1

0x5c31,	// (0x00084e23) notes_bg_pane_g4

0x5c39,	// (0x00084e2b) notes_bg_pane_g5

0x5c41,	// (0x00084e33) notes_bg_pane_g6

0x5c49,	// (0x00084e3b) notes_bg_pane_g7

0x5c51,	// (0x00084e43) notes_bg_pane_g8

0x5c59,	// (0x00084e4b) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008e3b5) notes_bg_pane_g

0x5c61,	// (0x00084e53) list_notes_text_pane_ParamLimits

0x5c61,	// (0x00084e53) list_notes_text_pane

0xd9ce,	// (0x0008cbc0) list_notes_text_pane_g1

0x5c91,	// (0x00084e83) list_notes_text_pane_t1

0x44f9,	// (0x000836eb) listscroll_cale_week_pane

0x5cbc,	// (0x00084eae) bg_cale_heading_pane

0xd9e8,	// (0x0008cbda) bg_cale_pane_cp01

0x5cd8,	// (0x00084eca) cale_week_corner_pane

0x5ce9,	// (0x00084edb) cale_week_day_heading_pane

0x5d05,	// (0x00084ef7) cale_week_scroll_pane_g1

0x5d1e,	// (0x00084f10) cale_week_scroll_pane_g2

0x5d2f,	// (0x00084f21) cale_week_scroll_pane_g3

0x5d40,	// (0x00084f32) cale_week_scroll_pane_g4

0x5d51,	// (0x00084f43) cale_week_scroll_pane_g5

0x5d62,	// (0x00084f54) cale_week_scroll_pane_g6

0x5d73,	// (0x00084f65) cale_week_scroll_pane_g7

0x5d86,	// (0x00084f78) cale_week_scroll_pane_g8

0x5d99,	// (0x00084f8b) cale_week_scroll_pane_g9

0x5daa,	// (0x00084f9c) cale_week_scroll_pane_g10

0x5dbb,	// (0x00084fad) cale_week_scroll_pane_g11

0x5dcc,	// (0x00084fbe) cale_week_scroll_pane_g12

0x5de5,	// (0x00084fd7) cale_week_scroll_pane_g13

0x5dfe,	// (0x00084ff0) cale_week_scroll_pane_g14

0x5e17,	// (0x00085009) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008e3c4) cale_week_scroll_pane_g

0x5e30,	// (0x00085022) cale_week_time_pane

0x5e43,	// (0x00085035) grid_cale_week_pane

0x5e60,	// (0x00085052) scroll_pane_cp08

0x5e7a,	// (0x0008506c) cell_cale_week_pane_ParamLimits

0x5e7a,	// (0x0008506c) cell_cale_week_pane

0x5eca,	// (0x000850bc) cale_week_day_heading_pane_t1

0x5ede,	// (0x000850d0) cale_week_day_heading_pane_t2

0x5ef2,	// (0x000850e4) cale_week_day_heading_pane_t3

0x5f06,	// (0x000850f8) cale_week_day_heading_pane_t4

0x5f1a,	// (0x0008510c) cale_week_day_heading_pane_t5

0x5f2e,	// (0x00085120) cale_week_day_heading_pane_t6

0x5f42,	// (0x00085134) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0008e3e3) cale_week_day_heading_pane_t

0xda13,	// (0x0008cc05) bg_cale_side_pane

0x5f56,	// (0x00085148) cale_week_time_pane_t1

0x5f6e,	// (0x00085160) cale_week_time_pane_t2

0x5f86,	// (0x00085178) cale_week_time_pane_t3

0x5f9e,	// (0x00085190) cale_week_time_pane_t4

0x5fb6,	// (0x000851a8) cale_week_time_pane_t5

0x5fce,	// (0x000851c0) cale_week_time_pane_t6

0x5fee,	// (0x000851e0) cale_week_time_pane_t7

0x600e,	// (0x00085200) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0008e3f2) cale_week_time_pane_t

0x602e,	// (0x00085220) cell_cale_week_pane_g2

0x603f,	// (0x00085231) cell_cale_week_pane_g3_ParamLimits

0x603f,	// (0x00085231) cell_cale_week_pane_g3

0xda21,	// (0x0008cc13) grid_highlight_pane_cp07

0xda29,	// (0x0008cc1b) listscroll_gms_pane

0xda33,	// (0x0008cc25) grid_gms_pane

0xda3c,	// (0x0008cc2e) listscroll_gms_pane_g1

0xda44,	// (0x0008cc36) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0008e403) listscroll_gms_pane_g

0x6057,	// (0x00085249) scroll_pane_cp010

0x6062,	// (0x00085254) cell_gms_pane_ParamLimits

0x6062,	// (0x00085254) cell_gms_pane

0x6074,	// (0x00085266) cell_gms_pane_g1

0xda4c,	// (0x0008cc3e) cell_gms_pane_g2

0xd9ce,	// (0x0008cbc0) cell_gms_pane_g3

0xda54,	// (0x0008cc46) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008e408) cell_gms_pane_g

0xda5d,	// (0x0008cc4f) grid_highlight_pane_cp09

0x84a7,	// (0x00087699) phob_pre_status_pane_g1

0x84af,	// (0x000876a1) phob_pre_status_pane_g2

0x84b7,	// (0x000876a9) phob_pre_status_pane_g3

0x84bf,	// (0x000876b1) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0008e7f7) phob_pre_status_pane_g

0x84cf,	// (0x000876c1) phob_pre_status_pane_t1

0x84df,	// (0x000876d1) phob_pre_status_pane_t2

0x84ef,	// (0x000876e1) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0008e802) phob_pre_status_pane_t

0x418f,	// (0x00083381) bg_list_pane_cp05

0x6084,	// (0x00085276) grid_vorec_pane

0x608c,	// (0x0008527e) vorec_t1

0x609a,	// (0x0008528c) vorec_t2

0x60a8,	// (0x0008529a) vorec_t3

0x60b6,	// (0x000852a8) vorec_t4

0x60c4,	// (0x000852b6) vorec_t5

0x60d2,	// (0x000852c4) vorec_t6

0x0006,

0xf21f,	// (0x0008e411) vorec_t

0x60ee,	// (0x000852e0) wait_bar_pane_cp01

0xda65,	// (0x0008cc57) cell_vorec_pane_ParamLimits

0xda65,	// (0x0008cc57) cell_vorec_pane

0xda78,	// (0x0008cc6a) cell_vorec_pane_g1

0x418f,	// (0x00083381) grid_highlight_pane_cp05

0x6106,	// (0x000852f8) cams_zoom_pane

0x6112,	// (0x00085304) image_vga_pane

0x6121,	// (0x00085313) main_camera_pane_g1

0x612f,	// (0x00085321) main_camera_pane_g2

0x613d,	// (0x0008532f) main_camera_pane_g3

0x6149,	// (0x0008533b) main_camera_pane_g4

0x6155,	// (0x00085347) main_camera_pane_g5

0x6161,	// (0x00085353) main_camera_pane_g6

0x616d,	// (0x0008535f) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0008e420) main_camera_pane_g

0x6179,	// (0x0008536b) main_camera_pane_t1

0x618b,	// (0x0008537d) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0008e431) main_camera_pane_t

0x61ac,	// (0x0008539e) cams_zoom_pane_cp_ParamLimits

0x61ac,	// (0x0008539e) cams_zoom_pane_cp

0x61d0,	// (0x000853c2) image_cif_pane_ParamLimits

0x61d0,	// (0x000853c2) image_cif_pane

0x61ee,	// (0x000853e0) image_subqcif_pane

0x61f6,	// (0x000853e8) main_video_pane_g1_ParamLimits

0x61f6,	// (0x000853e8) main_video_pane_g1

0x6216,	// (0x00085408) main_video_pane_g2_ParamLimits

0x6216,	// (0x00085408) main_video_pane_g2

0x6248,	// (0x0008543a) main_video_pane_g3_ParamLimits

0x6248,	// (0x0008543a) main_video_pane_g3

0x6273,	// (0x00085465) main_video_pane_g4_ParamLimits

0x6273,	// (0x00085465) main_video_pane_g4

0x629e,	// (0x00085490) main_video_pane_g5_ParamLimits

0x629e,	// (0x00085490) main_video_pane_g5

0xda8e,	// (0x0008cc80) main_video_pane_g6_ParamLimits

0xda8e,	// (0x0008cc80) main_video_pane_g6

0x0006,

0xf244,	// (0x0008e436) main_video_pane_g_ParamLimits

0xf244,	// (0x0008e436) main_video_pane_g

0x62c2,	// (0x000854b4) main_video_pane_t1_ParamLimits

0x62c2,	// (0x000854b4) main_video_pane_t1

0xdaa8,	// (0x0008cc9a) cams_zoom_pane_g1

0xdab1,	// (0x0008cca3) cams_zoom_pane_g2

0xdaba,	// (0x0008ccac) cams_zoom_pane_g3

0xdac3,	// (0x0008ccb5) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0008e445) cams_zoom_pane_g

0x630c,	// (0x000854fe) grid_cams_pane

0x631a,	// (0x0008550c) linegrid_cams_pane

0x6328,	// (0x0008551a) cell_cams_pane_ParamLimits

0x6328,	// (0x0008551a) cell_cams_pane

0xdacc,	// (0x0008ccbe) cams_burst_image_pane

0xdad4,	// (0x0008ccc6) cell_cams_pane_g1

0x418f,	// (0x00083381) grid_highlight_pane_cp03

0xd916,	// (0x0008cb08) mp_bg_pane_g1

0x418f,	// (0x00083381) bg_list_pane_cp03

0x0af2,	// (0x0007fce4) bg_mp_pane

0x0afa,	// (0x0007fcec) grid_mp_pane

0x0b02,	// (0x0007fcf4) media_player_g1

0x0b0a,	// (0x0007fcfc) media_player_t1

0x0b18,	// (0x0007fd0a) media_player_t2

0x0b26,	// (0x0007fd18) media_player_t3

0x0b34,	// (0x0007fd26) media_player_t4

0x0b42,	// (0x0007fd34) media_player_t5

0x0b50,	// (0x0007fd42) media_player_t6

0x0b5e,	// (0x0007fd50) media_player_t7

0x0006,

0xf5ef,	// (0x0008e7e1) media_player_t

0x0b6c,	// (0x0007fd5e) wait_bar_pane_cp02

0xf5d4,	// (0x0008e7c6) main_usb_pane_t

0x849e,	// (0x00087690) cell_mp_pane

0xd916,	// (0x0008cb08) cell_mp_pane_g1

0x418f,	// (0x00083381) grid_highlight_pane_cp06

0xdadc,	// (0x0008ccce) grid_skin_colour_pane

0xdae4,	// (0x0008ccd6) list_highlight_pane_cp03

0x638b,	// (0x0008557d) skin_g1

0xdaec,	// (0x0008ccde) skin_t1

0xdafb,	// (0x0008cced) skin_t2

0x0001,

0xf288,	// (0x0008e47a) skin_t

0x6395,	// (0x00085587) cell_skin_colour_pane_ParamLimits

0x6395,	// (0x00085587) cell_skin_colour_pane

0xdb09,	// (0x0008ccfb) cell_skin_colour_pane_g1

0x6419,	// (0x0008560b) call_video_g1_ParamLimits

0x6419,	// (0x0008560b) call_video_g1

0x6429,	// (0x0008561b) call_video_g2_ParamLimits

0x6429,	// (0x0008561b) call_video_g2

0x0001,

0xf28d,	// (0x0008e47f) call_video_g_ParamLimits

0xf28d,	// (0x0008e47f) call_video_g

0x6483,	// (0x00085675) call_video_uplink_pane_cp1_ParamLimits

0x6483,	// (0x00085675) call_video_uplink_pane_cp1

0xdb1b,	// (0x0008cd0d) call_video_uplink_pane_cp2

0x654f,	// (0x00085741) video_down_crop_pane_ParamLimits

0x654f,	// (0x00085741) video_down_crop_pane

0x6641,	// (0x00085833) video_down_pane_ParamLimits

0x6641,	// (0x00085833) video_down_pane

0xdb23,	// (0x0008cd15) video_down_subqcif_pane_ParamLimits

0xdb23,	// (0x0008cd15) video_down_subqcif_pane

0xdb3b,	// (0x0008cd2d) video_down_subqcif_pane_cp_ParamLimits

0xdb3b,	// (0x0008cd2d) video_down_subqcif_pane_cp

0xdb5f,	// (0x0008cd51) im_reading_pane_ParamLimits

0xdb5f,	// (0x0008cd51) im_reading_pane

0x6763,	// (0x00085955) im_writing_pane_ParamLimits

0x6763,	// (0x00085955) im_writing_pane

0x6781,	// (0x00085973) im_reading_pane_t1

0xdb79,	// (0x0008cd6b) list_im_pane

0xdb8a,	// (0x0008cd7c) scroll_pane_cp07

0x67e1,	// (0x000859d3) im_writing_pane_t1_ParamLimits

0x67e1,	// (0x000859d3) im_writing_pane_t1

0xdba3,	// (0x0008cd95) im_writing_pane_t2_ParamLimits

0xdba3,	// (0x0008cd95) im_writing_pane_t2

0x0001,

0xf297,	// (0x0008e489) im_writing_pane_t_ParamLimits

0xf297,	// (0x0008e489) im_writing_pane_t

0x418f,	// (0x00083381) input_focus_pane_cp04

0x418f,	// (0x00083381) input_focus_pane_cp05

0x67f3,	// (0x000859e5) list_im_single_pane_ParamLimits

0x67f3,	// (0x000859e5) list_im_single_pane

0x681f,	// (0x00085a11) list_single_im_pane_t1

0x8462,	// (0x00087654) blid_accuracy_pane

0x846a,	// (0x0008765c) blid_compass_pane

0x8474,	// (0x00087666) main_location_t1

0x8482,	// (0x00087674) main_location_t2

0x8490,	// (0x00087682) main_location_t3

0x0002,

0xf5fe,	// (0x0008e7f0) main_location_t

0x418f,	// (0x00083381) aid_levels_location

0xd916,	// (0x0008cb08) blid_accuracy_pane_g1

0xd916,	// (0x0008cb08) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0008e4eb) blid_accuracy_pane_g

0xdbeb,	// (0x0008cddd) wml_content_pane

0xdc29,	// (0x0008ce1b) wml_button_pane_ParamLimits

0xdc29,	// (0x0008ce1b) wml_button_pane

0x682e,	// (0x00085a20) wml_list_single_large_pane_ParamLimits

0x682e,	// (0x00085a20) wml_list_single_large_pane

0x6860,	// (0x00085a52) wml_list_single_medium_pane_ParamLimits

0x6860,	// (0x00085a52) wml_list_single_medium_pane

0x6899,	// (0x00085a8b) wml_list_single_small_pane_ParamLimits

0x6899,	// (0x00085a8b) wml_list_single_small_pane

0xdc3d,	// (0x0008ce2f) wml_selection_box_pane_ParamLimits

0xdc3d,	// (0x0008ce2f) wml_selection_box_pane

0xdc50,	// (0x0008ce42) wml_list_single_pane_t1

0xdc5f,	// (0x0008ce51) wml_list_single_medium_pane_t1

0xdc6e,	// (0x0008ce60) wml_list_single_large_pane_t1

0xdc7d,	// (0x0008ce6f) input_focus_pane_cp02_ParamLimits

0xdc7d,	// (0x0008ce6f) input_focus_pane_cp02

0xdc90,	// (0x0008ce82) wml_selection_box_pane_g1

0xdc99,	// (0x0008ce8b) wml_selection_box_pane_t1_ParamLimits

0xdc99,	// (0x0008ce8b) wml_selection_box_pane_t1

0x43ea,	// (0x000835dc) bg_wml_button_pane_ParamLimits

0x43ea,	// (0x000835dc) bg_wml_button_pane

0xdcb1,	// (0x0008cea3) wml_button_pane_g1

0xdcb9,	// (0x0008ceab) wml_button_pane_t1

0xdcb1,	// (0x0008cea3) wml_button_bg_pane_g1

0xdcc9,	// (0x0008cebb) wml_button_bg_pane_g2

0xdcd1,	// (0x0008cec3) wml_button_bg_pane_g3

0xdcd9,	// (0x0008cecb) wml_button_bg_pane_g4

0xdce1,	// (0x0008ced3) wml_button_bg_pane_g5

0xdce9,	// (0x0008cedb) wml_button_bg_pane_g6

0xdcf1,	// (0x0008cee3) wml_button_bg_pane_g7

0xdcf9,	// (0x0008ceeb) wml_button_bg_pane_g8

0xdd01,	// (0x0008cef3) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0008e48e) wml_button_bg_pane_g

0x68e1,	// (0x00085ad3) bg_list_pane_cp02

0xdd09,	// (0x0008cefb) mce_header_pane_ParamLimits

0xdd09,	// (0x0008cefb) mce_header_pane

0xdd1f,	// (0x0008cf11) mce_icon_pane

0xdd1f,	// (0x0008cf11) mce_image_pane

0xdd28,	// (0x0008cf1a) mce_text_pane_ParamLimits

0xdd28,	// (0x0008cf1a) mce_text_pane

0x68eb,	// (0x00085add) scroll_pane_cp03

0xdc21,	// (0x0008ce13) scroll_pane_cp04

0xdd3b,	// (0x0008cf2d) scroll_pane_cp05_ParamLimits

0xdd3b,	// (0x0008cf2d) scroll_pane_cp05

0x68f5,	// (0x00085ae7) mce_header_field_pane_ParamLimits

0x68f5,	// (0x00085ae7) mce_header_field_pane

0x6915,	// (0x00085b07) mce_header_field_pane_2_ParamLimits

0x6915,	// (0x00085b07) mce_header_field_pane_2

0x692b,	// (0x00085b1d) mce_header_field_pane_3

0x6933,	// (0x00085b25) list_single_mce_message_pane_ParamLimits

0x6933,	// (0x00085b25) list_single_mce_message_pane

0x6963,	// (0x00085b55) list_single_mce_smart_pane_ParamLimits

0x6963,	// (0x00085b55) list_single_mce_smart_pane

0xdd47,	// (0x0008cf39) input_focus_pane_cp03

0xdd50,	// (0x0008cf42) list_header_data_pane

0x699e,	// (0x00085b90) mce_header_field_pane_t1

0x69ae,	// (0x00085ba0) list_single_mce_header_pane_ParamLimits

0x69ae,	// (0x00085ba0) list_single_mce_header_pane

0xdd58,	// (0x0008cf4a) list_single_mce_header_pane_t1

0xdd67,	// (0x0008cf59) list_single_mce_message_pane_g1

0xdd6f,	// (0x0008cf61) list_single_mce_message_pane_t1

0x6a00,	// (0x00085bf2) bg_cale_heading_pane_cp01_ParamLimits

0x6a00,	// (0x00085bf2) bg_cale_heading_pane_cp01

0xdd7d,	// (0x0008cf6f) bg_cale_pane_cp02_ParamLimits

0xdd7d,	// (0x0008cf6f) bg_cale_pane_cp02

0x6a33,	// (0x00085c25) cale_month_corner_pane

0x6a49,	// (0x00085c3b) cale_month_day_heading_pane_ParamLimits

0x6a49,	// (0x00085c3b) cale_month_day_heading_pane

0x6a8c,	// (0x00085c7e) cale_month_pane_g1_ParamLimits

0x6a8c,	// (0x00085c7e) cale_month_pane_g1

0x6ab8,	// (0x00085caa) cale_month_pane_g2_ParamLimits

0x6ab8,	// (0x00085caa) cale_month_pane_g2

0x6adb,	// (0x00085ccd) cale_month_pane_g3_ParamLimits

0x6adb,	// (0x00085ccd) cale_month_pane_g3

0x6b17,	// (0x00085d09) cale_month_pane_g4_ParamLimits

0x6b17,	// (0x00085d09) cale_month_pane_g4

0x6b53,	// (0x00085d45) cale_month_pane_g5_ParamLimits

0x6b53,	// (0x00085d45) cale_month_pane_g5

0x6b8f,	// (0x00085d81) cale_month_pane_g6_ParamLimits

0x6b8f,	// (0x00085d81) cale_month_pane_g6

0x6bcb,	// (0x00085dbd) cale_month_pane_g7_ParamLimits

0x6bcb,	// (0x00085dbd) cale_month_pane_g7

0x6c17,	// (0x00085e09) cale_month_pane_g8_ParamLimits

0x6c17,	// (0x00085e09) cale_month_pane_g8

0x6c63,	// (0x00085e55) cale_month_pane_g9_ParamLimits

0x6c63,	// (0x00085e55) cale_month_pane_g9

0x6ca9,	// (0x00085e9b) cale_month_pane_g10_ParamLimits

0x6ca9,	// (0x00085e9b) cale_month_pane_g10

0x6cef,	// (0x00085ee1) cale_month_pane_g11_ParamLimits

0x6cef,	// (0x00085ee1) cale_month_pane_g11

0x6d2d,	// (0x00085f1f) cale_month_pane_g12_ParamLimits

0x6d2d,	// (0x00085f1f) cale_month_pane_g12

0x6d6b,	// (0x00085f5d) cale_month_pane_g13_ParamLimits

0x6d6b,	// (0x00085f5d) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0008e4a1) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0008e4a1) cale_month_pane_g

0x6da9,	// (0x00085f9b) cale_month_week_pane

0x6dbc,	// (0x00085fae) grid_cale_month_pane_ParamLimits

0x6dbc,	// (0x00085fae) grid_cale_month_pane

0x6dfa,	// (0x00085fec) cale_month_day_heading_pane_t1

0x6e58,	// (0x0008604a) cale_month_day_heading_pane_t2

0x6ebd,	// (0x000860af) cale_month_day_heading_pane_t3

0x6f22,	// (0x00086114) cale_month_day_heading_pane_t4

0x6f87,	// (0x00086179) cale_month_day_heading_pane_t5

0x6fec,	// (0x000861de) cale_month_day_heading_pane_t6

0x7059,	// (0x0008624b) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008e4bc) cale_month_day_heading_pane_t

0xda13,	// (0x0008cc05) bg_cale_side_pane_cp01

0x70ce,	// (0x000862c0) cale_month_week_pane_t1

0x70e5,	// (0x000862d7) cale_month_week_pane_t2

0x70fc,	// (0x000862ee) cale_month_week_pane_t3

0x7113,	// (0x00086305) cale_month_week_pane_t4

0x712a,	// (0x0008631c) cale_month_week_pane_t5

0x7149,	// (0x0008633b) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0008e4cb) cale_month_week_pane_t

0x7168,	// (0x0008635a) cell_cale_month_pane_ParamLimits

0x7168,	// (0x0008635a) cell_cale_month_pane

0x7236,	// (0x00086428) cell_cale_month_pane_g1

0x7242,	// (0x00086434) cell_cale_month_pane_t1_ParamLimits

0x7242,	// (0x00086434) cell_cale_month_pane_t1

0xda21,	// (0x0008cc13) grid_highlight_pane_cp08

0xd916,	// (0x0008cb08) main_smil_g1

0x725e,	// (0x00086450) smil_status_pane

0xddb2,	// (0x0008cfa4) smil_text_pane

0x0a0a,	// (0x0007fbfc) bg_popup_call3_rect_pane_g8

0x0a12,	// (0x0007fc04) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0008e784) bg_popup_call3_rect_pane_g

0x0ca7,	// (0x0007fe99) smil_status_volume_pane_g1

0xddbc,	// (0x0008cfae) smil_status_pane_t1

0x8846,	// (0x00087a38) volume_smil_pane

0xddd3,	// (0x0008cfc5) list_smil_text_pane

0x7271,	// (0x00086463) scroll_pane_cp011

0x727c,	// (0x0008646e) smil_text_list_pane_t1_ParamLimits

0x727c,	// (0x0008646e) smil_text_list_pane_t1

0x7327,	// (0x00086519) aid_volume_smil_ParamLimits

0x7327,	// (0x00086519) aid_volume_smil

0xd916,	// (0x0008cb08) smil_volume_pane_g1

0xd916,	// (0x0008cb08) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0008e4eb) smil_volume_pane_g

0x44f9,	// (0x000836eb) listscroll_cale_day_pane

0xdddd,	// (0x0008cfcf) bg_cale_pane

0xddf5,	// (0x0008cfe7) list_cale_pane

0xde06,	// (0x0008cff8) scroll_pane_cp09

0xde17,	// (0x0008d009) cale_bg_pane_g1

0xde1f,	// (0x0008d011) cale_bg_pane_g2

0xde27,	// (0x0008d019) cale_bg_pane_g3

0xde2f,	// (0x0008d021) cale_bg_pane_g4

0xde37,	// (0x0008d029) cale_bg_pane_g5

0xde3f,	// (0x0008d031) cale_bg_pane_g6

0xde47,	// (0x0008d039) cale_bg_pane_g7

0xde4f,	// (0x0008d041) cale_bg_pane_g8

0xde57,	// (0x0008d049) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0008e4f0) cale_bg_pane_g

0x7349,	// (0x0008653b) list_cale_time_pane_ParamLimits

0x7349,	// (0x0008653b) list_cale_time_pane

0x736a,	// (0x0008655c) list_cale_time_pane_g1_ParamLimits

0x736a,	// (0x0008655c) list_cale_time_pane_g1

0xde5f,	// (0x0008d051) list_cale_time_pane_g2_ParamLimits

0xde5f,	// (0x0008d051) list_cale_time_pane_g2

0x7376,	// (0x00086568) list_cale_time_pane_g3_ParamLimits

0x7376,	// (0x00086568) list_cale_time_pane_g3

0x7392,	// (0x00086584) list_cale_time_pane_g4_ParamLimits

0x7392,	// (0x00086584) list_cale_time_pane_g4

0x73a0,	// (0x00086592) list_cale_time_pane_g5_ParamLimits

0x73a0,	// (0x00086592) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0008e503) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0008e503) list_cale_time_pane_g

0x73ae,	// (0x000865a0) list_cale_time_pane_t1_ParamLimits

0x73ae,	// (0x000865a0) list_cale_time_pane_t1

0x73d6,	// (0x000865c8) list_cale_time_pane_t2_ParamLimits

0x73d6,	// (0x000865c8) list_cale_time_pane_t2

0x7730,	// (0x00086922) aid_blid_cardinal_pane

0x7772,	// (0x00086964) compass_pane_t4

0x73fe,	// (0x000865f0) list_cale_time_pane_t4_ParamLimits

0x73fe,	// (0x000865f0) list_cale_time_pane_t4

0x7780,	// (0x00086972) compass_pane_t5

0x7790,	// (0x00086982) compass_pane_t6

0x779e,	// (0x00086990) compass_pane_t7

0xe29b,	// (0x0008d48d) navi_pane_cc_t1

0xe3f0,	// (0x0008d5e2) aid_phob_thumbnail_center_pane

0x7f58,	// (0x0008714a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0008e510) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0008e510) list_cale_time_pane_t

0x3dbf,	// (0x00082fb1) bg_popup_window_pane_cp02_ParamLimits

0x3dbf,	// (0x00082fb1) bg_popup_window_pane_cp02

0xde79,	// (0x0008d06b) heading_pane_cp01_ParamLimits

0xde79,	// (0x0008d06b) heading_pane_cp01

0xde85,	// (0x0008d077) loc_req_pane_ParamLimits

0xde85,	// (0x0008d077) loc_req_pane

0xde95,	// (0x0008d087) loc_type_pane_ParamLimits

0xde95,	// (0x0008d087) loc_type_pane

0xdea7,	// (0x0008d099) loc_type_pane_t1_ParamLimits

0xdea7,	// (0x0008d099) loc_type_pane_t1

0xdeb9,	// (0x0008d0ab) loc_type_pane_t2_ParamLimits

0xdeb9,	// (0x0008d0ab) loc_type_pane_t2

0xdecb,	// (0x0008d0bd) loc_type_pane_t3_ParamLimits

0xdecb,	// (0x0008d0bd) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008e517) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008e517) loc_type_pane_t

0xdedd,	// (0x0008d0cf) list_loc_req_pane

0xdee7,	// (0x0008d0d9) scroll_pane_cp012

0x7426,	// (0x00086618) list_single_loc_request_popup_menu_pane_ParamLimits

0x7426,	// (0x00086618) list_single_loc_request_popup_menu_pane

0xdef2,	// (0x0008d0e4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdef2,	// (0x0008d0e4) list_single_loc_request_popup_menu_pane_g1

0xdefe,	// (0x0008d0f0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdefe,	// (0x0008d0f0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0008e51e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0008e51e) list_single_loc_request_popup_menu_pane_g

0xdf0a,	// (0x0008d0fc) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdf0a,	// (0x0008d0fc) list_single_loc_request_popup_menu_pane_t1

0x7438,	// (0x0008662a) bg_popup_window_pane_cp03_ParamLimits

0x7438,	// (0x0008662a) bg_popup_window_pane_cp03

0x7446,	// (0x00086638) heading_loc_req_pane_ParamLimits

0x7446,	// (0x00086638) heading_loc_req_pane

0x7452,	// (0x00086644) popup_dyc_status_message_window_g1_ParamLimits

0x7452,	// (0x00086644) popup_dyc_status_message_window_g1

0x745e,	// (0x00086650) popup_dyc_status_message_window_t1_ParamLimits

0x745e,	// (0x00086650) popup_dyc_status_message_window_t1

0x7470,	// (0x00086662) popup_dyc_status_message_window_t2_ParamLimits

0x7470,	// (0x00086662) popup_dyc_status_message_window_t2

0x7482,	// (0x00086674) popup_dyc_status_message_window_t3_ParamLimits

0x7482,	// (0x00086674) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0008e523) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0008e523) popup_dyc_status_message_window_t

0x418f,	// (0x00083381) bg_heading_pane_cp01

0xdf20,	// (0x0008d112) heading_loc_req_pane_g1

0xdf28,	// (0x0008d11a) heading_loc_req_pane_g2

0xdf30,	// (0x0008d122) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008e52a) heading_loc_req_pane_g

0xdf38,	// (0x0008d12a) heading_loc_req_pane_t1

0xdf47,	// (0x0008d139) bg_popup_sub_pane_cp01_ParamLimits

0xdf47,	// (0x0008d139) bg_popup_sub_pane_cp01

0xdf55,	// (0x0008d147) popup_cale_events_window_g1_ParamLimits

0xdf55,	// (0x0008d147) popup_cale_events_window_g1

0xdf75,	// (0x0008d167) popup_cale_events_window_g2_ParamLimits

0xdf75,	// (0x0008d167) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0008e55e) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0008e55e) popup_cale_events_window_g

0xdf95,	// (0x0008d187) popup_cale_events_window_t1_ParamLimits

0xdf95,	// (0x0008d187) popup_cale_events_window_t1

0xdfa7,	// (0x0008d199) popup_cale_events_window_t2_ParamLimits

0xdfa7,	// (0x0008d199) popup_cale_events_window_t2

0xdfe5,	// (0x0008d1d7) popup_cale_events_window_t3_ParamLimits

0xdfe5,	// (0x0008d1d7) popup_cale_events_window_t3

0xe01f,	// (0x0008d211) popup_cale_events_window_t4_ParamLimits

0xe01f,	// (0x0008d211) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0008e563) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0008e563) popup_cale_events_window_t

0x7506,	// (0x000866f8) call_type_pane

0xe055,	// (0x0008d247) popup_call_status_window_g1

0x7512,	// (0x00086704) popup_call_status_window_g2

0x751e,	// (0x00086710) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0008e56c) popup_call_status_window_g

0xe063,	// (0x0008d255) call_type_pane_g1

0xe06c,	// (0x0008d25e) call_type_pane_g2

0x0001,

0xf381,	// (0x0008e573) call_type_pane_g

0x418f,	// (0x00083381) bg_popup_sub_pane_cp02

0xe075,	// (0x0008d267) listscroll_popup_wml_pane

0xe07d,	// (0x0008d26f) list_wml_pane

0xe087,	// (0x0008d279) scroll_pane_cp013

0xe092,	// (0x0008d284) list_single_graphic_popup_wml_pane_ParamLimits

0xe092,	// (0x0008d284) list_single_graphic_popup_wml_pane

0xd916,	// (0x0008cb08) list_single_graphic_popup_wml_pane_g1

0xe0a6,	// (0x0008d298) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0008e578) list_single_graphic_popup_wml_pane_g

0xe0ae,	// (0x0008d2a0) list_single_graphic_popup_wml_pane_t1

0xe0c4,	// (0x0008d2b6) aid_call_pane

0x43e2,	// (0x000835d4) popup_clock_analogue_window_g1

0x43e2,	// (0x000835d4) popup_clock_analogue_window_g2

0x752a,	// (0x0008671c) popup_clock_analogue_window_g3

0x752a,	// (0x0008671c) popup_clock_analogue_window_g4

0xd916,	// (0x0008cb08) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0008e57d) popup_clock_analogue_window_g

0x7532,	// (0x00086724) popup_clock_analogue_window_t1

0x7540,	// (0x00086732) clock_digital_number_pane_ParamLimits

0x7540,	// (0x00086732) clock_digital_number_pane

0x754c,	// (0x0008673e) clock_digital_number_pane_cp02_ParamLimits

0x754c,	// (0x0008673e) clock_digital_number_pane_cp02

0x7558,	// (0x0008674a) clock_digital_number_pane_cp03_ParamLimits

0x7558,	// (0x0008674a) clock_digital_number_pane_cp03

0x7564,	// (0x00086756) clock_digital_number_pane_cp04_ParamLimits

0x7564,	// (0x00086756) clock_digital_number_pane_cp04

0x7570,	// (0x00086762) clock_digital_separator_pane_ParamLimits

0x7570,	// (0x00086762) clock_digital_separator_pane

0x757c,	// (0x0008676e) popup_clock_digital_window_t1

0xd916,	// (0x0008cb08) clock_digital_number_pane_g1

0xd916,	// (0x0008cb08) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0008e4eb) clock_digital_number_pane_g

0xd916,	// (0x0008cb08) clock_digital_separator_pane_g1

0xd916,	// (0x0008cb08) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0008e4eb) clock_digital_separator_pane_g

0x418f,	// (0x00083381) bg_popup_window_pane_cp04

0xe0cc,	// (0x0008d2be) heading_pane_cp03

0xe0d4,	// (0x0008d2c6) listscroll_popup_gms_pane

0xe0dc,	// (0x0008d2ce) grid_large_graphic_popup_pane

0xe0e6,	// (0x0008d2d8) listscroll_popup_gms_pane_g1

0xe0ee,	// (0x0008d2e0) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0008e588) listscroll_popup_gms_pane_g

0xdc21,	// (0x0008ce13) scroll_pane_cp014

0xe0f6,	// (0x0008d2e8) cell_large_graphic_popup_pane_ParamLimits

0xe0f6,	// (0x0008d2e8) cell_large_graphic_popup_pane

0xe10e,	// (0x0008d300) cell_large_graphic_popup_pane_g1_ParamLimits

0xe10e,	// (0x0008d300) cell_large_graphic_popup_pane_g1

0xe11a,	// (0x0008d30c) cell_large_graphic_popup_pane_g2_ParamLimits

0xe11a,	// (0x0008d30c) cell_large_graphic_popup_pane_g2

0xe126,	// (0x0008d318) cell_large_graphic_popup_pane_g3_ParamLimits

0xe126,	// (0x0008d318) cell_large_graphic_popup_pane_g3

0xe133,	// (0x0008d325) cell_large_graphic_popup_pane_g4_ParamLimits

0xe133,	// (0x0008d325) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0008e58d) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0008e58d) cell_large_graphic_popup_pane_g

0xe143,	// (0x0008d335) grid_highlight_pane_cp010

0xd916,	// (0x0008cb08) bg_popup_call_pane_g1

0xe14d,	// (0x0008d33f) list_single_graphic_popup_conf_pane_ParamLimits

0xe14d,	// (0x0008d33f) list_single_graphic_popup_conf_pane

0xe15f,	// (0x0008d351) list_highlight_pane_cp01

0xe168,	// (0x0008d35a) list_single_graphic_popup_conf_pane_g1

0xe170,	// (0x0008d362) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008e596) list_single_graphic_popup_conf_pane_g

0xe178,	// (0x0008d36a) list_single_graphic_popup_conf_pane_t1

0xe186,	// (0x0008d378) linegrid_cams_pane_g1

0x7599,	// (0x0008678b) linegrid_cams_pane_g2

0xd9ce,	// (0x0008cbc0) linegrid_cams_pane_g3

0xe18f,	// (0x0008d381) linegrid_cams_pane_g4

0x75a2,	// (0x00086794) linegrid_cams_pane_g5

0x75ab,	// (0x0008679d) linegrid_cams_pane_g6

0xda54,	// (0x0008cc46) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0008e59b) linegrid_cams_pane_g

0xe198,	// (0x0008d38a) popup_clock_analogue_window

0xe198,	// (0x0008d38a) popup_clock_digital_window

0x418f,	// (0x00083381) popup_phob_thumbnail_window

0xd916,	// (0x0008cb08) call_video_uplink_pane_g1

0xe1a1,	// (0x0008d393) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0008e5aa) call_video_uplink_pane_g

0xda21,	// (0x0008cc13) video_uplink_pane

0xe1a9,	// (0x0008d39b) mce_image_pane_g1

0x75b4,	// (0x000867a6) mce_image_pane_g2

0x75bc,	// (0x000867ae) mce_image_pane_g3

0x75c4,	// (0x000867b6) mce_image_pane_g4

0x75cc,	// (0x000867be) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0008e5af) mce_image_pane_g

0xe1b3,	// (0x0008d3a5) control_top_pane_stacon_cp01_ParamLimits

0xe1b3,	// (0x0008d3a5) control_top_pane_stacon_cp01

0xe1c7,	// (0x0008d3b9) uni_indicator_pane_stacon_cp01_ParamLimits

0xe1c7,	// (0x0008d3b9) uni_indicator_pane_stacon_cp01

0xe1d8,	// (0x0008d3ca) bg_popup_sub_pane_cp03

0x75d4,	// (0x000867c6) chi_dic_find_pane

0x75dc,	// (0x000867ce) listscroll_chi_dic_pane

0x75e5,	// (0x000867d7) main_pane_chidic_g1

0x75f8,	// (0x000867ea) chi_dic_find_pane_t1

0xe1e2,	// (0x0008d3d4) find_chidic_pane

0xe1eb,	// (0x0008d3dd) chi_dic_list_pane_ParamLimits

0xe1eb,	// (0x0008d3dd) chi_dic_list_pane

0xe1fc,	// (0x0008d3ee) scroll_pane_cp020

0x7606,	// (0x000867f8) find_chidic_pane_t1

0x418f,	// (0x00083381) input_focus_pane_cp06

0x7615,	// (0x00086807) list_chi_dic_pane_ParamLimits

0x7615,	// (0x00086807) list_chi_dic_pane

0xe204,	// (0x0008d3f6) list_chi_dic_pane_t1_ParamLimits

0xe204,	// (0x0008d3f6) list_chi_dic_pane_t1

0x418f,	// (0x00083381) list_highlight_pane_cp020

0xe217,	// (0x0008d409) bg_cale_heading_pane_g1

0x7636,	// (0x00086828) bg_cale_heading_pane_g2

0x763e,	// (0x00086830) bg_cale_heading_pane_g3

0x7646,	// (0x00086838) bg_cale_heading_pane_g4

0x7650,	// (0x00086842) bg_cale_heading_pane_g5

0x765a,	// (0x0008684c) bg_cale_heading_pane_g6

0x7662,	// (0x00086854) bg_cale_heading_pane_g7

0x766a,	// (0x0008685c) bg_cale_heading_pane_g8

0x7674,	// (0x00086866) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0008e5ba) bg_cale_heading_pane_g

0xe217,	// (0x0008d409) bg_cale_side_pane_g1

0x767e,	// (0x00086870) bg_cale_side_pane_g2

0x7688,	// (0x0008687a) bg_cale_side_pane_g3

0x7692,	// (0x00086884) bg_cale_side_pane_g4

0x769c,	// (0x0008688e) bg_cale_side_pane_g5

0x76a6,	// (0x00086898) bg_cale_side_pane_g6

0x76b0,	// (0x000868a2) bg_cale_side_pane_g7

0x76ba,	// (0x000868ac) bg_cale_side_pane_g8

0x76c2,	// (0x000868b4) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0008e5cd) bg_cale_side_pane_g

0x76ca,	// (0x000868bc) popup_call_status_window_ParamLimits

0x76ca,	// (0x000868bc) popup_call_status_window

0xe21f,	// (0x0008d411) stacon_top_pane

0xe227,	// (0x0008d419) status_pane_ParamLimits

0xe227,	// (0x0008d419) status_pane

0xe23c,	// (0x0008d42e) status_small_pane

0xe244,	// (0x0008d436) control_pane

0x418f,	// (0x00083381) stacon_bottom_pane

0xe24c,	// (0x0008d43e) list_single_mce_smart_pane_t1_ParamLimits

0xe24c,	// (0x0008d43e) list_single_mce_smart_pane_t1

0xe25f,	// (0x0008d451) list_single_mce_smart_pane_t2_ParamLimits

0xe25f,	// (0x0008d451) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0008e5e0) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0008e5e0) list_single_mce_smart_pane_t

0x76d6,	// (0x000868c8) compass_pane

0x76e2,	// (0x000868d4) main_location2_pane_t1

0x76f6,	// (0x000868e8) main_location2_pane_t2

0x770a,	// (0x000868fc) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0008e5e5) main_location2_pane_t

0xe27e,	// (0x0008d470) compass_pane_g1_ParamLimits

0xe27e,	// (0x0008d470) compass_pane_g1

0x7754,	// (0x00086946) compass_pane_t1

0x7763,	// (0x00086955) compass_pane_t2

0x0005,

0xf3fc,	// (0x0008e5ee) compass_pane_t

0x77ae,	// (0x000869a0) text_secondary_cp61

0xe292,	// (0x0008d484) navi_pane_cams_g5

0xe2b5,	// (0x0008d4a7) navi_pane_im_t1

0xe2c3,	// (0x0008d4b5) navi_pane_mp_g1_ParamLimits

0xe2c3,	// (0x0008d4b5) navi_pane_mp_g1

0xe2d7,	// (0x0008d4c9) navi_pane_mp_g2_ParamLimits

0xe2d7,	// (0x0008d4c9) navi_pane_mp_g2

0xe2e3,	// (0x0008d4d5) navi_pane_mp_g3_ParamLimits

0xe2e3,	// (0x0008d4d5) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0008e602) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0008e602) navi_pane_mp_g

0xe2ef,	// (0x0008d4e1) navi_pane_mp_t1

0xe2fd,	// (0x0008d4ef) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0008e609) navi_pane_mp_t

0xe339,	// (0x0008d52b) navi_pane_vt_g1

0xe2ef,	// (0x0008d4e1) navi_pane_vt_t1

0xe341,	// (0x0008d533) navi_slider_pane

0xe349,	// (0x0008d53b) zooming_pane

0xe351,	// (0x0008d543) navi_slider_pane_g1

0x78c5,	// (0x00086ab7) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0008e610) navi_slider_pane_g

0xe375,	// (0x0008d567) aid_levels_zoom

0xe37d,	// (0x0008d56f) zooming_pane_g1

0xe385,	// (0x0008d577) zooming_pane_g2

0xe385,	// (0x0008d577) zooming_pane_g3

0x0002,

0xf42d,	// (0x0008e61f) zooming_pane_g

0xe38d,	// (0x0008d57f) level_10_zoom

0xe396,	// (0x0008d588) level_11_zoom

0xe39f,	// (0x0008d591) level_1_zoom

0xe3a8,	// (0x0008d59a) level_2_zoom

0xe3b1,	// (0x0008d5a3) level_3_zoom

0xe3ba,	// (0x0008d5ac) level_4_zoom

0xe3c3,	// (0x0008d5b5) level_5_zoom

0xe3cc,	// (0x0008d5be) level_6_zoom

0xe3d5,	// (0x0008d5c7) level_7_zoom

0xe3de,	// (0x0008d5d0) level_8_zoom

0xe3e7,	// (0x0008d5d9) level_9_zoom

0xe3f8,	// (0x0008d5ea) popup_phob_thumbnail_window_g1

0xe400,	// (0x0008d5f2) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0008e626) popup_phob_thumbnail_window_g

0x0b74,	// (0x0007fd66) level_1_location

0x0b7c,	// (0x0007fd6e) level_2_location

0x0b84,	// (0x0007fd76) level_3_location

0x0b8c,	// (0x0007fd7e) level_4_location

0xe349,	// (0x0008d53b) level_5_location

0x78d7,	// (0x00086ac9) mce_icon_pane_g1

0x78df,	// (0x00086ad1) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0008e62b) mce_icon_pane_g

0x78e7,	// (0x00086ad9) main_mup_pane_g1_ParamLimits

0x78e7,	// (0x00086ad9) main_mup_pane_g1

0x78ff,	// (0x00086af1) main_mup_pane_g2_ParamLimits

0x78ff,	// (0x00086af1) main_mup_pane_g2

0x791b,	// (0x00086b0d) main_mup_pane_g3_ParamLimits

0x791b,	// (0x00086b0d) main_mup_pane_g3

0x7937,	// (0x00086b29) main_mup_pane_g4_ParamLimits

0x7937,	// (0x00086b29) main_mup_pane_g4

0x7953,	// (0x00086b45) main_mup_pane_g5_ParamLimits

0x7953,	// (0x00086b45) main_mup_pane_g5

0x7974,	// (0x00086b66) main_mup_pane_g6_ParamLimits

0x7974,	// (0x00086b66) main_mup_pane_g6

0x7990,	// (0x00086b82) main_mup_pane_g7_ParamLimits

0x7990,	// (0x00086b82) main_mup_pane_g7

0x79ac,	// (0x00086b9e) main_mup_pane_g8_ParamLimits

0x79ac,	// (0x00086b9e) main_mup_pane_g8

0x79c8,	// (0x00086bba) main_mup_pane_g9_ParamLimits

0x79c8,	// (0x00086bba) main_mup_pane_g9

0x79e7,	// (0x00086bd9) main_mup_pane_g10_ParamLimits

0x79e7,	// (0x00086bd9) main_mup_pane_g10

0x7a06,	// (0x00086bf8) main_mup_pane_g11_ParamLimits

0x7a06,	// (0x00086bf8) main_mup_pane_g11

0x7a1e,	// (0x00086c10) main_mup_pane_g12_ParamLimits

0x7a1e,	// (0x00086c10) main_mup_pane_g12

0x7a2c,	// (0x00086c1e) main_mup_pane_g13_ParamLimits

0x7a2c,	// (0x00086c1e) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0008e630) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0008e630) main_mup_pane_g

0x7a42,	// (0x00086c34) main_mup_pane_t1_ParamLimits

0x7a42,	// (0x00086c34) main_mup_pane_t1

0x7a5f,	// (0x00086c51) main_mup_pane_t2_ParamLimits

0x7a5f,	// (0x00086c51) main_mup_pane_t2

0x7a79,	// (0x00086c6b) main_mup_pane_t3_ParamLimits

0x7a79,	// (0x00086c6b) main_mup_pane_t3

0x7a93,	// (0x00086c85) main_mup_pane_t4_ParamLimits

0x7a93,	// (0x00086c85) main_mup_pane_t4

0x7aa5,	// (0x00086c97) main_mup_pane_t5_ParamLimits

0x7aa5,	// (0x00086c97) main_mup_pane_t5

0x7ab7,	// (0x00086ca9) main_mup_pane_t6_ParamLimits

0x7ab7,	// (0x00086ca9) main_mup_pane_t6

0x0005,

0xf459,	// (0x0008e64b) main_mup_pane_t_ParamLimits

0xf459,	// (0x0008e64b) main_mup_pane_t

0x7acd,	// (0x00086cbf) mup_progress_pane_ParamLimits

0x7acd,	// (0x00086cbf) mup_progress_pane

0x7ad9,	// (0x00086ccb) mup_visualizer_pane_ParamLimits

0x7ad9,	// (0x00086ccb) mup_visualizer_pane

0x7b17,	// (0x00086d09) mup_volume_pane_ParamLimits

0x7b17,	// (0x00086d09) mup_volume_pane

0xe055,	// (0x0008d247) mup_visualizer_pane_g1_ParamLimits

0xe055,	// (0x0008d247) mup_visualizer_pane_g1

0xe055,	// (0x0008d247) mup_visualizer_pane_g2_ParamLimits

0xe055,	// (0x0008d247) mup_visualizer_pane_g2

0xe27e,	// (0x0008d470) mup_visualizer_pane_g3_ParamLimits

0xe27e,	// (0x0008d470) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0008e658) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0008e658) mup_visualizer_pane_g

0xd916,	// (0x0008cb08) mup_volume_pane_g1

0xe410,	// (0x0008d602) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0008e65f) mup_volume_pane_g

0xd916,	// (0x0008cb08) mup_progress_pane_g1

0xe419,	// (0x0008d60b) mup_progress_pane_g2

0xe422,	// (0x0008d614) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0008e664) mup_progress_pane_g

0x418f,	// (0x00083381) bg_popup_window_pane_cp05

0xe42b,	// (0x0008d61d) heading_pane_cp02_ParamLimits

0xe42b,	// (0x0008d61d) heading_pane_cp02

0xe445,	// (0x0008d637) list_popup_blid_pane

0xe44d,	// (0x0008d63f) list_blid_sat_info_pane_ParamLimits

0xe44d,	// (0x0008d63f) list_blid_sat_info_pane

0xe460,	// (0x0008d652) list_blid_sat_info_pane_g1

0xe468,	// (0x0008d65a) list_blid_sat_info_pane_t1

0x7c22,	// (0x00086e14) mup_equalizer_pane_ParamLimits

0x7c22,	// (0x00086e14) mup_equalizer_pane

0x7c43,	// (0x00086e35) mup_equalizer_pane_cp1_ParamLimits

0x7c43,	// (0x00086e35) mup_equalizer_pane_cp1

0x7c64,	// (0x00086e56) mup_equalizer_pane_cp2_ParamLimits

0x7c64,	// (0x00086e56) mup_equalizer_pane_cp2

0x7c85,	// (0x00086e77) mup_equalizer_pane_cp3_ParamLimits

0x7c85,	// (0x00086e77) mup_equalizer_pane_cp3

0x7ca6,	// (0x00086e98) mup_equalizer_pane_cp4_ParamLimits

0x7ca6,	// (0x00086e98) mup_equalizer_pane_cp4

0x7cc7,	// (0x00086eb9) mup_equalizer_pane_cp5

0x7cdd,	// (0x00086ecf) mup_equalizer_pane_cp6

0x7cf5,	// (0x00086ee7) mup_equalizer_pane_cp7

0x0a92,	// (0x0007fc84) bg_popup_call_poc_act_pane_g9

0x0a9a,	// (0x0007fc8c) bg_popup_call_poc_act_pane_g10

0x0aa2,	// (0x0007fc94) bg_popup_call_poc_act_pane_g11

0x000a,

0x43ea,	// (0x000835dc) mup_scale_pane

0xd916,	// (0x0008cb08) mup_scale_pane_g1

0xe476,	// (0x0008d668) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0008e680) mup_scale_pane_g

0xe49a,	// (0x0008d68c) msg_data_pane

0xe4a2,	// (0x0008d694) scroll_pane_cp017

0x7d1f,	// (0x00086f11) bg_list_pane_cp04_ParamLimits

0x7d1f,	// (0x00086f11) bg_list_pane_cp04

0xe4aa,	// (0x0008d69c) msg_data_pane_g1

0x7d3f,	// (0x00086f31) msg_data_pane_g2

0x75bc,	// (0x000867ae) msg_data_pane_g3

0x7d47,	// (0x00086f39) msg_data_pane_g4

0x7d4f,	// (0x00086f41) msg_data_pane_g5

0x7d57,	// (0x00086f49) msg_data_pane_g6

0x7d5f,	// (0x00086f51) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0008e68f) msg_data_pane_g

0x7d67,	// (0x00086f59) msg_text_pane_ParamLimits

0x7d67,	// (0x00086f59) msg_text_pane

0x7db1,	// (0x00086fa3) qrid_highlight_pane_cp011_ParamLimits

0x7db1,	// (0x00086fa3) qrid_highlight_pane_cp011

0x418f,	// (0x00083381) msg_body_pane

0x418f,	// (0x00083381) msg_header_pane

0xe4bb,	// (0x0008d6ad) input_focus_pane_cp07

0x7ddb,	// (0x00086fcd) msg_header_pane_t1_ParamLimits

0x7ddb,	// (0x00086fcd) msg_header_pane_t1

0x7def,	// (0x00086fe1) msg_header_pane_t2_ParamLimits

0x7def,	// (0x00086fe1) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0008e6a3) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0008e6a3) msg_header_pane_t

0xe4d0,	// (0x0008d6c2) msg_body_pane_g1

0x7e01,	// (0x00086ff3) msg_body_pane_t1_ParamLimits

0x7e01,	// (0x00086ff3) msg_body_pane_t1

0x7e32,	// (0x00087024) msg_body_pane_t2_ParamLimits

0x7e32,	// (0x00087024) msg_body_pane_t2

0x7e44,	// (0x00087036) msg_body_pane_t3_ParamLimits

0x7e44,	// (0x00087036) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0008e6a8) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0008e6a8) msg_body_pane_t

0x7ea8,	// (0x0008709a) main_viewer_pane_g1_ParamLimits

0x7ea8,	// (0x0008709a) main_viewer_pane_g1

0x7eb4,	// (0x000870a6) main_viewer_pane_g2_ParamLimits

0x7eb4,	// (0x000870a6) main_viewer_pane_g2

0x7ec0,	// (0x000870b2) main_viewer_pane_g3_ParamLimits

0x7ec0,	// (0x000870b2) main_viewer_pane_g3

0x7ed1,	// (0x000870c3) main_viewer_pane_g4_ParamLimits

0x7ed1,	// (0x000870c3) main_viewer_pane_g4

0x7ee2,	// (0x000870d4) main_viewer_pane_g5_ParamLimits

0x7ee2,	// (0x000870d4) main_viewer_pane_g5

0x7ee2,	// (0x000870d4) main_viewer_pane_g7_ParamLimits

0x7ee2,	// (0x000870d4) main_viewer_pane_g7

0x7ef4,	// (0x000870e6) main_viewer_pane_g8_ParamLimits

0x7ef4,	// (0x000870e6) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0008e6b8) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0008e6b8) main_viewer_pane_g

0xe4d8,	// (0x0008d6ca) viewer_content_pane_ParamLimits

0xe4d8,	// (0x0008d6ca) viewer_content_pane

0x7f2c,	// (0x0008711e) main_postcard_pane_g1_ParamLimits

0x7f2c,	// (0x0008711e) main_postcard_pane_g1

0x7f3a,	// (0x0008712c) main_postcard_pane_g2_ParamLimits

0x7f3a,	// (0x0008712c) main_postcard_pane_g2

0x7f48,	// (0x0008713a) main_postcard_pane_g3_ParamLimits

0x7f48,	// (0x0008713a) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0008e6c9) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0008e6c9) main_postcard_pane_g

0x7f58,	// (0x0008714a) main_postcard_pane_g4

0x0c94,	// (0x0007fe86) smil_status_volume_pane_g2

0x7f84,	// (0x00087176) postcard_pane_ParamLimits

0x7f84,	// (0x00087176) postcard_pane

0xe055,	// (0x0008d247) postcard_pane_g1_ParamLimits

0xe055,	// (0x0008d247) postcard_pane_g1

0x7fb6,	// (0x000871a8) postcard_pane_g2_ParamLimits

0x7fb6,	// (0x000871a8) postcard_pane_g2

0x7fc2,	// (0x000871b4) postcard_pane_g3_ParamLimits

0x7fc2,	// (0x000871b4) postcard_pane_g3

0xe4e6,	// (0x0008d6d8) postcard_pane_g4_ParamLimits

0xe4e6,	// (0x0008d6d8) postcard_pane_g4

0x7fce,	// (0x000871c0) postcard_pane_g5_ParamLimits

0x7fce,	// (0x000871c0) postcard_pane_g5

0x7fda,	// (0x000871cc) postcard_pane_g6_ParamLimits

0x7fda,	// (0x000871cc) postcard_pane_g6

0xe4f4,	// (0x0008d6e6) postcard_pane_g7_ParamLimits

0xe4f4,	// (0x0008d6e6) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0008e6d6) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0008e6d6) postcard_pane_g

0x7fe6,	// (0x000871d8) main_mp2_pane_g1_ParamLimits

0x7fe6,	// (0x000871d8) main_mp2_pane_g1

0x7ff2,	// (0x000871e4) main_mp2_pane_g2_ParamLimits

0x7ff2,	// (0x000871e4) main_mp2_pane_g2

0x7ffe,	// (0x000871f0) main_mp2_pane_g3_ParamLimits

0x7ffe,	// (0x000871f0) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0008e6e5) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0008e6e5) main_mp2_pane_g

0x800a,	// (0x000871fc) main_mp2_pane_t1_ParamLimits

0x800a,	// (0x000871fc) main_mp2_pane_t1

0x8021,	// (0x00087213) main_mp2_pane_t2_ParamLimits

0x8021,	// (0x00087213) main_mp2_pane_t2

0x8033,	// (0x00087225) main_mp2_pane_t3_ParamLimits

0x8033,	// (0x00087225) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0008e6ec) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0008e6ec) main_mp2_pane_t

0xe502,	// (0x0008d6f4) pec_content_pane_ParamLimits

0xe502,	// (0x0008d6f4) pec_content_pane

0xdc21,	// (0x0008ce13) scroll_pane_cp015

0xe514,	// (0x0008d706) pec_attribute_pane_ParamLimits

0xe514,	// (0x0008d706) pec_attribute_pane

0x8045,	// (0x00087237) pec_content_pane_g1_ParamLimits

0x8045,	// (0x00087237) pec_content_pane_g1

0xe524,	// (0x0008d716) pec_content_pane_t1_ParamLimits

0xe524,	// (0x0008d716) pec_content_pane_t1

0xe536,	// (0x0008d728) pec_content_pane_t2_ParamLimits

0xe536,	// (0x0008d728) pec_content_pane_t2

0x0001,

0xf501,	// (0x0008e6f3) pec_content_pane_t_ParamLimits

0xf501,	// (0x0008e6f3) pec_content_pane_t

0x8051,	// (0x00087243) list_single_graphic_pane_cp01_ParamLimits

0x8051,	// (0x00087243) list_single_graphic_pane_cp01

0x43ea,	// (0x000835dc) bg_popup_sub_pane_cp04

0xe548,	// (0x0008d73a) popup_mup_playback_window_g1

0xe554,	// (0x0008d746) popup_mup_playback_window_t1

0xe569,	// (0x0008d75b) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0008e6f8) popup_mup_playback_window_t

0xe5a0,	// (0x0008d792) main_image_pane_g1_ParamLimits

0xe5a0,	// (0x0008d792) main_image_pane_g1

0xe5e3,	// (0x0008d7d5) scroll_pane_cp018_ParamLimits

0xe5e3,	// (0x0008d7d5) scroll_pane_cp018

0xe5fb,	// (0x0008d7ed) scroll_pane_cp016_ParamLimits

0xe5fb,	// (0x0008d7ed) scroll_pane_cp016

0x80f5,	// (0x000872e7) smil2_image_pane_ParamLimits

0x80f5,	// (0x000872e7) smil2_image_pane

0x8129,	// (0x0008731b) smil2_root_pane_ParamLimits

0x8129,	// (0x0008731b) smil2_root_pane

0x8155,	// (0x00087347) smil2_text_pane_ParamLimits

0x8155,	// (0x00087347) smil2_text_pane

0x418f,	// (0x00083381) bg_list_pane_cp06

0xe637,	// (0x0008d829) grid_radio_pane

0x418f,	// (0x00083381) bg_popup_window_pane_cp06

0xe63f,	// (0x0008d831) main_fmradio_pane_t1

0xe0cc,	// (0x0008d2be) heading_pane_cp04

0xe64d,	// (0x0008d83f) main_fmradio_pane_t2

0x0aaa,	// (0x0007fc9c) popup_cale_lunar_info_window_g1

0xe65b,	// (0x0008d84d) main_fmradio_pane_t3

0x0ab2,	// (0x0007fca4) popup_cale_lunar_info_window_g2

0xe669,	// (0x0008d85b) main_fmradio_pane_t4

0x0001,

0xe677,	// (0x0008d869) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0008e7d3) popup_cale_lunar_info_window_g

0xf51b,	// (0x0008e70d) main_fmradio_pane_t

0xe685,	// (0x0008d877) wait_bar_pane_cp03

0xe68d,	// (0x0008d87f) cell_fmradio_pane_ParamLimits

0xe68d,	// (0x0008d87f) cell_fmradio_pane

0xe4f4,	// (0x0008d6e6) cell_fmradio_pane_g1_ParamLimits

0xe4f4,	// (0x0008d6e6) cell_fmradio_pane_g1

0x418f,	// (0x00083381) grid_highlight_pane_cp011

0xe6a0,	// (0x0008d892) poc_content_pane_ParamLimits

0xe6a0,	// (0x0008d892) poc_content_pane

0xe6b2,	// (0x0008d8a4) scroll_pane_cp019

0x8195,	// (0x00087387) popup_call_poc_act_window_ParamLimits

0x8195,	// (0x00087387) popup_call_poc_act_window

0x81a2,	// (0x00087394) popup_call_poc_inact_window_ParamLimits

0x81a2,	// (0x00087394) popup_call_poc_inact_window

0xf5b8,	// (0x0008e7aa) bg_popup_call_poc_act_pane_g

0x0a1a,	// (0x0007fc0c) bg_popup_call_poc_inact_pane_g1

0x0a22,	// (0x0007fc14) bg_popup_call_poc_inact_pane_g2

0xe6ba,	// (0x0008d8ac) popup_call_poc_act_window_g2

0x0a2a,	// (0x0007fc1c) bg_popup_call_poc_inact_pane_g3

0x0a32,	// (0x0007fc24) bg_popup_call_poc_inact_pane_g4

0x0a3a,	// (0x0007fc2c) bg_popup_call_poc_inact_pane_g5

0xe6c2,	// (0x0008d8b4) popup_call_poc_act_window_t1_ParamLimits

0xe6c2,	// (0x0008d8b4) popup_call_poc_act_window_t1

0xe6ea,	// (0x0008d8dc) popup_call_poc_act_window_t2_ParamLimits

0xe6ea,	// (0x0008d8dc) popup_call_poc_act_window_t2

0xe712,	// (0x0008d904) popup_call_poc_act_window_t3_ParamLimits

0xe712,	// (0x0008d904) popup_call_poc_act_window_t3

0xe73a,	// (0x0008d92c) popup_call_poc_act_window_t4_ParamLimits

0xe73a,	// (0x0008d92c) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0008e718) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0008e718) popup_call_poc_act_window_t

0x0a42,	// (0x0007fc34) bg_popup_call_poc_inact_pane_g6

0x0a4a,	// (0x0007fc3c) bg_popup_call_poc_inact_pane_g7

0x0a52,	// (0x0007fc44) bg_popup_call_poc_inact_pane_g8

0xe74c,	// (0x0008d93e) popup_call_poc_inact_window_g2

0x0a5a,	// (0x0007fc4c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0008e797) bg_popup_call_poc_inact_pane_g

0xe754,	// (0x0008d946) popup_call_poc_inact_window_t1_ParamLimits

0xe754,	// (0x0008d946) popup_call_poc_inact_window_t1

0xe769,	// (0x0008d95b) popup_call_poc_inact_window_t2_ParamLimits

0xe769,	// (0x0008d95b) popup_call_poc_inact_window_t2

0xe77e,	// (0x0008d970) popup_call_poc_inact_window_t3_ParamLimits

0xe77e,	// (0x0008d970) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0008e721) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0008e721) popup_call_poc_inact_window_t

0x0c1a,	// (0x0007fe0c) context_pane_ParamLimits

0x8789,	// (0x0008797b) signal_pane_ParamLimits

0xe349,	// (0x0008d53b) main_call2_pane

0x0c08,	// (0x0007fdfa) popup_phob_thumbnail2_window_ParamLimits

0x0c08,	// (0x0007fdfa) popup_phob_thumbnail2_window

0x7e56,	// (0x00087048) aid_hotspot_pointer_arrow_pane

0x7e5e,	// (0x00087050) aid_hotspot_pointer_hand_pane

0x84c7,	// (0x000876b9) phob_pre_status_pane_g5

0x6106,	// (0x000852f8) cams_zoom_pane_ParamLimits

0x6112,	// (0x00085304) image_vga_pane_ParamLimits

0x6121,	// (0x00085313) main_camera_pane_g1_ParamLimits

0x612f,	// (0x00085321) main_camera_pane_g2_ParamLimits

0x613d,	// (0x0008532f) main_camera_pane_g3_ParamLimits

0x6149,	// (0x0008533b) main_camera_pane_g4_ParamLimits

0x6155,	// (0x00085347) main_camera_pane_g5_ParamLimits

0x6161,	// (0x00085353) main_camera_pane_g6_ParamLimits

0x616d,	// (0x0008535f) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0008e420) main_camera_pane_g_ParamLimits

0x6179,	// (0x0008536b) main_camera_pane_t1_ParamLimits

0x618b,	// (0x0008537d) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0008e431) main_camera_pane_t_ParamLimits

0x43ea,	// (0x000835dc) bg_popup_preview_window_pane_cp01_ParamLimits

0x43ea,	// (0x000835dc) bg_popup_preview_window_pane_cp01

0xe793,	// (0x0008d985) popup_phob_thumbnail2_window_g1_ParamLimits

0xe793,	// (0x0008d985) popup_phob_thumbnail2_window_g1

0x418f,	// (0x00083381) call2_cli_visual_pane

0x81be,	// (0x000873b0) popup_call2_audio_conf_window_ParamLimits

0x81be,	// (0x000873b0) popup_call2_audio_conf_window

0x81d3,	// (0x000873c5) popup_call2_audio_first_window_ParamLimits

0x81d3,	// (0x000873c5) popup_call2_audio_first_window

0x8271,	// (0x00087463) popup_call2_audio_in_window_ParamLimits

0x8271,	// (0x00087463) popup_call2_audio_in_window

0x82b3,	// (0x000874a5) popup_call2_audio_out_window_ParamLimits

0x82b3,	// (0x000874a5) popup_call2_audio_out_window

0x8315,	// (0x00087507) popup_call2_audio_second_window_ParamLimits

0x8315,	// (0x00087507) popup_call2_audio_second_window

0x8373,	// (0x00087565) popup_call2_audio_wait_window_ParamLimits

0x8373,	// (0x00087565) popup_call2_audio_wait_window

0x418f,	// (0x00083381) bg_popup_call2_act_pane_cp03

0x43cc,	// (0x000835be) list_conf_pane_cp

0xe79f,	// (0x0008d991) popup_call2_audio_conf_window_t1

0xe7ad,	// (0x0008d99f) list_single_graphic_popup_conf2_pane_ParamLimits

0xe7ad,	// (0x0008d99f) list_single_graphic_popup_conf2_pane

0xe15f,	// (0x0008d351) list_highlight_pane_cp04

0xe7c0,	// (0x0008d9b2) list_single_graphic_popup_conf2_pane_g1

0xe170,	// (0x0008d362) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0008e728) list_single_graphic_popup_conf2_pane_g

0xe7ca,	// (0x0008d9bc) list_single_graphic_popup_conf2_pane_t1

0xe7d8,	// (0x0008d9ca) bg_popup_call2_act_pane_cp01_ParamLimits

0xe7d8,	// (0x0008d9ca) bg_popup_call2_act_pane_cp01

0xe862,	// (0x0008da54) call_type_pane_cp05_ParamLimits

0xe862,	// (0x0008da54) call_type_pane_cp05

0xe8b6,	// (0x0008daa8) popup_call2_audio_second_window_g1_ParamLimits

0xe8b6,	// (0x0008daa8) popup_call2_audio_second_window_g1

0xe90a,	// (0x0008dafc) popup_call2_audio_second_window_g2_ParamLimits

0xe90a,	// (0x0008dafc) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0008e72d) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0008e72d) popup_call2_audio_second_window_g

0xe96f,	// (0x0008db61) popup_call2_audio_second_window_t1_ParamLimits

0xe96f,	// (0x0008db61) popup_call2_audio_second_window_t1

0xea2a,	// (0x0008dc1c) popup_call2_audio_second_window_t2_ParamLimits

0xea2a,	// (0x0008dc1c) popup_call2_audio_second_window_t2

0xea7d,	// (0x0008dc6f) popup_call2_audio_second_window_t3_ParamLimits

0xea7d,	// (0x0008dc6f) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0008e734) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0008e734) popup_call2_audio_second_window_t

0x418f,	// (0x00083381) bg_popup_call2_in_pane_cp02

0x4199,	// (0x0008338b) call_type_pane_cp04

0x41a1,	// (0x00083393) popup_call2_audio_wait_window_g1

0x41a9,	// (0x0008339b) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008e30d) popup_call2_audio_wait_window_g

0x41b1,	// (0x000833a3) popup_call2_audio_wait_window_t3

0xeb70,	// (0x0008dd62) bg_popup_call2_act_pane_ParamLimits

0xeb70,	// (0x0008dd62) bg_popup_call2_act_pane

0xec30,	// (0x0008de22) call_type_pane_cp03_ParamLimits

0xec30,	// (0x0008de22) call_type_pane_cp03

0xec94,	// (0x0008de86) popup_call2_audio_first_window_g1_ParamLimits

0xec94,	// (0x0008de86) popup_call2_audio_first_window_g1

0xed04,	// (0x0008def6) popup_call2_audio_first_window_g2_ParamLimits

0xed04,	// (0x0008def6) popup_call2_audio_first_window_g2

0xe055,	// (0x0008d247) popup_call2_audio_first_window_g3_ParamLimits

0xe055,	// (0x0008d247) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0008e73d) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0008e73d) popup_call2_audio_first_window_g

0xede2,	// (0x0008dfd4) popup_call2_audio_first_window_t1_ParamLimits

0xede2,	// (0x0008dfd4) popup_call2_audio_first_window_t1

0xeee5,	// (0x0008e0d7) popup_call2_audio_first_window_t4_ParamLimits

0xeee5,	// (0x0008e0d7) popup_call2_audio_first_window_t4

0xefc8,	// (0x0008e1ba) popup_call2_audio_first_window_t5_ParamLimits

0xefc8,	// (0x0008e1ba) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0008e748) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0008e748) popup_call2_audio_first_window_t

0x43e2,	// (0x000835d4) bg_popup_call2_act_pane_g1

0x0aba,	// (0x0007fcac) popup_cale_lunar_info_window_t1

0x0ac8,	// (0x0007fcba) popup_cale_lunar_info_window_t2

0x0ad6,	// (0x0007fcc8) popup_cale_lunar_info_window_t3

0x418f,	// (0x00083381) bg_popup_call2_bubble_pane

0x0546,	// (0x0007f738) bg_popup_call2_in_pane_cp01_ParamLimits

0x0546,	// (0x0007f738) bg_popup_call2_in_pane_cp01

0x3e6b,	// (0x0008305d) call_type_pane_cp02

0x058e,	// (0x0007f780) popup_call2_audio_out_window_g1_ParamLimits

0x058e,	// (0x0007f780) popup_call2_audio_out_window_g1

0x05ba,	// (0x0007f7ac) popup_call2_audio_out_window_g2_ParamLimits

0x05ba,	// (0x0007f7ac) popup_call2_audio_out_window_g2

0x05e2,	// (0x0007f7d4) popup_call2_audio_out_window_g3_ParamLimits

0x05e2,	// (0x0007f7d4) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0008e751) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0008e751) popup_call2_audio_out_window_g

0x061d,	// (0x0007f80f) popup_call2_audio_out_window_t1_ParamLimits

0x061d,	// (0x0007f80f) popup_call2_audio_out_window_t1

0x067c,	// (0x0007f86e) popup_call2_audio_out_window_t2_ParamLimits

0x067c,	// (0x0007f86e) popup_call2_audio_out_window_t2

0x06d0,	// (0x0007f8c2) popup_call2_audio_out_window_t3_ParamLimits

0x06d0,	// (0x0007f8c2) popup_call2_audio_out_window_t3

0x06e6,	// (0x0007f8d8) popup_call2_audio_out_window_t4_ParamLimits

0x06e6,	// (0x0007f8d8) popup_call2_audio_out_window_t4

0x06fc,	// (0x0007f8ee) popup_call2_audio_out_window_t5_ParamLimits

0x06fc,	// (0x0007f8ee) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0008e75a) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0008e75a) popup_call2_audio_out_window_t

0x0760,	// (0x0007f952) bg_popup_call2_in_pane_ParamLimits

0x0760,	// (0x0007f952) bg_popup_call2_in_pane

0x07bc,	// (0x0007f9ae) popup_call2_audio_in_window_g1_ParamLimits

0x07bc,	// (0x0007f9ae) popup_call2_audio_in_window_g1

0x07f4,	// (0x0007f9e6) popup_call2_audio_in_window_g2_ParamLimits

0x07f4,	// (0x0007f9e6) popup_call2_audio_in_window_g2

0x082c,	// (0x0007fa1e) popup_call2_audio_in_window_g3_ParamLimits

0x082c,	// (0x0007fa1e) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0008e767) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0008e767) popup_call2_audio_in_window_g

0x0884,	// (0x0007fa76) popup_call2_audio_in_window_t1_ParamLimits

0x0884,	// (0x0007fa76) popup_call2_audio_in_window_t1

0x0904,	// (0x0007faf6) popup_call2_audio_in_window_t2_ParamLimits

0x0904,	// (0x0007faf6) popup_call2_audio_in_window_t2

0x0984,	// (0x0007fb76) popup_call2_audio_in_window_t3_ParamLimits

0x0984,	// (0x0007fb76) popup_call2_audio_in_window_t3

0x099e,	// (0x0007fb90) popup_call2_audio_in_window_t4_ParamLimits

0x099e,	// (0x0007fb90) popup_call2_audio_in_window_t4

0x09b0,	// (0x0007fba2) popup_call2_audio_in_window_t5_ParamLimits

0x09b0,	// (0x0007fba2) popup_call2_audio_in_window_t5

0x09c5,	// (0x0007fbb7) popup_call2_audio_in_window_t6_ParamLimits

0x09c5,	// (0x0007fbb7) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0008e770) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0008e770) popup_call2_audio_in_window_t

0x43e2,	// (0x000835d4) bg_popup_call2_in_pane_g1

0x0ae4,	// (0x0007fcd6) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0008e7d8) popup_cale_lunar_info_window_t

0x43ea,	// (0x000835dc) bg_popup_call2_rect_pane_ParamLimits

0x43ea,	// (0x000835dc) bg_popup_call2_rect_pane

0x418f,	// (0x00083381) call2_cli_visual_graphic_pane

0x418f,	// (0x00083381) call2_cli_visual_text_pane

0x8839,	// (0x00087a2b) smil_status_volume_pane_g3

0x0002,

0xd916,	// (0x0008cb08) call2_cli_visual_graphic_pane_g1

0xd916,	// (0x0008cb08) call2_cli_visual_graphic_pane_g2

0xd916,	// (0x0008cb08) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0008e77d) call2_cli_visual_graphic_pane_g

0x09da,	// (0x0007fbcc) bg_popup_call2_rect_pane_g1

0xd9b4,	// (0x0008cba6) bg_popup_call2_rect_pane_g2

0x09e2,	// (0x0007fbd4) bg_popup_call2_rect_pane_g3

0x09ea,	// (0x0007fbdc) bg_popup_call2_rect_pane_g4

0x09f2,	// (0x0007fbe4) bg_popup_call2_rect_pane_g5

0x09fa,	// (0x0007fbec) bg_popup_call2_rect_pane_g6

0x0a02,	// (0x0007fbf4) bg_popup_call2_rect_pane_g7

0x0a0a,	// (0x0007fbfc) bg_popup_call2_rect_pane_g8

0x0a12,	// (0x0007fc04) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0008e784) bg_popup_call2_rect_pane_g

0x0a1a,	// (0x0007fc0c) bg_popup_call2_bubble_pane_g1

0x0a22,	// (0x0007fc14) bg_popup_call2_bubble_pane_g2

0x0a2a,	// (0x0007fc1c) bg_popup_call2_bubble_pane_g3

0x0a32,	// (0x0007fc24) bg_popup_call2_bubble_pane_g4

0x0a3a,	// (0x0007fc2c) bg_popup_call2_bubble_pane_g5

0x0a42,	// (0x0007fc34) bg_popup_call2_bubble_pane_g6

0x0a4a,	// (0x0007fc3c) bg_popup_call2_bubble_pane_g7

0x0a52,	// (0x0007fc44) bg_popup_call2_bubble_pane_g8

0x0a5a,	// (0x0007fc4c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0008e797) bg_popup_call2_bubble_pane_g

0x5ca9,	// (0x00084e9b) aid_cale_week_size_cell_pane

0x619d,	// (0x0008538f) aid_cams_cif_uncrop_pane_ParamLimits

0x619d,	// (0x0008538f) aid_cams_cif_uncrop_pane

0x6300,	// (0x000854f2) aid_cams_size_cell_ParamLimits

0x6300,	// (0x000854f2) aid_cams_size_cell

0x630c,	// (0x000854fe) grid_cams_pane_ParamLimits

0x631a,	// (0x0008550c) linegrid_cams_pane_ParamLimits

0x6441,	// (0x00085633) call_video_pane_t1

0x6462,	// (0x00085654) call_video_pane_t2

0x0001,

0xf292,	// (0x0008e484) call_video_pane_t

0x69e2,	// (0x00085bd4) aid_cale_month_size_cell_pane_ParamLimits

0x69e2,	// (0x00085bd4) aid_cale_month_size_cell_pane

0xf62f,	// (0x0008e821) smil_status_volume_pane_g

0x8846,	// (0x00087a38) volume_smil_pane_ParamLimits

0x019c,	// (0x0007f38e) aid_popup2_width_pane

0x5b90,	// (0x00084d82) cell_qdial_pane_g4_ParamLimits

0x5b90,	// (0x00084d82) cell_qdial_pane_g4

0x7730,	// (0x00086922) aid_blid_cardinal_pane_ParamLimits

0x7740,	// (0x00086932) aid_blid_destination_pane_ParamLimits

0x7740,	// (0x00086932) aid_blid_destination_pane

0x43ea,	// (0x000835dc) bg_popup_call_poc_act_pane_ParamLimits

0x43ea,	// (0x000835dc) bg_popup_call_poc_act_pane

0x43ea,	// (0x000835dc) bg_popup_call_poc_inact_pane_ParamLimits

0x43ea,	// (0x000835dc) bg_popup_call_poc_inact_pane

0x0a6a,	// (0x0007fc5c) bg_popup_call_poc_act_pane_g1

0x0a72,	// (0x0007fc64) bg_popup_call_poc_act_pane_g2

0x0a7a,	// (0x0007fc6c) bg_popup_call_poc_act_pane_g3

0x0a32,	// (0x0007fc24) bg_popup_call_poc_act_pane_g4

0x0a3a,	// (0x0007fc2c) bg_popup_call_poc_act_pane_g5

0x0a82,	// (0x0007fc74) bg_popup_call_poc_act_pane_g6

0x0a4a,	// (0x0007fc3c) bg_popup_call_poc_act_pane_g7

0x0a8a,	// (0x0007fc7c) bg_popup_call_poc_act_pane_g8

0x418f,	// (0x00083381) main_usb_pane

0x0be3,	// (0x0007fdd5) popup_cale_lunar_info_window

0x6781,	// (0x00085973) im_reading_pane_t1_ParamLimits

0xdb79,	// (0x0008cd6b) list_im_pane_ParamLimits

0xdb8a,	// (0x0008cd7c) scroll_pane_cp07_ParamLimits

0x418f,	// (0x00083381) grid_highlight_pane_cp012

0x43ea,	// (0x000835dc) mup_scale_pane_ParamLimits

0xe055,	// (0x0008d247) main_usb_pane_g1_ParamLimits

0xe055,	// (0x0008d247) main_usb_pane_g1

0x83ea,	// (0x000875dc) main_usb_pane_g2_ParamLimits

0x83ea,	// (0x000875dc) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0008e7c1) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0008e7c1) main_usb_pane_g

0x83f6,	// (0x000875e8) main_usb_pane_t1_ParamLimits

0x83f6,	// (0x000875e8) main_usb_pane_t1

0x8408,	// (0x000875fa) main_usb_pane_t2_ParamLimits

0x8408,	// (0x000875fa) main_usb_pane_t2

0x841a,	// (0x0008760c) main_usb_pane_t3_ParamLimits

0x841a,	// (0x0008760c) main_usb_pane_t3

0x842c,	// (0x0008761e) main_usb_pane_t4_ParamLimits

0x842c,	// (0x0008761e) main_usb_pane_t4

0x843e,	// (0x00087630) main_usb_pane_t5_ParamLimits

0x843e,	// (0x00087630) main_usb_pane_t5

0x8450,	// (0x00087642) main_usb_pane_t6_ParamLimits

0x8450,	// (0x00087642) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0008e7c6) main_usb_pane_t_ParamLimits

0x76d6,	// (0x000868c8) aid_text_placing

0x76e2,	// (0x000868d4) main_location2_pane_t1_ParamLimits

0x76f6,	// (0x000868e8) main_location2_pane_t2_ParamLimits

0x770a,	// (0x000868fc) main_location2_pane_t3_ParamLimits

0x771e,	// (0x00086910) main_location2_pane_t4_ParamLimits

0x771e,	// (0x00086910) main_location2_pane_t4

0xf3f3,	// (0x0008e5e5) main_location2_pane_t_ParamLimits

0x442e,	// (0x00083620) find_pinb_pane_g2_ParamLimits

0x442e,	// (0x00083620) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0008e333) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0008e333) find_pinb_pane_g

0x443a,	// (0x0008362c) find_pinb_pane_t1_ParamLimits

0x444c,	// (0x0008363e) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008e338) find_pinb_pane_t_ParamLimits

0x418f,	// (0x00083381) main_call3_pane

0x6dfa,	// (0x00085fec) cale_month_day_heading_pane_t1_ParamLimits

0x6e58,	// (0x0008604a) cale_month_day_heading_pane_t2_ParamLimits

0x6ebd,	// (0x000860af) cale_month_day_heading_pane_t3_ParamLimits

0x6f22,	// (0x00086114) cale_month_day_heading_pane_t4_ParamLimits

0x6f87,	// (0x00086179) cale_month_day_heading_pane_t5_ParamLimits

0x6fec,	// (0x000861de) cale_month_day_heading_pane_t6_ParamLimits

0x7059,	// (0x0008624b) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008e4bc) cale_month_day_heading_pane_t_ParamLimits

0xddca,	// (0x0008cfbc) smil_status_volume_pane

0x7f9e,	// (0x00087190) postcard_address_pane_ParamLimits

0x7f9e,	// (0x00087190) postcard_address_pane

0x7faa,	// (0x0008719c) postcard_message_pane_ParamLimits

0x7faa,	// (0x0008719c) postcard_message_pane

0x83b2,	// (0x000875a4) call2_cli_visual_pane_t1_ParamLimits

0x83b2,	// (0x000875a4) call2_cli_visual_pane_t1

0x8999,	// (0x00087b8b) postcard_message_pane_t1_ParamLimits

0x8999,	// (0x00087b8b) postcard_message_pane_t1

0x8982,	// (0x00087b74) postcard_address_pane_t1_ParamLimits

0x8982,	// (0x00087b74) postcard_address_pane_t1

0x8973,	// (0x00087b65) popup_call3_audio_in_window_ParamLimits

0x8973,	// (0x00087b65) popup_call3_audio_in_window

0x885b,	// (0x00087a4d) bg_popup_call3_in_pane_ParamLimits

0x885b,	// (0x00087a4d) bg_popup_call3_in_pane

0x88b9,	// (0x00087aab) popup_call3_audio_in_window_g1_ParamLimits

0x88b9,	// (0x00087aab) popup_call3_audio_in_window_g1

0x88d1,	// (0x00087ac3) popup_call3_audio_in_window_g2_ParamLimits

0x88d1,	// (0x00087ac3) popup_call3_audio_in_window_g2

0x88e9,	// (0x00087adb) popup_call3_audio_in_window_g3_ParamLimits

0x88e9,	// (0x00087adb) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0008e828) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0008e828) popup_call3_audio_in_window_g

0x8911,	// (0x00087b03) popup_call3_audio_in_window_t1_ParamLimits

0x8911,	// (0x00087b03) popup_call3_audio_in_window_t1

0x8939,	// (0x00087b2b) popup_call3_audio_in_window_t2_ParamLimits

0x8939,	// (0x00087b2b) popup_call3_audio_in_window_t2

0x8961,	// (0x00087b53) popup_call3_audio_in_window_t3_ParamLimits

0x8961,	// (0x00087b53) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0008e831) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0008e831) popup_call3_audio_in_window_t

0xe349,	// (0x0008d53b) bg_popup_call3_rect_pane

0x09da,	// (0x0007fbcc) bg_popup_call3_rect_pane_g1

0xd9b4,	// (0x0008cba6) bg_popup_call3_rect_pane_g2

0x09e2,	// (0x0007fbd4) bg_popup_call3_rect_pane_g3

0x09ea,	// (0x0007fbdc) bg_popup_call3_rect_pane_g4

0x09f2,	// (0x0007fbe4) bg_popup_call3_rect_pane_g5

0x09fa,	// (0x0007fbec) bg_popup_call3_rect_pane_g6

0x0a02,	// (0x0007fbf4) bg_popup_call3_rect_pane_g7

0x7b32,	// (0x00086d24) mup_visualizer_osc_pane

0xe408,	// (0x0008d5fa) mup_visualizer_spec_pane

0x887b,	// (0x00087a6d) call3_video_qcif_pane_ParamLimits

0x887b,	// (0x00087a6d) call3_video_qcif_pane

0x888b,	// (0x00087a7d) call3_video_qcif_uncrop_pane_ParamLimits

0x888b,	// (0x00087a7d) call3_video_qcif_uncrop_pane

0x8897,	// (0x00087a89) call3_video_subqcif_pane_ParamLimits

0x8897,	// (0x00087a89) call3_video_subqcif_pane

0x88a9,	// (0x00087a9b) call3_video_subqcif_uncrop_pane_ParamLimits

0x88a9,	// (0x00087a9b) call3_video_subqcif_uncrop_pane

0x8901,	// (0x00087af3) popup_call3_audio_in_window_g4_ParamLimits

0x8901,	// (0x00087af3) popup_call3_audio_in_window_g4

0x8828,	// (0x00087a1a) mup_spec_half_pane

0x8831,	// (0x00087a23) mup_spec_half_pane_cp

0x0c7a,	// (0x0007fe6c) mup_osc_middle_pane

0x0c83,	// (0x0007fe75) mup_visualizer_osc_pane_g1

0x8809,	// (0x000879fb) mup_spec_bar_pane_ParamLimits

0x8809,	// (0x000879fb) mup_spec_bar_pane

0x0c67,	// (0x0007fe59) mup_spec_bar_pane_g1

0x0c71,	// (0x0007fe63) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008e81c) mup_spec_bar_pane_g

0x5ca9,	// (0x00084e9b) aid_cale_week_size_cell_pane_ParamLimits

0x5cbc,	// (0x00084eae) bg_cale_heading_pane_ParamLimits

0xd9e8,	// (0x0008cbda) bg_cale_pane_cp01_ParamLimits

0x5cd8,	// (0x00084eca) cale_week_corner_pane_ParamLimits

0x5ce9,	// (0x00084edb) cale_week_day_heading_pane_ParamLimits

0x5d05,	// (0x00084ef7) cale_week_scroll_pane_g1_ParamLimits

0x5d1e,	// (0x00084f10) cale_week_scroll_pane_g2_ParamLimits

0x5d2f,	// (0x00084f21) cale_week_scroll_pane_g3_ParamLimits

0x5d40,	// (0x00084f32) cale_week_scroll_pane_g4_ParamLimits

0x5d51,	// (0x00084f43) cale_week_scroll_pane_g5_ParamLimits

0x5d62,	// (0x00084f54) cale_week_scroll_pane_g6_ParamLimits

0x5d73,	// (0x00084f65) cale_week_scroll_pane_g7_ParamLimits

0x5d86,	// (0x00084f78) cale_week_scroll_pane_g8_ParamLimits

0x5d99,	// (0x00084f8b) cale_week_scroll_pane_g9_ParamLimits

0x5daa,	// (0x00084f9c) cale_week_scroll_pane_g10_ParamLimits

0x5dbb,	// (0x00084fad) cale_week_scroll_pane_g11_ParamLimits

0x5dcc,	// (0x00084fbe) cale_week_scroll_pane_g12_ParamLimits

0x5de5,	// (0x00084fd7) cale_week_scroll_pane_g13_ParamLimits

0x5dfe,	// (0x00084ff0) cale_week_scroll_pane_g14_ParamLimits

0x5e17,	// (0x00085009) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008e3c4) cale_week_scroll_pane_g_ParamLimits

0x5e30,	// (0x00085022) cale_week_time_pane_ParamLimits

0x5e43,	// (0x00085035) grid_cale_week_pane_ParamLimits

0xda01,	// (0x0008cbf3) listscroll_cale_week_pane_t1

0x5e60,	// (0x00085052) scroll_pane_cp08_ParamLimits

0x6a33,	// (0x00085c25) cale_month_corner_pane_ParamLimits

0xdda0,	// (0x0008cf92) cale_month_pane_t1

0x6da9,	// (0x00085f9b) cale_month_week_pane_ParamLimits

0xe055,	// (0x0008d247) popup_call_status_window_g1_ParamLimits

0x7512,	// (0x00086704) popup_call_status_window_g2_ParamLimits

0x751e,	// (0x00086710) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0008e56c) popup_call_status_window_g_ParamLimits

0xe0bc,	// (0x0008d2ae) aid_call2_pane

0x7dcd,	// (0x00086fbf) msg_header_pane_g1

0x7f9e,	// (0x00087190) postcard_address2_pane_ParamLimits

0x7f9e,	// (0x00087190) postcard_address2_pane

0x7faa,	// (0x0008719c) postcard_message2_pane_ParamLimits

0x7faa,	// (0x0008719c) postcard_message2_pane

0x8797,	// (0x00087989) message2_row_pane_ParamLimits

0x8797,	// (0x00087989) message2_row_pane

0x87b4,	// (0x000879a6) address2_row_pane_ParamLimits

0x87b4,	// (0x000879a6) address2_row_pane

0x0c35,	// (0x0007fe27) postcard_message2_row_pane_g1

0x0c3d,	// (0x0007fe2f) postcard_message2_row_pane_t1

0x0c35,	// (0x0007fe27) address2_row_pane_g1

0x0c3d,	// (0x0007fe2f) address2_row_pane_t1

0x607c,	// (0x0008526e) aid_size_cell_vorec

0x418f,	// (0x00083381) main_rss_pane

0x87c7,	// (0x000879b9) rss_list_single_pane_ParamLimits

0x87c7,	// (0x000879b9) rss_list_single_pane

0x0c4b,	// (0x0007fe3d) rss_list_single_pane_t1

0x0c59,	// (0x0007fe4b) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0008e817) rss_list_single_pane_t

0x418f,	// (0x00083381) main_camera2_pane

0x418f,	// (0x00083381) main_video2_pane

0x89fd,	// (0x00087bef) cams_zoom_pane_cp2_ParamLimits

0x89fd,	// (0x00087bef) cams_zoom_pane_cp2

0x8a09,	// (0x00087bfb) image2_vga_pane_ParamLimits

0x8a09,	// (0x00087bfb) image2_vga_pane

0x8a18,	// (0x00087c0a) main_camera2_pane_g1_ParamLimits

0x8a18,	// (0x00087c0a) main_camera2_pane_g1

0x8a24,	// (0x00087c16) main_camera2_pane_g2_ParamLimits

0x8a24,	// (0x00087c16) main_camera2_pane_g2

0x8a30,	// (0x00087c22) main_camera2_pane_g3_ParamLimits

0x8a30,	// (0x00087c22) main_camera2_pane_g3

0x8a3c,	// (0x00087c2e) main_camera2_pane_g4_ParamLimits

0x8a3c,	// (0x00087c2e) main_camera2_pane_g4

0x8a48,	// (0x00087c3a) main_camera2_pane_g5_ParamLimits

0x8a48,	// (0x00087c3a) main_camera2_pane_g5

0x8a54,	// (0x00087c46) main_camera2_pane_g6_ParamLimits

0x8a54,	// (0x00087c46) main_camera2_pane_g6

0x8a60,	// (0x00087c52) main_camera2_pane_g7_ParamLimits

0x8a60,	// (0x00087c52) main_camera2_pane_g7

0x8a6c,	// (0x00087c5e) main_camera2_pane_g8_ParamLimits

0x8a6c,	// (0x00087c5e) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0008e838) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0008e838) main_camera2_pane_g

0x8a84,	// (0x00087c76) main_camera2_pane_t1_ParamLimits

0x8a84,	// (0x00087c76) main_camera2_pane_t1

0x8a96,	// (0x00087c88) main_camera2_pane_t2_ParamLimits

0x8a96,	// (0x00087c88) main_camera2_pane_t2

0x8aa8,	// (0x00087c9a) main_camera2_pane_t3_ParamLimits

0x8aa8,	// (0x00087c9a) main_camera2_pane_t3

0x8aba,	// (0x00087cac) main_camera2_pane_t4_ParamLimits

0x8aba,	// (0x00087cac) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0008e84b) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0008e84b) main_camera2_pane_t

0x8b1c,	// (0x00087d0e) cams_zoom_pane_cp4_ParamLimits

0x8b1c,	// (0x00087d0e) cams_zoom_pane_cp4

0x8b2c,	// (0x00087d1e) image2_cif_pane_ParamLimits

0x8b2c,	// (0x00087d1e) image2_cif_pane

0x8b41,	// (0x00087d33) image2_subqcif_pane_ParamLimits

0x8b41,	// (0x00087d33) image2_subqcif_pane

0x8b50,	// (0x00087d42) main_video2_pane_g1_ParamLimits

0x8b50,	// (0x00087d42) main_video2_pane_g1

0x8b62,	// (0x00087d54) main_video2_pane_g2_ParamLimits

0x8b62,	// (0x00087d54) main_video2_pane_g2

0x8b72,	// (0x00087d64) main_video2_pane_g3_ParamLimits

0x8b72,	// (0x00087d64) main_video2_pane_g3

0x8b82,	// (0x00087d74) main_video2_pane_g4_ParamLimits

0x8b82,	// (0x00087d74) main_video2_pane_g4

0x8b92,	// (0x00087d84) main_video2_pane_g5_ParamLimits

0x8b92,	// (0x00087d84) main_video2_pane_g5

0x8ba2,	// (0x00087d94) main_video2_pane_g6_ParamLimits

0x8ba2,	// (0x00087d94) main_video2_pane_g6

0x0005,

0xf668,	// (0x0008e85a) main_video2_pane_g_ParamLimits

0xf668,	// (0x0008e85a) main_video2_pane_g

0x8bb4,	// (0x00087da6) main_video2_pane_t1_ParamLimits

0x8bb4,	// (0x00087da6) main_video2_pane_t1

0x8bce,	// (0x00087dc0) main_video2_pane_t2_ParamLimits

0x8bce,	// (0x00087dc0) main_video2_pane_t2

0x8bf4,	// (0x00087de6) main_video2_pane_t3_ParamLimits

0x8bf4,	// (0x00087de6) main_video2_pane_t3

0x0002,

0xf675,	// (0x0008e867) main_video2_pane_t_ParamLimits

0xf675,	// (0x0008e867) main_video2_pane_t

0x8507,	// (0x000876f9) call_muted_g2

0x0001,

0xf617,	// (0x0008e809) call_muted_g

0x418f,	// (0x00083381) main_mup2_pane

0x0d3a,	// (0x0007ff2c) main_mup2_pane_g1_ParamLimits

0x0d3a,	// (0x0007ff2c) main_mup2_pane_g1

0x8c1a,	// (0x00087e0c) main_mup2_pane_g2_ParamLimits

0x8c1a,	// (0x00087e0c) main_mup2_pane_g2

0x8e9c,	// (0x0008808e) main_mup_pane_g13_cp1

0x8ea4,	// (0x00088096) mup_volume_pane_cp1

0x8c3a,	// (0x00087e2c) main_mup2_pane_g4_ParamLimits

0x8c3a,	// (0x00087e2c) main_mup2_pane_g4

0x8c4f,	// (0x00087e41) main_mup2_pane_g5_ParamLimits

0x8c4f,	// (0x00087e41) main_mup2_pane_g5

0x8c64,	// (0x00087e56) main_mup2_pane_g6_ParamLimits

0x8c64,	// (0x00087e56) main_mup2_pane_g6

0x8c79,	// (0x00087e6b) main_mup2_pane_g7_ParamLimits

0x8c79,	// (0x00087e6b) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0008e86e) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0008e86e) main_mup2_pane_g

0x8c95,	// (0x00087e87) main_mup2_pane_t1_ParamLimits

0x8c95,	// (0x00087e87) main_mup2_pane_t1

0x8cac,	// (0x00087e9e) main_mup2_pane_t2_ParamLimits

0x8cac,	// (0x00087e9e) main_mup2_pane_t2

0x8cc3,	// (0x00087eb5) main_mup2_pane_t3_ParamLimits

0x8cc3,	// (0x00087eb5) main_mup2_pane_t3

0x8cda,	// (0x00087ecc) main_mup2_pane_t4_ParamLimits

0x8cda,	// (0x00087ecc) main_mup2_pane_t4

0x8cf4,	// (0x00087ee6) main_mup2_pane_t5_ParamLimits

0x8cf4,	// (0x00087ee6) main_mup2_pane_t5

0x8d0e,	// (0x00087f00) main_mup2_pane_t6_ParamLimits

0x8d0e,	// (0x00087f00) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0008e87d) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0008e87d) main_mup2_pane_t

0x8d46,	// (0x00087f38) mup2_visualizer_pane_ParamLimits

0x8d46,	// (0x00087f38) mup2_visualizer_pane

0x8d7c,	// (0x00087f6e) mup_progress_pane_cp_ParamLimits

0x8d7c,	// (0x00087f6e) mup_progress_pane_cp

0x8e87,	// (0x00088079) mup_volume_pane_cp_ParamLimits

0x8e87,	// (0x00088079) mup_volume_pane_cp

0x8d93,	// (0x00087f85) mup2_visualizer_pane_g1_ParamLimits

0x8d93,	// (0x00087f85) mup2_visualizer_pane_g1

0x0d0c,	// (0x0007fefe) mup2_visualizer_pane_g2_ParamLimits

0x0d0c,	// (0x0007fefe) mup2_visualizer_pane_g2

0x8da8,	// (0x00087f9a) mup2_visualizer_pane_g3_ParamLimits

0x8da8,	// (0x00087f9a) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0008e88a) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0008e88a) mup2_visualizer_pane_g

0xe62f,	// (0x0008d821) aid_size_cell_fmradio

0x861d,	// (0x0008780f) aid_height_parent_landcape

0xdc08,	// (0x0008cdfa) wml_content_pane_cp

0xdc10,	// (0x0008ce02) wml_tabs_pane

0xdc19,	// (0x0008ce0b) popup_wml_miniature_window

0xdc21,	// (0x0008ce13) scroll_pane_cp021

0xdc35,	// (0x0008ce27) wml_content_pane_comp8

0x418f,	// (0x00083381) bg_popup_sub_pane_cp05

0x0d2a,	// (0x0007ff1c) popup_wml_miniature_window_g1

0x0d32,	// (0x0007ff24) wml_miniature_view_pane

0x8db6,	// (0x00087fa8) aid_size_wml_view

0x8dbe,	// (0x00087fb0) wml_miniature_view_pane_g1

0x8dc7,	// (0x00087fb9) wml_miniature_view_pane_g2

0x8dd0,	// (0x00087fc2) wml_miniature_view_pane_g3

0x8dd8,	// (0x00087fca) wml_miniature_view_pane_g4

0x8de0,	// (0x00087fd2) wml_miniature_view_pane_g5

0x8de8,	// (0x00087fda) wml_miniature_view_pane_g6

0x8df0,	// (0x00087fe2) wml_miniature_view_pane_g7

0x8df8,	// (0x00087fea) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0008e891) wml_miniature_view_pane_g

0x0d3a,	// (0x0007ff2c) background_graphic_ParamLimits

0x0d3a,	// (0x0007ff2c) background_graphic

0x0d46,	// (0x0007ff38) wml_tabs_2_pane

0x0d4f,	// (0x0007ff41) wml_tabs_3_pane_ParamLimits

0x0d4f,	// (0x0007ff41) wml_tabs_3_pane

0x0d61,	// (0x0007ff53) wml_tabs_4_pane_ParamLimits

0x0d61,	// (0x0007ff53) wml_tabs_4_pane

0x0d77,	// (0x0007ff69) wml_tabs_5_pane_ParamLimits

0x0d77,	// (0x0007ff69) wml_tabs_5_pane

0x0d91,	// (0x0007ff83) wml_tabs_pane_g2_ParamLimits

0x0d91,	// (0x0007ff83) wml_tabs_pane_g2

0x0da5,	// (0x0007ff97) wml_tabs_pane_g3_ParamLimits

0x0da5,	// (0x0007ff97) wml_tabs_pane_g3

0x8e00,	// (0x00087ff2) wml_tabs_2_active_pane_ParamLimits

0x8e00,	// (0x00087ff2) wml_tabs_2_active_pane

0x8e10,	// (0x00088002) wml_tabs_2_passive_pane_ParamLimits

0x8e10,	// (0x00088002) wml_tabs_2_passive_pane

0x8e20,	// (0x00088012) wml_tabs_3_active_pane_cp_ParamLimits

0x8e20,	// (0x00088012) wml_tabs_3_active_pane_cp

0x8e31,	// (0x00088023) wml_tabs_3_passive_pane_ParamLimits

0x8e31,	// (0x00088023) wml_tabs_3_passive_pane

0x8e42,	// (0x00088034) wml_tabs_3_passive_pane_cp_ParamLimits

0x8e42,	// (0x00088034) wml_tabs_3_passive_pane_cp

0x8e53,	// (0x00088045) tabs_4_active_pane

0x8e5b,	// (0x0008804d) tabs_4_passive_pane

0x8e63,	// (0x00088055) tabs_4_passive_pane_cp

0x8e6b,	// (0x0008805d) tabs_4_passive_pane_cp2

0x0a62,	// (0x0007fc54) aid_height_text

0x7afb,	// (0x00086ced) mup_volume_cont_pane_ParamLimits

0x7afb,	// (0x00086ced) mup_volume_cont_pane

0x57fe,	// (0x000849f0) aid_size_cell_pinb

0x441a,	// (0x0008360c) aid_size_list_pinb

0x8d65,	// (0x00087f57) mup2_volume_cont_pane_ParamLimits

0x8d65,	// (0x00087f57) mup2_volume_cont_pane

0x8e73,	// (0x00088065) mup2_volume_cont_pane_g1_ParamLimits

0x8e73,	// (0x00088065) mup2_volume_cont_pane_g1

0x5497,	// (0x00084689) aid_size_cell_touch_ParamLimits

0x5497,	// (0x00084689) aid_size_cell_touch

0x56de,	// (0x000848d0) touch_pane_ParamLimits

0x56de,	// (0x000848d0) touch_pane

0x018a,	// (0x0007f37c) main_rss2_pane

0x0dfb,	// (0x0007ffed) listscroll_rss2_pane

0x0e04,	// (0x0007fff6) rss2_navigation_pane

0x0e0c,	// (0x0007fffe) list_rss2_pane

0xe1fc,	// (0x0008d3ee) scroll_pane_cp22

0x0e14,	// (0x00080006) rss2_navigation_pane_g1

0x0e1d,	// (0x0008000f) rss2_navigation_pane_g2

0x0e25,	// (0x00080017) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0008e8a2) rss2_navigation_pane_g

0x0e2d,	// (0x0008001f) rss2_navigation_pane_t1

0x8eac,	// (0x0008809e) rss2_list_single_pane_ParamLimits

0x8eac,	// (0x0008809e) rss2_list_single_pane

0x0e3b,	// (0x0008002d) rss2_list_single_pane_t2

0x0e49,	// (0x0008003b) rss2_list_single_pane_t3_ParamLimits

0x0e49,	// (0x0008003b) rss2_list_single_pane_t3

0x0e66,	// (0x00080058) rss2_list_single_pane_t4

0x7269,	// (0x0008645b) smil_status_pane_g1

0x3d47,	// (0x00082f39) main_image2_pane_ParamLimits

0x3d47,	// (0x00082f39) main_image2_pane

0x8a78,	// (0x00087c6a) main_camera2_pane_g9_ParamLimits

0x8a78,	// (0x00087c6a) main_camera2_pane_g9

0x8acc,	// (0x00087cbe) main_camera2_pane_t5_ParamLimits

0x8acc,	// (0x00087cbe) main_camera2_pane_t5

0x8ade,	// (0x00087cd0) main_camera2_pane_t6_ParamLimits

0x8ade,	// (0x00087cd0) main_camera2_pane_t6

0x8ee8,	// (0x000880da) main_image2_pane_g1_ParamLimits

0x8ee8,	// (0x000880da) main_image2_pane_g1

0x817f,	// (0x00087371) smil2_video_pane_ParamLimits

0x817f,	// (0x00087371) smil2_video_pane

0x01b8,	// (0x0007f3aa) aid_zoom_text_primary_cp

0x3d3d,	// (0x00082f2f) popup_preview_fixed_window

0xdb71,	// (0x0008cd63) im_reading_pane_g1

0x89c2,	// (0x00087bb4) cams2_bc_adjust_pane_cp_ParamLimits

0x89c2,	// (0x00087bb4) cams2_bc_adjust_pane_cp

0x8b0e,	// (0x00087d00) cams2_bc_adjust_pane_ParamLimits

0x8b0e,	// (0x00087d00) cams2_bc_adjust_pane

0x21dc,	// (0x000813ce) cams2_bc_adjust_pane_g1

0x8ef4,	// (0x000880e6) cams2_slider_pane

0x8efd,	// (0x000880ef) cams2_slider_pane_g1

0x8f06,	// (0x000880f8) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0008e8a9) cams2_slider_pane_g

0x58d4,	// (0x00084ac6) calc_display_pane_ParamLimits

0x58f2,	// (0x00084ae4) calc_paper_pane_ParamLimits

0x590e,	// (0x00084b00) grid_calc_pane_ParamLimits

0x757c,	// (0x0008676e) popup_clock_digital_window_t1_ParamLimits

0xe5cc,	// (0x0008d7be) main_image_pane_t1

0x58ba,	// (0x00084aac) aid_size_cell_calc_ParamLimits

0x58ba,	// (0x00084aac) aid_size_cell_calc

0x864f,	// (0x00087841) popup_blid_sat_info2_window_ParamLimits

0x864f,	// (0x00087841) popup_blid_sat_info2_window

0x0eb0,	// (0x000800a2) aid_size_cell_blid

0x0eb8,	// (0x000800aa) bg_popup_window_pane_cp07

0x0edb,	// (0x000800cd) grid_popup_blid_pane

0x0ee5,	// (0x000800d7) heading_pane_cp05_ParamLimits

0x0ee5,	// (0x000800d7) heading_pane_cp05

0x0faf,	// (0x000801a1) cell_popup_blid_pane_ParamLimits

0x0faf,	// (0x000801a1) cell_popup_blid_pane

0x0fd5,	// (0x000801c7) cell_popup_blid_pane_g1

0x0fdd,	// (0x000801cf) cell_popup_blid_pane_t1

0x8d2b,	// (0x00087f1d) mup2_indicator_pane_ParamLimits

0x8d2b,	// (0x00087f1d) mup2_indicator_pane

0xe349,	// (0x0008d53b) mup2_visualizer_osc_pane

0x0d18,	// (0x0007ff0a) mup2_visualizer_spec_pane_ParamLimits

0x0d18,	// (0x0007ff0a) mup2_visualizer_spec_pane

0x8f20,	// (0x00088112) mup2_spec_half_pane

0x8f29,	// (0x0008811b) mup2_spec_half_pane_cp

0x8f33,	// (0x00088125) mup2_spec_bar_pane_ParamLimits

0x8f33,	// (0x00088125) mup2_spec_bar_pane

0x0c67,	// (0x0007fe59) mup2_spec_bar_pane_g1

0x0c71,	// (0x0007fe63) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008e81c) mup2_spec_bar_pane_g

0x8f52,	// (0x00088144) mup2_osc_middle_pane

0x0c83,	// (0x0007fe75) mup2_visualizer_osc_pane_g1

0x3d75,	// (0x00082f67) popup_number_entry_window_t1_ParamLimits

0x3d88,	// (0x00082f7a) popup_number_entry_window_t2_ParamLimits

0x3d9a,	// (0x00082f8c) popup_number_entry_window_t3_ParamLimits

0x5735,	// (0x00084927) popup_number_entry_window_t5_ParamLimits

0x5735,	// (0x00084927) popup_number_entry_window_t5

0xf0ec,	// (0x0008e2de) popup_number_entry_window_t_ParamLimits

0x3dac,	// (0x00082f9e) text_title_cp2_ParamLimits

0x7e66,	// (0x00087058) aid_hotspot_pointer_text2_pane

0x7f00,	// (0x000870f2) main_viewer_pane_g9_ParamLimits

0x7f00,	// (0x000870f2) main_viewer_pane_g9

0xdda0,	// (0x0008cf92) cale_month_pane_t1_ParamLimits

0xdddd,	// (0x0008cfcf) bg_cale_pane_ParamLimits

0xddf5,	// (0x0008cfe7) list_cale_pane_ParamLimits

0xda01,	// (0x0008cbf3) listscroll_cale_day_pane_t1

0xde06,	// (0x0008cff8) scroll_pane_cp09_ParamLimits

0x7b3a,	// (0x00086d2c) main_mup_eq_pane_t1_ParamLimits

0x7b3a,	// (0x00086d2c) main_mup_eq_pane_t1

0x7b54,	// (0x00086d46) main_mup_eq_pane_t2_ParamLimits

0x7b54,	// (0x00086d46) main_mup_eq_pane_t2

0x7b6c,	// (0x00086d5e) main_mup_eq_pane_t3_ParamLimits

0x7b6c,	// (0x00086d5e) main_mup_eq_pane_t3

0x7b84,	// (0x00086d76) main_mup_eq_pane_t4_ParamLimits

0x7b84,	// (0x00086d76) main_mup_eq_pane_t4

0x7b9c,	// (0x00086d8e) main_mup_eq_pane_t5_ParamLimits

0x7b9c,	// (0x00086d8e) main_mup_eq_pane_t5

0x7bb4,	// (0x00086da6) main_mup_eq_pane_t6_ParamLimits

0x7bb4,	// (0x00086da6) main_mup_eq_pane_t6

0x7bc8,	// (0x00086dba) main_mup_eq_pane_t7_ParamLimits

0x7bc8,	// (0x00086dba) main_mup_eq_pane_t7

0x7bdc,	// (0x00086dce) main_mup_eq_pane_t8_ParamLimits

0x7bdc,	// (0x00086dce) main_mup_eq_pane_t8

0x7bf2,	// (0x00086de4) main_mup_eq_pane_t9_ParamLimits

0x7bf2,	// (0x00086de4) main_mup_eq_pane_t9

0x7c0a,	// (0x00086dfc) main_mup_eq_pane_t10_ParamLimits

0x7c0a,	// (0x00086dfc) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0008e66b) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0008e66b) main_mup_eq_pane_t

0x7cc7,	// (0x00086eb9) mup_equalizer_pane_cp5_ParamLimits

0x7cdd,	// (0x00086ecf) mup_equalizer_pane_cp6_ParamLimits

0x7cf5,	// (0x00086ee7) mup_equalizer_pane_cp7_ParamLimits

0x018a,	// (0x0007f37c) main_gallery_pane

0x0c8c,	// (0x0007fe7e) smil2_volume_pane

0x0ca7,	// (0x0007fe99) smil_status_volume_pane_g1_ParamLimits

0x0c94,	// (0x0007fe86) smil_status_volume_pane_g2_ParamLimits

0x8839,	// (0x00087a2b) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0008e821) smil_status_volume_pane_g_ParamLimits

0x0eb8,	// (0x000800aa) bg_popup_window_pane_cp07_ParamLimits

0x0ec6,	// (0x000800b8) blid_firmament_pane

0x8f5b,	// (0x0008814d) aid_size_cell_gallery_ParamLimits

0x8f5b,	// (0x0008814d) aid_size_cell_gallery

0x8f69,	// (0x0008815b) grid_gallery_pane_ParamLimits

0x8f69,	// (0x0008815b) grid_gallery_pane

0x8f79,	// (0x0008816b) cell_gallery_pane_ParamLimits

0x8f79,	// (0x0008816b) cell_gallery_pane

0x0feb,	// (0x000801dd) bg_cell_gallery_focus_pane_ParamLimits

0x0feb,	// (0x000801dd) bg_cell_gallery_focus_pane

0x0ffd,	// (0x000801ef) cell_gallery_pane_g1_ParamLimits

0x0ffd,	// (0x000801ef) cell_gallery_pane_g1

0x8fc7,	// (0x000881b9) cell_gallery_pane_g2_ParamLimits

0x8fc7,	// (0x000881b9) cell_gallery_pane_g2

0x8fd4,	// (0x000881c6) cell_gallery_pane_g3_ParamLimits

0x8fd4,	// (0x000881c6) cell_gallery_pane_g3

0x1009,	// (0x000801fb) cell_gallery_pane_g4_ParamLimits

0x1009,	// (0x000801fb) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0008e8cf) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0008e8cf) cell_gallery_pane_g

0x1015,	// (0x00080207) bg_cell_gallery_focus_pane_g1

0x101d,	// (0x0008020f) bg_cell_gallery_focus_pane_g2

0x1025,	// (0x00080217) bg_cell_gallery_focus_pane_g3

0x102d,	// (0x0008021f) bg_cell_gallery_focus_pane_g4

0x1035,	// (0x00080227) bg_cell_gallery_focus_pane_g5

0x103d,	// (0x0008022f) bg_cell_gallery_focus_pane_g6

0x1045,	// (0x00080237) bg_cell_gallery_focus_pane_g7

0x104d,	// (0x0008023f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0008e8d8) bg_cell_gallery_focus_pane_g

0x1055,	// (0x00080247) aid_firma_cardinal

0x1069,	// (0x0008025b) blid_firmament_pane_t1

0x1080,	// (0x00080272) blid_firmament_pane_t2

0x1097,	// (0x00080289) blid_firmament_pane_t3

0x10ae,	// (0x000802a0) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0008e8e9) blid_firmament_pane_t

0x10c5,	// (0x000802b7) blid_sat_info_pane

0x10d5,	// (0x000802c7) blid_sat_info_pane_g1

0x10d5,	// (0x000802c7) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0008e8f2) blid_sat_info_pane_g

0x10df,	// (0x000802d1) blid_sat_info_pane_t1

0x10ed,	// (0x000802df) smil2_volume_content_pane

0x10f6,	// (0x000802e8) smil2_volume_pane_g1

0x10fe,	// (0x000802f0) smil2_volume_content_pane_g1

0x1107,	// (0x000802f9) smil2_volume_content_pane_g2

0x1110,	// (0x00080302) smil2_volume_content_pane_g3

0x1119,	// (0x0008030b) smil2_volume_content_pane_g4

0x1122,	// (0x00080314) smil2_volume_content_pane_g5

0x112b,	// (0x0008031d) smil2_volume_content_pane_g6

0x1134,	// (0x00080326) smil2_volume_content_pane_g7

0x113d,	// (0x0008032f) smil2_volume_content_pane_g8

0x1146,	// (0x00080338) smil2_volume_content_pane_g9

0x114f,	// (0x00080341) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0008e8f7) smil2_volume_content_pane_g

0x5eca,	// (0x000850bc) cale_week_day_heading_pane_t1_ParamLimits

0x5ede,	// (0x000850d0) cale_week_day_heading_pane_t2_ParamLimits

0x5ef2,	// (0x000850e4) cale_week_day_heading_pane_t3_ParamLimits

0x5f06,	// (0x000850f8) cale_week_day_heading_pane_t4_ParamLimits

0x5f1a,	// (0x0008510c) cale_week_day_heading_pane_t5_ParamLimits

0x5f2e,	// (0x00085120) cale_week_day_heading_pane_t6_ParamLimits

0x5f42,	// (0x00085134) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0008e3e3) cale_week_day_heading_pane_t_ParamLimits

0xda13,	// (0x0008cc05) bg_cale_side_pane_ParamLimits

0x5f56,	// (0x00085148) cale_week_time_pane_t1_ParamLimits

0x5f6e,	// (0x00085160) cale_week_time_pane_t2_ParamLimits

0x5f86,	// (0x00085178) cale_week_time_pane_t3_ParamLimits

0x5f9e,	// (0x00085190) cale_week_time_pane_t4_ParamLimits

0x5fb6,	// (0x000851a8) cale_week_time_pane_t5_ParamLimits

0x5fce,	// (0x000851c0) cale_week_time_pane_t6_ParamLimits

0x5fee,	// (0x000851e0) cale_week_time_pane_t7_ParamLimits

0x600e,	// (0x00085200) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0008e3f2) cale_week_time_pane_t_ParamLimits

0x602e,	// (0x00085220) cell_cale_week_pane_g2_ParamLimits

0xda13,	// (0x0008cc05) bg_cale_side_pane_cp01_ParamLimits

0x70ce,	// (0x000862c0) cale_month_week_pane_t1_ParamLimits

0x70e5,	// (0x000862d7) cale_month_week_pane_t2_ParamLimits

0x70fc,	// (0x000862ee) cale_month_week_pane_t3_ParamLimits

0x7113,	// (0x00086305) cale_month_week_pane_t4_ParamLimits

0x712a,	// (0x0008631c) cale_month_week_pane_t5_ParamLimits

0x7149,	// (0x0008633b) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0008e4cb) cale_month_week_pane_t_ParamLimits

0x7236,	// (0x00086428) cell_cale_month_pane_g1_ParamLimits

0x018a,	// (0x0007f37c) main_cale_event_viewer_pane

0x018a,	// (0x0007f37c) listscroll_cale_event_viewer_pane

0x1158,	// (0x0008034a) list_cale_ev_pane

0x1160,	// (0x00080352) scroll_pane_cp023

0x116c,	// (0x0008035e) field_cale_ev_pane_ParamLimits

0x116c,	// (0x0008035e) field_cale_ev_pane

0x1186,	// (0x00080378) field_cale_ev_content_pane_ParamLimits

0x1186,	// (0x00080378) field_cale_ev_content_pane

0x1192,	// (0x00080384) field_cale_ev_pane_g1_ParamLimits

0x1192,	// (0x00080384) field_cale_ev_pane_g1

0x119e,	// (0x00080390) field_cale_ev_pane_g2_ParamLimits

0x119e,	// (0x00080390) field_cale_ev_pane_g2

0x11b6,	// (0x000803a8) field_cale_ev_pane_g3_ParamLimits

0x11b6,	// (0x000803a8) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0008e90c) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0008e90c) field_cale_ev_pane_g

0x11ce,	// (0x000803c0) field_cale_ev_pane_t1_ParamLimits

0x11ce,	// (0x000803c0) field_cale_ev_pane_t1

0x11e5,	// (0x000803d7) field_cale_ev_content_pane_t1_ParamLimits

0x11e5,	// (0x000803d7) field_cale_ev_content_pane_t1

0xe4b2,	// (0x0008d6a4) bg_button_pane_cp01

0x44f9,	// (0x000836eb) listscroll_cale_week_pane_ParamLimits

0x5c9f,	// (0x00084e91) popup_toolbar_window_cp01

0xda01,	// (0x0008cbf3) listscroll_cale_week_pane_t1_ParamLimits

0x44f9,	// (0x000836eb) listscroll_cale_day_pane_ParamLimits

0x5c9f,	// (0x00084e91) popup_toolbar_window_cp02

0xda01,	// (0x0008cbf3) listscroll_cale_day_pane_t1_ParamLimits

0x44f9,	// (0x000836eb) main_cale_month_pane_ParamLimits

0x8713,	// (0x00087905) popup_toolbar_window_cp03_ParamLimits

0x8713,	// (0x00087905) popup_toolbar_window_cp03

0x8091,	// (0x00087283) main_image_pane_g2_ParamLimits

0x8091,	// (0x00087283) main_image_pane_g2

0x809d,	// (0x0008728f) main_image_pane_g3_ParamLimits

0x809d,	// (0x0008728f) main_image_pane_g3

0x0002,

0xf50b,	// (0x0008e6fd) main_image_pane_g_ParamLimits

0xf50b,	// (0x0008e6fd) main_image_pane_g

0xe5cc,	// (0x0008d7be) main_image_pane_t1_ParamLimits

0x80a9,	// (0x0008729b) main_image_pane_t2_ParamLimits

0x80a9,	// (0x0008729b) main_image_pane_t2

0x80bb,	// (0x000872ad) main_image_pane_t3_ParamLimits

0x80bb,	// (0x000872ad) main_image_pane_t3

0x80cd,	// (0x000872bf) main_image_pane_t4_ParamLimits

0x80cd,	// (0x000872bf) main_image_pane_t4

0x0003,

0xf512,	// (0x0008e704) main_image_pane_t_ParamLimits

0xf512,	// (0x0008e704) main_image_pane_t

0x80df,	// (0x000872d1) popup_image_details_window_cp01

0x80e9,	// (0x000872db) popup_toobar_trans_pane_cp01_ParamLimits

0x80e9,	// (0x000872db) popup_toobar_trans_pane_cp01

0x8698,	// (0x0008788a) popup_image_details_window_ParamLimits

0x8698,	// (0x0008788a) popup_image_details_window

0x0bed,	// (0x0007fddf) popup_image_focus_window

0x89b4,	// (0x00087ba6) camera2_autofocus_pane_ParamLimits

0x89b4,	// (0x00087ba6) camera2_autofocus_pane

0x018a,	// (0x0007f37c) bg_popup_sub_pane_cp06

0x1202,	// (0x000803f4) popup_image_focus_window_g1

0x120a,	// (0x000803fc) popup_image_focus_window_g2

0x1212,	// (0x00080404) popup_image_focus_window_g3

0x121a,	// (0x0008040c) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0008e913) popup_image_focus_window_g

0x1222,	// (0x00080414) popup_image_focus_window_t1

0x1230,	// (0x00080422) popup_image_focus_window_t2

0x1240,	// (0x00080432) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0008e91c) popup_image_focus_window_t

0x124e,	// (0x00080440) camera2_autofocus_pane_g1

0x3d47,	// (0x00082f39) bg_tb_trans_pane_cp01

0x125c,	// (0x0008044e) popup_image_details_window_g1

0x126f,	// (0x00080461) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0008e92e) popup_image_details_window_g

0x1298,	// (0x0008048a) popup_image_details_window_t1

0x12aa,	// (0x0008049c) popup_image_details_window_t2

0x12c3,	// (0x000804b5) popup_image_details_window_t3

0x12d7,	// (0x000804c9) popup_image_details_window_t4

0x12f2,	// (0x000804e4) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0008e935) popup_image_details_window_t

0x44e5,	// (0x000836d7) bg_calc_paper_pane_ParamLimits

0x5a07,	// (0x00084bf9) grid_highlight_pane_cp013

0x5a11,	// (0x00084c03) list_calc_pane_ParamLimits

0x5a23,	// (0x00084c15) scroll_pane_cp024

0x44f9,	// (0x000836eb) bg_calc_display_pane_ParamLimits

0x5a2b,	// (0x00084c1d) calc_display_pane_t1_ParamLimits

0x5a40,	// (0x00084c32) calc_display_pane_t2_ParamLimits

0x5a55,	// (0x00084c47) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0008e365) calc_display_pane_t_ParamLimits

0x5b3c,	// (0x00084d2e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0008e382) cell_calc_pane_g

0x5b45,	// (0x00084d37) cell_calc_pane_t1

0xd920,	// (0x0008cb12) grid_highlight_pane_cp02_ParamLimits

0xd936,	// (0x0008cb28) toolbar_button_pane_cp01_ParamLimits

0xd936,	// (0x0008cb28) toolbar_button_pane_cp01

0xe611,	// (0x0008d803) temp_image_control_pane_ParamLimits

0xe611,	// (0x0008d803) temp_image_control_pane

0x3d47,	// (0x00082f39) main_mp3_pane

0x130c,	// (0x000804fe) temp_image_control_pane_g1_ParamLimits

0x130c,	// (0x000804fe) temp_image_control_pane_g1

0x131a,	// (0x0008050c) temp_image_control_pane_g2_ParamLimits

0x131a,	// (0x0008050c) temp_image_control_pane_g2

0x132c,	// (0x0008051e) temp_image_control_pane_g3_ParamLimits

0x132c,	// (0x0008051e) temp_image_control_pane_g3

0x9011,	// (0x00088203) temp_image_control_pane_g4_ParamLimits

0x9011,	// (0x00088203) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0008e940) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0008e940) temp_image_control_pane_g

0x130c,	// (0x000804fe) main_mp3_pane_g1

0x9022,	// (0x00088214) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0008e949) main_mp3_pane_g

0x136f,	// (0x00080561) main_mp3_pane_t1

0xda82,	// (0x0008cc74) main_camera_pane_g8_ParamLimits

0xda82,	// (0x0008cc74) main_camera_pane_g8

0x62b6,	// (0x000854a8) main_video_pane_g7_ParamLimits

0x62b6,	// (0x000854a8) main_video_pane_g7

0x8afc,	// (0x00087cee) main_camera2_pane_t7_ParamLimits

0x8afc,	// (0x00087cee) main_camera2_pane_t7

0xdbc8,	// (0x0008cdba) scroll_pane_cp025_ParamLimits

0xdbc8,	// (0x0008cdba) scroll_pane_cp025

0xdbdc,	// (0x0008cdce) scroll_pane_cp026_ParamLimits

0xdbdc,	// (0x0008cdce) scroll_pane_cp026

0xdbeb,	// (0x0008cddd) wml_content_pane_ParamLimits

0x018a,	// (0x0007f37c) main_touch_calib_pane

0x90c6,	// (0x000882b8) main_touch_calib_pane_g1

0x90d2,	// (0x000882c4) main_touch_calib_pane_g2

0x90de,	// (0x000882d0) main_touch_calib_pane_g3

0x90ea,	// (0x000882dc) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0008e967) main_touch_calib_pane_g

0x90f6,	// (0x000882e8) main_touch_calib_pane_t1

0x910d,	// (0x000882ff) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0008e970) main_touch_calib_pane_t

0xe28a,	// (0x0008d47c) mup_progress_pane_cp02

0xe2a9,	// (0x0008d49b) navi_pane_g1

0xe30b,	// (0x0008d4fd) navi_pane_mp_t3

0x3d47,	// (0x00082f39) main_mp3_pane_ParamLimits

0x8751,	// (0x00087943) navi_pane_ParamLimits

0x130c,	// (0x000804fe) main_mp3_pane_g1_ParamLimits

0x9022,	// (0x00088214) main_mp3_pane_g2_ParamLimits

0x902e,	// (0x00088220) main_mp3_pane_g3_ParamLimits

0x902e,	// (0x00088220) main_mp3_pane_g3

0x903a,	// (0x0008822c) main_mp3_pane_g4_ParamLimits

0x903a,	// (0x0008822c) main_mp3_pane_g4

0x133c,	// (0x0008052e) main_mp3_pane_g5_ParamLimits

0x133c,	// (0x0008052e) main_mp3_pane_g5

0x134a,	// (0x0008053c) main_mp3_pane_g6_ParamLimits

0x134a,	// (0x0008053c) main_mp3_pane_g6

0x1357,	// (0x00080549) main_mp3_pane_g7_ParamLimits

0x1357,	// (0x00080549) main_mp3_pane_g7

0x1363,	// (0x00080555) main_mp3_pane_g8_ParamLimits

0x1363,	// (0x00080555) main_mp3_pane_g8

0xf757,	// (0x0008e949) main_mp3_pane_g_ParamLimits

0x9046,	// (0x00088238) main_mp3_pane_t2

0x9056,	// (0x00088248) main_mp3_pane_t3

0x137d,	// (0x0008056f) main_mp3_pane_t4

0x138b,	// (0x0008057d) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0008e95a) main_mp3_pane_t

0x1399,	// (0x0008058b) mup_progress_pane_cp01

0x01b8,	// (0x0007f3aa) aid_zoom_text_secondary2

0x1158,	// (0x0008034a) list_cale_ev2_pane

0x1160,	// (0x00080352) scroll_pane_cp023_ParamLimits

0x9160,	// (0x00088352) field_cale_ev2_pane_ParamLimits

0x9160,	// (0x00088352) field_cale_ev2_pane

0x9194,	// (0x00088386) field_cale_ev2_pane_g1_ParamLimits

0x9194,	// (0x00088386) field_cale_ev2_pane_g1

0x91a0,	// (0x00088392) field_cale_ev2_pane_g2_ParamLimits

0x91a0,	// (0x00088392) field_cale_ev2_pane_g2

0x91b8,	// (0x000883aa) field_cale_ev2_pane_g3_ParamLimits

0x91b8,	// (0x000883aa) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0008e97b) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0008e97b) field_cale_ev2_pane_g

0x13ad,	// (0x0008059f) field_cale_ev2_pane_t1_ParamLimits

0x13ad,	// (0x0008059f) field_cale_ev2_pane_t1

0x13c4,	// (0x000805b6) field_cale_ev2_pane_t2_ParamLimits

0x13c4,	// (0x000805b6) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0008e984) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0008e984) field_cale_ev2_pane_t

0x7f68,	// (0x0008715a) main_postcard_pane_g5_ParamLimits

0x7f68,	// (0x0008715a) main_postcard_pane_g5

0x7f76,	// (0x00087168) main_postcard_pane_g6_ParamLimits

0x7f76,	// (0x00087168) main_postcard_pane_g6

0x60f6,	// (0x000852e8) camera2_autofocus_pane_cp_ParamLimits

0x60f6,	// (0x000852e8) camera2_autofocus_pane_cp

0x3d47,	// (0x00082f39) main_mup3_pane

0x91f0,	// (0x000883e2) main_mup3_pane_g1_ParamLimits

0x91f0,	// (0x000883e2) main_mup3_pane_g1

0x9211,	// (0x00088403) main_mup3_pane_g2_ParamLimits

0x9211,	// (0x00088403) main_mup3_pane_g2

0x928c,	// (0x0008847e) main_mup3_pane_g3_ParamLimits

0x928c,	// (0x0008847e) main_mup3_pane_g3

0x92cb,	// (0x000884bd) main_mup3_pane_g4_ParamLimits

0x92cb,	// (0x000884bd) main_mup3_pane_g4

0x930a,	// (0x000884fc) main_mup3_pane_g5_ParamLimits

0x930a,	// (0x000884fc) main_mup3_pane_g5

0x934b,	// (0x0008853d) main_mup3_pane_g6_ParamLimits

0x934b,	// (0x0008853d) main_mup3_pane_g6

0x13d9,	// (0x000805cb) main_mup3_pane_g7_ParamLimits

0x13d9,	// (0x000805cb) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0008e994) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0008e994) main_mup3_pane_g

0x93bd,	// (0x000885af) main_mup3_pane_t1_ParamLimits

0x93bd,	// (0x000885af) main_mup3_pane_t1

0x942c,	// (0x0008861e) main_mup3_pane_t2_ParamLimits

0x942c,	// (0x0008861e) main_mup3_pane_t2

0x94f5,	// (0x000886e7) main_mup3_pane_t4_ParamLimits

0x94f5,	// (0x000886e7) main_mup3_pane_t4

0x9547,	// (0x00088739) main_mup3_pane_t5_ParamLimits

0x9547,	// (0x00088739) main_mup3_pane_t5

0x95ef,	// (0x000887e1) main_mup3_pane_t6_ParamLimits

0x95ef,	// (0x000887e1) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0008e9a5) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0008e9a5) main_mup3_pane_t

0x9697,	// (0x00088889) mup3_progress_pane_ParamLimits

0x9697,	// (0x00088889) mup3_progress_pane

0x96fc,	// (0x000888ee) popup_mup3_control_window_ParamLimits

0x96fc,	// (0x000888ee) popup_mup3_control_window

0x13e7,	// (0x000805d9) popup_mup3_text_window

0x9715,	// (0x00088907) mup3_progress_pane_t1

0x972c,	// (0x0008891e) mup3_progress_pane_t2

0x13ef,	// (0x000805e1) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0008e9b2) mup3_progress_pane_t

0x1406,	// (0x000805f8) mup_progress_pane_cp03

0x018a,	// (0x0007f37c) bg_tb_trans_pane_cp04

0x9743,	// (0x00088935) mup3_volume_pane

0x974b,	// (0x0008893d) popup_mup3_control_window_g1

0x9754,	// (0x00088946) mup3_volume_pane_g1

0x975d,	// (0x0008894f) mup3_volume_pane_g2

0x9766,	// (0x00088958) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0008e9b9) mup3_volume_pane_g

0x018a,	// (0x0007f37c) bg_tb_trans_pane_cp03

0x1416,	// (0x00080608) popup_mup3_text_window_g1

0x141e,	// (0x00080610) popup_mup3_text_window_t1

0x4541,	// (0x00083733) list_calc_item_pane_g1_ParamLimits

0x0de2,	// (0x0007ffd4) mup_volume_pane_cp_g1

0x9124,	// (0x00088316) main_touch_calib_pane_t3

0x9138,	// (0x0008832a) main_touch_calib_pane_t4

0x914c,	// (0x0008833e) main_touch_calib_pane_t5

0x0194,	// (0x0007f386) aid_cell_size_toolbar2

0x019c,	// (0x0007f38e) aid_popup3_width_pane

0x01a8,	// (0x0007f39a) aid_zoom_text_msg_primary

0x60e0,	// (0x000852d2) vorec_t7

0x4505,	// (0x000836f7) bg_calc_paper_pane_g1_ParamLimits

0x451d,	// (0x0008370f) bg_calc_paper_pane_g2_ParamLimits

0x4511,	// (0x00083703) bg_calc_paper_pane_g3_ParamLimits

0x4535,	// (0x00083727) bg_calc_paper_pane_g4_ParamLimits

0x4529,	// (0x0008371b) bg_calc_paper_pane_g5_ParamLimits

0x5a94,	// (0x00084c86) bg_calc_paper_pane_g6_ParamLimits

0x5aa5,	// (0x00084c97) bg_calc_paper_pane_g7_ParamLimits

0x5ab6,	// (0x00084ca8) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0008e36c) bg_calc_paper_pane_g_ParamLimits

0x5ac7,	// (0x00084cb9) calc_bg_paper_pane_g9_ParamLimits

0x61df,	// (0x000853d1) image_qvga_pane_ParamLimits

0x61df,	// (0x000853d1) image_qvga_pane

0x43ea,	// (0x000835dc) bg_popup_sub_pane_cp04_ParamLimits

0xe548,	// (0x0008d73a) popup_mup_playback_window_g1_ParamLimits

0xe554,	// (0x0008d746) popup_mup_playback_window_t1_ParamLimits

0xe569,	// (0x0008d75b) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0008e6f8) popup_mup_playback_window_t_ParamLimits

0x8c2b,	// (0x00087e1d) main_mup2_pane_g3_ParamLimits

0x8c2b,	// (0x00087e1d) main_mup2_pane_g3

0x64ef,	// (0x000856e1) popup_toolbar_window_cp04

0xe95e,	// (0x0008db50) popup_call2_audio_second_window_g3_ParamLimits

0xe95e,	// (0x0008db50) popup_call2_audio_second_window_g3

0xed68,	// (0x0008df5a) popup_call2_audio_first_window_g4_ParamLimits

0xed68,	// (0x0008df5a) popup_call2_audio_first_window_g4

0x0864,	// (0x0007fa56) popup_call2_audio_in_window_g4_ParamLimits

0x0864,	// (0x0007fa56) popup_call2_audio_in_window_g4

0x8084,	// (0x00087276) aid_area_sk_bg_cut_ParamLimits

0x8084,	// (0x00087276) aid_area_sk_bg_cut

0xe57e,	// (0x0008d770) aid_area_sk_bg_cut_2_ParamLimits

0xe57e,	// (0x0008d770) aid_area_sk_bg_cut_2

0x8fb7,	// (0x000881a9) aid_placing_details_win

0x8fbf,	// (0x000881b1) aid_placing_details_win_2

0x124e,	// (0x00080440) camera2_autofocus_pane_g1_ParamLimits

0x5698,	// (0x0008488a) popup_fixed_preview_cale_window_ParamLimits

0x5698,	// (0x0008488a) popup_fixed_preview_cale_window

0xe35a,	// (0x0008d54c) navi_slider_pane_g3

0xe363,	// (0x0008d555) navi_slider_pane_g4

0xe36c,	// (0x0008d55e) navi_slider_pane_g5

0xe35a,	// (0x0008d54c) navi_slider_pane_g6

0x78ce,	// (0x00086ac0) navi_slider_pane_g7

0xe47f,	// (0x0008d671) mup_scale_pane_g3

0xe488,	// (0x0008d67a) mup_scale_pane_g4

0xe491,	// (0x0008d683) mup_scale_pane_g5

0x7d0d,	// (0x00086eff) mup_scale_pane_g6

0x7d16,	// (0x00086f08) mup_scale_pane_g7

0xe35a,	// (0x0008d54c) cams2_slider_pane_g3

0x0e97,	// (0x00080089) cams2_slider_pane_g4

0x8f0f,	// (0x00088101) cams2_slider_pane_g5

0xe35a,	// (0x0008d54c) cams2_slider_pane_g6

0x8f17,	// (0x00088109) cams2_slider_pane_g7

0x10d5,	// (0x000802c7) camera2_autofocus_pane_cp_g1

0x142c,	// (0x0008061e) bg_popup_preview_window_pane_cp02_ParamLimits

0x142c,	// (0x0008061e) bg_popup_preview_window_pane_cp02

0x1438,	// (0x0008062a) list_fp_cale_pane_ParamLimits

0x1438,	// (0x0008062a) list_fp_cale_pane

0x1444,	// (0x00080636) popup_fixed_preview_cale_window_t1_ParamLimits

0x1444,	// (0x00080636) popup_fixed_preview_cale_window_t1

0x976f,	// (0x00088961) popup_fixed_preview_cale_window_t2_ParamLimits

0x976f,	// (0x00088961) popup_fixed_preview_cale_window_t2

0x9784,	// (0x00088976) popup_fixed_preview_cale_window_t3_ParamLimits

0x9784,	// (0x00088976) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0008e9c0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0008e9c0) popup_fixed_preview_cale_window_t

0x9799,	// (0x0008898b) list_single_fp_cale_pane_ParamLimits

0x9799,	// (0x0008898b) list_single_fp_cale_pane

0x1462,	// (0x00080654) list_single_fp_cale_pane_g1_ParamLimits

0x1462,	// (0x00080654) list_single_fp_cale_pane_g1

0x146e,	// (0x00080660) list_single_fp_cale_pane_g2_ParamLimits

0x146e,	// (0x00080660) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0008e9c7) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0008e9c7) list_single_fp_cale_pane_g

0x1487,	// (0x00080679) list_single_fp_cale_pane_t1_ParamLimits

0x1487,	// (0x00080679) list_single_fp_cale_pane_t1

0x1499,	// (0x0008068b) list_single_fp_cale_pane_t2_ParamLimits

0x1499,	// (0x0008068b) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0008e9ce) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0008e9ce) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x018a,	// (0x0007f37c) main_dialer_pane

0x97ae,	// (0x000889a0) aid_cell_size_keypad

0x97b8,	// (0x000889aa) dialer_ne_pane

0x97c2,	// (0x000889b4) grid_dialer_command_1_pane

0x97ca,	// (0x000889bc) grid_dialer_command_2_pane

0x97d2,	// (0x000889c4) grid_dialer_keypad_pane

0x97e6,	// (0x000889d8) bg_popup_call_pane_cp06_ParamLimits

0x97e6,	// (0x000889d8) bg_popup_call_pane_cp06

0x97f2,	// (0x000889e4) dialer_ne_clear_pane_ParamLimits

0x97f2,	// (0x000889e4) dialer_ne_clear_pane

0x14cc,	// (0x000806be) dialer_ne_pane_g1

0x14d4,	// (0x000806c6) dialer_ne_pane_t1_ParamLimits

0x14d4,	// (0x000806c6) dialer_ne_pane_t1

0x97fe,	// (0x000889f0) dialer_ne_pane_t2_ParamLimits

0x97fe,	// (0x000889f0) dialer_ne_pane_t2

0x981b,	// (0x00088a0d) dialer_ne_pane_t3_ParamLimits

0x981b,	// (0x00088a0d) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0008e9d3) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0008e9d3) dialer_ne_pane_t

0x983f,	// (0x00088a31) dialer_ne_pane_t3_copy1_ParamLimits

0x983f,	// (0x00088a31) dialer_ne_pane_t3_copy1

0x9863,	// (0x00088a55) cell_dialer_keypad_pane_ParamLimits

0x9863,	// (0x00088a55) cell_dialer_keypad_pane

0x987a,	// (0x00088a6c) cell_dialer_command_1_pane_ParamLimits

0x987a,	// (0x00088a6c) cell_dialer_command_1_pane

0x9890,	// (0x00088a82) cell_dialer_command_2_pane_ParamLimits

0x9890,	// (0x00088a82) cell_dialer_command_2_pane

0x14e6,	// (0x000806d8) bg_button_pane_cp02_ParamLimits

0x14e6,	// (0x000806d8) bg_button_pane_cp02

0x989f,	// (0x00088a91) cell_dialer_keypad_pane_g1_ParamLimits

0x989f,	// (0x00088a91) cell_dialer_keypad_pane_g1

0x14e6,	// (0x000806d8) bg_button_pane_cp03_ParamLimits

0x14e6,	// (0x000806d8) bg_button_pane_cp03

0x98b4,	// (0x00088aa6) cell_dialer_command_1_pane_g1_ParamLimits

0x98b4,	// (0x00088aa6) cell_dialer_command_1_pane_g1

0x14f2,	// (0x000806e4) bg_button_pane_cp04

0x98c7,	// (0x00088ab9) cell_dialer_command_2_pane_g1

0xe349,	// (0x0008d53b) bg_button_pane_cp06

0x14fa,	// (0x000806ec) dialer_ne_clear_pane_g1

0x7811,	// (0x00086a03) navi_pane_g2

0x783f,	// (0x00086a31) navi_pane_g3

0x0002,

0xf409,	// (0x0008e5fb) navi_pane_g

0x786a,	// (0x00086a5c) navi_pane_mv_g2

0x7891,	// (0x00086a83) navi_pane_mv_g5

0x7899,	// (0x00086a8b) navi_pane_mv_t1

0x44f9,	// (0x000836eb) main_clock2_pane

0x98f5,	// (0x00088ae7) main_clock2_list_pane_ParamLimits

0x98f5,	// (0x00088ae7) main_clock2_list_pane

0x991d,	// (0x00088b0f) main_clock2_pane_t1_ParamLimits

0x991d,	// (0x00088b0f) main_clock2_pane_t1

0x994d,	// (0x00088b3f) main_clock2_pane_t2_ParamLimits

0x994d,	// (0x00088b3f) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0008e9da) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0008e9da) main_clock2_pane_t

0x99b4,	// (0x00088ba6) popup_clock_analogue_window_cp03_ParamLimits

0x99b4,	// (0x00088ba6) popup_clock_analogue_window_cp03

0x99d4,	// (0x00088bc6) popup_clock_digital_window_cp02_ParamLimits

0x99d4,	// (0x00088bc6) popup_clock_digital_window_cp02

0x9a49,	// (0x00088c3b) main_clock2_list_single_pane_ParamLimits

0x9a49,	// (0x00088c3b) main_clock2_list_single_pane

0xe349,	// (0x0008d53b) list_highlight_pane_cp05

0x1502,	// (0x000806f4) main_clock2_list_single_pane_t1

0x64ef,	// (0x000856e1) popup_toolbar_window_cp04_ParamLimits

0x8fe1,	// (0x000881d3) camera2_autofocus_pane_g2_ParamLimits

0x8fe1,	// (0x000881d3) camera2_autofocus_pane_g2

0x8fed,	// (0x000881df) camera2_autofocus_pane_g3_ParamLimits

0x8fed,	// (0x000881df) camera2_autofocus_pane_g3

0x8ff9,	// (0x000881eb) camera2_autofocus_pane_g4_ParamLimits

0x8ff9,	// (0x000881eb) camera2_autofocus_pane_g4

0x9005,	// (0x000881f7) camera2_autofocus_pane_g5_ParamLimits

0x9005,	// (0x000881f7) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0008e923) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0008e923) camera2_autofocus_pane_g

0x91d0,	// (0x000883c2) camera2_autofocus_pane_cp_g2

0x91d8,	// (0x000883ca) camera2_autofocus_pane_cp_g3

0x91e0,	// (0x000883d2) camera2_autofocus_pane_cp_g4

0x91e8,	// (0x000883da) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0008e989) camera2_autofocus_pane_cp_g

0x97de,	// (0x000889d0) popup_dialer_spcha_window

0x018a,	// (0x0007f37c) bg_popup_sub_pane_cp07

0x1510,	// (0x00080702) list_spcha_pane

0x1518,	// (0x0008070a) list_single_spcha_pane_ParamLimits

0x1518,	// (0x0008070a) list_single_spcha_pane

0x018a,	// (0x0007f37c) list_highlight_pane_cp06

0x1529,	// (0x0008071b) list_single_spcha_pane_t1

0x060e,	// (0x0007f800) popup_call2_audio_out_window_g4_ParamLimits

0x060e,	// (0x0007f800) popup_call2_audio_out_window_g4

0x018a,	// (0x0007f37c) main_imed2_pane

0x0bf5,	// (0x0007fde7) popup_imed_adjust2_window

0x86a6,	// (0x00087898) popup_imed_trans_window_ParamLimits

0x86a6,	// (0x00087898) popup_imed_trans_window

0x0f11,	// (0x00080103) popup_blid_sat_info2_window_t1

0x0f1f,	// (0x00080111) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0008e8b8) popup_blid_sat_info2_window_t

0x9af3,	// (0x00088ce5) aid_size_cell_colour_35

0x9b0d,	// (0x00088cff) aid_size_cell_colour_112

0x9b24,	// (0x00088d16) aid_size_cell_effect

0x3d47,	// (0x00082f39) bg_tb_trans_pane_cp02

0xf0c9,	// (0x0008e2bb) heading_imed_pane

0x9b3e,	// (0x00088d30) listscroll_imed_pane

0x1537,	// (0x00080729) heading_imed_pane_g1

0x153f,	// (0x00080731) heading_imed_pane_t1

0x154d,	// (0x0008073f) grid_imed_colour_35_pane_ParamLimits

0x154d,	// (0x0008073f) grid_imed_colour_35_pane

0x9b4a,	// (0x00088d3c) grid_imed_effect_pane

0x1568,	// (0x0008075a) list_imed_aspect_pane

0x9b5a,	// (0x00088d4c) scroll_pane_cp027_ParamLimits

0x9b5a,	// (0x00088d4c) scroll_pane_cp027

0x9b66,	// (0x00088d58) cell_imed_effect_pane_ParamLimits

0x9b66,	// (0x00088d58) cell_imed_effect_pane

0x1570,	// (0x00080762) cell_imed_colour_pane_ParamLimits

0x1570,	// (0x00080762) cell_imed_colour_pane

0x15b2,	// (0x000807a4) cell_imed_colour_pane_g1_ParamLimits

0x15b2,	// (0x000807a4) cell_imed_colour_pane_g1

0x15c3,	// (0x000807b5) hgihlgiht_grid_pane_cp016_ParamLimits

0x15c3,	// (0x000807b5) hgihlgiht_grid_pane_cp016

0x9b7e,	// (0x00088d70) cell_imed_effect_pane_g1

0x9b86,	// (0x00088d78) grid_highlight_pane_cp017

0xf0d5,	// (0x0008e2c7) list_imed_single_pane_ParamLimits

0xf0d5,	// (0x0008e2c7) list_imed_single_pane

0x018a,	// (0x0007f37c) list_highlight_pane_cp07

0x15d4,	// (0x000807c6) list_imed_aspect_pane_comp1_t1

0x0bcd,	// (0x0007fdbf) bg_tb_trans_pane_cp05

0x15f6,	// (0x000807e8) popup_imed_adjust2_window_g1

0x161d,	// (0x0008080f) popup_imed_adjust2_window_t1

0x1635,	// (0x00080827) slider_imed_adjust_pane

0x1649,	// (0x0008083b) slider_imed_adjust_pane_g1

0x1659,	// (0x0008084b) slider_imed_adjust_pane_g2

0x1669,	// (0x0008085b) slider_imed_adjust_pane_g3

0x167a,	// (0x0008086c) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0008e9f7) slider_imed_adjust_pane_g

0x9b8f,	// (0x00088d81) aid_size_cell_clipart2

0x9b9b,	// (0x00088d8d) grid_imed_clipart_pane

0x168b,	// (0x0008087d) scroll_pane_cp031

0x9ba5,	// (0x00088d97) cell_imed_clipart_pane_ParamLimits

0x9ba5,	// (0x00088d97) cell_imed_clipart_pane

0x9bcc,	// (0x00088dbe) cell_imed_clipart_pane_g1

0x018a,	// (0x0007f37c) grid_highlight_pane_cp014

0x9901,	// (0x00088af3) main_clock2_pane_g1_ParamLimits

0x9901,	// (0x00088af3) main_clock2_pane_g1

0x99f0,	// (0x00088be2) aid_call2_pane_cp10

0x9a02,	// (0x00088bf4) aid_call_pane_cp10

0xe27e,	// (0x0008d470) popup_clock_analogue_window_cp10_g1

0xe27e,	// (0x0008d470) popup_clock_analogue_window_cp10_g2

0x9a14,	// (0x00088c06) popup_clock_analogue_window_cp10_g3

0x9a14,	// (0x00088c06) popup_clock_analogue_window_cp10_g4

0xe27e,	// (0x0008d470) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0008e9e5) popup_clock_analogue_window_cp10_g

0x9a2a,	// (0x00088c1c) popup_clock_analogue_window_cp10_t1

0x9a5b,	// (0x00088c4d) clock_digital_number_pane_cp10_ParamLimits

0x9a5b,	// (0x00088c4d) clock_digital_number_pane_cp10

0x9a73,	// (0x00088c65) clock_digital_number_pane_cp11_ParamLimits

0x9a73,	// (0x00088c65) clock_digital_number_pane_cp11

0x9a8b,	// (0x00088c7d) clock_digital_number_pane_cp12_ParamLimits

0x9a8b,	// (0x00088c7d) clock_digital_number_pane_cp12

0x9aa3,	// (0x00088c95) clock_digital_number_pane_cp13_ParamLimits

0x9aa3,	// (0x00088c95) clock_digital_number_pane_cp13

0x9abb,	// (0x00088cad) clock_digital_separator_pane_cp10_ParamLimits

0x9abb,	// (0x00088cad) clock_digital_separator_pane_cp10

0x9ad3,	// (0x00088cc5) popup_clock_digital_window_cp02_t1_ParamLimits

0x9ad3,	// (0x00088cc5) popup_clock_digital_window_cp02_t1

0x43e2,	// (0x000835d4) clock_digital_number_pane_cp10_g1

0x43e2,	// (0x000835d4) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0008ea00) clock_digital_number_pane_cp10_g

0x43e2,	// (0x000835d4) clock_digital_separator_pane_cp10_g1

0x43e2,	// (0x000835d4) clock_digital_separator_pane_g2_cp10

0xe319,	// (0x0008d50b) navi_pane_vded_g4

0xe322,	// (0x0008d514) navi_pane_vded_g5

0xe32b,	// (0x0008d51d) navi_pane_vded_t1

0x018a,	// (0x0007f37c) main_vded_pane

0x9bd5,	// (0x00088dc7) main_vded_pane_g1

0x9be1,	// (0x00088dd3) main_vded_pane_g2

0x9beb,	// (0x00088ddd) main_vded_pane_g3

0x0002,

0xf813,	// (0x0008ea05) main_vded_pane_g

0x9bf5,	// (0x00088de7) main_vded_pane_t1

0x9c03,	// (0x00088df5) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0008ea0c) main_vded_pane_t

0x9c11,	// (0x00088e03) vded_slider_pane

0x9c1b,	// (0x00088e0d) vded_video_pane

0x1693,	// (0x00080885) vded_video_pane_g1

0x9c25,	// (0x00088e17) vded_video_pane_g2

0x10d5,	// (0x000802c7) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0008ea11) vded_video_pane_g

0x169d,	// (0x0008088f) vded_slider_pane_g1

0x0de2,	// (0x0007ffd4) vded_slider_pane_g2

0x16a6,	// (0x00080898) vded_slider_pane_g3

0x16af,	// (0x000808a1) vded_slider_pane_g4

0x16b8,	// (0x000808aa) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0008ea18) vded_slider_pane_g

0x96ee,	// (0x000888e0) mup3_rocker_pane_ParamLimits

0x96ee,	// (0x000888e0) mup3_rocker_pane

0x9c2e,	// (0x00088e20) mup3_control_keys_pane_g1

0x9c36,	// (0x00088e28) mup3_control_keys_pane_g2

0x9c3e,	// (0x00088e30) mup3_control_keys_pane_g3

0x9c46,	// (0x00088e38) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0008ea23) mup3_control_keys_pane_g

0x56b6,	// (0x000848a8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x56b6,	// (0x000848a8) popup_toolbar2_fixed_window_cp01

0x9708,	// (0x000888fa) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9708,	// (0x000888fa) popup_toolbar2_fixed_window_cp02

0xead0,	// (0x0008dcc2) popup_call2_audio_second_window_t4_ParamLimits

0xead0,	// (0x0008dcc2) popup_call2_audio_second_window_t4

0xeffe,	// (0x0008e1f0) popup_call2_audio_first_window_t6_ParamLimits

0xeffe,	// (0x0008e1f0) popup_call2_audio_first_window_t6

0x0711,	// (0x0007f903) popup_call2_audio_out_window_t6_ParamLimits

0x0711,	// (0x0007f903) popup_call2_audio_out_window_t6

0x018a,	// (0x0007f37c) main_vitu_pane

0x9c56,	// (0x00088e48) aid_size_cell_itu_ParamLimits

0x9c56,	// (0x00088e48) aid_size_cell_itu

0x1af2,	// (0x00080ce4) bg_popup_window_pane_cp08_ParamLimits

0x1af2,	// (0x00080ce4) bg_popup_window_pane_cp08

0x9c64,	// (0x00088e56) field_vitu_entry_pane_ParamLimits

0x9c64,	// (0x00088e56) field_vitu_entry_pane

0x9c73,	// (0x00088e65) grid_vitu_function_pane_ParamLimits

0x9c73,	// (0x00088e65) grid_vitu_function_pane

0x9c83,	// (0x00088e75) grid_vitu_itu_pane_ParamLimits

0x9c83,	// (0x00088e75) grid_vitu_itu_pane

0x9c93,	// (0x00088e85) cell_vitu_itu_pane_ParamLimits

0x9c93,	// (0x00088e85) cell_vitu_itu_pane

0x9ca8,	// (0x00088e9a) cell_vitu_function_pane_ParamLimits

0x9ca8,	// (0x00088e9a) cell_vitu_function_pane

0x3d47,	// (0x00082f39) bg_popup_sub_pane_cp08_ParamLimits

0x3d47,	// (0x00082f39) bg_popup_sub_pane_cp08

0x9cbc,	// (0x00088eae) field_vitu_entry_pane_t1_ParamLimits

0x9cbc,	// (0x00088eae) field_vitu_entry_pane_t1

0x16d9,	// (0x000808cb) field_vitu_entry_pane_t2_ParamLimits

0x16d9,	// (0x000808cb) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0008ea31) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0008ea31) field_vitu_entry_pane_t

0x16f6,	// (0x000808e8) bg_button_pane_cp05_ParamLimits

0x16f6,	// (0x000808e8) bg_button_pane_cp05

0x9cd9,	// (0x00088ecb) cell_vitu_itu_pane_g1

0x9cf1,	// (0x00088ee3) cell_vitu_itu_pane_t1_ParamLimits

0x9cf1,	// (0x00088ee3) cell_vitu_itu_pane_t1

0x9d03,	// (0x00088ef5) cell_vitu_itu_pane_t2_ParamLimits

0x9d03,	// (0x00088ef5) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0008ea36) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0008ea36) cell_vitu_itu_pane_t

0x1704,	// (0x000808f6) bg_button_pane_cp07

0x9d38,	// (0x00088f2a) cell_vitu_function_pane_g1

0x5932,	// (0x00084b24) main_calc_pane_g1

0x54bf,	// (0x000846b1) aid_visual_content_pane

0x018a,	// (0x0007f37c) main_vradio_pane

0x9d41,	// (0x00088f33) main_vradio_pane_g1_ParamLimits

0x9d41,	// (0x00088f33) main_vradio_pane_g1

0x170e,	// (0x00080900) main_vradio_pane_g2_ParamLimits

0x170e,	// (0x00080900) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0008ea3d) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0008ea3d) main_vradio_pane_g

0x9d51,	// (0x00088f43) main_vradio_pane_t1_ParamLimits

0x9d51,	// (0x00088f43) main_vradio_pane_t1

0x9d63,	// (0x00088f55) main_vradio_pane_t2_ParamLimits

0x9d63,	// (0x00088f55) main_vradio_pane_t2

0x171b,	// (0x0008090d) main_vradio_pane_t3_ParamLimits

0x171b,	// (0x0008090d) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0008ea42) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0008ea42) main_vradio_pane_t

0x9d75,	// (0x00088f67) vradio_rocker_control_pane_ParamLimits

0x9d75,	// (0x00088f67) vradio_rocker_control_pane

0x9d81,	// (0x00088f73) vradio_station_info_pane_ParamLimits

0x9d81,	// (0x00088f73) vradio_station_info_pane

0x172f,	// (0x00080921) vradio_frequency_info_pane_ParamLimits

0x172f,	// (0x00080921) vradio_frequency_info_pane

0x10d5,	// (0x000802c7) vradio_station_info_pane_g1

0x173e,	// (0x00080930) vradio_station_info_pane_t1_ParamLimits

0x173e,	// (0x00080930) vradio_station_info_pane_t1

0x1760,	// (0x00080952) vradio_station_info_pane_t2_ParamLimits

0x1760,	// (0x00080952) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0008ea49) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0008ea49) vradio_station_info_pane_t

0x1772,	// (0x00080964) vradio_tuning_pane

0x177a,	// (0x0008096c) vradio_rocker_control_pane_g1

0x1782,	// (0x00080974) vradio_rocker_control_pane_g2

0x178a,	// (0x0008097c) vradio_rocker_control_pane_g3

0x1792,	// (0x00080984) vradio_rocker_control_pane_g4

0x179a,	// (0x0008098c) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0008ea4e) vradio_rocker_control_pane_g

0x9d90,	// (0x00088f82) vradio_frequency_info_pane_g1

0x17a2,	// (0x00080994) vradio_frequency_info_pane_t1_ParamLimits

0x17a2,	// (0x00080994) vradio_frequency_info_pane_t1

0x9d9a,	// (0x00088f8c) vradio_tuning_pane_g1

0x9da3,	// (0x00088f95) vradio_tuning_pane_t1

0x01c0,	// (0x0007f3b2) area_side_right_pane_ParamLimits

0x01c0,	// (0x0007f3b2) area_side_right_pane

0x0b94,	// (0x0007fd86) status_small_pane_g1

0x0b9c,	// (0x0007fd8e) status_small_pane_g2

0x0ba5,	// (0x0007fd97) status_small_pane_g3

0x0bae,	// (0x0007fda0) status_small_pane_g4

0x0003,

0xf61c,	// (0x0008e80e) status_small_pane_g

0x0bb7,	// (0x0007fda9) status_small_pane_t1

0x018a,	// (0x0007f37c) main_video3_pane

0x17b6,	// (0x000809a8) cams_zoom_vslider_pane

0x17be,	// (0x000809b0) image3_wide_pane_ParamLimits

0x17be,	// (0x000809b0) image3_wide_pane

0x17d8,	// (0x000809ca) image3_wide_small_pane

0x17e4,	// (0x000809d6) main_video3_pane_g1_ParamLimits

0x17e4,	// (0x000809d6) main_video3_pane_g1

0x1800,	// (0x000809f2) main_video3_pane_g2_ParamLimits

0x1800,	// (0x000809f2) main_video3_pane_g2

0x0001,

0xf867,	// (0x0008ea59) main_video3_pane_g_ParamLimits

0xf867,	// (0x0008ea59) main_video3_pane_g

0x181c,	// (0x00080a0e) main_video3_pane_t1_ParamLimits

0x181c,	// (0x00080a0e) main_video3_pane_t1

0x1847,	// (0x00080a39) main_video3_pane_t2_ParamLimits

0x1847,	// (0x00080a39) main_video3_pane_t2

0x1872,	// (0x00080a64) main_video3_pane_t3_ParamLimits

0x1872,	// (0x00080a64) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0008ea5e) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0008ea5e) main_video3_pane_t

0x189f,	// (0x00080a91) cams_zoom_vslider_pane_g1

0x18a8,	// (0x00080a9a) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0008ea65) cams_zoom_vslider_pane_g

0x18b0,	// (0x00080aa2) small_slider_vertical_pane

0x10d5,	// (0x000802c7) small_slider_vertical_pane_g1

0x10d5,	// (0x000802c7) small_slider_vertical_pane_g2

0x18b8,	// (0x00080aaa) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0008ea6a) small_slider_vertical_pane_g

0x018a,	// (0x0007f37c) main_hwr_training_pane

0x18c1,	// (0x00080ab3) hwr_training_instruct_pane_ParamLimits

0x18c1,	// (0x00080ab3) hwr_training_instruct_pane

0x9db2,	// (0x00088fa4) hwr_training_navi_pane_ParamLimits

0x9db2,	// (0x00088fa4) hwr_training_navi_pane

0x9dcc,	// (0x00088fbe) hwr_training_write_pane_ParamLimits

0x9dcc,	// (0x00088fbe) hwr_training_write_pane

0x018a,	// (0x0007f37c) bg_frame_shadow_pane

0x18f8,	// (0x00080aea) hwr_training_write_pane_g1

0x1900,	// (0x00080af2) hwr_training_write_pane_g2

0x1908,	// (0x00080afa) hwr_training_write_pane_g3

0x1910,	// (0x00080b02) hwr_training_write_pane_g4

0x1918,	// (0x00080b0a) hwr_training_write_pane_g5

0x1920,	// (0x00080b12) hwr_training_write_pane_g6

0x1928,	// (0x00080b1a) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0008ea71) hwr_training_write_pane_g

0x9e04,	// (0x00088ff6) hwr_training_navi_pane_g1_ParamLimits

0x9e04,	// (0x00088ff6) hwr_training_navi_pane_g1

0x9e16,	// (0x00089008) hwr_training_navi_pane_g2_ParamLimits

0x9e16,	// (0x00089008) hwr_training_navi_pane_g2

0x9e28,	// (0x0008901a) hwr_training_navi_pane_g3_ParamLimits

0x9e28,	// (0x0008901a) hwr_training_navi_pane_g3

0x9e38,	// (0x0008902a) hwr_training_navi_pane_g4_ParamLimits

0x9e38,	// (0x0008902a) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0008ea80) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0008ea80) hwr_training_navi_pane_g

0x9e52,	// (0x00089044) hwr_training_navi_pane_t1

0x9e60,	// (0x00089052) list_single_hwr_training_instruct_pane_ParamLimits

0x9e60,	// (0x00089052) list_single_hwr_training_instruct_pane

0x1930,	// (0x00080b22) list_single_hwr_training_instruct_pane_t1

0x1015,	// (0x00080207) bg_frame_shadow_pane_g1

0x193f,	// (0x00080b31) bg_frame_shadow_pane_g2

0x1947,	// (0x00080b39) bg_frame_shadow_pane_g3

0x194f,	// (0x00080b41) bg_frame_shadow_pane_g4

0x1957,	// (0x00080b49) bg_frame_shadow_pane_g5

0x195f,	// (0x00080b51) bg_frame_shadow_pane_g6

0x1967,	// (0x00080b59) bg_frame_shadow_pane_g7

0xd98c,	// (0x0008cb7e) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0008ea8b) bg_frame_shadow_pane_g

0x018a,	// (0x0007f37c) main_video_tele_dialer_pane

0x9e96,	// (0x00089088) aid_size_cell_video_keypad_ParamLimits

0x9e96,	// (0x00089088) aid_size_cell_video_keypad

0x9ea6,	// (0x00089098) grid_video_dialer_keypad_pane_ParamLimits

0x9ea6,	// (0x00089098) grid_video_dialer_keypad_pane

0x9ed8,	// (0x000890ca) video_down_pane_cp_ParamLimits

0x9ed8,	// (0x000890ca) video_down_pane_cp

0x9f00,	// (0x000890f2) cell_video_dialer_keypad_pane_ParamLimits

0x9f00,	// (0x000890f2) cell_video_dialer_keypad_pane

0x196f,	// (0x00080b61) bg_button_pane_cp08_ParamLimits

0x196f,	// (0x00080b61) bg_button_pane_cp08

0x9f15,	// (0x00089107) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9f15,	// (0x00089107) cell_video_dialer_keypad_pane_g1

0x96e2,	// (0x000888d4) mup3_rocker2_pane_ParamLimits

0x96e2,	// (0x000888d4) mup3_rocker2_pane

0x10d5,	// (0x000802c7) mup3_rocker2_pane_g1

0x8634,	// (0x00087826) main_dialer2_pane

0x018a,	// (0x0007f37c) main_mp4_pane

0x9f54,	// (0x00089146) main_mp4_pane_g1_ParamLimits

0x9f54,	// (0x00089146) main_mp4_pane_g1

0x9f62,	// (0x00089154) main_mp4_pane_g2_ParamLimits

0x9f62,	// (0x00089154) main_mp4_pane_g2

0x9f70,	// (0x00089162) main_mp4_pane_g3_ParamLimits

0x9f70,	// (0x00089162) main_mp4_pane_g3

0x9fb5,	// (0x000891a7) main_mp4_pane_g4_ParamLimits

0x9fb5,	// (0x000891a7) main_mp4_pane_g4

0x9fdd,	// (0x000891cf) main_mp4_pane_g5_ParamLimits

0x9fdd,	// (0x000891cf) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0008eaab) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0008eaab) main_mp4_pane_g

0xa02d,	// (0x0008921f) main_mp4_pane_t1_ParamLimits

0xa02d,	// (0x0008921f) main_mp4_pane_t1

0xa089,	// (0x0008927b) main_mp4_pane_t2_ParamLimits

0xa089,	// (0x0008927b) main_mp4_pane_t2

0x197b,	// (0x00080b6d) main_mp4_pane_t3_ParamLimits

0x197b,	// (0x00080b6d) main_mp4_pane_t3

0xa0db,	// (0x000892cd) main_mp4_pane_t4_ParamLimits

0xa0db,	// (0x000892cd) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0008eab8) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0008eab8) main_mp4_pane_t

0xa11f,	// (0x00089311) mp4_progress_pane_ParamLimits

0xa11f,	// (0x00089311) mp4_progress_pane

0xa169,	// (0x0008935b) mp4_rocker_pane_ParamLimits

0xa169,	// (0x0008935b) mp4_rocker_pane

0x19a3,	// (0x00080b95) mp4_progress_pane_t1

0x19bc,	// (0x00080bae) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0008eac1) mp4_progress_pane_t

0x19d5,	// (0x00080bc7) mup_progress_pane_cp04

0x227d,	// (0x0008146f) mp4_rocker_pane_g1

0xa189,	// (0x0008937b) aid_cell_size_keypad2_ParamLimits

0xa189,	// (0x0008937b) aid_cell_size_keypad2

0xa199,	// (0x0008938b) dialer2_ne_pane_ParamLimits

0xa199,	// (0x0008938b) dialer2_ne_pane

0xa1a7,	// (0x00089399) grid_dialer2_keypad_pane_ParamLimits

0xa1a7,	// (0x00089399) grid_dialer2_keypad_pane

0x22d8,	// (0x000814ca) bg_popup_call_pane_cp07_ParamLimits

0x22d8,	// (0x000814ca) bg_popup_call_pane_cp07

0xa1b7,	// (0x000893a9) dialer2_ne_pane_t1_ParamLimits

0xa1b7,	// (0x000893a9) dialer2_ne_pane_t1

0xa1dc,	// (0x000893ce) cell_dialer2_keypad_pane_ParamLimits

0xa1dc,	// (0x000893ce) cell_dialer2_keypad_pane

0x19f3,	// (0x00080be5) bg_button_pane_pane_cp04_ParamLimits

0x19f3,	// (0x00080be5) bg_button_pane_pane_cp04

0xa1f3,	// (0x000893e5) cell_dialer2_keypad_pane_g1_ParamLimits

0xa1f3,	// (0x000893e5) cell_dialer2_keypad_pane_g1

0x63b1,	// (0x000855a3) aid_placing_vt_set_content_ParamLimits

0x63b1,	// (0x000855a3) aid_placing_vt_set_content

0x63dd,	// (0x000855cf) aid_placing_vt_set_title_ParamLimits

0x63dd,	// (0x000855cf) aid_placing_vt_set_title

0x018a,	// (0x0007f37c) main_image3_pane

0xa28d,	// (0x0008947f) area_side_right_pane_cp01_ParamLimits

0xa28d,	// (0x0008947f) area_side_right_pane_cp01

0xa2ba,	// (0x000894ac) main_image3_pane_g1_ParamLimits

0xa2ba,	// (0x000894ac) main_image3_pane_g1

0xa2c8,	// (0x000894ba) main_image3_pane_g2_ParamLimits

0xa2c8,	// (0x000894ba) main_image3_pane_g2

0xa2e1,	// (0x000894d3) main_image3_pane_g3_ParamLimits

0xa2e1,	// (0x000894d3) main_image3_pane_g3

0xa2fa,	// (0x000894ec) main_image3_pane_g4_ParamLimits

0xa2fa,	// (0x000894ec) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0008ead0) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0008ead0) main_image3_pane_g

0xa313,	// (0x00089505) main_image3_pane_t1_ParamLimits

0xa313,	// (0x00089505) main_image3_pane_t1

0xa338,	// (0x0008952a) main_image3_pane_t2_ParamLimits

0xa338,	// (0x0008952a) main_image3_pane_t2

0xa357,	// (0x00089549) main_image3_pane_t3_ParamLimits

0xa357,	// (0x00089549) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0008ead9) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0008ead9) main_image3_pane_t

0x1af2,	// (0x00080ce4) grid_sctrl_middle_pane_cp01_ParamLimits

0x1af2,	// (0x00080ce4) grid_sctrl_middle_pane_cp01

0xa3b8,	// (0x000895aa) cell_sctrl_middle_pane_cp01_ParamLimits

0xa3b8,	// (0x000895aa) cell_sctrl_middle_pane_cp01

0xa3c9,	// (0x000895bb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa3c9,	// (0x000895bb) cell_sctrl_middle_pane_cp01_g1

0x018a,	// (0x0007f37c) main_call4_pane

0xa3d6,	// (0x000895c8) aid_size_button_call4_ParamLimits

0xa3d6,	// (0x000895c8) aid_size_button_call4

0xa406,	// (0x000895f8) call4_windows_pane_ParamLimits

0xa406,	// (0x000895f8) call4_windows_pane

0xa420,	// (0x00089612) grid_call4_button_pane_ParamLimits

0xa420,	// (0x00089612) grid_call4_button_pane

0x19ff,	// (0x00080bf1) call4_windows_conf_pane

0x1a14,	// (0x00080c06) popup_call4_audio_first_window_ParamLimits

0x1a14,	// (0x00080c06) popup_call4_audio_first_window

0x1a60,	// (0x00080c52) popup_call4_audio_second_window_ParamLimits

0x1a60,	// (0x00080c52) popup_call4_audio_second_window

0x1a74,	// (0x00080c66) popup_call4_audio_wait_window_ParamLimits

0x1a74,	// (0x00080c66) popup_call4_audio_wait_window

0xa444,	// (0x00089636) cell_call4_button_pane_ParamLimits

0xa444,	// (0x00089636) cell_call4_button_pane

0xa469,	// (0x0008965b) bg_button_pane_cp09_ParamLimits

0xa469,	// (0x0008965b) bg_button_pane_cp09

0xa475,	// (0x00089667) cell_call4_button_pane_g1_ParamLimits

0xa475,	// (0x00089667) cell_call4_button_pane_g1

0xa482,	// (0x00089674) cell_call4_button_pane_t1_ParamLimits

0xa482,	// (0x00089674) cell_call4_button_pane_t1

0x1abc,	// (0x00080cae) popup_call4_audio_conf_window_ParamLimits

0x1abc,	// (0x00080cae) popup_call4_audio_conf_window

0x9715,	// (0x00088907) mup3_progress_pane_t1_ParamLimits

0x972c,	// (0x0008891e) mup3_progress_pane_t2_ParamLimits

0x13ef,	// (0x000805e1) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0008e9b2) mup3_progress_pane_t_ParamLimits

0x1406,	// (0x000805f8) mup_progress_pane_cp03_ParamLimits

0x9c4e,	// (0x00088e40) mup3_control_keys_pane_g4_copy1

0xa14d,	// (0x0008933f) mp4_rocker2_pane_ParamLimits

0xa14d,	// (0x0008933f) mp4_rocker2_pane

0x1ad8,	// (0x00080cca) mp4_rocker2_pane_g1

0x1ad0,	// (0x00080cc2) mp4_rocker2_pane_g2

0xa494,	// (0x00089686) mp4_rocker2_pane_g3

0xa49c,	// (0x0008968e) mp4_rocker2_pane_g4

0xa4a4,	// (0x00089696) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0008eae2) mp4_rocker2_pane_g

0x018a,	// (0x0007f37c) main_camera4_pane

0x018a,	// (0x0007f37c) main_video4_pane

0x9eb4,	// (0x000890a6) main_video_tele_dialer_pane_t1_ParamLimits

0x9eb4,	// (0x000890a6) main_video_tele_dialer_pane_t1

0x9ec6,	// (0x000890b8) main_video_tele_dialer_pane_t2_ParamLimits

0x9ec6,	// (0x000890b8) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0008ea9c) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0008ea9c) main_video_tele_dialer_pane_t

0xa4c4,	// (0x000896b6) cam4_autofocus_pane_ParamLimits

0xa4c4,	// (0x000896b6) cam4_autofocus_pane

0xa4de,	// (0x000896d0) cam4_image_uncrop_pane_ParamLimits

0xa4de,	// (0x000896d0) cam4_image_uncrop_pane

0xa4f5,	// (0x000896e7) cam4_indicators_pane_ParamLimits

0xa4f5,	// (0x000896e7) cam4_indicators_pane

0xa511,	// (0x00089703) main_camera4_pane_g1_ParamLimits

0xa511,	// (0x00089703) main_camera4_pane_g1

0xa51d,	// (0x0008970f) main_camera4_pane_g2_ParamLimits

0xa51d,	// (0x0008970f) main_camera4_pane_g2

0xa51d,	// (0x0008970f) main_camera4_pane_g3_ParamLimits

0xa51d,	// (0x0008970f) main_camera4_pane_g3

0xa529,	// (0x0008971b) main_camera4_pane_g4_ParamLimits

0xa529,	// (0x0008971b) main_camera4_pane_g4

0xa535,	// (0x00089727) main_camera4_pane_g5_ParamLimits

0xa535,	// (0x00089727) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0008eaed) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0008eaed) main_camera4_pane_g

0xa54f,	// (0x00089741) main_camera4_pane_t1_ParamLimits

0xa54f,	// (0x00089741) main_camera4_pane_t1

0xa597,	// (0x00089789) bg_tb_trans_pane_cp06

0xa5ad,	// (0x0008979f) cam4_indicators_pane_g1

0xa5be,	// (0x000897b0) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0008eb08) cam4_indicators_pane_g

0xa5dc,	// (0x000897ce) cam4_indicators_pane_t1

0xa606,	// (0x000897f8) main_video4_pane_g1_ParamLimits

0xa606,	// (0x000897f8) main_video4_pane_g1

0xa612,	// (0x00089804) main_video4_pane_g2_ParamLimits

0xa612,	// (0x00089804) main_video4_pane_g2

0xa61e,	// (0x00089810) main_video4_pane_g3_ParamLimits

0xa61e,	// (0x00089810) main_video4_pane_g3

0xa62a,	// (0x0008981c) main_video4_pane_g4_ParamLimits

0xa62a,	// (0x0008981c) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0008eb0f) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0008eb0f) main_video4_pane_g

0xa64a,	// (0x0008983c) vid4_indicators_pane_ParamLimits

0xa64a,	// (0x0008983c) vid4_indicators_pane

0xa668,	// (0x0008985a) video4_image_uncrop_cif_pane_ParamLimits

0xa668,	// (0x0008985a) video4_image_uncrop_cif_pane

0xa677,	// (0x00089869) video4_image_uncrop_nhd_pane_ParamLimits

0xa677,	// (0x00089869) video4_image_uncrop_nhd_pane

0xa4de,	// (0x000896d0) video4_image_uncrop_vga_pane_ParamLimits

0xa4de,	// (0x000896d0) video4_image_uncrop_vga_pane

0xa684,	// (0x00089876) bg_tb_trans_pane_cp07

0xa5ad,	// (0x0008979f) vid4_indicators_pane_g1

0xa69a,	// (0x0008988c) vid4_indicators_pane_g2

0xa6ab,	// (0x0008989d) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0008eb1a) vid4_indicators_pane_g

0xa6d8,	// (0x000898ca) vid4_indicators_pane_t1

0xa6f1,	// (0x000898e3) cam4_autofocus_pane_g1

0xa6f9,	// (0x000898eb) cam4_autofocus_pane_g2

0xa701,	// (0x000898f3) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0008eb25) cam4_autofocus_pane_g

0xa709,	// (0x000898fb) cam4_autofocus_pane_g3_copy1

0x9ee4,	// (0x000890d6) video_down_pane_cp_t1

0x9ef2,	// (0x000890e4) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0008eaa1) video_down_pane_cp_t

0x1af2,	// (0x00080ce4) popup_vitu2_window_ParamLimits

0x1af2,	// (0x00080ce4) popup_vitu2_window

0xa711,	// (0x00089903) aid_size_cell2_itu2_ParamLimits

0xa711,	// (0x00089903) aid_size_cell2_itu2

0xa733,	// (0x00089925) aid_size_cell_itu2_ParamLimits

0xa733,	// (0x00089925) aid_size_cell_itu2

0xa777,	// (0x00089969) bg_popup_window_pane_cp09_ParamLimits

0xa777,	// (0x00089969) bg_popup_window_pane_cp09

0xa785,	// (0x00089977) field_vitu2_entry_pane_ParamLimits

0xa785,	// (0x00089977) field_vitu2_entry_pane

0xa7a5,	// (0x00089997) grid_vitu2_function_pane_ParamLimits

0xa7a5,	// (0x00089997) grid_vitu2_function_pane

0xa7e9,	// (0x000899db) grid_vitu2_itu_pane_ParamLimits

0xa7e9,	// (0x000899db) grid_vitu2_itu_pane

0xa85f,	// (0x00089a51) cell_vitu2_itu_pane_ParamLimits

0xa85f,	// (0x00089a51) cell_vitu2_itu_pane

0xa874,	// (0x00089a66) cell_vitu2_function_pane_ParamLimits

0xa874,	// (0x00089a66) cell_vitu2_function_pane

0x1b00,	// (0x00080cf2) bg_popup_call_pane_cp08_ParamLimits

0x1b00,	// (0x00080cf2) bg_popup_call_pane_cp08

0x1b19,	// (0x00080d0b) field_vitu2_entry_pane_g1

0x1b25,	// (0x00080d17) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0008eb2c) field_vitu2_entry_pane_g

0xa8b5,	// (0x00089aa7) field_vitu2_entry_pane_t1_ParamLimits

0xa8b5,	// (0x00089aa7) field_vitu2_entry_pane_t1

0x1b3f,	// (0x00080d31) field_vitu2_entry_pane_t2_ParamLimits

0x1b3f,	// (0x00080d31) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0008eb33) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0008eb33) field_vitu2_entry_pane_t

0xa8e5,	// (0x00089ad7) bg_button_pane_cp010_ParamLimits

0xa8e5,	// (0x00089ad7) bg_button_pane_cp010

0xa8f3,	// (0x00089ae5) cell_vitu2_itu_pane_g1

0xa911,	// (0x00089b03) cell_vitu2_itu_pane_t1_ParamLimits

0xa911,	// (0x00089b03) cell_vitu2_itu_pane_t1

0x53c4,	// (0x000845b6) cell_vitu2_itu_pane_t2_ParamLimits

0x53c4,	// (0x000845b6) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0008eb3d) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0008eb3d) cell_vitu2_itu_pane_t

0xa684,	// (0x00089876) bg_button_pane_cp011

0xa963,	// (0x00089b55) cell_vitu2_function_pane_g1

0x018a,	// (0x0007f37c) main_myfav_hc_pane

0xa399,	// (0x0008958b) popup_image3_note_pane_ParamLimits

0xa399,	// (0x0008958b) popup_image3_note_pane

0xa3a7,	// (0x00089599) popup_image3_tool_bar_pane_ParamLimits

0xa3a7,	// (0x00089599) popup_image3_tool_bar_pane

0x5432,	// (0x00084624) cell_vitu2_itu_pane_t3_ParamLimits

0x5432,	// (0x00084624) cell_vitu2_itu_pane_t3

0x018a,	// (0x0007f37c) bg_popup_trans_pane

0x1b64,	// (0x00080d56) grid_image3_tool_bar_pane

0x1b6e,	// (0x00080d60) bg_popup_trans_pane_g1

0xdcd1,	// (0x0008cec3) bg_popup_trans_pane_g2

0x1b76,	// (0x00080d68) bg_popup_trans_pane_g3

0x1b7e,	// (0x00080d70) bg_popup_trans_pane_g4

0x1b86,	// (0x00080d78) bg_popup_trans_pane_g5

0x1b8e,	// (0x00080d80) bg_popup_trans_pane_g6

0x1b96,	// (0x00080d88) bg_popup_trans_pane_g7

0x1b9e,	// (0x00080d90) bg_popup_trans_pane_g8

0xdcb1,	// (0x0008cea3) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0008eb44) bg_popup_trans_pane_g

0x1ba6,	// (0x00080d98) cell_image3_tool_bar_pane_ParamLimits

0x1ba6,	// (0x00080d98) cell_image3_tool_bar_pane

0x10d5,	// (0x000802c7) cell_image3_tool_bar_pane_g1

0x018a,	// (0x0007f37c) bg_popup_trans_pane_cp1

0x1bba,	// (0x00080dac) popup_image3_note_pane_t1

0x1bc8,	// (0x00080dba) popup_image3_note_pane_t2

0x1bd6,	// (0x00080dc8) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0008eb57) popup_image3_note_pane_t

0x1be4,	// (0x00080dd6) popup_image3_note_pane_t3_copy1

0xa977,	// (0x00089b69) bg_myfav_hc_instruction_pane_ParamLimits

0xa977,	// (0x00089b69) bg_myfav_hc_instruction_pane

0xa98f,	// (0x00089b81) cell_myfav_contact_pane_ParamLimits

0xa98f,	// (0x00089b81) cell_myfav_contact_pane

0xa9a9,	// (0x00089b9b) cell_myfav_contact_pane_cp1_ParamLimits

0xa9a9,	// (0x00089b9b) cell_myfav_contact_pane_cp1

0xa9c1,	// (0x00089bb3) cell_myfav_contact_pane_cp2_ParamLimits

0xa9c1,	// (0x00089bb3) cell_myfav_contact_pane_cp2

0xa9d9,	// (0x00089bcb) cell_myfav_contact_pane_cp3_ParamLimits

0xa9d9,	// (0x00089bcb) cell_myfav_contact_pane_cp3

0xa9f0,	// (0x00089be2) cell_myfav_contact_pane_cp4_ParamLimits

0xa9f0,	// (0x00089be2) cell_myfav_contact_pane_cp4

0xaa06,	// (0x00089bf8) cell_myfav_contact_pane_cp5_ParamLimits

0xaa06,	// (0x00089bf8) cell_myfav_contact_pane_cp5

0xaa1a,	// (0x00089c0c) cell_myfav_contact_pane_cp6_ParamLimits

0xaa1a,	// (0x00089c0c) cell_myfav_contact_pane_cp6

0xaa2e,	// (0x00089c20) cell_myfav_contact_pane_cp7_ParamLimits

0xaa2e,	// (0x00089c20) cell_myfav_contact_pane_cp7

0x1bf2,	// (0x00080de4) listscroll_gen_pane_cp05

0xaa46,	// (0x00089c38) main_myfav_hc_pane_g1_ParamLimits

0xaa46,	// (0x00089c38) main_myfav_hc_pane_g1

0xaa5e,	// (0x00089c50) main_myfav_hc_pane_g2_ParamLimits

0xaa5e,	// (0x00089c50) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0008eb5e) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0008eb5e) main_myfav_hc_pane_g

0xaa8e,	// (0x00089c80) main_myfav_hc_pane_t1_ParamLimits

0xaa8e,	// (0x00089c80) main_myfav_hc_pane_t1

0x1bfb,	// (0x00080ded) main_myfav_hc_pane_t2_ParamLimits

0x1bfb,	// (0x00080ded) main_myfav_hc_pane_t2

0x1c0d,	// (0x00080dff) main_myfav_hc_pane_t3_ParamLimits

0x1c0d,	// (0x00080dff) main_myfav_hc_pane_t3

0xaaa5,	// (0x00089c97) main_myfav_hc_pane_t4_ParamLimits

0xaaa5,	// (0x00089c97) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0008eb65) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0008eb65) main_myfav_hc_pane_t

0x10d5,	// (0x000802c7) bg_myfav_hc_instruction_pane_g1

0x1c1f,	// (0x00080e11) cell_myfav_contact_pane_g1_ParamLimits

0x1c1f,	// (0x00080e11) cell_myfav_contact_pane_g1

0x1c1f,	// (0x00080e11) cell_myfav_contact_pane_g2_ParamLimits

0x1c1f,	// (0x00080e11) cell_myfav_contact_pane_g2

0x1c2b,	// (0x00080e1d) cell_myfav_contact_pane_g3_ParamLimits

0x1c2b,	// (0x00080e1d) cell_myfav_contact_pane_g3

0x13d9,	// (0x000805cb) cell_myfav_contact_pane_g4_ParamLimits

0x13d9,	// (0x000805cb) cell_myfav_contact_pane_g4

0x1c38,	// (0x00080e2a) cell_myfav_contact_pane_g5_ParamLimits

0x1c38,	// (0x00080e2a) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0008eb70) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0008eb70) cell_myfav_contact_pane_g

0xaa76,	// (0x00089c68) main_myfav_hc_pane_g3_ParamLimits

0xaa76,	// (0x00089c68) main_myfav_hc_pane_g3

0x55fb,	// (0x000847ed) popup_adpt_find_window

0xaacf,	// (0x00089cc1) afind_page_pane_ParamLimits

0xaacf,	// (0x00089cc1) afind_page_pane

0xaadc,	// (0x00089cce) aid_size_cell_afind_ParamLimits

0xaadc,	// (0x00089cce) aid_size_cell_afind

0xaaf6,	// (0x00089ce8) bg_popup_sub_pane_cp09_ParamLimits

0xaaf6,	// (0x00089ce8) bg_popup_sub_pane_cp09

0xab03,	// (0x00089cf5) find_pane_cp01_ParamLimits

0xab03,	// (0x00089cf5) find_pane_cp01

0x1c44,	// (0x00080e36) grid_afind_control_pane_ParamLimits

0x1c44,	// (0x00080e36) grid_afind_control_pane

0xab10,	// (0x00089d02) grid_afind_pane_ParamLimits

0xab10,	// (0x00089d02) grid_afind_pane

0xab2c,	// (0x00089d1e) cell_afind_pane_ParamLimits

0xab2c,	// (0x00089d1e) cell_afind_pane

0x10d5,	// (0x000802c7) afind_page_pane_g1

0xab74,	// (0x00089d66) afind_page_pane_g2

0xab7d,	// (0x00089d6f) afind_page_pane_g3

0x0002,

0xf989,	// (0x0008eb7b) afind_page_pane_g

0xab86,	// (0x00089d78) afind_page_pane_t1

0x1c58,	// (0x00080e4a) cell_afind_grid_control_pane_ParamLimits

0x1c58,	// (0x00080e4a) cell_afind_grid_control_pane

0x19f3,	// (0x00080be5) bg_button_pane_cp69_ParamLimits

0x19f3,	// (0x00080be5) bg_button_pane_cp69

0xab9d,	// (0x00089d8f) cell_afind_pane_g1_ParamLimits

0xab9d,	// (0x00089d8f) cell_afind_pane_g1

0xabaa,	// (0x00089d9c) cell_afind_pane_t1_ParamLimits

0xabaa,	// (0x00089d9c) cell_afind_pane_t1

0xdacc,	// (0x0008ccbe) bg_button_pane_cp72

0x1c67,	// (0x00080e59) cell_afind_grid_control_pane_g1

0x81af,	// (0x000873a1) aid_image_placing_area_ParamLimits

0x81af,	// (0x000873a1) aid_image_placing_area

0x16c1,	// (0x000808b3) field_vitu_entry_pane_g1_ParamLimits

0x16c1,	// (0x000808b3) field_vitu_entry_pane_g1

0x16cd,	// (0x000808bf) field_vitu_entry_pane_g2_ParamLimits

0x16cd,	// (0x000808bf) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0008ea2c) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0008ea2c) field_vitu_entry_pane_g

0x9cd9,	// (0x00088ecb) cell_vitu_itu_pane_g1_ParamLimits

0x9d1b,	// (0x00088f0d) cell_vitu_itu_pane_t3_ParamLimits

0x9d1b,	// (0x00088f0d) cell_vitu_itu_pane_t3

0x19a3,	// (0x00080b95) mp4_progress_pane_t1_ParamLimits

0x19bc,	// (0x00080bae) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0008eac1) mp4_progress_pane_t_ParamLimits

0x19d5,	// (0x00080bc7) mup_progress_pane_cp04_ParamLimits

0xaab9,	// (0x00089cab) main_myfav_hc_pane_t5_ParamLimits

0xaab9,	// (0x00089cab) main_myfav_hc_pane_t5

0x01b0,	// (0x0007f3a2) aid_zoom_text_primary

0x55fb,	// (0x000847ed) popup_adpt_find_window_ParamLimits

0x3d47,	// (0x00082f39) main_cam_set_pane

0xa503,	// (0x000896f5) cam4_zoom_pane_ParamLimits

0xa503,	// (0x000896f5) cam4_zoom_pane

0xabbc,	// (0x00089dae) main_cam_set_pane_g1_ParamLimits

0xabbc,	// (0x00089dae) main_cam_set_pane_g1

0xabca,	// (0x00089dbc) main_cam_set_pane_g2_ParamLimits

0xabca,	// (0x00089dbc) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0008eb82) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0008eb82) main_cam_set_pane_g

0xabd6,	// (0x00089dc8) main_cam_set_pane_t1_ParamLimits

0xabd6,	// (0x00089dc8) main_cam_set_pane_t1

0xabf2,	// (0x00089de4) main_cset_listscroll_pane_ParamLimits

0xabf2,	// (0x00089de4) main_cset_listscroll_pane

0xac1d,	// (0x00089e0f) main_cset_slider_pane_ParamLimits

0xac1d,	// (0x00089e0f) main_cset_slider_pane

0x1c78,	// (0x00080e6a) main_cset_list_pane_ParamLimits

0x1c78,	// (0x00080e6a) main_cset_list_pane

0x1c88,	// (0x00080e7a) scroll_pane_cp028

0xac3c,	// (0x00089e2e) aid_area_touch_slider

0xac58,	// (0x00089e4a) cset_slider_pane

0xac82,	// (0x00089e74) main_cset_slider_pane_g1

0xac97,	// (0x00089e89) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0008eb87) main_cset_slider_pane_g

0x1cc1,	// (0x00080eb3) main_cset_slider_pane_t1

0xad5f,	// (0x00089f51) main_cset_slider_pane_t2

0xad79,	// (0x00089f6b) main_cset_slider_pane_t3

0xad93,	// (0x00089f85) main_cset_slider_pane_t4

0xadb1,	// (0x00089fa3) main_cset_slider_pane_t5

0xadd3,	// (0x00089fc5) main_cset_slider_pane_t6

0xadea,	// (0x00089fdc) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0008ebac) main_cset_slider_pane_t

0xaef8,	// (0x0008a0ea) cset_list_set_pane_ParamLimits

0xaef8,	// (0x0008a0ea) cset_list_set_pane

0xaf15,	// (0x0008a107) aid_position_infowindow_above

0xaf1d,	// (0x0008a10f) aid_position_infowindow_below

0xaf25,	// (0x0008a117) cset_list_set_pane_g1_ParamLimits

0xaf25,	// (0x0008a117) cset_list_set_pane_g1

0xaf31,	// (0x0008a123) cset_list_set_pane_g3_ParamLimits

0xaf31,	// (0x0008a123) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0008ebcb) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0008ebcb) cset_list_set_pane_g

0xaf40,	// (0x0008a132) cset_list_set_pane_t1_ParamLimits

0xaf40,	// (0x0008a132) cset_list_set_pane_t1

0x3d47,	// (0x00082f39) list_highlight_pane_cp021_ParamLimits

0x3d47,	// (0x00082f39) list_highlight_pane_cp021

0xe47f,	// (0x0008d671) cset_slider_pane_g1

0xe491,	// (0x0008d683) cset_slider_pane_g2

0xe488,	// (0x0008d67a) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0008ebd0) cset_slider_pane_g

0xaf55,	// (0x0008a147) aid_area_touch_cam4_zoom

0xaf5d,	// (0x0008a14f) cam4_zoom_cont_pane

0xaf65,	// (0x0008a157) cam4_zoom_pane_g1

0xaf6d,	// (0x0008a15f) cam4_zoom_pane_g2

0xaf75,	// (0x0008a167) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0008ebd7) cam4_zoom_pane_g

0xaf7d,	// (0x0008a16f) cam4_zoom_cont_pane_g1

0xaf86,	// (0x0008a178) cam4_zoom_cont_pane_g2

0xaf8f,	// (0x0008a181) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0008ebde) cam4_zoom_cont_pane_g

0xa3f0,	// (0x000895e2) call4_image_pane_ParamLimits

0xa3f0,	// (0x000895e2) call4_image_pane

0x19ff,	// (0x00080bf1) call4_windows_conf_pane_ParamLimits

0x1a3e,	// (0x00080c30) popup_call4_audio_in_window_ParamLimits

0x1a3e,	// (0x00080c30) popup_call4_audio_in_window

0x018a,	// (0x0007f37c) bg_popup_call2_act_pane_cp02

0x1ab4,	// (0x00080ca6) call4_list_conf_pane

0x10d5,	// (0x000802c7) call4_image_pane_g1

0x10d5,	// (0x000802c7) call4_image_pane_g2

0x0001,

0xf700,	// (0x0008e8f2) call4_image_pane_g

0x1d7c,	// (0x00080f6e) list_single_graphic_popup_conf4_pane_ParamLimits

0x1d7c,	// (0x00080f6e) list_single_graphic_popup_conf4_pane

0x018a,	// (0x0007f37c) list_highlight_pane_cp022

0x1d8f,	// (0x00080f81) list_single_graphic_popup_conf4_pane_g1

0xe170,	// (0x0008d362) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0008ebe5) list_single_graphic_popup_conf4_pane_g

0x1d97,	// (0x00080f89) list_single_graphic_popup_conf4_pane_t1

0x6541,	// (0x00085733) popup_vtel_slider_window_ParamLimits

0x6541,	// (0x00085733) popup_vtel_slider_window

0x19e1,	// (0x00080bd3) dialer2_ne_pane_t2_ParamLimits

0x19e1,	// (0x00080bd3) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0008eac6) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0008eac6) dialer2_ne_pane_t

0x3d47,	// (0x00082f39) bg_popup_sub_pane_cp010_ParamLimits

0x3d47,	// (0x00082f39) bg_popup_sub_pane_cp010

0xaf98,	// (0x0008a18a) popup_vtel_slider_window_g1_ParamLimits

0xaf98,	// (0x0008a18a) popup_vtel_slider_window_g1

0xafa4,	// (0x0008a196) popup_vtel_slider_window_g2_ParamLimits

0xafa4,	// (0x0008a196) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0008ebea) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0008ebea) popup_vtel_slider_window_g

0xafec,	// (0x0008a1de) vtel_slider_pane_ParamLimits

0xafec,	// (0x0008a1de) vtel_slider_pane

0xaffb,	// (0x0008a1ed) vtel_slider_pane_g1_ParamLimits

0xaffb,	// (0x0008a1ed) vtel_slider_pane_g1

0xb008,	// (0x0008a1fa) vtel_slider_pane_g2_ParamLimits

0xb008,	// (0x0008a1fa) vtel_slider_pane_g2

0xb015,	// (0x0008a207) vtel_slider_pane_g3_ParamLimits

0xb015,	// (0x0008a207) vtel_slider_pane_g3

0xaffb,	// (0x0008a1ed) vtel_slider_pane_g4_ParamLimits

0xaffb,	// (0x0008a1ed) vtel_slider_pane_g4

0xb022,	// (0x0008a214) vtel_slider_pane_g5_ParamLimits

0xb022,	// (0x0008a214) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0008ebf3) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0008ebf3) vtel_slider_pane_g

0x018a,	// (0x0007f37c) main_gallery2_pane

0xa759,	// (0x0008994b) aid_size_row_itut2_dropdow_list_ParamLimits

0xa759,	// (0x0008994b) aid_size_row_itut2_dropdow_list

0xa7c7,	// (0x000899b9) grid_vitu2_function_top_pane_ParamLimits

0xa7c7,	// (0x000899b9) grid_vitu2_function_top_pane

0xa81d,	// (0x00089a0f) popup_vitu2_dropdown_list_window_ParamLimits

0xa81d,	// (0x00089a0f) popup_vitu2_dropdown_list_window

0xa83d,	// (0x00089a2f) popup_vitu2_match_list_window

0xb02f,	// (0x0008a221) cell_vitu2_function_top_pane_ParamLimits

0xb02f,	// (0x0008a221) cell_vitu2_function_top_pane

0xb04f,	// (0x0008a241) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb04f,	// (0x0008a241) cell_vitu2_function_top_pane_cp01

0xb06d,	// (0x0008a25f) cell_vitu2_function_top_wide_pane_ParamLimits

0xb06d,	// (0x0008a25f) cell_vitu2_function_top_wide_pane

0xa684,	// (0x00089876) bg_button_pane_cp012

0xb08b,	// (0x0008a27d) cell_vitu2_function_top_pane_g1

0xb09a,	// (0x0008a28c) bg_button_pane_cp013_ParamLimits

0xb09a,	// (0x0008a28c) bg_button_pane_cp013

0xb0b6,	// (0x0008a2a8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb0b6,	// (0x0008a2a8) cell_vitu2_function_top_wide_pane_g1

0xb0ce,	// (0x0008a2c0) bg_popup_sub_pane_cp20

0xb0dc,	// (0x0008a2ce) list_vitu2_match_list_pane

0x1b6e,	// (0x00080d60) bg_popup_sub_pane_cp20_g1

0x1b76,	// (0x00080d68) bg_popup_sub_pane_cp20_g2

0xdcd1,	// (0x0008cec3) bg_popup_sub_pane_cp20_g3

0x1b7e,	// (0x00080d70) bg_popup_sub_pane_cp20_g4

0xdcb1,	// (0x0008cea3) bg_popup_sub_pane_cp20_g5

0x1dbb,	// (0x00080fad) bg_popup_sub_pane_cp20_g6

0x1b8e,	// (0x00080d80) bg_popup_sub_pane_cp20_g7

0x1b96,	// (0x00080d88) bg_popup_sub_pane_cp20_g8

0x1b9e,	// (0x00080d90) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0008ebfe) bg_popup_sub_pane_cp20_g

0xb0f4,	// (0x0008a2e6) list_vitu2_match_list_item_pane_ParamLimits

0xb0f4,	// (0x0008a2e6) list_vitu2_match_list_item_pane

0xb106,	// (0x0008a2f8) list_vitu2_match_list_item_pane_t1

0x5a07,	// (0x00084bf9) bg_popup_sub_pane_cp21

0xb143,	// (0x0008a335) grid_vitu2_dropdown_list_pane

0xb14b,	// (0x0008a33d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb14b,	// (0x0008a33d) cell_vitu2_dropdown_list_char_pane

0xb16c,	// (0x0008a35e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb16c,	// (0x0008a35e) cell_vitu2_dropdown_list_ctrl_pane

0x1ded,	// (0x00080fdf) cell_vitu2_dropdown_list_char_pane_g1

0x1de4,	// (0x00080fd6) cell_vitu2_dropdown_list_char_pane_g2

0x1ddb,	// (0x00080fcd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0008ec1b) cell_vitu2_dropdown_list_char_pane_g

0xb198,	// (0x0008a38a) cell_vitu2_dropdown_list_char_pane_t1

0xb1a6,	// (0x0008a398) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb1a6,	// (0x0008a398) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb1b6,	// (0x0008a3a8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb1b6,	// (0x0008a3a8) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb1c7,	// (0x0008a3b9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb1c7,	// (0x0008a3b9) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb1d7,	// (0x0008a3c9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb1d7,	// (0x0008a3c9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa597,	// (0x00089789) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa597,	// (0x00089789) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0008ec22) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0008ec22) cell_vitu2_dropdown_list_ctrl_pane_g

0xb1f3,	// (0x0008a3e5) aid_size_cell_gallery2_ParamLimits

0xb1f3,	// (0x0008a3e5) aid_size_cell_gallery2

0xb201,	// (0x0008a3f3) grid_gallery2_pane_ParamLimits

0xb201,	// (0x0008a3f3) grid_gallery2_pane

0xb210,	// (0x0008a402) scroll_pane_cp029_ParamLimits

0xb210,	// (0x0008a402) scroll_pane_cp029

0xb21c,	// (0x0008a40e) cell_gallery2_pane_ParamLimits

0xb21c,	// (0x0008a40e) cell_gallery2_pane

0x1df6,	// (0x00080fe8) cell_gallery2_pane_g2

0xb24d,	// (0x0008a43f) cell_gallery2_pane_g3

0x1e00,	// (0x00080ff2) cell_gallery2_pane_g4

0x1e08,	// (0x00080ffa) cell_gallery2_pane_g5

0xe349,	// (0x0008d53b) grid_highlight_pane_cp10

0xa83d,	// (0x00089a2f) popup_vitu2_match_list_window_ParamLimits

0xa84f,	// (0x00089a41) popup_vitu2_query_window_ParamLimits

0xa84f,	// (0x00089a41) popup_vitu2_query_window

0x5a07,	// (0x00084bf9) bg_vitu2_candi_button_pane

0x1ded,	// (0x00080fdf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1de4,	// (0x00080fd6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1ddb,	// (0x00080fcd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb255,	// (0x0008a447) bg_button_pane_cp015

0xb267,	// (0x0008a459) bg_button_pane_cp016

0xb27a,	// (0x0008a46c) bg_button_pane_cp017

0x0bcd,	// (0x0007fdbf) bg_popup_sub_pane_cp22

0x1e10,	// (0x00081002) popup_vitu2_query_window_g1

0xb2bf,	// (0x0008a4b1) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0008ec2d) popup_vitu2_query_window_g

0xb2dc,	// (0x0008a4ce) popup_vitu2_query_window_t1_ParamLimits

0xb2dc,	// (0x0008a4ce) popup_vitu2_query_window_t1

0xb30f,	// (0x0008a501) popup_vitu2_query_window_t2_ParamLimits

0xb30f,	// (0x0008a501) popup_vitu2_query_window_t2

0xb321,	// (0x0008a513) popup_vitu2_query_window_t3_ParamLimits

0xb321,	// (0x0008a513) popup_vitu2_query_window_t3

0xb349,	// (0x0008a53b) popup_vitu2_query_window_t4_ParamLimits

0xb349,	// (0x0008a53b) popup_vitu2_query_window_t4

0xb36a,	// (0x0008a55c) popup_vitu2_query_window_t5_ParamLimits

0xb36a,	// (0x0008a55c) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0008ec34) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0008ec34) popup_vitu2_query_window_t

0x1c70,	// (0x00080e62) main_cset_text_pane

0xac3c,	// (0x00089e2e) aid_area_touch_slider_ParamLimits

0xac58,	// (0x00089e4a) cset_slider_pane_ParamLimits

0xac82,	// (0x00089e74) main_cset_slider_pane_g1_ParamLimits

0xac97,	// (0x00089e89) main_cset_slider_pane_g2_ParamLimits

0x1c91,	// (0x00080e83) main_cset_slider_pane_g3_ParamLimits

0x1c91,	// (0x00080e83) main_cset_slider_pane_g3

0xacac,	// (0x00089e9e) main_cset_slider_pane_g4_ParamLimits

0xacac,	// (0x00089e9e) main_cset_slider_pane_g4

0xacbb,	// (0x00089ead) main_cset_slider_pane_g5_ParamLimits

0xacbb,	// (0x00089ead) main_cset_slider_pane_g5

0xacc9,	// (0x00089ebb) main_cset_slider_pane_g6_ParamLimits

0xacc9,	// (0x00089ebb) main_cset_slider_pane_g6

0xf995,	// (0x0008eb87) main_cset_slider_pane_g_ParamLimits

0x1cc1,	// (0x00080eb3) main_cset_slider_pane_t1_ParamLimits

0xad5f,	// (0x00089f51) main_cset_slider_pane_t2_ParamLimits

0xad79,	// (0x00089f6b) main_cset_slider_pane_t3_ParamLimits

0xad93,	// (0x00089f85) main_cset_slider_pane_t4_ParamLimits

0xadb1,	// (0x00089fa3) main_cset_slider_pane_t5_ParamLimits

0xadd3,	// (0x00089fc5) main_cset_slider_pane_t6_ParamLimits

0xadea,	// (0x00089fdc) main_cset_slider_pane_t7_ParamLimits

0xae18,	// (0x0008a00a) main_cset_slider_pane_t8_ParamLimits

0xae18,	// (0x0008a00a) main_cset_slider_pane_t8

0xae40,	// (0x0008a032) main_cset_slider_pane_t9_ParamLimits

0xae40,	// (0x0008a032) main_cset_slider_pane_t9

0xae68,	// (0x0008a05a) main_cset_slider_pane_t10_ParamLimits

0xae68,	// (0x0008a05a) main_cset_slider_pane_t10

0xae90,	// (0x0008a082) main_cset_slider_pane_t11_ParamLimits

0xae90,	// (0x0008a082) main_cset_slider_pane_t11

0xaeba,	// (0x0008a0ac) main_cset_slider_pane_t12_ParamLimits

0xaeba,	// (0x0008a0ac) main_cset_slider_pane_t12

0xaed9,	// (0x0008a0cb) main_cset_slider_pane_t13_ParamLimits

0xaed9,	// (0x0008a0cb) main_cset_slider_pane_t13

0xf9ba,	// (0x0008ebac) main_cset_slider_pane_t_ParamLimits

0x018a,	// (0x0007f37c) bg_popup_sub_pane_cp011

0x1e1c,	// (0x0008100e) main_cset_text_pane_g1

0x1e24,	// (0x00081016) main_cset_text_pane_t1

0x1e32,	// (0x00081024) main_cset_text_pane_t2

0x1e40,	// (0x00081032) main_cset_text_pane_t3

0x1e4e,	// (0x00081040) main_cset_text_pane_t4

0x1e5c,	// (0x0008104e) main_cset_text_pane_t5

0x1e6a,	// (0x0008105c) main_cset_text_pane_t6

0x1e78,	// (0x0008106a) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0008ec43) main_cset_text_pane_t

0x018a,	// (0x0007f37c) main_cam4_burst_pane

0x018a,	// (0x0007f37c) main_cam5_pane

0xddca,	// (0x0008cfbc) bg_button_pane_cp019

0xab94,	// (0x00089d86) bg_button_pane_cp020

0x1c9d,	// (0x00080e8f) main_cset_slider_pane_g7_ParamLimits

0x1c9d,	// (0x00080e8f) main_cset_slider_pane_g7

0x1ca9,	// (0x00080e9b) main_cset_slider_pane_g8_ParamLimits

0x1ca9,	// (0x00080e9b) main_cset_slider_pane_g8

0xacdf,	// (0x00089ed1) main_cset_slider_pane_g9_ParamLimits

0xacdf,	// (0x00089ed1) main_cset_slider_pane_g9

0xaceb,	// (0x00089edd) main_cset_slider_pane_g10_ParamLimits

0xaceb,	// (0x00089edd) main_cset_slider_pane_g10

0xacf7,	// (0x00089ee9) main_cset_slider_pane_g11_ParamLimits

0xacf7,	// (0x00089ee9) main_cset_slider_pane_g11

0xad03,	// (0x00089ef5) main_cset_slider_pane_g12_ParamLimits

0xad03,	// (0x00089ef5) main_cset_slider_pane_g12

0xad0f,	// (0x00089f01) main_cset_slider_pane_g13_ParamLimits

0xad0f,	// (0x00089f01) main_cset_slider_pane_g13

0xad1d,	// (0x00089f0f) main_cset_slider_pane_g14_ParamLimits

0xad1d,	// (0x00089f0f) main_cset_slider_pane_g14

0xad2b,	// (0x00089f1d) main_cset_slider_pane_g15_ParamLimits

0xad2b,	// (0x00089f1d) main_cset_slider_pane_g15

0x1cef,	// (0x00080ee1) main_cset_slider_pane_t14_ParamLimits

0x1cef,	// (0x00080ee1) main_cset_slider_pane_t14

0x1d28,	// (0x00080f1a) main_cset_slider_pane_t15_ParamLimits

0x1d28,	// (0x00080f1a) main_cset_slider_pane_t15

0xb3e1,	// (0x0008a5d3) aid_cam4_burst_size_cell_ParamLimits

0xb3e1,	// (0x0008a5d3) aid_cam4_burst_size_cell

0xb3fd,	// (0x0008a5ef) grid_cam4_burst_pane_ParamLimits

0xb3fd,	// (0x0008a5ef) grid_cam4_burst_pane

0xb42d,	// (0x0008a61f) linegrid_cam4_burst_pane_ParamLimits

0xb42d,	// (0x0008a61f) linegrid_cam4_burst_pane

0xb44f,	// (0x0008a641) scroll_pane_cp30_ParamLimits

0xb44f,	// (0x0008a641) scroll_pane_cp30

0xb45b,	// (0x0008a64d) cell_cam4_burst_pane_ParamLimits

0xb45b,	// (0x0008a64d) cell_cam4_burst_pane

0x1e92,	// (0x00081084) linegrid_cam4_burst_pane_g1_ParamLimits

0x1e92,	// (0x00081084) linegrid_cam4_burst_pane_g1

0xb497,	// (0x0008a689) linegrid_cam4_burst_pane_g2_ParamLimits

0xb497,	// (0x0008a689) linegrid_cam4_burst_pane_g2

0x1e9f,	// (0x00081091) linegrid_cam4_burst_pane_g3_ParamLimits

0x1e9f,	// (0x00081091) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0008ec52) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0008ec52) linegrid_cam4_burst_pane_g

0xb4a8,	// (0x0008a69a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb4a8,	// (0x0008a69a) linegrid_cam4_burst_pane_g3_copy1

0x1eac,	// (0x0008109e) linegrid_cam4_burst_pane_g4_ParamLimits

0x1eac,	// (0x0008109e) linegrid_cam4_burst_pane_g4

0xb4c2,	// (0x0008a6b4) linegrid_cam4_burst_pane_g5_ParamLimits

0xb4c2,	// (0x0008a6b4) linegrid_cam4_burst_pane_g5

0xb4d3,	// (0x0008a6c5) linegrid_cam4_burst_pane_g6_ParamLimits

0xb4d3,	// (0x0008a6c5) linegrid_cam4_burst_pane_g6

0x1eb9,	// (0x000810ab) linegrid_cam4_burst_pane_g7_ParamLimits

0x1eb9,	// (0x000810ab) linegrid_cam4_burst_pane_g7

0xb4e4,	// (0x0008a6d6) cell_cam4_burst_pane_g1

0x1ed2,	// (0x000810c4) main_cam5_pane_t1_ParamLimits

0x1ed2,	// (0x000810c4) main_cam5_pane_t1

0x1ee4,	// (0x000810d6) main_cam5_pane_t2_ParamLimits

0x1ee4,	// (0x000810d6) main_cam5_pane_t2

0x1ef6,	// (0x000810e8) main_cam5_pane_t3_ParamLimits

0x1ef6,	// (0x000810e8) main_cam5_pane_t3

0x1f08,	// (0x000810fa) main_cam5_pane_t4_ParamLimits

0x1f08,	// (0x000810fa) main_cam5_pane_t4

0x1f1e,	// (0x00081110) main_cam5_pane_t5_ParamLimits

0x1f1e,	// (0x00081110) main_cam5_pane_t5

0x1f30,	// (0x00081122) main_cam5_pane_t6_ParamLimits

0x1f30,	// (0x00081122) main_cam5_pane_t6

0x1f44,	// (0x00081136) main_cam5_pane_t7_ParamLimits

0x1f44,	// (0x00081136) main_cam5_pane_t7

0x1f56,	// (0x00081148) main_cam5_pane_t8_ParamLimits

0x1f56,	// (0x00081148) main_cam5_pane_t8

0x1f72,	// (0x00081164) main_cam5_pane_t9_ParamLimits

0x1f72,	// (0x00081164) main_cam5_pane_t9

0x1f84,	// (0x00081176) main_cam5_pane_t10_ParamLimits

0x1f84,	// (0x00081176) main_cam5_pane_t10

0x1f96,	// (0x00081188) main_cam5_pane_t11_ParamLimits

0x1f96,	// (0x00081188) main_cam5_pane_t11

0x1fa8,	// (0x0008119a) main_cam5_pane_t12_ParamLimits

0x1fa8,	// (0x0008119a) main_cam5_pane_t12

0x1fbd,	// (0x000811af) main_cam5_pane_t13_ParamLimits

0x1fbd,	// (0x000811af) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0008ec5e) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0008ec5e) main_cam5_pane_t

0x56a7,	// (0x00084899) popup_scut_keymap_window_ParamLimits

0x56a7,	// (0x00084899) popup_scut_keymap_window

0xb4f7,	// (0x0008a6e9) aid_size_cell_brow_shortcut

0xe349,	// (0x0008d53b) bg_popup_window_pane_cp010

0xb503,	// (0x0008a6f5) grid_scut_pane

0xb50f,	// (0x0008a701) cell_scut_pane_ParamLimits

0xb50f,	// (0x0008a701) cell_scut_pane

0xb526,	// (0x0008a718) cell_scut_pane_g1

0x1fda,	// (0x000811cc) cell_scut_pane_t1

0x1fe9,	// (0x000811db) cell_scut_pane_t2

0xb52f,	// (0x0008a721) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0008ec79) cell_scut_pane_t

0x9359,	// (0x0008854b) main_mup3_pane_g8_ParamLimits

0x9359,	// (0x0008854b) main_mup3_pane_g8

0xa767,	// (0x00089959) area_vitu2_query_pane_ParamLimits

0xa767,	// (0x00089959) area_vitu2_query_pane

0xb28d,	// (0x0008a47f) input_focus_pane_cp08

0x1ff8,	// (0x000811ea) area_vitu2_query_pane_g1

0xb53d,	// (0x0008a72f) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0008ec80) area_vitu2_query_pane_g

0xb54e,	// (0x0008a740) area_vitu2_query_pane_t1_ParamLimits

0xb54e,	// (0x0008a740) area_vitu2_query_pane_t1

0xb562,	// (0x0008a754) area_vitu2_query_pane_t2_ParamLimits

0xb562,	// (0x0008a754) area_vitu2_query_pane_t2

0xb576,	// (0x0008a768) area_vitu2_query_pane_t3_ParamLimits

0xb576,	// (0x0008a768) area_vitu2_query_pane_t3

0x2004,	// (0x000811f6) area_vitu2_query_pane_t4_ParamLimits

0x2004,	// (0x000811f6) area_vitu2_query_pane_t4

0x202c,	// (0x0008121e) area_vitu2_query_pane_t5_ParamLimits

0x202c,	// (0x0008121e) area_vitu2_query_pane_t5

0x2054,	// (0x00081246) area_vitu2_query_pane_t6_ParamLimits

0x2054,	// (0x00081246) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0008ec85) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0008ec85) area_vitu2_query_pane_t

0xb59e,	// (0x0008a790) bg_button_pane_cp018

0xb5ac,	// (0x0008a79e) bg_button_pane_cp021

0xb5b8,	// (0x0008a7aa) bg_button_pane_cp022

0xb5c9,	// (0x0008a7bb) input_focus_pane_cp09

0x77bd,	// (0x000869af) aid_size_touch_mv_arrow_left

0x77e8,	// (0x000869da) aid_size_touch_mv_arrow_right

0xad43,	// (0x00089f35) main_cset_slider_pane_g16_ParamLimits

0xad43,	// (0x00089f35) main_cset_slider_pane_g16

0xad51,	// (0x00089f43) main_cset_slider_pane_g17_ParamLimits

0xad51,	// (0x00089f43) main_cset_slider_pane_g17

0xb4e4,	// (0x0008a6d6) cell_cam4_burst_pane_g1_ParamLimits

0x018a,	// (0x0007f37c) compa_mode_pane

0xafb0,	// (0x0008a1a2) popup_vtel_slider_window_g3_ParamLimits

0xafb0,	// (0x0008a1a2) popup_vtel_slider_window_g3

0xafc4,	// (0x0008a1b6) popup_vtel_slider_window_g4_ParamLimits

0xafc4,	// (0x0008a1b6) popup_vtel_slider_window_g4

0xafd8,	// (0x0008a1ca) popup_vtel_slider_window_t1_ParamLimits

0xafd8,	// (0x0008a1ca) popup_vtel_slider_window_t1

0x018a,	// (0x0007f37c) main_cl_pane

0x0bf5,	// (0x0007fde7) popup_imed_adjust2_window_ParamLimits

0x0bcd,	// (0x0007fdbf) bg_tb_trans_pane_cp05_ParamLimits

0x15f6,	// (0x000807e8) popup_imed_adjust2_window_g1_ParamLimits

0x1605,	// (0x000807f7) popup_imed_adjust2_window_g2_ParamLimits

0x1605,	// (0x000807f7) popup_imed_adjust2_window_g2

0x1611,	// (0x00080803) popup_imed_adjust2_window_g3_ParamLimits

0x1611,	// (0x00080803) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0008e9f0) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0008e9f0) popup_imed_adjust2_window_g

0x161d,	// (0x0008080f) popup_imed_adjust2_window_t1_ParamLimits

0x1635,	// (0x00080827) slider_imed_adjust_pane_ParamLimits

0x1649,	// (0x0008083b) slider_imed_adjust_pane_g1_ParamLimits

0x1659,	// (0x0008084b) slider_imed_adjust_pane_g2_ParamLimits

0x1669,	// (0x0008085b) slider_imed_adjust_pane_g3_ParamLimits

0x167a,	// (0x0008086c) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0008e9f7) slider_imed_adjust_pane_g_ParamLimits

0xa4ac,	// (0x0008969e) aid_touch_area_cam4_ParamLimits

0xa4ac,	// (0x0008969e) aid_touch_area_cam4

0xa4bc,	// (0x000896ae) battery_pane_cp01

0xa543,	// (0x00089735) main_camera4_pane_g6_ParamLimits

0xa543,	// (0x00089735) main_camera4_pane_g6

0xa561,	// (0x00089753) main_camera4_pane_t2_ParamLimits

0xa561,	// (0x00089753) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0008eafa) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0008eafa) main_camera4_pane_t

0xa5f6,	// (0x000897e8) aid_touch_area_vid4_ParamLimits

0xa5f6,	// (0x000897e8) aid_touch_area_vid4

0xa636,	// (0x00089828) main_video4_pane_g5_ParamLimits

0xa636,	// (0x00089828) main_video4_pane_g5

0xa658,	// (0x0008984a) vid4_progress_pane_ParamLimits

0xa658,	// (0x0008984a) vid4_progress_pane

0x1cb5,	// (0x00080ea7) main_cset_slider_pane_g18_ParamLimits

0x1cb5,	// (0x00080ea7) main_cset_slider_pane_g18

0x1ec6,	// (0x000810b8) cell_cam4_burst_pane_g2_ParamLimits

0x1ec6,	// (0x000810b8) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0008ec59) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0008ec59) cell_cam4_burst_pane_g

0xb5da,	// (0x0008a7cc) bg_cl_pane_ParamLimits

0xb5da,	// (0x0008a7cc) bg_cl_pane

0xb5e6,	// (0x0008a7d8) cl_header_pane_ParamLimits

0xb5e6,	// (0x0008a7d8) cl_header_pane

0xb5f2,	// (0x0008a7e4) cl_listscroll_pane_ParamLimits

0xb5f2,	// (0x0008a7e4) cl_listscroll_pane

0x20a0,	// (0x00081292) bg_cl_pane_g1

0x20a8,	// (0x0008129a) bg_cl_pane_g2

0x20b0,	// (0x000812a2) bg_cl_pane_g3

0x20b8,	// (0x000812aa) bg_cl_pane_g4

0x20c0,	// (0x000812b2) bg_cl_pane_g5

0x20c8,	// (0x000812ba) bg_cl_pane_g6

0x20d0,	// (0x000812c2) bg_cl_pane_g7

0x20d8,	// (0x000812ca) bg_cl_pane_g8

0x20e0,	// (0x000812d2) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0008ec94) bg_cl_pane_g

0xb5fe,	// (0x0008a7f0) aid_height_cl_leading_ParamLimits

0xb5fe,	// (0x0008a7f0) aid_height_cl_leading

0xb60a,	// (0x0008a7fc) aid_height_cl_text_ParamLimits

0xb60a,	// (0x0008a7fc) aid_height_cl_text

0x1af2,	// (0x00080ce4) bg_cl_header_pane_ParamLimits

0x1af2,	// (0x00080ce4) bg_cl_header_pane

0xb622,	// (0x0008a814) cl_header_pane_g1_ParamLimits

0xb622,	// (0x0008a814) cl_header_pane_g1

0xb62f,	// (0x0008a821) cl_header_pane_t1_ParamLimits

0xb62f,	// (0x0008a821) cl_header_pane_t1

0x20e8,	// (0x000812da) cl_list_pane

0x1c88,	// (0x00080e7a) hc_scroll_pane_cp01

0xdcb1,	// (0x0008cea3) bg_cl_header_pane_g1

0x1b6e,	// (0x00080d60) bg_cl_header_pane_g2

0xdcd1,	// (0x0008cec3) bg_cl_header_pane_g3

0x1b7e,	// (0x00080d70) bg_cl_header_pane_g4

0x1b76,	// (0x00080d68) bg_cl_header_pane_g5

0x1dbb,	// (0x00080fad) bg_cl_header_pane_g6

0x1b96,	// (0x00080d88) bg_cl_header_pane_g7

0x1b9e,	// (0x00080d90) bg_cl_header_pane_g8

0x1b8e,	// (0x00080d80) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0008eca7) bg_cl_header_pane_g

0xb641,	// (0x0008a833) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb641,	// (0x0008a833) hc_cl_list_double_graphic_heading_pane

0xb658,	// (0x0008a84a) hc_cl_list_single_graphic_pane_ParamLimits

0xb658,	// (0x0008a84a) hc_cl_list_single_graphic_pane

0xb678,	// (0x0008a86a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb678,	// (0x0008a86a) hc_cl_list_single_graphic_pane_g1

0xb684,	// (0x0008a876) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb684,	// (0x0008a876) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0008ecba) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0008ecba) hc_cl_list_single_graphic_pane_g

0xb698,	// (0x0008a88a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb698,	// (0x0008a88a) hc_cl_list_single_graphic_pane_t1

0xb678,	// (0x0008a86a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb678,	// (0x0008a86a) hc_cl_list_double_graphic_heading_pane_g1

0xb6ad,	// (0x0008a89f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb6ad,	// (0x0008a89f) hc_cl_list_double_graphic_heading_pane_g2

0xb6c1,	// (0x0008a8b3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb6c1,	// (0x0008a8b3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0008ecbf) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0008ecbf) hc_cl_list_double_graphic_heading_pane_g

0xb6d5,	// (0x0008a8c7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb6d5,	// (0x0008a8c7) hc_cl_list_double_graphic_heading_pane_t1

0xb6ea,	// (0x0008a8dc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb6ea,	// (0x0008a8dc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0008ecc6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0008ecc6) hc_cl_list_double_graphic_heading_pane_t

0xb707,	// (0x0008a8f9) vid4_progress_pane_g1

0xb717,	// (0x0008a909) vid4_progress_pane_g2

0xdef2,	// (0x0008d0e4) vid4_progress_pane_g3

0xa5be,	// (0x000897b0) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0008eccb) vid4_progress_pane_g

0xb727,	// (0x0008a919) vid4_progress_pane_t1

0xb73c,	// (0x0008a92e) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0008ecd6) vid4_progress_pane_t

0xb767,	// (0x0008a959) wait_bar_pane_cp07

0x0ec6,	// (0x000800b8) blid_firmament_pane_ParamLimits

0x0f09,	// (0x000800fb) popup_blid_sat_info2_window_g1

0x0f2d,	// (0x0008011f) popup_blid_sat_info2_window_t3

0x0f3b,	// (0x0008012d) popup_blid_sat_info2_window_t4

0x0f49,	// (0x0008013b) popup_blid_sat_info2_window_t5

0x0f57,	// (0x00080149) popup_blid_sat_info2_window_t6

0x0f67,	// (0x00080159) popup_blid_sat_info2_window_t7

0x0f75,	// (0x00080167) popup_blid_sat_info2_window_t8

0x0f83,	// (0x00080175) popup_blid_sat_info2_window_t9

0x0f91,	// (0x00080183) popup_blid_sat_info2_window_t10

0x1055,	// (0x00080247) aid_firma_cardinal_ParamLimits

0x1069,	// (0x0008025b) blid_firmament_pane_t1_ParamLimits

0x1080,	// (0x00080272) blid_firmament_pane_t2_ParamLimits

0x1097,	// (0x00080289) blid_firmament_pane_t3_ParamLimits

0x10ae,	// (0x000802a0) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0008e8e9) blid_firmament_pane_t_ParamLimits

0x10c5,	// (0x000802b7) blid_sat_info_pane_ParamLimits

0x3d47,	// (0x00082f39) main_cam_set_pane_ParamLimits

0x9af3,	// (0x00088ce5) aid_size_cell_colour_35_ParamLimits

0x9b0d,	// (0x00088cff) aid_size_cell_colour_112_ParamLimits

0x9b24,	// (0x00088d16) aid_size_cell_effect_ParamLimits

0x3d47,	// (0x00082f39) bg_tb_trans_pane_cp02_ParamLimits

0xf0c9,	// (0x0008e2bb) heading_imed_pane_ParamLimits

0x9b3e,	// (0x00088d30) listscroll_imed_pane_ParamLimits

0xed7a,	// (0x0008df6c) popup_call2_audio_first_window_g5_ParamLimits

0xed7a,	// (0x0008df6c) popup_call2_audio_first_window_g5

0xa25b,	// (0x0008944d) aid_size_touch_image3_arrow_left_ParamLimits

0xa25b,	// (0x0008944d) aid_size_touch_image3_arrow_left

0xa271,	// (0x00089463) aid_size_touch_image3_arrow_right_ParamLimits

0xa271,	// (0x00089463) aid_size_touch_image3_arrow_right

0xb752,	// (0x0008a944) vid4_progress_pane_t3

0x9de4,	// (0x00088fd6) main_hwr_training_symbol_option_pane_ParamLimits

0x9de4,	// (0x00088fd6) main_hwr_training_symbol_option_pane

0x18e3,	// (0x00080ad5) popup_hwr_training_preview_window_ParamLimits

0x18e3,	// (0x00080ad5) popup_hwr_training_preview_window

0x9e45,	// (0x00089037) hwr_training_navi_pane_g5_ParamLimits

0x9e45,	// (0x00089037) hwr_training_navi_pane_g5

0x1b5c,	// (0x00080d4e) popup_char_count_window

0xb0ce,	// (0x0008a2c0) bg_popup_sub_pane_cp20_ParamLimits

0xb0dc,	// (0x0008a2ce) list_vitu2_match_list_pane_ParamLimits

0xb0e8,	// (0x0008a2da) vitu2_page_scroll_pane_ParamLimits

0xb0e8,	// (0x0008a2da) vitu2_page_scroll_pane

0x213a,	// (0x0008132c) list_single_hwr_training_symbol_option_pane_ParamLimits

0x213a,	// (0x0008132c) list_single_hwr_training_symbol_option_pane

0x214d,	// (0x0008133f) list_single_hwr_training_symbol_option_pane_g1

0x2155,	// (0x00081347) list_single_hwr_training_symbol_option_pane_t1

0x2163,	// (0x00081355) bg_button_pane_cp023

0x216c,	// (0x0008135e) bg_button_pane_cp024

0xb777,	// (0x0008a969) vitu2_page_scroll_pane_g1

0xb77f,	// (0x0008a971) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0008ecdd) vitu2_page_scroll_pane_g

0xb787,	// (0x0008a979) vitu2_page_scroll_pane_t1

0x0de2,	// (0x0007ffd4) popup_char_count_window_g1

0x219f,	// (0x00081391) popup_char_count_window_g2

0x21a8,	// (0x0008139a) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0008ece2) popup_char_count_window_g

0x21b1,	// (0x000813a3) popup_char_count_window_t1

0x018a,	// (0x0007f37c) main_vded2_pane

0x15e2,	// (0x000807d4) aid_size_cell_imed_line

0x15ec,	// (0x000807de) grid_imed_line_width_pane

0xa6bc,	// (0x000898ae) vid4_indicators_pane_g4

0x21bf,	// (0x000813b1) cell_imed_line_width_pane_ParamLimits

0x21bf,	// (0x000813b1) cell_imed_line_width_pane

0x21d3,	// (0x000813c5) cell_imed_line_width_pane_g1

0x21dc,	// (0x000813ce) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0008ece9) cell_imed_line_width_pane_g

0xb796,	// (0x0008a988) main_vded2_pane_g1_ParamLimits

0xb796,	// (0x0008a988) main_vded2_pane_g1

0xb7a3,	// (0x0008a995) main_vded2_pane_g2_ParamLimits

0xb7a3,	// (0x0008a995) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0008ecee) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0008ecee) main_vded2_pane_g

0xb7b1,	// (0x0008a9a3) vded2_slider_pane_ParamLimits

0xb7b1,	// (0x0008a9a3) vded2_slider_pane

0xb7be,	// (0x0008a9b0) aid_size_touch_vded2_end

0xb7c8,	// (0x0008a9ba) aid_size_touch_vded2_playhead

0x21e4,	// (0x000813d6) aid_size_touch_vded2_start

0x21ec,	// (0x000813de) vded2_slider_bg_pane

0x21f5,	// (0x000813e7) vded2_slider_pane_g1

0x21fe,	// (0x000813f0) vded2_slider_pane_g2

0xb7d0,	// (0x0008a9c2) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0008ecf3) vded2_slider_pane_g

0x2206,	// (0x000813f8) vded2_slider_bg_pane_g1

0x220f,	// (0x00081401) vded2_slider_bg_pane_g2

0x2218,	// (0x0008140a) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0008ecfa) vded2_slider_bg_pane_g

0x7f0c,	// (0x000870fe) aid_postcard_touch_down_pane_ParamLimits

0x7f0c,	// (0x000870fe) aid_postcard_touch_down_pane

0x7f1c,	// (0x0008710e) aid_postcard_touch_up_pane_ParamLimits

0x7f1c,	// (0x0008710e) aid_postcard_touch_up_pane

0x018a,	// (0x0007f37c) main_blid2_pane

0x0bdb,	// (0x0007fdcd) popup_blid2_search_window

0x018a,	// (0x0007f37c) blid2_gps_pane

0x018a,	// (0x0007f37c) blid2_navig_pane

0x018a,	// (0x0007f37c) blid2_search_pane

0x018a,	// (0x0007f37c) blid2_tripm_pane

0xb7d9,	// (0x0008a9cb) blid2_search_pane_g1_ParamLimits

0xb7d9,	// (0x0008a9cb) blid2_search_pane_g1

0xb7e9,	// (0x0008a9db) blid2_search_pane_t1_ParamLimits

0xb7e9,	// (0x0008a9db) blid2_search_pane_t1

0xb7fb,	// (0x0008a9ed) aid_size_cell_blid2_gps_ParamLimits

0xb7fb,	// (0x0008a9ed) aid_size_cell_blid2_gps

0xb80b,	// (0x0008a9fd) blid2_gps_pane_g1_ParamLimits

0xb80b,	// (0x0008a9fd) blid2_gps_pane_g1

0xb817,	// (0x0008aa09) grid_blid2_satellite_pane_ParamLimits

0xb817,	// (0x0008aa09) grid_blid2_satellite_pane

0xb827,	// (0x0008aa19) blid2_navig_pane_g1_ParamLimits

0xb827,	// (0x0008aa19) blid2_navig_pane_g1

0xb833,	// (0x0008aa25) blid2_navig_pane_t1_ParamLimits

0xb833,	// (0x0008aa25) blid2_navig_pane_t1

0xb845,	// (0x0008aa37) blid2_navig_pane_t2_ParamLimits

0xb845,	// (0x0008aa37) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0008ed01) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0008ed01) blid2_navig_pane_t

0xb857,	// (0x0008aa49) blid2_navig_ring_pane_ParamLimits

0xb857,	// (0x0008aa49) blid2_navig_ring_pane

0xb867,	// (0x0008aa59) blid2_speed_pane_ParamLimits

0xb867,	// (0x0008aa59) blid2_speed_pane

0xb873,	// (0x0008aa65) blid2_tripm_pane_g1_ParamLimits

0xb873,	// (0x0008aa65) blid2_tripm_pane_g1

0xb883,	// (0x0008aa75) blid2_tripm_pane_g2_ParamLimits

0xb883,	// (0x0008aa75) blid2_tripm_pane_g2

0xb88f,	// (0x0008aa81) blid2_tripm_pane_g3_ParamLimits

0xb88f,	// (0x0008aa81) blid2_tripm_pane_g3

0xb89b,	// (0x0008aa8d) blid2_tripm_pane_g4_ParamLimits

0xb89b,	// (0x0008aa8d) blid2_tripm_pane_g4

0xb8a7,	// (0x0008aa99) blid2_tripm_pane_g5_ParamLimits

0xb8a7,	// (0x0008aa99) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0008ed06) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0008ed06) blid2_tripm_pane_g

0xb8c3,	// (0x0008aab5) blid2_tripm_pane_t1_ParamLimits

0xb8c3,	// (0x0008aab5) blid2_tripm_pane_t1

0xb8d7,	// (0x0008aac9) blid2_tripm_pane_t2_ParamLimits

0xb8d7,	// (0x0008aac9) blid2_tripm_pane_t2

0xb8eb,	// (0x0008aadd) blid2_tripm_pane_t3_ParamLimits

0xb8eb,	// (0x0008aadd) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0008ed13) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0008ed13) blid2_tripm_pane_t

0xb91d,	// (0x0008ab0f) cell_blid2_satellite_pane_ParamLimits

0xb91d,	// (0x0008ab0f) cell_blid2_satellite_pane

0xb937,	// (0x0008ab29) cell_blid2_satellite_pane_g1

0x2221,	// (0x00081413) cell_blid2_satellite_pane_t1

0x10d5,	// (0x000802c7) blid2_speed_pane_g1

0x222f,	// (0x00081421) blid2_speed_pane_t1

0x223d,	// (0x0008142f) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0008ed1c) blid2_speed_pane_t

0x10d5,	// (0x000802c7) blid2_navig_ring_pane_g1

0xb940,	// (0x0008ab32) blid2_navig_ring_pane_g2

0xb948,	// (0x0008ab3a) blid2_navig_ring_pane_g3

0xb950,	// (0x0008ab42) blid2_navig_ring_pane_g4

0xb958,	// (0x0008ab4a) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0008ed21) blid2_navig_ring_pane_g

0x018a,	// (0x0007f37c) bg_popup_window_pane_cp011

0x224b,	// (0x0008143d) popup_blid2_search_window_g1

0x2253,	// (0x00081445) popup_blid2_search_window_t1

0x2261,	// (0x00081453) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0008ed2c) popup_blid2_search_window_t

0xdbc0,	// (0x0008cdb2) main_browser_pane_g1

0x44f9,	// (0x000836eb) main_browser_pane_ParamLimits

0xa684,	// (0x00089876) bg_button_pane_cp011_ParamLimits

0xa963,	// (0x00089b55) cell_vitu2_function_pane_g1_ParamLimits

0x0bcd,	// (0x0007fdbf) bg_popup_sub_pane_cp22_ParamLimits

0xb28d,	// (0x0008a47f) input_focus_pane_cp08_ParamLimits

0xb2a4,	// (0x0008a496) popup_vitu2_query_button_pane_ParamLimits

0xb2a4,	// (0x0008a496) popup_vitu2_query_button_pane

0xb2b5,	// (0x0008a4a7) popup_vitu2_query_input_button_pane

0x1e10,	// (0x00081002) popup_vitu2_query_window_g1_ParamLimits

0xb2bf,	// (0x0008a4b1) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0008ec2d) popup_vitu2_query_window_g_ParamLimits

0x018a,	// (0x0007f37c) bg_button_pane_cp026

0xb960,	// (0x0008ab52) popup_vitu2_query_input_button_pane_g1

0x018a,	// (0x0007f37c) bg_button_pane_cp025

0x226f,	// (0x00081461) popup_vitu2_query_button_pane_t1

0x9066,	// (0x00088258) main_mp3_pane_t6

0x9076,	// (0x00088268) popup_slider_window_cp01

0xa5a5,	// (0x00089797) cam4_battery_pane

0xa692,	// (0x00089884) cam4_battery_pane_cp02

0xb6ff,	// (0x0008a8f1) cam4_battery_pane_cp01

0xb6ff,	// (0x0008a8f1) cam4_battery_pane_cp03

0x227d,	// (0x0008146f) cam4_battery_pane_g1

0x10d5,	// (0x000802c7) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0008ed31) cam4_battery_pane_g

0x0f9f,	// (0x00080191) popup_blid_sat_info2_window_t11

0x77bd,	// (0x000869af) aid_size_touch_mv_arrow_left_ParamLimits

0x77e8,	// (0x000869da) aid_size_touch_mv_arrow_right_ParamLimits

0xe2a9,	// (0x0008d49b) navi_pane_g1_ParamLimits

0x7811,	// (0x00086a03) navi_pane_g2_ParamLimits

0x783f,	// (0x00086a31) navi_pane_g3_ParamLimits

0xf409,	// (0x0008e5fb) navi_pane_g_ParamLimits

0x7899,	// (0x00086a8b) navi_pane_mv_t1_ParamLimits

0x9b4a,	// (0x00088d3c) grid_imed_effect_pane_ParamLimits

0x6401,	// (0x000855f3) aid_placing_vt_slider_lsc

0xdb11,	// (0x0008cd03) aid_placing_vt_slider_prt

0x3d47,	// (0x00082f39) bg_tb_trans_pane_cp01_ParamLimits

0x125c,	// (0x0008044e) popup_image_details_window_g1_ParamLimits

0x126f,	// (0x00080461) popup_image_details_window_g2_ParamLimits

0x1284,	// (0x00080476) popup_image_details_window_g3_ParamLimits

0x1284,	// (0x00080476) popup_image_details_window_g3

0xf73c,	// (0x0008e92e) popup_image_details_window_g_ParamLimits

0x1298,	// (0x0008048a) popup_image_details_window_t1_ParamLimits

0x12aa,	// (0x0008049c) popup_image_details_window_t2_ParamLimits

0x12c3,	// (0x000804b5) popup_image_details_window_t3_ParamLimits

0x12d7,	// (0x000804c9) popup_image_details_window_t4_ParamLimits

0x12f2,	// (0x000804e4) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0008e935) popup_image_details_window_t_ParamLimits

0xb616,	// (0x0008a808) cl_header_name_pane_ParamLimits

0xb616,	// (0x0008a808) cl_header_name_pane

0xb968,	// (0x0008ab5a) cl_header_name_pane_t1_ParamLimits

0xb968,	// (0x0008ab5a) cl_header_name_pane_t1

0xb97f,	// (0x0008ab71) cl_header_name_pane_t2_ParamLimits

0xb97f,	// (0x0008ab71) cl_header_name_pane_t2

0xb9a9,	// (0x0008ab9b) cl_header_name_pane_t3_ParamLimits

0xb9a9,	// (0x0008ab9b) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0008ed36) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0008ed36) cl_header_name_pane_t

0x786a,	// (0x00086a5c) navi_pane_mv_g2_ParamLimits

0x1b19,	// (0x00080d0b) field_vitu2_entry_pane_g1_ParamLimits

0x1b25,	// (0x00080d17) field_vitu2_entry_pane_g2_ParamLimits

0x1b31,	// (0x00080d23) field_vitu2_entry_pane_g3_ParamLimits

0x1b31,	// (0x00080d23) field_vitu2_entry_pane_g3

0xf93a,	// (0x0008eb2c) field_vitu2_entry_pane_g_ParamLimits

0xa8f3,	// (0x00089ae5) cell_vitu2_itu_pane_g1_ParamLimits

0xa903,	// (0x00089af5) cell_vitu2_itu_pane_g2_ParamLimits

0xa903,	// (0x00089af5) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0008eb38) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0008eb38) cell_vitu2_itu_pane_g

0xa684,	// (0x00089876) bg_vkb2_func_pane_cp05_ParamLimits

0xa684,	// (0x00089876) bg_vkb2_func_pane_cp05

0xa684,	// (0x00089876) bg_vkb2_func_pane_cp03

0xa684,	// (0x00089876) bg_vkb2_func_pane_cp04

0xa684,	// (0x00089876) bg_vkb2_func_pane_cp10_ParamLimits

0xa684,	// (0x00089876) bg_vkb2_func_pane_cp10

0xb5b8,	// (0x0008a7aa) bg_vkb2_func_pane_cp08

0xb59e,	// (0x0008a790) bg_vkb2_func_pane_cp06

0xb5ac,	// (0x0008a79e) bg_vkb2_func_pane_cp07

0x2175,	// (0x00081367) bg_vkb2_func_pane_cp11_ParamLimits

0x2175,	// (0x00081367) bg_vkb2_func_pane_cp11

0x218a,	// (0x0008137c) bg_vkb2_func_pane_cp12_ParamLimits

0x218a,	// (0x0008137c) bg_vkb2_func_pane_cp12

0x018a,	// (0x0007f37c) bg_vkb2_func_pane_cp09

0x1b6e,	// (0x00080d60) bg_vkb2_func_pane_g1

0xdcd1,	// (0x0008cec3) bg_vkb2_func_pane_g2

0x1b76,	// (0x00080d68) bg_vkb2_func_pane_g3

0x1b7e,	// (0x00080d70) bg_vkb2_func_pane_g4

0x1dbb,	// (0x00080fad) bg_vkb2_func_pane_g5

0x1b96,	// (0x00080d88) bg_vkb2_func_pane_g6

0x1b9e,	// (0x00080d90) bg_vkb2_func_pane_g7

0x1b8e,	// (0x00080d80) bg_vkb2_func_pane_g8

0xdcb1,	// (0x0008cea3) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0008ed3d) bg_vkb2_func_pane_g

0xb8b5,	// (0x0008aaa7) blid2_tripm_pane_g6_ParamLimits

0xb8b5,	// (0x0008aaa7) blid2_tripm_pane_g6

0x199b,	// (0x00080b8d) mp4_progress_pane_g1

0xb911,	// (0x0008ab03) blid2_tripm_values_pane_ParamLimits

0xb911,	// (0x0008ab03) blid2_tripm_values_pane

0xb9ce,	// (0x0008abc0) blid2_tripm_values_pane_t1

0xb9dc,	// (0x0008abce) blid2_tripm_values_pane_t2

0xb9ea,	// (0x0008abdc) blid2_tripm_values_pane_t3

0xb9f8,	// (0x0008abea) blid2_tripm_values_pane_t4

0xba06,	// (0x0008abf8) blid2_tripm_values_pane_t5

0xba14,	// (0x0008ac06) blid2_tripm_values_pane_t6

0xba22,	// (0x0008ac14) blid2_tripm_values_pane_t7

0xba30,	// (0x0008ac22) blid2_tripm_values_pane_t8

0xba3e,	// (0x0008ac30) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0008ed50) blid2_tripm_values_pane_t

0x6441,	// (0x00085633) call_video_pane_t1_ParamLimits

0x6462,	// (0x00085654) call_video_pane_t2_ParamLimits

0xf292,	// (0x0008e484) call_video_pane_t_ParamLimits

0x7dcd,	// (0x00086fbf) msg_header_pane_g1_ParamLimits

0xe4c4,	// (0x0008d6b6) msg_header_pane_g2_ParamLimits

0xe4c4,	// (0x0008d6b6) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0008e69e) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0008e69e) msg_header_pane_g

0x44f9,	// (0x000836eb) main_clock2_pane_ParamLimits

0x98cf,	// (0x00088ac1) grid_clock2_toolbar_pane_ParamLimits

0x98cf,	// (0x00088ac1) grid_clock2_toolbar_pane

0x98cf,	// (0x00088ac1) listscroll_clock2_pane_ParamLimits

0x98cf,	// (0x00088ac1) listscroll_clock2_pane

0x997d,	// (0x00088b6f) main_clock2_pane_t3_ParamLimits

0x997d,	// (0x00088b6f) main_clock2_pane_t3

0x998f,	// (0x00088b81) main_clock2_pane_t4_ParamLimits

0x998f,	// (0x00088b81) main_clock2_pane_t4

0x2287,	// (0x00081479) cell_clock2_toolbar_pane

0x228f,	// (0x00081481) cell_clock2_toolbar_pane_cp01

0x228f,	// (0x00081481) cell_clock2_toolbar_pane_cp02

0x2297,	// (0x00081489) cell_clock2_toolbar_pane_cp03

0x229f,	// (0x00081491) list_clock2_pane

0xe1fc,	// (0x0008d3ee) scroll_pane_cp10

0x22a7,	// (0x00081499) list_single_clock2_pane_ParamLimits

0x22a7,	// (0x00081499) list_single_clock2_pane

0xe349,	// (0x0008d53b) list_highlight_pane_cp08

0x22b4,	// (0x000814a6) list_single_clock2_pane_t1

0x22c2,	// (0x000814b4) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0008ed63) list_single_clock2_pane_t

0x018a,	// (0x0007f37c) bg_button_pane_cp10

0x22d0,	// (0x000814c2) cell_clock2_toolbar_pane_g1

0x7e6e,	// (0x00087060) aid_main_viewer_pane_g1_ParamLimits

0x7e6e,	// (0x00087060) aid_main_viewer_pane_g1

0x7e7a,	// (0x0008706c) aid_main_viewer_pane_g2_ParamLimits

0x7e7a,	// (0x0008706c) aid_main_viewer_pane_g2

0x7e86,	// (0x00087078) aid_main_viewer_pane_g3_ParamLimits

0x7e86,	// (0x00087078) aid_main_viewer_pane_g3

0x7e97,	// (0x00087089) aid_main_viewer_pane_g4_ParamLimits

0x7e97,	// (0x00087089) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0008e6af) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0008e6af) aid_main_viewer_pane_g

0x8627,	// (0x00087819) main_calc_pane_ParamLimits

0x8634,	// (0x00087826) main_dialer2_pane_ParamLimits

0x018a,	// (0x0007f37c) main_cam6_pane

0x018a,	// (0x0007f37c) main_vid6_pane

0x98db,	// (0x00088acd) listscroll_gen_pane_cp06_ParamLimits

0x98db,	// (0x00088acd) listscroll_gen_pane_cp06

0x99a1,	// (0x00088b93) main_clock2_pane_t5_ParamLimits

0x99a1,	// (0x00088b93) main_clock2_pane_t5

0x99f0,	// (0x00088be2) aid_call2_pane_cp10_ParamLimits

0x9a02,	// (0x00088bf4) aid_call_pane_cp10_ParamLimits

0xe27e,	// (0x0008d470) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe27e,	// (0x0008d470) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9a14,	// (0x00088c06) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9a14,	// (0x00088c06) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe27e,	// (0x0008d470) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0008e9e5) popup_clock_analogue_window_cp10_g_ParamLimits

0x9a2a,	// (0x00088c1c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa208,	// (0x000893fa) cell_dialer2_keypad_pane_g2_ParamLimits

0xa208,	// (0x000893fa) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0008eacb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0008eacb) cell_dialer2_keypad_pane_g

0xa224,	// (0x00089416) cell_dialer2_keypad_pane_t1

0xac29,	// (0x00089e1b) main_cset_text2_pane_ParamLimits

0xac29,	// (0x00089e1b) main_cset_text2_pane

0x1ff8,	// (0x000811ea) area_vitu2_query_pane_g1_ParamLimits

0xb53d,	// (0x0008a72f) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0008ec80) area_vitu2_query_pane_g_ParamLimits

0x207c,	// (0x0008126e) area_vitu2_query_pane_t7_ParamLimits

0x207c,	// (0x0008126e) area_vitu2_query_pane_t7

0xb59e,	// (0x0008a790) bg_button_pane_cp018_ParamLimits

0xb5ac,	// (0x0008a79e) bg_button_pane_cp021_ParamLimits

0xb5b8,	// (0x0008a7aa) bg_button_pane_cp022_ParamLimits

0xb5b8,	// (0x0008a7aa) bg_vkb2_func_pane_cp08_ParamLimits

0xb59e,	// (0x0008a790) bg_vkb2_func_pane_cp06_ParamLimits

0xb5ac,	// (0x0008a79e) bg_vkb2_func_pane_cp07_ParamLimits

0xb5c9,	// (0x0008a7bb) input_focus_pane_cp09_ParamLimits

0xba4c,	// (0x0008ac3e) cam6_autofocus_pane_ParamLimits

0xba4c,	// (0x0008ac3e) cam6_autofocus_pane

0xba6e,	// (0x0008ac60) cam6_image_uncrop_pane_ParamLimits

0xba6e,	// (0x0008ac60) cam6_image_uncrop_pane

0xba9b,	// (0x0008ac8d) cam6_indi_pane_ParamLimits

0xba9b,	// (0x0008ac8d) cam6_indi_pane

0xbab5,	// (0x0008aca7) cam6_mode_pane_ParamLimits

0xbab5,	// (0x0008aca7) cam6_mode_pane

0xbac9,	// (0x0008acbb) cam6_timer_pane_ParamLimits

0xbac9,	// (0x0008acbb) cam6_timer_pane

0xbad5,	// (0x0008acc7) cam6_zoom_pane_ParamLimits

0xbad5,	// (0x0008acc7) cam6_zoom_pane

0xbaed,	// (0x0008acdf) cam6_mode_pane_g1_ParamLimits

0xbaed,	// (0x0008acdf) cam6_mode_pane_g1

0xbaf9,	// (0x0008aceb) cam6_mode_pane_g2_ParamLimits

0xbaf9,	// (0x0008aceb) cam6_mode_pane_g2

0xbb05,	// (0x0008acf7) cam6_mode_pane_g3_ParamLimits

0xbb05,	// (0x0008acf7) cam6_mode_pane_g3

0xbb11,	// (0x0008ad03) cam6_mode_pane_g4_ParamLimits

0xbb11,	// (0x0008ad03) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0008ed68) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0008ed68) cam6_mode_pane_g

0x22d8,	// (0x000814ca) bg_tb_trans_pane_cp08_ParamLimits

0x22d8,	// (0x000814ca) bg_tb_trans_pane_cp08

0x22e6,	// (0x000814d8) cam6_battery_pane_ParamLimits

0x22e6,	// (0x000814d8) cam6_battery_pane

0x22fc,	// (0x000814ee) cam6_indi_pane_g1_ParamLimits

0x22fc,	// (0x000814ee) cam6_indi_pane_g1

0x230e,	// (0x00081500) cam6_indi_pane_g2_ParamLimits

0x230e,	// (0x00081500) cam6_indi_pane_g2

0x2320,	// (0x00081512) cam6_indi_pane_g3_ParamLimits

0x2320,	// (0x00081512) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0008ed71) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0008ed71) cam6_indi_pane_g

0x2332,	// (0x00081524) cam6_indi_pane_t1_ParamLimits

0x2332,	// (0x00081524) cam6_indi_pane_t1

0xa6f9,	// (0x000898eb) cam6_autofocus_pane_g1

0xa6f1,	// (0x000898e3) cam6_autofocus_pane_g2

0xa709,	// (0x000898fb) cam6_autofocus_pane_g3

0xa701,	// (0x000898f3) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0008ed78) cam6_autofocus_pane_g

0x2358,	// (0x0008154a) cam6_timer_pane_g1

0x2360,	// (0x00081552) cam6_timer_pane_t1

0x236e,	// (0x00081560) cam6_zoom_cont_pane

0x2376,	// (0x00081568) cam6_zoom_pane_g1

0x237e,	// (0x00081570) cam6_zoom_pane_g2

0xbb1d,	// (0x0008ad0f) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0008ed81) cam6_zoom_pane_g

0x10d5,	// (0x000802c7) cam6_battery_pane_g1

0x10d5,	// (0x000802c7) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0008e8f2) cam6_battery_pane_g

0x2386,	// (0x00081578) cam6_zoom_cont_pane_g1

0x238f,	// (0x00081581) cam6_zoom_cont_pane_g2

0x2398,	// (0x0008158a) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0008ed88) cam6_zoom_cont_pane_g

0xbb37,	// (0x0008ad29) cam6_mode_pane_cp_ParamLimits

0xbb37,	// (0x0008ad29) cam6_mode_pane_cp

0xbb4b,	// (0x0008ad3d) cam6_zoom_pane_cp_ParamLimits

0xbb4b,	// (0x0008ad3d) cam6_zoom_pane_cp

0xbb63,	// (0x0008ad55) vid6_image_uncrop_cif_pane_ParamLimits

0xbb63,	// (0x0008ad55) vid6_image_uncrop_cif_pane

0xbb8f,	// (0x0008ad81) vid6_image_uncrop_nhd_pane_ParamLimits

0xbb8f,	// (0x0008ad81) vid6_image_uncrop_nhd_pane

0xbbac,	// (0x0008ad9e) vid6_image_uncrop_vga_pane_ParamLimits

0xbbac,	// (0x0008ad9e) vid6_image_uncrop_vga_pane

0xbbcb,	// (0x0008adbd) vid6_image_uncrop_wvga_pane_ParamLimits

0xbbcb,	// (0x0008adbd) vid6_image_uncrop_wvga_pane

0xbbe8,	// (0x0008adda) vid6_indi_pane_ParamLimits

0xbbe8,	// (0x0008adda) vid6_indi_pane

0x22d8,	// (0x000814ca) bg_tb_trans_pane_cp09_ParamLimits

0x22d8,	// (0x000814ca) bg_tb_trans_pane_cp09

0x23b0,	// (0x000815a2) cam6_battery_pane_cp_ParamLimits

0x23b0,	// (0x000815a2) cam6_battery_pane_cp

0x23bc,	// (0x000815ae) vid6_indi_pane_g1_ParamLimits

0x23bc,	// (0x000815ae) vid6_indi_pane_g1

0x23ce,	// (0x000815c0) vid6_indi_pane_g2_ParamLimits

0x23ce,	// (0x000815c0) vid6_indi_pane_g2

0x23e0,	// (0x000815d2) vid6_indi_pane_g3_ParamLimits

0x23e0,	// (0x000815d2) vid6_indi_pane_g3

0x23f5,	// (0x000815e7) vid6_indi_pane_g4_ParamLimits

0x23f5,	// (0x000815e7) vid6_indi_pane_g4

0x240a,	// (0x000815fc) vid6_indi_pane_g5_ParamLimits

0x240a,	// (0x000815fc) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0008ed8f) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0008ed8f) vid6_indi_pane_g

0x2424,	// (0x00081616) vid6_indi_pane_t1_ParamLimits

0x2424,	// (0x00081616) vid6_indi_pane_t1

0x243a,	// (0x0008162c) vid6_indi_pane_t2_ParamLimits

0x243a,	// (0x0008162c) vid6_indi_pane_t2

0x2462,	// (0x00081654) vid6_indi_pane_t3_ParamLimits

0x2462,	// (0x00081654) vid6_indi_pane_t3

0x248a,	// (0x0008167c) vid6_indi_pane_t4_ParamLimits

0x248a,	// (0x0008167c) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0008ed9a) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0008ed9a) vid6_indi_pane_t

0x24ae,	// (0x000816a0) wait_bar_pane_cp08

0xbc0b,	// (0x0008adfd) main_cset_text2_pane_t1_ParamLimits

0xbc0b,	// (0x0008adfd) main_cset_text2_pane_t1

0xbb25,	// (0x0008ad17) listscroll_gen_pane_cp06_t1_ParamLimits

0xbb25,	// (0x0008ad17) listscroll_gen_pane_cp06_t1

0x018a,	// (0x0007f37c) main_cam6_set_pane

0xa597,	// (0x00089789) bg_tb_trans_pane_cp06_ParamLimits

0xa5ad,	// (0x0008979f) cam4_indicators_pane_g1_ParamLimits

0xa5be,	// (0x000897b0) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0008eb08) cam4_indicators_pane_g_ParamLimits

0xa5dc,	// (0x000897ce) cam4_indicators_pane_t1_ParamLimits

0xa684,	// (0x00089876) bg_tb_trans_pane_cp07_ParamLimits

0xa5ad,	// (0x0008979f) vid4_indicators_pane_g1_ParamLimits

0xa69a,	// (0x0008988c) vid4_indicators_pane_g2_ParamLimits

0xa6ab,	// (0x0008989d) vid4_indicators_pane_g3_ParamLimits

0xa6bc,	// (0x000898ae) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0008eb1a) vid4_indicators_pane_g_ParamLimits

0xa6d8,	// (0x000898ca) vid4_indicators_pane_t1_ParamLimits

0xb707,	// (0x0008a8f9) vid4_progress_pane_g1_ParamLimits

0xb717,	// (0x0008a909) vid4_progress_pane_g2_ParamLimits

0xdef2,	// (0x0008d0e4) vid4_progress_pane_g3_ParamLimits

0xa5be,	// (0x000897b0) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0008eccb) vid4_progress_pane_g_ParamLimits

0xb727,	// (0x0008a919) vid4_progress_pane_t1_ParamLimits

0xb73c,	// (0x0008a92e) vid4_progress_pane_t2_ParamLimits

0xb752,	// (0x0008a944) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0008ecd6) vid4_progress_pane_t_ParamLimits

0xb767,	// (0x0008a959) wait_bar_pane_cp07_ParamLimits

0xbc49,	// (0x0008ae3b) main_cam6_set_pane_g2_ParamLimits

0xbc49,	// (0x0008ae3b) main_cam6_set_pane_g2

0xbc55,	// (0x0008ae47) main_cset6_listscroll_pane_ParamLimits

0xbc55,	// (0x0008ae47) main_cset6_listscroll_pane

0xbc80,	// (0x0008ae72) main_cset6_slider_pane_ParamLimits

0xbc80,	// (0x0008ae72) main_cset6_slider_pane

0xbc8c,	// (0x0008ae7e) main_cset6_text2_pane_ParamLimits

0xbc8c,	// (0x0008ae7e) main_cset6_text2_pane

0x24bd,	// (0x000816af) main_cset6_text_pane

0x24c5,	// (0x000816b7) main_cset_list_pane_copy1_ParamLimits

0x24c5,	// (0x000816b7) main_cset_list_pane_copy1

0x24d5,	// (0x000816c7) scroll_pane_cp028_copy1

0xbc9f,	// (0x0008ae91) cset_list_set_pane_copy1

0xbcb9,	// (0x0008aeab) aid_position_infowindow_above_copy1

0xbcc1,	// (0x0008aeb3) aid_position_infowindow_below_copy1

0x3d0d,	// (0x00082eff) cset_list_set_pane_g1_copy1

0xaf31,	// (0x0008a123) cset_list_set_pane_g3_copy1_ParamLimits

0xaf31,	// (0x0008a123) cset_list_set_pane_g3_copy1

0xaf40,	// (0x0008a132) cset_list_set_pane_t1_copy1_ParamLimits

0xaf40,	// (0x0008a132) cset_list_set_pane_t1_copy1

0x3d47,	// (0x00082f39) list_highlight_pane_cp021_copy1_ParamLimits

0x3d47,	// (0x00082f39) list_highlight_pane_cp021_copy1

0x24de,	// (0x000816d0) cset6_slider_pane_ParamLimits

0x24de,	// (0x000816d0) cset6_slider_pane

0x250a,	// (0x000816fc) main_cset6_slider_pane_g1_ParamLimits

0x250a,	// (0x000816fc) main_cset6_slider_pane_g1

0xbcc9,	// (0x0008aebb) main_cset6_slider_pane_g2_ParamLimits

0xbcc9,	// (0x0008aebb) main_cset6_slider_pane_g2

0x1c9d,	// (0x00080e8f) main_cset6_slider_pane_g3_ParamLimits

0x1c9d,	// (0x00080e8f) main_cset6_slider_pane_g3

0xbcf1,	// (0x0008aee3) main_cset6_slider_pane_g4_ParamLimits

0xbcf1,	// (0x0008aee3) main_cset6_slider_pane_g4

0xbcfd,	// (0x0008aeef) main_cset6_slider_pane_g5_ParamLimits

0xbcfd,	// (0x0008aeef) main_cset6_slider_pane_g5

0x1c9d,	// (0x00080e8f) main_cset6_slider_pane_g7_ParamLimits

0x1c9d,	// (0x00080e8f) main_cset6_slider_pane_g7

0x1ca9,	// (0x00080e9b) main_cset6_slider_pane_g8_ParamLimits

0x1ca9,	// (0x00080e9b) main_cset6_slider_pane_g8

0xbd0b,	// (0x0008aefd) main_cset6_slider_pane_g9_ParamLimits

0xbd0b,	// (0x0008aefd) main_cset6_slider_pane_g9

0xbd17,	// (0x0008af09) main_cset6_slider_pane_g10_ParamLimits

0xbd17,	// (0x0008af09) main_cset6_slider_pane_g10

0xbcf1,	// (0x0008aee3) main_cset6_slider_pane_g11_ParamLimits

0xbcf1,	// (0x0008aee3) main_cset6_slider_pane_g11

0xbd23,	// (0x0008af15) main_cset6_slider_pane_g12_ParamLimits

0xbd23,	// (0x0008af15) main_cset6_slider_pane_g12

0xbd2f,	// (0x0008af21) main_cset6_slider_pane_g13_ParamLimits

0xbd2f,	// (0x0008af21) main_cset6_slider_pane_g13

0xbd3d,	// (0x0008af2f) main_cset6_slider_pane_g14_ParamLimits

0xbd3d,	// (0x0008af2f) main_cset6_slider_pane_g14

0xbd4b,	// (0x0008af3d) main_cset6_slider_pane_g15_ParamLimits

0xbd4b,	// (0x0008af3d) main_cset6_slider_pane_g15

0xbcfd,	// (0x0008aeef) main_cset6_slider_pane_g16_ParamLimits

0xbcfd,	// (0x0008aeef) main_cset6_slider_pane_g16

0xbd63,	// (0x0008af55) main_cset6_slider_pane_g17_ParamLimits

0xbd63,	// (0x0008af55) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0008eda3) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0008eda3) main_cset6_slider_pane_g

0x2532,	// (0x00081724) main_cset6_slider_pane_t1_ParamLimits

0x2532,	// (0x00081724) main_cset6_slider_pane_t1

0xbd71,	// (0x0008af63) main_cset6_slider_pane_t2_ParamLimits

0xbd71,	// (0x0008af63) main_cset6_slider_pane_t2

0xbd9c,	// (0x0008af8e) main_cset6_slider_pane_t3_ParamLimits

0xbd9c,	// (0x0008af8e) main_cset6_slider_pane_t3

0xbdc7,	// (0x0008afb9) main_cset6_slider_pane_t4_ParamLimits

0xbdc7,	// (0x0008afb9) main_cset6_slider_pane_t4

0xbdf4,	// (0x0008afe6) main_cset6_slider_pane_t5_ParamLimits

0xbdf4,	// (0x0008afe6) main_cset6_slider_pane_t5

0x2573,	// (0x00081765) main_cset6_slider_pane_t7_ParamLimits

0x2573,	// (0x00081765) main_cset6_slider_pane_t7

0xbe21,	// (0x0008b013) main_cset6_slider_pane_t8_ParamLimits

0xbe21,	// (0x0008b013) main_cset6_slider_pane_t8

0xbe45,	// (0x0008b037) main_cset6_slider_pane_t9_ParamLimits

0xbe45,	// (0x0008b037) main_cset6_slider_pane_t9

0xbe69,	// (0x0008b05b) main_cset6_slider_pane_t10_ParamLimits

0xbe69,	// (0x0008b05b) main_cset6_slider_pane_t10

0xbe8d,	// (0x0008b07f) main_cset6_slider_pane_t11_ParamLimits

0xbe8d,	// (0x0008b07f) main_cset6_slider_pane_t11

0x25a9,	// (0x0008179b) main_cset6_slider_pane_t14_ParamLimits

0x25a9,	// (0x0008179b) main_cset6_slider_pane_t14

0x25e2,	// (0x000817d4) main_cset6_slider_pane_t15_ParamLimits

0x25e2,	// (0x000817d4) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0008edc8) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0008edc8) main_cset6_slider_pane_t

0x1d61,	// (0x00080f53) cset_slider_pane_g1_copy1

0x1d6a,	// (0x00080f5c) cset_slider_pane_g2_copy1

0x1d73,	// (0x00080f65) cset_slider_pane_g3_copy1

0x018a,	// (0x0007f37c) bg_popup_sub_pane_cp011_copy1

0x1e1c,	// (0x0008100e) main_cset_text_pane_g1_copy1

0x1e24,	// (0x00081016) main_cset_text_pane_t1_copy1

0x1e32,	// (0x00081024) main_cset_text_pane_t2_copy1

0x1e40,	// (0x00081032) main_cset_text_pane_t3_copy1

0x1e4e,	// (0x00081040) main_cset_text_pane_t4_copy1

0x1e5c,	// (0x0008104e) main_cset_text_pane_t5_copy1

0x1e6a,	// (0x0008105c) main_cset_text_pane_t6_copy1

0x1e78,	// (0x0008106a) main_cset_text_pane_t7_copy1

0xbeb3,	// (0x0008b0a5) main_cset_text2_pane_t1_copy1

0x018a,	// (0x0007f37c) main_ncimui_pane

0x8673,	// (0x00087865) popup_query_ncimui_window_ParamLimits

0x8673,	// (0x00087865) popup_query_ncimui_window

0x13a1,	// (0x00080593) field_cale_ev2_pane_g4_ParamLimits

0x13a1,	// (0x00080593) field_cale_ev2_pane_g4

0x9f26,	// (0x00089118) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9f26,	// (0x00089118) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0008eaa6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0008eaa6) cell_video_dialer_keypad_pane_g

0x9f3e,	// (0x00089130) cell_video_dialer_keypad_pane_t1

0x018a,	// (0x0007f37c) bg_popup_window_pane_cp012

0xe0cc,	// (0x0008d2be) heading_pane_cp06

0x270a,	// (0x000818fc) ncim_query_content_pane

0x018a,	// (0x0007f37c) bg_popup_heading_pane_cp01

0x2712,	// (0x00081904) ncim_heading_pane_t1

0x2720,	// (0x00081912) ncim_indicator_popup_pane

0x2732,	// (0x00081924) ncim_query_button_pane

0x2746,	// (0x00081938) ncim_query_content_pane_t1

0x2758,	// (0x0008194a) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0008ee07) ncim_query_content_pane_t

0x2792,	// (0x00081984) ncim_query_list_pane

0x27a4,	// (0x00081996) ncim_query_popup_pane

0x2720,	// (0x00081912) ncim_indicator_popup_pane_ParamLimits

0xbfe0,	// (0x0008b1d2) ncim_query_content_pane_g1_ParamLimits

0xbfe0,	// (0x0008b1d2) ncim_query_content_pane_g1

0x2746,	// (0x00081938) ncim_query_content_pane_t1_ParamLimits

0x2758,	// (0x0008194a) ncim_query_content_pane_t2_ParamLimits

0xbfec,	// (0x0008b1de) ncim_query_content_pane_t3_ParamLimits

0xbfec,	// (0x0008b1de) ncim_query_content_pane_t3

0xc009,	// (0x0008b1fb) ncim_query_content_pane_t4_ParamLimits

0xc009,	// (0x0008b1fb) ncim_query_content_pane_t4

0xc026,	// (0x0008b218) ncim_query_content_pane_t5_ParamLimits

0xc026,	// (0x0008b218) ncim_query_content_pane_t5

0x276a,	// (0x0008195c) ncim_query_content_pane_t6_ParamLimits

0x276a,	// (0x0008195c) ncim_query_content_pane_t6

0xfc15,	// (0x0008ee07) ncim_query_content_pane_t_ParamLimits

0x2792,	// (0x00081984) ncim_query_list_pane_ParamLimits

0x27a4,	// (0x00081996) ncim_query_popup_pane_ParamLimits

0x27b8,	// (0x000819aa) wait_bar_pane_cp04

0x018a,	// (0x0007f37c) input_focus_pane_cp011

0x27c0,	// (0x000819b2) ncim_query_popup_pane_t1

0x27ce,	// (0x000819c0) ncim_list_query_list_pane_ParamLimits

0x27ce,	// (0x000819c0) ncim_list_query_list_pane

0x018a,	// (0x0007f37c) bg_button_pane_cp027

0x27e1,	// (0x000819d3) ncim_query_button_pane_g1

0x018a,	// (0x0007f37c) list_highlight_pane_cp012

0x27eb,	// (0x000819dd) ncim_list_query_list_pane_g1

0x27f3,	// (0x000819e5) ncim_list_query_list_pane_t1

0xa5cd,	// (0x000897bf) cam4_indicators_pane_g3_ParamLimits

0xa5cd,	// (0x000897bf) cam4_indicators_pane_g3

0xa6c8,	// (0x000898ba) vid4_indicators_pane_g5_ParamLimits

0xa6c8,	// (0x000898ba) vid4_indicators_pane_g5

0xa5cd,	// (0x000897bf) vid4_progress_pane_g5_ParamLimits

0xa5cd,	// (0x000897bf) vid4_progress_pane_g5

0xbef9,	// (0x0008b0eb) main_ncimui_pane_g1

0xbf4f,	// (0x0008b141) ncimui_group_query_pane_ParamLimits

0xbf4f,	// (0x0008b141) ncimui_group_query_pane

0xbf8b,	// (0x0008b17d) ncimui_list_pane_ParamLimits

0xbf8b,	// (0x0008b17d) ncimui_list_pane

0xbfac,	// (0x0008b19e) ncimui_text_pane_ParamLimits

0xbfac,	// (0x0008b19e) ncimui_text_pane

0xc043,	// (0x0008b235) ncimui_text_pane_t1_ParamLimits

0xc043,	// (0x0008b235) ncimui_text_pane_t1

0x2801,	// (0x000819f3) ncimui_list_single_graphic_pane_ParamLimits

0x2801,	// (0x000819f3) ncimui_list_single_graphic_pane

0xc062,	// (0x0008b254) ncimui_query_pane_ParamLimits

0xc062,	// (0x0008b254) ncimui_query_pane

0x018a,	// (0x0007f37c) list_highlight_pane_cp013

0x2811,	// (0x00081a03) ncim_list_query_list_pane_t1_copy1

0x27eb,	// (0x000819dd) ncim_list_single_graphic_pane_g1

0x281f,	// (0x00081a11) ncim_query_button_pane_cp01

0x282b,	// (0x00081a1d) ncim_query_entry_pane_ParamLimits

0x282b,	// (0x00081a1d) ncim_query_entry_pane

0x283e,	// (0x00081a30) ncimui_query_pane_g1

0x284a,	// (0x00081a3c) ncimui_query_pane_t1_ParamLimits

0x284a,	// (0x00081a3c) ncimui_query_pane_t1

0x3d47,	// (0x00082f39) input_focus_pane_cp012

0x2863,	// (0x00081a55) ncim_query_entry_pane_t1

0x44f9,	// (0x000836eb) main_im_pane_ParamLimits

0x3d47,	// (0x00082f39) main_mobtv_pane_ParamLimits

0x3d47,	// (0x00082f39) main_mobtv_pane

0xbd0b,	// (0x0008aefd) main_cset6_slider_pane_g18_ParamLimits

0xbd0b,	// (0x0008aefd) main_cset6_slider_pane_g18

0xbd2f,	// (0x0008af21) main_cset6_slider_pane_g19_ParamLimits

0xbd2f,	// (0x0008af21) main_cset6_slider_pane_g19

0x1b31,	// (0x00080d23) bg_main_mobtv_pane_ParamLimits

0x1b31,	// (0x00080d23) bg_main_mobtv_pane

0xc075,	// (0x0008b267) main_mobtv_info_pane

0xc080,	// (0x0008b272) main_mobtv_loading_pane_ParamLimits

0xc080,	// (0x0008b272) main_mobtv_loading_pane

0x2875,	// (0x00081a67) main_mobtv_pg_channel_list_pane

0x287f,	// (0x00081a71) main_mobtv_pg_hdr_pane

0xc08d,	// (0x0008b27f) main_mobtv_programe_curr_pane_ParamLimits

0xc08d,	// (0x0008b27f) main_mobtv_programe_curr_pane

0xc09a,	// (0x0008b28c) main_mobtv_programe_next_pane_ParamLimits

0xc09a,	// (0x0008b28c) main_mobtv_programe_next_pane

0x2888,	// (0x00081a7a) popup_mobtv_noti_window

0x10d5,	// (0x000802c7) main_tv_pg_hdr_pane_g1

0x2890,	// (0x00081a82) main_tv_pg_hdr_pane_g2

0x2898,	// (0x00081a8a) main_tv_pg_hdr_pane_g3

0x28a0,	// (0x00081a92) main_tv_pg_hdr_pane_g4

0x28a8,	// (0x00081a9a) main_tv_pg_hdr_pane_g5

0x28b2,	// (0x00081aa4) main_tv_pg_hdr_pane_g6

0x28bc,	// (0x00081aae) main_tv_pg_hdr_pane_g7

0x28c6,	// (0x00081ab8) main_tv_pg_hdr_pane_g8

0x28d0,	// (0x00081ac2) main_tv_pg_hdr_pane_g9

0x28da,	// (0x00081acc) main_tv_pg_hdr_pane_g10

0x28e4,	// (0x00081ad6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0008ee14) main_tv_pg_hdr_pane_g

0x28ee,	// (0x00081ae0) main_tv_pg_hdr_pane_t1

0x28fc,	// (0x00081aee) main_tv_pg_hdr_pane_t2

0x290a,	// (0x00081afc) main_tv_pg_hdr_pane_t3

0x291a,	// (0x00081b0c) main_tv_pg_hdr_pane_t4

0x292a,	// (0x00081b1c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0008ee2b) main_tv_pg_hdr_pane_t

0x293a,	// (0x00081b2c) single_mobtv_pg_channel_pane_ParamLimits

0x293a,	// (0x00081b2c) single_mobtv_pg_channel_pane

0x294c,	// (0x00081b3e) single_mobtv_pg_channel_table_pane

0x2955,	// (0x00081b47) single_mobtv_pg_channel_thumb_pane

0x295e,	// (0x00081b50) single_tv_pg_channel_pane_g1

0x2967,	// (0x00081b59) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0008ee36) single_tv_pg_channel_pane_g

0x133c,	// (0x0008052e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x133c,	// (0x0008052e) bg_single_mobtv_pg_channel_thumb_pane

0x2970,	// (0x00081b62) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2970,	// (0x00081b62) single_mobtv_pg_channel_thumb_pane_g1

0x297e,	// (0x00081b70) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x297e,	// (0x00081b70) single_mobtv_pg_channel_thumb_pane_g2

0x298a,	// (0x00081b7c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x298a,	// (0x00081b7c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0008ee3b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0008ee3b) single_mobtv_pg_channel_thumb_pane_g

0x2996,	// (0x00081b88) single_mobtv_pg_channel_thumb_pane_t1

0x29a4,	// (0x00081b96) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0008ee42) single_mobtv_pg_channel_thumb_pane_t

0x10d5,	// (0x000802c7) bg_single_mobtv_pg_channel_table_pane_g1

0x10d5,	// (0x000802c7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0008e8f2) bg_single_mobtv_pg_channel_table_pane_g

0x29b2,	// (0x00081ba4) single_mobtv_pg_channel_table_pane_t1

0x29c0,	// (0x00081bb2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0008ee47) single_mobtv_pg_channel_table_pane_t

0xc0af,	// (0x0008b2a1) main_mobtv_info_pane_g1_ParamLimits

0xc0af,	// (0x0008b2a1) main_mobtv_info_pane_g1

0xc0cb,	// (0x0008b2bd) main_mobtv_info_pane_t1_ParamLimits

0xc0cb,	// (0x0008b2bd) main_mobtv_info_pane_t1

0xc143,	// (0x0008b335) main_mobtv_info_pane_t2_ParamLimits

0xc143,	// (0x0008b335) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0008ee51) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0008ee51) main_mobtv_info_pane_t

0xc1d2,	// (0x0008b3c4) wait_bar_pane_cp05

0xc1e4,	// (0x0008b3d6) main_mobtv_loading_pane_g1_ParamLimits

0xc1e4,	// (0x0008b3d6) main_mobtv_loading_pane_g1

0xc1f2,	// (0x0008b3e4) main_mobtv_loading_pane_g2_ParamLimits

0xc1f2,	// (0x0008b3e4) main_mobtv_loading_pane_g2

0xc1fe,	// (0x0008b3f0) main_mobtv_loading_pane_g3_ParamLimits

0xc1fe,	// (0x0008b3f0) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0008ee58) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0008ee58) main_mobtv_loading_pane_g

0x29ce,	// (0x00081bc0) main_mobtv_loading_pane_t1_ParamLimits

0x29ce,	// (0x00081bc0) main_mobtv_loading_pane_t1

0x29e6,	// (0x00081bd8) main_mobtv_loading_pane_t2_ParamLimits

0x29e6,	// (0x00081bd8) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0008ee5f) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0008ee5f) main_mobtv_loading_pane_t

0xc20c,	// (0x0008b3fe) wait_bar_pane_cp06_ParamLimits

0xc20c,	// (0x0008b3fe) wait_bar_pane_cp06

0x2a0a,	// (0x00081bfc) main_mobtv_programe_curr_pane_t1

0x2a18,	// (0x00081c0a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0008ee64) main_mobtv_programe_curr_pane_t

0x2a26,	// (0x00081c18) main_mobtv_programe_next_pane_t1

0x2a34,	// (0x00081c26) main_mobtv_programe_next_pane_t2

0x2a42,	// (0x00081c34) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0008ee69) main_mobtv_programe_next_pane_t

0x018a,	// (0x0007f37c) bg_popup_mobtv_noti_window_pane

0x2a50,	// (0x00081c42) popup_mobtv_noti_window_g1

0x2a58,	// (0x00081c4a) popup_mobtv_noti_window_t1

0x2a66,	// (0x00081c58) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0008ee70) popup_mobtv_noti_window_t

0x10d5,	// (0x000802c7) bg_popup_mobtv_noti_window_pane_g1

0x018a,	// (0x0007f37c) sc_clock_pane

0x018a,	// (0x0007f37c) main_fs_bigclock_pane

0xb8ff,	// (0x0008aaf1) blid2_tripm_pane_t4_ParamLimits

0xb8ff,	// (0x0008aaf1) blid2_tripm_pane_t4

0xc218,	// (0x0008b40a) sc_clock_pane_g1_ParamLimits

0xc218,	// (0x0008b40a) sc_clock_pane_g1

0xc226,	// (0x0008b418) sc_clock_pane_t1_ParamLimits

0xc226,	// (0x0008b418) sc_clock_pane_t1

0xc239,	// (0x0008b42b) sc_clock_pane_t2_ParamLimits

0xc239,	// (0x0008b42b) sc_clock_pane_t2

0xc24b,	// (0x0008b43d) sc_clock_pane_t3_ParamLimits

0xc24b,	// (0x0008b43d) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0008ee75) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0008ee75) sc_clock_pane_t

0xd0cc,	// (0x0008c2be) main_fs_bigclock_indicator_pane_ParamLimits

0xd0cc,	// (0x0008c2be) main_fs_bigclock_indicator_pane

0xc2e9,	// (0x0008b4db) main_fs_bigclock_pane_g1_ParamLimits

0xc2e9,	// (0x0008b4db) main_fs_bigclock_pane_g1

0xd0d8,	// (0x0008c2ca) main_fs_bigclock_pane_t1_ParamLimits

0xd0d8,	// (0x0008c2ca) main_fs_bigclock_pane_t1

0xd0ea,	// (0x0008c2dc) main_fs_bigclock_pane_t2_ParamLimits

0xd0ea,	// (0x0008c2dc) main_fs_bigclock_pane_t2

0xd0fc,	// (0x0008c2ee) main_fs_bigclock_pane_t3_ParamLimits

0xd0fc,	// (0x0008c2ee) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0008f074) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0008f074) main_fs_bigclock_pane_t

0x352b,	// (0x0008271d) main_fs_bigclock_indicator_pane_g1

0x273a,	// (0x0008192c) ncim_query_content_pane_g2_ParamLimits

0x273a,	// (0x0008192c) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0008ee02) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0008ee02) ncim_query_content_pane_g

0xc25f,	// (0x0008b451) sc_clock_pane_t4_ParamLimits

0xc25f,	// (0x0008b451) sc_clock_pane_t4

0x3d47,	// (0x00082f39) main_radioblah_pane

0x1a82,	// (0x00080c74) cell_call4_button_pane_t1_copy1_ParamLimits

0x1a82,	// (0x00080c74) cell_call4_button_pane_t1_copy1

0xbf01,	// (0x0008b0f3) main_ncimui_pane_t1_ParamLimits

0xbf01,	// (0x0008b0f3) main_ncimui_pane_t1

0xbf1b,	// (0x0008b10d) main_ncimui_pane_t2_ParamLimits

0xbf1b,	// (0x0008b10d) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0008edfb) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0008edfb) main_ncimui_pane_t

0x2a74,	// (0x00081c66) main_radioblah_anim_pane_ParamLimits

0x2a74,	// (0x00081c66) main_radioblah_anim_pane

0x2a85,	// (0x00081c77) main_radioblah_info_pane_ParamLimits

0x2a85,	// (0x00081c77) main_radioblah_info_pane

0x2a99,	// (0x00081c8b) main_radioblah_pane_t1_ParamLimits

0x2a99,	// (0x00081c8b) main_radioblah_pane_t1

0x2ab5,	// (0x00081ca7) main_radioblah_pane_t2_ParamLimits

0x2ab5,	// (0x00081ca7) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0008ee96) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0008ee96) main_radioblah_pane_t

0xc465,	// (0x0008b657) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc465,	// (0x0008b657) main_radioblah_rocker_ctrl_pane

0x2afd,	// (0x00081cef) main_radioblah_info_pane_t1_ParamLimits

0x2afd,	// (0x00081cef) main_radioblah_info_pane_t1

0xc4aa,	// (0x0008b69c) main_radioblah_info_pane_t2_ParamLimits

0xc4aa,	// (0x0008b69c) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0008ee9f) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0008ee9f) main_radioblah_info_pane_t

0x10d5,	// (0x000802c7) main_radioblah_rocker_ctrl_pane_g1

0xc55a,	// (0x0008b74c) main_radioblah_rocker_ctrl_pane_g2

0xc562,	// (0x0008b754) main_radioblah_rocker_ctrl_pane_g3

0xc56a,	// (0x0008b75c) main_radioblah_rocker_ctrl_pane_g4

0xc572,	// (0x0008b764) main_radioblah_rocker_ctrl_pane_g5

0xc57a,	// (0x0008b76c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0008eea8) main_radioblah_rocker_ctrl_pane_g

0xbeb3,	// (0x0008b0a5) main_cset_text2_pane_t1_copy1_ParamLimits

0xa4ed,	// (0x000896df) cam4_image_uncrop_qvga_pane

0xa642,	// (0x00089834) vid4_image_uncrop_qcif_pane

0xba8d,	// (0x0008ac7f) cam6_image_uncrop_qvga_pane_ParamLimits

0xba8d,	// (0x0008ac7f) cam6_image_uncrop_qvga_pane

0x23a0,	// (0x00081592) vid6_image_uncrop_qcif_pane_ParamLimits

0x23a0,	// (0x00081592) vid6_image_uncrop_qcif_pane

0x018a,	// (0x0007f37c) bg_popup_preview_window_pane_cp03

0x26ec,	// (0x000818de) list_cset_text2_pane

0x26f4,	// (0x000818e6) main_cset6_text2_pane_g1

0x26fc,	// (0x000818ee) main_cset6_text2_pane_t1

0xc582,	// (0x0008b774) list_cset_text2_pane_t1_ParamLimits

0xc582,	// (0x0008b774) list_cset_text2_pane_t1

0x3d47,	// (0x00082f39) main_radioblah_pane_ParamLimits

0xc1be,	// (0x0008b3b0) main_mobtv_info_pane_t3_ParamLimits

0xc1be,	// (0x0008b3b0) main_mobtv_info_pane_t3

0xc453,	// (0x0008b645) main_radioblah_pane_g1

0xc47e,	// (0x0008b670) main_radioblah_info_pane_g1

0xc4ff,	// (0x0008b6f1) main_radioblah_info_pane_t3_ParamLimits

0xc4ff,	// (0x0008b6f1) main_radioblah_info_pane_t3

0x7218,	// (0x0008640a) highlight_cell_cale_month_pane_ParamLimits

0x7218,	// (0x0008640a) highlight_cell_cale_month_pane

0x018a,	// (0x0007f37c) main_phob_fisheye_pane

0x1456,	// (0x00080648) scroll_pane_cp0031_ParamLimits

0x1456,	// (0x00080648) scroll_pane_cp0031

0x24ae,	// (0x000816a0) wait_bar_pane_cp08_ParamLimits

0xbc9f,	// (0x0008ae91) cset_list_set_pane_copy1_ParamLimits

0x2b37,	// (0x00081d29) highlight_cell_cale_month_pane_g1

0xc5ad,	// (0x0008b79f) highlight_cell_cale_month_pane_t1

0x20e8,	// (0x000812da) list_gen_pane_cp01

0x1c88,	// (0x00080e7a) scroll_pane_01

0xc5bb,	// (0x0008b7ad) list_single_double_fisheye_pane

0xc5c4,	// (0x0008b7b6) list_double_fisheye_pane_g1_ParamLimits

0xc5c4,	// (0x0008b7b6) list_double_fisheye_pane_g1

0xc5d0,	// (0x0008b7c2) list_double_fisheye_pane_g2_ParamLimits

0xc5d0,	// (0x0008b7c2) list_double_fisheye_pane_g2

0xc5e4,	// (0x0008b7d6) list_double_fisheye_pane_g3_ParamLimits

0xc5e4,	// (0x0008b7d6) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0008eeb5) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0008eeb5) list_double_fisheye_pane_g

0xc60d,	// (0x0008b7ff) list_double_fisheye_pane_t1_ParamLimits

0xc60d,	// (0x0008b7ff) list_double_fisheye_pane_t1

0xc628,	// (0x0008b81a) list_double_fisheye_pane_t2_ParamLimits

0xc628,	// (0x0008b81a) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0008eec0) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0008eec0) list_double_fisheye_pane_t

0x018a,	// (0x0007f37c) main_call5_pane

0xc285,	// (0x0008b477) sc_swipe_pane_ParamLimits

0xc285,	// (0x0008b477) sc_swipe_pane

0xc656,	// (0x0008b848) call5_image_pane_ParamLimits

0xc656,	// (0x0008b848) call5_image_pane

0xc666,	// (0x0008b858) call5_swipe_1_pane_ParamLimits

0xc666,	// (0x0008b858) call5_swipe_1_pane

0xc672,	// (0x0008b864) call5_swipe_2_pane_ParamLimits

0xc672,	// (0x0008b864) call5_swipe_2_pane

0xc68c,	// (0x0008b87e) popup_call5_audio_first_window_ParamLimits

0xc68c,	// (0x0008b87e) popup_call5_audio_first_window

0x133c,	// (0x0008052e) call5_swipe_1_pane_g1_ParamLimits

0x133c,	// (0x0008052e) call5_swipe_1_pane_g1

0x2b3f,	// (0x00081d31) call5_swipe_1_pane_g2_ParamLimits

0x2b3f,	// (0x00081d31) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0008eec5) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0008eec5) call5_swipe_1_pane_g

0x2b4b,	// (0x00081d3d) call5_swipe_1_pane_t1_ParamLimits

0x2b4b,	// (0x00081d3d) call5_swipe_1_pane_t1

0x133c,	// (0x0008052e) call5_swipe_2_pane_g1_ParamLimits

0x133c,	// (0x0008052e) call5_swipe_2_pane_g1

0x2b60,	// (0x00081d52) call5_swipe_2_pane_g2_ParamLimits

0x2b60,	// (0x00081d52) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0008eeca) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0008eeca) call5_swipe_2_pane_g

0x2b6c,	// (0x00081d5e) call5_swipe_2_pane_t1_ParamLimits

0x2b6c,	// (0x00081d5e) call5_swipe_2_pane_t1

0x2b81,	// (0x00081d73) sc_swipe_pane_g1_ParamLimits

0x2b81,	// (0x00081d73) sc_swipe_pane_g1

0x2b8e,	// (0x00081d80) sc_swipe_pane_g2_ParamLimits

0x2b8e,	// (0x00081d80) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0008eecf) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0008eecf) sc_swipe_pane_g

0x2b9a,	// (0x00081d8c) sc_swipe_pane_t1_ParamLimits

0x2b9a,	// (0x00081d8c) sc_swipe_pane_t1

0x018a,	// (0x0007f37c) main_cmail_launcher_pane

0xc69a,	// (0x0008b88c) aid_size_cell_cmail_l_ParamLimits

0xc69a,	// (0x0008b88c) aid_size_cell_cmail_l

0xc6aa,	// (0x0008b89c) grid_cmail_l_pane_ParamLimits

0xc6aa,	// (0x0008b89c) grid_cmail_l_pane

0xc6ba,	// (0x0008b8ac) cell_cmail_l_pane_ParamLimits

0xc6ba,	// (0x0008b8ac) cell_cmail_l_pane

0xc6ce,	// (0x0008b8c0) cell_cmail_l_pane_g1_ParamLimits

0xc6ce,	// (0x0008b8c0) cell_cmail_l_pane_g1

0xc6da,	// (0x0008b8cc) cell_cmail_l_pane_t1_ParamLimits

0xc6da,	// (0x0008b8cc) cell_cmail_l_pane_t1

0x2baf,	// (0x00081da1) cell_cmail_l_pane_t2_ParamLimits

0x2baf,	// (0x00081da1) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0008eed4) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0008eed4) cell_cmail_l_pane_t

0x3d47,	// (0x00082f39) grid_highlight_pane_cp018_ParamLimits

0x3d47,	// (0x00082f39) grid_highlight_pane_cp018

0x5564,	// (0x00084756) main2_pane_ParamLimits

0x5564,	// (0x00084756) main2_pane

0xd96c,	// (0x0008cb5e) popup_sp_fs_action_menu_bg_pane_g1

0xd974,	// (0x0008cb66) popup_sp_fs_action_menu_bg_pane_g2

0xd97c,	// (0x0008cb6e) popup_sp_fs_action_menu_bg_pane_g3

0xd984,	// (0x0008cb76) popup_sp_fs_action_menu_bg_pane_g4

0xd98c,	// (0x0008cb7e) popup_sp_fs_action_menu_bg_pane_g5

0xd994,	// (0x0008cb86) popup_sp_fs_action_menu_bg_pane_g6

0xd99c,	// (0x0008cb8e) popup_sp_fs_action_menu_bg_pane_g7

0xd9a4,	// (0x0008cb96) popup_sp_fs_action_menu_bg_pane_g8

0xd9ac,	// (0x0008cb9e) popup_sp_fs_action_menu_bg_pane_g9

0xd9b4,	// (0x0008cba6) popup_sp_fs_action_menu_bg_pane_g10

0xd9b4,	// (0x0008cba6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0008e39e) popup_sp_fs_action_menu_bg_pane_g

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t3_g3_g1

0x0302,	// (0x0007f4f4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0302,	// (0x0007f4f4) list_medium_line_x2_t3_g3_g2

0x030e,	// (0x0007f500) list_medium_line_x2_t3_g3_g3_ParamLimits

0x030e,	// (0x0007f500) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0008e44e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0008e44e) list_medium_line_x2_t3_g3_g

0x031a,	// (0x0007f50c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x031a,	// (0x0007f50c) list_medium_line_x2_t3_g3_t1

0x633b,	// (0x0008552d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x633b,	// (0x0008552d) list_medium_line_x2_t3_g3_t2

0x032f,	// (0x0007f521) list_medium_line_x2_t3_g3_t3_ParamLimits

0x032f,	// (0x0007f521) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0008e455) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0008e455) list_medium_line_x2_t3_g3_t

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t3_g2_g1

0x030e,	// (0x0007f500) list_medium_line_x2_t3_g2_g2_ParamLimits

0x030e,	// (0x0007f500) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0008e45c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0008e45c) list_medium_line_x2_t3_g2_g

0x0344,	// (0x0007f536) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0344,	// (0x0007f536) list_medium_line_x2_t3_g2_t1

0x035a,	// (0x0007f54c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x035a,	// (0x0007f54c) list_medium_line_x2_t3_g2_t2

0x036c,	// (0x0007f55e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x036c,	// (0x0007f55e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0008e461) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0008e461) list_medium_line_x2_t3_g2_t

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t4_g4_g1

0x038a,	// (0x0007f57c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x038a,	// (0x0007f57c) list_medium_line_x2_t4_g4_g2

0x0302,	// (0x0007f4f4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0302,	// (0x0007f4f4) list_medium_line_x2_t4_g4_g3

0x0396,	// (0x0007f588) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0396,	// (0x0007f588) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0008e468) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0008e468) list_medium_line_x2_t4_g4_g

0x634d,	// (0x0008553f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x634d,	// (0x0008553f) list_medium_line_x2_t4_g4_t1

0x6364,	// (0x00085556) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6364,	// (0x00085556) list_medium_line_x2_t4_g4_t2

0x6379,	// (0x0008556b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6379,	// (0x0008556b) list_medium_line_x2_t4_g4_t3

0x03a2,	// (0x0007f594) list_medium_line_x2_t4_g4_t4_ParamLimits

0x03a2,	// (0x0007f594) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0008e471) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0008e471) list_medium_line_x2_t4_g4_t

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t2_g4_g1

0x038a,	// (0x0007f57c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x038a,	// (0x0007f57c) list_medium_line_x2_t2_g4_g2

0x0302,	// (0x0007f4f4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0302,	// (0x0007f4f4) list_medium_line_x2_t2_g4_g3

0x030e,	// (0x0007f500) list_medium_line_x2_t2_g4_g4_ParamLimits

0x030e,	// (0x0007f500) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008e4d8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008e4d8) list_medium_line_x2_t2_g4_g

0x03b4,	// (0x0007f5a6) list_medium_line_x2_t2_g4_t1_ParamLimits

0x03b4,	// (0x0007f5a6) list_medium_line_x2_t2_g4_t1

0x032f,	// (0x0007f521) list_medium_line_x2_t2_g4_t2_ParamLimits

0x032f,	// (0x0007f521) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0008e4e1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0008e4e1) list_medium_line_x2_t2_g4_t

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t2_g3_g1

0x0302,	// (0x0007f4f4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0302,	// (0x0007f4f4) list_medium_line_x2_t2_g3_g2

0x030e,	// (0x0007f500) list_medium_line_x2_t2_g3_g3_ParamLimits

0x030e,	// (0x0007f500) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0008e44e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0008e44e) list_medium_line_x2_t2_g3_g

0x03c9,	// (0x0007f5bb) list_medium_line_x2_t2_g3_t1_ParamLimits

0x03c9,	// (0x0007f5bb) list_medium_line_x2_t2_g3_t1

0x032f,	// (0x0007f521) list_medium_line_x2_t2_g3_t2_ParamLimits

0x032f,	// (0x0007f521) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008e4e6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008e4e6) list_medium_line_x2_t2_g3_t

0x7494,	// (0x00086686) main_sp_fs_list_pane_ParamLimits

0x7494,	// (0x00086686) main_sp_fs_list_pane

0x74a0,	// (0x00086692) sp_fs_scroll_pane_ParamLimits

0x74a0,	// (0x00086692) sp_fs_scroll_pane

0x74ac,	// (0x0008669e) list_medium_line_x2_t3_t1

0x74bc,	// (0x000866ae) list_medium_line_x2_t3_t2

0x040c,	// (0x0007f5fe) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0008e531) list_medium_line_x2_t3_t

0x74ca,	// (0x000866bc) list_medium_line_x3_t4_t1

0x74da,	// (0x000866cc) list_medium_line_x3_t4_t2

0x041a,	// (0x0007f60c) list_medium_line_x3_t4_t3

0x040c,	// (0x0007f5fe) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008e538) list_medium_line_x3_t4_t

0x74e8,	// (0x000866da) list_medium_line_x4_t5_t1

0x74f8,	// (0x000866ea) list_medium_line_x4_t5_t2

0x041a,	// (0x0007f60c) list_medium_line_x4_t5_t3

0x0428,	// (0x0007f61a) list_medium_line_x4_t5_t4

0x040c,	// (0x0007f5fe) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0008e541) list_medium_line_x4_t5_t

0x02f6,	// (0x0007f4e8) list_medium_line_t4_g4_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_t4_g4_g1

0x0396,	// (0x0007f588) list_medium_line_t4_g4_g2_ParamLimits

0x0396,	// (0x0007f588) list_medium_line_t4_g4_g2

0x0436,	// (0x0007f628) list_medium_line_t4_g4_g3_ParamLimits

0x0436,	// (0x0007f628) list_medium_line_t4_g4_g3

0x030e,	// (0x0007f500) list_medium_line_t4_g4_g4_ParamLimits

0x030e,	// (0x0007f500) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0008e54c) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0008e54c) list_medium_line_t4_g4_g

0x0442,	// (0x0007f634) list_medium_line_t4_g4_t1_ParamLimits

0x0442,	// (0x0007f634) list_medium_line_t4_g4_t1

0x0457,	// (0x0007f649) list_medium_line_t4_g4_t2_ParamLimits

0x0457,	// (0x0007f649) list_medium_line_t4_g4_t2

0x046d,	// (0x0007f65f) list_medium_line_t4_g4_t3_ParamLimits

0x046d,	// (0x0007f65f) list_medium_line_t4_g4_t3

0x032f,	// (0x0007f521) list_medium_line_t4_g4_t4_ParamLimits

0x032f,	// (0x0007f521) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0008e555) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0008e555) list_medium_line_t4_g4_t

0x75ed,	// (0x000867df) chi_dic_find_pane_g1

0x8642,	// (0x00087834) main_tport_pane

0x1dad,	// (0x00080f9f) list_medium_line_plain_t1

0x1dc3,	// (0x00080fb5) list_medium_line_t2_g2_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_t2_g2_g1

0x1dcf,	// (0x00080fc1) list_medium_line_t2_g2_g2_ParamLimits

0x1dcf,	// (0x00080fc1) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0008ec11) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0008ec11) list_medium_line_t2_g2_g

0xb114,	// (0x0008a306) list_medium_line_t2_g2_t1_ParamLimits

0xb114,	// (0x0008a306) list_medium_line_t2_g2_t1

0xb12e,	// (0x0008a320) list_medium_line_t2_g2_t2_ParamLimits

0xb12e,	// (0x0008a320) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0008ec16) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0008ec16) list_medium_line_t2_g2_t

0x20f1,	// (0x000812e3) aid_sp_fs_list_icon_a_sm

0x3cf7,	// (0x00082ee9) aid_sp_fs_list_icon_d

0x20f9,	// (0x000812eb) aid_sp_fs_text_primary

0x2102,	// (0x000812f4) aid_sp_fs_text_secondary

0x210b,	// (0x000812fd) list_medium_line

0x210b,	// (0x000812fd) list_medium_line_g2

0x210b,	// (0x000812fd) list_medium_line_g3

0x210b,	// (0x000812fd) list_medium_line_plain

0x210b,	// (0x000812fd) list_medium_line_plain_t2

0x210b,	// (0x000812fd) list_medium_line_plain_t3

0x210b,	// (0x000812fd) list_medium_line_right_icon

0x210b,	// (0x000812fd) list_medium_line_right_iconx2

0x210b,	// (0x000812fd) list_medium_line_t2

0x210b,	// (0x000812fd) list_medium_line_t2_g2

0x210b,	// (0x000812fd) list_medium_line_t2_g3

0x210b,	// (0x000812fd) list_medium_line_t2_right_icon

0x210b,	// (0x000812fd) list_medium_line_t2_right_iconx2

0x210b,	// (0x000812fd) list_medium_line_t3

0x210b,	// (0x000812fd) list_medium_line_t3_g2

0x210b,	// (0x000812fd) list_medium_line_t3_g3

0x210b,	// (0x000812fd) list_medium_line_t3_right_iconx2

0x2114,	// (0x00081306) list_medium_line_t4_g4

0x3e14,	// (0x00083006) list_medium_line_x2

0x3e14,	// (0x00083006) list_medium_line_x2_t2_g2

0x3e14,	// (0x00083006) list_medium_line_x2_t2_g3

0x3e14,	// (0x00083006) list_medium_line_x2_t2_g4

0x3e14,	// (0x00083006) list_medium_line_x2_t3

0x3e14,	// (0x00083006) list_medium_line_x2_t3_g2

0x3e14,	// (0x00083006) list_medium_line_x2_t3_g3

0x3e14,	// (0x00083006) list_medium_line_x2_t3_g4

0x3e14,	// (0x00083006) list_medium_line_x2_t4_g2

0x3e14,	// (0x00083006) list_medium_line_x2_t4_g4

0x211d,	// (0x0008130f) list_medium_line_x3

0x211d,	// (0x0008130f) list_medium_line_x3_t4

0x211d,	// (0x0008130f) list_medium_line_x3_t4_g4

0x2114,	// (0x00081306) list_medium_line_x4_t4

0x2114,	// (0x00081306) list_medium_line_x4_t4_g7

0x2114,	// (0x00081306) list_medium_line_x4_t5

0x2126,	// (0x00081318) list_single_fs_dyc_pane_ParamLimits

0x2126,	// (0x00081318) list_single_fs_dyc_pane

0x02f6,	// (0x0007f4e8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x4_t4_g7_g1

0x261b,	// (0x0008180d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x261b,	// (0x0008180d) list_medium_line_x4_t4_g7_g2

0x2627,	// (0x00081819) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2627,	// (0x00081819) list_medium_line_x4_t4_g7_g3

0x2636,	// (0x00081828) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2636,	// (0x00081828) list_medium_line_x4_t4_g7_g4

0x2642,	// (0x00081834) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2642,	// (0x00081834) list_medium_line_x4_t4_g7_g5

0x2651,	// (0x00081843) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2651,	// (0x00081843) list_medium_line_x4_t4_g7_g6

0x2660,	// (0x00081852) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2660,	// (0x00081852) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0008ede1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0008ede1) list_medium_line_x4_t4_g7_g

0x266c,	// (0x0008185e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x266c,	// (0x0008185e) list_medium_line_x4_t4_g7_t1

0x2681,	// (0x00081873) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2681,	// (0x00081873) list_medium_line_x4_t4_g7_t2

0x2696,	// (0x00081888) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2696,	// (0x00081888) list_medium_line_x4_t4_g7_t3

0x26ab,	// (0x0008189d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x26ab,	// (0x0008189d) list_medium_line_x4_t4_g7_t4

0x26bd,	// (0x000818af) list_medium_line_x4_t4_g7_t5_ParamLimits

0x26bd,	// (0x000818af) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0008edf0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0008edf0) list_medium_line_x4_t4_g7_t

0x26cf,	// (0x000818c1) list_single_dyc_row_pane_ParamLimits

0x26cf,	// (0x000818c1) list_single_dyc_row_pane

0xc64a,	// (0x0008b83c) call5_gesture_pane_ParamLimits

0xc64a,	// (0x0008b83c) call5_gesture_pane

0xc67e,	// (0x0008b870) call5_windows_pane_ParamLimits

0xc67e,	// (0x0008b870) call5_windows_pane

0xc6f0,	// (0x0008b8e2) call5_swipe_1_pane_cp_ParamLimits

0xc6f0,	// (0x0008b8e2) call5_swipe_1_pane_cp

0xc6fc,	// (0x0008b8ee) call5_swipe_2_pane_cp_ParamLimits

0xc6fc,	// (0x0008b8ee) call5_swipe_2_pane_cp

0xe349,	// (0x0008d53b) call5_image_pane_cp

0xc708,	// (0x0008b8fa) popup_call5_audio_first_window_cp_ParamLimits

0xc708,	// (0x0008b8fa) popup_call5_audio_first_window_cp

0x2b81,	// (0x00081d73) call5_swipe_1_pane_g1_cp_ParamLimits

0x2b81,	// (0x00081d73) call5_swipe_1_pane_g1_cp

0x2bc1,	// (0x00081db3) call5_swipe_1_pane_g2_cp

0x2b9a,	// (0x00081d8c) call5_swipe_1_pane_t1_cp_ParamLimits

0x2b9a,	// (0x00081d8c) call5_swipe_1_pane_t1_cp

0x2b81,	// (0x00081d73) call5_swipe_2_pane_g1_cp_ParamLimits

0x2b81,	// (0x00081d73) call5_swipe_2_pane_g1_cp

0x2bc9,	// (0x00081dbb) call5_swipe_2_pane_g2_cp

0x2bd1,	// (0x00081dc3) call5_swipe_2_pane_t1_cp_ParamLimits

0x2bd1,	// (0x00081dc3) call5_swipe_2_pane_t1_cp

0x3d47,	// (0x00082f39) main_sp_fs_email_pane

0x2be6,	// (0x00081dd8) main_sp_fs_listscroll_pane_te

0x2bef,	// (0x00081de1) popup_sp_fs_action_menu_pane_ParamLimits

0x2bef,	// (0x00081de1) popup_sp_fs_action_menu_pane

0x10d5,	// (0x000802c7) bg_sp_fs_ctrlbar_pane_g1

0x2c31,	// (0x00081e23) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2c3a,	// (0x00081e2c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2c43,	// (0x00081e35) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x10d5,	// (0x000802c7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0008eed9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0eb8,	// (0x000800aa) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0eb8,	// (0x000800aa) bg_sp_fs_ctrlbar_ddmenu_pane

0x2c4c,	// (0x00081e3e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2c4c,	// (0x00081e3e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2c58,	// (0x00081e4a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2c58,	// (0x00081e4a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0008eee2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0008eee2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2c64,	// (0x00081e56) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2c64,	// (0x00081e56) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2c7e,	// (0x00081e70) list_medium_line_t2_right_icon_g1

0xc714,	// (0x0008b906) list_medium_line_t2_right_icon_t1

0xc724,	// (0x0008b916) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0008eee7) list_medium_line_t2_right_icon_t

0x0bcd,	// (0x0007fdbf) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0bcd,	// (0x0007fdbf) bg_sp_fs_ctrlbar_pane

0xc789,	// (0x0008b97b) main_sp_fs_ctrlbar_button_pane_cp01

0xc791,	// (0x0008b983) main_sp_fs_ctrlbar_ddmenu_pane

0x2cbe,	// (0x00081eb0) main_sp_fs_ctrlbar_pane_g1

0x2cca,	// (0x00081ebc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0008eeec) main_sp_fs_ctrlbar_pane_g

0x2cd6,	// (0x00081ec8) main_sp_fs_ctrlbar_pane_t1

0xc79b,	// (0x0008b98d) main_sp_fs_ctrlbar_pane

0xc7b7,	// (0x0008b9a9) main_sp_fs_listscroll_pane_te_cp01

0xc7c8,	// (0x0008b9ba) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc7c8,	// (0x0008b9ba) popup_sp_fs_action_menu_pane_cp01

0x3d47,	// (0x00082f39) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3d47,	// (0x00082f39) bg_sp_fs_highlight_list_pane_cp01

0x2ceb,	// (0x00081edd) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2ceb,	// (0x00081edd) sp_fs_action_menu_list_gene_pane_g1

0x2cfa,	// (0x00081eec) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2cfa,	// (0x00081eec) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0008eef1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0008eef1) sp_fs_action_menu_list_gene_pane_g

0x2d07,	// (0x00081ef9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2d07,	// (0x00081ef9) sp_fs_action_menu_list_gene_pane_t1

0x2d1f,	// (0x00081f11) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2d1f,	// (0x00081f11) sp_fs_action_menu_list_gene_pane

0x2d3e,	// (0x00081f30) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2d3e,	// (0x00081f30) popup_sp_fs_action_menu_bg_pane

0x2d4c,	// (0x00081f3e) sp_fs_action_menu_list_pane_ParamLimits

0x2d4c,	// (0x00081f3e) sp_fs_action_menu_list_pane

0x2d6c,	// (0x00081f5e) sp_fs_scroll_pane_cp01_ParamLimits

0x2d6c,	// (0x00081f5e) sp_fs_scroll_pane_cp01

0xc7e0,	// (0x0008b9d2) list_medium_line_plain_t2_t1

0xc7f0,	// (0x0008b9e2) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0008eef6) list_medium_line_plain_t2_t

0xc7fe,	// (0x0008b9f0) list_medium_line_plain_t3_t1

0xc80e,	// (0x0008ba00) list_medium_line_plain_t3_t2

0xc81c,	// (0x0008ba0e) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0008eefb) list_medium_line_plain_t3_t

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t2_g2_g1

0x030e,	// (0x0007f500) list_medium_line_x2_t2_g2_g2_ParamLimits

0x030e,	// (0x0007f500) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0008e45c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0008e45c) list_medium_line_x2_t2_g2_g

0x0442,	// (0x0007f634) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0442,	// (0x0007f634) list_medium_line_x2_t2_g2_t1

0x032f,	// (0x0007f521) list_medium_line_x2_t2_g2_t2_ParamLimits

0x032f,	// (0x0007f521) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0008ef02) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0008ef02) list_medium_line_x2_t2_g2_t

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t4_g2_g1

0x2d92,	// (0x00081f84) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2d92,	// (0x00081f84) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0008ef07) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0008ef07) list_medium_line_x2_t4_g2_g

0xc82a,	// (0x0008ba1c) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc82a,	// (0x0008ba1c) list_medium_line_x2_t4_g2_t1

0xc841,	// (0x0008ba33) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc841,	// (0x0008ba33) list_medium_line_x2_t4_g2_t2

0xc856,	// (0x0008ba48) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc856,	// (0x0008ba48) list_medium_line_x2_t4_g2_t3

0x032f,	// (0x0007f521) list_medium_line_x2_t4_g2_t4_ParamLimits

0x032f,	// (0x0007f521) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0008ef0c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0008ef0c) list_medium_line_x2_t4_g2_t

0x2da4,	// (0x00081f96) list_medium_line_t3_right_iconx2_g1

0x2c7e,	// (0x00081e70) list_medium_line_t3_right_iconx2_g2

0xc868,	// (0x0008ba5a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0008ef15) list_medium_line_t3_right_iconx2_g

0xc870,	// (0x0008ba62) list_medium_line_t3_right_iconx2_t1

0xc880,	// (0x0008ba72) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0008ef1c) list_medium_line_t3_right_iconx2_t

0x02f6,	// (0x0007f4e8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x3_t4_g4_g1

0x0302,	// (0x0007f4f4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0302,	// (0x0007f4f4) list_medium_line_x3_t4_g4_g2

0x0396,	// (0x0007f588) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0396,	// (0x0007f588) list_medium_line_x3_t4_g4_g3

0x2dac,	// (0x00081f9e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2dac,	// (0x00081f9e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0008ef21) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0008ef21) list_medium_line_x3_t4_g4_g

0xc88e,	// (0x0008ba80) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc88e,	// (0x0008ba80) list_medium_line_x3_t4_g4_t1

0xc8a5,	// (0x0008ba97) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc8a5,	// (0x0008ba97) list_medium_line_x3_t4_g4_t2

0x2db8,	// (0x00081faa) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2db8,	// (0x00081faa) list_medium_line_x3_t4_g4_t3

0x2dcd,	// (0x00081fbf) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2dcd,	// (0x00081fbf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0008ef2a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0008ef2a) list_medium_line_x3_t4_g4_t

0xc8ba,	// (0x0008baac) list_single_dyc_row_text_pane_t1_ParamLimits

0xc8ba,	// (0x0008baac) list_single_dyc_row_text_pane_t1

0xc8f1,	// (0x0008bae3) list_single_dyc_row_text_pane_t2_ParamLimits

0xc8f1,	// (0x0008bae3) list_single_dyc_row_text_pane_t2

0x2dea,	// (0x00081fdc) list_single_dyc_row_text_pane_t3_ParamLimits

0x2dea,	// (0x00081fdc) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0008ef33) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0008ef33) list_single_dyc_row_text_pane_t

0x2dfc,	// (0x00081fee) list_single_dyc_row_pane_g1_ParamLimits

0x2dfc,	// (0x00081fee) list_single_dyc_row_pane_g1

0x2e08,	// (0x00081ffa) list_single_dyc_row_pane_g2_ParamLimits

0x2e08,	// (0x00081ffa) list_single_dyc_row_pane_g2

0x2e14,	// (0x00082006) list_single_dyc_row_pane_g3_ParamLimits

0x2e14,	// (0x00082006) list_single_dyc_row_pane_g3

0x2e20,	// (0x00082012) list_single_dyc_row_pane_g4_ParamLimits

0x2e20,	// (0x00082012) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0008ef3a) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0008ef3a) list_single_dyc_row_pane_g

0x2e2c,	// (0x0008201e) list_single_dyc_row_text_pane_ParamLimits

0x2e2c,	// (0x0008201e) list_single_dyc_row_text_pane

0x018a,	// (0x0007f37c) bg_sp_fs_scroll_pane

0x2e4b,	// (0x0008203d) thumb_sp_fs_scroll_pane

0x1dc3,	// (0x00080fb5) list_medium_line_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_g1

0x2e54,	// (0x00082046) list_medium_line_t1_ParamLimits

0x2e54,	// (0x00082046) list_medium_line_t1

0x02f6,	// (0x0007f4e8) list_medium_line_x2_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_g1

0x0302,	// (0x0007f4f4) list_medium_line_x2_g2_ParamLimits

0x0302,	// (0x0007f4f4) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0008ef43) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0008ef43) list_medium_line_x2_g

0x2e69,	// (0x0008205b) list_medium_line_x2_t1_ParamLimits

0x2e69,	// (0x0008205b) list_medium_line_x2_t1

0x02f6,	// (0x0007f4e8) list_medium_line_x3_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x3_g1

0x0302,	// (0x0007f4f4) list_medium_line_x3_g2_ParamLimits

0x0302,	// (0x0007f4f4) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0008ef43) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0008ef43) list_medium_line_x3_g

0x2e69,	// (0x0008205b) list_medium_line_x3_t1_ParamLimits

0x2e69,	// (0x0008205b) list_medium_line_x3_t1

0x2e7f,	// (0x00082071) thumb_sp_fs_scroll_pane_g1

0x2e88,	// (0x0008207a) thumb_sp_fs_scroll_pane_g2

0x2e91,	// (0x00082083) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008ef48) thumb_sp_fs_scroll_pane_g

0x2e7f,	// (0x00082071) bg_sp_fs_scroll_pane_g1

0x2e88,	// (0x0008207a) bg_sp_fs_scroll_pane_g2

0x2e91,	// (0x00082083) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008ef48) bg_sp_fs_scroll_pane_g

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x02f6,	// (0x0007f4e8) list_medium_line_x2_t3_g4_g1

0x038a,	// (0x0007f57c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x038a,	// (0x0007f57c) list_medium_line_x2_t3_g4_g2

0x0302,	// (0x0007f4f4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0302,	// (0x0007f4f4) list_medium_line_x2_t3_g4_g3

0x030e,	// (0x0007f500) list_medium_line_x2_t3_g4_g4_ParamLimits

0x030e,	// (0x0007f500) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008e4d8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008e4d8) list_medium_line_x2_t3_g4_g

0xc94b,	// (0x0008bb3d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc94b,	// (0x0008bb3d) list_medium_line_x2_t3_g4_t1

0xc961,	// (0x0008bb53) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc961,	// (0x0008bb53) list_medium_line_x2_t3_g4_t2

0x032f,	// (0x0007f521) list_medium_line_x2_t3_g4_t3_ParamLimits

0x032f,	// (0x0007f521) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0008ef4f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0008ef4f) list_medium_line_x2_t3_g4_t

0x1dc3,	// (0x00080fb5) list_medium_line_g2_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_g2_g1

0x1dcf,	// (0x00080fc1) list_medium_line_g2_g2_ParamLimits

0x1dcf,	// (0x00080fc1) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0008ec11) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0008ec11) list_medium_line_g2_g

0x2e9a,	// (0x0008208c) list_medium_line_g2_t1_ParamLimits

0x2e9a,	// (0x0008208c) list_medium_line_g2_t1

0x1dc3,	// (0x00080fb5) list_medium_line_t3_g2_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_t3_g2_g1

0x1dcf,	// (0x00080fc1) list_medium_line_t3_g2_g2_ParamLimits

0x1dcf,	// (0x00080fc1) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0008ec11) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0008ec11) list_medium_line_t3_g2_g

0xc97a,	// (0x0008bb6c) list_medium_line_t3_g2_t1_ParamLimits

0xc97a,	// (0x0008bb6c) list_medium_line_t3_g2_t1

0xc994,	// (0x0008bb86) list_medium_line_t3_g2_t2_ParamLimits

0xc994,	// (0x0008bb86) list_medium_line_t3_g2_t2

0xc9a9,	// (0x0008bb9b) list_medium_line_t3_g2_t3_ParamLimits

0xc9a9,	// (0x0008bb9b) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0008ef56) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0008ef56) list_medium_line_t3_g2_t

0x2c7e,	// (0x00081e70) list_medium_line_right_icon_g1

0x2eaf,	// (0x000820a1) list_medium_line_right_icon_t1

0x1dc3,	// (0x00080fb5) list_medium_line_t2_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_t2_g1

0xc9bf,	// (0x0008bbb1) list_medium_line_t2_t1_ParamLimits

0xc9bf,	// (0x0008bbb1) list_medium_line_t2_t1

0xc9d9,	// (0x0008bbcb) list_medium_line_t2_t2_ParamLimits

0xc9d9,	// (0x0008bbcb) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0008ef5d) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0008ef5d) list_medium_line_t2_t

0x1dc3,	// (0x00080fb5) list_medium_line_t3_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_t3_g1

0xc9ee,	// (0x0008bbe0) list_medium_line_t3_t1_ParamLimits

0xc9ee,	// (0x0008bbe0) list_medium_line_t3_t1

0xca05,	// (0x0008bbf7) list_medium_line_t3_t2_ParamLimits

0xca05,	// (0x0008bbf7) list_medium_line_t3_t2

0xca1a,	// (0x0008bc0c) list_medium_line_t3_t3_ParamLimits

0xca1a,	// (0x0008bc0c) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0008ef62) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0008ef62) list_medium_line_t3_t

0x1dc3,	// (0x00080fb5) list_medium_line_g3_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_g3_g1

0x2ebd,	// (0x000820af) list_medium_line_g3_g2_ParamLimits

0x2ebd,	// (0x000820af) list_medium_line_g3_g2

0x1dcf,	// (0x00080fc1) list_medium_line_g3_g3_ParamLimits

0x1dcf,	// (0x00080fc1) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0008ef69) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0008ef69) list_medium_line_g3_g

0x2ec9,	// (0x000820bb) list_medium_line_g3_t1_ParamLimits

0x2ec9,	// (0x000820bb) list_medium_line_g3_t1

0x1dc3,	// (0x00080fb5) list_medium_line_t2_g3_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_t2_g3_g1

0x2ebd,	// (0x000820af) list_medium_line_t2_g3_g2_ParamLimits

0x2ebd,	// (0x000820af) list_medium_line_t2_g3_g2

0x1dcf,	// (0x00080fc1) list_medium_line_t2_g3_g3_ParamLimits

0x1dcf,	// (0x00080fc1) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0008ef69) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0008ef69) list_medium_line_t2_g3_g

0xca2c,	// (0x0008bc1e) list_medium_line_t2_g3_t1_ParamLimits

0xca2c,	// (0x0008bc1e) list_medium_line_t2_g3_t1

0xca43,	// (0x0008bc35) list_medium_line_t2_g3_t2_ParamLimits

0xca43,	// (0x0008bc35) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0008ef70) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0008ef70) list_medium_line_t2_g3_t

0x1dc3,	// (0x00080fb5) list_medium_line_t3_g3_g1_ParamLimits

0x1dc3,	// (0x00080fb5) list_medium_line_t3_g3_g1

0x2ebd,	// (0x000820af) list_medium_line_t3_g3_g2_ParamLimits

0x2ebd,	// (0x000820af) list_medium_line_t3_g3_g2

0x1dcf,	// (0x00080fc1) list_medium_line_t3_g3_g3_ParamLimits

0x1dcf,	// (0x00080fc1) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0008ef69) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0008ef69) list_medium_line_t3_g3_g

0xca58,	// (0x0008bc4a) list_medium_line_t3_g3_t1_ParamLimits

0xca58,	// (0x0008bc4a) list_medium_line_t3_g3_t1

0xca6c,	// (0x0008bc5e) list_medium_line_t3_g3_t2_ParamLimits

0xca6c,	// (0x0008bc5e) list_medium_line_t3_g3_t2

0xca7e,	// (0x0008bc70) list_medium_line_t3_g3_t3_ParamLimits

0xca7e,	// (0x0008bc70) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0008ef75) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0008ef75) list_medium_line_t3_g3_t

0x2da4,	// (0x00081f96) list_medium_line_right_iconx2_g1

0x2c7e,	// (0x00081e70) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008ef7c) list_medium_line_right_iconx2_g

0x2ede,	// (0x000820d0) list_medium_line_right_iconx2_t1

0x2da4,	// (0x00081f96) list_medium_line_t2_right_iconx2_g1

0x2c7e,	// (0x00081e70) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008ef7c) list_medium_line_t2_right_iconx2_g

0xca90,	// (0x0008bc82) list_medium_line_t2_right_iconx2_t1

0xcaa0,	// (0x0008bc92) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0008ef81) list_medium_line_t2_right_iconx2_t

0x2eec,	// (0x000820de) list_medium_line_x4_t4_t1

0xcaae,	// (0x0008bca0) list_medium_line_x4_t4_t2

0xcabe,	// (0x0008bcb0) list_medium_line_x4_t4_t3

0xcace,	// (0x0008bcc0) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0008ef86) list_medium_line_x4_t4_t

0xcb07,	// (0x0008bcf9) tport_appsw_pane_ParamLimits

0xcb07,	// (0x0008bcf9) tport_appsw_pane

0xcb13,	// (0x0008bd05) tport_contact_pane_ParamLimits

0xcb13,	// (0x0008bd05) tport_contact_pane

0xcb23,	// (0x0008bd15) tport_listscroll_pane_ParamLimits

0xcb23,	// (0x0008bd15) tport_listscroll_pane

0xcb33,	// (0x0008bd25) cell_tport_appsw_pane_ParamLimits

0xcb33,	// (0x0008bd25) cell_tport_appsw_pane

0x13d9,	// (0x000805cb) tport_appsw_pane_g1_ParamLimits

0x13d9,	// (0x000805cb) tport_appsw_pane_g1

0x2efa,	// (0x000820ec) tport_contact_pane_g1

0x2f03,	// (0x000820f5) tport_contact_pane_t1

0x2f11,	// (0x00082103) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0008ef8f) tport_contact_pane_t

0x2f1f,	// (0x00082111) list_tport_pane

0x2f28,	// (0x0008211a) scroll_pane_cp_030

0x2f39,	// (0x0008212b) cell_tport_appsw_pane_g1

0x2f49,	// (0x0008213b) cell_tport_appsw_pane_t1

0x018a,	// (0x0007f37c) grid_highlight_pane_cp019

0xcb5e,	// (0x0008bd50) list_tport_double_graphic_pane_ParamLimits

0xcb5e,	// (0x0008bd50) list_tport_double_graphic_pane

0x3d47,	// (0x00082f39) list_highlight_pane_cp023_ParamLimits

0x3d47,	// (0x00082f39) list_highlight_pane_cp023

0xcb71,	// (0x0008bd63) list_tport_double_graphic_pane_g1_ParamLimits

0xcb71,	// (0x0008bd63) list_tport_double_graphic_pane_g1

0xcb7e,	// (0x0008bd70) list_tport_double_graphic_pane_t1_ParamLimits

0xcb7e,	// (0x0008bd70) list_tport_double_graphic_pane_t1

0xcb93,	// (0x0008bd85) list_tport_double_graphic_pane_t2_ParamLimits

0xcb93,	// (0x0008bd85) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0008ef9b) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0008ef9b) list_tport_double_graphic_pane_t

0x018a,	// (0x0007f37c) main_cale_note_pane

0xa89b,	// (0x00089a8d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa89b,	// (0x00089a8d) cell_vitu2_function_top_wide_pane_cp01

0xc1d2,	// (0x0008b3c4) wait_bar_pane_cp05_ParamLimits

0x018a,	// (0x0007f37c) listscroll_cmail_pane

0x2f5f,	// (0x00082151) list_cmail_pane

0xcbaf,	// (0x0008bda1) list_cmail_body_pane

0xcbd3,	// (0x0008bdc5) list_single_cmail_header_caption_pane

0xcc01,	// (0x0008bdf3) list_single_cmail_header_detail_pane_ParamLimits

0xcc01,	// (0x0008bdf3) list_single_cmail_header_detail_pane

0xcc39,	// (0x0008be2b) list_single_cmail_header_caption_pane_t1

0xcc49,	// (0x0008be3b) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc49,	// (0x0008be3b) list_single_cmail_header_detail_pane_g1

0x3d15,	// (0x00082f07) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3d15,	// (0x00082f07) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0008efa0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0008efa0) list_single_cmail_header_detail_pane_g

0x2f8c,	// (0x0008217e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2f8c,	// (0x0008217e) list_single_cmail_header_detail_pane_t1

0x2fbe,	// (0x000821b0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2fbe,	// (0x000821b0) list_single_cmail_header_editor_pane_bg

0x2fd0,	// (0x000821c2) list_cmail_body_pane_g1

0x2fd9,	// (0x000821cb) list_cmail_body_pane_t1

0x1b6e,	// (0x00080d60) list_single_cmail_header_editor_pane_bg_g1

0xdcd1,	// (0x0008cec3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1b7e,	// (0x00080d70) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1b76,	// (0x00080d68) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1dbb,	// (0x00080fad) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1b9e,	// (0x00080d90) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1b8e,	// (0x00080d80) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1b96,	// (0x00080d88) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdcb1,	// (0x0008cea3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcc87,	// (0x0008be79) calenote_gesture_pane_ParamLimits

0xcc87,	// (0x0008be79) calenote_gesture_pane

0xcca1,	// (0x0008be93) calenote_window_pane_ParamLimits

0xcca1,	// (0x0008be93) calenote_window_pane

0x2fe7,	// (0x000821d9) popup_note_window_cp01

0xccb9,	// (0x0008beab) calenote_swipe_1_pane_ParamLimits

0xccb9,	// (0x0008beab) calenote_swipe_1_pane

0xc6fc,	// (0x0008b8ee) calenote_swipe_2_pane_ParamLimits

0xc6fc,	// (0x0008b8ee) calenote_swipe_2_pane

0x2b81,	// (0x00081d73) calenote_swipe_1_pane_g1_ParamLimits

0x2b81,	// (0x00081d73) calenote_swipe_1_pane_g1

0x2b8e,	// (0x00081d80) calenote_swipe_1_pane_g2_ParamLimits

0x2b8e,	// (0x00081d80) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0008eecf) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0008eecf) calenote_swipe_1_pane_g

0x2ff9,	// (0x000821eb) calenote_swipe_1_pane_t1_ParamLimits

0x2ff9,	// (0x000821eb) calenote_swipe_1_pane_t1

0x2b81,	// (0x00081d73) calenote_swipe_2_pane_g1_ParamLimits

0x2b81,	// (0x00081d73) calenote_swipe_2_pane_g1

0x3018,	// (0x0008220a) calenote_swipe_2_pane_g2_ParamLimits

0x3018,	// (0x0008220a) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0008efac) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0008efac) calenote_swipe_2_pane_g

0x3024,	// (0x00082216) calenote_swipe_2_pane_t1_ParamLimits

0x3024,	// (0x00082216) calenote_swipe_2_pane_t1

0x018a,	// (0x0007f37c) main_mup_navstr_pane

0x9601,	// (0x000887f3) main_mup3_pane_t7_ParamLimits

0x9601,	// (0x000887f3) main_mup3_pane_t7

0xa005,	// (0x000891f7) main_mp4_pane_g6_ParamLimits

0xa005,	// (0x000891f7) main_mp4_pane_g6

0xa387,	// (0x00089579) main_image3_pane_t4_ParamLimits

0xa387,	// (0x00089579) main_image3_pane_t4

0xcccc,	// (0x0008bebe) popup_navstr_preview_pane_ParamLimits

0xcccc,	// (0x0008bebe) popup_navstr_preview_pane

0xccd8,	// (0x0008beca) scroll_navstr_pane_ParamLimits

0xccd8,	// (0x0008beca) scroll_navstr_pane

0x018a,	// (0x0007f37c) bg_popup_preview_window_pane_cp04

0x304b,	// (0x0008223d) popup_navstr_preview_pane_t1

0xcce4,	// (0x0008bed6) scroll_navstr_pane_g1_ParamLimits

0xcce4,	// (0x0008bed6) scroll_navstr_pane_g1

0xccf1,	// (0x0008bee3) scroll_navstr_pane_t1_ParamLimits

0xccf1,	// (0x0008bee3) scroll_navstr_pane_t1

0x2ff0,	// (0x000821e2) bg_button_pane_cp014

0x2ff0,	// (0x000821e2) bg_button_pane_cp030

0xc5f0,	// (0x0008b7e2) list_double_fisheye_pane_g4_ParamLimits

0xc5f0,	// (0x0008b7e2) list_double_fisheye_pane_g4

0xc5fc,	// (0x0008b7ee) list_double_fisheye_pane_g5_ParamLimits

0xc5fc,	// (0x0008b7ee) list_double_fisheye_pane_g5

0x2f67,	// (0x00082159) sp_fs_scroll_pane_cp03

0x2cbe,	// (0x00081eb0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2cca,	// (0x00081ebc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0008eeec) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2cd6,	// (0x00081ec8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcba5,	// (0x0008bd97) sp_fs_scroll_pane_cp02

0xd9d7,	// (0x0008cbc9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd9d7,	// (0x0008cbc9) popup_sp_fs_calendar_preview_list_single_pane

0x018a,	// (0x0007f37c) main_cam6_pano_pane

0x3d47,	// (0x00082f39) main_mup3_pane_ParamLimits

0x018a,	// (0x0007f37c) main_phacti_pane

0xc0a7,	// (0x0008b299) bg_button_pane_cp11

0xc0bf,	// (0x0008b2b1) main_mobtv_info_pane_g2_ParamLimits

0xc0bf,	// (0x0008b2b1) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0008ee4c) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0008ee4c) main_mobtv_info_pane_g

0xc271,	// (0x0008b463) sc_clock_pane_t5_ParamLimits

0xc271,	// (0x0008b463) sc_clock_pane_t5

0xc453,	// (0x0008b645) main_radioblah_pane_g1_ParamLimits

0x2acd,	// (0x00081cbf) main_radioblah_pane_t3_ParamLimits

0x2acd,	// (0x00081cbf) main_radioblah_pane_t3

0x2ae5,	// (0x00081cd7) main_radioblah_pane_t4_ParamLimits

0x2ae5,	// (0x00081cd7) main_radioblah_pane_t4

0xc471,	// (0x0008b663) main_radioblah_text_pane_ParamLimits

0xc471,	// (0x0008b663) main_radioblah_text_pane

0xc47e,	// (0x0008b670) main_radioblah_info_pane_g1_ParamLimits

0xc513,	// (0x0008b705) main_radioblah_info_pane_t4_ParamLimits

0xc513,	// (0x0008b705) main_radioblah_info_pane_t4

0x3d47,	// (0x00082f39) main_sp_fs_calendar_pane

0xcd03,	// (0x0008bef5) main_phacti_pane_g1

0xcd0b,	// (0x0008befd) phacti_note_pane_ParamLimits

0xcd0b,	// (0x0008befd) phacti_note_pane

0x3062,	// (0x00082254) phacti_term_pane_ParamLimits

0x3062,	// (0x00082254) phacti_term_pane

0x3077,	// (0x00082269) phacti_note_pane_t1_ParamLimits

0x3077,	// (0x00082269) phacti_note_pane_t1

0x308e,	// (0x00082280) phacti_term_pane_g1

0x3096,	// (0x00082288) phacti_term_pane_t1_ParamLimits

0x3096,	// (0x00082288) phacti_term_pane_t1

0x30c0,	// (0x000822b2) popup_sp_fs_calendar_preview_list_single_pane_g1

0x30c8,	// (0x000822ba) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0008efb6) popup_sp_fs_calendar_preview_list_single_pane_g

0x30d0,	// (0x000822c2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x30d0,	// (0x000822c2) popup_sp_fs_calendar_preview_list_single_pane_t1

0x30e6,	// (0x000822d8) aid_popup_sp_fs_bg_corner_pane

0x10d5,	// (0x000802c7) popup_sp_fs_calendar_preview_bg_pane_g1

0x018a,	// (0x0007f37c) popup_sp_fs_calendar_preview_bg_pane

0x30ee,	// (0x000822e0) popup_sp_fs_calendar_preview_list_pane

0x3d47,	// (0x00082f39) bg_main_sp_fs_cale_pane_ParamLimits

0x3d47,	// (0x00082f39) bg_main_sp_fs_cale_pane

0x30f6,	// (0x000822e8) listscroll_cale_mrui_pane_ParamLimits

0x30f6,	// (0x000822e8) listscroll_cale_mrui_pane

0x310a,	// (0x000822fc) listscroll_sp_fs_schedule_track_pane

0x3113,	// (0x00082305) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3113,	// (0x00082305) main_sp_fs_ctrlbar_pane_cp01

0x3124,	// (0x00082316) main_sp_fs_ribbon_pane

0x312c,	// (0x0008231e) popup_sp_fs_cale_preview_window

0xcd4e,	// (0x0008bf40) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcd4e,	// (0x0008bf40) list_single_sp_fs_schedule_track_pane

0x1af2,	// (0x00080ce4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1af2,	// (0x00080ce4) bg_sp_fs_highlight_list_pane_cp03

0xcd70,	// (0x0008bf62) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd70,	// (0x0008bf62) list_single_sp_fs_schedule_track_pane_g1

0xcd7c,	// (0x0008bf6e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd7c,	// (0x0008bf6e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0008efbb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0008efbb) list_single_sp_fs_schedule_track_pane_g

0xcd88,	// (0x0008bf7a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd88,	// (0x0008bf7a) list_single_sp_fs_schedule_track_pane_t1

0xcda0,	// (0x0008bf92) sp_fs_schedule_track_pane_ParamLimits

0xcda0,	// (0x0008bf92) sp_fs_schedule_track_pane

0x313e,	// (0x00082330) sp_fs_schedule_track_pane_g1

0x3146,	// (0x00082338) sp_fs_schedule_track_pane_g2

0x314e,	// (0x00082340) sp_fs_schedule_track_pane_g3

0x3156,	// (0x00082348) sp_fs_schedule_track_pane_g4

0x315e,	// (0x00082350) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0008efc0) sp_fs_schedule_track_pane_g

0x1b6e,	// (0x00080d60) bg_sp_fs_schedule_viewer_highlight_g1

0xdcd1,	// (0x0008cec3) bg_sp_fs_schedule_viewer_highlight_g2

0x1b76,	// (0x00080d68) bg_sp_fs_schedule_viewer_highlight_g3

0x1b7e,	// (0x00080d70) bg_sp_fs_schedule_viewer_highlight_g4

0x1dbb,	// (0x00080fad) bg_sp_fs_schedule_viewer_highlight_g5

0x1b8e,	// (0x00080d80) bg_sp_fs_schedule_viewer_highlight_g6

0x1b96,	// (0x00080d88) bg_sp_fs_schedule_viewer_highlight_g7

0x1b9e,	// (0x00080d90) bg_sp_fs_schedule_viewer_highlight_g8

0xdcb1,	// (0x0008cea3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0008efcb) bg_sp_fs_schedule_viewer_highlight_g

0x018a,	// (0x0007f37c) bg_main_sp_fs_ribbon_pane

0xcdb0,	// (0x0008bfa2) main_sp_fs_ribbon_pane_g1

0x3166,	// (0x00082358) main_sp_fs_ribbon_pane_t1

0xcdb9,	// (0x0008bfab) main_sp_fs_ribbon_pane_t2

0x3175,	// (0x00082367) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0008efde) main_sp_fs_ribbon_pane_t

0x3184,	// (0x00082376) main_sp_fs_ribbon_scheduler_pane

0x318c,	// (0x0008237e) bg_main_sp_fs_ribbon_pane_g1

0x3195,	// (0x00082387) bg_main_sp_fs_ribbon_pane_g2

0x319e,	// (0x00082390) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0008efe5) bg_main_sp_fs_ribbon_pane_g

0x31a6,	// (0x00082398) main_sp_fs_ribbon_scheduler_pane_g1

0x31af,	// (0x000823a1) main_sp_fs_ribbon_scheduler_pane_g2

0x31b8,	// (0x000823aa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0008efec) main_sp_fs_ribbon_scheduler_pane_g

0x31c1,	// (0x000823b3) list_cale_mrui_pane

0xcdc8,	// (0x0008bfba) sp_fs_scroll_pane_cp07_ParamLimits

0xcdc8,	// (0x0008bfba) sp_fs_scroll_pane_cp07

0xcdde,	// (0x0008bfd0) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcdde,	// (0x0008bfd0) bg_sp_fs_schedule_viewer_highlight

0x31ca,	// (0x000823bc) list_single_sp_fs_schedule_track_pane_cp01

0x31d2,	// (0x000823c4) list_sp_fs_schedule_track_pane

0x31da,	// (0x000823cc) sp_fs_scroll_pane_cp06_ParamLimits

0x31da,	// (0x000823cc) sp_fs_scroll_pane_cp06

0x10d5,	// (0x000802c7) bgmain_sp_fs_calendar_pane_g1

0xcdeb,	// (0x0008bfdd) list_single_cale_mrui_pane_ParamLimits

0xcdeb,	// (0x0008bfdd) list_single_cale_mrui_pane

0x31ec,	// (0x000823de) list_single_cale_mrui_row_pane_ParamLimits

0x31ec,	// (0x000823de) list_single_cale_mrui_row_pane

0x31f9,	// (0x000823eb) list_single_cale_mrui_row_pane_g1_ParamLimits

0x31f9,	// (0x000823eb) list_single_cale_mrui_row_pane_g1

0x3231,	// (0x00082423) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3231,	// (0x00082423) list_single_cale_mrui_row_pane_t1

0xce17,	// (0x0008c009) list_single_cale_mrui_row_pane_t2_ParamLimits

0xce17,	// (0x0008c009) list_single_cale_mrui_row_pane_t2

0x3243,	// (0x00082435) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3243,	// (0x00082435) list_single_cale_mrui_row_pane_t3

0x3272,	// (0x00082464) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3272,	// (0x00082464) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0008eff8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0008eff8) list_single_cale_mrui_row_pane_t

0xce7d,	// (0x0008c06f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xce7d,	// (0x0008c06f) list_single_cmail_header_editor_pane_bg_cp01

0xce9f,	// (0x0008c091) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xce9f,	// (0x0008c091) list_single_cmail_header_editor_pane_bg_cp02

0xcebb,	// (0x0008c0ad) main_radioblah_text_pane_t1_ParamLimits

0xcebb,	// (0x0008c0ad) main_radioblah_text_pane_t1

0x32a1,	// (0x00082493) cam6_indi_pane_cp01

0x32a9,	// (0x0008249b) cam6_mode_pane_cp01

0x32b1,	// (0x000824a3) cam6_pano_pane

0x32ba,	// (0x000824ac) cam6_zoom_pane_cp01

0x32c2,	// (0x000824b4) cam6_pano_image_pane

0x32cd,	// (0x000824bf) cam6_pano_pane_g1

0x2967,	// (0x00081b59) cam6_pano_pane_g2

0x32d6,	// (0x000824c8) cam6_pano_pane_g3

0x32df,	// (0x000824d1) cam6_pano_pane_g4

0x1693,	// (0x00080885) cam6_pano_pane_g5

0x32e8,	// (0x000824da) cam6_pano_pane_g6

0x32f2,	// (0x000824e4) cam6_pano_pane_g7

0x32fa,	// (0x000824ec) cam6_pano_pane_g8

0x3303,	// (0x000824f5) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x0008f001) cam6_pano_pane_g

0x018a,	// (0x0007f37c) main_browser_tag_pane

0x3043,	// (0x00082235) grid_navstr_albumart_pane

0x330e,	// (0x00082500) cell_navstr_albumart_pane_ParamLimits

0x330e,	// (0x00082500) cell_navstr_albumart_pane

0xe4aa,	// (0x0008d69c) cell_navstr_albumart_pane_g1

0x09e2,	// (0x0007fbd4) cell_navstr_albumart_pane_g2

0x09f2,	// (0x0007fbe4) cell_navstr_albumart_pane_g3

0x09ea,	// (0x0007fbdc) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x0008f014) cell_navstr_albumart_pane_g

0xced8,	// (0x0008c0ca) bt_list_pane_ParamLimits

0xced8,	// (0x0008c0ca) bt_list_pane

0xceff,	// (0x0008c0f1) bt_list_pane_t1

0xcf0e,	// (0x0008c100) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0008f01d) bt_list_pane_t

0x018a,	// (0x0007f37c) main_cale_prevew_pane

0xcf1d,	// (0x0008c10f) popup_cale_preview_window_ParamLimits

0xcf1d,	// (0x0008c10f) popup_cale_preview_window

0x3d47,	// (0x00082f39) bg_popup_preview_window_pane_cp05_ParamLimits

0x3d47,	// (0x00082f39) bg_popup_preview_window_pane_cp05

0x3330,	// (0x00082522) list_cale_preview_pane_ParamLimits

0x3330,	// (0x00082522) list_cale_preview_pane

0xcf34,	// (0x0008c126) list_double_cale_preview_pane_ParamLimits

0xcf34,	// (0x0008c126) list_double_cale_preview_pane

0xcf46,	// (0x0008c138) list_single_cale_preview_pane_ParamLimits

0xcf46,	// (0x0008c138) list_single_cale_preview_pane

0xcf5a,	// (0x0008c14c) list_single_cale_preview_pane_g1

0xcf62,	// (0x0008c154) list_single_cale_preview_pane_t1_ParamLimits

0xcf62,	// (0x0008c154) list_single_cale_preview_pane_t1

0xcf77,	// (0x0008c169) list_double_cale_preview_pane_g1

0xcf7f,	// (0x0008c171) list_double_cale_preview_pane_t1_ParamLimits

0xcf7f,	// (0x0008c171) list_double_cale_preview_pane_t1

0xcf94,	// (0x0008c186) list_double_cale_preview_pane_t2_ParamLimits

0xcf94,	// (0x0008c186) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x0008f022) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x0008f022) list_double_cale_preview_pane_t

0x018a,	// (0x0007f37c) main_ezdial_pane

0x3d47,	// (0x00082f39) main_sp_fs_email_pane_ParamLimits

0xc732,	// (0x0008b924) cmail_ddmenu_btn01_pane_ParamLimits

0xc732,	// (0x0008b924) cmail_ddmenu_btn01_pane

0xc74f,	// (0x0008b941) cmail_ddmenu_btn02_pane_ParamLimits

0xc74f,	// (0x0008b941) cmail_ddmenu_btn02_pane

0xc76d,	// (0x0008b95f) cmail_ddmenu_btn03_pane_ParamLimits

0xc76d,	// (0x0008b95f) cmail_ddmenu_btn03_pane

0xc79b,	// (0x0008b98d) main_sp_fs_ctrlbar_pane_ParamLimits

0xc7b7,	// (0x0008b9a9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcbaf,	// (0x0008bda1) list_cmail_body_pane_ParamLimits

0x2f76,	// (0x00082168) bg_button_pane_cp12

0x2f7f,	// (0x00082171) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2f7f,	// (0x00082171) list_single_cmail_header_detail_pane_g3

0xcc61,	// (0x0008be53) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcc61,	// (0x0008be53) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0008efa7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0008efa7) list_single_cmail_header_detail_pane_t

0x30ab,	// (0x0008229d) phacti_term_pane_t2_ParamLimits

0x30ab,	// (0x0008229d) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0008efb1) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0008efb1) phacti_term_pane_t

0x333c,	// (0x0008252e) aid_size_list_single_double

0xcfac,	// (0x0008c19e) popup_ezdial_listscroll_window

0xcfcd,	// (0x0008c1bf) popup_number_entry_window_cp01

0xe349,	// (0x0008d53b) bg_popup_call_pane_cp09

0x3348,	// (0x0008253a) ezdial_list_pane

0x3350,	// (0x00082542) scroll_pane_cp23

0x0eb8,	// (0x000800aa) bg_button_pane_cp028_ParamLimits

0x0eb8,	// (0x000800aa) bg_button_pane_cp028

0xcfdb,	// (0x0008c1cd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcfdb,	// (0x0008c1cd) cmail_ddmenu_btn01_pane_g1

0xcfed,	// (0x0008c1df) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcfed,	// (0x0008c1df) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x0008f027) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x0008f027) cmail_ddmenu_btn01_pane_g

0x3358,	// (0x0008254a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3358,	// (0x0008254a) cmail_ddmenu_btn01_pane_t1

0x0bcd,	// (0x0007fdbf) bg_button_pane_cp029_ParamLimits

0x0bcd,	// (0x0007fdbf) bg_button_pane_cp029

0xcfed,	// (0x0008c1df) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcfed,	// (0x0008c1df) cmail_ddmenu_btn02_pane_g1

0xd005,	// (0x0008c1f7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd005,	// (0x0008c1f7) cmail_ddmenu_btn02_pane_t1

0x1af2,	// (0x00080ce4) bg_button_pane_cp031_ParamLimits

0x1af2,	// (0x00080ce4) bg_button_pane_cp031

0xcfed,	// (0x0008c1df) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcfed,	// (0x0008c1df) cmail_ddmenu_btn03_pane_g1

0xd005,	// (0x0008c1f7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd005,	// (0x0008c1f7) cmail_ddmenu_btn03_pane_t1

0xa224,	// (0x00089416) cell_dialer2_keypad_pane_t1_ParamLimits

0xa23e,	// (0x00089430) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa23e,	// (0x00089430) cell_dialer2_keypad_pane_t1_copy1

0xbf47,	// (0x0008b139) ncimui_group_button_pane

0x3d47,	// (0x00082f39) main_sp_fs_calendar_pane_ParamLimits

0xcbd3,	// (0x0008bdc5) list_single_cmail_header_caption_pane_ParamLimits

0x3e2b,	// (0x0008301d) aid_recal_txt_sm_pane

0x018a,	// (0x0007f37c) mian_recal_day_pane

0x312c,	// (0x0008231e) popup_sp_fs_cale_preview_window_ParamLimits

0x018a,	// (0x0007f37c) list_recal_day_pane

0x3386,	// (0x00082578) list_single_recal_day_pane_ParamLimits

0x3386,	// (0x00082578) list_single_recal_day_pane

0x3398,	// (0x0008258a) list_single_recal_day_pane_g1_ParamLimits

0x3398,	// (0x0008258a) list_single_recal_day_pane_g1

0x33a4,	// (0x00082596) list_single_recal_day_pane_g2_ParamLimits

0x33a4,	// (0x00082596) list_single_recal_day_pane_g2

0x33b3,	// (0x000825a5) list_single_recal_day_pane_g3_ParamLimits

0x33b3,	// (0x000825a5) list_single_recal_day_pane_g3

0xd029,	// (0x0008c21b) list_single_recal_day_pane_g4_ParamLimits

0xd029,	// (0x0008c21b) list_single_recal_day_pane_g4

0x33bf,	// (0x000825b1) list_single_recal_day_pane_g5_ParamLimits

0x33bf,	// (0x000825b1) list_single_recal_day_pane_g5

0x33ce,	// (0x000825c0) list_single_recal_day_pane_g6_ParamLimits

0x33ce,	// (0x000825c0) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0008f036) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0008f036) list_single_recal_day_pane_g

0x33da,	// (0x000825cc) list_single_recal_day_pane_t1

0x33e8,	// (0x000825da) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0008f043) list_single_recal_day_pane_t

0xd03c,	// (0x0008c22e) ncimui_query_button_pane_ParamLimits

0xd03c,	// (0x0008c22e) ncimui_query_button_pane

0xd04c,	// (0x0008c23e) ncimui_query_button_pane_t1_ParamLimits

0xd04c,	// (0x0008c23e) ncimui_query_button_pane_t1

0x33f6,	// (0x000825e8) ncimui_query_button_pane_t2_ParamLimits

0x33f6,	// (0x000825e8) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0008f048) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0008f048) ncimui_query_button_pane_t

0xd05f,	// (0x0008c251) query_button_pane_ParamLimits

0xd05f,	// (0x0008c251) query_button_pane

0x018a,	// (0x0007f37c) bg_button_pane_cp0028

0x3409,	// (0x000825fb) query_button_pane_t1

0x8642,	// (0x00087834) main_tport_pane_ParamLimits

0xcade,	// (0x0008bcd0) bg_popup_window_pane_cp01_ParamLimits

0xcade,	// (0x0008bcd0) bg_popup_window_pane_cp01

0xcaeb,	// (0x0008bcdd) heading_pane_cp08_ParamLimits

0xcaeb,	// (0x0008bcdd) heading_pane_cp08

0xcaf9,	// (0x0008bceb) heading_pane_cp07_ParamLimits

0xcaf9,	// (0x0008bceb) heading_pane_cp07

0x2f39,	// (0x0008212b) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0008ef94) cell_tport_appsw_pane_g

0x7d37,	// (0x00086f29) input_candi_list_open_g1

0xde6c,	// (0x0008d05e) list_cale_time_pane_g6_ParamLimits

0xde6c,	// (0x0008d05e) list_cale_time_pane_g6

0x9080,	// (0x00088272) aid_size_touch_calib_1_ParamLimits

0x9080,	// (0x00088272) aid_size_touch_calib_1

0x908c,	// (0x0008827e) aid_size_touch_calib_2_ParamLimits

0x908c,	// (0x0008827e) aid_size_touch_calib_2

0x909a,	// (0x0008828c) aid_size_touch_calib_3_ParamLimits

0x909a,	// (0x0008828c) aid_size_touch_calib_3

0x90aa,	// (0x0008829c) aid_size_touch_calib_4_ParamLimits

0x90aa,	// (0x0008829c) aid_size_touch_calib_4

0x90b8,	// (0x000882aa) main_touch_calib_button_group_pane_ParamLimits

0x90b8,	// (0x000882aa) main_touch_calib_button_group_pane

0x90c6,	// (0x000882b8) main_touch_calib_pane_g1_ParamLimits

0x90d2,	// (0x000882c4) main_touch_calib_pane_g2_ParamLimits

0x90de,	// (0x000882d0) main_touch_calib_pane_g3_ParamLimits

0x90ea,	// (0x000882dc) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0008e967) main_touch_calib_pane_g_ParamLimits

0x90f6,	// (0x000882e8) main_touch_calib_pane_t1_ParamLimits

0x910d,	// (0x000882ff) main_touch_calib_pane_t2_ParamLimits

0x9124,	// (0x00088316) main_touch_calib_pane_t3_ParamLimits

0x9138,	// (0x0008832a) main_touch_calib_pane_t4_ParamLimits

0x914c,	// (0x0008833e) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0008e970) main_touch_calib_pane_t_ParamLimits

0x147a,	// (0x0008066c) list_single_fp_cale_pane_g3_ParamLimits

0x147a,	// (0x0008066c) list_single_fp_cale_pane_g3

0xa684,	// (0x00089876) bg_button_pane_cp012_ParamLimits

0xa684,	// (0x00089876) bg_vkb2_func_pane_cp03_ParamLimits

0xb08b,	// (0x0008a27d) cell_vitu2_function_top_pane_g1_ParamLimits

0xa684,	// (0x00089876) bg_vkb2_func_pane_cp04_ParamLimits

0xbee5,	// (0x0008b0d7) main_ncimui_button_group_pane_ParamLimits

0xbee5,	// (0x0008b0d7) main_ncimui_button_group_pane

0xbf35,	// (0x0008b127) main_ncimui_pane_t3_ParamLimits

0xbf35,	// (0x0008b127) main_ncimui_pane_t3

0x3059,	// (0x0008224b) phacti_button_group_pane

0x333c,	// (0x0008252e) aid_size_list_single_double_ParamLimits

0xcfac,	// (0x0008c19e) popup_ezdial_listscroll_window_ParamLimits

0xcfcd,	// (0x0008c1bf) popup_number_entry_window_cp01_ParamLimits

0xd06c,	// (0x0008c25e) phacti_button_pane_ParamLimits

0xd06c,	// (0x0008c25e) phacti_button_pane

0x018a,	// (0x0007f37c) bg_button_pane_cp14

0x3417,	// (0x00082609) phacti_button_pane_t1

0xd07d,	// (0x0008c26f) main_touch_calib_button_pane_ParamLimits

0xd07d,	// (0x0008c26f) main_touch_calib_button_pane

0x44f9,	// (0x000836eb) bg_button_pane_cp18_ParamLimits

0x44f9,	// (0x000836eb) bg_button_pane_cp18

0x3425,	// (0x00082617) main_touch_calib_button_pane_t1_ParamLimits

0x3425,	// (0x00082617) main_touch_calib_button_pane_t1

0x343b,	// (0x0008262d) main_touch_calib_button_pane_t2_ParamLimits

0x343b,	// (0x0008262d) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0008f04d) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0008f04d) main_touch_calib_button_pane_t

0x018a,	// (0x0007f37c) cell_ncimui_button_pane

0x018a,	// (0x0007f37c) bg_button_pane_cp032

0x3459,	// (0x0008264b) cell_ncimui_button_pane_t1

0xa29a,	// (0x0008948c) image3_infobar_pane_ParamLimits

0xa29a,	// (0x0008948c) image3_infobar_pane

0xc293,	// (0x0008b485) fs_bigclock_status_pane_ParamLimits

0xc293,	// (0x0008b485) fs_bigclock_status_pane

0xc2a0,	// (0x0008b492) main_fs_bigclock_clock_pane_ParamLimits

0xc2a0,	// (0x0008b492) main_fs_bigclock_clock_pane

0xc2c4,	// (0x0008b4b6) main_fs_bigclock_indi_pane_ParamLimits

0xc2c4,	// (0x0008b4b6) main_fs_bigclock_indi_pane

0xc2f7,	// (0x0008b4e9) main_fs_bigclock_swipe_pane_ParamLimits

0xc2f7,	// (0x0008b4e9) main_fs_bigclock_swipe_pane

0x018a,	// (0x0007f37c) main_fs_clock_dumped_data

0xc329,	// (0x0008b51b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc329,	// (0x0008b51b) list_single_fs_bigclock_indicator_pane_g1

0xc34d,	// (0x0008b53f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc34d,	// (0x0008b53f) list_single_fs_bigclock_indicator_pane_g2

0xc367,	// (0x0008b559) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc367,	// (0x0008b559) list_single_fs_bigclock_indicator_pane_g3

0xc381,	// (0x0008b573) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc381,	// (0x0008b573) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0008ee80) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0008ee80) list_single_fs_bigclock_indicator_pane_g

0xc3a7,	// (0x0008b599) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc3a7,	// (0x0008b599) list_single_fs_bigclock_indicator_pane_t1

0xc3cf,	// (0x0008b5c1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc3cf,	// (0x0008b5c1) list_single_fs_bigclock_indicator_pane_t2

0xc3f7,	// (0x0008b5e9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc3f7,	// (0x0008b5e9) list_single_fs_bigclock_indicator_pane_t3

0xc41f,	// (0x0008b611) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc41f,	// (0x0008b611) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0008ee8b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0008ee8b) list_single_fs_bigclock_indicator_pane_t

0x3467,	// (0x00082659) image3_infobar_fav_pane_ParamLimits

0x3467,	// (0x00082659) image3_infobar_fav_pane

0x3477,	// (0x00082669) image3_infobar_loc_pane_ParamLimits

0x3477,	// (0x00082669) image3_infobar_loc_pane

0x348b,	// (0x0008267d) image3_infobar_time_pane_ParamLimits

0x348b,	// (0x0008267d) image3_infobar_time_pane

0x10d5,	// (0x000802c7) image3_infobar_time_pane_g1

0x349b,	// (0x0008268d) image3_infobar_time_pane_t1

0x10d5,	// (0x000802c7) image3_infobar_loc_pane_g1

0x34a9,	// (0x0008269b) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0008f052) image3_infobar_loc_pane_g

0x34b1,	// (0x000826a3) image3_infobar_loc_pane_t1

0x10d5,	// (0x000802c7) image3_infobar_fav_pane_g1

0x34bf,	// (0x000826b1) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0008f057) image3_infobar_fav_pane_g

0x34c7,	// (0x000826b9) fs_bigclock_status_battery_pane

0x34d0,	// (0x000826c2) fs_bigclock_status_signal_pane

0x34d9,	// (0x000826cb) fs_bigclock_status_title_pane

0x34e2,	// (0x000826d4) fs_bigclock_status_signal_pane_g1

0x34eb,	// (0x000826dd) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0008f05c) fs_bigclock_status_signal_pane_g

0x34f3,	// (0x000826e5) fs_bigclock_status_battery_pane_g1

0x34fc,	// (0x000826ee) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0008f061) fs_bigclock_status_battery_pane_g

0x3504,	// (0x000826f6) fs_bigclock_status_title_pane_t1

0x10d5,	// (0x000802c7) main_fs_bigclock_clock_pane_g1

0x3512,	// (0x00082704) main_fs_bigclock_clock_pane_g2

0x3512,	// (0x00082704) main_fs_bigclock_clock_pane_g3

0x3512,	// (0x00082704) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0008f066) main_fs_bigclock_clock_pane_g

0xd08d,	// (0x0008c27f) main_fs_bigclock_clock_pane_t1

0xd09b,	// (0x0008c28d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0008f06f) main_fs_bigclock_clock_pane_t

0x351a,	// (0x0008270c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x351a,	// (0x0008270c) list_single_fs_bigclock_indicator_pane

0xd0aa,	// (0x0008c29c) list_single_fs_bigclock_pane_ParamLimits

0xd0aa,	// (0x0008c29c) list_single_fs_bigclock_pane

0x3534,	// (0x00082726) main_fs_bigclock_indicator_pane_t1

0x3543,	// (0x00082735) list_single_fs_bigclock_pane_g1

0x354b,	// (0x0008273d) list_single_fs_bigclock_pane_t1

0x10d5,	// (0x000802c7) main_fs_bigclock_swipe_pane_g1

0x358b,	// (0x0008277d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0008f080) main_fs_bigclock_swipe_pane_g

0x3593,	// (0x00082785) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3593,	// (0x00082785) main_fs_bigclock_swipe_pane_t1

0x7506,	// (0x000866f8) call_type_pane_ParamLimits

0x018a,	// (0x0007f37c) main_btmg_pane

0x3225,	// (0x00082417) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3225,	// (0x00082417) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x0008eff3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0008eff3) list_single_cale_mrui_row_pane_g

0x3376,	// (0x00082568) list_recal_vselct_arw_lo_pane

0x337e,	// (0x00082570) list_recal_vselct_arw_up_pane

0x3e34,	// (0x00083026) list_recal_vselct_pane

0x35b0,	// (0x000827a2) btmg_button_pane

0xd10e,	// (0x0008c300) main_btmg_pane_g1

0x018a,	// (0x0007f37c) bg_button_pane_cp044

0x35ba,	// (0x000827ac) btmg_button_pane_t1

0x0bc5,	// (0x0007fdb7) aid_listscroll_gen

0x3d47,	// (0x00082f39) main_cntbar_detail_pane

0x2f57,	// (0x00082149) list_cmail_folder_pane

0x2f67,	// (0x00082159) sp_fs_scroll_pane_cp03_ParamLimits

0xd116,	// (0x0008c308) list_single_fs_dyc_pane_cp01_ParamLimits

0xd116,	// (0x0008c308) list_single_fs_dyc_pane_cp01

0x35c8,	// (0x000827ba) aid_size_cmail_indent

0x35d1,	// (0x000827c3) list_single_dyc_row_pane_cp01

0xd162,	// (0x0008c354) cntbar_detail_list_pane_ParamLimits

0xd162,	// (0x0008c354) cntbar_detail_list_pane

0xd19c,	// (0x0008c38e) main_cntbar_detail_cont_pane_ParamLimits

0xd19c,	// (0x0008c38e) main_cntbar_detail_cont_pane

0x74a0,	// (0x00086692) scroll_pane_cp032_ParamLimits

0x74a0,	// (0x00086692) scroll_pane_cp032

0xd1a8,	// (0x0008c39a) cntbar_detail_list_event_pane_ParamLimits

0xd1a8,	// (0x0008c39a) cntbar_detail_list_event_pane

0xd16e,	// (0x0008c360) cntbar_detail_list_shct_pane

0xdd1f,	// (0x0008cf11) aid_list_gen

0x35da,	// (0x000827cc) aid_scroll

0x35e3,	// (0x000827d5) aid_size_touch_scroll_bar

0x3e14,	// (0x00083006) aid_list_double

0x35f5,	// (0x000827e7) aid_list_single

0x35fe,	// (0x000827f0) aid_list_single_lg

0x3607,	// (0x000827f9) aid_list_z_g_a_sm

0x3d21,	// (0x00082f13) aid_list_z_g_d

0x360f,	// (0x00082801) aid_txt_z_prm

0xd1bc,	// (0x0008c3ae) aid_txt_z_prm_cp01

0xd1ca,	// (0x0008c3bc) aid_txt_z_sec

0xd1d8,	// (0x0008c3ca) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd1d8,	// (0x0008c3ca) main_cntbar_detail_cont_pane_g1

0xd1e5,	// (0x0008c3d7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd1e5,	// (0x0008c3d7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0008f085) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0008f085) main_cntbar_detail_cont_pane_g

0x361d,	// (0x0008280f) main_cntbar_detail_cont_pane_t1

0x362b,	// (0x0008281d) main_cntbar_detail_cont_pane_t2

0x3639,	// (0x0008282b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0008f08a) main_cntbar_detail_cont_pane_t

0xd1f1,	// (0x0008c3e3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd1f1,	// (0x0008c3e3) cell_cntbar_detail_list_shct_pane

0x3647,	// (0x00082839) cntbar_detail_list_shct_pane_g1

0x3650,	// (0x00082842) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0008f091) cntbar_detail_list_shct_pane_g

0xd205,	// (0x0008c3f7) cntbar_detail_list_event_pane_g1_ParamLimits

0xd205,	// (0x0008c3f7) cntbar_detail_list_event_pane_g1

0xd211,	// (0x0008c403) cntbar_detail_list_event_pane_g2_ParamLimits

0xd211,	// (0x0008c403) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0008f096) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0008f096) cntbar_detail_list_event_pane_g

0xd27d,	// (0x0008c46f) cntbar_detail_list_event_pane_t1_ParamLimits

0xd27d,	// (0x0008c46f) cntbar_detail_list_event_pane_t1

0xd292,	// (0x0008c484) cntbar_detail_list_event_pane_t2_ParamLimits

0xd292,	// (0x0008c484) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0008f0a3) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0008f0a3) cntbar_detail_list_event_pane_t

0x10d5,	// (0x000802c7) cell_cntbar_detail_list_shct_pane_g1

0x7889,	// (0x00086a7b) navi_pane_mv_g3

0x3d47,	// (0x00082f39) main_cntbar_detail_pane_ParamLimits

0x018a,	// (0x0007f37c) main_notif_wgt_pane

0x9f4c,	// (0x0008913e) aid_tch_main_mp4_pane_g4

0xa181,	// (0x00089373) popup_slider_window_cp02

0x336d,	// (0x0008255f) list_recal_day_event_pane

0xd142,	// (0x0008c334) cntbar_detail_btn_pane_ParamLimits

0xd142,	// (0x0008c334) cntbar_detail_btn_pane

0xd152,	// (0x0008c344) cntbar_detail_btn_pane_cp01_ParamLimits

0xd152,	// (0x0008c344) cntbar_detail_btn_pane_cp01

0xd16e,	// (0x0008c360) cntbar_detail_list_shct_pane_ParamLimits

0xd17a,	// (0x0008c36c) cntbar_detail_pane_g1_ParamLimits

0xd17a,	// (0x0008c36c) cntbar_detail_pane_g1

0xd186,	// (0x0008c378) cntbar_detail_pane_t1_ParamLimits

0xd186,	// (0x0008c378) cntbar_detail_pane_t1

0xd21d,	// (0x0008c40f) cntbar_detail_list_event_pane_g3_ParamLimits

0xd21d,	// (0x0008c40f) cntbar_detail_list_event_pane_g3

0xd235,	// (0x0008c427) cntbar_detail_list_event_pane_g4_ParamLimits

0xd235,	// (0x0008c427) cntbar_detail_list_event_pane_g4

0xd24d,	// (0x0008c43f) cntbar_detail_list_event_pane_g5_ParamLimits

0xd24d,	// (0x0008c43f) cntbar_detail_list_event_pane_g5

0xd265,	// (0x0008c457) cntbar_detail_list_event_pane_g6_ParamLimits

0xd265,	// (0x0008c457) cntbar_detail_list_event_pane_g6

0xd2a7,	// (0x0008c499) cntbar_detail_list_event_pane_t3_ParamLimits

0xd2a7,	// (0x0008c499) cntbar_detail_list_event_pane_t3

0xd2b9,	// (0x0008c4ab) popup_notif_wgt_window_ParamLimits

0xd2b9,	// (0x0008c4ab) popup_notif_wgt_window

0xd2c9,	// (0x0008c4bb) popup_submenu_window_cp01_ParamLimits

0xd2c9,	// (0x0008c4bb) popup_submenu_window_cp01

0xe349,	// (0x0008d53b) bg_popup_window_pane_cp10

0x3659,	// (0x0008284b) listscroll_notif_wgt_pane

0x3663,	// (0x00082855) list_notif_wgt_window

0x366c,	// (0x0008285e) scroll_pane_cp033

0x3675,	// (0x00082867) list_notif_wgt_row_pane_ParamLimits

0x3675,	// (0x00082867) list_notif_wgt_row_pane

0x3689,	// (0x0008287b) aid_size_list_notif_wgt_del

0x3692,	// (0x00082884) list_notif_wgt_row_pane_g1

0x369a,	// (0x0008288c) list_notif_wgt_row_pane_g2

0x36a2,	// (0x00082894) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0008f0aa) list_notif_wgt_row_pane_g

0x36ab,	// (0x0008289d) list_notif_wgt_row_pane_t1

0x36b9,	// (0x000828ab) list_notif_wgt_row_pane_t2

0x36c7,	// (0x000828b9) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0008f0b1) list_notif_wgt_row_pane_t

0x1ddb,	// (0x00080fcd) list_recal_day_event_pane_g1

0x36d5,	// (0x000828c7) list_recal_day_event_pane_t1

0x018a,	// (0x0007f37c) bg_button_pane_cp045

0x36e4,	// (0x000828d6) cntbar_detail_btn_pane_t1

0x0bcd,	// (0x0007fdbf) main_callh_pane_ParamLimits

0x0bcd,	// (0x0007fdbf) main_callh_pane

0x018a,	// (0x0007f37c) main_coverflow0_pane

0x018a,	// (0x0007f37c) main_wgtman_pane

0xc30f,	// (0x0008b501) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc30f,	// (0x0008b501) main_fs_bigclock_unlock_btn_pane

0x2f31,	// (0x00082123) bg_button_pane_cp16

0x2f41,	// (0x00082133) cell_tport_appsw_pane_g3

0xd2d7,	// (0x0008c4c9) cf0_flow_pane_ParamLimits

0xd2d7,	// (0x0008c4c9) cf0_flow_pane

0x36f2,	// (0x000828e4) listscroll_cf0_pane

0x36fb,	// (0x000828ed) main_cf0_pane_g1

0xd2e6,	// (0x0008c4d8) main_cf0_pane_t1_ParamLimits

0xd2e6,	// (0x0008c4d8) main_cf0_pane_t1

0xd2fa,	// (0x0008c4ec) main_cf0_pane_t2_ParamLimits

0xd2fa,	// (0x0008c4ec) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0008f0b8) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0008f0b8) main_cf0_pane_t

0x3705,	// (0x000828f7) scroll_pane_cp11

0xd30e,	// (0x0008c500) cf0_flow_pane_g1

0xd316,	// (0x0008c508) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0008f0bd) cf0_flow_pane_g

0xd31e,	// (0x0008c510) cf0_flow_pane_t1

0x018a,	// (0x0007f37c) main_call6_pane

0x018a,	// (0x0007f37c) main_calllock_pane

0xd32c,	// (0x0008c51e) call6_btn_grp_pane_ParamLimits

0xd32c,	// (0x0008c51e) call6_btn_grp_pane

0xd33b,	// (0x0008c52d) call6_pane_g1_ParamLimits

0xd33b,	// (0x0008c52d) call6_pane_g1

0xd34a,	// (0x0008c53c) popup_call6_1st_window_ParamLimits

0xd34a,	// (0x0008c53c) popup_call6_1st_window

0xd358,	// (0x0008c54a) popup_call6_2nd_window_ParamLimits

0xd358,	// (0x0008c54a) popup_call6_2nd_window

0xd366,	// (0x0008c558) cell_call6_btn_pane_ParamLimits

0xd366,	// (0x0008c558) cell_call6_btn_pane

0xe349,	// (0x0008d53b) bg_popup_call2_in_pane_cp03

0x3710,	// (0x00082902) popup_call6_1st_window_g1

0x3718,	// (0x0008290a) popup_call6_1st_window_g2

0x3720,	// (0x00082912) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0008f0c2) popup_call6_1st_window_g

0x3728,	// (0x0008291a) popup_call6_1st_window_t1

0x3737,	// (0x00082929) popup_call6_1st_window_t2

0x3747,	// (0x00082939) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0008f0c9) popup_call6_1st_window_t

0xe349,	// (0x0008d53b) bg_popup_call2_in_pane_cp04

0x3710,	// (0x00082902) popup_call6_2nd_window_g1

0x3718,	// (0x0008290a) popup_call6_2nd_window_g2

0x3720,	// (0x00082912) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0008f0c2) popup_call6_2nd_window_g

0x3728,	// (0x0008291a) popup_call6_2nd_window_t1

0x018a,	// (0x0007f37c) bg_button_pane_cp15

0x3757,	// (0x00082949) cell_call6_btn_pane_g1

0x3760,	// (0x00082952) cell_call6_btn_pane_t1

0xd375,	// (0x0008c567) listscroll_wgtman_pane_ParamLimits

0xd375,	// (0x0008c567) listscroll_wgtman_pane

0xd393,	// (0x0008c585) wgtman_btn_pane_ParamLimits

0xd393,	// (0x0008c585) wgtman_btn_pane

0xe1fc,	// (0x0008d3ee) aid_scroll_copy1

0x376f,	// (0x00082961) list_wgtman_pane

0xd3c8,	// (0x0008c5ba) wgtman_btn_pane_g1_ParamLimits

0xd3c8,	// (0x0008c5ba) wgtman_btn_pane_g1

0xd3f0,	// (0x0008c5e2) wgtman_btn_pane_t1_ParamLimits

0xd3f0,	// (0x0008c5e2) wgtman_btn_pane_t1

0x3779,	// (0x0008296b) wgtman_btn_pane_t2_ParamLimits

0x3779,	// (0x0008296b) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0008f0d0) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0008f0d0) wgtman_btn_pane_t

0xd427,	// (0x0008c619) listrow_wgtman_pane_ParamLimits

0xd427,	// (0x0008c619) listrow_wgtman_pane

0xd443,	// (0x0008c635) listrow_wgtman_pane_g1

0xd44c,	// (0x0008c63e) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0008f0d5) listrow_wgtman_pane_g

0xd456,	// (0x0008c648) listrow_wgtman_pane_t1

0xd464,	// (0x0008c656) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0008f0da) listrow_wgtman_pane_t

0xd472,	// (0x0008c664) wait_bar_pane_cp09

0x3790,	// (0x00082982) main_calllock_btn_pane

0x379a,	// (0x0008298c) main_calllock_pane_g1

0x018a,	// (0x0007f37c) bg_button_pane_cp17

0x37a5,	// (0x00082997) main_calllock_btn_pane_g1

0x37ae,	// (0x000829a0) main_calllock_btn_pane_t1

0x018a,	// (0x0007f37c) main_dialer3_pane

0x018a,	// (0x0007f37c) main_fmrd2_pane

0x10d5,	// (0x000802c7) main_fs_bigclock_unlock_btn_pane_g1

0x37c5,	// (0x000829b7) main_fs_bigclock_unlock_btn_pane_t1

0xd47a,	// (0x0008c66c) area_fmrd2_info_pane_ParamLimits

0xd47a,	// (0x0008c66c) area_fmrd2_info_pane

0xd488,	// (0x0008c67a) area_fmrd2_visual_pane_ParamLimits

0xd488,	// (0x0008c67a) area_fmrd2_visual_pane

0xd496,	// (0x0008c688) fmrd2_indi_pane_ParamLimits

0xd496,	// (0x0008c688) fmrd2_indi_pane

0xd4a3,	// (0x0008c695) area_fmrd2_visual_pane_g1

0xd4ab,	// (0x0008c69d) area_fmrd2_visual_pane_t1

0xd4bb,	// (0x0008c6ad) area_fmrd2_visual_pane_t2

0xd4cb,	// (0x0008c6bd) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0008f0e4) area_fmrd2_visual_pane_t

0xd4db,	// (0x0008c6cd) area_fmrd2_info_pane_g1

0xd4e3,	// (0x0008c6d5) area_fmrd2_info_pane_t1

0xd4f3,	// (0x0008c6e5) area_fmrd2_info_pane_t2

0xd503,	// (0x0008c6f5) area_fmrd2_info_pane_t3

0xd513,	// (0x0008c705) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0008f0eb) area_fmrd2_info_pane_t

0xd521,	// (0x0008c713) fmrd2_indi_pane_t1

0xd531,	// (0x0008c723) fmrd2_indi_pane_t2

0xd541,	// (0x0008c733) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0008f0f4) fmrd2_indi_pane_t

0xc390,	// (0x0008b582) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc390,	// (0x0008b582) list_single_fs_bigclock_indicator_pane_g5

0xc434,	// (0x0008b626) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc434,	// (0x0008b626) list_single_fs_bigclock_indicator_pane_t5

0xcd21,	// (0x0008bf13) aid_cell_bcale_month_pane_ParamLimits

0xcd21,	// (0x0008bf13) aid_cell_bcale_month_pane

0xcd2d,	// (0x0008bf1f) bcale_month_pane_ParamLimits

0xcd2d,	// (0x0008bf1f) bcale_month_pane

0xcd3d,	// (0x0008bf2f) bcale_preview_pane_ParamLimits

0xcd3d,	// (0x0008bf2f) bcale_preview_pane

0x354b,	// (0x0008273d) list_single_fs_bigclock_pane_t1_ParamLimits

0x3567,	// (0x00082759) list_single_fs_bigclock_pane_t2_ParamLimits

0x3567,	// (0x00082759) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0008f07b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0008f07b) list_single_fs_bigclock_pane_t

0x37bd,	// (0x000829af) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0008f0df) main_fs_bigclock_unlock_btn_pane_g

0xd54f,	// (0x0008c741) aid_dia3_key_size_ParamLimits

0xd54f,	// (0x0008c741) aid_dia3_key_size

0xd55b,	// (0x0008c74d) aid_dia3_listrow_size_ParamLimits

0xd55b,	// (0x0008c74d) aid_dia3_listrow_size

0xd56b,	// (0x0008c75d) dia3_keypad_fun_pane_ParamLimits

0xd56b,	// (0x0008c75d) dia3_keypad_fun_pane

0xd57d,	// (0x0008c76f) dia3_keypad_num_pane_ParamLimits

0xd57d,	// (0x0008c76f) dia3_keypad_num_pane

0xd58f,	// (0x0008c781) dia3_listscroll_pane_ParamLimits

0xd58f,	// (0x0008c781) dia3_listscroll_pane

0xd59d,	// (0x0008c78f) dia3_numentry_pane_ParamLimits

0xd59d,	// (0x0008c78f) dia3_numentry_pane

0x37d3,	// (0x000829c5) dia3_list_pane

0x37de,	// (0x000829d0) scroll_pane_cp12

0x018a,	// (0x0007f37c) bg_dia3_numentry_pane

0xd5ab,	// (0x0008c79d) dia3_numentry_pane_t1

0xd5ba,	// (0x0008c7ac) cell_dia3_key_num_pane

0xd5c2,	// (0x0008c7b4) cell_dia3_key0_fun_pane_ParamLimits

0xd5c2,	// (0x0008c7b4) cell_dia3_key0_fun_pane

0xd5cf,	// (0x0008c7c1) cell_dia3_key1_fun_pane_ParamLimits

0xd5cf,	// (0x0008c7c1) cell_dia3_key1_fun_pane

0xd5dc,	// (0x0008c7ce) dia3_listrow_pane

0x27e1,	// (0x000819d3) bg_dia3_numentry_pane_g1

0x018a,	// (0x0007f37c) bg_button_pane_cp21

0x37e9,	// (0x000829db) cell_dia3_key_num_pane_t1

0x37f7,	// (0x000829e9) cell_dia3_key_num_pane_t2

0x3806,	// (0x000829f8) cell_dia3_key_num_pane_t3

0x3815,	// (0x00082a07) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0008f0fb) cell_dia3_key_num_pane_t

0x018a,	// (0x0007f37c) bg_button_pane_cp19

0xd5e9,	// (0x0008c7db) cell_dia3_key0_fun_pane_g1

0x018a,	// (0x0007f37c) bg_button_pane_cp20

0xd5f1,	// (0x0008c7e3) cell_dia3_key1_fun_pane_g1

0xd5f9,	// (0x0008c7eb) area_left_week_number_pane

0xd602,	// (0x0008c7f4) area_top_day_name_pane

0xd60b,	// (0x0008c7fd) frame_month_view_pane

0xd615,	// (0x0008c807) grid_month_view_pane

0xd61f,	// (0x0008c811) cell_top_day_name_pane_ParamLimits

0xd61f,	// (0x0008c811) cell_top_day_name_pane

0xd639,	// (0x0008c82b) cell_area_left_week_number_pane_ParamLimits

0xd639,	// (0x0008c82b) cell_area_left_week_number_pane

0xd64d,	// (0x0008c83f) cell_month_view_pane_ParamLimits

0xd64d,	// (0x0008c83f) cell_month_view_pane

0x382d,	// (0x00082a1f) frm_month_g1

0xd66a,	// (0x0008c85c) frm_month_g2

0xd674,	// (0x0008c866) frm_month_g3

0xd67e,	// (0x0008c870) frm_month_g4

0xd688,	// (0x0008c87a) frm_month_g5

0xd692,	// (0x0008c884) frm_month_g6

0xd69c,	// (0x0008c88e) frm_month_g7

0x3836,	// (0x00082a28) frm_month_g8

0xd6a6,	// (0x0008c898) frm_month_g9

0xd6af,	// (0x0008c8a1) frm_month_g10

0xd6b8,	// (0x0008c8aa) frm_month_g11

0xd6c1,	// (0x0008c8b3) frm_month_g12

0xd6ca,	// (0x0008c8bc) frm_month_g13

0xd6d3,	// (0x0008c8c5) frm_month_g14

0xd6dc,	// (0x0008c8ce) frm_month_g15

0xd6e7,	// (0x0008c8d9) frm_month_g16

0x000f,

0xff12,	// (0x0008f104) frm_month_g

0xd6f2,	// (0x0008c8e4) cell_top_day_name_pane_t1

0xd701,	// (0x0008c8f3) cell_area_left_week_number_pane_g1

0xd6f2,	// (0x0008c8e4) cell_area_left_week_number_pane_t1

0x10d5,	// (0x000802c7) cell_month_view_pane_g1

0xd709,	// (0x0008c8fb) cell_month_view_pane_t1

0x018a,	// (0x0007f37c) main_fps_pane

0x2c86,	// (0x00081e78) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2c86,	// (0x00081e78) cmail_ddmenu_btn02_pane_cp1

0x2ca2,	// (0x00081e94) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2ca2,	// (0x00081e94) cmail_ddmenu_btn02_pane_cp2

0xcff9,	// (0x0008c1eb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcff9,	// (0x0008c1eb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0008f02c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0008f02c) cmail_ddmenu_btn02_pane_g

0xd017,	// (0x0008c209) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd017,	// (0x0008c209) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x0008f031) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x0008f031) cmail_ddmenu_btn02_pane_t

0xd718,	// (0x0008c90a) fps_text_pane_ParamLimits

0xd718,	// (0x0008c90a) fps_text_pane

0xd725,	// (0x0008c917) main_fps_pane_g1_ParamLimits

0xd725,	// (0x0008c917) main_fps_pane_g1

0xd733,	// (0x0008c925) wait_bar_pane_cp010_ParamLimits

0xd733,	// (0x0008c925) wait_bar_pane_cp010

0xd73f,	// (0x0008c931) fps_text_pane_t1_ParamLimits

0xd73f,	// (0x0008c931) fps_text_pane_t1

0xa573,	// (0x00089765) cam4_image_uncrop_pane_g1

0xa57c,	// (0x0008976e) cam4_image_uncrop_pane_g2

0xa585,	// (0x00089777) cam4_image_uncrop_pane_g3

0xa58e,	// (0x00089780) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0008eaff) cam4_image_uncrop_pane_g

0xd5dc,	// (0x0008c7ce) dia3_listrow_pane_ParamLimits

0x018a,	// (0x0007f37c) main_phob2_pane

0xcb40,	// (0x0008bd32) cell_tport_appsw_pane_cp02_ParamLimits

0xcb40,	// (0x0008bd32) cell_tport_appsw_pane_cp02

0xcb4f,	// (0x0008bd41) cell_tport_appsw_pane_cp03_ParamLimits

0xcb4f,	// (0x0008bd41) cell_tport_appsw_pane_cp03

0x018a,	// (0x0007f37c) phob2_contact_card_pane

0x018a,	// (0x0007f37c) phob2_listscroll_pane

0x383f,	// (0x00082a31) phob2_list_pane

0x3847,	// (0x00082a39) scroll_pane_cp034

0xd758,	// (0x0008c94a) phob2_cc_data_pane_ParamLimits

0xd758,	// (0x0008c94a) phob2_cc_data_pane

0xd772,	// (0x0008c964) phob2_cc_listscroll_pane_ParamLimits

0xd772,	// (0x0008c964) phob2_cc_listscroll_pane

0xd78c,	// (0x0008c97e) list_double_large_graphic_phob2_pane_ParamLimits

0xd78c,	// (0x0008c97e) list_double_large_graphic_phob2_pane

0xd7af,	// (0x0008c9a1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd7af,	// (0x0008c9a1) list_double_large_graphic_phob2_pane_g1

0xd7bc,	// (0x0008c9ae) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd7bc,	// (0x0008c9ae) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0008f125) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0008f125) list_double_large_graphic_phob2_pane_g

0xd7c8,	// (0x0008c9ba) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd7c8,	// (0x0008c9ba) list_double_large_graphic_phob2_pane_t1

0xd7dd,	// (0x0008c9cf) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd7dd,	// (0x0008c9cf) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0008f12a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0008f12a) list_double_large_graphic_phob2_pane_t

0x018a,	// (0x0007f37c) list_highlight_pane_cp024

0x384f,	// (0x00082a41) phob2_cc_button_pane

0xd7ef,	// (0x0008c9e1) phob2_cc_data_pane_g1_ParamLimits

0xd7ef,	// (0x0008c9e1) phob2_cc_data_pane_g1

0xd7fb,	// (0x0008c9ed) phob2_cc_data_pane_g2_ParamLimits

0xd7fb,	// (0x0008c9ed) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0008f12f) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0008f12f) phob2_cc_data_pane_g

0xd807,	// (0x0008c9f9) phob2_cc_data_pane_t1_ParamLimits

0xd807,	// (0x0008c9f9) phob2_cc_data_pane_t1

0xd819,	// (0x0008ca0b) phob2_cc_data_pane_t2_ParamLimits

0xd819,	// (0x0008ca0b) phob2_cc_data_pane_t2

0xd82b,	// (0x0008ca1d) phob2_cc_data_pane_t3_ParamLimits

0xd82b,	// (0x0008ca1d) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0008f134) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0008f134) phob2_cc_data_pane_t

0x3857,	// (0x00082a49) phob2_cc_list_pane_ParamLimits

0x3857,	// (0x00082a49) phob2_cc_list_pane

0x1e86,	// (0x00081078) scroll_pane_cp035_ParamLimits

0x1e86,	// (0x00081078) scroll_pane_cp035

0x3d47,	// (0x00082f39) bg_button_pane_cp033

0x3863,	// (0x00082a55) phob2_cc_button_pane_g1

0x386f,	// (0x00082a61) phob2_cc_button_pane_t1

0x3884,	// (0x00082a76) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0008f13b) phob2_cc_button_pane_t

0xd83d,	// (0x0008ca2f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd83d,	// (0x0008ca2f) list_double_large_graphic_phob2_cc_pane

0xd86d,	// (0x0008ca5f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd86d,	// (0x0008ca5f) list_double_large_graphic_phob2_cc_pane_g1

0xd87e,	// (0x0008ca70) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd87e,	// (0x0008ca70) list_double_large_graphic_phob2_cc_pane_g2

0xd88d,	// (0x0008ca7f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd88d,	// (0x0008ca7f) list_double_large_graphic_phob2_cc_pane_g3

0xd89c,	// (0x0008ca8e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd89c,	// (0x0008ca8e) list_double_large_graphic_phob2_cc_pane_g4

0xd8ad,	// (0x0008ca9f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd8ad,	// (0x0008ca9f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0008f140) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0008f140) list_double_large_graphic_phob2_cc_pane_g

0xd8bc,	// (0x0008caae) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd8bc,	// (0x0008caae) list_double_large_graphic_phob2_cc_pane_t1

0xd8e5,	// (0x0008cad7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd8e5,	// (0x0008cad7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0008f14b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0008f14b) list_double_large_graphic_phob2_cc_pane_t

0x3896,	// (0x00082a88) list_highlight_pane_cp025_ParamLimits

0x3896,	// (0x00082a88) list_highlight_pane_cp025

0x3d47,	// (0x00082f39) bg_button_pane_cp033_ParamLimits

0x3863,	// (0x00082a55) phob2_cc_button_pane_g1_ParamLimits

0x386f,	// (0x00082a61) phob2_cc_button_pane_t1_ParamLimits

0x3884,	// (0x00082a76) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0008f13b) phob2_cc_button_pane_t_ParamLimits

0x54bf,	// (0x000846b1) popup_wgtman_window

0x1c88,	// (0x00080e7a) scroll_pane_cp038

0xd3b0,	// (0x0008c5a2) wgtman_btn_pane_cp_01_ParamLimits

0xd3b0,	// (0x0008c5a2) wgtman_btn_pane_cp_01

0x38a4,	// (0x00082a96) wgtman_content_pane

0x35ec,	// (0x000827de) wgtman_heading_pane

0x018a,	// (0x0007f37c) bg_heading_pane_cp02

0x38ad,	// (0x00082a9f) wgtman_heading_pane_g1

0x38b5,	// (0x00082aa7) wgtman_heading_pane_t1

0x38c3,	// (0x00082ab5) scroll_pane_cp036

0x38cb,	// (0x00082abd) wgtman_list_pane

0x38d3,	// (0x00082ac5) wgtman_list_pane_t1_ParamLimits

0x38d3,	// (0x00082ac5) wgtman_list_pane_t1

0xa4d2,	// (0x000896c4) cam4_grid_pane

0xb255,	// (0x0008a447) bg_button_pane_cp015_ParamLimits

0xb267,	// (0x0008a459) bg_button_pane_cp016_ParamLimits

0xb27a,	// (0x0008a46c) bg_button_pane_cp017_ParamLimits

0xb2d0,	// (0x0008a4c2) popup_vitu2_query_window_g3_ParamLimits

0xb2d0,	// (0x0008a4c2) popup_vitu2_query_window_g3

0xb38b,	// (0x0008a57d) popup_vitu2_query_window_t6_ParamLimits

0xb38b,	// (0x0008a57d) popup_vitu2_query_window_t6

0xb3b6,	// (0x0008a5a8) popup_vitu2_query_window_t7_ParamLimits

0xb3b6,	// (0x0008a5a8) popup_vitu2_query_window_t7

0x1ae0,	// (0x00080cd2) cam4_grid_pane_g1

0x1ae9,	// (0x00080cdb) cam4_grid_pane_g2

0x38f5,	// (0x00082ae7) cam4_grid_pane_g3

0x38fe,	// (0x00082af0) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0008f150) cam4_grid_pane_g

0x6401,	// (0x000855f3) aid_placing_vt_slider_lsc_ParamLimits

0x6741,	// (0x00085933) vidtel_button_pane_ParamLimits

0x6741,	// (0x00085933) vidtel_button_pane

0x018a,	// (0x0007f37c) bg_button_pane_cp034

0xd90e,	// (0x0008cb00) vidtel_button_pane_g1

0x3909,	// (0x00082afb) vidtel_button_pane_t1

0x1da5,	// (0x00080f97) aid_size_vtel_slider_touch

0x1e86,	// (0x00081078) scroll_pane_cp039

0x281f,	// (0x00081a11) ncim_query_button_pane_cp01_ParamLimits

0x283e,	// (0x00081a30) ncimui_query_pane_g1_ParamLimits

0x3d47,	// (0x00082f39) input_focus_pane_cp012_ParamLimits

0x2863,	// (0x00081a55) ncim_query_entry_pane_t1_ParamLimits

0x1e86,	// (0x00081078) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
