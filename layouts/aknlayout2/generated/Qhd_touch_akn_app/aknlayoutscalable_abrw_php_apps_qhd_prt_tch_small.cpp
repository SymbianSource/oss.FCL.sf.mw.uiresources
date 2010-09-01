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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00047619 };

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
0x4762,	// (0x0004bd7b) Screen

0x476e,	// (0x0004bd87) application_window

0x47d4,	// (0x0004bded) area_bottom_pane_ParamLimits

0x47d4,	// (0x0004bded) area_bottom_pane

0x482c,	// (0x0004be45) area_top_pane_ParamLimits

0x482c,	// (0x0004be45) area_top_pane

0x4890,	// (0x0004bea9) call_video_uplink_pane_ParamLimits

0x4890,	// (0x0004bea9) call_video_uplink_pane

0x48cf,	// (0x0004bee8) main_pane_ParamLimits

0x48cf,	// (0x0004bee8) main_pane

0xeef2,	// (0x0005650b) context_pane

0x7e63,	// (0x0004f47c) navi_pane

0x7e89,	// (0x0004f4a2) popup_cale_events_window_ParamLimits

0x7e89,	// (0x0004f4a2) popup_cale_events_window

0xef05,	// (0x0005651e) popup_mup_playback_window

0x7ea1,	// (0x0004f4ba) signal_pane

0xcfc4,	// (0x000545dd) main_browser_pane

0xd176,	// (0x0005478f) main_burst_pane

0x7cd5,	// (0x0004f2ee) main_calc_pane

0xeed8,	// (0x000564f1) main_cale_day_pane

0x55d6,	// (0x0004cbef) main_cale_month_pane

0xeed8,	// (0x000564f1) main_cale_week_pane

0xd176,	// (0x0005478f) main_call_pane

0x4f1f,	// (0x0004c538) main_call_poc_pane

0xd176,	// (0x0005478f) main_camera_pane

0xd176,	// (0x0005478f) main_chi_dic_pane

0xd969,	// (0x00054f82) main_clock_pane

0x4f1f,	// (0x0004c538) main_fmradio_pane

0xd176,	// (0x0005478f) main_graph_messa_pane

0x4f1f,	// (0x0004c538) main_help_pane

0xcfc4,	// (0x000545dd) main_im_pane

0x517a,	// (0x0004c793) main_image_pane_ParamLimits

0x517a,	// (0x0004c793) main_image_pane

0x4f1f,	// (0x0004c538) main_location2_pane

0xd176,	// (0x0005478f) main_location_pane

0x517a,	// (0x0004c793) main_messa_pane

0x4f1f,	// (0x0004c538) main_mp2_pane

0xd176,	// (0x0005478f) main_mp_pane

0x4f1f,	// (0x0004c538) main_msg_pane

0x4f1f,	// (0x0004c538) main_mup_eq_pane

0x4f1f,	// (0x0004c538) main_mup_pane

0xcfc4,	// (0x000545dd) main_notes_pane

0x4f1f,	// (0x0004c538) main_pec_pane

0x4f1f,	// (0x0004c538) main_phob_pane

0x4f1f,	// (0x0004c538) main_pinb_pane

0x4f1f,	// (0x0004c538) main_postcard_pane

0x4f1f,	// (0x0004c538) main_qdial_pane

0xd176,	// (0x0005478f) main_skin_pane

0x4f1f,	// (0x0004c538) main_smil2_pane

0xd176,	// (0x0005478f) main_smil_pane

0xd176,	// (0x0005478f) main_video_pane

0xd176,	// (0x0005478f) main_video_tele_pane

0x517a,	// (0x0004c793) main_viewer_pane_ParamLimits

0x517a,	// (0x0004c793) main_viewer_pane

0xd176,	// (0x0005478f) main_vorec_pane

0x7d2d,	// (0x0004f346) popup_blid_sat_info_window_ParamLimits

0x7d2d,	// (0x0004f346) popup_blid_sat_info_window

0x7d4d,	// (0x0004f366) popup_dyc_status_message_window_ParamLimits

0x7d4d,	// (0x0004f366) popup_dyc_status_message_window

0x7d5d,	// (0x0004f376) popup_grid_large_graphic_window_ParamLimits

0x7d5d,	// (0x0004f376) popup_grid_large_graphic_window

0x7dee,	// (0x0004f407) popup_loc_request_window_ParamLimits

0x7dee,	// (0x0004f407) popup_loc_request_window

0x7e3b,	// (0x0004f454) popup_wml_address_window_ParamLimits

0x7e3b,	// (0x0004f454) popup_wml_address_window

0x7bad,	// (0x0004f1c6) call_muted_g1

0x7828,	// (0x0004ee41) popup_call_audio_conf_window_ParamLimits

0x7828,	// (0x0004ee41) popup_call_audio_conf_window

0x7bbd,	// (0x0004f1d6) popup_call_audio_first_window_ParamLimits

0x7bbd,	// (0x0004f1d6) popup_call_audio_first_window

0x7bfd,	// (0x0004f216) popup_call_audio_in_window_ParamLimits

0x7bfd,	// (0x0004f216) popup_call_audio_in_window

0x7c21,	// (0x0004f23a) popup_call_audio_out_window_ParamLimits

0x7c21,	// (0x0004f23a) popup_call_audio_out_window

0x7c43,	// (0x0004f25c) popup_call_audio_second_window_ParamLimits

0x7c43,	// (0x0004f25c) popup_call_audio_second_window

0x7c73,	// (0x0004f28c) popup_call_audio_wait_window_ParamLimits

0x7c73,	// (0x0004f28c) popup_call_audio_wait_window

0x7c94,	// (0x0004f2ad) popup_number_entry_window_ParamLimits

0x7c94,	// (0x0004f2ad) popup_number_entry_window

0x4aaf,	// (0x0004c0c8) bg_popup_call_pane_cp05_ParamLimits

0x4aaf,	// (0x0004c0c8) bg_popup_call_pane_cp05

0x4acf,	// (0x0004c0e8) popup_number_entry_window_t1

0x4ae2,	// (0x0004c0fb) popup_number_entry_window_t2

0x4af4,	// (0x0004c10d) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0005669e) popup_number_entry_window_t

0x4b3f,	// (0x0004c158) text_title_cp2

0x4b52,	// (0x0004c16b) bg_popup_call_pane_cp_ParamLimits

0x4b52,	// (0x0004c16b) bg_popup_call_pane_cp

0x4b60,	// (0x0004c179) call_thumbnail_pane

0x4b68,	// (0x0004c181) popup_call_audio_in_window_g1_ParamLimits

0x4b68,	// (0x0004c181) popup_call_audio_in_window_g1

0x4b74,	// (0x0004c18d) popup_call_audio_in_window_g2_ParamLimits

0x4b74,	// (0x0004c18d) popup_call_audio_in_window_g2

0x4b80,	// (0x0004c199) popup_call_audio_in_window_g3_ParamLimits

0x4b80,	// (0x0004c199) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x000566a7) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x000566a7) popup_call_audio_in_window_g

0x4b8c,	// (0x0004c1a5) popup_call_audio_in_window_t1_ParamLimits

0x4b8c,	// (0x0004c1a5) popup_call_audio_in_window_t1

0x4ba8,	// (0x0004c1c1) popup_call_audio_in_window_t2_ParamLimits

0x4ba8,	// (0x0004c1c1) popup_call_audio_in_window_t2

0x4bc4,	// (0x0004c1dd) popup_call_audio_in_window_t3_ParamLimits

0x4bc4,	// (0x0004c1dd) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x000566ae) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x000566ae) popup_call_audio_in_window_t

0x4b52,	// (0x0004c16b) bg_popup_call_pane_cp01_ParamLimits

0x4b52,	// (0x0004c16b) bg_popup_call_pane_cp01

0x4b60,	// (0x0004c179) call_thumbnail_pane_cp02

0x4bd7,	// (0x0004c1f0) call_type_pane_cp022

0x4bdf,	// (0x0004c1f8) popup_call_audio_out_window_g1_ParamLimits

0x4bdf,	// (0x0004c1f8) popup_call_audio_out_window_g1

0x4bf1,	// (0x0004c20a) popup_call_audio_out_window_g2_ParamLimits

0x4bf1,	// (0x0004c20a) popup_call_audio_out_window_g2

0x4bfd,	// (0x0004c216) popup_call_audio_out_window_g3_ParamLimits

0x4bfd,	// (0x0004c216) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x000566b5) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x000566b5) popup_call_audio_out_window_g

0x4c0f,	// (0x0004c228) popup_call_audio_out_window_t1_ParamLimits

0x4c0f,	// (0x0004c228) popup_call_audio_out_window_t1

0x4c27,	// (0x0004c240) popup_call_audio_out_window_t2_ParamLimits

0x4c27,	// (0x0004c240) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x000566bc) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x000566bc) popup_call_audio_out_window_t

0x4c3c,	// (0x0004c255) bg_popup_call_pane_ParamLimits

0x4c3c,	// (0x0004c255) bg_popup_call_pane

0x4cc0,	// (0x0004c2d9) call_thumbnail_pane_cp_ParamLimits

0x4cc0,	// (0x0004c2d9) call_thumbnail_pane_cp

0x4ce4,	// (0x0004c2fd) call_type_pane_cp01_ParamLimits

0x4ce4,	// (0x0004c2fd) call_type_pane_cp01

0x4d28,	// (0x0004c341) popup_call_audio_first_window_g1_ParamLimits

0x4d28,	// (0x0004c341) popup_call_audio_first_window_g1

0x4d74,	// (0x0004c38d) popup_call_audio_first_window_g2_ParamLimits

0x4d74,	// (0x0004c38d) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x000566c1) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x000566c1) popup_call_audio_first_window_g

0x4db8,	// (0x0004c3d1) popup_call_audio_first_window_t1_ParamLimits

0x4db8,	// (0x0004c3d1) popup_call_audio_first_window_t1

0x4e64,	// (0x0004c47d) popup_call_audio_first_window_t4_ParamLimits

0x4e64,	// (0x0004c47d) popup_call_audio_first_window_t4

0x4ef0,	// (0x0004c509) popup_call_audio_first_window_t5_ParamLimits

0x4ef0,	// (0x0004c509) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x000566c6) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x000566c6) popup_call_audio_first_window_t

0x4f1f,	// (0x0004c538) bg_popup_call_pane_cp02

0x4f29,	// (0x0004c542) call_type_pane_cp023

0x4f31,	// (0x0004c54a) popup_call_audio_wait_window_g1

0x4f39,	// (0x0004c552) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x000566cd) popup_call_audio_wait_window_g

0x4f41,	// (0x0004c55a) popup_call_audio_wait_window_t3

0x4f4f,	// (0x0004c568) bg_popup_call_pane_cp03_ParamLimits

0x4f4f,	// (0x0004c568) bg_popup_call_pane_cp03

0x4faf,	// (0x0004c5c8) call_thumbnail_pane_cp011_ParamLimits

0x4faf,	// (0x0004c5c8) call_thumbnail_pane_cp011

0x4fbb,	// (0x0004c5d4) call_type_pane_cp034_ParamLimits

0x4fbb,	// (0x0004c5d4) call_type_pane_cp034

0x4ff7,	// (0x0004c610) popup_call_audio_second_window_g1_ParamLimits

0x4ff7,	// (0x0004c610) popup_call_audio_second_window_g1

0x5033,	// (0x0004c64c) popup_call_audio_second_window_g2_ParamLimits

0x5033,	// (0x0004c64c) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x000566d2) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x000566d2) popup_call_audio_second_window_g

0x506f,	// (0x0004c688) popup_call_audio_second_window_t1_ParamLimits

0x506f,	// (0x0004c688) popup_call_audio_second_window_t1

0x50f0,	// (0x0004c709) popup_call_audio_second_window_t2_ParamLimits

0x50f0,	// (0x0004c709) popup_call_audio_second_window_t2

0x5126,	// (0x0004c73f) popup_call_audio_second_window_t3_ParamLimits

0x5126,	// (0x0004c73f) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x000566d7) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x000566d7) popup_call_audio_second_window_t

0x4f1f,	// (0x0004c538) bg_popup_call_pane_cp04

0x515c,	// (0x0004c775) list_conf_pane

0x5164,	// (0x0004c77d) popup_call_audio_conf_window_t1

0x5172,	// (0x0004c78b) call_thumbnail_pane_g1

0x517a,	// (0x0004c793) bg_pinb_pane_ParamLimits

0x517a,	// (0x0004c793) bg_pinb_pane

0x5188,	// (0x0004c7a1) find_pinb_pane

0x517a,	// (0x0004c793) listscroll_pinb_pane_ParamLimits

0x517a,	// (0x0004c793) listscroll_pinb_pane

0x5192,	// (0x0004c7ab) pinb_bg_pane_g1

0x5192,	// (0x0004c7ab) pinb_bg_pane_g2

0x5192,	// (0x0004c7ab) pinb_bg_pane_g3

0x5192,	// (0x0004c7ab) pinb_bg_pane_g4

0x5192,	// (0x0004c7ab) pinb_bg_pane_g5

0x5192,	// (0x0004c7ab) pinb_bg_pane_g6

0x5192,	// (0x0004c7ab) pinb_bg_pane_g7

0x5192,	// (0x0004c7ab) pinb_bg_pane_g8

0x5192,	// (0x0004c7ab) pinb_bg_pane_g9

0x5192,	// (0x0004c7ab) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x000566de) pinb_bg_pane_g

0x477a,	// (0x0004bd93) grid_pinb_pane

0x477a,	// (0x0004bd93) list_pinb_pane

0x519c,	// (0x0004c7b5) scroll_pane_cp01_ParamLimits

0x519c,	// (0x0004c7b5) scroll_pane_cp01

0x51aa,	// (0x0004c7c3) find_pinb_pane_g1_ParamLimits

0x51aa,	// (0x0004c7c3) find_pinb_pane_g1

0x51c2,	// (0x0004c7db) find_pinb_pane_t1

0x51d4,	// (0x0004c7ed) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x000566f8) find_pinb_pane_t

0x51e9,	// (0x0004c802) input_focus_pane_cp01_ParamLimits

0x51e9,	// (0x0004c802) input_focus_pane_cp01

0x51f5,	// (0x0004c80e) cell_pinb_pane_ParamLimits

0x51f5,	// (0x0004c80e) cell_pinb_pane

0xcf52,	// (0x0005456b) cell_pinb_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) cell_pinb_pane_g1

0xcf60,	// (0x00054579) cell_pinb_pane_g2_ParamLimits

0xcf60,	// (0x00054579) cell_pinb_pane_g2

0xcf60,	// (0x00054579) cell_pinb_pane_g3_ParamLimits

0xcf60,	// (0x00054579) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x000566fd) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x000566fd) cell_pinb_pane_g

0x4f1f,	// (0x0004c538) grid_highlight_pane_cp01

0x51f5,	// (0x0004c80e) list_pinb_item_pane_ParamLimits

0x51f5,	// (0x0004c80e) list_pinb_item_pane

0x477a,	// (0x0004bd93) list_highlight_pane_cp02

0xcf6e,	// (0x00054587) list_pinb_item_pane_g1_ParamLimits

0xcf6e,	// (0x00054587) list_pinb_item_pane_g1

0xcf60,	// (0x00054579) list_pinb_item_pane_g2_ParamLimits

0xcf60,	// (0x00054579) list_pinb_item_pane_g2

0xcf52,	// (0x0005456b) list_pinb_item_pane_g3_ParamLimits

0xcf52,	// (0x0005456b) list_pinb_item_pane_g3

0xcf60,	// (0x00054579) list_pinb_item_pane_g4_ParamLimits

0xcf60,	// (0x00054579) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00056704) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00056704) list_pinb_item_pane_g

0xcf7c,	// (0x00054595) list_pinb_item_pane_t1_ParamLimits

0xcf7c,	// (0x00054595) list_pinb_item_pane_t1

0x521d,	// (0x0004c836) calc_display_pane

0x523b,	// (0x0004c854) calc_paper_pane

0x5257,	// (0x0004c870) grid_calc_pane

0x4f1f,	// (0x0004c538) bg_list_pane_cp01

0x5283,	// (0x0004c89c) clock_g1

0x528b,	// (0x0004c8a4) clock_g2

0x0001,

0xf0f4,	// (0x0005670d) clock_g

0x5295,	// (0x0004c8ae) clock_t1_ParamLimits

0x5295,	// (0x0004c8ae) clock_t1

0x52aa,	// (0x0004c8c3) clock_t2_ParamLimits

0x52aa,	// (0x0004c8c3) clock_t2

0x52bc,	// (0x0004c8d5) clock_t3_ParamLimits

0x52bc,	// (0x0004c8d5) clock_t3

0x52ce,	// (0x0004c8e7) clock_t4_ParamLimits

0x52ce,	// (0x0004c8e7) clock_t4

0x52e0,	// (0x0004c8f9) clock_t5_ParamLimits

0x52e0,	// (0x0004c8f9) clock_t5

0x52f5,	// (0x0004c90e) clock_t6_ParamLimits

0x52f5,	// (0x0004c90e) clock_t6

0x5307,	// (0x0004c920) clock_t7_ParamLimits

0x5307,	// (0x0004c920) clock_t7

0x5319,	// (0x0004c932) clock_t8_ParamLimits

0x5319,	// (0x0004c932) clock_t8

0x532f,	// (0x0004c948) clock_t9_ParamLimits

0x532f,	// (0x0004c948) clock_t9

0x0008,

0xf0f9,	// (0x00056712) clock_t_ParamLimits

0xf0f9,	// (0x00056712) clock_t

0xcf90,	// (0x000545a9) popup_clock_analogue_window_cp02

0xcf90,	// (0x000545a9) popup_clock_digital_window_cp01

0x4f1f,	// (0x0004c538) listscroll_help_pane

0x4f1f,	// (0x0004c538) phob_pre_status_pane

0xcf98,	// (0x000545b1) grid_qdial_pane

0x517a,	// (0x0004c793) listscroll_mce_pane

0x517a,	// (0x0004c793) bg_notes_pane

0xcfa2,	// (0x000545bb) list_notes_pane

0x5345,	// (0x0004c95e) scroll_pane_cp06

0xcfb0,	// (0x000545c9) bg_calc_paper_pane

0x5354,	// (0x0004c96d) list_calc_pane

0xcfc4,	// (0x000545dd) bg_calc_display_pane

0x536e,	// (0x0004c987) calc_display_pane_t1

0x5383,	// (0x0004c99c) calc_display_pane_t2

0x5398,	// (0x0004c9b1) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00056725) calc_display_pane_t

0x53aa,	// (0x0004c9c3) cell_calc_pane_ParamLimits

0x53aa,	// (0x0004c9c3) cell_calc_pane

0xcfd0,	// (0x000545e9) bg_calc_paper_pane_g1

0xcfdc,	// (0x000545f5) bg_calc_paper_pane_g2

0xcfe8,	// (0x00054601) bg_calc_paper_pane_g3

0xcff4,	// (0x0005460d) bg_calc_paper_pane_g4

0xd000,	// (0x00054619) bg_calc_paper_pane_g5

0x53d7,	// (0x0004c9f0) bg_calc_paper_pane_g6

0x53e8,	// (0x0004ca01) bg_calc_paper_pane_g7

0x53f9,	// (0x0004ca12) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0005672c) bg_calc_paper_pane_g

0x540a,	// (0x0004ca23) calc_bg_paper_pane_g9

0x541b,	// (0x0004ca34) list_calc_item_pane_ParamLimits

0x541b,	// (0x0004ca34) list_calc_item_pane

0xd00c,	// (0x00054625) list_calc_item_pane_g1

0x5447,	// (0x0004ca60) list_calc_item_pane_t1_ParamLimits

0x5447,	// (0x0004ca60) list_calc_item_pane_t1

0x5459,	// (0x0004ca72) list_calc_item_pane_t2_ParamLimits

0x5459,	// (0x0004ca72) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0005673d) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0005673d) list_calc_item_pane_t

0x5192,	// (0x0004c7ab) cell_calc_pane_g1

0xd019,	// (0x00054632) grid_highlight_pane_cp02

0x5489,	// (0x0004caa2) bg_calc_display_pane_g1

0x5492,	// (0x0004caab) bg_calc_display_pane_g2

0x549c,	// (0x0004cab5) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00056747) bg_calc_display_pane_g

0x54a5,	// (0x0004cabe) cell_qdial_pane_ParamLimits

0x54a5,	// (0x0004cabe) cell_qdial_pane

0x54b9,	// (0x0004cad2) cell_qdial_pane_g1_ParamLimits

0x54b9,	// (0x0004cad2) cell_qdial_pane_g1

0x54c6,	// (0x0004cadf) cell_qdial_pane_g2_ParamLimits

0x54c6,	// (0x0004cadf) cell_qdial_pane_g2

0xd03b,	// (0x00054654) cell_qdial_pane_g3_ParamLimits

0xd03b,	// (0x00054654) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0005674e) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0005674e) cell_qdial_pane_g

0x54e4,	// (0x0004cafd) cell_qdial_pane_t1_ParamLimits

0x54e4,	// (0x0004cafd) cell_qdial_pane_t1

0x54fc,	// (0x0004cb15) cell_qdial_pane_t2_ParamLimits

0x54fc,	// (0x0004cb15) cell_qdial_pane_t2

0x550f,	// (0x0004cb28) cell_qdial_pane_t3_ParamLimits

0x550f,	// (0x0004cb28) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00056757) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00056757) cell_qdial_pane_t

0x4f1f,	// (0x0004c538) grid_highlight_pane_cp04

0xd047,	// (0x00054660) thumbnail_qdial_pane_ParamLimits

0xd047,	// (0x00054660) thumbnail_qdial_pane

0xd0a3,	// (0x000546bc) list_help_pane

0xd0ac,	// (0x000546c5) scroll_pane_cp02

0x5522,	// (0x0004cb3b) help_list_pane_t1_ParamLimits

0x5522,	// (0x0004cb3b) help_list_pane_t1

0x5558,	// (0x0004cb71) bg_notes_pane_g2

0x5560,	// (0x0004cb79) bg_notes_pane_g3

0x5568,	// (0x0004cb81) notes_bg_pane_g1

0x5570,	// (0x0004cb89) notes_bg_pane_g4

0x5578,	// (0x0004cb91) notes_bg_pane_g5

0x5580,	// (0x0004cb99) notes_bg_pane_g6

0x5588,	// (0x0004cba1) notes_bg_pane_g7

0x5590,	// (0x0004cba9) notes_bg_pane_g8

0x5598,	// (0x0004cbb1) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00056775) notes_bg_pane_g

0x55a0,	// (0x0004cbb9) list_notes_text_pane_ParamLimits

0x55a0,	// (0x0004cbb9) list_notes_text_pane

0xd0b5,	// (0x000546ce) list_notes_text_pane_g1

0x55c8,	// (0x0004cbe1) list_notes_text_pane_t1

0x55d6,	// (0x0004cbef) listscroll_cale_week_pane

0x55fb,	// (0x0004cc14) bg_cale_heading_pane

0xd0d8,	// (0x000546f1) bg_cale_pane_cp01

0x561b,	// (0x0004cc34) cale_week_corner_pane

0x5635,	// (0x0004cc4e) cale_week_day_heading_pane

0x5655,	// (0x0004cc6e) cale_week_scroll_pane_g1

0x5670,	// (0x0004cc89) cale_week_scroll_pane_g2

0x5683,	// (0x0004cc9c) cale_week_scroll_pane_g3

0x5696,	// (0x0004ccaf) cale_week_scroll_pane_g4

0x56a9,	// (0x0004ccc2) cale_week_scroll_pane_g5

0x56bc,	// (0x0004ccd5) cale_week_scroll_pane_g6

0x56cf,	// (0x0004cce8) cale_week_scroll_pane_g7

0x56e4,	// (0x0004ccfd) cale_week_scroll_pane_g8

0x56f9,	// (0x0004cd12) cale_week_scroll_pane_g9

0x570c,	// (0x0004cd25) cale_week_scroll_pane_g10

0x571f,	// (0x0004cd38) cale_week_scroll_pane_g11

0x5732,	// (0x0004cd4b) cale_week_scroll_pane_g12

0x5749,	// (0x0004cd62) cale_week_scroll_pane_g13

0x5764,	// (0x0004cd7d) cale_week_scroll_pane_g14

0x577f,	// (0x0004cd98) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00056784) cale_week_scroll_pane_g

0x57af,	// (0x0004cdc8) cale_week_time_pane

0x57c4,	// (0x0004cddd) grid_cale_week_pane

0xd107,	// (0x00054720) scroll_pane_cp08

0x57e3,	// (0x0004cdfc) cell_cale_week_pane_ParamLimits

0x57e3,	// (0x0004cdfc) cell_cale_week_pane

0x5845,	// (0x0004ce5e) cale_week_day_heading_pane_t1

0x5860,	// (0x0004ce79) cale_week_day_heading_pane_t2

0x587b,	// (0x0004ce94) cale_week_day_heading_pane_t3

0x5896,	// (0x0004ceaf) cale_week_day_heading_pane_t4

0x58b1,	// (0x0004ceca) cale_week_day_heading_pane_t5

0x58cc,	// (0x0004cee5) cale_week_day_heading_pane_t6

0x58e7,	// (0x0004cf00) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x000567a5) cale_week_day_heading_pane_t

0xd124,	// (0x0005473d) bg_cale_side_pane

0x5902,	// (0x0004cf1b) cale_week_time_pane_t1

0x591c,	// (0x0004cf35) cale_week_time_pane_t2

0x5936,	// (0x0004cf4f) cale_week_time_pane_t3

0x5950,	// (0x0004cf69) cale_week_time_pane_t4

0x596a,	// (0x0004cf83) cale_week_time_pane_t5

0x5984,	// (0x0004cf9d) cale_week_time_pane_t6

0x59a2,	// (0x0004cfbb) cale_week_time_pane_t7

0x59c4,	// (0x0004cfdd) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x000567b4) cale_week_time_pane_t

0x59e8,	// (0x0004d001) cell_cale_week_pane_g2

0x5a0c,	// (0x0004d025) cell_cale_week_pane_g3_ParamLimits

0x5a0c,	// (0x0004d025) cell_cale_week_pane_g3

0xd132,	// (0x0005474b) grid_highlight_pane_cp07

0xd13a,	// (0x00054753) listscroll_gms_pane

0xd144,	// (0x0005475d) grid_gms_pane

0xd14d,	// (0x00054766) listscroll_gms_pane_g1

0xd155,	// (0x0005476e) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x000567c5) listscroll_gms_pane_g

0x5a24,	// (0x0004d03d) scroll_pane_cp010

0x5a2f,	// (0x0004d048) cell_gms_pane_ParamLimits

0x5a2f,	// (0x0004d048) cell_gms_pane

0x5a42,	// (0x0004d05b) cell_gms_pane_g1

0xd15d,	// (0x00054776) cell_gms_pane_g2

0xd0b5,	// (0x000546ce) cell_gms_pane_g3

0xd165,	// (0x0005477e) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x000567ca) cell_gms_pane_g

0xd16e,	// (0x00054787) grid_highlight_pane_cp09

0x7b31,	// (0x0004f14a) phob_pre_status_pane_g1

0x7b39,	// (0x0004f152) phob_pre_status_pane_g2

0x7b41,	// (0x0004f15a) phob_pre_status_pane_g3

0x7b49,	// (0x0004f162) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x00056b93) phob_pre_status_pane_g

0x7b59,	// (0x0004f172) phob_pre_status_pane_t1

0x7b69,	// (0x0004f182) phob_pre_status_pane_t2

0x7b79,	// (0x0004f192) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x00056b9e) phob_pre_status_pane_t

0xd176,	// (0x0005478f) bg_list_pane_cp05

0x5a52,	// (0x0004d06b) grid_vorec_pane

0x5a5c,	// (0x0004d075) vorec_t1

0x5a6a,	// (0x0004d083) vorec_t2

0x5a78,	// (0x0004d091) vorec_t3

0x5a86,	// (0x0004d09f) vorec_t4

0xcc85,	// (0x0005429e) vorec_t5

0xcc93,	// (0x000542ac) vorec_t6

0x0004,

0xf1ba,	// (0x000567d3) vorec_t

0xcca1,	// (0x000542ba) wait_bar_pane_cp01

0x5aa2,	// (0x0004d0bb) cell_vorec_pane_ParamLimits

0x5aa2,	// (0x0004d0bb) cell_vorec_pane

0x5ab5,	// (0x0004d0ce) cell_vorec_pane_g1

0x4f1f,	// (0x0004c538) grid_highlight_pane_cp05

0x51f5,	// (0x0004c80e) cams_zoom_pane

0x51f5,	// (0x0004c80e) image_vga_pane

0xcf60,	// (0x00054579) main_camera_pane_g1

0xcf60,	// (0x00054579) main_camera_pane_g2

0xcf60,	// (0x00054579) main_camera_pane_g3

0xcf60,	// (0x00054579) main_camera_pane_g4

0xcf60,	// (0x00054579) main_camera_pane_g5

0xcf60,	// (0x00054579) main_camera_pane_g6

0xcf60,	// (0x00054579) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x000567de) main_camera_pane_g

0xd17e,	// (0x00054797) main_camera_pane_t1

0xd17e,	// (0x00054797) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x000567ef) main_camera_pane_t

0x5abf,	// (0x0004d0d8) cams_zoom_pane_cp_ParamLimits

0x5abf,	// (0x0004d0d8) cams_zoom_pane_cp

0x5aed,	// (0x0004d106) image_cif_pane_ParamLimits

0x5aed,	// (0x0004d106) image_cif_pane

0x477a,	// (0x0004bd93) image_subqcif_pane

0x5afb,	// (0x0004d114) main_video_pane_g1_ParamLimits

0x5afb,	// (0x0004d114) main_video_pane_g1

0x5b23,	// (0x0004d13c) main_video_pane_g2_ParamLimits

0x5b23,	// (0x0004d13c) main_video_pane_g2

0x5b56,	// (0x0004d16f) main_video_pane_g3_ParamLimits

0x5b56,	// (0x0004d16f) main_video_pane_g3

0x5b56,	// (0x0004d16f) main_video_pane_g4_ParamLimits

0x5b56,	// (0x0004d16f) main_video_pane_g4

0x5b84,	// (0x0004d19d) main_video_pane_g5_ParamLimits

0x5b84,	// (0x0004d19d) main_video_pane_g5

0xd192,	// (0x000547ab) main_video_pane_g6_ParamLimits

0xd192,	// (0x000547ab) main_video_pane_g6

0x0006,

0xf1db,	// (0x000567f4) main_video_pane_g_ParamLimits

0xf1db,	// (0x000567f4) main_video_pane_g

0x5ba0,	// (0x0004d1b9) main_video_pane_t1_ParamLimits

0x5ba0,	// (0x0004d1b9) main_video_pane_t1

0xd1ac,	// (0x000547c5) cams_zoom_pane_g1

0xd1ac,	// (0x000547c5) cams_zoom_pane_g2

0xd1ac,	// (0x000547c5) cams_zoom_pane_g3

0xd1ac,	// (0x000547c5) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00056803) cams_zoom_pane_g

0x5be6,	// (0x0004d1ff) grid_cams_pane

0x5bf4,	// (0x0004d20d) linegrid_cams_pane

0x5c02,	// (0x0004d21b) cell_cams_pane_ParamLimits

0x5c02,	// (0x0004d21b) cell_cams_pane

0xd1b6,	// (0x000547cf) cams_burst_image_pane

0xd1be,	// (0x000547d7) cell_cams_pane_g1

0x4f1f,	// (0x0004c538) grid_highlight_pane_cp03

0x5192,	// (0x0004c7ab) mp_bg_pane_g1

0x477a,	// (0x0004bd93) bg_list_pane_cp03

0x477a,	// (0x0004bd93) bg_mp_pane

0x477a,	// (0x0004bd93) grid_mp_pane

0xd1ac,	// (0x000547c5) media_player_g1

0xd6ef,	// (0x00054d08) media_player_t1

0xd6ef,	// (0x00054d08) media_player_t2

0xd6ef,	// (0x00054d08) media_player_t3

0xd6ef,	// (0x00054d08) media_player_t4

0xd6ef,	// (0x00054d08) media_player_t5

0xd6ef,	// (0x00054d08) media_player_t6

0xd6ef,	// (0x00054d08) media_player_t7

0x0006,

0xf564,	// (0x00056b7d) media_player_t

0x477a,	// (0x0004bd93) wait_bar_pane_cp02

0xf549,	// (0x00056b62) main_usb_pane_t

0xd969,	// (0x00054f82) cell_mp_pane

0x5192,	// (0x0004c7ab) cell_mp_pane_g1

0x4f1f,	// (0x0004c538) grid_highlight_pane_cp06

0xd1da,	// (0x000547f3) grid_skin_colour_pane

0xd1e2,	// (0x000547fb) list_highlight_pane_cp03

0x5c15,	// (0x0004d22e) skin_g1

0xd1ea,	// (0x00054803) skin_t1

0xd1f9,	// (0x00054812) skin_t2

0x0001,

0xf218,	// (0x00056831) skin_t

0x5c1f,	// (0x0004d238) cell_skin_colour_pane_ParamLimits

0x5c1f,	// (0x0004d238) cell_skin_colour_pane

0xd207,	// (0x00054820) cell_skin_colour_pane_g1

0x5ca3,	// (0x0004d2bc) call_video_g1_ParamLimits

0x5ca3,	// (0x0004d2bc) call_video_g1

0x5cb3,	// (0x0004d2cc) call_video_g2_ParamLimits

0x5cb3,	// (0x0004d2cc) call_video_g2

0x0001,

0xf21d,	// (0x00056836) call_video_g_ParamLimits

0xf21d,	// (0x00056836) call_video_g

0x5d0d,	// (0x0004d326) call_video_uplink_pane_cp1_ParamLimits

0x5d0d,	// (0x0004d326) call_video_uplink_pane_cp1

0xd219,	// (0x00054832) call_video_uplink_pane_cp2

0x5dd9,	// (0x0004d3f2) video_down_crop_pane_ParamLimits

0x5dd9,	// (0x0004d3f2) video_down_crop_pane

0x5ed7,	// (0x0004d4f0) video_down_pane_ParamLimits

0x5ed7,	// (0x0004d4f0) video_down_pane

0xd221,	// (0x0005483a) video_down_subqcif_pane_ParamLimits

0xd221,	// (0x0005483a) video_down_subqcif_pane

0xd239,	// (0x00054852) video_down_subqcif_pane_cp_ParamLimits

0xd239,	// (0x00054852) video_down_subqcif_pane_cp

0xd25f,	// (0x00054878) im_reading_pane_ParamLimits

0xd25f,	// (0x00054878) im_reading_pane

0x5ff7,	// (0x0004d610) im_writing_pane_ParamLimits

0x5ff7,	// (0x0004d610) im_writing_pane

0x6015,	// (0x0004d62e) im_reading_pane_t1

0xd279,	// (0x00054892) list_im_pane

0xd28a,	// (0x000548a3) scroll_pane_cp07

0x6069,	// (0x0004d682) im_writing_pane_t1_ParamLimits

0x6069,	// (0x0004d682) im_writing_pane_t1

0xd2a3,	// (0x000548bc) im_writing_pane_t2_ParamLimits

0xd2a3,	// (0x000548bc) im_writing_pane_t2

0x0001,

0xf227,	// (0x00056840) im_writing_pane_t_ParamLimits

0xf227,	// (0x00056840) im_writing_pane_t

0x4f1f,	// (0x0004c538) input_focus_pane_cp04

0x4f1f,	// (0x0004c538) input_focus_pane_cp05

0x607e,	// (0x0004d697) list_im_single_pane_ParamLimits

0x607e,	// (0x0004d697) list_im_single_pane

0x60a2,	// (0x0004d6bb) list_single_im_pane_t1

0xd176,	// (0x0005478f) blid_accuracy_pane

0xd176,	// (0x0005478f) blid_compass_pane

0xee90,	// (0x000564a9) main_location_t1

0xee90,	// (0x000564a9) main_location_t2

0xee90,	// (0x000564a9) main_location_t3

0x0002,

0xf573,	// (0x00056b8c) main_location_t

0x4f1f,	// (0x0004c538) aid_levels_location

0x5192,	// (0x0004c7ab) blid_accuracy_pane_g1

0x5192,	// (0x0004c7ab) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00056894) blid_accuracy_pane_g

0xd2eb,	// (0x00054904) wml_content_pane

0xd329,	// (0x00054942) wml_button_pane_ParamLimits

0xd329,	// (0x00054942) wml_button_pane

0x60b1,	// (0x0004d6ca) wml_list_single_large_pane_ParamLimits

0x60b1,	// (0x0004d6ca) wml_list_single_large_pane

0x60db,	// (0x0004d6f4) wml_list_single_medium_pane_ParamLimits

0x60db,	// (0x0004d6f4) wml_list_single_medium_pane

0x610c,	// (0x0004d725) wml_list_single_small_pane_ParamLimits

0x610c,	// (0x0004d725) wml_list_single_small_pane

0xd33d,	// (0x00054956) wml_selection_box_pane_ParamLimits

0xd33d,	// (0x00054956) wml_selection_box_pane

0xd350,	// (0x00054969) wml_list_single_pane_t1

0xd35f,	// (0x00054978) wml_list_single_medium_pane_t1

0xd36e,	// (0x00054987) wml_list_single_large_pane_t1

0xd37d,	// (0x00054996) input_focus_pane_cp02_ParamLimits

0xd37d,	// (0x00054996) input_focus_pane_cp02

0xd390,	// (0x000549a9) wml_selection_box_pane_g1

0xd399,	// (0x000549b2) wml_selection_box_pane_t1_ParamLimits

0xd399,	// (0x000549b2) wml_selection_box_pane_t1

0x517a,	// (0x0004c793) bg_wml_button_pane_ParamLimits

0x517a,	// (0x0004c793) bg_wml_button_pane

0xd3b1,	// (0x000549ca) wml_button_pane_g1

0xd3b9,	// (0x000549d2) wml_button_pane_t1

0xd3b1,	// (0x000549ca) wml_button_bg_pane_g1

0xd3c9,	// (0x000549e2) wml_button_bg_pane_g2

0xd3d1,	// (0x000549ea) wml_button_bg_pane_g3

0xd3d9,	// (0x000549f2) wml_button_bg_pane_g4

0xd3e1,	// (0x000549fa) wml_button_bg_pane_g5

0xd3e9,	// (0x00054a02) wml_button_bg_pane_g6

0xd3f1,	// (0x00054a0a) wml_button_bg_pane_g7

0xd3f9,	// (0x00054a12) wml_button_bg_pane_g8

0xd401,	// (0x00054a1a) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00056845) wml_button_bg_pane_g

0x6146,	// (0x0004d75f) bg_list_pane_cp02

0xd409,	// (0x00054a22) mce_header_pane_ParamLimits

0xd409,	// (0x00054a22) mce_header_pane

0xd41f,	// (0x00054a38) mce_icon_pane

0xd41f,	// (0x00054a38) mce_image_pane

0xd428,	// (0x00054a41) mce_text_pane_ParamLimits

0xd428,	// (0x00054a41) mce_text_pane

0x6150,	// (0x0004d769) scroll_pane_cp03

0xd321,	// (0x0005493a) scroll_pane_cp04

0xd43b,	// (0x00054a54) scroll_pane_cp05_ParamLimits

0xd43b,	// (0x00054a54) scroll_pane_cp05

0x615a,	// (0x0004d773) mce_header_field_pane_ParamLimits

0x615a,	// (0x0004d773) mce_header_field_pane

0x617a,	// (0x0004d793) mce_header_field_pane_2_ParamLimits

0x617a,	// (0x0004d793) mce_header_field_pane_2

0x6190,	// (0x0004d7a9) mce_header_field_pane_3

0x6198,	// (0x0004d7b1) list_single_mce_message_pane_ParamLimits

0x6198,	// (0x0004d7b1) list_single_mce_message_pane

0x61c3,	// (0x0004d7dc) list_single_mce_smart_pane_ParamLimits

0x61c3,	// (0x0004d7dc) list_single_mce_smart_pane

0xd447,	// (0x00054a60) input_focus_pane_cp03

0xd450,	// (0x00054a69) list_header_data_pane

0x61f9,	// (0x0004d812) mce_header_field_pane_t1

0x6207,	// (0x0004d820) list_single_mce_header_pane_ParamLimits

0x6207,	// (0x0004d820) list_single_mce_header_pane

0xd458,	// (0x00054a71) list_single_mce_header_pane_t1

0xd467,	// (0x00054a80) list_single_mce_message_pane_g1

0xd46f,	// (0x00054a88) list_single_mce_message_pane_t1

0x6259,	// (0x0004d872) bg_cale_heading_pane_cp01_ParamLimits

0x6259,	// (0x0004d872) bg_cale_heading_pane_cp01

0xd47d,	// (0x00054a96) bg_cale_pane_cp02_ParamLimits

0xd47d,	// (0x00054a96) bg_cale_pane_cp02

0x62a7,	// (0x0004d8c0) cale_month_corner_pane

0x62c6,	// (0x0004d8df) cale_month_day_heading_pane_ParamLimits

0x62c6,	// (0x0004d8df) cale_month_day_heading_pane

0x632c,	// (0x0004d945) cale_month_pane_g1_ParamLimits

0x632c,	// (0x0004d945) cale_month_pane_g1

0x636f,	// (0x0004d988) cale_month_pane_g2_ParamLimits

0x636f,	// (0x0004d988) cale_month_pane_g2

0x63a7,	// (0x0004d9c0) cale_month_pane_g3_ParamLimits

0x63a7,	// (0x0004d9c0) cale_month_pane_g3

0x63f3,	// (0x0004da0c) cale_month_pane_g4_ParamLimits

0x63f3,	// (0x0004da0c) cale_month_pane_g4

0x643f,	// (0x0004da58) cale_month_pane_g5_ParamLimits

0x643f,	// (0x0004da58) cale_month_pane_g5

0x648b,	// (0x0004daa4) cale_month_pane_g6_ParamLimits

0x648b,	// (0x0004daa4) cale_month_pane_g6

0x64d7,	// (0x0004daf0) cale_month_pane_g7_ParamLimits

0x64d7,	// (0x0004daf0) cale_month_pane_g7

0x653b,	// (0x0004db54) cale_month_pane_g8_ParamLimits

0x653b,	// (0x0004db54) cale_month_pane_g8

0x659f,	// (0x0004dbb8) cale_month_pane_g9_ParamLimits

0x659f,	// (0x0004dbb8) cale_month_pane_g9

0x65fd,	// (0x0004dc16) cale_month_pane_g10_ParamLimits

0x65fd,	// (0x0004dc16) cale_month_pane_g10

0x6659,	// (0x0004dc72) cale_month_pane_g11_ParamLimits

0x6659,	// (0x0004dc72) cale_month_pane_g11

0x66ad,	// (0x0004dcc6) cale_month_pane_g12_ParamLimits

0x66ad,	// (0x0004dcc6) cale_month_pane_g12

0x6703,	// (0x0004dd1c) cale_month_pane_g13_ParamLimits

0x6703,	// (0x0004dd1c) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00056858) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00056858) cale_month_pane_g

0x6759,	// (0x0004dd72) cale_month_week_pane

0x677d,	// (0x0004dd96) grid_cale_month_pane_ParamLimits

0x677d,	// (0x0004dd96) grid_cale_month_pane

0x67d6,	// (0x0004ddef) cale_month_day_heading_pane_t1

0x685c,	// (0x0004de75) cale_month_day_heading_pane_t2

0x68d5,	// (0x0004deee) cale_month_day_heading_pane_t3

0x694e,	// (0x0004df67) cale_month_day_heading_pane_t4

0x69c7,	// (0x0004dfe0) cale_month_day_heading_pane_t5

0x6a40,	// (0x0004e059) cale_month_day_heading_pane_t6

0x6ab9,	// (0x0004e0d2) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00056873) cale_month_day_heading_pane_t

0xd124,	// (0x0005473d) bg_cale_side_pane_cp01

0x6b4a,	// (0x0004e163) cale_month_week_pane_t1

0x6b63,	// (0x0004e17c) cale_month_week_pane_t2

0x6b7c,	// (0x0004e195) cale_month_week_pane_t3

0x6b95,	// (0x0004e1ae) cale_month_week_pane_t4

0x6bae,	// (0x0004e1c7) cale_month_week_pane_t5

0x6bcf,	// (0x0004e1e8) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00056882) cale_month_week_pane_t

0x6bf0,	// (0x0004e209) cell_cale_month_pane_ParamLimits

0x6bf0,	// (0x0004e209) cell_cale_month_pane

0x6d12,	// (0x0004e32b) cell_cale_month_pane_g1

0x6d1e,	// (0x0004e337) cell_cale_month_pane_t1_ParamLimits

0x6d1e,	// (0x0004e337) cell_cale_month_pane_t1

0xd132,	// (0x0005474b) grid_highlight_pane_cp08

0x5192,	// (0x0004c7ab) main_smil_g1

0x6d4a,	// (0x0004e363) smil_status_pane

0xd4bc,	// (0x00054ad5) smil_text_pane

0xeda8,	// (0x000563c1) bg_popup_call3_rect_pane_g8

0xedb0,	// (0x000563c9) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x00056b20) bg_popup_call3_rect_pane_g

0xef67,	// (0x00056580) smil_status_volume_pane_g1

0xd4c6,	// (0x00054adf) smil_status_pane_t1

0x7eea,	// (0x0004f503) volume_smil_pane

0xd4dd,	// (0x00054af6) list_smil_text_pane

0x6d5d,	// (0x0004e376) scroll_pane_cp011

0x6d68,	// (0x0004e381) smil_text_list_pane_t1_ParamLimits

0x6d68,	// (0x0004e381) smil_text_list_pane_t1

0x6de0,	// (0x0004e3f9) aid_volume_smil_ParamLimits

0x6de0,	// (0x0004e3f9) aid_volume_smil

0x5192,	// (0x0004c7ab) smil_volume_pane_g1

0x5192,	// (0x0004c7ab) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00056894) smil_volume_pane_g

0x55d6,	// (0x0004cbef) listscroll_cale_day_pane

0xd4e7,	// (0x00054b00) bg_cale_pane

0xd4ff,	// (0x00054b18) list_cale_pane

0xd522,	// (0x00054b3b) scroll_pane_cp09

0xd533,	// (0x00054b4c) cale_bg_pane_g1

0xd53b,	// (0x00054b54) cale_bg_pane_g2

0xd543,	// (0x00054b5c) cale_bg_pane_g3

0xd54b,	// (0x00054b64) cale_bg_pane_g4

0xd553,	// (0x00054b6c) cale_bg_pane_g5

0xd55b,	// (0x00054b74) cale_bg_pane_g6

0xd563,	// (0x00054b7c) cale_bg_pane_g7

0xd56b,	// (0x00054b84) cale_bg_pane_g8

0xd573,	// (0x00054b8c) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00056899) cale_bg_pane_g

0x6e02,	// (0x0004e41b) list_cale_time_pane_ParamLimits

0x6e02,	// (0x0004e41b) list_cale_time_pane

0xd583,	// (0x00054b9c) list_cale_time_pane_g1_ParamLimits

0xd583,	// (0x00054b9c) list_cale_time_pane_g1

0xd58f,	// (0x00054ba8) list_cale_time_pane_g2_ParamLimits

0xd58f,	// (0x00054ba8) list_cale_time_pane_g2

0x6e24,	// (0x0004e43d) list_cale_time_pane_g3_ParamLimits

0x6e24,	// (0x0004e43d) list_cale_time_pane_g3

0x6e32,	// (0x0004e44b) list_cale_time_pane_g4_ParamLimits

0x6e32,	// (0x0004e44b) list_cale_time_pane_g4

0x6e40,	// (0x0004e459) list_cale_time_pane_g5_ParamLimits

0x6e40,	// (0x0004e459) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x000568ac) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x000568ac) list_cale_time_pane_g

0xd5a9,	// (0x00054bc2) list_cale_time_pane_t1_ParamLimits

0xd5a9,	// (0x00054bc2) list_cale_time_pane_t1

0xd5d1,	// (0x00054bea) list_cale_time_pane_t2_ParamLimits

0xd5d1,	// (0x00054bea) list_cale_time_pane_t2

0x70e3,	// (0x0004e6fc) aid_blid_cardinal_pane

0x7125,	// (0x0004e73e) compass_pane_t4

0xd5f9,	// (0x00054c12) list_cale_time_pane_t4_ParamLimits

0xd5f9,	// (0x00054c12) list_cale_time_pane_t4

0x7133,	// (0x0004e74c) compass_pane_t5

0x7143,	// (0x0004e75c) compass_pane_t6

0x7151,	// (0x0004e76a) compass_pane_t7

0xdaae,	// (0x000550c7) navi_pane_cc_t1

0xdc8b,	// (0x000552a4) aid_phob_thumbnail_center_pane

0x75cf,	// (0x0004ebe8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x000568b9) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x000568b9) list_cale_time_pane_t

0x4b52,	// (0x0004c16b) bg_popup_window_pane_cp02_ParamLimits

0x4b52,	// (0x0004c16b) bg_popup_window_pane_cp02

0xd621,	// (0x00054c3a) heading_pane_cp01_ParamLimits

0xd621,	// (0x00054c3a) heading_pane_cp01

0xd62d,	// (0x00054c46) loc_req_pane_ParamLimits

0xd62d,	// (0x00054c46) loc_req_pane

0xd63d,	// (0x00054c56) loc_type_pane_ParamLimits

0xd63d,	// (0x00054c56) loc_type_pane

0xd64f,	// (0x00054c68) loc_type_pane_t1_ParamLimits

0xd64f,	// (0x00054c68) loc_type_pane_t1

0xd661,	// (0x00054c7a) loc_type_pane_t2_ParamLimits

0xd661,	// (0x00054c7a) loc_type_pane_t2

0xd673,	// (0x00054c8c) loc_type_pane_t3_ParamLimits

0xd673,	// (0x00054c8c) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x000568c0) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x000568c0) loc_type_pane_t

0xd685,	// (0x00054c9e) list_loc_req_pane

0xd68f,	// (0x00054ca8) scroll_pane_cp012

0x6e4e,	// (0x0004e467) list_single_loc_request_popup_menu_pane_ParamLimits

0x6e4e,	// (0x0004e467) list_single_loc_request_popup_menu_pane

0xd69a,	// (0x00054cb3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd69a,	// (0x00054cb3) list_single_loc_request_popup_menu_pane_g1

0xd6a6,	// (0x00054cbf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd6a6,	// (0x00054cbf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x000568c7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x000568c7) list_single_loc_request_popup_menu_pane_g

0xd6b2,	// (0x00054ccb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd6b2,	// (0x00054ccb) list_single_loc_request_popup_menu_pane_t1

0x6e60,	// (0x0004e479) bg_popup_window_pane_cp03_ParamLimits

0x6e60,	// (0x0004e479) bg_popup_window_pane_cp03

0x6e6e,	// (0x0004e487) heading_loc_req_pane_ParamLimits

0x6e6e,	// (0x0004e487) heading_loc_req_pane

0x6e7a,	// (0x0004e493) popup_dyc_status_message_window_g1_ParamLimits

0x6e7a,	// (0x0004e493) popup_dyc_status_message_window_g1

0x6e86,	// (0x0004e49f) popup_dyc_status_message_window_t1_ParamLimits

0x6e86,	// (0x0004e49f) popup_dyc_status_message_window_t1

0x6e98,	// (0x0004e4b1) popup_dyc_status_message_window_t2_ParamLimits

0x6e98,	// (0x0004e4b1) popup_dyc_status_message_window_t2

0x6eaa,	// (0x0004e4c3) popup_dyc_status_message_window_t3_ParamLimits

0x6eaa,	// (0x0004e4c3) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x000568cc) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x000568cc) popup_dyc_status_message_window_t

0x4f1f,	// (0x0004c538) bg_heading_pane_cp01

0xd6c8,	// (0x00054ce1) heading_loc_req_pane_g1

0xd6d0,	// (0x00054ce9) heading_loc_req_pane_g2

0xd6d8,	// (0x00054cf1) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x000568d3) heading_loc_req_pane_g

0xd6e0,	// (0x00054cf9) heading_loc_req_pane_t1

0xd6ff,	// (0x00054d18) bg_popup_sub_pane_cp01_ParamLimits

0xd6ff,	// (0x00054d18) bg_popup_sub_pane_cp01

0xd70d,	// (0x00054d26) popup_cale_events_window_g1_ParamLimits

0xd70d,	// (0x00054d26) popup_cale_events_window_g1

0xd72d,	// (0x00054d46) popup_cale_events_window_g2_ParamLimits

0xd72d,	// (0x00054d46) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x000568f5) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x000568f5) popup_cale_events_window_g

0xd74d,	// (0x00054d66) popup_cale_events_window_t1_ParamLimits

0xd74d,	// (0x00054d66) popup_cale_events_window_t1

0xd75f,	// (0x00054d78) popup_cale_events_window_t2_ParamLimits

0xd75f,	// (0x00054d78) popup_cale_events_window_t2

0xd79d,	// (0x00054db6) popup_cale_events_window_t3_ParamLimits

0xd79d,	// (0x00054db6) popup_cale_events_window_t3

0xd7d7,	// (0x00054df0) popup_cale_events_window_t4_ParamLimits

0xd7d7,	// (0x00054df0) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x000568fa) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x000568fa) popup_cale_events_window_t

0x6ed4,	// (0x0004e4ed) call_type_pane

0xd80d,	// (0x00054e26) popup_call_status_window_g1

0x6ee0,	// (0x0004e4f9) popup_call_status_window_g2

0x6eec,	// (0x0004e505) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x00056903) popup_call_status_window_g

0xd81b,	// (0x00054e34) call_type_pane_g1

0xd824,	// (0x00054e3d) call_type_pane_g2

0x0001,

0xf2f1,	// (0x0005690a) call_type_pane_g

0x4f1f,	// (0x0004c538) bg_popup_sub_pane_cp02

0xd82d,	// (0x00054e46) listscroll_popup_wml_pane

0xd835,	// (0x00054e4e) list_wml_pane

0xd83f,	// (0x00054e58) scroll_pane_cp013

0xd84a,	// (0x00054e63) list_single_graphic_popup_wml_pane_ParamLimits

0xd84a,	// (0x00054e63) list_single_graphic_popup_wml_pane

0x5192,	// (0x0004c7ab) list_single_graphic_popup_wml_pane_g1

0xd85e,	// (0x00054e77) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x0005690f) list_single_graphic_popup_wml_pane_g

0xd866,	// (0x00054e7f) list_single_graphic_popup_wml_pane_t1

0xd87c,	// (0x00054e95) aid_call_pane

0x5172,	// (0x0004c78b) popup_clock_analogue_window_g1

0x5172,	// (0x0004c78b) popup_clock_analogue_window_g2

0x6ef8,	// (0x0004e511) popup_clock_analogue_window_g3

0x6ef8,	// (0x0004e511) popup_clock_analogue_window_g4

0x5192,	// (0x0004c7ab) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x00056914) popup_clock_analogue_window_g

0x6f00,	// (0x0004e519) popup_clock_analogue_window_t1

0x6f0e,	// (0x0004e527) clock_digital_number_pane_ParamLimits

0x6f0e,	// (0x0004e527) clock_digital_number_pane

0x6f1a,	// (0x0004e533) clock_digital_number_pane_cp02_ParamLimits

0x6f1a,	// (0x0004e533) clock_digital_number_pane_cp02

0x6f26,	// (0x0004e53f) clock_digital_number_pane_cp03_ParamLimits

0x6f26,	// (0x0004e53f) clock_digital_number_pane_cp03

0x6f32,	// (0x0004e54b) clock_digital_number_pane_cp04_ParamLimits

0x6f32,	// (0x0004e54b) clock_digital_number_pane_cp04

0x6f42,	// (0x0004e55b) clock_digital_separator_pane_ParamLimits

0x6f42,	// (0x0004e55b) clock_digital_separator_pane

0x6f4e,	// (0x0004e567) popup_clock_digital_window_t1

0x5192,	// (0x0004c7ab) clock_digital_number_pane_g1

0x5192,	// (0x0004c7ab) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00056894) clock_digital_number_pane_g

0x5192,	// (0x0004c7ab) clock_digital_separator_pane_g1

0x5192,	// (0x0004c7ab) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00056894) clock_digital_separator_pane_g

0x4f1f,	// (0x0004c538) bg_popup_window_pane_cp04

0xd884,	// (0x00054e9d) heading_pane_cp03

0xd176,	// (0x0005478f) listscroll_popup_gms_pane

0x4f1f,	// (0x0004c538) grid_large_graphic_popup_pane

0xd88d,	// (0x00054ea6) listscroll_popup_gms_pane_g1

0xd896,	// (0x00054eaf) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x0005691f) listscroll_popup_gms_pane_g

0xd89f,	// (0x00054eb8) scroll_pane_cp014

0x51f5,	// (0x0004c80e) cell_large_graphic_popup_pane_ParamLimits

0x51f5,	// (0x0004c80e) cell_large_graphic_popup_pane

0xcf52,	// (0x0005456b) cell_large_graphic_popup_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) cell_large_graphic_popup_pane_g1

0xd8a8,	// (0x00054ec1) cell_large_graphic_popup_pane_g2_ParamLimits

0xd8a8,	// (0x00054ec1) cell_large_graphic_popup_pane_g2

0xd8b6,	// (0x00054ecf) cell_large_graphic_popup_pane_g3_ParamLimits

0xd8b6,	// (0x00054ecf) cell_large_graphic_popup_pane_g3

0xd8c4,	// (0x00054edd) cell_large_graphic_popup_pane_g4_ParamLimits

0xd8c4,	// (0x00054edd) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x00056924) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x00056924) cell_large_graphic_popup_pane_g

0x4f1f,	// (0x0004c538) grid_highlight_pane_cp010

0x5192,	// (0x0004c7ab) bg_popup_call_pane_g1

0xd8d5,	// (0x00054eee) list_single_graphic_popup_conf_pane_ParamLimits

0xd8d5,	// (0x00054eee) list_single_graphic_popup_conf_pane

0xd8e8,	// (0x00054f01) list_highlight_pane_cp01

0xd8f1,	// (0x00054f0a) list_single_graphic_popup_conf_pane_g1

0xd8f9,	// (0x00054f12) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x0005692d) list_single_graphic_popup_conf_pane_g

0xd901,	// (0x00054f1a) list_single_graphic_popup_conf_pane_t1

0xd90f,	// (0x00054f28) linegrid_cams_pane_g1

0x6f6b,	// (0x0004e584) linegrid_cams_pane_g2

0xd0b5,	// (0x000546ce) linegrid_cams_pane_g3

0xd918,	// (0x00054f31) linegrid_cams_pane_g4

0x6f74,	// (0x0004e58d) linegrid_cams_pane_g5

0x6f7d,	// (0x0004e596) linegrid_cams_pane_g6

0xd165,	// (0x0005477e) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x00056932) linegrid_cams_pane_g

0xd921,	// (0x00054f3a) popup_clock_analogue_window

0xd921,	// (0x00054f3a) popup_clock_digital_window

0x4f1f,	// (0x0004c538) popup_phob_thumbnail_window

0x5192,	// (0x0004c7ab) call_video_uplink_pane_g1

0xd92a,	// (0x00054f43) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x00056941) call_video_uplink_pane_g

0xd932,	// (0x00054f4b) video_uplink_pane

0xd93a,	// (0x00054f53) mce_image_pane_g1

0x6f86,	// (0x0004e59f) mce_image_pane_g2

0x6f90,	// (0x0004e5a9) mce_image_pane_g3

0x6f98,	// (0x0004e5b1) mce_image_pane_g4

0x6fa0,	// (0x0004e5b9) mce_image_pane_g5

0x0004,

0xf32d,	// (0x00056946) mce_image_pane_g

0xd944,	// (0x00054f5d) control_top_pane_stacon_cp01_ParamLimits

0xd944,	// (0x00054f5d) control_top_pane_stacon_cp01

0xd958,	// (0x00054f71) uni_indicator_pane_stacon_cp01_ParamLimits

0xd958,	// (0x00054f71) uni_indicator_pane_stacon_cp01

0xd969,	// (0x00054f82) bg_popup_sub_pane_cp03

0xd973,	// (0x00054f8c) chi_dic_find_pane

0x6fa8,	// (0x0004e5c1) listscroll_chi_dic_pane

0xd97b,	// (0x00054f94) main_pane_chidic_g1

0xd983,	// (0x00054f9c) chi_dic_find_pane_t1

0xd991,	// (0x00054faa) find_chidic_pane

0xd99a,	// (0x00054fb3) chi_dic_list_pane_ParamLimits

0xd99a,	// (0x00054fb3) chi_dic_list_pane

0xd9ab,	// (0x00054fc4) scroll_pane_cp020

0xd9b3,	// (0x00054fcc) find_chidic_pane_t1

0x4f1f,	// (0x0004c538) input_focus_pane_cp06

0x6fbc,	// (0x0004e5d5) list_chi_dic_pane_ParamLimits

0x6fbc,	// (0x0004e5d5) list_chi_dic_pane

0x6fd6,	// (0x0004e5ef) list_chi_dic_pane_t1_ParamLimits

0x6fd6,	// (0x0004e5ef) list_chi_dic_pane_t1

0x4f1f,	// (0x0004c538) list_highlight_pane_cp020

0xd9c2,	// (0x00054fdb) bg_cale_heading_pane_g1

0x6fe9,	// (0x0004e602) bg_cale_heading_pane_g2

0x6ff1,	// (0x0004e60a) bg_cale_heading_pane_g3

0x6ff9,	// (0x0004e612) bg_cale_heading_pane_g4

0x7003,	// (0x0004e61c) bg_cale_heading_pane_g5

0x700d,	// (0x0004e626) bg_cale_heading_pane_g6

0x7015,	// (0x0004e62e) bg_cale_heading_pane_g7

0x701d,	// (0x0004e636) bg_cale_heading_pane_g8

0x7027,	// (0x0004e640) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x00056951) bg_cale_heading_pane_g

0xd9c2,	// (0x00054fdb) bg_cale_side_pane_g1

0x7031,	// (0x0004e64a) bg_cale_side_pane_g2

0x703b,	// (0x0004e654) bg_cale_side_pane_g3

0x7045,	// (0x0004e65e) bg_cale_side_pane_g4

0x704f,	// (0x0004e668) bg_cale_side_pane_g5

0x7059,	// (0x0004e672) bg_cale_side_pane_g6

0x7063,	// (0x0004e67c) bg_cale_side_pane_g7

0x706d,	// (0x0004e686) bg_cale_side_pane_g8

0x7075,	// (0x0004e68e) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x00056964) bg_cale_side_pane_g

0x707d,	// (0x0004e696) popup_call_status_window_ParamLimits

0x707d,	// (0x0004e696) popup_call_status_window

0xd9ca,	// (0x00054fe3) stacon_top_pane

0xd9d2,	// (0x00054feb) status_pane_ParamLimits

0xd9d2,	// (0x00054feb) status_pane

0xd9e7,	// (0x00055000) status_small_pane

0xd9ef,	// (0x00055008) control_pane

0x4f1f,	// (0x0004c538) stacon_bottom_pane

0xd9f7,	// (0x00055010) list_single_mce_smart_pane_t1_ParamLimits

0xd9f7,	// (0x00055010) list_single_mce_smart_pane_t1

0xda0a,	// (0x00055023) list_single_mce_smart_pane_t2_ParamLimits

0xda0a,	// (0x00055023) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x00056977) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x00056977) list_single_mce_smart_pane_t

0x7089,	// (0x0004e6a2) compass_pane

0x7095,	// (0x0004e6ae) main_location2_pane_t1

0x70a9,	// (0x0004e6c2) main_location2_pane_t2

0x70bd,	// (0x0004e6d6) main_location2_pane_t3

0x0003,

0xf363,	// (0x0005697c) main_location2_pane_t

0xda29,	// (0x00055042) compass_pane_g1_ParamLimits

0xda29,	// (0x00055042) compass_pane_g1

0x7107,	// (0x0004e720) compass_pane_t1

0x7116,	// (0x0004e72f) compass_pane_t2

0x0005,

0xf36c,	// (0x00056985) compass_pane_t

0x7161,	// (0x0004e77a) text_secondary_cp61

0xdaa5,	// (0x000550be) navi_pane_cams_g5

0xdb21,	// (0x0005513a) navi_pane_im_t1

0xdb2f,	// (0x00055148) navi_pane_mp_g1_ParamLimits

0xdb2f,	// (0x00055148) navi_pane_mp_g1

0xdb43,	// (0x0005515c) navi_pane_mp_g2_ParamLimits

0xdb43,	// (0x0005515c) navi_pane_mp_g2

0xdb4f,	// (0x00055168) navi_pane_mp_g3_ParamLimits

0xdb4f,	// (0x00055168) navi_pane_mp_g3

0x0002,

0xf380,	// (0x00056999) navi_pane_mp_g_ParamLimits

0xf380,	// (0x00056999) navi_pane_mp_g

0xdb5b,	// (0x00055174) navi_pane_mp_t1

0xdb69,	// (0x00055182) navi_pane_mp_t2

0x0002,

0xf387,	// (0x000569a0) navi_pane_mp_t

0xdbd4,	// (0x000551ed) navi_pane_vt_g1

0xdb5b,	// (0x00055174) navi_pane_vt_t1

0xdbdc,	// (0x000551f5) navi_slider_pane

0xd176,	// (0x0005478f) zooming_pane

0xdbec,	// (0x00055205) navi_slider_pane_g1

0x719c,	// (0x0004e7b5) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x000569a7) navi_slider_pane_g

0xdc10,	// (0x00055229) aid_levels_zoom

0xdc18,	// (0x00055231) zooming_pane_g1

0xdc20,	// (0x00055239) zooming_pane_g2

0xdc20,	// (0x00055239) zooming_pane_g3

0x0002,

0xf39d,	// (0x000569b6) zooming_pane_g

0xdc28,	// (0x00055241) level_10_zoom

0xdc31,	// (0x0005524a) level_11_zoom

0xdc3a,	// (0x00055253) level_1_zoom

0xdc43,	// (0x0005525c) level_2_zoom

0xdc4c,	// (0x00055265) level_3_zoom

0xdc55,	// (0x0005526e) level_4_zoom

0xdc5e,	// (0x00055277) level_5_zoom

0xdc67,	// (0x00055280) level_6_zoom

0xdc70,	// (0x00055289) level_7_zoom

0xdc79,	// (0x00055292) level_8_zoom

0xdc82,	// (0x0005529b) level_9_zoom

0xdc93,	// (0x000552ac) popup_phob_thumbnail_window_g1

0xdc9b,	// (0x000552b4) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x000569bd) popup_phob_thumbnail_window_g

0x7b89,	// (0x0004f1a2) level_1_location

0x7b91,	// (0x0004f1aa) level_2_location

0x7b99,	// (0x0004f1b2) level_3_location

0x7ba3,	// (0x0004f1bc) level_4_location

0xd176,	// (0x0005478f) level_5_location

0x71ae,	// (0x0004e7c7) mce_icon_pane_g1

0x71b6,	// (0x0004e7cf) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x000569c2) mce_icon_pane_g

0x71be,	// (0x0004e7d7) main_mup_pane_g1_ParamLimits

0x71be,	// (0x0004e7d7) main_mup_pane_g1

0xcf6e,	// (0x00054587) main_mup_pane_g2_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g2

0xcf6e,	// (0x00054587) main_mup_pane_g3_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g3

0xcf6e,	// (0x00054587) main_mup_pane_g4_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g4

0xcf6e,	// (0x00054587) main_mup_pane_g5_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g5

0xcf6e,	// (0x00054587) main_mup_pane_g6_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g6

0xcf6e,	// (0x00054587) main_mup_pane_g7_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g7

0xcf6e,	// (0x00054587) main_mup_pane_g8_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g8

0xcf6e,	// (0x00054587) main_mup_pane_g9_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g9

0xcf6e,	// (0x00054587) main_mup_pane_g10_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g10

0xcf6e,	// (0x00054587) main_mup_pane_g11_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g11

0xcf60,	// (0x00054579) main_mup_pane_g12_ParamLimits

0xcf60,	// (0x00054579) main_mup_pane_g12

0xcf6e,	// (0x00054587) main_mup_pane_g13_ParamLimits

0xcf6e,	// (0x00054587) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x000569c7) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x000569c7) main_mup_pane_g

0xcf7c,	// (0x00054595) main_mup_pane_t1_ParamLimits

0xcf7c,	// (0x00054595) main_mup_pane_t1

0xcf7c,	// (0x00054595) main_mup_pane_t2_ParamLimits

0xcf7c,	// (0x00054595) main_mup_pane_t2

0xcf7c,	// (0x00054595) main_mup_pane_t3_ParamLimits

0xcf7c,	// (0x00054595) main_mup_pane_t3

0xd17e,	// (0x00054797) main_mup_pane_t4_ParamLimits

0xd17e,	// (0x00054797) main_mup_pane_t4

0xd17e,	// (0x00054797) main_mup_pane_t5_ParamLimits

0xd17e,	// (0x00054797) main_mup_pane_t5

0xd1c6,	// (0x000547df) main_mup_pane_t6_ParamLimits

0xd1c6,	// (0x000547df) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x000569e2) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x000569e2) main_mup_pane_t

0x519c,	// (0x0004c7b5) mup_progress_pane_ParamLimits

0x519c,	// (0x0004c7b5) mup_progress_pane

0x0ab9,	// (0x000480d2) mup_visualizer_pane_ParamLimits

0x0ab9,	// (0x000480d2) mup_visualizer_pane

0x0ab9,	// (0x000480d2) mup_volume_pane_ParamLimits

0x0ab9,	// (0x000480d2) mup_volume_pane

0xcf60,	// (0x00054579) mup_visualizer_pane_g1_ParamLimits

0xcf60,	// (0x00054579) mup_visualizer_pane_g1

0xdca3,	// (0x000552bc) mup_visualizer_pane_g2_ParamLimits

0xdca3,	// (0x000552bc) mup_visualizer_pane_g2

0xcf52,	// (0x0005456b) mup_visualizer_pane_g3_ParamLimits

0xcf52,	// (0x0005456b) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x000569ef) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x000569ef) mup_visualizer_pane_g

0xd1ac,	// (0x000547c5) mup_volume_pane_g1

0xd1ac,	// (0x000547c5) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x000569f6) mup_volume_pane_g

0xd1ac,	// (0x000547c5) mup_progress_pane_g1

0xd1ac,	// (0x000547c5) mup_progress_pane_g2

0xd1ac,	// (0x000547c5) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x000569fb) mup_progress_pane_g

0x4f1f,	// (0x0004c538) bg_popup_window_pane_cp05

0xdcb1,	// (0x000552ca) heading_pane_cp02_ParamLimits

0xdcb1,	// (0x000552ca) heading_pane_cp02

0xdccb,	// (0x000552e4) list_popup_blid_pane

0xdcd3,	// (0x000552ec) list_blid_sat_info_pane_ParamLimits

0xdcd3,	// (0x000552ec) list_blid_sat_info_pane

0xdce6,	// (0x000552ff) list_blid_sat_info_pane_g1

0xdcee,	// (0x00055307) list_blid_sat_info_pane_t1

0x72bb,	// (0x0004e8d4) mup_equalizer_pane_ParamLimits

0x72bb,	// (0x0004e8d4) mup_equalizer_pane

0x72dc,	// (0x0004e8f5) mup_equalizer_pane_cp1_ParamLimits

0x72dc,	// (0x0004e8f5) mup_equalizer_pane_cp1

0x72fd,	// (0x0004e916) mup_equalizer_pane_cp2_ParamLimits

0x72fd,	// (0x0004e916) mup_equalizer_pane_cp2

0x731e,	// (0x0004e937) mup_equalizer_pane_cp3_ParamLimits

0x731e,	// (0x0004e937) mup_equalizer_pane_cp3

0x733f,	// (0x0004e958) mup_equalizer_pane_cp4_ParamLimits

0x733f,	// (0x0004e958) mup_equalizer_pane_cp4

0x7360,	// (0x0004e979) mup_equalizer_pane_cp5

0x7376,	// (0x0004e98f) mup_equalizer_pane_cp6

0x738e,	// (0x0004e9a7) mup_equalizer_pane_cp7

0xee28,	// (0x00056441) bg_popup_call_poc_act_pane_g9

0xee30,	// (0x00056449) bg_popup_call_poc_act_pane_g10

0xee38,	// (0x00056451) bg_popup_call_poc_act_pane_g11

0x000a,

0x517a,	// (0x0004c793) mup_scale_pane

0x5192,	// (0x0004c7ab) mup_scale_pane_g1

0xdcfc,	// (0x00055315) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x00056a17) mup_scale_pane_g

0xdd20,	// (0x00055339) msg_data_pane

0xdd28,	// (0x00055341) scroll_pane_cp017

0x73b8,	// (0x0004e9d1) bg_list_pane_cp04_ParamLimits

0x73b8,	// (0x0004e9d1) bg_list_pane_cp04

0xdd30,	// (0x00055349) msg_data_pane_g1

0x73d4,	// (0x0004e9ed) msg_data_pane_g2

0x73de,	// (0x0004e9f7) msg_data_pane_g3

0x73e6,	// (0x0004e9ff) msg_data_pane_g4

0x73ee,	// (0x0004ea07) msg_data_pane_g5

0x73f6,	// (0x0004ea0f) msg_data_pane_g6

0x73fe,	// (0x0004ea17) msg_data_pane_g7

0x0006,

0xf40d,	// (0x00056a26) msg_data_pane_g

0x7406,	// (0x0004ea1f) msg_text_pane_ParamLimits

0x7406,	// (0x0004ea1f) msg_text_pane

0x7455,	// (0x0004ea6e) qrid_highlight_pane_cp011_ParamLimits

0x7455,	// (0x0004ea6e) qrid_highlight_pane_cp011

0x4f1f,	// (0x0004c538) msg_body_pane

0x4f1f,	// (0x0004c538) msg_header_pane

0xdd41,	// (0x0005535a) input_focus_pane_cp07

0x747b,	// (0x0004ea94) msg_header_pane_t1_ParamLimits

0x747b,	// (0x0004ea94) msg_header_pane_t1

0x7491,	// (0x0004eaaa) msg_header_pane_t2_ParamLimits

0x7491,	// (0x0004eaaa) msg_header_pane_t2

0x0001,

0xf421,	// (0x00056a3a) msg_header_pane_t_ParamLimits

0xf421,	// (0x00056a3a) msg_header_pane_t

0xdd56,	// (0x0005536f) msg_body_pane_g1

0x74a8,	// (0x0004eac1) msg_body_pane_t1_ParamLimits

0x74a8,	// (0x0004eac1) msg_body_pane_t1

0x09ad,	// (0x00047fc6) msg_body_pane_t2_ParamLimits

0x09ad,	// (0x00047fc6) msg_body_pane_t2

0x09bf,	// (0x00047fd8) msg_body_pane_t3_ParamLimits

0x09bf,	// (0x00047fd8) msg_body_pane_t3

0x0002,

0xf426,	// (0x00056a3f) msg_body_pane_t_ParamLimits

0xf426,	// (0x00056a3f) msg_body_pane_t

0x752b,	// (0x0004eb44) main_viewer_pane_g1_ParamLimits

0x752b,	// (0x0004eb44) main_viewer_pane_g1

0x7537,	// (0x0004eb50) main_viewer_pane_g2_ParamLimits

0x7537,	// (0x0004eb50) main_viewer_pane_g2

0x7543,	// (0x0004eb5c) main_viewer_pane_g3_ParamLimits

0x7543,	// (0x0004eb5c) main_viewer_pane_g3

0x7554,	// (0x0004eb6d) main_viewer_pane_g4_ParamLimits

0x7554,	// (0x0004eb6d) main_viewer_pane_g4

0x7565,	// (0x0004eb7e) main_viewer_pane_g5_ParamLimits

0x7565,	// (0x0004eb7e) main_viewer_pane_g5

0x7565,	// (0x0004eb7e) main_viewer_pane_g7_ParamLimits

0x7565,	// (0x0004eb7e) main_viewer_pane_g7

0xd69a,	// (0x00054cb3) main_viewer_pane_g8_ParamLimits

0xd69a,	// (0x00054cb3) main_viewer_pane_g8

0x0007,

0xf436,	// (0x00056a4f) main_viewer_pane_g_ParamLimits

0xf436,	// (0x00056a4f) main_viewer_pane_g

0xdd5e,	// (0x00055377) viewer_content_pane_ParamLimits

0xdd5e,	// (0x00055377) viewer_content_pane

0x75a3,	// (0x0004ebbc) main_postcard_pane_g1_ParamLimits

0x75a3,	// (0x0004ebbc) main_postcard_pane_g1

0x75b1,	// (0x0004ebca) main_postcard_pane_g2_ParamLimits

0x75b1,	// (0x0004ebca) main_postcard_pane_g2

0x75bf,	// (0x0004ebd8) main_postcard_pane_g3_ParamLimits

0x75bf,	// (0x0004ebd8) main_postcard_pane_g3

0x0005,

0xf447,	// (0x00056a60) main_postcard_pane_g_ParamLimits

0xf447,	// (0x00056a60) main_postcard_pane_g

0x75cf,	// (0x0004ebe8) main_postcard_pane_g4

0xef7a,	// (0x00056593) smil_status_volume_pane_g2

0x75fb,	// (0x0004ec14) postcard_pane_ParamLimits

0x75fb,	// (0x0004ec14) postcard_pane

0xd80d,	// (0x00054e26) postcard_pane_g1_ParamLimits

0xd80d,	// (0x00054e26) postcard_pane_g1

0x762d,	// (0x0004ec46) postcard_pane_g2_ParamLimits

0x762d,	// (0x0004ec46) postcard_pane_g2

0x7639,	// (0x0004ec52) postcard_pane_g3_ParamLimits

0x7639,	// (0x0004ec52) postcard_pane_g3

0xdd6c,	// (0x00055385) postcard_pane_g4_ParamLimits

0xdd6c,	// (0x00055385) postcard_pane_g4

0x7645,	// (0x0004ec5e) postcard_pane_g5_ParamLimits

0x7645,	// (0x0004ec5e) postcard_pane_g5

0x7651,	// (0x0004ec6a) postcard_pane_g6_ParamLimits

0x7651,	// (0x0004ec6a) postcard_pane_g6

0xdd7a,	// (0x00055393) postcard_pane_g7_ParamLimits

0xdd7a,	// (0x00055393) postcard_pane_g7

0x0006,

0xf454,	// (0x00056a6d) postcard_pane_g_ParamLimits

0xf454,	// (0x00056a6d) postcard_pane_g

0x765d,	// (0x0004ec76) main_mp2_pane_g1_ParamLimits

0x765d,	// (0x0004ec76) main_mp2_pane_g1

0x7669,	// (0x0004ec82) main_mp2_pane_g2_ParamLimits

0x7669,	// (0x0004ec82) main_mp2_pane_g2

0x7675,	// (0x0004ec8e) main_mp2_pane_g3_ParamLimits

0x7675,	// (0x0004ec8e) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00056a7c) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00056a7c) main_mp2_pane_g

0x7681,	// (0x0004ec9a) main_mp2_pane_t1_ParamLimits

0x7681,	// (0x0004ec9a) main_mp2_pane_t1

0x7698,	// (0x0004ecb1) main_mp2_pane_t2_ParamLimits

0x7698,	// (0x0004ecb1) main_mp2_pane_t2

0x76ac,	// (0x0004ecc5) main_mp2_pane_t3_ParamLimits

0x76ac,	// (0x0004ecc5) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x00056a83) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x00056a83) main_mp2_pane_t

0xdd88,	// (0x000553a1) pec_content_pane_ParamLimits

0xdd88,	// (0x000553a1) pec_content_pane

0xd321,	// (0x0005493a) scroll_pane_cp015

0xdd9a,	// (0x000553b3) pec_attribute_pane_ParamLimits

0xdd9a,	// (0x000553b3) pec_attribute_pane

0x76be,	// (0x0004ecd7) pec_content_pane_g1_ParamLimits

0x76be,	// (0x0004ecd7) pec_content_pane_g1

0xddaa,	// (0x000553c3) pec_content_pane_t1_ParamLimits

0xddaa,	// (0x000553c3) pec_content_pane_t1

0xddbc,	// (0x000553d5) pec_content_pane_t2_ParamLimits

0xddbc,	// (0x000553d5) pec_content_pane_t2

0x0001,

0xf471,	// (0x00056a8a) pec_content_pane_t_ParamLimits

0xf471,	// (0x00056a8a) pec_content_pane_t

0x76ca,	// (0x0004ece3) list_single_graphic_pane_cp01_ParamLimits

0x76ca,	// (0x0004ece3) list_single_graphic_pane_cp01

0x517a,	// (0x0004c793) bg_popup_sub_pane_cp04

0xddce,	// (0x000553e7) popup_mup_playback_window_g1

0xddda,	// (0x000553f3) popup_mup_playback_window_t1

0xddef,	// (0x00055408) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x00056a8f) popup_mup_playback_window_t

0xde26,	// (0x0005543f) main_image_pane_g1_ParamLimits

0xde26,	// (0x0005543f) main_image_pane_g1

0xde69,	// (0x00055482) scroll_pane_cp018_ParamLimits

0xde69,	// (0x00055482) scroll_pane_cp018

0xde81,	// (0x0005549a) scroll_pane_cp016_ParamLimits

0xde81,	// (0x0005549a) scroll_pane_cp016

0x7763,	// (0x0004ed7c) smil2_image_pane_ParamLimits

0x7763,	// (0x0004ed7c) smil2_image_pane

0x7793,	// (0x0004edac) smil2_root_pane_ParamLimits

0x7793,	// (0x0004edac) smil2_root_pane

0x77bf,	// (0x0004edd8) smil2_text_pane_ParamLimits

0x77bf,	// (0x0004edd8) smil2_text_pane

0x4f1f,	// (0x0004c538) bg_list_pane_cp06

0xdebd,	// (0x000554d6) grid_radio_pane

0x4f1f,	// (0x0004c538) bg_popup_window_pane_cp06

0xdec5,	// (0x000554de) main_fmradio_pane_t1

0xee40,	// (0x00056459) heading_pane_cp04

0xded3,	// (0x000554ec) main_fmradio_pane_t2

0xee48,	// (0x00056461) popup_cale_lunar_info_window_g1

0xdee1,	// (0x000554fa) main_fmradio_pane_t3

0xee50,	// (0x00056469) popup_cale_lunar_info_window_g2

0xdeef,	// (0x00055508) main_fmradio_pane_t4

0x0001,

0xdefd,	// (0x00055516) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x00056b6f) popup_cale_lunar_info_window_g

0xf48b,	// (0x00056aa4) main_fmradio_pane_t

0xdf0b,	// (0x00055524) wait_bar_pane_cp03

0xdf13,	// (0x0005552c) cell_fmradio_pane_ParamLimits

0xdf13,	// (0x0005552c) cell_fmradio_pane

0xdd7a,	// (0x00055393) cell_fmradio_pane_g1_ParamLimits

0xdd7a,	// (0x00055393) cell_fmradio_pane_g1

0x4f1f,	// (0x0004c538) grid_highlight_pane_cp011

0xdf26,	// (0x0005553f) poc_content_pane_ParamLimits

0xdf26,	// (0x0005553f) poc_content_pane

0xdf38,	// (0x00055551) scroll_pane_cp019

0x77ff,	// (0x0004ee18) popup_call_poc_act_window_ParamLimits

0x77ff,	// (0x0004ee18) popup_call_poc_act_window

0x780c,	// (0x0004ee25) popup_call_poc_inact_window_ParamLimits

0x780c,	// (0x0004ee25) popup_call_poc_inact_window

0xf52d,	// (0x00056b46) bg_popup_call_poc_act_pane_g

0xedb8,	// (0x000563d1) bg_popup_call_poc_inact_pane_g1

0xedc0,	// (0x000563d9) bg_popup_call_poc_inact_pane_g2

0xdf40,	// (0x00055559) popup_call_poc_act_window_g2

0xedc8,	// (0x000563e1) bg_popup_call_poc_inact_pane_g3

0xedd0,	// (0x000563e9) bg_popup_call_poc_inact_pane_g4

0xedd8,	// (0x000563f1) bg_popup_call_poc_inact_pane_g5

0xdf48,	// (0x00055561) popup_call_poc_act_window_t1_ParamLimits

0xdf48,	// (0x00055561) popup_call_poc_act_window_t1

0xdf70,	// (0x00055589) popup_call_poc_act_window_t2_ParamLimits

0xdf70,	// (0x00055589) popup_call_poc_act_window_t2

0xdf98,	// (0x000555b1) popup_call_poc_act_window_t3_ParamLimits

0xdf98,	// (0x000555b1) popup_call_poc_act_window_t3

0xdfc0,	// (0x000555d9) popup_call_poc_act_window_t4_ParamLimits

0xdfc0,	// (0x000555d9) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x00056aaf) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x00056aaf) popup_call_poc_act_window_t

0xede0,	// (0x000563f9) bg_popup_call_poc_inact_pane_g6

0xede8,	// (0x00056401) bg_popup_call_poc_inact_pane_g7

0xedf0,	// (0x00056409) bg_popup_call_poc_inact_pane_g8

0xdfd2,	// (0x000555eb) popup_call_poc_inact_window_g2

0xedf8,	// (0x00056411) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x00056b33) bg_popup_call_poc_inact_pane_g

0xdfda,	// (0x000555f3) popup_call_poc_inact_window_t1_ParamLimits

0xdfda,	// (0x000555f3) popup_call_poc_inact_window_t1

0xdfef,	// (0x00055608) popup_call_poc_inact_window_t2_ParamLimits

0xdfef,	// (0x00055608) popup_call_poc_inact_window_t2

0xe004,	// (0x0005561d) popup_call_poc_inact_window_t3_ParamLimits

0xe004,	// (0x0005561d) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x00056ab8) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x00056ab8) popup_call_poc_inact_window_t

0xeef2,	// (0x0005650b) context_pane_ParamLimits

0x7ea1,	// (0x0004f4ba) signal_pane_ParamLimits

0xd176,	// (0x0005478f) main_call2_pane

0x7e14,	// (0x0004f42d) popup_phob_thumbnail2_window_ParamLimits

0x7e14,	// (0x0004f42d) popup_phob_thumbnail2_window

0x74d9,	// (0x0004eaf2) aid_hotspot_pointer_arrow_pane

0x74e1,	// (0x0004eafa) aid_hotspot_pointer_hand_pane

0x7b51,	// (0x0004f16a) phob_pre_status_pane_g5

0x51f5,	// (0x0004c80e) cams_zoom_pane_ParamLimits

0x51f5,	// (0x0004c80e) image_vga_pane_ParamLimits

0xcf60,	// (0x00054579) main_camera_pane_g1_ParamLimits

0xcf60,	// (0x00054579) main_camera_pane_g2_ParamLimits

0xcf60,	// (0x00054579) main_camera_pane_g3_ParamLimits

0xcf60,	// (0x00054579) main_camera_pane_g4_ParamLimits

0xcf60,	// (0x00054579) main_camera_pane_g5_ParamLimits

0xcf60,	// (0x00054579) main_camera_pane_g6_ParamLimits

0xcf60,	// (0x00054579) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x000567de) main_camera_pane_g_ParamLimits

0xd17e,	// (0x00054797) main_camera_pane_t1_ParamLimits

0xd17e,	// (0x00054797) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x000567ef) main_camera_pane_t_ParamLimits

0x517a,	// (0x0004c793) bg_popup_preview_window_pane_cp01_ParamLimits

0x517a,	// (0x0004c793) bg_popup_preview_window_pane_cp01

0xe019,	// (0x00055632) popup_phob_thumbnail2_window_g1_ParamLimits

0xe019,	// (0x00055632) popup_phob_thumbnail2_window_g1

0x4f1f,	// (0x0004c538) call2_cli_visual_pane

0x7828,	// (0x0004ee41) popup_call2_audio_conf_window_ParamLimits

0x7828,	// (0x0004ee41) popup_call2_audio_conf_window

0x783d,	// (0x0004ee56) popup_call2_audio_first_window_ParamLimits

0x783d,	// (0x0004ee56) popup_call2_audio_first_window

0x78db,	// (0x0004eef4) popup_call2_audio_in_window_ParamLimits

0x78db,	// (0x0004eef4) popup_call2_audio_in_window

0x791d,	// (0x0004ef36) popup_call2_audio_out_window_ParamLimits

0x791d,	// (0x0004ef36) popup_call2_audio_out_window

0x797f,	// (0x0004ef98) popup_call2_audio_second_window_ParamLimits

0x797f,	// (0x0004ef98) popup_call2_audio_second_window

0x79dd,	// (0x0004eff6) popup_call2_audio_wait_window_ParamLimits

0x79dd,	// (0x0004eff6) popup_call2_audio_wait_window

0x4f1f,	// (0x0004c538) bg_popup_call2_act_pane_cp03

0x515c,	// (0x0004c775) list_conf_pane_cp

0xe025,	// (0x0005563e) popup_call2_audio_conf_window_t1

0xd8d5,	// (0x00054eee) list_single_graphic_popup_conf2_pane_ParamLimits

0xd8d5,	// (0x00054eee) list_single_graphic_popup_conf2_pane

0xd8e8,	// (0x00054f01) list_highlight_pane_cp04

0xe033,	// (0x0005564c) list_single_graphic_popup_conf2_pane_g1

0xd8f9,	// (0x00054f12) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x00056abf) list_single_graphic_popup_conf2_pane_g

0xe03d,	// (0x00055656) list_single_graphic_popup_conf2_pane_t1

0xe04b,	// (0x00055664) bg_popup_call2_act_pane_cp01_ParamLimits

0xe04b,	// (0x00055664) bg_popup_call2_act_pane_cp01

0xe0d5,	// (0x000556ee) call_type_pane_cp05_ParamLimits

0xe0d5,	// (0x000556ee) call_type_pane_cp05

0xe129,	// (0x00055742) popup_call2_audio_second_window_g1_ParamLimits

0xe129,	// (0x00055742) popup_call2_audio_second_window_g1

0xe17d,	// (0x00055796) popup_call2_audio_second_window_g2_ParamLimits

0xe17d,	// (0x00055796) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x00056ac4) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x00056ac4) popup_call2_audio_second_window_g

0xe1e2,	// (0x000557fb) popup_call2_audio_second_window_t1_ParamLimits

0xe1e2,	// (0x000557fb) popup_call2_audio_second_window_t1

0xe29d,	// (0x000558b6) popup_call2_audio_second_window_t2_ParamLimits

0xe29d,	// (0x000558b6) popup_call2_audio_second_window_t2

0xe2f0,	// (0x00055909) popup_call2_audio_second_window_t3_ParamLimits

0xe2f0,	// (0x00055909) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x00056acb) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x00056acb) popup_call2_audio_second_window_t

0x4f1f,	// (0x0004c538) bg_popup_call2_in_pane_cp02

0x4f29,	// (0x0004c542) call_type_pane_cp04

0x7a1c,	// (0x0004f035) popup_call2_audio_wait_window_g1

0x7a24,	// (0x0004f03d) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x00056ad4) popup_call2_audio_wait_window_g

0x4f41,	// (0x0004c55a) popup_call2_audio_wait_window_t3

0xe3e3,	// (0x000559fc) bg_popup_call2_act_pane_ParamLimits

0xe3e3,	// (0x000559fc) bg_popup_call2_act_pane

0xe4a3,	// (0x00055abc) call_type_pane_cp03_ParamLimits

0xe4a3,	// (0x00055abc) call_type_pane_cp03

0xe507,	// (0x00055b20) popup_call2_audio_first_window_g1_ParamLimits

0xe507,	// (0x00055b20) popup_call2_audio_first_window_g1

0xe577,	// (0x00055b90) popup_call2_audio_first_window_g2_ParamLimits

0xe577,	// (0x00055b90) popup_call2_audio_first_window_g2

0xd80d,	// (0x00054e26) popup_call2_audio_first_window_g3_ParamLimits

0xd80d,	// (0x00054e26) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x00056ad9) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x00056ad9) popup_call2_audio_first_window_g

0xe655,	// (0x00055c6e) popup_call2_audio_first_window_t1_ParamLimits

0xe655,	// (0x00055c6e) popup_call2_audio_first_window_t1

0xe758,	// (0x00055d71) popup_call2_audio_first_window_t4_ParamLimits

0xe758,	// (0x00055d71) popup_call2_audio_first_window_t4

0xe83b,	// (0x00055e54) popup_call2_audio_first_window_t5_ParamLimits

0xe83b,	// (0x00055e54) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x00056ae4) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x00056ae4) popup_call2_audio_first_window_t

0x5172,	// (0x0004c78b) bg_popup_call2_act_pane_g1

0xee58,	// (0x00056471) popup_cale_lunar_info_window_t1

0xee66,	// (0x0005647f) popup_cale_lunar_info_window_t2

0xee74,	// (0x0005648d) popup_cale_lunar_info_window_t3

0x4f1f,	// (0x0004c538) bg_popup_call2_bubble_pane

0xe93c,	// (0x00055f55) bg_popup_call2_in_pane_cp01_ParamLimits

0xe93c,	// (0x00055f55) bg_popup_call2_in_pane_cp01

0x4bd7,	// (0x0004c1f0) call_type_pane_cp02

0x7a2c,	// (0x0004f045) popup_call2_audio_out_window_g1_ParamLimits

0x7a2c,	// (0x0004f045) popup_call2_audio_out_window_g1

0xe984,	// (0x00055f9d) popup_call2_audio_out_window_g2_ParamLimits

0xe984,	// (0x00055f9d) popup_call2_audio_out_window_g2

0x7a58,	// (0x0004f071) popup_call2_audio_out_window_g3_ParamLimits

0x7a58,	// (0x0004f071) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x00056aed) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x00056aed) popup_call2_audio_out_window_g

0xe9bb,	// (0x00055fd4) popup_call2_audio_out_window_t1_ParamLimits

0xe9bb,	// (0x00055fd4) popup_call2_audio_out_window_t1

0xea1a,	// (0x00056033) popup_call2_audio_out_window_t2_ParamLimits

0xea1a,	// (0x00056033) popup_call2_audio_out_window_t2

0xea6e,	// (0x00056087) popup_call2_audio_out_window_t3_ParamLimits

0xea6e,	// (0x00056087) popup_call2_audio_out_window_t3

0xea84,	// (0x0005609d) popup_call2_audio_out_window_t4_ParamLimits

0xea84,	// (0x0005609d) popup_call2_audio_out_window_t4

0xea9a,	// (0x000560b3) popup_call2_audio_out_window_t5_ParamLimits

0xea9a,	// (0x000560b3) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x00056af6) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x00056af6) popup_call2_audio_out_window_t

0xeafe,	// (0x00056117) bg_popup_call2_in_pane_ParamLimits

0xeafe,	// (0x00056117) bg_popup_call2_in_pane

0xeb5a,	// (0x00056173) popup_call2_audio_in_window_g1_ParamLimits

0xeb5a,	// (0x00056173) popup_call2_audio_in_window_g1

0xeb92,	// (0x000561ab) popup_call2_audio_in_window_g2_ParamLimits

0xeb92,	// (0x000561ab) popup_call2_audio_in_window_g2

0xebca,	// (0x000561e3) popup_call2_audio_in_window_g3_ParamLimits

0xebca,	// (0x000561e3) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x00056b03) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x00056b03) popup_call2_audio_in_window_g

0xec22,	// (0x0005623b) popup_call2_audio_in_window_t1_ParamLimits

0xec22,	// (0x0005623b) popup_call2_audio_in_window_t1

0xeca2,	// (0x000562bb) popup_call2_audio_in_window_t2_ParamLimits

0xeca2,	// (0x000562bb) popup_call2_audio_in_window_t2

0xed22,	// (0x0005633b) popup_call2_audio_in_window_t3_ParamLimits

0xed22,	// (0x0005633b) popup_call2_audio_in_window_t3

0xed3c,	// (0x00056355) popup_call2_audio_in_window_t4_ParamLimits

0xed3c,	// (0x00056355) popup_call2_audio_in_window_t4

0xed4e,	// (0x00056367) popup_call2_audio_in_window_t5_ParamLimits

0xed4e,	// (0x00056367) popup_call2_audio_in_window_t5

0xed63,	// (0x0005637c) popup_call2_audio_in_window_t6_ParamLimits

0xed63,	// (0x0005637c) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x00056b0c) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x00056b0c) popup_call2_audio_in_window_t

0x5172,	// (0x0004c78b) bg_popup_call2_in_pane_g1

0xee82,	// (0x0005649b) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x00056b74) popup_cale_lunar_info_window_t

0x517a,	// (0x0004c793) bg_popup_call2_rect_pane_ParamLimits

0x517a,	// (0x0004c793) bg_popup_call2_rect_pane

0x4f1f,	// (0x0004c538) call2_cli_visual_graphic_pane

0x4f1f,	// (0x0004c538) call2_cli_visual_text_pane

0x7edd,	// (0x0004f4f6) smil_status_volume_pane_g3

0x0002,

0x5192,	// (0x0004c7ab) call2_cli_visual_graphic_pane_g1

0x5192,	// (0x0004c7ab) call2_cli_visual_graphic_pane_g2

0x5192,	// (0x0004c7ab) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x00056b19) call2_cli_visual_graphic_pane_g

0xed78,	// (0x00056391) bg_popup_call2_rect_pane_g1

0xd09b,	// (0x000546b4) bg_popup_call2_rect_pane_g2

0xed80,	// (0x00056399) bg_popup_call2_rect_pane_g3

0xed88,	// (0x000563a1) bg_popup_call2_rect_pane_g4

0xed90,	// (0x000563a9) bg_popup_call2_rect_pane_g5

0xed98,	// (0x000563b1) bg_popup_call2_rect_pane_g6

0xeda0,	// (0x000563b9) bg_popup_call2_rect_pane_g7

0xeda8,	// (0x000563c1) bg_popup_call2_rect_pane_g8

0xedb0,	// (0x000563c9) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x00056b20) bg_popup_call2_rect_pane_g

0xedb8,	// (0x000563d1) bg_popup_call2_bubble_pane_g1

0xedc0,	// (0x000563d9) bg_popup_call2_bubble_pane_g2

0xedc8,	// (0x000563e1) bg_popup_call2_bubble_pane_g3

0xedd0,	// (0x000563e9) bg_popup_call2_bubble_pane_g4

0xedd8,	// (0x000563f1) bg_popup_call2_bubble_pane_g5

0xede0,	// (0x000563f9) bg_popup_call2_bubble_pane_g6

0xede8,	// (0x00056401) bg_popup_call2_bubble_pane_g7

0xedf0,	// (0x00056409) bg_popup_call2_bubble_pane_g8

0xedf8,	// (0x00056411) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x00056b33) bg_popup_call2_bubble_pane_g

0x55e6,	// (0x0004cbff) aid_cale_week_size_cell_pane

0x517a,	// (0x0004c793) aid_cams_cif_uncrop_pane_ParamLimits

0x517a,	// (0x0004c793) aid_cams_cif_uncrop_pane

0x5bda,	// (0x0004d1f3) aid_cams_size_cell_ParamLimits

0x5bda,	// (0x0004d1f3) aid_cams_size_cell

0x5be6,	// (0x0004d1ff) grid_cams_pane_ParamLimits

0x5bf4,	// (0x0004d20d) linegrid_cams_pane_ParamLimits

0x5ccb,	// (0x0004d2e4) call_video_pane_t1

0x5cec,	// (0x0004d305) call_video_pane_t2

0x0001,

0xf222,	// (0x0005683b) call_video_pane_t

0x6233,	// (0x0004d84c) aid_cale_month_size_cell_pane_ParamLimits

0x6233,	// (0x0004d84c) aid_cale_month_size_cell_pane

0xf59f,	// (0x00056bb8) smil_status_volume_pane_g

0x7eea,	// (0x0004f503) volume_smil_pane_ParamLimits

0x478c,	// (0x0004bda5) aid_popup2_width_pane

0x54d7,	// (0x0004caf0) cell_qdial_pane_g4_ParamLimits

0x54d7,	// (0x0004caf0) cell_qdial_pane_g4

0x70e3,	// (0x0004e6fc) aid_blid_cardinal_pane_ParamLimits

0x70f3,	// (0x0004e70c) aid_blid_destination_pane_ParamLimits

0x70f3,	// (0x0004e70c) aid_blid_destination_pane

0x517a,	// (0x0004c793) bg_popup_call_poc_act_pane_ParamLimits

0x517a,	// (0x0004c793) bg_popup_call_poc_act_pane

0x517a,	// (0x0004c793) bg_popup_call_poc_inact_pane_ParamLimits

0x517a,	// (0x0004c793) bg_popup_call_poc_inact_pane

0xee00,	// (0x00056419) bg_popup_call_poc_act_pane_g1

0xee08,	// (0x00056421) bg_popup_call_poc_act_pane_g2

0xee10,	// (0x00056429) bg_popup_call_poc_act_pane_g3

0xedd0,	// (0x000563e9) bg_popup_call_poc_act_pane_g4

0xedd8,	// (0x000563f1) bg_popup_call_poc_act_pane_g5

0xee18,	// (0x00056431) bg_popup_call_poc_act_pane_g6

0xede8,	// (0x00056401) bg_popup_call_poc_act_pane_g7

0xee20,	// (0x00056439) bg_popup_call_poc_act_pane_g8

0x4f1f,	// (0x0004c538) main_usb_pane

0x7d43,	// (0x0004f35c) popup_cale_lunar_info_window

0x6015,	// (0x0004d62e) im_reading_pane_t1_ParamLimits

0xd279,	// (0x00054892) list_im_pane_ParamLimits

0xd28a,	// (0x000548a3) scroll_pane_cp07_ParamLimits

0x4f1f,	// (0x0004c538) grid_highlight_pane_cp012

0x517a,	// (0x0004c793) mup_scale_pane_ParamLimits

0xd80d,	// (0x00054e26) main_usb_pane_g1_ParamLimits

0xd80d,	// (0x00054e26) main_usb_pane_g1

0x7ab9,	// (0x0004f0d2) main_usb_pane_g2_ParamLimits

0x7ab9,	// (0x0004f0d2) main_usb_pane_g2

0x0001,

0xf544,	// (0x00056b5d) main_usb_pane_g_ParamLimits

0xf544,	// (0x00056b5d) main_usb_pane_g

0x7ac5,	// (0x0004f0de) main_usb_pane_t1_ParamLimits

0x7ac5,	// (0x0004f0de) main_usb_pane_t1

0x7ad7,	// (0x0004f0f0) main_usb_pane_t2_ParamLimits

0x7ad7,	// (0x0004f0f0) main_usb_pane_t2

0x7ae9,	// (0x0004f102) main_usb_pane_t3_ParamLimits

0x7ae9,	// (0x0004f102) main_usb_pane_t3

0x7afb,	// (0x0004f114) main_usb_pane_t4_ParamLimits

0x7afb,	// (0x0004f114) main_usb_pane_t4

0x7b0d,	// (0x0004f126) main_usb_pane_t5_ParamLimits

0x7b0d,	// (0x0004f126) main_usb_pane_t5

0x7b1f,	// (0x0004f138) main_usb_pane_t6_ParamLimits

0x7b1f,	// (0x0004f138) main_usb_pane_t6

0x0005,

0xf549,	// (0x00056b62) main_usb_pane_t_ParamLimits

0x7089,	// (0x0004e6a2) aid_text_placing

0x7095,	// (0x0004e6ae) main_location2_pane_t1_ParamLimits

0x70a9,	// (0x0004e6c2) main_location2_pane_t2_ParamLimits

0x70bd,	// (0x0004e6d6) main_location2_pane_t3_ParamLimits

0x70d1,	// (0x0004e6ea) main_location2_pane_t4_ParamLimits

0x70d1,	// (0x0004e6ea) main_location2_pane_t4

0xf363,	// (0x0005697c) main_location2_pane_t_ParamLimits

0x51b6,	// (0x0004c7cf) find_pinb_pane_g2_ParamLimits

0x51b6,	// (0x0004c7cf) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x000566f3) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x000566f3) find_pinb_pane_g

0x51c2,	// (0x0004c7db) find_pinb_pane_t1_ParamLimits

0x51d4,	// (0x0004c7ed) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x000566f8) find_pinb_pane_t_ParamLimits

0x4f1f,	// (0x0004c538) main_call3_pane

0x67d6,	// (0x0004ddef) cale_month_day_heading_pane_t1_ParamLimits

0x685c,	// (0x0004de75) cale_month_day_heading_pane_t2_ParamLimits

0x68d5,	// (0x0004deee) cale_month_day_heading_pane_t3_ParamLimits

0x694e,	// (0x0004df67) cale_month_day_heading_pane_t4_ParamLimits

0x69c7,	// (0x0004dfe0) cale_month_day_heading_pane_t5_ParamLimits

0x6a40,	// (0x0004e059) cale_month_day_heading_pane_t6_ParamLimits

0x6ab9,	// (0x0004e0d2) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00056873) cale_month_day_heading_pane_t_ParamLimits

0xd4d4,	// (0x00054aed) smil_status_volume_pane

0x7615,	// (0x0004ec2e) postcard_address_pane_ParamLimits

0x7615,	// (0x0004ec2e) postcard_address_pane

0x7621,	// (0x0004ec3a) postcard_message_pane_ParamLimits

0x7621,	// (0x0004ec3a) postcard_message_pane

0x7a84,	// (0x0004f09d) call2_cli_visual_pane_t1_ParamLimits

0x7a84,	// (0x0004f09d) call2_cli_visual_pane_t1

0xefa5,	// (0x000565be) postcard_message_pane_t1_ParamLimits

0xefa5,	// (0x000565be) postcard_message_pane_t1

0xef8d,	// (0x000565a6) postcard_address_pane_t1_ParamLimits

0xef8d,	// (0x000565a6) postcard_address_pane_t1

0x801b,	// (0x0004f634) popup_call3_audio_in_window_ParamLimits

0x801b,	// (0x0004f634) popup_call3_audio_in_window

0x7eff,	// (0x0004f518) bg_popup_call3_in_pane_ParamLimits

0x7eff,	// (0x0004f518) bg_popup_call3_in_pane

0x7f61,	// (0x0004f57a) popup_call3_audio_in_window_g1_ParamLimits

0x7f61,	// (0x0004f57a) popup_call3_audio_in_window_g1

0x7f79,	// (0x0004f592) popup_call3_audio_in_window_g2_ParamLimits

0x7f79,	// (0x0004f592) popup_call3_audio_in_window_g2

0x7f91,	// (0x0004f5aa) popup_call3_audio_in_window_g3_ParamLimits

0x7f91,	// (0x0004f5aa) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x00056bbf) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x00056bbf) popup_call3_audio_in_window_g

0x7fb9,	// (0x0004f5d2) popup_call3_audio_in_window_t1_ParamLimits

0x7fb9,	// (0x0004f5d2) popup_call3_audio_in_window_t1

0x7fe1,	// (0x0004f5fa) popup_call3_audio_in_window_t2_ParamLimits

0x7fe1,	// (0x0004f5fa) popup_call3_audio_in_window_t2

0x8009,	// (0x0004f622) popup_call3_audio_in_window_t3_ParamLimits

0x8009,	// (0x0004f622) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x00056bc8) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x00056bc8) popup_call3_audio_in_window_t

0xd176,	// (0x0005478f) bg_popup_call3_rect_pane

0xed78,	// (0x00056391) bg_popup_call3_rect_pane_g1

0xd09b,	// (0x000546b4) bg_popup_call3_rect_pane_g2

0xed80,	// (0x00056399) bg_popup_call3_rect_pane_g3

0xed88,	// (0x000563a1) bg_popup_call3_rect_pane_g4

0xed90,	// (0x000563a9) bg_popup_call3_rect_pane_g5

0xed98,	// (0x000563b1) bg_popup_call3_rect_pane_g6

0xeda0,	// (0x000563b9) bg_popup_call3_rect_pane_g7

0x477a,	// (0x0004bd93) mup_visualizer_osc_pane

0x477a,	// (0x0004bd93) mup_visualizer_spec_pane

0x7f1f,	// (0x0004f538) call3_video_qcif_pane_ParamLimits

0x7f1f,	// (0x0004f538) call3_video_qcif_pane

0x7f31,	// (0x0004f54a) call3_video_qcif_uncrop_pane_ParamLimits

0x7f31,	// (0x0004f54a) call3_video_qcif_uncrop_pane

0x7f3f,	// (0x0004f558) call3_video_subqcif_pane_ParamLimits

0x7f3f,	// (0x0004f558) call3_video_subqcif_pane

0x7f51,	// (0x0004f56a) call3_video_subqcif_uncrop_pane_ParamLimits

0x7f51,	// (0x0004f56a) call3_video_subqcif_uncrop_pane

0x7fa9,	// (0x0004f5c2) popup_call3_audio_in_window_g4_ParamLimits

0x7fa9,	// (0x0004f5c2) popup_call3_audio_in_window_g4

0x477a,	// (0x0004bd93) mup_spec_half_pane

0x477a,	// (0x0004bd93) mup_spec_half_pane_cp

0x477a,	// (0x0004bd93) mup_osc_middle_pane

0xd1ac,	// (0x000547c5) mup_visualizer_osc_pane_g1

0xef40,	// (0x00056559) mup_spec_bar_pane_ParamLimits

0xef40,	// (0x00056559) mup_spec_bar_pane

0xd1ac,	// (0x000547c5) mup_spec_bar_pane_g1

0xd1ac,	// (0x000547c5) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x000569f6) mup_spec_bar_pane_g

0x55e6,	// (0x0004cbff) aid_cale_week_size_cell_pane_ParamLimits

0x55fb,	// (0x0004cc14) bg_cale_heading_pane_ParamLimits

0xd0d8,	// (0x000546f1) bg_cale_pane_cp01_ParamLimits

0x561b,	// (0x0004cc34) cale_week_corner_pane_ParamLimits

0x5635,	// (0x0004cc4e) cale_week_day_heading_pane_ParamLimits

0x5655,	// (0x0004cc6e) cale_week_scroll_pane_g1_ParamLimits

0x5670,	// (0x0004cc89) cale_week_scroll_pane_g2_ParamLimits

0x5683,	// (0x0004cc9c) cale_week_scroll_pane_g3_ParamLimits

0x5696,	// (0x0004ccaf) cale_week_scroll_pane_g4_ParamLimits

0x56a9,	// (0x0004ccc2) cale_week_scroll_pane_g5_ParamLimits

0x56bc,	// (0x0004ccd5) cale_week_scroll_pane_g6_ParamLimits

0x56cf,	// (0x0004cce8) cale_week_scroll_pane_g7_ParamLimits

0x56e4,	// (0x0004ccfd) cale_week_scroll_pane_g8_ParamLimits

0x56f9,	// (0x0004cd12) cale_week_scroll_pane_g9_ParamLimits

0x570c,	// (0x0004cd25) cale_week_scroll_pane_g10_ParamLimits

0x571f,	// (0x0004cd38) cale_week_scroll_pane_g11_ParamLimits

0x5732,	// (0x0004cd4b) cale_week_scroll_pane_g12_ParamLimits

0x5749,	// (0x0004cd62) cale_week_scroll_pane_g13_ParamLimits

0x5764,	// (0x0004cd7d) cale_week_scroll_pane_g14_ParamLimits

0x577f,	// (0x0004cd98) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00056784) cale_week_scroll_pane_g_ParamLimits

0x57af,	// (0x0004cdc8) cale_week_time_pane_ParamLimits

0x57c4,	// (0x0004cddd) grid_cale_week_pane_ParamLimits

0xd0f5,	// (0x0005470e) listscroll_cale_week_pane_t1

0xd107,	// (0x00054720) scroll_pane_cp08_ParamLimits

0x62a7,	// (0x0004d8c0) cale_month_corner_pane_ParamLimits

0xd4aa,	// (0x00054ac3) cale_month_pane_t1

0x6759,	// (0x0004dd72) cale_month_week_pane_ParamLimits

0xd80d,	// (0x00054e26) popup_call_status_window_g1_ParamLimits

0x6ee0,	// (0x0004e4f9) popup_call_status_window_g2_ParamLimits

0x6eec,	// (0x0004e505) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x00056903) popup_call_status_window_g_ParamLimits

0xd874,	// (0x00054e8d) aid_call2_pane

0x746f,	// (0x0004ea88) msg_header_pane_g1

0x7615,	// (0x0004ec2e) postcard_address2_pane_ParamLimits

0x7615,	// (0x0004ec2e) postcard_address2_pane

0x7621,	// (0x0004ec3a) postcard_message2_pane_ParamLimits

0x7621,	// (0x0004ec3a) postcard_message2_pane

0x7eaf,	// (0x0004f4c8) message2_row_pane_ParamLimits

0x7eaf,	// (0x0004f4c8) message2_row_pane

0x7eca,	// (0x0004f4e3) address2_row_pane_ParamLimits

0x7eca,	// (0x0004f4e3) address2_row_pane

0xef0d,	// (0x00056526) postcard_message2_row_pane_g1

0xef15,	// (0x0005652e) postcard_message2_row_pane_t1

0xef0d,	// (0x00056526) address2_row_pane_g1

0xef15,	// (0x0005652e) address2_row_pane_t1

0x5a4a,	// (0x0004d063) aid_size_cell_vorec

0x4f1f,	// (0x0004c538) main_rss_pane

0xef23,	// (0x0005653c) rss_list_single_pane_ParamLimits

0xef23,	// (0x0005653c) rss_list_single_pane

0xef31,	// (0x0005654a) rss_list_single_pane_t1

0xef31,	// (0x0005654a) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x00056bb3) rss_list_single_pane_t

0x4f1f,	// (0x0004c538) main_camera2_pane

0x4f1f,	// (0x0004c538) main_video2_pane

0x4a34,	// (0x0004c04d) cams_zoom_pane_cp2_ParamLimits

0x4a34,	// (0x0004c04d) cams_zoom_pane_cp2

0x4a34,	// (0x0004c04d) image2_vga_pane_ParamLimits

0x4a34,	// (0x0004c04d) image2_vga_pane

0xd8a8,	// (0x00054ec1) main_camera2_pane_g1_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g1

0xd8a8,	// (0x00054ec1) main_camera2_pane_g2_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g2

0xd8a8,	// (0x00054ec1) main_camera2_pane_g3_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g3

0xd8a8,	// (0x00054ec1) main_camera2_pane_g4_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g4

0xd8a8,	// (0x00054ec1) main_camera2_pane_g5_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g5

0xd8a8,	// (0x00054ec1) main_camera2_pane_g6_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g6

0xd8a8,	// (0x00054ec1) main_camera2_pane_g7_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g7

0xd8a8,	// (0x00054ec1) main_camera2_pane_g8_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x00056bcf) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x00056bcf) main_camera2_pane_g

0x8038,	// (0x0004f651) main_camera2_pane_t1_ParamLimits

0x8038,	// (0x0004f651) main_camera2_pane_t1

0x8038,	// (0x0004f651) main_camera2_pane_t2_ParamLimits

0x8038,	// (0x0004f651) main_camera2_pane_t2

0x8038,	// (0x0004f651) main_camera2_pane_t3_ParamLimits

0x8038,	// (0x0004f651) main_camera2_pane_t3

0x8038,	// (0x0004f651) main_camera2_pane_t4_ParamLimits

0x8038,	// (0x0004f651) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x00056be2) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x00056be2) main_camera2_pane_t

0x8060,	// (0x0004f679) cams_zoom_pane_cp4_ParamLimits

0x8060,	// (0x0004f679) cams_zoom_pane_cp4

0x7ce2,	// (0x0004f2fb) image2_cif_pane_ParamLimits

0x7ce2,	// (0x0004f2fb) image2_cif_pane

0x4a34,	// (0x0004c04d) image2_subqcif_pane_ParamLimits

0x4a34,	// (0x0004c04d) image2_subqcif_pane

0x806e,	// (0x0004f687) main_video2_pane_g1_ParamLimits

0x806e,	// (0x0004f687) main_video2_pane_g1

0x806e,	// (0x0004f687) main_video2_pane_g2_ParamLimits

0x806e,	// (0x0004f687) main_video2_pane_g2

0x806e,	// (0x0004f687) main_video2_pane_g3_ParamLimits

0x806e,	// (0x0004f687) main_video2_pane_g3

0x806e,	// (0x0004f687) main_video2_pane_g4_ParamLimits

0x806e,	// (0x0004f687) main_video2_pane_g4

0x806e,	// (0x0004f687) main_video2_pane_g5_ParamLimits

0x806e,	// (0x0004f687) main_video2_pane_g5

0x806e,	// (0x0004f687) main_video2_pane_g6_ParamLimits

0x806e,	// (0x0004f687) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x00056bf1) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x00056bf1) main_video2_pane_g

0x807c,	// (0x0004f695) main_video2_pane_t1_ParamLimits

0x807c,	// (0x0004f695) main_video2_pane_t1

0x807c,	// (0x0004f695) main_video2_pane_t2_ParamLimits

0x807c,	// (0x0004f695) main_video2_pane_t2

0x807c,	// (0x0004f695) main_video2_pane_t3_ParamLimits

0x807c,	// (0x0004f695) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x00056bfe) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x00056bfe) main_video2_pane_t

0x7bb5,	// (0x0004f1ce) call_muted_g2

0x0001,

0xf58c,	// (0x00056ba5) call_muted_g

0x4f1f,	// (0x0004c538) main_mup2_pane

0xcf6e,	// (0x00054587) main_mup2_pane_g1_ParamLimits

0xcf6e,	// (0x00054587) main_mup2_pane_g1

0xcf6e,	// (0x00054587) main_mup2_pane_g2_ParamLimits

0xcf6e,	// (0x00054587) main_mup2_pane_g2

0x1e70,	// (0x00049489) main_mup_pane_g13_cp1

0x4a4e,	// (0x0004c067) mup_volume_pane_cp1

0xcf6e,	// (0x00054587) main_mup2_pane_g4_ParamLimits

0xcf6e,	// (0x00054587) main_mup2_pane_g4

0xcf6e,	// (0x00054587) main_mup2_pane_g5_ParamLimits

0xcf6e,	// (0x00054587) main_mup2_pane_g5

0xcf6e,	// (0x00054587) main_mup2_pane_g6_ParamLimits

0xcf6e,	// (0x00054587) main_mup2_pane_g6

0xcf6e,	// (0x00054587) main_mup2_pane_g7_ParamLimits

0xcf6e,	// (0x00054587) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x00056c05) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x00056c05) main_mup2_pane_g

0xcf7c,	// (0x00054595) main_mup2_pane_t1_ParamLimits

0xcf7c,	// (0x00054595) main_mup2_pane_t1

0xcf7c,	// (0x00054595) main_mup2_pane_t2_ParamLimits

0xcf7c,	// (0x00054595) main_mup2_pane_t2

0xcf7c,	// (0x00054595) main_mup2_pane_t3_ParamLimits

0xcf7c,	// (0x00054595) main_mup2_pane_t3

0xcf7c,	// (0x00054595) main_mup2_pane_t4_ParamLimits

0xcf7c,	// (0x00054595) main_mup2_pane_t4

0xcf7c,	// (0x00054595) main_mup2_pane_t5_ParamLimits

0xcf7c,	// (0x00054595) main_mup2_pane_t5

0xcf7c,	// (0x00054595) main_mup2_pane_t6_ParamLimits

0xcf7c,	// (0x00054595) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x00056c14) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x00056c14) main_mup2_pane_t

0x0ab9,	// (0x000480d2) mup2_visualizer_pane_ParamLimits

0x0ab9,	// (0x000480d2) mup2_visualizer_pane

0x0ab9,	// (0x000480d2) mup_progress_pane_cp_ParamLimits

0x0ab9,	// (0x000480d2) mup_progress_pane_cp

0x8143,	// (0x0004f75c) mup_volume_pane_cp_ParamLimits

0x8143,	// (0x0004f75c) mup_volume_pane_cp

0xcf52,	// (0x0005456b) mup2_visualizer_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) mup2_visualizer_pane_g1

0xcf60,	// (0x00054579) mup2_visualizer_pane_g2_ParamLimits

0xcf60,	// (0x00054579) mup2_visualizer_pane_g2

0xcf60,	// (0x00054579) mup2_visualizer_pane_g3_ParamLimits

0xcf60,	// (0x00054579) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x000566fd) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x000566fd) mup2_visualizer_pane_g

0xdeb5,	// (0x000554ce) aid_size_cell_fmradio

0x7ccb,	// (0x0004f2e4) aid_height_parent_landcape

0xd308,	// (0x00054921) wml_content_pane_cp

0xd310,	// (0x00054929) wml_tabs_pane

0xd319,	// (0x00054932) popup_wml_miniature_window

0xd321,	// (0x0005493a) scroll_pane_cp021

0xd335,	// (0x0005494e) wml_content_pane_comp8

0x4f1f,	// (0x0004c538) bg_popup_sub_pane_cp05

0xefd7,	// (0x000565f0) popup_wml_miniature_window_g1

0xefdf,	// (0x000565f8) wml_miniature_view_pane

0x8090,	// (0x0004f6a9) aid_size_wml_view

0x8098,	// (0x0004f6b1) wml_miniature_view_pane_g1

0x80a1,	// (0x0004f6ba) wml_miniature_view_pane_g2

0x80aa,	// (0x0004f6c3) wml_miniature_view_pane_g3

0x80b2,	// (0x0004f6cb) wml_miniature_view_pane_g4

0x80ba,	// (0x0004f6d3) wml_miniature_view_pane_g5

0x80c2,	// (0x0004f6db) wml_miniature_view_pane_g6

0x80ca,	// (0x0004f6e3) wml_miniature_view_pane_g7

0x80d2,	// (0x0004f6eb) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x00056c21) wml_miniature_view_pane_g

0xefe7,	// (0x00056600) background_graphic_ParamLimits

0xefe7,	// (0x00056600) background_graphic

0xeff3,	// (0x0005660c) wml_tabs_2_pane

0xeffc,	// (0x00056615) wml_tabs_3_pane_ParamLimits

0xeffc,	// (0x00056615) wml_tabs_3_pane

0xf00e,	// (0x00056627) wml_tabs_4_pane_ParamLimits

0xf00e,	// (0x00056627) wml_tabs_4_pane

0x0ac7,	// (0x000480e0) wml_tabs_5_pane_ParamLimits

0x0ac7,	// (0x000480e0) wml_tabs_5_pane

0x0ae1,	// (0x000480fa) wml_tabs_pane_g2_ParamLimits

0x0ae1,	// (0x000480fa) wml_tabs_pane_g2

0x0af6,	// (0x0004810f) wml_tabs_pane_g3_ParamLimits

0x0af6,	// (0x0004810f) wml_tabs_pane_g3

0x0b0b,	// (0x00048124) wml_tabs_2_active_pane_ParamLimits

0x0b0b,	// (0x00048124) wml_tabs_2_active_pane

0x0b0b,	// (0x00048124) wml_tabs_2_passive_pane_ParamLimits

0x0b0b,	// (0x00048124) wml_tabs_2_passive_pane

0x80da,	// (0x0004f6f3) wml_tabs_3_active_pane_cp_ParamLimits

0x80da,	// (0x0004f6f3) wml_tabs_3_active_pane_cp

0x80eb,	// (0x0004f704) wml_tabs_3_passive_pane_ParamLimits

0x80eb,	// (0x0004f704) wml_tabs_3_passive_pane

0x80fc,	// (0x0004f715) wml_tabs_3_passive_pane_cp_ParamLimits

0x80fc,	// (0x0004f715) wml_tabs_3_passive_pane_cp

0x810d,	// (0x0004f726) tabs_4_active_pane

0x8115,	// (0x0004f72e) tabs_4_passive_pane

0x811d,	// (0x0004f736) tabs_4_passive_pane_cp

0x8125,	// (0x0004f73e) tabs_4_passive_pane_cp2

0x7ab1,	// (0x0004f0ca) aid_height_text

0x0ab9,	// (0x000480d2) mup_volume_cont_pane_ParamLimits

0x0ab9,	// (0x000480d2) mup_volume_cont_pane

0x477a,	// (0x0004bd93) aid_size_cell_pinb

0x477a,	// (0x0004bd93) aid_size_list_pinb

0x0ab9,	// (0x000480d2) mup2_volume_cont_pane_ParamLimits

0x0ab9,	// (0x000480d2) mup2_volume_cont_pane

0x812d,	// (0x0004f746) mup2_volume_cont_pane_g1_ParamLimits

0x812d,	// (0x0004f746) mup2_volume_cont_pane_g1

0x4798,	// (0x0004bdb1) aid_size_cell_touch_ParamLimits

0x4798,	// (0x0004bdb1) aid_size_cell_touch

0x4a58,	// (0x0004c071) touch_pane_ParamLimits

0x4a58,	// (0x0004c071) touch_pane

0x4a4e,	// (0x0004c067) main_rss2_pane

0x0b38,	// (0x00048151) listscroll_rss2_pane

0x0b41,	// (0x0004815a) rss2_navigation_pane

0x0b49,	// (0x00048162) list_rss2_pane

0xd9ab,	// (0x00054fc4) scroll_pane_cp22

0x0b51,	// (0x0004816a) rss2_navigation_pane_g1

0x0b5a,	// (0x00048173) rss2_navigation_pane_g2

0x0b62,	// (0x0004817b) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x00056c32) rss2_navigation_pane_g

0x0b6a,	// (0x00048183) rss2_navigation_pane_t1

0x8159,	// (0x0004f772) rss2_list_single_pane_ParamLimits

0x8159,	// (0x0004f772) rss2_list_single_pane

0x0b78,	// (0x00048191) rss2_list_single_pane_t2

0x0b86,	// (0x0004819f) rss2_list_single_pane_t3_ParamLimits

0x0b86,	// (0x0004819f) rss2_list_single_pane_t3

0x0ba3,	// (0x000481bc) rss2_list_single_pane_t4

0x6d55,	// (0x0004e36e) smil_status_pane_g1

0x7ce2,	// (0x0004f2fb) main_image2_pane_ParamLimits

0x7ce2,	// (0x0004f2fb) main_image2_pane

0xd8a8,	// (0x00054ec1) main_camera2_pane_g9_ParamLimits

0xd8a8,	// (0x00054ec1) main_camera2_pane_g9

0x8038,	// (0x0004f651) main_camera2_pane_t5_ParamLimits

0x8038,	// (0x0004f651) main_camera2_pane_t5

0x804c,	// (0x0004f665) main_camera2_pane_t6_ParamLimits

0x804c,	// (0x0004f665) main_camera2_pane_t6

0x818a,	// (0x0004f7a3) main_image2_pane_g1_ParamLimits

0x818a,	// (0x0004f7a3) main_image2_pane_g1

0x77e9,	// (0x0004ee02) smil2_video_pane_ParamLimits

0x77e9,	// (0x0004ee02) smil2_video_pane

0x4692,	// (0x0004bcab) aid_zoom_text_primary_cp

0x49e9,	// (0x0004c002) popup_preview_fixed_window

0xd271,	// (0x0005488a) im_reading_pane_g1

0x802a,	// (0x0004f643) cams2_bc_adjust_pane_cp_ParamLimits

0x802a,	// (0x0004f643) cams2_bc_adjust_pane_cp

0x4a34,	// (0x0004c04d) cams2_bc_adjust_pane_ParamLimits

0x4a34,	// (0x0004c04d) cams2_bc_adjust_pane

0x1e70,	// (0x00049489) cams2_bc_adjust_pane_g1

0x4a4e,	// (0x0004c067) cams2_slider_pane

0x1e70,	// (0x00049489) cams2_slider_pane_g1

0x1e70,	// (0x00049489) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x00056c39) cams2_slider_pane_g

0x521d,	// (0x0004c836) calc_display_pane_ParamLimits

0x523b,	// (0x0004c854) calc_paper_pane_ParamLimits

0x5257,	// (0x0004c870) grid_calc_pane_ParamLimits

0x6f4e,	// (0x0004e567) popup_clock_digital_window_t1_ParamLimits

0xde52,	// (0x0005546b) main_image_pane_t1

0x5203,	// (0x0004c81c) aid_size_cell_calc_ParamLimits

0x5203,	// (0x0004c81c) aid_size_cell_calc

0x7d1f,	// (0x0004f338) popup_blid_sat_info2_window_ParamLimits

0x7d1f,	// (0x0004f338) popup_blid_sat_info2_window

0x0bb1,	// (0x000481ca) aid_size_cell_blid

0x0ab9,	// (0x000480d2) bg_popup_window_pane_cp07

0x0bce,	// (0x000481e7) grid_popup_blid_pane

0x0bd8,	// (0x000481f1) heading_pane_cp05_ParamLimits

0x0bd8,	// (0x000481f1) heading_pane_cp05

0x0ca2,	// (0x000482bb) cell_popup_blid_pane_ParamLimits

0x0ca2,	// (0x000482bb) cell_popup_blid_pane

0x0cc6,	// (0x000482df) cell_popup_blid_pane_g1

0x0cce,	// (0x000482e7) cell_popup_blid_pane_t1

0x0ab9,	// (0x000480d2) mup2_indicator_pane_ParamLimits

0x0ab9,	// (0x000480d2) mup2_indicator_pane

0x477a,	// (0x0004bd93) mup2_visualizer_osc_pane

0xefc1,	// (0x000565da) mup2_visualizer_spec_pane_ParamLimits

0xefc1,	// (0x000565da) mup2_visualizer_spec_pane

0x477a,	// (0x0004bd93) mup2_spec_half_pane

0x477a,	// (0x0004bd93) mup2_spec_half_pane_cp

0x0cdc,	// (0x000482f5) mup2_spec_bar_pane_ParamLimits

0x0cdc,	// (0x000482f5) mup2_spec_bar_pane

0xd1ac,	// (0x000547c5) mup2_spec_bar_pane_g1

0x0cfb,	// (0x00048314) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x00056c5f) mup2_spec_bar_pane_g

0x477a,	// (0x0004bd93) mup2_osc_middle_pane

0xd1ac,	// (0x000547c5) mup2_visualizer_osc_pane_g1

0x4acf,	// (0x0004c0e8) popup_number_entry_window_t1_ParamLimits

0x4ae2,	// (0x0004c0fb) popup_number_entry_window_t2_ParamLimits

0x4af4,	// (0x0004c10d) popup_number_entry_window_t3_ParamLimits

0x4b06,	// (0x0004c11f) popup_number_entry_window_t5_ParamLimits

0x4b06,	// (0x0004c11f) popup_number_entry_window_t5

0xf085,	// (0x0005669e) popup_number_entry_window_t_ParamLimits

0x4b3f,	// (0x0004c158) text_title_cp2_ParamLimits

0x74e9,	// (0x0004eb02) aid_hotspot_pointer_text2_pane

0x7577,	// (0x0004eb90) main_viewer_pane_g9_ParamLimits

0x7577,	// (0x0004eb90) main_viewer_pane_g9

0xd4aa,	// (0x00054ac3) cale_month_pane_t1_ParamLimits

0xd4e7,	// (0x00054b00) bg_cale_pane_ParamLimits

0xd4ff,	// (0x00054b18) list_cale_pane_ParamLimits

0xd510,	// (0x00054b29) listscroll_cale_day_pane_t1

0xd522,	// (0x00054b3b) scroll_pane_cp09_ParamLimits

0x71d1,	// (0x0004e7ea) main_mup_eq_pane_t1_ParamLimits

0x71d1,	// (0x0004e7ea) main_mup_eq_pane_t1

0x71eb,	// (0x0004e804) main_mup_eq_pane_t2_ParamLimits

0x71eb,	// (0x0004e804) main_mup_eq_pane_t2

0x7205,	// (0x0004e81e) main_mup_eq_pane_t3_ParamLimits

0x7205,	// (0x0004e81e) main_mup_eq_pane_t3

0x721d,	// (0x0004e836) main_mup_eq_pane_t4_ParamLimits

0x721d,	// (0x0004e836) main_mup_eq_pane_t4

0x7235,	// (0x0004e84e) main_mup_eq_pane_t5_ParamLimits

0x7235,	// (0x0004e84e) main_mup_eq_pane_t5

0x724d,	// (0x0004e866) main_mup_eq_pane_t6_ParamLimits

0x724d,	// (0x0004e866) main_mup_eq_pane_t6

0x7261,	// (0x0004e87a) main_mup_eq_pane_t7_ParamLimits

0x7261,	// (0x0004e87a) main_mup_eq_pane_t7

0x7275,	// (0x0004e88e) main_mup_eq_pane_t8_ParamLimits

0x7275,	// (0x0004e88e) main_mup_eq_pane_t8

0x728b,	// (0x0004e8a4) main_mup_eq_pane_t9_ParamLimits

0x728b,	// (0x0004e8a4) main_mup_eq_pane_t9

0x72a3,	// (0x0004e8bc) main_mup_eq_pane_t10_ParamLimits

0x72a3,	// (0x0004e8bc) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x00056a02) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x00056a02) main_mup_eq_pane_t

0x7360,	// (0x0004e979) mup_equalizer_pane_cp5_ParamLimits

0x7376,	// (0x0004e98f) mup_equalizer_pane_cp6_ParamLimits

0x738e,	// (0x0004e9a7) mup_equalizer_pane_cp7_ParamLimits

0x4a4e,	// (0x0004c067) main_gallery_pane

0xef5f,	// (0x00056578) smil2_volume_pane

0xef67,	// (0x00056580) smil_status_volume_pane_g1_ParamLimits

0xef7a,	// (0x00056593) smil_status_volume_pane_g2_ParamLimits

0x7edd,	// (0x0004f4f6) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x00056bb8) smil_status_volume_pane_g_ParamLimits

0x0ab9,	// (0x000480d2) bg_popup_window_pane_cp07_ParamLimits

0x0bb9,	// (0x000481d2) blid_firmament_pane

0x51f5,	// (0x0004c80e) aid_size_cell_gallery_ParamLimits

0x51f5,	// (0x0004c80e) aid_size_cell_gallery

0x51f5,	// (0x0004c80e) grid_gallery_pane_ParamLimits

0x51f5,	// (0x0004c80e) grid_gallery_pane

0xeee4,	// (0x000564fd) cell_gallery_pane_ParamLimits

0xeee4,	// (0x000564fd) cell_gallery_pane

0x519c,	// (0x0004c7b5) bg_cell_gallery_focus_pane_ParamLimits

0x519c,	// (0x0004c7b5) bg_cell_gallery_focus_pane

0xcf52,	// (0x0005456b) cell_gallery_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) cell_gallery_pane_g1

0xcf52,	// (0x0005456b) cell_gallery_pane_g2_ParamLimits

0xcf52,	// (0x0005456b) cell_gallery_pane_g2

0xcf52,	// (0x0005456b) cell_gallery_pane_g3_ParamLimits

0xcf52,	// (0x0005456b) cell_gallery_pane_g3

0xcf60,	// (0x00054579) cell_gallery_pane_g4_ParamLimits

0xcf60,	// (0x00054579) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x00056c64) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x00056c64) cell_gallery_pane_g

0x0d05,	// (0x0004831e) bg_cell_gallery_focus_pane_g1

0x0d0d,	// (0x00048326) bg_cell_gallery_focus_pane_g2

0x0d15,	// (0x0004832e) bg_cell_gallery_focus_pane_g3

0x0d1d,	// (0x00048336) bg_cell_gallery_focus_pane_g4

0x0d25,	// (0x0004833e) bg_cell_gallery_focus_pane_g5

0x0d2d,	// (0x00048346) bg_cell_gallery_focus_pane_g6

0x0d35,	// (0x0004834e) bg_cell_gallery_focus_pane_g7

0x0d3d,	// (0x00048356) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x00056c6d) bg_cell_gallery_focus_pane_g

0x0d45,	// (0x0004835e) aid_firma_cardinal

0x0d59,	// (0x00048372) blid_firmament_pane_t1

0x0d70,	// (0x00048389) blid_firmament_pane_t2

0x0d87,	// (0x000483a0) blid_firmament_pane_t3

0x0d9e,	// (0x000483b7) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x00056c7e) blid_firmament_pane_t

0x0db5,	// (0x000483ce) blid_sat_info_pane

0xd1ac,	// (0x000547c5) blid_sat_info_pane_g1

0xd1ac,	// (0x000547c5) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x000569f6) blid_sat_info_pane_g

0x0dc5,	// (0x000483de) blid_sat_info_pane_t1

0x0dd3,	// (0x000483ec) smil2_volume_content_pane

0x0ddc,	// (0x000483f5) smil2_volume_pane_g1

0xf024,	// (0x0005663d) smil2_volume_content_pane_g1

0x0de4,	// (0x000483fd) smil2_volume_content_pane_g2

0x0ded,	// (0x00048406) smil2_volume_content_pane_g3

0x0df6,	// (0x0004840f) smil2_volume_content_pane_g4

0x0dff,	// (0x00048418) smil2_volume_content_pane_g5

0x0e08,	// (0x00048421) smil2_volume_content_pane_g6

0x0e11,	// (0x0004842a) smil2_volume_content_pane_g7

0x0e1a,	// (0x00048433) smil2_volume_content_pane_g8

0x0e23,	// (0x0004843c) smil2_volume_content_pane_g9

0x0e2c,	// (0x00048445) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x00056c87) smil2_volume_content_pane_g

0x5845,	// (0x0004ce5e) cale_week_day_heading_pane_t1_ParamLimits

0x5860,	// (0x0004ce79) cale_week_day_heading_pane_t2_ParamLimits

0x587b,	// (0x0004ce94) cale_week_day_heading_pane_t3_ParamLimits

0x5896,	// (0x0004ceaf) cale_week_day_heading_pane_t4_ParamLimits

0x58b1,	// (0x0004ceca) cale_week_day_heading_pane_t5_ParamLimits

0x58cc,	// (0x0004cee5) cale_week_day_heading_pane_t6_ParamLimits

0x58e7,	// (0x0004cf00) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x000567a5) cale_week_day_heading_pane_t_ParamLimits

0xd124,	// (0x0005473d) bg_cale_side_pane_ParamLimits

0x5902,	// (0x0004cf1b) cale_week_time_pane_t1_ParamLimits

0x591c,	// (0x0004cf35) cale_week_time_pane_t2_ParamLimits

0x5936,	// (0x0004cf4f) cale_week_time_pane_t3_ParamLimits

0x5950,	// (0x0004cf69) cale_week_time_pane_t4_ParamLimits

0x596a,	// (0x0004cf83) cale_week_time_pane_t5_ParamLimits

0x5984,	// (0x0004cf9d) cale_week_time_pane_t6_ParamLimits

0x59a2,	// (0x0004cfbb) cale_week_time_pane_t7_ParamLimits

0x59c4,	// (0x0004cfdd) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x000567b4) cale_week_time_pane_t_ParamLimits

0x59e8,	// (0x0004d001) cell_cale_week_pane_g2_ParamLimits

0xd124,	// (0x0005473d) bg_cale_side_pane_cp01_ParamLimits

0x6b4a,	// (0x0004e163) cale_month_week_pane_t1_ParamLimits

0x6b63,	// (0x0004e17c) cale_month_week_pane_t2_ParamLimits

0x6b7c,	// (0x0004e195) cale_month_week_pane_t3_ParamLimits

0x6b95,	// (0x0004e1ae) cale_month_week_pane_t4_ParamLimits

0x6bae,	// (0x0004e1c7) cale_month_week_pane_t5_ParamLimits

0x6bcf,	// (0x0004e1e8) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00056882) cale_month_week_pane_t_ParamLimits

0x6d12,	// (0x0004e32b) cell_cale_month_pane_g1_ParamLimits

0x4a4e,	// (0x0004c067) main_cale_event_viewer_pane

0x477a,	// (0x0004bd93) listscroll_cale_event_viewer_pane

0x0e35,	// (0x0004844e) list_cale_ev_pane

0x0e3d,	// (0x00048456) scroll_pane_cp023

0x0e49,	// (0x00048462) field_cale_ev_pane_ParamLimits

0x0e49,	// (0x00048462) field_cale_ev_pane

0x0e67,	// (0x00048480) field_cale_ev_content_pane_ParamLimits

0x0e67,	// (0x00048480) field_cale_ev_content_pane

0x0e73,	// (0x0004848c) field_cale_ev_pane_g1_ParamLimits

0x0e73,	// (0x0004848c) field_cale_ev_pane_g1

0x0e7f,	// (0x00048498) field_cale_ev_pane_g2_ParamLimits

0x0e7f,	// (0x00048498) field_cale_ev_pane_g2

0x0e97,	// (0x000484b0) field_cale_ev_pane_g3_ParamLimits

0x0e97,	// (0x000484b0) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x00056c9c) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x00056c9c) field_cale_ev_pane_g

0x0eaf,	// (0x000484c8) field_cale_ev_pane_t1_ParamLimits

0x0eaf,	// (0x000484c8) field_cale_ev_pane_t1

0xf02d,	// (0x00056646) field_cale_ev_content_pane_t1_ParamLimits

0xf02d,	// (0x00056646) field_cale_ev_content_pane_t1

0xdd38,	// (0x00055351) bg_button_pane_cp01

0x55d6,	// (0x0004cbef) listscroll_cale_week_pane_ParamLimits

0xd0cf,	// (0x000546e8) popup_toolbar_window_cp01

0xd0f5,	// (0x0005470e) listscroll_cale_week_pane_t1_ParamLimits

0x55d6,	// (0x0004cbef) listscroll_cale_day_pane_ParamLimits

0xd0cf,	// (0x000546e8) popup_toolbar_window_cp02

0xd510,	// (0x00054b29) listscroll_cale_day_pane_t1_ParamLimits

0x55d6,	// (0x0004cbef) main_cale_month_pane_ParamLimits

0x7e26,	// (0x0004f43f) popup_toolbar_window_cp03_ParamLimits

0x7e26,	// (0x0004f43f) popup_toolbar_window_cp03

0x76ff,	// (0x0004ed18) main_image_pane_g2_ParamLimits

0x76ff,	// (0x0004ed18) main_image_pane_g2

0x770b,	// (0x0004ed24) main_image_pane_g3_ParamLimits

0x770b,	// (0x0004ed24) main_image_pane_g3

0x0002,

0xf47b,	// (0x00056a94) main_image_pane_g_ParamLimits

0xf47b,	// (0x00056a94) main_image_pane_g

0xde52,	// (0x0005546b) main_image_pane_t1_ParamLimits

0x7717,	// (0x0004ed30) main_image_pane_t2_ParamLimits

0x7717,	// (0x0004ed30) main_image_pane_t2

0x7729,	// (0x0004ed42) main_image_pane_t3_ParamLimits

0x7729,	// (0x0004ed42) main_image_pane_t3

0x773b,	// (0x0004ed54) main_image_pane_t4_ParamLimits

0x773b,	// (0x0004ed54) main_image_pane_t4

0x0003,

0xf482,	// (0x00056a9b) main_image_pane_t_ParamLimits

0xf482,	// (0x00056a9b) main_image_pane_t

0x774d,	// (0x0004ed66) popup_image_details_window_cp01

0x7757,	// (0x0004ed70) popup_toobar_trans_pane_cp01_ParamLimits

0x7757,	// (0x0004ed70) popup_toobar_trans_pane_cp01

0x7d76,	// (0x0004f38f) popup_image_details_window_ParamLimits

0x7d76,	// (0x0004f38f) popup_image_details_window

0x7d84,	// (0x0004f39d) popup_image_focus_window

0x4a34,	// (0x0004c04d) camera2_autofocus_pane_ParamLimits

0x4a34,	// (0x0004c04d) camera2_autofocus_pane

0x477a,	// (0x0004bd93) bg_popup_sub_pane_cp06

0x0ec6,	// (0x000484df) popup_image_focus_window_g1

0x0ece,	// (0x000484e7) popup_image_focus_window_g2

0x0ed6,	// (0x000484ef) popup_image_focus_window_g3

0x0ede,	// (0x000484f7) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x00056ca3) popup_image_focus_window_g

0x0ee6,	// (0x000484ff) popup_image_focus_window_t1

0x0ef4,	// (0x0004850d) popup_image_focus_window_t2

0x0f04,	// (0x0004851d) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x00056cac) popup_image_focus_window_t

0xcf52,	// (0x0005456b) camera2_autofocus_pane_g1

0x519c,	// (0x0004c7b5) bg_tb_trans_pane_cp01

0x0f12,	// (0x0004852b) popup_image_details_window_g1

0x0f25,	// (0x0004853e) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x00056cbe) popup_image_details_window_g

0x0f4e,	// (0x00048567) popup_image_details_window_t1

0x0f60,	// (0x00048579) popup_image_details_window_t2

0x0f79,	// (0x00048592) popup_image_details_window_t3

0x0f8d,	// (0x000485a6) popup_image_details_window_t4

0x0fa8,	// (0x000485c1) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x00056cc5) popup_image_details_window_t

0xcfb0,	// (0x000545c9) bg_calc_paper_pane_ParamLimits

0x4a4e,	// (0x0004c067) grid_highlight_pane_cp013

0x5354,	// (0x0004c96d) list_calc_pane_ParamLimits

0x5366,	// (0x0004c97f) scroll_pane_cp024

0xcfc4,	// (0x000545dd) bg_calc_display_pane_ParamLimits

0x536e,	// (0x0004c987) calc_display_pane_t1_ParamLimits

0x5383,	// (0x0004c99c) calc_display_pane_t2_ParamLimits

0x5398,	// (0x0004c9b1) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00056725) calc_display_pane_t_ParamLimits

0x5471,	// (0x0004ca8a) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00056742) cell_calc_pane_g

0x547a,	// (0x0004ca93) cell_calc_pane_t1

0xd019,	// (0x00054632) grid_highlight_pane_cp02_ParamLimits

0xd02f,	// (0x00054648) toolbar_button_pane_cp01_ParamLimits

0xd02f,	// (0x00054648) toolbar_button_pane_cp01

0xde97,	// (0x000554b0) temp_image_control_pane_ParamLimits

0xde97,	// (0x000554b0) temp_image_control_pane

0x7ce2,	// (0x0004f2fb) main_mp3_pane

0x0fc2,	// (0x000485db) temp_image_control_pane_g1_ParamLimits

0x0fc2,	// (0x000485db) temp_image_control_pane_g1

0x0fd0,	// (0x000485e9) temp_image_control_pane_g2_ParamLimits

0x0fd0,	// (0x000485e9) temp_image_control_pane_g2

0x0fe2,	// (0x000485fb) temp_image_control_pane_g3_ParamLimits

0x0fe2,	// (0x000485fb) temp_image_control_pane_g3

0x8196,	// (0x0004f7af) temp_image_control_pane_g4_ParamLimits

0x8196,	// (0x0004f7af) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x00056cd0) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x00056cd0) temp_image_control_pane_g

0x0fc2,	// (0x000485db) main_mp3_pane_g1

0x81a7,	// (0x0004f7c0) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x00056cd9) main_mp3_pane_g

0x1017,	// (0x00048630) main_mp3_pane_t1

0xcf60,	// (0x00054579) main_camera_pane_g8_ParamLimits

0xcf60,	// (0x00054579) main_camera_pane_g8

0x5b92,	// (0x0004d1ab) main_video_pane_g7_ParamLimits

0x5b92,	// (0x0004d1ab) main_video_pane_g7

0x8038,	// (0x0004f651) main_camera2_pane_t7_ParamLimits

0x8038,	// (0x0004f651) main_camera2_pane_t7

0xd2c8,	// (0x000548e1) scroll_pane_cp025_ParamLimits

0xd2c8,	// (0x000548e1) scroll_pane_cp025

0xd2dc,	// (0x000548f5) scroll_pane_cp026_ParamLimits

0xd2dc,	// (0x000548f5) scroll_pane_cp026

0xd2eb,	// (0x00054904) wml_content_pane_ParamLimits

0x4a4e,	// (0x0004c067) main_touch_calib_pane

0x824b,	// (0x0004f864) main_touch_calib_pane_g1

0x8257,	// (0x0004f870) main_touch_calib_pane_g2

0x8263,	// (0x0004f87c) main_touch_calib_pane_g3

0x826f,	// (0x0004f888) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x00056cf7) main_touch_calib_pane_g

0x827b,	// (0x0004f894) main_touch_calib_pane_t1

0x8294,	// (0x0004f8ad) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x00056d00) main_touch_calib_pane_t

0xda87,	// (0x000550a0) mup_progress_pane_cp02

0xdabc,	// (0x000550d5) navi_pane_g1

0xdb77,	// (0x00055190) navi_pane_mp_t3

0x7ce2,	// (0x0004f2fb) main_mp3_pane_ParamLimits

0x7e63,	// (0x0004f47c) navi_pane_ParamLimits

0x0fc2,	// (0x000485db) main_mp3_pane_g1_ParamLimits

0x81a7,	// (0x0004f7c0) main_mp3_pane_g2_ParamLimits

0x81b3,	// (0x0004f7cc) main_mp3_pane_g3_ParamLimits

0x81b3,	// (0x0004f7cc) main_mp3_pane_g3

0x81bf,	// (0x0004f7d8) main_mp3_pane_g4_ParamLimits

0x81bf,	// (0x0004f7d8) main_mp3_pane_g4

0xcf52,	// (0x0005456b) main_mp3_pane_g5_ParamLimits

0xcf52,	// (0x0005456b) main_mp3_pane_g5

0x0ff2,	// (0x0004860b) main_mp3_pane_g6_ParamLimits

0x0ff2,	// (0x0004860b) main_mp3_pane_g6

0x0fff,	// (0x00048618) main_mp3_pane_g7_ParamLimits

0x0fff,	// (0x00048618) main_mp3_pane_g7

0x100b,	// (0x00048624) main_mp3_pane_g8_ParamLimits

0x100b,	// (0x00048624) main_mp3_pane_g8

0xf6c0,	// (0x00056cd9) main_mp3_pane_g_ParamLimits

0x81cb,	// (0x0004f7e4) main_mp3_pane_t2

0x81db,	// (0x0004f7f4) main_mp3_pane_t3

0x1025,	// (0x0004863e) main_mp3_pane_t4

0x1033,	// (0x0004864c) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x00056cea) main_mp3_pane_t

0x1041,	// (0x0004865a) mup_progress_pane_cp01

0x4692,	// (0x0004bcab) aid_zoom_text_secondary2

0x0e35,	// (0x0004844e) list_cale_ev2_pane

0x0e3d,	// (0x00048456) scroll_pane_cp023_ParamLimits

0x82ef,	// (0x0004f908) field_cale_ev2_pane_ParamLimits

0x82ef,	// (0x0004f908) field_cale_ev2_pane

0x1049,	// (0x00048662) field_cale_ev2_pane_g1_ParamLimits

0x1049,	// (0x00048662) field_cale_ev2_pane_g1

0x1055,	// (0x0004866e) field_cale_ev2_pane_g2_ParamLimits

0x1055,	// (0x0004866e) field_cale_ev2_pane_g2

0x106d,	// (0x00048686) field_cale_ev2_pane_g3_ParamLimits

0x106d,	// (0x00048686) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x00056d0b) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x00056d0b) field_cale_ev2_pane_g

0x8318,	// (0x0004f931) field_cale_ev2_pane_t1_ParamLimits

0x8318,	// (0x0004f931) field_cale_ev2_pane_t1

0x832f,	// (0x0004f948) field_cale_ev2_pane_t2_ParamLimits

0x832f,	// (0x0004f948) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x00056d14) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x00056d14) field_cale_ev2_pane_t

0x75df,	// (0x0004ebf8) main_postcard_pane_g5_ParamLimits

0x75df,	// (0x0004ebf8) main_postcard_pane_g5

0x75ed,	// (0x0004ec06) main_postcard_pane_g6_ParamLimits

0x75ed,	// (0x0004ec06) main_postcard_pane_g6

0x51f5,	// (0x0004c80e) camera2_autofocus_pane_cp_ParamLimits

0x51f5,	// (0x0004c80e) camera2_autofocus_pane_cp

0x7ce2,	// (0x0004f2fb) main_mup3_pane

0x8383,	// (0x0004f99c) main_mup3_pane_g1_ParamLimits

0x8383,	// (0x0004f99c) main_mup3_pane_g1

0x83a4,	// (0x0004f9bd) main_mup3_pane_g2_ParamLimits

0x83a4,	// (0x0004f9bd) main_mup3_pane_g2

0x841c,	// (0x0004fa35) main_mup3_pane_g3_ParamLimits

0x841c,	// (0x0004fa35) main_mup3_pane_g3

0x845f,	// (0x0004fa78) main_mup3_pane_g4_ParamLimits

0x845f,	// (0x0004fa78) main_mup3_pane_g4

0x84a2,	// (0x0004fabb) main_mup3_pane_g5_ParamLimits

0x84a2,	// (0x0004fabb) main_mup3_pane_g5

0x84e5,	// (0x0004fafe) main_mup3_pane_g6_ParamLimits

0x84e5,	// (0x0004fafe) main_mup3_pane_g6

0xcf60,	// (0x00054579) main_mup3_pane_g7_ParamLimits

0xcf60,	// (0x00054579) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x00056d24) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x00056d24) main_mup3_pane_g

0x855b,	// (0x0004fb74) main_mup3_pane_t1_ParamLimits

0x855b,	// (0x0004fb74) main_mup3_pane_t1

0x85ca,	// (0x0004fbe3) main_mup3_pane_t2_ParamLimits

0x85ca,	// (0x0004fbe3) main_mup3_pane_t2

0x8693,	// (0x0004fcac) main_mup3_pane_t4_ParamLimits

0x8693,	// (0x0004fcac) main_mup3_pane_t4

0x86e1,	// (0x0004fcfa) main_mup3_pane_t5_ParamLimits

0x86e1,	// (0x0004fcfa) main_mup3_pane_t5

0x8791,	// (0x0004fdaa) main_mup3_pane_t6_ParamLimits

0x8791,	// (0x0004fdaa) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x00056d35) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x00056d35) main_mup3_pane_t

0x883d,	// (0x0004fe56) mup3_progress_pane_ParamLimits

0x883d,	// (0x0004fe56) mup3_progress_pane

0x88bb,	// (0x0004fed4) popup_mup3_control_window_ParamLimits

0x88bb,	// (0x0004fed4) popup_mup3_control_window

0x1091,	// (0x000486aa) popup_mup3_text_window

0x88d4,	// (0x0004feed) mup3_progress_pane_t1

0x88f3,	// (0x0004ff0c) mup3_progress_pane_t2

0x1099,	// (0x000486b2) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x00056d42) mup3_progress_pane_t

0x10b6,	// (0x000486cf) mup_progress_pane_cp03

0x477a,	// (0x0004bd93) bg_tb_trans_pane_cp04

0x8912,	// (0x0004ff2b) mup3_volume_pane

0x891a,	// (0x0004ff33) popup_mup3_control_window_g1

0x8923,	// (0x0004ff3c) mup3_volume_pane_g1

0x892c,	// (0x0004ff45) mup3_volume_pane_g2

0x8935,	// (0x0004ff4e) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x00056d49) mup3_volume_pane_g

0x477a,	// (0x0004bd93) bg_tb_trans_pane_cp03

0x10c6,	// (0x000486df) popup_mup3_text_window_g1

0x10ce,	// (0x000486e7) popup_mup3_text_window_t1

0xd00c,	// (0x00054625) list_calc_item_pane_g1_ParamLimits

0x0b2f,	// (0x00048148) mup_volume_pane_cp_g1

0x82ad,	// (0x0004f8c6) main_touch_calib_pane_t3

0x82c3,	// (0x0004f8dc) main_touch_calib_pane_t4

0x82d9,	// (0x0004f8f2) main_touch_calib_pane_t5

0x4784,	// (0x0004bd9d) aid_cell_size_toolbar2

0x478c,	// (0x0004bda5) aid_popup3_width_pane

0x468a,	// (0x0004bca3) aid_zoom_text_msg_primary

0x5a94,	// (0x0004d0ad) vorec_t7

0xcfd0,	// (0x000545e9) bg_calc_paper_pane_g1_ParamLimits

0xcfdc,	// (0x000545f5) bg_calc_paper_pane_g2_ParamLimits

0xcfe8,	// (0x00054601) bg_calc_paper_pane_g3_ParamLimits

0xcff4,	// (0x0005460d) bg_calc_paper_pane_g4_ParamLimits

0xd000,	// (0x00054619) bg_calc_paper_pane_g5_ParamLimits

0x53d7,	// (0x0004c9f0) bg_calc_paper_pane_g6_ParamLimits

0x53e8,	// (0x0004ca01) bg_calc_paper_pane_g7_ParamLimits

0x53f9,	// (0x0004ca12) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0005672c) bg_calc_paper_pane_g_ParamLimits

0x540a,	// (0x0004ca23) calc_bg_paper_pane_g9_ParamLimits

0x51f5,	// (0x0004c80e) image_qvga_pane_ParamLimits

0x51f5,	// (0x0004c80e) image_qvga_pane

0x517a,	// (0x0004c793) bg_popup_sub_pane_cp04_ParamLimits

0xddce,	// (0x000553e7) popup_mup_playback_window_g1_ParamLimits

0xddda,	// (0x000553f3) popup_mup_playback_window_t1_ParamLimits

0xddef,	// (0x00055408) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x00056a8f) popup_mup_playback_window_t_ParamLimits

0xcf52,	// (0x0005456b) main_mup2_pane_g3_ParamLimits

0xcf52,	// (0x0005456b) main_mup2_pane_g3

0x5d79,	// (0x0004d392) popup_toolbar_window_cp04

0xe1d1,	// (0x000557ea) popup_call2_audio_second_window_g3_ParamLimits

0xe1d1,	// (0x000557ea) popup_call2_audio_second_window_g3

0xe5db,	// (0x00055bf4) popup_call2_audio_first_window_g4_ParamLimits

0xe5db,	// (0x00055bf4) popup_call2_audio_first_window_g4

0xec02,	// (0x0005621b) popup_call2_audio_in_window_g4_ParamLimits

0xec02,	// (0x0005621b) popup_call2_audio_in_window_g4

0x76f2,	// (0x0004ed0b) aid_area_sk_bg_cut_ParamLimits

0x76f2,	// (0x0004ed0b) aid_area_sk_bg_cut

0xde04,	// (0x0005541d) aid_area_sk_bg_cut_2_ParamLimits

0xde04,	// (0x0005541d) aid_area_sk_bg_cut_2

0x477a,	// (0x0004bd93) aid_placing_details_win

0x477a,	// (0x0004bd93) aid_placing_details_win_2

0xcf52,	// (0x0005456b) camera2_autofocus_pane_g1_ParamLimits

0x49da,	// (0x0004bff3) popup_fixed_preview_cale_window_ParamLimits

0x49da,	// (0x0004bff3) popup_fixed_preview_cale_window

0xdbf5,	// (0x0005520e) navi_slider_pane_g3

0xdbfe,	// (0x00055217) navi_slider_pane_g4

0xdc07,	// (0x00055220) navi_slider_pane_g5

0xdbf5,	// (0x0005520e) navi_slider_pane_g6

0x71a5,	// (0x0004e7be) navi_slider_pane_g7

0xdd05,	// (0x0005531e) mup_scale_pane_g3

0xdd0e,	// (0x00055327) mup_scale_pane_g4

0xdd17,	// (0x00055330) mup_scale_pane_g5

0x73a6,	// (0x0004e9bf) mup_scale_pane_g6

0x73af,	// (0x0004e9c8) mup_scale_pane_g7

0x1e70,	// (0x00049489) cams2_slider_pane_g3

0x1e70,	// (0x00049489) cams2_slider_pane_g4

0x1e70,	// (0x00049489) cams2_slider_pane_g5

0x1e70,	// (0x00049489) cams2_slider_pane_g6

0x1e70,	// (0x00049489) cams2_slider_pane_g7

0xd1ac,	// (0x000547c5) camera2_autofocus_pane_cp_g1

0xeed8,	// (0x000564f1) bg_popup_preview_window_pane_cp02_ParamLimits

0xeed8,	// (0x000564f1) bg_popup_preview_window_pane_cp02

0x10dc,	// (0x000486f5) list_fp_cale_pane_ParamLimits

0x10dc,	// (0x000486f5) list_fp_cale_pane

0x10e8,	// (0x00048701) popup_fixed_preview_cale_window_t1_ParamLimits

0x10e8,	// (0x00048701) popup_fixed_preview_cale_window_t1

0x893e,	// (0x0004ff57) popup_fixed_preview_cale_window_t2_ParamLimits

0x893e,	// (0x0004ff57) popup_fixed_preview_cale_window_t2

0x8953,	// (0x0004ff6c) popup_fixed_preview_cale_window_t3_ParamLimits

0x8953,	// (0x0004ff6c) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x00056d50) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x00056d50) popup_fixed_preview_cale_window_t

0x8968,	// (0x0004ff81) list_single_fp_cale_pane_ParamLimits

0x8968,	// (0x0004ff81) list_single_fp_cale_pane

0x1106,	// (0x0004871f) list_single_fp_cale_pane_g1_ParamLimits

0x1106,	// (0x0004871f) list_single_fp_cale_pane_g1

0x1112,	// (0x0004872b) list_single_fp_cale_pane_g2_ParamLimits

0x1112,	// (0x0004872b) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x00056d57) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x00056d57) list_single_fp_cale_pane_g

0x112b,	// (0x00048744) list_single_fp_cale_pane_t1_ParamLimits

0x112b,	// (0x00048744) list_single_fp_cale_pane_t1

0x113d,	// (0x00048756) list_single_fp_cale_pane_t2_ParamLimits

0x113d,	// (0x00048756) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x00056d5e) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x00056d5e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4a4e,	// (0x0004c067) main_dialer_pane

0x477a,	// (0x0004bd93) aid_cell_size_keypad

0x477a,	// (0x0004bd93) dialer_ne_pane

0x477a,	// (0x0004bd93) grid_dialer_command_1_pane

0x477a,	// (0x0004bd93) grid_dialer_command_2_pane

0x477a,	// (0x0004bd93) grid_dialer_keypad_pane

0x0ab9,	// (0x000480d2) bg_popup_call_pane_cp06_ParamLimits

0x0ab9,	// (0x000480d2) bg_popup_call_pane_cp06

0x0ab9,	// (0x000480d2) dialer_ne_clear_pane_ParamLimits

0x0ab9,	// (0x000480d2) dialer_ne_clear_pane

0xd1ac,	// (0x000547c5) dialer_ne_pane_g1

0xd17e,	// (0x00054797) dialer_ne_pane_t1_ParamLimits

0xd17e,	// (0x00054797) dialer_ne_pane_t1

0x1389,	// (0x000489a2) dialer_ne_pane_t2_ParamLimits

0x1389,	// (0x000489a2) dialer_ne_pane_t2

0x897b,	// (0x0004ff94) dialer_ne_pane_t3_ParamLimits

0x897b,	// (0x0004ff94) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x00056d63) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x00056d63) dialer_ne_pane_t

0x897b,	// (0x0004ff94) dialer_ne_pane_t3_copy1_ParamLimits

0x897b,	// (0x0004ff94) dialer_ne_pane_t3_copy1

0x1170,	// (0x00048789) cell_dialer_keypad_pane_ParamLimits

0x1170,	// (0x00048789) cell_dialer_keypad_pane

0x519c,	// (0x0004c7b5) cell_dialer_command_1_pane_ParamLimits

0x519c,	// (0x0004c7b5) cell_dialer_command_1_pane

0x1187,	// (0x000487a0) cell_dialer_command_2_pane_ParamLimits

0x1187,	// (0x000487a0) cell_dialer_command_2_pane

0x519c,	// (0x0004c7b5) bg_button_pane_cp02_ParamLimits

0x519c,	// (0x0004c7b5) bg_button_pane_cp02

0xcf52,	// (0x0005456b) cell_dialer_keypad_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) cell_dialer_keypad_pane_g1

0x519c,	// (0x0004c7b5) bg_button_pane_cp03_ParamLimits

0x519c,	// (0x0004c7b5) bg_button_pane_cp03

0xcf52,	// (0x0005456b) cell_dialer_command_1_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) cell_dialer_command_1_pane_g1

0x477a,	// (0x0004bd93) bg_button_pane_cp04

0xd1ac,	// (0x000547c5) cell_dialer_command_2_pane_g1

0x477a,	// (0x0004bd93) bg_button_pane_cp06

0xd1ac,	// (0x000547c5) dialer_ne_clear_pane_g1

0xdac8,	// (0x000550e1) navi_pane_g2

0xdaf6,	// (0x0005510f) navi_pane_g3

0x0002,

0xf379,	// (0x00056992) navi_pane_g

0xdb85,	// (0x0005519e) navi_pane_mv_g2

0xdbac,	// (0x000551c5) navi_pane_mv_g5

0x7170,	// (0x0004e789) navi_pane_mv_t1

0xcfc4,	// (0x000545dd) main_clock2_pane

0x51f5,	// (0x0004c80e) main_clock2_list_pane_ParamLimits

0x51f5,	// (0x0004c80e) main_clock2_list_pane

0x89f1,	// (0x0005000a) main_clock2_pane_t1_ParamLimits

0x89f1,	// (0x0005000a) main_clock2_pane_t1

0x8a1f,	// (0x00050038) main_clock2_pane_t2_ParamLimits

0x8a1f,	// (0x00050038) main_clock2_pane_t2

0x0004,

0xf756,	// (0x00056d6f) main_clock2_pane_t_ParamLimits

0xf756,	// (0x00056d6f) main_clock2_pane_t

0x8a84,	// (0x0005009d) popup_clock_analogue_window_cp03_ParamLimits

0x8a84,	// (0x0005009d) popup_clock_analogue_window_cp03

0x8aa2,	// (0x000500bb) popup_clock_digital_window_cp02_ParamLimits

0x8aa2,	// (0x000500bb) popup_clock_digital_window_cp02

0x8b17,	// (0x00050130) main_clock2_list_single_pane_ParamLimits

0x8b17,	// (0x00050130) main_clock2_list_single_pane

0xd176,	// (0x0005478f) list_highlight_pane_cp05

0x11ce,	// (0x000487e7) main_clock2_list_single_pane_t1

0x5d79,	// (0x0004d392) popup_toolbar_window_cp04_ParamLimits

0xcf60,	// (0x00054579) camera2_autofocus_pane_g2_ParamLimits

0xcf60,	// (0x00054579) camera2_autofocus_pane_g2

0xcf60,	// (0x00054579) camera2_autofocus_pane_g3_ParamLimits

0xcf60,	// (0x00054579) camera2_autofocus_pane_g3

0xcf60,	// (0x00054579) camera2_autofocus_pane_g4_ParamLimits

0xcf60,	// (0x00054579) camera2_autofocus_pane_g4

0xcf60,	// (0x00054579) camera2_autofocus_pane_g5_ParamLimits

0xcf60,	// (0x00054579) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x00056cb3) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x00056cb3) camera2_autofocus_pane_g

0x8344,	// (0x0004f95d) camera2_autofocus_pane_cp_g2

0x834c,	// (0x0004f965) camera2_autofocus_pane_cp_g3

0x8354,	// (0x0004f96d) camera2_autofocus_pane_cp_g4

0x835c,	// (0x0004f975) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x00056d19) camera2_autofocus_pane_cp_g

0x477a,	// (0x0004bd93) popup_dialer_spcha_window

0x477a,	// (0x0004bd93) bg_popup_sub_pane_cp07

0x477a,	// (0x0004bd93) list_spcha_pane

0x11dc,	// (0x000487f5) list_single_spcha_pane_ParamLimits

0x11dc,	// (0x000487f5) list_single_spcha_pane

0x477a,	// (0x0004bd93) list_highlight_pane_cp06

0xd6ef,	// (0x00054d08) list_single_spcha_pane_t1

0xe9ac,	// (0x00055fc5) popup_call2_audio_out_window_g4_ParamLimits

0xe9ac,	// (0x00055fc5) popup_call2_audio_out_window_g4

0x4a4e,	// (0x0004c067) main_imed2_pane

0x7d8c,	// (0x0004f3a5) popup_imed_adjust2_window

0x7d9f,	// (0x0004f3b8) popup_imed_trans_window_ParamLimits

0x7d9f,	// (0x0004f3b8) popup_imed_trans_window

0x0c04,	// (0x0004821d) popup_blid_sat_info2_window_t1

0x0c12,	// (0x0004822b) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x00056c48) popup_blid_sat_info2_window_t

0x8bcc,	// (0x000501e5) aid_size_cell_colour_35

0x8be6,	// (0x000501ff) aid_size_cell_colour_112

0x8bfd,	// (0x00050216) aid_size_cell_effect

0x519c,	// (0x0004c7b5) bg_tb_trans_pane_cp02

0xf04b,	// (0x00056664) heading_imed_pane

0x8c17,	// (0x00050230) listscroll_imed_pane

0x11ee,	// (0x00048807) heading_imed_pane_g1

0x11f6,	// (0x0004880f) heading_imed_pane_t1

0x1204,	// (0x0004881d) grid_imed_colour_35_pane_ParamLimits

0x1204,	// (0x0004881d) grid_imed_colour_35_pane

0x8c23,	// (0x0005023c) grid_imed_effect_pane

0x121b,	// (0x00048834) list_imed_aspect_pane

0x8c33,	// (0x0005024c) scroll_pane_cp027_ParamLimits

0x8c33,	// (0x0005024c) scroll_pane_cp027

0x8c3f,	// (0x00050258) cell_imed_effect_pane_ParamLimits

0x8c3f,	// (0x00050258) cell_imed_effect_pane

0x1223,	// (0x0004883c) cell_imed_colour_pane_ParamLimits

0x1223,	// (0x0004883c) cell_imed_colour_pane

0x1265,	// (0x0004887e) cell_imed_colour_pane_g1_ParamLimits

0x1265,	// (0x0004887e) cell_imed_colour_pane_g1

0x1276,	// (0x0004888f) hgihlgiht_grid_pane_cp016_ParamLimits

0x1276,	// (0x0004888f) hgihlgiht_grid_pane_cp016

0x8c57,	// (0x00050270) cell_imed_effect_pane_g1

0x8c5f,	// (0x00050278) grid_highlight_pane_cp017

0x1287,	// (0x000488a0) list_imed_single_pane_ParamLimits

0x1287,	// (0x000488a0) list_imed_single_pane

0x477a,	// (0x0004bd93) list_highlight_pane_cp07

0x129c,	// (0x000488b5) list_imed_aspect_pane_comp1_t1

0xeee4,	// (0x000564fd) bg_tb_trans_pane_cp05

0x12be,	// (0x000488d7) popup_imed_adjust2_window_g1

0x12e5,	// (0x000488fe) popup_imed_adjust2_window_t1

0x12fd,	// (0x00048916) slider_imed_adjust_pane

0x1311,	// (0x0004892a) slider_imed_adjust_pane_g1

0x1321,	// (0x0004893a) slider_imed_adjust_pane_g2

0x1331,	// (0x0004894a) slider_imed_adjust_pane_g3

0x1342,	// (0x0004895b) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x00056d8c) slider_imed_adjust_pane_g

0x8c68,	// (0x00050281) aid_size_cell_clipart2

0x8c74,	// (0x0005028d) grid_imed_clipart_pane

0x1353,	// (0x0004896c) scroll_pane_cp031

0x8c7e,	// (0x00050297) cell_imed_clipart_pane_ParamLimits

0x8c7e,	// (0x00050297) cell_imed_clipart_pane

0x8ca0,	// (0x000502b9) cell_imed_clipart_pane_g1

0x477a,	// (0x0004bd93) grid_highlight_pane_cp014

0x89d3,	// (0x0004ffec) main_clock2_pane_g1_ParamLimits

0x89d3,	// (0x0004ffec) main_clock2_pane_g1

0x8abe,	// (0x000500d7) aid_call2_pane_cp10

0x8ad0,	// (0x000500e9) aid_call_pane_cp10

0xda29,	// (0x00055042) popup_clock_analogue_window_cp10_g1

0xda29,	// (0x00055042) popup_clock_analogue_window_cp10_g2

0x8ae2,	// (0x000500fb) popup_clock_analogue_window_cp10_g3

0x8ae2,	// (0x000500fb) popup_clock_analogue_window_cp10_g4

0xda29,	// (0x00055042) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x00056d7a) popup_clock_analogue_window_cp10_g

0x8af8,	// (0x00050111) popup_clock_analogue_window_cp10_t1

0x8b29,	// (0x00050142) clock_digital_number_pane_cp10_ParamLimits

0x8b29,	// (0x00050142) clock_digital_number_pane_cp10

0x8b43,	// (0x0005015c) clock_digital_number_pane_cp11_ParamLimits

0x8b43,	// (0x0005015c) clock_digital_number_pane_cp11

0x8b5d,	// (0x00050176) clock_digital_number_pane_cp12_ParamLimits

0x8b5d,	// (0x00050176) clock_digital_number_pane_cp12

0x8b77,	// (0x00050190) clock_digital_number_pane_cp13_ParamLimits

0x8b77,	// (0x00050190) clock_digital_number_pane_cp13

0x8b91,	// (0x000501aa) clock_digital_separator_pane_cp10_ParamLimits

0x8b91,	// (0x000501aa) clock_digital_separator_pane_cp10

0x8bab,	// (0x000501c4) popup_clock_digital_window_cp02_t1_ParamLimits

0x8bab,	// (0x000501c4) popup_clock_digital_window_cp02_t1

0x5172,	// (0x0004c78b) clock_digital_number_pane_cp10_g1

0x5172,	// (0x0004c78b) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x00056d95) clock_digital_number_pane_cp10_g

0x5172,	// (0x0004c78b) clock_digital_separator_pane_cp10_g1

0x5172,	// (0x0004c78b) clock_digital_separator_pane_g2_cp10

0xdbb4,	// (0x000551cd) navi_pane_vded_g4

0xdbbd,	// (0x000551d6) navi_pane_vded_g5

0xdbc6,	// (0x000551df) navi_pane_vded_t1

0x4a4e,	// (0x0004c067) main_vded_pane

0x8ca9,	// (0x000502c2) main_vded_pane_g1

0x8cb5,	// (0x000502ce) main_vded_pane_g2

0x8cbf,	// (0x000502d8) main_vded_pane_g3

0x0002,

0xf781,	// (0x00056d9a) main_vded_pane_g

0x8cc9,	// (0x000502e2) main_vded_pane_t1

0x8cd7,	// (0x000502f0) main_vded_pane_t2

0x0001,

0xf788,	// (0x00056da1) main_vded_pane_t

0x8ce5,	// (0x000502fe) vded_slider_pane

0x8cef,	// (0x00050308) vded_video_pane

0x135b,	// (0x00048974) vded_video_pane_g1

0x8cf9,	// (0x00050312) vded_video_pane_g2

0xd1ac,	// (0x000547c5) vded_video_pane_g3

0x0002,

0xf78d,	// (0x00056da6) vded_video_pane_g

0x1365,	// (0x0004897e) vded_slider_pane_g1

0x0b2f,	// (0x00048148) vded_slider_pane_g2

0x136e,	// (0x00048987) vded_slider_pane_g3

0x1377,	// (0x00048990) vded_slider_pane_g4

0x1380,	// (0x00048999) vded_slider_pane_g5

0x0004,

0xf794,	// (0x00056dad) vded_slider_pane_g

0x88ad,	// (0x0004fec6) mup3_rocker_pane_ParamLimits

0x88ad,	// (0x0004fec6) mup3_rocker_pane

0x8d02,	// (0x0005031b) mup3_control_keys_pane_g1

0x8d0a,	// (0x00050323) mup3_control_keys_pane_g2

0x8d12,	// (0x0005032b) mup3_control_keys_pane_g3

0x8d1a,	// (0x00050333) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x00056db8) mup3_control_keys_pane_g

0x4a02,	// (0x0004c01b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4a02,	// (0x0004c01b) popup_toolbar2_fixed_window_cp01

0x88c7,	// (0x0004fee0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x88c7,	// (0x0004fee0) popup_toolbar2_fixed_window_cp02

0xe343,	// (0x0005595c) popup_call2_audio_second_window_t4_ParamLimits

0xe343,	// (0x0005595c) popup_call2_audio_second_window_t4

0xe871,	// (0x00055e8a) popup_call2_audio_first_window_t6_ParamLimits

0xe871,	// (0x00055e8a) popup_call2_audio_first_window_t6

0xeaaf,	// (0x000560c8) popup_call2_audio_out_window_t6_ParamLimits

0xeaaf,	// (0x000560c8) popup_call2_audio_out_window_t6

0x4a4e,	// (0x0004c067) main_vitu_pane

0x51f5,	// (0x0004c80e) aid_size_cell_itu_ParamLimits

0x51f5,	// (0x0004c80e) aid_size_cell_itu

0x51f5,	// (0x0004c80e) bg_popup_window_pane_cp08_ParamLimits

0x51f5,	// (0x0004c80e) bg_popup_window_pane_cp08

0x51f5,	// (0x0004c80e) field_vitu_entry_pane_ParamLimits

0x51f5,	// (0x0004c80e) field_vitu_entry_pane

0x51f5,	// (0x0004c80e) grid_vitu_function_pane_ParamLimits

0x51f5,	// (0x0004c80e) grid_vitu_function_pane

0x51f5,	// (0x0004c80e) grid_vitu_itu_pane_ParamLimits

0x51f5,	// (0x0004c80e) grid_vitu_itu_pane

0x51f5,	// (0x0004c80e) cell_vitu_itu_pane_ParamLimits

0x51f5,	// (0x0004c80e) cell_vitu_itu_pane

0x51f5,	// (0x0004c80e) cell_vitu_function_pane_ParamLimits

0x51f5,	// (0x0004c80e) cell_vitu_function_pane

0x519c,	// (0x0004c7b5) bg_popup_sub_pane_cp08_ParamLimits

0x519c,	// (0x0004c7b5) bg_popup_sub_pane_cp08

0xd1c6,	// (0x000547df) field_vitu_entry_pane_t1_ParamLimits

0xd1c6,	// (0x000547df) field_vitu_entry_pane_t1

0x1389,	// (0x000489a2) field_vitu_entry_pane_t2_ParamLimits

0x1389,	// (0x000489a2) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x00056dc1) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x00056dc1) field_vitu_entry_pane_t

0x0ab9,	// (0x000480d2) bg_button_pane_cp05_ParamLimits

0x0ab9,	// (0x000480d2) bg_button_pane_cp05

0x13a6,	// (0x000489bf) cell_vitu_itu_pane_g1

0xf057,	// (0x00056670) cell_vitu_itu_pane_t1_ParamLimits

0xf057,	// (0x00056670) cell_vitu_itu_pane_t1

0xf057,	// (0x00056670) cell_vitu_itu_pane_t2_ParamLimits

0xf057,	// (0x00056670) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x00056dc6) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x00056dc6) cell_vitu_itu_pane_t

0x477a,	// (0x0004bd93) bg_button_pane_cp07

0xd1ac,	// (0x000547c5) cell_vitu_function_pane_g1

0x527b,	// (0x0004c894) main_calc_pane_g1

0x47c0,	// (0x0004bdd9) aid_visual_content_pane

0x4a4e,	// (0x0004c067) main_vradio_pane

0xcf60,	// (0x00054579) main_vradio_pane_g1_ParamLimits

0xcf60,	// (0x00054579) main_vradio_pane_g1

0xcf60,	// (0x00054579) main_vradio_pane_g2_ParamLimits

0xcf60,	// (0x00054579) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x00056dcd) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x00056dcd) main_vradio_pane_g

0xd17e,	// (0x00054797) main_vradio_pane_t1_ParamLimits

0xd17e,	// (0x00054797) main_vradio_pane_t1

0xd17e,	// (0x00054797) main_vradio_pane_t2_ParamLimits

0xd17e,	// (0x00054797) main_vradio_pane_t2

0xd17e,	// (0x00054797) main_vradio_pane_t3_ParamLimits

0xd17e,	// (0x00054797) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x00056dd2) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x00056dd2) main_vradio_pane_t

0x51f5,	// (0x0004c80e) vradio_rocker_control_pane_ParamLimits

0x51f5,	// (0x0004c80e) vradio_rocker_control_pane

0x51f5,	// (0x0004c80e) vradio_station_info_pane_ParamLimits

0x51f5,	// (0x0004c80e) vradio_station_info_pane

0x519c,	// (0x0004c7b5) vradio_frequency_info_pane_ParamLimits

0x519c,	// (0x0004c7b5) vradio_frequency_info_pane

0xd1ac,	// (0x000547c5) vradio_station_info_pane_g1

0xf057,	// (0x00056670) vradio_station_info_pane_t1_ParamLimits

0xf057,	// (0x00056670) vradio_station_info_pane_t1

0xd17e,	// (0x00054797) vradio_station_info_pane_t2_ParamLimits

0xd17e,	// (0x00054797) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x00056dd9) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x00056dd9) vradio_station_info_pane_t

0x477a,	// (0x0004bd93) vradio_tuning_pane

0x8d2a,	// (0x00050343) vradio_rocker_control_pane_g1

0x13c2,	// (0x000489db) vradio_rocker_control_pane_g2

0x8d32,	// (0x0005034b) vradio_rocker_control_pane_g3

0x8d3a,	// (0x00050353) vradio_rocker_control_pane_g4

0x8d42,	// (0x0005035b) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x00056dde) vradio_rocker_control_pane_g

0xd1ac,	// (0x000547c5) vradio_frequency_info_pane_g1

0xd1c6,	// (0x000547df) vradio_frequency_info_pane_t1_ParamLimits

0xd1c6,	// (0x000547df) vradio_frequency_info_pane_t1

0x8d4a,	// (0x00050363) vradio_tuning_pane_g1

0x8d57,	// (0x00050370) vradio_tuning_pane_t1

0x4809,	// (0x0004be22) area_side_right_pane_ParamLimits

0x4809,	// (0x0004be22) area_side_right_pane

0xee9f,	// (0x000564b8) status_small_pane_g1

0xeea7,	// (0x000564c0) status_small_pane_g2

0xeeb0,	// (0x000564c9) status_small_pane_g3

0xeeb9,	// (0x000564d2) status_small_pane_g4

0x0003,

0xf591,	// (0x00056baa) status_small_pane_g

0xeec2,	// (0x000564db) status_small_pane_t1

0x4a4e,	// (0x0004c067) main_video3_pane

0x13ca,	// (0x000489e3) cams_zoom_vslider_pane

0x13d2,	// (0x000489eb) image3_wide_pane_ParamLimits

0x13d2,	// (0x000489eb) image3_wide_pane

0x13ec,	// (0x00048a05) image3_wide_small_pane

0x13f8,	// (0x00048a11) main_video3_pane_g1_ParamLimits

0x13f8,	// (0x00048a11) main_video3_pane_g1

0x1414,	// (0x00048a2d) main_video3_pane_g2_ParamLimits

0x1414,	// (0x00048a2d) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x00056de9) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x00056de9) main_video3_pane_g

0x1430,	// (0x00048a49) main_video3_pane_t1_ParamLimits

0x1430,	// (0x00048a49) main_video3_pane_t1

0x145b,	// (0x00048a74) main_video3_pane_t2_ParamLimits

0x145b,	// (0x00048a74) main_video3_pane_t2

0x1486,	// (0x00048a9f) main_video3_pane_t3_ParamLimits

0x1486,	// (0x00048a9f) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x00056dee) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x00056dee) main_video3_pane_t

0x14b3,	// (0x00048acc) cams_zoom_vslider_pane_g1

0x14bc,	// (0x00048ad5) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x00056df5) cams_zoom_vslider_pane_g

0x14c4,	// (0x00048add) small_slider_vertical_pane

0xd1ac,	// (0x000547c5) small_slider_vertical_pane_g1

0xd1ac,	// (0x000547c5) small_slider_vertical_pane_g2

0x14cc,	// (0x00048ae5) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x00056dfa) small_slider_vertical_pane_g

0x4a4e,	// (0x0004c067) main_hwr_training_pane

0x14d5,	// (0x00048aee) hwr_training_instruct_pane_ParamLimits

0x14d5,	// (0x00048aee) hwr_training_instruct_pane

0x8d66,	// (0x0005037f) hwr_training_navi_pane_ParamLimits

0x8d66,	// (0x0005037f) hwr_training_navi_pane

0x8d80,	// (0x00050399) hwr_training_write_pane_ParamLimits

0x8d80,	// (0x00050399) hwr_training_write_pane

0x477a,	// (0x0004bd93) bg_frame_shadow_pane

0x150c,	// (0x00048b25) hwr_training_write_pane_g1

0x1514,	// (0x00048b2d) hwr_training_write_pane_g2

0x151c,	// (0x00048b35) hwr_training_write_pane_g3

0x1524,	// (0x00048b3d) hwr_training_write_pane_g4

0x152c,	// (0x00048b45) hwr_training_write_pane_g5

0x1534,	// (0x00048b4d) hwr_training_write_pane_g6

0x153c,	// (0x00048b55) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x00056e01) hwr_training_write_pane_g

0x8db8,	// (0x000503d1) hwr_training_navi_pane_g1_ParamLimits

0x8db8,	// (0x000503d1) hwr_training_navi_pane_g1

0x8dca,	// (0x000503e3) hwr_training_navi_pane_g2_ParamLimits

0x8dca,	// (0x000503e3) hwr_training_navi_pane_g2

0x8ddc,	// (0x000503f5) hwr_training_navi_pane_g3_ParamLimits

0x8ddc,	// (0x000503f5) hwr_training_navi_pane_g3

0x8dec,	// (0x00050405) hwr_training_navi_pane_g4_ParamLimits

0x8dec,	// (0x00050405) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x00056e10) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x00056e10) hwr_training_navi_pane_g

0x8e06,	// (0x0005041f) hwr_training_navi_pane_t1

0x8e14,	// (0x0005042d) list_single_hwr_training_instruct_pane_ParamLimits

0x8e14,	// (0x0005042d) list_single_hwr_training_instruct_pane

0x1593,	// (0x00048bac) list_single_hwr_training_instruct_pane_t1

0x0d05,	// (0x0004831e) bg_frame_shadow_pane_g1

0x15a2,	// (0x00048bbb) bg_frame_shadow_pane_g2

0x15aa,	// (0x00048bc3) bg_frame_shadow_pane_g3

0x15b2,	// (0x00048bcb) bg_frame_shadow_pane_g4

0x15ba,	// (0x00048bd3) bg_frame_shadow_pane_g5

0x15c2,	// (0x00048bdb) bg_frame_shadow_pane_g6

0x15ca,	// (0x00048be3) bg_frame_shadow_pane_g7

0xd073,	// (0x0005468c) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x00056e1b) bg_frame_shadow_pane_g

0x4a4e,	// (0x0004c067) main_video_tele_dialer_pane

0x8e39,	// (0x00050452) aid_size_cell_video_keypad_ParamLimits

0x8e39,	// (0x00050452) aid_size_cell_video_keypad

0x8e49,	// (0x00050462) grid_video_dialer_keypad_pane_ParamLimits

0x8e49,	// (0x00050462) grid_video_dialer_keypad_pane

0x8e7d,	// (0x00050496) video_down_pane_cp_ParamLimits

0x8e7d,	// (0x00050496) video_down_pane_cp

0x8ea7,	// (0x000504c0) cell_video_dialer_keypad_pane_ParamLimits

0x8ea7,	// (0x000504c0) cell_video_dialer_keypad_pane

0x15d2,	// (0x00048beb) bg_button_pane_cp08_ParamLimits

0x15d2,	// (0x00048beb) bg_button_pane_cp08

0x8ebc,	// (0x000504d5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8ebc,	// (0x000504d5) cell_video_dialer_keypad_pane_g1

0x88a1,	// (0x0004feba) mup3_rocker2_pane_ParamLimits

0x88a1,	// (0x0004feba) mup3_rocker2_pane

0xd1ac,	// (0x000547c5) mup3_rocker2_pane_g1

0x7cf0,	// (0x0004f309) main_dialer2_pane

0x4a4e,	// (0x0004c067) main_mp4_pane

0x8f11,	// (0x0005052a) main_mp4_pane_g1_ParamLimits

0x8f11,	// (0x0005052a) main_mp4_pane_g1

0x8f1f,	// (0x00050538) main_mp4_pane_g2_ParamLimits

0x8f1f,	// (0x00050538) main_mp4_pane_g2

0x8f2d,	// (0x00050546) main_mp4_pane_g3_ParamLimits

0x8f2d,	// (0x00050546) main_mp4_pane_g3

0x8f72,	// (0x0005058b) main_mp4_pane_g4_ParamLimits

0x8f72,	// (0x0005058b) main_mp4_pane_g4

0x8fa0,	// (0x000505b9) main_mp4_pane_g5_ParamLimits

0x8fa0,	// (0x000505b9) main_mp4_pane_g5

0x0007,

0xf822,	// (0x00056e3b) main_mp4_pane_g_ParamLimits

0xf822,	// (0x00056e3b) main_mp4_pane_g

0x9014,	// (0x0005062d) main_mp4_pane_t1_ParamLimits

0x9014,	// (0x0005062d) main_mp4_pane_t1

0x9070,	// (0x00050689) main_mp4_pane_t2_ParamLimits

0x9070,	// (0x00050689) main_mp4_pane_t2

0x1638,	// (0x00048c51) main_mp4_pane_t3_ParamLimits

0x1638,	// (0x00048c51) main_mp4_pane_t3

0x90c2,	// (0x000506db) main_mp4_pane_t4_ParamLimits

0x90c2,	// (0x000506db) main_mp4_pane_t4

0x0003,

0xf833,	// (0x00056e4c) main_mp4_pane_t_ParamLimits

0xf833,	// (0x00056e4c) main_mp4_pane_t

0x9106,	// (0x0005071f) mp4_progress_pane_ParamLimits

0x9106,	// (0x0005071f) mp4_progress_pane

0x9150,	// (0x00050769) mp4_rocker_pane_ParamLimits

0x9150,	// (0x00050769) mp4_rocker_pane

0x1666,	// (0x00048c7f) mp4_progress_pane_t1

0x167f,	// (0x00048c98) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x00056e55) mp4_progress_pane_t

0x1698,	// (0x00048cb1) mup_progress_pane_cp04

0x1e70,	// (0x00049489) mp4_rocker_pane_g1

0x9170,	// (0x00050789) aid_cell_size_keypad2_ParamLimits

0x9170,	// (0x00050789) aid_cell_size_keypad2

0x9180,	// (0x00050799) dialer2_ne_pane_ParamLimits

0x9180,	// (0x00050799) dialer2_ne_pane

0x918e,	// (0x000507a7) grid_dialer2_keypad_pane_ParamLimits

0x918e,	// (0x000507a7) grid_dialer2_keypad_pane

0x0aab,	// (0x000480c4) bg_popup_call_pane_cp07_ParamLimits

0x0aab,	// (0x000480c4) bg_popup_call_pane_cp07

0x919e,	// (0x000507b7) dialer2_ne_pane_t1_ParamLimits

0x919e,	// (0x000507b7) dialer2_ne_pane_t1

0x91c3,	// (0x000507dc) cell_dialer2_keypad_pane_ParamLimits

0x91c3,	// (0x000507dc) cell_dialer2_keypad_pane

0x16bd,	// (0x00048cd6) bg_button_pane_pane_cp04_ParamLimits

0x16bd,	// (0x00048cd6) bg_button_pane_pane_cp04

0x91d8,	// (0x000507f1) cell_dialer2_keypad_pane_g1_ParamLimits

0x91d8,	// (0x000507f1) cell_dialer2_keypad_pane_g1

0x5c3b,	// (0x0004d254) aid_placing_vt_set_content_ParamLimits

0x5c3b,	// (0x0004d254) aid_placing_vt_set_content

0x5c67,	// (0x0004d280) aid_placing_vt_set_title_ParamLimits

0x5c67,	// (0x0004d280) aid_placing_vt_set_title

0x4a4e,	// (0x0004c067) main_image3_pane

0x9272,	// (0x0005088b) area_side_right_pane_cp01_ParamLimits

0x9272,	// (0x0005088b) area_side_right_pane_cp01

0x929f,	// (0x000508b8) main_image3_pane_g1_ParamLimits

0x929f,	// (0x000508b8) main_image3_pane_g1

0x92ad,	// (0x000508c6) main_image3_pane_g2_ParamLimits

0x92ad,	// (0x000508c6) main_image3_pane_g2

0x92c6,	// (0x000508df) main_image3_pane_g3_ParamLimits

0x92c6,	// (0x000508df) main_image3_pane_g3

0x92df,	// (0x000508f8) main_image3_pane_g4_ParamLimits

0x92df,	// (0x000508f8) main_image3_pane_g4

0x0003,

0xf84b,	// (0x00056e64) main_image3_pane_g_ParamLimits

0xf84b,	// (0x00056e64) main_image3_pane_g

0x92f8,	// (0x00050911) main_image3_pane_t1_ParamLimits

0x92f8,	// (0x00050911) main_image3_pane_t1

0x931d,	// (0x00050936) main_image3_pane_t2_ParamLimits

0x931d,	// (0x00050936) main_image3_pane_t2

0x933c,	// (0x00050955) main_image3_pane_t3_ParamLimits

0x933c,	// (0x00050955) main_image3_pane_t3

0x0003,

0xf854,	// (0x00056e6d) main_image3_pane_t_ParamLimits

0xf854,	// (0x00056e6d) main_image3_pane_t

0x51f5,	// (0x0004c80e) grid_sctrl_middle_pane_cp01_ParamLimits

0x51f5,	// (0x0004c80e) grid_sctrl_middle_pane_cp01

0x939d,	// (0x000509b6) cell_sctrl_middle_pane_cp01_ParamLimits

0x939d,	// (0x000509b6) cell_sctrl_middle_pane_cp01

0x93ae,	// (0x000509c7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x93ae,	// (0x000509c7) cell_sctrl_middle_pane_cp01_g1

0x4a4e,	// (0x0004c067) main_call4_pane

0x93bb,	// (0x000509d4) aid_size_button_call4_ParamLimits

0x93bb,	// (0x000509d4) aid_size_button_call4

0x93f1,	// (0x00050a0a) call4_windows_pane_ParamLimits

0x93f1,	// (0x00050a0a) call4_windows_pane

0x9406,	// (0x00050a1f) grid_call4_button_pane_ParamLimits

0x9406,	// (0x00050a1f) grid_call4_button_pane

0x9434,	// (0x00050a4d) call4_windows_conf_pane

0x944b,	// (0x00050a64) popup_call4_audio_first_window_ParamLimits

0x944b,	// (0x00050a64) popup_call4_audio_first_window

0x949b,	// (0x00050ab4) popup_call4_audio_second_window_ParamLimits

0x949b,	// (0x00050ab4) popup_call4_audio_second_window

0x94b4,	// (0x00050acd) popup_call4_audio_wait_window_ParamLimits

0x94b4,	// (0x00050acd) popup_call4_audio_wait_window

0x94c2,	// (0x00050adb) cell_call4_button_pane_ParamLimits

0x94c2,	// (0x00050adb) cell_call4_button_pane

0x94e5,	// (0x00050afe) bg_button_pane_cp09_ParamLimits

0x94e5,	// (0x00050afe) bg_button_pane_cp09

0x94f1,	// (0x00050b0a) cell_call4_button_pane_g1_ParamLimits

0x94f1,	// (0x00050b0a) cell_call4_button_pane_g1

0x94fe,	// (0x00050b17) cell_call4_button_pane_t1_ParamLimits

0x94fe,	// (0x00050b17) cell_call4_button_pane_t1

0x16d1,	// (0x00048cea) popup_call4_audio_conf_window_ParamLimits

0x16d1,	// (0x00048cea) popup_call4_audio_conf_window

0x88d4,	// (0x0004feed) mup3_progress_pane_t1_ParamLimits

0x88f3,	// (0x0004ff0c) mup3_progress_pane_t2_ParamLimits

0x1099,	// (0x000486b2) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x00056d42) mup3_progress_pane_t_ParamLimits

0x10b6,	// (0x000486cf) mup_progress_pane_cp03_ParamLimits

0x8d22,	// (0x0005033b) mup3_control_keys_pane_g4_copy1

0x9134,	// (0x0005074d) mp4_rocker2_pane_ParamLimits

0x9134,	// (0x0005074d) mp4_rocker2_pane

0x16ed,	// (0x00048d06) mp4_rocker2_pane_g1

0x16e5,	// (0x00048cfe) mp4_rocker2_pane_g2

0x9542,	// (0x00050b5b) mp4_rocker2_pane_g3

0x954a,	// (0x00050b63) mp4_rocker2_pane_g4

0x9552,	// (0x00050b6b) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x00056e76) mp4_rocker2_pane_g

0x4a4e,	// (0x0004c067) main_camera4_pane

0x4a4e,	// (0x0004c067) main_video4_pane

0x8e59,	// (0x00050472) main_video_tele_dialer_pane_t1_ParamLimits

0x8e59,	// (0x00050472) main_video_tele_dialer_pane_t1

0x8e6b,	// (0x00050484) main_video_tele_dialer_pane_t2_ParamLimits

0x8e6b,	// (0x00050484) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x00056e2c) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x00056e2c) main_video_tele_dialer_pane_t

0x9572,	// (0x00050b8b) cam4_autofocus_pane_ParamLimits

0x9572,	// (0x00050b8b) cam4_autofocus_pane

0x958c,	// (0x00050ba5) cam4_image_uncrop_pane_ParamLimits

0x958c,	// (0x00050ba5) cam4_image_uncrop_pane

0x95a3,	// (0x00050bbc) cam4_indicators_pane_ParamLimits

0x95a3,	// (0x00050bbc) cam4_indicators_pane

0x95bf,	// (0x00050bd8) main_camera4_pane_g1_ParamLimits

0x95bf,	// (0x00050bd8) main_camera4_pane_g1

0x95cb,	// (0x00050be4) main_camera4_pane_g2_ParamLimits

0x95cb,	// (0x00050be4) main_camera4_pane_g2

0x95cb,	// (0x00050be4) main_camera4_pane_g3_ParamLimits

0x95cb,	// (0x00050be4) main_camera4_pane_g3

0x95d7,	// (0x00050bf0) main_camera4_pane_g4_ParamLimits

0x95d7,	// (0x00050bf0) main_camera4_pane_g4

0x95e3,	// (0x00050bfc) main_camera4_pane_g5_ParamLimits

0x95e3,	// (0x00050bfc) main_camera4_pane_g5

0x0005,

0xf868,	// (0x00056e81) main_camera4_pane_g_ParamLimits

0xf868,	// (0x00056e81) main_camera4_pane_g

0x95fd,	// (0x00050c16) main_camera4_pane_t1_ParamLimits

0x95fd,	// (0x00050c16) main_camera4_pane_t1

0x2a02,	// (0x0004a01b) bg_tb_trans_pane_cp06

0x964d,	// (0x00050c66) cam4_indicators_pane_g1

0x965e,	// (0x00050c77) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x00056e9c) cam4_indicators_pane_g

0x967c,	// (0x00050c95) cam4_indicators_pane_t1

0x96a6,	// (0x00050cbf) main_video4_pane_g1_ParamLimits

0x96a6,	// (0x00050cbf) main_video4_pane_g1

0x96b2,	// (0x00050ccb) main_video4_pane_g2_ParamLimits

0x96b2,	// (0x00050ccb) main_video4_pane_g2

0x96be,	// (0x00050cd7) main_video4_pane_g3_ParamLimits

0x96be,	// (0x00050cd7) main_video4_pane_g3

0x96ca,	// (0x00050ce3) main_video4_pane_g4_ParamLimits

0x96ca,	// (0x00050ce3) main_video4_pane_g4

0x0004,

0xf88a,	// (0x00056ea3) main_video4_pane_g_ParamLimits

0xf88a,	// (0x00056ea3) main_video4_pane_g

0x96ea,	// (0x00050d03) vid4_indicators_pane_ParamLimits

0x96ea,	// (0x00050d03) vid4_indicators_pane

0x9709,	// (0x00050d22) video4_image_uncrop_cif_pane_ParamLimits

0x9709,	// (0x00050d22) video4_image_uncrop_cif_pane

0x9718,	// (0x00050d31) video4_image_uncrop_nhd_pane_ParamLimits

0x9718,	// (0x00050d31) video4_image_uncrop_nhd_pane

0x958c,	// (0x00050ba5) video4_image_uncrop_vga_pane_ParamLimits

0x958c,	// (0x00050ba5) video4_image_uncrop_vga_pane

0x7ce2,	// (0x0004f2fb) bg_tb_trans_pane_cp07

0x972f,	// (0x00050d48) vid4_indicators_pane_g1

0x9743,	// (0x00050d5c) vid4_indicators_pane_g2

0x9757,	// (0x00050d70) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x00056eae) vid4_indicators_pane_g

0x9786,	// (0x00050d9f) vid4_indicators_pane_t1

0x979d,	// (0x00050db6) cam4_autofocus_pane_g1

0x97a5,	// (0x00050dbe) cam4_autofocus_pane_g2

0x97ad,	// (0x00050dc6) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x00056eb9) cam4_autofocus_pane_g

0x97b5,	// (0x00050dce) cam4_autofocus_pane_g3_copy1

0x8e8b,	// (0x000504a4) video_down_pane_cp_t1

0x8e99,	// (0x000504b2) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x00056e31) video_down_pane_cp_t

0x4a34,	// (0x0004c04d) popup_vitu2_window_ParamLimits

0x4a34,	// (0x0004c04d) popup_vitu2_window

0x97bd,	// (0x00050dd6) aid_size_cell2_itu2_ParamLimits

0x97bd,	// (0x00050dd6) aid_size_cell2_itu2

0x97d9,	// (0x00050df2) aid_size_cell_itu2_ParamLimits

0x97d9,	// (0x00050df2) aid_size_cell_itu2

0x9813,	// (0x00050e2c) bg_popup_window_pane_cp09_ParamLimits

0x9813,	// (0x00050e2c) bg_popup_window_pane_cp09

0x9821,	// (0x00050e3a) field_vitu2_entry_pane_ParamLimits

0x9821,	// (0x00050e3a) field_vitu2_entry_pane

0x983f,	// (0x00050e58) grid_vitu2_function_pane_ParamLimits

0x983f,	// (0x00050e58) grid_vitu2_function_pane

0x987f,	// (0x00050e98) grid_vitu2_itu_pane_ParamLimits

0x987f,	// (0x00050e98) grid_vitu2_itu_pane

0x98e3,	// (0x00050efc) cell_vitu2_itu_pane_ParamLimits

0x98e3,	// (0x00050efc) cell_vitu2_itu_pane

0x98fc,	// (0x00050f15) cell_vitu2_function_pane_ParamLimits

0x98fc,	// (0x00050f15) cell_vitu2_function_pane

0x16f5,	// (0x00048d0e) bg_popup_call_pane_cp08_ParamLimits

0x16f5,	// (0x00048d0e) bg_popup_call_pane_cp08

0x170c,	// (0x00048d25) field_vitu2_entry_pane_g1

0x1718,	// (0x00048d31) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x00056ec0) field_vitu2_entry_pane_g

0x993d,	// (0x00050f56) field_vitu2_entry_pane_t1_ParamLimits

0x993d,	// (0x00050f56) field_vitu2_entry_pane_t1

0x1724,	// (0x00048d3d) field_vitu2_entry_pane_t2_ParamLimits

0x1724,	// (0x00048d3d) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x00056ec7) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x00056ec7) field_vitu2_entry_pane_t

0x802a,	// (0x0004f643) bg_button_pane_cp010_ParamLimits

0x802a,	// (0x0004f643) bg_button_pane_cp010

0x9971,	// (0x00050f8a) cell_vitu2_itu_pane_g1

0x9997,	// (0x00050fb0) cell_vitu2_itu_pane_t1_ParamLimits

0x9997,	// (0x00050fb0) cell_vitu2_itu_pane_t1

0x469a,	// (0x0004bcb3) cell_vitu2_itu_pane_t2_ParamLimits

0x469a,	// (0x0004bcb3) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x00056ed1) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x00056ed1) cell_vitu2_itu_pane_t

0x7ce2,	// (0x0004f2fb) bg_button_pane_cp011

0x99e3,	// (0x00050ffc) cell_vitu2_function_pane_g1

0x4a4e,	// (0x0004c067) main_myfav_hc_pane

0x937e,	// (0x00050997) popup_image3_note_pane_ParamLimits

0x937e,	// (0x00050997) popup_image3_note_pane

0x938c,	// (0x000509a5) popup_image3_tool_bar_pane_ParamLimits

0x938c,	// (0x000509a5) popup_image3_tool_bar_pane

0x4710,	// (0x0004bd29) cell_vitu2_itu_pane_t3_ParamLimits

0x4710,	// (0x0004bd29) cell_vitu2_itu_pane_t3

0x477a,	// (0x0004bd93) bg_popup_trans_pane

0x1749,	// (0x00048d62) grid_image3_tool_bar_pane

0x1753,	// (0x00048d6c) bg_popup_trans_pane_g1

0xd3d1,	// (0x000549ea) bg_popup_trans_pane_g2

0x175b,	// (0x00048d74) bg_popup_trans_pane_g3

0x1763,	// (0x00048d7c) bg_popup_trans_pane_g4

0x176b,	// (0x00048d84) bg_popup_trans_pane_g5

0x1773,	// (0x00048d8c) bg_popup_trans_pane_g6

0x177b,	// (0x00048d94) bg_popup_trans_pane_g7

0x1783,	// (0x00048d9c) bg_popup_trans_pane_g8

0xd3b1,	// (0x000549ca) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x00056ed8) bg_popup_trans_pane_g

0x178b,	// (0x00048da4) cell_image3_tool_bar_pane_ParamLimits

0x178b,	// (0x00048da4) cell_image3_tool_bar_pane

0xd1ac,	// (0x000547c5) cell_image3_tool_bar_pane_g1

0x477a,	// (0x0004bd93) bg_popup_trans_pane_cp1

0x179f,	// (0x00048db8) popup_image3_note_pane_t1

0x17ad,	// (0x00048dc6) popup_image3_note_pane_t2

0x17bb,	// (0x00048dd4) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x00056eeb) popup_image3_note_pane_t

0x17c9,	// (0x00048de2) popup_image3_note_pane_t3_copy1

0x99f7,	// (0x00051010) bg_myfav_hc_instruction_pane_ParamLimits

0x99f7,	// (0x00051010) bg_myfav_hc_instruction_pane

0x9a0f,	// (0x00051028) cell_myfav_contact_pane_ParamLimits

0x9a0f,	// (0x00051028) cell_myfav_contact_pane

0x9a29,	// (0x00051042) cell_myfav_contact_pane_cp1_ParamLimits

0x9a29,	// (0x00051042) cell_myfav_contact_pane_cp1

0x9a41,	// (0x0005105a) cell_myfav_contact_pane_cp2_ParamLimits

0x9a41,	// (0x0005105a) cell_myfav_contact_pane_cp2

0x9a59,	// (0x00051072) cell_myfav_contact_pane_cp3_ParamLimits

0x9a59,	// (0x00051072) cell_myfav_contact_pane_cp3

0x9a70,	// (0x00051089) cell_myfav_contact_pane_cp4_ParamLimits

0x9a70,	// (0x00051089) cell_myfav_contact_pane_cp4

0x9a86,	// (0x0005109f) cell_myfav_contact_pane_cp5_ParamLimits

0x9a86,	// (0x0005109f) cell_myfav_contact_pane_cp5

0x9a9a,	// (0x000510b3) cell_myfav_contact_pane_cp6_ParamLimits

0x9a9a,	// (0x000510b3) cell_myfav_contact_pane_cp6

0x9aae,	// (0x000510c7) cell_myfav_contact_pane_cp7_ParamLimits

0x9aae,	// (0x000510c7) cell_myfav_contact_pane_cp7

0x17d7,	// (0x00048df0) listscroll_gen_pane_cp05

0x9ac6,	// (0x000510df) main_myfav_hc_pane_g1_ParamLimits

0x9ac6,	// (0x000510df) main_myfav_hc_pane_g1

0x9adc,	// (0x000510f5) main_myfav_hc_pane_g2_ParamLimits

0x9adc,	// (0x000510f5) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x00056ef2) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x00056ef2) main_myfav_hc_pane_g

0x9b0a,	// (0x00051123) main_myfav_hc_pane_t1_ParamLimits

0x9b0a,	// (0x00051123) main_myfav_hc_pane_t1

0x17e0,	// (0x00048df9) main_myfav_hc_pane_t2_ParamLimits

0x17e0,	// (0x00048df9) main_myfav_hc_pane_t2

0x17f2,	// (0x00048e0b) main_myfav_hc_pane_t3_ParamLimits

0x17f2,	// (0x00048e0b) main_myfav_hc_pane_t3

0x9b21,	// (0x0005113a) main_myfav_hc_pane_t4_ParamLimits

0x9b21,	// (0x0005113a) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x00056ef9) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x00056ef9) main_myfav_hc_pane_t

0xd1ac,	// (0x000547c5) bg_myfav_hc_instruction_pane_g1

0x1804,	// (0x00048e1d) cell_myfav_contact_pane_g1_ParamLimits

0x1804,	// (0x00048e1d) cell_myfav_contact_pane_g1

0x1804,	// (0x00048e1d) cell_myfav_contact_pane_g2_ParamLimits

0x1804,	// (0x00048e1d) cell_myfav_contact_pane_g2

0x1810,	// (0x00048e29) cell_myfav_contact_pane_g3_ParamLimits

0x1810,	// (0x00048e29) cell_myfav_contact_pane_g3

0xcf60,	// (0x00054579) cell_myfav_contact_pane_g4_ParamLimits

0xcf60,	// (0x00054579) cell_myfav_contact_pane_g4

0x181d,	// (0x00048e36) cell_myfav_contact_pane_g5_ParamLimits

0x181d,	// (0x00048e36) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x00056f04) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x00056f04) cell_myfav_contact_pane_g

0x9af2,	// (0x0005110b) main_myfav_hc_pane_g3_ParamLimits

0x9af2,	// (0x0005110b) main_myfav_hc_pane_g3

0x493d,	// (0x0004bf56) popup_adpt_find_window

0x9b4b,	// (0x00051164) afind_page_pane_ParamLimits

0x9b4b,	// (0x00051164) afind_page_pane

0x9b58,	// (0x00051171) aid_size_cell_afind_ParamLimits

0x9b58,	// (0x00051171) aid_size_cell_afind

0x9b72,	// (0x0005118b) bg_popup_sub_pane_cp09_ParamLimits

0x9b72,	// (0x0005118b) bg_popup_sub_pane_cp09

0x9b7f,	// (0x00051198) find_pane_cp01_ParamLimits

0x9b7f,	// (0x00051198) find_pane_cp01

0x1829,	// (0x00048e42) grid_afind_control_pane_ParamLimits

0x1829,	// (0x00048e42) grid_afind_control_pane

0x9b8c,	// (0x000511a5) grid_afind_pane_ParamLimits

0x9b8c,	// (0x000511a5) grid_afind_pane

0x9ba8,	// (0x000511c1) cell_afind_pane_ParamLimits

0x9ba8,	// (0x000511c1) cell_afind_pane

0xd1ac,	// (0x000547c5) afind_page_pane_g1

0x9bf0,	// (0x00051209) afind_page_pane_g2

0x9bf9,	// (0x00051212) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x00056f0f) afind_page_pane_g

0x9c02,	// (0x0005121b) afind_page_pane_t1

0x183d,	// (0x00048e56) cell_afind_grid_control_pane_ParamLimits

0x183d,	// (0x00048e56) cell_afind_grid_control_pane

0x16bd,	// (0x00048cd6) bg_button_pane_cp69_ParamLimits

0x16bd,	// (0x00048cd6) bg_button_pane_cp69

0x9c22,	// (0x0005123b) cell_afind_pane_g1_ParamLimits

0x9c22,	// (0x0005123b) cell_afind_pane_g1

0x9c2f,	// (0x00051248) cell_afind_pane_t1_ParamLimits

0x9c2f,	// (0x00051248) cell_afind_pane_t1

0xd1b6,	// (0x000547cf) bg_button_pane_cp72

0x184c,	// (0x00048e65) cell_afind_grid_control_pane_g1

0x7819,	// (0x0004ee32) aid_image_placing_area_ParamLimits

0x7819,	// (0x0004ee32) aid_image_placing_area

0xcf52,	// (0x0005456b) field_vitu_entry_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) field_vitu_entry_pane_g1

0xcf52,	// (0x0005456b) field_vitu_entry_pane_g2_ParamLimits

0xcf52,	// (0x0005456b) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0005681a) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0005681a) field_vitu_entry_pane_g

0x13a6,	// (0x000489bf) cell_vitu_itu_pane_g1_ParamLimits

0x1389,	// (0x000489a2) cell_vitu_itu_pane_t3_ParamLimits

0x1389,	// (0x000489a2) cell_vitu_itu_pane_t3

0x1666,	// (0x00048c7f) mp4_progress_pane_t1_ParamLimits

0x167f,	// (0x00048c98) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x00056e55) mp4_progress_pane_t_ParamLimits

0x1698,	// (0x00048cb1) mup_progress_pane_cp04_ParamLimits

0x9b35,	// (0x0005114e) main_myfav_hc_pane_t5_ParamLimits

0x9b35,	// (0x0005114e) main_myfav_hc_pane_t5

0x47cc,	// (0x0004bde5) aid_zoom_text_primary

0x493d,	// (0x0004bf56) popup_adpt_find_window_ParamLimits

0x7ce2,	// (0x0004f2fb) main_cam_set_pane

0x95b1,	// (0x00050bca) cam4_zoom_pane_ParamLimits

0x95b1,	// (0x00050bca) cam4_zoom_pane

0x9c41,	// (0x0005125a) main_cam_set_pane_g1_ParamLimits

0x9c41,	// (0x0005125a) main_cam_set_pane_g1

0x9c4f,	// (0x00051268) main_cam_set_pane_g2_ParamLimits

0x9c4f,	// (0x00051268) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x00056f16) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x00056f16) main_cam_set_pane_g

0x9c5b,	// (0x00051274) main_cam_set_pane_t1_ParamLimits

0x9c5b,	// (0x00051274) main_cam_set_pane_t1

0x9c77,	// (0x00051290) main_cset_listscroll_pane_ParamLimits

0x9c77,	// (0x00051290) main_cset_listscroll_pane

0x9ca9,	// (0x000512c2) main_cset_slider_pane_ParamLimits

0x9ca9,	// (0x000512c2) main_cset_slider_pane

0x185d,	// (0x00048e76) main_cset_list_pane_ParamLimits

0x185d,	// (0x00048e76) main_cset_list_pane

0x186d,	// (0x00048e86) scroll_pane_cp028

0x9cc8,	// (0x000512e1) aid_area_touch_slider

0x9ce4,	// (0x000512fd) cset_slider_pane

0x9d07,	// (0x00051320) main_cset_slider_pane_g1

0x9d1c,	// (0x00051335) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x00056f1b) main_cset_slider_pane_g

0x18a6,	// (0x00048ebf) main_cset_slider_pane_t1

0x9dde,	// (0x000513f7) main_cset_slider_pane_t2

0x9df8,	// (0x00051411) main_cset_slider_pane_t3

0x9e12,	// (0x0005142b) main_cset_slider_pane_t4

0x9e2c,	// (0x00051445) main_cset_slider_pane_t5

0x9e4a,	// (0x00051463) main_cset_slider_pane_t6

0x9e61,	// (0x0005147a) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x00056f40) main_cset_slider_pane_t

0x9f6d,	// (0x00051586) cset_list_set_pane_ParamLimits

0x9f6d,	// (0x00051586) cset_list_set_pane

0x1940,	// (0x00048f59) aid_position_infowindow_above

0x1948,	// (0x00048f61) aid_position_infowindow_below

0x1950,	// (0x00048f69) cset_list_set_pane_g1_ParamLimits

0x1950,	// (0x00048f69) cset_list_set_pane_g1

0x195c,	// (0x00048f75) cset_list_set_pane_g3_ParamLimits

0x195c,	// (0x00048f75) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x00056f5f) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x00056f5f) cset_list_set_pane_g

0x196b,	// (0x00048f84) cset_list_set_pane_t1_ParamLimits

0x196b,	// (0x00048f84) cset_list_set_pane_t1

0x519c,	// (0x0004c7b5) list_highlight_pane_cp021_ParamLimits

0x519c,	// (0x0004c7b5) list_highlight_pane_cp021

0xdd05,	// (0x0005531e) cset_slider_pane_g1

0xdd17,	// (0x00055330) cset_slider_pane_g2

0xdd0e,	// (0x00055327) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x00056f64) cset_slider_pane_g

0x9f83,	// (0x0005159c) aid_area_touch_cam4_zoom

0x9f8b,	// (0x000515a4) cam4_zoom_cont_pane

0x9f93,	// (0x000515ac) cam4_zoom_pane_g1

0x9f9b,	// (0x000515b4) cam4_zoom_pane_g2

0x9fa3,	// (0x000515bc) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x00056f6b) cam4_zoom_pane_g

0x9fab,	// (0x000515c4) cam4_zoom_cont_pane_g1

0x9fb4,	// (0x000515cd) cam4_zoom_cont_pane_g2

0x9fbd,	// (0x000515d6) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x00056f72) cam4_zoom_cont_pane_g

0x93d5,	// (0x000509ee) call4_image_pane_ParamLimits

0x93d5,	// (0x000509ee) call4_image_pane

0x9434,	// (0x00050a4d) call4_windows_conf_pane_ParamLimits

0x9479,	// (0x00050a92) popup_call4_audio_in_window_ParamLimits

0x9479,	// (0x00050a92) popup_call4_audio_in_window

0x477a,	// (0x0004bd93) bg_popup_call2_act_pane_cp02

0x16c9,	// (0x00048ce2) call4_list_conf_pane

0xd1ac,	// (0x000547c5) call4_image_pane_g1

0xd1ac,	// (0x000547c5) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x000569f6) call4_image_pane_g

0x199b,	// (0x00048fb4) list_single_graphic_popup_conf4_pane_ParamLimits

0x199b,	// (0x00048fb4) list_single_graphic_popup_conf4_pane

0x477a,	// (0x0004bd93) list_highlight_pane_cp022

0x19ae,	// (0x00048fc7) list_single_graphic_popup_conf4_pane_g1

0xd8f9,	// (0x00054f12) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x00056f79) list_single_graphic_popup_conf4_pane_g

0x19b6,	// (0x00048fcf) list_single_graphic_popup_conf4_pane_t1

0x5dcb,	// (0x0004d3e4) popup_vtel_slider_window_ParamLimits

0x5dcb,	// (0x0004d3e4) popup_vtel_slider_window

0x16ab,	// (0x00048cc4) dialer2_ne_pane_t2_ParamLimits

0x16ab,	// (0x00048cc4) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x00056e5a) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x00056e5a) dialer2_ne_pane_t

0x519c,	// (0x0004c7b5) bg_popup_sub_pane_cp010_ParamLimits

0x519c,	// (0x0004c7b5) bg_popup_sub_pane_cp010

0x9fc6,	// (0x000515df) popup_vtel_slider_window_g1_ParamLimits

0x9fc6,	// (0x000515df) popup_vtel_slider_window_g1

0x9fd2,	// (0x000515eb) popup_vtel_slider_window_g2_ParamLimits

0x9fd2,	// (0x000515eb) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x00056f7e) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x00056f7e) popup_vtel_slider_window_g

0xa01a,	// (0x00051633) vtel_slider_pane_ParamLimits

0xa01a,	// (0x00051633) vtel_slider_pane

0xa029,	// (0x00051642) vtel_slider_pane_g1_ParamLimits

0xa029,	// (0x00051642) vtel_slider_pane_g1

0xa036,	// (0x0005164f) vtel_slider_pane_g2_ParamLimits

0xa036,	// (0x0005164f) vtel_slider_pane_g2

0xa043,	// (0x0005165c) vtel_slider_pane_g3_ParamLimits

0xa043,	// (0x0005165c) vtel_slider_pane_g3

0xa029,	// (0x00051642) vtel_slider_pane_g4_ParamLimits

0xa029,	// (0x00051642) vtel_slider_pane_g4

0xa050,	// (0x00051669) vtel_slider_pane_g5_ParamLimits

0xa050,	// (0x00051669) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x00056f87) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x00056f87) vtel_slider_pane_g

0x7ce2,	// (0x0004f2fb) main_gallery2_pane

0x97f5,	// (0x00050e0e) aid_size_row_itut2_dropdow_list_ParamLimits

0x97f5,	// (0x00050e0e) aid_size_row_itut2_dropdow_list

0x985f,	// (0x00050e78) grid_vitu2_function_top_pane_ParamLimits

0x985f,	// (0x00050e78) grid_vitu2_function_top_pane

0x98b3,	// (0x00050ecc) popup_vitu2_dropdown_list_window_ParamLimits

0x98b3,	// (0x00050ecc) popup_vitu2_dropdown_list_window

0x98d1,	// (0x00050eea) popup_vitu2_match_list_window

0xa05d,	// (0x00051676) cell_vitu2_function_top_pane_ParamLimits

0xa05d,	// (0x00051676) cell_vitu2_function_top_pane

0xa077,	// (0x00051690) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa077,	// (0x00051690) cell_vitu2_function_top_pane_cp01

0xa093,	// (0x000516ac) cell_vitu2_function_top_wide_pane_ParamLimits

0xa093,	// (0x000516ac) cell_vitu2_function_top_wide_pane

0x7ce2,	// (0x0004f2fb) bg_button_pane_cp012

0xa0b1,	// (0x000516ca) cell_vitu2_function_top_pane_g1

0xa0c5,	// (0x000516de) bg_button_pane_cp013_ParamLimits

0xa0c5,	// (0x000516de) bg_button_pane_cp013

0xa0e1,	// (0x000516fa) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa0e1,	// (0x000516fa) cell_vitu2_function_top_wide_pane_g1

0x4a34,	// (0x0004c04d) bg_popup_sub_pane_cp20

0xa0f9,	// (0x00051712) list_vitu2_match_list_pane

0x1753,	// (0x00048d6c) bg_popup_sub_pane_cp20_g1

0x175b,	// (0x00048d74) bg_popup_sub_pane_cp20_g2

0xd3d1,	// (0x000549ea) bg_popup_sub_pane_cp20_g3

0x1763,	// (0x00048d7c) bg_popup_sub_pane_cp20_g4

0xd3b1,	// (0x000549ca) bg_popup_sub_pane_cp20_g5

0x19cc,	// (0x00048fe5) bg_popup_sub_pane_cp20_g6

0x1773,	// (0x00048d8c) bg_popup_sub_pane_cp20_g7

0x177b,	// (0x00048d94) bg_popup_sub_pane_cp20_g8

0x1783,	// (0x00048d9c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x00056f92) bg_popup_sub_pane_cp20_g

0xa111,	// (0x0005172a) list_vitu2_match_list_item_pane_ParamLimits

0xa111,	// (0x0005172a) list_vitu2_match_list_item_pane

0xa123,	// (0x0005173c) list_vitu2_match_list_item_pane_t1

0x4a4e,	// (0x0004c067) bg_popup_sub_pane_cp21

0xd176,	// (0x0005478f) grid_vitu2_dropdown_list_pane

0xa131,	// (0x0005174a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa131,	// (0x0005174a) cell_vitu2_dropdown_list_char_pane

0xa154,	// (0x0005176d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa154,	// (0x0005176d) cell_vitu2_dropdown_list_ctrl_pane

0x19e6,	// (0x00048fff) cell_vitu2_dropdown_list_char_pane_g1

0x19dd,	// (0x00048ff6) cell_vitu2_dropdown_list_char_pane_g2

0x19d4,	// (0x00048fed) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x00056fa5) cell_vitu2_dropdown_list_char_pane_g

0xa17e,	// (0x00051797) cell_vitu2_dropdown_list_char_pane_t1

0xa18c,	// (0x000517a5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa18c,	// (0x000517a5) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa199,	// (0x000517b2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa199,	// (0x000517b2) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa1a6,	// (0x000517bf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa1a6,	// (0x000517bf) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa1b3,	// (0x000517cc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa1b3,	// (0x000517cc) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2a02,	// (0x0004a01b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2a02,	// (0x0004a01b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x00056fac) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x00056fac) cell_vitu2_dropdown_list_ctrl_pane_g

0xa1cf,	// (0x000517e8) aid_size_cell_gallery2_ParamLimits

0xa1cf,	// (0x000517e8) aid_size_cell_gallery2

0xa1e9,	// (0x00051802) grid_gallery2_pane_ParamLimits

0xa1e9,	// (0x00051802) grid_gallery2_pane

0xa200,	// (0x00051819) scroll_pane_cp029_ParamLimits

0xa200,	// (0x00051819) scroll_pane_cp029

0xa210,	// (0x00051829) cell_gallery2_pane_ParamLimits

0xa210,	// (0x00051829) cell_gallery2_pane

0x19ef,	// (0x00049008) cell_gallery2_pane_g2

0x2e4d,	// (0x0004a466) cell_gallery2_pane_g3

0x19f7,	// (0x00049010) cell_gallery2_pane_g4

0x19ff,	// (0x00049018) cell_gallery2_pane_g5

0xd176,	// (0x0005478f) grid_highlight_pane_cp10

0x98d1,	// (0x00050eea) popup_vitu2_match_list_window_ParamLimits

0x9803,	// (0x00050e1c) popup_vitu2_query_window_ParamLimits

0x9803,	// (0x00050e1c) popup_vitu2_query_window

0x4a4e,	// (0x0004c067) bg_vitu2_candi_button_pane

0x19e6,	// (0x00048fff) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x19dd,	// (0x00048ff6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x19d4,	// (0x00048fed) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa265,	// (0x0005187e) bg_button_pane_cp015

0xa277,	// (0x00051890) bg_button_pane_cp016

0xa28a,	// (0x000518a3) bg_button_pane_cp017

0xeee4,	// (0x000564fd) bg_popup_sub_pane_cp22

0x1a07,	// (0x00049020) popup_vitu2_query_window_g1

0xa2cf,	// (0x000518e8) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x00056fb7) popup_vitu2_query_window_g

0xa2ec,	// (0x00051905) popup_vitu2_query_window_t1_ParamLimits

0xa2ec,	// (0x00051905) popup_vitu2_query_window_t1

0xa321,	// (0x0005193a) popup_vitu2_query_window_t2_ParamLimits

0xa321,	// (0x0005193a) popup_vitu2_query_window_t2

0xa333,	// (0x0005194c) popup_vitu2_query_window_t3_ParamLimits

0xa333,	// (0x0005194c) popup_vitu2_query_window_t3

0xa35b,	// (0x00051974) popup_vitu2_query_window_t4_ParamLimits

0xa35b,	// (0x00051974) popup_vitu2_query_window_t4

0xa37c,	// (0x00051995) popup_vitu2_query_window_t5_ParamLimits

0xa37c,	// (0x00051995) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x00056fbe) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x00056fbe) popup_vitu2_query_window_t

0x1855,	// (0x00048e6e) main_cset_text_pane

0x9cc8,	// (0x000512e1) aid_area_touch_slider_ParamLimits

0x9ce4,	// (0x000512fd) cset_slider_pane_ParamLimits

0x9d07,	// (0x00051320) main_cset_slider_pane_g1_ParamLimits

0x9d1c,	// (0x00051335) main_cset_slider_pane_g2_ParamLimits

0x1876,	// (0x00048e8f) main_cset_slider_pane_g3_ParamLimits

0x1876,	// (0x00048e8f) main_cset_slider_pane_g3

0x9d31,	// (0x0005134a) main_cset_slider_pane_g4_ParamLimits

0x9d31,	// (0x0005134a) main_cset_slider_pane_g4

0x9d40,	// (0x00051359) main_cset_slider_pane_g5_ParamLimits

0x9d40,	// (0x00051359) main_cset_slider_pane_g5

0x9d4e,	// (0x00051367) main_cset_slider_pane_g6_ParamLimits

0x9d4e,	// (0x00051367) main_cset_slider_pane_g6

0xf902,	// (0x00056f1b) main_cset_slider_pane_g_ParamLimits

0x18a6,	// (0x00048ebf) main_cset_slider_pane_t1_ParamLimits

0x9dde,	// (0x000513f7) main_cset_slider_pane_t2_ParamLimits

0x9df8,	// (0x00051411) main_cset_slider_pane_t3_ParamLimits

0x9e12,	// (0x0005142b) main_cset_slider_pane_t4_ParamLimits

0x9e2c,	// (0x00051445) main_cset_slider_pane_t5_ParamLimits

0x9e4a,	// (0x00051463) main_cset_slider_pane_t6_ParamLimits

0x9e61,	// (0x0005147a) main_cset_slider_pane_t7_ParamLimits

0x9e8f,	// (0x000514a8) main_cset_slider_pane_t8_ParamLimits

0x9e8f,	// (0x000514a8) main_cset_slider_pane_t8

0x9eb7,	// (0x000514d0) main_cset_slider_pane_t9_ParamLimits

0x9eb7,	// (0x000514d0) main_cset_slider_pane_t9

0x9edf,	// (0x000514f8) main_cset_slider_pane_t10_ParamLimits

0x9edf,	// (0x000514f8) main_cset_slider_pane_t10

0x9f07,	// (0x00051520) main_cset_slider_pane_t11_ParamLimits

0x9f07,	// (0x00051520) main_cset_slider_pane_t11

0x9f31,	// (0x0005154a) main_cset_slider_pane_t12_ParamLimits

0x9f31,	// (0x0005154a) main_cset_slider_pane_t12

0x9f4e,	// (0x00051567) main_cset_slider_pane_t13_ParamLimits

0x9f4e,	// (0x00051567) main_cset_slider_pane_t13

0xf927,	// (0x00056f40) main_cset_slider_pane_t_ParamLimits

0x477a,	// (0x0004bd93) bg_popup_sub_pane_cp011

0x1a13,	// (0x0004902c) main_cset_text_pane_g1

0x1a1b,	// (0x00049034) main_cset_text_pane_t1

0x1a29,	// (0x00049042) main_cset_text_pane_t2

0x1a37,	// (0x00049050) main_cset_text_pane_t3

0x1a45,	// (0x0004905e) main_cset_text_pane_t4

0x1a53,	// (0x0004906c) main_cset_text_pane_t5

0x1a61,	// (0x0004907a) main_cset_text_pane_t6

0x1a6f,	// (0x00049088) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x00056fcd) main_cset_text_pane_t

0x4a4e,	// (0x0004c067) main_cam4_burst_pane

0x4a4e,	// (0x0004c067) main_cam5_pane

0x9c10,	// (0x00051229) bg_button_pane_cp019

0x9c19,	// (0x00051232) bg_button_pane_cp020

0x1882,	// (0x00048e9b) main_cset_slider_pane_g7_ParamLimits

0x1882,	// (0x00048e9b) main_cset_slider_pane_g7

0x188e,	// (0x00048ea7) main_cset_slider_pane_g8_ParamLimits

0x188e,	// (0x00048ea7) main_cset_slider_pane_g8

0x9d62,	// (0x0005137b) main_cset_slider_pane_g9_ParamLimits

0x9d62,	// (0x0005137b) main_cset_slider_pane_g9

0x9d6e,	// (0x00051387) main_cset_slider_pane_g10_ParamLimits

0x9d6e,	// (0x00051387) main_cset_slider_pane_g10

0x9d7a,	// (0x00051393) main_cset_slider_pane_g11_ParamLimits

0x9d7a,	// (0x00051393) main_cset_slider_pane_g11

0x9d86,	// (0x0005139f) main_cset_slider_pane_g12_ParamLimits

0x9d86,	// (0x0005139f) main_cset_slider_pane_g12

0x9d92,	// (0x000513ab) main_cset_slider_pane_g13_ParamLimits

0x9d92,	// (0x000513ab) main_cset_slider_pane_g13

0x9d9e,	// (0x000513b7) main_cset_slider_pane_g14_ParamLimits

0x9d9e,	// (0x000513b7) main_cset_slider_pane_g14

0x9daa,	// (0x000513c3) main_cset_slider_pane_g15_ParamLimits

0x9daa,	// (0x000513c3) main_cset_slider_pane_g15

0x18ce,	// (0x00048ee7) main_cset_slider_pane_t14_ParamLimits

0x18ce,	// (0x00048ee7) main_cset_slider_pane_t14

0x1907,	// (0x00048f20) main_cset_slider_pane_t15_ParamLimits

0x1907,	// (0x00048f20) main_cset_slider_pane_t15

0xa3f3,	// (0x00051a0c) aid_cam4_burst_size_cell_ParamLimits

0xa3f3,	// (0x00051a0c) aid_cam4_burst_size_cell

0xa40f,	// (0x00051a28) grid_cam4_burst_pane_ParamLimits

0xa40f,	// (0x00051a28) grid_cam4_burst_pane

0xa43f,	// (0x00051a58) linegrid_cam4_burst_pane_ParamLimits

0xa43f,	// (0x00051a58) linegrid_cam4_burst_pane

0xa45f,	// (0x00051a78) scroll_pane_cp30_ParamLimits

0xa45f,	// (0x00051a78) scroll_pane_cp30

0xa46b,	// (0x00051a84) cell_cam4_burst_pane_ParamLimits

0xa46b,	// (0x00051a84) cell_cam4_burst_pane

0x1a89,	// (0x000490a2) linegrid_cam4_burst_pane_g1_ParamLimits

0x1a89,	// (0x000490a2) linegrid_cam4_burst_pane_g1

0xa4a7,	// (0x00051ac0) linegrid_cam4_burst_pane_g2_ParamLimits

0xa4a7,	// (0x00051ac0) linegrid_cam4_burst_pane_g2

0x1a96,	// (0x000490af) linegrid_cam4_burst_pane_g3_ParamLimits

0x1a96,	// (0x000490af) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x00056fdc) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x00056fdc) linegrid_cam4_burst_pane_g

0xa4b8,	// (0x00051ad1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa4b8,	// (0x00051ad1) linegrid_cam4_burst_pane_g3_copy1

0x1aa3,	// (0x000490bc) linegrid_cam4_burst_pane_g4_ParamLimits

0x1aa3,	// (0x000490bc) linegrid_cam4_burst_pane_g4

0xa4d2,	// (0x00051aeb) linegrid_cam4_burst_pane_g5_ParamLimits

0xa4d2,	// (0x00051aeb) linegrid_cam4_burst_pane_g5

0xa4e3,	// (0x00051afc) linegrid_cam4_burst_pane_g6_ParamLimits

0xa4e3,	// (0x00051afc) linegrid_cam4_burst_pane_g6

0x1ab0,	// (0x000490c9) linegrid_cam4_burst_pane_g7_ParamLimits

0x1ab0,	// (0x000490c9) linegrid_cam4_burst_pane_g7

0xa4f4,	// (0x00051b0d) cell_cam4_burst_pane_g1

0x1ac9,	// (0x000490e2) main_cam5_pane_t1_ParamLimits

0x1ac9,	// (0x000490e2) main_cam5_pane_t1

0x1adb,	// (0x000490f4) main_cam5_pane_t2_ParamLimits

0x1adb,	// (0x000490f4) main_cam5_pane_t2

0x1aed,	// (0x00049106) main_cam5_pane_t3_ParamLimits

0x1aed,	// (0x00049106) main_cam5_pane_t3

0x1aff,	// (0x00049118) main_cam5_pane_t4_ParamLimits

0x1aff,	// (0x00049118) main_cam5_pane_t4

0x1b17,	// (0x00049130) main_cam5_pane_t5_ParamLimits

0x1b17,	// (0x00049130) main_cam5_pane_t5

0x1b2b,	// (0x00049144) main_cam5_pane_t6_ParamLimits

0x1b2b,	// (0x00049144) main_cam5_pane_t6

0x1b3f,	// (0x00049158) main_cam5_pane_t7_ParamLimits

0x1b3f,	// (0x00049158) main_cam5_pane_t7

0x1b51,	// (0x0004916a) main_cam5_pane_t8_ParamLimits

0x1b51,	// (0x0004916a) main_cam5_pane_t8

0x1b6d,	// (0x00049186) main_cam5_pane_t9_ParamLimits

0x1b6d,	// (0x00049186) main_cam5_pane_t9

0x1b7f,	// (0x00049198) main_cam5_pane_t10_ParamLimits

0x1b7f,	// (0x00049198) main_cam5_pane_t10

0x1b91,	// (0x000491aa) main_cam5_pane_t11_ParamLimits

0x1b91,	// (0x000491aa) main_cam5_pane_t11

0x1ba3,	// (0x000491bc) main_cam5_pane_t12_ParamLimits

0x1ba3,	// (0x000491bc) main_cam5_pane_t12

0x1bb8,	// (0x000491d1) main_cam5_pane_t13_ParamLimits

0x1bb8,	// (0x000491d1) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x00056fe8) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x00056fe8) main_cam5_pane_t

0x49f3,	// (0x0004c00c) popup_scut_keymap_window_ParamLimits

0x49f3,	// (0x0004c00c) popup_scut_keymap_window

0xa507,	// (0x00051b20) aid_size_cell_brow_shortcut

0xd176,	// (0x0005478f) bg_popup_window_pane_cp010

0xa513,	// (0x00051b2c) grid_scut_pane

0xa51f,	// (0x00051b38) cell_scut_pane_ParamLimits

0xa51f,	// (0x00051b38) cell_scut_pane

0xa536,	// (0x00051b4f) cell_scut_pane_g1

0x1bd5,	// (0x000491ee) cell_scut_pane_t1

0x1be4,	// (0x000491fd) cell_scut_pane_t2

0xa53f,	// (0x00051b58) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x00057003) cell_scut_pane_t

0x84f3,	// (0x0004fb0c) main_mup3_pane_g8_ParamLimits

0x84f3,	// (0x0004fb0c) main_mup3_pane_g8

0x9803,	// (0x00050e1c) area_vitu2_query_pane_ParamLimits

0x9803,	// (0x00050e1c) area_vitu2_query_pane

0xa29d,	// (0x000518b6) input_focus_pane_cp08

0x1bf3,	// (0x0004920c) area_vitu2_query_pane_g1

0xa54d,	// (0x00051b66) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x0005700a) area_vitu2_query_pane_g

0xa55e,	// (0x00051b77) area_vitu2_query_pane_t1_ParamLimits

0xa55e,	// (0x00051b77) area_vitu2_query_pane_t1

0xa572,	// (0x00051b8b) area_vitu2_query_pane_t2_ParamLimits

0xa572,	// (0x00051b8b) area_vitu2_query_pane_t2

0xa586,	// (0x00051b9f) area_vitu2_query_pane_t3_ParamLimits

0xa586,	// (0x00051b9f) area_vitu2_query_pane_t3

0x1bff,	// (0x00049218) area_vitu2_query_pane_t4_ParamLimits

0x1bff,	// (0x00049218) area_vitu2_query_pane_t4

0x1c27,	// (0x00049240) area_vitu2_query_pane_t5_ParamLimits

0x1c27,	// (0x00049240) area_vitu2_query_pane_t5

0x1c4f,	// (0x00049268) area_vitu2_query_pane_t6_ParamLimits

0x1c4f,	// (0x00049268) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x0005700f) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x0005700f) area_vitu2_query_pane_t

0xa5ae,	// (0x00051bc7) bg_button_pane_cp018

0xa5bc,	// (0x00051bd5) bg_button_pane_cp021

0xa5c8,	// (0x00051be1) bg_button_pane_cp022

0xa5d9,	// (0x00051bf2) input_focus_pane_cp09

0xda35,	// (0x0005504e) aid_size_touch_mv_arrow_left

0xda5e,	// (0x00055077) aid_size_touch_mv_arrow_right

0x9dc2,	// (0x000513db) main_cset_slider_pane_g16_ParamLimits

0x9dc2,	// (0x000513db) main_cset_slider_pane_g16

0x9dd0,	// (0x000513e9) main_cset_slider_pane_g17_ParamLimits

0x9dd0,	// (0x000513e9) main_cset_slider_pane_g17

0xa4f4,	// (0x00051b0d) cell_cam4_burst_pane_g1_ParamLimits

0x477a,	// (0x0004bd93) compa_mode_pane

0x9fde,	// (0x000515f7) popup_vtel_slider_window_g3_ParamLimits

0x9fde,	// (0x000515f7) popup_vtel_slider_window_g3

0x9ff2,	// (0x0005160b) popup_vtel_slider_window_g4_ParamLimits

0x9ff2,	// (0x0005160b) popup_vtel_slider_window_g4

0xa006,	// (0x0005161f) popup_vtel_slider_window_t1_ParamLimits

0xa006,	// (0x0005161f) popup_vtel_slider_window_t1

0x4a4e,	// (0x0004c067) main_cl_pane

0x7d8c,	// (0x0004f3a5) popup_imed_adjust2_window_ParamLimits

0xeee4,	// (0x000564fd) bg_tb_trans_pane_cp05_ParamLimits

0x12be,	// (0x000488d7) popup_imed_adjust2_window_g1_ParamLimits

0x12cd,	// (0x000488e6) popup_imed_adjust2_window_g2_ParamLimits

0x12cd,	// (0x000488e6) popup_imed_adjust2_window_g2

0x12d9,	// (0x000488f2) popup_imed_adjust2_window_g3_ParamLimits

0x12d9,	// (0x000488f2) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x00056d85) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x00056d85) popup_imed_adjust2_window_g

0x12e5,	// (0x000488fe) popup_imed_adjust2_window_t1_ParamLimits

0x12fd,	// (0x00048916) slider_imed_adjust_pane_ParamLimits

0x1311,	// (0x0004892a) slider_imed_adjust_pane_g1_ParamLimits

0x1321,	// (0x0004893a) slider_imed_adjust_pane_g2_ParamLimits

0x1331,	// (0x0004894a) slider_imed_adjust_pane_g3_ParamLimits

0x1342,	// (0x0004895b) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x00056d8c) slider_imed_adjust_pane_g_ParamLimits

0x955a,	// (0x00050b73) aid_touch_area_cam4_ParamLimits

0x955a,	// (0x00050b73) aid_touch_area_cam4

0x956a,	// (0x00050b83) battery_pane_cp01

0x95f1,	// (0x00050c0a) main_camera4_pane_g6_ParamLimits

0x95f1,	// (0x00050c0a) main_camera4_pane_g6

0x960f,	// (0x00050c28) main_camera4_pane_t2_ParamLimits

0x960f,	// (0x00050c28) main_camera4_pane_t2

0x0001,

0xf875,	// (0x00056e8e) main_camera4_pane_t_ParamLimits

0xf875,	// (0x00056e8e) main_camera4_pane_t

0x9696,	// (0x00050caf) aid_touch_area_vid4_ParamLimits

0x9696,	// (0x00050caf) aid_touch_area_vid4

0x96d6,	// (0x00050cef) main_video4_pane_g5_ParamLimits

0x96d6,	// (0x00050cef) main_video4_pane_g5

0x96fa,	// (0x00050d13) vid4_progress_pane_ParamLimits

0x96fa,	// (0x00050d13) vid4_progress_pane

0x189a,	// (0x00048eb3) main_cset_slider_pane_g18_ParamLimits

0x189a,	// (0x00048eb3) main_cset_slider_pane_g18

0x1abd,	// (0x000490d6) cell_cam4_burst_pane_g2_ParamLimits

0x1abd,	// (0x000490d6) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x00056fe3) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x00056fe3) cell_cam4_burst_pane_g

0xa5ea,	// (0x00051c03) bg_cl_pane_ParamLimits

0xa5ea,	// (0x00051c03) bg_cl_pane

0xa5f6,	// (0x00051c0f) cl_header_pane_ParamLimits

0xa5f6,	// (0x00051c0f) cl_header_pane

0xa602,	// (0x00051c1b) cl_listscroll_pane_ParamLimits

0xa602,	// (0x00051c1b) cl_listscroll_pane

0x1c9b,	// (0x000492b4) bg_cl_pane_g1

0x1ca3,	// (0x000492bc) bg_cl_pane_g2

0x1cab,	// (0x000492c4) bg_cl_pane_g3

0x1cb3,	// (0x000492cc) bg_cl_pane_g4

0x1cbb,	// (0x000492d4) bg_cl_pane_g5

0x1cc3,	// (0x000492dc) bg_cl_pane_g6

0x1ccb,	// (0x000492e4) bg_cl_pane_g7

0x1cd3,	// (0x000492ec) bg_cl_pane_g8

0x1cdb,	// (0x000492f4) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x0005701e) bg_cl_pane_g

0xa60e,	// (0x00051c27) aid_height_cl_leading_ParamLimits

0xa60e,	// (0x00051c27) aid_height_cl_leading

0xa61a,	// (0x00051c33) aid_height_cl_text_ParamLimits

0xa61a,	// (0x00051c33) aid_height_cl_text

0x51f5,	// (0x0004c80e) bg_cl_header_pane_ParamLimits

0x51f5,	// (0x0004c80e) bg_cl_header_pane

0xa632,	// (0x00051c4b) cl_header_pane_g1_ParamLimits

0xa632,	// (0x00051c4b) cl_header_pane_g1

0xa63f,	// (0x00051c58) cl_header_pane_t1_ParamLimits

0xa63f,	// (0x00051c58) cl_header_pane_t1

0x1ce3,	// (0x000492fc) cl_list_pane

0x186d,	// (0x00048e86) hc_scroll_pane_cp01

0xd3b1,	// (0x000549ca) bg_cl_header_pane_g1

0x1753,	// (0x00048d6c) bg_cl_header_pane_g2

0xd3d1,	// (0x000549ea) bg_cl_header_pane_g3

0x1763,	// (0x00048d7c) bg_cl_header_pane_g4

0x175b,	// (0x00048d74) bg_cl_header_pane_g5

0x19cc,	// (0x00048fe5) bg_cl_header_pane_g6

0x177b,	// (0x00048d94) bg_cl_header_pane_g7

0x1783,	// (0x00048d9c) bg_cl_header_pane_g8

0x1773,	// (0x00048d8c) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x00057031) bg_cl_header_pane_g

0xa651,	// (0x00051c6a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa651,	// (0x00051c6a) hc_cl_list_double_graphic_heading_pane

0xa662,	// (0x00051c7b) hc_cl_list_single_graphic_pane_ParamLimits

0xa662,	// (0x00051c7b) hc_cl_list_single_graphic_pane

0xa67b,	// (0x00051c94) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa67b,	// (0x00051c94) hc_cl_list_single_graphic_pane_g1

0xa687,	// (0x00051ca0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa687,	// (0x00051ca0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x00057044) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x00057044) hc_cl_list_single_graphic_pane_g

0xa69b,	// (0x00051cb4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa69b,	// (0x00051cb4) hc_cl_list_single_graphic_pane_t1

0xa67b,	// (0x00051c94) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa67b,	// (0x00051c94) hc_cl_list_double_graphic_heading_pane_g1

0xa6b0,	// (0x00051cc9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa6b0,	// (0x00051cc9) hc_cl_list_double_graphic_heading_pane_g2

0xa6c4,	// (0x00051cdd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa6c4,	// (0x00051cdd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x00057049) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x00057049) hc_cl_list_double_graphic_heading_pane_g

0xa6d8,	// (0x00051cf1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa6d8,	// (0x00051cf1) hc_cl_list_double_graphic_heading_pane_t1

0xa6ed,	// (0x00051d06) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa6ed,	// (0x00051d06) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x00057050) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x00057050) hc_cl_list_double_graphic_heading_pane_t

0xa70a,	// (0x00051d23) vid4_progress_pane_g1

0xa71a,	// (0x00051d33) vid4_progress_pane_g2

0xa72a,	// (0x00051d43) vid4_progress_pane_g3

0xa73c,	// (0x00051d55) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x00057055) vid4_progress_pane_g

0xa754,	// (0x00051d6d) vid4_progress_pane_t1

0xa76a,	// (0x00051d83) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x00057060) vid4_progress_pane_t

0xa794,	// (0x00051dad) wait_bar_pane_cp07

0x0bb9,	// (0x000481d2) blid_firmament_pane_ParamLimits

0x0bfc,	// (0x00048215) popup_blid_sat_info2_window_g1

0x0c20,	// (0x00048239) popup_blid_sat_info2_window_t3

0x0c2e,	// (0x00048247) popup_blid_sat_info2_window_t4

0x0c3c,	// (0x00048255) popup_blid_sat_info2_window_t5

0x0c4a,	// (0x00048263) popup_blid_sat_info2_window_t6

0x0c5a,	// (0x00048273) popup_blid_sat_info2_window_t7

0x0c68,	// (0x00048281) popup_blid_sat_info2_window_t8

0x0c76,	// (0x0004828f) popup_blid_sat_info2_window_t9

0x0c84,	// (0x0004829d) popup_blid_sat_info2_window_t10

0x0d45,	// (0x0004835e) aid_firma_cardinal_ParamLimits

0x0d59,	// (0x00048372) blid_firmament_pane_t1_ParamLimits

0x0d70,	// (0x00048389) blid_firmament_pane_t2_ParamLimits

0x0d87,	// (0x000483a0) blid_firmament_pane_t3_ParamLimits

0x0d9e,	// (0x000483b7) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x00056c7e) blid_firmament_pane_t_ParamLimits

0x0db5,	// (0x000483ce) blid_sat_info_pane_ParamLimits

0x7ce2,	// (0x0004f2fb) main_cam_set_pane_ParamLimits

0x8bcc,	// (0x000501e5) aid_size_cell_colour_35_ParamLimits

0x8be6,	// (0x000501ff) aid_size_cell_colour_112_ParamLimits

0x8bfd,	// (0x00050216) aid_size_cell_effect_ParamLimits

0x519c,	// (0x0004c7b5) bg_tb_trans_pane_cp02_ParamLimits

0xf04b,	// (0x00056664) heading_imed_pane_ParamLimits

0x8c17,	// (0x00050230) listscroll_imed_pane_ParamLimits

0xe5ed,	// (0x00055c06) popup_call2_audio_first_window_g5_ParamLimits

0xe5ed,	// (0x00055c06) popup_call2_audio_first_window_g5

0x9240,	// (0x00050859) aid_size_touch_image3_arrow_left_ParamLimits

0x9240,	// (0x00050859) aid_size_touch_image3_arrow_left

0x9256,	// (0x0005086f) aid_size_touch_image3_arrow_right_ParamLimits

0x9256,	// (0x0005086f) aid_size_touch_image3_arrow_right

0xa77f,	// (0x00051d98) vid4_progress_pane_t3

0x8d98,	// (0x000503b1) main_hwr_training_symbol_option_pane_ParamLimits

0x8d98,	// (0x000503b1) main_hwr_training_symbol_option_pane

0x14f7,	// (0x00048b10) popup_hwr_training_preview_window_ParamLimits

0x14f7,	// (0x00048b10) popup_hwr_training_preview_window

0x8df9,	// (0x00050412) hwr_training_navi_pane_g5_ParamLimits

0x8df9,	// (0x00050412) hwr_training_navi_pane_g5

0x1741,	// (0x00048d5a) popup_char_count_window

0x4a34,	// (0x0004c04d) bg_popup_sub_pane_cp20_ParamLimits

0xa0f9,	// (0x00051712) list_vitu2_match_list_pane_ParamLimits

0xa105,	// (0x0005171e) vitu2_page_scroll_pane_ParamLimits

0xa105,	// (0x0005171e) vitu2_page_scroll_pane

0x1d0e,	// (0x00049327) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1d0e,	// (0x00049327) list_single_hwr_training_symbol_option_pane

0x1d21,	// (0x0004933a) list_single_hwr_training_symbol_option_pane_g1

0x1d29,	// (0x00049342) list_single_hwr_training_symbol_option_pane_t1

0x1d37,	// (0x00049350) bg_button_pane_cp023

0x1d40,	// (0x00049359) bg_button_pane_cp024

0x1d73,	// (0x0004938c) vitu2_page_scroll_pane_g1

0x1d7b,	// (0x00049394) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x00057067) vitu2_page_scroll_pane_g

0x1d83,	// (0x0004939c) vitu2_page_scroll_pane_t1

0x0b2f,	// (0x00048148) popup_char_count_window_g1

0x1d92,	// (0x000493ab) popup_char_count_window_g2

0x1d9b,	// (0x000493b4) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x0005706c) popup_char_count_window_g

0x1da4,	// (0x000493bd) popup_char_count_window_t1

0x4a4e,	// (0x0004c067) main_vded2_pane

0x12aa,	// (0x000488c3) aid_size_cell_imed_line

0x12b4,	// (0x000488cd) grid_imed_line_width_pane

0x9768,	// (0x00050d81) vid4_indicators_pane_g4

0x1db2,	// (0x000493cb) cell_imed_line_width_pane_ParamLimits

0x1db2,	// (0x000493cb) cell_imed_line_width_pane

0x1dc6,	// (0x000493df) cell_imed_line_width_pane_g1

0x1dcf,	// (0x000493e8) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x00057073) cell_imed_line_width_pane_g

0xa7bb,	// (0x00051dd4) main_vded2_pane_g1_ParamLimits

0xa7bb,	// (0x00051dd4) main_vded2_pane_g1

0xa7c8,	// (0x00051de1) main_vded2_pane_g2_ParamLimits

0xa7c8,	// (0x00051de1) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x00057078) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x00057078) main_vded2_pane_g

0xa7d6,	// (0x00051def) vded2_slider_pane_ParamLimits

0xa7d6,	// (0x00051def) vded2_slider_pane

0xa7e3,	// (0x00051dfc) aid_size_touch_vded2_end

0xa7ed,	// (0x00051e06) aid_size_touch_vded2_playhead

0x1dd7,	// (0x000493f0) aid_size_touch_vded2_start

0x1ddf,	// (0x000493f8) vded2_slider_bg_pane

0x1de8,	// (0x00049401) vded2_slider_pane_g1

0x1df1,	// (0x0004940a) vded2_slider_pane_g2

0xa7f5,	// (0x00051e0e) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x0005707d) vded2_slider_pane_g

0x1df9,	// (0x00049412) vded2_slider_bg_pane_g1

0x1e02,	// (0x0004941b) vded2_slider_bg_pane_g2

0x1e0b,	// (0x00049424) vded2_slider_bg_pane_g3

0x0002,

0xfa6b,	// (0x00057084) vded2_slider_bg_pane_g

0x7583,	// (0x0004eb9c) aid_postcard_touch_down_pane_ParamLimits

0x7583,	// (0x0004eb9c) aid_postcard_touch_down_pane

0x7593,	// (0x0004ebac) aid_postcard_touch_up_pane_ParamLimits

0x7593,	// (0x0004ebac) aid_postcard_touch_up_pane

0x4a4e,	// (0x0004c067) main_blid2_pane

0x7d17,	// (0x0004f330) popup_blid2_search_window

0x477a,	// (0x0004bd93) blid2_gps_pane

0x477a,	// (0x0004bd93) blid2_navig_pane

0x477a,	// (0x0004bd93) blid2_search_pane

0x477a,	// (0x0004bd93) blid2_tripm_pane

0xa7fe,	// (0x00051e17) blid2_search_pane_g1_ParamLimits

0xa7fe,	// (0x00051e17) blid2_search_pane_g1

0xa80e,	// (0x00051e27) blid2_search_pane_t1_ParamLimits

0xa80e,	// (0x00051e27) blid2_search_pane_t1

0xa820,	// (0x00051e39) aid_size_cell_blid2_gps_ParamLimits

0xa820,	// (0x00051e39) aid_size_cell_blid2_gps

0xa830,	// (0x00051e49) blid2_gps_pane_g1_ParamLimits

0xa830,	// (0x00051e49) blid2_gps_pane_g1

0xa83c,	// (0x00051e55) grid_blid2_satellite_pane_ParamLimits

0xa83c,	// (0x00051e55) grid_blid2_satellite_pane

0xa84c,	// (0x00051e65) blid2_navig_pane_g1_ParamLimits

0xa84c,	// (0x00051e65) blid2_navig_pane_g1

0xa858,	// (0x00051e71) blid2_navig_pane_t1_ParamLimits

0xa858,	// (0x00051e71) blid2_navig_pane_t1

0xa86a,	// (0x00051e83) blid2_navig_pane_t2_ParamLimits

0xa86a,	// (0x00051e83) blid2_navig_pane_t2

0x0001,

0xfa72,	// (0x0005708b) blid2_navig_pane_t_ParamLimits

0xfa72,	// (0x0005708b) blid2_navig_pane_t

0xa87c,	// (0x00051e95) blid2_navig_ring_pane_ParamLimits

0xa87c,	// (0x00051e95) blid2_navig_ring_pane

0xa88c,	// (0x00051ea5) blid2_speed_pane_ParamLimits

0xa88c,	// (0x00051ea5) blid2_speed_pane

0xa898,	// (0x00051eb1) blid2_tripm_pane_g1_ParamLimits

0xa898,	// (0x00051eb1) blid2_tripm_pane_g1

0xa8a8,	// (0x00051ec1) blid2_tripm_pane_g2_ParamLimits

0xa8a8,	// (0x00051ec1) blid2_tripm_pane_g2

0xa8b4,	// (0x00051ecd) blid2_tripm_pane_g3_ParamLimits

0xa8b4,	// (0x00051ecd) blid2_tripm_pane_g3

0xa8c0,	// (0x00051ed9) blid2_tripm_pane_g4_ParamLimits

0xa8c0,	// (0x00051ed9) blid2_tripm_pane_g4

0xa8cc,	// (0x00051ee5) blid2_tripm_pane_g5_ParamLimits

0xa8cc,	// (0x00051ee5) blid2_tripm_pane_g5

0x0005,

0xfa77,	// (0x00057090) blid2_tripm_pane_g_ParamLimits

0xfa77,	// (0x00057090) blid2_tripm_pane_g

0xa8e8,	// (0x00051f01) blid2_tripm_pane_t1_ParamLimits

0xa8e8,	// (0x00051f01) blid2_tripm_pane_t1

0xa8fc,	// (0x00051f15) blid2_tripm_pane_t2_ParamLimits

0xa8fc,	// (0x00051f15) blid2_tripm_pane_t2

0xa90e,	// (0x00051f27) blid2_tripm_pane_t3_ParamLimits

0xa90e,	// (0x00051f27) blid2_tripm_pane_t3

0x0003,

0xfa84,	// (0x0005709d) blid2_tripm_pane_t_ParamLimits

0xfa84,	// (0x0005709d) blid2_tripm_pane_t

0xa940,	// (0x00051f59) cell_blid2_satellite_pane_ParamLimits

0xa940,	// (0x00051f59) cell_blid2_satellite_pane

0xa95a,	// (0x00051f73) cell_blid2_satellite_pane_g1

0x1e14,	// (0x0004942d) cell_blid2_satellite_pane_t1

0xd1ac,	// (0x000547c5) blid2_speed_pane_g1

0x1e22,	// (0x0004943b) blid2_speed_pane_t1

0x1e30,	// (0x00049449) blid2_speed_pane_t2

0x0001,

0xfa8d,	// (0x000570a6) blid2_speed_pane_t

0xd1ac,	// (0x000547c5) blid2_navig_ring_pane_g1

0xa963,	// (0x00051f7c) blid2_navig_ring_pane_g2

0xa96b,	// (0x00051f84) blid2_navig_ring_pane_g3

0xa973,	// (0x00051f8c) blid2_navig_ring_pane_g4

0xa97b,	// (0x00051f94) blid2_navig_ring_pane_g5

0x0004,

0xfa92,	// (0x000570ab) blid2_navig_ring_pane_g

0x477a,	// (0x0004bd93) bg_popup_window_pane_cp011

0x1e3e,	// (0x00049457) popup_blid2_search_window_g1

0x1e46,	// (0x0004945f) popup_blid2_search_window_t1

0x1e54,	// (0x0004946d) popup_blid2_search_window_t2

0x0001,

0xfa9d,	// (0x000570b6) popup_blid2_search_window_t

0xd2c0,	// (0x000548d9) main_browser_pane_g1

0xcfc4,	// (0x000545dd) main_browser_pane_ParamLimits

0x7ce2,	// (0x0004f2fb) bg_button_pane_cp011_ParamLimits

0x99e3,	// (0x00050ffc) cell_vitu2_function_pane_g1_ParamLimits

0xeee4,	// (0x000564fd) bg_popup_sub_pane_cp22_ParamLimits

0xa29d,	// (0x000518b6) input_focus_pane_cp08_ParamLimits

0xa2b4,	// (0x000518cd) popup_vitu2_query_button_pane_ParamLimits

0xa2b4,	// (0x000518cd) popup_vitu2_query_button_pane

0xa2c5,	// (0x000518de) popup_vitu2_query_input_button_pane

0x1a07,	// (0x00049020) popup_vitu2_query_window_g1_ParamLimits

0xa2cf,	// (0x000518e8) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x00056fb7) popup_vitu2_query_window_g_ParamLimits

0x477a,	// (0x0004bd93) bg_button_pane_cp026

0xa983,	// (0x00051f9c) popup_vitu2_query_input_button_pane_g1

0x477a,	// (0x0004bd93) bg_button_pane_cp025

0x1e62,	// (0x0004947b) popup_vitu2_query_button_pane_t1

0x81eb,	// (0x0004f804) main_mp3_pane_t6

0x81fb,	// (0x0004f814) popup_slider_window_cp01

0x9645,	// (0x00050c5e) cam4_battery_pane

0x9725,	// (0x00050d3e) cam4_battery_pane_cp02

0xa702,	// (0x00051d1b) cam4_battery_pane_cp01

0xa702,	// (0x00051d1b) cam4_battery_pane_cp03

0x1e70,	// (0x00049489) cam4_battery_pane_g1

0xd1ac,	// (0x000547c5) cam4_battery_pane_g2

0x0001,

0xfaa2,	// (0x000570bb) cam4_battery_pane_g

0x0c92,	// (0x000482ab) popup_blid_sat_info2_window_t11

0xda35,	// (0x0005504e) aid_size_touch_mv_arrow_left_ParamLimits

0xda5e,	// (0x00055077) aid_size_touch_mv_arrow_right_ParamLimits

0xdabc,	// (0x000550d5) navi_pane_g1_ParamLimits

0xdac8,	// (0x000550e1) navi_pane_g2_ParamLimits

0xdaf6,	// (0x0005510f) navi_pane_g3_ParamLimits

0xf379,	// (0x00056992) navi_pane_g_ParamLimits

0x7170,	// (0x0004e789) navi_pane_mv_t1_ParamLimits

0x8c23,	// (0x0005023c) grid_imed_effect_pane_ParamLimits

0x5c8b,	// (0x0004d2a4) aid_placing_vt_slider_lsc

0xd20f,	// (0x00054828) aid_placing_vt_slider_prt

0x519c,	// (0x0004c7b5) bg_tb_trans_pane_cp01_ParamLimits

0x0f12,	// (0x0004852b) popup_image_details_window_g1_ParamLimits

0x0f25,	// (0x0004853e) popup_image_details_window_g2_ParamLimits

0x0f3a,	// (0x00048553) popup_image_details_window_g3_ParamLimits

0x0f3a,	// (0x00048553) popup_image_details_window_g3

0xf6a5,	// (0x00056cbe) popup_image_details_window_g_ParamLimits

0x0f4e,	// (0x00048567) popup_image_details_window_t1_ParamLimits

0x0f60,	// (0x00048579) popup_image_details_window_t2_ParamLimits

0x0f79,	// (0x00048592) popup_image_details_window_t3_ParamLimits

0x0f8d,	// (0x000485a6) popup_image_details_window_t4_ParamLimits

0x0fa8,	// (0x000485c1) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x00056cc5) popup_image_details_window_t_ParamLimits

0xa626,	// (0x00051c3f) cl_header_name_pane_ParamLimits

0xa626,	// (0x00051c3f) cl_header_name_pane

0xa98b,	// (0x00051fa4) cl_header_name_pane_t1_ParamLimits

0xa98b,	// (0x00051fa4) cl_header_name_pane_t1

0xa9a2,	// (0x00051fbb) cl_header_name_pane_t2_ParamLimits

0xa9a2,	// (0x00051fbb) cl_header_name_pane_t2

0xa9cc,	// (0x00051fe5) cl_header_name_pane_t3_ParamLimits

0xa9cc,	// (0x00051fe5) cl_header_name_pane_t3

0x0002,

0xfaa7,	// (0x000570c0) cl_header_name_pane_t_ParamLimits

0xfaa7,	// (0x000570c0) cl_header_name_pane_t

0xdb85,	// (0x0005519e) navi_pane_mv_g2_ParamLimits

0x170c,	// (0x00048d25) field_vitu2_entry_pane_g1_ParamLimits

0x1718,	// (0x00048d31) field_vitu2_entry_pane_g2_ParamLimits

0xf06b,	// (0x00056684) field_vitu2_entry_pane_g3_ParamLimits

0xf06b,	// (0x00056684) field_vitu2_entry_pane_g3

0xf8a7,	// (0x00056ec0) field_vitu2_entry_pane_g_ParamLimits

0x9971,	// (0x00050f8a) cell_vitu2_itu_pane_g1_ParamLimits

0x9989,	// (0x00050fa2) cell_vitu2_itu_pane_g2_ParamLimits

0x9989,	// (0x00050fa2) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x00056ecc) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x00056ecc) cell_vitu2_itu_pane_g

0x7ce2,	// (0x0004f2fb) bg_vkb2_func_pane_cp05_ParamLimits

0x7ce2,	// (0x0004f2fb) bg_vkb2_func_pane_cp05

0x7ce2,	// (0x0004f2fb) bg_vkb2_func_pane_cp03

0x7ce2,	// (0x0004f2fb) bg_vkb2_func_pane_cp04

0x7ce2,	// (0x0004f2fb) bg_vkb2_func_pane_cp10_ParamLimits

0x7ce2,	// (0x0004f2fb) bg_vkb2_func_pane_cp10

0xa5c8,	// (0x00051be1) bg_vkb2_func_pane_cp08

0xa5ae,	// (0x00051bc7) bg_vkb2_func_pane_cp06

0xa5bc,	// (0x00051bd5) bg_vkb2_func_pane_cp07

0x1d49,	// (0x00049362) bg_vkb2_func_pane_cp11_ParamLimits

0x1d49,	// (0x00049362) bg_vkb2_func_pane_cp11

0x1d5e,	// (0x00049377) bg_vkb2_func_pane_cp12_ParamLimits

0x1d5e,	// (0x00049377) bg_vkb2_func_pane_cp12

0x477a,	// (0x0004bd93) bg_vkb2_func_pane_cp09

0x1753,	// (0x00048d6c) bg_vkb2_func_pane_g1

0xd3d1,	// (0x000549ea) bg_vkb2_func_pane_g2

0x175b,	// (0x00048d74) bg_vkb2_func_pane_g3

0x1763,	// (0x00048d7c) bg_vkb2_func_pane_g4

0x19cc,	// (0x00048fe5) bg_vkb2_func_pane_g5

0x177b,	// (0x00048d94) bg_vkb2_func_pane_g6

0x1783,	// (0x00048d9c) bg_vkb2_func_pane_g7

0x1773,	// (0x00048d8c) bg_vkb2_func_pane_g8

0xd3b1,	// (0x000549ca) bg_vkb2_func_pane_g9

0x0008,

0xfaae,	// (0x000570c7) bg_vkb2_func_pane_g

0xa8da,	// (0x00051ef3) blid2_tripm_pane_g6_ParamLimits

0xa8da,	// (0x00051ef3) blid2_tripm_pane_g6

0x165e,	// (0x00048c77) mp4_progress_pane_g1

0xa934,	// (0x00051f4d) blid2_tripm_values_pane_ParamLimits

0xa934,	// (0x00051f4d) blid2_tripm_values_pane

0xa9f1,	// (0x0005200a) blid2_tripm_values_pane_t1

0xa9ff,	// (0x00052018) blid2_tripm_values_pane_t2

0xaa0d,	// (0x00052026) blid2_tripm_values_pane_t3

0xaa1b,	// (0x00052034) blid2_tripm_values_pane_t4

0xaa29,	// (0x00052042) blid2_tripm_values_pane_t5

0xaa37,	// (0x00052050) blid2_tripm_values_pane_t6

0xaa45,	// (0x0005205e) blid2_tripm_values_pane_t7

0xaa53,	// (0x0005206c) blid2_tripm_values_pane_t8

0xaa61,	// (0x0005207a) blid2_tripm_values_pane_t9

0x0008,

0xfac1,	// (0x000570da) blid2_tripm_values_pane_t

0x5ccb,	// (0x0004d2e4) call_video_pane_t1_ParamLimits

0x5cec,	// (0x0004d305) call_video_pane_t2_ParamLimits

0xf222,	// (0x0005683b) call_video_pane_t_ParamLimits

0x746f,	// (0x0004ea88) msg_header_pane_g1_ParamLimits

0xdd4a,	// (0x00055363) msg_header_pane_g2_ParamLimits

0xdd4a,	// (0x00055363) msg_header_pane_g2

0x0001,

0xf41c,	// (0x00056a35) msg_header_pane_g_ParamLimits

0xf41c,	// (0x00056a35) msg_header_pane_g

0xcfc4,	// (0x000545dd) main_clock2_pane_ParamLimits

0x899d,	// (0x0004ffb6) grid_clock2_toolbar_pane_ParamLimits

0x899d,	// (0x0004ffb6) grid_clock2_toolbar_pane

0x899d,	// (0x0004ffb6) listscroll_clock2_pane_ParamLimits

0x899d,	// (0x0004ffb6) listscroll_clock2_pane

0x8a4d,	// (0x00050066) main_clock2_pane_t3_ParamLimits

0x8a4d,	// (0x00050066) main_clock2_pane_t3

0x8a5f,	// (0x00050078) main_clock2_pane_t4_ParamLimits

0x8a5f,	// (0x00050078) main_clock2_pane_t4

0x1e7a,	// (0x00049493) cell_clock2_toolbar_pane

0x1e82,	// (0x0004949b) cell_clock2_toolbar_pane_cp01

0x1e82,	// (0x0004949b) cell_clock2_toolbar_pane_cp02

0x1e8a,	// (0x000494a3) cell_clock2_toolbar_pane_cp03

0x1e92,	// (0x000494ab) list_clock2_pane

0xd9ab,	// (0x00054fc4) scroll_pane_cp10

0x1e9a,	// (0x000494b3) list_single_clock2_pane_ParamLimits

0x1e9a,	// (0x000494b3) list_single_clock2_pane

0xd176,	// (0x0005478f) list_highlight_pane_cp08

0x1ea7,	// (0x000494c0) list_single_clock2_pane_t1

0x1eb5,	// (0x000494ce) list_single_clock2_pane_t2

0x0001,

0xfad4,	// (0x000570ed) list_single_clock2_pane_t

0x477a,	// (0x0004bd93) bg_button_pane_cp10

0x1ec3,	// (0x000494dc) cell_clock2_toolbar_pane_g1

0x74f1,	// (0x0004eb0a) aid_main_viewer_pane_g1_ParamLimits

0x74f1,	// (0x0004eb0a) aid_main_viewer_pane_g1

0x74fd,	// (0x0004eb16) aid_main_viewer_pane_g2_ParamLimits

0x74fd,	// (0x0004eb16) aid_main_viewer_pane_g2

0x7509,	// (0x0004eb22) aid_main_viewer_pane_g3_ParamLimits

0x7509,	// (0x0004eb22) aid_main_viewer_pane_g3

0x751a,	// (0x0004eb33) aid_main_viewer_pane_g4_ParamLimits

0x751a,	// (0x0004eb33) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x00056a46) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x00056a46) aid_main_viewer_pane_g

0x7cd5,	// (0x0004f2ee) main_calc_pane_ParamLimits

0x7cf0,	// (0x0004f309) main_dialer2_pane_ParamLimits

0x4a4e,	// (0x0004c067) main_cam6_pane

0x4a4e,	// (0x0004c067) main_vid6_pane

0x89a9,	// (0x0004ffc2) listscroll_gen_pane_cp06_ParamLimits

0x89a9,	// (0x0004ffc2) listscroll_gen_pane_cp06

0x8a71,	// (0x0005008a) main_clock2_pane_t5_ParamLimits

0x8a71,	// (0x0005008a) main_clock2_pane_t5

0x8abe,	// (0x000500d7) aid_call2_pane_cp10_ParamLimits

0x8ad0,	// (0x000500e9) aid_call_pane_cp10_ParamLimits

0xda29,	// (0x00055042) popup_clock_analogue_window_cp10_g1_ParamLimits

0xda29,	// (0x00055042) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8ae2,	// (0x000500fb) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8ae2,	// (0x000500fb) popup_clock_analogue_window_cp10_g4_ParamLimits

0xda29,	// (0x00055042) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x00056d7a) popup_clock_analogue_window_cp10_g_ParamLimits

0x8af8,	// (0x00050111) popup_clock_analogue_window_cp10_t1_ParamLimits

0x91ed,	// (0x00050806) cell_dialer2_keypad_pane_g2_ParamLimits

0x91ed,	// (0x00050806) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x00056e5f) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x00056e5f) cell_dialer2_keypad_pane_g

0x9209,	// (0x00050822) cell_dialer2_keypad_pane_t1

0x9cb5,	// (0x000512ce) main_cset_text2_pane_ParamLimits

0x9cb5,	// (0x000512ce) main_cset_text2_pane

0x1bf3,	// (0x0004920c) area_vitu2_query_pane_g1_ParamLimits

0xa54d,	// (0x00051b66) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x0005700a) area_vitu2_query_pane_g_ParamLimits

0x1c77,	// (0x00049290) area_vitu2_query_pane_t7_ParamLimits

0x1c77,	// (0x00049290) area_vitu2_query_pane_t7

0xa5ae,	// (0x00051bc7) bg_button_pane_cp018_ParamLimits

0xa5bc,	// (0x00051bd5) bg_button_pane_cp021_ParamLimits

0xa5c8,	// (0x00051be1) bg_button_pane_cp022_ParamLimits

0xa5c8,	// (0x00051be1) bg_vkb2_func_pane_cp08_ParamLimits

0xa5ae,	// (0x00051bc7) bg_vkb2_func_pane_cp06_ParamLimits

0xa5bc,	// (0x00051bd5) bg_vkb2_func_pane_cp07_ParamLimits

0xa5d9,	// (0x00051bf2) input_focus_pane_cp09_ParamLimits

0xaa6f,	// (0x00052088) cam6_autofocus_pane_ParamLimits

0xaa6f,	// (0x00052088) cam6_autofocus_pane

0xaa91,	// (0x000520aa) cam6_image_uncrop_pane_ParamLimits

0xaa91,	// (0x000520aa) cam6_image_uncrop_pane

0xaabe,	// (0x000520d7) cam6_indi_pane_ParamLimits

0xaabe,	// (0x000520d7) cam6_indi_pane

0xaad8,	// (0x000520f1) cam6_mode_pane_ParamLimits

0xaad8,	// (0x000520f1) cam6_mode_pane

0xaaec,	// (0x00052105) cam6_timer_pane_ParamLimits

0xaaec,	// (0x00052105) cam6_timer_pane

0xaaf8,	// (0x00052111) cam6_zoom_pane_ParamLimits

0xaaf8,	// (0x00052111) cam6_zoom_pane

0xab10,	// (0x00052129) cam6_mode_pane_g1_ParamLimits

0xab10,	// (0x00052129) cam6_mode_pane_g1

0xab1c,	// (0x00052135) cam6_mode_pane_g2_ParamLimits

0xab1c,	// (0x00052135) cam6_mode_pane_g2

0xab28,	// (0x00052141) cam6_mode_pane_g3_ParamLimits

0xab28,	// (0x00052141) cam6_mode_pane_g3

0xab34,	// (0x0005214d) cam6_mode_pane_g4_ParamLimits

0xab34,	// (0x0005214d) cam6_mode_pane_g4

0x0003,

0xfad9,	// (0x000570f2) cam6_mode_pane_g_ParamLimits

0xfad9,	// (0x000570f2) cam6_mode_pane_g

0x0aab,	// (0x000480c4) bg_tb_trans_pane_cp08_ParamLimits

0x0aab,	// (0x000480c4) bg_tb_trans_pane_cp08

0x1ecb,	// (0x000494e4) cam6_battery_pane_ParamLimits

0x1ecb,	// (0x000494e4) cam6_battery_pane

0x1ee1,	// (0x000494fa) cam6_indi_pane_g1_ParamLimits

0x1ee1,	// (0x000494fa) cam6_indi_pane_g1

0x1ef3,	// (0x0004950c) cam6_indi_pane_g2_ParamLimits

0x1ef3,	// (0x0004950c) cam6_indi_pane_g2

0x1f05,	// (0x0004951e) cam6_indi_pane_g3_ParamLimits

0x1f05,	// (0x0004951e) cam6_indi_pane_g3

0x0002,

0xfae2,	// (0x000570fb) cam6_indi_pane_g_ParamLimits

0xfae2,	// (0x000570fb) cam6_indi_pane_g

0x1f17,	// (0x00049530) cam6_indi_pane_t1_ParamLimits

0x1f17,	// (0x00049530) cam6_indi_pane_t1

0x97a5,	// (0x00050dbe) cam6_autofocus_pane_g1

0x979d,	// (0x00050db6) cam6_autofocus_pane_g2

0x97b5,	// (0x00050dce) cam6_autofocus_pane_g3

0x97ad,	// (0x00050dc6) cam6_autofocus_pane_g4

0x0003,

0xfae9,	// (0x00057102) cam6_autofocus_pane_g

0x1f3d,	// (0x00049556) cam6_timer_pane_g1

0x1f45,	// (0x0004955e) cam6_timer_pane_t1

0x1f53,	// (0x0004956c) cam6_zoom_cont_pane

0x1f5b,	// (0x00049574) cam6_zoom_pane_g1

0x1f63,	// (0x0004957c) cam6_zoom_pane_g2

0xab40,	// (0x00052159) cam6_zoom_pane_g3

0x0002,

0xfaf2,	// (0x0005710b) cam6_zoom_pane_g

0xd1ac,	// (0x000547c5) cam6_battery_pane_g1

0xd1ac,	// (0x000547c5) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x000569f6) cam6_battery_pane_g

0x1f6b,	// (0x00049584) cam6_zoom_cont_pane_g1

0x1f74,	// (0x0004958d) cam6_zoom_cont_pane_g2

0x1f7d,	// (0x00049596) cam6_zoom_cont_pane_g3

0x0002,

0xfaf9,	// (0x00057112) cam6_zoom_cont_pane_g

0xab5d,	// (0x00052176) cam6_mode_pane_cp_ParamLimits

0xab5d,	// (0x00052176) cam6_mode_pane_cp

0xab71,	// (0x0005218a) cam6_zoom_pane_cp_ParamLimits

0xab71,	// (0x0005218a) cam6_zoom_pane_cp

0xab89,	// (0x000521a2) vid6_image_uncrop_cif_pane_ParamLimits

0xab89,	// (0x000521a2) vid6_image_uncrop_cif_pane

0xabb5,	// (0x000521ce) vid6_image_uncrop_nhd_pane_ParamLimits

0xabb5,	// (0x000521ce) vid6_image_uncrop_nhd_pane

0xabd2,	// (0x000521eb) vid6_image_uncrop_vga_pane_ParamLimits

0xabd2,	// (0x000521eb) vid6_image_uncrop_vga_pane

0xabf1,	// (0x0005220a) vid6_image_uncrop_wvga_pane_ParamLimits

0xabf1,	// (0x0005220a) vid6_image_uncrop_wvga_pane

0xac0e,	// (0x00052227) vid6_indi_pane_ParamLimits

0xac0e,	// (0x00052227) vid6_indi_pane

0x0aab,	// (0x000480c4) bg_tb_trans_pane_cp09_ParamLimits

0x0aab,	// (0x000480c4) bg_tb_trans_pane_cp09

0x1f95,	// (0x000495ae) cam6_battery_pane_cp_ParamLimits

0x1f95,	// (0x000495ae) cam6_battery_pane_cp

0x1fa1,	// (0x000495ba) vid6_indi_pane_g1_ParamLimits

0x1fa1,	// (0x000495ba) vid6_indi_pane_g1

0x1fb3,	// (0x000495cc) vid6_indi_pane_g2_ParamLimits

0x1fb3,	// (0x000495cc) vid6_indi_pane_g2

0x1fc5,	// (0x000495de) vid6_indi_pane_g3_ParamLimits

0x1fc5,	// (0x000495de) vid6_indi_pane_g3

0x1fda,	// (0x000495f3) vid6_indi_pane_g4_ParamLimits

0x1fda,	// (0x000495f3) vid6_indi_pane_g4

0x1fef,	// (0x00049608) vid6_indi_pane_g5_ParamLimits

0x1fef,	// (0x00049608) vid6_indi_pane_g5

0x0004,

0xfb00,	// (0x00057119) vid6_indi_pane_g_ParamLimits

0xfb00,	// (0x00057119) vid6_indi_pane_g

0x2009,	// (0x00049622) vid6_indi_pane_t1_ParamLimits

0x2009,	// (0x00049622) vid6_indi_pane_t1

0x201f,	// (0x00049638) vid6_indi_pane_t2_ParamLimits

0x201f,	// (0x00049638) vid6_indi_pane_t2

0x2047,	// (0x00049660) vid6_indi_pane_t3_ParamLimits

0x2047,	// (0x00049660) vid6_indi_pane_t3

0x206f,	// (0x00049688) vid6_indi_pane_t4_ParamLimits

0x206f,	// (0x00049688) vid6_indi_pane_t4

0x0003,

0xfb0b,	// (0x00057124) vid6_indi_pane_t_ParamLimits

0xfb0b,	// (0x00057124) vid6_indi_pane_t

0x2093,	// (0x000496ac) wait_bar_pane_cp08

0xac33,	// (0x0005224c) main_cset_text2_pane_t1_ParamLimits

0xac33,	// (0x0005224c) main_cset_text2_pane_t1

0xab48,	// (0x00052161) listscroll_gen_pane_cp06_t1_ParamLimits

0xab48,	// (0x00052161) listscroll_gen_pane_cp06_t1

0x4a4e,	// (0x0004c067) main_cam6_set_pane

0x2a02,	// (0x0004a01b) bg_tb_trans_pane_cp06_ParamLimits

0x964d,	// (0x00050c66) cam4_indicators_pane_g1_ParamLimits

0x965e,	// (0x00050c77) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x00056e9c) cam4_indicators_pane_g_ParamLimits

0x967c,	// (0x00050c95) cam4_indicators_pane_t1_ParamLimits

0x7ce2,	// (0x0004f2fb) bg_tb_trans_pane_cp07_ParamLimits

0x972f,	// (0x00050d48) vid4_indicators_pane_g1_ParamLimits

0x9743,	// (0x00050d5c) vid4_indicators_pane_g2_ParamLimits

0x9757,	// (0x00050d70) vid4_indicators_pane_g3_ParamLimits

0x9768,	// (0x00050d81) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x00056eae) vid4_indicators_pane_g_ParamLimits

0x9786,	// (0x00050d9f) vid4_indicators_pane_t1_ParamLimits

0xa70a,	// (0x00051d23) vid4_progress_pane_g1_ParamLimits

0xa71a,	// (0x00051d33) vid4_progress_pane_g2_ParamLimits

0xa72a,	// (0x00051d43) vid4_progress_pane_g3_ParamLimits

0xa73c,	// (0x00051d55) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x00057055) vid4_progress_pane_g_ParamLimits

0xa754,	// (0x00051d6d) vid4_progress_pane_t1_ParamLimits

0xa76a,	// (0x00051d83) vid4_progress_pane_t2_ParamLimits

0xa77f,	// (0x00051d98) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x00057060) vid4_progress_pane_t_ParamLimits

0xa794,	// (0x00051dad) wait_bar_pane_cp07_ParamLimits

0xac66,	// (0x0005227f) main_cam6_set_pane_g2_ParamLimits

0xac66,	// (0x0005227f) main_cam6_set_pane_g2

0xac72,	// (0x0005228b) main_cset6_listscroll_pane_ParamLimits

0xac72,	// (0x0005228b) main_cset6_listscroll_pane

0xac9d,	// (0x000522b6) main_cset6_slider_pane_ParamLimits

0xac9d,	// (0x000522b6) main_cset6_slider_pane

0xaca9,	// (0x000522c2) main_cset6_text2_pane_ParamLimits

0xaca9,	// (0x000522c2) main_cset6_text2_pane

0x20a2,	// (0x000496bb) main_cset6_text_pane

0x20aa,	// (0x000496c3) main_cset_list_pane_copy1_ParamLimits

0x20aa,	// (0x000496c3) main_cset_list_pane_copy1

0x20ba,	// (0x000496d3) scroll_pane_cp028_copy1

0xacbc,	// (0x000522d5) cset_list_set_pane_copy1

0xaccf,	// (0x000522e8) aid_position_infowindow_above_copy1

0xacd7,	// (0x000522f0) aid_position_infowindow_below_copy1

0xacdf,	// (0x000522f8) cset_list_set_pane_g1_copy1

0x195c,	// (0x00048f75) cset_list_set_pane_g3_copy1_ParamLimits

0x195c,	// (0x00048f75) cset_list_set_pane_g3_copy1

0x196b,	// (0x00048f84) cset_list_set_pane_t1_copy1_ParamLimits

0x196b,	// (0x00048f84) cset_list_set_pane_t1_copy1

0x519c,	// (0x0004c7b5) list_highlight_pane_cp021_copy1_ParamLimits

0x519c,	// (0x0004c7b5) list_highlight_pane_cp021_copy1

0x20c3,	// (0x000496dc) cset6_slider_pane_ParamLimits

0x20c3,	// (0x000496dc) cset6_slider_pane

0x20ef,	// (0x00049708) main_cset6_slider_pane_g1_ParamLimits

0x20ef,	// (0x00049708) main_cset6_slider_pane_g1

0xace7,	// (0x00052300) main_cset6_slider_pane_g2_ParamLimits

0xace7,	// (0x00052300) main_cset6_slider_pane_g2

0x2117,	// (0x00049730) main_cset6_slider_pane_g3_ParamLimits

0x2117,	// (0x00049730) main_cset6_slider_pane_g3

0xad0f,	// (0x00052328) main_cset6_slider_pane_g4_ParamLimits

0xad0f,	// (0x00052328) main_cset6_slider_pane_g4

0xad1b,	// (0x00052334) main_cset6_slider_pane_g5_ParamLimits

0xad1b,	// (0x00052334) main_cset6_slider_pane_g5

0x1882,	// (0x00048e9b) main_cset6_slider_pane_g7_ParamLimits

0x1882,	// (0x00048e9b) main_cset6_slider_pane_g7

0x188e,	// (0x00048ea7) main_cset6_slider_pane_g8_ParamLimits

0x188e,	// (0x00048ea7) main_cset6_slider_pane_g8

0xad29,	// (0x00052342) main_cset6_slider_pane_g9_ParamLimits

0xad29,	// (0x00052342) main_cset6_slider_pane_g9

0xad35,	// (0x0005234e) main_cset6_slider_pane_g10_ParamLimits

0xad35,	// (0x0005234e) main_cset6_slider_pane_g10

0xad41,	// (0x0005235a) main_cset6_slider_pane_g11_ParamLimits

0xad41,	// (0x0005235a) main_cset6_slider_pane_g11

0xad4d,	// (0x00052366) main_cset6_slider_pane_g12_ParamLimits

0xad4d,	// (0x00052366) main_cset6_slider_pane_g12

0xad59,	// (0x00052372) main_cset6_slider_pane_g13_ParamLimits

0xad59,	// (0x00052372) main_cset6_slider_pane_g13

0xad65,	// (0x0005237e) main_cset6_slider_pane_g14_ParamLimits

0xad65,	// (0x0005237e) main_cset6_slider_pane_g14

0xad71,	// (0x0005238a) main_cset6_slider_pane_g15_ParamLimits

0xad71,	// (0x0005238a) main_cset6_slider_pane_g15

0xad89,	// (0x000523a2) main_cset6_slider_pane_g16_ParamLimits

0xad89,	// (0x000523a2) main_cset6_slider_pane_g16

0xad97,	// (0x000523b0) main_cset6_slider_pane_g17_ParamLimits

0xad97,	// (0x000523b0) main_cset6_slider_pane_g17

0x0011,

0xfb14,	// (0x0005712d) main_cset6_slider_pane_g_ParamLimits

0xfb14,	// (0x0005712d) main_cset6_slider_pane_g

0x2123,	// (0x0004973c) main_cset6_slider_pane_t1_ParamLimits

0x2123,	// (0x0004973c) main_cset6_slider_pane_t1

0xadbd,	// (0x000523d6) main_cset6_slider_pane_t2_ParamLimits

0xadbd,	// (0x000523d6) main_cset6_slider_pane_t2

0xade8,	// (0x00052401) main_cset6_slider_pane_t3_ParamLimits

0xade8,	// (0x00052401) main_cset6_slider_pane_t3

0xae13,	// (0x0005242c) main_cset6_slider_pane_t4_ParamLimits

0xae13,	// (0x0005242c) main_cset6_slider_pane_t4

0xae3e,	// (0x00052457) main_cset6_slider_pane_t5_ParamLimits

0xae3e,	// (0x00052457) main_cset6_slider_pane_t5

0x2164,	// (0x0004977d) main_cset6_slider_pane_t7_ParamLimits

0x2164,	// (0x0004977d) main_cset6_slider_pane_t7

0xae6b,	// (0x00052484) main_cset6_slider_pane_t8_ParamLimits

0xae6b,	// (0x00052484) main_cset6_slider_pane_t8

0xae8f,	// (0x000524a8) main_cset6_slider_pane_t9_ParamLimits

0xae8f,	// (0x000524a8) main_cset6_slider_pane_t9

0xaeb3,	// (0x000524cc) main_cset6_slider_pane_t10_ParamLimits

0xaeb3,	// (0x000524cc) main_cset6_slider_pane_t10

0xaed7,	// (0x000524f0) main_cset6_slider_pane_t11_ParamLimits

0xaed7,	// (0x000524f0) main_cset6_slider_pane_t11

0x219a,	// (0x000497b3) main_cset6_slider_pane_t14_ParamLimits

0x219a,	// (0x000497b3) main_cset6_slider_pane_t14

0x21d3,	// (0x000497ec) main_cset6_slider_pane_t15_ParamLimits

0x21d3,	// (0x000497ec) main_cset6_slider_pane_t15

0x000b,

0xfb39,	// (0x00057152) main_cset6_slider_pane_t_ParamLimits

0xfb39,	// (0x00057152) main_cset6_slider_pane_t

0x1980,	// (0x00048f99) cset_slider_pane_g1_copy1

0x1989,	// (0x00048fa2) cset_slider_pane_g2_copy1

0x1992,	// (0x00048fab) cset_slider_pane_g3_copy1

0x477a,	// (0x0004bd93) bg_popup_sub_pane_cp011_copy1

0x220c,	// (0x00049825) main_cset_text_pane_g1_copy1

0x1a1b,	// (0x00049034) main_cset_text_pane_t1_copy1

0x1a29,	// (0x00049042) main_cset_text_pane_t2_copy1

0x1a37,	// (0x00049050) main_cset_text_pane_t3_copy1

0x1a45,	// (0x0004905e) main_cset_text_pane_t4_copy1

0x1a53,	// (0x0004906c) main_cset_text_pane_t5_copy1

0x2214,	// (0x0004982d) main_cset_text_pane_t6_copy1

0x2222,	// (0x0004983b) main_cset_text_pane_t7_copy1

0xaf18,	// (0x00052531) main_cset_text2_pane_t1_copy1

0x7ce2,	// (0x0004f2fb) main_ncimui_pane

0x7d4d,	// (0x0004f366) popup_query_ncimui_window_ParamLimits

0x7d4d,	// (0x0004f366) popup_query_ncimui_window

0x1085,	// (0x0004869e) field_cale_ev2_pane_g4_ParamLimits

0x1085,	// (0x0004869e) field_cale_ev2_pane_g4

0x8ecd,	// (0x000504e6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8ecd,	// (0x000504e6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x00056e36) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x00056e36) cell_video_dialer_keypad_pane_g

0x8ee5,	// (0x000504fe) cell_video_dialer_keypad_pane_t1

0x477a,	// (0x0004bd93) bg_popup_window_pane_cp012

0xee40,	// (0x00056459) heading_pane_cp06

0x224e,	// (0x00049867) ncim_query_content_pane

0x477a,	// (0x0004bd93) bg_popup_heading_pane_cp01

0x2256,	// (0x0004986f) ncim_heading_pane_t1

0x2264,	// (0x0004987d) ncim_indicator_popup_pane

0x2276,	// (0x0004988f) ncim_query_button_pane

0x228a,	// (0x000498a3) ncim_query_content_pane_t1

0x229c,	// (0x000498b5) ncim_query_content_pane_t2

0x0005,

0xfb7d,	// (0x00057196) ncim_query_content_pane_t

0x22d6,	// (0x000498ef) ncim_query_list_pane

0x22e8,	// (0x00049901) ncim_query_popup_pane

0x2264,	// (0x0004987d) ncim_indicator_popup_pane_ParamLimits

0xb06b,	// (0x00052684) ncim_query_content_pane_g1_ParamLimits

0xb06b,	// (0x00052684) ncim_query_content_pane_g1

0x228a,	// (0x000498a3) ncim_query_content_pane_t1_ParamLimits

0x229c,	// (0x000498b5) ncim_query_content_pane_t2_ParamLimits

0xb077,	// (0x00052690) ncim_query_content_pane_t3_ParamLimits

0xb077,	// (0x00052690) ncim_query_content_pane_t3

0xb094,	// (0x000526ad) ncim_query_content_pane_t4_ParamLimits

0xb094,	// (0x000526ad) ncim_query_content_pane_t4

0xb0b1,	// (0x000526ca) ncim_query_content_pane_t5_ParamLimits

0xb0b1,	// (0x000526ca) ncim_query_content_pane_t5

0x22ae,	// (0x000498c7) ncim_query_content_pane_t6_ParamLimits

0x22ae,	// (0x000498c7) ncim_query_content_pane_t6

0xfb7d,	// (0x00057196) ncim_query_content_pane_t_ParamLimits

0x22d6,	// (0x000498ef) ncim_query_list_pane_ParamLimits

0x22e8,	// (0x00049901) ncim_query_popup_pane_ParamLimits

0x22fc,	// (0x00049915) wait_bar_pane_cp04

0x477a,	// (0x0004bd93) input_focus_pane_cp011

0x2304,	// (0x0004991d) ncim_query_popup_pane_t1

0x2312,	// (0x0004992b) ncim_list_query_list_pane_ParamLimits

0x2312,	// (0x0004992b) ncim_list_query_list_pane

0x477a,	// (0x0004bd93) bg_button_pane_cp027

0x231f,	// (0x00049938) ncim_query_button_pane_g1

0x477a,	// (0x0004bd93) list_highlight_pane_cp012

0x2329,	// (0x00049942) ncim_list_query_list_pane_g1

0x2331,	// (0x0004994a) ncim_list_query_list_pane_t1

0x966d,	// (0x00050c86) cam4_indicators_pane_g3_ParamLimits

0x966d,	// (0x00050c86) cam4_indicators_pane_g3

0x9774,	// (0x00050d8d) vid4_indicators_pane_g5_ParamLimits

0x9774,	// (0x00050d8d) vid4_indicators_pane_g5

0xa748,	// (0x00051d61) vid4_progress_pane_g5_ParamLimits

0xa748,	// (0x00051d61) vid4_progress_pane_g5

0xaf57,	// (0x00052570) main_ncimui_pane_g1

0xafbf,	// (0x000525d8) ncimui_group_query_pane_ParamLimits

0xafbf,	// (0x000525d8) ncimui_group_query_pane

0xb007,	// (0x00052620) ncimui_list_pane_ParamLimits

0xb007,	// (0x00052620) ncimui_list_pane

0xb02e,	// (0x00052647) ncimui_text_pane_ParamLimits

0xb02e,	// (0x00052647) ncimui_text_pane

0xb0ce,	// (0x000526e7) ncimui_text_pane_t1_ParamLimits

0xb0ce,	// (0x000526e7) ncimui_text_pane_t1

0x233f,	// (0x00049958) ncimui_list_single_graphic_pane_ParamLimits

0x233f,	// (0x00049958) ncimui_list_single_graphic_pane

0xb0ed,	// (0x00052706) ncimui_query_pane_ParamLimits

0xb0ed,	// (0x00052706) ncimui_query_pane

0x477a,	// (0x0004bd93) list_highlight_pane_cp013

0x234f,	// (0x00049968) ncim_list_query_list_pane_t1_copy1

0x2329,	// (0x00049942) ncim_list_single_graphic_pane_g1

0xb100,	// (0x00052719) ncim_query_button_pane_cp01

0xb10c,	// (0x00052725) ncim_query_entry_pane_ParamLimits

0xb10c,	// (0x00052725) ncim_query_entry_pane

0xb11f,	// (0x00052738) ncimui_query_pane_g1

0xb12b,	// (0x00052744) ncimui_query_pane_t1_ParamLimits

0xb12b,	// (0x00052744) ncimui_query_pane_t1

0x519c,	// (0x0004c7b5) input_focus_pane_cp012

0x235d,	// (0x00049976) ncim_query_entry_pane_t1

0xcfc4,	// (0x000545dd) main_im_pane_ParamLimits

0x7ce2,	// (0x0004f2fb) main_mobtv_pane_ParamLimits

0x7ce2,	// (0x0004f2fb) main_mobtv_pane

0xada5,	// (0x000523be) main_cset6_slider_pane_g18_ParamLimits

0xada5,	// (0x000523be) main_cset6_slider_pane_g18

0xadb1,	// (0x000523ca) main_cset6_slider_pane_g19_ParamLimits

0xadb1,	// (0x000523ca) main_cset6_slider_pane_g19

0xf06b,	// (0x00056684) bg_main_mobtv_pane_ParamLimits

0xf06b,	// (0x00056684) bg_main_mobtv_pane

0xb144,	// (0x0005275d) main_mobtv_info_pane

0xb14f,	// (0x00052768) main_mobtv_loading_pane_ParamLimits

0xb14f,	// (0x00052768) main_mobtv_loading_pane

0x236f,	// (0x00049988) main_mobtv_pg_channel_list_pane

0x2379,	// (0x00049992) main_mobtv_pg_hdr_pane

0xb15c,	// (0x00052775) main_mobtv_programe_curr_pane_ParamLimits

0xb15c,	// (0x00052775) main_mobtv_programe_curr_pane

0xb169,	// (0x00052782) main_mobtv_programe_next_pane_ParamLimits

0xb169,	// (0x00052782) main_mobtv_programe_next_pane

0x2382,	// (0x0004999b) popup_mobtv_noti_window

0xd1ac,	// (0x000547c5) main_tv_pg_hdr_pane_g1

0x238a,	// (0x000499a3) main_tv_pg_hdr_pane_g2

0x2392,	// (0x000499ab) main_tv_pg_hdr_pane_g3

0x239a,	// (0x000499b3) main_tv_pg_hdr_pane_g4

0x23a2,	// (0x000499bb) main_tv_pg_hdr_pane_g5

0x23ac,	// (0x000499c5) main_tv_pg_hdr_pane_g6

0x23b6,	// (0x000499cf) main_tv_pg_hdr_pane_g7

0x23c0,	// (0x000499d9) main_tv_pg_hdr_pane_g8

0x23ca,	// (0x000499e3) main_tv_pg_hdr_pane_g9

0x23d4,	// (0x000499ed) main_tv_pg_hdr_pane_g10

0x23de,	// (0x000499f7) main_tv_pg_hdr_pane_g11

0x000a,

0xfb8a,	// (0x000571a3) main_tv_pg_hdr_pane_g

0x23e8,	// (0x00049a01) main_tv_pg_hdr_pane_t1

0x23f6,	// (0x00049a0f) main_tv_pg_hdr_pane_t2

0x2404,	// (0x00049a1d) main_tv_pg_hdr_pane_t3

0x2414,	// (0x00049a2d) main_tv_pg_hdr_pane_t4

0x2424,	// (0x00049a3d) main_tv_pg_hdr_pane_t5

0x0004,

0xfba1,	// (0x000571ba) main_tv_pg_hdr_pane_t

0x2434,	// (0x00049a4d) single_mobtv_pg_channel_pane_ParamLimits

0x2434,	// (0x00049a4d) single_mobtv_pg_channel_pane

0x2446,	// (0x00049a5f) single_mobtv_pg_channel_table_pane

0x244f,	// (0x00049a68) single_mobtv_pg_channel_thumb_pane

0x2458,	// (0x00049a71) single_tv_pg_channel_pane_g1

0x2461,	// (0x00049a7a) single_tv_pg_channel_pane_g2

0x0001,

0xfbac,	// (0x000571c5) single_tv_pg_channel_pane_g

0xcf52,	// (0x0005456b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf52,	// (0x0005456b) bg_single_mobtv_pg_channel_thumb_pane

0x246a,	// (0x00049a83) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x246a,	// (0x00049a83) single_mobtv_pg_channel_thumb_pane_g1

0x2478,	// (0x00049a91) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2478,	// (0x00049a91) single_mobtv_pg_channel_thumb_pane_g2

0x2484,	// (0x00049a9d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2484,	// (0x00049a9d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbb1,	// (0x000571ca) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbb1,	// (0x000571ca) single_mobtv_pg_channel_thumb_pane_g

0x2490,	// (0x00049aa9) single_mobtv_pg_channel_thumb_pane_t1

0x249e,	// (0x00049ab7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb8,	// (0x000571d1) single_mobtv_pg_channel_thumb_pane_t

0xd1ac,	// (0x000547c5) bg_single_mobtv_pg_channel_table_pane_g1

0xd1ac,	// (0x000547c5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x000569f6) bg_single_mobtv_pg_channel_table_pane_g

0x24ac,	// (0x00049ac5) single_mobtv_pg_channel_table_pane_t1

0x24ba,	// (0x00049ad3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbbd,	// (0x000571d6) single_mobtv_pg_channel_table_pane_t

0xb17e,	// (0x00052797) main_mobtv_info_pane_g1_ParamLimits

0xb17e,	// (0x00052797) main_mobtv_info_pane_g1

0xb19a,	// (0x000527b3) main_mobtv_info_pane_t1_ParamLimits

0xb19a,	// (0x000527b3) main_mobtv_info_pane_t1

0xb212,	// (0x0005282b) main_mobtv_info_pane_t2_ParamLimits

0xb212,	// (0x0005282b) main_mobtv_info_pane_t2

0x0002,

0xfbc7,	// (0x000571e0) main_mobtv_info_pane_t_ParamLimits

0xfbc7,	// (0x000571e0) main_mobtv_info_pane_t

0xb2a1,	// (0x000528ba) wait_bar_pane_cp05

0xb2b3,	// (0x000528cc) main_mobtv_loading_pane_g1_ParamLimits

0xb2b3,	// (0x000528cc) main_mobtv_loading_pane_g1

0xb2c1,	// (0x000528da) main_mobtv_loading_pane_g2_ParamLimits

0xb2c1,	// (0x000528da) main_mobtv_loading_pane_g2

0xb2cd,	// (0x000528e6) main_mobtv_loading_pane_g3_ParamLimits

0xb2cd,	// (0x000528e6) main_mobtv_loading_pane_g3

0x0002,

0xfbce,	// (0x000571e7) main_mobtv_loading_pane_g_ParamLimits

0xfbce,	// (0x000571e7) main_mobtv_loading_pane_g

0x24c8,	// (0x00049ae1) main_mobtv_loading_pane_t1_ParamLimits

0x24c8,	// (0x00049ae1) main_mobtv_loading_pane_t1

0x24e0,	// (0x00049af9) main_mobtv_loading_pane_t2_ParamLimits

0x24e0,	// (0x00049af9) main_mobtv_loading_pane_t2

0x0001,

0xfbd5,	// (0x000571ee) main_mobtv_loading_pane_t_ParamLimits

0xfbd5,	// (0x000571ee) main_mobtv_loading_pane_t

0xb2db,	// (0x000528f4) wait_bar_pane_cp06_ParamLimits

0xb2db,	// (0x000528f4) wait_bar_pane_cp06

0x2504,	// (0x00049b1d) main_mobtv_programe_curr_pane_t1

0x2512,	// (0x00049b2b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbda,	// (0x000571f3) main_mobtv_programe_curr_pane_t

0x2520,	// (0x00049b39) main_mobtv_programe_next_pane_t1

0x252e,	// (0x00049b47) main_mobtv_programe_next_pane_t2

0x253c,	// (0x00049b55) main_mobtv_programe_next_pane_t3

0x0002,

0xfbdf,	// (0x000571f8) main_mobtv_programe_next_pane_t

0x477a,	// (0x0004bd93) bg_popup_mobtv_noti_window_pane

0x254a,	// (0x00049b63) popup_mobtv_noti_window_g1

0x2552,	// (0x00049b6b) popup_mobtv_noti_window_t1

0x2560,	// (0x00049b79) popup_mobtv_noti_window_t2

0x0001,

0xfbe6,	// (0x000571ff) popup_mobtv_noti_window_t

0xd1ac,	// (0x000547c5) bg_popup_mobtv_noti_window_pane_g1

0x4a4e,	// (0x0004c067) sc_clock_pane

0x4a4e,	// (0x0004c067) main_fs_bigclock_pane

0xa922,	// (0x00051f3b) blid2_tripm_pane_t4_ParamLimits

0xa922,	// (0x00051f3b) blid2_tripm_pane_t4

0xb2e7,	// (0x00052900) sc_clock_pane_g1_ParamLimits

0xb2e7,	// (0x00052900) sc_clock_pane_g1

0xb2f5,	// (0x0005290e) sc_clock_pane_t1_ParamLimits

0xb2f5,	// (0x0005290e) sc_clock_pane_t1

0xb308,	// (0x00052921) sc_clock_pane_t2_ParamLimits

0xb308,	// (0x00052921) sc_clock_pane_t2

0xb31a,	// (0x00052933) sc_clock_pane_t3_ParamLimits

0xb31a,	// (0x00052933) sc_clock_pane_t3

0x0004,

0xfbeb,	// (0x00057204) sc_clock_pane_t_ParamLimits

0xfbeb,	// (0x00057204) sc_clock_pane_t

0xbf5d,	// (0x00053576) main_fs_bigclock_indicator_pane_ParamLimits

0xbf5d,	// (0x00053576) main_fs_bigclock_indicator_pane

0xb39d,	// (0x000529b6) main_fs_bigclock_pane_g1_ParamLimits

0xb39d,	// (0x000529b6) main_fs_bigclock_pane_g1

0xbf69,	// (0x00053582) main_fs_bigclock_pane_t1_ParamLimits

0xbf69,	// (0x00053582) main_fs_bigclock_pane_t1

0xbf7b,	// (0x00053594) main_fs_bigclock_pane_t2_ParamLimits

0xbf7b,	// (0x00053594) main_fs_bigclock_pane_t2

0xbf8f,	// (0x000535a8) main_fs_bigclock_pane_t3_ParamLimits

0xbf8f,	// (0x000535a8) main_fs_bigclock_pane_t3

0x0002,

0xfd7c,	// (0x00057395) main_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x00057395) main_fs_bigclock_pane_t

0x30d5,	// (0x0004a6ee) main_fs_bigclock_indicator_pane_g1

0x227e,	// (0x00049897) ncim_query_content_pane_g2_ParamLimits

0x227e,	// (0x00049897) ncim_query_content_pane_g2

0x0001,

0xfb78,	// (0x00057191) ncim_query_content_pane_g_ParamLimits

0xfb78,	// (0x00057191) ncim_query_content_pane_g

0xb32e,	// (0x00052947) sc_clock_pane_t4_ParamLimits

0xb32e,	// (0x00052947) sc_clock_pane_t4

0x7ce2,	// (0x0004f2fb) main_radioblah_pane

0x9510,	// (0x00050b29) cell_call4_button_pane_t1_copy1_ParamLimits

0x9510,	// (0x00050b29) cell_call4_button_pane_t1_copy1

0xaf71,	// (0x0005258a) main_ncimui_pane_t1_ParamLimits

0xaf71,	// (0x0005258a) main_ncimui_pane_t1

0xaf8b,	// (0x000525a4) main_ncimui_pane_t2_ParamLimits

0xaf8b,	// (0x000525a4) main_ncimui_pane_t2

0x0002,

0xfb71,	// (0x0005718a) main_ncimui_pane_t_ParamLimits

0xfb71,	// (0x0005718a) main_ncimui_pane_t

0x26a5,	// (0x00049cbe) main_radioblah_anim_pane_ParamLimits

0x26a5,	// (0x00049cbe) main_radioblah_anim_pane

0x26b6,	// (0x00049ccf) main_radioblah_info_pane_ParamLimits

0x26b6,	// (0x00049ccf) main_radioblah_info_pane

0x26ca,	// (0x00049ce3) main_radioblah_pane_t1_ParamLimits

0x26ca,	// (0x00049ce3) main_radioblah_pane_t1

0x26e6,	// (0x00049cff) main_radioblah_pane_t2_ParamLimits

0x26e6,	// (0x00049cff) main_radioblah_pane_t2

0x0003,

0xfc0c,	// (0x00057225) main_radioblah_pane_t_ParamLimits

0xfc0c,	// (0x00057225) main_radioblah_pane_t

0xb3f3,	// (0x00052a0c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb3f3,	// (0x00052a0c) main_radioblah_rocker_ctrl_pane

0x272e,	// (0x00049d47) main_radioblah_info_pane_t1_ParamLimits

0x272e,	// (0x00049d47) main_radioblah_info_pane_t1

0xb438,	// (0x00052a51) main_radioblah_info_pane_t2_ParamLimits

0xb438,	// (0x00052a51) main_radioblah_info_pane_t2

0x0003,

0xfc15,	// (0x0005722e) main_radioblah_info_pane_t_ParamLimits

0xfc15,	// (0x0005722e) main_radioblah_info_pane_t

0xd1ac,	// (0x000547c5) main_radioblah_rocker_ctrl_pane_g1

0xb4e8,	// (0x00052b01) main_radioblah_rocker_ctrl_pane_g2

0xb4f0,	// (0x00052b09) main_radioblah_rocker_ctrl_pane_g3

0xb4f8,	// (0x00052b11) main_radioblah_rocker_ctrl_pane_g4

0xb500,	// (0x00052b19) main_radioblah_rocker_ctrl_pane_g5

0xb508,	// (0x00052b21) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc1e,	// (0x00057237) main_radioblah_rocker_ctrl_pane_g

0xaf18,	// (0x00052531) main_cset_text2_pane_t1_copy1_ParamLimits

0x959b,	// (0x00050bb4) cam4_image_uncrop_qvga_pane

0x96e2,	// (0x00050cfb) vid4_image_uncrop_qcif_pane

0xaab0,	// (0x000520c9) cam6_image_uncrop_qvga_pane_ParamLimits

0xaab0,	// (0x000520c9) cam6_image_uncrop_qvga_pane

0x1f85,	// (0x0004959e) vid6_image_uncrop_qcif_pane_ParamLimits

0x1f85,	// (0x0004959e) vid6_image_uncrop_qcif_pane

0x477a,	// (0x0004bd93) bg_popup_preview_window_pane_cp03

0x2230,	// (0x00049849) list_cset_text2_pane

0x2238,	// (0x00049851) main_cset6_text2_pane_g1

0x2240,	// (0x00049859) main_cset6_text2_pane_t1

0xb510,	// (0x00052b29) list_cset_text2_pane_t1_ParamLimits

0xb510,	// (0x00052b29) list_cset_text2_pane_t1

0x7ce2,	// (0x0004f2fb) main_radioblah_pane_ParamLimits

0xb28d,	// (0x000528a6) main_mobtv_info_pane_t3_ParamLimits

0xb28d,	// (0x000528a6) main_mobtv_info_pane_t3

0xb3e1,	// (0x000529fa) main_radioblah_pane_g1

0xb40c,	// (0x00052a25) main_radioblah_info_pane_g1

0xb48d,	// (0x00052aa6) main_radioblah_info_pane_t3_ParamLimits

0xb48d,	// (0x00052aa6) main_radioblah_info_pane_t3

0x6cec,	// (0x0004e305) highlight_cell_cale_month_pane_ParamLimits

0x6cec,	// (0x0004e305) highlight_cell_cale_month_pane

0x4a4e,	// (0x0004c067) main_phob_fisheye_pane

0x10fa,	// (0x00048713) scroll_pane_cp0031_ParamLimits

0x10fa,	// (0x00048713) scroll_pane_cp0031

0x2093,	// (0x000496ac) wait_bar_pane_cp08_ParamLimits

0xacbc,	// (0x000522d5) cset_list_set_pane_copy1_ParamLimits

0x2768,	// (0x00049d81) highlight_cell_cale_month_pane_g1

0xb52d,	// (0x00052b46) highlight_cell_cale_month_pane_t1

0x1ce3,	// (0x000492fc) list_gen_pane_cp01

0x186d,	// (0x00048e86) scroll_pane_01

0xb53b,	// (0x00052b54) list_single_double_fisheye_pane

0xb544,	// (0x00052b5d) list_double_fisheye_pane_g1_ParamLimits

0xb544,	// (0x00052b5d) list_double_fisheye_pane_g1

0xb550,	// (0x00052b69) list_double_fisheye_pane_g2_ParamLimits

0xb550,	// (0x00052b69) list_double_fisheye_pane_g2

0xb564,	// (0x00052b7d) list_double_fisheye_pane_g3_ParamLimits

0xb564,	// (0x00052b7d) list_double_fisheye_pane_g3

0x0004,

0xfc2b,	// (0x00057244) list_double_fisheye_pane_g_ParamLimits

0xfc2b,	// (0x00057244) list_double_fisheye_pane_g

0xb58d,	// (0x00052ba6) list_double_fisheye_pane_t1_ParamLimits

0xb58d,	// (0x00052ba6) list_double_fisheye_pane_t1

0xb5a8,	// (0x00052bc1) list_double_fisheye_pane_t2_ParamLimits

0xb5a8,	// (0x00052bc1) list_double_fisheye_pane_t2

0x0001,

0xfc36,	// (0x0005724f) list_double_fisheye_pane_t_ParamLimits

0xfc36,	// (0x0005724f) list_double_fisheye_pane_t

0x4a4e,	// (0x0004c067) main_call5_pane

0xb354,	// (0x0005296d) sc_swipe_pane_ParamLimits

0xb354,	// (0x0005296d) sc_swipe_pane

0xb5d6,	// (0x00052bef) call5_image_pane_ParamLimits

0xb5d6,	// (0x00052bef) call5_image_pane

0xb5e6,	// (0x00052bff) call5_swipe_1_pane_ParamLimits

0xb5e6,	// (0x00052bff) call5_swipe_1_pane

0xb5f2,	// (0x00052c0b) call5_swipe_2_pane_ParamLimits

0xb5f2,	// (0x00052c0b) call5_swipe_2_pane

0xb60c,	// (0x00052c25) popup_call5_audio_first_window_ParamLimits

0xb60c,	// (0x00052c25) popup_call5_audio_first_window

0xcf52,	// (0x0005456b) call5_swipe_1_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) call5_swipe_1_pane_g1

0x2770,	// (0x00049d89) call5_swipe_1_pane_g2_ParamLimits

0x2770,	// (0x00049d89) call5_swipe_1_pane_g2

0x0001,

0xfc3b,	// (0x00057254) call5_swipe_1_pane_g_ParamLimits

0xfc3b,	// (0x00057254) call5_swipe_1_pane_g

0x277c,	// (0x00049d95) call5_swipe_1_pane_t1_ParamLimits

0x277c,	// (0x00049d95) call5_swipe_1_pane_t1

0xcf52,	// (0x0005456b) call5_swipe_2_pane_g1_ParamLimits

0xcf52,	// (0x0005456b) call5_swipe_2_pane_g1

0x2791,	// (0x00049daa) call5_swipe_2_pane_g2_ParamLimits

0x2791,	// (0x00049daa) call5_swipe_2_pane_g2

0x0001,

0xfc40,	// (0x00057259) call5_swipe_2_pane_g_ParamLimits

0xfc40,	// (0x00057259) call5_swipe_2_pane_g

0x279d,	// (0x00049db6) call5_swipe_2_pane_t1_ParamLimits

0x279d,	// (0x00049db6) call5_swipe_2_pane_t1

0x27b2,	// (0x00049dcb) sc_swipe_pane_g1_ParamLimits

0x27b2,	// (0x00049dcb) sc_swipe_pane_g1

0x27bf,	// (0x00049dd8) sc_swipe_pane_g2_ParamLimits

0x27bf,	// (0x00049dd8) sc_swipe_pane_g2

0x0001,

0xfc45,	// (0x0005725e) sc_swipe_pane_g_ParamLimits

0xfc45,	// (0x0005725e) sc_swipe_pane_g

0x27cb,	// (0x00049de4) sc_swipe_pane_t1_ParamLimits

0x27cb,	// (0x00049de4) sc_swipe_pane_t1

0x4a4e,	// (0x0004c067) main_cmail_launcher_pane

0xb61a,	// (0x00052c33) aid_size_cell_cmail_l_ParamLimits

0xb61a,	// (0x00052c33) aid_size_cell_cmail_l

0xb628,	// (0x00052c41) grid_cmail_l_pane_ParamLimits

0xb628,	// (0x00052c41) grid_cmail_l_pane

0xb638,	// (0x00052c51) cell_cmail_l_pane_ParamLimits

0xb638,	// (0x00052c51) cell_cmail_l_pane

0x27e0,	// (0x00049df9) cell_cmail_l_pane_g1_ParamLimits

0x27e0,	// (0x00049df9) cell_cmail_l_pane_g1

0x27ec,	// (0x00049e05) cell_cmail_l_pane_t1_ParamLimits

0x27ec,	// (0x00049e05) cell_cmail_l_pane_t1

0x2802,	// (0x00049e1b) cell_cmail_l_pane_t2_ParamLimits

0x2802,	// (0x00049e1b) cell_cmail_l_pane_t2

0x0001,

0xfc4a,	// (0x00057263) cell_cmail_l_pane_t_ParamLimits

0xfc4a,	// (0x00057263) cell_cmail_l_pane_t

0x519c,	// (0x0004c7b5) grid_highlight_pane_cp018_ParamLimits

0x519c,	// (0x0004c7b5) grid_highlight_pane_cp018

0x48a4,	// (0x0004bebd) main2_pane_ParamLimits

0x48a4,	// (0x0004bebd) main2_pane

0xd053,	// (0x0005466c) popup_sp_fs_action_menu_bg_pane_g1

0xd05b,	// (0x00054674) popup_sp_fs_action_menu_bg_pane_g2

0xd063,	// (0x0005467c) popup_sp_fs_action_menu_bg_pane_g3

0xd06b,	// (0x00054684) popup_sp_fs_action_menu_bg_pane_g4

0xd073,	// (0x0005468c) popup_sp_fs_action_menu_bg_pane_g5

0xd07b,	// (0x00054694) popup_sp_fs_action_menu_bg_pane_g6

0xd083,	// (0x0005469c) popup_sp_fs_action_menu_bg_pane_g7

0xd08b,	// (0x000546a4) popup_sp_fs_action_menu_bg_pane_g8

0xd093,	// (0x000546ac) popup_sp_fs_action_menu_bg_pane_g9

0xd09b,	// (0x000546b4) popup_sp_fs_action_menu_bg_pane_g10

0xd09b,	// (0x000546b4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0005675e) popup_sp_fs_action_menu_bg_pane_g

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g3_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g3_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g3_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g3_g2

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0005680c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0005680c) list_medium_line_x2_t3_g3_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g3_t1

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g3_t2

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00056813) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00056813) list_medium_line_x2_t3_g3_t

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g2_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g2_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g2_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0005681a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0005681a) list_medium_line_x2_t3_g2_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g2_t1

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g2_t2

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00056813) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00056813) list_medium_line_x2_t3_g2_t

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g4_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g4_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g4_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g4_g2

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g4_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g4_g3

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g4_g4_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0005681f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0005681f) list_medium_line_x2_t4_g4_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g4_t1

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g4_t2

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g4_t3

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00056828) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00056828) list_medium_line_x2_t4_g4_t

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g4_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g4_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g4_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g4_g2

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g4_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g4_g3

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g4_g4_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0005681f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0005681f) list_medium_line_x2_t2_g4_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g4_t1

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0005688f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0005688f) list_medium_line_x2_t2_g4_t

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g3_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g3_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g3_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g3_g2

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g3_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0005680c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0005680c) list_medium_line_x2_t2_g3_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g3_t1

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0005688f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0005688f) list_medium_line_x2_t2_g3_t

0x6ebc,	// (0x0004e4d5) main_sp_fs_list_pane_ParamLimits

0x6ebc,	// (0x0004e4d5) main_sp_fs_list_pane

0x6ec8,	// (0x0004e4e1) sp_fs_scroll_pane_ParamLimits

0x6ec8,	// (0x0004e4e1) sp_fs_scroll_pane

0xd6ef,	// (0x00054d08) list_medium_line_x2_t3_t1

0xd6ef,	// (0x00054d08) list_medium_line_x2_t3_t2

0xd6ef,	// (0x00054d08) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x000568da) list_medium_line_x2_t3_t

0xd6ef,	// (0x00054d08) list_medium_line_x3_t4_t1

0xd6ef,	// (0x00054d08) list_medium_line_x3_t4_t2

0xd6ef,	// (0x00054d08) list_medium_line_x3_t4_t3

0xd6ef,	// (0x00054d08) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x000568e1) list_medium_line_x3_t4_t

0xd6ef,	// (0x00054d08) list_medium_line_x4_t5_t1

0xd6ef,	// (0x00054d08) list_medium_line_x4_t5_t2

0xd6ef,	// (0x00054d08) list_medium_line_x4_t5_t3

0xd6ef,	// (0x00054d08) list_medium_line_x4_t5_t4

0xd6ef,	// (0x00054d08) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x000568ea) list_medium_line_x4_t5_t

0xcf52,	// (0x0005456b) list_medium_line_t4_g4_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t4_g4_g1

0xcf52,	// (0x0005456b) list_medium_line_t4_g4_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t4_g4_g2

0xcf52,	// (0x0005456b) list_medium_line_t4_g4_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t4_g4_g3

0xcf52,	// (0x0005456b) list_medium_line_t4_g4_g4_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0005681f) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0005681f) list_medium_line_t4_g4_g

0xd1c6,	// (0x000547df) list_medium_line_t4_g4_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t4_g4_t1

0xd1c6,	// (0x000547df) list_medium_line_t4_g4_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t4_g4_t2

0xd1c6,	// (0x000547df) list_medium_line_t4_g4_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t4_g4_t3

0xd1c6,	// (0x000547df) list_medium_line_t4_g4_t4_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00056828) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00056828) list_medium_line_t4_g4_t

0x6fb1,	// (0x0004e5ca) chi_dic_find_pane_g1

0x7d0a,	// (0x0004f323) main_tport_pane

0xd6ef,	// (0x00054d08) list_medium_line_plain_t1

0xcf52,	// (0x0005456b) list_medium_line_t2_g2_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t2_g2_g1

0xcf52,	// (0x0005456b) list_medium_line_t2_g2_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0005681a) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0005681a) list_medium_line_t2_g2_g

0xd1c6,	// (0x000547df) list_medium_line_t2_g2_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t2_g2_t1

0xd1c6,	// (0x000547df) list_medium_line_t2_g2_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x0005688f) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x0005688f) list_medium_line_t2_g2_t

0x1cec,	// (0x00049305) aid_sp_fs_list_icon_a_sm

0x1cf4,	// (0x0004930d) aid_sp_fs_list_icon_d

0x1cfc,	// (0x00049315) aid_sp_fs_text_primary

0x1d05,	// (0x0004931e) aid_sp_fs_text_secondary

0x477a,	// (0x0004bd93) list_medium_line

0x477a,	// (0x0004bd93) list_medium_line_g2

0x477a,	// (0x0004bd93) list_medium_line_g3

0x477a,	// (0x0004bd93) list_medium_line_plain

0x477a,	// (0x0004bd93) list_medium_line_plain_t2

0x477a,	// (0x0004bd93) list_medium_line_plain_t3

0x477a,	// (0x0004bd93) list_medium_line_right_icon

0x477a,	// (0x0004bd93) list_medium_line_right_iconx2

0x477a,	// (0x0004bd93) list_medium_line_t2

0x477a,	// (0x0004bd93) list_medium_line_t2_g2

0x477a,	// (0x0004bd93) list_medium_line_t2_g3

0x477a,	// (0x0004bd93) list_medium_line_t2_right_icon

0x477a,	// (0x0004bd93) list_medium_line_t2_right_iconx2

0x477a,	// (0x0004bd93) list_medium_line_t3

0x477a,	// (0x0004bd93) list_medium_line_t3_g2

0x477a,	// (0x0004bd93) list_medium_line_t3_g3

0x477a,	// (0x0004bd93) list_medium_line_t3_right_iconx2

0x477a,	// (0x0004bd93) list_medium_line_t4_g4

0x477a,	// (0x0004bd93) list_medium_line_x2

0x477a,	// (0x0004bd93) list_medium_line_x2_t2_g2

0x477a,	// (0x0004bd93) list_medium_line_x2_t2_g3

0x477a,	// (0x0004bd93) list_medium_line_x2_t2_g4

0x477a,	// (0x0004bd93) list_medium_line_x2_t3

0x477a,	// (0x0004bd93) list_medium_line_x2_t3_g2

0x477a,	// (0x0004bd93) list_medium_line_x2_t3_g3

0x477a,	// (0x0004bd93) list_medium_line_x2_t3_g4

0x477a,	// (0x0004bd93) list_medium_line_x2_t4_g2

0x477a,	// (0x0004bd93) list_medium_line_x2_t4_g4

0x477a,	// (0x0004bd93) list_medium_line_x3

0x477a,	// (0x0004bd93) list_medium_line_x3_t4

0x477a,	// (0x0004bd93) list_medium_line_x3_t4_g4

0x477a,	// (0x0004bd93) list_medium_line_x4_t4

0x477a,	// (0x0004bd93) list_medium_line_x4_t4_g7

0x477a,	// (0x0004bd93) list_medium_line_x4_t5

0xa7a7,	// (0x00051dc0) list_single_fs_dyc_pane_ParamLimits

0xa7a7,	// (0x00051dc0) list_single_fs_dyc_pane

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g1

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g2

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g3

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g4

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g5_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g5

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g6_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x4_t4_g7_g6

0xcf60,	// (0x00054579) list_medium_line_x4_t4_g7_g7_ParamLimits

0xcf60,	// (0x00054579) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb52,	// (0x0005716b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb52,	// (0x0005716b) list_medium_line_x4_t4_g7_g

0xd1c6,	// (0x000547df) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x4_t4_g7_t1

0xd1c6,	// (0x000547df) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x4_t4_g7_t2

0xd1c6,	// (0x000547df) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x4_t4_g7_t3

0xd17e,	// (0x00054797) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd17e,	// (0x00054797) list_medium_line_x4_t4_g7_t4

0xd17e,	// (0x00054797) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd17e,	// (0x00054797) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb61,	// (0x0005717a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb61,	// (0x0005717a) list_medium_line_x4_t4_g7_t

0xaefb,	// (0x00052514) list_single_dyc_row_pane_ParamLimits

0xaefb,	// (0x00052514) list_single_dyc_row_pane

0xb5ca,	// (0x00052be3) call5_gesture_pane_ParamLimits

0xb5ca,	// (0x00052be3) call5_gesture_pane

0xb5fe,	// (0x00052c17) call5_windows_pane_ParamLimits

0xb5fe,	// (0x00052c17) call5_windows_pane

0xb651,	// (0x00052c6a) call5_swipe_1_pane_cp_ParamLimits

0xb651,	// (0x00052c6a) call5_swipe_1_pane_cp

0xb65d,	// (0x00052c76) call5_swipe_2_pane_cp_ParamLimits

0xb65d,	// (0x00052c76) call5_swipe_2_pane_cp

0xd176,	// (0x0005478f) call5_image_pane_cp

0xb669,	// (0x00052c82) popup_call5_audio_first_window_cp_ParamLimits

0xb669,	// (0x00052c82) popup_call5_audio_first_window_cp

0x27b2,	// (0x00049dcb) call5_swipe_1_pane_g1_cp_ParamLimits

0x27b2,	// (0x00049dcb) call5_swipe_1_pane_g1_cp

0x281f,	// (0x00049e38) call5_swipe_1_pane_g2_cp

0x27cb,	// (0x00049de4) call5_swipe_1_pane_t1_cp_ParamLimits

0x27cb,	// (0x00049de4) call5_swipe_1_pane_t1_cp

0x27b2,	// (0x00049dcb) call5_swipe_2_pane_g1_cp_ParamLimits

0x27b2,	// (0x00049dcb) call5_swipe_2_pane_g1_cp

0x2827,	// (0x00049e40) call5_swipe_2_pane_g2_cp

0x282f,	// (0x00049e48) call5_swipe_2_pane_t1_cp_ParamLimits

0x282f,	// (0x00049e48) call5_swipe_2_pane_t1_cp

0x519c,	// (0x0004c7b5) main_sp_fs_email_pane

0x2844,	// (0x00049e5d) main_sp_fs_listscroll_pane_te

0xb677,	// (0x00052c90) popup_sp_fs_action_menu_pane_ParamLimits

0xb677,	// (0x00052c90) popup_sp_fs_action_menu_pane

0xd1ac,	// (0x000547c5) bg_sp_fs_ctrlbar_pane_g1

0x284d,	// (0x00049e66) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2856,	// (0x00049e6f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x285f,	// (0x00049e78) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd1ac,	// (0x000547c5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4f,	// (0x00057268) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0ab9,	// (0x000480d2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0ab9,	// (0x000480d2) bg_sp_fs_ctrlbar_ddmenu_pane

0x2868,	// (0x00049e81) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2868,	// (0x00049e81) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2874,	// (0x00049e8d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2874,	// (0x00049e8d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc58,	// (0x00057271) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc58,	// (0x00057271) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2880,	// (0x00049e99) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2880,	// (0x00049e99) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd1ac,	// (0x000547c5) list_medium_line_t2_right_icon_g1

0xd6ef,	// (0x00054d08) list_medium_line_t2_right_icon_t1

0xd6ef,	// (0x00054d08) list_medium_line_t2_right_icon_t2

0x0001,

0xfc5d,	// (0x00057276) list_medium_line_t2_right_icon_t

0xeee4,	// (0x000564fd) bg_sp_fs_ctrlbar_pane_ParamLimits

0xeee4,	// (0x000564fd) bg_sp_fs_ctrlbar_pane

0xb712,	// (0x00052d2b) main_sp_fs_ctrlbar_button_pane_cp01

0xb71a,	// (0x00052d33) main_sp_fs_ctrlbar_ddmenu_pane

0x28d2,	// (0x00049eeb) main_sp_fs_ctrlbar_pane_g1

0x28de,	// (0x00049ef7) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc62,	// (0x0005727b) main_sp_fs_ctrlbar_pane_g

0xb756,	// (0x00052d6f) main_sp_fs_ctrlbar_pane_t1

0xb791,	// (0x00052daa) main_sp_fs_ctrlbar_pane

0xb7a7,	// (0x00052dc0) main_sp_fs_listscroll_pane_te_cp01

0xb7b8,	// (0x00052dd1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xb7b8,	// (0x00052dd1) popup_sp_fs_action_menu_pane_cp01

0x519c,	// (0x0004c7b5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x519c,	// (0x0004c7b5) bg_sp_fs_highlight_list_pane_cp01

0x2905,	// (0x00049f1e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2905,	// (0x00049f1e) sp_fs_action_menu_list_gene_pane_g1

0x2914,	// (0x00049f2d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2914,	// (0x00049f2d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc70,	// (0x00057289) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc70,	// (0x00057289) sp_fs_action_menu_list_gene_pane_g

0x2921,	// (0x00049f3a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2921,	// (0x00049f3a) sp_fs_action_menu_list_gene_pane_t1

0x2939,	// (0x00049f52) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2939,	// (0x00049f52) sp_fs_action_menu_list_gene_pane

0x2958,	// (0x00049f71) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2958,	// (0x00049f71) popup_sp_fs_action_menu_bg_pane

0x2966,	// (0x00049f7f) sp_fs_action_menu_list_pane_ParamLimits

0x2966,	// (0x00049f7f) sp_fs_action_menu_list_pane

0xb7d8,	// (0x00052df1) sp_fs_scroll_pane_cp01_ParamLimits

0xb7d8,	// (0x00052df1) sp_fs_scroll_pane_cp01

0xd6ef,	// (0x00054d08) list_medium_line_plain_t2_t1

0xd6ef,	// (0x00054d08) list_medium_line_plain_t2_t2

0x0001,

0xfc5d,	// (0x00057276) list_medium_line_plain_t2_t

0xd6ef,	// (0x00054d08) list_medium_line_plain_t3_t1

0xd6ef,	// (0x00054d08) list_medium_line_plain_t3_t2

0xd6ef,	// (0x00054d08) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x000568da) list_medium_line_plain_t3_t

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g2_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g2_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g2_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0005681a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0005681a) list_medium_line_x2_t2_g2_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g2_t1

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0005688f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0005688f) list_medium_line_x2_t2_g2_t

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g2_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g2_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0005681a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0005681a) list_medium_line_x2_t4_g2_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g2_t1

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g2_t2

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g2_t3

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00056828) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00056828) list_medium_line_x2_t4_g2_t

0xd1ac,	// (0x000547c5) list_medium_line_t3_right_iconx2_g1

0xd1ac,	// (0x000547c5) list_medium_line_t3_right_iconx2_g2

0xd1ac,	// (0x000547c5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x000569fb) list_medium_line_t3_right_iconx2_g

0xd6ef,	// (0x00054d08) list_medium_line_t3_right_iconx2_t1

0xd6ef,	// (0x00054d08) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5d,	// (0x00057276) list_medium_line_t3_right_iconx2_t

0xcf52,	// (0x0005456b) list_medium_line_x3_t4_g4_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x3_t4_g4_g1

0xcf52,	// (0x0005456b) list_medium_line_x3_t4_g4_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x3_t4_g4_g2

0xcf52,	// (0x0005456b) list_medium_line_x3_t4_g4_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x3_t4_g4_g3

0xcf52,	// (0x0005456b) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0005681f) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0005681f) list_medium_line_x3_t4_g4_g

0xd1c6,	// (0x000547df) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x3_t4_g4_t1

0xd1c6,	// (0x000547df) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x3_t4_g4_t2

0xd1c6,	// (0x000547df) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x3_t4_g4_t3

0xd1c6,	// (0x000547df) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00056828) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00056828) list_medium_line_x3_t4_g4_t

0xb7fe,	// (0x00052e17) list_single_dyc_row_text_pane_t1_ParamLimits

0xb7fe,	// (0x00052e17) list_single_dyc_row_text_pane_t1

0xb835,	// (0x00052e4e) list_single_dyc_row_text_pane_t2_ParamLimits

0xb835,	// (0x00052e4e) list_single_dyc_row_text_pane_t2

0x2986,	// (0x00049f9f) list_single_dyc_row_text_pane_t3_ParamLimits

0x2986,	// (0x00049f9f) list_single_dyc_row_text_pane_t3

0x0005,

0xfc75,	// (0x0005728e) list_single_dyc_row_text_pane_t_ParamLimits

0xfc75,	// (0x0005728e) list_single_dyc_row_text_pane_t

0x29aa,	// (0x00049fc3) list_single_dyc_row_pane_g1_ParamLimits

0x29aa,	// (0x00049fc3) list_single_dyc_row_pane_g1

0x29b6,	// (0x00049fcf) list_single_dyc_row_pane_g2_ParamLimits

0x29b6,	// (0x00049fcf) list_single_dyc_row_pane_g2

0x29c2,	// (0x00049fdb) list_single_dyc_row_pane_g3_ParamLimits

0x29c2,	// (0x00049fdb) list_single_dyc_row_pane_g3

0x29ce,	// (0x00049fe7) list_single_dyc_row_pane_g4_ParamLimits

0x29ce,	// (0x00049fe7) list_single_dyc_row_pane_g4

0x0003,

0xfc82,	// (0x0005729b) list_single_dyc_row_pane_g_ParamLimits

0xfc82,	// (0x0005729b) list_single_dyc_row_pane_g

0x29da,	// (0x00049ff3) list_single_dyc_row_text_pane_ParamLimits

0x29da,	// (0x00049ff3) list_single_dyc_row_text_pane

0x477a,	// (0x0004bd93) bg_sp_fs_scroll_pane

0x29f9,	// (0x0004a012) thumb_sp_fs_scroll_pane

0xcf52,	// (0x0005456b) list_medium_line_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_g1

0xd1c6,	// (0x000547df) list_medium_line_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t1

0xcf52,	// (0x0005456b) list_medium_line_x2_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0005681a) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0005681a) list_medium_line_x2_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t1

0xcf52,	// (0x0005456b) list_medium_line_x3_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x3_g1

0x2a02,	// (0x0004a01b) list_medium_line_x3_g2_ParamLimits

0x2a02,	// (0x0004a01b) list_medium_line_x3_g2

0x0001,

0xfc8b,	// (0x000572a4) list_medium_line_x3_g_ParamLimits

0xfc8b,	// (0x000572a4) list_medium_line_x3_g

0x2a10,	// (0x0004a029) list_medium_line_x3_t1_ParamLimits

0x2a10,	// (0x0004a029) list_medium_line_x3_t1

0x2a24,	// (0x0004a03d) thumb_sp_fs_scroll_pane_g1

0x2a2d,	// (0x0004a046) thumb_sp_fs_scroll_pane_g2

0x2a36,	// (0x0004a04f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x000572a9) thumb_sp_fs_scroll_pane_g

0x2a24,	// (0x0004a03d) bg_sp_fs_scroll_pane_g1

0x2a2d,	// (0x0004a046) bg_sp_fs_scroll_pane_g2

0x2a36,	// (0x0004a04f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x000572a9) bg_sp_fs_scroll_pane_g

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g4_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g4_g1

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g4_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g4_g2

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g4_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g4_g3

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g4_g4_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0005681f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0005681f) list_medium_line_x2_t3_g4_g

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g4_t1

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g4_t2

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00056813) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00056813) list_medium_line_x2_t3_g4_t

0xcf52,	// (0x0005456b) list_medium_line_g2_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_g2_g1

0xcf52,	// (0x0005456b) list_medium_line_g2_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0005681a) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0005681a) list_medium_line_g2_g

0xd1c6,	// (0x000547df) list_medium_line_g2_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_g2_t1

0xcf52,	// (0x0005456b) list_medium_line_t3_g2_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t3_g2_g1

0xcf52,	// (0x0005456b) list_medium_line_t3_g2_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0005681a) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0005681a) list_medium_line_t3_g2_g

0xd1c6,	// (0x000547df) list_medium_line_t3_g2_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_g2_t1

0xd1c6,	// (0x000547df) list_medium_line_t3_g2_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_g2_t2

0xd1c6,	// (0x000547df) list_medium_line_t3_g2_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00056813) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00056813) list_medium_line_t3_g2_t

0xd1ac,	// (0x000547c5) list_medium_line_right_icon_g1

0xd6ef,	// (0x00054d08) list_medium_line_right_icon_t1

0xcf52,	// (0x0005456b) list_medium_line_t2_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t2_g1

0xd1c6,	// (0x000547df) list_medium_line_t2_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t2_t1

0xd1c6,	// (0x000547df) list_medium_line_t2_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x0005688f) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x0005688f) list_medium_line_t2_t

0xcf52,	// (0x0005456b) list_medium_line_t3_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t3_g1

0xd1c6,	// (0x000547df) list_medium_line_t3_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_t1

0xd1c6,	// (0x000547df) list_medium_line_t3_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_t2

0xd1c6,	// (0x000547df) list_medium_line_t3_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00056813) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00056813) list_medium_line_t3_t

0xcf52,	// (0x0005456b) list_medium_line_g3_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_g3_g1

0xcf52,	// (0x0005456b) list_medium_line_g3_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_g3_g2

0xcf52,	// (0x0005456b) list_medium_line_g3_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0005680c) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0005680c) list_medium_line_g3_g

0xd1c6,	// (0x000547df) list_medium_line_g3_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_g3_t1

0xcf52,	// (0x0005456b) list_medium_line_t2_g3_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t2_g3_g1

0xcf52,	// (0x0005456b) list_medium_line_t2_g3_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t2_g3_g2

0xcf52,	// (0x0005456b) list_medium_line_t2_g3_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0005680c) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0005680c) list_medium_line_t2_g3_g

0xd1c6,	// (0x000547df) list_medium_line_t2_g3_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t2_g3_t1

0xd1c6,	// (0x000547df) list_medium_line_t2_g3_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x0005688f) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x0005688f) list_medium_line_t2_g3_t

0xcf52,	// (0x0005456b) list_medium_line_t3_g3_g1_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t3_g3_g1

0xcf52,	// (0x0005456b) list_medium_line_t3_g3_g2_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t3_g3_g2

0xcf52,	// (0x0005456b) list_medium_line_t3_g3_g3_ParamLimits

0xcf52,	// (0x0005456b) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0005680c) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0005680c) list_medium_line_t3_g3_g

0xd1c6,	// (0x000547df) list_medium_line_t3_g3_t1_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_g3_t1

0xd1c6,	// (0x000547df) list_medium_line_t3_g3_t2_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_g3_t2

0xd1c6,	// (0x000547df) list_medium_line_t3_g3_t3_ParamLimits

0xd1c6,	// (0x000547df) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00056813) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00056813) list_medium_line_t3_g3_t

0xd1ac,	// (0x000547c5) list_medium_line_right_iconx2_g1

0xd1ac,	// (0x000547c5) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x000569f6) list_medium_line_right_iconx2_g

0xd6ef,	// (0x00054d08) list_medium_line_right_iconx2_t1

0xd1ac,	// (0x000547c5) list_medium_line_t2_right_iconx2_g1

0xd1ac,	// (0x000547c5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x000569f6) list_medium_line_t2_right_iconx2_g

0xd6ef,	// (0x00054d08) list_medium_line_t2_right_iconx2_t1

0xd6ef,	// (0x00054d08) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc5d,	// (0x00057276) list_medium_line_t2_right_iconx2_t

0xd6ef,	// (0x00054d08) list_medium_line_x4_t4_t1

0xd6ef,	// (0x00054d08) list_medium_line_x4_t4_t2

0xd6ef,	// (0x00054d08) list_medium_line_x4_t4_t3

0xd6ef,	// (0x00054d08) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x000568e1) list_medium_line_x4_t4_t

0xb982,	// (0x00052f9b) tport_appsw_pane_ParamLimits

0xb982,	// (0x00052f9b) tport_appsw_pane

0xb990,	// (0x00052fa9) tport_contact_pane_ParamLimits

0xb990,	// (0x00052fa9) tport_contact_pane

0xb9a0,	// (0x00052fb9) tport_listscroll_pane_ParamLimits

0xb9a0,	// (0x00052fb9) tport_listscroll_pane

0xb9b0,	// (0x00052fc9) cell_tport_appsw_pane_ParamLimits

0xb9b0,	// (0x00052fc9) cell_tport_appsw_pane

0xcf60,	// (0x00054579) tport_appsw_pane_g1_ParamLimits

0xcf60,	// (0x00054579) tport_appsw_pane_g1

0x2a3f,	// (0x0004a058) tport_contact_pane_g1

0x2304,	// (0x0004991d) tport_contact_pane_t1

0x2a48,	// (0x0004a061) tport_contact_pane_t2

0x0001,

0xfc97,	// (0x000572b0) tport_contact_pane_t

0x2a56,	// (0x0004a06f) list_tport_pane

0x2a5f,	// (0x0004a078) scroll_pane_cp_030

0xb9e3,	// (0x00052ffc) cell_tport_appsw_pane_g1

0xb9f3,	// (0x0005300c) cell_tport_appsw_pane_t1

0xba01,	// (0x0005301a) grid_highlight_pane_cp019

0xba09,	// (0x00053022) list_tport_double_graphic_pane_ParamLimits

0xba09,	// (0x00053022) list_tport_double_graphic_pane

0x519c,	// (0x0004c7b5) list_highlight_pane_cp023_ParamLimits

0x519c,	// (0x0004c7b5) list_highlight_pane_cp023

0xba1a,	// (0x00053033) list_tport_double_graphic_pane_g1_ParamLimits

0xba1a,	// (0x00053033) list_tport_double_graphic_pane_g1

0xba27,	// (0x00053040) list_tport_double_graphic_pane_t1_ParamLimits

0xba27,	// (0x00053040) list_tport_double_graphic_pane_t1

0xba3c,	// (0x00053055) list_tport_double_graphic_pane_t2_ParamLimits

0xba3c,	// (0x00053055) list_tport_double_graphic_pane_t2

0x0001,

0xfca3,	// (0x000572bc) list_tport_double_graphic_pane_t_ParamLimits

0xfca3,	// (0x000572bc) list_tport_double_graphic_pane_t

0x477a,	// (0x0004bd93) main_cale_note_pane

0x9923,	// (0x00050f3c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9923,	// (0x00050f3c) cell_vitu2_function_top_wide_pane_cp01

0xb2a1,	// (0x000528ba) wait_bar_pane_cp05_ParamLimits

0x519c,	// (0x0004c7b5) listscroll_cmail_pane

0x2a68,	// (0x0004a081) list_cmail_pane

0xba4e,	// (0x00053067) list_cmail_body_pane

0xba75,	// (0x0005308e) list_single_cmail_header_caption_pane

0xba9e,	// (0x000530b7) list_single_cmail_header_detail_pane_ParamLimits

0xba9e,	// (0x000530b7) list_single_cmail_header_detail_pane

0x2a78,	// (0x0004a091) list_single_cmail_header_caption_pane_t1

0xbad4,	// (0x000530ed) list_single_cmail_header_detail_pane_g1_ParamLimits

0xbad4,	// (0x000530ed) list_single_cmail_header_detail_pane_g1

0x2a8f,	// (0x0004a0a8) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2a8f,	// (0x0004a0a8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca8,	// (0x000572c1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca8,	// (0x000572c1) list_single_cmail_header_detail_pane_g

0x2aa8,	// (0x0004a0c1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2aa8,	// (0x0004a0c1) list_single_cmail_header_detail_pane_t1

0x2b08,	// (0x0004a121) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2b08,	// (0x0004a121) list_single_cmail_header_editor_pane_bg

0x2461,	// (0x00049a7a) list_cmail_body_pane_g1

0x2b1f,	// (0x0004a138) list_cmail_body_pane_t1

0x1753,	// (0x00048d6c) list_single_cmail_header_editor_pane_bg_g1

0xd3d1,	// (0x000549ea) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1763,	// (0x00048d7c) list_single_cmail_header_editor_pane_bg_g1_copy2

0x175b,	// (0x00048d74) list_single_cmail_header_editor_pane_bg_g1_copy3

0x19cc,	// (0x00048fe5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1783,	// (0x00048d9c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1773,	// (0x00048d8c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x177b,	// (0x00048d94) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd3b1,	// (0x000549ca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbaea,	// (0x00053103) calenote_gesture_pane_ParamLimits

0xbaea,	// (0x00053103) calenote_gesture_pane

0xbb04,	// (0x0005311d) calenote_window_pane_ParamLimits

0xbb04,	// (0x0005311d) calenote_window_pane

0x2b2d,	// (0x0004a146) popup_note_window_cp01

0xbb1c,	// (0x00053135) calenote_swipe_1_pane_ParamLimits

0xbb1c,	// (0x00053135) calenote_swipe_1_pane

0xb65d,	// (0x00052c76) calenote_swipe_2_pane_ParamLimits

0xb65d,	// (0x00052c76) calenote_swipe_2_pane

0x27b2,	// (0x00049dcb) calenote_swipe_1_pane_g1_ParamLimits

0x27b2,	// (0x00049dcb) calenote_swipe_1_pane_g1

0x27bf,	// (0x00049dd8) calenote_swipe_1_pane_g2_ParamLimits

0x27bf,	// (0x00049dd8) calenote_swipe_1_pane_g2

0x0001,

0xfc45,	// (0x0005725e) calenote_swipe_1_pane_g_ParamLimits

0xfc45,	// (0x0005725e) calenote_swipe_1_pane_g

0x2b3f,	// (0x0004a158) calenote_swipe_1_pane_t1_ParamLimits

0x2b3f,	// (0x0004a158) calenote_swipe_1_pane_t1

0x27b2,	// (0x00049dcb) calenote_swipe_2_pane_g1_ParamLimits

0x27b2,	// (0x00049dcb) calenote_swipe_2_pane_g1

0x2b5e,	// (0x0004a177) calenote_swipe_2_pane_g2_ParamLimits

0x2b5e,	// (0x0004a177) calenote_swipe_2_pane_g2

0x0001,

0xfcb4,	// (0x000572cd) calenote_swipe_2_pane_g_ParamLimits

0xfcb4,	// (0x000572cd) calenote_swipe_2_pane_g

0x2b6a,	// (0x0004a183) calenote_swipe_2_pane_t1_ParamLimits

0x2b6a,	// (0x0004a183) calenote_swipe_2_pane_t1

0x477a,	// (0x0004bd93) main_mup_navstr_pane

0x87a3,	// (0x0004fdbc) main_mup3_pane_t7_ParamLimits

0x87a3,	// (0x0004fdbc) main_mup3_pane_t7

0x8fce,	// (0x000505e7) main_mp4_pane_g6_ParamLimits

0x8fce,	// (0x000505e7) main_mp4_pane_g6

0x936c,	// (0x00050985) main_image3_pane_t4_ParamLimits

0x936c,	// (0x00050985) main_image3_pane_t4

0xbb2f,	// (0x00053148) popup_navstr_preview_pane_ParamLimits

0xbb2f,	// (0x00053148) popup_navstr_preview_pane

0xbb3b,	// (0x00053154) scroll_navstr_pane_ParamLimits

0xbb3b,	// (0x00053154) scroll_navstr_pane

0x477a,	// (0x0004bd93) bg_popup_preview_window_pane_cp04

0x2b91,	// (0x0004a1aa) popup_navstr_preview_pane_t1

0xbb47,	// (0x00053160) scroll_navstr_pane_g1_ParamLimits

0xbb47,	// (0x00053160) scroll_navstr_pane_g1

0xbb54,	// (0x0005316d) scroll_navstr_pane_t1_ParamLimits

0xbb54,	// (0x0005316d) scroll_navstr_pane_t1

0x2b36,	// (0x0004a14f) bg_button_pane_cp014

0x2b36,	// (0x0004a14f) bg_button_pane_cp030

0xb570,	// (0x00052b89) list_double_fisheye_pane_g4_ParamLimits

0xb570,	// (0x00052b89) list_double_fisheye_pane_g4

0xb57c,	// (0x00052b95) list_double_fisheye_pane_g5_ParamLimits

0xb57c,	// (0x00052b95) list_double_fisheye_pane_g5

0xf079,	// (0x00056692) sp_fs_scroll_pane_cp03

0x28d2,	// (0x00049eeb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x28de,	// (0x00049ef7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc62,	// (0x0005727b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb756,	// (0x00052d6f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2a70,	// (0x0004a089) sp_fs_scroll_pane_cp02

0xd0be,	// (0x000546d7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd0be,	// (0x000546d7) popup_sp_fs_calendar_preview_list_single_pane

0x477a,	// (0x0004bd93) main_cam6_pano_pane

0x7ce2,	// (0x0004f2fb) main_mup3_pane_ParamLimits

0x477a,	// (0x0004bd93) main_phacti_pane

0xb176,	// (0x0005278f) bg_button_pane_cp11

0xb18e,	// (0x000527a7) main_mobtv_info_pane_g2_ParamLimits

0xb18e,	// (0x000527a7) main_mobtv_info_pane_g2

0x0001,

0xfbc2,	// (0x000571db) main_mobtv_info_pane_g_ParamLimits

0xfbc2,	// (0x000571db) main_mobtv_info_pane_g

0xb340,	// (0x00052959) sc_clock_pane_t5_ParamLimits

0xb340,	// (0x00052959) sc_clock_pane_t5

0xb3e1,	// (0x000529fa) main_radioblah_pane_g1_ParamLimits

0x26fe,	// (0x00049d17) main_radioblah_pane_t3_ParamLimits

0x26fe,	// (0x00049d17) main_radioblah_pane_t3

0x2716,	// (0x00049d2f) main_radioblah_pane_t4_ParamLimits

0x2716,	// (0x00049d2f) main_radioblah_pane_t4

0xb3ff,	// (0x00052a18) main_radioblah_text_pane_ParamLimits

0xb3ff,	// (0x00052a18) main_radioblah_text_pane

0xb40c,	// (0x00052a25) main_radioblah_info_pane_g1_ParamLimits

0xb4a1,	// (0x00052aba) main_radioblah_info_pane_t4_ParamLimits

0xb4a1,	// (0x00052aba) main_radioblah_info_pane_t4

0x519c,	// (0x0004c7b5) main_sp_fs_calendar_pane

0xbb66,	// (0x0005317f) main_phacti_pane_g1

0xbb6e,	// (0x00053187) phacti_note_pane_ParamLimits

0xbb6e,	// (0x00053187) phacti_note_pane

0x2ba8,	// (0x0004a1c1) phacti_term_pane_ParamLimits

0x2ba8,	// (0x0004a1c1) phacti_term_pane

0x2bbd,	// (0x0004a1d6) phacti_note_pane_t1_ParamLimits

0x2bbd,	// (0x0004a1d6) phacti_note_pane_t1

0x2bd4,	// (0x0004a1ed) phacti_term_pane_g1

0x2bdc,	// (0x0004a1f5) phacti_term_pane_t1_ParamLimits

0x2bdc,	// (0x0004a1f5) phacti_term_pane_t1

0x2c06,	// (0x0004a21f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd15d,	// (0x00054776) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcbe,	// (0x000572d7) popup_sp_fs_calendar_preview_list_single_pane_g

0x2c0e,	// (0x0004a227) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2c0e,	// (0x0004a227) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2c24,	// (0x0004a23d) aid_popup_sp_fs_bg_corner_pane

0xd1ac,	// (0x000547c5) popup_sp_fs_calendar_preview_bg_pane_g1

0x477a,	// (0x0004bd93) popup_sp_fs_calendar_preview_bg_pane

0x2c2c,	// (0x0004a245) popup_sp_fs_calendar_preview_list_pane

0xeee4,	// (0x000564fd) bg_main_sp_fs_cale_pane_ParamLimits

0xeee4,	// (0x000564fd) bg_main_sp_fs_cale_pane

0x2c3d,	// (0x0004a256) listscroll_cale_mrui_pane_ParamLimits

0x2c3d,	// (0x0004a256) listscroll_cale_mrui_pane

0x2c52,	// (0x0004a26b) listscroll_sp_fs_schedule_track_pane

0x2c5b,	// (0x0004a274) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2c5b,	// (0x0004a274) main_sp_fs_ctrlbar_pane_cp01

0x2c6e,	// (0x0004a287) main_sp_fs_ribbon_pane

0x2c76,	// (0x0004a28f) popup_sp_fs_cale_preview_window

0xbbd1,	// (0x000531ea) list_single_sp_fs_schedule_track_pane_ParamLimits

0xbbd1,	// (0x000531ea) list_single_sp_fs_schedule_track_pane

0x51f5,	// (0x0004c80e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x51f5,	// (0x0004c80e) bg_sp_fs_highlight_list_pane_cp03

0xbbf1,	// (0x0005320a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xbbf1,	// (0x0005320a) list_single_sp_fs_schedule_track_pane_g1

0xbbfd,	// (0x00053216) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xbbfd,	// (0x00053216) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcc3,	// (0x000572dc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcc3,	// (0x000572dc) list_single_sp_fs_schedule_track_pane_g

0xbc09,	// (0x00053222) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbc09,	// (0x00053222) list_single_sp_fs_schedule_track_pane_t1

0xbc21,	// (0x0005323a) sp_fs_schedule_track_pane_ParamLimits

0xbc21,	// (0x0005323a) sp_fs_schedule_track_pane

0x2c88,	// (0x0004a2a1) sp_fs_schedule_track_pane_g1

0x2c90,	// (0x0004a2a9) sp_fs_schedule_track_pane_g2

0x2c98,	// (0x0004a2b1) sp_fs_schedule_track_pane_g3

0x2ca0,	// (0x0004a2b9) sp_fs_schedule_track_pane_g4

0x2ca8,	// (0x0004a2c1) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc8,	// (0x000572e1) sp_fs_schedule_track_pane_g

0x1753,	// (0x00048d6c) bg_sp_fs_schedule_viewer_highlight_g1

0xd3d1,	// (0x000549ea) bg_sp_fs_schedule_viewer_highlight_g2

0x175b,	// (0x00048d74) bg_sp_fs_schedule_viewer_highlight_g3

0x1763,	// (0x00048d7c) bg_sp_fs_schedule_viewer_highlight_g4

0x19cc,	// (0x00048fe5) bg_sp_fs_schedule_viewer_highlight_g5

0x1773,	// (0x00048d8c) bg_sp_fs_schedule_viewer_highlight_g6

0x177b,	// (0x00048d94) bg_sp_fs_schedule_viewer_highlight_g7

0x1783,	// (0x00048d9c) bg_sp_fs_schedule_viewer_highlight_g8

0xd3b1,	// (0x000549ca) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcd3,	// (0x000572ec) bg_sp_fs_schedule_viewer_highlight_g

0x477a,	// (0x0004bd93) bg_main_sp_fs_ribbon_pane

0xbc31,	// (0x0005324a) main_sp_fs_ribbon_pane_g1

0x2cb0,	// (0x0004a2c9) main_sp_fs_ribbon_pane_t1

0xbc3a,	// (0x00053253) main_sp_fs_ribbon_pane_t2

0x2cbf,	// (0x0004a2d8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce6,	// (0x000572ff) main_sp_fs_ribbon_pane_t

0x2cce,	// (0x0004a2e7) main_sp_fs_ribbon_scheduler_pane

0x2cd6,	// (0x0004a2ef) bg_main_sp_fs_ribbon_pane_g1

0x2cdf,	// (0x0004a2f8) bg_main_sp_fs_ribbon_pane_g2

0x2ce8,	// (0x0004a301) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfced,	// (0x00057306) bg_main_sp_fs_ribbon_pane_g

0x2cf0,	// (0x0004a309) main_sp_fs_ribbon_scheduler_pane_g1

0x2cf9,	// (0x0004a312) main_sp_fs_ribbon_scheduler_pane_g2

0x2d02,	// (0x0004a31b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcf4,	// (0x0005730d) main_sp_fs_ribbon_scheduler_pane_g

0x2d0b,	// (0x0004a324) list_cale_mrui_pane

0xbc49,	// (0x00053262) sp_fs_scroll_pane_cp07_ParamLimits

0xbc49,	// (0x00053262) sp_fs_scroll_pane_cp07

0xbc65,	// (0x0005327e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xbc65,	// (0x0005327e) bg_sp_fs_schedule_viewer_highlight

0x2d18,	// (0x0004a331) list_single_sp_fs_schedule_track_pane_cp01

0x2d20,	// (0x0004a339) list_sp_fs_schedule_track_pane

0x2d28,	// (0x0004a341) sp_fs_scroll_pane_cp06_ParamLimits

0x2d28,	// (0x0004a341) sp_fs_scroll_pane_cp06

0xd1ac,	// (0x000547c5) bgmain_sp_fs_calendar_pane_g1

0xbc72,	// (0x0005328b) list_single_cale_mrui_pane_ParamLimits

0xbc72,	// (0x0005328b) list_single_cale_mrui_pane

0x2d3a,	// (0x0004a353) list_single_cale_mrui_row_pane_ParamLimits

0x2d3a,	// (0x0004a353) list_single_cale_mrui_row_pane

0x2d47,	// (0x0004a360) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2d47,	// (0x0004a360) list_single_cale_mrui_row_pane_g1

0x2d8c,	// (0x0004a3a5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2d8c,	// (0x0004a3a5) list_single_cale_mrui_row_pane_t1

0xbca0,	// (0x000532b9) list_single_cale_mrui_row_pane_t2_ParamLimits

0xbca0,	// (0x000532b9) list_single_cale_mrui_row_pane_t2

0x2d9e,	// (0x0004a3b7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2d9e,	// (0x0004a3b7) list_single_cale_mrui_row_pane_t3

0x2dcd,	// (0x0004a3e6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2dcd,	// (0x0004a3e6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd02,	// (0x0005731b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd02,	// (0x0005731b) list_single_cale_mrui_row_pane_t

0xbd06,	// (0x0005331f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xbd06,	// (0x0005331f) list_single_cmail_header_editor_pane_bg_cp01

0xbd26,	// (0x0005333f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xbd26,	// (0x0005333f) list_single_cmail_header_editor_pane_bg_cp02

0xbd42,	// (0x0005335b) main_radioblah_text_pane_t1_ParamLimits

0xbd42,	// (0x0005335b) main_radioblah_text_pane_t1

0x2dfc,	// (0x0004a415) cam6_indi_pane_cp01

0x2e04,	// (0x0004a41d) cam6_mode_pane_cp01

0x2e0c,	// (0x0004a425) cam6_pano_pane

0x2e15,	// (0x0004a42e) cam6_zoom_pane_cp01

0x2e1d,	// (0x0004a436) cam6_pano_image_pane

0x2e28,	// (0x0004a441) cam6_pano_pane_g1

0x2461,	// (0x00049a7a) cam6_pano_pane_g2

0x2e31,	// (0x0004a44a) cam6_pano_pane_g3

0x2e3a,	// (0x0004a453) cam6_pano_pane_g4

0x135b,	// (0x00048974) cam6_pano_pane_g5

0x2e43,	// (0x0004a45c) cam6_pano_pane_g6

0x2e4d,	// (0x0004a466) cam6_pano_pane_g7

0x2e55,	// (0x0004a46e) cam6_pano_pane_g8

0x2e5e,	// (0x0004a477) cam6_pano_pane_g9

0x0008,

0xfd0b,	// (0x00057324) cam6_pano_pane_g

0x477a,	// (0x0004bd93) main_browser_tag_pane

0x2b89,	// (0x0004a1a2) grid_navstr_albumart_pane

0x2e69,	// (0x0004a482) cell_navstr_albumart_pane_ParamLimits

0x2e69,	// (0x0004a482) cell_navstr_albumart_pane

0x2e89,	// (0x0004a4a2) cell_navstr_albumart_pane_g1

0xed80,	// (0x00056399) cell_navstr_albumart_pane_g2

0xed90,	// (0x000563a9) cell_navstr_albumart_pane_g3

0xed88,	// (0x000563a1) cell_navstr_albumart_pane_g4

0x0003,

0xfd1e,	// (0x00057337) cell_navstr_albumart_pane_g

0xbd5d,	// (0x00053376) bt_list_pane_ParamLimits

0xbd5d,	// (0x00053376) bt_list_pane

0xbd7d,	// (0x00053396) bt_list_pane_t1

0xbd8c,	// (0x000533a5) bt_list_pane_t2

0x0001,

0xfd27,	// (0x00057340) bt_list_pane_t

0x477a,	// (0x0004bd93) main_cale_prevew_pane

0xbd9b,	// (0x000533b4) popup_cale_preview_window_ParamLimits

0xbd9b,	// (0x000533b4) popup_cale_preview_window

0x519c,	// (0x0004c7b5) bg_popup_preview_window_pane_cp05_ParamLimits

0x519c,	// (0x0004c7b5) bg_popup_preview_window_pane_cp05

0x2e91,	// (0x0004a4aa) list_cale_preview_pane_ParamLimits

0x2e91,	// (0x0004a4aa) list_cale_preview_pane

0xbdb4,	// (0x000533cd) list_double_cale_preview_pane_ParamLimits

0xbdb4,	// (0x000533cd) list_double_cale_preview_pane

0xbdc6,	// (0x000533df) list_single_cale_preview_pane_ParamLimits

0xbdc6,	// (0x000533df) list_single_cale_preview_pane

0xbddc,	// (0x000533f5) list_single_cale_preview_pane_g1

0xbde4,	// (0x000533fd) list_single_cale_preview_pane_t1_ParamLimits

0xbde4,	// (0x000533fd) list_single_cale_preview_pane_t1

0xbdf9,	// (0x00053412) list_double_cale_preview_pane_g1

0xbe01,	// (0x0005341a) list_double_cale_preview_pane_t1_ParamLimits

0xbe01,	// (0x0005341a) list_double_cale_preview_pane_t1

0xbe16,	// (0x0005342f) list_double_cale_preview_pane_t2_ParamLimits

0xbe16,	// (0x0005342f) list_double_cale_preview_pane_t2

0x0001,

0xfd2c,	// (0x00057345) list_double_cale_preview_pane_t_ParamLimits

0xfd2c,	// (0x00057345) list_double_cale_preview_pane_t

0x477a,	// (0x0004bd93) main_ezdial_pane

0x519c,	// (0x0004c7b5) main_sp_fs_email_pane_ParamLimits

0xb6bb,	// (0x00052cd4) cmail_ddmenu_btn01_pane_ParamLimits

0xb6bb,	// (0x00052cd4) cmail_ddmenu_btn01_pane

0xb6d8,	// (0x00052cf1) cmail_ddmenu_btn02_pane_ParamLimits

0xb6d8,	// (0x00052cf1) cmail_ddmenu_btn02_pane

0xb6f6,	// (0x00052d0f) cmail_ddmenu_btn03_pane_ParamLimits

0xb6f6,	// (0x00052d0f) cmail_ddmenu_btn03_pane

0xb791,	// (0x00052daa) main_sp_fs_ctrlbar_pane_ParamLimits

0xb7a7,	// (0x00052dc0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xba4e,	// (0x00053067) list_cmail_body_pane_ParamLimits

0x2a86,	// (0x0004a09f) bg_button_pane_cp12

0x2a9b,	// (0x0004a0b4) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2a9b,	// (0x0004a0b4) list_single_cmail_header_detail_pane_g3

0x2ae4,	// (0x0004a0fd) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2ae4,	// (0x0004a0fd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaf,	// (0x000572c8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaf,	// (0x000572c8) list_single_cmail_header_detail_pane_t

0x2bf1,	// (0x0004a20a) phacti_term_pane_t2_ParamLimits

0x2bf1,	// (0x0004a20a) phacti_term_pane_t2

0x0001,

0xfcb9,	// (0x000572d2) phacti_term_pane_t_ParamLimits

0xfcb9,	// (0x000572d2) phacti_term_pane_t

0x2e9d,	// (0x0004a4b6) aid_size_list_single_double

0xbe2e,	// (0x00053447) popup_ezdial_listscroll_window

0xbe4f,	// (0x00053468) popup_number_entry_window_cp01

0xd176,	// (0x0005478f) bg_popup_call_pane_cp09

0x2ea9,	// (0x0004a4c2) ezdial_list_pane

0x2eb1,	// (0x0004a4ca) scroll_pane_cp23

0x0ab9,	// (0x000480d2) bg_button_pane_cp028_ParamLimits

0x0ab9,	// (0x000480d2) bg_button_pane_cp028

0xbe5d,	// (0x00053476) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbe5d,	// (0x00053476) cmail_ddmenu_btn01_pane_g1

0xbe6d,	// (0x00053486) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbe6d,	// (0x00053486) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd31,	// (0x0005734a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd31,	// (0x0005734a) cmail_ddmenu_btn01_pane_g

0x2eb9,	// (0x0004a4d2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2eb9,	// (0x0004a4d2) cmail_ddmenu_btn01_pane_t1

0xeee4,	// (0x000564fd) bg_button_pane_cp029_ParamLimits

0xeee4,	// (0x000564fd) bg_button_pane_cp029

0xbe79,	// (0x00053492) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbe79,	// (0x00053492) cmail_ddmenu_btn02_pane_g1

0xbe91,	// (0x000534aa) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbe91,	// (0x000534aa) cmail_ddmenu_btn02_pane_t1

0x51f5,	// (0x0004c80e) bg_button_pane_cp031_ParamLimits

0x51f5,	// (0x0004c80e) bg_button_pane_cp031

0xbe79,	// (0x00053492) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbe79,	// (0x00053492) cmail_ddmenu_btn03_pane_g1

0xbe91,	// (0x000534aa) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbe91,	// (0x000534aa) cmail_ddmenu_btn03_pane_t1

0x9209,	// (0x00050822) cell_dialer2_keypad_pane_t1_ParamLimits

0x9223,	// (0x0005083c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9223,	// (0x0005083c) cell_dialer2_keypad_pane_t1_copy1

0xafb7,	// (0x000525d0) ncimui_group_button_pane

0x519c,	// (0x0004c7b5) main_sp_fs_calendar_pane_ParamLimits

0xba75,	// (0x0005308e) list_single_cmail_header_caption_pane_ParamLimits

0x2c34,	// (0x0004a24d) aid_recal_txt_sm_pane

0x477a,	// (0x0004bd93) mian_recal_day_pane

0x2c76,	// (0x0004a28f) popup_sp_fs_cale_preview_window_ParamLimits

0x2ecf,	// (0x0004a4e8) list_recal_day_pane

0x2f11,	// (0x0004a52a) list_single_recal_day_pane_ParamLimits

0x2f11,	// (0x0004a52a) list_single_recal_day_pane

0x2f23,	// (0x0004a53c) list_single_recal_day_pane_g1_ParamLimits

0x2f23,	// (0x0004a53c) list_single_recal_day_pane_g1

0x2f2f,	// (0x0004a548) list_single_recal_day_pane_g2_ParamLimits

0x2f2f,	// (0x0004a548) list_single_recal_day_pane_g2

0x2f3b,	// (0x0004a554) list_single_recal_day_pane_g3_ParamLimits

0x2f3b,	// (0x0004a554) list_single_recal_day_pane_g3

0xbeb5,	// (0x000534ce) list_single_recal_day_pane_g4_ParamLimits

0xbeb5,	// (0x000534ce) list_single_recal_day_pane_g4

0x2f47,	// (0x0004a560) list_single_recal_day_pane_g5_ParamLimits

0x2f47,	// (0x0004a560) list_single_recal_day_pane_g5

0x2f53,	// (0x0004a56c) list_single_recal_day_pane_g6_ParamLimits

0x2f53,	// (0x0004a56c) list_single_recal_day_pane_g6

0x0004,

0xfd40,	// (0x00057359) list_single_recal_day_pane_g_ParamLimits

0xfd40,	// (0x00057359) list_single_recal_day_pane_g

0x2f67,	// (0x0004a580) list_single_recal_day_pane_t1

0x2f79,	// (0x0004a592) list_single_recal_day_pane_t2

0x0001,

0xfd4b,	// (0x00057364) list_single_recal_day_pane_t

0xbecd,	// (0x000534e6) ncimui_query_button_pane_ParamLimits

0xbecd,	// (0x000534e6) ncimui_query_button_pane

0xbedd,	// (0x000534f6) ncimui_query_button_pane_t1_ParamLimits

0xbedd,	// (0x000534f6) ncimui_query_button_pane_t1

0x2f8b,	// (0x0004a5a4) ncimui_query_button_pane_t2_ParamLimits

0x2f8b,	// (0x0004a5a4) ncimui_query_button_pane_t2

0x0001,

0xfd50,	// (0x00057369) ncimui_query_button_pane_t_ParamLimits

0xfd50,	// (0x00057369) ncimui_query_button_pane_t

0xbef0,	// (0x00053509) query_button_pane_ParamLimits

0xbef0,	// (0x00053509) query_button_pane

0x477a,	// (0x0004bd93) bg_button_pane_cp0028

0x2f9e,	// (0x0004a5b7) query_button_pane_t1

0x7d0a,	// (0x0004f323) main_tport_pane_ParamLimits

0xb958,	// (0x00052f71) bg_popup_window_pane_cp01_ParamLimits

0xb958,	// (0x00052f71) bg_popup_window_pane_cp01

0xb966,	// (0x00052f7f) heading_pane_cp08_ParamLimits

0xb966,	// (0x00052f7f) heading_pane_cp08

0xb974,	// (0x00052f8d) heading_pane_cp07_ParamLimits

0xb974,	// (0x00052f8d) heading_pane_cp07

0xb9e3,	// (0x00052ffc) cell_tport_appsw_pane_g2

0x0002,

0xfc9c,	// (0x000572b5) cell_tport_appsw_pane_g

0x09a5,	// (0x00047fbe) input_candi_list_open_g1

0xd59c,	// (0x00054bb5) list_cale_time_pane_g6_ParamLimits

0xd59c,	// (0x00054bb5) list_cale_time_pane_g6

0x8205,	// (0x0004f81e) aid_size_touch_calib_1_ParamLimits

0x8205,	// (0x0004f81e) aid_size_touch_calib_1

0x8211,	// (0x0004f82a) aid_size_touch_calib_2_ParamLimits

0x8211,	// (0x0004f82a) aid_size_touch_calib_2

0x821f,	// (0x0004f838) aid_size_touch_calib_3_ParamLimits

0x821f,	// (0x0004f838) aid_size_touch_calib_3

0x822f,	// (0x0004f848) aid_size_touch_calib_4_ParamLimits

0x822f,	// (0x0004f848) aid_size_touch_calib_4

0x823d,	// (0x0004f856) main_touch_calib_button_group_pane_ParamLimits

0x823d,	// (0x0004f856) main_touch_calib_button_group_pane

0x824b,	// (0x0004f864) main_touch_calib_pane_g1_ParamLimits

0x8257,	// (0x0004f870) main_touch_calib_pane_g2_ParamLimits

0x8263,	// (0x0004f87c) main_touch_calib_pane_g3_ParamLimits

0x826f,	// (0x0004f888) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x00056cf7) main_touch_calib_pane_g_ParamLimits

0x827b,	// (0x0004f894) main_touch_calib_pane_t1_ParamLimits

0x8294,	// (0x0004f8ad) main_touch_calib_pane_t2_ParamLimits

0x82ad,	// (0x0004f8c6) main_touch_calib_pane_t3_ParamLimits

0x82c3,	// (0x0004f8dc) main_touch_calib_pane_t4_ParamLimits

0x82d9,	// (0x0004f8f2) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x00056d00) main_touch_calib_pane_t_ParamLimits

0x111e,	// (0x00048737) list_single_fp_cale_pane_g3_ParamLimits

0x111e,	// (0x00048737) list_single_fp_cale_pane_g3

0x7ce2,	// (0x0004f2fb) bg_button_pane_cp012_ParamLimits

0x7ce2,	// (0x0004f2fb) bg_vkb2_func_pane_cp03_ParamLimits

0xa0b1,	// (0x000516ca) cell_vitu2_function_top_pane_g1_ParamLimits

0x7ce2,	// (0x0004f2fb) bg_vkb2_func_pane_cp04_ParamLimits

0xaf3f,	// (0x00052558) main_ncimui_button_group_pane_ParamLimits

0xaf3f,	// (0x00052558) main_ncimui_button_group_pane

0xafa5,	// (0x000525be) main_ncimui_pane_t3_ParamLimits

0xafa5,	// (0x000525be) main_ncimui_pane_t3

0x2b9f,	// (0x0004a1b8) phacti_button_group_pane

0x2e9d,	// (0x0004a4b6) aid_size_list_single_double_ParamLimits

0xbe2e,	// (0x00053447) popup_ezdial_listscroll_window_ParamLimits

0xbe4f,	// (0x00053468) popup_number_entry_window_cp01_ParamLimits

0xbefd,	// (0x00053516) phacti_button_pane_ParamLimits

0xbefd,	// (0x00053516) phacti_button_pane

0x477a,	// (0x0004bd93) bg_button_pane_cp14

0x2fac,	// (0x0004a5c5) phacti_button_pane_t1

0xbf0e,	// (0x00053527) main_touch_calib_button_pane_ParamLimits

0xbf0e,	// (0x00053527) main_touch_calib_button_pane

0xcfc4,	// (0x000545dd) bg_button_pane_cp18_ParamLimits

0xcfc4,	// (0x000545dd) bg_button_pane_cp18

0x2fba,	// (0x0004a5d3) main_touch_calib_button_pane_t1_ParamLimits

0x2fba,	// (0x0004a5d3) main_touch_calib_button_pane_t1

0x2fd0,	// (0x0004a5e9) main_touch_calib_button_pane_t2_ParamLimits

0x2fd0,	// (0x0004a5e9) main_touch_calib_button_pane_t2

0x0001,

0xfd55,	// (0x0005736e) main_touch_calib_button_pane_t_ParamLimits

0xfd55,	// (0x0005736e) main_touch_calib_button_pane_t

0x477a,	// (0x0004bd93) cell_ncimui_button_pane

0x477a,	// (0x0004bd93) bg_button_pane_cp032

0x2fee,	// (0x0004a607) cell_ncimui_button_pane_t1

0x927f,	// (0x00050898) image3_infobar_pane_ParamLimits

0x927f,	// (0x00050898) image3_infobar_pane

0xb362,	// (0x0005297b) fs_bigclock_status_pane_ParamLimits

0xb362,	// (0x0005297b) fs_bigclock_status_pane

0xb36f,	// (0x00052988) main_fs_bigclock_clock_pane_ParamLimits

0xb36f,	// (0x00052988) main_fs_bigclock_clock_pane

0xb383,	// (0x0005299c) main_fs_bigclock_indi_pane_ParamLimits

0xb383,	// (0x0005299c) main_fs_bigclock_indi_pane

0xb3ab,	// (0x000529c4) main_fs_bigclock_swipe_pane_ParamLimits

0xb3ab,	// (0x000529c4) main_fs_bigclock_swipe_pane

0x477a,	// (0x0004bd93) main_fs_clock_dumped_data

0x256e,	// (0x00049b87) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x256e,	// (0x00049b87) list_single_fs_bigclock_indicator_pane_g1

0x2589,	// (0x00049ba2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2589,	// (0x00049ba2) list_single_fs_bigclock_indicator_pane_g2

0x25a3,	// (0x00049bbc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x25a3,	// (0x00049bbc) list_single_fs_bigclock_indicator_pane_g3

0x25bd,	// (0x00049bd6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x25bd,	// (0x00049bd6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf6,	// (0x0005720f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf6,	// (0x0005720f) list_single_fs_bigclock_indicator_pane_g

0x25e8,	// (0x00049c01) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x25e8,	// (0x00049c01) list_single_fs_bigclock_indicator_pane_t1

0x2610,	// (0x00049c29) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2610,	// (0x00049c29) list_single_fs_bigclock_indicator_pane_t2

0x2638,	// (0x00049c51) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2638,	// (0x00049c51) list_single_fs_bigclock_indicator_pane_t3

0x2660,	// (0x00049c79) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2660,	// (0x00049c79) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc01,	// (0x0005721a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc01,	// (0x0005721a) list_single_fs_bigclock_indicator_pane_t

0x2ffc,	// (0x0004a615) image3_infobar_fav_pane_ParamLimits

0x2ffc,	// (0x0004a615) image3_infobar_fav_pane

0x300c,	// (0x0004a625) image3_infobar_loc_pane_ParamLimits

0x300c,	// (0x0004a625) image3_infobar_loc_pane

0x3020,	// (0x0004a639) image3_infobar_time_pane_ParamLimits

0x3020,	// (0x0004a639) image3_infobar_time_pane

0xd1ac,	// (0x000547c5) image3_infobar_time_pane_g1

0x3030,	// (0x0004a649) image3_infobar_time_pane_t1

0xd1ac,	// (0x000547c5) image3_infobar_loc_pane_g1

0x303e,	// (0x0004a657) image3_infobar_loc_pane_g2

0x0001,

0xfd5a,	// (0x00057373) image3_infobar_loc_pane_g

0x3046,	// (0x0004a65f) image3_infobar_loc_pane_t1

0xd1ac,	// (0x000547c5) image3_infobar_fav_pane_g1

0x3054,	// (0x0004a66d) image3_infobar_fav_pane_g2

0x0001,

0xfd5f,	// (0x00057378) image3_infobar_fav_pane_g

0x305c,	// (0x0004a675) fs_bigclock_status_battery_pane

0x3065,	// (0x0004a67e) fs_bigclock_status_signal_pane

0x306e,	// (0x0004a687) fs_bigclock_status_title_pane

0x3077,	// (0x0004a690) fs_bigclock_status_signal_pane_g1

0x3080,	// (0x0004a699) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd64,	// (0x0005737d) fs_bigclock_status_signal_pane_g

0x3088,	// (0x0004a6a1) fs_bigclock_status_battery_pane_g1

0x3091,	// (0x0004a6aa) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd69,	// (0x00057382) fs_bigclock_status_battery_pane_g

0x3099,	// (0x0004a6b2) fs_bigclock_status_title_pane_t1

0xbf1e,	// (0x00053537) main_fs_bigclock_clock_pane_g1

0xbf1e,	// (0x00053537) main_fs_bigclock_clock_pane_g2

0xbf2b,	// (0x00053544) main_fs_bigclock_clock_pane_g3

0xbf2b,	// (0x00053544) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd6e,	// (0x00057387) main_fs_bigclock_clock_pane_g

0xbf37,	// (0x00053550) main_fs_bigclock_clock_pane_t1

0xbf4a,	// (0x00053563) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd77,	// (0x00057390) main_fs_bigclock_clock_pane_t

0x30a7,	// (0x0004a6c0) list_single_fs_bigclock_indicator_pane_ParamLimits

0x30a7,	// (0x0004a6c0) list_single_fs_bigclock_indicator_pane

0x30b8,	// (0x0004a6d1) list_single_fs_bigclock_pane_ParamLimits

0x30b8,	// (0x0004a6d1) list_single_fs_bigclock_pane

0x30de,	// (0x0004a6f7) main_fs_bigclock_indicator_pane_t1

0x30ed,	// (0x0004a706) list_single_fs_bigclock_pane_g1

0x30f5,	// (0x0004a70e) list_single_fs_bigclock_pane_t1

0xd1ac,	// (0x000547c5) main_fs_bigclock_swipe_pane_g1

0x3138,	// (0x0004a751) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd88,	// (0x000573a1) main_fs_bigclock_swipe_pane_g

0x3140,	// (0x0004a759) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3140,	// (0x0004a759) main_fs_bigclock_swipe_pane_t1

0x6ed4,	// (0x0004e4ed) call_type_pane_ParamLimits

0x477a,	// (0x0004bd93) main_btmg_pane

0x2d73,	// (0x0004a38c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2d73,	// (0x0004a38c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcfb,	// (0x00057314) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcfb,	// (0x00057314) list_single_cale_mrui_row_pane_g

0x2ef8,	// (0x0004a511) list_recal_vselct_arw_lo_pane

0x2f00,	// (0x0004a519) list_recal_vselct_arw_up_pane

0x2f08,	// (0x0004a521) list_recal_vselct_pane

0xbfa1,	// (0x000535ba) btmg_button_pane

0xbfad,	// (0x000535c6) main_btmg_pane_g1

0x477a,	// (0x0004bd93) bg_button_pane_cp044

0x315d,	// (0x0004a776) btmg_button_pane_t1

0xeed0,	// (0x000564e9) aid_listscroll_gen

0x519c,	// (0x0004c7b5) main_cntbar_detail_pane

0x2a68,	// (0x0004a081) list_cmail_folder_pane

0xf079,	// (0x00056692) sp_fs_scroll_pane_cp03_ParamLimits

0xbfb5,	// (0x000535ce) list_single_fs_dyc_pane_cp01_ParamLimits

0xbfb5,	// (0x000535ce) list_single_fs_dyc_pane_cp01

0x316b,	// (0x0004a784) aid_size_cmail_indent

0x3174,	// (0x0004a78d) list_single_dyc_row_pane_cp01

0xc001,	// (0x0005361a) cntbar_detail_list_pane_ParamLimits

0xc001,	// (0x0005361a) cntbar_detail_list_pane

0xc03b,	// (0x00053654) main_cntbar_detail_cont_pane_ParamLimits

0xc03b,	// (0x00053654) main_cntbar_detail_cont_pane

0x6ec8,	// (0x0004e4e1) scroll_pane_cp032_ParamLimits

0x6ec8,	// (0x0004e4e1) scroll_pane_cp032

0xc047,	// (0x00053660) cntbar_detail_list_event_pane_ParamLimits

0xc047,	// (0x00053660) cntbar_detail_list_event_pane

0xc00d,	// (0x00053626) cntbar_detail_list_shct_pane

0xd41f,	// (0x00054a38) aid_list_gen

0x317d,	// (0x0004a796) aid_scroll

0x3186,	// (0x0004a79f) aid_size_touch_scroll_bar

0xc05b,	// (0x00053674) aid_list_double

0xc064,	// (0x0005367d) aid_list_single

0x318f,	// (0x0004a7a8) aid_list_single_lg

0xc06d,	// (0x00053686) aid_list_z_g_a_sm

0xc075,	// (0x0005368e) aid_list_z_g_d

0xc07d,	// (0x00053696) aid_txt_z_prm

0xc08b,	// (0x000536a4) aid_txt_z_prm_cp01

0xc099,	// (0x000536b2) aid_txt_z_sec

0xc0a7,	// (0x000536c0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc0a7,	// (0x000536c0) main_cntbar_detail_cont_pane_g1

0xc0b4,	// (0x000536cd) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc0b4,	// (0x000536cd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd8d,	// (0x000573a6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd8d,	// (0x000573a6) main_cntbar_detail_cont_pane_g

0x3198,	// (0x0004a7b1) main_cntbar_detail_cont_pane_t1

0x31a6,	// (0x0004a7bf) main_cntbar_detail_cont_pane_t2

0x31b4,	// (0x0004a7cd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd92,	// (0x000573ab) main_cntbar_detail_cont_pane_t

0xc0c0,	// (0x000536d9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc0c0,	// (0x000536d9) cell_cntbar_detail_list_shct_pane

0x31c2,	// (0x0004a7db) cntbar_detail_list_shct_pane_g1

0x31cb,	// (0x0004a7e4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd99,	// (0x000573b2) cntbar_detail_list_shct_pane_g

0xc0d4,	// (0x000536ed) cntbar_detail_list_event_pane_g1_ParamLimits

0xc0d4,	// (0x000536ed) cntbar_detail_list_event_pane_g1

0xc0e0,	// (0x000536f9) cntbar_detail_list_event_pane_g2_ParamLimits

0xc0e0,	// (0x000536f9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9e,	// (0x000573b7) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9e,	// (0x000573b7) cntbar_detail_list_event_pane_g

0xc14c,	// (0x00053765) cntbar_detail_list_event_pane_t1_ParamLimits

0xc14c,	// (0x00053765) cntbar_detail_list_event_pane_t1

0xc161,	// (0x0005377a) cntbar_detail_list_event_pane_t2_ParamLimits

0xc161,	// (0x0005377a) cntbar_detail_list_event_pane_t2

0x0002,

0xfdab,	// (0x000573c4) cntbar_detail_list_event_pane_t_ParamLimits

0xfdab,	// (0x000573c4) cntbar_detail_list_event_pane_t

0xd1ac,	// (0x000547c5) cell_cntbar_detail_list_shct_pane_g1

0xdba4,	// (0x000551bd) navi_pane_mv_g3

0x519c,	// (0x0004c7b5) main_cntbar_detail_pane_ParamLimits

0x477a,	// (0x0004bd93) main_notif_wgt_pane

0x8f09,	// (0x00050522) aid_tch_main_mp4_pane_g4

0x9168,	// (0x00050781) popup_slider_window_cp02

0x2eee,	// (0x0004a507) list_recal_day_event_pane

0xbfe1,	// (0x000535fa) cntbar_detail_btn_pane_ParamLimits

0xbfe1,	// (0x000535fa) cntbar_detail_btn_pane

0xbff1,	// (0x0005360a) cntbar_detail_btn_pane_cp01_ParamLimits

0xbff1,	// (0x0005360a) cntbar_detail_btn_pane_cp01

0xc00d,	// (0x00053626) cntbar_detail_list_shct_pane_ParamLimits

0xc019,	// (0x00053632) cntbar_detail_pane_g1_ParamLimits

0xc019,	// (0x00053632) cntbar_detail_pane_g1

0xc025,	// (0x0005363e) cntbar_detail_pane_t1_ParamLimits

0xc025,	// (0x0005363e) cntbar_detail_pane_t1

0xc0ec,	// (0x00053705) cntbar_detail_list_event_pane_g3_ParamLimits

0xc0ec,	// (0x00053705) cntbar_detail_list_event_pane_g3

0xc104,	// (0x0005371d) cntbar_detail_list_event_pane_g4_ParamLimits

0xc104,	// (0x0005371d) cntbar_detail_list_event_pane_g4

0xc11c,	// (0x00053735) cntbar_detail_list_event_pane_g5_ParamLimits

0xc11c,	// (0x00053735) cntbar_detail_list_event_pane_g5

0xc134,	// (0x0005374d) cntbar_detail_list_event_pane_g6_ParamLimits

0xc134,	// (0x0005374d) cntbar_detail_list_event_pane_g6

0xc176,	// (0x0005378f) cntbar_detail_list_event_pane_t3_ParamLimits

0xc176,	// (0x0005378f) cntbar_detail_list_event_pane_t3

0xc188,	// (0x000537a1) popup_notif_wgt_window_ParamLimits

0xc188,	// (0x000537a1) popup_notif_wgt_window

0xc198,	// (0x000537b1) popup_submenu_window_cp01_ParamLimits

0xc198,	// (0x000537b1) popup_submenu_window_cp01

0xd176,	// (0x0005478f) bg_popup_window_pane_cp10

0x31d4,	// (0x0004a7ed) listscroll_notif_wgt_pane

0x31e6,	// (0x0004a7ff) list_notif_wgt_window

0x31ef,	// (0x0004a808) scroll_pane_cp033

0xc1aa,	// (0x000537c3) list_notif_wgt_row_pane_ParamLimits

0xc1aa,	// (0x000537c3) list_notif_wgt_row_pane

0x31f8,	// (0x0004a811) aid_size_list_notif_wgt_del

0x3205,	// (0x0004a81e) list_notif_wgt_row_pane_g1

0x3211,	// (0x0004a82a) list_notif_wgt_row_pane_g2

0x3220,	// (0x0004a839) list_notif_wgt_row_pane_g3

0x0002,

0xfdb2,	// (0x000573cb) list_notif_wgt_row_pane_g

0x322d,	// (0x0004a846) list_notif_wgt_row_pane_t1

0x3243,	// (0x0004a85c) list_notif_wgt_row_pane_t2

0x3255,	// (0x0004a86e) list_notif_wgt_row_pane_t3

0x0002,

0xfdb9,	// (0x000573d2) list_notif_wgt_row_pane_t

0x19d4,	// (0x00048fed) list_recal_day_event_pane_g1

0x3267,	// (0x0004a880) list_recal_day_event_pane_t1

0x477a,	// (0x0004bd93) bg_button_pane_cp045

0x3276,	// (0x0004a88f) cntbar_detail_btn_pane_t1

0xeee4,	// (0x000564fd) main_callh_pane_ParamLimits

0xeee4,	// (0x000564fd) main_callh_pane

0x477a,	// (0x0004bd93) main_coverflow0_pane

0x477a,	// (0x0004bd93) main_wgtman_pane

0xb3c3,	// (0x000529dc) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb3c3,	// (0x000529dc) main_fs_bigclock_unlock_btn_pane

0xb9db,	// (0x00052ff4) bg_button_pane_cp16

0xb9eb,	// (0x00053004) cell_tport_appsw_pane_g3

0xc1bc,	// (0x000537d5) cf0_flow_pane_ParamLimits

0xc1bc,	// (0x000537d5) cf0_flow_pane

0x3284,	// (0x0004a89d) listscroll_cf0_pane

0x328f,	// (0x0004a8a8) main_cf0_pane_g1

0xc1cb,	// (0x000537e4) main_cf0_pane_t1_ParamLimits

0xc1cb,	// (0x000537e4) main_cf0_pane_t1

0xc1df,	// (0x000537f8) main_cf0_pane_t2_ParamLimits

0xc1df,	// (0x000537f8) main_cf0_pane_t2

0x0001,

0xfdc5,	// (0x000573de) main_cf0_pane_t_ParamLimits

0xfdc5,	// (0x000573de) main_cf0_pane_t

0x32a1,	// (0x0004a8ba) scroll_pane_cp11

0xc1f3,	// (0x0005380c) cf0_flow_pane_g1

0xc1fb,	// (0x00053814) cf0_flow_pane_g2

0x0001,

0xfdca,	// (0x000573e3) cf0_flow_pane_g

0xc203,	// (0x0005381c) cf0_flow_pane_t1

0x477a,	// (0x0004bd93) main_call6_pane

0x477a,	// (0x0004bd93) main_calllock_pane

0xc211,	// (0x0005382a) call6_btn_grp_pane_ParamLimits

0xc211,	// (0x0005382a) call6_btn_grp_pane

0xc220,	// (0x00053839) call6_pane_g1_ParamLimits

0xc220,	// (0x00053839) call6_pane_g1

0xc230,	// (0x00053849) popup_call6_1st_window_ParamLimits

0xc230,	// (0x00053849) popup_call6_1st_window

0xc23e,	// (0x00053857) popup_call6_2nd_window_ParamLimits

0xc23e,	// (0x00053857) popup_call6_2nd_window

0xc24c,	// (0x00053865) cell_call6_btn_pane_ParamLimits

0xc24c,	// (0x00053865) cell_call6_btn_pane

0xd176,	// (0x0005478f) bg_popup_call2_in_pane_cp03

0x32ac,	// (0x0004a8c5) popup_call6_1st_window_g1

0x32b4,	// (0x0004a8cd) popup_call6_1st_window_g2

0x32bc,	// (0x0004a8d5) popup_call6_1st_window_g3

0x0002,

0xfdcf,	// (0x000573e8) popup_call6_1st_window_g

0x32c4,	// (0x0004a8dd) popup_call6_1st_window_t1

0x32d3,	// (0x0004a8ec) popup_call6_1st_window_t2

0x32e1,	// (0x0004a8fa) popup_call6_1st_window_t3

0x0002,

0xfdd6,	// (0x000573ef) popup_call6_1st_window_t

0xd176,	// (0x0005478f) bg_popup_call2_in_pane_cp04

0x32ef,	// (0x0004a908) popup_call6_2nd_window_g1

0x32f7,	// (0x0004a910) popup_call6_2nd_window_g2

0x32ff,	// (0x0004a918) popup_call6_2nd_window_g3

0x0002,

0xfddd,	// (0x000573f6) popup_call6_2nd_window_g

0x3307,	// (0x0004a920) popup_call6_2nd_window_t1

0x4a4e,	// (0x0004c067) bg_button_pane_cp15

0xc25b,	// (0x00053874) cell_call6_btn_pane_g1

0xc264,	// (0x0005387d) cell_call6_btn_pane_t1

0xc273,	// (0x0005388c) listscroll_wgtman_pane_ParamLimits

0xc273,	// (0x0005388c) listscroll_wgtman_pane

0xc28f,	// (0x000538a8) wgtman_btn_pane_ParamLimits

0xc28f,	// (0x000538a8) wgtman_btn_pane

0xd9ab,	// (0x00054fc4) aid_scroll_copy1

0x331f,	// (0x0004a938) list_wgtman_pane

0xc2c4,	// (0x000538dd) wgtman_btn_pane_g1_ParamLimits

0xc2c4,	// (0x000538dd) wgtman_btn_pane_g1

0xc2ec,	// (0x00053905) wgtman_btn_pane_t1_ParamLimits

0xc2ec,	// (0x00053905) wgtman_btn_pane_t1

0x3329,	// (0x0004a942) wgtman_btn_pane_t2_ParamLimits

0x3329,	// (0x0004a942) wgtman_btn_pane_t2

0x0001,

0xfde4,	// (0x000573fd) wgtman_btn_pane_t_ParamLimits

0xfde4,	// (0x000573fd) wgtman_btn_pane_t

0xc323,	// (0x0005393c) listrow_wgtman_pane_ParamLimits

0xc323,	// (0x0005393c) listrow_wgtman_pane

0xc33e,	// (0x00053957) listrow_wgtman_pane_g1

0xc34b,	// (0x00053964) listrow_wgtman_pane_g2

0x0001,

0xfde9,	// (0x00057402) listrow_wgtman_pane_g

0xc369,	// (0x00053982) listrow_wgtman_pane_t1

0xc381,	// (0x0005399a) listrow_wgtman_pane_t2

0x0001,

0xfdee,	// (0x00057407) listrow_wgtman_pane_t

0xc3a7,	// (0x000539c0) wait_bar_pane_cp09

0x3340,	// (0x0004a959) main_calllock_btn_pane

0x334a,	// (0x0004a963) main_calllock_pane_g1

0x477a,	// (0x0004bd93) bg_button_pane_cp17

0x3316,	// (0x0004a92f) main_calllock_btn_pane_g1

0x3352,	// (0x0004a96b) main_calllock_btn_pane_t1

0x477a,	// (0x0004bd93) main_dialer3_pane

0x477a,	// (0x0004bd93) main_fmrd2_pane

0xd1ac,	// (0x000547c5) main_fs_bigclock_unlock_btn_pane_g1

0xc3c1,	// (0x000539da) main_fs_bigclock_unlock_btn_pane_t1

0xc3cf,	// (0x000539e8) area_fmrd2_info_pane_ParamLimits

0xc3cf,	// (0x000539e8) area_fmrd2_info_pane

0xc3dd,	// (0x000539f6) area_fmrd2_visual_pane_ParamLimits

0xc3dd,	// (0x000539f6) area_fmrd2_visual_pane

0xc3eb,	// (0x00053a04) fmrd2_indi_pane_ParamLimits

0xc3eb,	// (0x00053a04) fmrd2_indi_pane

0xc3f8,	// (0x00053a11) area_fmrd2_visual_pane_g1

0xc400,	// (0x00053a19) area_fmrd2_visual_pane_t1

0xc410,	// (0x00053a29) area_fmrd2_visual_pane_t2

0xc420,	// (0x00053a39) area_fmrd2_visual_pane_t3

0x0002,

0xfdf8,	// (0x00057411) area_fmrd2_visual_pane_t

0xc430,	// (0x00053a49) area_fmrd2_info_pane_g1

0xc438,	// (0x00053a51) area_fmrd2_info_pane_t1

0xc448,	// (0x00053a61) area_fmrd2_info_pane_t2

0xc458,	// (0x00053a71) area_fmrd2_info_pane_t3

0xc468,	// (0x00053a81) area_fmrd2_info_pane_t4

0x0003,

0xfdff,	// (0x00057418) area_fmrd2_info_pane_t

0xc476,	// (0x00053a8f) fmrd2_indi_pane_t1

0xc486,	// (0x00053a9f) fmrd2_indi_pane_t2

0xc496,	// (0x00053aaf) fmrd2_indi_pane_t3

0x0002,

0xfe08,	// (0x00057421) fmrd2_indi_pane_t

0x25cc,	// (0x00049be5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x25cc,	// (0x00049be5) list_single_fs_bigclock_indicator_pane_g5

0x267d,	// (0x00049c96) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x267d,	// (0x00049c96) list_single_fs_bigclock_indicator_pane_t5

0xbb84,	// (0x0005319d) aid_cell_bcale_month_pane_ParamLimits

0xbb84,	// (0x0005319d) aid_cell_bcale_month_pane

0xbba2,	// (0x000531bb) bcale_month_pane_ParamLimits

0xbba2,	// (0x000531bb) bcale_month_pane

0xbbc0,	// (0x000531d9) bcale_preview_pane_ParamLimits

0xbbc0,	// (0x000531d9) bcale_preview_pane

0x30f5,	// (0x0004a70e) list_single_fs_bigclock_pane_t1_ParamLimits

0x3114,	// (0x0004a72d) list_single_fs_bigclock_pane_t2_ParamLimits

0x3114,	// (0x0004a72d) list_single_fs_bigclock_pane_t2

0x0001,

0xfd83,	// (0x0005739c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd83,	// (0x0005739c) list_single_fs_bigclock_pane_t

0xc3b9,	// (0x000539d2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdf3,	// (0x0005740c) main_fs_bigclock_unlock_btn_pane_g

0xc4a4,	// (0x00053abd) aid_dia3_key_size_ParamLimits

0xc4a4,	// (0x00053abd) aid_dia3_key_size

0xc4b0,	// (0x00053ac9) aid_dia3_listrow_size_ParamLimits

0xc4b0,	// (0x00053ac9) aid_dia3_listrow_size

0xc4c0,	// (0x00053ad9) dia3_keypad_fun_pane_ParamLimits

0xc4c0,	// (0x00053ad9) dia3_keypad_fun_pane

0xc4d2,	// (0x00053aeb) dia3_keypad_num_pane_ParamLimits

0xc4d2,	// (0x00053aeb) dia3_keypad_num_pane

0xc4e4,	// (0x00053afd) dia3_listscroll_pane_ParamLimits

0xc4e4,	// (0x00053afd) dia3_listscroll_pane

0xc4f2,	// (0x00053b0b) dia3_numentry_pane_ParamLimits

0xc4f2,	// (0x00053b0b) dia3_numentry_pane

0x3361,	// (0x0004a97a) dia3_list_pane

0x336c,	// (0x0004a985) scroll_pane_cp12

0x477a,	// (0x0004bd93) bg_dia3_numentry_pane

0xc500,	// (0x00053b19) dia3_numentry_pane_t1

0xc50f,	// (0x00053b28) cell_dia3_key_num_pane

0xc517,	// (0x00053b30) cell_dia3_key0_fun_pane_ParamLimits

0xc517,	// (0x00053b30) cell_dia3_key0_fun_pane

0xc524,	// (0x00053b3d) cell_dia3_key1_fun_pane_ParamLimits

0xc524,	// (0x00053b3d) cell_dia3_key1_fun_pane

0xc531,	// (0x00053b4a) dia3_listrow_pane

0x231f,	// (0x00049938) bg_dia3_numentry_pane_g1

0x477a,	// (0x0004bd93) bg_button_pane_cp21

0x3377,	// (0x0004a990) cell_dia3_key_num_pane_t1

0x3385,	// (0x0004a99e) cell_dia3_key_num_pane_t2

0x3394,	// (0x0004a9ad) cell_dia3_key_num_pane_t3

0x33a3,	// (0x0004a9bc) cell_dia3_key_num_pane_t4

0x0003,

0xfe0f,	// (0x00057428) cell_dia3_key_num_pane_t

0x477a,	// (0x0004bd93) bg_button_pane_cp19

0xc53e,	// (0x00053b57) cell_dia3_key0_fun_pane_g1

0x477a,	// (0x0004bd93) bg_button_pane_cp20

0xc546,	// (0x00053b5f) cell_dia3_key1_fun_pane_g1

0xc54e,	// (0x00053b67) area_left_week_number_pane

0xc561,	// (0x00053b7a) area_top_day_name_pane

0xc56f,	// (0x00053b88) frame_month_view_pane

0x33b2,	// (0x0004a9cb) grid_month_view_pane

0xc584,	// (0x00053b9d) cell_top_day_name_pane_ParamLimits

0xc584,	// (0x00053b9d) cell_top_day_name_pane

0xc59e,	// (0x00053bb7) cell_area_left_week_number_pane_ParamLimits

0xc59e,	// (0x00053bb7) cell_area_left_week_number_pane

0xc5c1,	// (0x00053bda) cell_month_view_pane_ParamLimits

0xc5c1,	// (0x00053bda) cell_month_view_pane

0x33c0,	// (0x0004a9d9) frm_month_g1

0xc5ed,	// (0x00053c06) frm_month_g2

0xc5fe,	// (0x00053c17) frm_month_g3

0xc60f,	// (0x00053c28) frm_month_g4

0xc620,	// (0x00053c39) frm_month_g5

0xc633,	// (0x00053c4c) frm_month_g6

0xc646,	// (0x00053c5f) frm_month_g7

0x33cd,	// (0x0004a9e6) frm_month_g8

0xc659,	// (0x00053c72) frm_month_g9

0xc666,	// (0x00053c7f) frm_month_g10

0xc673,	// (0x00053c8c) frm_month_g11

0xc680,	// (0x00053c99) frm_month_g12

0xc68d,	// (0x00053ca6) frm_month_g13

0xc69a,	// (0x00053cb3) frm_month_g14

0xc6a9,	// (0x00053cc2) frm_month_g15

0xc6b8,	// (0x00053cd1) frm_month_g16

0x000f,

0xfe18,	// (0x00057431) frm_month_g

0x33da,	// (0x0004a9f3) cell_top_day_name_pane_t1

0xc6c7,	// (0x00053ce0) cell_area_left_week_number_pane_g1

0xc6d6,	// (0x00053cef) cell_area_left_week_number_pane_t1

0xcf52,	// (0x0005456b) cell_month_view_pane_g1

0xc6ec,	// (0x00053d05) cell_month_view_pane_t1

0x477a,	// (0x0004bd93) main_fps_pane

0x289a,	// (0x00049eb3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x289a,	// (0x00049eb3) cmail_ddmenu_btn02_pane_cp1

0x28b6,	// (0x00049ecf) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x28b6,	// (0x00049ecf) cmail_ddmenu_btn02_pane_cp2

0xbe85,	// (0x0005349e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbe85,	// (0x0005349e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd36,	// (0x0005734f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd36,	// (0x0005734f) cmail_ddmenu_btn02_pane_g

0xbea3,	// (0x000534bc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbea3,	// (0x000534bc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd3b,	// (0x00057354) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd3b,	// (0x00057354) cmail_ddmenu_btn02_pane_t

0xc702,	// (0x00053d1b) fps_text_pane_ParamLimits

0xc702,	// (0x00053d1b) fps_text_pane

0xc70f,	// (0x00053d28) main_fps_pane_g1_ParamLimits

0xc70f,	// (0x00053d28) main_fps_pane_g1

0xc71d,	// (0x00053d36) wait_bar_pane_cp010_ParamLimits

0xc71d,	// (0x00053d36) wait_bar_pane_cp010

0xc729,	// (0x00053d42) fps_text_pane_t1_ParamLimits

0xc729,	// (0x00053d42) fps_text_pane_t1

0x9621,	// (0x00050c3a) cam4_image_uncrop_pane_g1

0x962a,	// (0x00050c43) cam4_image_uncrop_pane_g2

0x9633,	// (0x00050c4c) cam4_image_uncrop_pane_g3

0x963c,	// (0x00050c55) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x00056e93) cam4_image_uncrop_pane_g

0xc531,	// (0x00053b4a) dia3_listrow_pane_ParamLimits

0x477a,	// (0x0004bd93) main_phob2_pane

0xb9bd,	// (0x00052fd6) cell_tport_appsw_pane_cp02_ParamLimits

0xb9bd,	// (0x00052fd6) cell_tport_appsw_pane_cp02

0xb9cc,	// (0x00052fe5) cell_tport_appsw_pane_cp03_ParamLimits

0xb9cc,	// (0x00052fe5) cell_tport_appsw_pane_cp03

0x477a,	// (0x0004bd93) phob2_contact_card_pane

0x477a,	// (0x0004bd93) phob2_listscroll_pane

0x33ed,	// (0x0004aa06) phob2_list_pane

0x33f5,	// (0x0004aa0e) scroll_pane_cp034

0xc742,	// (0x00053d5b) phob2_cc_data_pane_ParamLimits

0xc742,	// (0x00053d5b) phob2_cc_data_pane

0xc75c,	// (0x00053d75) phob2_cc_listscroll_pane_ParamLimits

0xc75c,	// (0x00053d75) phob2_cc_listscroll_pane

0xc323,	// (0x0005393c) list_double_large_graphic_phob2_pane_ParamLimits

0xc323,	// (0x0005393c) list_double_large_graphic_phob2_pane

0xc776,	// (0x00053d8f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc776,	// (0x00053d8f) list_double_large_graphic_phob2_pane_g1

0xc783,	// (0x00053d9c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc783,	// (0x00053d9c) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe39,	// (0x00057452) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe39,	// (0x00057452) list_double_large_graphic_phob2_pane_g

0xc7a9,	// (0x00053dc2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc7a9,	// (0x00053dc2) list_double_large_graphic_phob2_pane_t1

0xc7be,	// (0x00053dd7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc7be,	// (0x00053dd7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe42,	// (0x0005745b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe42,	// (0x0005745b) list_double_large_graphic_phob2_pane_t

0x477a,	// (0x0004bd93) list_highlight_pane_cp024

0x33fd,	// (0x0004aa16) phob2_cc_button_pane

0xc7d3,	// (0x00053dec) phob2_cc_data_pane_g1_ParamLimits

0xc7d3,	// (0x00053dec) phob2_cc_data_pane_g1

0xc7e2,	// (0x00053dfb) phob2_cc_data_pane_g2_ParamLimits

0xc7e2,	// (0x00053dfb) phob2_cc_data_pane_g2

0x0001,

0xfe47,	// (0x00057460) phob2_cc_data_pane_g_ParamLimits

0xfe47,	// (0x00057460) phob2_cc_data_pane_g

0xc7f1,	// (0x00053e0a) phob2_cc_data_pane_t1_ParamLimits

0xc7f1,	// (0x00053e0a) phob2_cc_data_pane_t1

0xc806,	// (0x00053e1f) phob2_cc_data_pane_t2_ParamLimits

0xc806,	// (0x00053e1f) phob2_cc_data_pane_t2

0xc81b,	// (0x00053e34) phob2_cc_data_pane_t3_ParamLimits

0xc81b,	// (0x00053e34) phob2_cc_data_pane_t3

0x0002,

0xfe4c,	// (0x00057465) phob2_cc_data_pane_t_ParamLimits

0xfe4c,	// (0x00057465) phob2_cc_data_pane_t

0xc830,	// (0x00053e49) phob2_cc_list_pane_ParamLimits

0xc830,	// (0x00053e49) phob2_cc_list_pane

0x1a7d,	// (0x00049096) scroll_pane_cp035_ParamLimits

0x1a7d,	// (0x00049096) scroll_pane_cp035

0x519c,	// (0x0004c7b5) bg_button_pane_cp033

0xc83c,	// (0x00053e55) phob2_cc_button_pane_g1

0xc848,	// (0x00053e61) phob2_cc_button_pane_t1

0xc85d,	// (0x00053e76) phob2_cc_button_pane_t2

0x0001,

0xfe53,	// (0x0005746c) phob2_cc_button_pane_t

0xc86f,	// (0x00053e88) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc86f,	// (0x00053e88) list_double_large_graphic_phob2_cc_pane

0xc8dd,	// (0x00053ef6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc8dd,	// (0x00053ef6) list_double_large_graphic_phob2_cc_pane_g1

0x3405,	// (0x0004aa1e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x3405,	// (0x0004aa1e) list_double_large_graphic_phob2_cc_pane_g2

0xc8ee,	// (0x00053f07) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xc8ee,	// (0x00053f07) list_double_large_graphic_phob2_cc_pane_g3

0xc8fa,	// (0x00053f13) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xc8fa,	// (0x00053f13) list_double_large_graphic_phob2_cc_pane_g4

0xc906,	// (0x00053f1f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc906,	// (0x00053f1f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe58,	// (0x00057471) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe58,	// (0x00057471) list_double_large_graphic_phob2_cc_pane_g

0xc912,	// (0x00053f2b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xc912,	// (0x00053f2b) list_double_large_graphic_phob2_cc_pane_t1

0xc93b,	// (0x00053f54) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xc93b,	// (0x00053f54) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe63,	// (0x0005747c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe63,	// (0x0005747c) list_double_large_graphic_phob2_cc_pane_t

0xc964,	// (0x00053f7d) list_highlight_pane_cp025_ParamLimits

0xc964,	// (0x00053f7d) list_highlight_pane_cp025

0x519c,	// (0x0004c7b5) bg_button_pane_cp033_ParamLimits

0xc83c,	// (0x00053e55) phob2_cc_button_pane_g1_ParamLimits

0xc848,	// (0x00053e61) phob2_cc_button_pane_t1_ParamLimits

0xc85d,	// (0x00053e76) phob2_cc_button_pane_t2_ParamLimits

0xfe53,	// (0x0005746c) phob2_cc_button_pane_t_ParamLimits

0x4a42,	// (0x0004c05b) popup_wgtman_window

0x186d,	// (0x00048e86) scroll_pane_cp038

0xc2ac,	// (0x000538c5) wgtman_btn_pane_cp_01_ParamLimits

0xc2ac,	// (0x000538c5) wgtman_btn_pane_cp_01

0xc972,	// (0x00053f8b) wgtman_content_pane

0xc97b,	// (0x00053f94) wgtman_heading_pane

0x477a,	// (0x0004bd93) bg_heading_pane_cp02

0xc984,	// (0x00053f9d) wgtman_heading_pane_g1

0xc98c,	// (0x00053fa5) wgtman_heading_pane_t1

0xc99a,	// (0x00053fb3) scroll_pane_cp036

0xc9a2,	// (0x00053fbb) wgtman_list_pane

0xc9aa,	// (0x00053fc3) wgtman_list_pane_t1_ParamLimits

0xc9aa,	// (0x00053fc3) wgtman_list_pane_t1

0x9580,	// (0x00050b99) cam4_grid_pane

0xa265,	// (0x0005187e) bg_button_pane_cp015_ParamLimits

0xa277,	// (0x00051890) bg_button_pane_cp016_ParamLimits

0xa28a,	// (0x000518a3) bg_button_pane_cp017_ParamLimits

0xa2e0,	// (0x000518f9) popup_vitu2_query_window_g3_ParamLimits

0xa2e0,	// (0x000518f9) popup_vitu2_query_window_g3

0xa39d,	// (0x000519b6) popup_vitu2_query_window_t6_ParamLimits

0xa39d,	// (0x000519b6) popup_vitu2_query_window_t6

0xa3c8,	// (0x000519e1) popup_vitu2_query_window_t7_ParamLimits

0xa3c8,	// (0x000519e1) popup_vitu2_query_window_t7

0xc9c4,	// (0x00053fdd) cam4_grid_pane_g1

0xc9cd,	// (0x00053fe6) cam4_grid_pane_g2

0xc9d6,	// (0x00053fef) cam4_grid_pane_g3

0xc9df,	// (0x00053ff8) cam4_grid_pane_g4

0x0003,

0xfe68,	// (0x00057481) cam4_grid_pane_g

0x5c8b,	// (0x0004d2a4) aid_placing_vt_slider_lsc_ParamLimits

0x5fd7,	// (0x0004d5f0) vidtel_button_pane_ParamLimits

0x5fd7,	// (0x0004d5f0) vidtel_button_pane

0x477a,	// (0x0004bd93) bg_button_pane_cp034

0xc9ea,	// (0x00054003) vidtel_button_pane_g1

0xc9f2,	// (0x0005400b) vidtel_button_pane_t1

0x19c4,	// (0x00048fdd) aid_size_vtel_slider_touch

0x1a7d,	// (0x00049096) scroll_pane_cp039

0xb100,	// (0x00052719) ncim_query_button_pane_cp01_ParamLimits

0xb11f,	// (0x00052738) ncimui_query_pane_g1_ParamLimits

0x519c,	// (0x0004c7b5) input_focus_pane_cp012_ParamLimits

0x235d,	// (0x00049976) ncim_query_entry_pane_t1_ParamLimits

0x1a7d,	// (0x00049096) scroll_pane_cp039_ParamLimits

0xda8f,	// (0x000550a8) navi_pane_bcale_mc_g1

0xda97,	// (0x000550b0) navi_pane_bcale_mc_t1

0x28ea,	// (0x00049f03) main_sp_fs_email_pane_g1

0x28f6,	// (0x00049f0f) main_sp_fs_email_pane_g2

0x0001,

0xfc6b,	// (0x00057284) main_sp_fs_email_pane_g

0x2d7f,	// (0x0004a398) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2d7f,	// (0x0004a398) list_single_cale_mrui_row_pane_g3

0xbec3,	// (0x000534dc) list_single_recal_day_pane_g5_event_pane

0x2f5f,	// (0x0004a578) list_single_recal_day_pane_g7

0xca08,	// (0x00054021) list_recal_day_event_pane_cp01

0xca11,	// (0x0005402a) list_recal_vselct_arw_lo_pane_cp01

0xca19,	// (0x00054032) list_recal_vselct_arw_up_pane_cp01

0xca21,	// (0x0005403a) list_recal_vselct_pane_cp01

0x19d4,	// (0x00048fed) list_recal_day_event_pane_cp01_g1

0x3411,	// (0x0004aa2a) list_recal_day_event_pane_cp01_t1

0x2f67,	// (0x0004a580) list_single_recal_day_pane_t1_ParamLimits

0x2f79,	// (0x0004a592) list_single_recal_day_pane_t2_ParamLimits

0xfd4b,	// (0x00057364) list_single_recal_day_pane_t_ParamLimits

0x517a,	// (0x0004c793) bg_notes_pane_ParamLimits

0xcfa2,	// (0x000545bb) list_notes_pane_ParamLimits

0x5345,	// (0x0004c95e) scroll_pane_cp06_ParamLimits

0xcfc4,	// (0x000545dd) main_notes_pane_ParamLimits

0x519c,	// (0x0004c7b5) main_welc_pane

0xca42,	// (0x0005405b) main_welc_body_pane_ParamLimits

0xca42,	// (0x0005405b) main_welc_body_pane

0xca5c,	// (0x00054075) main_welc_opti_pane_ParamLimits

0xca5c,	// (0x00054075) main_welc_opti_pane

0xcab7,	// (0x000540d0) main_welc_pane_t1_ParamLimits

0xcab7,	// (0x000540d0) main_welc_pane_t1

0xcbcd,	// (0x000541e6) main_welc_body_row_pane_ParamLimits

0xcbcd,	// (0x000541e6) main_welc_body_row_pane

0x51f5,	// (0x0004c80e) main_welc_opti_row_pane_ParamLimits

0x51f5,	// (0x0004c80e) main_welc_opti_row_pane

0xcbf2,	// (0x0005420b) main_welc_opti_row_pane_g1

0xcbfa,	// (0x00054213) main_welc_opti_row_pane_t1

0xcc09,	// (0x00054222) main_welc_body_row_pane_t1

0x31de,	// (0x0004a7f7) popup_notif_wgt_heading_pane

0x31f8,	// (0x0004a811) aid_size_list_notif_wgt_del_ParamLimits

0x3205,	// (0x0004a81e) list_notif_wgt_row_pane_g1_ParamLimits

0x3211,	// (0x0004a82a) list_notif_wgt_row_pane_g2_ParamLimits

0x3220,	// (0x0004a839) list_notif_wgt_row_pane_g3_ParamLimits

0xfdb2,	// (0x000573cb) list_notif_wgt_row_pane_g_ParamLimits

0x322d,	// (0x0004a846) list_notif_wgt_row_pane_t1_ParamLimits

0x3243,	// (0x0004a85c) list_notif_wgt_row_pane_t2_ParamLimits

0x3255,	// (0x0004a86e) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb9,	// (0x000573d2) list_notif_wgt_row_pane_t_ParamLimits

0xc33e,	// (0x00053957) listrow_wgtman_pane_g1_ParamLimits

0xc34b,	// (0x00053964) listrow_wgtman_pane_g2_ParamLimits

0xfde9,	// (0x00057402) listrow_wgtman_pane_g_ParamLimits

0xc369,	// (0x00053982) listrow_wgtman_pane_t1_ParamLimits

0xc381,	// (0x0005399a) listrow_wgtman_pane_t2_ParamLimits

0xfdee,	// (0x00057407) listrow_wgtman_pane_t_ParamLimits

0xc3a7,	// (0x000539c0) wait_bar_pane_cp09_ParamLimits

0x477a,	// (0x0004bd93) bg_popup_heading_pane_cp02

0xcc18,	// (0x00054231) popup_notif_wgt_heading_pane_g1

0xcc20,	// (0x00054239) popup_notif_wgt_heading_pane_t1

0x477a,	// (0x0004bd93) main_vids_pane

0x477a,	// (0x0004bd93) vids_listscroll_pane

0xcc2e,	// (0x00054247) scroll_pane_cp040

0x477a,	// (0x0004bd93) vids_list_pane

0xcc39,	// (0x00054252) vids_list_double_pane_ParamLimits

0xcc39,	// (0x00054252) vids_list_double_pane

0xcc50,	// (0x00054269) vids_list_double_pane_g1

0xcc59,	// (0x00054272) vids_list_double_pane_t1

0xcc69,	// (0x00054282) vids_list_double_pane_t2

0x0001,

0xfe87,	// (0x000574a0) vids_list_double_pane_t

0x7ce2,	// (0x0004f2fb) main_ncimui_pane_ParamLimits

0xaf57,	// (0x00052570) main_ncimui_pane_g1_ParamLimits

0xaf63,	// (0x0005257c) main_ncimui_pane_g2_ParamLimits

0xaf63,	// (0x0005257c) main_ncimui_pane_g2

0x0001,

0xfb6c,	// (0x00057185) main_ncimui_pane_g_ParamLimits

0xfb6c,	// (0x00057185) main_ncimui_pane_g

0xca75,	// (0x0005408e) main_welc_pane_g1_ParamLimits

0xca75,	// (0x0005408e) main_welc_pane_g1

0xca81,	// (0x0005409a) main_welc_pane_g2_ParamLimits

0xca81,	// (0x0005409a) main_welc_pane_g2

0x0003,

0xfe71,	// (0x0005748a) main_welc_pane_g_ParamLimits

0xfe71,	// (0x0005748a) main_welc_pane_g

0x517a,	// (0x0004c793) listscroll_mce_pane_ParamLimits

0xdbe4,	// (0x000551fd) wait_bar_pane_cp10

0xeed8,	// (0x000564f1) main_cale_day_pane_ParamLimits

0xeed8,	// (0x000564f1) main_cale_week_pane_ParamLimits

0x517a,	// (0x0004c793) main_messa_pane_ParamLimits

0x89c7,	// (0x0004ffe0) main_clock2_btn_pane_ParamLimits

0x89c7,	// (0x0004ffe0) main_clock2_btn_pane

0x1198,	// (0x000487b1) main_clock2_btn_pane_cp01_ParamLimits

0x1198,	// (0x000487b1) main_clock2_btn_pane_cp01

0x2d0b,	// (0x0004a324) list_cale_mrui_pane_ParamLimits

0x3299,	// (0x0004a8b2) main_cf0_pane_g2

0x0001,

0xfdc0,	// (0x000573d9) main_cf0_pane_g

0xc54e,	// (0x00053b67) area_left_week_number_pane_ParamLimits

0xc561,	// (0x00053b7a) area_top_day_name_pane_ParamLimits

0xc56f,	// (0x00053b88) frame_month_view_pane_ParamLimits

0x33b2,	// (0x0004a9cb) grid_month_view_pane_ParamLimits

0x33c0,	// (0x0004a9d9) frm_month_g1_ParamLimits

0xc5ed,	// (0x00053c06) frm_month_g2_ParamLimits

0xc5fe,	// (0x00053c17) frm_month_g3_ParamLimits

0xc60f,	// (0x00053c28) frm_month_g4_ParamLimits

0xc620,	// (0x00053c39) frm_month_g5_ParamLimits

0xc633,	// (0x00053c4c) frm_month_g6_ParamLimits

0xc646,	// (0x00053c5f) frm_month_g7_ParamLimits

0x33cd,	// (0x0004a9e6) frm_month_g8_ParamLimits

0xc659,	// (0x00053c72) frm_month_g9_ParamLimits

0xc666,	// (0x00053c7f) frm_month_g10_ParamLimits

0xc673,	// (0x00053c8c) frm_month_g11_ParamLimits

0xc680,	// (0x00053c99) frm_month_g12_ParamLimits

0xc68d,	// (0x00053ca6) frm_month_g13_ParamLimits

0xc69a,	// (0x00053cb3) frm_month_g14_ParamLimits

0xc6a9,	// (0x00053cc2) frm_month_g15_ParamLimits

0xc6b8,	// (0x00053cd1) frm_month_g16_ParamLimits

0xfe18,	// (0x00057431) frm_month_g_ParamLimits

0x33da,	// (0x0004a9f3) cell_top_day_name_pane_t1_ParamLimits

0xc6c7,	// (0x00053ce0) cell_area_left_week_number_pane_g1_ParamLimits

0xc6d6,	// (0x00053cef) cell_area_left_week_number_pane_t1_ParamLimits

0xcf52,	// (0x0005456b) cell_month_view_pane_g1_ParamLimits

0xc6ec,	// (0x00053d05) cell_month_view_pane_t1_ParamLimits

0x5172,	// (0x0004c78b) main_clock2_btn_pane_g1

0xcc77,	// (0x00054290) main_clock2_btn_pane_t1

0x519c,	// (0x0004c7b5) listscroll_cmail_pane_ParamLimits

0x28ea,	// (0x00049f03) main_sp_fs_email_pane_g1_ParamLimits

0x28f6,	// (0x00049f0f) main_sp_fs_email_pane_g2_ParamLimits

0xfc6b,	// (0x00057284) main_sp_fs_email_pane_g_ParamLimits

0x2ecf,	// (0x0004a4e8) list_recal_day_pane_ParamLimits

0x2ee0,	// (0x0004a4f9) mian_recal_day_pane_t1

0xb8ab,	// (0x00052ec4) list_single_dyc_row_text_pane_t4_ParamLimits

0xb8ab,	// (0x00052ec4) list_single_dyc_row_text_pane_t4

0xb8e2,	// (0x00052efb) list_single_dyc_row_text_pane_t5_ParamLimits

0xb8e2,	// (0x00052efb) list_single_dyc_row_text_pane_t5

0x2998,	// (0x00049fb1) list_single_dyc_row_text_pane_t6_ParamLimits

0x2998,	// (0x00049fb1) list_single_dyc_row_text_pane_t6

0xd57b,	// (0x00054b94) aid_mgn_list_cale_time_pane

0x7ce2,	// (0x0004f2fb) main_gallery2_pane_ParamLimits

0x11ae,	// (0x000487c7) main_clock2_pane_cp01_t1

0x11be,	// (0x000487d7) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x00056d6a) main_clock2_pane_cp01_t

0x579a,	// (0x0004cdb3) cale_week_scroll_pane_g16_ParamLimits

0x579a,	// (0x0004cdb3) cale_week_scroll_pane_g16

0xd176,	// (0x0005478f) vorec_slider_pane

0xc9f2,	// (0x0005400b) vidtel_button_pane_t1_ParamLimits

0xbf1e,	// (0x00053537) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbf1e,	// (0x00053537) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbf2b,	// (0x00053544) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbf2b,	// (0x00053544) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd6e,	// (0x00057387) main_fs_bigclock_clock_pane_g_ParamLimits

0xbf37,	// (0x00053550) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbf4a,	// (0x00053563) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd77,	// (0x00057390) main_fs_bigclock_clock_pane_t_ParamLimits

0x8364,	// (0x0004f97d) main_mup3_lyrics_pane_ParamLimits

0x8364,	// (0x0004f97d) main_mup3_lyrics_pane

0xccab,	// (0x000542c4) main_mup3_lyrics_pane_t1_ParamLimits

0xccab,	// (0x000542c4) main_mup3_lyrics_pane_t1

0x8ef3,	// (0x0005050c) aid_main_mp4_pane_t1_area

0x8efd,	// (0x00050516) aid_main_mp4_pane_t2_area

0x8ffc,	// (0x00050615) main_mp4_pane_g7_ParamLimits

0x8ffc,	// (0x00050615) main_mp4_pane_g7

0x9008,	// (0x00050621) main_mp4_pane_g8_ParamLimits

0x9008,	// (0x00050621) main_mp4_pane_g8

0x9428,	// (0x00050a41) aid_call6_pane_g1_size

0xc8b1,	// (0x00053eca) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc8b1,	// (0x00053eca) list_double_large_graphic_phob2_other_pane

0xd533,	// (0x00054b4c) list_double_large_graphic_phob2_other_pane_g1

0x477a,	// (0x0004bd93) list_highlight_pane_cp026

0x519c,	// (0x0004c7b5) main_welc_pane_ParamLimits

0xb724,	// (0x00052d3d) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb724,	// (0x00052d3d) main_sp_fs_ctrlbar_pane_g3

0xb73c,	// (0x00052d55) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb73c,	// (0x00052d55) main_sp_fs_ctrlbar_pane_g4

0xb76e,	// (0x00052d87) toolbar2_fixed_button_pane_cp01

0xb779,	// (0x00052d92) toolbar2_fixed_button_pane_cp02

0xb784,	// (0x00052d9d) toolbar2_fixed_button_pane_cp03

0xca2b,	// (0x00054044) list_welc_entry_pane_ParamLimits

0xca2b,	// (0x00054044) list_welc_entry_pane

0xca8f,	// (0x000540a8) main_welc_pane_g3_ParamLimits

0xca8f,	// (0x000540a8) main_welc_pane_g3

0xcad1,	// (0x000540ea) main_welc_pane_t2_ParamLimits

0xcad1,	// (0x000540ea) main_welc_pane_t2

0xcae5,	// (0x000540fe) main_welc_pane_t3_ParamLimits

0xcae5,	// (0x000540fe) main_welc_pane_t3

0x0005,

0xfe7a,	// (0x00057493) main_welc_pane_t_ParamLimits

0xfe7a,	// (0x00057493) main_welc_pane_t

0xcb6f,	// (0x00054188) welc_button_pane_ParamLimits

0xcb6f,	// (0x00054188) welc_button_pane

0xcbbf,	// (0x000541d8) welc_service_logo_pane_ParamLimits

0xcbbf,	// (0x000541d8) welc_service_logo_pane

0xccdd,	// (0x000542f6) list_single_welc_entry_pane_ParamLimits

0xccdd,	// (0x000542f6) list_single_welc_entry_pane

0xccee,	// (0x00054307) list_single_welc_entry_pane_g1

0xccf6,	// (0x0005430f) list_single_welc_entry_pane_t1

0xcd04,	// (0x0005431d) list_single_welc_entry_pane_t2

0x0001,

0xfe8c,	// (0x000574a5) list_single_welc_entry_pane_t

0x477a,	// (0x0004bd93) bg_button_pane_cp035

0xcd12,	// (0x0005432b) welc_button_pane_t1

0xcd20,	// (0x00054339) welc_service_logo_pane_g1

0xcd29,	// (0x00054342) welc_service_logo_pane_g2

0x0001,

0xfe91,	// (0x000574aa) welc_service_logo_pane_g

0x4a4e,	// (0x0004c067) main_int_radio_pane

0xf024,	// (0x0005663d) list_single_fs_dyc_pane_g1

0xc78f,	// (0x00053da8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xc78f,	// (0x00053da8) list_double_large_graphic_phob2_pane_g3

0xc79b,	// (0x00053db4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xc79b,	// (0x00053db4) list_double_large_graphic_phob2_pane_g4

0xcd32,	// (0x0005434b) main_int_radio1_pane_ParamLimits

0xcd32,	// (0x0005434b) main_int_radio1_pane

0xcd44,	// (0x0005435d) find_pane_cp02

0xcd4d,	// (0x00054366) input_focus_pane_cp12_ParamLimits

0xcd4d,	// (0x00054366) input_focus_pane_cp12

0xcd59,	// (0x00054372) input_focus_pane_cp13_ParamLimits

0xcd59,	// (0x00054372) input_focus_pane_cp13

0xcd71,	// (0x0005438a) input_focus_pane_cp14_ParamLimits

0xcd71,	// (0x0005438a) input_focus_pane_cp14

0xcd89,	// (0x000543a2) int_radio1_listscroll_pane

0xcd93,	// (0x000543ac) main_int_radio1_pane_g1_ParamLimits

0xcd93,	// (0x000543ac) main_int_radio1_pane_g1

0xcda3,	// (0x000543bc) main_int_radio1_pane_t1_ParamLimits

0xcda3,	// (0x000543bc) main_int_radio1_pane_t1

0xcdb7,	// (0x000543d0) main_int_radio1_pane_t2_ParamLimits

0xcdb7,	// (0x000543d0) main_int_radio1_pane_t2

0xcdcb,	// (0x000543e4) main_int_radio1_pane_t3_ParamLimits

0xcdcb,	// (0x000543e4) main_int_radio1_pane_t3

0xcddf,	// (0x000543f8) main_int_radio1_pane_t4_ParamLimits

0xcddf,	// (0x000543f8) main_int_radio1_pane_t4

0xcdf6,	// (0x0005440f) main_int_radio1_pane_t5_ParamLimits

0xcdf6,	// (0x0005440f) main_int_radio1_pane_t5

0xce08,	// (0x00054421) main_int_radio1_pane_t6_ParamLimits

0xce08,	// (0x00054421) main_int_radio1_pane_t6

0xce1a,	// (0x00054433) main_int_radio1_pane_t7_ParamLimits

0xce1a,	// (0x00054433) main_int_radio1_pane_t7

0xce2c,	// (0x00054445) main_int_radio1_pane_t8_ParamLimits

0xce2c,	// (0x00054445) main_int_radio1_pane_t8

0xce40,	// (0x00054459) main_int_radio1_pane_t9_ParamLimits

0xce40,	// (0x00054459) main_int_radio1_pane_t9

0xce52,	// (0x0005446b) main_int_radio1_pane_t10_ParamLimits

0xce52,	// (0x0005446b) main_int_radio1_pane_t10

0xce83,	// (0x0005449c) main_int_radio1_pane_t11_ParamLimits

0xce83,	// (0x0005449c) main_int_radio1_pane_t11

0xceb4,	// (0x000544cd) main_int_radio1_pane_t12_ParamLimits

0xceb4,	// (0x000544cd) main_int_radio1_pane_t12

0x000b,

0xfe96,	// (0x000574af) main_int_radio1_pane_t_ParamLimits

0xfe96,	// (0x000574af) main_int_radio1_pane_t

0xcecb,	// (0x000544e4) int_radio_list_pane

0x33f5,	// (0x0004aa0e) scroll_pane_cp037

0xced3,	// (0x000544ec) list_double_large_graphic_int_radio_pane_ParamLimits

0xced3,	// (0x000544ec) list_double_large_graphic_int_radio_pane

0xceeb,	// (0x00054504) list_double_large_graphic_int_radio_pane_g1

0x341f,	// (0x0004aa38) list_double_large_graphic_int_radio_pane_t1

0x342d,	// (0x0004aa46) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaf,	// (0x000574c8) list_double_large_graphic_int_radio_pane_t

0x477a,	// (0x0004bd93) list_highlight_pane_cp027

0xca3a,	// (0x00054053) main_button_pane_4

0xca9b,	// (0x000540b4) main_welc_pane_g4_ParamLimits

0xca9b,	// (0x000540b4) main_welc_pane_g4

0xcaf7,	// (0x00054110) main_welc_pane_t4_ParamLimits

0xcaf7,	// (0x00054110) main_welc_pane_t4

0xcb09,	// (0x00054122) main_welc_pane_t5_ParamLimits

0xcb09,	// (0x00054122) main_welc_pane_t5

0xcb3b,	// (0x00054154) main_welc_pane_t6_ParamLimits

0xcb3b,	// (0x00054154) main_welc_pane_t6

0xcb7d,	// (0x00054196) welc_button_pane_2_ParamLimits

0xcb7d,	// (0x00054196) welc_button_pane_2

0xcb95,	// (0x000541ae) welc_button_pane_3_ParamLimits

0xcb95,	// (0x000541ae) welc_button_pane_3

0xca3a,	// (0x00054053) welc_button_pane_4

0xcbaf,	// (0x000541c8) welc_button_pane_5_ParamLimits

0xcbaf,	// (0x000541c8) welc_button_pane_5

0x7cfe,	// (0x0004f317) main_popup_welc_pane

0xcef4,	// (0x0005450d) main_welc_sk_g3

0xcefe,	// (0x00054517) main_welc_sk_g4

0xcf08,	// (0x00054521) main_welc_sk_t3

0xcf18,	// (0x00054531) main_welc_sk_t4

0xcf28,	// (0x00054541) popup_welc_pane_t4

0xcf36,	// (0x0005454f) popup_welc_pane_t5

0xcf44,	// (0x0005455d) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
