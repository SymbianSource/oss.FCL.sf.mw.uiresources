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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007d3d1 };

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
0x1e7d,	// (0x0007f24e) Screen

0x1e89,	// (0x0007f25a) application_window

0x1edd,	// (0x0007f2ae) area_bottom_pane_ParamLimits

0x1edd,	// (0x0007f2ae) area_bottom_pane

0x1f3b,	// (0x0007f30c) area_top_pane_ParamLimits

0x1f3b,	// (0x0007f30c) area_top_pane

0x1f9f,	// (0x0007f370) call_video_uplink_pane_ParamLimits

0x1f9f,	// (0x0007f370) call_video_uplink_pane

0x1fde,	// (0x0007f3af) main_pane_ParamLimits

0x1fde,	// (0x0007f3af) main_pane

0xca65,	// (0x00089e36) context_pane

0x5364,	// (0x00082735) navi_pane

0x538c,	// (0x0008275d) popup_cale_events_window_ParamLimits

0x538c,	// (0x0008275d) popup_cale_events_window

0xca78,	// (0x00089e49) popup_mup_playback_window

0x53a4,	// (0x00082775) signal_pane

0xaa19,	// (0x00087dea) main_browser_pane

0xabc1,	// (0x00087f92) main_burst_pane

0x51d4,	// (0x000825a5) main_calc_pane

0xca4b,	// (0x00089e1c) main_cale_day_pane

0x26bb,	// (0x0007fa8c) main_cale_month_pane

0xca4b,	// (0x00089e1c) main_cale_week_pane

0xabc1,	// (0x00087f92) main_call_pane

0xa6c5,	// (0x00087a96) main_call_poc_pane

0xabc1,	// (0x00087f92) main_camera_pane

0xabc1,	// (0x00087f92) main_chi_dic_pane

0xb3c3,	// (0x00088794) main_clock_pane

0xa6c5,	// (0x00087a96) main_fmradio_pane

0xabc1,	// (0x00087f92) main_graph_messa_pane

0xa6c5,	// (0x00087a96) main_help_pane

0xaa19,	// (0x00087dea) main_im_pane

0xa920,	// (0x00087cf1) main_image_pane_ParamLimits

0xa920,	// (0x00087cf1) main_image_pane

0xa6c5,	// (0x00087a96) main_location2_pane

0xabc1,	// (0x00087f92) main_location_pane

0xa920,	// (0x00087cf1) main_messa_pane

0xa6c5,	// (0x00087a96) main_mp2_pane

0xabc1,	// (0x00087f92) main_mp_pane

0xa6c5,	// (0x00087a96) main_msg_pane

0xa6c5,	// (0x00087a96) main_mup_eq_pane

0xa6c5,	// (0x00087a96) main_mup_pane

0xaa19,	// (0x00087dea) main_notes_pane

0xa6c5,	// (0x00087a96) main_pec_pane

0xa6c5,	// (0x00087a96) main_phob_pane

0xa6c5,	// (0x00087a96) main_pinb_pane

0xa6c5,	// (0x00087a96) main_postcard_pane

0xa6c5,	// (0x00087a96) main_qdial_pane

0xabc1,	// (0x00087f92) main_skin_pane

0xa6c5,	// (0x00087a96) main_smil2_pane

0xabc1,	// (0x00087f92) main_smil_pane

0xabc1,	// (0x00087f92) main_video_pane

0xabc1,	// (0x00087f92) main_video_tele_pane

0xa920,	// (0x00087cf1) main_viewer_pane_ParamLimits

0xa920,	// (0x00087cf1) main_viewer_pane

0xabc1,	// (0x00087f92) main_vorec_pane

0x5214,	// (0x000825e5) popup_blid_sat_info_window_ParamLimits

0x5214,	// (0x000825e5) popup_blid_sat_info_window

0x523a,	// (0x0008260b) popup_dyc_status_message_window_ParamLimits

0x523a,	// (0x0008260b) popup_dyc_status_message_window

0x524a,	// (0x0008261b) popup_grid_large_graphic_window_ParamLimits

0x524a,	// (0x0008261b) popup_grid_large_graphic_window

0x52df,	// (0x000826b0) popup_loc_request_window_ParamLimits

0x52df,	// (0x000826b0) popup_loc_request_window

0x5338,	// (0x00082709) popup_wml_address_window_ParamLimits

0x5338,	// (0x00082709) popup_wml_address_window

0x50ac,	// (0x0008247d) call_muted_g1

0x4d6b,	// (0x0008213c) popup_call_audio_conf_window_ParamLimits

0x4d6b,	// (0x0008213c) popup_call_audio_conf_window

0x50bc,	// (0x0008248d) popup_call_audio_first_window_ParamLimits

0x50bc,	// (0x0008248d) popup_call_audio_first_window

0x50fc,	// (0x000824cd) popup_call_audio_in_window_ParamLimits

0x50fc,	// (0x000824cd) popup_call_audio_in_window

0x5120,	// (0x000824f1) popup_call_audio_out_window_ParamLimits

0x5120,	// (0x000824f1) popup_call_audio_out_window

0x5142,	// (0x00082513) popup_call_audio_second_window_ParamLimits

0x5142,	// (0x00082513) popup_call_audio_second_window

0x5172,	// (0x00082543) popup_call_audio_wait_window_ParamLimits

0x5172,	// (0x00082543) popup_call_audio_wait_window

0x5193,	// (0x00082564) popup_number_entry_window_ParamLimits

0x5193,	// (0x00082564) popup_number_entry_window

0xa27d,	// (0x0008764e) bg_popup_call_pane_cp05_ParamLimits

0xa27d,	// (0x0008764e) bg_popup_call_pane_cp05

0xa29d,	// (0x0008766e) popup_number_entry_window_t1

0xa2b0,	// (0x00087681) popup_number_entry_window_t2

0xa2c2,	// (0x00087693) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0008c497) popup_number_entry_window_t

0xa309,	// (0x000876da) text_title_cp2

0xa31c,	// (0x000876ed) bg_popup_call_pane_cp_ParamLimits

0xa31c,	// (0x000876ed) bg_popup_call_pane_cp

0xa32a,	// (0x000876fb) call_thumbnail_pane

0xa332,	// (0x00087703) popup_call_audio_in_window_g1_ParamLimits

0xa332,	// (0x00087703) popup_call_audio_in_window_g1

0xa33e,	// (0x0008770f) popup_call_audio_in_window_g2_ParamLimits

0xa33e,	// (0x0008770f) popup_call_audio_in_window_g2

0xa34a,	// (0x0008771b) popup_call_audio_in_window_g3_ParamLimits

0xa34a,	// (0x0008771b) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0008c4a0) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0008c4a0) popup_call_audio_in_window_g

0xa356,	// (0x00087727) popup_call_audio_in_window_t1_ParamLimits

0xa356,	// (0x00087727) popup_call_audio_in_window_t1

0xa372,	// (0x00087743) popup_call_audio_in_window_t2_ParamLimits

0xa372,	// (0x00087743) popup_call_audio_in_window_t2

0xa38e,	// (0x0008775f) popup_call_audio_in_window_t3_ParamLimits

0xa38e,	// (0x0008775f) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0008c4a7) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0008c4a7) popup_call_audio_in_window_t

0xa31c,	// (0x000876ed) bg_popup_call_pane_cp01_ParamLimits

0xa31c,	// (0x000876ed) bg_popup_call_pane_cp01

0xa32a,	// (0x000876fb) call_thumbnail_pane_cp02

0xa3a1,	// (0x00087772) call_type_pane_cp022

0xa3a9,	// (0x0008777a) popup_call_audio_out_window_g1_ParamLimits

0xa3a9,	// (0x0008777a) popup_call_audio_out_window_g1

0xa3bb,	// (0x0008778c) popup_call_audio_out_window_g2_ParamLimits

0xa3bb,	// (0x0008778c) popup_call_audio_out_window_g2

0xa3c7,	// (0x00087798) popup_call_audio_out_window_g3_ParamLimits

0xa3c7,	// (0x00087798) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0008c4ae) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0008c4ae) popup_call_audio_out_window_g

0xa3d9,	// (0x000877aa) popup_call_audio_out_window_t1_ParamLimits

0xa3d9,	// (0x000877aa) popup_call_audio_out_window_t1

0xa3f1,	// (0x000877c2) popup_call_audio_out_window_t2_ParamLimits

0xa3f1,	// (0x000877c2) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0008c4b5) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0008c4b5) popup_call_audio_out_window_t

0xa406,	// (0x000877d7) bg_popup_call_pane_ParamLimits

0xa406,	// (0x000877d7) bg_popup_call_pane

0x21a9,	// (0x0007f57a) call_thumbnail_pane_cp_ParamLimits

0x21a9,	// (0x0007f57a) call_thumbnail_pane_cp

0xa48a,	// (0x0008785b) call_type_pane_cp01_ParamLimits

0xa48a,	// (0x0008785b) call_type_pane_cp01

0xa4ce,	// (0x0008789f) popup_call_audio_first_window_g1_ParamLimits

0xa4ce,	// (0x0008789f) popup_call_audio_first_window_g1

0xa51a,	// (0x000878eb) popup_call_audio_first_window_g2_ParamLimits

0xa51a,	// (0x000878eb) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0008c4ba) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0008c4ba) popup_call_audio_first_window_g

0xa55e,	// (0x0008792f) popup_call_audio_first_window_t1_ParamLimits

0xa55e,	// (0x0008792f) popup_call_audio_first_window_t1

0xa60a,	// (0x000879db) popup_call_audio_first_window_t4_ParamLimits

0xa60a,	// (0x000879db) popup_call_audio_first_window_t4

0xa696,	// (0x00087a67) popup_call_audio_first_window_t5_ParamLimits

0xa696,	// (0x00087a67) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0008c4bf) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0008c4bf) popup_call_audio_first_window_t

0xa6c5,	// (0x00087a96) bg_popup_call_pane_cp02

0xa6cf,	// (0x00087aa0) call_type_pane_cp023

0xa6d7,	// (0x00087aa8) popup_call_audio_wait_window_g1

0xa6df,	// (0x00087ab0) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0008c4c6) popup_call_audio_wait_window_g

0xa6e7,	// (0x00087ab8) popup_call_audio_wait_window_t3

0xa6f5,	// (0x00087ac6) bg_popup_call_pane_cp03_ParamLimits

0xa6f5,	// (0x00087ac6) bg_popup_call_pane_cp03

0xa755,	// (0x00087b26) call_thumbnail_pane_cp011_ParamLimits

0xa755,	// (0x00087b26) call_thumbnail_pane_cp011

0xa761,	// (0x00087b32) call_type_pane_cp034_ParamLimits

0xa761,	// (0x00087b32) call_type_pane_cp034

0xa79d,	// (0x00087b6e) popup_call_audio_second_window_g1_ParamLimits

0xa79d,	// (0x00087b6e) popup_call_audio_second_window_g1

0xa7d9,	// (0x00087baa) popup_call_audio_second_window_g2_ParamLimits

0xa7d9,	// (0x00087baa) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0008c4cb) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0008c4cb) popup_call_audio_second_window_g

0xa815,	// (0x00087be6) popup_call_audio_second_window_t1_ParamLimits

0xa815,	// (0x00087be6) popup_call_audio_second_window_t1

0xa896,	// (0x00087c67) popup_call_audio_second_window_t2_ParamLimits

0xa896,	// (0x00087c67) popup_call_audio_second_window_t2

0xa8cc,	// (0x00087c9d) popup_call_audio_second_window_t3_ParamLimits

0xa8cc,	// (0x00087c9d) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0008c4d0) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0008c4d0) popup_call_audio_second_window_t

0xa6c5,	// (0x00087a96) bg_popup_call_pane_cp04

0xa902,	// (0x00087cd3) list_conf_pane

0xa90a,	// (0x00087cdb) popup_call_audio_conf_window_t1

0xa918,	// (0x00087ce9) call_thumbnail_pane_g1

0xa920,	// (0x00087cf1) bg_pinb_pane_ParamLimits

0xa920,	// (0x00087cf1) bg_pinb_pane

0xa92e,	// (0x00087cff) find_pinb_pane

0xa937,	// (0x00087d08) listscroll_pinb_pane_ParamLimits

0xa937,	// (0x00087d08) listscroll_pinb_pane

0xa946,	// (0x00087d17) pinb_bg_pane_g1

0x21cd,	// (0x0007f59e) pinb_bg_pane_g2

0x21d9,	// (0x0007f5aa) pinb_bg_pane_g3

0x21e5,	// (0x0007f5b6) pinb_bg_pane_g4

0x21f1,	// (0x0007f5c2) pinb_bg_pane_g5

0x21fd,	// (0x0007f5ce) pinb_bg_pane_g6

0x2208,	// (0x0007f5d9) pinb_bg_pane_g7

0x2213,	// (0x0007f5e4) pinb_bg_pane_g8

0x221e,	// (0x0007f5ef) pinb_bg_pane_g9

0x2228,	// (0x0007f5f9) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0008c4d7) pinb_bg_pane_g

0x2245,	// (0x0007f616) grid_pinb_pane

0x2250,	// (0x0007f621) list_pinb_pane

0x225b,	// (0x0007f62c) scroll_pane_cp01_ParamLimits

0x225b,	// (0x0007f62c) scroll_pane_cp01

0xa950,	// (0x00087d21) find_pinb_pane_g1_ParamLimits

0xa950,	// (0x00087d21) find_pinb_pane_g1

0xa968,	// (0x00087d39) find_pinb_pane_t1

0xa97a,	// (0x00087d4b) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0008c4f1) find_pinb_pane_t

0xa98f,	// (0x00087d60) input_focus_pane_cp01_ParamLimits

0xa98f,	// (0x00087d60) input_focus_pane_cp01

0x226d,	// (0x0007f63e) cell_pinb_pane_ParamLimits

0x226d,	// (0x0007f63e) cell_pinb_pane

0x2292,	// (0x0007f663) cell_pinb_pane_g1_ParamLimits

0x2292,	// (0x0007f663) cell_pinb_pane_g1

0x22a7,	// (0x0007f678) cell_pinb_pane_g2_ParamLimits

0x22a7,	// (0x0007f678) cell_pinb_pane_g2

0xa99b,	// (0x00087d6c) cell_pinb_pane_g3_ParamLimits

0xa99b,	// (0x00087d6c) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0008c4f6) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0008c4f6) cell_pinb_pane_g

0xa6c5,	// (0x00087a96) grid_highlight_pane_cp01

0x22b3,	// (0x0007f684) list_pinb_item_pane_ParamLimits

0x22b3,	// (0x0007f684) list_pinb_item_pane

0xa6c5,	// (0x00087a96) list_highlight_pane_cp02

0x22d1,	// (0x0007f6a2) list_pinb_item_pane_g1_ParamLimits

0x22d1,	// (0x0007f6a2) list_pinb_item_pane_g1

0x22de,	// (0x0007f6af) list_pinb_item_pane_g2_ParamLimits

0x22de,	// (0x0007f6af) list_pinb_item_pane_g2

0x22ea,	// (0x0007f6bb) list_pinb_item_pane_g3_ParamLimits

0x22ea,	// (0x0007f6bb) list_pinb_item_pane_g3

0x22fb,	// (0x0007f6cc) list_pinb_item_pane_g4_ParamLimits

0x22fb,	// (0x0007f6cc) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0008c4fd) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0008c4fd) list_pinb_item_pane_g

0x2307,	// (0x0007f6d8) list_pinb_item_pane_t1_ParamLimits

0x2307,	// (0x0007f6d8) list_pinb_item_pane_t1

0x2338,	// (0x0007f709) calc_display_pane

0x2356,	// (0x0007f727) calc_paper_pane

0x2372,	// (0x0007f743) grid_calc_pane

0xa6c5,	// (0x00087a96) bg_list_pane_cp01

0x239e,	// (0x0007f76f) clock_g1

0x23a6,	// (0x0007f777) clock_g2

0x0001,

0xf135,	// (0x0008c506) clock_g

0x23b0,	// (0x0007f781) clock_t1_ParamLimits

0x23b0,	// (0x0007f781) clock_t1

0x23c5,	// (0x0007f796) clock_t2_ParamLimits

0x23c5,	// (0x0007f796) clock_t2

0x23d7,	// (0x0007f7a8) clock_t3_ParamLimits

0x23d7,	// (0x0007f7a8) clock_t3

0x23e9,	// (0x0007f7ba) clock_t4_ParamLimits

0x23e9,	// (0x0007f7ba) clock_t4

0x23fb,	// (0x0007f7cc) clock_t5_ParamLimits

0x23fb,	// (0x0007f7cc) clock_t5

0x2410,	// (0x0007f7e1) clock_t6_ParamLimits

0x2410,	// (0x0007f7e1) clock_t6

0x2422,	// (0x0007f7f3) clock_t7_ParamLimits

0x2422,	// (0x0007f7f3) clock_t7

0x2434,	// (0x0007f805) clock_t8_ParamLimits

0x2434,	// (0x0007f805) clock_t8

0x244a,	// (0x0007f81b) clock_t9_ParamLimits

0x244a,	// (0x0007f81b) clock_t9

0x0008,

0xf13a,	// (0x0008c50b) clock_t_ParamLimits

0xf13a,	// (0x0008c50b) clock_t

0xa9a7,	// (0x00087d78) popup_clock_analogue_window_cp02

0xa9a7,	// (0x00087d78) popup_clock_digital_window_cp01

0xa9af,	// (0x00087d80) listscroll_help_pane

0xa6c5,	// (0x00087a96) phob_pre_status_pane

0xa9b9,	// (0x00087d8a) grid_qdial_pane

0xa920,	// (0x00087cf1) listscroll_mce_pane

0xa920,	// (0x00087cf1) bg_notes_pane

0xa9c3,	// (0x00087d94) list_notes_pane

0x2460,	// (0x0007f831) scroll_pane_cp06

0xa9d1,	// (0x00087da2) bg_calc_paper_pane

0x246f,	// (0x0007f840) list_calc_pane

0xaa19,	// (0x00087dea) bg_calc_display_pane

0x2489,	// (0x0007f85a) calc_display_pane_t1

0x249e,	// (0x0007f86f) calc_display_pane_t2

0x24b3,	// (0x0007f884) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0008c51e) calc_display_pane_t

0x24c5,	// (0x0007f896) cell_calc_pane_ParamLimits

0x24c5,	// (0x0007f896) cell_calc_pane

0xaa25,	// (0x00087df6) bg_calc_paper_pane_g1

0xaa31,	// (0x00087e02) bg_calc_paper_pane_g2

0xaa3d,	// (0x00087e0e) bg_calc_paper_pane_g3

0xaa49,	// (0x00087e1a) bg_calc_paper_pane_g4

0xaa55,	// (0x00087e26) bg_calc_paper_pane_g5

0x24f4,	// (0x0007f8c5) bg_calc_paper_pane_g6

0x2505,	// (0x0007f8d6) bg_calc_paper_pane_g7

0x2516,	// (0x0007f8e7) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0008c525) bg_calc_paper_pane_g

0x2527,	// (0x0007f8f8) calc_bg_paper_pane_g9

0x2538,	// (0x0007f909) list_calc_item_pane_ParamLimits

0x2538,	// (0x0007f909) list_calc_item_pane

0xaa61,	// (0x00087e32) list_calc_item_pane_g1

0x2559,	// (0x0007f92a) list_calc_item_pane_t1_ParamLimits

0x2559,	// (0x0007f92a) list_calc_item_pane_t1

0x256b,	// (0x0007f93c) list_calc_item_pane_t2_ParamLimits

0x256b,	// (0x0007f93c) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0008c536) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0008c536) list_calc_item_pane_t

0xaa6e,	// (0x00087e3f) cell_calc_pane_g1

0xaa78,	// (0x00087e49) grid_highlight_pane_cp02

0xdbb5,	// (0x0008af86) bg_calc_display_pane_g1

0x259b,	// (0x0007f96c) bg_calc_display_pane_g2

0xdbbe,	// (0x0008af8f) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0008c540) bg_calc_display_pane_g

0x25a5,	// (0x0007f976) cell_qdial_pane_ParamLimits

0x25a5,	// (0x0007f976) cell_qdial_pane

0x25bb,	// (0x0007f98c) cell_qdial_pane_g1_ParamLimits

0x25bb,	// (0x0007f98c) cell_qdial_pane_g1

0x25c8,	// (0x0007f999) cell_qdial_pane_g2_ParamLimits

0x25c8,	// (0x0007f999) cell_qdial_pane_g2

0xaa9a,	// (0x00087e6b) cell_qdial_pane_g3_ParamLimits

0xaa9a,	// (0x00087e6b) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0008c547) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0008c547) cell_qdial_pane_g

0x25e6,	// (0x0007f9b7) cell_qdial_pane_t1_ParamLimits

0x25e6,	// (0x0007f9b7) cell_qdial_pane_t1

0x25fe,	// (0x0007f9cf) cell_qdial_pane_t2_ParamLimits

0x25fe,	// (0x0007f9cf) cell_qdial_pane_t2

0x2611,	// (0x0007f9e2) cell_qdial_pane_t3_ParamLimits

0x2611,	// (0x0007f9e2) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0008c550) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0008c550) cell_qdial_pane_t

0xa6c5,	// (0x00087a96) grid_highlight_pane_cp04

0xaaa6,	// (0x00087e77) thumbnail_qdial_pane_ParamLimits

0xaaa6,	// (0x00087e77) thumbnail_qdial_pane

0xab02,	// (0x00087ed3) list_help_pane

0xab0b,	// (0x00087edc) scroll_pane_cp02

0x2624,	// (0x0007f9f5) help_list_pane_t1_ParamLimits

0x2624,	// (0x0007f9f5) help_list_pane_t1

0x264b,	// (0x0007fa1c) bg_notes_pane_g2

0x2653,	// (0x0007fa24) bg_notes_pane_g3

0x265b,	// (0x0007fa2c) notes_bg_pane_g1

0x2663,	// (0x0007fa34) notes_bg_pane_g4

0x266b,	// (0x0007fa3c) notes_bg_pane_g5

0x2673,	// (0x0007fa44) notes_bg_pane_g6

0x267b,	// (0x0007fa4c) notes_bg_pane_g7

0x2683,	// (0x0007fa54) notes_bg_pane_g8

0x268b,	// (0x0007fa5c) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0008c56e) notes_bg_pane_g

0x2693,	// (0x0007fa64) list_notes_text_pane_ParamLimits

0x2693,	// (0x0007fa64) list_notes_text_pane

0xab14,	// (0x00087ee5) list_notes_text_pane_g1

0x0bb4,	// (0x0007df85) list_notes_text_pane_t1

0x26bb,	// (0x0007fa8c) listscroll_cale_week_pane

0x26e7,	// (0x0007fab8) bg_cale_heading_pane

0x2710,	// (0x0007fae1) bg_cale_pane_cp01

0x2732,	// (0x0007fb03) cale_week_corner_pane

0x2751,	// (0x0007fb22) cale_week_day_heading_pane

0x277f,	// (0x0007fb50) cale_week_scroll_pane_g1

0x27a3,	// (0x0007fb74) cale_week_scroll_pane_g2

0x27bb,	// (0x0007fb8c) cale_week_scroll_pane_g3

0x27d3,	// (0x0007fba4) cale_week_scroll_pane_g4

0x27eb,	// (0x0007fbbc) cale_week_scroll_pane_g5

0x2803,	// (0x0007fbd4) cale_week_scroll_pane_g6

0x2823,	// (0x0007fbf4) cale_week_scroll_pane_g7

0x2843,	// (0x0007fc14) cale_week_scroll_pane_g8

0x2863,	// (0x0007fc34) cale_week_scroll_pane_g9

0x2880,	// (0x0007fc51) cale_week_scroll_pane_g10

0x289d,	// (0x0007fc6e) cale_week_scroll_pane_g11

0x28bc,	// (0x0007fc8d) cale_week_scroll_pane_g12

0x28e1,	// (0x0007fcb2) cale_week_scroll_pane_g13

0x290a,	// (0x0007fcdb) cale_week_scroll_pane_g14

0x2933,	// (0x0007fd04) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0008c57d) cale_week_scroll_pane_g

0x297c,	// (0x0007fd4d) cale_week_time_pane

0x299c,	// (0x0007fd6d) grid_cale_week_pane

0xab49,	// (0x00087f1a) scroll_pane_cp08

0x29cd,	// (0x0007fd9e) cell_cale_week_pane_ParamLimits

0x29cd,	// (0x0007fd9e) cell_cale_week_pane

0x2a5d,	// (0x0007fe2e) cale_week_day_heading_pane_t1

0x2a85,	// (0x0007fe56) cale_week_day_heading_pane_t2

0x2ab2,	// (0x0007fe83) cale_week_day_heading_pane_t3

0x2adf,	// (0x0007feb0) cale_week_day_heading_pane_t4

0x2b0c,	// (0x0007fedd) cale_week_day_heading_pane_t5

0x2b39,	// (0x0007ff0a) cale_week_day_heading_pane_t6

0x2b66,	// (0x0007ff37) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0008c59e) cale_week_day_heading_pane_t

0xab66,	// (0x00087f37) bg_cale_side_pane

0x2b8e,	// (0x0007ff5f) cale_week_time_pane_t1

0x2bb2,	// (0x0007ff83) cale_week_time_pane_t2

0x2bd6,	// (0x0007ffa7) cale_week_time_pane_t3

0x2bfa,	// (0x0007ffcb) cale_week_time_pane_t4

0x2c1e,	// (0x0007ffef) cale_week_time_pane_t5

0x2c44,	// (0x00080015) cale_week_time_pane_t6

0x2c6c,	// (0x0008003d) cale_week_time_pane_t7

0x2c98,	// (0x00080069) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0008c5ad) cale_week_time_pane_t

0x2cc8,	// (0x00080099) cell_cale_week_pane_g2

0x2cec,	// (0x000800bd) cell_cale_week_pane_g3_ParamLimits

0x2cec,	// (0x000800bd) cell_cale_week_pane_g3

0xab74,	// (0x00087f45) grid_highlight_pane_cp07

0xab7c,	// (0x00087f4d) listscroll_gms_pane

0xab86,	// (0x00087f57) grid_gms_pane

0xab8f,	// (0x00087f60) listscroll_gms_pane_g1

0xab97,	// (0x00087f68) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0008c5be) listscroll_gms_pane_g

0x2d04,	// (0x000800d5) scroll_pane_cp010

0x2d0f,	// (0x000800e0) cell_gms_pane_ParamLimits

0x2d0f,	// (0x000800e0) cell_gms_pane

0x2d22,	// (0x000800f3) cell_gms_pane_g1

0xab9f,	// (0x00087f70) cell_gms_pane_g2

0xaba7,	// (0x00087f78) cell_gms_pane_g3

0xabb0,	// (0x00087f81) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0008c5c3) cell_gms_pane_g

0xabb9,	// (0x00087f8a) grid_highlight_pane_cp09

0x5054,	// (0x00082425) phob_pre_status_pane_g1

0x505c,	// (0x0008242d) phob_pre_status_pane_g2

0x5064,	// (0x00082435) phob_pre_status_pane_g3

0x506c,	// (0x0008243d) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0008c9ae) phob_pre_status_pane_g

0x507c,	// (0x0008244d) phob_pre_status_pane_t1

0x508c,	// (0x0008245d) phob_pre_status_pane_t2

0x509c,	// (0x0008246d) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0008c9b9) phob_pre_status_pane_t

0xabc1,	// (0x00087f92) bg_list_pane_cp05

0x2d32,	// (0x00080103) grid_vorec_pane

0x2d3c,	// (0x0008010d) vorec_t1

0x2d4a,	// (0x0008011b) vorec_t2

0x2d58,	// (0x00080129) vorec_t3

0x2d66,	// (0x00080137) vorec_t4

0xa21e,	// (0x000875ef) vorec_t5

0xa22c,	// (0x000875fd) vorec_t6

0x0004,

0xf1fb,	// (0x0008c5cc) vorec_t

0xa23a,	// (0x0008760b) wait_bar_pane_cp01

0x2d82,	// (0x00080153) cell_vorec_pane_ParamLimits

0x2d82,	// (0x00080153) cell_vorec_pane

0x2d97,	// (0x00080168) cell_vorec_pane_g1

0xa6c5,	// (0x00087a96) grid_highlight_pane_cp05

0x2daf,	// (0x00080180) cams_zoom_pane

0x2dbb,	// (0x0008018c) image_vga_pane

0x2dca,	// (0x0008019b) main_camera_pane_g1

0x2dd8,	// (0x000801a9) main_camera_pane_g2

0x2de4,	// (0x000801b5) main_camera_pane_g3

0x2df2,	// (0x000801c3) main_camera_pane_g4

0x2e00,	// (0x000801d1) main_camera_pane_g5

0x2e0e,	// (0x000801df) main_camera_pane_g6

0x2e1c,	// (0x000801ed) main_camera_pane_g7

0x0007,

0xf206,	// (0x0008c5d7) main_camera_pane_g

0x2e2a,	// (0x000801fb) main_camera_pane_t1

0x2e3c,	// (0x0008020d) main_camera_pane_t2

0x0001,

0xf217,	// (0x0008c5e8) main_camera_pane_t

0x2e5f,	// (0x00080230) cams_zoom_pane_cp_ParamLimits

0x2e5f,	// (0x00080230) cams_zoom_pane_cp

0x2e83,	// (0x00080254) image_cif_pane_ParamLimits

0x2e83,	// (0x00080254) image_cif_pane

0x2ea1,	// (0x00080272) image_subqcif_pane

0x2eab,	// (0x0008027c) main_video_pane_g1_ParamLimits

0x2eab,	// (0x0008027c) main_video_pane_g1

0x2ecb,	// (0x0008029c) main_video_pane_g2_ParamLimits

0x2ecb,	// (0x0008029c) main_video_pane_g2

0x2efb,	// (0x000802cc) main_video_pane_g3_ParamLimits

0x2efb,	// (0x000802cc) main_video_pane_g3

0x2f24,	// (0x000802f5) main_video_pane_g4_ParamLimits

0x2f24,	// (0x000802f5) main_video_pane_g4

0x2f4d,	// (0x0008031e) main_video_pane_g5_ParamLimits

0x2f4d,	// (0x0008031e) main_video_pane_g5

0xabd5,	// (0x00087fa6) main_video_pane_g6_ParamLimits

0xabd5,	// (0x00087fa6) main_video_pane_g6

0x0006,

0xf21c,	// (0x0008c5ed) main_video_pane_g_ParamLimits

0xf21c,	// (0x0008c5ed) main_video_pane_g

0x2f6f,	// (0x00080340) main_video_pane_t1_ParamLimits

0x2f6f,	// (0x00080340) main_video_pane_t1

0xabef,	// (0x00087fc0) cams_zoom_pane_g1

0xabf8,	// (0x00087fc9) cams_zoom_pane_g2

0xac01,	// (0x00087fd2) cams_zoom_pane_g3

0xac0a,	// (0x00087fdb) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0008c5fc) cams_zoom_pane_g

0x2fb9,	// (0x0008038a) grid_cams_pane

0x2fc7,	// (0x00080398) linegrid_cams_pane

0x2fd3,	// (0x000803a4) cell_cams_pane_ParamLimits

0x2fd3,	// (0x000803a4) cell_cams_pane

0xac13,	// (0x00087fe4) cams_burst_image_pane

0xac1b,	// (0x00087fec) cell_cams_pane_g1

0xa6c5,	// (0x00087a96) grid_highlight_pane_cp03

0xaa6e,	// (0x00087e3f) mp_bg_pane_g1

0xa6c5,	// (0x00087a96) bg_list_pane_cp03

0xc96e,	// (0x00089d3f) bg_mp_pane

0xc976,	// (0x00089d47) grid_mp_pane

0xc97e,	// (0x00089d4f) media_player_g1

0xc988,	// (0x00089d59) media_player_t1

0xc996,	// (0x00089d67) media_player_t2

0xc9a4,	// (0x00089d75) media_player_t3

0xc9b2,	// (0x00089d83) media_player_t4

0xc9c0,	// (0x00089d91) media_player_t5

0xc9ce,	// (0x00089d9f) media_player_t6

0xc9dc,	// (0x00089dad) media_player_t7

0x0006,

0xf5c7,	// (0x0008c998) media_player_t

0xc9ea,	// (0x00089dbb) wait_bar_pane_cp02

0xf5ac,	// (0x0008c97d) main_usb_pane_t

0x504b,	// (0x0008241c) cell_mp_pane

0xaa6e,	// (0x00087e3f) cell_mp_pane_g1

0xa6c5,	// (0x00087a96) grid_highlight_pane_cp06

0xac23,	// (0x00087ff4) grid_skin_colour_pane

0xac2b,	// (0x00087ffc) list_highlight_pane_cp03

0x2fe8,	// (0x000803b9) skin_g1

0xac33,	// (0x00088004) skin_t1

0xac42,	// (0x00088013) skin_t2

0x0001,

0xf260,	// (0x0008c631) skin_t

0x2ff2,	// (0x000803c3) cell_skin_colour_pane_ParamLimits

0x2ff2,	// (0x000803c3) cell_skin_colour_pane

0xac50,	// (0x00088021) cell_skin_colour_pane_g1

0x3072,	// (0x00080443) call_video_g1_ParamLimits

0x3072,	// (0x00080443) call_video_g1

0x3082,	// (0x00080453) call_video_g2_ParamLimits

0x3082,	// (0x00080453) call_video_g2

0x0001,

0xf265,	// (0x0008c636) call_video_g_ParamLimits

0xf265,	// (0x0008c636) call_video_g

0x30d2,	// (0x000804a3) call_video_uplink_pane_cp1_ParamLimits

0x30d2,	// (0x000804a3) call_video_uplink_pane_cp1

0xac62,	// (0x00088033) call_video_uplink_pane_cp2

0x31a0,	// (0x00080571) video_down_crop_pane_ParamLimits

0x31a0,	// (0x00080571) video_down_crop_pane

0x3292,	// (0x00080663) video_down_pane_ParamLimits

0x3292,	// (0x00080663) video_down_pane

0xac6a,	// (0x0008803b) video_down_subqcif_pane_ParamLimits

0xac6a,	// (0x0008803b) video_down_subqcif_pane

0xac84,	// (0x00088055) video_down_subqcif_pane_cp_ParamLimits

0xac84,	// (0x00088055) video_down_subqcif_pane_cp

0xacac,	// (0x0008807d) im_reading_pane_ParamLimits

0xacac,	// (0x0008807d) im_reading_pane

0x33af,	// (0x00080780) im_writing_pane_ParamLimits

0x33af,	// (0x00080780) im_writing_pane

0x33cd,	// (0x0008079e) im_reading_pane_t1

0xacc6,	// (0x00088097) list_im_pane

0xacd7,	// (0x000880a8) scroll_pane_cp07

0x340f,	// (0x000807e0) im_writing_pane_t1_ParamLimits

0x340f,	// (0x000807e0) im_writing_pane_t1

0xacf0,	// (0x000880c1) im_writing_pane_t2_ParamLimits

0xacf0,	// (0x000880c1) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0008c640) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0008c640) im_writing_pane_t

0xa6c5,	// (0x00087a96) input_focus_pane_cp04

0xa6c5,	// (0x00087a96) input_focus_pane_cp05

0x3421,	// (0x000807f2) list_im_single_pane_ParamLimits

0x3421,	// (0x000807f2) list_im_single_pane

0x343a,	// (0x0008080b) list_single_im_pane_t1

0x500f,	// (0x000823e0) blid_accuracy_pane

0x5017,	// (0x000823e8) blid_compass_pane

0x5021,	// (0x000823f2) main_location_t1

0x502f,	// (0x00082400) main_location_t2

0x503d,	// (0x0008240e) main_location_t3

0x0002,

0xf5d6,	// (0x0008c9a7) main_location_t

0xa6c5,	// (0x00087a96) aid_levels_location

0xaa6e,	// (0x00087e3f) blid_accuracy_pane_g1

0xaa6e,	// (0x00087e3f) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0008c6a2) blid_accuracy_pane_g

0xad5f,	// (0x00088130) wml_content_pane

0xad9d,	// (0x0008816e) wml_button_pane_ParamLimits

0xad9d,	// (0x0008816e) wml_button_pane

0x3449,	// (0x0008081a) wml_list_single_large_pane_ParamLimits

0x3449,	// (0x0008081a) wml_list_single_large_pane

0x346b,	// (0x0008083c) wml_list_single_medium_pane_ParamLimits

0x346b,	// (0x0008083c) wml_list_single_medium_pane

0x348e,	// (0x0008085f) wml_list_single_small_pane_ParamLimits

0x348e,	// (0x0008085f) wml_list_single_small_pane

0xadb1,	// (0x00088182) wml_selection_box_pane_ParamLimits

0xadb1,	// (0x00088182) wml_selection_box_pane

0xadc4,	// (0x00088195) wml_list_single_pane_t1

0xadd3,	// (0x000881a4) wml_list_single_medium_pane_t1

0xade2,	// (0x000881b3) wml_list_single_large_pane_t1

0xadf1,	// (0x000881c2) input_focus_pane_cp02_ParamLimits

0xadf1,	// (0x000881c2) input_focus_pane_cp02

0xae04,	// (0x000881d5) wml_selection_box_pane_g1

0xae0d,	// (0x000881de) wml_selection_box_pane_t1_ParamLimits

0xae0d,	// (0x000881de) wml_selection_box_pane_t1

0xa920,	// (0x00087cf1) bg_wml_button_pane_ParamLimits

0xa920,	// (0x00087cf1) bg_wml_button_pane

0xae25,	// (0x000881f6) wml_button_pane_g1

0xae2d,	// (0x000881fe) wml_button_pane_t1

0xae25,	// (0x000881f6) wml_button_bg_pane_g1

0xae3d,	// (0x0008820e) wml_button_bg_pane_g2

0xae45,	// (0x00088216) wml_button_bg_pane_g3

0xae4d,	// (0x0008821e) wml_button_bg_pane_g4

0xae55,	// (0x00088226) wml_button_bg_pane_g5

0xae5d,	// (0x0008822e) wml_button_bg_pane_g6

0xae65,	// (0x00088236) wml_button_bg_pane_g7

0xae6d,	// (0x0008823e) wml_button_bg_pane_g8

0xae75,	// (0x00088246) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0008c645) wml_button_bg_pane_g

0x34b6,	// (0x00080887) bg_list_pane_cp02

0xae7d,	// (0x0008824e) mce_header_pane_ParamLimits

0xae7d,	// (0x0008824e) mce_header_pane

0xae93,	// (0x00088264) mce_icon_pane

0xae93,	// (0x00088264) mce_image_pane

0xae9c,	// (0x0008826d) mce_text_pane_ParamLimits

0xae9c,	// (0x0008826d) mce_text_pane

0x34c0,	// (0x00080891) scroll_pane_cp03

0xad95,	// (0x00088166) scroll_pane_cp04

0xaeaf,	// (0x00088280) scroll_pane_cp05_ParamLimits

0xaeaf,	// (0x00088280) scroll_pane_cp05

0x34ca,	// (0x0008089b) mce_header_field_pane_ParamLimits

0x34ca,	// (0x0008089b) mce_header_field_pane

0x34ec,	// (0x000808bd) mce_header_field_pane_2_ParamLimits

0x34ec,	// (0x000808bd) mce_header_field_pane_2

0x3502,	// (0x000808d3) mce_header_field_pane_3

0x350a,	// (0x000808db) list_single_mce_message_pane_ParamLimits

0x350a,	// (0x000808db) list_single_mce_message_pane

0x3529,	// (0x000808fa) list_single_mce_smart_pane_ParamLimits

0x3529,	// (0x000808fa) list_single_mce_smart_pane

0xaebb,	// (0x0008828c) input_focus_pane_cp03

0xaec4,	// (0x00088295) list_header_data_pane

0x3553,	// (0x00080924) mce_header_field_pane_t1

0x3563,	// (0x00080934) list_single_mce_header_pane_ParamLimits

0x3563,	// (0x00080934) list_single_mce_header_pane

0xaecc,	// (0x0008829d) list_single_mce_header_pane_t1

0xaedb,	// (0x000882ac) list_single_mce_message_pane_g1

0xaee3,	// (0x000882b4) list_single_mce_message_pane_t1

0x35a7,	// (0x00080978) bg_cale_heading_pane_cp01_ParamLimits

0x35a7,	// (0x00080978) bg_cale_heading_pane_cp01

0xaef1,	// (0x000882c2) bg_cale_pane_cp02_ParamLimits

0xaef1,	// (0x000882c2) bg_cale_pane_cp02

0x35f9,	// (0x000809ca) cale_month_corner_pane

0x3618,	// (0x000809e9) cale_month_day_heading_pane_ParamLimits

0x3618,	// (0x000809e9) cale_month_day_heading_pane

0x367a,	// (0x00080a4b) cale_month_pane_g1_ParamLimits

0x367a,	// (0x00080a4b) cale_month_pane_g1

0x36c1,	// (0x00080a92) cale_month_pane_g2_ParamLimits

0x36c1,	// (0x00080a92) cale_month_pane_g2

0x36f9,	// (0x00080aca) cale_month_pane_g3_ParamLimits

0x36f9,	// (0x00080aca) cale_month_pane_g3

0x374d,	// (0x00080b1e) cale_month_pane_g4_ParamLimits

0x374d,	// (0x00080b1e) cale_month_pane_g4

0x37a1,	// (0x00080b72) cale_month_pane_g5_ParamLimits

0x37a1,	// (0x00080b72) cale_month_pane_g5

0x37f5,	// (0x00080bc6) cale_month_pane_g6_ParamLimits

0x37f5,	// (0x00080bc6) cale_month_pane_g6

0x3859,	// (0x00080c2a) cale_month_pane_g7_ParamLimits

0x3859,	// (0x00080c2a) cale_month_pane_g7

0x38bd,	// (0x00080c8e) cale_month_pane_g8_ParamLimits

0x38bd,	// (0x00080c8e) cale_month_pane_g8

0x3921,	// (0x00080cf2) cale_month_pane_g9_ParamLimits

0x3921,	// (0x00080cf2) cale_month_pane_g9

0x397b,	// (0x00080d4c) cale_month_pane_g10_ParamLimits

0x397b,	// (0x00080d4c) cale_month_pane_g10

0x39cd,	// (0x00080d9e) cale_month_pane_g11_ParamLimits

0x39cd,	// (0x00080d9e) cale_month_pane_g11

0x3a1b,	// (0x00080dec) cale_month_pane_g12_ParamLimits

0x3a1b,	// (0x00080dec) cale_month_pane_g12

0x3a6b,	// (0x00080e3c) cale_month_pane_g13_ParamLimits

0x3a6b,	// (0x00080e3c) cale_month_pane_g13

0x000c,

0xf287,	// (0x0008c658) cale_month_pane_g_ParamLimits

0xf287,	// (0x0008c658) cale_month_pane_g

0x3abb,	// (0x00080e8c) cale_month_week_pane

0x3adb,	// (0x00080eac) grid_cale_month_pane_ParamLimits

0x3adb,	// (0x00080eac) grid_cale_month_pane

0x3b34,	// (0x00080f05) cale_month_day_heading_pane_t1

0x3bb6,	// (0x00080f87) cale_month_day_heading_pane_t2

0x3c2f,	// (0x00081000) cale_month_day_heading_pane_t3

0x3ca8,	// (0x00081079) cale_month_day_heading_pane_t4

0x3d21,	// (0x000810f2) cale_month_day_heading_pane_t5

0x3da2,	// (0x00081173) cale_month_day_heading_pane_t6

0x3e2b,	// (0x000811fc) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0008c673) cale_month_day_heading_pane_t

0xab66,	// (0x00087f37) bg_cale_side_pane_cp01

0x3eb4,	// (0x00081285) cale_month_week_pane_t1

0x3ecd,	// (0x0008129e) cale_month_week_pane_t2

0x3ee6,	// (0x000812b7) cale_month_week_pane_t3

0x3eff,	// (0x000812d0) cale_month_week_pane_t4

0x3f18,	// (0x000812e9) cale_month_week_pane_t5

0x3f35,	// (0x00081306) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0008c682) cale_month_week_pane_t

0x3f58,	// (0x00081329) cell_cale_month_pane_ParamLimits

0x3f58,	// (0x00081329) cell_cale_month_pane

0x4086,	// (0x00081457) cell_cale_month_pane_g1

0x4092,	// (0x00081463) cell_cale_month_pane_t1_ParamLimits

0x4092,	// (0x00081463) cell_cale_month_pane_t1

0xab74,	// (0x00087f45) grid_highlight_pane_cp08

0xaa6e,	// (0x00087e3f) main_smil_g1

0x40be,	// (0x0008148f) smil_status_pane

0xaf30,	// (0x00088301) smil_text_pane

0xc88c,	// (0x00089c5d) bg_popup_call3_rect_pane_g8

0xc894,	// (0x00089c65) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0008c93b) bg_popup_call3_rect_pane_g

0xcaf2,	// (0x00089ec3) smil_status_volume_pane_g1

0xaf3a,	// (0x0008830b) smil_status_pane_t1

0x5436,	// (0x00082807) volume_smil_pane

0xaf51,	// (0x00088322) list_smil_text_pane

0x40d1,	// (0x000814a2) scroll_pane_cp011

0x40dc,	// (0x000814ad) smil_text_list_pane_t1_ParamLimits

0x40dc,	// (0x000814ad) smil_text_list_pane_t1

0x4130,	// (0x00081501) aid_volume_smil_ParamLimits

0x4130,	// (0x00081501) aid_volume_smil

0xaa6e,	// (0x00087e3f) smil_volume_pane_g1

0xaa6e,	// (0x00087e3f) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0008c6a2) smil_volume_pane_g

0x26bb,	// (0x0007fa8c) listscroll_cale_day_pane

0xaf5b,	// (0x0008832c) bg_cale_pane

0xaf73,	// (0x00088344) list_cale_pane

0xaf96,	// (0x00088367) scroll_pane_cp09

0xafa7,	// (0x00088378) cale_bg_pane_g1

0xafaf,	// (0x00088380) cale_bg_pane_g2

0xafb7,	// (0x00088388) cale_bg_pane_g3

0xafbf,	// (0x00088390) cale_bg_pane_g4

0xafc7,	// (0x00088398) cale_bg_pane_g5

0xafcf,	// (0x000883a0) cale_bg_pane_g6

0xafd7,	// (0x000883a8) cale_bg_pane_g7

0xafdf,	// (0x000883b0) cale_bg_pane_g8

0xafe7,	// (0x000883b8) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0008c6a7) cale_bg_pane_g

0x415a,	// (0x0008152b) list_cale_time_pane_ParamLimits

0x415a,	// (0x0008152b) list_cale_time_pane

0xafef,	// (0x000883c0) list_cale_time_pane_g1_ParamLimits

0xafef,	// (0x000883c0) list_cale_time_pane_g1

0xaffb,	// (0x000883cc) list_cale_time_pane_g2_ParamLimits

0xaffb,	// (0x000883cc) list_cale_time_pane_g2

0x4171,	// (0x00081542) list_cale_time_pane_g3_ParamLimits

0x4171,	// (0x00081542) list_cale_time_pane_g3

0x417f,	// (0x00081550) list_cale_time_pane_g4_ParamLimits

0x417f,	// (0x00081550) list_cale_time_pane_g4

0x418d,	// (0x0008155e) list_cale_time_pane_g5_ParamLimits

0x418d,	// (0x0008155e) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0008c6ba) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0008c6ba) list_cale_time_pane_g

0xb015,	// (0x000883e6) list_cale_time_pane_t1_ParamLimits

0xb015,	// (0x000883e6) list_cale_time_pane_t1

0xb03d,	// (0x0008840e) list_cale_time_pane_t2_ParamLimits

0xb03d,	// (0x0008840e) list_cale_time_pane_t2

0x4470,	// (0x00081841) aid_blid_cardinal_pane

0x44b2,	// (0x00081883) compass_pane_t4

0xb065,	// (0x00088436) list_cale_time_pane_t4_ParamLimits

0xb065,	// (0x00088436) list_cale_time_pane_t4

0x44c0,	// (0x00081891) compass_pane_t5

0x44d0,	// (0x000818a1) compass_pane_t6

0x44de,	// (0x000818af) compass_pane_t7

0xb4f7,	// (0x000888c8) navi_pane_cc_t1

0xb6d6,	// (0x00088aa7) aid_phob_thumbnail_center_pane

0x4b0b,	// (0x00081edc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0008c6c7) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0008c6c7) list_cale_time_pane_t

0xa31c,	// (0x000876ed) bg_popup_window_pane_cp02_ParamLimits

0xa31c,	// (0x000876ed) bg_popup_window_pane_cp02

0xb08d,	// (0x0008845e) heading_pane_cp01_ParamLimits

0xb08d,	// (0x0008845e) heading_pane_cp01

0xb099,	// (0x0008846a) loc_req_pane_ParamLimits

0xb099,	// (0x0008846a) loc_req_pane

0xb0a9,	// (0x0008847a) loc_type_pane_ParamLimits

0xb0a9,	// (0x0008847a) loc_type_pane

0xb0bb,	// (0x0008848c) loc_type_pane_t1_ParamLimits

0xb0bb,	// (0x0008848c) loc_type_pane_t1

0xb0cd,	// (0x0008849e) loc_type_pane_t2_ParamLimits

0xb0cd,	// (0x0008849e) loc_type_pane_t2

0xb0df,	// (0x000884b0) loc_type_pane_t3_ParamLimits

0xb0df,	// (0x000884b0) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0008c6ce) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0008c6ce) loc_type_pane_t

0xb0f1,	// (0x000884c2) list_loc_req_pane

0xb0fb,	// (0x000884cc) scroll_pane_cp012

0x419b,	// (0x0008156c) list_single_loc_request_popup_menu_pane_ParamLimits

0x419b,	// (0x0008156c) list_single_loc_request_popup_menu_pane

0xb106,	// (0x000884d7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb106,	// (0x000884d7) list_single_loc_request_popup_menu_pane_g1

0xb112,	// (0x000884e3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb112,	// (0x000884e3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0008c6d5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0008c6d5) list_single_loc_request_popup_menu_pane_g

0xb11e,	// (0x000884ef) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb11e,	// (0x000884ef) list_single_loc_request_popup_menu_pane_t1

0x41ad,	// (0x0008157e) bg_popup_window_pane_cp03_ParamLimits

0x41ad,	// (0x0008157e) bg_popup_window_pane_cp03

0x41bb,	// (0x0008158c) heading_loc_req_pane_ParamLimits

0x41bb,	// (0x0008158c) heading_loc_req_pane

0x41c7,	// (0x00081598) popup_dyc_status_message_window_g1_ParamLimits

0x41c7,	// (0x00081598) popup_dyc_status_message_window_g1

0x41d3,	// (0x000815a4) popup_dyc_status_message_window_t1_ParamLimits

0x41d3,	// (0x000815a4) popup_dyc_status_message_window_t1

0x41e5,	// (0x000815b6) popup_dyc_status_message_window_t2_ParamLimits

0x41e5,	// (0x000815b6) popup_dyc_status_message_window_t2

0x41f7,	// (0x000815c8) popup_dyc_status_message_window_t3_ParamLimits

0x41f7,	// (0x000815c8) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0008c6da) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0008c6da) popup_dyc_status_message_window_t

0xa6c5,	// (0x00087a96) bg_heading_pane_cp01

0xb134,	// (0x00088505) heading_loc_req_pane_g1

0xb13c,	// (0x0008850d) heading_loc_req_pane_g2

0xb144,	// (0x00088515) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0008c6e1) heading_loc_req_pane_g

0xb14c,	// (0x0008851d) heading_loc_req_pane_t1

0xb15c,	// (0x0008852d) bg_popup_sub_pane_cp01_ParamLimits

0xb15c,	// (0x0008852d) bg_popup_sub_pane_cp01

0xb16a,	// (0x0008853b) popup_cale_events_window_g1_ParamLimits

0xb16a,	// (0x0008853b) popup_cale_events_window_g1

0xb18a,	// (0x0008855b) popup_cale_events_window_g2_ParamLimits

0xb18a,	// (0x0008855b) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0008c715) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0008c715) popup_cale_events_window_g

0xb1aa,	// (0x0008857b) popup_cale_events_window_t1_ParamLimits

0xb1aa,	// (0x0008857b) popup_cale_events_window_t1

0xb1bc,	// (0x0008858d) popup_cale_events_window_t2_ParamLimits

0xb1bc,	// (0x0008858d) popup_cale_events_window_t2

0xb1fa,	// (0x000885cb) popup_cale_events_window_t3_ParamLimits

0xb1fa,	// (0x000885cb) popup_cale_events_window_t3

0xb234,	// (0x00088605) popup_cale_events_window_t4_ParamLimits

0xb234,	// (0x00088605) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0008c71a) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0008c71a) popup_cale_events_window_t

0x4221,	// (0x000815f2) call_type_pane

0xb3d9,	// (0x000887aa) popup_call_status_window_g1

0x422d,	// (0x000815fe) popup_call_status_window_g2

0x4239,	// (0x0008160a) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0008c723) popup_call_status_window_g

0xb26a,	// (0x0008863b) call_type_pane_g1

0xb273,	// (0x00088644) call_type_pane_g2

0x0001,

0xf359,	// (0x0008c72a) call_type_pane_g

0xa6c5,	// (0x00087a96) bg_popup_sub_pane_cp02

0xb27c,	// (0x0008864d) listscroll_popup_wml_pane

0xb284,	// (0x00088655) list_wml_pane

0xb28e,	// (0x0008865f) scroll_pane_cp013

0xb299,	// (0x0008866a) list_single_graphic_popup_wml_pane_ParamLimits

0xb299,	// (0x0008866a) list_single_graphic_popup_wml_pane

0xaa6e,	// (0x00087e3f) list_single_graphic_popup_wml_pane_g1

0xb2ad,	// (0x0008867e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0008c72f) list_single_graphic_popup_wml_pane_g

0xb2b5,	// (0x00088686) list_single_graphic_popup_wml_pane_t1

0xb2cb,	// (0x0008869c) aid_call_pane

0xa918,	// (0x00087ce9) popup_clock_analogue_window_g1

0xa918,	// (0x00087ce9) popup_clock_analogue_window_g2

0x4245,	// (0x00081616) popup_clock_analogue_window_g3

0x4245,	// (0x00081616) popup_clock_analogue_window_g4

0xaa6e,	// (0x00087e3f) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0008c734) popup_clock_analogue_window_g

0x424d,	// (0x0008161e) popup_clock_analogue_window_t1

0x425b,	// (0x0008162c) clock_digital_number_pane_ParamLimits

0x425b,	// (0x0008162c) clock_digital_number_pane

0x4267,	// (0x00081638) clock_digital_number_pane_cp02_ParamLimits

0x4267,	// (0x00081638) clock_digital_number_pane_cp02

0x4273,	// (0x00081644) clock_digital_number_pane_cp03_ParamLimits

0x4273,	// (0x00081644) clock_digital_number_pane_cp03

0x427f,	// (0x00081650) clock_digital_number_pane_cp04_ParamLimits

0x427f,	// (0x00081650) clock_digital_number_pane_cp04

0x428b,	// (0x0008165c) clock_digital_separator_pane_ParamLimits

0x428b,	// (0x0008165c) clock_digital_separator_pane

0x4297,	// (0x00081668) popup_clock_digital_window_t1

0xaa6e,	// (0x00087e3f) clock_digital_number_pane_g1

0xaa6e,	// (0x00087e3f) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0008c6a2) clock_digital_number_pane_g

0xaa6e,	// (0x00087e3f) clock_digital_separator_pane_g1

0xaa6e,	// (0x00087e3f) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0008c6a2) clock_digital_separator_pane_g

0xa6c5,	// (0x00087a96) bg_popup_window_pane_cp04

0xb2d3,	// (0x000886a4) heading_pane_cp03

0xb2db,	// (0x000886ac) listscroll_popup_gms_pane

0xb2e3,	// (0x000886b4) grid_large_graphic_popup_pane

0xb2ed,	// (0x000886be) listscroll_popup_gms_pane_g1

0xb2f5,	// (0x000886c6) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0008c73f) listscroll_popup_gms_pane_g

0xad95,	// (0x00088166) scroll_pane_cp014

0x42b4,	// (0x00081685) cell_large_graphic_popup_pane_ParamLimits

0x42b4,	// (0x00081685) cell_large_graphic_popup_pane

0x42ce,	// (0x0008169f) cell_large_graphic_popup_pane_g1_ParamLimits

0x42ce,	// (0x0008169f) cell_large_graphic_popup_pane_g1

0xb2fd,	// (0x000886ce) cell_large_graphic_popup_pane_g2_ParamLimits

0xb2fd,	// (0x000886ce) cell_large_graphic_popup_pane_g2

0xb309,	// (0x000886da) cell_large_graphic_popup_pane_g3_ParamLimits

0xb309,	// (0x000886da) cell_large_graphic_popup_pane_g3

0xb316,	// (0x000886e7) cell_large_graphic_popup_pane_g4_ParamLimits

0xb316,	// (0x000886e7) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0008c744) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0008c744) cell_large_graphic_popup_pane_g

0xb326,	// (0x000886f7) grid_highlight_pane_cp010

0xaa6e,	// (0x00087e3f) bg_popup_call_pane_g1

0xb330,	// (0x00088701) list_single_graphic_popup_conf_pane_ParamLimits

0xb330,	// (0x00088701) list_single_graphic_popup_conf_pane

0xb342,	// (0x00088713) list_highlight_pane_cp01

0xb34b,	// (0x0008871c) list_single_graphic_popup_conf_pane_g1

0xb353,	// (0x00088724) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0008c74d) list_single_graphic_popup_conf_pane_g

0xb35b,	// (0x0008872c) list_single_graphic_popup_conf_pane_t1

0xb369,	// (0x0008873a) linegrid_cams_pane_g1

0x42da,	// (0x000816ab) linegrid_cams_pane_g2

0xaba7,	// (0x00087f78) linegrid_cams_pane_g3

0xb372,	// (0x00088743) linegrid_cams_pane_g4

0x42e3,	// (0x000816b4) linegrid_cams_pane_g5

0x42ec,	// (0x000816bd) linegrid_cams_pane_g6

0xabb0,	// (0x00087f81) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0008c752) linegrid_cams_pane_g

0xb37b,	// (0x0008874c) popup_clock_analogue_window

0xb37b,	// (0x0008874c) popup_clock_digital_window

0xa6c5,	// (0x00087a96) popup_phob_thumbnail_window

0xaa6e,	// (0x00087e3f) call_video_uplink_pane_g1

0xb384,	// (0x00088755) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0008c761) call_video_uplink_pane_g

0xb38c,	// (0x0008875d) video_uplink_pane

0xb394,	// (0x00088765) mce_image_pane_g1

0x42f7,	// (0x000816c8) mce_image_pane_g2

0x4301,	// (0x000816d2) mce_image_pane_g3

0x430b,	// (0x000816dc) mce_image_pane_g4

0x4313,	// (0x000816e4) mce_image_pane_g5

0x0004,

0xf395,	// (0x0008c766) mce_image_pane_g

0xb39e,	// (0x0008876f) control_top_pane_stacon_cp01_ParamLimits

0xb39e,	// (0x0008876f) control_top_pane_stacon_cp01

0xb3b2,	// (0x00088783) uni_indicator_pane_stacon_cp01_ParamLimits

0xb3b2,	// (0x00088783) uni_indicator_pane_stacon_cp01

0xb3c3,	// (0x00088794) bg_popup_sub_pane_cp03

0x431b,	// (0x000816ec) chi_dic_find_pane

0x4323,	// (0x000816f4) listscroll_chi_dic_pane

0x432c,	// (0x000816fd) main_pane_chidic_g1

0x433f,	// (0x00081710) chi_dic_find_pane_t1

0xb3e7,	// (0x000887b8) find_chidic_pane

0xb3f0,	// (0x000887c1) chi_dic_list_pane_ParamLimits

0xb3f0,	// (0x000887c1) chi_dic_list_pane

0xb401,	// (0x000887d2) scroll_pane_cp020

0x434d,	// (0x0008171e) find_chidic_pane_t1

0xa6c5,	// (0x00087a96) input_focus_pane_cp06

0xad38,	// (0x00088109) list_chi_dic_pane_ParamLimits

0xad38,	// (0x00088109) list_chi_dic_pane

0x435c,	// (0x0008172d) list_chi_dic_pane_t1_ParamLimits

0x435c,	// (0x0008172d) list_chi_dic_pane_t1

0xa6c5,	// (0x00087a96) list_highlight_pane_cp020

0xb409,	// (0x000887da) bg_cale_heading_pane_g1

0x436f,	// (0x00081740) bg_cale_heading_pane_g2

0x4377,	// (0x00081748) bg_cale_heading_pane_g3

0x437f,	// (0x00081750) bg_cale_heading_pane_g4

0x4389,	// (0x0008175a) bg_cale_heading_pane_g5

0x4393,	// (0x00081764) bg_cale_heading_pane_g6

0x439b,	// (0x0008176c) bg_cale_heading_pane_g7

0x43a3,	// (0x00081774) bg_cale_heading_pane_g8

0x43ad,	// (0x0008177e) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0008c771) bg_cale_heading_pane_g

0xb409,	// (0x000887da) bg_cale_side_pane_g1

0x43b7,	// (0x00081788) bg_cale_side_pane_g2

0x43c1,	// (0x00081792) bg_cale_side_pane_g3

0x43cb,	// (0x0008179c) bg_cale_side_pane_g4

0x43d5,	// (0x000817a6) bg_cale_side_pane_g5

0x43df,	// (0x000817b0) bg_cale_side_pane_g6

0x43e9,	// (0x000817ba) bg_cale_side_pane_g7

0x43f3,	// (0x000817c4) bg_cale_side_pane_g8

0x43fb,	// (0x000817cc) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0008c784) bg_cale_side_pane_g

0x4403,	// (0x000817d4) popup_call_status_window_ParamLimits

0x4403,	// (0x000817d4) popup_call_status_window

0xb411,	// (0x000887e2) stacon_top_pane

0xb419,	// (0x000887ea) status_pane_ParamLimits

0xb419,	// (0x000887ea) status_pane

0xb42e,	// (0x000887ff) status_small_pane

0xb436,	// (0x00088807) control_pane

0xa6c5,	// (0x00087a96) stacon_bottom_pane

0xb43e,	// (0x0008880f) list_single_mce_smart_pane_t1_ParamLimits

0xb43e,	// (0x0008880f) list_single_mce_smart_pane_t1

0xb451,	// (0x00088822) list_single_mce_smart_pane_t2_ParamLimits

0xb451,	// (0x00088822) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0008c797) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0008c797) list_single_mce_smart_pane_t

0x440f,	// (0x000817e0) compass_pane

0x441a,	// (0x000817eb) main_location2_pane_t1

0x4430,	// (0x00081801) main_location2_pane_t2

0x4446,	// (0x00081817) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0008c79c) main_location2_pane_t

0xb470,	// (0x00088841) compass_pane_g1_ParamLimits

0xb470,	// (0x00088841) compass_pane_g1

0x4494,	// (0x00081865) compass_pane_t1

0x44a3,	// (0x00081874) compass_pane_t2

0x0005,

0xf3d4,	// (0x0008c7a5) compass_pane_t

0x44ee,	// (0x000818bf) text_secondary_cp61

0xb4ee,	// (0x000888bf) navi_pane_cams_g5

0xb56a,	// (0x0008893b) navi_pane_im_t1

0xb578,	// (0x00088949) navi_pane_mp_g1_ParamLimits

0xb578,	// (0x00088949) navi_pane_mp_g1

0xb58c,	// (0x0008895d) navi_pane_mp_g2_ParamLimits

0xb58c,	// (0x0008895d) navi_pane_mp_g2

0xb598,	// (0x00088969) navi_pane_mp_g3_ParamLimits

0xb598,	// (0x00088969) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0008c7b9) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0008c7b9) navi_pane_mp_g

0xb5a4,	// (0x00088975) navi_pane_mp_t1

0xb5b2,	// (0x00088983) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0008c7c0) navi_pane_mp_t

0xb61f,	// (0x000889f0) navi_pane_vt_g1

0xb5a4,	// (0x00088975) navi_pane_vt_t1

0xb627,	// (0x000889f8) navi_slider_pane

0xabc1,	// (0x00087f92) zooming_pane

0xb637,	// (0x00088a08) navi_slider_pane_g1

0x4529,	// (0x000818fa) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0008c7c7) navi_slider_pane_g

0xb65b,	// (0x00088a2c) aid_levels_zoom

0xb663,	// (0x00088a34) zooming_pane_g1

0xb66b,	// (0x00088a3c) zooming_pane_g2

0xb66b,	// (0x00088a3c) zooming_pane_g3

0x0002,

0xf405,	// (0x0008c7d6) zooming_pane_g

0xb673,	// (0x00088a44) level_10_zoom

0xb67c,	// (0x00088a4d) level_11_zoom

0xb685,	// (0x00088a56) level_1_zoom

0xb68e,	// (0x00088a5f) level_2_zoom

0xb697,	// (0x00088a68) level_3_zoom

0xb6a0,	// (0x00088a71) level_4_zoom

0xb6a9,	// (0x00088a7a) level_5_zoom

0xb6b2,	// (0x00088a83) level_6_zoom

0xb6bb,	// (0x00088a8c) level_7_zoom

0xb6c4,	// (0x00088a95) level_8_zoom

0xb6cd,	// (0x00088a9e) level_9_zoom

0xb6de,	// (0x00088aaf) popup_phob_thumbnail_window_g1

0xb6e6,	// (0x00088ab7) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0008c7dd) popup_phob_thumbnail_window_g

0xc9f2,	// (0x00089dc3) level_1_location

0xc9fa,	// (0x00089dcb) level_2_location

0xca02,	// (0x00089dd3) level_3_location

0xca0a,	// (0x00089ddb) level_4_location

0xabc1,	// (0x00087f92) level_5_location

0x453b,	// (0x0008190c) mce_icon_pane_g1

0x4543,	// (0x00081914) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0008c7e2) mce_icon_pane_g

0x454b,	// (0x0008191c) main_mup_pane_g1_ParamLimits

0x454b,	// (0x0008191c) main_mup_pane_g1

0x4563,	// (0x00081934) main_mup_pane_g2_ParamLimits

0x4563,	// (0x00081934) main_mup_pane_g2

0x457f,	// (0x00081950) main_mup_pane_g3_ParamLimits

0x457f,	// (0x00081950) main_mup_pane_g3

0x459b,	// (0x0008196c) main_mup_pane_g4_ParamLimits

0x459b,	// (0x0008196c) main_mup_pane_g4

0x45af,	// (0x00081980) main_mup_pane_g5_ParamLimits

0x45af,	// (0x00081980) main_mup_pane_g5

0x45d0,	// (0x000819a1) main_mup_pane_g6_ParamLimits

0x45d0,	// (0x000819a1) main_mup_pane_g6

0x45f0,	// (0x000819c1) main_mup_pane_g7_ParamLimits

0x45f0,	// (0x000819c1) main_mup_pane_g7

0x4614,	// (0x000819e5) main_mup_pane_g8_ParamLimits

0x4614,	// (0x000819e5) main_mup_pane_g8

0x4638,	// (0x00081a09) main_mup_pane_g9_ParamLimits

0x4638,	// (0x00081a09) main_mup_pane_g9

0x465b,	// (0x00081a2c) main_mup_pane_g10_ParamLimits

0x465b,	// (0x00081a2c) main_mup_pane_g10

0x467e,	// (0x00081a4f) main_mup_pane_g11_ParamLimits

0x467e,	// (0x00081a4f) main_mup_pane_g11

0x469e,	// (0x00081a6f) main_mup_pane_g12_ParamLimits

0x469e,	// (0x00081a6f) main_mup_pane_g12

0x46ac,	// (0x00081a7d) main_mup_pane_g13_ParamLimits

0x46ac,	// (0x00081a7d) main_mup_pane_g13

0x000c,

0xf416,	// (0x0008c7e7) main_mup_pane_g_ParamLimits

0xf416,	// (0x0008c7e7) main_mup_pane_g

0x46c2,	// (0x00081a93) main_mup_pane_t1_ParamLimits

0x46c2,	// (0x00081a93) main_mup_pane_t1

0x46e1,	// (0x00081ab2) main_mup_pane_t2_ParamLimits

0x46e1,	// (0x00081ab2) main_mup_pane_t2

0x46fb,	// (0x00081acc) main_mup_pane_t3_ParamLimits

0x46fb,	// (0x00081acc) main_mup_pane_t3

0x4715,	// (0x00081ae6) main_mup_pane_t4_ParamLimits

0x4715,	// (0x00081ae6) main_mup_pane_t4

0x4727,	// (0x00081af8) main_mup_pane_t5_ParamLimits

0x4727,	// (0x00081af8) main_mup_pane_t5

0x4739,	// (0x00081b0a) main_mup_pane_t6_ParamLimits

0x4739,	// (0x00081b0a) main_mup_pane_t6

0x0005,

0xf431,	// (0x0008c802) main_mup_pane_t_ParamLimits

0xf431,	// (0x0008c802) main_mup_pane_t

0x474f,	// (0x00081b20) mup_progress_pane_ParamLimits

0x474f,	// (0x00081b20) mup_progress_pane

0x475b,	// (0x00081b2c) mup_visualizer_pane_ParamLimits

0x475b,	// (0x00081b2c) mup_visualizer_pane

0x4799,	// (0x00081b6a) mup_volume_pane_ParamLimits

0x4799,	// (0x00081b6a) mup_volume_pane

0xb3d9,	// (0x000887aa) mup_visualizer_pane_g1_ParamLimits

0xb3d9,	// (0x000887aa) mup_visualizer_pane_g1

0xb3d9,	// (0x000887aa) mup_visualizer_pane_g2_ParamLimits

0xb3d9,	// (0x000887aa) mup_visualizer_pane_g2

0xb470,	// (0x00088841) mup_visualizer_pane_g3_ParamLimits

0xb470,	// (0x00088841) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0008c80f) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0008c80f) mup_visualizer_pane_g

0xaa6e,	// (0x00087e3f) mup_volume_pane_g1

0xb6f6,	// (0x00088ac7) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0008c816) mup_volume_pane_g

0xaa6e,	// (0x00087e3f) mup_progress_pane_g1

0xb6ff,	// (0x00088ad0) mup_progress_pane_g2

0xb708,	// (0x00088ad9) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0008c81b) mup_progress_pane_g

0xa6c5,	// (0x00087a96) bg_popup_window_pane_cp05

0xb711,	// (0x00088ae2) heading_pane_cp02_ParamLimits

0xb711,	// (0x00088ae2) heading_pane_cp02

0xb72d,	// (0x00088afe) list_popup_blid_pane

0xb735,	// (0x00088b06) list_blid_sat_info_pane_ParamLimits

0xb735,	// (0x00088b06) list_blid_sat_info_pane

0xb748,	// (0x00088b19) list_blid_sat_info_pane_g1

0xb750,	// (0x00088b21) list_blid_sat_info_pane_t1

0x48b8,	// (0x00081c89) mup_equalizer_pane_ParamLimits

0x48b8,	// (0x00081c89) mup_equalizer_pane

0x48d9,	// (0x00081caa) mup_equalizer_pane_cp1_ParamLimits

0x48d9,	// (0x00081caa) mup_equalizer_pane_cp1

0x48fa,	// (0x00081ccb) mup_equalizer_pane_cp2_ParamLimits

0x48fa,	// (0x00081ccb) mup_equalizer_pane_cp2

0x491b,	// (0x00081cec) mup_equalizer_pane_cp3_ParamLimits

0x491b,	// (0x00081cec) mup_equalizer_pane_cp3

0x4940,	// (0x00081d11) mup_equalizer_pane_cp4_ParamLimits

0x4940,	// (0x00081d11) mup_equalizer_pane_cp4

0x4965,	// (0x00081d36) mup_equalizer_pane_cp5

0x497d,	// (0x00081d4e) mup_equalizer_pane_cp6

0x4995,	// (0x00081d66) mup_equalizer_pane_cp7

0xc90c,	// (0x00089cdd) bg_popup_call_poc_act_pane_g9

0xc914,	// (0x00089ce5) bg_popup_call_poc_act_pane_g10

0xc91c,	// (0x00089ced) bg_popup_call_poc_act_pane_g11

0x000a,

0xa920,	// (0x00087cf1) mup_scale_pane

0xaa6e,	// (0x00087e3f) mup_scale_pane_g1

0xb75e,	// (0x00088b2f) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0008c837) mup_scale_pane_g

0xb782,	// (0x00088b53) msg_data_pane

0xb78a,	// (0x00088b5b) scroll_pane_cp017

0x0db2,	// (0x0007e183) bg_list_pane_cp04_ParamLimits

0x0db2,	// (0x0007e183) bg_list_pane_cp04

0xb792,	// (0x00088b63) msg_data_pane_g1

0x49bf,	// (0x00081d90) msg_data_pane_g2

0x49c9,	// (0x00081d9a) msg_data_pane_g3

0x49d3,	// (0x00081da4) msg_data_pane_g4

0x49db,	// (0x00081dac) msg_data_pane_g5

0x49e3,	// (0x00081db4) msg_data_pane_g6

0x49eb,	// (0x00081dbc) msg_data_pane_g7

0x0006,

0xf475,	// (0x0008c846) msg_data_pane_g

0x0dda,	// (0x0007e1ab) msg_text_pane_ParamLimits

0x0dda,	// (0x0007e1ab) msg_text_pane

0x49f3,	// (0x00081dc4) qrid_highlight_pane_cp011_ParamLimits

0x49f3,	// (0x00081dc4) qrid_highlight_pane_cp011

0xa6c5,	// (0x00087a96) msg_body_pane

0xa6c5,	// (0x00087a96) msg_header_pane

0xb7a3,	// (0x00088b74) input_focus_pane_cp07

0x0e17,	// (0x0007e1e8) msg_header_pane_t1_ParamLimits

0x0e17,	// (0x0007e1e8) msg_header_pane_t1

0x0e29,	// (0x0007e1fa) msg_header_pane_t2_ParamLimits

0x0e29,	// (0x0007e1fa) msg_header_pane_t2

0x0001,

0xf489,	// (0x0008c85a) msg_header_pane_t_ParamLimits

0xf489,	// (0x0008c85a) msg_header_pane_t

0xb7b8,	// (0x00088b89) msg_body_pane_g1

0x0e3b,	// (0x0007e20c) msg_body_pane_t1_ParamLimits

0x0e3b,	// (0x0007e20c) msg_body_pane_t1

0x0e6c,	// (0x0007e23d) msg_body_pane_t2_ParamLimits

0x0e6c,	// (0x0007e23d) msg_body_pane_t2

0x0e7e,	// (0x0007e24f) msg_body_pane_t3_ParamLimits

0x0e7e,	// (0x0007e24f) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0008c85f) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0008c85f) msg_body_pane_t

0x4a5b,	// (0x00081e2c) main_viewer_pane_g1_ParamLimits

0x4a5b,	// (0x00081e2c) main_viewer_pane_g1

0x4a67,	// (0x00081e38) main_viewer_pane_g2_ParamLimits

0x4a67,	// (0x00081e38) main_viewer_pane_g2

0x4a73,	// (0x00081e44) main_viewer_pane_g3_ParamLimits

0x4a73,	// (0x00081e44) main_viewer_pane_g3

0x4a84,	// (0x00081e55) main_viewer_pane_g4_ParamLimits

0x4a84,	// (0x00081e55) main_viewer_pane_g4

0x4a95,	// (0x00081e66) main_viewer_pane_g5_ParamLimits

0x4a95,	// (0x00081e66) main_viewer_pane_g5

0x4a95,	// (0x00081e66) main_viewer_pane_g7_ParamLimits

0x4a95,	// (0x00081e66) main_viewer_pane_g7

0x4aa7,	// (0x00081e78) main_viewer_pane_g8_ParamLimits

0x4aa7,	// (0x00081e78) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0008c86f) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0008c86f) main_viewer_pane_g

0xb7c0,	// (0x00088b91) viewer_content_pane_ParamLimits

0xb7c0,	// (0x00088b91) viewer_content_pane

0x4adf,	// (0x00081eb0) main_postcard_pane_g1_ParamLimits

0x4adf,	// (0x00081eb0) main_postcard_pane_g1

0x4aed,	// (0x00081ebe) main_postcard_pane_g2_ParamLimits

0x4aed,	// (0x00081ebe) main_postcard_pane_g2

0x4afb,	// (0x00081ecc) main_postcard_pane_g3_ParamLimits

0x4afb,	// (0x00081ecc) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0008c880) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0008c880) main_postcard_pane_g

0x4b0b,	// (0x00081edc) main_postcard_pane_g4

0xcb05,	// (0x00089ed6) smil_status_volume_pane_g2

0x4b37,	// (0x00081f08) postcard_pane_ParamLimits

0x4b37,	// (0x00081f08) postcard_pane

0xb3d9,	// (0x000887aa) postcard_pane_g1_ParamLimits

0xb3d9,	// (0x000887aa) postcard_pane_g1

0x4b71,	// (0x00081f42) postcard_pane_g2_ParamLimits

0x4b71,	// (0x00081f42) postcard_pane_g2

0x4b7d,	// (0x00081f4e) postcard_pane_g3_ParamLimits

0x4b7d,	// (0x00081f4e) postcard_pane_g3

0xb7ce,	// (0x00088b9f) postcard_pane_g4_ParamLimits

0xb7ce,	// (0x00088b9f) postcard_pane_g4

0x4b89,	// (0x00081f5a) postcard_pane_g5_ParamLimits

0x4b89,	// (0x00081f5a) postcard_pane_g5

0x4b95,	// (0x00081f66) postcard_pane_g6_ParamLimits

0x4b95,	// (0x00081f66) postcard_pane_g6

0xb7dc,	// (0x00088bad) postcard_pane_g7_ParamLimits

0xb7dc,	// (0x00088bad) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0008c88d) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0008c88d) postcard_pane_g

0x4ba3,	// (0x00081f74) main_mp2_pane_g1_ParamLimits

0x4ba3,	// (0x00081f74) main_mp2_pane_g1

0x4bb1,	// (0x00081f82) main_mp2_pane_g2_ParamLimits

0x4bb1,	// (0x00081f82) main_mp2_pane_g2

0x4bbd,	// (0x00081f8e) main_mp2_pane_g3_ParamLimits

0x4bbd,	// (0x00081f8e) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0008c89c) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0008c89c) main_mp2_pane_g

0x4bc9,	// (0x00081f9a) main_mp2_pane_t1_ParamLimits

0x4bc9,	// (0x00081f9a) main_mp2_pane_t1

0x4be0,	// (0x00081fb1) main_mp2_pane_t2_ParamLimits

0x4be0,	// (0x00081fb1) main_mp2_pane_t2

0x4bf4,	// (0x00081fc5) main_mp2_pane_t3_ParamLimits

0x4bf4,	// (0x00081fc5) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0008c8a3) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0008c8a3) main_mp2_pane_t

0xb7ea,	// (0x00088bbb) pec_content_pane_ParamLimits

0xb7ea,	// (0x00088bbb) pec_content_pane

0xad95,	// (0x00088166) scroll_pane_cp015

0xb7fc,	// (0x00088bcd) pec_attribute_pane_ParamLimits

0xb7fc,	// (0x00088bcd) pec_attribute_pane

0x4c06,	// (0x00081fd7) pec_content_pane_g1_ParamLimits

0x4c06,	// (0x00081fd7) pec_content_pane_g1

0xb80c,	// (0x00088bdd) pec_content_pane_t1_ParamLimits

0xb80c,	// (0x00088bdd) pec_content_pane_t1

0xb81e,	// (0x00088bef) pec_content_pane_t2_ParamLimits

0xb81e,	// (0x00088bef) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0008c8aa) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0008c8aa) pec_content_pane_t

0x4c12,	// (0x00081fe3) list_single_graphic_pane_cp01_ParamLimits

0x4c12,	// (0x00081fe3) list_single_graphic_pane_cp01

0xa920,	// (0x00087cf1) bg_popup_sub_pane_cp04

0xb830,	// (0x00088c01) popup_mup_playback_window_g1

0xb83c,	// (0x00088c0d) popup_mup_playback_window_t1

0xb851,	// (0x00088c22) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0008c8af) popup_mup_playback_window_t

0xb888,	// (0x00088c59) main_image_pane_g1_ParamLimits

0xb888,	// (0x00088c59) main_image_pane_g1

0xb8cb,	// (0x00088c9c) scroll_pane_cp018_ParamLimits

0xb8cb,	// (0x00088c9c) scroll_pane_cp018

0xb8e3,	// (0x00088cb4) scroll_pane_cp016_ParamLimits

0xb8e3,	// (0x00088cb4) scroll_pane_cp016

0x4ca0,	// (0x00082071) smil2_image_pane_ParamLimits

0x4ca0,	// (0x00082071) smil2_image_pane

0x4cd6,	// (0x000820a7) smil2_root_pane_ParamLimits

0x4cd6,	// (0x000820a7) smil2_root_pane

0x4d02,	// (0x000820d3) smil2_text_pane_ParamLimits

0x4d02,	// (0x000820d3) smil2_text_pane

0xa6c5,	// (0x00087a96) bg_list_pane_cp06

0xb91f,	// (0x00088cf0) grid_radio_pane

0xa6c5,	// (0x00087a96) bg_popup_window_pane_cp06

0xb929,	// (0x00088cfa) main_fmradio_pane_t1

0xb2d3,	// (0x000886a4) heading_pane_cp04

0xb937,	// (0x00088d08) main_fmradio_pane_t2

0xc924,	// (0x00089cf5) popup_cale_lunar_info_window_g1

0xb945,	// (0x00088d16) main_fmradio_pane_t3

0xc92c,	// (0x00089cfd) popup_cale_lunar_info_window_g2

0xb955,	// (0x00088d26) main_fmradio_pane_t4

0x0001,

0xb963,	// (0x00088d34) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0008c98a) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0008c8c4) main_fmradio_pane_t

0xb971,	// (0x00088d42) wait_bar_pane_cp03

0xb979,	// (0x00088d4a) cell_fmradio_pane_ParamLimits

0xb979,	// (0x00088d4a) cell_fmradio_pane

0xb7dc,	// (0x00088bad) cell_fmradio_pane_g1_ParamLimits

0xb7dc,	// (0x00088bad) cell_fmradio_pane_g1

0xa6c5,	// (0x00087a96) grid_highlight_pane_cp011

0xb98e,	// (0x00088d5f) poc_content_pane_ParamLimits

0xb98e,	// (0x00088d5f) poc_content_pane

0xb9a0,	// (0x00088d71) scroll_pane_cp019

0x4d42,	// (0x00082113) popup_call_poc_act_window_ParamLimits

0x4d42,	// (0x00082113) popup_call_poc_act_window

0x4d4f,	// (0x00082120) popup_call_poc_inact_window_ParamLimits

0x4d4f,	// (0x00082120) popup_call_poc_inact_window

0xf590,	// (0x0008c961) bg_popup_call_poc_act_pane_g

0xc89c,	// (0x00089c6d) bg_popup_call_poc_inact_pane_g1

0xc8a4,	// (0x00089c75) bg_popup_call_poc_inact_pane_g2

0xb9a8,	// (0x00088d79) popup_call_poc_act_window_g2

0xc8ac,	// (0x00089c7d) bg_popup_call_poc_inact_pane_g3

0xc8b4,	// (0x00089c85) bg_popup_call_poc_inact_pane_g4

0xc8bc,	// (0x00089c8d) bg_popup_call_poc_inact_pane_g5

0xb9b0,	// (0x00088d81) popup_call_poc_act_window_t1_ParamLimits

0xb9b0,	// (0x00088d81) popup_call_poc_act_window_t1

0xb9d8,	// (0x00088da9) popup_call_poc_act_window_t2_ParamLimits

0xb9d8,	// (0x00088da9) popup_call_poc_act_window_t2

0xba00,	// (0x00088dd1) popup_call_poc_act_window_t3_ParamLimits

0xba00,	// (0x00088dd1) popup_call_poc_act_window_t3

0xba28,	// (0x00088df9) popup_call_poc_act_window_t4_ParamLimits

0xba28,	// (0x00088df9) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0008c8cf) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0008c8cf) popup_call_poc_act_window_t

0xc8c4,	// (0x00089c95) bg_popup_call_poc_inact_pane_g6

0xc8cc,	// (0x00089c9d) bg_popup_call_poc_inact_pane_g7

0xc8d4,	// (0x00089ca5) bg_popup_call_poc_inact_pane_g8

0xba3a,	// (0x00088e0b) popup_call_poc_inact_window_g2

0xc8dc,	// (0x00089cad) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0008c94e) bg_popup_call_poc_inact_pane_g

0xba42,	// (0x00088e13) popup_call_poc_inact_window_t1_ParamLimits

0xba42,	// (0x00088e13) popup_call_poc_inact_window_t1

0xba57,	// (0x00088e28) popup_call_poc_inact_window_t2_ParamLimits

0xba57,	// (0x00088e28) popup_call_poc_inact_window_t2

0xba6c,	// (0x00088e3d) popup_call_poc_inact_window_t3_ParamLimits

0xba6c,	// (0x00088e3d) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0008c8d8) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0008c8d8) popup_call_poc_inact_window_t

0xca65,	// (0x00089e36) context_pane_ParamLimits

0x53a4,	// (0x00082775) signal_pane_ParamLimits

0xabc1,	// (0x00087f92) main_call2_pane

0x5311,	// (0x000826e2) popup_phob_thumbnail2_window_ParamLimits

0x5311,	// (0x000826e2) popup_phob_thumbnail2_window

0x4a09,	// (0x00081dda) aid_hotspot_pointer_arrow_pane

0x4a11,	// (0x00081de2) aid_hotspot_pointer_hand_pane

0x5074,	// (0x00082445) phob_pre_status_pane_g5

0x2daf,	// (0x00080180) cams_zoom_pane_ParamLimits

0x2dbb,	// (0x0008018c) image_vga_pane_ParamLimits

0x2dca,	// (0x0008019b) main_camera_pane_g1_ParamLimits

0x2dd8,	// (0x000801a9) main_camera_pane_g2_ParamLimits

0x2de4,	// (0x000801b5) main_camera_pane_g3_ParamLimits

0x2df2,	// (0x000801c3) main_camera_pane_g4_ParamLimits

0x2e00,	// (0x000801d1) main_camera_pane_g5_ParamLimits

0x2e0e,	// (0x000801df) main_camera_pane_g6_ParamLimits

0x2e1c,	// (0x000801ed) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0008c5d7) main_camera_pane_g_ParamLimits

0x2e2a,	// (0x000801fb) main_camera_pane_t1_ParamLimits

0x2e3c,	// (0x0008020d) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0008c5e8) main_camera_pane_t_ParamLimits

0xa920,	// (0x00087cf1) bg_popup_preview_window_pane_cp01_ParamLimits

0xa920,	// (0x00087cf1) bg_popup_preview_window_pane_cp01

0xba81,	// (0x00088e52) popup_phob_thumbnail2_window_g1_ParamLimits

0xba81,	// (0x00088e52) popup_phob_thumbnail2_window_g1

0xa6c5,	// (0x00087a96) call2_cli_visual_pane

0x4d6b,	// (0x0008213c) popup_call2_audio_conf_window_ParamLimits

0x4d6b,	// (0x0008213c) popup_call2_audio_conf_window

0x4d84,	// (0x00082155) popup_call2_audio_first_window_ParamLimits

0x4d84,	// (0x00082155) popup_call2_audio_first_window

0x4e22,	// (0x000821f3) popup_call2_audio_in_window_ParamLimits

0x4e22,	// (0x000821f3) popup_call2_audio_in_window

0x4e66,	// (0x00082237) popup_call2_audio_out_window_ParamLimits

0x4e66,	// (0x00082237) popup_call2_audio_out_window

0x4ed0,	// (0x000822a1) popup_call2_audio_second_window_ParamLimits

0x4ed0,	// (0x000822a1) popup_call2_audio_second_window

0x4f2e,	// (0x000822ff) popup_call2_audio_wait_window_ParamLimits

0x4f2e,	// (0x000822ff) popup_call2_audio_wait_window

0xa6c5,	// (0x00087a96) bg_popup_call2_act_pane_cp03

0xa902,	// (0x00087cd3) list_conf_pane_cp

0xba8d,	// (0x00088e5e) popup_call2_audio_conf_window_t1

0xba9b,	// (0x00088e6c) list_single_graphic_popup_conf2_pane_ParamLimits

0xba9b,	// (0x00088e6c) list_single_graphic_popup_conf2_pane

0xb342,	// (0x00088713) list_highlight_pane_cp04

0xbaae,	// (0x00088e7f) list_single_graphic_popup_conf2_pane_g1

0xb353,	// (0x00088724) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0008c8df) list_single_graphic_popup_conf2_pane_g

0xbab8,	// (0x00088e89) list_single_graphic_popup_conf2_pane_t1

0xbac6,	// (0x00088e97) bg_popup_call2_act_pane_cp01_ParamLimits

0xbac6,	// (0x00088e97) bg_popup_call2_act_pane_cp01

0xbb50,	// (0x00088f21) call_type_pane_cp05_ParamLimits

0xbb50,	// (0x00088f21) call_type_pane_cp05

0xbba4,	// (0x00088f75) popup_call2_audio_second_window_g1_ParamLimits

0xbba4,	// (0x00088f75) popup_call2_audio_second_window_g1

0xbbf8,	// (0x00088fc9) popup_call2_audio_second_window_g2_ParamLimits

0xbbf8,	// (0x00088fc9) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0008c8e4) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0008c8e4) popup_call2_audio_second_window_g

0xbc5d,	// (0x0008902e) popup_call2_audio_second_window_t1_ParamLimits

0xbc5d,	// (0x0008902e) popup_call2_audio_second_window_t1

0xbd18,	// (0x000890e9) popup_call2_audio_second_window_t2_ParamLimits

0xbd18,	// (0x000890e9) popup_call2_audio_second_window_t2

0xbd6b,	// (0x0008913c) popup_call2_audio_second_window_t3_ParamLimits

0xbd6b,	// (0x0008913c) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0008c8eb) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0008c8eb) popup_call2_audio_second_window_t

0xa6c5,	// (0x00087a96) bg_popup_call2_in_pane_cp02

0xa6cf,	// (0x00087aa0) call_type_pane_cp04

0xa6d7,	// (0x00087aa8) popup_call2_audio_wait_window_g1

0xa6df,	// (0x00087ab0) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0008c4c6) popup_call2_audio_wait_window_g

0xa6e7,	// (0x00087ab8) popup_call2_audio_wait_window_t3

0xbe75,	// (0x00089246) bg_popup_call2_act_pane_ParamLimits

0xbe75,	// (0x00089246) bg_popup_call2_act_pane

0xbf35,	// (0x00089306) call_type_pane_cp03_ParamLimits

0xbf35,	// (0x00089306) call_type_pane_cp03

0xbf99,	// (0x0008936a) popup_call2_audio_first_window_g1_ParamLimits

0xbf99,	// (0x0008936a) popup_call2_audio_first_window_g1

0xc009,	// (0x000893da) popup_call2_audio_first_window_g2_ParamLimits

0xc009,	// (0x000893da) popup_call2_audio_first_window_g2

0xb3d9,	// (0x000887aa) popup_call2_audio_first_window_g3_ParamLimits

0xb3d9,	// (0x000887aa) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0008c8f4) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0008c8f4) popup_call2_audio_first_window_g

0xc0e7,	// (0x000894b8) popup_call2_audio_first_window_t1_ParamLimits

0xc0e7,	// (0x000894b8) popup_call2_audio_first_window_t1

0xc1ea,	// (0x000895bb) popup_call2_audio_first_window_t4_ParamLimits

0xc1ea,	// (0x000895bb) popup_call2_audio_first_window_t4

0xc2cd,	// (0x0008969e) popup_call2_audio_first_window_t5_ParamLimits

0xc2cd,	// (0x0008969e) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0008c8ff) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0008c8ff) popup_call2_audio_first_window_t

0xa918,	// (0x00087ce9) bg_popup_call2_act_pane_g1

0xc936,	// (0x00089d07) popup_cale_lunar_info_window_t1

0xc944,	// (0x00089d15) popup_cale_lunar_info_window_t2

0xc952,	// (0x00089d23) popup_cale_lunar_info_window_t3

0xa6c5,	// (0x00087a96) bg_popup_call2_bubble_pane

0xc3ce,	// (0x0008979f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc3ce,	// (0x0008979f) bg_popup_call2_in_pane_cp01

0xa3a1,	// (0x00087772) call_type_pane_cp02

0xc416,	// (0x000897e7) popup_call2_audio_out_window_g1_ParamLimits

0xc416,	// (0x000897e7) popup_call2_audio_out_window_g1

0xc442,	// (0x00089813) popup_call2_audio_out_window_g2_ParamLimits

0xc442,	// (0x00089813) popup_call2_audio_out_window_g2

0xc46a,	// (0x0008983b) popup_call2_audio_out_window_g3_ParamLimits

0xc46a,	// (0x0008983b) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0008c908) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0008c908) popup_call2_audio_out_window_g

0xc4a5,	// (0x00089876) popup_call2_audio_out_window_t1_ParamLimits

0xc4a5,	// (0x00089876) popup_call2_audio_out_window_t1

0xc504,	// (0x000898d5) popup_call2_audio_out_window_t2_ParamLimits

0xc504,	// (0x000898d5) popup_call2_audio_out_window_t2

0xc558,	// (0x00089929) popup_call2_audio_out_window_t3_ParamLimits

0xc558,	// (0x00089929) popup_call2_audio_out_window_t3

0xc56e,	// (0x0008993f) popup_call2_audio_out_window_t4_ParamLimits

0xc56e,	// (0x0008993f) popup_call2_audio_out_window_t4

0xc584,	// (0x00089955) popup_call2_audio_out_window_t5_ParamLimits

0xc584,	// (0x00089955) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0008c911) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0008c911) popup_call2_audio_out_window_t

0xc5e8,	// (0x000899b9) bg_popup_call2_in_pane_ParamLimits

0xc5e8,	// (0x000899b9) bg_popup_call2_in_pane

0xc644,	// (0x00089a15) popup_call2_audio_in_window_g1_ParamLimits

0xc644,	// (0x00089a15) popup_call2_audio_in_window_g1

0xc67c,	// (0x00089a4d) popup_call2_audio_in_window_g2_ParamLimits

0xc67c,	// (0x00089a4d) popup_call2_audio_in_window_g2

0xc6b4,	// (0x00089a85) popup_call2_audio_in_window_g3_ParamLimits

0xc6b4,	// (0x00089a85) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0008c91e) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0008c91e) popup_call2_audio_in_window_g

0xc70c,	// (0x00089add) popup_call2_audio_in_window_t1_ParamLimits

0xc70c,	// (0x00089add) popup_call2_audio_in_window_t1

0xc78c,	// (0x00089b5d) popup_call2_audio_in_window_t2_ParamLimits

0xc78c,	// (0x00089b5d) popup_call2_audio_in_window_t2

0xc80c,	// (0x00089bdd) popup_call2_audio_in_window_t3_ParamLimits

0xc80c,	// (0x00089bdd) popup_call2_audio_in_window_t3

0xc826,	// (0x00089bf7) popup_call2_audio_in_window_t4_ParamLimits

0xc826,	// (0x00089bf7) popup_call2_audio_in_window_t4

0xc838,	// (0x00089c09) popup_call2_audio_in_window_t5_ParamLimits

0xc838,	// (0x00089c09) popup_call2_audio_in_window_t5

0xc84a,	// (0x00089c1b) popup_call2_audio_in_window_t6_ParamLimits

0xc84a,	// (0x00089c1b) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0008c927) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0008c927) popup_call2_audio_in_window_t

0xa918,	// (0x00087ce9) bg_popup_call2_in_pane_g1

0xc960,	// (0x00089d31) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0008c98f) popup_cale_lunar_info_window_t

0xa920,	// (0x00087cf1) bg_popup_call2_rect_pane_ParamLimits

0xa920,	// (0x00087cf1) bg_popup_call2_rect_pane

0xa6c5,	// (0x00087a96) call2_cli_visual_graphic_pane

0xa6c5,	// (0x00087a96) call2_cli_visual_text_pane

0x5429,	// (0x000827fa) smil_status_volume_pane_g3

0x0002,

0xaa6e,	// (0x00087e3f) call2_cli_visual_graphic_pane_g1

0xaa6e,	// (0x00087e3f) call2_cli_visual_graphic_pane_g2

0xaa6e,	// (0x00087e3f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0008c934) call2_cli_visual_graphic_pane_g

0xc85c,	// (0x00089c2d) bg_popup_call2_rect_pane_g1

0xaafa,	// (0x00087ecb) bg_popup_call2_rect_pane_g2

0xc864,	// (0x00089c35) bg_popup_call2_rect_pane_g3

0xc86c,	// (0x00089c3d) bg_popup_call2_rect_pane_g4

0xc874,	// (0x00089c45) bg_popup_call2_rect_pane_g5

0xc87c,	// (0x00089c4d) bg_popup_call2_rect_pane_g6

0xc884,	// (0x00089c55) bg_popup_call2_rect_pane_g7

0xc88c,	// (0x00089c5d) bg_popup_call2_rect_pane_g8

0xc894,	// (0x00089c65) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0008c93b) bg_popup_call2_rect_pane_g

0xc89c,	// (0x00089c6d) bg_popup_call2_bubble_pane_g1

0xc8a4,	// (0x00089c75) bg_popup_call2_bubble_pane_g2

0xc8ac,	// (0x00089c7d) bg_popup_call2_bubble_pane_g3

0xc8b4,	// (0x00089c85) bg_popup_call2_bubble_pane_g4

0xc8bc,	// (0x00089c8d) bg_popup_call2_bubble_pane_g5

0xc8c4,	// (0x00089c95) bg_popup_call2_bubble_pane_g6

0xc8cc,	// (0x00089c9d) bg_popup_call2_bubble_pane_g7

0xc8d4,	// (0x00089ca5) bg_popup_call2_bubble_pane_g8

0xc8dc,	// (0x00089cad) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0008c94e) bg_popup_call2_bubble_pane_g

0x26cd,	// (0x0007fa9e) aid_cale_week_size_cell_pane

0x2e50,	// (0x00080221) aid_cams_cif_uncrop_pane_ParamLimits

0x2e50,	// (0x00080221) aid_cams_cif_uncrop_pane

0x2fad,	// (0x0008037e) aid_cams_size_cell_ParamLimits

0x2fad,	// (0x0008037e) aid_cams_size_cell

0x2fb9,	// (0x0008038a) grid_cams_pane_ParamLimits

0x2fc7,	// (0x00080398) linegrid_cams_pane_ParamLimits

0x3098,	// (0x00080469) call_video_pane_t1

0x30b5,	// (0x00080486) call_video_pane_t2

0x0001,

0xf26a,	// (0x0008c63b) call_video_pane_t

0x3581,	// (0x00080952) aid_cale_month_size_cell_pane_ParamLimits

0x3581,	// (0x00080952) aid_cale_month_size_cell_pane

0xf607,	// (0x0008c9d8) smil_status_volume_pane_g

0x5436,	// (0x00082807) volume_smil_pane_ParamLimits

0x1e9d,	// (0x0007f26e) aid_popup2_width_pane

0x25d9,	// (0x0007f9aa) cell_qdial_pane_g4_ParamLimits

0x25d9,	// (0x0007f9aa) cell_qdial_pane_g4

0x4470,	// (0x00081841) aid_blid_cardinal_pane_ParamLimits

0x4480,	// (0x00081851) aid_blid_destination_pane_ParamLimits

0x4480,	// (0x00081851) aid_blid_destination_pane

0xa920,	// (0x00087cf1) bg_popup_call_poc_act_pane_ParamLimits

0xa920,	// (0x00087cf1) bg_popup_call_poc_act_pane

0xa920,	// (0x00087cf1) bg_popup_call_poc_inact_pane_ParamLimits

0xa920,	// (0x00087cf1) bg_popup_call_poc_inact_pane

0xc8e4,	// (0x00089cb5) bg_popup_call_poc_act_pane_g1

0xc8ec,	// (0x00089cbd) bg_popup_call_poc_act_pane_g2

0xc8f4,	// (0x00089cc5) bg_popup_call_poc_act_pane_g3

0xc8b4,	// (0x00089c85) bg_popup_call_poc_act_pane_g4

0xc8bc,	// (0x00089c8d) bg_popup_call_poc_act_pane_g5

0xc8fc,	// (0x00089ccd) bg_popup_call_poc_act_pane_g6

0xc8cc,	// (0x00089c9d) bg_popup_call_poc_act_pane_g7

0xc904,	// (0x00089cd5) bg_popup_call_poc_act_pane_g8

0xa6c5,	// (0x00087a96) main_usb_pane

0x522e,	// (0x000825ff) popup_cale_lunar_info_window

0x33cd,	// (0x0008079e) im_reading_pane_t1_ParamLimits

0xacc6,	// (0x00088097) list_im_pane_ParamLimits

0xacd7,	// (0x000880a8) scroll_pane_cp07_ParamLimits

0xa6c5,	// (0x00087a96) grid_highlight_pane_cp012

0xa920,	// (0x00087cf1) mup_scale_pane_ParamLimits

0xb3d9,	// (0x000887aa) main_usb_pane_g1_ParamLimits

0xb3d9,	// (0x000887aa) main_usb_pane_g1

0x4f97,	// (0x00082368) main_usb_pane_g2_ParamLimits

0x4f97,	// (0x00082368) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0008c978) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0008c978) main_usb_pane_g

0x4fa3,	// (0x00082374) main_usb_pane_t1_ParamLimits

0x4fa3,	// (0x00082374) main_usb_pane_t1

0x4fb5,	// (0x00082386) main_usb_pane_t2_ParamLimits

0x4fb5,	// (0x00082386) main_usb_pane_t2

0x4fc7,	// (0x00082398) main_usb_pane_t3_ParamLimits

0x4fc7,	// (0x00082398) main_usb_pane_t3

0x4fd9,	// (0x000823aa) main_usb_pane_t4_ParamLimits

0x4fd9,	// (0x000823aa) main_usb_pane_t4

0x4feb,	// (0x000823bc) main_usb_pane_t5_ParamLimits

0x4feb,	// (0x000823bc) main_usb_pane_t5

0x4ffd,	// (0x000823ce) main_usb_pane_t6_ParamLimits

0x4ffd,	// (0x000823ce) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0008c97d) main_usb_pane_t_ParamLimits

0x440f,	// (0x000817e0) aid_text_placing

0x441a,	// (0x000817eb) main_location2_pane_t1_ParamLimits

0x4430,	// (0x00081801) main_location2_pane_t2_ParamLimits

0x4446,	// (0x00081817) main_location2_pane_t3_ParamLimits

0x445c,	// (0x0008182d) main_location2_pane_t4_ParamLimits

0x445c,	// (0x0008182d) main_location2_pane_t4

0xf3cb,	// (0x0008c79c) main_location2_pane_t_ParamLimits

0xa95c,	// (0x00087d2d) find_pinb_pane_g2_ParamLimits

0xa95c,	// (0x00087d2d) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0008c4ec) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0008c4ec) find_pinb_pane_g

0xa968,	// (0x00087d39) find_pinb_pane_t1_ParamLimits

0xa97a,	// (0x00087d4b) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0008c4f1) find_pinb_pane_t_ParamLimits

0xa6c5,	// (0x00087a96) main_call3_pane

0x3b34,	// (0x00080f05) cale_month_day_heading_pane_t1_ParamLimits

0x3bb6,	// (0x00080f87) cale_month_day_heading_pane_t2_ParamLimits

0x3c2f,	// (0x00081000) cale_month_day_heading_pane_t3_ParamLimits

0x3ca8,	// (0x00081079) cale_month_day_heading_pane_t4_ParamLimits

0x3d21,	// (0x000810f2) cale_month_day_heading_pane_t5_ParamLimits

0x3da2,	// (0x00081173) cale_month_day_heading_pane_t6_ParamLimits

0x3e2b,	// (0x000811fc) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0008c673) cale_month_day_heading_pane_t_ParamLimits

0xaf48,	// (0x00088319) smil_status_volume_pane

0x4b55,	// (0x00081f26) postcard_address_pane_ParamLimits

0x4b55,	// (0x00081f26) postcard_address_pane

0x4b63,	// (0x00081f34) postcard_message_pane_ParamLimits

0x4b63,	// (0x00081f34) postcard_message_pane

0x4f6d,	// (0x0008233e) call2_cli_visual_pane_t1_ParamLimits

0x4f6d,	// (0x0008233e) call2_cli_visual_pane_t1

0x557c,	// (0x0008294d) postcard_message_pane_t1_ParamLimits

0x557c,	// (0x0008294d) postcard_message_pane_t1

0xcb18,	// (0x00089ee9) postcard_address_pane_t1_ParamLimits

0xcb18,	// (0x00089ee9) postcard_address_pane_t1

0x556d,	// (0x0008293e) popup_call3_audio_in_window_ParamLimits

0x556d,	// (0x0008293e) popup_call3_audio_in_window

0x544b,	// (0x0008281c) bg_popup_call3_in_pane_ParamLimits

0x544b,	// (0x0008281c) bg_popup_call3_in_pane

0x54b3,	// (0x00082884) popup_call3_audio_in_window_g1_ParamLimits

0x54b3,	// (0x00082884) popup_call3_audio_in_window_g1

0x54cb,	// (0x0008289c) popup_call3_audio_in_window_g2_ParamLimits

0x54cb,	// (0x0008289c) popup_call3_audio_in_window_g2

0x54e3,	// (0x000828b4) popup_call3_audio_in_window_g3_ParamLimits

0x54e3,	// (0x000828b4) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0008c9df) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0008c9df) popup_call3_audio_in_window_g

0x550b,	// (0x000828dc) popup_call3_audio_in_window_t1_ParamLimits

0x550b,	// (0x000828dc) popup_call3_audio_in_window_t1

0x5533,	// (0x00082904) popup_call3_audio_in_window_t2_ParamLimits

0x5533,	// (0x00082904) popup_call3_audio_in_window_t2

0x555b,	// (0x0008292c) popup_call3_audio_in_window_t3_ParamLimits

0x555b,	// (0x0008292c) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0008c9e8) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0008c9e8) popup_call3_audio_in_window_t

0xabc1,	// (0x00087f92) bg_popup_call3_rect_pane

0xc85c,	// (0x00089c2d) bg_popup_call3_rect_pane_g1

0xaafa,	// (0x00087ecb) bg_popup_call3_rect_pane_g2

0xc864,	// (0x00089c35) bg_popup_call3_rect_pane_g3

0xc86c,	// (0x00089c3d) bg_popup_call3_rect_pane_g4

0xc874,	// (0x00089c45) bg_popup_call3_rect_pane_g5

0xc87c,	// (0x00089c4d) bg_popup_call3_rect_pane_g6

0xc884,	// (0x00089c55) bg_popup_call3_rect_pane_g7

0x47b4,	// (0x00081b85) mup_visualizer_osc_pane

0xb6ee,	// (0x00088abf) mup_visualizer_spec_pane

0x546b,	// (0x0008283c) call3_video_qcif_pane_ParamLimits

0x546b,	// (0x0008283c) call3_video_qcif_pane

0x547d,	// (0x0008284e) call3_video_qcif_uncrop_pane_ParamLimits

0x547d,	// (0x0008284e) call3_video_qcif_uncrop_pane

0x548d,	// (0x0008285e) call3_video_subqcif_pane_ParamLimits

0x548d,	// (0x0008285e) call3_video_subqcif_pane

0x54a1,	// (0x00082872) call3_video_subqcif_uncrop_pane_ParamLimits

0x54a1,	// (0x00082872) call3_video_subqcif_uncrop_pane

0x54fb,	// (0x000828cc) popup_call3_audio_in_window_g4_ParamLimits

0x54fb,	// (0x000828cc) popup_call3_audio_in_window_g4

0x5418,	// (0x000827e9) mup_spec_half_pane

0x5421,	// (0x000827f2) mup_spec_half_pane_cp

0xcad8,	// (0x00089ea9) mup_osc_middle_pane

0xcae1,	// (0x00089eb2) mup_visualizer_osc_pane_g1

0x53f8,	// (0x000827c9) mup_spec_bar_pane_ParamLimits

0x53f8,	// (0x000827c9) mup_spec_bar_pane

0xcac5,	// (0x00089e96) mup_spec_bar_pane_g1

0xcacf,	// (0x00089ea0) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0008c9d3) mup_spec_bar_pane_g

0x26cd,	// (0x0007fa9e) aid_cale_week_size_cell_pane_ParamLimits

0x26e7,	// (0x0007fab8) bg_cale_heading_pane_ParamLimits

0x2710,	// (0x0007fae1) bg_cale_pane_cp01_ParamLimits

0x2732,	// (0x0007fb03) cale_week_corner_pane_ParamLimits

0x2751,	// (0x0007fb22) cale_week_day_heading_pane_ParamLimits

0x277f,	// (0x0007fb50) cale_week_scroll_pane_g1_ParamLimits

0x27a3,	// (0x0007fb74) cale_week_scroll_pane_g2_ParamLimits

0x27bb,	// (0x0007fb8c) cale_week_scroll_pane_g3_ParamLimits

0x27d3,	// (0x0007fba4) cale_week_scroll_pane_g4_ParamLimits

0x27eb,	// (0x0007fbbc) cale_week_scroll_pane_g5_ParamLimits

0x2803,	// (0x0007fbd4) cale_week_scroll_pane_g6_ParamLimits

0x2823,	// (0x0007fbf4) cale_week_scroll_pane_g7_ParamLimits

0x2843,	// (0x0007fc14) cale_week_scroll_pane_g8_ParamLimits

0x2863,	// (0x0007fc34) cale_week_scroll_pane_g9_ParamLimits

0x2880,	// (0x0007fc51) cale_week_scroll_pane_g10_ParamLimits

0x289d,	// (0x0007fc6e) cale_week_scroll_pane_g11_ParamLimits

0x28bc,	// (0x0007fc8d) cale_week_scroll_pane_g12_ParamLimits

0x28e1,	// (0x0007fcb2) cale_week_scroll_pane_g13_ParamLimits

0x290a,	// (0x0007fcdb) cale_week_scroll_pane_g14_ParamLimits

0x2933,	// (0x0007fd04) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0008c57d) cale_week_scroll_pane_g_ParamLimits

0x297c,	// (0x0007fd4d) cale_week_time_pane_ParamLimits

0x299c,	// (0x0007fd6d) grid_cale_week_pane_ParamLimits

0xab37,	// (0x00087f08) listscroll_cale_week_pane_t1

0xab49,	// (0x00087f1a) scroll_pane_cp08_ParamLimits

0x35f9,	// (0x000809ca) cale_month_corner_pane_ParamLimits

0xaf1e,	// (0x000882ef) cale_month_pane_t1

0x3abb,	// (0x00080e8c) cale_month_week_pane_ParamLimits

0xb3d9,	// (0x000887aa) popup_call_status_window_g1_ParamLimits

0x422d,	// (0x000815fe) popup_call_status_window_g2_ParamLimits

0x4239,	// (0x0008160a) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0008c723) popup_call_status_window_g_ParamLimits

0xb2c3,	// (0x00088694) aid_call2_pane

0x0e09,	// (0x0007e1da) msg_header_pane_g1

0x4b55,	// (0x00081f26) postcard_address2_pane_ParamLimits

0x4b55,	// (0x00081f26) postcard_address2_pane

0x4b63,	// (0x00081f34) postcard_message2_pane_ParamLimits

0x4b63,	// (0x00081f34) postcard_message2_pane

0x53b2,	// (0x00082783) message2_row_pane_ParamLimits

0x53b2,	// (0x00082783) message2_row_pane

0xca80,	// (0x00089e51) address2_row_pane_ParamLimits

0xca80,	// (0x00089e51) address2_row_pane

0xca93,	// (0x00089e64) postcard_message2_row_pane_g1

0xca9b,	// (0x00089e6c) postcard_message2_row_pane_t1

0xca93,	// (0x00089e64) address2_row_pane_g1

0xca9b,	// (0x00089e6c) address2_row_pane_t1

0x2d2a,	// (0x000800fb) aid_size_cell_vorec

0xa6c5,	// (0x00087a96) main_rss_pane

0x53cc,	// (0x0008279d) rss_list_single_pane_ParamLimits

0x53cc,	// (0x0008279d) rss_list_single_pane

0xcaa9,	// (0x00089e7a) rss_list_single_pane_t1

0xcab7,	// (0x00089e88) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0008c9ce) rss_list_single_pane_t

0xa6c5,	// (0x00087a96) main_camera2_pane

0xa6c5,	// (0x00087a96) main_video2_pane

0x55e0,	// (0x000829b1) cams_zoom_pane_cp2_ParamLimits

0x55e0,	// (0x000829b1) cams_zoom_pane_cp2

0x55ec,	// (0x000829bd) image2_vga_pane_ParamLimits

0x55ec,	// (0x000829bd) image2_vga_pane

0x55fb,	// (0x000829cc) main_camera2_pane_g1_ParamLimits

0x55fb,	// (0x000829cc) main_camera2_pane_g1

0x5607,	// (0x000829d8) main_camera2_pane_g2_ParamLimits

0x5607,	// (0x000829d8) main_camera2_pane_g2

0x5613,	// (0x000829e4) main_camera2_pane_g3_ParamLimits

0x5613,	// (0x000829e4) main_camera2_pane_g3

0x561f,	// (0x000829f0) main_camera2_pane_g4_ParamLimits

0x561f,	// (0x000829f0) main_camera2_pane_g4

0x562b,	// (0x000829fc) main_camera2_pane_g5_ParamLimits

0x562b,	// (0x000829fc) main_camera2_pane_g5

0x5637,	// (0x00082a08) main_camera2_pane_g6_ParamLimits

0x5637,	// (0x00082a08) main_camera2_pane_g6

0x5643,	// (0x00082a14) main_camera2_pane_g7_ParamLimits

0x5643,	// (0x00082a14) main_camera2_pane_g7

0x564f,	// (0x00082a20) main_camera2_pane_g8_ParamLimits

0x564f,	// (0x00082a20) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0008c9ef) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0008c9ef) main_camera2_pane_g

0x5667,	// (0x00082a38) main_camera2_pane_t1_ParamLimits

0x5667,	// (0x00082a38) main_camera2_pane_t1

0x5679,	// (0x00082a4a) main_camera2_pane_t2_ParamLimits

0x5679,	// (0x00082a4a) main_camera2_pane_t2

0x568b,	// (0x00082a5c) main_camera2_pane_t3_ParamLimits

0x568b,	// (0x00082a5c) main_camera2_pane_t3

0x569d,	// (0x00082a6e) main_camera2_pane_t4_ParamLimits

0x569d,	// (0x00082a6e) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0008ca02) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0008ca02) main_camera2_pane_t

0x56fa,	// (0x00082acb) cams_zoom_pane_cp4_ParamLimits

0x56fa,	// (0x00082acb) cams_zoom_pane_cp4

0x570a,	// (0x00082adb) image2_cif_pane_ParamLimits

0x570a,	// (0x00082adb) image2_cif_pane

0x571f,	// (0x00082af0) image2_subqcif_pane_ParamLimits

0x571f,	// (0x00082af0) image2_subqcif_pane

0x572e,	// (0x00082aff) main_video2_pane_g1_ParamLimits

0x572e,	// (0x00082aff) main_video2_pane_g1

0x5740,	// (0x00082b11) main_video2_pane_g2_ParamLimits

0x5740,	// (0x00082b11) main_video2_pane_g2

0x5750,	// (0x00082b21) main_video2_pane_g3_ParamLimits

0x5750,	// (0x00082b21) main_video2_pane_g3

0x5760,	// (0x00082b31) main_video2_pane_g4_ParamLimits

0x5760,	// (0x00082b31) main_video2_pane_g4

0x5770,	// (0x00082b41) main_video2_pane_g5_ParamLimits

0x5770,	// (0x00082b41) main_video2_pane_g5

0x5780,	// (0x00082b51) main_video2_pane_g6_ParamLimits

0x5780,	// (0x00082b51) main_video2_pane_g6

0x0005,

0xf640,	// (0x0008ca11) main_video2_pane_g_ParamLimits

0xf640,	// (0x0008ca11) main_video2_pane_g

0x5792,	// (0x00082b63) main_video2_pane_t1_ParamLimits

0x5792,	// (0x00082b63) main_video2_pane_t1

0x57ac,	// (0x00082b7d) main_video2_pane_t2_ParamLimits

0x57ac,	// (0x00082b7d) main_video2_pane_t2

0x57d2,	// (0x00082ba3) main_video2_pane_t3_ParamLimits

0x57d2,	// (0x00082ba3) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0008ca1e) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0008ca1e) main_video2_pane_t

0x50b4,	// (0x00082485) call_muted_g2

0x0001,

0xf5ef,	// (0x0008c9c0) call_muted_g

0xa6c5,	// (0x00087a96) main_mup2_pane

0xcb2f,	// (0x00089f00) main_mup2_pane_g1_ParamLimits

0xcb2f,	// (0x00089f00) main_mup2_pane_g1

0x57f8,	// (0x00082bc9) main_mup2_pane_g2_ParamLimits

0x57f8,	// (0x00082bc9) main_mup2_pane_g2

0x5a8a,	// (0x00082e5b) main_mup_pane_g13_cp1

0x5a92,	// (0x00082e63) mup_volume_pane_cp1

0x581a,	// (0x00082beb) main_mup2_pane_g4_ParamLimits

0x581a,	// (0x00082beb) main_mup2_pane_g4

0x582f,	// (0x00082c00) main_mup2_pane_g5_ParamLimits

0x582f,	// (0x00082c00) main_mup2_pane_g5

0x5844,	// (0x00082c15) main_mup2_pane_g6_ParamLimits

0x5844,	// (0x00082c15) main_mup2_pane_g6

0x5859,	// (0x00082c2a) main_mup2_pane_g7_ParamLimits

0x5859,	// (0x00082c2a) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0008ca25) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0008ca25) main_mup2_pane_g

0x5875,	// (0x00082c46) main_mup2_pane_t1_ParamLimits

0x5875,	// (0x00082c46) main_mup2_pane_t1

0x588c,	// (0x00082c5d) main_mup2_pane_t2_ParamLimits

0x588c,	// (0x00082c5d) main_mup2_pane_t2

0x58a3,	// (0x00082c74) main_mup2_pane_t3_ParamLimits

0x58a3,	// (0x00082c74) main_mup2_pane_t3

0x58ba,	// (0x00082c8b) main_mup2_pane_t4_ParamLimits

0x58ba,	// (0x00082c8b) main_mup2_pane_t4

0x58d4,	// (0x00082ca5) main_mup2_pane_t5_ParamLimits

0x58d4,	// (0x00082ca5) main_mup2_pane_t5

0x58ee,	// (0x00082cbf) main_mup2_pane_t6_ParamLimits

0x58ee,	// (0x00082cbf) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0008ca34) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0008ca34) main_mup2_pane_t

0x5926,	// (0x00082cf7) mup2_visualizer_pane_ParamLimits

0x5926,	// (0x00082cf7) mup2_visualizer_pane

0x595c,	// (0x00082d2d) mup_progress_pane_cp_ParamLimits

0x595c,	// (0x00082d2d) mup_progress_pane_cp

0x5a75,	// (0x00082e46) mup_volume_pane_cp_ParamLimits

0x5a75,	// (0x00082e46) mup_volume_pane_cp

0x5975,	// (0x00082d46) mup2_visualizer_pane_g1_ParamLimits

0x5975,	// (0x00082d46) mup2_visualizer_pane_g1

0xcb3b,	// (0x00089f0c) mup2_visualizer_pane_g2_ParamLimits

0xcb3b,	// (0x00089f0c) mup2_visualizer_pane_g2

0x598a,	// (0x00082d5b) mup2_visualizer_pane_g3_ParamLimits

0x598a,	// (0x00082d5b) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0008ca41) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0008ca41) mup2_visualizer_pane_g

0xb917,	// (0x00088ce8) aid_size_cell_fmradio

0x51ca,	// (0x0008259b) aid_height_parent_landcape

0xad7c,	// (0x0008814d) wml_content_pane_cp

0xad84,	// (0x00088155) wml_tabs_pane

0xad8d,	// (0x0008815e) popup_wml_miniature_window

0xad95,	// (0x00088166) scroll_pane_cp021

0xada9,	// (0x0008817a) wml_content_pane_comp8

0xa6c5,	// (0x00087a96) bg_popup_sub_pane_cp05

0xcb59,	// (0x00089f2a) popup_wml_miniature_window_g1

0xcb61,	// (0x00089f32) wml_miniature_view_pane

0x5998,	// (0x00082d69) aid_size_wml_view

0x59a0,	// (0x00082d71) wml_miniature_view_pane_g1

0x59a9,	// (0x00082d7a) wml_miniature_view_pane_g2

0x59b2,	// (0x00082d83) wml_miniature_view_pane_g3

0x59ba,	// (0x00082d8b) wml_miniature_view_pane_g4

0x59c2,	// (0x00082d93) wml_miniature_view_pane_g5

0x59ca,	// (0x00082d9b) wml_miniature_view_pane_g6

0x59d2,	// (0x00082da3) wml_miniature_view_pane_g7

0x59da,	// (0x00082dab) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0008ca48) wml_miniature_view_pane_g

0xcb2f,	// (0x00089f00) background_graphic_ParamLimits

0xcb2f,	// (0x00089f00) background_graphic

0xcb69,	// (0x00089f3a) wml_tabs_2_pane

0xcb72,	// (0x00089f43) wml_tabs_3_pane_ParamLimits

0xcb72,	// (0x00089f43) wml_tabs_3_pane

0xcb84,	// (0x00089f55) wml_tabs_4_pane_ParamLimits

0xcb84,	// (0x00089f55) wml_tabs_4_pane

0xcb9a,	// (0x00089f6b) wml_tabs_5_pane_ParamLimits

0xcb9a,	// (0x00089f6b) wml_tabs_5_pane

0xcbb4,	// (0x00089f85) wml_tabs_pane_g2_ParamLimits

0xcbb4,	// (0x00089f85) wml_tabs_pane_g2

0xcbc8,	// (0x00089f99) wml_tabs_pane_g3_ParamLimits

0xcbc8,	// (0x00089f99) wml_tabs_pane_g3

0x59e2,	// (0x00082db3) wml_tabs_2_active_pane_ParamLimits

0x59e2,	// (0x00082db3) wml_tabs_2_active_pane

0x59f4,	// (0x00082dc5) wml_tabs_2_passive_pane_ParamLimits

0x59f4,	// (0x00082dc5) wml_tabs_2_passive_pane

0x5a06,	// (0x00082dd7) wml_tabs_3_active_pane_cp_ParamLimits

0x5a06,	// (0x00082dd7) wml_tabs_3_active_pane_cp

0x5a19,	// (0x00082dea) wml_tabs_3_passive_pane_ParamLimits

0x5a19,	// (0x00082dea) wml_tabs_3_passive_pane

0x5a2a,	// (0x00082dfb) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a2a,	// (0x00082dfb) wml_tabs_3_passive_pane_cp

0x5a3f,	// (0x00082e10) tabs_4_active_pane

0x5a47,	// (0x00082e18) tabs_4_passive_pane

0x5a4f,	// (0x00082e20) tabs_4_passive_pane_cp

0x5a57,	// (0x00082e28) tabs_4_passive_pane_cp2

0x4f8f,	// (0x00082360) aid_height_text

0x477d,	// (0x00081b4e) mup_volume_cont_pane_ParamLimits

0x477d,	// (0x00081b4e) mup_volume_cont_pane

0x2233,	// (0x0007f604) aid_size_cell_pinb

0x223d,	// (0x0007f60e) aid_size_list_pinb

0x5945,	// (0x00082d16) mup2_volume_cont_pane_ParamLimits

0x5945,	// (0x00082d16) mup2_volume_cont_pane

0x5a61,	// (0x00082e32) mup2_volume_cont_pane_g1_ParamLimits

0x5a61,	// (0x00082e32) mup2_volume_cont_pane_g1

0x1ea9,	// (0x0007f27a) aid_size_cell_touch_ParamLimits

0x1ea9,	// (0x0007f27a) aid_size_cell_touch

0x2152,	// (0x0007f523) touch_pane_ParamLimits

0x2152,	// (0x0007f523) touch_pane

0xa273,	// (0x00087644) main_rss2_pane

0xcbe5,	// (0x00089fb6) listscroll_rss2_pane

0xcbee,	// (0x00089fbf) rss2_navigation_pane

0xcbf6,	// (0x00089fc7) list_rss2_pane

0xb401,	// (0x000887d2) scroll_pane_cp22

0xcbfe,	// (0x00089fcf) rss2_navigation_pane_g1

0xcc07,	// (0x00089fd8) rss2_navigation_pane_g2

0xcc0f,	// (0x00089fe0) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0008ca59) rss2_navigation_pane_g

0xcc17,	// (0x00089fe8) rss2_navigation_pane_t1

0x5a9a,	// (0x00082e6b) rss2_list_single_pane_ParamLimits

0x5a9a,	// (0x00082e6b) rss2_list_single_pane

0xcc25,	// (0x00089ff6) rss2_list_single_pane_t2

0xcc33,	// (0x0008a004) rss2_list_single_pane_t3_ParamLimits

0xcc33,	// (0x0008a004) rss2_list_single_pane_t3

0xcc50,	// (0x0008a021) rss2_list_single_pane_t4

0x40c9,	// (0x0008149a) smil_status_pane_g1

0xbdbe,	// (0x0008918f) main_image2_pane_ParamLimits

0xbdbe,	// (0x0008918f) main_image2_pane

0x565b,	// (0x00082a2c) main_camera2_pane_g9_ParamLimits

0x565b,	// (0x00082a2c) main_camera2_pane_g9

0x56af,	// (0x00082a80) main_camera2_pane_t5_ParamLimits

0x56af,	// (0x00082a80) main_camera2_pane_t5

0x56c1,	// (0x00082a92) main_camera2_pane_t6_ParamLimits

0x56c1,	// (0x00082a92) main_camera2_pane_t6

0x5abd,	// (0x00082e8e) main_image2_pane_g1_ParamLimits

0x5abd,	// (0x00082e8e) main_image2_pane_g1

0x4d2c,	// (0x000820fd) smil2_video_pane_ParamLimits

0x4d2c,	// (0x000820fd) smil2_video_pane

0x0bac,	// (0x0007df7d) aid_zoom_text_primary_cp

0x20fb,	// (0x0007f4cc) popup_preview_fixed_window

0xacbe,	// (0x0008808f) im_reading_pane_g1

0x55a5,	// (0x00082976) cams2_bc_adjust_pane_cp_ParamLimits

0x55a5,	// (0x00082976) cams2_bc_adjust_pane_cp

0x56ec,	// (0x00082abd) cams2_bc_adjust_pane_ParamLimits

0x56ec,	// (0x00082abd) cams2_bc_adjust_pane

0x5ac9,	// (0x00082e9a) cams2_bc_adjust_pane_g1

0x5ad1,	// (0x00082ea2) cams2_slider_pane

0x5ada,	// (0x00082eab) cams2_slider_pane_g1

0x5ae3,	// (0x00082eb4) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0008ca60) cams2_slider_pane_g

0x2338,	// (0x0007f709) calc_display_pane_ParamLimits

0x2356,	// (0x0007f727) calc_paper_pane_ParamLimits

0x2372,	// (0x0007f743) grid_calc_pane_ParamLimits

0x4297,	// (0x00081668) popup_clock_digital_window_t1_ParamLimits

0xb8b4,	// (0x00088c85) main_image_pane_t1

0x231e,	// (0x0007f6ef) aid_size_cell_calc_ParamLimits

0x231e,	// (0x0007f6ef) aid_size_cell_calc

0x5204,	// (0x000825d5) popup_blid_sat_info2_window_ParamLimits

0x5204,	// (0x000825d5) popup_blid_sat_info2_window

0xcc66,	// (0x0008a037) aid_size_cell_blid

0xcc6e,	// (0x0008a03f) bg_popup_window_pane_cp07

0xcc91,	// (0x0008a062) grid_popup_blid_pane

0xcc9b,	// (0x0008a06c) heading_pane_cp05_ParamLimits

0xcc9b,	// (0x0008a06c) heading_pane_cp05

0xcd65,	// (0x0008a136) cell_popup_blid_pane_ParamLimits

0xcd65,	// (0x0008a136) cell_popup_blid_pane

0xcd8f,	// (0x0008a160) cell_popup_blid_pane_g1

0xcd97,	// (0x0008a168) cell_popup_blid_pane_t1

0x590b,	// (0x00082cdc) mup2_indicator_pane_ParamLimits

0x590b,	// (0x00082cdc) mup2_indicator_pane

0xabc1,	// (0x00087f92) mup2_visualizer_osc_pane

0xcb47,	// (0x00089f18) mup2_visualizer_spec_pane_ParamLimits

0xcb47,	// (0x00089f18) mup2_visualizer_spec_pane

0x5afd,	// (0x00082ece) mup2_spec_half_pane

0x5b06,	// (0x00082ed7) mup2_spec_half_pane_cp

0x5b10,	// (0x00082ee1) mup2_spec_bar_pane_ParamLimits

0x5b10,	// (0x00082ee1) mup2_spec_bar_pane

0xcac5,	// (0x00089e96) mup2_spec_bar_pane_g1

0xcacf,	// (0x00089ea0) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0008c9d3) mup2_spec_bar_pane_g

0x5b2f,	// (0x00082f00) mup2_osc_middle_pane

0xcae1,	// (0x00089eb2) mup2_visualizer_osc_pane_g1

0xa29d,	// (0x0008766e) popup_number_entry_window_t1_ParamLimits

0xa2b0,	// (0x00087681) popup_number_entry_window_t2_ParamLimits

0xa2c2,	// (0x00087693) popup_number_entry_window_t3_ParamLimits

0xa2d4,	// (0x000876a5) popup_number_entry_window_t5_ParamLimits

0xa2d4,	// (0x000876a5) popup_number_entry_window_t5

0xf0c6,	// (0x0008c497) popup_number_entry_window_t_ParamLimits

0xa309,	// (0x000876da) text_title_cp2_ParamLimits

0x4a19,	// (0x00081dea) aid_hotspot_pointer_text2_pane

0x4ab3,	// (0x00081e84) main_viewer_pane_g9_ParamLimits

0x4ab3,	// (0x00081e84) main_viewer_pane_g9

0xaf1e,	// (0x000882ef) cale_month_pane_t1_ParamLimits

0xaf5b,	// (0x0008832c) bg_cale_pane_ParamLimits

0xaf73,	// (0x00088344) list_cale_pane_ParamLimits

0xaf84,	// (0x00088355) listscroll_cale_day_pane_t1

0xaf96,	// (0x00088367) scroll_pane_cp09_ParamLimits

0x47bc,	// (0x00081b8d) main_mup_eq_pane_t1_ParamLimits

0x47bc,	// (0x00081b8d) main_mup_eq_pane_t1

0x47d8,	// (0x00081ba9) main_mup_eq_pane_t2_ParamLimits

0x47d8,	// (0x00081ba9) main_mup_eq_pane_t2

0x47f4,	// (0x00081bc5) main_mup_eq_pane_t3_ParamLimits

0x47f4,	// (0x00081bc5) main_mup_eq_pane_t3

0x480e,	// (0x00081bdf) main_mup_eq_pane_t4_ParamLimits

0x480e,	// (0x00081bdf) main_mup_eq_pane_t4

0x4828,	// (0x00081bf9) main_mup_eq_pane_t5_ParamLimits

0x4828,	// (0x00081bf9) main_mup_eq_pane_t5

0x4842,	// (0x00081c13) main_mup_eq_pane_t6_ParamLimits

0x4842,	// (0x00081c13) main_mup_eq_pane_t6

0x4858,	// (0x00081c29) main_mup_eq_pane_t7_ParamLimits

0x4858,	// (0x00081c29) main_mup_eq_pane_t7

0x486e,	// (0x00081c3f) main_mup_eq_pane_t8_ParamLimits

0x486e,	// (0x00081c3f) main_mup_eq_pane_t8

0x4884,	// (0x00081c55) main_mup_eq_pane_t9_ParamLimits

0x4884,	// (0x00081c55) main_mup_eq_pane_t9

0x48a0,	// (0x00081c71) main_mup_eq_pane_t10_ParamLimits

0x48a0,	// (0x00081c71) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0008c822) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0008c822) main_mup_eq_pane_t

0x4965,	// (0x00081d36) mup_equalizer_pane_cp5_ParamLimits

0x497d,	// (0x00081d4e) mup_equalizer_pane_cp6_ParamLimits

0x4995,	// (0x00081d66) mup_equalizer_pane_cp7_ParamLimits

0xa273,	// (0x00087644) main_gallery_pane

0xcaea,	// (0x00089ebb) smil2_volume_pane

0xcaf2,	// (0x00089ec3) smil_status_volume_pane_g1_ParamLimits

0xcb05,	// (0x00089ed6) smil_status_volume_pane_g2_ParamLimits

0x5429,	// (0x000827fa) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0008c9d8) smil_status_volume_pane_g_ParamLimits

0xcc6e,	// (0x0008a03f) bg_popup_window_pane_cp07_ParamLimits

0xcc7c,	// (0x0008a04d) blid_firmament_pane

0x5b38,	// (0x00082f09) aid_size_cell_gallery_ParamLimits

0x5b38,	// (0x00082f09) aid_size_cell_gallery

0x5b46,	// (0x00082f17) grid_gallery_pane_ParamLimits

0x5b46,	// (0x00082f17) grid_gallery_pane

0x5b56,	// (0x00082f27) cell_gallery_pane_ParamLimits

0x5b56,	// (0x00082f27) cell_gallery_pane

0xcda5,	// (0x0008a176) bg_cell_gallery_focus_pane_ParamLimits

0xcda5,	// (0x0008a176) bg_cell_gallery_focus_pane

0xcdb7,	// (0x0008a188) cell_gallery_pane_g1_ParamLimits

0xcdb7,	// (0x0008a188) cell_gallery_pane_g1

0x5ba1,	// (0x00082f72) cell_gallery_pane_g2_ParamLimits

0x5ba1,	// (0x00082f72) cell_gallery_pane_g2

0x5bae,	// (0x00082f7f) cell_gallery_pane_g3_ParamLimits

0x5bae,	// (0x00082f7f) cell_gallery_pane_g3

0xcdc3,	// (0x0008a194) cell_gallery_pane_g4_ParamLimits

0xcdc3,	// (0x0008a194) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0008ca86) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0008ca86) cell_gallery_pane_g

0xcdcf,	// (0x0008a1a0) bg_cell_gallery_focus_pane_g1

0xcdd7,	// (0x0008a1a8) bg_cell_gallery_focus_pane_g2

0xcddf,	// (0x0008a1b0) bg_cell_gallery_focus_pane_g3

0xcde7,	// (0x0008a1b8) bg_cell_gallery_focus_pane_g4

0xcdef,	// (0x0008a1c0) bg_cell_gallery_focus_pane_g5

0xcdf7,	// (0x0008a1c8) bg_cell_gallery_focus_pane_g6

0xcdff,	// (0x0008a1d0) bg_cell_gallery_focus_pane_g7

0xce07,	// (0x0008a1d8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0008ca8f) bg_cell_gallery_focus_pane_g

0xce0f,	// (0x0008a1e0) aid_firma_cardinal

0xce23,	// (0x0008a1f4) blid_firmament_pane_t1

0xce3a,	// (0x0008a20b) blid_firmament_pane_t2

0xce51,	// (0x0008a222) blid_firmament_pane_t3

0xce68,	// (0x0008a239) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0008caa0) blid_firmament_pane_t

0xce7f,	// (0x0008a250) blid_sat_info_pane

0xce8f,	// (0x0008a260) blid_sat_info_pane_g1

0xce8f,	// (0x0008a260) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0008caa9) blid_sat_info_pane_g

0xce99,	// (0x0008a26a) blid_sat_info_pane_t1

0xcea7,	// (0x0008a278) smil2_volume_content_pane

0xceb0,	// (0x0008a281) smil2_volume_pane_g1

0xad4d,	// (0x0008811e) smil2_volume_content_pane_g1

0xceb8,	// (0x0008a289) smil2_volume_content_pane_g2

0xcec1,	// (0x0008a292) smil2_volume_content_pane_g3

0xceca,	// (0x0008a29b) smil2_volume_content_pane_g4

0xced3,	// (0x0008a2a4) smil2_volume_content_pane_g5

0xcedc,	// (0x0008a2ad) smil2_volume_content_pane_g6

0xcee5,	// (0x0008a2b6) smil2_volume_content_pane_g7

0xceee,	// (0x0008a2bf) smil2_volume_content_pane_g8

0xcef7,	// (0x0008a2c8) smil2_volume_content_pane_g9

0xcf00,	// (0x0008a2d1) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0008caae) smil2_volume_content_pane_g

0x2a5d,	// (0x0007fe2e) cale_week_day_heading_pane_t1_ParamLimits

0x2a85,	// (0x0007fe56) cale_week_day_heading_pane_t2_ParamLimits

0x2ab2,	// (0x0007fe83) cale_week_day_heading_pane_t3_ParamLimits

0x2adf,	// (0x0007feb0) cale_week_day_heading_pane_t4_ParamLimits

0x2b0c,	// (0x0007fedd) cale_week_day_heading_pane_t5_ParamLimits

0x2b39,	// (0x0007ff0a) cale_week_day_heading_pane_t6_ParamLimits

0x2b66,	// (0x0007ff37) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0008c59e) cale_week_day_heading_pane_t_ParamLimits

0xab66,	// (0x00087f37) bg_cale_side_pane_ParamLimits

0x2b8e,	// (0x0007ff5f) cale_week_time_pane_t1_ParamLimits

0x2bb2,	// (0x0007ff83) cale_week_time_pane_t2_ParamLimits

0x2bd6,	// (0x0007ffa7) cale_week_time_pane_t3_ParamLimits

0x2bfa,	// (0x0007ffcb) cale_week_time_pane_t4_ParamLimits

0x2c1e,	// (0x0007ffef) cale_week_time_pane_t5_ParamLimits

0x2c44,	// (0x00080015) cale_week_time_pane_t6_ParamLimits

0x2c6c,	// (0x0008003d) cale_week_time_pane_t7_ParamLimits

0x2c98,	// (0x00080069) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0008c5ad) cale_week_time_pane_t_ParamLimits

0x2cc8,	// (0x00080099) cell_cale_week_pane_g2_ParamLimits

0xab66,	// (0x00087f37) bg_cale_side_pane_cp01_ParamLimits

0x3eb4,	// (0x00081285) cale_month_week_pane_t1_ParamLimits

0x3ecd,	// (0x0008129e) cale_month_week_pane_t2_ParamLimits

0x3ee6,	// (0x000812b7) cale_month_week_pane_t3_ParamLimits

0x3eff,	// (0x000812d0) cale_month_week_pane_t4_ParamLimits

0x3f18,	// (0x000812e9) cale_month_week_pane_t5_ParamLimits

0x3f35,	// (0x00081306) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0008c682) cale_month_week_pane_t_ParamLimits

0x4086,	// (0x00081457) cell_cale_month_pane_g1_ParamLimits

0xa273,	// (0x00087644) main_cale_event_viewer_pane

0xa273,	// (0x00087644) listscroll_cale_event_viewer_pane

0xcf09,	// (0x0008a2da) list_cale_ev_pane

0xcf11,	// (0x0008a2e2) scroll_pane_cp023

0x5bbb,	// (0x00082f8c) field_cale_ev_pane_ParamLimits

0x5bbb,	// (0x00082f8c) field_cale_ev_pane

0xcf1d,	// (0x0008a2ee) field_cale_ev_content_pane_ParamLimits

0xcf1d,	// (0x0008a2ee) field_cale_ev_content_pane

0xcf29,	// (0x0008a2fa) field_cale_ev_pane_g1_ParamLimits

0xcf29,	// (0x0008a2fa) field_cale_ev_pane_g1

0xcf35,	// (0x0008a306) field_cale_ev_pane_g2_ParamLimits

0xcf35,	// (0x0008a306) field_cale_ev_pane_g2

0xcf4d,	// (0x0008a31e) field_cale_ev_pane_g3_ParamLimits

0xcf4d,	// (0x0008a31e) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0008cac3) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0008cac3) field_cale_ev_pane_g

0xcf65,	// (0x0008a336) field_cale_ev_pane_t1_ParamLimits

0xcf65,	// (0x0008a336) field_cale_ev_pane_t1

0x5bdf,	// (0x00082fb0) field_cale_ev_content_pane_t1_ParamLimits

0x5bdf,	// (0x00082fb0) field_cale_ev_content_pane_t1

0xb79a,	// (0x00088b6b) bg_button_pane_cp01

0x26bb,	// (0x0007fa8c) listscroll_cale_week_pane_ParamLimits

0xab2e,	// (0x00087eff) popup_toolbar_window_cp01

0xab37,	// (0x00087f08) listscroll_cale_week_pane_t1_ParamLimits

0x26bb,	// (0x0007fa8c) listscroll_cale_day_pane_ParamLimits

0xab2e,	// (0x00087eff) popup_toolbar_window_cp02

0xaf84,	// (0x00088355) listscroll_cale_day_pane_t1_ParamLimits

0x26bb,	// (0x0007fa8c) main_cale_month_pane_ParamLimits

0x5323,	// (0x000826f4) popup_toolbar_window_cp03_ParamLimits

0x5323,	// (0x000826f4) popup_toolbar_window_cp03

0x4c3c,	// (0x0008200d) main_image_pane_g2_ParamLimits

0x4c3c,	// (0x0008200d) main_image_pane_g2

0x4c48,	// (0x00082019) main_image_pane_g3_ParamLimits

0x4c48,	// (0x00082019) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0008c8b4) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0008c8b4) main_image_pane_g

0xb8b4,	// (0x00088c85) main_image_pane_t1_ParamLimits

0x4c54,	// (0x00082025) main_image_pane_t2_ParamLimits

0x4c54,	// (0x00082025) main_image_pane_t2

0x4c66,	// (0x00082037) main_image_pane_t3_ParamLimits

0x4c66,	// (0x00082037) main_image_pane_t3

0x4c78,	// (0x00082049) main_image_pane_t4_ParamLimits

0x4c78,	// (0x00082049) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0008c8bb) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0008c8bb) main_image_pane_t

0x4c8a,	// (0x0008205b) popup_image_details_window_cp01

0x4c94,	// (0x00082065) popup_toobar_trans_pane_cp01_ParamLimits

0x4c94,	// (0x00082065) popup_toobar_trans_pane_cp01

0x5265,	// (0x00082636) popup_image_details_window_ParamLimits

0x5265,	// (0x00082636) popup_image_details_window

0x5273,	// (0x00082644) popup_image_focus_window

0x5597,	// (0x00082968) camera2_autofocus_pane_ParamLimits

0x5597,	// (0x00082968) camera2_autofocus_pane

0xa273,	// (0x00087644) bg_popup_sub_pane_cp06

0xcf7c,	// (0x0008a34d) popup_image_focus_window_g1

0xcf84,	// (0x0008a355) popup_image_focus_window_g2

0xcf8c,	// (0x0008a35d) popup_image_focus_window_g3

0xcf94,	// (0x0008a365) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0008caca) popup_image_focus_window_g

0xcf9c,	// (0x0008a36d) popup_image_focus_window_t1

0xcfaa,	// (0x0008a37b) popup_image_focus_window_t2

0xcfba,	// (0x0008a38b) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0008cad3) popup_image_focus_window_t

0xcfc8,	// (0x0008a399) camera2_autofocus_pane_g1

0xbdbe,	// (0x0008918f) bg_tb_trans_pane_cp01

0xcfd6,	// (0x0008a3a7) popup_image_details_window_g1

0xcfe9,	// (0x0008a3ba) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0008cae5) popup_image_details_window_g

0xd012,	// (0x0008a3e3) popup_image_details_window_t1

0xd024,	// (0x0008a3f5) popup_image_details_window_t2

0xd03d,	// (0x0008a40e) popup_image_details_window_t3

0xd051,	// (0x0008a422) popup_image_details_window_t4

0xd06c,	// (0x0008a43d) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0008caec) popup_image_details_window_t

0xa9d1,	// (0x00087da2) bg_calc_paper_pane_ParamLimits

0xa273,	// (0x00087644) grid_highlight_pane_cp013

0x246f,	// (0x0007f840) list_calc_pane_ParamLimits

0x2481,	// (0x0007f852) scroll_pane_cp024

0xaa19,	// (0x00087dea) bg_calc_display_pane_ParamLimits

0x2489,	// (0x0007f85a) calc_display_pane_t1_ParamLimits

0x249e,	// (0x0007f86f) calc_display_pane_t2_ParamLimits

0x24b3,	// (0x0007f884) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0008c51e) calc_display_pane_t_ParamLimits

0x2583,	// (0x0007f954) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0008c53b) cell_calc_pane_g

0x258c,	// (0x0007f95d) cell_calc_pane_t1

0xaa78,	// (0x00087e49) grid_highlight_pane_cp02_ParamLimits

0xaa8e,	// (0x00087e5f) toolbar_button_pane_cp01_ParamLimits

0xaa8e,	// (0x00087e5f) toolbar_button_pane_cp01

0xb8f9,	// (0x00088cca) temp_image_control_pane_ParamLimits

0xb8f9,	// (0x00088cca) temp_image_control_pane

0xbdbe,	// (0x0008918f) main_mp3_pane

0xd086,	// (0x0008a457) temp_image_control_pane_g1_ParamLimits

0xd086,	// (0x0008a457) temp_image_control_pane_g1

0xd094,	// (0x0008a465) temp_image_control_pane_g2_ParamLimits

0xd094,	// (0x0008a465) temp_image_control_pane_g2

0xd0a6,	// (0x0008a477) temp_image_control_pane_g3_ParamLimits

0xd0a6,	// (0x0008a477) temp_image_control_pane_g3

0x5c2a,	// (0x00082ffb) temp_image_control_pane_g4_ParamLimits

0x5c2a,	// (0x00082ffb) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0008caf7) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0008caf7) temp_image_control_pane_g

0xd086,	// (0x0008a457) main_mp3_pane_g1

0x5c3b,	// (0x0008300c) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0008cb00) main_mp3_pane_g

0xd0e9,	// (0x0008a4ba) main_mp3_pane_t1

0xabc9,	// (0x00087f9a) main_camera_pane_g8_ParamLimits

0xabc9,	// (0x00087f9a) main_camera_pane_g8

0x2f63,	// (0x00080334) main_video_pane_g7_ParamLimits

0x2f63,	// (0x00080334) main_video_pane_g7

0x56da,	// (0x00082aab) main_camera2_pane_t7_ParamLimits

0x56da,	// (0x00082aab) main_camera2_pane_t7

0xad15,	// (0x000880e6) scroll_pane_cp025_ParamLimits

0xad15,	// (0x000880e6) scroll_pane_cp025

0xad29,	// (0x000880fa) scroll_pane_cp026_ParamLimits

0xad29,	// (0x000880fa) scroll_pane_cp026

0xad5f,	// (0x00088130) wml_content_pane_ParamLimits

0xa273,	// (0x00087644) main_touch_calib_pane

0x5cdf,	// (0x000830b0) main_touch_calib_pane_g1

0x5ceb,	// (0x000830bc) main_touch_calib_pane_g2

0x5cf7,	// (0x000830c8) main_touch_calib_pane_g3

0x5d03,	// (0x000830d4) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0008cb1e) main_touch_calib_pane_g

0x5d0f,	// (0x000830e0) main_touch_calib_pane_t1

0x5d26,	// (0x000830f7) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0008cb27) main_touch_calib_pane_t

0xb4d0,	// (0x000888a1) mup_progress_pane_cp02

0xb505,	// (0x000888d6) navi_pane_g1

0xb5c0,	// (0x00088991) navi_pane_mp_t3

0xbdbe,	// (0x0008918f) main_mp3_pane_ParamLimits

0x5364,	// (0x00082735) navi_pane_ParamLimits

0xd086,	// (0x0008a457) main_mp3_pane_g1_ParamLimits

0x5c3b,	// (0x0008300c) main_mp3_pane_g2_ParamLimits

0x5c47,	// (0x00083018) main_mp3_pane_g3_ParamLimits

0x5c47,	// (0x00083018) main_mp3_pane_g3

0x5c53,	// (0x00083024) main_mp3_pane_g4_ParamLimits

0x5c53,	// (0x00083024) main_mp3_pane_g4

0xd0b6,	// (0x0008a487) main_mp3_pane_g5_ParamLimits

0xd0b6,	// (0x0008a487) main_mp3_pane_g5

0xd0c4,	// (0x0008a495) main_mp3_pane_g6_ParamLimits

0xd0c4,	// (0x0008a495) main_mp3_pane_g6

0xd0d1,	// (0x0008a4a2) main_mp3_pane_g7_ParamLimits

0xd0d1,	// (0x0008a4a2) main_mp3_pane_g7

0xd0dd,	// (0x0008a4ae) main_mp3_pane_g8_ParamLimits

0xd0dd,	// (0x0008a4ae) main_mp3_pane_g8

0xf72f,	// (0x0008cb00) main_mp3_pane_g_ParamLimits

0x5c5f,	// (0x00083030) main_mp3_pane_t2

0x5c6f,	// (0x00083040) main_mp3_pane_t3

0xd0f7,	// (0x0008a4c8) main_mp3_pane_t4

0xd105,	// (0x0008a4d6) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0008cb11) main_mp3_pane_t

0xd113,	// (0x0008a4e4) mup_progress_pane_cp01

0x0bac,	// (0x0007df7d) aid_zoom_text_secondary2

0xcf09,	// (0x0008a2da) list_cale_ev2_pane

0xcf11,	// (0x0008a2e2) scroll_pane_cp023_ParamLimits

0x5d81,	// (0x00083152) field_cale_ev2_pane_ParamLimits

0x5d81,	// (0x00083152) field_cale_ev2_pane

0x5d9c,	// (0x0008316d) field_cale_ev2_pane_g1_ParamLimits

0x5d9c,	// (0x0008316d) field_cale_ev2_pane_g1

0x5da8,	// (0x00083179) field_cale_ev2_pane_g2_ParamLimits

0x5da8,	// (0x00083179) field_cale_ev2_pane_g2

0x5dc0,	// (0x00083191) field_cale_ev2_pane_g3_ParamLimits

0x5dc0,	// (0x00083191) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0008cb32) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0008cb32) field_cale_ev2_pane_g

0x0e90,	// (0x0007e261) field_cale_ev2_pane_t1_ParamLimits

0x0e90,	// (0x0007e261) field_cale_ev2_pane_t1

0x0ea7,	// (0x0007e278) field_cale_ev2_pane_t2_ParamLimits

0x0ea7,	// (0x0007e278) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0008cb3b) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0008cb3b) field_cale_ev2_pane_t

0x4b1b,	// (0x00081eec) main_postcard_pane_g5_ParamLimits

0x4b1b,	// (0x00081eec) main_postcard_pane_g5

0x4b29,	// (0x00081efa) main_postcard_pane_g6_ParamLimits

0x4b29,	// (0x00081efa) main_postcard_pane_g6

0x2da1,	// (0x00080172) camera2_autofocus_pane_cp_ParamLimits

0x2da1,	// (0x00080172) camera2_autofocus_pane_cp

0xbdbe,	// (0x0008918f) main_mup3_pane

0x5e27,	// (0x000831f8) main_mup3_pane_g1_ParamLimits

0x5e27,	// (0x000831f8) main_mup3_pane_g1

0x5e48,	// (0x00083219) main_mup3_pane_g2_ParamLimits

0x5e48,	// (0x00083219) main_mup3_pane_g2

0x5ebc,	// (0x0008328d) main_mup3_pane_g3_ParamLimits

0x5ebc,	// (0x0008328d) main_mup3_pane_g3

0x5f21,	// (0x000832f2) main_mup3_pane_g4_ParamLimits

0x5f21,	// (0x000832f2) main_mup3_pane_g4

0x5f86,	// (0x00083357) main_mup3_pane_g5_ParamLimits

0x5f86,	// (0x00083357) main_mup3_pane_g5

0x5feb,	// (0x000833bc) main_mup3_pane_g6_ParamLimits

0x5feb,	// (0x000833bc) main_mup3_pane_g6

0xd11b,	// (0x0008a4ec) main_mup3_pane_g7_ParamLimits

0xd11b,	// (0x0008a4ec) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0008cb4b) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0008cb4b) main_mup3_pane_g

0x6061,	// (0x00083432) main_mup3_pane_t1_ParamLimits

0x6061,	// (0x00083432) main_mup3_pane_t1

0x60cc,	// (0x0008349d) main_mup3_pane_t2_ParamLimits

0x60cc,	// (0x0008349d) main_mup3_pane_t2

0x6191,	// (0x00083562) main_mup3_pane_t4_ParamLimits

0x6191,	// (0x00083562) main_mup3_pane_t4

0x61e5,	// (0x000835b6) main_mup3_pane_t5_ParamLimits

0x61e5,	// (0x000835b6) main_mup3_pane_t5

0x6295,	// (0x00083666) main_mup3_pane_t6_ParamLimits

0x6295,	// (0x00083666) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0008cb5c) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0008cb5c) main_mup3_pane_t

0x633f,	// (0x00083710) mup3_progress_pane_ParamLimits

0x633f,	// (0x00083710) mup3_progress_pane

0x63bd,	// (0x0008378e) popup_mup3_control_window_ParamLimits

0x63bd,	// (0x0008378e) popup_mup3_control_window

0xd129,	// (0x0008a4fa) popup_mup3_text_window

0x63da,	// (0x000837ab) mup3_progress_pane_t1

0x63f9,	// (0x000837ca) mup3_progress_pane_t2

0xd131,	// (0x0008a502) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0008cb69) mup3_progress_pane_t

0xd14e,	// (0x0008a51f) mup_progress_pane_cp03

0xa273,	// (0x00087644) bg_tb_trans_pane_cp04

0x6418,	// (0x000837e9) mup3_volume_pane

0x6420,	// (0x000837f1) popup_mup3_control_window_g1

0xdbc7,	// (0x0008af98) mup3_volume_pane_g1

0xdbd0,	// (0x0008afa1) mup3_volume_pane_g2

0xdbd9,	// (0x0008afaa) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0008cb70) mup3_volume_pane_g

0xa273,	// (0x00087644) bg_tb_trans_pane_cp03

0xd15e,	// (0x0008a52f) popup_mup3_text_window_g1

0xd166,	// (0x0008a537) popup_mup3_text_window_t1

0xaa61,	// (0x00087e32) list_calc_item_pane_g1_ParamLimits

0xcbdc,	// (0x00089fad) mup_volume_pane_cp_g1

0x5d3f,	// (0x00083110) main_touch_calib_pane_t3

0x5d55,	// (0x00083126) main_touch_calib_pane_t4

0x5d6b,	// (0x0008313c) main_touch_calib_pane_t5

0x1e95,	// (0x0007f266) aid_cell_size_toolbar2

0x1e9d,	// (0x0007f26e) aid_popup3_width_pane

0x0b9c,	// (0x0007df6d) aid_zoom_text_msg_primary

0x2d74,	// (0x00080145) vorec_t7

0xaa25,	// (0x00087df6) bg_calc_paper_pane_g1_ParamLimits

0xaa31,	// (0x00087e02) bg_calc_paper_pane_g2_ParamLimits

0xaa3d,	// (0x00087e0e) bg_calc_paper_pane_g3_ParamLimits

0xaa49,	// (0x00087e1a) bg_calc_paper_pane_g4_ParamLimits

0xaa55,	// (0x00087e26) bg_calc_paper_pane_g5_ParamLimits

0x24f4,	// (0x0007f8c5) bg_calc_paper_pane_g6_ParamLimits

0x2505,	// (0x0007f8d6) bg_calc_paper_pane_g7_ParamLimits

0x2516,	// (0x0007f8e7) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0008c525) bg_calc_paper_pane_g_ParamLimits

0x2527,	// (0x0007f8f8) calc_bg_paper_pane_g9_ParamLimits

0x2e92,	// (0x00080263) image_qvga_pane_ParamLimits

0x2e92,	// (0x00080263) image_qvga_pane

0xa920,	// (0x00087cf1) bg_popup_sub_pane_cp04_ParamLimits

0xb830,	// (0x00088c01) popup_mup_playback_window_g1_ParamLimits

0xb83c,	// (0x00088c0d) popup_mup_playback_window_t1_ParamLimits

0xb851,	// (0x00088c22) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0008c8af) popup_mup_playback_window_t_ParamLimits

0x5809,	// (0x00082bda) main_mup2_pane_g3_ParamLimits

0x5809,	// (0x00082bda) main_mup2_pane_g3

0x313e,	// (0x0008050f) popup_toolbar_window_cp04

0xbc4c,	// (0x0008901d) popup_call2_audio_second_window_g3_ParamLimits

0xbc4c,	// (0x0008901d) popup_call2_audio_second_window_g3

0xc06d,	// (0x0008943e) popup_call2_audio_first_window_g4_ParamLimits

0xc06d,	// (0x0008943e) popup_call2_audio_first_window_g4

0xc6ec,	// (0x00089abd) popup_call2_audio_in_window_g4_ParamLimits

0xc6ec,	// (0x00089abd) popup_call2_audio_in_window_g4

0x4c2f,	// (0x00082000) aid_area_sk_bg_cut_ParamLimits

0x4c2f,	// (0x00082000) aid_area_sk_bg_cut

0xb866,	// (0x00088c37) aid_area_sk_bg_cut_2_ParamLimits

0xb866,	// (0x00088c37) aid_area_sk_bg_cut_2

0x5b91,	// (0x00082f62) aid_placing_details_win

0x5b99,	// (0x00082f6a) aid_placing_details_win_2

0xcfc8,	// (0x0008a399) camera2_autofocus_pane_g1_ParamLimits

0x20ec,	// (0x0007f4bd) popup_fixed_preview_cale_window_ParamLimits

0x20ec,	// (0x0007f4bd) popup_fixed_preview_cale_window

0xb640,	// (0x00088a11) navi_slider_pane_g3

0xb649,	// (0x00088a1a) navi_slider_pane_g4

0xb652,	// (0x00088a23) navi_slider_pane_g5

0xb640,	// (0x00088a11) navi_slider_pane_g6

0x4532,	// (0x00081903) navi_slider_pane_g7

0xb767,	// (0x00088b38) mup_scale_pane_g3

0xb770,	// (0x00088b41) mup_scale_pane_g4

0xb779,	// (0x00088b4a) mup_scale_pane_g5

0x49ad,	// (0x00081d7e) mup_scale_pane_g6

0x49b6,	// (0x00081d87) mup_scale_pane_g7

0xb640,	// (0x00088a11) cams2_slider_pane_g3

0xcc5e,	// (0x0008a02f) cams2_slider_pane_g4

0x5aec,	// (0x00082ebd) cams2_slider_pane_g5

0xb640,	// (0x00088a11) cams2_slider_pane_g6

0x5af4,	// (0x00082ec5) cams2_slider_pane_g7

0xce8f,	// (0x0008a260) camera2_autofocus_pane_cp_g1

0xca4b,	// (0x00089e1c) bg_popup_preview_window_pane_cp02_ParamLimits

0xca4b,	// (0x00089e1c) bg_popup_preview_window_pane_cp02

0xd174,	// (0x0008a545) list_fp_cale_pane_ParamLimits

0xd174,	// (0x0008a545) list_fp_cale_pane

0xd180,	// (0x0008a551) popup_fixed_preview_cale_window_t1_ParamLimits

0xd180,	// (0x0008a551) popup_fixed_preview_cale_window_t1

0x6429,	// (0x000837fa) popup_fixed_preview_cale_window_t2_ParamLimits

0x6429,	// (0x000837fa) popup_fixed_preview_cale_window_t2

0x643e,	// (0x0008380f) popup_fixed_preview_cale_window_t3_ParamLimits

0x643e,	// (0x0008380f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0008cb77) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0008cb77) popup_fixed_preview_cale_window_t

0x6453,	// (0x00083824) list_single_fp_cale_pane_ParamLimits

0x6453,	// (0x00083824) list_single_fp_cale_pane

0xd19e,	// (0x0008a56f) list_single_fp_cale_pane_g1_ParamLimits

0xd19e,	// (0x0008a56f) list_single_fp_cale_pane_g1

0xd1aa,	// (0x0008a57b) list_single_fp_cale_pane_g2_ParamLimits

0xd1aa,	// (0x0008a57b) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0008cb7e) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0008cb7e) list_single_fp_cale_pane_g

0xd1c3,	// (0x0008a594) list_single_fp_cale_pane_t1_ParamLimits

0xd1c3,	// (0x0008a594) list_single_fp_cale_pane_t1

0xd1d5,	// (0x0008a5a6) list_single_fp_cale_pane_t2_ParamLimits

0xd1d5,	// (0x0008a5a6) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0008cb85) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0008cb85) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa273,	// (0x00087644) main_dialer_pane

0x6463,	// (0x00083834) aid_cell_size_keypad

0x646d,	// (0x0008383e) dialer_ne_pane

0x6477,	// (0x00083848) grid_dialer_command_1_pane

0x647f,	// (0x00083850) grid_dialer_command_2_pane

0x6487,	// (0x00083858) grid_dialer_keypad_pane

0x649b,	// (0x0008386c) bg_popup_call_pane_cp06_ParamLimits

0x649b,	// (0x0008386c) bg_popup_call_pane_cp06

0x64a7,	// (0x00083878) dialer_ne_clear_pane_ParamLimits

0x64a7,	// (0x00083878) dialer_ne_clear_pane

0xd21c,	// (0x0008a5ed) dialer_ne_pane_g1

0xd224,	// (0x0008a5f5) dialer_ne_pane_t1_ParamLimits

0xd224,	// (0x0008a5f5) dialer_ne_pane_t1

0x64b3,	// (0x00083884) dialer_ne_pane_t2_ParamLimits

0x64b3,	// (0x00083884) dialer_ne_pane_t2

0x64d0,	// (0x000838a1) dialer_ne_pane_t3_ParamLimits

0x64d0,	// (0x000838a1) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0008cb8a) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0008cb8a) dialer_ne_pane_t

0x64f4,	// (0x000838c5) dialer_ne_pane_t3_copy1_ParamLimits

0x64f4,	// (0x000838c5) dialer_ne_pane_t3_copy1

0x6518,	// (0x000838e9) cell_dialer_keypad_pane_ParamLimits

0x6518,	// (0x000838e9) cell_dialer_keypad_pane

0x652f,	// (0x00083900) cell_dialer_command_1_pane_ParamLimits

0x652f,	// (0x00083900) cell_dialer_command_1_pane

0x6545,	// (0x00083916) cell_dialer_command_2_pane_ParamLimits

0x6545,	// (0x00083916) cell_dialer_command_2_pane

0xd236,	// (0x0008a607) bg_button_pane_cp02_ParamLimits

0xd236,	// (0x0008a607) bg_button_pane_cp02

0x6554,	// (0x00083925) cell_dialer_keypad_pane_g1_ParamLimits

0x6554,	// (0x00083925) cell_dialer_keypad_pane_g1

0xd236,	// (0x0008a607) bg_button_pane_cp03_ParamLimits

0xd236,	// (0x0008a607) bg_button_pane_cp03

0x6569,	// (0x0008393a) cell_dialer_command_1_pane_g1_ParamLimits

0x6569,	// (0x0008393a) cell_dialer_command_1_pane_g1

0xd242,	// (0x0008a613) bg_button_pane_cp04

0x657d,	// (0x0008394e) cell_dialer_command_2_pane_g1

0xabc1,	// (0x00087f92) bg_button_pane_cp06

0xd24a,	// (0x0008a61b) dialer_ne_clear_pane_g1

0xb511,	// (0x000888e2) navi_pane_g2

0xb53f,	// (0x00088910) navi_pane_g3

0x0002,

0xf3e1,	// (0x0008c7b2) navi_pane_g

0xb5ce,	// (0x0008899f) navi_pane_mv_g2

0xb5f7,	// (0x000889c8) navi_pane_mv_g5

0x44fd,	// (0x000818ce) navi_pane_mv_t1

0xaa19,	// (0x00087dea) main_clock2_pane

0xe1ff,	// (0x0008b5d0) main_clock2_list_pane_ParamLimits

0xe1ff,	// (0x0008b5d0) main_clock2_list_pane

0x65d8,	// (0x000839a9) main_clock2_pane_t1_ParamLimits

0x65d8,	// (0x000839a9) main_clock2_pane_t1

0x6606,	// (0x000839d7) main_clock2_pane_t2_ParamLimits

0x6606,	// (0x000839d7) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0008cb96) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0008cb96) main_clock2_pane_t

0x666b,	// (0x00083a3c) popup_clock_analogue_window_cp03_ParamLimits

0x666b,	// (0x00083a3c) popup_clock_analogue_window_cp03

0x6689,	// (0x00083a5a) popup_clock_digital_window_cp02_ParamLimits

0x6689,	// (0x00083a5a) popup_clock_digital_window_cp02

0x66fe,	// (0x00083acf) main_clock2_list_single_pane_ParamLimits

0x66fe,	// (0x00083acf) main_clock2_list_single_pane

0xabc1,	// (0x00087f92) list_highlight_pane_cp05

0xd282,	// (0x0008a653) main_clock2_list_single_pane_t1

0x313e,	// (0x0008050f) popup_toolbar_window_cp04_ParamLimits

0x5bfa,	// (0x00082fcb) camera2_autofocus_pane_g2_ParamLimits

0x5bfa,	// (0x00082fcb) camera2_autofocus_pane_g2

0x5c06,	// (0x00082fd7) camera2_autofocus_pane_g3_ParamLimits

0x5c06,	// (0x00082fd7) camera2_autofocus_pane_g3

0x5c12,	// (0x00082fe3) camera2_autofocus_pane_g4_ParamLimits

0x5c12,	// (0x00082fe3) camera2_autofocus_pane_g4

0x5c1e,	// (0x00082fef) camera2_autofocus_pane_g5_ParamLimits

0x5c1e,	// (0x00082fef) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0008cada) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0008cada) camera2_autofocus_pane_g

0x5de4,	// (0x000831b5) camera2_autofocus_pane_cp_g2

0x5dec,	// (0x000831bd) camera2_autofocus_pane_cp_g3

0x5df4,	// (0x000831c5) camera2_autofocus_pane_cp_g4

0x5dfc,	// (0x000831cd) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0008cb40) camera2_autofocus_pane_cp_g

0x6493,	// (0x00083864) popup_dialer_spcha_window

0xa273,	// (0x00087644) bg_popup_sub_pane_cp07

0xd290,	// (0x0008a661) list_spcha_pane

0xd298,	// (0x0008a669) list_single_spcha_pane_ParamLimits

0xd298,	// (0x0008a669) list_single_spcha_pane

0xa273,	// (0x00087644) list_highlight_pane_cp06

0xd2a9,	// (0x0008a67a) list_single_spcha_pane_t1

0xc496,	// (0x00089867) popup_call2_audio_out_window_g4_ParamLimits

0xc496,	// (0x00089867) popup_call2_audio_out_window_g4

0xa273,	// (0x00087644) main_imed2_pane

0x527d,	// (0x0008264e) popup_imed_adjust2_window

0x5290,	// (0x00082661) popup_imed_trans_window_ParamLimits

0x5290,	// (0x00082661) popup_imed_trans_window

0xccc7,	// (0x0008a098) popup_blid_sat_info2_window_t1

0xccd5,	// (0x0008a0a6) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0008ca6f) popup_blid_sat_info2_window_t

0x67b5,	// (0x00083b86) aid_size_cell_colour_35

0x67cf,	// (0x00083ba0) aid_size_cell_colour_112

0x67e6,	// (0x00083bb7) aid_size_cell_effect

0xbdbe,	// (0x0008918f) bg_tb_trans_pane_cp02

0xb3cd,	// (0x0008879e) heading_imed_pane

0x6800,	// (0x00083bd1) listscroll_imed_pane

0xd2b7,	// (0x0008a688) heading_imed_pane_g1

0xd2bf,	// (0x0008a690) heading_imed_pane_t1

0xd2cd,	// (0x0008a69e) grid_imed_colour_35_pane_ParamLimits

0xd2cd,	// (0x0008a69e) grid_imed_colour_35_pane

0x680c,	// (0x00083bdd) grid_imed_effect_pane

0xd2e9,	// (0x0008a6ba) list_imed_aspect_pane

0x681c,	// (0x00083bed) scroll_pane_cp027_ParamLimits

0x681c,	// (0x00083bed) scroll_pane_cp027

0x6828,	// (0x00083bf9) cell_imed_effect_pane_ParamLimits

0x6828,	// (0x00083bf9) cell_imed_effect_pane

0xd2f1,	// (0x0008a6c2) cell_imed_colour_pane_ParamLimits

0xd2f1,	// (0x0008a6c2) cell_imed_colour_pane

0xd33b,	// (0x0008a70c) cell_imed_colour_pane_g1_ParamLimits

0xd33b,	// (0x0008a70c) cell_imed_colour_pane_g1

0xd34c,	// (0x0008a71d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd34c,	// (0x0008a71d) hgihlgiht_grid_pane_cp016

0x6844,	// (0x00083c15) cell_imed_effect_pane_g1

0x684c,	// (0x00083c1d) grid_highlight_pane_cp017

0xd35d,	// (0x0008a72e) list_imed_single_pane_ParamLimits

0xd35d,	// (0x0008a72e) list_imed_single_pane

0xa273,	// (0x00087644) list_highlight_pane_cp07

0xd371,	// (0x0008a742) list_imed_aspect_pane_comp1_t1

0xca57,	// (0x00089e28) bg_tb_trans_pane_cp05

0xd393,	// (0x0008a764) popup_imed_adjust2_window_g1

0xd3ba,	// (0x0008a78b) popup_imed_adjust2_window_t1

0xd3d2,	// (0x0008a7a3) slider_imed_adjust_pane

0xd3e6,	// (0x0008a7b7) slider_imed_adjust_pane_g1

0xd3f6,	// (0x0008a7c7) slider_imed_adjust_pane_g2

0xd406,	// (0x0008a7d7) slider_imed_adjust_pane_g3

0xd417,	// (0x0008a7e8) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0008cbb3) slider_imed_adjust_pane_g

0x6855,	// (0x00083c26) aid_size_cell_clipart2

0xd428,	// (0x0008a7f9) grid_imed_clipart_pane

0xd432,	// (0x0008a803) scroll_pane_cp031

0x6861,	// (0x00083c32) cell_imed_clipart_pane_ParamLimits

0x6861,	// (0x00083c32) cell_imed_clipart_pane

0x687f,	// (0x00083c50) cell_imed_clipart_pane_g1

0xa273,	// (0x00087644) grid_highlight_pane_cp014

0x65ba,	// (0x0008398b) main_clock2_pane_g1_ParamLimits

0x65ba,	// (0x0008398b) main_clock2_pane_g1

0x66a5,	// (0x00083a76) aid_call2_pane_cp10

0x66b7,	// (0x00083a88) aid_call_pane_cp10

0xb470,	// (0x00088841) popup_clock_analogue_window_cp10_g1

0xb470,	// (0x00088841) popup_clock_analogue_window_cp10_g2

0x66c9,	// (0x00083a9a) popup_clock_analogue_window_cp10_g3

0x66c9,	// (0x00083a9a) popup_clock_analogue_window_cp10_g4

0xb470,	// (0x00088841) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0008cba1) popup_clock_analogue_window_cp10_g

0x66df,	// (0x00083ab0) popup_clock_analogue_window_cp10_t1

0x6710,	// (0x00083ae1) clock_digital_number_pane_cp10_ParamLimits

0x6710,	// (0x00083ae1) clock_digital_number_pane_cp10

0x672a,	// (0x00083afb) clock_digital_number_pane_cp11_ParamLimits

0x672a,	// (0x00083afb) clock_digital_number_pane_cp11

0x6744,	// (0x00083b15) clock_digital_number_pane_cp12_ParamLimits

0x6744,	// (0x00083b15) clock_digital_number_pane_cp12

0x675e,	// (0x00083b2f) clock_digital_number_pane_cp13_ParamLimits

0x675e,	// (0x00083b2f) clock_digital_number_pane_cp13

0x677a,	// (0x00083b4b) clock_digital_separator_pane_cp10_ParamLimits

0x677a,	// (0x00083b4b) clock_digital_separator_pane_cp10

0x6794,	// (0x00083b65) popup_clock_digital_window_cp02_t1_ParamLimits

0x6794,	// (0x00083b65) popup_clock_digital_window_cp02_t1

0xa918,	// (0x00087ce9) clock_digital_number_pane_cp10_g1

0xa918,	// (0x00087ce9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0008cbbc) clock_digital_number_pane_cp10_g

0xa918,	// (0x00087ce9) clock_digital_separator_pane_cp10_g1

0xa918,	// (0x00087ce9) clock_digital_separator_pane_g2_cp10

0xb5ff,	// (0x000889d0) navi_pane_vded_g4

0xb608,	// (0x000889d9) navi_pane_vded_g5

0xb611,	// (0x000889e2) navi_pane_vded_t1

0xa273,	// (0x00087644) main_vded_pane

0x6888,	// (0x00083c59) main_vded_pane_g1

0x6894,	// (0x00083c65) main_vded_pane_g2

0x689e,	// (0x00083c6f) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0008cbc1) main_vded_pane_g

0x68a8,	// (0x00083c79) main_vded_pane_t1

0x68b6,	// (0x00083c87) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0008cbc8) main_vded_pane_t

0x68c4,	// (0x00083c95) vded_slider_pane

0x68ce,	// (0x00083c9f) vded_video_pane

0xd43a,	// (0x0008a80b) vded_video_pane_g1

0x68da,	// (0x00083cab) vded_video_pane_g2

0xce8f,	// (0x0008a260) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0008cbcd) vded_video_pane_g

0xd444,	// (0x0008a815) vded_slider_pane_g1

0xcbdc,	// (0x00089fad) vded_slider_pane_g2

0xd44d,	// (0x0008a81e) vded_slider_pane_g3

0xd456,	// (0x0008a827) vded_slider_pane_g4

0xd45f,	// (0x0008a830) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0008cbd4) vded_slider_pane_g

0x63b1,	// (0x00083782) mup3_rocker_pane_ParamLimits

0x63b1,	// (0x00083782) mup3_rocker_pane

0x68e3,	// (0x00083cb4) mup3_control_keys_pane_g1

0x68eb,	// (0x00083cbc) mup3_control_keys_pane_g2

0x68f3,	// (0x00083cc4) mup3_control_keys_pane_g3

0x68fb,	// (0x00083ccc) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0008cbdf) mup3_control_keys_pane_g

0x2114,	// (0x0007f4e5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2114,	// (0x0007f4e5) popup_toolbar2_fixed_window_cp01

0x63cd,	// (0x0008379e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x63cd,	// (0x0008379e) popup_toolbar2_fixed_window_cp02

0xbdd5,	// (0x000891a6) popup_call2_audio_second_window_t4_ParamLimits

0xbdd5,	// (0x000891a6) popup_call2_audio_second_window_t4

0xc303,	// (0x000896d4) popup_call2_audio_first_window_t6_ParamLimits

0xc303,	// (0x000896d4) popup_call2_audio_first_window_t6

0xc599,	// (0x0008996a) popup_call2_audio_out_window_t6_ParamLimits

0xc599,	// (0x0008996a) popup_call2_audio_out_window_t6

0xa273,	// (0x00087644) main_vitu_pane

0x690b,	// (0x00083cdc) aid_size_cell_itu_ParamLimits

0x690b,	// (0x00083cdc) aid_size_cell_itu

0xe1ff,	// (0x0008b5d0) bg_popup_window_pane_cp08_ParamLimits

0xe1ff,	// (0x0008b5d0) bg_popup_window_pane_cp08

0x6919,	// (0x00083cea) field_vitu_entry_pane_ParamLimits

0x6919,	// (0x00083cea) field_vitu_entry_pane

0x6928,	// (0x00083cf9) grid_vitu_function_pane_ParamLimits

0x6928,	// (0x00083cf9) grid_vitu_function_pane

0x6938,	// (0x00083d09) grid_vitu_itu_pane_ParamLimits

0x6938,	// (0x00083d09) grid_vitu_itu_pane

0x6948,	// (0x00083d19) cell_vitu_itu_pane_ParamLimits

0x6948,	// (0x00083d19) cell_vitu_itu_pane

0x695f,	// (0x00083d30) cell_vitu_function_pane_ParamLimits

0x695f,	// (0x00083d30) cell_vitu_function_pane

0xbdbe,	// (0x0008918f) bg_popup_sub_pane_cp08_ParamLimits

0xbdbe,	// (0x0008918f) bg_popup_sub_pane_cp08

0x6973,	// (0x00083d44) field_vitu_entry_pane_t1_ParamLimits

0x6973,	// (0x00083d44) field_vitu_entry_pane_t1

0xd480,	// (0x0008a851) field_vitu_entry_pane_t2_ParamLimits

0xd480,	// (0x0008a851) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0008cbed) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0008cbed) field_vitu_entry_pane_t

0xd49d,	// (0x0008a86e) bg_button_pane_cp05_ParamLimits

0xd49d,	// (0x0008a86e) bg_button_pane_cp05

0x698d,	// (0x00083d5e) cell_vitu_itu_pane_g1

0x69a5,	// (0x00083d76) cell_vitu_itu_pane_t1_ParamLimits

0x69a5,	// (0x00083d76) cell_vitu_itu_pane_t1

0x69b7,	// (0x00083d88) cell_vitu_itu_pane_t2_ParamLimits

0x69b7,	// (0x00083d88) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0008cbf2) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0008cbf2) cell_vitu_itu_pane_t

0xd4ab,	// (0x0008a87c) bg_button_pane_cp07

0x69fa,	// (0x00083dcb) cell_vitu_function_pane_g1

0x2396,	// (0x0007f767) main_calc_pane_g1

0x1ed1,	// (0x0007f2a2) aid_visual_content_pane

0xa273,	// (0x00087644) main_vradio_pane

0x6a03,	// (0x00083dd4) main_vradio_pane_g1_ParamLimits

0x6a03,	// (0x00083dd4) main_vradio_pane_g1

0xd4b5,	// (0x0008a886) main_vradio_pane_g2_ParamLimits

0xd4b5,	// (0x0008a886) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0008cbf9) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0008cbf9) main_vradio_pane_g

0x6a11,	// (0x00083de2) main_vradio_pane_t1_ParamLimits

0x6a11,	// (0x00083de2) main_vradio_pane_t1

0x6a23,	// (0x00083df4) main_vradio_pane_t2_ParamLimits

0x6a23,	// (0x00083df4) main_vradio_pane_t2

0xd4c2,	// (0x0008a893) main_vradio_pane_t3_ParamLimits

0xd4c2,	// (0x0008a893) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0008cbfe) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0008cbfe) main_vradio_pane_t

0x6a35,	// (0x00083e06) vradio_rocker_control_pane_ParamLimits

0x6a35,	// (0x00083e06) vradio_rocker_control_pane

0x6a41,	// (0x00083e12) vradio_station_info_pane_ParamLimits

0x6a41,	// (0x00083e12) vradio_station_info_pane

0xd4d6,	// (0x0008a8a7) vradio_frequency_info_pane_ParamLimits

0xd4d6,	// (0x0008a8a7) vradio_frequency_info_pane

0xce8f,	// (0x0008a260) vradio_station_info_pane_g1

0xd4e5,	// (0x0008a8b6) vradio_station_info_pane_t1_ParamLimits

0xd4e5,	// (0x0008a8b6) vradio_station_info_pane_t1

0xd507,	// (0x0008a8d8) vradio_station_info_pane_t2_ParamLimits

0xd507,	// (0x0008a8d8) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0008cc05) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0008cc05) vradio_station_info_pane_t

0xd519,	// (0x0008a8ea) vradio_tuning_pane

0xd521,	// (0x0008a8f2) vradio_rocker_control_pane_g1

0xd529,	// (0x0008a8fa) vradio_rocker_control_pane_g2

0xd531,	// (0x0008a902) vradio_rocker_control_pane_g3

0xd539,	// (0x0008a90a) vradio_rocker_control_pane_g4

0xd541,	// (0x0008a912) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0008cc0a) vradio_rocker_control_pane_g

0x6a4e,	// (0x00083e1f) vradio_frequency_info_pane_g1

0xd549,	// (0x0008a91a) vradio_frequency_info_pane_t1_ParamLimits

0xd549,	// (0x0008a91a) vradio_frequency_info_pane_t1

0x6a58,	// (0x00083e29) vradio_tuning_pane_g1

0x6a63,	// (0x00083e34) vradio_tuning_pane_t1

0x1f12,	// (0x0007f2e3) area_side_right_pane_ParamLimits

0x1f12,	// (0x0007f2e3) area_side_right_pane

0xca12,	// (0x00089de3) status_small_pane_g1

0xca1a,	// (0x00089deb) status_small_pane_g2

0xca23,	// (0x00089df4) status_small_pane_g3

0xca2c,	// (0x00089dfd) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0008c9c5) status_small_pane_g

0xca35,	// (0x00089e06) status_small_pane_t1

0xa273,	// (0x00087644) main_video3_pane

0xd55d,	// (0x0008a92e) cams_zoom_vslider_pane

0xd565,	// (0x0008a936) image3_wide_pane_ParamLimits

0xd565,	// (0x0008a936) image3_wide_pane

0xd57f,	// (0x0008a950) image3_wide_small_pane

0xd58b,	// (0x0008a95c) main_video3_pane_g1_ParamLimits

0xd58b,	// (0x0008a95c) main_video3_pane_g1

0xd5a7,	// (0x0008a978) main_video3_pane_g2_ParamLimits

0xd5a7,	// (0x0008a978) main_video3_pane_g2

0x0001,

0xf844,	// (0x0008cc15) main_video3_pane_g_ParamLimits

0xf844,	// (0x0008cc15) main_video3_pane_g

0xd5c3,	// (0x0008a994) main_video3_pane_t1_ParamLimits

0xd5c3,	// (0x0008a994) main_video3_pane_t1

0xd5ee,	// (0x0008a9bf) main_video3_pane_t2_ParamLimits

0xd5ee,	// (0x0008a9bf) main_video3_pane_t2

0xd61b,	// (0x0008a9ec) main_video3_pane_t3_ParamLimits

0xd61b,	// (0x0008a9ec) main_video3_pane_t3

0x0002,

0xf849,	// (0x0008cc1a) main_video3_pane_t_ParamLimits

0xf849,	// (0x0008cc1a) main_video3_pane_t

0xd648,	// (0x0008aa19) cams_zoom_vslider_pane_g1

0xd651,	// (0x0008aa22) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0008cc21) cams_zoom_vslider_pane_g

0xd659,	// (0x0008aa2a) small_slider_vertical_pane

0xce8f,	// (0x0008a260) small_slider_vertical_pane_g1

0xce8f,	// (0x0008a260) small_slider_vertical_pane_g2

0xd661,	// (0x0008aa32) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0008cc26) small_slider_vertical_pane_g

0xa273,	// (0x00087644) main_hwr_training_pane

0xd66a,	// (0x0008aa3b) hwr_training_instruct_pane_ParamLimits

0xd66a,	// (0x0008aa3b) hwr_training_instruct_pane

0x6a72,	// (0x00083e43) hwr_training_navi_pane_ParamLimits

0x6a72,	// (0x00083e43) hwr_training_navi_pane

0x6a8c,	// (0x00083e5d) hwr_training_write_pane_ParamLimits

0x6a8c,	// (0x00083e5d) hwr_training_write_pane

0xa273,	// (0x00087644) bg_frame_shadow_pane

0xd6a1,	// (0x0008aa72) hwr_training_write_pane_g1

0xd6a9,	// (0x0008aa7a) hwr_training_write_pane_g2

0xd6b1,	// (0x0008aa82) hwr_training_write_pane_g3

0xd6b9,	// (0x0008aa8a) hwr_training_write_pane_g4

0xd6c1,	// (0x0008aa92) hwr_training_write_pane_g5

0xd6c9,	// (0x0008aa9a) hwr_training_write_pane_g6

0xd6d1,	// (0x0008aaa2) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0008cc2d) hwr_training_write_pane_g

0x6ac4,	// (0x00083e95) hwr_training_navi_pane_g1_ParamLimits

0x6ac4,	// (0x00083e95) hwr_training_navi_pane_g1

0x6ad6,	// (0x00083ea7) hwr_training_navi_pane_g2_ParamLimits

0x6ad6,	// (0x00083ea7) hwr_training_navi_pane_g2

0x6ae8,	// (0x00083eb9) hwr_training_navi_pane_g3_ParamLimits

0x6ae8,	// (0x00083eb9) hwr_training_navi_pane_g3

0x6af8,	// (0x00083ec9) hwr_training_navi_pane_g4_ParamLimits

0x6af8,	// (0x00083ec9) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0008cc3c) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0008cc3c) hwr_training_navi_pane_g

0x6b12,	// (0x00083ee3) hwr_training_navi_pane_t1

0x6b20,	// (0x00083ef1) list_single_hwr_training_instruct_pane_ParamLimits

0x6b20,	// (0x00083ef1) list_single_hwr_training_instruct_pane

0xd6d9,	// (0x0008aaaa) list_single_hwr_training_instruct_pane_t1

0xcdcf,	// (0x0008a1a0) bg_frame_shadow_pane_g1

0xd6e8,	// (0x0008aab9) bg_frame_shadow_pane_g2

0xd6f0,	// (0x0008aac1) bg_frame_shadow_pane_g3

0xd6f8,	// (0x0008aac9) bg_frame_shadow_pane_g4

0xd700,	// (0x0008aad1) bg_frame_shadow_pane_g5

0xd708,	// (0x0008aad9) bg_frame_shadow_pane_g6

0xd710,	// (0x0008aae1) bg_frame_shadow_pane_g7

0xaad2,	// (0x00087ea3) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0008cc47) bg_frame_shadow_pane_g

0xa273,	// (0x00087644) main_video_tele_dialer_pane

0x6b39,	// (0x00083f0a) aid_size_cell_video_keypad_ParamLimits

0x6b39,	// (0x00083f0a) aid_size_cell_video_keypad

0x6b49,	// (0x00083f1a) grid_video_dialer_keypad_pane_ParamLimits

0x6b49,	// (0x00083f1a) grid_video_dialer_keypad_pane

0x6b7b,	// (0x00083f4c) video_down_pane_cp_ParamLimits

0x6b7b,	// (0x00083f4c) video_down_pane_cp

0x6ba5,	// (0x00083f76) cell_video_dialer_keypad_pane_ParamLimits

0x6ba5,	// (0x00083f76) cell_video_dialer_keypad_pane

0xd718,	// (0x0008aae9) bg_button_pane_cp08_ParamLimits

0xd718,	// (0x0008aae9) bg_button_pane_cp08

0x6bbc,	// (0x00083f8d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6bbc,	// (0x00083f8d) cell_video_dialer_keypad_pane_g1

0x63a5,	// (0x00083776) mup3_rocker2_pane_ParamLimits

0x63a5,	// (0x00083776) mup3_rocker2_pane

0xce8f,	// (0x0008a260) mup3_rocker2_pane_g1

0x51e1,	// (0x000825b2) main_dialer2_pane

0xa273,	// (0x00087644) main_mp4_pane

0x6c15,	// (0x00083fe6) main_mp4_pane_g1_ParamLimits

0x6c15,	// (0x00083fe6) main_mp4_pane_g1

0x6c23,	// (0x00083ff4) main_mp4_pane_g2_ParamLimits

0x6c23,	// (0x00083ff4) main_mp4_pane_g2

0x6c31,	// (0x00084002) main_mp4_pane_g3_ParamLimits

0x6c31,	// (0x00084002) main_mp4_pane_g3

0x6c84,	// (0x00084055) main_mp4_pane_g4_ParamLimits

0x6c84,	// (0x00084055) main_mp4_pane_g4

0x6cb2,	// (0x00084083) main_mp4_pane_g5_ParamLimits

0x6cb2,	// (0x00084083) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0008cc67) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0008cc67) main_mp4_pane_g

0x6d26,	// (0x000840f7) main_mp4_pane_t1_ParamLimits

0x6d26,	// (0x000840f7) main_mp4_pane_t1

0x6d82,	// (0x00084153) main_mp4_pane_t2_ParamLimits

0x6d82,	// (0x00084153) main_mp4_pane_t2

0xd724,	// (0x0008aaf5) main_mp4_pane_t3_ParamLimits

0xd724,	// (0x0008aaf5) main_mp4_pane_t3

0x6dd4,	// (0x000841a5) main_mp4_pane_t4_ParamLimits

0x6dd4,	// (0x000841a5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0008cc78) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0008cc78) main_mp4_pane_t

0x6e14,	// (0x000841e5) mp4_progress_pane_ParamLimits

0x6e14,	// (0x000841e5) mp4_progress_pane

0x6e5e,	// (0x0008422f) mp4_rocker_pane_ParamLimits

0x6e5e,	// (0x0008422f) mp4_rocker_pane

0xd752,	// (0x0008ab23) mp4_progress_pane_t1

0xd76b,	// (0x0008ab3c) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0008cc81) mp4_progress_pane_t

0xd784,	// (0x0008ab55) mup_progress_pane_cp04

0xce8f,	// (0x0008a260) mp4_rocker_pane_g1

0x6e7e,	// (0x0008424f) aid_cell_size_keypad2_ParamLimits

0x6e7e,	// (0x0008424f) aid_cell_size_keypad2

0x6e8e,	// (0x0008425f) dialer2_ne_pane_ParamLimits

0x6e8e,	// (0x0008425f) dialer2_ne_pane

0x6e9a,	// (0x0008426b) grid_dialer2_keypad_pane_ParamLimits

0x6e9a,	// (0x0008426b) grid_dialer2_keypad_pane

0xdbe2,	// (0x0008afb3) bg_popup_call_pane_cp07_ParamLimits

0xdbe2,	// (0x0008afb3) bg_popup_call_pane_cp07

0x6ea8,	// (0x00084279) dialer2_ne_pane_t1_ParamLimits

0x6ea8,	// (0x00084279) dialer2_ne_pane_t1

0x6ecd,	// (0x0008429e) cell_dialer2_keypad_pane_ParamLimits

0x6ecd,	// (0x0008429e) cell_dialer2_keypad_pane

0xd7a9,	// (0x0008ab7a) bg_button_pane_pane_cp04_ParamLimits

0xd7a9,	// (0x0008ab7a) bg_button_pane_pane_cp04

0x6ee4,	// (0x000842b5) cell_dialer2_keypad_pane_g1_ParamLimits

0x6ee4,	// (0x000842b5) cell_dialer2_keypad_pane_g1

0x3010,	// (0x000803e1) aid_placing_vt_set_content_ParamLimits

0x3010,	// (0x000803e1) aid_placing_vt_set_content

0x3038,	// (0x00080409) aid_placing_vt_set_title_ParamLimits

0x3038,	// (0x00080409) aid_placing_vt_set_title

0xa273,	// (0x00087644) main_image3_pane

0x6f7e,	// (0x0008434f) area_side_right_pane_cp01_ParamLimits

0x6f7e,	// (0x0008434f) area_side_right_pane_cp01

0xa9e5,	// (0x00087db6) main_image3_pane_g1_ParamLimits

0xa9e5,	// (0x00087db6) main_image3_pane_g1

0x6fad,	// (0x0008437e) main_image3_pane_g2_ParamLimits

0x6fad,	// (0x0008437e) main_image3_pane_g2

0x6fc6,	// (0x00084397) main_image3_pane_g3_ParamLimits

0x6fc6,	// (0x00084397) main_image3_pane_g3

0x6fdf,	// (0x000843b0) main_image3_pane_g4_ParamLimits

0x6fdf,	// (0x000843b0) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0008cc90) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0008cc90) main_image3_pane_g

0x6ff8,	// (0x000843c9) main_image3_pane_t1_ParamLimits

0x6ff8,	// (0x000843c9) main_image3_pane_t1

0x701d,	// (0x000843ee) main_image3_pane_t2_ParamLimits

0x701d,	// (0x000843ee) main_image3_pane_t2

0x703c,	// (0x0008440d) main_image3_pane_t3_ParamLimits

0x703c,	// (0x0008440d) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0008cc99) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0008cc99) main_image3_pane_t

0xe1ff,	// (0x0008b5d0) grid_sctrl_middle_pane_cp01_ParamLimits

0xe1ff,	// (0x0008b5d0) grid_sctrl_middle_pane_cp01

0x709d,	// (0x0008446e) cell_sctrl_middle_pane_cp01_ParamLimits

0x709d,	// (0x0008446e) cell_sctrl_middle_pane_cp01

0x70ae,	// (0x0008447f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x70ae,	// (0x0008447f) cell_sctrl_middle_pane_cp01_g1

0xa273,	// (0x00087644) main_call4_pane

0x70bb,	// (0x0008448c) aid_size_button_call4_ParamLimits

0x70bb,	// (0x0008448c) aid_size_button_call4

0x70f1,	// (0x000844c2) call4_windows_pane_ParamLimits

0x70f1,	// (0x000844c2) call4_windows_pane

0x7106,	// (0x000844d7) grid_call4_button_pane_ParamLimits

0x7106,	// (0x000844d7) grid_call4_button_pane

0x7136,	// (0x00084507) call4_windows_conf_pane

0x7151,	// (0x00084522) popup_call4_audio_first_window_ParamLimits

0x7151,	// (0x00084522) popup_call4_audio_first_window

0x71a3,	// (0x00084574) popup_call4_audio_second_window_ParamLimits

0x71a3,	// (0x00084574) popup_call4_audio_second_window

0x71bc,	// (0x0008458d) popup_call4_audio_wait_window_ParamLimits

0x71bc,	// (0x0008458d) popup_call4_audio_wait_window

0x71ca,	// (0x0008459b) cell_call4_button_pane_ParamLimits

0x71ca,	// (0x0008459b) cell_call4_button_pane

0x71ed,	// (0x000845be) bg_button_pane_cp09_ParamLimits

0x71ed,	// (0x000845be) bg_button_pane_cp09

0x71f9,	// (0x000845ca) cell_call4_button_pane_g1_ParamLimits

0x71f9,	// (0x000845ca) cell_call4_button_pane_g1

0x7206,	// (0x000845d7) cell_call4_button_pane_t1_ParamLimits

0x7206,	// (0x000845d7) cell_call4_button_pane_t1

0xd7bd,	// (0x0008ab8e) popup_call4_audio_conf_window_ParamLimits

0xd7bd,	// (0x0008ab8e) popup_call4_audio_conf_window

0x63da,	// (0x000837ab) mup3_progress_pane_t1_ParamLimits

0x63f9,	// (0x000837ca) mup3_progress_pane_t2_ParamLimits

0xd131,	// (0x0008a502) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0008cb69) mup3_progress_pane_t_ParamLimits

0xd14e,	// (0x0008a51f) mup_progress_pane_cp03_ParamLimits

0x6903,	// (0x00083cd4) mup3_control_keys_pane_g4_copy1

0x6e42,	// (0x00084213) mp4_rocker2_pane_ParamLimits

0x6e42,	// (0x00084213) mp4_rocker2_pane

0xd7d7,	// (0x0008aba8) mp4_rocker2_pane_g1

0xd7df,	// (0x0008abb0) mp4_rocker2_pane_g2

0x724a,	// (0x0008461b) mp4_rocker2_pane_g3

0x7252,	// (0x00084623) mp4_rocker2_pane_g4

0x725a,	// (0x0008462b) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0008cca2) mp4_rocker2_pane_g

0xa273,	// (0x00087644) main_camera4_pane

0xa273,	// (0x00087644) main_video4_pane

0x6b57,	// (0x00083f28) main_video_tele_dialer_pane_t1_ParamLimits

0x6b57,	// (0x00083f28) main_video_tele_dialer_pane_t1

0x6b69,	// (0x00083f3a) main_video_tele_dialer_pane_t2_ParamLimits

0x6b69,	// (0x00083f3a) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0008cc58) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0008cc58) main_video_tele_dialer_pane_t

0x727a,	// (0x0008464b) cam4_autofocus_pane_ParamLimits

0x727a,	// (0x0008464b) cam4_autofocus_pane

0x7292,	// (0x00084663) cam4_image_uncrop_pane_ParamLimits

0x7292,	// (0x00084663) cam4_image_uncrop_pane

0x72ab,	// (0x0008467c) cam4_indicators_pane_ParamLimits

0x72ab,	// (0x0008467c) cam4_indicators_pane

0x72c7,	// (0x00084698) main_camera4_pane_g1_ParamLimits

0x72c7,	// (0x00084698) main_camera4_pane_g1

0x72d3,	// (0x000846a4) main_camera4_pane_g2_ParamLimits

0x72d3,	// (0x000846a4) main_camera4_pane_g2

0x72d3,	// (0x000846a4) main_camera4_pane_g3_ParamLimits

0x72d3,	// (0x000846a4) main_camera4_pane_g3

0x72df,	// (0x000846b0) main_camera4_pane_g4_ParamLimits

0x72df,	// (0x000846b0) main_camera4_pane_g4

0x72eb,	// (0x000846bc) main_camera4_pane_g5_ParamLimits

0x72eb,	// (0x000846bc) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0008ccad) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0008ccad) main_camera4_pane_g

0x7305,	// (0x000846d6) main_camera4_pane_t1_ParamLimits

0x7305,	// (0x000846d6) main_camera4_pane_t1

0xd0b6,	// (0x0008a487) bg_tb_trans_pane_cp06

0x7357,	// (0x00084728) cam4_indicators_pane_g1

0x7368,	// (0x00084739) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0008ccc8) cam4_indicators_pane_g

0x7380,	// (0x00084751) cam4_indicators_pane_t1

0x73aa,	// (0x0008477b) main_video4_pane_g1_ParamLimits

0x73aa,	// (0x0008477b) main_video4_pane_g1

0x73b6,	// (0x00084787) main_video4_pane_g2_ParamLimits

0x73b6,	// (0x00084787) main_video4_pane_g2

0x73c2,	// (0x00084793) main_video4_pane_g3_ParamLimits

0x73c2,	// (0x00084793) main_video4_pane_g3

0x73ce,	// (0x0008479f) main_video4_pane_g4_ParamLimits

0x73ce,	// (0x0008479f) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0008cccf) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0008cccf) main_video4_pane_g

0x73f0,	// (0x000847c1) vid4_indicators_pane_ParamLimits

0x73f0,	// (0x000847c1) vid4_indicators_pane

0x740f,	// (0x000847e0) video4_image_uncrop_cif_pane_ParamLimits

0x740f,	// (0x000847e0) video4_image_uncrop_cif_pane

0x741e,	// (0x000847ef) video4_image_uncrop_nhd_pane_ParamLimits

0x741e,	// (0x000847ef) video4_image_uncrop_nhd_pane

0x7292,	// (0x00084663) video4_image_uncrop_vga_pane_ParamLimits

0x7292,	// (0x00084663) video4_image_uncrop_vga_pane

0xbdbe,	// (0x0008918f) bg_tb_trans_pane_cp07

0x7437,	// (0x00084808) vid4_indicators_pane_g1

0x744d,	// (0x0008481e) vid4_indicators_pane_g2

0x7461,	// (0x00084832) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0008ccda) vid4_indicators_pane_g

0x7492,	// (0x00084863) vid4_indicators_pane_t1

0x74a9,	// (0x0008487a) cam4_autofocus_pane_g1

0x74b1,	// (0x00084882) cam4_autofocus_pane_g2

0x74b9,	// (0x0008488a) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0008cce5) cam4_autofocus_pane_g

0x74c1,	// (0x00084892) cam4_autofocus_pane_g3_copy1

0x6b89,	// (0x00083f5a) video_down_pane_cp_t1

0x6b97,	// (0x00083f68) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0008cc5d) video_down_pane_cp_t

0xe1ff,	// (0x0008b5d0) popup_vitu2_window_ParamLimits

0xe1ff,	// (0x0008b5d0) popup_vitu2_window

0x74c9,	// (0x0008489a) aid_size_cell2_itu2_ParamLimits

0x74c9,	// (0x0008489a) aid_size_cell2_itu2

0x74eb,	// (0x000848bc) aid_size_cell_itu2_ParamLimits

0x74eb,	// (0x000848bc) aid_size_cell_itu2

0xdbe2,	// (0x0008afb3) bg_popup_window_pane_cp09_ParamLimits

0xdbe2,	// (0x0008afb3) bg_popup_window_pane_cp09

0x7531,	// (0x00084902) field_vitu2_entry_pane_ParamLimits

0x7531,	// (0x00084902) field_vitu2_entry_pane

0x7551,	// (0x00084922) grid_vitu2_function_pane_ParamLimits

0x7551,	// (0x00084922) grid_vitu2_function_pane

0x7595,	// (0x00084966) grid_vitu2_itu_pane_ParamLimits

0x7595,	// (0x00084966) grid_vitu2_itu_pane

0x760d,	// (0x000849de) cell_vitu2_itu_pane_ParamLimits

0x760d,	// (0x000849de) cell_vitu2_itu_pane

0x7628,	// (0x000849f9) cell_vitu2_function_pane_ParamLimits

0x7628,	// (0x000849f9) cell_vitu2_function_pane

0xd7e7,	// (0x0008abb8) bg_popup_call_pane_cp08_ParamLimits

0xd7e7,	// (0x0008abb8) bg_popup_call_pane_cp08

0xd7fe,	// (0x0008abcf) field_vitu2_entry_pane_g1

0xd80a,	// (0x0008abdb) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0008ccec) field_vitu2_entry_pane_g

0x0ebc,	// (0x0007e28d) field_vitu2_entry_pane_t1_ParamLimits

0x0ebc,	// (0x0007e28d) field_vitu2_entry_pane_t1

0x0eea,	// (0x0007e2bb) field_vitu2_entry_pane_t2_ParamLimits

0x0eea,	// (0x0007e2bb) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0008ccf3) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0008ccf3) field_vitu2_entry_pane_t

0x766c,	// (0x00084a3d) bg_button_pane_cp010_ParamLimits

0x766c,	// (0x00084a3d) bg_button_pane_cp010

0x767a,	// (0x00084a4b) cell_vitu2_itu_pane_g1

0x769a,	// (0x00084a6b) cell_vitu2_itu_pane_t1_ParamLimits

0x769a,	// (0x00084a6b) cell_vitu2_itu_pane_t1

0x0f07,	// (0x0007e2d8) cell_vitu2_itu_pane_t2_ParamLimits

0x0f07,	// (0x0007e2d8) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0008ccfd) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0008ccfd) cell_vitu2_itu_pane_t

0xbdbe,	// (0x0008918f) bg_button_pane_cp011

0x76e6,	// (0x00084ab7) cell_vitu2_function_pane_g1

0xa273,	// (0x00087644) main_myfav_hc_pane

0x707e,	// (0x0008444f) popup_image3_note_pane_ParamLimits

0x707e,	// (0x0008444f) popup_image3_note_pane

0x708c,	// (0x0008445d) popup_image3_tool_bar_pane_ParamLimits

0x708c,	// (0x0008445d) popup_image3_tool_bar_pane

0x0f7d,	// (0x0007e34e) cell_vitu2_itu_pane_t3_ParamLimits

0x0f7d,	// (0x0007e34e) cell_vitu2_itu_pane_t3

0xa273,	// (0x00087644) bg_popup_trans_pane

0xd82c,	// (0x0008abfd) grid_image3_tool_bar_pane

0xd836,	// (0x0008ac07) bg_popup_trans_pane_g1

0xae45,	// (0x00088216) bg_popup_trans_pane_g2

0xd83e,	// (0x0008ac0f) bg_popup_trans_pane_g3

0xd846,	// (0x0008ac17) bg_popup_trans_pane_g4

0xd84e,	// (0x0008ac1f) bg_popup_trans_pane_g5

0xd856,	// (0x0008ac27) bg_popup_trans_pane_g6

0xd85e,	// (0x0008ac2f) bg_popup_trans_pane_g7

0xd866,	// (0x0008ac37) bg_popup_trans_pane_g8

0xae25,	// (0x000881f6) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0008cd04) bg_popup_trans_pane_g

0xd878,	// (0x0008ac49) cell_image3_tool_bar_pane_ParamLimits

0xd878,	// (0x0008ac49) cell_image3_tool_bar_pane

0xce8f,	// (0x0008a260) cell_image3_tool_bar_pane_g1

0xa273,	// (0x00087644) bg_popup_trans_pane_cp1

0xd88e,	// (0x0008ac5f) popup_image3_note_pane_t1

0xd89c,	// (0x0008ac6d) popup_image3_note_pane_t2

0xd8aa,	// (0x0008ac7b) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0008cd17) popup_image3_note_pane_t

0xd8ba,	// (0x0008ac8b) popup_image3_note_pane_t3_copy1

0x76fa,	// (0x00084acb) bg_myfav_hc_instruction_pane_ParamLimits

0x76fa,	// (0x00084acb) bg_myfav_hc_instruction_pane

0x7712,	// (0x00084ae3) cell_myfav_contact_pane_ParamLimits

0x7712,	// (0x00084ae3) cell_myfav_contact_pane

0x772c,	// (0x00084afd) cell_myfav_contact_pane_cp1_ParamLimits

0x772c,	// (0x00084afd) cell_myfav_contact_pane_cp1

0x7744,	// (0x00084b15) cell_myfav_contact_pane_cp2_ParamLimits

0x7744,	// (0x00084b15) cell_myfav_contact_pane_cp2

0x775c,	// (0x00084b2d) cell_myfav_contact_pane_cp3_ParamLimits

0x775c,	// (0x00084b2d) cell_myfav_contact_pane_cp3

0x7773,	// (0x00084b44) cell_myfav_contact_pane_cp4_ParamLimits

0x7773,	// (0x00084b44) cell_myfav_contact_pane_cp4

0x7789,	// (0x00084b5a) cell_myfav_contact_pane_cp5_ParamLimits

0x7789,	// (0x00084b5a) cell_myfav_contact_pane_cp5

0x779d,	// (0x00084b6e) cell_myfav_contact_pane_cp6_ParamLimits

0x779d,	// (0x00084b6e) cell_myfav_contact_pane_cp6

0x77b1,	// (0x00084b82) cell_myfav_contact_pane_cp7_ParamLimits

0x77b1,	// (0x00084b82) cell_myfav_contact_pane_cp7

0xd8c8,	// (0x0008ac99) listscroll_gen_pane_cp05

0x77c9,	// (0x00084b9a) main_myfav_hc_pane_g1_ParamLimits

0x77c9,	// (0x00084b9a) main_myfav_hc_pane_g1

0x77e3,	// (0x00084bb4) main_myfav_hc_pane_g2_ParamLimits

0x77e3,	// (0x00084bb4) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0008cd1e) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0008cd1e) main_myfav_hc_pane_g

0x7815,	// (0x00084be6) main_myfav_hc_pane_t1_ParamLimits

0x7815,	// (0x00084be6) main_myfav_hc_pane_t1

0xd8d1,	// (0x0008aca2) main_myfav_hc_pane_t2_ParamLimits

0xd8d1,	// (0x0008aca2) main_myfav_hc_pane_t2

0xd8e3,	// (0x0008acb4) main_myfav_hc_pane_t3_ParamLimits

0xd8e3,	// (0x0008acb4) main_myfav_hc_pane_t3

0x782c,	// (0x00084bfd) main_myfav_hc_pane_t4_ParamLimits

0x782c,	// (0x00084bfd) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0008cd25) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0008cd25) main_myfav_hc_pane_t

0xce8f,	// (0x0008a260) bg_myfav_hc_instruction_pane_g1

0xd8f5,	// (0x0008acc6) cell_myfav_contact_pane_g1_ParamLimits

0xd8f5,	// (0x0008acc6) cell_myfav_contact_pane_g1

0xd8f5,	// (0x0008acc6) cell_myfav_contact_pane_g2_ParamLimits

0xd8f5,	// (0x0008acc6) cell_myfav_contact_pane_g2

0xd901,	// (0x0008acd2) cell_myfav_contact_pane_g3_ParamLimits

0xd901,	// (0x0008acd2) cell_myfav_contact_pane_g3

0xd11b,	// (0x0008a4ec) cell_myfav_contact_pane_g4_ParamLimits

0xd11b,	// (0x0008a4ec) cell_myfav_contact_pane_g4

0xd90e,	// (0x0008acdf) cell_myfav_contact_pane_g5_ParamLimits

0xd90e,	// (0x0008acdf) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0008cd30) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0008cd30) cell_myfav_contact_pane_g

0x77fd,	// (0x00084bce) main_myfav_hc_pane_g3_ParamLimits

0x77fd,	// (0x00084bce) main_myfav_hc_pane_g3

0x204e,	// (0x0007f41f) popup_adpt_find_window

0x7856,	// (0x00084c27) afind_page_pane_ParamLimits

0x7856,	// (0x00084c27) afind_page_pane

0x7863,	// (0x00084c34) aid_size_cell_afind_ParamLimits

0x7863,	// (0x00084c34) aid_size_cell_afind

0x787d,	// (0x00084c4e) bg_popup_sub_pane_cp09_ParamLimits

0x787d,	// (0x00084c4e) bg_popup_sub_pane_cp09

0x788a,	// (0x00084c5b) find_pane_cp01_ParamLimits

0x788a,	// (0x00084c5b) find_pane_cp01

0xd91a,	// (0x0008aceb) grid_afind_control_pane_ParamLimits

0xd91a,	// (0x0008aceb) grid_afind_control_pane

0x7897,	// (0x00084c68) grid_afind_pane_ParamLimits

0x7897,	// (0x00084c68) grid_afind_pane

0x78b3,	// (0x00084c84) cell_afind_pane_ParamLimits

0x78b3,	// (0x00084c84) cell_afind_pane

0xce8f,	// (0x0008a260) afind_page_pane_g1

0x78ff,	// (0x00084cd0) afind_page_pane_g2

0x7908,	// (0x00084cd9) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0008cd3b) afind_page_pane_g

0x7911,	// (0x00084ce2) afind_page_pane_t1

0xd92e,	// (0x0008acff) cell_afind_grid_control_pane_ParamLimits

0xd92e,	// (0x0008acff) cell_afind_grid_control_pane

0xd7a9,	// (0x0008ab7a) bg_button_pane_cp69_ParamLimits

0xd7a9,	// (0x0008ab7a) bg_button_pane_cp69

0x7931,	// (0x00084d02) cell_afind_pane_g1_ParamLimits

0x7931,	// (0x00084d02) cell_afind_pane_g1

0x793e,	// (0x00084d0f) cell_afind_pane_t1_ParamLimits

0x793e,	// (0x00084d0f) cell_afind_pane_t1

0xac13,	// (0x00087fe4) bg_button_pane_cp72

0xd93d,	// (0x0008ad0e) cell_afind_grid_control_pane_g1

0x4d5c,	// (0x0008212d) aid_image_placing_area_ParamLimits

0x4d5c,	// (0x0008212d) aid_image_placing_area

0xd468,	// (0x0008a839) field_vitu_entry_pane_g1_ParamLimits

0xd468,	// (0x0008a839) field_vitu_entry_pane_g1

0xd474,	// (0x0008a845) field_vitu_entry_pane_g2_ParamLimits

0xd474,	// (0x0008a845) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0008cbe8) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0008cbe8) field_vitu_entry_pane_g

0x698d,	// (0x00083d5e) cell_vitu_itu_pane_g1_ParamLimits

0x69dd,	// (0x00083dae) cell_vitu_itu_pane_t3_ParamLimits

0x69dd,	// (0x00083dae) cell_vitu_itu_pane_t3

0xd752,	// (0x0008ab23) mp4_progress_pane_t1_ParamLimits

0xd76b,	// (0x0008ab3c) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0008cc81) mp4_progress_pane_t_ParamLimits

0xd784,	// (0x0008ab55) mup_progress_pane_cp04_ParamLimits

0x7840,	// (0x00084c11) main_myfav_hc_pane_t5_ParamLimits

0x7840,	// (0x00084c11) main_myfav_hc_pane_t5

0x0ba4,	// (0x0007df75) aid_zoom_text_primary

0x204e,	// (0x0007f41f) popup_adpt_find_window_ParamLimits

0xbdbe,	// (0x0008918f) main_cam_set_pane

0x72b9,	// (0x0008468a) cam4_zoom_pane_ParamLimits

0x72b9,	// (0x0008468a) cam4_zoom_pane

0x7950,	// (0x00084d21) main_cam_set_pane_g1_ParamLimits

0x7950,	// (0x00084d21) main_cam_set_pane_g1

0x795e,	// (0x00084d2f) main_cam_set_pane_g2_ParamLimits

0x795e,	// (0x00084d2f) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0008cd42) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0008cd42) main_cam_set_pane_g

0x796a,	// (0x00084d3b) main_cam_set_pane_t1_ParamLimits

0x796a,	// (0x00084d3b) main_cam_set_pane_t1

0x7986,	// (0x00084d57) main_cset_listscroll_pane_ParamLimits

0x7986,	// (0x00084d57) main_cset_listscroll_pane

0x79b5,	// (0x00084d86) main_cset_slider_pane_ParamLimits

0x79b5,	// (0x00084d86) main_cset_slider_pane

0xd94e,	// (0x0008ad1f) main_cset_list_pane_ParamLimits

0xd94e,	// (0x0008ad1f) main_cset_list_pane

0xd95e,	// (0x0008ad2f) scroll_pane_cp028

0x79d6,	// (0x00084da7) aid_area_touch_slider

0x79f2,	// (0x00084dc3) cset_slider_pane

0x7a1c,	// (0x00084ded) main_cset_slider_pane_g1

0x7a31,	// (0x00084e02) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0008cd47) main_cset_slider_pane_g

0xd997,	// (0x0008ad68) main_cset_slider_pane_t1

0x7aed,	// (0x00084ebe) main_cset_slider_pane_t2

0x7b07,	// (0x00084ed8) main_cset_slider_pane_t3

0x7b21,	// (0x00084ef2) main_cset_slider_pane_t4

0x7b3b,	// (0x00084f0c) main_cset_slider_pane_t5

0x7b55,	// (0x00084f26) main_cset_slider_pane_t6

0x7b6a,	// (0x00084f3b) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0008cd6c) main_cset_slider_pane_t

0x7c6e,	// (0x0008503f) cset_list_set_pane_ParamLimits

0x7c6e,	// (0x0008503f) cset_list_set_pane

0x7c7f,	// (0x00085050) aid_position_infowindow_above

0x7c87,	// (0x00085058) aid_position_infowindow_below

0x7c8f,	// (0x00085060) cset_list_set_pane_g1_ParamLimits

0x7c8f,	// (0x00085060) cset_list_set_pane_g1

0x0fcf,	// (0x0007e3a0) cset_list_set_pane_g3_ParamLimits

0x0fcf,	// (0x0007e3a0) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0008cd8b) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0008cd8b) cset_list_set_pane_g

0x0fde,	// (0x0007e3af) cset_list_set_pane_t1_ParamLimits

0x0fde,	// (0x0007e3af) cset_list_set_pane_t1

0xbdbe,	// (0x0008918f) list_highlight_pane_cp021_ParamLimits

0xbdbe,	// (0x0008918f) list_highlight_pane_cp021

0xb767,	// (0x00088b38) cset_slider_pane_g1

0xb779,	// (0x00088b4a) cset_slider_pane_g2

0xb770,	// (0x00088b41) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0008cd90) cset_slider_pane_g

0xe20d,	// (0x0008b5de) aid_area_touch_cam4_zoom

0x7c9b,	// (0x0008506c) cam4_zoom_cont_pane

0x7ca3,	// (0x00085074) cam4_zoom_pane_g1

0x7cab,	// (0x0008507c) cam4_zoom_pane_g2

0x7cb3,	// (0x00085084) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0008cd97) cam4_zoom_pane_g

0x7cbc,	// (0x0008508d) cam4_zoom_cont_pane_g1

0x7cc5,	// (0x00085096) cam4_zoom_cont_pane_g2

0x7cce,	// (0x0008509f) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0008cd9e) cam4_zoom_cont_pane_g

0x70d5,	// (0x000844a6) call4_image_pane_ParamLimits

0x70d5,	// (0x000844a6) call4_image_pane

0x7136,	// (0x00084507) call4_windows_conf_pane_ParamLimits

0x7181,	// (0x00084552) popup_call4_audio_in_window_ParamLimits

0x7181,	// (0x00084552) popup_call4_audio_in_window

0xa273,	// (0x00087644) bg_popup_call2_act_pane_cp02

0xd7b5,	// (0x0008ab86) call4_list_conf_pane

0xce8f,	// (0x0008a260) call4_image_pane_g1

0xce8f,	// (0x0008a260) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0008caa9) call4_image_pane_g

0xda37,	// (0x0008ae08) list_single_graphic_popup_conf4_pane_ParamLimits

0xda37,	// (0x0008ae08) list_single_graphic_popup_conf4_pane

0xa273,	// (0x00087644) list_highlight_pane_cp022

0xda4c,	// (0x0008ae1d) list_single_graphic_popup_conf4_pane_g1

0xb353,	// (0x00088724) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0008cda5) list_single_graphic_popup_conf4_pane_g

0xda54,	// (0x0008ae25) list_single_graphic_popup_conf4_pane_t1

0x3192,	// (0x00080563) popup_vtel_slider_window_ParamLimits

0x3192,	// (0x00080563) popup_vtel_slider_window

0xd797,	// (0x0008ab68) dialer2_ne_pane_t2_ParamLimits

0xd797,	// (0x0008ab68) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0008cc86) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0008cc86) dialer2_ne_pane_t

0xbdbe,	// (0x0008918f) bg_popup_sub_pane_cp010_ParamLimits

0xbdbe,	// (0x0008918f) bg_popup_sub_pane_cp010

0x7cd7,	// (0x000850a8) popup_vtel_slider_window_g1_ParamLimits

0x7cd7,	// (0x000850a8) popup_vtel_slider_window_g1

0x7ce3,	// (0x000850b4) popup_vtel_slider_window_g2_ParamLimits

0x7ce3,	// (0x000850b4) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0008cdaa) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0008cdaa) popup_vtel_slider_window_g

0x7d2b,	// (0x000850fc) vtel_slider_pane_ParamLimits

0x7d2b,	// (0x000850fc) vtel_slider_pane

0x7d3a,	// (0x0008510b) vtel_slider_pane_g1_ParamLimits

0x7d3a,	// (0x0008510b) vtel_slider_pane_g1

0x7d47,	// (0x00085118) vtel_slider_pane_g2_ParamLimits

0x7d47,	// (0x00085118) vtel_slider_pane_g2

0x7d54,	// (0x00085125) vtel_slider_pane_g3_ParamLimits

0x7d54,	// (0x00085125) vtel_slider_pane_g3

0x7d3a,	// (0x0008510b) vtel_slider_pane_g4_ParamLimits

0x7d3a,	// (0x0008510b) vtel_slider_pane_g4

0x7d61,	// (0x00085132) vtel_slider_pane_g5_ParamLimits

0x7d61,	// (0x00085132) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0008cdb3) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0008cdb3) vtel_slider_pane_g

0xbdbe,	// (0x0008918f) main_gallery2_pane

0x7511,	// (0x000848e2) aid_size_row_itut2_dropdow_list_ParamLimits

0x7511,	// (0x000848e2) aid_size_row_itut2_dropdow_list

0x7573,	// (0x00084944) grid_vitu2_function_top_pane_ParamLimits

0x7573,	// (0x00084944) grid_vitu2_function_top_pane

0x75c9,	// (0x0008499a) popup_vitu2_dropdown_list_window_ParamLimits

0x75c9,	// (0x0008499a) popup_vitu2_dropdown_list_window

0x75e9,	// (0x000849ba) popup_vitu2_match_list_window

0x7d6e,	// (0x0008513f) cell_vitu2_function_top_pane_ParamLimits

0x7d6e,	// (0x0008513f) cell_vitu2_function_top_pane

0x7d92,	// (0x00085163) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7d92,	// (0x00085163) cell_vitu2_function_top_pane_cp01

0x7dae,	// (0x0008517f) cell_vitu2_function_top_wide_pane_ParamLimits

0x7dae,	// (0x0008517f) cell_vitu2_function_top_wide_pane

0xbdbe,	// (0x0008918f) bg_button_pane_cp012

0x7dca,	// (0x0008519b) cell_vitu2_function_top_pane_g1

0x7dde,	// (0x000851af) bg_button_pane_cp013_ParamLimits

0x7dde,	// (0x000851af) bg_button_pane_cp013

0x7dfa,	// (0x000851cb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7dfa,	// (0x000851cb) cell_vitu2_function_top_wide_pane_g1

0xe1ff,	// (0x0008b5d0) bg_popup_sub_pane_cp20

0x7e12,	// (0x000851e3) list_vitu2_match_list_pane

0xd836,	// (0x0008ac07) bg_popup_sub_pane_cp20_g1

0xd83e,	// (0x0008ac0f) bg_popup_sub_pane_cp20_g2

0xae45,	// (0x00088216) bg_popup_sub_pane_cp20_g3

0xd846,	// (0x0008ac17) bg_popup_sub_pane_cp20_g4

0xae25,	// (0x000881f6) bg_popup_sub_pane_cp20_g5

0xda6a,	// (0x0008ae3b) bg_popup_sub_pane_cp20_g6

0xd856,	// (0x0008ac27) bg_popup_sub_pane_cp20_g7

0xd85e,	// (0x0008ac2f) bg_popup_sub_pane_cp20_g8

0xd866,	// (0x0008ac37) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0008cdbe) bg_popup_sub_pane_cp20_g

0x7e2a,	// (0x000851fb) list_vitu2_match_list_item_pane_ParamLimits

0x7e2a,	// (0x000851fb) list_vitu2_match_list_item_pane

0x7e3c,	// (0x0008520d) list_vitu2_match_list_item_pane_t1

0xa273,	// (0x00087644) bg_popup_sub_pane_cp21

0xb27c,	// (0x0008864d) grid_vitu2_dropdown_list_pane

0x7e56,	// (0x00085227) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7e56,	// (0x00085227) cell_vitu2_dropdown_list_char_pane

0x7e7b,	// (0x0008524c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7e7b,	// (0x0008524c) cell_vitu2_dropdown_list_ctrl_pane

0xda72,	// (0x0008ae43) cell_vitu2_dropdown_list_char_pane_g1

0xda7b,	// (0x0008ae4c) cell_vitu2_dropdown_list_char_pane_g2

0xda84,	// (0x0008ae55) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0008cddb) cell_vitu2_dropdown_list_char_pane_g

0x7ea9,	// (0x0008527a) cell_vitu2_dropdown_list_char_pane_t1

0x7eb7,	// (0x00085288) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7eb7,	// (0x00085288) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7ec7,	// (0x00085298) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7ec7,	// (0x00085298) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7ed8,	// (0x000852a9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7ed8,	// (0x000852a9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7ee8,	// (0x000852b9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7ee8,	// (0x000852b9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd0b6,	// (0x0008a487) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd0b6,	// (0x0008a487) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0008cde2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0008cde2) cell_vitu2_dropdown_list_ctrl_pane_g

0x7f01,	// (0x000852d2) aid_size_cell_gallery2_ParamLimits

0x7f01,	// (0x000852d2) aid_size_cell_gallery2

0x7f1b,	// (0x000852ec) grid_gallery2_pane_ParamLimits

0x7f1b,	// (0x000852ec) grid_gallery2_pane

0x7f32,	// (0x00085303) scroll_pane_cp029_ParamLimits

0x7f32,	// (0x00085303) scroll_pane_cp029

0x7f42,	// (0x00085313) cell_gallery2_pane_ParamLimits

0x7f42,	// (0x00085313) cell_gallery2_pane

0xda8d,	// (0x0008ae5e) cell_gallery2_pane_g2

0x7f99,	// (0x0008536a) cell_gallery2_pane_g3

0xda95,	// (0x0008ae66) cell_gallery2_pane_g4

0xda9d,	// (0x0008ae6e) cell_gallery2_pane_g5

0xabc1,	// (0x00087f92) grid_highlight_pane_cp10

0x75e9,	// (0x000849ba) popup_vitu2_match_list_window_ParamLimits

0x75fd,	// (0x000849ce) popup_vitu2_query_window_ParamLimits

0x75fd,	// (0x000849ce) popup_vitu2_query_window

0xa273,	// (0x00087644) bg_vitu2_candi_button_pane

0xda72,	// (0x0008ae43) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda7b,	// (0x0008ae4c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda84,	// (0x0008ae55) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x103d,	// (0x0007e40e) bg_button_pane_cp015

0x7fa1,	// (0x00085372) bg_button_pane_cp016

0x7fb4,	// (0x00085385) bg_button_pane_cp017

0xca57,	// (0x00089e28) bg_popup_sub_pane_cp22

0xdaa5,	// (0x0008ae76) popup_vitu2_query_window_g1

0x1070,	// (0x0007e441) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0008cded) popup_vitu2_query_window_g

0x108d,	// (0x0007e45e) popup_vitu2_query_window_t1_ParamLimits

0x108d,	// (0x0007e45e) popup_vitu2_query_window_t1

0x10c0,	// (0x0007e491) popup_vitu2_query_window_t2_ParamLimits

0x10c0,	// (0x0007e491) popup_vitu2_query_window_t2

0x10d2,	// (0x0007e4a3) popup_vitu2_query_window_t3_ParamLimits

0x10d2,	// (0x0007e4a3) popup_vitu2_query_window_t3

0x7fd8,	// (0x000853a9) popup_vitu2_query_window_t4_ParamLimits

0x7fd8,	// (0x000853a9) popup_vitu2_query_window_t4

0x7ffb,	// (0x000853cc) popup_vitu2_query_window_t5_ParamLimits

0x7ffb,	// (0x000853cc) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0008cdf4) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0008cdf4) popup_vitu2_query_window_t

0xd946,	// (0x0008ad17) main_cset_text_pane

0x79d6,	// (0x00084da7) aid_area_touch_slider_ParamLimits

0x79f2,	// (0x00084dc3) cset_slider_pane_ParamLimits

0x7a1c,	// (0x00084ded) main_cset_slider_pane_g1_ParamLimits

0x7a31,	// (0x00084e02) main_cset_slider_pane_g2_ParamLimits

0xd967,	// (0x0008ad38) main_cset_slider_pane_g3_ParamLimits

0xd967,	// (0x0008ad38) main_cset_slider_pane_g3

0x7a46,	// (0x00084e17) main_cset_slider_pane_g4_ParamLimits

0x7a46,	// (0x00084e17) main_cset_slider_pane_g4

0x7a55,	// (0x00084e26) main_cset_slider_pane_g5_ParamLimits

0x7a55,	// (0x00084e26) main_cset_slider_pane_g5

0x7a61,	// (0x00084e32) main_cset_slider_pane_g6_ParamLimits

0x7a61,	// (0x00084e32) main_cset_slider_pane_g6

0xf976,	// (0x0008cd47) main_cset_slider_pane_g_ParamLimits

0xd997,	// (0x0008ad68) main_cset_slider_pane_t1_ParamLimits

0x7aed,	// (0x00084ebe) main_cset_slider_pane_t2_ParamLimits

0x7b07,	// (0x00084ed8) main_cset_slider_pane_t3_ParamLimits

0x7b21,	// (0x00084ef2) main_cset_slider_pane_t4_ParamLimits

0x7b3b,	// (0x00084f0c) main_cset_slider_pane_t5_ParamLimits

0x7b55,	// (0x00084f26) main_cset_slider_pane_t6_ParamLimits

0x7b6a,	// (0x00084f3b) main_cset_slider_pane_t7_ParamLimits

0x7b94,	// (0x00084f65) main_cset_slider_pane_t8_ParamLimits

0x7b94,	// (0x00084f65) main_cset_slider_pane_t8

0x7bbc,	// (0x00084f8d) main_cset_slider_pane_t9_ParamLimits

0x7bbc,	// (0x00084f8d) main_cset_slider_pane_t9

0x7be4,	// (0x00084fb5) main_cset_slider_pane_t10_ParamLimits

0x7be4,	// (0x00084fb5) main_cset_slider_pane_t10

0x7c0c,	// (0x00084fdd) main_cset_slider_pane_t11_ParamLimits

0x7c0c,	// (0x00084fdd) main_cset_slider_pane_t11

0x7c34,	// (0x00085005) main_cset_slider_pane_t12_ParamLimits

0x7c34,	// (0x00085005) main_cset_slider_pane_t12

0x7c51,	// (0x00085022) main_cset_slider_pane_t13_ParamLimits

0x7c51,	// (0x00085022) main_cset_slider_pane_t13

0xf99b,	// (0x0008cd6c) main_cset_slider_pane_t_ParamLimits

0xa273,	// (0x00087644) bg_popup_sub_pane_cp011

0xdab1,	// (0x0008ae82) main_cset_text_pane_g1

0xdab9,	// (0x0008ae8a) main_cset_text_pane_t1

0xdac7,	// (0x0008ae98) main_cset_text_pane_t2

0xdad5,	// (0x0008aea6) main_cset_text_pane_t3

0xdae3,	// (0x0008aeb4) main_cset_text_pane_t4

0xdaf1,	// (0x0008aec2) main_cset_text_pane_t5

0xdaff,	// (0x0008aed0) main_cset_text_pane_t6

0xdb0d,	// (0x0008aede) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0008ce03) main_cset_text_pane_t

0xa273,	// (0x00087644) main_cam4_burst_pane

0xa273,	// (0x00087644) main_cam5_pane

0x791f,	// (0x00084cf0) bg_button_pane_cp019

0x7928,	// (0x00084cf9) bg_button_pane_cp020

0xd973,	// (0x0008ad44) main_cset_slider_pane_g7_ParamLimits

0xd973,	// (0x0008ad44) main_cset_slider_pane_g7

0xd97f,	// (0x0008ad50) main_cset_slider_pane_g8_ParamLimits

0xd97f,	// (0x0008ad50) main_cset_slider_pane_g8

0x7a75,	// (0x00084e46) main_cset_slider_pane_g9_ParamLimits

0x7a75,	// (0x00084e46) main_cset_slider_pane_g9

0x7a81,	// (0x00084e52) main_cset_slider_pane_g10_ParamLimits

0x7a81,	// (0x00084e52) main_cset_slider_pane_g10

0x7a8d,	// (0x00084e5e) main_cset_slider_pane_g11_ParamLimits

0x7a8d,	// (0x00084e5e) main_cset_slider_pane_g11

0x7a99,	// (0x00084e6a) main_cset_slider_pane_g12_ParamLimits

0x7a99,	// (0x00084e6a) main_cset_slider_pane_g12

0x7aa5,	// (0x00084e76) main_cset_slider_pane_g13_ParamLimits

0x7aa5,	// (0x00084e76) main_cset_slider_pane_g13

0x7ab1,	// (0x00084e82) main_cset_slider_pane_g14_ParamLimits

0x7ab1,	// (0x00084e82) main_cset_slider_pane_g14

0x7abd,	// (0x00084e8e) main_cset_slider_pane_g15_ParamLimits

0x7abd,	// (0x00084e8e) main_cset_slider_pane_g15

0xd9c5,	// (0x0008ad96) main_cset_slider_pane_t14_ParamLimits

0xd9c5,	// (0x0008ad96) main_cset_slider_pane_t14

0xd9fe,	// (0x0008adcf) main_cset_slider_pane_t15_ParamLimits

0xd9fe,	// (0x0008adcf) main_cset_slider_pane_t15

0x801e,	// (0x000853ef) aid_cam4_burst_size_cell_ParamLimits

0x801e,	// (0x000853ef) aid_cam4_burst_size_cell

0x803a,	// (0x0008540b) grid_cam4_burst_pane_ParamLimits

0x803a,	// (0x0008540b) grid_cam4_burst_pane

0x806c,	// (0x0008543d) linegrid_cam4_burst_pane_ParamLimits

0x806c,	// (0x0008543d) linegrid_cam4_burst_pane

0x808a,	// (0x0008545b) scroll_pane_cp30_ParamLimits

0x808a,	// (0x0008545b) scroll_pane_cp30

0x8096,	// (0x00085467) cell_cam4_burst_pane_ParamLimits

0x8096,	// (0x00085467) cell_cam4_burst_pane

0xdb1b,	// (0x0008aeec) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb1b,	// (0x0008aeec) linegrid_cam4_burst_pane_g1

0x80d6,	// (0x000854a7) linegrid_cam4_burst_pane_g2_ParamLimits

0x80d6,	// (0x000854a7) linegrid_cam4_burst_pane_g2

0xdb28,	// (0x0008aef9) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb28,	// (0x0008aef9) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0008ce12) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0008ce12) linegrid_cam4_burst_pane_g

0x80e7,	// (0x000854b8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x80e7,	// (0x000854b8) linegrid_cam4_burst_pane_g3_copy1

0xdb35,	// (0x0008af06) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb35,	// (0x0008af06) linegrid_cam4_burst_pane_g4

0x8101,	// (0x000854d2) linegrid_cam4_burst_pane_g5_ParamLimits

0x8101,	// (0x000854d2) linegrid_cam4_burst_pane_g5

0x8112,	// (0x000854e3) linegrid_cam4_burst_pane_g6_ParamLimits

0x8112,	// (0x000854e3) linegrid_cam4_burst_pane_g6

0xdb42,	// (0x0008af13) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb42,	// (0x0008af13) linegrid_cam4_burst_pane_g7

0x8129,	// (0x000854fa) cell_cam4_burst_pane_g1

0xdb5b,	// (0x0008af2c) main_cam5_pane_t1_ParamLimits

0xdb5b,	// (0x0008af2c) main_cam5_pane_t1

0xdb6d,	// (0x0008af3e) main_cam5_pane_t2_ParamLimits

0xdb6d,	// (0x0008af3e) main_cam5_pane_t2

0xdb7f,	// (0x0008af50) main_cam5_pane_t3_ParamLimits

0xdb7f,	// (0x0008af50) main_cam5_pane_t3

0xdb91,	// (0x0008af62) main_cam5_pane_t4_ParamLimits

0xdb91,	// (0x0008af62) main_cam5_pane_t4

0xdbf0,	// (0x0008afc1) main_cam5_pane_t5_ParamLimits

0xdbf0,	// (0x0008afc1) main_cam5_pane_t5

0xdc04,	// (0x0008afd5) main_cam5_pane_t6_ParamLimits

0xdc04,	// (0x0008afd5) main_cam5_pane_t6

0xdc18,	// (0x0008afe9) main_cam5_pane_t7_ParamLimits

0xdc18,	// (0x0008afe9) main_cam5_pane_t7

0xdc2a,	// (0x0008affb) main_cam5_pane_t8_ParamLimits

0xdc2a,	// (0x0008affb) main_cam5_pane_t8

0xdc48,	// (0x0008b019) main_cam5_pane_t9_ParamLimits

0xdc48,	// (0x0008b019) main_cam5_pane_t9

0xdc5a,	// (0x0008b02b) main_cam5_pane_t10_ParamLimits

0xdc5a,	// (0x0008b02b) main_cam5_pane_t10

0xdc6c,	// (0x0008b03d) main_cam5_pane_t11_ParamLimits

0xdc6c,	// (0x0008b03d) main_cam5_pane_t11

0xdc80,	// (0x0008b051) main_cam5_pane_t12_ParamLimits

0xdc80,	// (0x0008b051) main_cam5_pane_t12

0xdc97,	// (0x0008b068) main_cam5_pane_t13_ParamLimits

0xdc97,	// (0x0008b068) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0008ce1e) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0008ce1e) main_cam5_pane_t

0x2105,	// (0x0007f4d6) popup_scut_keymap_window_ParamLimits

0x2105,	// (0x0007f4d6) popup_scut_keymap_window

0x813c,	// (0x0008550d) aid_size_cell_brow_shortcut

0xabc1,	// (0x00087f92) bg_popup_window_pane_cp010

0x8148,	// (0x00085519) grid_scut_pane

0x8154,	// (0x00085525) cell_scut_pane_ParamLimits

0x8154,	// (0x00085525) cell_scut_pane

0x816f,	// (0x00085540) cell_scut_pane_g1

0xdcba,	// (0x0008b08b) cell_scut_pane_t1

0xdcc9,	// (0x0008b09a) cell_scut_pane_t2

0x8178,	// (0x00085549) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0008ce39) cell_scut_pane_t

0x5ff9,	// (0x000833ca) main_mup3_pane_g8_ParamLimits

0x5ff9,	// (0x000833ca) main_mup3_pane_g8

0x7521,	// (0x000848f2) area_vitu2_query_pane_ParamLimits

0x7521,	// (0x000848f2) area_vitu2_query_pane

0x104f,	// (0x0007e420) input_focus_pane_cp08

0xdcd8,	// (0x0008b0a9) area_vitu2_query_pane_g1

0x1150,	// (0x0007e521) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0008ce40) area_vitu2_query_pane_g

0x8186,	// (0x00085557) area_vitu2_query_pane_t1_ParamLimits

0x8186,	// (0x00085557) area_vitu2_query_pane_t1

0x819a,	// (0x0008556b) area_vitu2_query_pane_t2_ParamLimits

0x819a,	// (0x0008556b) area_vitu2_query_pane_t2

0x1161,	// (0x0007e532) area_vitu2_query_pane_t3_ParamLimits

0x1161,	// (0x0007e532) area_vitu2_query_pane_t3

0x1189,	// (0x0007e55a) area_vitu2_query_pane_t4_ParamLimits

0x1189,	// (0x0007e55a) area_vitu2_query_pane_t4

0x11b1,	// (0x0007e582) area_vitu2_query_pane_t5_ParamLimits

0x11b1,	// (0x0007e582) area_vitu2_query_pane_t5

0x11d9,	// (0x0007e5aa) area_vitu2_query_pane_t6_ParamLimits

0x11d9,	// (0x0007e5aa) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0008ce45) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0008ce45) area_vitu2_query_pane_t

0x81ae,	// (0x0008557f) bg_button_pane_cp018

0x81bc,	// (0x0008558d) bg_button_pane_cp021

0x1225,	// (0x0007e5f6) bg_button_pane_cp022

0x1236,	// (0x0007e607) input_focus_pane_cp09

0xb47c,	// (0x0008884d) aid_size_touch_mv_arrow_left

0xb4a7,	// (0x00088878) aid_size_touch_mv_arrow_right

0x7ad5,	// (0x00084ea6) main_cset_slider_pane_g16_ParamLimits

0x7ad5,	// (0x00084ea6) main_cset_slider_pane_g16

0x7ae1,	// (0x00084eb2) main_cset_slider_pane_g17_ParamLimits

0x7ae1,	// (0x00084eb2) main_cset_slider_pane_g17

0x8129,	// (0x000854fa) cell_cam4_burst_pane_g1_ParamLimits

0xa273,	// (0x00087644) compa_mode_pane

0x7cef,	// (0x000850c0) popup_vtel_slider_window_g3_ParamLimits

0x7cef,	// (0x000850c0) popup_vtel_slider_window_g3

0x7d03,	// (0x000850d4) popup_vtel_slider_window_g4_ParamLimits

0x7d03,	// (0x000850d4) popup_vtel_slider_window_g4

0x7d17,	// (0x000850e8) popup_vtel_slider_window_t1_ParamLimits

0x7d17,	// (0x000850e8) popup_vtel_slider_window_t1

0xa273,	// (0x00087644) main_cl_pane

0x527d,	// (0x0008264e) popup_imed_adjust2_window_ParamLimits

0xca57,	// (0x00089e28) bg_tb_trans_pane_cp05_ParamLimits

0xd393,	// (0x0008a764) popup_imed_adjust2_window_g1_ParamLimits

0xd3a2,	// (0x0008a773) popup_imed_adjust2_window_g2_ParamLimits

0xd3a2,	// (0x0008a773) popup_imed_adjust2_window_g2

0xd3ae,	// (0x0008a77f) popup_imed_adjust2_window_g3_ParamLimits

0xd3ae,	// (0x0008a77f) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0008cbac) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0008cbac) popup_imed_adjust2_window_g

0xd3ba,	// (0x0008a78b) popup_imed_adjust2_window_t1_ParamLimits

0xd3d2,	// (0x0008a7a3) slider_imed_adjust_pane_ParamLimits

0xd3e6,	// (0x0008a7b7) slider_imed_adjust_pane_g1_ParamLimits

0xd3f6,	// (0x0008a7c7) slider_imed_adjust_pane_g2_ParamLimits

0xd406,	// (0x0008a7d7) slider_imed_adjust_pane_g3_ParamLimits

0xd417,	// (0x0008a7e8) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0008cbb3) slider_imed_adjust_pane_g_ParamLimits

0x7262,	// (0x00084633) aid_touch_area_cam4_ParamLimits

0x7262,	// (0x00084633) aid_touch_area_cam4

0x7272,	// (0x00084643) battery_pane_cp01

0x72f9,	// (0x000846ca) main_camera4_pane_g6_ParamLimits

0x72f9,	// (0x000846ca) main_camera4_pane_g6

0x7317,	// (0x000846e8) main_camera4_pane_t2_ParamLimits

0x7317,	// (0x000846e8) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0008ccba) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0008ccba) main_camera4_pane_t

0x739a,	// (0x0008476b) aid_touch_area_vid4_ParamLimits

0x739a,	// (0x0008476b) aid_touch_area_vid4

0x73da,	// (0x000847ab) main_video4_pane_g5_ParamLimits

0x73da,	// (0x000847ab) main_video4_pane_g5

0x7400,	// (0x000847d1) vid4_progress_pane_ParamLimits

0x7400,	// (0x000847d1) vid4_progress_pane

0xd98b,	// (0x0008ad5c) main_cset_slider_pane_g18_ParamLimits

0xd98b,	// (0x0008ad5c) main_cset_slider_pane_g18

0xdb4f,	// (0x0008af20) cell_cam4_burst_pane_g2_ParamLimits

0xdb4f,	// (0x0008af20) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0008ce19) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0008ce19) cell_cam4_burst_pane_g

0x81c8,	// (0x00085599) bg_cl_pane_ParamLimits

0x81c8,	// (0x00085599) bg_cl_pane

0x81d4,	// (0x000855a5) cl_header_pane_ParamLimits

0x81d4,	// (0x000855a5) cl_header_pane

0x81e0,	// (0x000855b1) cl_listscroll_pane_ParamLimits

0x81e0,	// (0x000855b1) cl_listscroll_pane

0xdce4,	// (0x0008b0b5) bg_cl_pane_g1

0xdcec,	// (0x0008b0bd) bg_cl_pane_g2

0xdcf4,	// (0x0008b0c5) bg_cl_pane_g3

0xdcfc,	// (0x0008b0cd) bg_cl_pane_g4

0xdd04,	// (0x0008b0d5) bg_cl_pane_g5

0xdd0c,	// (0x0008b0dd) bg_cl_pane_g6

0xdd14,	// (0x0008b0e5) bg_cl_pane_g7

0xdd1c,	// (0x0008b0ed) bg_cl_pane_g8

0xdd24,	// (0x0008b0f5) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0008ce54) bg_cl_pane_g

0x81ec,	// (0x000855bd) aid_height_cl_leading_ParamLimits

0x81ec,	// (0x000855bd) aid_height_cl_leading

0x81f8,	// (0x000855c9) aid_height_cl_text_ParamLimits

0x81f8,	// (0x000855c9) aid_height_cl_text

0xe1ff,	// (0x0008b5d0) bg_cl_header_pane_ParamLimits

0xe1ff,	// (0x0008b5d0) bg_cl_header_pane

0x8210,	// (0x000855e1) cl_header_pane_g1_ParamLimits

0x8210,	// (0x000855e1) cl_header_pane_g1

0x821d,	// (0x000855ee) cl_header_pane_t1_ParamLimits

0x821d,	// (0x000855ee) cl_header_pane_t1

0xdd2c,	// (0x0008b0fd) cl_list_pane

0xd95e,	// (0x0008ad2f) hc_scroll_pane_cp01

0xae25,	// (0x000881f6) bg_cl_header_pane_g1

0xd836,	// (0x0008ac07) bg_cl_header_pane_g2

0xae45,	// (0x00088216) bg_cl_header_pane_g3

0xd846,	// (0x0008ac17) bg_cl_header_pane_g4

0xd83e,	// (0x0008ac0f) bg_cl_header_pane_g5

0xda6a,	// (0x0008ae3b) bg_cl_header_pane_g6

0xd85e,	// (0x0008ac2f) bg_cl_header_pane_g7

0xd866,	// (0x0008ac37) bg_cl_header_pane_g8

0xd856,	// (0x0008ac27) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0008ce67) bg_cl_header_pane_g

0x822f,	// (0x00085600) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x822f,	// (0x00085600) hc_cl_list_double_graphic_heading_pane

0x823f,	// (0x00085610) hc_cl_list_single_graphic_pane_ParamLimits

0x823f,	// (0x00085610) hc_cl_list_single_graphic_pane

0x8251,	// (0x00085622) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8251,	// (0x00085622) hc_cl_list_single_graphic_pane_g1

0x825d,	// (0x0008562e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x825d,	// (0x0008562e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0008ce7a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0008ce7a) hc_cl_list_single_graphic_pane_g

0x8271,	// (0x00085642) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8271,	// (0x00085642) hc_cl_list_single_graphic_pane_t1

0x8251,	// (0x00085622) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8251,	// (0x00085622) hc_cl_list_double_graphic_heading_pane_g1

0x8286,	// (0x00085657) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8286,	// (0x00085657) hc_cl_list_double_graphic_heading_pane_g2

0x829a,	// (0x0008566b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x829a,	// (0x0008566b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0008ce7f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0008ce7f) hc_cl_list_double_graphic_heading_pane_g

0x82ae,	// (0x0008567f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x82ae,	// (0x0008567f) hc_cl_list_double_graphic_heading_pane_t1

0x82c3,	// (0x00085694) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x82c3,	// (0x00085694) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0008ce86) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0008ce86) hc_cl_list_double_graphic_heading_pane_t

0x82e0,	// (0x000856b1) vid4_progress_pane_g1

0x82f0,	// (0x000856c1) vid4_progress_pane_g2

0x8300,	// (0x000856d1) vid4_progress_pane_g3

0x7368,	// (0x00084739) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0008ce8b) vid4_progress_pane_g

0x8312,	// (0x000856e3) vid4_progress_pane_t1

0x8328,	// (0x000856f9) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0008ce96) vid4_progress_pane_t

0x8352,	// (0x00085723) wait_bar_pane_cp07

0xcc7c,	// (0x0008a04d) blid_firmament_pane_ParamLimits

0xccbf,	// (0x0008a090) popup_blid_sat_info2_window_g1

0xcce3,	// (0x0008a0b4) popup_blid_sat_info2_window_t3

0xccf1,	// (0x0008a0c2) popup_blid_sat_info2_window_t4

0xccff,	// (0x0008a0d0) popup_blid_sat_info2_window_t5

0xcd0d,	// (0x0008a0de) popup_blid_sat_info2_window_t6

0xcd1d,	// (0x0008a0ee) popup_blid_sat_info2_window_t7

0xcd2b,	// (0x0008a0fc) popup_blid_sat_info2_window_t8

0xcd39,	// (0x0008a10a) popup_blid_sat_info2_window_t9

0xcd47,	// (0x0008a118) popup_blid_sat_info2_window_t10

0xce0f,	// (0x0008a1e0) aid_firma_cardinal_ParamLimits

0xce23,	// (0x0008a1f4) blid_firmament_pane_t1_ParamLimits

0xce3a,	// (0x0008a20b) blid_firmament_pane_t2_ParamLimits

0xce51,	// (0x0008a222) blid_firmament_pane_t3_ParamLimits

0xce68,	// (0x0008a239) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0008caa0) blid_firmament_pane_t_ParamLimits

0xce7f,	// (0x0008a250) blid_sat_info_pane_ParamLimits

0xbdbe,	// (0x0008918f) main_cam_set_pane_ParamLimits

0x67b5,	// (0x00083b86) aid_size_cell_colour_35_ParamLimits

0x67cf,	// (0x00083ba0) aid_size_cell_colour_112_ParamLimits

0x67e6,	// (0x00083bb7) aid_size_cell_effect_ParamLimits

0xbdbe,	// (0x0008918f) bg_tb_trans_pane_cp02_ParamLimits

0xb3cd,	// (0x0008879e) heading_imed_pane_ParamLimits

0x6800,	// (0x00083bd1) listscroll_imed_pane_ParamLimits

0xc07f,	// (0x00089450) popup_call2_audio_first_window_g5_ParamLimits

0xc07f,	// (0x00089450) popup_call2_audio_first_window_g5

0x6f4c,	// (0x0008431d) aid_size_touch_image3_arrow_left_ParamLimits

0x6f4c,	// (0x0008431d) aid_size_touch_image3_arrow_left

0x6f62,	// (0x00084333) aid_size_touch_image3_arrow_right_ParamLimits

0x6f62,	// (0x00084333) aid_size_touch_image3_arrow_right

0x833d,	// (0x0008570e) vid4_progress_pane_t3

0x6aa4,	// (0x00083e75) main_hwr_training_symbol_option_pane_ParamLimits

0x6aa4,	// (0x00083e75) main_hwr_training_symbol_option_pane

0xd68c,	// (0x0008aa5d) popup_hwr_training_preview_window_ParamLimits

0xd68c,	// (0x0008aa5d) popup_hwr_training_preview_window

0x6b05,	// (0x00083ed6) hwr_training_navi_pane_g5_ParamLimits

0x6b05,	// (0x00083ed6) hwr_training_navi_pane_g5

0xd824,	// (0x0008abf5) popup_char_count_window

0xe1ff,	// (0x0008b5d0) bg_popup_sub_pane_cp20_ParamLimits

0x7e12,	// (0x000851e3) list_vitu2_match_list_pane_ParamLimits

0x7e1e,	// (0x000851ef) vitu2_page_scroll_pane_ParamLimits

0x7e1e,	// (0x000851ef) vitu2_page_scroll_pane

0xdd35,	// (0x0008b106) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdd35,	// (0x0008b106) list_single_hwr_training_symbol_option_pane

0xdd48,	// (0x0008b119) list_single_hwr_training_symbol_option_pane_g1

0xdd50,	// (0x0008b121) list_single_hwr_training_symbol_option_pane_t1

0xdd5e,	// (0x0008b12f) bg_button_pane_cp023

0xdd67,	// (0x0008b138) bg_button_pane_cp024

0x8376,	// (0x00085747) vitu2_page_scroll_pane_g1

0x837e,	// (0x0008574f) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0008ce9d) vitu2_page_scroll_pane_g

0x8388,	// (0x00085759) vitu2_page_scroll_pane_t1

0xdbb5,	// (0x0008af86) popup_char_count_window_g1

0xdd9a,	// (0x0008b16b) popup_char_count_window_g2

0xdbbe,	// (0x0008af8f) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0008cea2) popup_char_count_window_g

0xdda3,	// (0x0008b174) popup_char_count_window_t1

0xa273,	// (0x00087644) main_vded2_pane

0xd37f,	// (0x0008a750) aid_size_cell_imed_line

0xd389,	// (0x0008a75a) grid_imed_line_width_pane

0x7474,	// (0x00084845) vid4_indicators_pane_g4

0xddb1,	// (0x0008b182) cell_imed_line_width_pane_ParamLimits

0xddb1,	// (0x0008b182) cell_imed_line_width_pane

0xddc7,	// (0x0008b198) cell_imed_line_width_pane_g1

0xd208,	// (0x0008a5d9) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0008cea9) cell_imed_line_width_pane_g

0x8397,	// (0x00085768) main_vded2_pane_g1_ParamLimits

0x8397,	// (0x00085768) main_vded2_pane_g1

0x83a6,	// (0x00085777) main_vded2_pane_g2_ParamLimits

0x83a6,	// (0x00085777) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0008ceae) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0008ceae) main_vded2_pane_g

0x83b4,	// (0x00085785) vded2_slider_pane_ParamLimits

0x83b4,	// (0x00085785) vded2_slider_pane

0x83c1,	// (0x00085792) aid_size_touch_vded2_end

0x83cb,	// (0x0008579c) aid_size_touch_vded2_playhead

0xddd0,	// (0x0008b1a1) aid_size_touch_vded2_start

0xddd8,	// (0x0008b1a9) vded2_slider_bg_pane

0xdde1,	// (0x0008b1b2) vded2_slider_pane_g1

0xddea,	// (0x0008b1bb) vded2_slider_pane_g2

0x83d3,	// (0x000857a4) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0008ceb3) vded2_slider_pane_g

0xdbc7,	// (0x0008af98) vded2_slider_bg_pane_g1

0xdbd0,	// (0x0008afa1) vded2_slider_bg_pane_g2

0xdbd9,	// (0x0008afaa) vded2_slider_bg_pane_g3

0x0002,

0xf79f,	// (0x0008cb70) vded2_slider_bg_pane_g

0x4abf,	// (0x00081e90) aid_postcard_touch_down_pane_ParamLimits

0x4abf,	// (0x00081e90) aid_postcard_touch_down_pane

0x4acf,	// (0x00081ea0) aid_postcard_touch_up_pane_ParamLimits

0x4acf,	// (0x00081ea0) aid_postcard_touch_up_pane

0xa273,	// (0x00087644) main_blid2_pane

0x51fc,	// (0x000825cd) popup_blid2_search_window

0xa273,	// (0x00087644) blid2_gps_pane

0xa273,	// (0x00087644) blid2_navig_pane

0xa273,	// (0x00087644) blid2_search_pane

0xa273,	// (0x00087644) blid2_tripm_pane

0x83dc,	// (0x000857ad) blid2_search_pane_g1_ParamLimits

0x83dc,	// (0x000857ad) blid2_search_pane_g1

0x83e8,	// (0x000857b9) blid2_search_pane_t1_ParamLimits

0x83e8,	// (0x000857b9) blid2_search_pane_t1

0x83fa,	// (0x000857cb) aid_size_cell_blid2_gps_ParamLimits

0x83fa,	// (0x000857cb) aid_size_cell_blid2_gps

0x840a,	// (0x000857db) blid2_gps_pane_g1_ParamLimits

0x840a,	// (0x000857db) blid2_gps_pane_g1

0x8416,	// (0x000857e7) grid_blid2_satellite_pane_ParamLimits

0x8416,	// (0x000857e7) grid_blid2_satellite_pane

0x8424,	// (0x000857f5) blid2_navig_pane_g1_ParamLimits

0x8424,	// (0x000857f5) blid2_navig_pane_g1

0x8430,	// (0x00085801) blid2_navig_pane_t1_ParamLimits

0x8430,	// (0x00085801) blid2_navig_pane_t1

0x8442,	// (0x00085813) blid2_navig_pane_t2_ParamLimits

0x8442,	// (0x00085813) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0008ceba) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0008ceba) blid2_navig_pane_t

0x8454,	// (0x00085825) blid2_navig_ring_pane_ParamLimits

0x8454,	// (0x00085825) blid2_navig_ring_pane

0x8464,	// (0x00085835) blid2_speed_pane_ParamLimits

0x8464,	// (0x00085835) blid2_speed_pane

0x8470,	// (0x00085841) blid2_tripm_pane_g1_ParamLimits

0x8470,	// (0x00085841) blid2_tripm_pane_g1

0x8480,	// (0x00085851) blid2_tripm_pane_g2_ParamLimits

0x8480,	// (0x00085851) blid2_tripm_pane_g2

0x848c,	// (0x0008585d) blid2_tripm_pane_g3_ParamLimits

0x848c,	// (0x0008585d) blid2_tripm_pane_g3

0x8498,	// (0x00085869) blid2_tripm_pane_g4_ParamLimits

0x8498,	// (0x00085869) blid2_tripm_pane_g4

0x84a4,	// (0x00085875) blid2_tripm_pane_g5_ParamLimits

0x84a4,	// (0x00085875) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0008cebf) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0008cebf) blid2_tripm_pane_g

0x84c0,	// (0x00085891) blid2_tripm_pane_t1_ParamLimits

0x84c0,	// (0x00085891) blid2_tripm_pane_t1

0x84d2,	// (0x000858a3) blid2_tripm_pane_t2_ParamLimits

0x84d2,	// (0x000858a3) blid2_tripm_pane_t2

0x84e4,	// (0x000858b5) blid2_tripm_pane_t3_ParamLimits

0x84e4,	// (0x000858b5) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0008cecc) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0008cecc) blid2_tripm_pane_t

0x8516,	// (0x000858e7) cell_blid2_satellite_pane_ParamLimits

0x8516,	// (0x000858e7) cell_blid2_satellite_pane

0x8534,	// (0x00085905) cell_blid2_satellite_pane_g1

0xddf2,	// (0x0008b1c3) cell_blid2_satellite_pane_t1

0xce8f,	// (0x0008a260) blid2_speed_pane_g1

0xde00,	// (0x0008b1d1) blid2_speed_pane_t1

0xde0e,	// (0x0008b1df) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0008ced5) blid2_speed_pane_t

0xce8f,	// (0x0008a260) blid2_navig_ring_pane_g1

0x853d,	// (0x0008590e) blid2_navig_ring_pane_g2

0x8545,	// (0x00085916) blid2_navig_ring_pane_g3

0x854d,	// (0x0008591e) blid2_navig_ring_pane_g4

0x8555,	// (0x00085926) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0008ceda) blid2_navig_ring_pane_g

0xa273,	// (0x00087644) bg_popup_window_pane_cp011

0xde1c,	// (0x0008b1ed) popup_blid2_search_window_g1

0xde24,	// (0x0008b1f5) popup_blid2_search_window_t1

0xde32,	// (0x0008b203) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0008cee5) popup_blid2_search_window_t

0xad0d,	// (0x000880de) main_browser_pane_g1

0xaa19,	// (0x00087dea) main_browser_pane_ParamLimits

0xbdbe,	// (0x0008918f) bg_button_pane_cp011_ParamLimits

0x76e6,	// (0x00084ab7) cell_vitu2_function_pane_g1_ParamLimits

0xca57,	// (0x00089e28) bg_popup_sub_pane_cp22_ParamLimits

0x104f,	// (0x0007e420) input_focus_pane_cp08_ParamLimits

0x7fc7,	// (0x00085398) popup_vitu2_query_button_pane_ParamLimits

0x7fc7,	// (0x00085398) popup_vitu2_query_button_pane

0x1066,	// (0x0007e437) popup_vitu2_query_input_button_pane

0xdaa5,	// (0x0008ae76) popup_vitu2_query_window_g1_ParamLimits

0x1070,	// (0x0007e441) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0008cded) popup_vitu2_query_window_g_ParamLimits

0xa273,	// (0x00087644) bg_button_pane_cp026

0x855d,	// (0x0008592e) popup_vitu2_query_input_button_pane_g1

0xa273,	// (0x00087644) bg_button_pane_cp025

0xde40,	// (0x0008b211) popup_vitu2_query_button_pane_t1

0x5c7f,	// (0x00083050) main_mp3_pane_t6

0x5c8f,	// (0x00083060) popup_slider_window_cp01

0x734f,	// (0x00084720) cam4_battery_pane

0x742d,	// (0x000847fe) cam4_battery_pane_cp02

0x82d8,	// (0x000856a9) cam4_battery_pane_cp01

0x82d8,	// (0x000856a9) cam4_battery_pane_cp03

0xce8f,	// (0x0008a260) cam4_battery_pane_g1

0xd86e,	// (0x0008ac3f) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0008ceea) cam4_battery_pane_g

0xcd55,	// (0x0008a126) popup_blid_sat_info2_window_t11

0xb47c,	// (0x0008884d) aid_size_touch_mv_arrow_left_ParamLimits

0xb4a7,	// (0x00088878) aid_size_touch_mv_arrow_right_ParamLimits

0xb505,	// (0x000888d6) navi_pane_g1_ParamLimits

0xb511,	// (0x000888e2) navi_pane_g2_ParamLimits

0xb53f,	// (0x00088910) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0008c7b2) navi_pane_g_ParamLimits

0x44fd,	// (0x000818ce) navi_pane_mv_t1_ParamLimits

0x680c,	// (0x00083bdd) grid_imed_effect_pane_ParamLimits

0x305a,	// (0x0008042b) aid_placing_vt_slider_lsc

0xac58,	// (0x00088029) aid_placing_vt_slider_prt

0xbdbe,	// (0x0008918f) bg_tb_trans_pane_cp01_ParamLimits

0xcfd6,	// (0x0008a3a7) popup_image_details_window_g1_ParamLimits

0xcfe9,	// (0x0008a3ba) popup_image_details_window_g2_ParamLimits

0xcffe,	// (0x0008a3cf) popup_image_details_window_g3_ParamLimits

0xcffe,	// (0x0008a3cf) popup_image_details_window_g3

0xf714,	// (0x0008cae5) popup_image_details_window_g_ParamLimits

0xd012,	// (0x0008a3e3) popup_image_details_window_t1_ParamLimits

0xd024,	// (0x0008a3f5) popup_image_details_window_t2_ParamLimits

0xd03d,	// (0x0008a40e) popup_image_details_window_t3_ParamLimits

0xd051,	// (0x0008a422) popup_image_details_window_t4_ParamLimits

0xd06c,	// (0x0008a43d) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0008caec) popup_image_details_window_t_ParamLimits

0x8204,	// (0x000855d5) cl_header_name_pane_ParamLimits

0x8204,	// (0x000855d5) cl_header_name_pane

0x8565,	// (0x00085936) cl_header_name_pane_t1_ParamLimits

0x8565,	// (0x00085936) cl_header_name_pane_t1

0x857c,	// (0x0008594d) cl_header_name_pane_t2_ParamLimits

0x857c,	// (0x0008594d) cl_header_name_pane_t2

0x85a6,	// (0x00085977) cl_header_name_pane_t3_ParamLimits

0x85a6,	// (0x00085977) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0008ceef) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0008ceef) cl_header_name_pane_t

0xb5ce,	// (0x0008899f) navi_pane_mv_g2_ParamLimits

0xd7fe,	// (0x0008abcf) field_vitu2_entry_pane_g1_ParamLimits

0xd80a,	// (0x0008abdb) field_vitu2_entry_pane_g2_ParamLimits

0xd816,	// (0x0008abe7) field_vitu2_entry_pane_g3_ParamLimits

0xd816,	// (0x0008abe7) field_vitu2_entry_pane_g3

0xf91b,	// (0x0008ccec) field_vitu2_entry_pane_g_ParamLimits

0x767a,	// (0x00084a4b) cell_vitu2_itu_pane_g1_ParamLimits

0x768c,	// (0x00084a5d) cell_vitu2_itu_pane_g2_ParamLimits

0x768c,	// (0x00084a5d) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0008ccf8) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0008ccf8) cell_vitu2_itu_pane_g

0xbdbe,	// (0x0008918f) bg_vkb2_func_pane_cp05_ParamLimits

0xbdbe,	// (0x0008918f) bg_vkb2_func_pane_cp05

0xbdbe,	// (0x0008918f) bg_vkb2_func_pane_cp03

0xbdbe,	// (0x0008918f) bg_vkb2_func_pane_cp04

0xbdbe,	// (0x0008918f) bg_vkb2_func_pane_cp10_ParamLimits

0xbdbe,	// (0x0008918f) bg_vkb2_func_pane_cp10

0x1225,	// (0x0007e5f6) bg_vkb2_func_pane_cp08

0x81ae,	// (0x0008557f) bg_vkb2_func_pane_cp06

0x81bc,	// (0x0008558d) bg_vkb2_func_pane_cp07

0xdd70,	// (0x0008b141) bg_vkb2_func_pane_cp11_ParamLimits

0xdd70,	// (0x0008b141) bg_vkb2_func_pane_cp11

0xdd85,	// (0x0008b156) bg_vkb2_func_pane_cp12_ParamLimits

0xdd85,	// (0x0008b156) bg_vkb2_func_pane_cp12

0xa273,	// (0x00087644) bg_vkb2_func_pane_cp09

0xd836,	// (0x0008ac07) bg_vkb2_func_pane_g1

0xae45,	// (0x00088216) bg_vkb2_func_pane_g2

0xd83e,	// (0x0008ac0f) bg_vkb2_func_pane_g3

0xd846,	// (0x0008ac17) bg_vkb2_func_pane_g4

0xda6a,	// (0x0008ae3b) bg_vkb2_func_pane_g5

0xd85e,	// (0x0008ac2f) bg_vkb2_func_pane_g6

0xd866,	// (0x0008ac37) bg_vkb2_func_pane_g7

0xd856,	// (0x0008ac27) bg_vkb2_func_pane_g8

0xae25,	// (0x000881f6) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0008cef6) bg_vkb2_func_pane_g

0x84b2,	// (0x00085883) blid2_tripm_pane_g6_ParamLimits

0x84b2,	// (0x00085883) blid2_tripm_pane_g6

0xd74a,	// (0x0008ab1b) mp4_progress_pane_g1

0x850a,	// (0x000858db) blid2_tripm_values_pane_ParamLimits

0x850a,	// (0x000858db) blid2_tripm_values_pane

0x85cb,	// (0x0008599c) blid2_tripm_values_pane_t1

0x85d9,	// (0x000859aa) blid2_tripm_values_pane_t2

0x85e7,	// (0x000859b8) blid2_tripm_values_pane_t3

0x85f5,	// (0x000859c6) blid2_tripm_values_pane_t4

0x8603,	// (0x000859d4) blid2_tripm_values_pane_t5

0x8611,	// (0x000859e2) blid2_tripm_values_pane_t6

0x861f,	// (0x000859f0) blid2_tripm_values_pane_t7

0x862d,	// (0x000859fe) blid2_tripm_values_pane_t8

0x863b,	// (0x00085a0c) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0008cf09) blid2_tripm_values_pane_t

0x3098,	// (0x00080469) call_video_pane_t1_ParamLimits

0x30b5,	// (0x00080486) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0008c63b) call_video_pane_t_ParamLimits

0x0e09,	// (0x0007e1da) msg_header_pane_g1_ParamLimits

0xb7ac,	// (0x00088b7d) msg_header_pane_g2_ParamLimits

0xb7ac,	// (0x00088b7d) msg_header_pane_g2

0x0001,

0xf484,	// (0x0008c855) msg_header_pane_g_ParamLimits

0xf484,	// (0x0008c855) msg_header_pane_g

0xaa19,	// (0x00087dea) main_clock2_pane_ParamLimits

0x6585,	// (0x00083956) grid_clock2_toolbar_pane_ParamLimits

0x6585,	// (0x00083956) grid_clock2_toolbar_pane

0x6585,	// (0x00083956) listscroll_clock2_pane_ParamLimits

0x6585,	// (0x00083956) listscroll_clock2_pane

0x6634,	// (0x00083a05) main_clock2_pane_t3_ParamLimits

0x6634,	// (0x00083a05) main_clock2_pane_t3

0x6646,	// (0x00083a17) main_clock2_pane_t4_ParamLimits

0x6646,	// (0x00083a17) main_clock2_pane_t4

0xde4e,	// (0x0008b21f) cell_clock2_toolbar_pane

0xde56,	// (0x0008b227) cell_clock2_toolbar_pane_cp01

0xde56,	// (0x0008b227) cell_clock2_toolbar_pane_cp02

0xde5e,	// (0x0008b22f) cell_clock2_toolbar_pane_cp03

0xde66,	// (0x0008b237) list_clock2_pane

0xb401,	// (0x000887d2) scroll_pane_cp10

0xde6e,	// (0x0008b23f) list_single_clock2_pane_ParamLimits

0xde6e,	// (0x0008b23f) list_single_clock2_pane

0xabc1,	// (0x00087f92) list_highlight_pane_cp08

0xde7b,	// (0x0008b24c) list_single_clock2_pane_t1

0xde89,	// (0x0008b25a) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0008cf1c) list_single_clock2_pane_t

0xa273,	// (0x00087644) bg_button_pane_cp10

0xde97,	// (0x0008b268) cell_clock2_toolbar_pane_g1

0x4a21,	// (0x00081df2) aid_main_viewer_pane_g1_ParamLimits

0x4a21,	// (0x00081df2) aid_main_viewer_pane_g1

0x4a2d,	// (0x00081dfe) aid_main_viewer_pane_g2_ParamLimits

0x4a2d,	// (0x00081dfe) aid_main_viewer_pane_g2

0x4a39,	// (0x00081e0a) aid_main_viewer_pane_g3_ParamLimits

0x4a39,	// (0x00081e0a) aid_main_viewer_pane_g3

0x4a4a,	// (0x00081e1b) aid_main_viewer_pane_g4_ParamLimits

0x4a4a,	// (0x00081e1b) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0008c866) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0008c866) aid_main_viewer_pane_g

0x51d4,	// (0x000825a5) main_calc_pane_ParamLimits

0x51e1,	// (0x000825b2) main_dialer2_pane_ParamLimits

0xa273,	// (0x00087644) main_cam6_pane

0xa273,	// (0x00087644) main_vid6_pane

0x6591,	// (0x00083962) listscroll_gen_pane_cp06_ParamLimits

0x6591,	// (0x00083962) listscroll_gen_pane_cp06

0x6658,	// (0x00083a29) main_clock2_pane_t5_ParamLimits

0x6658,	// (0x00083a29) main_clock2_pane_t5

0x66a5,	// (0x00083a76) aid_call2_pane_cp10_ParamLimits

0x66b7,	// (0x00083a88) aid_call_pane_cp10_ParamLimits

0xb470,	// (0x00088841) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb470,	// (0x00088841) popup_clock_analogue_window_cp10_g2_ParamLimits

0x66c9,	// (0x00083a9a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x66c9,	// (0x00083a9a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb470,	// (0x00088841) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0008cba1) popup_clock_analogue_window_cp10_g_ParamLimits

0x66df,	// (0x00083ab0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6ef9,	// (0x000842ca) cell_dialer2_keypad_pane_g2_ParamLimits

0x6ef9,	// (0x000842ca) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0008cc8b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0008cc8b) cell_dialer2_keypad_pane_g

0x6f15,	// (0x000842e6) cell_dialer2_keypad_pane_t1

0x79c3,	// (0x00084d94) main_cset_text2_pane_ParamLimits

0x79c3,	// (0x00084d94) main_cset_text2_pane

0xdcd8,	// (0x0008b0a9) area_vitu2_query_pane_g1_ParamLimits

0x1150,	// (0x0007e521) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0008ce40) area_vitu2_query_pane_g_ParamLimits

0x1201,	// (0x0007e5d2) area_vitu2_query_pane_t7_ParamLimits

0x1201,	// (0x0007e5d2) area_vitu2_query_pane_t7

0x81ae,	// (0x0008557f) bg_button_pane_cp018_ParamLimits

0x81bc,	// (0x0008558d) bg_button_pane_cp021_ParamLimits

0x1225,	// (0x0007e5f6) bg_button_pane_cp022_ParamLimits

0x1225,	// (0x0007e5f6) bg_vkb2_func_pane_cp08_ParamLimits

0x81ae,	// (0x0008557f) bg_vkb2_func_pane_cp06_ParamLimits

0x81bc,	// (0x0008558d) bg_vkb2_func_pane_cp07_ParamLimits

0x1236,	// (0x0007e607) input_focus_pane_cp09_ParamLimits

0x8649,	// (0x00085a1a) cam6_autofocus_pane_ParamLimits

0x8649,	// (0x00085a1a) cam6_autofocus_pane

0x866b,	// (0x00085a3c) cam6_image_uncrop_pane_ParamLimits

0x866b,	// (0x00085a3c) cam6_image_uncrop_pane

0x8698,	// (0x00085a69) cam6_indi_pane_ParamLimits

0x8698,	// (0x00085a69) cam6_indi_pane

0x86b2,	// (0x00085a83) cam6_mode_pane_ParamLimits

0x86b2,	// (0x00085a83) cam6_mode_pane

0x86c6,	// (0x00085a97) cam6_timer_pane_ParamLimits

0x86c6,	// (0x00085a97) cam6_timer_pane

0x86d2,	// (0x00085aa3) cam6_zoom_pane_ParamLimits

0x86d2,	// (0x00085aa3) cam6_zoom_pane

0x86ee,	// (0x00085abf) cam6_mode_pane_g1_ParamLimits

0x86ee,	// (0x00085abf) cam6_mode_pane_g1

0x86fa,	// (0x00085acb) cam6_mode_pane_g2_ParamLimits

0x86fa,	// (0x00085acb) cam6_mode_pane_g2

0x8706,	// (0x00085ad7) cam6_mode_pane_g3_ParamLimits

0x8706,	// (0x00085ad7) cam6_mode_pane_g3

0x8712,	// (0x00085ae3) cam6_mode_pane_g4_ParamLimits

0x8712,	// (0x00085ae3) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0008cf21) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0008cf21) cam6_mode_pane_g

0xdbe2,	// (0x0008afb3) bg_tb_trans_pane_cp08_ParamLimits

0xdbe2,	// (0x0008afb3) bg_tb_trans_pane_cp08

0xde9f,	// (0x0008b270) cam6_battery_pane_ParamLimits

0xde9f,	// (0x0008b270) cam6_battery_pane

0xdeb5,	// (0x0008b286) cam6_indi_pane_g1_ParamLimits

0xdeb5,	// (0x0008b286) cam6_indi_pane_g1

0xdec7,	// (0x0008b298) cam6_indi_pane_g2_ParamLimits

0xdec7,	// (0x0008b298) cam6_indi_pane_g2

0xded9,	// (0x0008b2aa) cam6_indi_pane_g3_ParamLimits

0xded9,	// (0x0008b2aa) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0008cf2a) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0008cf2a) cam6_indi_pane_g

0xdeeb,	// (0x0008b2bc) cam6_indi_pane_t1_ParamLimits

0xdeeb,	// (0x0008b2bc) cam6_indi_pane_t1

0x74a9,	// (0x0008487a) cam6_autofocus_pane_g1

0x74b1,	// (0x00084882) cam6_autofocus_pane_g2

0x74b9,	// (0x0008488a) cam6_autofocus_pane_g3

0x74c1,	// (0x00084892) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0008cf31) cam6_autofocus_pane_g

0xdf11,	// (0x0008b2e2) cam6_timer_pane_g1

0xdf19,	// (0x0008b2ea) cam6_timer_pane_t1

0xdf27,	// (0x0008b2f8) cam6_zoom_cont_pane

0xdf2f,	// (0x0008b300) cam6_zoom_pane_g1

0xdf37,	// (0x0008b308) cam6_zoom_pane_g2

0x871e,	// (0x00085aef) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0008cf3a) cam6_zoom_pane_g

0xce8f,	// (0x0008a260) cam6_battery_pane_g1

0xce8f,	// (0x0008a260) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0008caa9) cam6_battery_pane_g

0xdf3f,	// (0x0008b310) cam6_zoom_cont_pane_g1

0xdf48,	// (0x0008b319) cam6_zoom_cont_pane_g2

0xdf51,	// (0x0008b322) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0008cf41) cam6_zoom_cont_pane_g

0x873b,	// (0x00085b0c) cam6_mode_pane_cp_ParamLimits

0x873b,	// (0x00085b0c) cam6_mode_pane_cp

0x86d2,	// (0x00085aa3) cam6_zoom_pane_cp_ParamLimits

0x86d2,	// (0x00085aa3) cam6_zoom_pane_cp

0x874f,	// (0x00085b20) vid6_image_uncrop_cif_pane_ParamLimits

0x874f,	// (0x00085b20) vid6_image_uncrop_cif_pane

0x877b,	// (0x00085b4c) vid6_image_uncrop_nhd_pane_ParamLimits

0x877b,	// (0x00085b4c) vid6_image_uncrop_nhd_pane

0x866b,	// (0x00085a3c) vid6_image_uncrop_vga_pane_ParamLimits

0x866b,	// (0x00085a3c) vid6_image_uncrop_vga_pane

0x879a,	// (0x00085b6b) vid6_image_uncrop_wvga_pane_ParamLimits

0x879a,	// (0x00085b6b) vid6_image_uncrop_wvga_pane

0x87b9,	// (0x00085b8a) vid6_indi_pane_ParamLimits

0x87b9,	// (0x00085b8a) vid6_indi_pane

0xdbe2,	// (0x0008afb3) bg_tb_trans_pane_cp09_ParamLimits

0xdbe2,	// (0x0008afb3) bg_tb_trans_pane_cp09

0xdf69,	// (0x0008b33a) cam6_battery_pane_cp_ParamLimits

0xdf69,	// (0x0008b33a) cam6_battery_pane_cp

0xdf75,	// (0x0008b346) vid6_indi_pane_g1_ParamLimits

0xdf75,	// (0x0008b346) vid6_indi_pane_g1

0xdf87,	// (0x0008b358) vid6_indi_pane_g2_ParamLimits

0xdf87,	// (0x0008b358) vid6_indi_pane_g2

0xdf99,	// (0x0008b36a) vid6_indi_pane_g3_ParamLimits

0xdf99,	// (0x0008b36a) vid6_indi_pane_g3

0xdfb0,	// (0x0008b381) vid6_indi_pane_g4_ParamLimits

0xdfb0,	// (0x0008b381) vid6_indi_pane_g4

0xdfc7,	// (0x0008b398) vid6_indi_pane_g5_ParamLimits

0xdfc7,	// (0x0008b398) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0008cf48) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0008cf48) vid6_indi_pane_g

0xdfe1,	// (0x0008b3b2) vid6_indi_pane_t1_ParamLimits

0xdfe1,	// (0x0008b3b2) vid6_indi_pane_t1

0xdff7,	// (0x0008b3c8) vid6_indi_pane_t2_ParamLimits

0xdff7,	// (0x0008b3c8) vid6_indi_pane_t2

0xe01f,	// (0x0008b3f0) vid6_indi_pane_t3_ParamLimits

0xe01f,	// (0x0008b3f0) vid6_indi_pane_t3

0xe047,	// (0x0008b418) vid6_indi_pane_t4_ParamLimits

0xe047,	// (0x0008b418) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0008cf53) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0008cf53) vid6_indi_pane_t

0xe06b,	// (0x0008b43c) wait_bar_pane_cp08

0x87de,	// (0x00085baf) main_cset_text2_pane_t1_ParamLimits

0x87de,	// (0x00085baf) main_cset_text2_pane_t1

0x8726,	// (0x00085af7) listscroll_gen_pane_cp06_t1_ParamLimits

0x8726,	// (0x00085af7) listscroll_gen_pane_cp06_t1

0xa273,	// (0x00087644) main_cam6_set_pane

0xd0b6,	// (0x0008a487) bg_tb_trans_pane_cp06_ParamLimits

0x7357,	// (0x00084728) cam4_indicators_pane_g1_ParamLimits

0x7368,	// (0x00084739) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0008ccc8) cam4_indicators_pane_g_ParamLimits

0x7380,	// (0x00084751) cam4_indicators_pane_t1_ParamLimits

0xbdbe,	// (0x0008918f) bg_tb_trans_pane_cp07_ParamLimits

0x7437,	// (0x00084808) vid4_indicators_pane_g1_ParamLimits

0x744d,	// (0x0008481e) vid4_indicators_pane_g2_ParamLimits

0x7461,	// (0x00084832) vid4_indicators_pane_g3_ParamLimits

0x7474,	// (0x00084845) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0008ccda) vid4_indicators_pane_g_ParamLimits

0x7492,	// (0x00084863) vid4_indicators_pane_t1_ParamLimits

0x82e0,	// (0x000856b1) vid4_progress_pane_g1_ParamLimits

0x82f0,	// (0x000856c1) vid4_progress_pane_g2_ParamLimits

0x8300,	// (0x000856d1) vid4_progress_pane_g3_ParamLimits

0x7368,	// (0x00084739) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0008ce8b) vid4_progress_pane_g_ParamLimits

0x8312,	// (0x000856e3) vid4_progress_pane_t1_ParamLimits

0x8328,	// (0x000856f9) vid4_progress_pane_t2_ParamLimits

0x833d,	// (0x0008570e) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0008ce96) vid4_progress_pane_t_ParamLimits

0x8352,	// (0x00085723) wait_bar_pane_cp07_ParamLimits

0x8805,	// (0x00085bd6) main_cam6_set_pane_g2_ParamLimits

0x8805,	// (0x00085bd6) main_cam6_set_pane_g2

0x8811,	// (0x00085be2) main_cset6_listscroll_pane_ParamLimits

0x8811,	// (0x00085be2) main_cset6_listscroll_pane

0x883e,	// (0x00085c0f) main_cset6_slider_pane_ParamLimits

0x883e,	// (0x00085c0f) main_cset6_slider_pane

0x884a,	// (0x00085c1b) main_cset6_text2_pane_ParamLimits

0x884a,	// (0x00085c1b) main_cset6_text2_pane

0xe07a,	// (0x0008b44b) main_cset6_text_pane

0xe082,	// (0x0008b453) main_cset_list_pane_copy1_ParamLimits

0xe082,	// (0x0008b453) main_cset_list_pane_copy1

0xe092,	// (0x0008b463) scroll_pane_cp028_copy1

0x885d,	// (0x00085c2e) cset_list_set_pane_copy1

0x886d,	// (0x00085c3e) aid_position_infowindow_above_copy1

0x8875,	// (0x00085c46) aid_position_infowindow_below_copy1

0x887d,	// (0x00085c4e) cset_list_set_pane_g1_copy1

0x127e,	// (0x0007e64f) cset_list_set_pane_g3_copy1_ParamLimits

0x127e,	// (0x0007e64f) cset_list_set_pane_g3_copy1

0x128d,	// (0x0007e65e) cset_list_set_pane_t1_copy1_ParamLimits

0x128d,	// (0x0007e65e) cset_list_set_pane_t1_copy1

0xbdbe,	// (0x0008918f) list_highlight_pane_cp021_copy1_ParamLimits

0xbdbe,	// (0x0008918f) list_highlight_pane_cp021_copy1

0xe09b,	// (0x0008b46c) cset6_slider_pane_ParamLimits

0xe09b,	// (0x0008b46c) cset6_slider_pane

0xe0c7,	// (0x0008b498) main_cset6_slider_pane_g1_ParamLimits

0xe0c7,	// (0x0008b498) main_cset6_slider_pane_g1

0x8885,	// (0x00085c56) main_cset6_slider_pane_g2_ParamLimits

0x8885,	// (0x00085c56) main_cset6_slider_pane_g2

0xe0ef,	// (0x0008b4c0) main_cset6_slider_pane_g3_ParamLimits

0xe0ef,	// (0x0008b4c0) main_cset6_slider_pane_g3

0x88ad,	// (0x00085c7e) main_cset6_slider_pane_g4_ParamLimits

0x88ad,	// (0x00085c7e) main_cset6_slider_pane_g4

0x88b9,	// (0x00085c8a) main_cset6_slider_pane_g5_ParamLimits

0x88b9,	// (0x00085c8a) main_cset6_slider_pane_g5

0xd973,	// (0x0008ad44) main_cset6_slider_pane_g7_ParamLimits

0xd973,	// (0x0008ad44) main_cset6_slider_pane_g7

0xd97f,	// (0x0008ad50) main_cset6_slider_pane_g8_ParamLimits

0xd97f,	// (0x0008ad50) main_cset6_slider_pane_g8

0x88c5,	// (0x00085c96) main_cset6_slider_pane_g9_ParamLimits

0x88c5,	// (0x00085c96) main_cset6_slider_pane_g9

0x88d1,	// (0x00085ca2) main_cset6_slider_pane_g10_ParamLimits

0x88d1,	// (0x00085ca2) main_cset6_slider_pane_g10

0x88dd,	// (0x00085cae) main_cset6_slider_pane_g11_ParamLimits

0x88dd,	// (0x00085cae) main_cset6_slider_pane_g11

0x88e9,	// (0x00085cba) main_cset6_slider_pane_g12_ParamLimits

0x88e9,	// (0x00085cba) main_cset6_slider_pane_g12

0x88f5,	// (0x00085cc6) main_cset6_slider_pane_g13_ParamLimits

0x88f5,	// (0x00085cc6) main_cset6_slider_pane_g13

0x8901,	// (0x00085cd2) main_cset6_slider_pane_g14_ParamLimits

0x8901,	// (0x00085cd2) main_cset6_slider_pane_g14

0x890d,	// (0x00085cde) main_cset6_slider_pane_g15_ParamLimits

0x890d,	// (0x00085cde) main_cset6_slider_pane_g15

0x8925,	// (0x00085cf6) main_cset6_slider_pane_g16_ParamLimits

0x8925,	// (0x00085cf6) main_cset6_slider_pane_g16

0x8931,	// (0x00085d02) main_cset6_slider_pane_g17_ParamLimits

0x8931,	// (0x00085d02) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0008cf5c) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0008cf5c) main_cset6_slider_pane_g

0xe0fb,	// (0x0008b4cc) main_cset6_slider_pane_t1_ParamLimits

0xe0fb,	// (0x0008b4cc) main_cset6_slider_pane_t1

0x8955,	// (0x00085d26) main_cset6_slider_pane_t2_ParamLimits

0x8955,	// (0x00085d26) main_cset6_slider_pane_t2

0x8980,	// (0x00085d51) main_cset6_slider_pane_t3_ParamLimits

0x8980,	// (0x00085d51) main_cset6_slider_pane_t3

0x89ab,	// (0x00085d7c) main_cset6_slider_pane_t4_ParamLimits

0x89ab,	// (0x00085d7c) main_cset6_slider_pane_t4

0x89d6,	// (0x00085da7) main_cset6_slider_pane_t5_ParamLimits

0x89d6,	// (0x00085da7) main_cset6_slider_pane_t5

0xe13c,	// (0x0008b50d) main_cset6_slider_pane_t7_ParamLimits

0xe13c,	// (0x0008b50d) main_cset6_slider_pane_t7

0x8a01,	// (0x00085dd2) main_cset6_slider_pane_t8_ParamLimits

0x8a01,	// (0x00085dd2) main_cset6_slider_pane_t8

0x8a25,	// (0x00085df6) main_cset6_slider_pane_t9_ParamLimits

0x8a25,	// (0x00085df6) main_cset6_slider_pane_t9

0x8a49,	// (0x00085e1a) main_cset6_slider_pane_t10_ParamLimits

0x8a49,	// (0x00085e1a) main_cset6_slider_pane_t10

0x8a6d,	// (0x00085e3e) main_cset6_slider_pane_t11_ParamLimits

0x8a6d,	// (0x00085e3e) main_cset6_slider_pane_t11

0xe172,	// (0x0008b543) main_cset6_slider_pane_t14_ParamLimits

0xe172,	// (0x0008b543) main_cset6_slider_pane_t14

0xe1ab,	// (0x0008b57c) main_cset6_slider_pane_t15_ParamLimits

0xe1ab,	// (0x0008b57c) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0008cf81) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0008cf81) main_cset6_slider_pane_t

0xe1e4,	// (0x0008b5b5) cset_slider_pane_g1_copy1

0xe1ed,	// (0x0008b5be) cset_slider_pane_g2_copy1

0xe1f6,	// (0x0008b5c7) cset_slider_pane_g3_copy1

0xa273,	// (0x00087644) bg_popup_sub_pane_cp011_copy1

0xe216,	// (0x0008b5e7) main_cset_text_pane_g1_copy1

0xdab9,	// (0x0008ae8a) main_cset_text_pane_t1_copy1

0xdac7,	// (0x0008ae98) main_cset_text_pane_t2_copy1

0xdad5,	// (0x0008aea6) main_cset_text_pane_t3_copy1

0xdae3,	// (0x0008aeb4) main_cset_text_pane_t4_copy1

0xdaf1,	// (0x0008aec2) main_cset_text_pane_t5_copy1

0xe21e,	// (0x0008b5ef) main_cset_text_pane_t6_copy1

0xe22c,	// (0x0008b5fd) main_cset_text_pane_t7_copy1

0x8a91,	// (0x00085e62) main_cset_text2_pane_t1_copy1

0xbdbe,	// (0x0008918f) main_ncimui_pane

0x523a,	// (0x0008260b) popup_query_ncimui_window_ParamLimits

0x523a,	// (0x0008260b) popup_query_ncimui_window

0x5dd8,	// (0x000831a9) field_cale_ev2_pane_g4_ParamLimits

0x5dd8,	// (0x000831a9) field_cale_ev2_pane_g4

0x6bd1,	// (0x00083fa2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6bd1,	// (0x00083fa2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0008cc62) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0008cc62) cell_video_dialer_keypad_pane_g

0x6be9,	// (0x00083fba) cell_video_dialer_keypad_pane_t1

0xa273,	// (0x00087644) bg_popup_window_pane_cp012

0xb2d3,	// (0x000886a4) heading_pane_cp06

0xe258,	// (0x0008b629) ncim_query_content_pane

0xa273,	// (0x00087644) bg_popup_heading_pane_cp01

0xe260,	// (0x0008b631) ncim_heading_pane_t1

0xe26e,	// (0x0008b63f) ncim_indicator_popup_pane

0xe280,	// (0x0008b651) ncim_query_button_pane

0xe296,	// (0x0008b667) ncim_query_content_pane_t1

0xe2a8,	// (0x0008b679) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0008cfc5) ncim_query_content_pane_t

0xe2e2,	// (0x0008b6b3) ncim_query_list_pane

0xe2f4,	// (0x0008b6c5) ncim_query_popup_pane

0xe26e,	// (0x0008b63f) ncim_indicator_popup_pane_ParamLimits

0x8bed,	// (0x00085fbe) ncim_query_content_pane_g1_ParamLimits

0x8bed,	// (0x00085fbe) ncim_query_content_pane_g1

0xe296,	// (0x0008b667) ncim_query_content_pane_t1_ParamLimits

0xe2a8,	// (0x0008b679) ncim_query_content_pane_t2_ParamLimits

0x8bf9,	// (0x00085fca) ncim_query_content_pane_t3_ParamLimits

0x8bf9,	// (0x00085fca) ncim_query_content_pane_t3

0x8c16,	// (0x00085fe7) ncim_query_content_pane_t4_ParamLimits

0x8c16,	// (0x00085fe7) ncim_query_content_pane_t4

0x8c33,	// (0x00086004) ncim_query_content_pane_t5_ParamLimits

0x8c33,	// (0x00086004) ncim_query_content_pane_t5

0xe2ba,	// (0x0008b68b) ncim_query_content_pane_t6_ParamLimits

0xe2ba,	// (0x0008b68b) ncim_query_content_pane_t6

0xfbf4,	// (0x0008cfc5) ncim_query_content_pane_t_ParamLimits

0xe2e2,	// (0x0008b6b3) ncim_query_list_pane_ParamLimits

0xe2f4,	// (0x0008b6c5) ncim_query_popup_pane_ParamLimits

0xe308,	// (0x0008b6d9) wait_bar_pane_cp04

0xa273,	// (0x00087644) input_focus_pane_cp011

0xe310,	// (0x0008b6e1) ncim_query_popup_pane_t1

0xe31e,	// (0x0008b6ef) ncim_list_query_list_pane_ParamLimits

0xe31e,	// (0x0008b6ef) ncim_list_query_list_pane

0xa273,	// (0x00087644) bg_button_pane_cp027

0xe331,	// (0x0008b702) ncim_query_button_pane_g1

0xa273,	// (0x00087644) list_highlight_pane_cp012

0xe33b,	// (0x0008b70c) ncim_list_query_list_pane_g1

0xe343,	// (0x0008b714) ncim_list_query_list_pane_t1

0x7374,	// (0x00084745) cam4_indicators_pane_g3_ParamLimits

0x7374,	// (0x00084745) cam4_indicators_pane_g3

0x7480,	// (0x00084851) vid4_indicators_pane_g5_ParamLimits

0x7480,	// (0x00084851) vid4_indicators_pane_g5

0x7374,	// (0x00084745) vid4_progress_pane_g5_ParamLimits

0x7374,	// (0x00084745) vid4_progress_pane_g5

0x8ac3,	// (0x00085e94) main_ncimui_pane_g1

0x8b2f,	// (0x00085f00) ncimui_group_query_pane_ParamLimits

0x8b2f,	// (0x00085f00) ncimui_group_query_pane

0x8b89,	// (0x00085f5a) ncimui_list_pane_ParamLimits

0x8b89,	// (0x00085f5a) ncimui_list_pane

0x8bb0,	// (0x00085f81) ncimui_text_pane_ParamLimits

0x8bb0,	// (0x00085f81) ncimui_text_pane

0x8c50,	// (0x00086021) ncimui_text_pane_t1_ParamLimits

0x8c50,	// (0x00086021) ncimui_text_pane_t1

0xe351,	// (0x0008b722) ncimui_list_single_graphic_pane_ParamLimits

0xe351,	// (0x0008b722) ncimui_list_single_graphic_pane

0x8c6f,	// (0x00086040) ncimui_query_pane_ParamLimits

0x8c6f,	// (0x00086040) ncimui_query_pane

0xa273,	// (0x00087644) list_highlight_pane_cp013

0xe361,	// (0x0008b732) ncim_list_query_list_pane_t1_copy1

0xe33b,	// (0x0008b70c) ncim_list_single_graphic_pane_g1

0x8c82,	// (0x00086053) ncim_query_button_pane_cp01

0x8c8e,	// (0x0008605f) ncim_query_entry_pane_ParamLimits

0x8c8e,	// (0x0008605f) ncim_query_entry_pane

0x8ca1,	// (0x00086072) ncimui_query_pane_g1

0x8cad,	// (0x0008607e) ncimui_query_pane_t1_ParamLimits

0x8cad,	// (0x0008607e) ncimui_query_pane_t1

0xbdbe,	// (0x0008918f) input_focus_pane_cp012

0xe36f,	// (0x0008b740) ncim_query_entry_pane_t1

0xaa19,	// (0x00087dea) main_im_pane_ParamLimits

0xbdbe,	// (0x0008918f) main_mobtv_pane_ParamLimits

0xbdbe,	// (0x0008918f) main_mobtv_pane

0x893d,	// (0x00085d0e) main_cset6_slider_pane_g18_ParamLimits

0x893d,	// (0x00085d0e) main_cset6_slider_pane_g18

0x8949,	// (0x00085d1a) main_cset6_slider_pane_g19_ParamLimits

0x8949,	// (0x00085d1a) main_cset6_slider_pane_g19

0xd816,	// (0x0008abe7) bg_main_mobtv_pane_ParamLimits

0xd816,	// (0x0008abe7) bg_main_mobtv_pane

0x8cc6,	// (0x00086097) main_mobtv_info_pane

0x8cd1,	// (0x000860a2) main_mobtv_loading_pane_ParamLimits

0x8cd1,	// (0x000860a2) main_mobtv_loading_pane

0xe381,	// (0x0008b752) main_mobtv_pg_channel_list_pane

0xe38b,	// (0x0008b75c) main_mobtv_pg_hdr_pane

0x8cde,	// (0x000860af) main_mobtv_programe_curr_pane_ParamLimits

0x8cde,	// (0x000860af) main_mobtv_programe_curr_pane

0x8ceb,	// (0x000860bc) main_mobtv_programe_next_pane_ParamLimits

0x8ceb,	// (0x000860bc) main_mobtv_programe_next_pane

0xe394,	// (0x0008b765) popup_mobtv_noti_window

0xce8f,	// (0x0008a260) main_tv_pg_hdr_pane_g1

0xe39e,	// (0x0008b76f) main_tv_pg_hdr_pane_g2

0xe3a6,	// (0x0008b777) main_tv_pg_hdr_pane_g3

0xe3ae,	// (0x0008b77f) main_tv_pg_hdr_pane_g4

0xe3b6,	// (0x0008b787) main_tv_pg_hdr_pane_g5

0xe3c0,	// (0x0008b791) main_tv_pg_hdr_pane_g6

0xe3ca,	// (0x0008b79b) main_tv_pg_hdr_pane_g7

0xe3d4,	// (0x0008b7a5) main_tv_pg_hdr_pane_g8

0xe3de,	// (0x0008b7af) main_tv_pg_hdr_pane_g9

0xe3e8,	// (0x0008b7b9) main_tv_pg_hdr_pane_g10

0xe3f2,	// (0x0008b7c3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0008cfd2) main_tv_pg_hdr_pane_g

0xe3fc,	// (0x0008b7cd) main_tv_pg_hdr_pane_t1

0xe40a,	// (0x0008b7db) main_tv_pg_hdr_pane_t2

0xe418,	// (0x0008b7e9) main_tv_pg_hdr_pane_t3

0xe428,	// (0x0008b7f9) main_tv_pg_hdr_pane_t4

0xe438,	// (0x0008b809) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0008cfe9) main_tv_pg_hdr_pane_t

0xe448,	// (0x0008b819) single_mobtv_pg_channel_pane_ParamLimits

0xe448,	// (0x0008b819) single_mobtv_pg_channel_pane

0xe45a,	// (0x0008b82b) single_mobtv_pg_channel_table_pane

0xe463,	// (0x0008b834) single_mobtv_pg_channel_thumb_pane

0xe46c,	// (0x0008b83d) single_tv_pg_channel_pane_g1

0xe475,	// (0x0008b846) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0008cff4) single_tv_pg_channel_pane_g

0xd0b6,	// (0x0008a487) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd0b6,	// (0x0008a487) bg_single_mobtv_pg_channel_thumb_pane

0xe47e,	// (0x0008b84f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe47e,	// (0x0008b84f) single_mobtv_pg_channel_thumb_pane_g1

0xe48c,	// (0x0008b85d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe48c,	// (0x0008b85d) single_mobtv_pg_channel_thumb_pane_g2

0xe498,	// (0x0008b869) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe498,	// (0x0008b869) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0008cff9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0008cff9) single_mobtv_pg_channel_thumb_pane_g

0xe4a4,	// (0x0008b875) single_mobtv_pg_channel_thumb_pane_t1

0xe4b2,	// (0x0008b883) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0008d000) single_mobtv_pg_channel_thumb_pane_t

0xce8f,	// (0x0008a260) bg_single_mobtv_pg_channel_table_pane_g1

0xce8f,	// (0x0008a260) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0008caa9) bg_single_mobtv_pg_channel_table_pane_g

0xe4c0,	// (0x0008b891) single_mobtv_pg_channel_table_pane_t1

0xe4ce,	// (0x0008b89f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0008d005) single_mobtv_pg_channel_table_pane_t

0x8d00,	// (0x000860d1) main_mobtv_info_pane_g1_ParamLimits

0x8d00,	// (0x000860d1) main_mobtv_info_pane_g1

0x8d1c,	// (0x000860ed) main_mobtv_info_pane_t1_ParamLimits

0x8d1c,	// (0x000860ed) main_mobtv_info_pane_t1

0x8d94,	// (0x00086165) main_mobtv_info_pane_t2_ParamLimits

0x8d94,	// (0x00086165) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0008d00f) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0008d00f) main_mobtv_info_pane_t

0x8e25,	// (0x000861f6) wait_bar_pane_cp05

0x8e37,	// (0x00086208) main_mobtv_loading_pane_g1_ParamLimits

0x8e37,	// (0x00086208) main_mobtv_loading_pane_g1

0x8e43,	// (0x00086214) main_mobtv_loading_pane_g2_ParamLimits

0x8e43,	// (0x00086214) main_mobtv_loading_pane_g2

0x8e4f,	// (0x00086220) main_mobtv_loading_pane_g3_ParamLimits

0x8e4f,	// (0x00086220) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0008d016) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0008d016) main_mobtv_loading_pane_g

0xe4dc,	// (0x0008b8ad) main_mobtv_loading_pane_t1_ParamLimits

0xe4dc,	// (0x0008b8ad) main_mobtv_loading_pane_t1

0xe4f4,	// (0x0008b8c5) main_mobtv_loading_pane_t2_ParamLimits

0xe4f4,	// (0x0008b8c5) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0008d01d) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0008d01d) main_mobtv_loading_pane_t

0x8e5d,	// (0x0008622e) wait_bar_pane_cp06_ParamLimits

0x8e5d,	// (0x0008622e) wait_bar_pane_cp06

0xe52c,	// (0x0008b8fd) main_mobtv_programe_curr_pane_t1

0xe53a,	// (0x0008b90b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0008d022) main_mobtv_programe_curr_pane_t

0xe548,	// (0x0008b919) main_mobtv_programe_next_pane_t1

0xe556,	// (0x0008b927) main_mobtv_programe_next_pane_t2

0xe564,	// (0x0008b935) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0008d027) main_mobtv_programe_next_pane_t

0xa273,	// (0x00087644) bg_popup_mobtv_noti_window_pane

0xe572,	// (0x0008b943) popup_mobtv_noti_window_g1

0xe57a,	// (0x0008b94b) popup_mobtv_noti_window_t1

0xe588,	// (0x0008b959) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0008d02e) popup_mobtv_noti_window_t

0xce8f,	// (0x0008a260) bg_popup_mobtv_noti_window_pane_g1

0xa273,	// (0x00087644) sc_clock_pane

0xa273,	// (0x00087644) main_fs_bigclock_pane

0x84f8,	// (0x000858c9) blid2_tripm_pane_t4_ParamLimits

0x84f8,	// (0x000858c9) blid2_tripm_pane_t4

0x8e69,	// (0x0008623a) sc_clock_pane_g1_ParamLimits

0x8e69,	// (0x0008623a) sc_clock_pane_g1

0x8e77,	// (0x00086248) sc_clock_pane_t1_ParamLimits

0x8e77,	// (0x00086248) sc_clock_pane_t1

0x8e8c,	// (0x0008625d) sc_clock_pane_t2_ParamLimits

0x8e8c,	// (0x0008625d) sc_clock_pane_t2

0x8e9e,	// (0x0008626f) sc_clock_pane_t3_ParamLimits

0x8e9e,	// (0x0008626f) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0008d033) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0008d033) sc_clock_pane_t

0x9891,	// (0x00086c62) main_fs_bigclock_indicator_pane_ParamLimits

0x9891,	// (0x00086c62) main_fs_bigclock_indicator_pane

0x8f2d,	// (0x000862fe) main_fs_bigclock_pane_g1_ParamLimits

0x8f2d,	// (0x000862fe) main_fs_bigclock_pane_g1

0x989d,	// (0x00086c6e) main_fs_bigclock_pane_t1_ParamLimits

0x989d,	// (0x00086c6e) main_fs_bigclock_pane_t1

0x98af,	// (0x00086c80) main_fs_bigclock_pane_t2_ParamLimits

0x98af,	// (0x00086c80) main_fs_bigclock_pane_t2

0x98c3,	// (0x00086c94) main_fs_bigclock_pane_t3_ParamLimits

0x98c3,	// (0x00086c94) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0008d23d) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0008d23d) main_fs_bigclock_pane_t

0xecf7,	// (0x0008c0c8) main_fs_bigclock_indicator_pane_g1

0xe288,	// (0x0008b659) ncim_query_content_pane_g2_ParamLimits

0xe288,	// (0x0008b659) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0008cfc0) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0008cfc0) ncim_query_content_pane_g

0x8eb0,	// (0x00086281) sc_clock_pane_t4_ParamLimits

0x8eb0,	// (0x00086281) sc_clock_pane_t4

0xbdbe,	// (0x0008918f) main_radioblah_pane

0x7218,	// (0x000845e9) cell_call4_button_pane_t1_copy1_ParamLimits

0x7218,	// (0x000845e9) cell_call4_button_pane_t1_copy1

0x8adf,	// (0x00085eb0) main_ncimui_pane_t1_ParamLimits

0x8adf,	// (0x00085eb0) main_ncimui_pane_t1

0x8af9,	// (0x00085eca) main_ncimui_pane_t2_ParamLimits

0x8af9,	// (0x00085eca) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0008cfb9) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0008cfb9) main_ncimui_pane_t

0xe596,	// (0x0008b967) main_radioblah_anim_pane_ParamLimits

0xe596,	// (0x0008b967) main_radioblah_anim_pane

0xe5a7,	// (0x0008b978) main_radioblah_info_pane_ParamLimits

0xe5a7,	// (0x0008b978) main_radioblah_info_pane

0xe5bb,	// (0x0008b98c) main_radioblah_pane_t1_ParamLimits

0xe5bb,	// (0x0008b98c) main_radioblah_pane_t1

0xe5d7,	// (0x0008b9a8) main_radioblah_pane_t2_ParamLimits

0xe5d7,	// (0x0008b9a8) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0008d054) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0008d054) main_radioblah_pane_t

0x90cc,	// (0x0008649d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x90cc,	// (0x0008649d) main_radioblah_rocker_ctrl_pane

0xe61f,	// (0x0008b9f0) main_radioblah_info_pane_t1_ParamLimits

0xe61f,	// (0x0008b9f0) main_radioblah_info_pane_t1

0x9115,	// (0x000864e6) main_radioblah_info_pane_t2_ParamLimits

0x9115,	// (0x000864e6) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0008d05d) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0008d05d) main_radioblah_info_pane_t

0xce8f,	// (0x0008a260) main_radioblah_rocker_ctrl_pane_g1

0x91c5,	// (0x00086596) main_radioblah_rocker_ctrl_pane_g2

0x91cd,	// (0x0008659e) main_radioblah_rocker_ctrl_pane_g3

0x91d5,	// (0x000865a6) main_radioblah_rocker_ctrl_pane_g4

0x91dd,	// (0x000865ae) main_radioblah_rocker_ctrl_pane_g5

0x91e5,	// (0x000865b6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0008d066) main_radioblah_rocker_ctrl_pane_g

0x8a91,	// (0x00085e62) main_cset_text2_pane_t1_copy1_ParamLimits

0x72a1,	// (0x00084672) cam4_image_uncrop_qvga_pane

0x73e6,	// (0x000847b7) vid4_image_uncrop_qcif_pane

0x868a,	// (0x00085a5b) cam6_image_uncrop_qvga_pane_ParamLimits

0x868a,	// (0x00085a5b) cam6_image_uncrop_qvga_pane

0xdf59,	// (0x0008b32a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf59,	// (0x0008b32a) vid6_image_uncrop_qcif_pane

0xa273,	// (0x00087644) bg_popup_preview_window_pane_cp03

0xe23a,	// (0x0008b60b) list_cset_text2_pane

0xe242,	// (0x0008b613) main_cset6_text2_pane_g1

0xe24a,	// (0x0008b61b) main_cset6_text2_pane_t1

0x91ed,	// (0x000865be) list_cset_text2_pane_t1_ParamLimits

0x91ed,	// (0x000865be) list_cset_text2_pane_t1

0xbdbe,	// (0x0008918f) main_radioblah_pane_ParamLimits

0x8e11,	// (0x000861e2) main_mobtv_info_pane_t3_ParamLimits

0x8e11,	// (0x000861e2) main_mobtv_info_pane_t3

0x90ba,	// (0x0008648b) main_radioblah_pane_g1

0x90e5,	// (0x000864b6) main_radioblah_info_pane_g1

0x916a,	// (0x0008653b) main_radioblah_info_pane_t3_ParamLimits

0x916a,	// (0x0008653b) main_radioblah_info_pane_t3

0x4060,	// (0x00081431) highlight_cell_cale_month_pane_ParamLimits

0x4060,	// (0x00081431) highlight_cell_cale_month_pane

0xa273,	// (0x00087644) main_phob_fisheye_pane

0xd192,	// (0x0008a563) scroll_pane_cp0031_ParamLimits

0xd192,	// (0x0008a563) scroll_pane_cp0031

0xe06b,	// (0x0008b43c) wait_bar_pane_cp08_ParamLimits

0x885d,	// (0x00085c2e) cset_list_set_pane_copy1_ParamLimits

0xe659,	// (0x0008ba2a) highlight_cell_cale_month_pane_g1

0x9204,	// (0x000865d5) highlight_cell_cale_month_pane_t1

0xdd2c,	// (0x0008b0fd) list_gen_pane_cp01

0xd95e,	// (0x0008ad2f) scroll_pane_01

0x9212,	// (0x000865e3) list_single_double_fisheye_pane

0x1378,	// (0x0007e749) list_double_fisheye_pane_g1_ParamLimits

0x1378,	// (0x0007e749) list_double_fisheye_pane_g1

0x1384,	// (0x0007e755) list_double_fisheye_pane_g2_ParamLimits

0x1384,	// (0x0007e755) list_double_fisheye_pane_g2

0x921b,	// (0x000865ec) list_double_fisheye_pane_g3_ParamLimits

0x921b,	// (0x000865ec) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0008d073) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0008d073) list_double_fisheye_pane_g

0x13b5,	// (0x0007e786) list_double_fisheye_pane_t1_ParamLimits

0x13b5,	// (0x0007e786) list_double_fisheye_pane_t1

0x13d0,	// (0x0007e7a1) list_double_fisheye_pane_t2_ParamLimits

0x13d0,	// (0x0007e7a1) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0008d07e) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0008d07e) list_double_fisheye_pane_t

0xa273,	// (0x00087644) main_call5_pane

0x8ed6,	// (0x000862a7) sc_swipe_pane_ParamLimits

0x8ed6,	// (0x000862a7) sc_swipe_pane

0x9233,	// (0x00086604) call5_image_pane_ParamLimits

0x9233,	// (0x00086604) call5_image_pane

0x9245,	// (0x00086616) call5_swipe_1_pane_ParamLimits

0x9245,	// (0x00086616) call5_swipe_1_pane

0x9251,	// (0x00086622) call5_swipe_2_pane_ParamLimits

0x9251,	// (0x00086622) call5_swipe_2_pane

0x926b,	// (0x0008663c) popup_call5_audio_first_window_ParamLimits

0x926b,	// (0x0008663c) popup_call5_audio_first_window

0xd0b6,	// (0x0008a487) call5_swipe_1_pane_g1_ParamLimits

0xd0b6,	// (0x0008a487) call5_swipe_1_pane_g1

0xe661,	// (0x0008ba32) call5_swipe_1_pane_g2_ParamLimits

0xe661,	// (0x0008ba32) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0008d083) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0008d083) call5_swipe_1_pane_g

0xe66d,	// (0x0008ba3e) call5_swipe_1_pane_t1_ParamLimits

0xe66d,	// (0x0008ba3e) call5_swipe_1_pane_t1

0xd0b6,	// (0x0008a487) call5_swipe_2_pane_g1_ParamLimits

0xd0b6,	// (0x0008a487) call5_swipe_2_pane_g1

0xe682,	// (0x0008ba53) call5_swipe_2_pane_g2_ParamLimits

0xe682,	// (0x0008ba53) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0008d088) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0008d088) call5_swipe_2_pane_g

0xe68e,	// (0x0008ba5f) call5_swipe_2_pane_t1_ParamLimits

0xe68e,	// (0x0008ba5f) call5_swipe_2_pane_t1

0xe6a3,	// (0x0008ba74) sc_swipe_pane_g1_ParamLimits

0xe6a3,	// (0x0008ba74) sc_swipe_pane_g1

0xe6b0,	// (0x0008ba81) sc_swipe_pane_g2_ParamLimits

0xe6b0,	// (0x0008ba81) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0008d08d) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0008d08d) sc_swipe_pane_g

0xe6bc,	// (0x0008ba8d) sc_swipe_pane_t1_ParamLimits

0xe6bc,	// (0x0008ba8d) sc_swipe_pane_t1

0xa273,	// (0x00087644) main_cmail_launcher_pane

0x927b,	// (0x0008664c) aid_size_cell_cmail_l_ParamLimits

0x927b,	// (0x0008664c) aid_size_cell_cmail_l

0x9289,	// (0x0008665a) grid_cmail_l_pane_ParamLimits

0x9289,	// (0x0008665a) grid_cmail_l_pane

0x9299,	// (0x0008666a) cell_cmail_l_pane_ParamLimits

0x9299,	// (0x0008666a) cell_cmail_l_pane

0xe6d1,	// (0x0008baa2) cell_cmail_l_pane_g1_ParamLimits

0xe6d1,	// (0x0008baa2) cell_cmail_l_pane_g1

0xe6dd,	// (0x0008baae) cell_cmail_l_pane_t1_ParamLimits

0xe6dd,	// (0x0008baae) cell_cmail_l_pane_t1

0xe6f3,	// (0x0008bac4) cell_cmail_l_pane_t2_ParamLimits

0xe6f3,	// (0x0008bac4) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0008d092) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0008d092) cell_cmail_l_pane_t

0xbdbe,	// (0x0008918f) grid_highlight_pane_cp018_ParamLimits

0xbdbe,	// (0x0008918f) grid_highlight_pane_cp018

0x1fb3,	// (0x0007f384) main2_pane_ParamLimits

0x1fb3,	// (0x0007f384) main2_pane

0xaab2,	// (0x00087e83) popup_sp_fs_action_menu_bg_pane_g1

0xaaba,	// (0x00087e8b) popup_sp_fs_action_menu_bg_pane_g2

0xaac2,	// (0x00087e93) popup_sp_fs_action_menu_bg_pane_g3

0xaaca,	// (0x00087e9b) popup_sp_fs_action_menu_bg_pane_g4

0xaad2,	// (0x00087ea3) popup_sp_fs_action_menu_bg_pane_g5

0xaada,	// (0x00087eab) popup_sp_fs_action_menu_bg_pane_g6

0xaae2,	// (0x00087eb3) popup_sp_fs_action_menu_bg_pane_g7

0xaaea,	// (0x00087ebb) popup_sp_fs_action_menu_bg_pane_g8

0xaaf2,	// (0x00087ec3) popup_sp_fs_action_menu_bg_pane_g9

0xaafa,	// (0x00087ecb) popup_sp_fs_action_menu_bg_pane_g10

0xaafa,	// (0x00087ecb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0008c557) popup_sp_fs_action_menu_bg_pane_g

0x0bc2,	// (0x0007df93) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_t3_g3_g1

0x0bce,	// (0x0007df9f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0bce,	// (0x0007df9f) list_medium_line_x2_t3_g3_g2

0x0bda,	// (0x0007dfab) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0bda,	// (0x0007dfab) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0008c605) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0008c605) list_medium_line_x2_t3_g3_g

0x0be6,	// (0x0007dfb7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0be6,	// (0x0007dfb7) list_medium_line_x2_t3_g3_t1

0x0bfb,	// (0x0007dfcc) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0bfb,	// (0x0007dfcc) list_medium_line_x2_t3_g3_t2

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0008c60c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0008c60c) list_medium_line_x2_t3_g3_t

0x0bc2,	// (0x0007df93) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_t3_g2_g1

0x0bda,	// (0x0007dfab) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0bda,	// (0x0007dfab) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0008c613) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0008c613) list_medium_line_x2_t3_g2_g

0x0c22,	// (0x0007dff3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0c22,	// (0x0007dff3) list_medium_line_x2_t3_g2_t1

0x0c38,	// (0x0007e009) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0c38,	// (0x0007e009) list_medium_line_x2_t3_g2_t2

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0008c618) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0008c618) list_medium_line_x2_t3_g2_t

0x0bc2,	// (0x0007df93) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_t4_g4_g1

0x0c4a,	// (0x0007e01b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0c4a,	// (0x0007e01b) list_medium_line_x2_t4_g4_g2

0x0bce,	// (0x0007df9f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0bce,	// (0x0007df9f) list_medium_line_x2_t4_g4_g3

0x0c56,	// (0x0007e027) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c56,	// (0x0007e027) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0008c61f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0008c61f) list_medium_line_x2_t4_g4_g

0x0c62,	// (0x0007e033) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c62,	// (0x0007e033) list_medium_line_x2_t4_g4_t1

0x0c7c,	// (0x0007e04d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c7c,	// (0x0007e04d) list_medium_line_x2_t4_g4_t2

0x0c92,	// (0x0007e063) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c92,	// (0x0007e063) list_medium_line_x2_t4_g4_t3

0x0ca7,	// (0x0007e078) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ca7,	// (0x0007e078) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0008c628) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0008c628) list_medium_line_x2_t4_g4_t

0x0bc2,	// (0x0007df93) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_t2_g4_g1

0x0c4a,	// (0x0007e01b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0c4a,	// (0x0007e01b) list_medium_line_x2_t2_g4_g2

0x0bce,	// (0x0007df9f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0bce,	// (0x0007df9f) list_medium_line_x2_t2_g4_g3

0x0bda,	// (0x0007dfab) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0bda,	// (0x0007dfab) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0008c68f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0008c68f) list_medium_line_x2_t2_g4_g

0x0cb9,	// (0x0007e08a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0cb9,	// (0x0007e08a) list_medium_line_x2_t2_g4_t1

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0008c698) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0008c698) list_medium_line_x2_t2_g4_t

0x0bc2,	// (0x0007df93) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_t2_g3_g1

0x0bce,	// (0x0007df9f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0bce,	// (0x0007df9f) list_medium_line_x2_t2_g3_g2

0x0bda,	// (0x0007dfab) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0bda,	// (0x0007dfab) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0008c605) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0008c605) list_medium_line_x2_t2_g3_g

0x0cce,	// (0x0007e09f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0cce,	// (0x0007e09f) list_medium_line_x2_t2_g3_t1

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0008c69d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0008c69d) list_medium_line_x2_t2_g3_t

0x4209,	// (0x000815da) main_sp_fs_list_pane_ParamLimits

0x4209,	// (0x000815da) main_sp_fs_list_pane

0x4215,	// (0x000815e6) sp_fs_scroll_pane_ParamLimits

0x4215,	// (0x000815e6) sp_fs_scroll_pane

0x0ce3,	// (0x0007e0b4) list_medium_line_x2_t3_t1

0x0cf3,	// (0x0007e0c4) list_medium_line_x2_t3_t2

0x0d01,	// (0x0007e0d2) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0008c6e8) list_medium_line_x2_t3_t

0x0d0f,	// (0x0007e0e0) list_medium_line_x3_t4_t1

0x0d1f,	// (0x0007e0f0) list_medium_line_x3_t4_t2

0x0d2d,	// (0x0007e0fe) list_medium_line_x3_t4_t3

0x0d01,	// (0x0007e0d2) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0008c6ef) list_medium_line_x3_t4_t

0x0d3b,	// (0x0007e10c) list_medium_line_x4_t5_t1

0x0d4b,	// (0x0007e11c) list_medium_line_x4_t5_t2

0x0d2d,	// (0x0007e0fe) list_medium_line_x4_t5_t3

0x0d59,	// (0x0007e12a) list_medium_line_x4_t5_t4

0x0d01,	// (0x0007e0d2) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0008c6f8) list_medium_line_x4_t5_t

0x0bc2,	// (0x0007df93) list_medium_line_t4_g4_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_t4_g4_g1

0x0c56,	// (0x0007e027) list_medium_line_t4_g4_g2_ParamLimits

0x0c56,	// (0x0007e027) list_medium_line_t4_g4_g2

0x0d67,	// (0x0007e138) list_medium_line_t4_g4_g3_ParamLimits

0x0d67,	// (0x0007e138) list_medium_line_t4_g4_g3

0x0bda,	// (0x0007dfab) list_medium_line_t4_g4_g4_ParamLimits

0x0bda,	// (0x0007dfab) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0008c703) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0008c703) list_medium_line_t4_g4_g

0x0d73,	// (0x0007e144) list_medium_line_t4_g4_t1_ParamLimits

0x0d73,	// (0x0007e144) list_medium_line_t4_g4_t1

0x0d88,	// (0x0007e159) list_medium_line_t4_g4_t2_ParamLimits

0x0d88,	// (0x0007e159) list_medium_line_t4_g4_t2

0x0d9d,	// (0x0007e16e) list_medium_line_t4_g4_t3_ParamLimits

0x0d9d,	// (0x0007e16e) list_medium_line_t4_g4_t3

0x0c0d,	// (0x0007dfde) list_medium_line_t4_g4_t4_ParamLimits

0x0c0d,	// (0x0007dfde) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0008c70c) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0008c70c) list_medium_line_t4_g4_t

0x4334,	// (0x00081705) chi_dic_find_pane_g1

0x51ef,	// (0x000825c0) main_tport_pane

0x0ff3,	// (0x0007e3c4) list_medium_line_plain_t1

0x1001,	// (0x0007e3d2) list_medium_line_t2_g2_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_t2_g2_g1

0x7e4a,	// (0x0008521b) list_medium_line_t2_g2_g2_ParamLimits

0x7e4a,	// (0x0008521b) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0008cdd1) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0008cdd1) list_medium_line_t2_g2_g

0x100d,	// (0x0007e3de) list_medium_line_t2_g2_t1_ParamLimits

0x100d,	// (0x0007e3de) list_medium_line_t2_g2_t1

0x1027,	// (0x0007e3f8) list_medium_line_t2_g2_t2_ParamLimits

0x1027,	// (0x0007e3f8) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0008cdd6) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0008cdd6) list_medium_line_t2_g2_t

0x1247,	// (0x0007e618) aid_sp_fs_list_icon_a_sm

0x8365,	// (0x00085736) aid_sp_fs_list_icon_d

0xbdcc,	// (0x0008919d) aid_sp_fs_text_primary

0xad56,	// (0x00088127) aid_sp_fs_text_secondary

0x836d,	// (0x0008573e) list_medium_line

0x836d,	// (0x0008573e) list_medium_line_g2

0x836d,	// (0x0008573e) list_medium_line_g3

0x836d,	// (0x0008573e) list_medium_line_plain

0x836d,	// (0x0008573e) list_medium_line_plain_t2

0x836d,	// (0x0008573e) list_medium_line_plain_t3

0x836d,	// (0x0008573e) list_medium_line_right_icon

0x836d,	// (0x0008573e) list_medium_line_right_iconx2

0x836d,	// (0x0008573e) list_medium_line_t2

0x836d,	// (0x0008573e) list_medium_line_t2_g2

0x836d,	// (0x0008573e) list_medium_line_t2_g3

0x836d,	// (0x0008573e) list_medium_line_t2_right_icon

0x836d,	// (0x0008573e) list_medium_line_t2_right_iconx2

0x836d,	// (0x0008573e) list_medium_line_t3

0x836d,	// (0x0008573e) list_medium_line_t3_g2

0x836d,	// (0x0008573e) list_medium_line_t3_g3

0x836d,	// (0x0008573e) list_medium_line_t3_right_iconx2

0x124f,	// (0x0007e620) list_medium_line_t4_g4

0x1258,	// (0x0007e629) list_medium_line_x2

0x1258,	// (0x0007e629) list_medium_line_x2_t2_g2

0x1258,	// (0x0007e629) list_medium_line_x2_t2_g3

0x1258,	// (0x0007e629) list_medium_line_x2_t2_g4

0x1258,	// (0x0007e629) list_medium_line_x2_t3

0x1258,	// (0x0007e629) list_medium_line_x2_t3_g2

0x1258,	// (0x0007e629) list_medium_line_x2_t3_g3

0x1258,	// (0x0007e629) list_medium_line_x2_t3_g4

0x1258,	// (0x0007e629) list_medium_line_x2_t4_g2

0x1258,	// (0x0007e629) list_medium_line_x2_t4_g4

0x1261,	// (0x0007e632) list_medium_line_x3

0x1261,	// (0x0007e632) list_medium_line_x3_t4

0x1261,	// (0x0007e632) list_medium_line_x3_t4_g4

0x124f,	// (0x0007e620) list_medium_line_x4_t4

0x124f,	// (0x0007e620) list_medium_line_x4_t4_g7

0x124f,	// (0x0007e620) list_medium_line_x4_t5

0x126a,	// (0x0007e63b) list_single_fs_dyc_pane_ParamLimits

0x126a,	// (0x0007e63b) list_single_fs_dyc_pane

0x0bc2,	// (0x0007df93) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x4_t4_g7_g1

0x12a2,	// (0x0007e673) list_medium_line_x4_t4_g7_g2_ParamLimits

0x12a2,	// (0x0007e673) list_medium_line_x4_t4_g7_g2

0x12ae,	// (0x0007e67f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x12ae,	// (0x0007e67f) list_medium_line_x4_t4_g7_g3

0x12bd,	// (0x0007e68e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x12bd,	// (0x0007e68e) list_medium_line_x4_t4_g7_g4

0x12c9,	// (0x0007e69a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x12c9,	// (0x0007e69a) list_medium_line_x4_t4_g7_g5

0x12d8,	// (0x0007e6a9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x12d8,	// (0x0007e6a9) list_medium_line_x4_t4_g7_g6

0x12e7,	// (0x0007e6b8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x12e7,	// (0x0007e6b8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0008cf9a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0008cf9a) list_medium_line_x4_t4_g7_g

0x12f3,	// (0x0007e6c4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x12f3,	// (0x0007e6c4) list_medium_line_x4_t4_g7_t1

0x1308,	// (0x0007e6d9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1308,	// (0x0007e6d9) list_medium_line_x4_t4_g7_t2

0x131d,	// (0x0007e6ee) list_medium_line_x4_t4_g7_t3_ParamLimits

0x131d,	// (0x0007e6ee) list_medium_line_x4_t4_g7_t3

0x1332,	// (0x0007e703) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1332,	// (0x0007e703) list_medium_line_x4_t4_g7_t4

0x1344,	// (0x0007e715) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1344,	// (0x0007e715) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0008cfa9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0008cfa9) list_medium_line_x4_t4_g7_t

0x1356,	// (0x0007e727) list_single_dyc_row_pane_ParamLimits

0x1356,	// (0x0007e727) list_single_dyc_row_pane

0x9227,	// (0x000865f8) call5_gesture_pane_ParamLimits

0x9227,	// (0x000865f8) call5_gesture_pane

0x925d,	// (0x0008662e) call5_windows_pane_ParamLimits

0x925d,	// (0x0008662e) call5_windows_pane

0x92ae,	// (0x0008667f) call5_swipe_1_pane_cp_ParamLimits

0x92ae,	// (0x0008667f) call5_swipe_1_pane_cp

0x92ba,	// (0x0008668b) call5_swipe_2_pane_cp_ParamLimits

0x92ba,	// (0x0008668b) call5_swipe_2_pane_cp

0xabc1,	// (0x00087f92) call5_image_pane_cp

0x92c6,	// (0x00086697) popup_call5_audio_first_window_cp_ParamLimits

0x92c6,	// (0x00086697) popup_call5_audio_first_window_cp

0xe6a3,	// (0x0008ba74) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6a3,	// (0x0008ba74) call5_swipe_1_pane_g1_cp

0xe710,	// (0x0008bae1) call5_swipe_1_pane_g2_cp

0xe6bc,	// (0x0008ba8d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6bc,	// (0x0008ba8d) call5_swipe_1_pane_t1_cp

0xe6a3,	// (0x0008ba74) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6a3,	// (0x0008ba74) call5_swipe_2_pane_g1_cp

0xe718,	// (0x0008bae9) call5_swipe_2_pane_g2_cp

0xe720,	// (0x0008baf1) call5_swipe_2_pane_t1_cp_ParamLimits

0xe720,	// (0x0008baf1) call5_swipe_2_pane_t1_cp

0xbdbe,	// (0x0008918f) main_sp_fs_email_pane

0xe20d,	// (0x0008b5de) main_sp_fs_listscroll_pane_te

0x92d4,	// (0x000866a5) popup_sp_fs_action_menu_pane_ParamLimits

0x92d4,	// (0x000866a5) popup_sp_fs_action_menu_pane

0xce8f,	// (0x0008a260) bg_sp_fs_ctrlbar_pane_g1

0xe735,	// (0x0008bb06) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe73e,	// (0x0008bb0f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe747,	// (0x0008bb18) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce8f,	// (0x0008a260) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0008d097) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc6e,	// (0x0008a03f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc6e,	// (0x0008a03f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe750,	// (0x0008bb21) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe750,	// (0x0008bb21) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe75c,	// (0x0008bb2d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe75c,	// (0x0008bb2d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0008d0a0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0008d0a0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe768,	// (0x0008bb39) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe768,	// (0x0008bb39) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x931a,	// (0x000866eb) list_medium_line_t2_right_icon_g1

0x13f2,	// (0x0007e7c3) list_medium_line_t2_right_icon_t1

0x1402,	// (0x0007e7d3) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0008d0a5) list_medium_line_t2_right_icon_t

0xca57,	// (0x00089e28) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca57,	// (0x00089e28) bg_sp_fs_ctrlbar_pane

0x937b,	// (0x0008674c) main_sp_fs_ctrlbar_button_pane_cp01

0x9383,	// (0x00086754) main_sp_fs_ctrlbar_ddmenu_pane

0xe7bc,	// (0x0008bb8d) main_sp_fs_ctrlbar_pane_g1

0xe7c8,	// (0x0008bb99) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0008d0aa) main_sp_fs_ctrlbar_pane_g

0xe7d4,	// (0x0008bba5) main_sp_fs_ctrlbar_pane_t1

0x938d,	// (0x0008675e) main_sp_fs_ctrlbar_pane

0x93a3,	// (0x00086774) main_sp_fs_listscroll_pane_te_cp01

0x1410,	// (0x0007e7e1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1410,	// (0x0007e7e1) popup_sp_fs_action_menu_pane_cp01

0xbdbe,	// (0x0008918f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbdbe,	// (0x0008918f) bg_sp_fs_highlight_list_pane_cp01

0x143e,	// (0x0007e80f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x143e,	// (0x0007e80f) sp_fs_action_menu_list_gene_pane_g1

0xe804,	// (0x0008bbd5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe804,	// (0x0008bbd5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0008d0b4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0008d0b4) sp_fs_action_menu_list_gene_pane_g

0x144d,	// (0x0007e81e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x144d,	// (0x0007e81e) sp_fs_action_menu_list_gene_pane_t1

0x1465,	// (0x0007e836) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1465,	// (0x0007e836) sp_fs_action_menu_list_gene_pane

0xe811,	// (0x0008bbe2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe811,	// (0x0008bbe2) popup_sp_fs_action_menu_bg_pane

0x1488,	// (0x0007e859) sp_fs_action_menu_list_pane_ParamLimits

0x1488,	// (0x0007e859) sp_fs_action_menu_list_pane

0xa9f3,	// (0x00087dc4) sp_fs_scroll_pane_cp01_ParamLimits

0xa9f3,	// (0x00087dc4) sp_fs_scroll_pane_cp01

0x14ac,	// (0x0007e87d) list_medium_line_plain_t2_t1

0x14bc,	// (0x0007e88d) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0008d0b9) list_medium_line_plain_t2_t

0x14ca,	// (0x0007e89b) list_medium_line_plain_t3_t1

0x14da,	// (0x0007e8ab) list_medium_line_plain_t3_t2

0x14e8,	// (0x0007e8b9) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0008d0be) list_medium_line_plain_t3_t

0x0bc2,	// (0x0007df93) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_t2_g2_g1

0x0bda,	// (0x0007dfab) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0bda,	// (0x0007dfab) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0008c613) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0008c613) list_medium_line_x2_t2_g2_g

0x0d73,	// (0x0007e144) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d73,	// (0x0007e144) list_medium_line_x2_t2_g2_t1

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0008d0c5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0008d0c5) list_medium_line_x2_t2_g2_t

0x0bc2,	// (0x0007df93) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_t4_g2_g1

0x14f6,	// (0x0007e8c7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x14f6,	// (0x0007e8c7) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0008d0ca) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0008d0ca) list_medium_line_x2_t4_g2_g

0x1508,	// (0x0007e8d9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1508,	// (0x0007e8d9) list_medium_line_x2_t4_g2_t1

0x1522,	// (0x0007e8f3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1522,	// (0x0007e8f3) list_medium_line_x2_t4_g2_t2

0x1538,	// (0x0007e909) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1538,	// (0x0007e909) list_medium_line_x2_t4_g2_t3

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0008d0cf) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0008d0cf) list_medium_line_x2_t4_g2_t

0x93b4,	// (0x00086785) list_medium_line_t3_right_iconx2_g1

0x931a,	// (0x000866eb) list_medium_line_t3_right_iconx2_g2

0x154d,	// (0x0007e91e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0008d0d8) list_medium_line_t3_right_iconx2_g

0x1555,	// (0x0007e926) list_medium_line_t3_right_iconx2_t1

0x1565,	// (0x0007e936) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0008d0df) list_medium_line_t3_right_iconx2_t

0x0bc2,	// (0x0007df93) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x3_t4_g4_g1

0x0bce,	// (0x0007df9f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0bce,	// (0x0007df9f) list_medium_line_x3_t4_g4_g2

0x0c56,	// (0x0007e027) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0c56,	// (0x0007e027) list_medium_line_x3_t4_g4_g3

0x1573,	// (0x0007e944) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1573,	// (0x0007e944) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0008d0e4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0008d0e4) list_medium_line_x3_t4_g4_g

0x157f,	// (0x0007e950) list_medium_line_x3_t4_g4_t1_ParamLimits

0x157f,	// (0x0007e950) list_medium_line_x3_t4_g4_t1

0x1596,	// (0x0007e967) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1596,	// (0x0007e967) list_medium_line_x3_t4_g4_t2

0x0d88,	// (0x0007e159) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0d88,	// (0x0007e159) list_medium_line_x3_t4_g4_t3

0x15ab,	// (0x0007e97c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x15ab,	// (0x0007e97c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0008d0ed) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0008d0ed) list_medium_line_x3_t4_g4_t

0x15c8,	// (0x0007e999) list_single_dyc_row_text_pane_t1_ParamLimits

0x15c8,	// (0x0007e999) list_single_dyc_row_text_pane_t1

0x160b,	// (0x0007e9dc) list_single_dyc_row_text_pane_t2_ParamLimits

0x160b,	// (0x0007e9dc) list_single_dyc_row_text_pane_t2

0x1681,	// (0x0007ea52) list_single_dyc_row_text_pane_t3_ParamLimits

0x1681,	// (0x0007ea52) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0008d0f6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0008d0f6) list_single_dyc_row_text_pane_t

0x1760,	// (0x0007eb31) list_single_dyc_row_pane_g1_ParamLimits

0x1760,	// (0x0007eb31) list_single_dyc_row_pane_g1

0x176c,	// (0x0007eb3d) list_single_dyc_row_pane_g2_ParamLimits

0x176c,	// (0x0007eb3d) list_single_dyc_row_pane_g2

0x1778,	// (0x0007eb49) list_single_dyc_row_pane_g3_ParamLimits

0x1778,	// (0x0007eb49) list_single_dyc_row_pane_g3

0x1784,	// (0x0007eb55) list_single_dyc_row_pane_g4_ParamLimits

0x1784,	// (0x0007eb55) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0008d103) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0008d103) list_single_dyc_row_pane_g

0x1790,	// (0x0007eb61) list_single_dyc_row_text_pane_ParamLimits

0x1790,	// (0x0007eb61) list_single_dyc_row_text_pane

0xa273,	// (0x00087644) bg_sp_fs_scroll_pane

0xe81f,	// (0x0008bbf0) thumb_sp_fs_scroll_pane

0x1001,	// (0x0007e3d2) list_medium_line_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_g1

0x17af,	// (0x0007eb80) list_medium_line_t1_ParamLimits

0x17af,	// (0x0007eb80) list_medium_line_t1

0x0bc2,	// (0x0007df93) list_medium_line_x2_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_g1

0x0bce,	// (0x0007df9f) list_medium_line_x2_g2_ParamLimits

0x0bce,	// (0x0007df9f) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0008d10c) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0008d10c) list_medium_line_x2_g

0x17c4,	// (0x0007eb95) list_medium_line_x2_t1_ParamLimits

0x17c4,	// (0x0007eb95) list_medium_line_x2_t1

0x0bc2,	// (0x0007df93) list_medium_line_x3_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x3_g1

0x0bce,	// (0x0007df9f) list_medium_line_x3_g2_ParamLimits

0x0bce,	// (0x0007df9f) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0008d10c) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0008d10c) list_medium_line_x3_g

0x17c4,	// (0x0007eb95) list_medium_line_x3_t1_ParamLimits

0x17c4,	// (0x0007eb95) list_medium_line_x3_t1

0xe828,	// (0x0008bbf9) thumb_sp_fs_scroll_pane_g1

0xe831,	// (0x0008bc02) thumb_sp_fs_scroll_pane_g2

0xe854,	// (0x0008bc25) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0008d111) thumb_sp_fs_scroll_pane_g

0xe828,	// (0x0008bbf9) bg_sp_fs_scroll_pane_g1

0xe831,	// (0x0008bc02) bg_sp_fs_scroll_pane_g2

0xe854,	// (0x0008bc25) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0008d111) bg_sp_fs_scroll_pane_g

0x0bc2,	// (0x0007df93) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0bc2,	// (0x0007df93) list_medium_line_x2_t3_g4_g1

0x0c4a,	// (0x0007e01b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0c4a,	// (0x0007e01b) list_medium_line_x2_t3_g4_g2

0x0bce,	// (0x0007df9f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0bce,	// (0x0007df9f) list_medium_line_x2_t3_g4_g3

0x0bda,	// (0x0007dfab) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0bda,	// (0x0007dfab) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0008c68f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0008c68f) list_medium_line_x2_t3_g4_g

0x17da,	// (0x0007ebab) list_medium_line_x2_t3_g4_t1_ParamLimits

0x17da,	// (0x0007ebab) list_medium_line_x2_t3_g4_t1

0x17f0,	// (0x0007ebc1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x17f0,	// (0x0007ebc1) list_medium_line_x2_t3_g4_t2

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0c0d,	// (0x0007dfde) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0008d118) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0008d118) list_medium_line_x2_t3_g4_t

0x1001,	// (0x0007e3d2) list_medium_line_g2_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_g2_g1

0x7e4a,	// (0x0008521b) list_medium_line_g2_g2_ParamLimits

0x7e4a,	// (0x0008521b) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0008cdd1) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0008cdd1) list_medium_line_g2_g

0x180a,	// (0x0007ebdb) list_medium_line_g2_t1_ParamLimits

0x180a,	// (0x0007ebdb) list_medium_line_g2_t1

0x1001,	// (0x0007e3d2) list_medium_line_t3_g2_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_t3_g2_g1

0x7e4a,	// (0x0008521b) list_medium_line_t3_g2_g2_ParamLimits

0x7e4a,	// (0x0008521b) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0008cdd1) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0008cdd1) list_medium_line_t3_g2_g

0x181f,	// (0x0007ebf0) list_medium_line_t3_g2_t1_ParamLimits

0x181f,	// (0x0007ebf0) list_medium_line_t3_g2_t1

0x1839,	// (0x0007ec0a) list_medium_line_t3_g2_t2_ParamLimits

0x1839,	// (0x0007ec0a) list_medium_line_t3_g2_t2

0x184f,	// (0x0007ec20) list_medium_line_t3_g2_t3_ParamLimits

0x184f,	// (0x0007ec20) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0008d11f) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0008d11f) list_medium_line_t3_g2_t

0x931a,	// (0x000866eb) list_medium_line_right_icon_g1

0x1869,	// (0x0007ec3a) list_medium_line_right_icon_t1

0x1001,	// (0x0007e3d2) list_medium_line_t2_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_t2_g1

0x1877,	// (0x0007ec48) list_medium_line_t2_t1_ParamLimits

0x1877,	// (0x0007ec48) list_medium_line_t2_t1

0x1891,	// (0x0007ec62) list_medium_line_t2_t2_ParamLimits

0x1891,	// (0x0007ec62) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0008d126) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0008d126) list_medium_line_t2_t

0x1001,	// (0x0007e3d2) list_medium_line_t3_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_t3_g1

0x18a6,	// (0x0007ec77) list_medium_line_t3_t1_ParamLimits

0x18a6,	// (0x0007ec77) list_medium_line_t3_t1

0x18c0,	// (0x0007ec91) list_medium_line_t3_t2_ParamLimits

0x18c0,	// (0x0007ec91) list_medium_line_t3_t2

0x18d6,	// (0x0007eca7) list_medium_line_t3_t3_ParamLimits

0x18d6,	// (0x0007eca7) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0008d12b) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0008d12b) list_medium_line_t3_t

0x1001,	// (0x0007e3d2) list_medium_line_g3_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_g3_g1

0x93bc,	// (0x0008678d) list_medium_line_g3_g2_ParamLimits

0x93bc,	// (0x0008678d) list_medium_line_g3_g2

0x7e4a,	// (0x0008521b) list_medium_line_g3_g3_ParamLimits

0x7e4a,	// (0x0008521b) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0008d132) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0008d132) list_medium_line_g3_g

0x18eb,	// (0x0007ecbc) list_medium_line_g3_t1_ParamLimits

0x18eb,	// (0x0007ecbc) list_medium_line_g3_t1

0x1001,	// (0x0007e3d2) list_medium_line_t2_g3_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_t2_g3_g1

0x93bc,	// (0x0008678d) list_medium_line_t2_g3_g2_ParamLimits

0x93bc,	// (0x0008678d) list_medium_line_t2_g3_g2

0x7e4a,	// (0x0008521b) list_medium_line_t2_g3_g3_ParamLimits

0x7e4a,	// (0x0008521b) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0008d132) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0008d132) list_medium_line_t2_g3_g

0x1900,	// (0x0007ecd1) list_medium_line_t2_g3_t1_ParamLimits

0x1900,	// (0x0007ecd1) list_medium_line_t2_g3_t1

0x191a,	// (0x0007eceb) list_medium_line_t2_g3_t2_ParamLimits

0x191a,	// (0x0007eceb) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0008d139) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0008d139) list_medium_line_t2_g3_t

0x1001,	// (0x0007e3d2) list_medium_line_t3_g3_g1_ParamLimits

0x1001,	// (0x0007e3d2) list_medium_line_t3_g3_g1

0x93bc,	// (0x0008678d) list_medium_line_t3_g3_g2_ParamLimits

0x93bc,	// (0x0008678d) list_medium_line_t3_g3_g2

0x7e4a,	// (0x0008521b) list_medium_line_t3_g3_g3_ParamLimits

0x7e4a,	// (0x0008521b) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0008d132) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0008d132) list_medium_line_t3_g3_g

0x1930,	// (0x0007ed01) list_medium_line_t3_g3_t1_ParamLimits

0x1930,	// (0x0007ed01) list_medium_line_t3_g3_t1

0x1949,	// (0x0007ed1a) list_medium_line_t3_g3_t2_ParamLimits

0x1949,	// (0x0007ed1a) list_medium_line_t3_g3_t2

0x195f,	// (0x0007ed30) list_medium_line_t3_g3_t3_ParamLimits

0x195f,	// (0x0007ed30) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0008d13e) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0008d13e) list_medium_line_t3_g3_t

0x93b4,	// (0x00086785) list_medium_line_right_iconx2_g1

0x931a,	// (0x000866eb) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0008d145) list_medium_line_right_iconx2_g

0x93c8,	// (0x00086799) list_medium_line_right_iconx2_t1

0x93b4,	// (0x00086785) list_medium_line_t2_right_iconx2_g1

0x931a,	// (0x000866eb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0008d145) list_medium_line_t2_right_iconx2_g

0x1979,	// (0x0007ed4a) list_medium_line_t2_right_iconx2_t1

0x1989,	// (0x0007ed5a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0008d14a) list_medium_line_t2_right_iconx2_t

0x1997,	// (0x0007ed68) list_medium_line_x4_t4_t1

0x19a5,	// (0x0007ed76) list_medium_line_x4_t4_t2

0x19b5,	// (0x0007ed86) list_medium_line_x4_t4_t3

0x19c5,	// (0x0007ed96) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0008d14f) list_medium_line_x4_t4_t

0x9400,	// (0x000867d1) tport_appsw_pane_ParamLimits

0x9400,	// (0x000867d1) tport_appsw_pane

0x940e,	// (0x000867df) tport_contact_pane_ParamLimits

0x940e,	// (0x000867df) tport_contact_pane

0x941e,	// (0x000867ef) tport_listscroll_pane_ParamLimits

0x941e,	// (0x000867ef) tport_listscroll_pane

0x942d,	// (0x000867fe) cell_tport_appsw_pane_ParamLimits

0x942d,	// (0x000867fe) cell_tport_appsw_pane

0xd11b,	// (0x0008a4ec) tport_appsw_pane_g1_ParamLimits

0xd11b,	// (0x0008a4ec) tport_appsw_pane_g1

0xe85d,	// (0x0008bc2e) tport_contact_pane_g1

0xe866,	// (0x0008bc37) tport_contact_pane_t1

0xe874,	// (0x0008bc45) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0008d158) tport_contact_pane_t

0xe882,	// (0x0008bc53) list_tport_pane

0xe88b,	// (0x0008bc5c) scroll_pane_cp_030

0x9462,	// (0x00086833) cell_tport_appsw_pane_g1

0x9472,	// (0x00086843) cell_tport_appsw_pane_t1

0x9480,	// (0x00086851) grid_highlight_pane_cp019

0x9488,	// (0x00086859) list_tport_double_graphic_pane_ParamLimits

0x9488,	// (0x00086859) list_tport_double_graphic_pane

0xbdbe,	// (0x0008918f) list_highlight_pane_cp023_ParamLimits

0xbdbe,	// (0x0008918f) list_highlight_pane_cp023

0x94a5,	// (0x00086876) list_tport_double_graphic_pane_g1_ParamLimits

0x94a5,	// (0x00086876) list_tport_double_graphic_pane_g1

0x94b2,	// (0x00086883) list_tport_double_graphic_pane_t1_ParamLimits

0x94b2,	// (0x00086883) list_tport_double_graphic_pane_t1

0x94c7,	// (0x00086898) list_tport_double_graphic_pane_t2_ParamLimits

0x94c7,	// (0x00086898) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0008d164) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0008d164) list_tport_double_graphic_pane_t

0xa273,	// (0x00087644) main_cale_note_pane

0x7651,	// (0x00084a22) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7651,	// (0x00084a22) cell_vitu2_function_top_wide_pane_cp01

0x8e25,	// (0x000861f6) wait_bar_pane_cp05_ParamLimits

0xbdbe,	// (0x0008918f) listscroll_cmail_pane

0xe894,	// (0x0008bc65) list_cmail_pane

0x94d9,	// (0x000868aa) list_cmail_body_pane

0x94f3,	// (0x000868c4) list_single_cmail_header_caption_pane

0xe8a4,	// (0x0008bc75) list_single_cmail_header_detail_pane_ParamLimits

0xe8a4,	// (0x0008bc75) list_single_cmail_header_detail_pane

0xe8d6,	// (0x0008bca7) list_single_cmail_header_caption_pane_t1

0x19d5,	// (0x0007eda6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x19d5,	// (0x0007eda6) list_single_cmail_header_detail_pane_g1

0x9513,	// (0x000868e4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9513,	// (0x000868e4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0008d169) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0008d169) list_single_cmail_header_detail_pane_g

0x19ed,	// (0x0007edbe) list_single_cmail_header_detail_pane_t1_ParamLimits

0x19ed,	// (0x0007edbe) list_single_cmail_header_detail_pane_t1

0x1a4d,	// (0x0007ee1e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1a4d,	// (0x0007ee1e) list_single_cmail_header_editor_pane_bg

0xe475,	// (0x0008b846) list_cmail_body_pane_g1

0xe8fa,	// (0x0008bccb) list_cmail_body_pane_t1

0xd836,	// (0x0008ac07) list_single_cmail_header_editor_pane_bg_g1

0xae45,	// (0x00088216) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd846,	// (0x0008ac17) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd83e,	// (0x0008ac0f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda6a,	// (0x0008ae3b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd866,	// (0x0008ac37) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd856,	// (0x0008ac27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd85e,	// (0x0008ac2f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xae25,	// (0x000881f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x951f,	// (0x000868f0) calenote_gesture_pane_ParamLimits

0x951f,	// (0x000868f0) calenote_gesture_pane

0x9539,	// (0x0008690a) calenote_window_pane_ParamLimits

0x9539,	// (0x0008690a) calenote_window_pane

0xe908,	// (0x0008bcd9) popup_note_window_cp01

0x9551,	// (0x00086922) calenote_swipe_1_pane_ParamLimits

0x9551,	// (0x00086922) calenote_swipe_1_pane

0x92ba,	// (0x0008668b) calenote_swipe_2_pane_ParamLimits

0x92ba,	// (0x0008668b) calenote_swipe_2_pane

0xe6a3,	// (0x0008ba74) calenote_swipe_1_pane_g1_ParamLimits

0xe6a3,	// (0x0008ba74) calenote_swipe_1_pane_g1

0xe6b0,	// (0x0008ba81) calenote_swipe_1_pane_g2_ParamLimits

0xe6b0,	// (0x0008ba81) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0008d08d) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0008d08d) calenote_swipe_1_pane_g

0xe91a,	// (0x0008bceb) calenote_swipe_1_pane_t1_ParamLimits

0xe91a,	// (0x0008bceb) calenote_swipe_1_pane_t1

0xe6a3,	// (0x0008ba74) calenote_swipe_2_pane_g1_ParamLimits

0xe6a3,	// (0x0008ba74) calenote_swipe_2_pane_g1

0xe939,	// (0x0008bd0a) calenote_swipe_2_pane_g2_ParamLimits

0xe939,	// (0x0008bd0a) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0008d175) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0008d175) calenote_swipe_2_pane_g

0xe945,	// (0x0008bd16) calenote_swipe_2_pane_t1_ParamLimits

0xe945,	// (0x0008bd16) calenote_swipe_2_pane_t1

0xa273,	// (0x00087644) main_mup_navstr_pane

0x62a7,	// (0x00083678) main_mup3_pane_t7_ParamLimits

0x62a7,	// (0x00083678) main_mup3_pane_t7

0x6ce0,	// (0x000840b1) main_mp4_pane_g6_ParamLimits

0x6ce0,	// (0x000840b1) main_mp4_pane_g6

0x706c,	// (0x0008443d) main_image3_pane_t4_ParamLimits

0x706c,	// (0x0008443d) main_image3_pane_t4

0x9564,	// (0x00086935) popup_navstr_preview_pane_ParamLimits

0x9564,	// (0x00086935) popup_navstr_preview_pane

0x9570,	// (0x00086941) scroll_navstr_pane_ParamLimits

0x9570,	// (0x00086941) scroll_navstr_pane

0xa273,	// (0x00087644) bg_popup_preview_window_pane_cp04

0xe96c,	// (0x0008bd3d) popup_navstr_preview_pane_t1

0x957c,	// (0x0008694d) scroll_navstr_pane_g1_ParamLimits

0x957c,	// (0x0008694d) scroll_navstr_pane_g1

0x9589,	// (0x0008695a) scroll_navstr_pane_t1_ParamLimits

0x9589,	// (0x0008695a) scroll_navstr_pane_t1

0xe911,	// (0x0008bce2) bg_button_pane_cp014

0xe911,	// (0x0008bce2) bg_button_pane_cp030

0x1398,	// (0x0007e769) list_double_fisheye_pane_g4_ParamLimits

0x1398,	// (0x0007e769) list_double_fisheye_pane_g4

0x13a4,	// (0x0007e775) list_double_fisheye_pane_g5_ParamLimits

0x13a4,	// (0x0007e775) list_double_fisheye_pane_g5

0xd210,	// (0x0008a5e1) sp_fs_scroll_pane_cp03

0xe7bc,	// (0x0008bb8d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7c8,	// (0x0008bb99) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0008d0aa) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7d4,	// (0x0008bba5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe89c,	// (0x0008bc6d) sp_fs_scroll_pane_cp02

0xab1d,	// (0x00087eee) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xab1d,	// (0x00087eee) popup_sp_fs_calendar_preview_list_single_pane

0xa273,	// (0x00087644) main_cam6_pano_pane

0xbdbe,	// (0x0008918f) main_mup3_pane_ParamLimits

0xa273,	// (0x00087644) main_phacti_pane

0x8cf8,	// (0x000860c9) bg_button_pane_cp11

0x8d10,	// (0x000860e1) main_mobtv_info_pane_g2_ParamLimits

0x8d10,	// (0x000860e1) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0008d00a) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0008d00a) main_mobtv_info_pane_g

0x8ec2,	// (0x00086293) sc_clock_pane_t5_ParamLimits

0x8ec2,	// (0x00086293) sc_clock_pane_t5

0x90ba,	// (0x0008648b) main_radioblah_pane_g1_ParamLimits

0xe5ef,	// (0x0008b9c0) main_radioblah_pane_t3_ParamLimits

0xe5ef,	// (0x0008b9c0) main_radioblah_pane_t3

0xe607,	// (0x0008b9d8) main_radioblah_pane_t4_ParamLimits

0xe607,	// (0x0008b9d8) main_radioblah_pane_t4

0x90d8,	// (0x000864a9) main_radioblah_text_pane_ParamLimits

0x90d8,	// (0x000864a9) main_radioblah_text_pane

0x90e5,	// (0x000864b6) main_radioblah_info_pane_g1_ParamLimits

0x917e,	// (0x0008654f) main_radioblah_info_pane_t4_ParamLimits

0x917e,	// (0x0008654f) main_radioblah_info_pane_t4

0xbdbe,	// (0x0008918f) main_sp_fs_calendar_pane

0x959b,	// (0x0008696c) main_phacti_pane_g1

0x95a3,	// (0x00086974) phacti_note_pane_ParamLimits

0x95a3,	// (0x00086974) phacti_note_pane

0xe983,	// (0x0008bd54) phacti_term_pane_ParamLimits

0xe983,	// (0x0008bd54) phacti_term_pane

0xe998,	// (0x0008bd69) phacti_note_pane_t1_ParamLimits

0xe998,	// (0x0008bd69) phacti_note_pane_t1

0x1a64,	// (0x0007ee35) phacti_term_pane_g1

0x1a6c,	// (0x0007ee3d) phacti_term_pane_t1_ParamLimits

0x1a6c,	// (0x0007ee3d) phacti_term_pane_t1

0xe9af,	// (0x0008bd80) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe9b7,	// (0x0008bd88) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0008d17f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe9bf,	// (0x0008bd90) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe9bf,	// (0x0008bd90) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9d5,	// (0x0008bda6) aid_popup_sp_fs_bg_corner_pane

0xce8f,	// (0x0008a260) popup_sp_fs_calendar_preview_bg_pane_g1

0xa273,	// (0x00087644) popup_sp_fs_calendar_preview_bg_pane

0xe9dd,	// (0x0008bdae) popup_sp_fs_calendar_preview_list_pane

0xca57,	// (0x00089e28) bg_main_sp_fs_cale_pane_ParamLimits

0xca57,	// (0x00089e28) bg_main_sp_fs_cale_pane

0x1a9f,	// (0x0007ee70) listscroll_cale_mrui_pane_ParamLimits

0x1a9f,	// (0x0007ee70) listscroll_cale_mrui_pane

0x1ab4,	// (0x0007ee85) listscroll_sp_fs_schedule_track_pane

0x1abd,	// (0x0007ee8e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1abd,	// (0x0007ee8e) main_sp_fs_ctrlbar_pane_cp01

0xe9e5,	// (0x0008bdb6) main_sp_fs_ribbon_pane

0x1ad0,	// (0x0007eea1) popup_sp_fs_cale_preview_window

0xee9b,	// (0x0008c26c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xee9b,	// (0x0008c26c) list_single_sp_fs_schedule_track_pane

0xe1ff,	// (0x0008b5d0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe1ff,	// (0x0008b5d0) bg_sp_fs_highlight_list_pane_cp03

0x9606,	// (0x000869d7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9606,	// (0x000869d7) list_single_sp_fs_schedule_track_pane_g1

0x9612,	// (0x000869e3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9612,	// (0x000869e3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0008d184) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0008d184) list_single_sp_fs_schedule_track_pane_g

0x961e,	// (0x000869ef) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x961e,	// (0x000869ef) list_single_sp_fs_schedule_track_pane_t1

0x963c,	// (0x00086a0d) sp_fs_schedule_track_pane_ParamLimits

0x963c,	// (0x00086a0d) sp_fs_schedule_track_pane

0xe9ed,	// (0x0008bdbe) sp_fs_schedule_track_pane_g1

0xe9f5,	// (0x0008bdc6) sp_fs_schedule_track_pane_g2

0xe9fd,	// (0x0008bdce) sp_fs_schedule_track_pane_g3

0xea05,	// (0x0008bdd6) sp_fs_schedule_track_pane_g4

0xea0d,	// (0x0008bdde) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0008d189) sp_fs_schedule_track_pane_g

0xd836,	// (0x0008ac07) bg_sp_fs_schedule_viewer_highlight_g1

0xae45,	// (0x00088216) bg_sp_fs_schedule_viewer_highlight_g2

0xd83e,	// (0x0008ac0f) bg_sp_fs_schedule_viewer_highlight_g3

0xd846,	// (0x0008ac17) bg_sp_fs_schedule_viewer_highlight_g4

0xda6a,	// (0x0008ae3b) bg_sp_fs_schedule_viewer_highlight_g5

0xd856,	// (0x0008ac27) bg_sp_fs_schedule_viewer_highlight_g6

0xd85e,	// (0x0008ac2f) bg_sp_fs_schedule_viewer_highlight_g7

0xd866,	// (0x0008ac37) bg_sp_fs_schedule_viewer_highlight_g8

0xae25,	// (0x000881f6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0008d194) bg_sp_fs_schedule_viewer_highlight_g

0xa273,	// (0x00087644) bg_main_sp_fs_ribbon_pane

0x964e,	// (0x00086a1f) main_sp_fs_ribbon_pane_g1

0xea15,	// (0x0008bde6) main_sp_fs_ribbon_pane_t1

0x9657,	// (0x00086a28) main_sp_fs_ribbon_pane_t2

0xea24,	// (0x0008bdf5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0008d1a7) main_sp_fs_ribbon_pane_t

0xea33,	// (0x0008be04) main_sp_fs_ribbon_scheduler_pane

0xea3b,	// (0x0008be0c) bg_main_sp_fs_ribbon_pane_g1

0xea44,	// (0x0008be15) bg_main_sp_fs_ribbon_pane_g2

0xea4d,	// (0x0008be1e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0008d1ae) bg_main_sp_fs_ribbon_pane_g

0xea55,	// (0x0008be26) main_sp_fs_ribbon_scheduler_pane_g1

0xea5e,	// (0x0008be2f) main_sp_fs_ribbon_scheduler_pane_g2

0xea67,	// (0x0008be38) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0008d1b5) main_sp_fs_ribbon_scheduler_pane_g

0xea70,	// (0x0008be41) list_cale_mrui_pane

0x9666,	// (0x00086a37) sp_fs_scroll_pane_cp07_ParamLimits

0x9666,	// (0x00086a37) sp_fs_scroll_pane_cp07

0x9682,	// (0x00086a53) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9682,	// (0x00086a53) bg_sp_fs_schedule_viewer_highlight

0xea7d,	// (0x0008be4e) list_single_sp_fs_schedule_track_pane_cp01

0xea85,	// (0x0008be56) list_sp_fs_schedule_track_pane

0xea8d,	// (0x0008be5e) sp_fs_scroll_pane_cp06_ParamLimits

0xea8d,	// (0x0008be5e) sp_fs_scroll_pane_cp06

0xce8f,	// (0x0008a260) bgmain_sp_fs_calendar_pane_g1

0x1ae2,	// (0x0007eeb3) list_single_cale_mrui_pane_ParamLimits

0x1ae2,	// (0x0007eeb3) list_single_cale_mrui_pane

0x1b08,	// (0x0007eed9) list_single_cale_mrui_row_pane_ParamLimits

0x1b08,	// (0x0007eed9) list_single_cale_mrui_row_pane

0x1b15,	// (0x0007eee6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1b15,	// (0x0007eee6) list_single_cale_mrui_row_pane_g1

0x1b4d,	// (0x0007ef1e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1b4d,	// (0x0007ef1e) list_single_cale_mrui_row_pane_t1

0x1b5f,	// (0x0007ef30) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1b5f,	// (0x0007ef30) list_single_cale_mrui_row_pane_t2

0x1bc5,	// (0x0007ef96) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1bc5,	// (0x0007ef96) list_single_cale_mrui_row_pane_t3

0x1bf4,	// (0x0007efc5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1bf4,	// (0x0007efc5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0008d1c3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0008d1c3) list_single_cale_mrui_row_pane_t

0x1c25,	// (0x0007eff6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1c25,	// (0x0007eff6) list_single_cmail_header_editor_pane_bg_cp01

0x1c47,	// (0x0007f018) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1c47,	// (0x0007f018) list_single_cmail_header_editor_pane_bg_cp02

0x968f,	// (0x00086a60) main_radioblah_text_pane_t1_ParamLimits

0x968f,	// (0x00086a60) main_radioblah_text_pane_t1

0xeaac,	// (0x0008be7d) cam6_indi_pane_cp01

0xeab4,	// (0x0008be85) cam6_mode_pane_cp01

0xeabc,	// (0x0008be8d) cam6_pano_pane

0xeac5,	// (0x0008be96) cam6_zoom_pane_cp01

0xeacf,	// (0x0008bea0) cam6_pano_image_pane

0xead8,	// (0x0008bea9) cam6_pano_pane_g1

0xe475,	// (0x0008b846) cam6_pano_pane_g2

0xeae1,	// (0x0008beb2) cam6_pano_pane_g3

0xeaea,	// (0x0008bebb) cam6_pano_pane_g4

0xd43a,	// (0x0008a80b) cam6_pano_pane_g5

0xeaf3,	// (0x0008bec4) cam6_pano_pane_g6

0xeafb,	// (0x0008becc) cam6_pano_pane_g7

0xeb03,	// (0x0008bed4) cam6_pano_pane_g8

0xeb0c,	// (0x0008bedd) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0008d1cc) cam6_pano_pane_g

0xa273,	// (0x00087644) main_browser_tag_pane

0xe964,	// (0x0008bd35) grid_navstr_albumart_pane

0xeb17,	// (0x0008bee8) cell_navstr_albumart_pane_ParamLimits

0xeb17,	// (0x0008bee8) cell_navstr_albumart_pane

0xeb33,	// (0x0008bf04) cell_navstr_albumart_pane_g1

0xc864,	// (0x00089c35) cell_navstr_albumart_pane_g2

0xc874,	// (0x00089c45) cell_navstr_albumart_pane_g3

0xc86c,	// (0x00089c3d) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0008d1df) cell_navstr_albumart_pane_g

0x96a9,	// (0x00086a7a) bt_list_pane_ParamLimits

0x96a9,	// (0x00086a7a) bt_list_pane

0x96c2,	// (0x00086a93) bt_list_pane_t1

0x96d1,	// (0x00086aa2) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0008d1e8) bt_list_pane_t

0xa273,	// (0x00087644) main_cale_prevew_pane

0x96e0,	// (0x00086ab1) popup_cale_preview_window_ParamLimits

0x96e0,	// (0x00086ab1) popup_cale_preview_window

0xbdbe,	// (0x0008918f) bg_popup_preview_window_pane_cp05_ParamLimits

0xbdbe,	// (0x0008918f) bg_popup_preview_window_pane_cp05

0xeb3b,	// (0x0008bf0c) list_cale_preview_pane_ParamLimits

0xeb3b,	// (0x0008bf0c) list_cale_preview_pane

0x96fd,	// (0x00086ace) list_double_cale_preview_pane_ParamLimits

0x96fd,	// (0x00086ace) list_double_cale_preview_pane

0x9711,	// (0x00086ae2) list_single_cale_preview_pane_ParamLimits

0x9711,	// (0x00086ae2) list_single_cale_preview_pane

0x9729,	// (0x00086afa) list_single_cale_preview_pane_g1

0x9731,	// (0x00086b02) list_single_cale_preview_pane_t1_ParamLimits

0x9731,	// (0x00086b02) list_single_cale_preview_pane_t1

0x9746,	// (0x00086b17) list_double_cale_preview_pane_g1

0x974e,	// (0x00086b1f) list_double_cale_preview_pane_t1_ParamLimits

0x974e,	// (0x00086b1f) list_double_cale_preview_pane_t1

0x9763,	// (0x00086b34) list_double_cale_preview_pane_t2_ParamLimits

0x9763,	// (0x00086b34) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0008d1ed) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0008d1ed) list_double_cale_preview_pane_t

0xa273,	// (0x00087644) main_ezdial_pane

0xbdbe,	// (0x0008918f) main_sp_fs_email_pane_ParamLimits

0x9322,	// (0x000866f3) cmail_ddmenu_btn01_pane_ParamLimits

0x9322,	// (0x000866f3) cmail_ddmenu_btn01_pane

0x933f,	// (0x00086710) cmail_ddmenu_btn02_pane_ParamLimits

0x933f,	// (0x00086710) cmail_ddmenu_btn02_pane

0x935d,	// (0x0008672e) cmail_ddmenu_btn03_pane_ParamLimits

0x935d,	// (0x0008672e) cmail_ddmenu_btn03_pane

0x938d,	// (0x0008675e) main_sp_fs_ctrlbar_pane_ParamLimits

0x93a3,	// (0x00086774) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x94d9,	// (0x000868aa) list_cmail_body_pane_ParamLimits

0xe8e4,	// (0x0008bcb5) bg_button_pane_cp12

0xe8ed,	// (0x0008bcbe) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ed,	// (0x0008bcbe) list_single_cmail_header_detail_pane_g3

0x1a29,	// (0x0007edfa) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a29,	// (0x0007edfa) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0008d170) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0008d170) list_single_cmail_header_detail_pane_t

0x1a81,	// (0x0007ee52) phacti_term_pane_t2_ParamLimits

0x1a81,	// (0x0007ee52) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0008d17a) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0008d17a) phacti_term_pane_t

0xeb47,	// (0x0008bf18) aid_size_list_single_double

0x977b,	// (0x00086b4c) popup_ezdial_listscroll_window

0x979d,	// (0x00086b6e) popup_number_entry_window_cp01

0xabc1,	// (0x00087f92) bg_popup_call_pane_cp09

0xeb53,	// (0x0008bf24) ezdial_list_pane

0xeb5b,	// (0x0008bf2c) scroll_pane_cp23

0xcc6e,	// (0x0008a03f) bg_button_pane_cp028_ParamLimits

0xcc6e,	// (0x0008a03f) bg_button_pane_cp028

0x97ab,	// (0x00086b7c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97ab,	// (0x00086b7c) cmail_ddmenu_btn01_pane_g1

0x97bd,	// (0x00086b8e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97bd,	// (0x00086b8e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0008d1f2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0008d1f2) cmail_ddmenu_btn01_pane_g

0xeb63,	// (0x0008bf34) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb63,	// (0x0008bf34) cmail_ddmenu_btn01_pane_t1

0xca57,	// (0x00089e28) bg_button_pane_cp029_ParamLimits

0xca57,	// (0x00089e28) bg_button_pane_cp029

0x97bd,	// (0x00086b8e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97bd,	// (0x00086b8e) cmail_ddmenu_btn02_pane_g1

0x97d5,	// (0x00086ba6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97d5,	// (0x00086ba6) cmail_ddmenu_btn02_pane_t1

0xe1ff,	// (0x0008b5d0) bg_button_pane_cp031_ParamLimits

0xe1ff,	// (0x0008b5d0) bg_button_pane_cp031

0x97bd,	// (0x00086b8e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97bd,	// (0x00086b8e) cmail_ddmenu_btn03_pane_g1

0x97d5,	// (0x00086ba6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97d5,	// (0x00086ba6) cmail_ddmenu_btn03_pane_t1

0x6f15,	// (0x000842e6) cell_dialer2_keypad_pane_t1_ParamLimits

0x6f2f,	// (0x00084300) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6f2f,	// (0x00084300) cell_dialer2_keypad_pane_t1_copy1

0x8b25,	// (0x00085ef6) ncimui_group_button_pane

0xbdbe,	// (0x0008918f) main_sp_fs_calendar_pane_ParamLimits

0x94f3,	// (0x000868c4) list_single_cmail_header_caption_pane_ParamLimits

0x1a96,	// (0x0007ee67) aid_recal_txt_sm_pane

0xa273,	// (0x00087644) mian_recal_day_pane

0x1ad0,	// (0x0007eea1) popup_sp_fs_cale_preview_window_ParamLimits

0xeb78,	// (0x0008bf49) list_recal_day_pane

0x1c81,	// (0x0007f052) list_single_recal_day_pane_ParamLimits

0x1c81,	// (0x0007f052) list_single_recal_day_pane

0xeb9f,	// (0x0008bf70) list_single_recal_day_pane_g1_ParamLimits

0xeb9f,	// (0x0008bf70) list_single_recal_day_pane_g1

0x1c93,	// (0x0007f064) list_single_recal_day_pane_g2_ParamLimits

0x1c93,	// (0x0007f064) list_single_recal_day_pane_g2

0x1c9f,	// (0x0007f070) list_single_recal_day_pane_g3_ParamLimits

0x1c9f,	// (0x0007f070) list_single_recal_day_pane_g3

0x1cab,	// (0x0007f07c) list_single_recal_day_pane_g4_ParamLimits

0x1cab,	// (0x0007f07c) list_single_recal_day_pane_g4

0x1cb9,	// (0x0007f08a) list_single_recal_day_pane_g5_ParamLimits

0x1cb9,	// (0x0007f08a) list_single_recal_day_pane_g5

0x1ccf,	// (0x0007f0a0) list_single_recal_day_pane_g6_ParamLimits

0x1ccf,	// (0x0007f0a0) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0008d201) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0008d201) list_single_recal_day_pane_g

0x1ce3,	// (0x0007f0b4) list_single_recal_day_pane_t1

0x1cf5,	// (0x0007f0c6) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0008d20c) list_single_recal_day_pane_t

0x97f9,	// (0x00086bca) ncimui_query_button_pane_ParamLimits

0x97f9,	// (0x00086bca) ncimui_query_button_pane

0x9809,	// (0x00086bda) ncimui_query_button_pane_t1_ParamLimits

0x9809,	// (0x00086bda) ncimui_query_button_pane_t1

0xebab,	// (0x0008bf7c) ncimui_query_button_pane_t2_ParamLimits

0xebab,	// (0x0008bf7c) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0008d211) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0008d211) ncimui_query_button_pane_t

0x981c,	// (0x00086bed) query_button_pane_ParamLimits

0x981c,	// (0x00086bed) query_button_pane

0xa273,	// (0x00087644) bg_button_pane_cp0028

0xebbe,	// (0x0008bf8f) query_button_pane_t1

0x51ef,	// (0x000825c0) main_tport_pane_ParamLimits

0x93d6,	// (0x000867a7) bg_popup_window_pane_cp01_ParamLimits

0x93d6,	// (0x000867a7) bg_popup_window_pane_cp01

0x93e4,	// (0x000867b5) heading_pane_cp08_ParamLimits

0x93e4,	// (0x000867b5) heading_pane_cp08

0x93f2,	// (0x000867c3) heading_pane_cp07_ParamLimits

0x93f2,	// (0x000867c3) heading_pane_cp07

0x9462,	// (0x00086833) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0008d15d) cell_tport_appsw_pane_g

0x0dd2,	// (0x0007e1a3) input_candi_list_open_g1

0xb008,	// (0x000883d9) list_cale_time_pane_g6_ParamLimits

0xb008,	// (0x000883d9) list_cale_time_pane_g6

0x5c99,	// (0x0008306a) aid_size_touch_calib_1_ParamLimits

0x5c99,	// (0x0008306a) aid_size_touch_calib_1

0x5ca5,	// (0x00083076) aid_size_touch_calib_2_ParamLimits

0x5ca5,	// (0x00083076) aid_size_touch_calib_2

0x5cb3,	// (0x00083084) aid_size_touch_calib_3_ParamLimits

0x5cb3,	// (0x00083084) aid_size_touch_calib_3

0x5cc3,	// (0x00083094) aid_size_touch_calib_4_ParamLimits

0x5cc3,	// (0x00083094) aid_size_touch_calib_4

0x5cd1,	// (0x000830a2) main_touch_calib_button_group_pane_ParamLimits

0x5cd1,	// (0x000830a2) main_touch_calib_button_group_pane

0x5cdf,	// (0x000830b0) main_touch_calib_pane_g1_ParamLimits

0x5ceb,	// (0x000830bc) main_touch_calib_pane_g2_ParamLimits

0x5cf7,	// (0x000830c8) main_touch_calib_pane_g3_ParamLimits

0x5d03,	// (0x000830d4) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0008cb1e) main_touch_calib_pane_g_ParamLimits

0x5d0f,	// (0x000830e0) main_touch_calib_pane_t1_ParamLimits

0x5d26,	// (0x000830f7) main_touch_calib_pane_t2_ParamLimits

0x5d3f,	// (0x00083110) main_touch_calib_pane_t3_ParamLimits

0x5d55,	// (0x00083126) main_touch_calib_pane_t4_ParamLimits

0x5d6b,	// (0x0008313c) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0008cb27) main_touch_calib_pane_t_ParamLimits

0xd1b6,	// (0x0008a587) list_single_fp_cale_pane_g3_ParamLimits

0xd1b6,	// (0x0008a587) list_single_fp_cale_pane_g3

0xbdbe,	// (0x0008918f) bg_button_pane_cp012_ParamLimits

0xbdbe,	// (0x0008918f) bg_vkb2_func_pane_cp03_ParamLimits

0x7dca,	// (0x0008519b) cell_vitu2_function_top_pane_g1_ParamLimits

0xbdbe,	// (0x0008918f) bg_vkb2_func_pane_cp04_ParamLimits

0x8aab,	// (0x00085e7c) main_ncimui_button_group_pane_ParamLimits

0x8aab,	// (0x00085e7c) main_ncimui_button_group_pane

0x8b13,	// (0x00085ee4) main_ncimui_pane_t3_ParamLimits

0x8b13,	// (0x00085ee4) main_ncimui_pane_t3

0xe97a,	// (0x0008bd4b) phacti_button_group_pane

0xeb47,	// (0x0008bf18) aid_size_list_single_double_ParamLimits

0x977b,	// (0x00086b4c) popup_ezdial_listscroll_window_ParamLimits

0x979d,	// (0x00086b6e) popup_number_entry_window_cp01_ParamLimits

0x9829,	// (0x00086bfa) phacti_button_pane_ParamLimits

0x9829,	// (0x00086bfa) phacti_button_pane

0xa273,	// (0x00087644) bg_button_pane_cp14

0xebcc,	// (0x0008bf9d) phacti_button_pane_t1

0x983a,	// (0x00086c0b) main_touch_calib_button_pane_ParamLimits

0x983a,	// (0x00086c0b) main_touch_calib_button_pane

0xaa19,	// (0x00087dea) bg_button_pane_cp18_ParamLimits

0xaa19,	// (0x00087dea) bg_button_pane_cp18

0xebda,	// (0x0008bfab) main_touch_calib_button_pane_t1_ParamLimits

0xebda,	// (0x0008bfab) main_touch_calib_button_pane_t1

0xebf0,	// (0x0008bfc1) main_touch_calib_button_pane_t2_ParamLimits

0xebf0,	// (0x0008bfc1) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0008d216) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0008d216) main_touch_calib_button_pane_t

0xa273,	// (0x00087644) cell_ncimui_button_pane

0xa273,	// (0x00087644) bg_button_pane_cp032

0xec0e,	// (0x0008bfdf) cell_ncimui_button_pane_t1

0x6f8b,	// (0x0008435c) image3_infobar_pane_ParamLimits

0x6f8b,	// (0x0008435c) image3_infobar_pane

0x8ee4,	// (0x000862b5) fs_bigclock_status_pane_ParamLimits

0x8ee4,	// (0x000862b5) fs_bigclock_status_pane

0x8ef1,	// (0x000862c2) main_fs_bigclock_clock_pane_ParamLimits

0x8ef1,	// (0x000862c2) main_fs_bigclock_clock_pane

0x8f0d,	// (0x000862de) main_fs_bigclock_indi_pane_ParamLimits

0x8f0d,	// (0x000862de) main_fs_bigclock_indi_pane

0x8f3b,	// (0x0008630c) main_fs_bigclock_swipe_pane_ParamLimits

0x8f3b,	// (0x0008630c) main_fs_bigclock_swipe_pane

0xa273,	// (0x00087644) main_fs_clock_dumped_data

0x8f75,	// (0x00086346) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8f75,	// (0x00086346) list_single_fs_bigclock_indicator_pane_g1

0x8f94,	// (0x00086365) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8f94,	// (0x00086365) list_single_fs_bigclock_indicator_pane_g2

0x8fae,	// (0x0008637f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8fae,	// (0x0008637f) list_single_fs_bigclock_indicator_pane_g3

0x8fca,	// (0x0008639b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8fca,	// (0x0008639b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0008d03e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0008d03e) list_single_fs_bigclock_indicator_pane_g

0x8ff9,	// (0x000863ca) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8ff9,	// (0x000863ca) list_single_fs_bigclock_indicator_pane_t1

0x9021,	// (0x000863f2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9021,	// (0x000863f2) list_single_fs_bigclock_indicator_pane_t2

0x9049,	// (0x0008641a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9049,	// (0x0008641a) list_single_fs_bigclock_indicator_pane_t3

0x9071,	// (0x00086442) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9071,	// (0x00086442) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0008d049) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0008d049) list_single_fs_bigclock_indicator_pane_t

0xec1c,	// (0x0008bfed) image3_infobar_fav_pane_ParamLimits

0xec1c,	// (0x0008bfed) image3_infobar_fav_pane

0xec2c,	// (0x0008bffd) image3_infobar_loc_pane_ParamLimits

0xec2c,	// (0x0008bffd) image3_infobar_loc_pane

0xec42,	// (0x0008c013) image3_infobar_time_pane_ParamLimits

0xec42,	// (0x0008c013) image3_infobar_time_pane

0xce8f,	// (0x0008a260) image3_infobar_time_pane_g1

0xec52,	// (0x0008c023) image3_infobar_time_pane_t1

0xce8f,	// (0x0008a260) image3_infobar_loc_pane_g1

0xec60,	// (0x0008c031) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0008d21b) image3_infobar_loc_pane_g

0xec68,	// (0x0008c039) image3_infobar_loc_pane_t1

0xce8f,	// (0x0008a260) image3_infobar_fav_pane_g1

0xec76,	// (0x0008c047) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0008d220) image3_infobar_fav_pane_g

0xec7e,	// (0x0008c04f) fs_bigclock_status_battery_pane

0xec87,	// (0x0008c058) fs_bigclock_status_signal_pane

0xec90,	// (0x0008c061) fs_bigclock_status_title_pane

0xec99,	// (0x0008c06a) fs_bigclock_status_signal_pane_g1

0xeca2,	// (0x0008c073) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0008d225) fs_bigclock_status_signal_pane_g

0xecaa,	// (0x0008c07b) fs_bigclock_status_battery_pane_g1

0xecb3,	// (0x0008c084) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0008d22a) fs_bigclock_status_battery_pane_g

0xecbb,	// (0x0008c08c) fs_bigclock_status_title_pane_t1

0x984a,	// (0x00086c1b) main_fs_bigclock_clock_pane_g1

0x984a,	// (0x00086c1b) main_fs_bigclock_clock_pane_g2

0x9859,	// (0x00086c2a) main_fs_bigclock_clock_pane_g3

0x9859,	// (0x00086c2a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0008d22f) main_fs_bigclock_clock_pane_g

0x9869,	// (0x00086c3a) main_fs_bigclock_clock_pane_t1

0x987e,	// (0x00086c4f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0008d238) main_fs_bigclock_clock_pane_t

0xecc9,	// (0x0008c09a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecc9,	// (0x0008c09a) list_single_fs_bigclock_indicator_pane

0xecda,	// (0x0008c0ab) list_single_fs_bigclock_pane_ParamLimits

0xecda,	// (0x0008c0ab) list_single_fs_bigclock_pane

0xed00,	// (0x0008c0d1) main_fs_bigclock_indicator_pane_t1

0xed0f,	// (0x0008c0e0) list_single_fs_bigclock_pane_g1

0xed17,	// (0x0008c0e8) list_single_fs_bigclock_pane_t1

0xce8f,	// (0x0008a260) main_fs_bigclock_swipe_pane_g1

0xed5a,	// (0x0008c12b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0008d249) main_fs_bigclock_swipe_pane_g

0xed62,	// (0x0008c133) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed62,	// (0x0008c133) main_fs_bigclock_swipe_pane_t1

0x4221,	// (0x000815f2) call_type_pane_ParamLimits

0xa273,	// (0x00087644) main_btmg_pane

0x1b41,	// (0x0007ef12) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1b41,	// (0x0007ef12) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0008d1bc) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0008d1bc) list_single_cale_mrui_row_pane_g

0x1c6f,	// (0x0007f040) list_recal_vselct_arw_lo_pane

0xeb97,	// (0x0008bf68) list_recal_vselct_arw_up_pane

0x1c77,	// (0x0007f048) list_recal_vselct_pane

0x98d5,	// (0x00086ca6) btmg_button_pane

0x98e1,	// (0x00086cb2) main_btmg_pane_g1

0xa273,	// (0x00087644) bg_button_pane_cp044

0xed7f,	// (0x0008c150) btmg_button_pane_t1

0xca43,	// (0x00089e14) aid_listscroll_gen

0xbdbe,	// (0x0008918f) main_cntbar_detail_pane

0xe894,	// (0x0008bc65) list_cmail_folder_pane

0xd210,	// (0x0008a5e1) sp_fs_scroll_pane_cp03_ParamLimits

0x1d07,	// (0x0007f0d8) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d07,	// (0x0007f0d8) list_single_fs_dyc_pane_cp01

0xed8d,	// (0x0008c15e) aid_size_cmail_indent

0x1d21,	// (0x0007f0f2) list_single_dyc_row_pane_cp01

0x9909,	// (0x00086cda) cntbar_detail_list_pane_ParamLimits

0x9909,	// (0x00086cda) cntbar_detail_list_pane

0x9949,	// (0x00086d1a) main_cntbar_detail_cont_pane_ParamLimits

0x9949,	// (0x00086d1a) main_cntbar_detail_cont_pane

0x4215,	// (0x000815e6) scroll_pane_cp032_ParamLimits

0x4215,	// (0x000815e6) scroll_pane_cp032

0x9955,	// (0x00086d26) cntbar_detail_list_event_pane_ParamLimits

0x9955,	// (0x00086d26) cntbar_detail_list_event_pane

0x9917,	// (0x00086ce8) cntbar_detail_list_shct_pane

0xae93,	// (0x00088264) aid_list_gen

0xed96,	// (0x0008c167) aid_scroll

0xed9f,	// (0x0008c170) aid_size_touch_scroll_bar

0x1258,	// (0x0007e629) aid_list_double

0x9965,	// (0x00086d36) aid_list_single

0x836d,	// (0x0008573e) aid_list_single_lg

0x1d2a,	// (0x0007f0fb) aid_list_z_g_a_sm

0x996e,	// (0x00086d3f) aid_list_z_g_d

0x1d32,	// (0x0007f103) aid_txt_z_prm

0x1d40,	// (0x0007f111) aid_txt_z_prm_cp01

0x1d4e,	// (0x0007f11f) aid_txt_z_sec

0x9976,	// (0x00086d47) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9976,	// (0x00086d47) main_cntbar_detail_cont_pane_g1

0x9983,	// (0x00086d54) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9983,	// (0x00086d54) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0008d24e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0008d24e) main_cntbar_detail_cont_pane_g

0xeda8,	// (0x0008c179) main_cntbar_detail_cont_pane_t1

0xedb6,	// (0x0008c187) main_cntbar_detail_cont_pane_t2

0xedc4,	// (0x0008c195) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0008d253) main_cntbar_detail_cont_pane_t

0x998f,	// (0x00086d60) cell_cntbar_detail_list_shct_pane_ParamLimits

0x998f,	// (0x00086d60) cell_cntbar_detail_list_shct_pane

0xedd2,	// (0x0008c1a3) cntbar_detail_list_shct_pane_g1

0xeddb,	// (0x0008c1ac) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0008d25a) cntbar_detail_list_shct_pane_g

0x99a3,	// (0x00086d74) cntbar_detail_list_event_pane_g1_ParamLimits

0x99a3,	// (0x00086d74) cntbar_detail_list_event_pane_g1

0x99af,	// (0x00086d80) cntbar_detail_list_event_pane_g2_ParamLimits

0x99af,	// (0x00086d80) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0008d25f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0008d25f) cntbar_detail_list_event_pane_g

0x9a1d,	// (0x00086dee) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a1d,	// (0x00086dee) cntbar_detail_list_event_pane_t1

0x9a32,	// (0x00086e03) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a32,	// (0x00086e03) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0008d26c) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0008d26c) cntbar_detail_list_event_pane_t

0xce8f,	// (0x0008a260) cell_cntbar_detail_list_shct_pane_g1

0xb5ef,	// (0x000889c0) navi_pane_mv_g3

0xbdbe,	// (0x0008918f) main_cntbar_detail_pane_ParamLimits

0xa273,	// (0x00087644) main_notif_wgt_pane

0x6c0d,	// (0x00083fde) aid_tch_main_mp4_pane_g4

0x6e76,	// (0x00084247) popup_slider_window_cp02

0x1c65,	// (0x0007f036) list_recal_day_event_pane

0x98e9,	// (0x00086cba) cntbar_detail_btn_pane_ParamLimits

0x98e9,	// (0x00086cba) cntbar_detail_btn_pane

0x98f9,	// (0x00086cca) cntbar_detail_btn_pane_cp01_ParamLimits

0x98f9,	// (0x00086cca) cntbar_detail_btn_pane_cp01

0x9917,	// (0x00086ce8) cntbar_detail_list_shct_pane_ParamLimits

0x9923,	// (0x00086cf4) cntbar_detail_pane_g1_ParamLimits

0x9923,	// (0x00086cf4) cntbar_detail_pane_g1

0x9933,	// (0x00086d04) cntbar_detail_pane_t1_ParamLimits

0x9933,	// (0x00086d04) cntbar_detail_pane_t1

0x99bb,	// (0x00086d8c) cntbar_detail_list_event_pane_g3_ParamLimits

0x99bb,	// (0x00086d8c) cntbar_detail_list_event_pane_g3

0x99d3,	// (0x00086da4) cntbar_detail_list_event_pane_g4_ParamLimits

0x99d3,	// (0x00086da4) cntbar_detail_list_event_pane_g4

0x99eb,	// (0x00086dbc) cntbar_detail_list_event_pane_g5_ParamLimits

0x99eb,	// (0x00086dbc) cntbar_detail_list_event_pane_g5

0x9a03,	// (0x00086dd4) cntbar_detail_list_event_pane_g6_ParamLimits

0x9a03,	// (0x00086dd4) cntbar_detail_list_event_pane_g6

0x9a47,	// (0x00086e18) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a47,	// (0x00086e18) cntbar_detail_list_event_pane_t3

0x9a59,	// (0x00086e2a) popup_notif_wgt_window_ParamLimits

0x9a59,	// (0x00086e2a) popup_notif_wgt_window

0x9a69,	// (0x00086e3a) popup_submenu_window_cp01_ParamLimits

0x9a69,	// (0x00086e3a) popup_submenu_window_cp01

0xabc1,	// (0x00087f92) bg_popup_window_pane_cp10

0xede4,	// (0x0008c1b5) listscroll_notif_wgt_pane

0xedf6,	// (0x0008c1c7) list_notif_wgt_window

0xedff,	// (0x0008c1d0) scroll_pane_cp033

0x9a79,	// (0x00086e4a) list_notif_wgt_row_pane_ParamLimits

0x9a79,	// (0x00086e4a) list_notif_wgt_row_pane

0xee08,	// (0x0008c1d9) aid_size_list_notif_wgt_del

0xee15,	// (0x0008c1e6) list_notif_wgt_row_pane_g1

0xee21,	// (0x0008c1f2) list_notif_wgt_row_pane_g2

0xee30,	// (0x0008c201) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0008d273) list_notif_wgt_row_pane_g

0xee3d,	// (0x0008c20e) list_notif_wgt_row_pane_t1

0xee53,	// (0x0008c224) list_notif_wgt_row_pane_t2

0xee65,	// (0x0008c236) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0008d27a) list_notif_wgt_row_pane_t

0xda72,	// (0x0008ae43) list_recal_day_event_pane_g1

0xee77,	// (0x0008c248) list_recal_day_event_pane_t1

0xa273,	// (0x00087644) bg_button_pane_cp045

0x9a8d,	// (0x00086e5e) cntbar_detail_btn_pane_t1

0xca57,	// (0x00089e28) main_callh_pane_ParamLimits

0xca57,	// (0x00089e28) main_callh_pane

0xa273,	// (0x00087644) main_coverflow0_pane

0xa273,	// (0x00087644) main_wgtman_pane

0x8f53,	// (0x00086324) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8f53,	// (0x00086324) main_fs_bigclock_unlock_btn_pane

0x945a,	// (0x0008682b) bg_button_pane_cp16

0x946a,	// (0x0008683b) cell_tport_appsw_pane_g3

0x9a9b,	// (0x00086e6c) cf0_flow_pane_ParamLimits

0x9a9b,	// (0x00086e6c) cf0_flow_pane

0xee86,	// (0x0008c257) listscroll_cf0_pane

0xee91,	// (0x0008c262) main_cf0_pane_g1

0x9aaa,	// (0x00086e7b) main_cf0_pane_t1_ParamLimits

0x9aaa,	// (0x00086e7b) main_cf0_pane_t1

0x9abe,	// (0x00086e8f) main_cf0_pane_t2_ParamLimits

0x9abe,	// (0x00086e8f) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0008d286) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0008d286) main_cf0_pane_t

0xeeba,	// (0x0008c28b) scroll_pane_cp11

0x9ad2,	// (0x00086ea3) cf0_flow_pane_g1

0x9ada,	// (0x00086eab) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0008d28b) cf0_flow_pane_g

0x9ae2,	// (0x00086eb3) cf0_flow_pane_t1

0xa273,	// (0x00087644) main_call6_pane

0xa273,	// (0x00087644) main_calllock_pane

0x9af0,	// (0x00086ec1) call6_btn_grp_pane_ParamLimits

0x9af0,	// (0x00086ec1) call6_btn_grp_pane

0x9afd,	// (0x00086ece) call6_pane_g1_ParamLimits

0x9afd,	// (0x00086ece) call6_pane_g1

0x9b0d,	// (0x00086ede) popup_call6_1st_window_ParamLimits

0x9b0d,	// (0x00086ede) popup_call6_1st_window

0x9b1d,	// (0x00086eee) popup_call6_2nd_window_ParamLimits

0x9b1d,	// (0x00086eee) popup_call6_2nd_window

0x9b2d,	// (0x00086efe) cell_call6_btn_pane_ParamLimits

0x9b2d,	// (0x00086efe) cell_call6_btn_pane

0xabc1,	// (0x00087f92) bg_popup_call2_in_pane_cp03

0xeec5,	// (0x0008c296) popup_call6_1st_window_g1

0xeecd,	// (0x0008c29e) popup_call6_1st_window_g2

0xeed5,	// (0x0008c2a6) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0008d290) popup_call6_1st_window_g

0xeedd,	// (0x0008c2ae) popup_call6_1st_window_t1

0xeeec,	// (0x0008c2bd) popup_call6_1st_window_t2

0xeefc,	// (0x0008c2cd) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0008d297) popup_call6_1st_window_t

0xabc1,	// (0x00087f92) bg_popup_call2_in_pane_cp04

0xeec5,	// (0x0008c296) popup_call6_2nd_window_g1

0xeecd,	// (0x0008c29e) popup_call6_2nd_window_g2

0xeed5,	// (0x0008c2a6) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0008d290) popup_call6_2nd_window_g

0xeedd,	// (0x0008c2ae) popup_call6_2nd_window_t1

0xa273,	// (0x00087644) bg_button_pane_cp15

0xef0c,	// (0x0008c2dd) cell_call6_btn_pane_g1

0x9b3e,	// (0x00086f0f) cell_call6_btn_pane_t1

0x9b4d,	// (0x00086f1e) listscroll_wgtman_pane_ParamLimits

0x9b4d,	// (0x00086f1e) listscroll_wgtman_pane

0x9b69,	// (0x00086f3a) wgtman_btn_pane_ParamLimits

0x9b69,	// (0x00086f3a) wgtman_btn_pane

0xb401,	// (0x000887d2) aid_scroll_copy1

0xef15,	// (0x0008c2e6) list_wgtman_pane

0x9b9e,	// (0x00086f6f) wgtman_btn_pane_g1_ParamLimits

0x9b9e,	// (0x00086f6f) wgtman_btn_pane_g1

0x9bc6,	// (0x00086f97) wgtman_btn_pane_t1_ParamLimits

0x9bc6,	// (0x00086f97) wgtman_btn_pane_t1

0xef1f,	// (0x0008c2f0) wgtman_btn_pane_t2_ParamLimits

0xef1f,	// (0x0008c2f0) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0008d29e) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0008d29e) wgtman_btn_pane_t

0x9bfd,	// (0x00086fce) listrow_wgtman_pane_ParamLimits

0x9bfd,	// (0x00086fce) listrow_wgtman_pane

0x9c12,	// (0x00086fe3) listrow_wgtman_pane_g1

0x9c1f,	// (0x00086ff0) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0008d2a3) listrow_wgtman_pane_g

0x1d5c,	// (0x0007f12d) listrow_wgtman_pane_t1

0x1d74,	// (0x0007f145) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0008d2a8) listrow_wgtman_pane_t

0x1d9a,	// (0x0007f16b) wait_bar_pane_cp09

0xef36,	// (0x0008c307) main_calllock_btn_pane

0xef40,	// (0x0008c311) main_calllock_pane_g1

0xa273,	// (0x00087644) bg_button_pane_cp17

0xef0c,	// (0x0008c2dd) main_calllock_btn_pane_g1

0xef4c,	// (0x0008c31d) main_calllock_btn_pane_t1

0xa273,	// (0x00087644) main_dialer3_pane

0xa273,	// (0x00087644) main_fmrd2_pane

0xce8f,	// (0x0008a260) main_fs_bigclock_unlock_btn_pane_g1

0x9c45,	// (0x00087016) main_fs_bigclock_unlock_btn_pane_t1

0x9c53,	// (0x00087024) area_fmrd2_info_pane_ParamLimits

0x9c53,	// (0x00087024) area_fmrd2_info_pane

0x9c5f,	// (0x00087030) area_fmrd2_visual_pane_ParamLimits

0x9c5f,	// (0x00087030) area_fmrd2_visual_pane

0x9c6d,	// (0x0008703e) fmrd2_indi_pane_ParamLimits

0x9c6d,	// (0x0008703e) fmrd2_indi_pane

0x9c7a,	// (0x0008704b) area_fmrd2_visual_pane_g1

0x9c82,	// (0x00087053) area_fmrd2_visual_pane_t1

0x9c92,	// (0x00087063) area_fmrd2_visual_pane_t2

0x9ca2,	// (0x00087073) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0008d2b2) area_fmrd2_visual_pane_t

0x9cb2,	// (0x00087083) area_fmrd2_info_pane_g1

0x9cba,	// (0x0008708b) area_fmrd2_info_pane_t1

0x9cca,	// (0x0008709b) area_fmrd2_info_pane_t2

0x9cda,	// (0x000870ab) area_fmrd2_info_pane_t3

0x9cea,	// (0x000870bb) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0008d2b9) area_fmrd2_info_pane_t

0x9cfa,	// (0x000870cb) fmrd2_indi_pane_t1

0x9d0a,	// (0x000870db) fmrd2_indi_pane_t2

0x9d1a,	// (0x000870eb) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0008d2c2) fmrd2_indi_pane_t

0x8fdb,	// (0x000863ac) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8fdb,	// (0x000863ac) list_single_fs_bigclock_indicator_pane_g5

0x9090,	// (0x00086461) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9090,	// (0x00086461) list_single_fs_bigclock_indicator_pane_t5

0x95b9,	// (0x0008698a) aid_cell_bcale_month_pane_ParamLimits

0x95b9,	// (0x0008698a) aid_cell_bcale_month_pane

0x95d7,	// (0x000869a8) bcale_month_pane_ParamLimits

0x95d7,	// (0x000869a8) bcale_month_pane

0x95f5,	// (0x000869c6) bcale_preview_pane_ParamLimits

0x95f5,	// (0x000869c6) bcale_preview_pane

0xed17,	// (0x0008c0e8) list_single_fs_bigclock_pane_t1_ParamLimits

0xed36,	// (0x0008c107) list_single_fs_bigclock_pane_t2_ParamLimits

0xed36,	// (0x0008c107) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0008d244) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0008d244) list_single_fs_bigclock_pane_t

0x9c3d,	// (0x0008700e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0008d2ad) main_fs_bigclock_unlock_btn_pane_g

0x9d2a,	// (0x000870fb) aid_dia3_key_size_ParamLimits

0x9d2a,	// (0x000870fb) aid_dia3_key_size

0x9d36,	// (0x00087107) aid_dia3_listrow_size_ParamLimits

0x9d36,	// (0x00087107) aid_dia3_listrow_size

0x9d46,	// (0x00087117) dia3_keypad_fun_pane_ParamLimits

0x9d46,	// (0x00087117) dia3_keypad_fun_pane

0x9d56,	// (0x00087127) dia3_keypad_num_pane_ParamLimits

0x9d56,	// (0x00087127) dia3_keypad_num_pane

0x9d66,	// (0x00087137) dia3_listscroll_pane_ParamLimits

0x9d66,	// (0x00087137) dia3_listscroll_pane

0x9d74,	// (0x00087145) dia3_numentry_pane_ParamLimits

0x9d74,	// (0x00087145) dia3_numentry_pane

0xef5b,	// (0x0008c32c) dia3_list_pane

0x9d82,	// (0x00087153) scroll_pane_cp12

0xa273,	// (0x00087644) bg_dia3_numentry_pane

0x9d8d,	// (0x0008715e) dia3_numentry_pane_t1

0x9d9c,	// (0x0008716d) cell_dia3_key_num_pane

0x9da4,	// (0x00087175) cell_dia3_key0_fun_pane_ParamLimits

0x9da4,	// (0x00087175) cell_dia3_key0_fun_pane

0x9db1,	// (0x00087182) cell_dia3_key1_fun_pane_ParamLimits

0x9db1,	// (0x00087182) cell_dia3_key1_fun_pane

0x9dbe,	// (0x0008718f) dia3_listrow_pane

0xe331,	// (0x0008b702) bg_dia3_numentry_pane_g1

0xa273,	// (0x00087644) bg_button_pane_cp21

0x9dcb,	// (0x0008719c) cell_dia3_key_num_pane_t1

0x9dd9,	// (0x000871aa) cell_dia3_key_num_pane_t2

0x9de8,	// (0x000871b9) cell_dia3_key_num_pane_t3

0x9df7,	// (0x000871c8) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0008d2c9) cell_dia3_key_num_pane_t

0xa273,	// (0x00087644) bg_button_pane_cp19

0x9e06,	// (0x000871d7) cell_dia3_key0_fun_pane_g1

0xa273,	// (0x00087644) bg_button_pane_cp20

0x9e0e,	// (0x000871df) cell_dia3_key1_fun_pane_g1

0x9e16,	// (0x000871e7) area_left_week_number_pane

0x9e29,	// (0x000871fa) area_top_day_name_pane

0x9e37,	// (0x00087208) frame_month_view_pane

0xef66,	// (0x0008c337) grid_month_view_pane

0x9e4c,	// (0x0008721d) cell_top_day_name_pane_ParamLimits

0x9e4c,	// (0x0008721d) cell_top_day_name_pane

0x9e68,	// (0x00087239) cell_area_left_week_number_pane_ParamLimits

0x9e68,	// (0x00087239) cell_area_left_week_number_pane

0x9e89,	// (0x0008725a) cell_month_view_pane_ParamLimits

0x9e89,	// (0x0008725a) cell_month_view_pane

0xef74,	// (0x0008c345) frm_month_g1

0x9eb5,	// (0x00087286) frm_month_g2

0x9ec6,	// (0x00087297) frm_month_g3

0x9ed7,	// (0x000872a8) frm_month_g4

0x9ee8,	// (0x000872b9) frm_month_g5

0x9ef9,	// (0x000872ca) frm_month_g6

0x9f0c,	// (0x000872dd) frm_month_g7

0xef81,	// (0x0008c352) frm_month_g8

0x9f1f,	// (0x000872f0) frm_month_g9

0x9f2c,	// (0x000872fd) frm_month_g10

0x9f39,	// (0x0008730a) frm_month_g11

0x9f46,	// (0x00087317) frm_month_g12

0x9f53,	// (0x00087324) frm_month_g13

0x9f62,	// (0x00087333) frm_month_g14

0x9f71,	// (0x00087342) frm_month_g15

0x9f80,	// (0x00087351) frm_month_g16

0x000f,

0xff01,	// (0x0008d2d2) frm_month_g

0xef8e,	// (0x0008c35f) cell_top_day_name_pane_t1

0x9f8f,	// (0x00087360) cell_area_left_week_number_pane_g1

0x9f9e,	// (0x0008736f) cell_area_left_week_number_pane_t1

0xd0b6,	// (0x0008a487) cell_month_view_pane_g1

0x9fb4,	// (0x00087385) cell_month_view_pane_t1

0xa273,	// (0x00087644) main_fps_pane

0xe782,	// (0x0008bb53) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe782,	// (0x0008bb53) cmail_ddmenu_btn02_pane_cp1

0xe79e,	// (0x0008bb6f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe79e,	// (0x0008bb6f) cmail_ddmenu_btn02_pane_cp2

0x97c9,	// (0x00086b9a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97c9,	// (0x00086b9a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0008d1f7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0008d1f7) cmail_ddmenu_btn02_pane_g

0x97e7,	// (0x00086bb8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97e7,	// (0x00086bb8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0008d1fc) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0008d1fc) cmail_ddmenu_btn02_pane_t

0x9fca,	// (0x0008739b) fps_text_pane_ParamLimits

0x9fca,	// (0x0008739b) fps_text_pane

0x9fd7,	// (0x000873a8) main_fps_pane_g1_ParamLimits

0x9fd7,	// (0x000873a8) main_fps_pane_g1

0x9fe3,	// (0x000873b4) wait_bar_pane_cp010_ParamLimits

0x9fe3,	// (0x000873b4) wait_bar_pane_cp010

0x9fef,	// (0x000873c0) fps_text_pane_t1_ParamLimits

0x9fef,	// (0x000873c0) fps_text_pane_t1

0x7329,	// (0x000846fa) cam4_image_uncrop_pane_g1

0x7332,	// (0x00084703) cam4_image_uncrop_pane_g2

0x733b,	// (0x0008470c) cam4_image_uncrop_pane_g3

0x7344,	// (0x00084715) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0008ccbf) cam4_image_uncrop_pane_g

0x9dbe,	// (0x0008718f) dia3_listrow_pane_ParamLimits

0xa273,	// (0x00087644) main_phob2_pane

0x943c,	// (0x0008680d) cell_tport_appsw_pane_cp02_ParamLimits

0x943c,	// (0x0008680d) cell_tport_appsw_pane_cp02

0x944b,	// (0x0008681c) cell_tport_appsw_pane_cp03_ParamLimits

0x944b,	// (0x0008681c) cell_tport_appsw_pane_cp03

0xa273,	// (0x00087644) phob2_contact_card_pane

0xa273,	// (0x00087644) phob2_listscroll_pane

0xefa1,	// (0x0008c372) phob2_list_pane

0xefa9,	// (0x0008c37a) scroll_pane_cp034

0xa008,	// (0x000873d9) phob2_cc_data_pane_ParamLimits

0xa008,	// (0x000873d9) phob2_cc_data_pane

0xa01f,	// (0x000873f0) phob2_cc_listscroll_pane_ParamLimits

0xa01f,	// (0x000873f0) phob2_cc_listscroll_pane

0xa03b,	// (0x0008740c) list_double_large_graphic_phob2_pane_ParamLimits

0xa03b,	// (0x0008740c) list_double_large_graphic_phob2_pane

0xa053,	// (0x00087424) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa053,	// (0x00087424) list_double_large_graphic_phob2_pane_g1

0x1dac,	// (0x0007f17d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1dac,	// (0x0007f17d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0008d2f3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0008d2f3) list_double_large_graphic_phob2_pane_g

0x1db8,	// (0x0007f189) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1db8,	// (0x0007f189) list_double_large_graphic_phob2_pane_t1

0x1dcd,	// (0x0007f19e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1dcd,	// (0x0007f19e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0008d2f8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0008d2f8) list_double_large_graphic_phob2_pane_t

0xa273,	// (0x00087644) list_highlight_pane_cp024

0xa069,	// (0x0008743a) phob2_cc_button_pane

0xa071,	// (0x00087442) phob2_cc_data_pane_g1_ParamLimits

0xa071,	// (0x00087442) phob2_cc_data_pane_g1

0xa085,	// (0x00087456) phob2_cc_data_pane_g2_ParamLimits

0xa085,	// (0x00087456) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0008d2fd) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0008d2fd) phob2_cc_data_pane_g

0xa094,	// (0x00087465) phob2_cc_data_pane_t1_ParamLimits

0xa094,	// (0x00087465) phob2_cc_data_pane_t1

0xa0ad,	// (0x0008747e) phob2_cc_data_pane_t2_ParamLimits

0xa0ad,	// (0x0008747e) phob2_cc_data_pane_t2

0xa0c6,	// (0x00087497) phob2_cc_data_pane_t3_ParamLimits

0xa0c6,	// (0x00087497) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0008d302) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0008d302) phob2_cc_data_pane_t

0xefb1,	// (0x0008c382) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x0008c382) phob2_cc_list_pane

0xdba9,	// (0x0008af7a) scroll_pane_cp035_ParamLimits

0xdba9,	// (0x0008af7a) scroll_pane_cp035

0xbdbe,	// (0x0008918f) bg_button_pane_cp033

0xefbd,	// (0x0008c38e) phob2_cc_button_pane_g1

0xefc9,	// (0x0008c39a) phob2_cc_button_pane_t1

0xefde,	// (0x0008c3af) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0008d309) phob2_cc_button_pane_t

0xa0df,	// (0x000874b0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa0df,	// (0x000874b0) list_double_large_graphic_phob2_cc_pane

0xa12e,	// (0x000874ff) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa12e,	// (0x000874ff) list_double_large_graphic_phob2_cc_pane_g1

0x1ddf,	// (0x0007f1b0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1ddf,	// (0x0007f1b0) list_double_large_graphic_phob2_cc_pane_g2

0x1dee,	// (0x0007f1bf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1dee,	// (0x0007f1bf) list_double_large_graphic_phob2_cc_pane_g3

0x1dfd,	// (0x0007f1ce) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1dfd,	// (0x0007f1ce) list_double_large_graphic_phob2_cc_pane_g4

0x1e0e,	// (0x0007f1df) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1e0e,	// (0x0007f1df) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0008d30e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0008d30e) list_double_large_graphic_phob2_cc_pane_g

0x1e1d,	// (0x0007f1ee) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1e1d,	// (0x0007f1ee) list_double_large_graphic_phob2_cc_pane_t1

0x1e46,	// (0x0007f217) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1e46,	// (0x0007f217) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0008d319) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0008d319) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x0008c3c1) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x0008c3c1) list_highlight_pane_cp025

0xbdbe,	// (0x0008918f) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x0008c38e) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x0008c39a) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x0008c3af) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0008d309) phob2_cc_button_pane_t_ParamLimits

0x2146,	// (0x0007f517) popup_wgtman_window

0xd95e,	// (0x0008ad2f) scroll_pane_cp038

0x9b86,	// (0x00086f57) wgtman_btn_pane_cp_01_ParamLimits

0x9b86,	// (0x00086f57) wgtman_btn_pane_cp_01

0xeffe,	// (0x0008c3cf) wgtman_content_pane

0xf007,	// (0x0008c3d8) wgtman_heading_pane

0xa273,	// (0x00087644) bg_heading_pane_cp02

0xf010,	// (0x0008c3e1) wgtman_heading_pane_g1

0xf018,	// (0x0008c3e9) wgtman_heading_pane_t1

0xf026,	// (0x0008c3f7) scroll_pane_cp036

0xf02e,	// (0x0008c3ff) wgtman_list_pane

0xe83a,	// (0x0008bc0b) wgtman_list_pane_t1_ParamLimits

0xe83a,	// (0x0008bc0b) wgtman_list_pane_t1

0x7286,	// (0x00084657) cam4_grid_pane

0x103d,	// (0x0007e40e) bg_button_pane_cp015_ParamLimits

0x7fa1,	// (0x00085372) bg_button_pane_cp016_ParamLimits

0x7fb4,	// (0x00085385) bg_button_pane_cp017_ParamLimits

0x1081,	// (0x0007e452) popup_vitu2_query_window_g3_ParamLimits

0x1081,	// (0x0007e452) popup_vitu2_query_window_g3

0x10fa,	// (0x0007e4cb) popup_vitu2_query_window_t6_ParamLimits

0x10fa,	// (0x0007e4cb) popup_vitu2_query_window_t6

0x1125,	// (0x0007e4f6) popup_vitu2_query_window_t7_ParamLimits

0x1125,	// (0x0007e4f6) popup_vitu2_query_window_t7

0xe518,	// (0x0008b8e9) cam4_grid_pane_g1

0xe521,	// (0x0008b8f2) cam4_grid_pane_g2

0xf036,	// (0x0008c407) cam4_grid_pane_g3

0xf03f,	// (0x0008c410) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0008d31e) cam4_grid_pane_g

0x305a,	// (0x0008042b) aid_placing_vt_slider_lsc_ParamLimits

0x338d,	// (0x0008075e) vidtel_button_pane_ParamLimits

0x338d,	// (0x0008075e) vidtel_button_pane

0xa273,	// (0x00087644) bg_button_pane_cp034

0xf04a,	// (0x0008c41b) vidtel_button_pane_g1

0xf052,	// (0x0008c423) vidtel_button_pane_t1

0xda62,	// (0x0008ae33) aid_size_vtel_slider_touch

0xdba9,	// (0x0008af7a) scroll_pane_cp039

0x8c82,	// (0x00086053) ncim_query_button_pane_cp01_ParamLimits

0x8ca1,	// (0x00086072) ncimui_query_pane_g1_ParamLimits

0xbdbe,	// (0x0008918f) input_focus_pane_cp012_ParamLimits

0xe36f,	// (0x0008b740) ncim_query_entry_pane_t1_ParamLimits

0xdba9,	// (0x0008af7a) scroll_pane_cp039_ParamLimits

0xb4d8,	// (0x000888a9) navi_pane_bcale_mc_g1

0xb4e0,	// (0x000888b1) navi_pane_bcale_mc_t1

0xe7e9,	// (0x0008bbba) main_sp_fs_email_pane_g1

0xe7f5,	// (0x0008bbc6) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0008d0af) main_sp_fs_email_pane_g

0xea9f,	// (0x0008be70) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea9f,	// (0x0008be70) list_single_cale_mrui_row_pane_g3

0x1cc5,	// (0x0007f096) list_single_recal_day_pane_g5_event_pane

0x1cdb,	// (0x0007f0ac) list_single_recal_day_pane_g7

0xf068,	// (0x0008c439) list_recal_day_event_pane_cp01

0xf071,	// (0x0008c442) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0008c44a) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0008c452) list_recal_vselct_pane_cp01

0xda72,	// (0x0008ae43) list_recal_day_event_pane_cp01_g1

0x1e6f,	// (0x0007f240) list_recal_day_event_pane_cp01_t1

0x1ce3,	// (0x0007f0b4) list_single_recal_day_pane_t1_ParamLimits

0x1cf5,	// (0x0007f0c6) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0008d20c) list_single_recal_day_pane_t_ParamLimits

0xa920,	// (0x00087cf1) bg_notes_pane_ParamLimits

0xa9c3,	// (0x00087d94) list_notes_pane_ParamLimits

0x2460,	// (0x0007f831) scroll_pane_cp06_ParamLimits

0xaa19,	// (0x00087dea) main_notes_pane_ParamLimits

0xa273,	// (0x00087644) main_welc_pane

0xa13f,	// (0x00087510) main_welc_body_pane_ParamLimits

0xa13f,	// (0x00087510) main_welc_body_pane

0xa15a,	// (0x0008752b) main_welc_opti_pane_ParamLimits

0xa15a,	// (0x0008752b) main_welc_opti_pane

0xa18f,	// (0x00087560) main_welc_pane_t1_ParamLimits

0xa18f,	// (0x00087560) main_welc_pane_t1

0xa1ad,	// (0x0008757e) main_welc_body_row_pane_ParamLimits

0xa1ad,	// (0x0008757e) main_welc_body_row_pane

0xe1ff,	// (0x0008b5d0) main_welc_opti_row_pane_ParamLimits

0xe1ff,	// (0x0008b5d0) main_welc_opti_row_pane

0xf08b,	// (0x0008c45c) main_welc_opti_row_pane_g1

0xa1c7,	// (0x00087598) main_welc_opti_row_pane_t1

0xf093,	// (0x0008c464) main_welc_body_row_pane_t1

0xedee,	// (0x0008c1bf) popup_notif_wgt_heading_pane

0xee08,	// (0x0008c1d9) aid_size_list_notif_wgt_del_ParamLimits

0xee15,	// (0x0008c1e6) list_notif_wgt_row_pane_g1_ParamLimits

0xee21,	// (0x0008c1f2) list_notif_wgt_row_pane_g2_ParamLimits

0xee30,	// (0x0008c201) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0008d273) list_notif_wgt_row_pane_g_ParamLimits

0xee3d,	// (0x0008c20e) list_notif_wgt_row_pane_t1_ParamLimits

0xee53,	// (0x0008c224) list_notif_wgt_row_pane_t2_ParamLimits

0xee65,	// (0x0008c236) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0008d27a) list_notif_wgt_row_pane_t_ParamLimits

0x9c12,	// (0x00086fe3) listrow_wgtman_pane_g1_ParamLimits

0x9c1f,	// (0x00086ff0) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0008d2a3) listrow_wgtman_pane_g_ParamLimits

0x1d5c,	// (0x0007f12d) listrow_wgtman_pane_t1_ParamLimits

0x1d74,	// (0x0007f145) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0008d2a8) listrow_wgtman_pane_t_ParamLimits

0x1d9a,	// (0x0007f16b) wait_bar_pane_cp09_ParamLimits

0xa273,	// (0x00087644) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0008c473) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0008c47b) popup_notif_wgt_heading_pane_t1

0xa273,	// (0x00087644) main_vids_pane

0xa273,	// (0x00087644) vids_listscroll_pane

0xa1d6,	// (0x000875a7) scroll_pane_cp040

0xa273,	// (0x00087644) vids_list_pane

0xa1e1,	// (0x000875b2) vids_list_double_pane_ParamLimits

0xa1e1,	// (0x000875b2) vids_list_double_pane

0xa1f5,	// (0x000875c6) vids_list_double_pane_g1

0xa1fe,	// (0x000875cf) vids_list_double_pane_t1

0xa20e,	// (0x000875df) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0008d32c) vids_list_double_pane_t

0xbdbe,	// (0x0008918f) main_ncimui_pane_ParamLimits

0x8ac3,	// (0x00085e94) main_ncimui_pane_g1_ParamLimits

0x8ad1,	// (0x00085ea2) main_ncimui_pane_g2_ParamLimits

0x8ad1,	// (0x00085ea2) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0008cfb4) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0008cfb4) main_ncimui_pane_g

0xa175,	// (0x00087546) main_welc_pane_g1_ParamLimits

0xa175,	// (0x00087546) main_welc_pane_g1

0xa181,	// (0x00087552) main_welc_pane_g2_ParamLimits

0xa181,	// (0x00087552) main_welc_pane_g2

0x0001,

0xff56,	// (0x0008d327) main_welc_pane_g_ParamLimits

0xff56,	// (0x0008d327) main_welc_pane_g

0xa920,	// (0x00087cf1) listscroll_mce_pane_ParamLimits

0xb62f,	// (0x00088a00) wait_bar_pane_cp10

0xca4b,	// (0x00089e1c) main_cale_day_pane_ParamLimits

0xca4b,	// (0x00089e1c) main_cale_week_pane_ParamLimits

0xa920,	// (0x00087cf1) main_messa_pane_ParamLimits

0x65ae,	// (0x0008397f) main_clock2_btn_pane_ParamLimits

0x65ae,	// (0x0008397f) main_clock2_btn_pane

0xd252,	// (0x0008a623) main_clock2_btn_pane_cp01_ParamLimits

0xd252,	// (0x0008a623) main_clock2_btn_pane_cp01

0xea70,	// (0x0008be41) list_cale_mrui_pane_ParamLimits

0xeeb2,	// (0x0008c283) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0008d281) main_cf0_pane_g

0x9e16,	// (0x000871e7) area_left_week_number_pane_ParamLimits

0x9e29,	// (0x000871fa) area_top_day_name_pane_ParamLimits

0x9e37,	// (0x00087208) frame_month_view_pane_ParamLimits

0xef66,	// (0x0008c337) grid_month_view_pane_ParamLimits

0xef74,	// (0x0008c345) frm_month_g1_ParamLimits

0x9eb5,	// (0x00087286) frm_month_g2_ParamLimits

0x9ec6,	// (0x00087297) frm_month_g3_ParamLimits

0x9ed7,	// (0x000872a8) frm_month_g4_ParamLimits

0x9ee8,	// (0x000872b9) frm_month_g5_ParamLimits

0x9ef9,	// (0x000872ca) frm_month_g6_ParamLimits

0x9f0c,	// (0x000872dd) frm_month_g7_ParamLimits

0xef81,	// (0x0008c352) frm_month_g8_ParamLimits

0x9f1f,	// (0x000872f0) frm_month_g9_ParamLimits

0x9f2c,	// (0x000872fd) frm_month_g10_ParamLimits

0x9f39,	// (0x0008730a) frm_month_g11_ParamLimits

0x9f46,	// (0x00087317) frm_month_g12_ParamLimits

0x9f53,	// (0x00087324) frm_month_g13_ParamLimits

0x9f62,	// (0x00087333) frm_month_g14_ParamLimits

0x9f71,	// (0x00087342) frm_month_g15_ParamLimits

0x9f80,	// (0x00087351) frm_month_g16_ParamLimits

0xff01,	// (0x0008d2d2) frm_month_g_ParamLimits

0xef8e,	// (0x0008c35f) cell_top_day_name_pane_t1_ParamLimits

0x9f8f,	// (0x00087360) cell_area_left_week_number_pane_g1_ParamLimits

0x9f9e,	// (0x0008736f) cell_area_left_week_number_pane_t1_ParamLimits

0xd0b6,	// (0x0008a487) cell_month_view_pane_g1_ParamLimits

0x9fb4,	// (0x00087385) cell_month_view_pane_t1_ParamLimits

0xa918,	// (0x00087ce9) main_clock2_btn_pane_g1

0xf0b8,	// (0x0008c489) main_clock2_btn_pane_t1

0xbdbe,	// (0x0008918f) listscroll_cmail_pane_ParamLimits

0xe7e9,	// (0x0008bbba) main_sp_fs_email_pane_g1_ParamLimits

0xe7f5,	// (0x0008bbc6) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0008d0af) main_sp_fs_email_pane_g_ParamLimits

0xeb78,	// (0x0008bf49) list_recal_day_pane_ParamLimits

0xeb89,	// (0x0008bf5a) mian_recal_day_pane_t1

0x1693,	// (0x0007ea64) list_single_dyc_row_text_pane_t4_ParamLimits

0x1693,	// (0x0007ea64) list_single_dyc_row_text_pane_t4

0x16d8,	// (0x0007eaa9) list_single_dyc_row_text_pane_t5_ParamLimits

0x16d8,	// (0x0007eaa9) list_single_dyc_row_text_pane_t5

0x174e,	// (0x0007eb1f) list_single_dyc_row_text_pane_t6_ParamLimits

0x174e,	// (0x0007eb1f) list_single_dyc_row_text_pane_t6

0x4152,	// (0x00081523) aid_mgn_list_cale_time_pane

0xbdbe,	// (0x0008918f) main_gallery2_pane_ParamLimits

0xd266,	// (0x0008a637) main_clock2_pane_cp01_t1

0xd274,	// (0x0008a645) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0008cb91) main_clock2_pane_cp01_t

0x295c,	// (0x0007fd2d) cale_week_scroll_pane_g16_ParamLimits

0x295c,	// (0x0007fd2d) cale_week_scroll_pane_g16

0xabc1,	// (0x00087f92) vorec_slider_pane

0xf052,	// (0x0008c423) vidtel_button_pane_t1_ParamLimits

0x984a,	// (0x00086c1b) main_fs_bigclock_clock_pane_g1_ParamLimits

0x984a,	// (0x00086c1b) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9859,	// (0x00086c2a) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9859,	// (0x00086c2a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x0008d22f) main_fs_bigclock_clock_pane_g_ParamLimits

0x9869,	// (0x00086c3a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x987e,	// (0x00086c4f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x0008d238) main_fs_bigclock_clock_pane_t_ParamLimits

0x5e04,	// (0x000831d5) main_mup3_lyrics_pane_ParamLimits

0x5e04,	// (0x000831d5) main_mup3_lyrics_pane

0xa244,	// (0x00087615) main_mup3_lyrics_pane_t1_ParamLimits

0xa244,	// (0x00087615) main_mup3_lyrics_pane_t1

0x6bf7,	// (0x00083fc8) aid_main_mp4_pane_t1_area

0x6c01,	// (0x00083fd2) aid_main_mp4_pane_t2_area

0x6d0e,	// (0x000840df) main_mp4_pane_g7_ParamLimits

0x6d0e,	// (0x000840df) main_mp4_pane_g7

0x6d1a,	// (0x000840eb) main_mp4_pane_g8_ParamLimits

0x6d1a,	// (0x000840eb) main_mp4_pane_g8

0x712a,	// (0x000844fb) aid_call6_pane_g1_size

0xa10d,	// (0x000874de) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa10d,	// (0x000874de) list_double_large_graphic_phob2_other_pane

0xa26b,	// (0x0008763c) list_double_large_graphic_phob2_other_pane_g1

0xa273,	// (0x00087644) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
