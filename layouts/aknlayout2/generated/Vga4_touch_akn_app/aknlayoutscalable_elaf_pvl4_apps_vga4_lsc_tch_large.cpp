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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007cf2f };

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
0x09d6,	// (0x0007d905) Screen

0x09e2,	// (0x0007d911) application_window

0x0a1e,	// (0x0007d94d) area_bottom_pane_ParamLimits

0x0a1e,	// (0x0007d94d) area_bottom_pane

0x0a57,	// (0x0007d986) area_top_pane_ParamLimits

0x0a57,	// (0x0007d986) area_top_pane

0xa6ff,	// (0x0008762e) call_video_uplink_pane_ParamLimits

0xa6ff,	// (0x0008762e) call_video_uplink_pane

0x0ae5,	// (0x0007da14) main_pane_ParamLimits

0x0ae5,	// (0x0007da14) main_pane

0xc9cf,	// (0x000898fe) context_pane

0x3b0b,	// (0x00080a3a) navi_pane

0x3b42,	// (0x00080a71) popup_cale_events_window_ParamLimits

0x3b42,	// (0x00080a71) popup_cale_events_window

0xc9e2,	// (0x00089911) popup_mup_playback_window

0x3b5a,	// (0x00080a89) signal_pane

0xaae0,	// (0x00087a0f) main_browser_pane

0xad01,	// (0x00087c30) main_burst_pane

0x3823,	// (0x00080752) main_calc_pane

0xc96b,	// (0x0008989a) main_cale_day_pane

0x0f15,	// (0x0007de44) main_cale_month_pane

0xc96b,	// (0x0008989a) main_cale_week_pane

0xad01,	// (0x00087c30) main_call_pane

0xa74c,	// (0x0008767b) main_call_poc_pane

0xad01,	// (0x00087c30) main_camera_pane

0xad01,	// (0x00087c30) main_chi_dic_pane

0xb530,	// (0x0008845f) main_clock_pane

0xa74c,	// (0x0008767b) main_fmradio_pane

0xad01,	// (0x00087c30) main_graph_messa_pane

0xa74c,	// (0x0008767b) main_help_pane

0xaae0,	// (0x00087a0f) main_im_pane

0xa9a7,	// (0x000878d6) main_image_pane_ParamLimits

0xa9a7,	// (0x000878d6) main_image_pane

0xa74c,	// (0x0008767b) main_location2_pane

0xad01,	// (0x00087c30) main_location_pane

0xa9a7,	// (0x000878d6) main_messa_pane

0xa74c,	// (0x0008767b) main_mp2_pane

0xad01,	// (0x00087c30) main_mp_pane

0xa74c,	// (0x0008767b) main_msg_pane

0xa74c,	// (0x0008767b) main_mup_eq_pane

0xa74c,	// (0x0008767b) main_mup_pane

0xaae0,	// (0x00087a0f) main_notes_pane

0xa74c,	// (0x0008767b) main_pec_pane

0xa74c,	// (0x0008767b) main_phob_pane

0xa74c,	// (0x0008767b) main_pinb_pane

0xa74c,	// (0x0008767b) main_postcard_pane

0xa74c,	// (0x0008767b) main_qdial_pane

0xad01,	// (0x00087c30) main_skin_pane

0xa74c,	// (0x0008767b) main_smil2_pane

0xad01,	// (0x00087c30) main_smil_pane

0xad01,	// (0x00087c30) main_video_pane

0xad01,	// (0x00087c30) main_video_tele_pane

0xa9a7,	// (0x000878d6) main_viewer_pane_ParamLimits

0xa9a7,	// (0x000878d6) main_viewer_pane

0xad01,	// (0x00087c30) main_vorec_pane

0x3879,	// (0x000807a8) popup_blid_sat_info_window_ParamLimits

0x3879,	// (0x000807a8) popup_blid_sat_info_window

0x38dd,	// (0x0008080c) popup_dyc_status_message_window_ParamLimits

0x38dd,	// (0x0008080c) popup_dyc_status_message_window

0x38f7,	// (0x00080826) popup_grid_large_graphic_window_ParamLimits

0x38f7,	// (0x00080826) popup_grid_large_graphic_window

0x39b9,	// (0x000808e8) popup_loc_request_window_ParamLimits

0x39b9,	// (0x000808e8) popup_loc_request_window

0x3adf,	// (0x00080a0e) popup_wml_address_window_ParamLimits

0x3adf,	// (0x00080a0e) popup_wml_address_window

0x3661,	// (0x00080590) call_muted_g1

0x333a,	// (0x00080269) popup_call_audio_conf_window_ParamLimits

0x333a,	// (0x00080269) popup_call_audio_conf_window

0x3671,	// (0x000805a0) popup_call_audio_first_window_ParamLimits

0x3671,	// (0x000805a0) popup_call_audio_first_window

0x36e7,	// (0x00080616) popup_call_audio_in_window_ParamLimits

0x36e7,	// (0x00080616) popup_call_audio_in_window

0x3723,	// (0x00080652) popup_call_audio_out_window_ParamLimits

0x3723,	// (0x00080652) popup_call_audio_out_window

0x375d,	// (0x0008068c) popup_call_audio_second_window_ParamLimits

0x375d,	// (0x0008068c) popup_call_audio_second_window

0x37b3,	// (0x000806e2) popup_call_audio_wait_window_ParamLimits

0x37b3,	// (0x000806e2) popup_call_audio_wait_window

0x37e8,	// (0x00080717) popup_number_entry_window_ParamLimits

0x37e8,	// (0x00080717) popup_number_entry_window

0xe278,	// (0x0008b1a7) bg_popup_call_pane_cp05_ParamLimits

0xe278,	// (0x0008b1a7) bg_popup_call_pane_cp05

0xe298,	// (0x0008b1c7) popup_number_entry_window_t1

0xe2ab,	// (0x0008b1da) popup_number_entry_window_t2

0xe2bd,	// (0x0008b1ec) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0008bf4c) popup_number_entry_window_t

0xe304,	// (0x0008b233) text_title_cp2

0xe317,	// (0x0008b246) bg_popup_call_pane_cp_ParamLimits

0xe317,	// (0x0008b246) bg_popup_call_pane_cp

0xe325,	// (0x0008b254) call_thumbnail_pane

0xe32d,	// (0x0008b25c) popup_call_audio_in_window_g1_ParamLimits

0xe32d,	// (0x0008b25c) popup_call_audio_in_window_g1

0xe339,	// (0x0008b268) popup_call_audio_in_window_g2_ParamLimits

0xe339,	// (0x0008b268) popup_call_audio_in_window_g2

0xe345,	// (0x0008b274) popup_call_audio_in_window_g3_ParamLimits

0xe345,	// (0x0008b274) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0008bf55) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0008bf55) popup_call_audio_in_window_g

0xe351,	// (0x0008b280) popup_call_audio_in_window_t1_ParamLimits

0xe351,	// (0x0008b280) popup_call_audio_in_window_t1

0xe36d,	// (0x0008b29c) popup_call_audio_in_window_t2_ParamLimits

0xe36d,	// (0x0008b29c) popup_call_audio_in_window_t2

0xe389,	// (0x0008b2b8) popup_call_audio_in_window_t3_ParamLimits

0xe389,	// (0x0008b2b8) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0008bf5c) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0008bf5c) popup_call_audio_in_window_t

0xe317,	// (0x0008b246) bg_popup_call_pane_cp01_ParamLimits

0xe317,	// (0x0008b246) bg_popup_call_pane_cp01

0xe325,	// (0x0008b254) call_thumbnail_pane_cp02

0xe39c,	// (0x0008b2cb) call_type_pane_cp022

0xe3a4,	// (0x0008b2d3) popup_call_audio_out_window_g1_ParamLimits

0xe3a4,	// (0x0008b2d3) popup_call_audio_out_window_g1

0xed1e,	// (0x0008bc4d) popup_call_audio_out_window_g2_ParamLimits

0xed1e,	// (0x0008bc4d) popup_call_audio_out_window_g2

0xed2a,	// (0x0008bc59) popup_call_audio_out_window_g3_ParamLimits

0xed2a,	// (0x0008bc59) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0008bf63) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0008bf63) popup_call_audio_out_window_g

0xed3c,	// (0x0008bc6b) popup_call_audio_out_window_t1_ParamLimits

0xed3c,	// (0x0008bc6b) popup_call_audio_out_window_t1

0xed54,	// (0x0008bc83) popup_call_audio_out_window_t2_ParamLimits

0xed54,	// (0x0008bc83) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0008bf6a) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0008bf6a) popup_call_audio_out_window_t

0xed69,	// (0x0008bc98) bg_popup_call_pane_ParamLimits

0xed69,	// (0x0008bc98) bg_popup_call_pane

0x0c6c,	// (0x0007db9b) call_thumbnail_pane_cp_ParamLimits

0x0c6c,	// (0x0007db9b) call_thumbnail_pane_cp

0xeded,	// (0x0008bd1c) call_type_pane_cp01_ParamLimits

0xeded,	// (0x0008bd1c) call_type_pane_cp01

0xee31,	// (0x0008bd60) popup_call_audio_first_window_g1_ParamLimits

0xee31,	// (0x0008bd60) popup_call_audio_first_window_g1

0xee7d,	// (0x0008bdac) popup_call_audio_first_window_g2_ParamLimits

0xee7d,	// (0x0008bdac) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0008bf6f) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0008bf6f) popup_call_audio_first_window_g

0xeec1,	// (0x0008bdf0) popup_call_audio_first_window_t1_ParamLimits

0xeec1,	// (0x0008bdf0) popup_call_audio_first_window_t1

0xef6d,	// (0x0008be9c) popup_call_audio_first_window_t4_ParamLimits

0xef6d,	// (0x0008be9c) popup_call_audio_first_window_t4

0xa71d,	// (0x0008764c) popup_call_audio_first_window_t5_ParamLimits

0xa71d,	// (0x0008764c) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0008bf74) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0008bf74) popup_call_audio_first_window_t

0xa74c,	// (0x0008767b) bg_popup_call_pane_cp02

0xa756,	// (0x00087685) call_type_pane_cp023

0xa75e,	// (0x0008768d) popup_call_audio_wait_window_g1

0xa766,	// (0x00087695) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0008bf7b) popup_call_audio_wait_window_g

0xa76e,	// (0x0008769d) popup_call_audio_wait_window_t3

0xa77c,	// (0x000876ab) bg_popup_call_pane_cp03_ParamLimits

0xa77c,	// (0x000876ab) bg_popup_call_pane_cp03

0xa7dc,	// (0x0008770b) call_thumbnail_pane_cp011_ParamLimits

0xa7dc,	// (0x0008770b) call_thumbnail_pane_cp011

0xa7e8,	// (0x00087717) call_type_pane_cp034_ParamLimits

0xa7e8,	// (0x00087717) call_type_pane_cp034

0xa824,	// (0x00087753) popup_call_audio_second_window_g1_ParamLimits

0xa824,	// (0x00087753) popup_call_audio_second_window_g1

0xa860,	// (0x0008778f) popup_call_audio_second_window_g2_ParamLimits

0xa860,	// (0x0008778f) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0008bf80) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0008bf80) popup_call_audio_second_window_g

0xa89c,	// (0x000877cb) popup_call_audio_second_window_t1_ParamLimits

0xa89c,	// (0x000877cb) popup_call_audio_second_window_t1

0xa91d,	// (0x0008784c) popup_call_audio_second_window_t2_ParamLimits

0xa91d,	// (0x0008784c) popup_call_audio_second_window_t2

0xa953,	// (0x00087882) popup_call_audio_second_window_t3_ParamLimits

0xa953,	// (0x00087882) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0008bf85) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0008bf85) popup_call_audio_second_window_t

0xa74c,	// (0x0008767b) bg_popup_call_pane_cp04

0xa989,	// (0x000878b8) list_conf_pane

0xa991,	// (0x000878c0) popup_call_audio_conf_window_t1

0xa99f,	// (0x000878ce) call_thumbnail_pane_g1

0xa9a7,	// (0x000878d6) bg_pinb_pane_ParamLimits

0xa9a7,	// (0x000878d6) bg_pinb_pane

0xa9b5,	// (0x000878e4) find_pinb_pane

0xa9a7,	// (0x000878d6) listscroll_pinb_pane_ParamLimits

0xa9a7,	// (0x000878d6) listscroll_pinb_pane

0xa9bf,	// (0x000878ee) pinb_bg_pane_g1

0xa9bf,	// (0x000878ee) pinb_bg_pane_g2

0xa9bf,	// (0x000878ee) pinb_bg_pane_g3

0xa9bf,	// (0x000878ee) pinb_bg_pane_g4

0xa9bf,	// (0x000878ee) pinb_bg_pane_g5

0xa9bf,	// (0x000878ee) pinb_bg_pane_g6

0xa9bf,	// (0x000878ee) pinb_bg_pane_g7

0xa9bf,	// (0x000878ee) pinb_bg_pane_g8

0xa9bf,	// (0x000878ee) pinb_bg_pane_g9

0xa9bf,	// (0x000878ee) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0008bf8c) pinb_bg_pane_g

0xe26e,	// (0x0008b19d) grid_pinb_pane

0xe26e,	// (0x0008b19d) list_pinb_pane

0xed10,	// (0x0008bc3f) scroll_pane_cp01_ParamLimits

0xed10,	// (0x0008bc3f) scroll_pane_cp01

0xa9c9,	// (0x000878f8) find_pinb_pane_g1_ParamLimits

0xa9c9,	// (0x000878f8) find_pinb_pane_g1

0xa9e1,	// (0x00087910) find_pinb_pane_t1

0xa9f3,	// (0x00087922) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0008bfa6) find_pinb_pane_t

0xaa08,	// (0x00087937) input_focus_pane_cp01_ParamLimits

0xaa08,	// (0x00087937) input_focus_pane_cp01

0xaa14,	// (0x00087943) cell_pinb_pane_ParamLimits

0xaa14,	// (0x00087943) cell_pinb_pane

0xaa22,	// (0x00087951) cell_pinb_pane_g1_ParamLimits

0xaa22,	// (0x00087951) cell_pinb_pane_g1

0xaa30,	// (0x0008795f) cell_pinb_pane_g2_ParamLimits

0xaa30,	// (0x0008795f) cell_pinb_pane_g2

0xaa30,	// (0x0008795f) cell_pinb_pane_g3_ParamLimits

0xaa30,	// (0x0008795f) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0008bfab) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0008bfab) cell_pinb_pane_g

0xa74c,	// (0x0008767b) grid_highlight_pane_cp01

0xaa14,	// (0x00087943) list_pinb_item_pane_ParamLimits

0xaa14,	// (0x00087943) list_pinb_item_pane

0xe26e,	// (0x0008b19d) list_highlight_pane_cp02

0xaa3e,	// (0x0008796d) list_pinb_item_pane_g1_ParamLimits

0xaa3e,	// (0x0008796d) list_pinb_item_pane_g1

0xaa30,	// (0x0008795f) list_pinb_item_pane_g2_ParamLimits

0xaa30,	// (0x0008795f) list_pinb_item_pane_g2

0xaa22,	// (0x00087951) list_pinb_item_pane_g3_ParamLimits

0xaa22,	// (0x00087951) list_pinb_item_pane_g3

0xaa30,	// (0x0008795f) list_pinb_item_pane_g4_ParamLimits

0xaa30,	// (0x0008795f) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0008bfb2) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0008bfb2) list_pinb_item_pane_g

0xaa4c,	// (0x0008797b) list_pinb_item_pane_t1_ParamLimits

0xaa4c,	// (0x0008797b) list_pinb_item_pane_t1

0x0cb0,	// (0x0007dbdf) calc_display_pane

0x0cd5,	// (0x0007dc04) calc_paper_pane

0x0cf8,	// (0x0007dc27) grid_calc_pane

0xe26e,	// (0x0008b19d) bg_list_pane_cp01

0xaa68,	// (0x00087997) clock_g1

0xaa68,	// (0x00087997) clock_g2

0x0001,

0xf08c,	// (0x0008bfbb) clock_g

0xaa72,	// (0x000879a1) clock_t1_ParamLimits

0xaa72,	// (0x000879a1) clock_t1

0xaa86,	// (0x000879b5) clock_t2_ParamLimits

0xaa86,	// (0x000879b5) clock_t2

0xaa86,	// (0x000879b5) clock_t3_ParamLimits

0xaa86,	// (0x000879b5) clock_t3

0xaa86,	// (0x000879b5) clock_t4_ParamLimits

0xaa86,	// (0x000879b5) clock_t4

0xaa72,	// (0x000879a1) clock_t5_ParamLimits

0xaa72,	// (0x000879a1) clock_t5

0xaa86,	// (0x000879b5) clock_t6_ParamLimits

0xaa86,	// (0x000879b5) clock_t6

0xaa86,	// (0x000879b5) clock_t7_ParamLimits

0xaa86,	// (0x000879b5) clock_t7

0xaa86,	// (0x000879b5) clock_t8_ParamLimits

0xaa86,	// (0x000879b5) clock_t8

0xaa86,	// (0x000879b5) clock_t9_ParamLimits

0xaa86,	// (0x000879b5) clock_t9

0x0008,

0xf091,	// (0x0008bfc0) clock_t_ParamLimits

0xf091,	// (0x0008bfc0) clock_t

0xe26e,	// (0x0008b19d) popup_clock_analogue_window_cp02

0xe26e,	// (0x0008b19d) popup_clock_digital_window_cp01

0xa74c,	// (0x0008767b) listscroll_help_pane

0xa74c,	// (0x0008767b) phob_pre_status_pane

0xaa9a,	// (0x000879c9) grid_qdial_pane

0xa9a7,	// (0x000878d6) listscroll_mce_pane

0xa9a7,	// (0x000878d6) bg_notes_pane

0xaaa4,	// (0x000879d3) list_notes_pane

0x0d26,	// (0x0007dc55) scroll_pane_cp06

0xaab2,	// (0x000879e1) bg_calc_paper_pane

0xaac6,	// (0x000879f5) list_calc_pane

0xaae0,	// (0x00087a0f) bg_calc_display_pane

0x0d3a,	// (0x0007dc69) calc_display_pane_t1

0x0d4f,	// (0x0007dc7e) calc_display_pane_t2

0xaaec,	// (0x00087a1b) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0008bfd3) calc_display_pane_t

0x0d64,	// (0x0007dc93) cell_calc_pane_ParamLimits

0x0d64,	// (0x0007dc93) cell_calc_pane

0xaafe,	// (0x00087a2d) bg_calc_paper_pane_g1

0xab0a,	// (0x00087a39) bg_calc_paper_pane_g2

0xab16,	// (0x00087a45) bg_calc_paper_pane_g3

0xab22,	// (0x00087a51) bg_calc_paper_pane_g4

0xab2e,	// (0x00087a5d) bg_calc_paper_pane_g5

0x0d9f,	// (0x0007dcce) bg_calc_paper_pane_g6

0x0db2,	// (0x0007dce1) bg_calc_paper_pane_g7

0x0dc5,	// (0x0007dcf4) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0008bfda) bg_calc_paper_pane_g

0x0dd8,	// (0x0007dd07) calc_bg_paper_pane_g9

0x0deb,	// (0x0007dd1a) list_calc_item_pane_ParamLimits

0x0deb,	// (0x0007dd1a) list_calc_item_pane

0xab3a,	// (0x00087a69) list_calc_item_pane_g1

0xab47,	// (0x00087a76) list_calc_item_pane_t1_ParamLimits

0xab47,	// (0x00087a76) list_calc_item_pane_t1

0x0e03,	// (0x0007dd32) list_calc_item_pane_t2_ParamLimits

0x0e03,	// (0x0007dd32) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0008bfeb) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0008bfeb) list_calc_item_pane_t

0xa9bf,	// (0x000878ee) cell_calc_pane_g1

0xab59,	// (0x00087a88) grid_highlight_pane_cp02

0xab7b,	// (0x00087aaa) bg_calc_display_pane_g1

0x0e35,	// (0x0007dd64) bg_calc_display_pane_g2

0x0e3f,	// (0x0007dd6e) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0008bff5) bg_calc_display_pane_g

0x0e48,	// (0x0007dd77) cell_qdial_pane_ParamLimits

0x0e48,	// (0x0007dd77) cell_qdial_pane

0x0e5c,	// (0x0007dd8b) cell_qdial_pane_g1_ParamLimits

0x0e5c,	// (0x0007dd8b) cell_qdial_pane_g1

0x0e72,	// (0x0007dda1) cell_qdial_pane_g2_ParamLimits

0x0e72,	// (0x0007dda1) cell_qdial_pane_g2

0xab84,	// (0x00087ab3) cell_qdial_pane_g3_ParamLimits

0xab84,	// (0x00087ab3) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0008bffc) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0008bffc) cell_qdial_pane_g

0x0e99,	// (0x0007ddc8) cell_qdial_pane_t1_ParamLimits

0x0e99,	// (0x0007ddc8) cell_qdial_pane_t1

0x0eb1,	// (0x0007dde0) cell_qdial_pane_t2_ParamLimits

0x0eb1,	// (0x0007dde0) cell_qdial_pane_t2

0x0ec4,	// (0x0007ddf3) cell_qdial_pane_t3_ParamLimits

0x0ec4,	// (0x0007ddf3) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0008c005) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0008c005) cell_qdial_pane_t

0xa74c,	// (0x0008767b) grid_highlight_pane_cp04

0xab90,	// (0x00087abf) thumbnail_qdial_pane_ParamLimits

0xab90,	// (0x00087abf) thumbnail_qdial_pane

0xabec,	// (0x00087b1b) list_help_pane

0xabf5,	// (0x00087b24) scroll_pane_cp02

0x0ed7,	// (0x0007de06) help_list_pane_t1_ParamLimits

0x0ed7,	// (0x0007de06) help_list_pane_t1

0xabfe,	// (0x00087b2d) bg_notes_pane_g2

0xac06,	// (0x00087b35) bg_notes_pane_g3

0xac0e,	// (0x00087b3d) notes_bg_pane_g1

0xac16,	// (0x00087b45) notes_bg_pane_g4

0xac1e,	// (0x00087b4d) notes_bg_pane_g5

0xac26,	// (0x00087b55) notes_bg_pane_g6

0xac2e,	// (0x00087b5d) notes_bg_pane_g7

0xac36,	// (0x00087b65) notes_bg_pane_g8

0xac3e,	// (0x00087b6d) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0008c023) notes_bg_pane_g

0x0efb,	// (0x0007de2a) list_notes_text_pane_ParamLimits

0x0efb,	// (0x0007de2a) list_notes_text_pane

0xac46,	// (0x00087b75) list_notes_text_pane_g1

0xac4f,	// (0x00087b7e) list_notes_text_pane_t1

0x0f15,	// (0x0007de44) listscroll_cale_week_pane

0x0f41,	// (0x0007de70) bg_cale_heading_pane

0x0f65,	// (0x0007de94) bg_cale_pane_cp01

0x0f82,	// (0x0007deb1) cale_week_corner_pane

0x0fa1,	// (0x0007ded0) cale_week_day_heading_pane

0x0fca,	// (0x0007def9) cale_week_scroll_pane_g1

0x0fe9,	// (0x0007df18) cale_week_scroll_pane_g2

0x1001,	// (0x0007df30) cale_week_scroll_pane_g3

0x1019,	// (0x0007df48) cale_week_scroll_pane_g4

0x1031,	// (0x0007df60) cale_week_scroll_pane_g5

0x1051,	// (0x0007df80) cale_week_scroll_pane_g6

0x1071,	// (0x0007dfa0) cale_week_scroll_pane_g7

0x1091,	// (0x0007dfc0) cale_week_scroll_pane_g8

0x10b5,	// (0x0007dfe4) cale_week_scroll_pane_g9

0x10cd,	// (0x0007dffc) cale_week_scroll_pane_g10

0x10e5,	// (0x0007e014) cale_week_scroll_pane_g11

0x10fd,	// (0x0007e02c) cale_week_scroll_pane_g12

0x111d,	// (0x0007e04c) cale_week_scroll_pane_g13

0x1141,	// (0x0007e070) cale_week_scroll_pane_g14

0x1165,	// (0x0007e094) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0008c032) cale_week_scroll_pane_g

0x11ad,	// (0x0007e0dc) cale_week_time_pane

0x11d1,	// (0x0007e100) grid_cale_week_pane

0xac89,	// (0x00087bb8) scroll_pane_cp08

0x11ff,	// (0x0007e12e) cell_cale_week_pane_ParamLimits

0x11ff,	// (0x0007e12e) cell_cale_week_pane

0x1297,	// (0x0007e1c6) cale_week_day_heading_pane_t1

0x12c1,	// (0x0007e1f0) cale_week_day_heading_pane_t2

0x12f0,	// (0x0007e21f) cale_week_day_heading_pane_t3

0x131f,	// (0x0007e24e) cale_week_day_heading_pane_t4

0x134e,	// (0x0007e27d) cale_week_day_heading_pane_t5

0x1381,	// (0x0007e2b0) cale_week_day_heading_pane_t6

0x13b8,	// (0x0007e2e7) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0008c053) cale_week_day_heading_pane_t

0xaca6,	// (0x00087bd5) bg_cale_side_pane

0x13e2,	// (0x0007e311) cale_week_time_pane_t1

0x13fc,	// (0x0007e32b) cale_week_time_pane_t2

0x1416,	// (0x0007e345) cale_week_time_pane_t3

0x1430,	// (0x0007e35f) cale_week_time_pane_t4

0x144a,	// (0x0007e379) cale_week_time_pane_t5

0x1464,	// (0x0007e393) cale_week_time_pane_t6

0x1482,	// (0x0007e3b1) cale_week_time_pane_t7

0x14a4,	// (0x0007e3d3) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0008c062) cale_week_time_pane_t

0x14c8,	// (0x0007e3f7) cell_cale_week_pane_g2

0x14ec,	// (0x0007e41b) cell_cale_week_pane_g3_ParamLimits

0x14ec,	// (0x0007e41b) cell_cale_week_pane_g3

0xacb4,	// (0x00087be3) grid_highlight_pane_cp07

0xacbc,	// (0x00087beb) listscroll_gms_pane

0xacc6,	// (0x00087bf5) grid_gms_pane

0xaccf,	// (0x00087bfe) listscroll_gms_pane_g1

0xacd7,	// (0x00087c06) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0008c073) listscroll_gms_pane_g

0x1504,	// (0x0007e433) scroll_pane_cp010

0x150f,	// (0x0007e43e) cell_gms_pane_ParamLimits

0x150f,	// (0x0007e43e) cell_gms_pane

0x1526,	// (0x0007e455) cell_gms_pane_g1

0xacdf,	// (0x00087c0e) cell_gms_pane_g2

0xace7,	// (0x00087c16) cell_gms_pane_g3

0xacf0,	// (0x00087c1f) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0008c078) cell_gms_pane_g

0xacf9,	// (0x00087c28) grid_highlight_pane_cp09

0x35e5,	// (0x00080514) phob_pre_status_pane_g1

0x35ed,	// (0x0008051c) phob_pre_status_pane_g2

0x35f5,	// (0x00080524) phob_pre_status_pane_g3

0x35fd,	// (0x0008052c) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x0008c414) phob_pre_status_pane_g

0x360d,	// (0x0008053c) phob_pre_status_pane_t1

0x361d,	// (0x0008054c) phob_pre_status_pane_t2

0x362d,	// (0x0008055c) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x0008c41f) phob_pre_status_pane_t

0xad01,	// (0x00087c30) bg_list_pane_cp05

0x1536,	// (0x0007e465) grid_vorec_pane

0x1540,	// (0x0007e46f) vorec_t1

0x154e,	// (0x0007e47d) vorec_t2

0x155c,	// (0x0007e48b) vorec_t3

0x156a,	// (0x0007e499) vorec_t4

0xed02,	// (0x0008bc31) vorec_t5

0x979c,	// (0x000866cb) vorec_t6

0x0004,

0xf152,	// (0x0008c081) vorec_t

0x97aa,	// (0x000866d9) wait_bar_pane_cp01

0x1586,	// (0x0007e4b5) cell_vorec_pane_ParamLimits

0x1586,	// (0x0007e4b5) cell_vorec_pane

0xad09,	// (0x00087c38) cell_vorec_pane_g1

0xa74c,	// (0x0008767b) grid_highlight_pane_cp05

0xed10,	// (0x0008bc3f) cams_zoom_pane

0xed10,	// (0x0008bc3f) image_vga_pane

0xaa22,	// (0x00087951) main_camera_pane_g1

0xaa22,	// (0x00087951) main_camera_pane_g2

0xaa22,	// (0x00087951) main_camera_pane_g3

0xaa22,	// (0x00087951) main_camera_pane_g4

0xaa22,	// (0x00087951) main_camera_pane_g5

0xaa22,	// (0x00087951) main_camera_pane_g6

0xaa22,	// (0x00087951) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0008c08c) main_camera_pane_g

0xaa72,	// (0x000879a1) main_camera_pane_t1

0xaa72,	// (0x000879a1) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0008c09d) main_camera_pane_t

0x15af,	// (0x0007e4de) cams_zoom_pane_cp_ParamLimits

0x15af,	// (0x0007e4de) cams_zoom_pane_cp

0x15e3,	// (0x0007e512) image_cif_pane_ParamLimits

0x15e3,	// (0x0007e512) image_cif_pane

0xe26e,	// (0x0008b19d) image_subqcif_pane

0x15f5,	// (0x0007e524) main_video_pane_g1_ParamLimits

0x15f5,	// (0x0007e524) main_video_pane_g1

0x1623,	// (0x0007e552) main_video_pane_g2_ParamLimits

0x1623,	// (0x0007e552) main_video_pane_g2

0x165d,	// (0x0007e58c) main_video_pane_g3_ParamLimits

0x165d,	// (0x0007e58c) main_video_pane_g3

0x165d,	// (0x0007e58c) main_video_pane_g4_ParamLimits

0x165d,	// (0x0007e58c) main_video_pane_g4

0x1691,	// (0x0007e5c0) main_video_pane_g5_ParamLimits

0x1691,	// (0x0007e5c0) main_video_pane_g5

0xad13,	// (0x00087c42) main_video_pane_g6_ParamLimits

0xad13,	// (0x00087c42) main_video_pane_g6

0x0006,

0xf173,	// (0x0008c0a2) main_video_pane_g_ParamLimits

0xf173,	// (0x0008c0a2) main_video_pane_g

0x16ad,	// (0x0007e5dc) main_video_pane_t1_ParamLimits

0x16ad,	// (0x0007e5dc) main_video_pane_t1

0xaa68,	// (0x00087997) cams_zoom_pane_g1

0xaa68,	// (0x00087997) cams_zoom_pane_g2

0xaa68,	// (0x00087997) cams_zoom_pane_g3

0xaa68,	// (0x00087997) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0008c0b1) cams_zoom_pane_g

0xed10,	// (0x0008bc3f) grid_cams_pane

0xed10,	// (0x0008bc3f) linegrid_cams_pane

0x16f1,	// (0x0007e620) cell_cams_pane_ParamLimits

0x16f1,	// (0x0007e620) cell_cams_pane

0xe26e,	// (0x0008b19d) cams_burst_image_pane

0xaa68,	// (0x00087997) cell_cams_pane_g1

0xe26e,	// (0x0008b19d) grid_highlight_pane_cp03

0xa9bf,	// (0x000878ee) mp_bg_pane_g1

0xe26e,	// (0x0008b19d) bg_list_pane_cp03

0xe26e,	// (0x0008b19d) bg_mp_pane

0xe26e,	// (0x0008b19d) grid_mp_pane

0xaa68,	// (0x00087997) media_player_g1

0xb257,	// (0x00088186) media_player_t1

0xb257,	// (0x00088186) media_player_t2

0xb257,	// (0x00088186) media_player_t3

0xb257,	// (0x00088186) media_player_t4

0xb257,	// (0x00088186) media_player_t5

0xb257,	// (0x00088186) media_player_t6

0xb257,	// (0x00088186) media_player_t7

0x0006,

0xf4cf,	// (0x0008c3fe) media_player_t

0xe26e,	// (0x0008b19d) wait_bar_pane_cp02

0xf4b4,	// (0x0008c3e3) main_usb_pane_t

0xb530,	// (0x0008845f) cell_mp_pane

0xa9bf,	// (0x000878ee) cell_mp_pane_g1

0xa74c,	// (0x0008767b) grid_highlight_pane_cp06

0xad2d,	// (0x00087c5c) grid_skin_colour_pane

0xad35,	// (0x00087c64) list_highlight_pane_cp03

0x1706,	// (0x0007e635) skin_g1

0xad3d,	// (0x00087c6c) skin_t1

0xad4c,	// (0x00087c7b) skin_t2

0x0001,

0xf1b0,	// (0x0008c0df) skin_t

0x170e,	// (0x0007e63d) cell_skin_colour_pane_ParamLimits

0x170e,	// (0x0007e63d) cell_skin_colour_pane

0xad5a,	// (0x00087c89) cell_skin_colour_pane_g1

0x1780,	// (0x0007e6af) call_video_g1_ParamLimits

0x1780,	// (0x0007e6af) call_video_g1

0x179c,	// (0x0007e6cb) call_video_g2_ParamLimits

0x179c,	// (0x0007e6cb) call_video_g2

0x0001,

0xf1b5,	// (0x0008c0e4) call_video_g_ParamLimits

0xf1b5,	// (0x0008c0e4) call_video_g

0x17e4,	// (0x0007e713) call_video_uplink_pane_cp1_ParamLimits

0x17e4,	// (0x0007e713) call_video_uplink_pane_cp1

0xad6c,	// (0x00087c9b) call_video_uplink_pane_cp2

0x1874,	// (0x0007e7a3) video_down_crop_pane_ParamLimits

0x1874,	// (0x0007e7a3) video_down_crop_pane

0x195c,	// (0x0007e88b) video_down_pane_ParamLimits

0x195c,	// (0x0007e88b) video_down_pane

0xad74,	// (0x00087ca3) video_down_subqcif_pane_ParamLimits

0xad74,	// (0x00087ca3) video_down_subqcif_pane

0xad8e,	// (0x00087cbd) video_down_subqcif_pane_cp_ParamLimits

0xad8e,	// (0x00087cbd) video_down_subqcif_pane_cp

0xadb4,	// (0x00087ce3) im_reading_pane_ParamLimits

0xadb4,	// (0x00087ce3) im_reading_pane

0x1a67,	// (0x0007e996) im_writing_pane_ParamLimits

0x1a67,	// (0x0007e996) im_writing_pane

0x1a85,	// (0x0007e9b4) im_reading_pane_t1

0xadce,	// (0x00087cfd) list_im_pane

0xaddf,	// (0x00087d0e) scroll_pane_cp07

0x1ac4,	// (0x0007e9f3) im_writing_pane_t1_ParamLimits

0x1ac4,	// (0x0007e9f3) im_writing_pane_t1

0xadf8,	// (0x00087d27) im_writing_pane_t2_ParamLimits

0xadf8,	// (0x00087d27) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0008c0ee) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0008c0ee) im_writing_pane_t

0xa74c,	// (0x0008767b) input_focus_pane_cp04

0xa74c,	// (0x0008767b) input_focus_pane_cp05

0x1ad9,	// (0x0007ea08) list_im_single_pane_ParamLimits

0x1ad9,	// (0x0007ea08) list_im_single_pane

0xae15,	// (0x00087d44) list_single_im_pane_t1

0xad01,	// (0x00087c30) blid_accuracy_pane

0xad01,	// (0x00087c30) blid_compass_pane

0xc91b,	// (0x0008984a) main_location_t1

0xc91b,	// (0x0008984a) main_location_t2

0xc91b,	// (0x0008984a) main_location_t3

0x0002,

0xf4de,	// (0x0008c40d) main_location_t

0xa74c,	// (0x0008767b) aid_levels_location

0xa9bf,	// (0x000878ee) blid_accuracy_pane_g1

0xa9bf,	// (0x000878ee) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0008c13d) blid_accuracy_pane_g

0xae4f,	// (0x00087d7e) wml_content_pane

0xae8d,	// (0x00087dbc) wml_button_pane_ParamLimits

0xae8d,	// (0x00087dbc) wml_button_pane

0x1aef,	// (0x0007ea1e) wml_list_single_large_pane_ParamLimits

0x1aef,	// (0x0007ea1e) wml_list_single_large_pane

0x1b08,	// (0x0007ea37) wml_list_single_medium_pane_ParamLimits

0x1b08,	// (0x0007ea37) wml_list_single_medium_pane

0x1b22,	// (0x0007ea51) wml_list_single_small_pane_ParamLimits

0x1b22,	// (0x0007ea51) wml_list_single_small_pane

0xaea1,	// (0x00087dd0) wml_selection_box_pane_ParamLimits

0xaea1,	// (0x00087dd0) wml_selection_box_pane

0xaeb4,	// (0x00087de3) wml_list_single_pane_t1

0xaec3,	// (0x00087df2) wml_list_single_medium_pane_t1

0xaed2,	// (0x00087e01) wml_list_single_large_pane_t1

0xaee1,	// (0x00087e10) input_focus_pane_cp02_ParamLimits

0xaee1,	// (0x00087e10) input_focus_pane_cp02

0xaef4,	// (0x00087e23) wml_selection_box_pane_g1

0xaefd,	// (0x00087e2c) wml_selection_box_pane_t1_ParamLimits

0xaefd,	// (0x00087e2c) wml_selection_box_pane_t1

0xa9a7,	// (0x000878d6) bg_wml_button_pane_ParamLimits

0xa9a7,	// (0x000878d6) bg_wml_button_pane

0xaf15,	// (0x00087e44) wml_button_pane_g1

0xaf1d,	// (0x00087e4c) wml_button_pane_t1

0xaf15,	// (0x00087e44) wml_button_bg_pane_g1

0xaf2d,	// (0x00087e5c) wml_button_bg_pane_g2

0xaf35,	// (0x00087e64) wml_button_bg_pane_g3

0xaf3d,	// (0x00087e6c) wml_button_bg_pane_g4

0xaf45,	// (0x00087e74) wml_button_bg_pane_g5

0xaf4d,	// (0x00087e7c) wml_button_bg_pane_g6

0xaf55,	// (0x00087e84) wml_button_bg_pane_g7

0xaf5d,	// (0x00087e8c) wml_button_bg_pane_g8

0xaf65,	// (0x00087e94) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0008c0f3) wml_button_bg_pane_g

0x1b3e,	// (0x0007ea6d) bg_list_pane_cp02

0xaf6d,	// (0x00087e9c) mce_header_pane_ParamLimits

0xaf6d,	// (0x00087e9c) mce_header_pane

0xaf83,	// (0x00087eb2) mce_icon_pane

0xaf83,	// (0x00087eb2) mce_image_pane

0xaf8c,	// (0x00087ebb) mce_text_pane_ParamLimits

0xaf8c,	// (0x00087ebb) mce_text_pane

0x1b48,	// (0x0007ea77) scroll_pane_cp03

0xae85,	// (0x00087db4) scroll_pane_cp04

0xaf9f,	// (0x00087ece) scroll_pane_cp05_ParamLimits

0xaf9f,	// (0x00087ece) scroll_pane_cp05

0x1b52,	// (0x0007ea81) mce_header_field_pane_ParamLimits

0x1b52,	// (0x0007ea81) mce_header_field_pane

0x1b6b,	// (0x0007ea9a) mce_header_field_pane_2_ParamLimits

0x1b6b,	// (0x0007ea9a) mce_header_field_pane_2

0x1b81,	// (0x0007eab0) mce_header_field_pane_3

0x1b89,	// (0x0007eab8) list_single_mce_message_pane_ParamLimits

0x1b89,	// (0x0007eab8) list_single_mce_message_pane

0x1ba5,	// (0x0007ead4) list_single_mce_smart_pane_ParamLimits

0x1ba5,	// (0x0007ead4) list_single_mce_smart_pane

0xafab,	// (0x00087eda) input_focus_pane_cp03

0xafb4,	// (0x00087ee3) list_header_data_pane

0x1bcc,	// (0x0007eafb) mce_header_field_pane_t1

0x1bdc,	// (0x0007eb0b) list_single_mce_header_pane_ParamLimits

0x1bdc,	// (0x0007eb0b) list_single_mce_header_pane

0xafbc,	// (0x00087eeb) list_single_mce_header_pane_t1

0xafcb,	// (0x00087efa) list_single_mce_message_pane_g1

0xafd3,	// (0x00087f02) list_single_mce_message_pane_t1

0x1c16,	// (0x0007eb45) bg_cale_heading_pane_cp01_ParamLimits

0x1c16,	// (0x0007eb45) bg_cale_heading_pane_cp01

0xafe1,	// (0x00087f10) bg_cale_pane_cp02_ParamLimits

0xafe1,	// (0x00087f10) bg_cale_pane_cp02

0x1c68,	// (0x0007eb97) cale_month_corner_pane

0x1c87,	// (0x0007ebb6) cale_month_day_heading_pane_ParamLimits

0x1c87,	// (0x0007ebb6) cale_month_day_heading_pane

0x1cf1,	// (0x0007ec20) cale_month_pane_g1_ParamLimits

0x1cf1,	// (0x0007ec20) cale_month_pane_g1

0x1d38,	// (0x0007ec67) cale_month_pane_g2_ParamLimits

0x1d38,	// (0x0007ec67) cale_month_pane_g2

0x1d74,	// (0x0007eca3) cale_month_pane_g3_ParamLimits

0x1d74,	// (0x0007eca3) cale_month_pane_g3

0x1dc8,	// (0x0007ecf7) cale_month_pane_g4_ParamLimits

0x1dc8,	// (0x0007ecf7) cale_month_pane_g4

0x1e1c,	// (0x0007ed4b) cale_month_pane_g5_ParamLimits

0x1e1c,	// (0x0007ed4b) cale_month_pane_g5

0x1e78,	// (0x0007eda7) cale_month_pane_g6_ParamLimits

0x1e78,	// (0x0007eda7) cale_month_pane_g6

0x1edc,	// (0x0007ee0b) cale_month_pane_g7_ParamLimits

0x1edc,	// (0x0007ee0b) cale_month_pane_g7

0x1f44,	// (0x0007ee73) cale_month_pane_g8_ParamLimits

0x1f44,	// (0x0007ee73) cale_month_pane_g8

0x1fb0,	// (0x0007eedf) cale_month_pane_g9_ParamLimits

0x1fb0,	// (0x0007eedf) cale_month_pane_g9

0x2014,	// (0x0007ef43) cale_month_pane_g10_ParamLimits

0x2014,	// (0x0007ef43) cale_month_pane_g10

0x2066,	// (0x0007ef95) cale_month_pane_g11_ParamLimits

0x2066,	// (0x0007ef95) cale_month_pane_g11

0x20b8,	// (0x0007efe7) cale_month_pane_g12_ParamLimits

0x20b8,	// (0x0007efe7) cale_month_pane_g12

0x2110,	// (0x0007f03f) cale_month_pane_g13_ParamLimits

0x2110,	// (0x0007f03f) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0008c106) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0008c106) cale_month_pane_g

0x2168,	// (0x0007f097) cale_month_week_pane

0x218c,	// (0x0007f0bb) grid_cale_month_pane_ParamLimits

0x218c,	// (0x0007f0bb) grid_cale_month_pane

0x21ed,	// (0x0007f11c) cale_month_day_heading_pane_t1

0x2273,	// (0x0007f1a2) cale_month_day_heading_pane_t2

0x22ec,	// (0x0007f21b) cale_month_day_heading_pane_t3

0x2365,	// (0x0007f294) cale_month_day_heading_pane_t4

0x23e6,	// (0x0007f315) cale_month_day_heading_pane_t5

0x246f,	// (0x0007f39e) cale_month_day_heading_pane_t6

0x24f8,	// (0x0007f427) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0008c121) cale_month_day_heading_pane_t

0xaca6,	// (0x00087bd5) bg_cale_side_pane_cp01

0x2589,	// (0x0007f4b8) cale_month_week_pane_t1

0x25a2,	// (0x0007f4d1) cale_month_week_pane_t2

0x25bb,	// (0x0007f4ea) cale_month_week_pane_t3

0x25d4,	// (0x0007f503) cale_month_week_pane_t4

0x25ed,	// (0x0007f51c) cale_month_week_pane_t5

0x2606,	// (0x0007f535) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0008c130) cale_month_week_pane_t

0x262b,	// (0x0007f55a) cell_cale_month_pane_ParamLimits

0x262b,	// (0x0007f55a) cell_cale_month_pane

0xb020,	// (0x00087f4f) cell_cale_month_pane_g1

0x2761,	// (0x0007f690) cell_cale_month_pane_t1_ParamLimits

0x2761,	// (0x0007f690) cell_cale_month_pane_t1

0xacb4,	// (0x00087be3) grid_highlight_pane_cp08

0xa9bf,	// (0x000878ee) main_smil_g1

0x278d,	// (0x0007f6bc) smil_status_pane

0xb02c,	// (0x00087f5b) smil_text_pane

0xac36,	// (0x00087b65) bg_popup_call3_rect_pane_g8

0xac3e,	// (0x00087b6d) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x0008c142) bg_popup_call3_rect_pane_g

0xca44,	// (0x00089973) smil_status_volume_pane_g1

0xb036,	// (0x00087f65) smil_status_pane_t1

0xca77,	// (0x000899a6) volume_smil_pane

0xb04d,	// (0x00087f7c) list_smil_text_pane

0x27a2,	// (0x0007f6d1) scroll_pane_cp011

0x27ad,	// (0x0007f6dc) smil_text_list_pane_t1_ParamLimits

0x27ad,	// (0x0007f6dc) smil_text_list_pane_t1

0xb057,	// (0x00087f86) aid_volume_smil_ParamLimits

0xb057,	// (0x00087f86) aid_volume_smil

0xa9bf,	// (0x000878ee) smil_volume_pane_g1

0xa9bf,	// (0x000878ee) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0008c13d) smil_volume_pane_g

0x0f15,	// (0x0007de44) listscroll_cale_day_pane

0xb079,	// (0x00087fa8) bg_cale_pane

0xb091,	// (0x00087fc0) list_cale_pane

0xb0b4,	// (0x00087fe3) scroll_pane_cp09

0xac0e,	// (0x00087b3d) cale_bg_pane_g1

0xabfe,	// (0x00087b2d) cale_bg_pane_g2

0xac06,	// (0x00087b35) cale_bg_pane_g3

0xac16,	// (0x00087b45) cale_bg_pane_g4

0xac1e,	// (0x00087b4d) cale_bg_pane_g5

0xac26,	// (0x00087b55) cale_bg_pane_g6

0xac2e,	// (0x00087b5d) cale_bg_pane_g7

0xac36,	// (0x00087b65) cale_bg_pane_g8

0xac3e,	// (0x00087b6d) cale_bg_pane_g9

0x0008,

0xf213,	// (0x0008c142) cale_bg_pane_g

0xb0c5,	// (0x00087ff4) list_cale_time_pane_ParamLimits

0xb0c5,	// (0x00087ff4) list_cale_time_pane

0xb0dc,	// (0x0008800b) list_cale_time_pane_g1_ParamLimits

0xb0dc,	// (0x0008800b) list_cale_time_pane_g1

0xb0e8,	// (0x00088017) list_cale_time_pane_g2_ParamLimits

0xb0e8,	// (0x00088017) list_cale_time_pane_g2

0x2801,	// (0x0007f730) list_cale_time_pane_g3_ParamLimits

0x2801,	// (0x0007f730) list_cale_time_pane_g3

0x280f,	// (0x0007f73e) list_cale_time_pane_g4_ParamLimits

0x280f,	// (0x0007f73e) list_cale_time_pane_g4

0x281d,	// (0x0007f74c) list_cale_time_pane_g5_ParamLimits

0x281d,	// (0x0007f74c) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x0008c155) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x0008c155) list_cale_time_pane_g

0xb102,	// (0x00088031) list_cale_time_pane_t1_ParamLimits

0xb102,	// (0x00088031) list_cale_time_pane_t1

0xb12a,	// (0x00088059) list_cale_time_pane_t2_ParamLimits

0xb12a,	// (0x00088059) list_cale_time_pane_t2

0x2acf,	// (0x0007f9fe) aid_blid_cardinal_pane

0x2b0d,	// (0x0007fa3c) compass_pane_t4

0xb152,	// (0x00088081) list_cale_time_pane_t4_ParamLimits

0xb152,	// (0x00088081) list_cale_time_pane_t4

0x2b1b,	// (0x0007fa4a) compass_pane_t5

0x2b2b,	// (0x0007fa5a) compass_pane_t6

0x2b39,	// (0x0007fa68) compass_pane_t7

0xb5e0,	// (0x0008850f) navi_pane_cc_t1

0xb73f,	// (0x0008866e) aid_phob_thumbnail_center_pane

0x2ff3,	// (0x0007ff22) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x0008c162) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x0008c162) list_cale_time_pane_t

0xe317,	// (0x0008b246) bg_popup_window_pane_cp02_ParamLimits

0xe317,	// (0x0008b246) bg_popup_window_pane_cp02

0xb17a,	// (0x000880a9) heading_pane_cp01_ParamLimits

0xb17a,	// (0x000880a9) heading_pane_cp01

0xb186,	// (0x000880b5) loc_req_pane_ParamLimits

0xb186,	// (0x000880b5) loc_req_pane

0xb198,	// (0x000880c7) loc_type_pane_ParamLimits

0xb198,	// (0x000880c7) loc_type_pane

0xb1aa,	// (0x000880d9) loc_type_pane_t1_ParamLimits

0xb1aa,	// (0x000880d9) loc_type_pane_t1

0xb1bc,	// (0x000880eb) loc_type_pane_t2_ParamLimits

0xb1bc,	// (0x000880eb) loc_type_pane_t2

0xb1ce,	// (0x000880fd) loc_type_pane_t3_ParamLimits

0xb1ce,	// (0x000880fd) loc_type_pane_t3

0x0002,

0xf23a,	// (0x0008c169) loc_type_pane_t_ParamLimits

0xf23a,	// (0x0008c169) loc_type_pane_t

0xb1e0,	// (0x0008810f) list_loc_req_pane

0xb1ea,	// (0x00088119) scroll_pane_cp012

0x282b,	// (0x0007f75a) list_single_loc_request_popup_menu_pane_ParamLimits

0x282b,	// (0x0007f75a) list_single_loc_request_popup_menu_pane

0xb1f5,	// (0x00088124) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb1f5,	// (0x00088124) list_single_loc_request_popup_menu_pane_g1

0xb201,	// (0x00088130) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb201,	// (0x00088130) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x0008c170) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x0008c170) list_single_loc_request_popup_menu_pane_g

0xb20d,	// (0x0008813c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb20d,	// (0x0008813c) list_single_loc_request_popup_menu_pane_t1

0xa9a7,	// (0x000878d6) bg_popup_window_pane_cp03_ParamLimits

0xa9a7,	// (0x000878d6) bg_popup_window_pane_cp03

0xb223,	// (0x00088152) heading_loc_req_pane_ParamLimits

0xb223,	// (0x00088152) heading_loc_req_pane

0x2838,	// (0x0007f767) popup_dyc_status_message_window_g1_ParamLimits

0x2838,	// (0x0007f767) popup_dyc_status_message_window_g1

0x284c,	// (0x0007f77b) popup_dyc_status_message_window_t1_ParamLimits

0x284c,	// (0x0007f77b) popup_dyc_status_message_window_t1

0x2861,	// (0x0007f790) popup_dyc_status_message_window_t2_ParamLimits

0x2861,	// (0x0007f790) popup_dyc_status_message_window_t2

0x2876,	// (0x0007f7a5) popup_dyc_status_message_window_t3_ParamLimits

0x2876,	// (0x0007f7a5) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x0008c175) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x0008c175) popup_dyc_status_message_window_t

0xa74c,	// (0x0008767b) bg_heading_pane_cp01

0xb22f,	// (0x0008815e) heading_loc_req_pane_g1

0xb237,	// (0x00088166) heading_loc_req_pane_g2

0xb23f,	// (0x0008816e) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x0008c17c) heading_loc_req_pane_g

0xb247,	// (0x00088176) heading_loc_req_pane_t1

0xb267,	// (0x00088196) bg_popup_sub_pane_cp01_ParamLimits

0xb267,	// (0x00088196) bg_popup_sub_pane_cp01

0xb275,	// (0x000881a4) popup_cale_events_window_g1_ParamLimits

0xb275,	// (0x000881a4) popup_cale_events_window_g1

0xb295,	// (0x000881c4) popup_cale_events_window_g2_ParamLimits

0xb295,	// (0x000881c4) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x0008c19e) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x0008c19e) popup_cale_events_window_g

0xb2b5,	// (0x000881e4) popup_cale_events_window_t1_ParamLimits

0xb2b5,	// (0x000881e4) popup_cale_events_window_t1

0xb2c7,	// (0x000881f6) popup_cale_events_window_t2_ParamLimits

0xb2c7,	// (0x000881f6) popup_cale_events_window_t2

0xb305,	// (0x00088234) popup_cale_events_window_t3_ParamLimits

0xb305,	// (0x00088234) popup_cale_events_window_t3

0xb33f,	// (0x0008826e) popup_cale_events_window_t4_ParamLimits

0xb33f,	// (0x0008826e) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x0008c1a3) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x0008c1a3) popup_cale_events_window_t

0x289e,	// (0x0007f7cd) call_type_pane

0x28ae,	// (0x0007f7dd) popup_call_status_window_g1

0x28c2,	// (0x0007f7f1) popup_call_status_window_g2

0x28d6,	// (0x0007f805) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x0008c1ac) popup_call_status_window_g

0xb375,	// (0x000882a4) call_type_pane_g1

0xb37e,	// (0x000882ad) call_type_pane_g2

0x0001,

0xf284,	// (0x0008c1b3) call_type_pane_g

0xa74c,	// (0x0008767b) bg_popup_sub_pane_cp02

0xb387,	// (0x000882b6) listscroll_popup_wml_pane

0xb38f,	// (0x000882be) list_wml_pane

0xb399,	// (0x000882c8) scroll_pane_cp013

0xb3a4,	// (0x000882d3) list_single_graphic_popup_wml_pane_ParamLimits

0xb3a4,	// (0x000882d3) list_single_graphic_popup_wml_pane

0xa9bf,	// (0x000878ee) list_single_graphic_popup_wml_pane_g1

0xb3b8,	// (0x000882e7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x0008c1b8) list_single_graphic_popup_wml_pane_g

0xb3c0,	// (0x000882ef) list_single_graphic_popup_wml_pane_t1

0xb3d6,	// (0x00088305) aid_call_pane

0xa99f,	// (0x000878ce) popup_clock_analogue_window_g1

0xa99f,	// (0x000878ce) popup_clock_analogue_window_g2

0xb3de,	// (0x0008830d) popup_clock_analogue_window_g3

0xb3de,	// (0x0008830d) popup_clock_analogue_window_g4

0xa9bf,	// (0x000878ee) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x0008c1bd) popup_clock_analogue_window_g

0xb3e6,	// (0x00088315) popup_clock_analogue_window_t1

0xb3f4,	// (0x00088323) clock_digital_number_pane_ParamLimits

0xb3f4,	// (0x00088323) clock_digital_number_pane

0xb400,	// (0x0008832f) clock_digital_number_pane_cp02_ParamLimits

0xb400,	// (0x0008832f) clock_digital_number_pane_cp02

0xb40c,	// (0x0008833b) clock_digital_number_pane_cp03_ParamLimits

0xb40c,	// (0x0008833b) clock_digital_number_pane_cp03

0xb418,	// (0x00088347) clock_digital_number_pane_cp04_ParamLimits

0xb418,	// (0x00088347) clock_digital_number_pane_cp04

0xb424,	// (0x00088353) clock_digital_separator_pane_ParamLimits

0xb424,	// (0x00088353) clock_digital_separator_pane

0xb430,	// (0x0008835f) popup_clock_digital_window_t1

0xa9bf,	// (0x000878ee) clock_digital_number_pane_g1

0xa9bf,	// (0x000878ee) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0008c13d) clock_digital_number_pane_g

0xa9bf,	// (0x000878ee) clock_digital_separator_pane_g1

0xa9bf,	// (0x000878ee) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0008c13d) clock_digital_separator_pane_g

0xa74c,	// (0x0008767b) bg_popup_window_pane_cp04

0xb44d,	// (0x0008837c) heading_pane_cp03

0xad01,	// (0x00087c30) listscroll_popup_gms_pane

0xa74c,	// (0x0008767b) grid_large_graphic_popup_pane

0xb455,	// (0x00088384) listscroll_popup_gms_pane_g1

0xb45e,	// (0x0008838d) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x0008c1c8) listscroll_popup_gms_pane_g

0xb467,	// (0x00088396) scroll_pane_cp014

0xaa14,	// (0x00087943) cell_large_graphic_popup_pane_ParamLimits

0xaa14,	// (0x00087943) cell_large_graphic_popup_pane

0xaa22,	// (0x00087951) cell_large_graphic_popup_pane_g1_ParamLimits

0xaa22,	// (0x00087951) cell_large_graphic_popup_pane_g1

0xb470,	// (0x0008839f) cell_large_graphic_popup_pane_g2_ParamLimits

0xb470,	// (0x0008839f) cell_large_graphic_popup_pane_g2

0xb47e,	// (0x000883ad) cell_large_graphic_popup_pane_g3_ParamLimits

0xb47e,	// (0x000883ad) cell_large_graphic_popup_pane_g3

0xb48c,	// (0x000883bb) cell_large_graphic_popup_pane_g4_ParamLimits

0xb48c,	// (0x000883bb) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x0008c1cd) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x0008c1cd) cell_large_graphic_popup_pane_g

0xa74c,	// (0x0008767b) grid_highlight_pane_cp010

0xa9bf,	// (0x000878ee) bg_popup_call_pane_g1

0xb49d,	// (0x000883cc) list_single_graphic_popup_conf_pane_ParamLimits

0xb49d,	// (0x000883cc) list_single_graphic_popup_conf_pane

0xb4af,	// (0x000883de) list_highlight_pane_cp01

0xb4b8,	// (0x000883e7) list_single_graphic_popup_conf_pane_g1

0xb4c0,	// (0x000883ef) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x0008c1d6) list_single_graphic_popup_conf_pane_g

0xb4c8,	// (0x000883f7) list_single_graphic_popup_conf_pane_t1

0xb4d6,	// (0x00088405) linegrid_cams_pane_g1

0x28e6,	// (0x0007f815) linegrid_cams_pane_g2

0xace7,	// (0x00087c16) linegrid_cams_pane_g3

0xb4df,	// (0x0008840e) linegrid_cams_pane_g4

0x28ef,	// (0x0007f81e) linegrid_cams_pane_g5

0x28f8,	// (0x0007f827) linegrid_cams_pane_g6

0xacf0,	// (0x00087c1f) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x0008c1db) linegrid_cams_pane_g

0xb4e8,	// (0x00088417) popup_clock_analogue_window

0xb4e8,	// (0x00088417) popup_clock_digital_window

0xa74c,	// (0x0008767b) popup_phob_thumbnail_window

0xa9bf,	// (0x000878ee) call_video_uplink_pane_g1

0xb4f1,	// (0x00088420) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x0008c1ea) call_video_uplink_pane_g

0xb4f9,	// (0x00088428) video_uplink_pane

0xb501,	// (0x00088430) mce_image_pane_g1

0x2903,	// (0x0007f832) mce_image_pane_g2

0x290d,	// (0x0007f83c) mce_image_pane_g3

0x2917,	// (0x0007f846) mce_image_pane_g4

0x291f,	// (0x0007f84e) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x0008c1ef) mce_image_pane_g

0xb50b,	// (0x0008843a) control_top_pane_stacon_cp01_ParamLimits

0xb50b,	// (0x0008843a) control_top_pane_stacon_cp01

0xb51f,	// (0x0008844e) uni_indicator_pane_stacon_cp01_ParamLimits

0xb51f,	// (0x0008844e) uni_indicator_pane_stacon_cp01

0xb530,	// (0x0008845f) bg_popup_sub_pane_cp03

0x2927,	// (0x0007f856) chi_dic_find_pane

0x292f,	// (0x0007f85e) listscroll_chi_dic_pane

0x2938,	// (0x0007f867) main_pane_chidic_g1

0x294b,	// (0x0007f87a) chi_dic_find_pane_t1

0xb53a,	// (0x00088469) find_chidic_pane

0xb543,	// (0x00088472) chi_dic_list_pane_ParamLimits

0xb543,	// (0x00088472) chi_dic_list_pane

0xb554,	// (0x00088483) scroll_pane_cp020

0x2959,	// (0x0007f888) find_chidic_pane_t1

0xa74c,	// (0x0008767b) input_focus_pane_cp06

0x2968,	// (0x0007f897) list_chi_dic_pane_ParamLimits

0x2968,	// (0x0007f897) list_chi_dic_pane

0x297a,	// (0x0007f8a9) list_chi_dic_pane_t1_ParamLimits

0x297a,	// (0x0007f8a9) list_chi_dic_pane_t1

0xa74c,	// (0x0008767b) list_highlight_pane_cp020

0xb55c,	// (0x0008848b) bg_cale_heading_pane_g1

0x298d,	// (0x0007f8bc) bg_cale_heading_pane_g2

0x2995,	// (0x0007f8c4) bg_cale_heading_pane_g3

0x299d,	// (0x0007f8cc) bg_cale_heading_pane_g4

0x29a7,	// (0x0007f8d6) bg_cale_heading_pane_g5

0x29b1,	// (0x0007f8e0) bg_cale_heading_pane_g6

0x29b9,	// (0x0007f8e8) bg_cale_heading_pane_g7

0x29c1,	// (0x0007f8f0) bg_cale_heading_pane_g8

0x29cb,	// (0x0007f8fa) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x0008c1fa) bg_cale_heading_pane_g

0xb55c,	// (0x0008848b) bg_cale_side_pane_g1

0x29d5,	// (0x0007f904) bg_cale_side_pane_g2

0x29df,	// (0x0007f90e) bg_cale_side_pane_g3

0x29e9,	// (0x0007f918) bg_cale_side_pane_g4

0x29f3,	// (0x0007f922) bg_cale_side_pane_g5

0x29fd,	// (0x0007f92c) bg_cale_side_pane_g6

0x2a07,	// (0x0007f936) bg_cale_side_pane_g7

0x2a11,	// (0x0007f940) bg_cale_side_pane_g8

0x2a19,	// (0x0007f948) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x0008c20d) bg_cale_side_pane_g

0x2a21,	// (0x0007f950) popup_call_status_window_ParamLimits

0x2a21,	// (0x0007f950) popup_call_status_window

0xb564,	// (0x00088493) stacon_top_pane

0xb56c,	// (0x0008849b) status_pane_ParamLimits

0xb56c,	// (0x0008849b) status_pane

0xb581,	// (0x000884b0) status_small_pane

0xb589,	// (0x000884b8) control_pane

0xa74c,	// (0x0008767b) stacon_bottom_pane

0xb591,	// (0x000884c0) list_single_mce_smart_pane_t1_ParamLimits

0xb591,	// (0x000884c0) list_single_mce_smart_pane_t1

0xb5a4,	// (0x000884d3) list_single_mce_smart_pane_t2_ParamLimits

0xb5a4,	// (0x000884d3) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x0008c220) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x0008c220) list_single_mce_smart_pane_t

0x2a6e,	// (0x0007f99d) compass_pane

0x2a79,	// (0x0007f9a8) main_location2_pane_t1

0x2a8f,	// (0x0007f9be) main_location2_pane_t2

0x2aa5,	// (0x0007f9d4) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x0008c225) main_location2_pane_t

0xb5c3,	// (0x000884f2) compass_pane_g1_ParamLimits

0xb5c3,	// (0x000884f2) compass_pane_g1

0x2aef,	// (0x0007fa1e) compass_pane_t1

0x2afe,	// (0x0007fa2d) compass_pane_t2

0x0005,

0xf2ff,	// (0x0008c22e) compass_pane_t

0x2b49,	// (0x0007fa78) text_secondary_cp61

0xb5d7,	// (0x00088506) navi_pane_cams_g5

0xb5fa,	// (0x00088529) navi_pane_im_t1

0xb608,	// (0x00088537) navi_pane_mp_g1_ParamLimits

0xb608,	// (0x00088537) navi_pane_mp_g1

0xb61c,	// (0x0008854b) navi_pane_mp_g2_ParamLimits

0xb61c,	// (0x0008854b) navi_pane_mp_g2

0xb628,	// (0x00088557) navi_pane_mp_g3_ParamLimits

0xb628,	// (0x00088557) navi_pane_mp_g3

0x0002,

0xf313,	// (0x0008c242) navi_pane_mp_g_ParamLimits

0xf313,	// (0x0008c242) navi_pane_mp_g

0xb634,	// (0x00088563) navi_pane_mp_t1

0xb642,	// (0x00088571) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x0008c249) navi_pane_mp_t

0xb67e,	// (0x000885ad) navi_pane_vt_g1

0xb634,	// (0x00088563) navi_pane_vt_t1

0xb686,	// (0x000885b5) navi_slider_pane

0xad01,	// (0x00087c30) zooming_pane

0xb68e,	// (0x000885bd) navi_slider_pane_g1

0xb697,	// (0x000885c6) navi_slider_pane_g2

0x0006,

0xf321,	// (0x0008c250) navi_slider_pane_g

0xb6c4,	// (0x000885f3) aid_levels_zoom

0xb6cc,	// (0x000885fb) zooming_pane_g1

0xb6d4,	// (0x00088603) zooming_pane_g2

0xb6d4,	// (0x00088603) zooming_pane_g3

0x0002,

0xf330,	// (0x0008c25f) zooming_pane_g

0xb6dc,	// (0x0008860b) level_10_zoom

0xb6e5,	// (0x00088614) level_11_zoom

0xb6ee,	// (0x0008861d) level_1_zoom

0xb6f7,	// (0x00088626) level_2_zoom

0xb700,	// (0x0008862f) level_3_zoom

0xb709,	// (0x00088638) level_4_zoom

0xb712,	// (0x00088641) level_5_zoom

0xb71b,	// (0x0008864a) level_6_zoom

0xb724,	// (0x00088653) level_7_zoom

0xb72d,	// (0x0008865c) level_8_zoom

0xb736,	// (0x00088665) level_9_zoom

0xb747,	// (0x00088676) popup_phob_thumbnail_window_g1

0xb74f,	// (0x0008867e) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x0008c266) popup_phob_thumbnail_window_g

0x363d,	// (0x0008056c) level_1_location

0x3645,	// (0x00080574) level_2_location

0x364d,	// (0x0008057c) level_3_location

0x3657,	// (0x00080586) level_4_location

0xad01,	// (0x00087c30) level_5_location

0x2c92,	// (0x0007fbc1) mce_icon_pane_g1

0x2c9c,	// (0x0007fbcb) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x0008c26b) mce_icon_pane_g

0xb757,	// (0x00088686) main_mup_pane_g1_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g1

0xb757,	// (0x00088686) main_mup_pane_g2_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g2

0xb757,	// (0x00088686) main_mup_pane_g3_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g3

0xb757,	// (0x00088686) main_mup_pane_g4_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g4

0xb757,	// (0x00088686) main_mup_pane_g5_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g5

0xb757,	// (0x00088686) main_mup_pane_g6_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g6

0xb757,	// (0x00088686) main_mup_pane_g7_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g7

0xb757,	// (0x00088686) main_mup_pane_g8_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g8

0xb757,	// (0x00088686) main_mup_pane_g9_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g9

0xb757,	// (0x00088686) main_mup_pane_g10_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g10

0xb757,	// (0x00088686) main_mup_pane_g11_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g11

0xaa22,	// (0x00087951) main_mup_pane_g12_ParamLimits

0xaa22,	// (0x00087951) main_mup_pane_g12

0xb757,	// (0x00088686) main_mup_pane_g13_ParamLimits

0xb757,	// (0x00088686) main_mup_pane_g13

0x000c,

0xf341,	// (0x0008c270) main_mup_pane_g_ParamLimits

0xf341,	// (0x0008c270) main_mup_pane_g

0xb765,	// (0x00088694) main_mup_pane_t1_ParamLimits

0xb765,	// (0x00088694) main_mup_pane_t1

0xb765,	// (0x00088694) main_mup_pane_t2_ParamLimits

0xb765,	// (0x00088694) main_mup_pane_t2

0xb765,	// (0x00088694) main_mup_pane_t3_ParamLimits

0xb765,	// (0x00088694) main_mup_pane_t3

0xaa72,	// (0x000879a1) main_mup_pane_t4_ParamLimits

0xaa72,	// (0x000879a1) main_mup_pane_t4

0xaa72,	// (0x000879a1) main_mup_pane_t5_ParamLimits

0xaa72,	// (0x000879a1) main_mup_pane_t5

0xaa86,	// (0x000879b5) main_mup_pane_t6_ParamLimits

0xaa86,	// (0x000879b5) main_mup_pane_t6

0x0005,

0xf35c,	// (0x0008c28b) main_mup_pane_t_ParamLimits

0xf35c,	// (0x0008c28b) main_mup_pane_t

0xaa14,	// (0x00087943) mup_progress_pane_ParamLimits

0xaa14,	// (0x00087943) mup_progress_pane

0xb779,	// (0x000886a8) mup_visualizer_pane_ParamLimits

0xb779,	// (0x000886a8) mup_visualizer_pane

0xb779,	// (0x000886a8) mup_volume_pane_ParamLimits

0xb779,	// (0x000886a8) mup_volume_pane

0xaa30,	// (0x0008795f) mup_visualizer_pane_g1_ParamLimits

0xaa30,	// (0x0008795f) mup_visualizer_pane_g1

0xb787,	// (0x000886b6) mup_visualizer_pane_g2_ParamLimits

0xb787,	// (0x000886b6) mup_visualizer_pane_g2

0xaa22,	// (0x00087951) mup_visualizer_pane_g3_ParamLimits

0xaa22,	// (0x00087951) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x0008c298) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x0008c298) mup_visualizer_pane_g

0xaa68,	// (0x00087997) mup_volume_pane_g1

0xaa68,	// (0x00087997) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0008bfbb) mup_volume_pane_g

0xaa68,	// (0x00087997) mup_progress_pane_g1

0xaa68,	// (0x00087997) mup_progress_pane_g2

0xaa68,	// (0x00087997) mup_progress_pane_g3

0x0002,

0xf370,	// (0x0008c29f) mup_progress_pane_g

0xa74c,	// (0x0008767b) bg_popup_window_pane_cp05

0xb795,	// (0x000886c4) heading_pane_cp02_ParamLimits

0xb795,	// (0x000886c4) heading_pane_cp02

0xb7b1,	// (0x000886e0) list_popup_blid_pane

0xb7b9,	// (0x000886e8) list_blid_sat_info_pane_ParamLimits

0xb7b9,	// (0x000886e8) list_blid_sat_info_pane

0xb7cc,	// (0x000886fb) list_blid_sat_info_pane_g1

0xb7d4,	// (0x00088703) list_blid_sat_info_pane_t1

0x2db0,	// (0x0007fcdf) mup_equalizer_pane_ParamLimits

0x2db0,	// (0x0007fcdf) mup_equalizer_pane

0x2dd1,	// (0x0007fd00) mup_equalizer_pane_cp1_ParamLimits

0x2dd1,	// (0x0007fd00) mup_equalizer_pane_cp1

0x2df2,	// (0x0007fd21) mup_equalizer_pane_cp2_ParamLimits

0x2df2,	// (0x0007fd21) mup_equalizer_pane_cp2

0x2e17,	// (0x0007fd46) mup_equalizer_pane_cp3_ParamLimits

0x2e17,	// (0x0007fd46) mup_equalizer_pane_cp3

0x2e40,	// (0x0007fd6f) mup_equalizer_pane_cp4_ParamLimits

0x2e40,	// (0x0007fd6f) mup_equalizer_pane_cp4

0x2e69,	// (0x0007fd98) mup_equalizer_pane_cp5

0x2e81,	// (0x0007fdb0) mup_equalizer_pane_cp6

0x2e99,	// (0x0007fdc8) mup_equalizer_pane_cp7

0xc8b9,	// (0x000897e8) bg_popup_call_poc_act_pane_g9

0xc8c1,	// (0x000897f0) bg_popup_call_poc_act_pane_g10

0xc8c9,	// (0x000897f8) bg_popup_call_poc_act_pane_g11

0x000a,

0xa9a7,	// (0x000878d6) mup_scale_pane

0xa9bf,	// (0x000878ee) mup_scale_pane_g1

0xb7e2,	// (0x00088711) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x0008c2bb) mup_scale_pane_g

0xb806,	// (0x00088735) msg_data_pane

0xb80e,	// (0x0008873d) scroll_pane_cp017

0x03b2,	// (0x0007d2e1) bg_list_pane_cp04_ParamLimits

0x03b2,	// (0x0007d2e1) bg_list_pane_cp04

0xb816,	// (0x00088745) msg_data_pane_g1

0x2ec3,	// (0x0007fdf2) msg_data_pane_g2

0x2ecd,	// (0x0007fdfc) msg_data_pane_g3

0x2ed7,	// (0x0007fe06) msg_data_pane_g4

0x2edf,	// (0x0007fe0e) msg_data_pane_g5

0x2ee7,	// (0x0007fe16) msg_data_pane_g6

0x2eef,	// (0x0007fe1e) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0008c2ca) msg_data_pane_g

0x03da,	// (0x0007d309) msg_text_pane_ParamLimits

0x03da,	// (0x0007d309) msg_text_pane

0x2ef7,	// (0x0007fe26) qrid_highlight_pane_cp011_ParamLimits

0x2ef7,	// (0x0007fe26) qrid_highlight_pane_cp011

0xa74c,	// (0x0008767b) msg_body_pane

0xa9a7,	// (0x000878d6) msg_header_pane

0xb832,	// (0x00088761) input_focus_pane_cp07

0x0424,	// (0x0007d353) msg_header_pane_t1_ParamLimits

0x0424,	// (0x0007d353) msg_header_pane_t1

0x0440,	// (0x0007d36f) msg_header_pane_t2_ParamLimits

0x0440,	// (0x0007d36f) msg_header_pane_t2

0x0001,

0xf3af,	// (0x0008c2de) msg_header_pane_t_ParamLimits

0xf3af,	// (0x0008c2de) msg_header_pane_t

0xb853,	// (0x00088782) msg_body_pane_g1

0x0460,	// (0x0007d38f) msg_body_pane_t1_ParamLimits

0x0460,	// (0x0007d38f) msg_body_pane_t1

0x0491,	// (0x0007d3c0) msg_body_pane_t2_ParamLimits

0x0491,	// (0x0007d3c0) msg_body_pane_t2

0x04a3,	// (0x0007d3d2) msg_body_pane_t3_ParamLimits

0x04a3,	// (0x0007d3d2) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x0008c2e3) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x0008c2e3) msg_body_pane_t

0x2f47,	// (0x0007fe76) main_viewer_pane_g1_ParamLimits

0x2f47,	// (0x0007fe76) main_viewer_pane_g1

0x2f55,	// (0x0007fe84) main_viewer_pane_g2_ParamLimits

0x2f55,	// (0x0007fe84) main_viewer_pane_g2

0x2f63,	// (0x0007fe92) main_viewer_pane_g3_ParamLimits

0x2f63,	// (0x0007fe92) main_viewer_pane_g3

0x2f72,	// (0x0007fea1) main_viewer_pane_g4_ParamLimits

0x2f72,	// (0x0007fea1) main_viewer_pane_g4

0xb873,	// (0x000887a2) main_viewer_pane_g5_ParamLimits

0xb873,	// (0x000887a2) main_viewer_pane_g5

0xb873,	// (0x000887a2) main_viewer_pane_g7_ParamLimits

0xb873,	// (0x000887a2) main_viewer_pane_g7

0xb885,	// (0x000887b4) main_viewer_pane_g8_ParamLimits

0xb885,	// (0x000887b4) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x0008c2f3) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x0008c2f3) main_viewer_pane_g

0xb89d,	// (0x000887cc) viewer_content_pane_ParamLimits

0xb89d,	// (0x000887cc) viewer_content_pane

0x2fb0,	// (0x0007fedf) main_postcard_pane_g1_ParamLimits

0x2fb0,	// (0x0007fedf) main_postcard_pane_g1

0x2fc6,	// (0x0007fef5) main_postcard_pane_g2_ParamLimits

0x2fc6,	// (0x0007fef5) main_postcard_pane_g2

0x2fdc,	// (0x0007ff0b) main_postcard_pane_g3_ParamLimits

0x2fdc,	// (0x0007ff0b) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x0008c304) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x0008c304) main_postcard_pane_g

0x2ff3,	// (0x0007ff22) main_postcard_pane_g4

0xca57,	// (0x00089986) smil_status_volume_pane_g2

0x3036,	// (0x0007ff65) postcard_pane_ParamLimits

0x3036,	// (0x0007ff65) postcard_pane

0xb8ab,	// (0x000887da) postcard_pane_g1_ParamLimits

0xb8ab,	// (0x000887da) postcard_pane_g1

0x3086,	// (0x0007ffb5) postcard_pane_g2_ParamLimits

0x3086,	// (0x0007ffb5) postcard_pane_g2

0x3092,	// (0x0007ffc1) postcard_pane_g3_ParamLimits

0x3092,	// (0x0007ffc1) postcard_pane_g3

0xb8b9,	// (0x000887e8) postcard_pane_g4_ParamLimits

0xb8b9,	// (0x000887e8) postcard_pane_g4

0x309e,	// (0x0007ffcd) postcard_pane_g5_ParamLimits

0x309e,	// (0x0007ffcd) postcard_pane_g5

0x30b3,	// (0x0007ffe2) postcard_pane_g6_ParamLimits

0x30b3,	// (0x0007ffe2) postcard_pane_g6

0xb8ab,	// (0x000887da) postcard_pane_g7_ParamLimits

0xb8ab,	// (0x000887da) postcard_pane_g7

0x0006,

0xf3e2,	// (0x0008c311) postcard_pane_g_ParamLimits

0xf3e2,	// (0x0008c311) postcard_pane_g

0x30cb,	// (0x0007fffa) main_mp2_pane_g1_ParamLimits

0x30cb,	// (0x0007fffa) main_mp2_pane_g1

0x30d9,	// (0x00080008) main_mp2_pane_g2_ParamLimits

0x30d9,	// (0x00080008) main_mp2_pane_g2

0x30e5,	// (0x00080014) main_mp2_pane_g3_ParamLimits

0x30e5,	// (0x00080014) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x0008c320) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x0008c320) main_mp2_pane_g

0x30f1,	// (0x00080020) main_mp2_pane_t1_ParamLimits

0x30f1,	// (0x00080020) main_mp2_pane_t1

0x3108,	// (0x00080037) main_mp2_pane_t2_ParamLimits

0x3108,	// (0x00080037) main_mp2_pane_t2

0x311a,	// (0x00080049) main_mp2_pane_t3_ParamLimits

0x311a,	// (0x00080049) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x0008c327) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x0008c327) main_mp2_pane_t

0xed10,	// (0x0008bc3f) pec_content_pane_ParamLimits

0xed10,	// (0x0008bc3f) pec_content_pane

0xe26e,	// (0x0008b19d) scroll_pane_cp015

0xb779,	// (0x000886a8) pec_attribute_pane_ParamLimits

0xb779,	// (0x000886a8) pec_attribute_pane

0xaa22,	// (0x00087951) pec_content_pane_g1_ParamLimits

0xaa22,	// (0x00087951) pec_content_pane_g1

0xb8c7,	// (0x000887f6) pec_content_pane_t1_ParamLimits

0xb8c7,	// (0x000887f6) pec_content_pane_t1

0xb8db,	// (0x0008880a) pec_content_pane_t2_ParamLimits

0xb8db,	// (0x0008880a) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x0008c32e) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x0008c32e) pec_content_pane_t

0xaa14,	// (0x00087943) list_single_graphic_pane_cp01_ParamLimits

0xaa14,	// (0x00087943) list_single_graphic_pane_cp01

0xa9a7,	// (0x000878d6) bg_popup_sub_pane_cp04

0xb8ef,	// (0x0008881e) popup_mup_playback_window_g1

0xb8fb,	// (0x0008882a) popup_mup_playback_window_t1

0xb910,	// (0x0008883f) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x0008c333) popup_mup_playback_window_t

0xb947,	// (0x00088876) main_image_pane_g1_ParamLimits

0xb947,	// (0x00088876) main_image_pane_g1

0xb98a,	// (0x000888b9) scroll_pane_cp018_ParamLimits

0xb98a,	// (0x000888b9) scroll_pane_cp018

0xb9a2,	// (0x000888d1) scroll_pane_cp016_ParamLimits

0xb9a2,	// (0x000888d1) scroll_pane_cp016

0x31e4,	// (0x00080113) smil2_image_pane_ParamLimits

0x31e4,	// (0x00080113) smil2_image_pane

0x321a,	// (0x00080149) smil2_root_pane_ParamLimits

0x321a,	// (0x00080149) smil2_root_pane

0x3252,	// (0x00080181) smil2_text_pane_ParamLimits

0x3252,	// (0x00080181) smil2_text_pane

0xe26e,	// (0x0008b19d) bg_list_pane_cp06

0xe26e,	// (0x0008b19d) grid_radio_pane

0xa74c,	// (0x0008767b) bg_popup_window_pane_cp06

0xb257,	// (0x00088186) main_fmradio_pane_t1

0xb44d,	// (0x0008837c) heading_pane_cp04

0xb257,	// (0x00088186) main_fmradio_pane_t2

0xc8d1,	// (0x00089800) popup_cale_lunar_info_window_g1

0xb257,	// (0x00088186) main_fmradio_pane_t3

0xc8d9,	// (0x00089808) popup_cale_lunar_info_window_g2

0xb257,	// (0x00088186) main_fmradio_pane_t4

0x0001,

0xb257,	// (0x00088186) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x0008c3f0) popup_cale_lunar_info_window_g

0xf264,	// (0x0008c193) main_fmradio_pane_t

0xe26e,	// (0x0008b19d) wait_bar_pane_cp03

0xaa14,	// (0x00087943) cell_fmradio_pane_ParamLimits

0xaa14,	// (0x00087943) cell_fmradio_pane

0xaa22,	// (0x00087951) cell_fmradio_pane_g1_ParamLimits

0xaa22,	// (0x00087951) cell_fmradio_pane_g1

0xe26e,	// (0x0008b19d) grid_highlight_pane_cp011

0xb9d6,	// (0x00088905) poc_content_pane_ParamLimits

0xb9d6,	// (0x00088905) poc_content_pane

0xb9e8,	// (0x00088917) scroll_pane_cp019

0x32e2,	// (0x00080211) popup_call_poc_act_window_ParamLimits

0x32e2,	// (0x00080211) popup_call_poc_act_window

0x3306,	// (0x00080235) popup_call_poc_inact_window_ParamLimits

0x3306,	// (0x00080235) popup_call_poc_inact_window

0xf49d,	// (0x0008c3cc) bg_popup_call_poc_act_pane_g

0xc849,	// (0x00089778) bg_popup_call_poc_inact_pane_g1

0xc851,	// (0x00089780) bg_popup_call_poc_inact_pane_g2

0xb9f0,	// (0x0008891f) popup_call_poc_act_window_g2

0xc859,	// (0x00089788) bg_popup_call_poc_inact_pane_g3

0xc861,	// (0x00089790) bg_popup_call_poc_inact_pane_g4

0xc869,	// (0x00089798) bg_popup_call_poc_inact_pane_g5

0xb9f8,	// (0x00088927) popup_call_poc_act_window_t1_ParamLimits

0xb9f8,	// (0x00088927) popup_call_poc_act_window_t1

0xba20,	// (0x0008894f) popup_call_poc_act_window_t2_ParamLimits

0xba20,	// (0x0008894f) popup_call_poc_act_window_t2

0xba48,	// (0x00088977) popup_call_poc_act_window_t3_ParamLimits

0xba48,	// (0x00088977) popup_call_poc_act_window_t3

0xba70,	// (0x0008899f) popup_call_poc_act_window_t4_ParamLimits

0xba70,	// (0x0008899f) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x0008c348) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x0008c348) popup_call_poc_act_window_t

0xc871,	// (0x000897a0) bg_popup_call_poc_inact_pane_g6

0xc879,	// (0x000897a8) bg_popup_call_poc_inact_pane_g7

0xc881,	// (0x000897b0) bg_popup_call_poc_inact_pane_g8

0xba82,	// (0x000889b1) popup_call_poc_inact_window_g2

0xc889,	// (0x000897b8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x0008c3b9) bg_popup_call_poc_inact_pane_g

0xba8a,	// (0x000889b9) popup_call_poc_inact_window_t1_ParamLimits

0xba8a,	// (0x000889b9) popup_call_poc_inact_window_t1

0xba9f,	// (0x000889ce) popup_call_poc_inact_window_t2_ParamLimits

0xba9f,	// (0x000889ce) popup_call_poc_inact_window_t2

0xbab4,	// (0x000889e3) popup_call_poc_inact_window_t3_ParamLimits

0xbab4,	// (0x000889e3) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x0008c351) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x0008c351) popup_call_poc_inact_window_t

0xc9cf,	// (0x000898fe) context_pane_ParamLimits

0x3b5a,	// (0x00080a89) signal_pane_ParamLimits

0xad01,	// (0x00087c30) main_call2_pane

0xc9a8,	// (0x000898d7) popup_phob_thumbnail2_window_ParamLimits

0xc9a8,	// (0x000898d7) popup_phob_thumbnail2_window

0xb85b,	// (0x0008878a) aid_hotspot_pointer_arrow_pane

0xb863,	// (0x00088792) aid_hotspot_pointer_hand_pane

0x3605,	// (0x00080534) phob_pre_status_pane_g5

0xed10,	// (0x0008bc3f) cams_zoom_pane_ParamLimits

0xed10,	// (0x0008bc3f) image_vga_pane_ParamLimits

0xaa22,	// (0x00087951) main_camera_pane_g1_ParamLimits

0xaa22,	// (0x00087951) main_camera_pane_g2_ParamLimits

0xaa22,	// (0x00087951) main_camera_pane_g3_ParamLimits

0xaa22,	// (0x00087951) main_camera_pane_g4_ParamLimits

0xaa22,	// (0x00087951) main_camera_pane_g5_ParamLimits

0xaa22,	// (0x00087951) main_camera_pane_g6_ParamLimits

0xaa22,	// (0x00087951) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0008c08c) main_camera_pane_g_ParamLimits

0xaa72,	// (0x000879a1) main_camera_pane_t1_ParamLimits

0xaa72,	// (0x000879a1) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0008c09d) main_camera_pane_t_ParamLimits

0xa9a7,	// (0x000878d6) bg_popup_preview_window_pane_cp01_ParamLimits

0xa9a7,	// (0x000878d6) bg_popup_preview_window_pane_cp01

0xbac9,	// (0x000889f8) popup_phob_thumbnail2_window_g1_ParamLimits

0xbac9,	// (0x000889f8) popup_phob_thumbnail2_window_g1

0xa74c,	// (0x0008767b) call2_cli_visual_pane

0x333a,	// (0x00080269) popup_call2_audio_conf_window_ParamLimits

0x333a,	// (0x00080269) popup_call2_audio_conf_window

0x3362,	// (0x00080291) popup_call2_audio_first_window_ParamLimits

0x3362,	// (0x00080291) popup_call2_audio_first_window

0x33f8,	// (0x00080327) popup_call2_audio_in_window_ParamLimits

0x33f8,	// (0x00080327) popup_call2_audio_in_window

0x3444,	// (0x00080373) popup_call2_audio_out_window_ParamLimits

0x3444,	// (0x00080373) popup_call2_audio_out_window

0x34b6,	// (0x000803e5) popup_call2_audio_second_window_ParamLimits

0x34b6,	// (0x000803e5) popup_call2_audio_second_window

0x351c,	// (0x0008044b) popup_call2_audio_wait_window_ParamLimits

0x351c,	// (0x0008044b) popup_call2_audio_wait_window

0xa74c,	// (0x0008767b) bg_popup_call2_act_pane_cp03

0xa989,	// (0x000878b8) list_conf_pane_cp

0xbad5,	// (0x00088a04) popup_call2_audio_conf_window_t1

0xbae3,	// (0x00088a12) list_single_graphic_popup_conf2_pane_ParamLimits

0xbae3,	// (0x00088a12) list_single_graphic_popup_conf2_pane

0xb4af,	// (0x000883de) list_highlight_pane_cp04

0xbaf6,	// (0x00088a25) list_single_graphic_popup_conf2_pane_g1

0xb4c0,	// (0x000883ef) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x0008c358) list_single_graphic_popup_conf2_pane_g

0xbb00,	// (0x00088a2f) list_single_graphic_popup_conf2_pane_t1

0xbb0e,	// (0x00088a3d) bg_popup_call2_act_pane_cp01_ParamLimits

0xbb0e,	// (0x00088a3d) bg_popup_call2_act_pane_cp01

0xbb98,	// (0x00088ac7) call_type_pane_cp05_ParamLimits

0xbb98,	// (0x00088ac7) call_type_pane_cp05

0xbbec,	// (0x00088b1b) popup_call2_audio_second_window_g1_ParamLimits

0xbbec,	// (0x00088b1b) popup_call2_audio_second_window_g1

0xbc40,	// (0x00088b6f) popup_call2_audio_second_window_g2_ParamLimits

0xbc40,	// (0x00088b6f) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x0008c35d) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x0008c35d) popup_call2_audio_second_window_g

0xbca5,	// (0x00088bd4) popup_call2_audio_second_window_t1_ParamLimits

0xbca5,	// (0x00088bd4) popup_call2_audio_second_window_t1

0xbd60,	// (0x00088c8f) popup_call2_audio_second_window_t2_ParamLimits

0xbd60,	// (0x00088c8f) popup_call2_audio_second_window_t2

0xbdb3,	// (0x00088ce2) popup_call2_audio_second_window_t3_ParamLimits

0xbdb3,	// (0x00088ce2) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x0008c364) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x0008c364) popup_call2_audio_second_window_t

0xa74c,	// (0x0008767b) bg_popup_call2_in_pane_cp02

0xa756,	// (0x00087685) call_type_pane_cp04

0x3556,	// (0x00080485) popup_call2_audio_wait_window_g1

0x355e,	// (0x0008048d) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x0008c36d) popup_call2_audio_wait_window_g

0xa76e,	// (0x0008769d) popup_call2_audio_wait_window_t3

0xbea6,	// (0x00088dd5) bg_popup_call2_act_pane_ParamLimits

0xbea6,	// (0x00088dd5) bg_popup_call2_act_pane

0xbf66,	// (0x00088e95) call_type_pane_cp03_ParamLimits

0xbf66,	// (0x00088e95) call_type_pane_cp03

0xbfca,	// (0x00088ef9) popup_call2_audio_first_window_g1_ParamLimits

0xbfca,	// (0x00088ef9) popup_call2_audio_first_window_g1

0xc03a,	// (0x00088f69) popup_call2_audio_first_window_g2_ParamLimits

0xc03a,	// (0x00088f69) popup_call2_audio_first_window_g2

0xc09e,	// (0x00088fcd) popup_call2_audio_first_window_g3_ParamLimits

0xc09e,	// (0x00088fcd) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x0008c372) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x0008c372) popup_call2_audio_first_window_g

0xc126,	// (0x00089055) popup_call2_audio_first_window_t1_ParamLimits

0xc126,	// (0x00089055) popup_call2_audio_first_window_t1

0xc229,	// (0x00089158) popup_call2_audio_first_window_t4_ParamLimits

0xc229,	// (0x00089158) popup_call2_audio_first_window_t4

0xc30c,	// (0x0008923b) popup_call2_audio_first_window_t5_ParamLimits

0xc30c,	// (0x0008923b) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x0008c37d) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x0008c37d) popup_call2_audio_first_window_t

0xa99f,	// (0x000878ce) bg_popup_call2_act_pane_g1

0xc8e3,	// (0x00089812) popup_cale_lunar_info_window_t1

0xc8f1,	// (0x00089820) popup_cale_lunar_info_window_t2

0xc8ff,	// (0x0008982e) popup_cale_lunar_info_window_t3

0xa74c,	// (0x0008767b) bg_popup_call2_bubble_pane

0xc40d,	// (0x0008933c) bg_popup_call2_in_pane_cp01_ParamLimits

0xc40d,	// (0x0008933c) bg_popup_call2_in_pane_cp01

0xe39c,	// (0x0008b2cb) call_type_pane_cp02

0x3566,	// (0x00080495) popup_call2_audio_out_window_g1_ParamLimits

0x3566,	// (0x00080495) popup_call2_audio_out_window_g1

0xc455,	// (0x00089384) popup_call2_audio_out_window_g2_ParamLimits

0xc455,	// (0x00089384) popup_call2_audio_out_window_g2

0x3592,	// (0x000804c1) popup_call2_audio_out_window_g3_ParamLimits

0x3592,	// (0x000804c1) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x0008c386) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x0008c386) popup_call2_audio_out_window_g

0xc48c,	// (0x000893bb) popup_call2_audio_out_window_t1_ParamLimits

0xc48c,	// (0x000893bb) popup_call2_audio_out_window_t1

0xc4eb,	// (0x0008941a) popup_call2_audio_out_window_t2_ParamLimits

0xc4eb,	// (0x0008941a) popup_call2_audio_out_window_t2

0xc53f,	// (0x0008946e) popup_call2_audio_out_window_t3_ParamLimits

0xc53f,	// (0x0008946e) popup_call2_audio_out_window_t3

0xc555,	// (0x00089484) popup_call2_audio_out_window_t4_ParamLimits

0xc555,	// (0x00089484) popup_call2_audio_out_window_t4

0xc56b,	// (0x0008949a) popup_call2_audio_out_window_t5_ParamLimits

0xc56b,	// (0x0008949a) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x0008c38f) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x0008c38f) popup_call2_audio_out_window_t

0xc5cf,	// (0x000894fe) bg_popup_call2_in_pane_ParamLimits

0xc5cf,	// (0x000894fe) bg_popup_call2_in_pane

0xc62b,	// (0x0008955a) popup_call2_audio_in_window_g1_ParamLimits

0xc62b,	// (0x0008955a) popup_call2_audio_in_window_g1

0xc663,	// (0x00089592) popup_call2_audio_in_window_g2_ParamLimits

0xc663,	// (0x00089592) popup_call2_audio_in_window_g2

0xc69b,	// (0x000895ca) popup_call2_audio_in_window_g3_ParamLimits

0xc69b,	// (0x000895ca) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x0008c39c) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x0008c39c) popup_call2_audio_in_window_g

0xc6f3,	// (0x00089622) popup_call2_audio_in_window_t1_ParamLimits

0xc6f3,	// (0x00089622) popup_call2_audio_in_window_t1

0xc773,	// (0x000896a2) popup_call2_audio_in_window_t2_ParamLimits

0xc773,	// (0x000896a2) popup_call2_audio_in_window_t2

0xc7f3,	// (0x00089722) popup_call2_audio_in_window_t3_ParamLimits

0xc7f3,	// (0x00089722) popup_call2_audio_in_window_t3

0xc80d,	// (0x0008973c) popup_call2_audio_in_window_t4_ParamLimits

0xc80d,	// (0x0008973c) popup_call2_audio_in_window_t4

0xc81f,	// (0x0008974e) popup_call2_audio_in_window_t5_ParamLimits

0xc81f,	// (0x0008974e) popup_call2_audio_in_window_t5

0xc834,	// (0x00089763) popup_call2_audio_in_window_t6_ParamLimits

0xc834,	// (0x00089763) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x0008c3a5) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x0008c3a5) popup_call2_audio_in_window_t

0xa99f,	// (0x000878ce) bg_popup_call2_in_pane_g1

0xc90d,	// (0x0008983c) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x0008c3f5) popup_cale_lunar_info_window_t

0xa9a7,	// (0x000878d6) bg_popup_call2_rect_pane_ParamLimits

0xa9a7,	// (0x000878d6) bg_popup_call2_rect_pane

0xa74c,	// (0x0008767b) call2_cli_visual_graphic_pane

0xa74c,	// (0x0008767b) call2_cli_visual_text_pane

0xca6a,	// (0x00089999) smil_status_volume_pane_g3

0x0002,

0xa9bf,	// (0x000878ee) call2_cli_visual_graphic_pane_g1

0xa9bf,	// (0x000878ee) call2_cli_visual_graphic_pane_g2

0xa9bf,	// (0x000878ee) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x0008c3b2) call2_cli_visual_graphic_pane_g

0xac0e,	// (0x00087b3d) bg_popup_call2_rect_pane_g1

0xabfe,	// (0x00087b2d) bg_popup_call2_rect_pane_g2

0xac06,	// (0x00087b35) bg_popup_call2_rect_pane_g3

0xac16,	// (0x00087b45) bg_popup_call2_rect_pane_g4

0xac1e,	// (0x00087b4d) bg_popup_call2_rect_pane_g5

0xac26,	// (0x00087b55) bg_popup_call2_rect_pane_g6

0xac2e,	// (0x00087b5d) bg_popup_call2_rect_pane_g7

0xac36,	// (0x00087b65) bg_popup_call2_rect_pane_g8

0xac3e,	// (0x00087b6d) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x0008c142) bg_popup_call2_rect_pane_g

0xc849,	// (0x00089778) bg_popup_call2_bubble_pane_g1

0xc851,	// (0x00089780) bg_popup_call2_bubble_pane_g2

0xc859,	// (0x00089788) bg_popup_call2_bubble_pane_g3

0xc861,	// (0x00089790) bg_popup_call2_bubble_pane_g4

0xc869,	// (0x00089798) bg_popup_call2_bubble_pane_g5

0xc871,	// (0x000897a0) bg_popup_call2_bubble_pane_g6

0xc879,	// (0x000897a8) bg_popup_call2_bubble_pane_g7

0xc881,	// (0x000897b0) bg_popup_call2_bubble_pane_g8

0xc889,	// (0x000897b8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x0008c3b9) bg_popup_call2_bubble_pane_g

0x0f27,	// (0x0007de56) aid_cale_week_size_cell_pane

0x159b,	// (0x0007e4ca) aid_cams_cif_uncrop_pane_ParamLimits

0x159b,	// (0x0007e4ca) aid_cams_cif_uncrop_pane

0xed10,	// (0x0008bc3f) aid_cams_size_cell_ParamLimits

0xed10,	// (0x0008bc3f) aid_cams_size_cell

0xed10,	// (0x0008bc3f) grid_cams_pane_ParamLimits

0xed10,	// (0x0008bc3f) linegrid_cams_pane_ParamLimits

0x17b0,	// (0x0007e6df) call_video_pane_t1

0x17ca,	// (0x0007e6f9) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0008c0e9) call_video_pane_t

0x1bf0,	// (0x0007eb1f) aid_cale_month_size_cell_pane_ParamLimits

0x1bf0,	// (0x0007eb1f) aid_cale_month_size_cell_pane

0xf50a,	// (0x0008c439) smil_status_volume_pane_g

0xca77,	// (0x000899a6) volume_smil_pane_ParamLimits

0xa6b2,	// (0x000875e1) aid_popup2_width_pane

0x0e83,	// (0x0007ddb2) cell_qdial_pane_g4_ParamLimits

0x0e83,	// (0x0007ddb2) cell_qdial_pane_g4

0x2acf,	// (0x0007f9fe) aid_blid_cardinal_pane_ParamLimits

0x2adb,	// (0x0007fa0a) aid_blid_destination_pane_ParamLimits

0x2adb,	// (0x0007fa0a) aid_blid_destination_pane

0xa9a7,	// (0x000878d6) bg_popup_call_poc_act_pane_ParamLimits

0xa9a7,	// (0x000878d6) bg_popup_call_poc_act_pane

0xa9a7,	// (0x000878d6) bg_popup_call_poc_inact_pane_ParamLimits

0xa9a7,	// (0x000878d6) bg_popup_call_poc_inact_pane

0xc891,	// (0x000897c0) bg_popup_call_poc_act_pane_g1

0xc899,	// (0x000897c8) bg_popup_call_poc_act_pane_g2

0xc8a1,	// (0x000897d0) bg_popup_call_poc_act_pane_g3

0xc861,	// (0x00089790) bg_popup_call_poc_act_pane_g4

0xc869,	// (0x00089798) bg_popup_call_poc_act_pane_g5

0xc8a9,	// (0x000897d8) bg_popup_call_poc_act_pane_g6

0xc879,	// (0x000897a8) bg_popup_call_poc_act_pane_g7

0xc8b1,	// (0x000897e0) bg_popup_call_poc_act_pane_g8

0xa74c,	// (0x0008767b) main_usb_pane

0xc97f,	// (0x000898ae) popup_cale_lunar_info_window

0x1a85,	// (0x0007e9b4) im_reading_pane_t1_ParamLimits

0xadce,	// (0x00087cfd) list_im_pane_ParamLimits

0xaddf,	// (0x00087d0e) scroll_pane_cp07_ParamLimits

0xa74c,	// (0x0008767b) grid_highlight_pane_cp012

0xa9a7,	// (0x000878d6) mup_scale_pane_ParamLimits

0xaa22,	// (0x00087951) main_usb_pane_g1_ParamLimits

0xaa22,	// (0x00087951) main_usb_pane_g1

0xaa22,	// (0x00087951) main_usb_pane_g2_ParamLimits

0xaa22,	// (0x00087951) main_usb_pane_g2

0x0001,

0xf199,	// (0x0008c0c8) main_usb_pane_g_ParamLimits

0xf199,	// (0x0008c0c8) main_usb_pane_g

0xaa72,	// (0x000879a1) main_usb_pane_t1_ParamLimits

0xaa72,	// (0x000879a1) main_usb_pane_t1

0xaa72,	// (0x000879a1) main_usb_pane_t2_ParamLimits

0xaa72,	// (0x000879a1) main_usb_pane_t2

0xaa72,	// (0x000879a1) main_usb_pane_t3_ParamLimits

0xaa72,	// (0x000879a1) main_usb_pane_t3

0xaa72,	// (0x000879a1) main_usb_pane_t4_ParamLimits

0xaa72,	// (0x000879a1) main_usb_pane_t4

0xaa72,	// (0x000879a1) main_usb_pane_t5_ParamLimits

0xaa72,	// (0x000879a1) main_usb_pane_t5

0xaa72,	// (0x000879a1) main_usb_pane_t6_ParamLimits

0xaa72,	// (0x000879a1) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x0008c3e3) main_usb_pane_t_ParamLimits

0x2a6e,	// (0x0007f99d) aid_text_placing

0x2a79,	// (0x0007f9a8) main_location2_pane_t1_ParamLimits

0x2a8f,	// (0x0007f9be) main_location2_pane_t2_ParamLimits

0x2aa5,	// (0x0007f9d4) main_location2_pane_t3_ParamLimits

0x2abb,	// (0x0007f9ea) main_location2_pane_t4_ParamLimits

0x2abb,	// (0x0007f9ea) main_location2_pane_t4

0xf2f6,	// (0x0008c225) main_location2_pane_t_ParamLimits

0xa9d5,	// (0x00087904) find_pinb_pane_g2_ParamLimits

0xa9d5,	// (0x00087904) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0008bfa1) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0008bfa1) find_pinb_pane_g

0xa9e1,	// (0x00087910) find_pinb_pane_t1_ParamLimits

0xa9f3,	// (0x00087922) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0008bfa6) find_pinb_pane_t_ParamLimits

0xa74c,	// (0x0008767b) main_call3_pane

0x21ed,	// (0x0007f11c) cale_month_day_heading_pane_t1_ParamLimits

0x2273,	// (0x0007f1a2) cale_month_day_heading_pane_t2_ParamLimits

0x22ec,	// (0x0007f21b) cale_month_day_heading_pane_t3_ParamLimits

0x2365,	// (0x0007f294) cale_month_day_heading_pane_t4_ParamLimits

0x23e6,	// (0x0007f315) cale_month_day_heading_pane_t5_ParamLimits

0x246f,	// (0x0007f39e) cale_month_day_heading_pane_t6_ParamLimits

0x24f8,	// (0x0007f427) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0008c121) cale_month_day_heading_pane_t_ParamLimits

0xb044,	// (0x00087f73) smil_status_volume_pane

0x305a,	// (0x0007ff89) postcard_address_pane_ParamLimits

0x305a,	// (0x0007ff89) postcard_address_pane

0x3070,	// (0x0007ff9f) postcard_message_pane_ParamLimits

0x3070,	// (0x0007ff9f) postcard_message_pane

0x35be,	// (0x000804ed) call2_cli_visual_pane_t1_ParamLimits

0x35be,	// (0x000804ed) call2_cli_visual_pane_t1

0xcaa4,	// (0x000899d3) postcard_message_pane_t1_ParamLimits

0xcaa4,	// (0x000899d3) postcard_message_pane_t1

0xca8c,	// (0x000899bb) postcard_address_pane_t1_ParamLimits

0xca8c,	// (0x000899bb) postcard_address_pane_t1

0x3d16,	// (0x00080c45) popup_call3_audio_in_window_ParamLimits

0x3d16,	// (0x00080c45) popup_call3_audio_in_window

0x3b9b,	// (0x00080aca) bg_popup_call3_in_pane_ParamLimits

0x3b9b,	// (0x00080aca) bg_popup_call3_in_pane

0x3c17,	// (0x00080b46) popup_call3_audio_in_window_g1_ParamLimits

0x3c17,	// (0x00080b46) popup_call3_audio_in_window_g1

0x3c37,	// (0x00080b66) popup_call3_audio_in_window_g2_ParamLimits

0x3c37,	// (0x00080b66) popup_call3_audio_in_window_g2

0x3c57,	// (0x00080b86) popup_call3_audio_in_window_g3_ParamLimits

0x3c57,	// (0x00080b86) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x0008c440) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x0008c440) popup_call3_audio_in_window_g

0x3c88,	// (0x00080bb7) popup_call3_audio_in_window_t1_ParamLimits

0x3c88,	// (0x00080bb7) popup_call3_audio_in_window_t1

0x3cc6,	// (0x00080bf5) popup_call3_audio_in_window_t2_ParamLimits

0x3cc6,	// (0x00080bf5) popup_call3_audio_in_window_t2

0x3d04,	// (0x00080c33) popup_call3_audio_in_window_t3_ParamLimits

0x3d04,	// (0x00080c33) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x0008c449) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x0008c449) popup_call3_audio_in_window_t

0xad01,	// (0x00087c30) bg_popup_call3_rect_pane

0xac0e,	// (0x00087b3d) bg_popup_call3_rect_pane_g1

0xabfe,	// (0x00087b2d) bg_popup_call3_rect_pane_g2

0xac06,	// (0x00087b35) bg_popup_call3_rect_pane_g3

0xac16,	// (0x00087b45) bg_popup_call3_rect_pane_g4

0xac1e,	// (0x00087b4d) bg_popup_call3_rect_pane_g5

0xac26,	// (0x00087b55) bg_popup_call3_rect_pane_g6

0xac2e,	// (0x00087b5d) bg_popup_call3_rect_pane_g7

0xe26e,	// (0x0008b19d) mup_visualizer_osc_pane

0xe26e,	// (0x0008b19d) mup_visualizer_spec_pane

0x3bcb,	// (0x00080afa) call3_video_qcif_pane_ParamLimits

0x3bcb,	// (0x00080afa) call3_video_qcif_pane

0x3bde,	// (0x00080b0d) call3_video_qcif_uncrop_pane_ParamLimits

0x3bde,	// (0x00080b0d) call3_video_qcif_uncrop_pane

0x3bee,	// (0x00080b1d) call3_video_subqcif_pane_ParamLimits

0x3bee,	// (0x00080b1d) call3_video_subqcif_pane

0x3c04,	// (0x00080b33) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c04,	// (0x00080b33) call3_video_subqcif_uncrop_pane

0x3c77,	// (0x00080ba6) popup_call3_audio_in_window_g4_ParamLimits

0x3c77,	// (0x00080ba6) popup_call3_audio_in_window_g4

0xe26e,	// (0x0008b19d) mup_spec_half_pane

0xe26e,	// (0x0008b19d) mup_spec_half_pane_cp

0xe26e,	// (0x0008b19d) mup_osc_middle_pane

0xaa68,	// (0x00087997) mup_visualizer_osc_pane_g1

0xca1d,	// (0x0008994c) mup_spec_bar_pane_ParamLimits

0xca1d,	// (0x0008994c) mup_spec_bar_pane

0xaa68,	// (0x00087997) mup_spec_bar_pane_g1

0xaa68,	// (0x00087997) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0008bfbb) mup_spec_bar_pane_g

0x0f27,	// (0x0007de56) aid_cale_week_size_cell_pane_ParamLimits

0x0f41,	// (0x0007de70) bg_cale_heading_pane_ParamLimits

0x0f65,	// (0x0007de94) bg_cale_pane_cp01_ParamLimits

0x0f82,	// (0x0007deb1) cale_week_corner_pane_ParamLimits

0x0fa1,	// (0x0007ded0) cale_week_day_heading_pane_ParamLimits

0x0fca,	// (0x0007def9) cale_week_scroll_pane_g1_ParamLimits

0x0fe9,	// (0x0007df18) cale_week_scroll_pane_g2_ParamLimits

0x1001,	// (0x0007df30) cale_week_scroll_pane_g3_ParamLimits

0x1019,	// (0x0007df48) cale_week_scroll_pane_g4_ParamLimits

0x1031,	// (0x0007df60) cale_week_scroll_pane_g5_ParamLimits

0x1051,	// (0x0007df80) cale_week_scroll_pane_g6_ParamLimits

0x1071,	// (0x0007dfa0) cale_week_scroll_pane_g7_ParamLimits

0x1091,	// (0x0007dfc0) cale_week_scroll_pane_g8_ParamLimits

0x10b5,	// (0x0007dfe4) cale_week_scroll_pane_g9_ParamLimits

0x10cd,	// (0x0007dffc) cale_week_scroll_pane_g10_ParamLimits

0x10e5,	// (0x0007e014) cale_week_scroll_pane_g11_ParamLimits

0x10fd,	// (0x0007e02c) cale_week_scroll_pane_g12_ParamLimits

0x111d,	// (0x0007e04c) cale_week_scroll_pane_g13_ParamLimits

0x1141,	// (0x0007e070) cale_week_scroll_pane_g14_ParamLimits

0x1165,	// (0x0007e094) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0008c032) cale_week_scroll_pane_g_ParamLimits

0x11ad,	// (0x0007e0dc) cale_week_time_pane_ParamLimits

0x11d1,	// (0x0007e100) grid_cale_week_pane_ParamLimits

0xac77,	// (0x00087ba6) listscroll_cale_week_pane_t1

0xac89,	// (0x00087bb8) scroll_pane_cp08_ParamLimits

0x1c68,	// (0x0007eb97) cale_month_corner_pane_ParamLimits

0xb00e,	// (0x00087f3d) cale_month_pane_t1

0x2168,	// (0x0007f097) cale_month_week_pane_ParamLimits

0x28ae,	// (0x0007f7dd) popup_call_status_window_g1_ParamLimits

0x28c2,	// (0x0007f7f1) popup_call_status_window_g2_ParamLimits

0x28d6,	// (0x0007f805) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x0008c1ac) popup_call_status_window_g_ParamLimits

0xb3ce,	// (0x000882fd) aid_call2_pane

0x0416,	// (0x0007d345) msg_header_pane_g1

0x305a,	// (0x0007ff89) postcard_address2_pane_ParamLimits

0x305a,	// (0x0007ff89) postcard_address2_pane

0x3070,	// (0x0007ff9f) postcard_message2_pane_ParamLimits

0x3070,	// (0x0007ff9f) postcard_message2_pane

0x3b68,	// (0x00080a97) message2_row_pane_ParamLimits

0x3b68,	// (0x00080a97) message2_row_pane

0x3b88,	// (0x00080ab7) address2_row_pane_ParamLimits

0x3b88,	// (0x00080ab7) address2_row_pane

0xc9ea,	// (0x00089919) postcard_message2_row_pane_g1

0xc9f2,	// (0x00089921) postcard_message2_row_pane_t1

0xc9ea,	// (0x00089919) address2_row_pane_g1

0xc9f2,	// (0x00089921) address2_row_pane_t1

0x152e,	// (0x0007e45d) aid_size_cell_vorec

0xa74c,	// (0x0008767b) main_rss_pane

0xca00,	// (0x0008992f) rss_list_single_pane_ParamLimits

0xca00,	// (0x0008992f) rss_list_single_pane

0xca0e,	// (0x0008993d) rss_list_single_pane_t1

0xca0e,	// (0x0008993d) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x0008c434) rss_list_single_pane_t

0xa74c,	// (0x0008767b) main_camera2_pane

0xa74c,	// (0x0008767b) main_video2_pane

0xcac0,	// (0x000899ef) cams_zoom_pane_cp2_ParamLimits

0xcac0,	// (0x000899ef) cams_zoom_pane_cp2

0xcac0,	// (0x000899ef) image2_vga_pane_ParamLimits

0xcac0,	// (0x000899ef) image2_vga_pane

0xcace,	// (0x000899fd) main_camera2_pane_g1_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g1

0xcace,	// (0x000899fd) main_camera2_pane_g2_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g2

0xcace,	// (0x000899fd) main_camera2_pane_g3_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g3

0xcace,	// (0x000899fd) main_camera2_pane_g4_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g4

0xcace,	// (0x000899fd) main_camera2_pane_g5_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g5

0xcace,	// (0x000899fd) main_camera2_pane_g6_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g6

0xcace,	// (0x000899fd) main_camera2_pane_g7_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g7

0xcace,	// (0x000899fd) main_camera2_pane_g8_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g8

0x0008,

0xf521,	// (0x0008c450) main_camera2_pane_g_ParamLimits

0xf521,	// (0x0008c450) main_camera2_pane_g

0x3d38,	// (0x00080c67) main_camera2_pane_t1_ParamLimits

0x3d38,	// (0x00080c67) main_camera2_pane_t1

0x3d38,	// (0x00080c67) main_camera2_pane_t2_ParamLimits

0x3d38,	// (0x00080c67) main_camera2_pane_t2

0x3d38,	// (0x00080c67) main_camera2_pane_t3_ParamLimits

0x3d38,	// (0x00080c67) main_camera2_pane_t3

0x3d38,	// (0x00080c67) main_camera2_pane_t4_ParamLimits

0x3d38,	// (0x00080c67) main_camera2_pane_t4

0x0006,

0xf534,	// (0x0008c463) main_camera2_pane_t_ParamLimits

0xf534,	// (0x0008c463) main_camera2_pane_t

0xcaf0,	// (0x00089a1f) cams_zoom_pane_cp4_ParamLimits

0xcaf0,	// (0x00089a1f) cams_zoom_pane_cp4

0xcafe,	// (0x00089a2d) image2_cif_pane_ParamLimits

0xcafe,	// (0x00089a2d) image2_cif_pane

0xed10,	// (0x0008bc3f) image2_subqcif_pane_ParamLimits

0xed10,	// (0x0008bc3f) image2_subqcif_pane

0x3d4c,	// (0x00080c7b) main_video2_pane_g1_ParamLimits

0x3d4c,	// (0x00080c7b) main_video2_pane_g1

0x3d4c,	// (0x00080c7b) main_video2_pane_g2_ParamLimits

0x3d4c,	// (0x00080c7b) main_video2_pane_g2

0x3d4c,	// (0x00080c7b) main_video2_pane_g3_ParamLimits

0x3d4c,	// (0x00080c7b) main_video2_pane_g3

0x3d4c,	// (0x00080c7b) main_video2_pane_g4_ParamLimits

0x3d4c,	// (0x00080c7b) main_video2_pane_g4

0x3d4c,	// (0x00080c7b) main_video2_pane_g5_ParamLimits

0x3d4c,	// (0x00080c7b) main_video2_pane_g5

0x3d4c,	// (0x00080c7b) main_video2_pane_g6_ParamLimits

0x3d4c,	// (0x00080c7b) main_video2_pane_g6

0x0005,

0xf543,	// (0x0008c472) main_video2_pane_g_ParamLimits

0xf543,	// (0x0008c472) main_video2_pane_g

0x3d5a,	// (0x00080c89) main_video2_pane_t1_ParamLimits

0x3d5a,	// (0x00080c89) main_video2_pane_t1

0x3d5a,	// (0x00080c89) main_video2_pane_t2_ParamLimits

0x3d5a,	// (0x00080c89) main_video2_pane_t2

0x3d5a,	// (0x00080c89) main_video2_pane_t3_ParamLimits

0x3d5a,	// (0x00080c89) main_video2_pane_t3

0x0002,

0xf550,	// (0x0008c47f) main_video2_pane_t_ParamLimits

0xf550,	// (0x0008c47f) main_video2_pane_t

0x3669,	// (0x00080598) call_muted_g2

0x0001,

0xf4f7,	// (0x0008c426) call_muted_g

0xa74c,	// (0x0008767b) main_mup2_pane

0xb757,	// (0x00088686) main_mup2_pane_g1_ParamLimits

0xb757,	// (0x00088686) main_mup2_pane_g1

0xb757,	// (0x00088686) main_mup2_pane_g2_ParamLimits

0xb757,	// (0x00088686) main_mup2_pane_g2

0xaa68,	// (0x00087997) main_mup_pane_g13_cp1

0xe26e,	// (0x0008b19d) mup_volume_pane_cp1

0xb757,	// (0x00088686) main_mup2_pane_g4_ParamLimits

0xb757,	// (0x00088686) main_mup2_pane_g4

0xb757,	// (0x00088686) main_mup2_pane_g5_ParamLimits

0xb757,	// (0x00088686) main_mup2_pane_g5

0xb757,	// (0x00088686) main_mup2_pane_g6_ParamLimits

0xb757,	// (0x00088686) main_mup2_pane_g6

0xb757,	// (0x00088686) main_mup2_pane_g7_ParamLimits

0xb757,	// (0x00088686) main_mup2_pane_g7

0x0006,

0xf557,	// (0x0008c486) main_mup2_pane_g_ParamLimits

0xf557,	// (0x0008c486) main_mup2_pane_g

0xb765,	// (0x00088694) main_mup2_pane_t1_ParamLimits

0xb765,	// (0x00088694) main_mup2_pane_t1

0xb765,	// (0x00088694) main_mup2_pane_t2_ParamLimits

0xb765,	// (0x00088694) main_mup2_pane_t2

0xb765,	// (0x00088694) main_mup2_pane_t3_ParamLimits

0xb765,	// (0x00088694) main_mup2_pane_t3

0xb765,	// (0x00088694) main_mup2_pane_t4_ParamLimits

0xb765,	// (0x00088694) main_mup2_pane_t4

0xb765,	// (0x00088694) main_mup2_pane_t5_ParamLimits

0xb765,	// (0x00088694) main_mup2_pane_t5

0xb765,	// (0x00088694) main_mup2_pane_t6_ParamLimits

0xb765,	// (0x00088694) main_mup2_pane_t6

0x0005,

0xf566,	// (0x0008c495) main_mup2_pane_t_ParamLimits

0xf566,	// (0x0008c495) main_mup2_pane_t

0xb779,	// (0x000886a8) mup2_visualizer_pane_ParamLimits

0xb779,	// (0x000886a8) mup2_visualizer_pane

0xb779,	// (0x000886a8) mup_progress_pane_cp_ParamLimits

0xb779,	// (0x000886a8) mup_progress_pane_cp

0xcb0c,	// (0x00089a3b) mup_volume_pane_cp_ParamLimits

0xcb0c,	// (0x00089a3b) mup_volume_pane_cp

0xaa22,	// (0x00087951) mup2_visualizer_pane_g1_ParamLimits

0xaa22,	// (0x00087951) mup2_visualizer_pane_g1

0xaa30,	// (0x0008795f) mup2_visualizer_pane_g2_ParamLimits

0xaa30,	// (0x0008795f) mup2_visualizer_pane_g2

0xaa30,	// (0x0008795f) mup2_visualizer_pane_g3_ParamLimits

0xaa30,	// (0x0008795f) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0008bfab) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0008bfab) mup2_visualizer_pane_g

0xe26e,	// (0x0008b19d) aid_size_cell_fmradio

0x3819,	// (0x00080748) aid_height_parent_landcape

0xae6c,	// (0x00087d9b) wml_content_pane_cp

0xae74,	// (0x00087da3) wml_tabs_pane

0xae7d,	// (0x00087dac) popup_wml_miniature_window

0xae85,	// (0x00087db4) scroll_pane_cp021

0xae99,	// (0x00087dc8) wml_content_pane_comp8

0xa74c,	// (0x0008767b) bg_popup_sub_pane_cp05

0xcb22,	// (0x00089a51) popup_wml_miniature_window_g1

0xcb2a,	// (0x00089a59) wml_miniature_view_pane

0x3d6e,	// (0x00080c9d) aid_size_wml_view

0x3d76,	// (0x00080ca5) wml_miniature_view_pane_g1

0x3d7f,	// (0x00080cae) wml_miniature_view_pane_g2

0x3d88,	// (0x00080cb7) wml_miniature_view_pane_g3

0x3d90,	// (0x00080cbf) wml_miniature_view_pane_g4

0x3d98,	// (0x00080cc7) wml_miniature_view_pane_g5

0x3da0,	// (0x00080ccf) wml_miniature_view_pane_g6

0x3da8,	// (0x00080cd7) wml_miniature_view_pane_g7

0x3db0,	// (0x00080cdf) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x0008c4a2) wml_miniature_view_pane_g

0xcb32,	// (0x00089a61) background_graphic_ParamLimits

0xcb32,	// (0x00089a61) background_graphic

0xcb3e,	// (0x00089a6d) wml_tabs_2_pane

0xcb47,	// (0x00089a76) wml_tabs_3_pane_ParamLimits

0xcb47,	// (0x00089a76) wml_tabs_3_pane

0xcb59,	// (0x00089a88) wml_tabs_4_pane_ParamLimits

0xcb59,	// (0x00089a88) wml_tabs_4_pane

0xcb6f,	// (0x00089a9e) wml_tabs_5_pane_ParamLimits

0xcb6f,	// (0x00089a9e) wml_tabs_5_pane

0xcb89,	// (0x00089ab8) wml_tabs_pane_g2_ParamLimits

0xcb89,	// (0x00089ab8) wml_tabs_pane_g2

0xcb9e,	// (0x00089acd) wml_tabs_pane_g3_ParamLimits

0xcb9e,	// (0x00089acd) wml_tabs_pane_g3

0xcbb3,	// (0x00089ae2) wml_tabs_2_active_pane_ParamLimits

0xcbb3,	// (0x00089ae2) wml_tabs_2_active_pane

0xcbb3,	// (0x00089ae2) wml_tabs_2_passive_pane_ParamLimits

0xcbb3,	// (0x00089ae2) wml_tabs_2_passive_pane

0x3db8,	// (0x00080ce7) wml_tabs_3_active_pane_cp_ParamLimits

0x3db8,	// (0x00080ce7) wml_tabs_3_active_pane_cp

0x3dcd,	// (0x00080cfc) wml_tabs_3_passive_pane_ParamLimits

0x3dcd,	// (0x00080cfc) wml_tabs_3_passive_pane

0x3de0,	// (0x00080d0f) wml_tabs_3_passive_pane_cp_ParamLimits

0x3de0,	// (0x00080d0f) wml_tabs_3_passive_pane_cp

0x3df7,	// (0x00080d26) tabs_4_active_pane

0x3dff,	// (0x00080d2e) tabs_4_passive_pane

0x3e09,	// (0x00080d38) tabs_4_passive_pane_cp

0x3e11,	// (0x00080d40) tabs_4_passive_pane_cp2

0x35dd,	// (0x0008050c) aid_height_text

0xb779,	// (0x000886a8) mup_volume_cont_pane_ParamLimits

0xb779,	// (0x000886a8) mup_volume_cont_pane

0xe26e,	// (0x0008b19d) aid_size_cell_pinb

0xe26e,	// (0x0008b19d) aid_size_list_pinb

0xb779,	// (0x000886a8) mup2_volume_cont_pane_ParamLimits

0xb779,	// (0x000886a8) mup2_volume_cont_pane

0xcbc1,	// (0x00089af0) mup2_volume_cont_pane_g1_ParamLimits

0xcbc1,	// (0x00089af0) mup2_volume_cont_pane_g1

0x09ee,	// (0x0007d91d) aid_size_cell_touch_ParamLimits

0x09ee,	// (0x0007d91d) aid_size_cell_touch

0x0c1a,	// (0x0007db49) touch_pane_ParamLimits

0x0c1a,	// (0x0007db49) touch_pane

0xe26e,	// (0x0008b19d) main_rss2_pane

0xcbe0,	// (0x00089b0f) listscroll_rss2_pane

0xcbe9,	// (0x00089b18) rss2_navigation_pane

0xcbf1,	// (0x00089b20) list_rss2_pane

0xb554,	// (0x00088483) scroll_pane_cp22

0xcbf9,	// (0x00089b28) rss2_navigation_pane_g1

0xcc02,	// (0x00089b31) rss2_navigation_pane_g2

0xcc0a,	// (0x00089b39) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x0008c4b3) rss2_navigation_pane_g

0xcc12,	// (0x00089b41) rss2_navigation_pane_t1

0x3e1b,	// (0x00080d4a) rss2_list_single_pane_ParamLimits

0x3e1b,	// (0x00080d4a) rss2_list_single_pane

0xcc20,	// (0x00089b4f) rss2_list_single_pane_t2

0xcc2e,	// (0x00089b5d) rss2_list_single_pane_t3_ParamLimits

0xcc2e,	// (0x00089b5d) rss2_list_single_pane_t3

0xcc4b,	// (0x00089b7a) rss2_list_single_pane_t4

0x2798,	// (0x0007f6c7) smil_status_pane_g1

0xed10,	// (0x0008bc3f) main_image2_pane_ParamLimits

0xed10,	// (0x0008bc3f) main_image2_pane

0xcace,	// (0x000899fd) main_camera2_pane_g9_ParamLimits

0xcace,	// (0x000899fd) main_camera2_pane_g9

0x3d38,	// (0x00080c67) main_camera2_pane_t5_ParamLimits

0x3d38,	// (0x00080c67) main_camera2_pane_t5

0xcadc,	// (0x00089a0b) main_camera2_pane_t6_ParamLimits

0xcadc,	// (0x00089a0b) main_camera2_pane_t6

0x3e32,	// (0x00080d61) main_image2_pane_g1_ParamLimits

0x3e32,	// (0x00080d61) main_image2_pane_g1

0x328c,	// (0x000801bb) smil2_video_pane_ParamLimits

0x328c,	// (0x000801bb) smil2_video_pane

0xa6ce,	// (0x000875fd) aid_zoom_text_primary_cp

0xa713,	// (0x00087642) popup_preview_fixed_window

0xadc6,	// (0x00087cf5) im_reading_pane_g1

0x3d2a,	// (0x00080c59) cams2_bc_adjust_pane_cp_ParamLimits

0x3d2a,	// (0x00080c59) cams2_bc_adjust_pane_cp

0xb779,	// (0x000886a8) cams2_bc_adjust_pane_ParamLimits

0xb779,	// (0x000886a8) cams2_bc_adjust_pane

0xaa68,	// (0x00087997) cams2_bc_adjust_pane_g1

0xe26e,	// (0x0008b19d) cams2_slider_pane

0xaa68,	// (0x00087997) cams2_slider_pane_g1

0xaa68,	// (0x00087997) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x0008c4ba) cams2_slider_pane_g

0x0cb0,	// (0x0007dbdf) calc_display_pane_ParamLimits

0x0cd5,	// (0x0007dc04) calc_paper_pane_ParamLimits

0x0cf8,	// (0x0007dc27) grid_calc_pane_ParamLimits

0xb430,	// (0x0008835f) popup_clock_digital_window_t1_ParamLimits

0xb973,	// (0x000888a2) main_image_pane_t1

0x0c90,	// (0x0007dbbf) aid_size_cell_calc_ParamLimits

0x0c90,	// (0x0007dbbf) aid_size_cell_calc

0x385f,	// (0x0008078e) popup_blid_sat_info2_window_ParamLimits

0x385f,	// (0x0008078e) popup_blid_sat_info2_window

0xcc59,	// (0x00089b88) aid_size_cell_blid

0xcafe,	// (0x00089a2d) bg_popup_window_pane_cp07

0xcc76,	// (0x00089ba5) grid_popup_blid_pane

0xcc80,	// (0x00089baf) heading_pane_cp05_ParamLimits

0xcc80,	// (0x00089baf) heading_pane_cp05

0xcd4a,	// (0x00089c79) cell_popup_blid_pane_ParamLimits

0xcd4a,	// (0x00089c79) cell_popup_blid_pane

0xcd74,	// (0x00089ca3) cell_popup_blid_pane_g1

0xcd7c,	// (0x00089cab) cell_popup_blid_pane_t1

0xb779,	// (0x000886a8) mup2_indicator_pane_ParamLimits

0xb779,	// (0x000886a8) mup2_indicator_pane

0xe26e,	// (0x0008b19d) mup2_visualizer_osc_pane

0xcb0c,	// (0x00089a3b) mup2_visualizer_spec_pane_ParamLimits

0xcb0c,	// (0x00089a3b) mup2_visualizer_spec_pane

0xe26e,	// (0x0008b19d) mup2_spec_half_pane

0xe26e,	// (0x0008b19d) mup2_spec_half_pane_cp

0xcd8a,	// (0x00089cb9) mup2_spec_bar_pane_ParamLimits

0xcd8a,	// (0x00089cb9) mup2_spec_bar_pane

0xaa68,	// (0x00087997) mup2_spec_bar_pane_g1

0xcda9,	// (0x00089cd8) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x0008c4e0) mup2_spec_bar_pane_g

0xe26e,	// (0x0008b19d) mup2_osc_middle_pane

0xaa68,	// (0x00087997) mup2_visualizer_osc_pane_g1

0xe298,	// (0x0008b1c7) popup_number_entry_window_t1_ParamLimits

0xe2ab,	// (0x0008b1da) popup_number_entry_window_t2_ParamLimits

0xe2bd,	// (0x0008b1ec) popup_number_entry_window_t3_ParamLimits

0xe2cf,	// (0x0008b1fe) popup_number_entry_window_t5_ParamLimits

0xe2cf,	// (0x0008b1fe) popup_number_entry_window_t5

0xf01d,	// (0x0008bf4c) popup_number_entry_window_t_ParamLimits

0xe304,	// (0x0008b233) text_title_cp2_ParamLimits

0xb86b,	// (0x0008879a) aid_hotspot_pointer_text2_pane

0xb891,	// (0x000887c0) main_viewer_pane_g9_ParamLimits

0xb891,	// (0x000887c0) main_viewer_pane_g9

0xb00e,	// (0x00087f3d) cale_month_pane_t1_ParamLimits

0xb079,	// (0x00087fa8) bg_cale_pane_ParamLimits

0xb091,	// (0x00087fc0) list_cale_pane_ParamLimits

0xb0a2,	// (0x00087fd1) listscroll_cale_day_pane_t1

0xb0b4,	// (0x00087fe3) scroll_pane_cp09_ParamLimits

0x2ca4,	// (0x0007fbd3) main_mup_eq_pane_t1_ParamLimits

0x2ca4,	// (0x0007fbd3) main_mup_eq_pane_t1

0x2cc0,	// (0x0007fbef) main_mup_eq_pane_t2_ParamLimits

0x2cc0,	// (0x0007fbef) main_mup_eq_pane_t2

0x2cdc,	// (0x0007fc0b) main_mup_eq_pane_t3_ParamLimits

0x2cdc,	// (0x0007fc0b) main_mup_eq_pane_t3

0x2cfa,	// (0x0007fc29) main_mup_eq_pane_t4_ParamLimits

0x2cfa,	// (0x0007fc29) main_mup_eq_pane_t4

0x2d18,	// (0x0007fc47) main_mup_eq_pane_t5_ParamLimits

0x2d18,	// (0x0007fc47) main_mup_eq_pane_t5

0x2d36,	// (0x0007fc65) main_mup_eq_pane_t6_ParamLimits

0x2d36,	// (0x0007fc65) main_mup_eq_pane_t6

0x2d4c,	// (0x0007fc7b) main_mup_eq_pane_t7_ParamLimits

0x2d4c,	// (0x0007fc7b) main_mup_eq_pane_t7

0x2d62,	// (0x0007fc91) main_mup_eq_pane_t8_ParamLimits

0x2d62,	// (0x0007fc91) main_mup_eq_pane_t8

0x2d78,	// (0x0007fca7) main_mup_eq_pane_t9_ParamLimits

0x2d78,	// (0x0007fca7) main_mup_eq_pane_t9

0x2d94,	// (0x0007fcc3) main_mup_eq_pane_t10_ParamLimits

0x2d94,	// (0x0007fcc3) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x0008c2a6) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x0008c2a6) main_mup_eq_pane_t

0x2e69,	// (0x0007fd98) mup_equalizer_pane_cp5_ParamLimits

0x2e81,	// (0x0007fdb0) mup_equalizer_pane_cp6_ParamLimits

0x2e99,	// (0x0007fdc8) mup_equalizer_pane_cp7_ParamLimits

0xe26e,	// (0x0008b19d) main_gallery_pane

0xca3c,	// (0x0008996b) smil2_volume_pane

0xca44,	// (0x00089973) smil_status_volume_pane_g1_ParamLimits

0xca57,	// (0x00089986) smil_status_volume_pane_g2_ParamLimits

0xca6a,	// (0x00089999) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x0008c439) smil_status_volume_pane_g_ParamLimits

0xcafe,	// (0x00089a2d) bg_popup_window_pane_cp07_ParamLimits

0xcc61,	// (0x00089b90) blid_firmament_pane

0xed10,	// (0x0008bc3f) aid_size_cell_gallery_ParamLimits

0xed10,	// (0x0008bc3f) aid_size_cell_gallery

0xed10,	// (0x0008bc3f) grid_gallery_pane_ParamLimits

0xed10,	// (0x0008bc3f) grid_gallery_pane

0xcafe,	// (0x00089a2d) cell_gallery_pane_ParamLimits

0xcafe,	// (0x00089a2d) cell_gallery_pane

0xed10,	// (0x0008bc3f) bg_cell_gallery_focus_pane_ParamLimits

0xed10,	// (0x0008bc3f) bg_cell_gallery_focus_pane

0xaa22,	// (0x00087951) cell_gallery_pane_g1_ParamLimits

0xaa22,	// (0x00087951) cell_gallery_pane_g1

0xaa22,	// (0x00087951) cell_gallery_pane_g2_ParamLimits

0xaa22,	// (0x00087951) cell_gallery_pane_g2

0xaa22,	// (0x00087951) cell_gallery_pane_g3_ParamLimits

0xaa22,	// (0x00087951) cell_gallery_pane_g3

0xaa30,	// (0x0008795f) cell_gallery_pane_g4_ParamLimits

0xaa30,	// (0x0008795f) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x0008c4e5) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x0008c4e5) cell_gallery_pane_g

0xcdb3,	// (0x00089ce2) bg_cell_gallery_focus_pane_g1

0xcdbb,	// (0x00089cea) bg_cell_gallery_focus_pane_g2

0xcdc3,	// (0x00089cf2) bg_cell_gallery_focus_pane_g3

0xcdcb,	// (0x00089cfa) bg_cell_gallery_focus_pane_g4

0xcdd3,	// (0x00089d02) bg_cell_gallery_focus_pane_g5

0xcddb,	// (0x00089d0a) bg_cell_gallery_focus_pane_g6

0xcde3,	// (0x00089d12) bg_cell_gallery_focus_pane_g7

0xcdeb,	// (0x00089d1a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x0008c4ee) bg_cell_gallery_focus_pane_g

0xcdf3,	// (0x00089d22) aid_firma_cardinal

0xce07,	// (0x00089d36) blid_firmament_pane_t1

0xce1e,	// (0x00089d4d) blid_firmament_pane_t2

0xce35,	// (0x00089d64) blid_firmament_pane_t3

0xce4c,	// (0x00089d7b) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x0008c4ff) blid_firmament_pane_t

0xce63,	// (0x00089d92) blid_sat_info_pane

0xaa68,	// (0x00087997) blid_sat_info_pane_g1

0xaa68,	// (0x00087997) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0008bfbb) blid_sat_info_pane_g

0xce73,	// (0x00089da2) blid_sat_info_pane_t1

0xce81,	// (0x00089db0) smil2_volume_content_pane

0xce8a,	// (0x00089db9) smil2_volume_pane_g1

0xab7b,	// (0x00087aaa) smil2_volume_content_pane_g1

0xce92,	// (0x00089dc1) smil2_volume_content_pane_g2

0xce9b,	// (0x00089dca) smil2_volume_content_pane_g3

0xcea4,	// (0x00089dd3) smil2_volume_content_pane_g4

0xcead,	// (0x00089ddc) smil2_volume_content_pane_g5

0xceb6,	// (0x00089de5) smil2_volume_content_pane_g6

0xcebf,	// (0x00089dee) smil2_volume_content_pane_g7

0xcec8,	// (0x00089df7) smil2_volume_content_pane_g8

0xced1,	// (0x00089e00) smil2_volume_content_pane_g9

0xceda,	// (0x00089e09) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x0008c508) smil2_volume_content_pane_g

0x1297,	// (0x0007e1c6) cale_week_day_heading_pane_t1_ParamLimits

0x12c1,	// (0x0007e1f0) cale_week_day_heading_pane_t2_ParamLimits

0x12f0,	// (0x0007e21f) cale_week_day_heading_pane_t3_ParamLimits

0x131f,	// (0x0007e24e) cale_week_day_heading_pane_t4_ParamLimits

0x134e,	// (0x0007e27d) cale_week_day_heading_pane_t5_ParamLimits

0x1381,	// (0x0007e2b0) cale_week_day_heading_pane_t6_ParamLimits

0x13b8,	// (0x0007e2e7) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0008c053) cale_week_day_heading_pane_t_ParamLimits

0xaca6,	// (0x00087bd5) bg_cale_side_pane_ParamLimits

0x13e2,	// (0x0007e311) cale_week_time_pane_t1_ParamLimits

0x13fc,	// (0x0007e32b) cale_week_time_pane_t2_ParamLimits

0x1416,	// (0x0007e345) cale_week_time_pane_t3_ParamLimits

0x1430,	// (0x0007e35f) cale_week_time_pane_t4_ParamLimits

0x144a,	// (0x0007e379) cale_week_time_pane_t5_ParamLimits

0x1464,	// (0x0007e393) cale_week_time_pane_t6_ParamLimits

0x1482,	// (0x0007e3b1) cale_week_time_pane_t7_ParamLimits

0x14a4,	// (0x0007e3d3) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0008c062) cale_week_time_pane_t_ParamLimits

0x14c8,	// (0x0007e3f7) cell_cale_week_pane_g2_ParamLimits

0xaca6,	// (0x00087bd5) bg_cale_side_pane_cp01_ParamLimits

0x2589,	// (0x0007f4b8) cale_month_week_pane_t1_ParamLimits

0x25a2,	// (0x0007f4d1) cale_month_week_pane_t2_ParamLimits

0x25bb,	// (0x0007f4ea) cale_month_week_pane_t3_ParamLimits

0x25d4,	// (0x0007f503) cale_month_week_pane_t4_ParamLimits

0x25ed,	// (0x0007f51c) cale_month_week_pane_t5_ParamLimits

0x2606,	// (0x0007f535) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0008c130) cale_month_week_pane_t_ParamLimits

0xb020,	// (0x00087f4f) cell_cale_month_pane_g1_ParamLimits

0xe26e,	// (0x0008b19d) main_cale_event_viewer_pane

0xe26e,	// (0x0008b19d) listscroll_cale_event_viewer_pane

0xcee3,	// (0x00089e12) list_cale_ev_pane

0xceeb,	// (0x00089e1a) scroll_pane_cp023

0x3e48,	// (0x00080d77) field_cale_ev_pane_ParamLimits

0x3e48,	// (0x00080d77) field_cale_ev_pane

0xcef7,	// (0x00089e26) field_cale_ev_content_pane_ParamLimits

0xcef7,	// (0x00089e26) field_cale_ev_content_pane

0xcf03,	// (0x00089e32) field_cale_ev_pane_g1_ParamLimits

0xcf03,	// (0x00089e32) field_cale_ev_pane_g1

0xcf0f,	// (0x00089e3e) field_cale_ev_pane_g2_ParamLimits

0xcf0f,	// (0x00089e3e) field_cale_ev_pane_g2

0xcf27,	// (0x00089e56) field_cale_ev_pane_g3_ParamLimits

0xcf27,	// (0x00089e56) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x0008c51d) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x0008c51d) field_cale_ev_pane_g

0xcf3f,	// (0x00089e6e) field_cale_ev_pane_t1_ParamLimits

0xcf3f,	// (0x00089e6e) field_cale_ev_pane_t1

0x3e6c,	// (0x00080d9b) field_cale_ev_content_pane_t1_ParamLimits

0x3e6c,	// (0x00080d9b) field_cale_ev_content_pane_t1

0xb81e,	// (0x0008874d) bg_button_pane_cp01

0x0f15,	// (0x0007de44) listscroll_cale_week_pane_ParamLimits

0xac6e,	// (0x00087b9d) popup_toolbar_window_cp01

0xac77,	// (0x00087ba6) listscroll_cale_week_pane_t1_ParamLimits

0x0f15,	// (0x0007de44) listscroll_cale_day_pane_ParamLimits

0xac6e,	// (0x00087b9d) popup_toolbar_window_cp02

0xb0a2,	// (0x00087fd1) listscroll_cale_day_pane_t1_ParamLimits

0x0f15,	// (0x0007de44) main_cale_month_pane_ParamLimits

0xc9ba,	// (0x000898e9) popup_toolbar_window_cp03_ParamLimits

0xc9ba,	// (0x000898e9) popup_toolbar_window_cp03

0x314a,	// (0x00080079) main_image_pane_g2_ParamLimits

0x314a,	// (0x00080079) main_image_pane_g2

0x315b,	// (0x0008008a) main_image_pane_g3_ParamLimits

0x315b,	// (0x0008008a) main_image_pane_g3

0x0002,

0xf409,	// (0x0008c338) main_image_pane_g_ParamLimits

0xf409,	// (0x0008c338) main_image_pane_g

0xb973,	// (0x000888a2) main_image_pane_t1_ParamLimits

0x316c,	// (0x0008009b) main_image_pane_t2_ParamLimits

0x316c,	// (0x0008009b) main_image_pane_t2

0x317e,	// (0x000800ad) main_image_pane_t3_ParamLimits

0x317e,	// (0x000800ad) main_image_pane_t3

0x31a6,	// (0x000800d5) main_image_pane_t4_ParamLimits

0x31a6,	// (0x000800d5) main_image_pane_t4

0x0003,

0xf410,	// (0x0008c33f) main_image_pane_t_ParamLimits

0xf410,	// (0x0008c33f) main_image_pane_t

0x31c6,	// (0x000800f5) popup_image_details_window_cp01

0x31d0,	// (0x000800ff) popup_toobar_trans_pane_cp01_ParamLimits

0x31d0,	// (0x000800ff) popup_toobar_trans_pane_cp01

0x3952,	// (0x00080881) popup_image_details_window_ParamLimits

0x3952,	// (0x00080881) popup_image_details_window

0xc98b,	// (0x000898ba) popup_image_focus_window

0xcac0,	// (0x000899ef) camera2_autofocus_pane_ParamLimits

0xcac0,	// (0x000899ef) camera2_autofocus_pane

0xe26e,	// (0x0008b19d) bg_popup_sub_pane_cp06

0xcf56,	// (0x00089e85) popup_image_focus_window_g1

0xcf5e,	// (0x00089e8d) popup_image_focus_window_g2

0xcf66,	// (0x00089e95) popup_image_focus_window_g3

0xcf6e,	// (0x00089e9d) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x0008c524) popup_image_focus_window_g

0xcf76,	// (0x00089ea5) popup_image_focus_window_t1

0xcf84,	// (0x00089eb3) popup_image_focus_window_t2

0xcf94,	// (0x00089ec3) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x0008c52d) popup_image_focus_window_t

0xaa22,	// (0x00087951) camera2_autofocus_pane_g1

0xed10,	// (0x0008bc3f) bg_tb_trans_pane_cp01

0xcfa2,	// (0x00089ed1) popup_image_details_window_g1

0xcfb5,	// (0x00089ee4) popup_image_details_window_g2

0x0002,

0xf610,	// (0x0008c53f) popup_image_details_window_g

0xcfde,	// (0x00089f0d) popup_image_details_window_t1

0xcff0,	// (0x00089f1f) popup_image_details_window_t2

0xd009,	// (0x00089f38) popup_image_details_window_t3

0xd01d,	// (0x00089f4c) popup_image_details_window_t4

0xd038,	// (0x00089f67) popup_image_details_window_t5

0x0004,

0xf617,	// (0x0008c546) popup_image_details_window_t

0xaab2,	// (0x000879e1) bg_calc_paper_pane_ParamLimits

0xe26e,	// (0x0008b19d) grid_highlight_pane_cp013

0xaac6,	// (0x000879f5) list_calc_pane_ParamLimits

0xaad8,	// (0x00087a07) scroll_pane_cp024

0xaae0,	// (0x00087a0f) bg_calc_display_pane_ParamLimits

0x0d3a,	// (0x0007dc69) calc_display_pane_t1_ParamLimits

0x0d4f,	// (0x0007dc7e) calc_display_pane_t2_ParamLimits

0xaaec,	// (0x00087a1b) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0008bfd3) calc_display_pane_t_ParamLimits

0x0e1d,	// (0x0007dd4c) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0008bff0) cell_calc_pane_g

0x0e26,	// (0x0007dd55) cell_calc_pane_t1

0xab59,	// (0x00087a88) grid_highlight_pane_cp02_ParamLimits

0xab6f,	// (0x00087a9e) toolbar_button_pane_cp01_ParamLimits

0xab6f,	// (0x00087a9e) toolbar_button_pane_cp01

0xb9b8,	// (0x000888e7) temp_image_control_pane_ParamLimits

0xb9b8,	// (0x000888e7) temp_image_control_pane

0xed10,	// (0x0008bc3f) main_mp3_pane

0xd052,	// (0x00089f81) temp_image_control_pane_g1_ParamLimits

0xd052,	// (0x00089f81) temp_image_control_pane_g1

0xd060,	// (0x00089f8f) temp_image_control_pane_g2_ParamLimits

0xd060,	// (0x00089f8f) temp_image_control_pane_g2

0xd072,	// (0x00089fa1) temp_image_control_pane_g3_ParamLimits

0xd072,	// (0x00089fa1) temp_image_control_pane_g3

0x3e8d,	// (0x00080dbc) temp_image_control_pane_g4_ParamLimits

0x3e8d,	// (0x00080dbc) temp_image_control_pane_g4

0x0003,

0xf622,	// (0x0008c551) temp_image_control_pane_g_ParamLimits

0xf622,	// (0x0008c551) temp_image_control_pane_g

0xd052,	// (0x00089f81) main_mp3_pane_g1

0x3ea0,	// (0x00080dcf) main_mp3_pane_g2

0x0007,

0xf62b,	// (0x0008c55a) main_mp3_pane_g

0xd0a7,	// (0x00089fd6) main_mp3_pane_t1

0xaa30,	// (0x0008795f) main_camera_pane_g8_ParamLimits

0xaa30,	// (0x0008795f) main_camera_pane_g8

0x169f,	// (0x0007e5ce) main_video_pane_g7_ParamLimits

0x169f,	// (0x0007e5ce) main_video_pane_g7

0xaa86,	// (0x000879b5) main_camera2_pane_t7_ParamLimits

0xaa86,	// (0x000879b5) main_camera2_pane_t7

0xae2c,	// (0x00087d5b) scroll_pane_cp025_ParamLimits

0xae2c,	// (0x00087d5b) scroll_pane_cp025

0xae40,	// (0x00087d6f) scroll_pane_cp026_ParamLimits

0xae40,	// (0x00087d6f) scroll_pane_cp026

0xae4f,	// (0x00087d7e) wml_content_pane_ParamLimits

0xe26e,	// (0x0008b19d) main_touch_calib_pane

0x3f72,	// (0x00080ea1) main_touch_calib_pane_g1

0x3f84,	// (0x00080eb3) main_touch_calib_pane_g2

0x3f96,	// (0x00080ec5) main_touch_calib_pane_g3

0x3fa8,	// (0x00080ed7) main_touch_calib_pane_g4

0x0003,

0xf649,	// (0x0008c578) main_touch_calib_pane_g

0x3fba,	// (0x00080ee9) main_touch_calib_pane_t1

0x3fd4,	// (0x00080f03) main_touch_calib_pane_t2

0x0004,

0xf652,	// (0x0008c581) main_touch_calib_pane_t

0xb5cf,	// (0x000884fe) mup_progress_pane_cp02

0xb5ee,	// (0x0008851d) navi_pane_g1

0xb650,	// (0x0008857f) navi_pane_mp_t3

0xed10,	// (0x0008bc3f) main_mp3_pane_ParamLimits

0x3b0b,	// (0x00080a3a) navi_pane_ParamLimits

0xd052,	// (0x00089f81) main_mp3_pane_g1_ParamLimits

0x3ea0,	// (0x00080dcf) main_mp3_pane_g2_ParamLimits

0x3eac,	// (0x00080ddb) main_mp3_pane_g3_ParamLimits

0x3eac,	// (0x00080ddb) main_mp3_pane_g3

0x3eba,	// (0x00080de9) main_mp3_pane_g4_ParamLimits

0x3eba,	// (0x00080de9) main_mp3_pane_g4

0xaa22,	// (0x00087951) main_mp3_pane_g5_ParamLimits

0xaa22,	// (0x00087951) main_mp3_pane_g5

0xd082,	// (0x00089fb1) main_mp3_pane_g6_ParamLimits

0xd082,	// (0x00089fb1) main_mp3_pane_g6

0xd08f,	// (0x00089fbe) main_mp3_pane_g7_ParamLimits

0xd08f,	// (0x00089fbe) main_mp3_pane_g7

0xd09b,	// (0x00089fca) main_mp3_pane_g8_ParamLimits

0xd09b,	// (0x00089fca) main_mp3_pane_g8

0xf62b,	// (0x0008c55a) main_mp3_pane_g_ParamLimits

0x3ec6,	// (0x00080df5) main_mp3_pane_t2

0x3ed4,	// (0x00080e03) main_mp3_pane_t3

0xd0b5,	// (0x00089fe4) main_mp3_pane_t4

0xd0c3,	// (0x00089ff2) main_mp3_pane_t5

0x0005,

0xf63c,	// (0x0008c56b) main_mp3_pane_t

0xd0d1,	// (0x0008a000) mup_progress_pane_cp01

0xc963,	// (0x00089892) aid_zoom_text_secondary2

0xcee3,	// (0x00089e12) list_cale_ev2_pane

0xceeb,	// (0x00089e1a) scroll_pane_cp023_ParamLimits

0x402e,	// (0x00080f5d) field_cale_ev2_pane_ParamLimits

0x402e,	// (0x00080f5d) field_cale_ev2_pane

0x4052,	// (0x00080f81) field_cale_ev2_pane_g1_ParamLimits

0x4052,	// (0x00080f81) field_cale_ev2_pane_g1

0x405e,	// (0x00080f8d) field_cale_ev2_pane_g2_ParamLimits

0x405e,	// (0x00080f8d) field_cale_ev2_pane_g2

0x4076,	// (0x00080fa5) field_cale_ev2_pane_g3_ParamLimits

0x4076,	// (0x00080fa5) field_cale_ev2_pane_g3

0x0003,

0xf65d,	// (0x0008c58c) field_cale_ev2_pane_g_ParamLimits

0xf65d,	// (0x0008c58c) field_cale_ev2_pane_g

0x04b5,	// (0x0007d3e4) field_cale_ev2_pane_t1_ParamLimits

0x04b5,	// (0x0007d3e4) field_cale_ev2_pane_t1

0x04cc,	// (0x0007d3fb) field_cale_ev2_pane_t2_ParamLimits

0x04cc,	// (0x0007d3fb) field_cale_ev2_pane_t2

0x0001,

0xf666,	// (0x0008c595) field_cale_ev2_pane_t_ParamLimits

0xf666,	// (0x0008c595) field_cale_ev2_pane_t

0x300a,	// (0x0007ff39) main_postcard_pane_g5_ParamLimits

0x300a,	// (0x0007ff39) main_postcard_pane_g5

0x3020,	// (0x0007ff4f) main_postcard_pane_g6_ParamLimits

0x3020,	// (0x0007ff4f) main_postcard_pane_g6

0xed10,	// (0x0008bc3f) camera2_autofocus_pane_cp_ParamLimits

0xed10,	// (0x0008bc3f) camera2_autofocus_pane_cp

0xed10,	// (0x0008bc3f) main_mup3_pane

0x40d8,	// (0x00081007) main_mup3_pane_g1_ParamLimits

0x40d8,	// (0x00081007) main_mup3_pane_g1

0x412a,	// (0x00081059) main_mup3_pane_g2_ParamLimits

0x412a,	// (0x00081059) main_mup3_pane_g2

0x418a,	// (0x000810b9) main_mup3_pane_g3_ParamLimits

0x418a,	// (0x000810b9) main_mup3_pane_g3

0x41f2,	// (0x00081121) main_mup3_pane_g4_ParamLimits

0x41f2,	// (0x00081121) main_mup3_pane_g4

0x425a,	// (0x00081189) main_mup3_pane_g5_ParamLimits

0x425a,	// (0x00081189) main_mup3_pane_g5

0xf005,	// (0x0008bf34) main_mup3_pane_g6_ParamLimits

0xf005,	// (0x0008bf34) main_mup3_pane_g6

0xaa30,	// (0x0008795f) main_mup3_pane_g7_ParamLimits

0xaa30,	// (0x0008795f) main_mup3_pane_g7

0x0007,

0xf676,	// (0x0008c5a5) main_mup3_pane_g_ParamLimits

0xf676,	// (0x0008c5a5) main_mup3_pane_g

0x4333,	// (0x00081262) main_mup3_pane_t1_ParamLimits

0x4333,	// (0x00081262) main_mup3_pane_t1

0x4419,	// (0x00081348) main_mup3_pane_t2_ParamLimits

0x4419,	// (0x00081348) main_mup3_pane_t2

0x4503,	// (0x00081432) main_mup3_pane_t4_ParamLimits

0x4503,	// (0x00081432) main_mup3_pane_t4

0x4515,	// (0x00081444) main_mup3_pane_t5_ParamLimits

0x4515,	// (0x00081444) main_mup3_pane_t5

0x45ef,	// (0x0008151e) main_mup3_pane_t6_ParamLimits

0x45ef,	// (0x0008151e) main_mup3_pane_t6

0x0005,

0xf687,	// (0x0008c5b6) main_mup3_pane_t_ParamLimits

0xf687,	// (0x0008c5b6) main_mup3_pane_t

0x4697,	// (0x000815c6) mup3_progress_pane_ParamLimits

0x4697,	// (0x000815c6) mup3_progress_pane

0x46ff,	// (0x0008162e) popup_mup3_control_window_ParamLimits

0x46ff,	// (0x0008162e) popup_mup3_control_window

0xd0e5,	// (0x0008a014) popup_mup3_text_window

0x4717,	// (0x00081646) mup3_progress_pane_t1

0x472e,	// (0x0008165d) mup3_progress_pane_t2

0xd0ed,	// (0x0008a01c) mup3_progress_pane_t3

0x0002,

0xf694,	// (0x0008c5c3) mup3_progress_pane_t

0xd104,	// (0x0008a033) mup_progress_pane_cp03

0xd115,	// (0x0008a044) bg_tb_trans_pane_cp04

0xd115,	// (0x0008a044) mup3_volume_pane

0xd11d,	// (0x0008a04c) popup_mup3_control_window_g1

0xd11d,	// (0x0008a04c) mup3_volume_pane_g1

0xd11d,	// (0x0008a04c) mup3_volume_pane_g2

0xd11d,	// (0x0008a04c) mup3_volume_pane_g3

0x0002,

0xf69b,	// (0x0008c5ca) mup3_volume_pane_g

0xe26e,	// (0x0008b19d) bg_tb_trans_pane_cp03

0xd125,	// (0x0008a054) popup_mup3_text_window_g1

0xd12d,	// (0x0008a05c) popup_mup3_text_window_t1

0xab3a,	// (0x00087a69) list_calc_item_pane_g1_ParamLimits

0xcbd7,	// (0x00089b06) mup_volume_pane_cp_g1

0x3fee,	// (0x00080f1d) main_touch_calib_pane_t3

0x4002,	// (0x00080f31) main_touch_calib_pane_t4

0x4018,	// (0x00080f47) main_touch_calib_pane_t5

0xa6aa,	// (0x000875d9) aid_cell_size_toolbar2

0xa6b2,	// (0x000875e1) aid_popup3_width_pane

0xa6be,	// (0x000875ed) aid_zoom_text_msg_primary

0x1578,	// (0x0007e4a7) vorec_t7

0xaafe,	// (0x00087a2d) bg_calc_paper_pane_g1_ParamLimits

0xab0a,	// (0x00087a39) bg_calc_paper_pane_g2_ParamLimits

0xab16,	// (0x00087a45) bg_calc_paper_pane_g3_ParamLimits

0xab22,	// (0x00087a51) bg_calc_paper_pane_g4_ParamLimits

0xab2e,	// (0x00087a5d) bg_calc_paper_pane_g5_ParamLimits

0x0d9f,	// (0x0007dcce) bg_calc_paper_pane_g6_ParamLimits

0x0db2,	// (0x0007dce1) bg_calc_paper_pane_g7_ParamLimits

0x0dc5,	// (0x0007dcf4) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0008bfda) bg_calc_paper_pane_g_ParamLimits

0x0dd8,	// (0x0007dd07) calc_bg_paper_pane_g9_ParamLimits

0xed10,	// (0x0008bc3f) image_qvga_pane_ParamLimits

0xed10,	// (0x0008bc3f) image_qvga_pane

0xa9a7,	// (0x000878d6) bg_popup_sub_pane_cp04_ParamLimits

0xb8ef,	// (0x0008881e) popup_mup_playback_window_g1_ParamLimits

0xb8fb,	// (0x0008882a) popup_mup_playback_window_t1_ParamLimits

0xb910,	// (0x0008883f) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x0008c333) popup_mup_playback_window_t_ParamLimits

0xaa30,	// (0x0008795f) main_mup2_pane_g3_ParamLimits

0xaa30,	// (0x0008795f) main_mup2_pane_g3

0x1838,	// (0x0007e767) popup_toolbar_window_cp04

0xbc94,	// (0x00088bc3) popup_call2_audio_second_window_g3_ParamLimits

0xbc94,	// (0x00088bc3) popup_call2_audio_second_window_g3

0xc0ac,	// (0x00088fdb) popup_call2_audio_first_window_g4_ParamLimits

0xc0ac,	// (0x00088fdb) popup_call2_audio_first_window_g4

0xc6d3,	// (0x00089602) popup_call2_audio_in_window_g4_ParamLimits

0xc6d3,	// (0x00089602) popup_call2_audio_in_window_g4

0x312c,	// (0x0008005b) aid_area_sk_bg_cut_ParamLimits

0x312c,	// (0x0008005b) aid_area_sk_bg_cut

0xb925,	// (0x00088854) aid_area_sk_bg_cut_2_ParamLimits

0xb925,	// (0x00088854) aid_area_sk_bg_cut_2

0xe26e,	// (0x0008b19d) aid_placing_details_win

0xe26e,	// (0x0008b19d) aid_placing_details_win_2

0xaa22,	// (0x00087951) camera2_autofocus_pane_g1_ParamLimits

0x0bb3,	// (0x0007dae2) popup_fixed_preview_cale_window_ParamLimits

0x0bb3,	// (0x0007dae2) popup_fixed_preview_cale_window

0xb6a0,	// (0x000885cf) navi_slider_pane_g3

0xb6a9,	// (0x000885d8) navi_slider_pane_g4

0xb6b2,	// (0x000885e1) navi_slider_pane_g5

0xb6a0,	// (0x000885cf) navi_slider_pane_g6

0xb6bb,	// (0x000885ea) navi_slider_pane_g7

0xb7eb,	// (0x0008871a) mup_scale_pane_g3

0xb7f4,	// (0x00088723) mup_scale_pane_g4

0xb7fd,	// (0x0008872c) mup_scale_pane_g5

0x2eb1,	// (0x0007fde0) mup_scale_pane_g6

0x2eba,	// (0x0007fde9) mup_scale_pane_g7

0xaa68,	// (0x00087997) cams2_slider_pane_g3

0xaa68,	// (0x00087997) cams2_slider_pane_g4

0xaa68,	// (0x00087997) cams2_slider_pane_g5

0xaa68,	// (0x00087997) cams2_slider_pane_g6

0xaa68,	// (0x00087997) cams2_slider_pane_g7

0xaa68,	// (0x00087997) camera2_autofocus_pane_cp_g1

0xc96b,	// (0x0008989a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc96b,	// (0x0008989a) bg_popup_preview_window_pane_cp02

0xd13b,	// (0x0008a06a) list_fp_cale_pane_ParamLimits

0xd13b,	// (0x0008a06a) list_fp_cale_pane

0xd147,	// (0x0008a076) popup_fixed_preview_cale_window_t1_ParamLimits

0xd147,	// (0x0008a076) popup_fixed_preview_cale_window_t1

0x4745,	// (0x00081674) popup_fixed_preview_cale_window_t2_ParamLimits

0x4745,	// (0x00081674) popup_fixed_preview_cale_window_t2

0x475a,	// (0x00081689) popup_fixed_preview_cale_window_t3_ParamLimits

0x475a,	// (0x00081689) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a2,	// (0x0008c5d1) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a2,	// (0x0008c5d1) popup_fixed_preview_cale_window_t

0x4771,	// (0x000816a0) list_single_fp_cale_pane_ParamLimits

0x4771,	// (0x000816a0) list_single_fp_cale_pane

0xd165,	// (0x0008a094) list_single_fp_cale_pane_g1_ParamLimits

0xd165,	// (0x0008a094) list_single_fp_cale_pane_g1

0xd171,	// (0x0008a0a0) list_single_fp_cale_pane_g2_ParamLimits

0xd171,	// (0x0008a0a0) list_single_fp_cale_pane_g2

0x0002,

0xf6a9,	// (0x0008c5d8) list_single_fp_cale_pane_g_ParamLimits

0xf6a9,	// (0x0008c5d8) list_single_fp_cale_pane_g

0xd18a,	// (0x0008a0b9) list_single_fp_cale_pane_t1_ParamLimits

0xd18a,	// (0x0008a0b9) list_single_fp_cale_pane_t1

0xd19c,	// (0x0008a0cb) list_single_fp_cale_pane_t2_ParamLimits

0xd19c,	// (0x0008a0cb) list_single_fp_cale_pane_t2

0x0001,

0xf6b0,	// (0x0008c5df) list_single_fp_cale_pane_t_ParamLimits

0xf6b0,	// (0x0008c5df) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe26e,	// (0x0008b19d) main_dialer_pane

0xe26e,	// (0x0008b19d) aid_cell_size_keypad

0xe26e,	// (0x0008b19d) dialer_ne_pane

0xe26e,	// (0x0008b19d) grid_dialer_command_1_pane

0xe26e,	// (0x0008b19d) grid_dialer_command_2_pane

0xe26e,	// (0x0008b19d) grid_dialer_keypad_pane

0x4786,	// (0x000816b5) bg_popup_call_pane_cp06_ParamLimits

0x4786,	// (0x000816b5) bg_popup_call_pane_cp06

0x4786,	// (0x000816b5) dialer_ne_clear_pane_ParamLimits

0x4786,	// (0x000816b5) dialer_ne_clear_pane

0xaa68,	// (0x00087997) dialer_ne_pane_g1

0xaa86,	// (0x000879b5) dialer_ne_pane_t1_ParamLimits

0xaa86,	// (0x000879b5) dialer_ne_pane_t1

0x4794,	// (0x000816c3) dialer_ne_pane_t2_ParamLimits

0x4794,	// (0x000816c3) dialer_ne_pane_t2

0x47bc,	// (0x000816eb) dialer_ne_pane_t3_ParamLimits

0x47bc,	// (0x000816eb) dialer_ne_pane_t3

0x0002,

0xf6b5,	// (0x0008c5e4) dialer_ne_pane_t_ParamLimits

0xf6b5,	// (0x0008c5e4) dialer_ne_pane_t

0x47bc,	// (0x000816eb) dialer_ne_pane_t3_copy1_ParamLimits

0x47bc,	// (0x000816eb) dialer_ne_pane_t3_copy1

0xd1cf,	// (0x0008a0fe) cell_dialer_keypad_pane_ParamLimits

0xd1cf,	// (0x0008a0fe) cell_dialer_keypad_pane

0xed10,	// (0x0008bc3f) cell_dialer_command_1_pane_ParamLimits

0xed10,	// (0x0008bc3f) cell_dialer_command_1_pane

0xd1e6,	// (0x0008a115) cell_dialer_command_2_pane_ParamLimits

0xd1e6,	// (0x0008a115) cell_dialer_command_2_pane

0xed10,	// (0x0008bc3f) bg_button_pane_cp02_ParamLimits

0xed10,	// (0x0008bc3f) bg_button_pane_cp02

0xaa22,	// (0x00087951) cell_dialer_keypad_pane_g1_ParamLimits

0xaa22,	// (0x00087951) cell_dialer_keypad_pane_g1

0xed10,	// (0x0008bc3f) bg_button_pane_cp03_ParamLimits

0xed10,	// (0x0008bc3f) bg_button_pane_cp03

0xaa22,	// (0x00087951) cell_dialer_command_1_pane_g1_ParamLimits

0xaa22,	// (0x00087951) cell_dialer_command_1_pane_g1

0xe26e,	// (0x0008b19d) bg_button_pane_cp04

0xaa68,	// (0x00087997) cell_dialer_command_2_pane_g1

0xe26e,	// (0x0008b19d) bg_button_pane_cp06

0xaa68,	// (0x00087997) dialer_ne_clear_pane_g1

0x2bc0,	// (0x0007faef) navi_pane_g2

0x2bee,	// (0x0007fb1d) navi_pane_g3

0x0002,

0xf30c,	// (0x0008c23b) navi_pane_g

0x2c19,	// (0x0007fb48) navi_pane_mv_g2

0x2c40,	// (0x0007fb6f) navi_pane_mv_g5

0x2c48,	// (0x0007fb77) navi_pane_mv_t1

0xaae0,	// (0x00087a0f) main_clock2_pane

0xed10,	// (0x0008bc3f) main_clock2_list_pane_ParamLimits

0xed10,	// (0x0008bc3f) main_clock2_list_pane

0x484f,	// (0x0008177e) main_clock2_pane_t1_ParamLimits

0x484f,	// (0x0008177e) main_clock2_pane_t1

0x488a,	// (0x000817b9) main_clock2_pane_t2_ParamLimits

0x488a,	// (0x000817b9) main_clock2_pane_t2

0x0004,

0xf6c1,	// (0x0008c5f0) main_clock2_pane_t_ParamLimits

0xf6c1,	// (0x0008c5f0) main_clock2_pane_t

0x4920,	// (0x0008184f) popup_clock_analogue_window_cp03_ParamLimits

0x4920,	// (0x0008184f) popup_clock_analogue_window_cp03

0x4945,	// (0x00081874) popup_clock_digital_window_cp02_ParamLimits

0x4945,	// (0x00081874) popup_clock_digital_window_cp02

0x49be,	// (0x000818ed) main_clock2_list_single_pane_ParamLimits

0x49be,	// (0x000818ed) main_clock2_list_single_pane

0xad01,	// (0x00087c30) list_highlight_pane_cp05

0xd227,	// (0x0008a156) main_clock2_list_single_pane_t1

0x1838,	// (0x0007e767) popup_toolbar_window_cp04_ParamLimits

0xaa30,	// (0x0008795f) camera2_autofocus_pane_g2_ParamLimits

0xaa30,	// (0x0008795f) camera2_autofocus_pane_g2

0xaa30,	// (0x0008795f) camera2_autofocus_pane_g3_ParamLimits

0xaa30,	// (0x0008795f) camera2_autofocus_pane_g3

0xaa30,	// (0x0008795f) camera2_autofocus_pane_g4_ParamLimits

0xaa30,	// (0x0008795f) camera2_autofocus_pane_g4

0xaa30,	// (0x0008795f) camera2_autofocus_pane_g5_ParamLimits

0xaa30,	// (0x0008795f) camera2_autofocus_pane_g5

0x0004,

0xf605,	// (0x0008c534) camera2_autofocus_pane_g_ParamLimits

0xf605,	// (0x0008c534) camera2_autofocus_pane_g

0x408e,	// (0x00080fbd) camera2_autofocus_pane_cp_g2

0x4096,	// (0x00080fc5) camera2_autofocus_pane_cp_g3

0x409e,	// (0x00080fcd) camera2_autofocus_pane_cp_g4

0x40a6,	// (0x00080fd5) camera2_autofocus_pane_cp_g5

0x0004,

0xf66b,	// (0x0008c59a) camera2_autofocus_pane_cp_g

0xe26e,	// (0x0008b19d) popup_dialer_spcha_window

0xe26e,	// (0x0008b19d) bg_popup_sub_pane_cp07

0xe26e,	// (0x0008b19d) list_spcha_pane

0xd235,	// (0x0008a164) list_single_spcha_pane_ParamLimits

0xd235,	// (0x0008a164) list_single_spcha_pane

0xe26e,	// (0x0008b19d) list_highlight_pane_cp06

0xb257,	// (0x00088186) list_single_spcha_pane_t1

0xc47d,	// (0x000893ac) popup_call2_audio_out_window_g4_ParamLimits

0xc47d,	// (0x000893ac) popup_call2_audio_out_window_g4

0xe26e,	// (0x0008b19d) main_imed2_pane

0xc995,	// (0x000898c4) popup_imed_adjust2_window

0x396a,	// (0x00080899) popup_imed_trans_window_ParamLimits

0x396a,	// (0x00080899) popup_imed_trans_window

0xccac,	// (0x00089bdb) popup_blid_sat_info2_window_t1

0xccba,	// (0x00089be9) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x0008c4c9) popup_blid_sat_info2_window_t

0x4a79,	// (0x000819a8) aid_size_cell_colour_35

0x4a99,	// (0x000819c8) aid_size_cell_colour_112

0x4ab9,	// (0x000819e8) aid_size_cell_effect

0xb779,	// (0x000886a8) bg_tb_trans_pane_cp02

0x4ad9,	// (0x00081a08) heading_imed_pane

0x4ae5,	// (0x00081a14) listscroll_imed_pane

0xd247,	// (0x0008a176) heading_imed_pane_g1

0xd24f,	// (0x0008a17e) heading_imed_pane_t1

0xd25d,	// (0x0008a18c) grid_imed_colour_35_pane_ParamLimits

0xd25d,	// (0x0008a18c) grid_imed_colour_35_pane

0x4af1,	// (0x00081a20) grid_imed_effect_pane

0xd279,	// (0x0008a1a8) list_imed_aspect_pane

0x4b08,	// (0x00081a37) scroll_pane_cp027_ParamLimits

0x4b08,	// (0x00081a37) scroll_pane_cp027

0x4b19,	// (0x00081a48) cell_imed_effect_pane_ParamLimits

0x4b19,	// (0x00081a48) cell_imed_effect_pane

0xd281,	// (0x0008a1b0) cell_imed_colour_pane_ParamLimits

0xd281,	// (0x0008a1b0) cell_imed_colour_pane

0xd2cb,	// (0x0008a1fa) cell_imed_colour_pane_g1_ParamLimits

0xd2cb,	// (0x0008a1fa) cell_imed_colour_pane_g1

0xd2dc,	// (0x0008a20b) hgihlgiht_grid_pane_cp016_ParamLimits

0xd2dc,	// (0x0008a20b) hgihlgiht_grid_pane_cp016

0x4b44,	// (0x00081a73) cell_imed_effect_pane_g1

0x4b4c,	// (0x00081a7b) grid_highlight_pane_cp017

0xd2ed,	// (0x0008a21c) list_imed_single_pane_ParamLimits

0xd2ed,	// (0x0008a21c) list_imed_single_pane

0xe26e,	// (0x0008b19d) list_highlight_pane_cp07

0xd301,	// (0x0008a230) list_imed_aspect_pane_comp1_t1

0xb779,	// (0x000886a8) bg_tb_trans_pane_cp05

0xd323,	// (0x0008a252) popup_imed_adjust2_window_g1

0xd34a,	// (0x0008a279) popup_imed_adjust2_window_t1

0xd362,	// (0x0008a291) slider_imed_adjust_pane

0xd376,	// (0x0008a2a5) slider_imed_adjust_pane_g1

0xd386,	// (0x0008a2b5) slider_imed_adjust_pane_g2

0xd396,	// (0x0008a2c5) slider_imed_adjust_pane_g3

0xd3a7,	// (0x0008a2d6) slider_imed_adjust_pane_g4

0x0003,

0xf6de,	// (0x0008c60d) slider_imed_adjust_pane_g

0x4b55,	// (0x00081a84) aid_size_cell_clipart2

0xd3b8,	// (0x0008a2e7) grid_imed_clipart_pane

0xb80e,	// (0x0008873d) scroll_pane_cp031

0x4b61,	// (0x00081a90) cell_imed_clipart_pane_ParamLimits

0x4b61,	// (0x00081a90) cell_imed_clipart_pane

0x4b7e,	// (0x00081aad) cell_imed_clipart_pane_g1

0xe26e,	// (0x0008b19d) grid_highlight_pane_cp014

0x482b,	// (0x0008175a) main_clock2_pane_g1_ParamLimits

0x482b,	// (0x0008175a) main_clock2_pane_g1

0x4965,	// (0x00081894) aid_call2_pane_cp10

0x4977,	// (0x000818a6) aid_call_pane_cp10

0xb5c3,	// (0x000884f2) popup_clock_analogue_window_cp10_g1

0xb5c3,	// (0x000884f2) popup_clock_analogue_window_cp10_g2

0x4989,	// (0x000818b8) popup_clock_analogue_window_cp10_g3

0x4989,	// (0x000818b8) popup_clock_analogue_window_cp10_g4

0xb5c3,	// (0x000884f2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cc,	// (0x0008c5fb) popup_clock_analogue_window_cp10_g

0x499f,	// (0x000818ce) popup_clock_analogue_window_cp10_t1

0x49d0,	// (0x000818ff) clock_digital_number_pane_cp10_ParamLimits

0x49d0,	// (0x000818ff) clock_digital_number_pane_cp10

0x49ea,	// (0x00081919) clock_digital_number_pane_cp11_ParamLimits

0x49ea,	// (0x00081919) clock_digital_number_pane_cp11

0x4a04,	// (0x00081933) clock_digital_number_pane_cp12_ParamLimits

0x4a04,	// (0x00081933) clock_digital_number_pane_cp12

0x4a20,	// (0x0008194f) clock_digital_number_pane_cp13_ParamLimits

0x4a20,	// (0x0008194f) clock_digital_number_pane_cp13

0x4a3c,	// (0x0008196b) clock_digital_separator_pane_cp10_ParamLimits

0x4a3c,	// (0x0008196b) clock_digital_separator_pane_cp10

0x4a58,	// (0x00081987) popup_clock_digital_window_cp02_t1_ParamLimits

0x4a58,	// (0x00081987) popup_clock_digital_window_cp02_t1

0xa99f,	// (0x000878ce) clock_digital_number_pane_cp10_g1

0xa99f,	// (0x000878ce) clock_digital_number_pane_cp10_g2

0x0001,

0xf6e7,	// (0x0008c616) clock_digital_number_pane_cp10_g

0xa99f,	// (0x000878ce) clock_digital_separator_pane_cp10_g1

0xa99f,	// (0x000878ce) clock_digital_separator_pane_g2_cp10

0xb65e,	// (0x0008858d) navi_pane_vded_g4

0xb667,	// (0x00088596) navi_pane_vded_g5

0xb670,	// (0x0008859f) navi_pane_vded_t1

0xe26e,	// (0x0008b19d) main_vded_pane

0x4b87,	// (0x00081ab6) main_vded_pane_g1

0x4b93,	// (0x00081ac2) main_vded_pane_g2

0x4b9f,	// (0x00081ace) main_vded_pane_g3

0x0002,

0xf6ec,	// (0x0008c61b) main_vded_pane_g

0x4bab,	// (0x00081ada) main_vded_pane_t1

0x4bb9,	// (0x00081ae8) main_vded_pane_t2

0x0001,

0xf6f3,	// (0x0008c622) main_vded_pane_t

0x4bc7,	// (0x00081af6) vded_slider_pane

0x4bd1,	// (0x00081b00) vded_video_pane

0xd3c2,	// (0x0008a2f1) vded_video_pane_g1

0x4bdd,	// (0x00081b0c) vded_video_pane_g2

0xaa68,	// (0x00087997) vded_video_pane_g3

0x0002,

0xf6f8,	// (0x0008c627) vded_video_pane_g

0xd3cc,	// (0x0008a2fb) vded_slider_pane_g1

0xcbd7,	// (0x00089b06) vded_slider_pane_g2

0xd3d5,	// (0x0008a304) vded_slider_pane_g3

0xd3de,	// (0x0008a30d) vded_slider_pane_g4

0xd3e7,	// (0x0008a316) vded_slider_pane_g5

0x0004,

0xf6ff,	// (0x0008c62e) vded_slider_pane_g

0xf011,	// (0x0008bf40) mup3_rocker_pane_ParamLimits

0xf011,	// (0x0008bf40) mup3_rocker_pane

0xd11d,	// (0x0008a04c) mup3_control_keys_pane_g1

0xd3f0,	// (0x0008a31f) mup3_control_keys_pane_g2

0xd11d,	// (0x0008a04c) mup3_control_keys_pane_g3

0xd3f8,	// (0x0008a327) mup3_control_keys_pane_g4

0x0003,

0xf70a,	// (0x0008c639) mup3_control_keys_pane_g

0x0bea,	// (0x0007db19) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bea,	// (0x0007db19) popup_toolbar2_fixed_window_cp01

0xf011,	// (0x0008bf40) popup_toolbar2_fixed_window_cp02_ParamLimits

0xf011,	// (0x0008bf40) popup_toolbar2_fixed_window_cp02

0xbe06,	// (0x00088d35) popup_call2_audio_second_window_t4_ParamLimits

0xbe06,	// (0x00088d35) popup_call2_audio_second_window_t4

0xc342,	// (0x00089271) popup_call2_audio_first_window_t6_ParamLimits

0xc342,	// (0x00089271) popup_call2_audio_first_window_t6

0xc580,	// (0x000894af) popup_call2_audio_out_window_t6_ParamLimits

0xc580,	// (0x000894af) popup_call2_audio_out_window_t6

0xe26e,	// (0x0008b19d) main_vitu_pane

0xed10,	// (0x0008bc3f) aid_size_cell_itu_ParamLimits

0xed10,	// (0x0008bc3f) aid_size_cell_itu

0xed10,	// (0x0008bc3f) bg_popup_window_pane_cp08_ParamLimits

0xed10,	// (0x0008bc3f) bg_popup_window_pane_cp08

0xed10,	// (0x0008bc3f) field_vitu_entry_pane_ParamLimits

0xed10,	// (0x0008bc3f) field_vitu_entry_pane

0xed10,	// (0x0008bc3f) grid_vitu_function_pane_ParamLimits

0xed10,	// (0x0008bc3f) grid_vitu_function_pane

0xed10,	// (0x0008bc3f) grid_vitu_itu_pane_ParamLimits

0xed10,	// (0x0008bc3f) grid_vitu_itu_pane

0xed10,	// (0x0008bc3f) cell_vitu_itu_pane_ParamLimits

0xed10,	// (0x0008bc3f) cell_vitu_itu_pane

0xed10,	// (0x0008bc3f) cell_vitu_function_pane_ParamLimits

0xed10,	// (0x0008bc3f) cell_vitu_function_pane

0xed10,	// (0x0008bc3f) bg_popup_sub_pane_cp08_ParamLimits

0xed10,	// (0x0008bc3f) bg_popup_sub_pane_cp08

0xaa72,	// (0x000879a1) field_vitu_entry_pane_t1_ParamLimits

0xaa72,	// (0x000879a1) field_vitu_entry_pane_t1

0xd400,	// (0x0008a32f) field_vitu_entry_pane_t2_ParamLimits

0xd400,	// (0x0008a32f) field_vitu_entry_pane_t2

0x0001,

0xf713,	// (0x0008c642) field_vitu_entry_pane_t_ParamLimits

0xf713,	// (0x0008c642) field_vitu_entry_pane_t

0xcafe,	// (0x00089a2d) bg_button_pane_cp05_ParamLimits

0xcafe,	// (0x00089a2d) bg_button_pane_cp05

0xd41d,	// (0x0008a34c) cell_vitu_itu_pane_g1

0xb765,	// (0x00088694) cell_vitu_itu_pane_t1_ParamLimits

0xb765,	// (0x00088694) cell_vitu_itu_pane_t1

0xb765,	// (0x00088694) cell_vitu_itu_pane_t2_ParamLimits

0xb765,	// (0x00088694) cell_vitu_itu_pane_t2

0x0002,

0xf718,	// (0x0008c647) cell_vitu_itu_pane_t_ParamLimits

0xf718,	// (0x0008c647) cell_vitu_itu_pane_t

0xe26e,	// (0x0008b19d) bg_button_pane_cp07

0xaa68,	// (0x00087997) cell_vitu_function_pane_g1

0xaa60,	// (0x0008798f) main_calc_pane_g1

0x0a12,	// (0x0007d941) aid_visual_content_pane

0xe26e,	// (0x0008b19d) main_vradio_pane

0xaa22,	// (0x00087951) main_vradio_pane_g1_ParamLimits

0xaa22,	// (0x00087951) main_vradio_pane_g1

0xaa30,	// (0x0008795f) main_vradio_pane_g2_ParamLimits

0xaa30,	// (0x0008795f) main_vradio_pane_g2

0x0001,

0xf71f,	// (0x0008c64e) main_vradio_pane_g_ParamLimits

0xf71f,	// (0x0008c64e) main_vradio_pane_g

0xaa72,	// (0x000879a1) main_vradio_pane_t1_ParamLimits

0xaa72,	// (0x000879a1) main_vradio_pane_t1

0xaa72,	// (0x000879a1) main_vradio_pane_t2_ParamLimits

0xaa72,	// (0x000879a1) main_vradio_pane_t2

0xaa86,	// (0x000879b5) main_vradio_pane_t3_ParamLimits

0xaa86,	// (0x000879b5) main_vradio_pane_t3

0x0002,

0xf724,	// (0x0008c653) main_vradio_pane_t_ParamLimits

0xf724,	// (0x0008c653) main_vradio_pane_t

0xed10,	// (0x0008bc3f) vradio_rocker_control_pane_ParamLimits

0xed10,	// (0x0008bc3f) vradio_rocker_control_pane

0xed10,	// (0x0008bc3f) vradio_station_info_pane_ParamLimits

0xed10,	// (0x0008bc3f) vradio_station_info_pane

0xed10,	// (0x0008bc3f) vradio_frequency_info_pane_ParamLimits

0xed10,	// (0x0008bc3f) vradio_frequency_info_pane

0xaa68,	// (0x00087997) vradio_station_info_pane_g1

0xb765,	// (0x00088694) vradio_station_info_pane_t1_ParamLimits

0xb765,	// (0x00088694) vradio_station_info_pane_t1

0xaa86,	// (0x000879b5) vradio_station_info_pane_t2_ParamLimits

0xaa86,	// (0x000879b5) vradio_station_info_pane_t2

0x0001,

0xf72b,	// (0x0008c65a) vradio_station_info_pane_t_ParamLimits

0xf72b,	// (0x0008c65a) vradio_station_info_pane_t

0xe26e,	// (0x0008b19d) vradio_tuning_pane

0x4be6,	// (0x00081b15) vradio_rocker_control_pane_g1

0xd439,	// (0x0008a368) vradio_rocker_control_pane_g2

0x4bf0,	// (0x00081b1f) vradio_rocker_control_pane_g3

0x4bfa,	// (0x00081b29) vradio_rocker_control_pane_g4

0x4c04,	// (0x00081b33) vradio_rocker_control_pane_g5

0x0004,

0xf730,	// (0x0008c65f) vradio_rocker_control_pane_g

0xaa68,	// (0x00087997) vradio_frequency_info_pane_g1

0xaa72,	// (0x000879a1) vradio_frequency_info_pane_t1_ParamLimits

0xaa72,	// (0x000879a1) vradio_frequency_info_pane_t1

0x4c0e,	// (0x00081b3d) vradio_tuning_pane_g1

0x4c19,	// (0x00081b48) vradio_tuning_pane_t1

0xa6d6,	// (0x00087605) area_side_right_pane_ParamLimits

0xa6d6,	// (0x00087605) area_side_right_pane

0xc92a,	// (0x00089859) status_small_pane_g1

0xc932,	// (0x00089861) status_small_pane_g2

0xc93b,	// (0x0008986a) status_small_pane_g3

0xc944,	// (0x00089873) status_small_pane_g4

0x0003,

0xf4fc,	// (0x0008c42b) status_small_pane_g

0xc94d,	// (0x0008987c) status_small_pane_t1

0xe26e,	// (0x0008b19d) main_video3_pane

0xe26e,	// (0x0008b19d) cams_zoom_vslider_pane

0xd441,	// (0x0008a370) image3_wide_pane_ParamLimits

0xd441,	// (0x0008a370) image3_wide_pane

0xe26e,	// (0x0008b19d) image3_wide_small_pane

0xd45b,	// (0x0008a38a) main_video3_pane_g1_ParamLimits

0xd45b,	// (0x0008a38a) main_video3_pane_g1

0xd45b,	// (0x0008a38a) main_video3_pane_g2_ParamLimits

0xd45b,	// (0x0008a38a) main_video3_pane_g2

0x0001,

0xf73b,	// (0x0008c66a) main_video3_pane_g_ParamLimits

0xf73b,	// (0x0008c66a) main_video3_pane_g

0xd479,	// (0x0008a3a8) main_video3_pane_t1_ParamLimits

0xd479,	// (0x0008a3a8) main_video3_pane_t1

0xd479,	// (0x0008a3a8) main_video3_pane_t2_ParamLimits

0xd479,	// (0x0008a3a8) main_video3_pane_t2

0xd479,	// (0x0008a3a8) main_video3_pane_t3_ParamLimits

0xd479,	// (0x0008a3a8) main_video3_pane_t3

0x0002,

0xf740,	// (0x0008c66f) main_video3_pane_t_ParamLimits

0xf740,	// (0x0008c66f) main_video3_pane_t

0xaa68,	// (0x00087997) cams_zoom_vslider_pane_g1

0xaa68,	// (0x00087997) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0008bfbb) cams_zoom_vslider_pane_g

0xe26e,	// (0x0008b19d) small_slider_vertical_pane

0xaa68,	// (0x00087997) small_slider_vertical_pane_g1

0xaa68,	// (0x00087997) small_slider_vertical_pane_g2

0xd4a0,	// (0x0008a3cf) small_slider_vertical_pane_g3

0x0002,

0xf747,	// (0x0008c676) small_slider_vertical_pane_g

0xe26e,	// (0x0008b19d) main_hwr_training_pane

0xd4a9,	// (0x0008a3d8) hwr_training_instruct_pane_ParamLimits

0xd4a9,	// (0x0008a3d8) hwr_training_instruct_pane

0x4c28,	// (0x00081b57) hwr_training_navi_pane_ParamLimits

0x4c28,	// (0x00081b57) hwr_training_navi_pane

0x4c47,	// (0x00081b76) hwr_training_write_pane_ParamLimits

0x4c47,	// (0x00081b76) hwr_training_write_pane

0xe26e,	// (0x0008b19d) bg_frame_shadow_pane

0xd4e0,	// (0x0008a40f) hwr_training_write_pane_g1

0xd4e8,	// (0x0008a417) hwr_training_write_pane_g2

0xd4f0,	// (0x0008a41f) hwr_training_write_pane_g3

0xd4f8,	// (0x0008a427) hwr_training_write_pane_g4

0xd500,	// (0x0008a42f) hwr_training_write_pane_g5

0xd508,	// (0x0008a437) hwr_training_write_pane_g6

0xd510,	// (0x0008a43f) hwr_training_write_pane_g7

0x0006,

0xf74e,	// (0x0008c67d) hwr_training_write_pane_g

0xd518,	// (0x0008a447) hwr_training_navi_pane_g1_ParamLimits

0xd518,	// (0x0008a447) hwr_training_navi_pane_g1

0xd52a,	// (0x0008a459) hwr_training_navi_pane_g2_ParamLimits

0xd52a,	// (0x0008a459) hwr_training_navi_pane_g2

0xd53c,	// (0x0008a46b) hwr_training_navi_pane_g3_ParamLimits

0xd53c,	// (0x0008a46b) hwr_training_navi_pane_g3

0xd54c,	// (0x0008a47b) hwr_training_navi_pane_g4_ParamLimits

0xd54c,	// (0x0008a47b) hwr_training_navi_pane_g4

0x0004,

0xf75d,	// (0x0008c68c) hwr_training_navi_pane_g_ParamLimits

0xf75d,	// (0x0008c68c) hwr_training_navi_pane_g

0xd559,	// (0x0008a488) hwr_training_navi_pane_t1

0x4c8f,	// (0x00081bbe) list_single_hwr_training_instruct_pane_ParamLimits

0x4c8f,	// (0x00081bbe) list_single_hwr_training_instruct_pane

0xd567,	// (0x0008a496) list_single_hwr_training_instruct_pane_t1

0xcdb3,	// (0x00089ce2) bg_frame_shadow_pane_g1

0xd576,	// (0x0008a4a5) bg_frame_shadow_pane_g2

0xd57e,	// (0x0008a4ad) bg_frame_shadow_pane_g3

0xd586,	// (0x0008a4b5) bg_frame_shadow_pane_g4

0xd58e,	// (0x0008a4bd) bg_frame_shadow_pane_g5

0xd596,	// (0x0008a4c5) bg_frame_shadow_pane_g6

0xd59e,	// (0x0008a4cd) bg_frame_shadow_pane_g7

0xabbc,	// (0x00087aeb) bg_frame_shadow_pane_g8

0x0007,

0xf768,	// (0x0008c697) bg_frame_shadow_pane_g

0xe26e,	// (0x0008b19d) main_video_tele_dialer_pane

0x4cab,	// (0x00081bda) aid_size_cell_video_keypad_ParamLimits

0x4cab,	// (0x00081bda) aid_size_cell_video_keypad

0x4cc5,	// (0x00081bf4) grid_video_dialer_keypad_pane_ParamLimits

0x4cc5,	// (0x00081bf4) grid_video_dialer_keypad_pane

0x4d11,	// (0x00081c40) video_down_pane_cp_ParamLimits

0x4d11,	// (0x00081c40) video_down_pane_cp

0x4d43,	// (0x00081c72) cell_video_dialer_keypad_pane_ParamLimits

0x4d43,	// (0x00081c72) cell_video_dialer_keypad_pane

0xd5a6,	// (0x0008a4d5) bg_button_pane_cp08_ParamLimits

0xd5a6,	// (0x0008a4d5) bg_button_pane_cp08

0x4d69,	// (0x00081c98) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4d69,	// (0x00081c98) cell_video_dialer_keypad_pane_g1

0xf011,	// (0x0008bf40) mup3_rocker2_pane_ParamLimits

0xf011,	// (0x0008bf40) mup3_rocker2_pane

0xaa68,	// (0x00087997) mup3_rocker2_pane_g1

0x3837,	// (0x00080766) main_dialer2_pane

0xe26e,	// (0x0008b19d) main_mp4_pane

0xd5d0,	// (0x0008a4ff) main_mp4_pane_g1_ParamLimits

0xd5d0,	// (0x0008a4ff) main_mp4_pane_g1

0xd5d0,	// (0x0008a4ff) main_mp4_pane_g2_ParamLimits

0xd5d0,	// (0x0008a4ff) main_mp4_pane_g2

0x4da4,	// (0x00081cd3) main_mp4_pane_g3_ParamLimits

0x4da4,	// (0x00081cd3) main_mp4_pane_g3

0xd5ee,	// (0x0008a51d) main_mp4_pane_g4_ParamLimits

0xd5ee,	// (0x0008a51d) main_mp4_pane_g4

0xd616,	// (0x0008a545) main_mp4_pane_g5_ParamLimits

0xd616,	// (0x0008a545) main_mp4_pane_g5

0x0007,

0xf788,	// (0x0008c6b7) main_mp4_pane_g_ParamLimits

0xf788,	// (0x0008c6b7) main_mp4_pane_g

0xd67e,	// (0x0008a5ad) main_mp4_pane_t1_ParamLimits

0xd67e,	// (0x0008a5ad) main_mp4_pane_t1

0xd6e0,	// (0x0008a60f) main_mp4_pane_t2_ParamLimits

0xd6e0,	// (0x0008a60f) main_mp4_pane_t2

0xd744,	// (0x0008a673) main_mp4_pane_t3_ParamLimits

0xd744,	// (0x0008a673) main_mp4_pane_t3

0xd7a2,	// (0x0008a6d1) main_mp4_pane_t4_ParamLimits

0xd7a2,	// (0x0008a6d1) main_mp4_pane_t4

0x0003,

0xf799,	// (0x0008c6c8) main_mp4_pane_t_ParamLimits

0xf799,	// (0x0008c6c8) main_mp4_pane_t

0xd800,	// (0x0008a72f) mp4_progress_pane_ParamLimits

0xd800,	// (0x0008a72f) mp4_progress_pane

0xe3b6,	// (0x0008b2e5) mp4_rocker_pane_ParamLimits

0xe3b6,	// (0x0008b2e5) mp4_rocker_pane

0xe3ca,	// (0x0008b2f9) mp4_progress_pane_t1

0xe3e8,	// (0x0008b317) mp4_progress_pane_t2

0x0001,

0xf7a2,	// (0x0008c6d1) mp4_progress_pane_t

0xe407,	// (0x0008b336) mup_progress_pane_cp04

0xaa68,	// (0x00087997) mp4_rocker_pane_g1

0xed10,	// (0x0008bc3f) aid_cell_size_keypad2_ParamLimits

0xed10,	// (0x0008bc3f) aid_cell_size_keypad2

0xed10,	// (0x0008bc3f) dialer2_ne_pane_ParamLimits

0xed10,	// (0x0008bc3f) dialer2_ne_pane

0xed10,	// (0x0008bc3f) grid_dialer2_keypad_pane_ParamLimits

0xed10,	// (0x0008bc3f) grid_dialer2_keypad_pane

0xcafe,	// (0x00089a2d) bg_popup_call_pane_cp07_ParamLimits

0xcafe,	// (0x00089a2d) bg_popup_call_pane_cp07

0x4dd6,	// (0x00081d05) dialer2_ne_pane_t1_ParamLimits

0x4dd6,	// (0x00081d05) dialer2_ne_pane_t1

0x4e16,	// (0x00081d45) cell_dialer2_keypad_pane_ParamLimits

0x4e16,	// (0x00081d45) cell_dialer2_keypad_pane

0xcafe,	// (0x00089a2d) bg_button_pane_pane_cp04_ParamLimits

0xcafe,	// (0x00089a2d) bg_button_pane_pane_cp04

0xaa22,	// (0x00087951) cell_dialer2_keypad_pane_g1_ParamLimits

0xaa22,	// (0x00087951) cell_dialer2_keypad_pane_g1

0x172e,	// (0x0007e65d) aid_placing_vt_set_content_ParamLimits

0x172e,	// (0x0007e65d) aid_placing_vt_set_content

0x1752,	// (0x0007e681) aid_placing_vt_set_title_ParamLimits

0x1752,	// (0x0007e681) aid_placing_vt_set_title

0xe26e,	// (0x0008b19d) main_image3_pane

0x4e8b,	// (0x00081dba) area_side_right_pane_cp01_ParamLimits

0x4e8b,	// (0x00081dba) area_side_right_pane_cp01

0x4ea4,	// (0x00081dd3) main_image3_pane_g1_ParamLimits

0x4ea4,	// (0x00081dd3) main_image3_pane_g1

0x4eb2,	// (0x00081de1) main_image3_pane_g2_ParamLimits

0x4eb2,	// (0x00081de1) main_image3_pane_g2

0x4eda,	// (0x00081e09) main_image3_pane_g3_ParamLimits

0x4eda,	// (0x00081e09) main_image3_pane_g3

0x4f04,	// (0x00081e33) main_image3_pane_g4_ParamLimits

0x4f04,	// (0x00081e33) main_image3_pane_g4

0x0003,

0xf7b1,	// (0x0008c6e0) main_image3_pane_g_ParamLimits

0xf7b1,	// (0x0008c6e0) main_image3_pane_g

0x4f2e,	// (0x00081e5d) main_image3_pane_t1_ParamLimits

0x4f2e,	// (0x00081e5d) main_image3_pane_t1

0x4f86,	// (0x00081eb5) main_image3_pane_t2_ParamLimits

0x4f86,	// (0x00081eb5) main_image3_pane_t2

0x4fd8,	// (0x00081f07) main_image3_pane_t3_ParamLimits

0x4fd8,	// (0x00081f07) main_image3_pane_t3

0x0003,

0xf7ba,	// (0x0008c6e9) main_image3_pane_t_ParamLimits

0xf7ba,	// (0x0008c6e9) main_image3_pane_t

0xed10,	// (0x0008bc3f) grid_sctrl_middle_pane_cp01_ParamLimits

0xed10,	// (0x0008bc3f) grid_sctrl_middle_pane_cp01

0x5060,	// (0x00081f8f) cell_sctrl_middle_pane_cp01_ParamLimits

0x5060,	// (0x00081f8f) cell_sctrl_middle_pane_cp01

0x507d,	// (0x00081fac) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x507d,	// (0x00081fac) cell_sctrl_middle_pane_cp01_g1

0xe26e,	// (0x0008b19d) main_call4_pane

0x5092,	// (0x00081fc1) aid_size_button_call4_ParamLimits

0x5092,	// (0x00081fc1) aid_size_button_call4

0x50c5,	// (0x00081ff4) call4_windows_pane_ParamLimits

0x50c5,	// (0x00081ff4) call4_windows_pane

0x50e4,	// (0x00082013) grid_call4_button_pane_ParamLimits

0x50e4,	// (0x00082013) grid_call4_button_pane

0x511b,	// (0x0008204a) call4_windows_conf_pane

0x5134,	// (0x00082063) popup_call4_audio_first_window_ParamLimits

0x5134,	// (0x00082063) popup_call4_audio_first_window

0x5184,	// (0x000820b3) popup_call4_audio_second_window_ParamLimits

0x5184,	// (0x000820b3) popup_call4_audio_second_window

0x519d,	// (0x000820cc) popup_call4_audio_wait_window_ParamLimits

0x519d,	// (0x000820cc) popup_call4_audio_wait_window

0x51ab,	// (0x000820da) cell_call4_button_pane_ParamLimits

0x51ab,	// (0x000820da) cell_call4_button_pane

0x51d2,	// (0x00082101) bg_button_pane_cp09_ParamLimits

0x51d2,	// (0x00082101) bg_button_pane_cp09

0x51de,	// (0x0008210d) cell_call4_button_pane_g1_ParamLimits

0x51de,	// (0x0008210d) cell_call4_button_pane_g1

0x5204,	// (0x00082133) cell_call4_button_pane_t1_ParamLimits

0x5204,	// (0x00082133) cell_call4_button_pane_t1

0xe450,	// (0x0008b37f) popup_call4_audio_conf_window_ParamLimits

0xe450,	// (0x0008b37f) popup_call4_audio_conf_window

0x4717,	// (0x00081646) mup3_progress_pane_t1_ParamLimits

0x472e,	// (0x0008165d) mup3_progress_pane_t2_ParamLimits

0xd0ed,	// (0x0008a01c) mup3_progress_pane_t3_ParamLimits

0xf694,	// (0x0008c5c3) mup3_progress_pane_t_ParamLimits

0xd104,	// (0x0008a033) mup_progress_pane_cp03_ParamLimits

0xd11d,	// (0x0008a04c) mup3_control_keys_pane_g4_copy1

0xe3b6,	// (0x0008b2e5) mp4_rocker2_pane_ParamLimits

0xe3b6,	// (0x0008b2e5) mp4_rocker2_pane

0xd11d,	// (0x0008a04c) mp4_rocker2_pane_g1

0xd11d,	// (0x0008a04c) mp4_rocker2_pane_g2

0xd11d,	// (0x0008a04c) mp4_rocker2_pane_g3

0xd11d,	// (0x0008a04c) mp4_rocker2_pane_g4

0xd11d,	// (0x0008a04c) mp4_rocker2_pane_g5

0x0004,

0xf7c3,	// (0x0008c6f2) mp4_rocker2_pane_g

0xe26e,	// (0x0008b19d) main_camera4_pane

0xe26e,	// (0x0008b19d) main_video4_pane

0x4cdf,	// (0x00081c0e) main_video_tele_dialer_pane_t1_ParamLimits

0x4cdf,	// (0x00081c0e) main_video_tele_dialer_pane_t1

0x4cf8,	// (0x00081c27) main_video_tele_dialer_pane_t2_ParamLimits

0x4cf8,	// (0x00081c27) main_video_tele_dialer_pane_t2

0x0001,

0xf779,	// (0x0008c6a8) main_video_tele_dialer_pane_t_ParamLimits

0xf779,	// (0x0008c6a8) main_video_tele_dialer_pane_t

0x5242,	// (0x00082171) cam4_autofocus_pane_ParamLimits

0x5242,	// (0x00082171) cam4_autofocus_pane

0x5258,	// (0x00082187) cam4_image_uncrop_pane_ParamLimits

0x5258,	// (0x00082187) cam4_image_uncrop_pane

0x5271,	// (0x000821a0) cam4_indicators_pane_ParamLimits

0x5271,	// (0x000821a0) cam4_indicators_pane

0x52a1,	// (0x000821d0) main_camera4_pane_g1_ParamLimits

0x52a1,	// (0x000821d0) main_camera4_pane_g1

0x52b3,	// (0x000821e2) main_camera4_pane_g2_ParamLimits

0x52b3,	// (0x000821e2) main_camera4_pane_g2

0x52c6,	// (0x000821f5) main_camera4_pane_g3_ParamLimits

0x52c6,	// (0x000821f5) main_camera4_pane_g3

0x52d9,	// (0x00082208) main_camera4_pane_g4_ParamLimits

0x52d9,	// (0x00082208) main_camera4_pane_g4

0x52ec,	// (0x0008221b) main_camera4_pane_g5_ParamLimits

0x52ec,	// (0x0008221b) main_camera4_pane_g5

0x0005,

0xf7ce,	// (0x0008c6fd) main_camera4_pane_g_ParamLimits

0xf7ce,	// (0x0008c6fd) main_camera4_pane_g

0x5310,	// (0x0008223f) main_camera4_pane_t1_ParamLimits

0x5310,	// (0x0008223f) main_camera4_pane_t1

0xaa22,	// (0x00087951) bg_tb_trans_pane_cp06

0xd8ca,	// (0x0008a7f9) cam4_indicators_pane_g1

0xd8db,	// (0x0008a80a) cam4_indicators_pane_g2

0x0002,

0xf7e9,	// (0x0008c718) cam4_indicators_pane_g

0xd8f3,	// (0x0008a822) cam4_indicators_pane_t1

0x5388,	// (0x000822b7) main_video4_pane_g1_ParamLimits

0x5388,	// (0x000822b7) main_video4_pane_g1

0x5397,	// (0x000822c6) main_video4_pane_g2_ParamLimits

0x5397,	// (0x000822c6) main_video4_pane_g2

0x53a7,	// (0x000822d6) main_video4_pane_g3_ParamLimits

0x53a7,	// (0x000822d6) main_video4_pane_g3

0x53b7,	// (0x000822e6) main_video4_pane_g4_ParamLimits

0x53b7,	// (0x000822e6) main_video4_pane_g4

0x0004,

0xf7f0,	// (0x0008c71f) main_video4_pane_g_ParamLimits

0xf7f0,	// (0x0008c71f) main_video4_pane_g

0x53d7,	// (0x00082306) vid4_indicators_pane_ParamLimits

0x53d7,	// (0x00082306) vid4_indicators_pane

0x5401,	// (0x00082330) video4_image_uncrop_cif_pane_ParamLimits

0x5401,	// (0x00082330) video4_image_uncrop_cif_pane

0x541b,	// (0x0008234a) video4_image_uncrop_nhd_pane_ParamLimits

0x541b,	// (0x0008234a) video4_image_uncrop_nhd_pane

0x5258,	// (0x00082187) video4_image_uncrop_vga_pane_ParamLimits

0x5258,	// (0x00082187) video4_image_uncrop_vga_pane

0xed10,	// (0x0008bc3f) bg_tb_trans_pane_cp07

0xd921,	// (0x0008a850) vid4_indicators_pane_g1

0xd937,	// (0x0008a866) vid4_indicators_pane_g2

0xd94b,	// (0x0008a87a) vid4_indicators_pane_g3

0x0004,

0xf7fb,	// (0x0008c72a) vid4_indicators_pane_g

0xd97c,	// (0x0008a8ab) vid4_indicators_pane_t1

0x5432,	// (0x00082361) cam4_autofocus_pane_g1

0x543a,	// (0x00082369) cam4_autofocus_pane_g2

0x5442,	// (0x00082371) cam4_autofocus_pane_g3

0x0002,

0xf806,	// (0x0008c735) cam4_autofocus_pane_g

0x544a,	// (0x00082379) cam4_autofocus_pane_g3_copy1

0x4d27,	// (0x00081c56) video_down_pane_cp_t1

0x4d35,	// (0x00081c64) video_down_pane_cp_t2

0x0001,

0xf77e,	// (0x0008c6ad) video_down_pane_cp_t

0xed10,	// (0x0008bc3f) popup_vitu2_window_ParamLimits

0xed10,	// (0x0008bc3f) popup_vitu2_window

0x5452,	// (0x00082381) aid_size_cell2_itu2_ParamLimits

0x5452,	// (0x00082381) aid_size_cell2_itu2

0x5478,	// (0x000823a7) aid_size_cell_itu2_ParamLimits

0x5478,	// (0x000823a7) aid_size_cell_itu2

0x4786,	// (0x000816b5) bg_popup_window_pane_cp09_ParamLimits

0x4786,	// (0x000816b5) bg_popup_window_pane_cp09

0x54d6,	// (0x00082405) field_vitu2_entry_pane_ParamLimits

0x54d6,	// (0x00082405) field_vitu2_entry_pane

0x54fe,	// (0x0008242d) grid_vitu2_function_pane_ParamLimits

0x54fe,	// (0x0008242d) grid_vitu2_function_pane

0x554f,	// (0x0008247e) grid_vitu2_itu_pane_ParamLimits

0x554f,	// (0x0008247e) grid_vitu2_itu_pane

0x55df,	// (0x0008250e) cell_vitu2_itu_pane_ParamLimits

0x55df,	// (0x0008250e) cell_vitu2_itu_pane

0x560d,	// (0x0008253c) cell_vitu2_function_pane_ParamLimits

0x560d,	// (0x0008253c) cell_vitu2_function_pane

0xe46a,	// (0x0008b399) bg_popup_call_pane_cp08_ParamLimits

0xe46a,	// (0x0008b399) bg_popup_call_pane_cp08

0xe481,	// (0x0008b3b0) field_vitu2_entry_pane_g1

0xe48d,	// (0x0008b3bc) field_vitu2_entry_pane_g2

0x0002,

0xf80d,	// (0x0008c73c) field_vitu2_entry_pane_g

0xe499,	// (0x0008b3c8) field_vitu2_entry_pane_t1_ParamLimits

0xe499,	// (0x0008b3c8) field_vitu2_entry_pane_t1

0xe4c8,	// (0x0008b3f7) field_vitu2_entry_pane_t2_ParamLimits

0xe4c8,	// (0x0008b3f7) field_vitu2_entry_pane_t2

0x0001,

0xf814,	// (0x0008c743) field_vitu2_entry_pane_t_ParamLimits

0xf814,	// (0x0008c743) field_vitu2_entry_pane_t

0x5651,	// (0x00082580) bg_button_pane_cp010_ParamLimits

0x5651,	// (0x00082580) bg_button_pane_cp010

0x565f,	// (0x0008258e) cell_vitu2_itu_pane_g1

0x5685,	// (0x000825b4) cell_vitu2_itu_pane_t1_ParamLimits

0x5685,	// (0x000825b4) cell_vitu2_itu_pane_t1

0x56e3,	// (0x00082612) cell_vitu2_itu_pane_t2_ParamLimits

0x56e3,	// (0x00082612) cell_vitu2_itu_pane_t2

0x0002,

0xf81e,	// (0x0008c74d) cell_vitu2_itu_pane_t_ParamLimits

0xf81e,	// (0x0008c74d) cell_vitu2_itu_pane_t

0xed10,	// (0x0008bc3f) bg_button_pane_cp011

0x57cf,	// (0x000826fe) cell_vitu2_function_pane_g1

0xe26e,	// (0x0008b19d) main_myfav_hc_pane

0x5028,	// (0x00081f57) popup_image3_note_pane_ParamLimits

0x5028,	// (0x00081f57) popup_image3_note_pane

0x5044,	// (0x00081f73) popup_image3_tool_bar_pane_ParamLimits

0x5044,	// (0x00081f73) popup_image3_tool_bar_pane

0x5771,	// (0x000826a0) cell_vitu2_itu_pane_t3_ParamLimits

0x5771,	// (0x000826a0) cell_vitu2_itu_pane_t3

0xe26e,	// (0x0008b19d) bg_popup_trans_pane

0xe4ed,	// (0x0008b41c) grid_image3_tool_bar_pane

0xe4f7,	// (0x0008b426) bg_popup_trans_pane_g1

0xaf35,	// (0x00087e64) bg_popup_trans_pane_g2

0xe4ff,	// (0x0008b42e) bg_popup_trans_pane_g3

0xe507,	// (0x0008b436) bg_popup_trans_pane_g4

0xe50f,	// (0x0008b43e) bg_popup_trans_pane_g5

0xe517,	// (0x0008b446) bg_popup_trans_pane_g6

0xe51f,	// (0x0008b44e) bg_popup_trans_pane_g7

0xe527,	// (0x0008b456) bg_popup_trans_pane_g8

0xaf15,	// (0x00087e44) bg_popup_trans_pane_g9

0x0008,

0xf825,	// (0x0008c754) bg_popup_trans_pane_g

0xe52f,	// (0x0008b45e) cell_image3_tool_bar_pane_ParamLimits

0xe52f,	// (0x0008b45e) cell_image3_tool_bar_pane

0xaa68,	// (0x00087997) cell_image3_tool_bar_pane_g1

0xe26e,	// (0x0008b19d) bg_popup_trans_pane_cp1

0xe545,	// (0x0008b474) popup_image3_note_pane_t1

0xe553,	// (0x0008b482) popup_image3_note_pane_t2

0xe561,	// (0x0008b490) popup_image3_note_pane_t3

0x0002,

0xf838,	// (0x0008c767) popup_image3_note_pane_t

0xe571,	// (0x0008b4a0) popup_image3_note_pane_t3_copy1

0x57e3,	// (0x00082712) bg_myfav_hc_instruction_pane_ParamLimits

0x57e3,	// (0x00082712) bg_myfav_hc_instruction_pane

0x57fb,	// (0x0008272a) cell_myfav_contact_pane_ParamLimits

0x57fb,	// (0x0008272a) cell_myfav_contact_pane

0x5817,	// (0x00082746) cell_myfav_contact_pane_cp1_ParamLimits

0x5817,	// (0x00082746) cell_myfav_contact_pane_cp1

0x582f,	// (0x0008275e) cell_myfav_contact_pane_cp2_ParamLimits

0x582f,	// (0x0008275e) cell_myfav_contact_pane_cp2

0x5847,	// (0x00082776) cell_myfav_contact_pane_cp3_ParamLimits

0x5847,	// (0x00082776) cell_myfav_contact_pane_cp3

0x585e,	// (0x0008278d) cell_myfav_contact_pane_cp4_ParamLimits

0x585e,	// (0x0008278d) cell_myfav_contact_pane_cp4

0x5876,	// (0x000827a5) cell_myfav_contact_pane_cp5_ParamLimits

0x5876,	// (0x000827a5) cell_myfav_contact_pane_cp5

0x588a,	// (0x000827b9) cell_myfav_contact_pane_cp6_ParamLimits

0x588a,	// (0x000827b9) cell_myfav_contact_pane_cp6

0x58a0,	// (0x000827cf) cell_myfav_contact_pane_cp7_ParamLimits

0x58a0,	// (0x000827cf) cell_myfav_contact_pane_cp7

0xe57f,	// (0x0008b4ae) listscroll_gen_pane_cp05

0x58b8,	// (0x000827e7) main_myfav_hc_pane_g1_ParamLimits

0x58b8,	// (0x000827e7) main_myfav_hc_pane_g1

0x58d2,	// (0x00082801) main_myfav_hc_pane_g2_ParamLimits

0x58d2,	// (0x00082801) main_myfav_hc_pane_g2

0x0002,

0xf83f,	// (0x0008c76e) main_myfav_hc_pane_g_ParamLimits

0xf83f,	// (0x0008c76e) main_myfav_hc_pane_g

0x5906,	// (0x00082835) main_myfav_hc_pane_t1_ParamLimits

0x5906,	// (0x00082835) main_myfav_hc_pane_t1

0xe588,	// (0x0008b4b7) main_myfav_hc_pane_t2_ParamLimits

0xe588,	// (0x0008b4b7) main_myfav_hc_pane_t2

0xe59a,	// (0x0008b4c9) main_myfav_hc_pane_t3_ParamLimits

0xe59a,	// (0x0008b4c9) main_myfav_hc_pane_t3

0x591d,	// (0x0008284c) main_myfav_hc_pane_t4_ParamLimits

0x591d,	// (0x0008284c) main_myfav_hc_pane_t4

0x0004,

0xf846,	// (0x0008c775) main_myfav_hc_pane_t_ParamLimits

0xf846,	// (0x0008c775) main_myfav_hc_pane_t

0xaa68,	// (0x00087997) bg_myfav_hc_instruction_pane_g1

0xe5ac,	// (0x0008b4db) cell_myfav_contact_pane_g1_ParamLimits

0xe5ac,	// (0x0008b4db) cell_myfav_contact_pane_g1

0xe5ac,	// (0x0008b4db) cell_myfav_contact_pane_g2_ParamLimits

0xe5ac,	// (0x0008b4db) cell_myfav_contact_pane_g2

0xe5b8,	// (0x0008b4e7) cell_myfav_contact_pane_g3_ParamLimits

0xe5b8,	// (0x0008b4e7) cell_myfav_contact_pane_g3

0xaa30,	// (0x0008795f) cell_myfav_contact_pane_g4_ParamLimits

0xaa30,	// (0x0008795f) cell_myfav_contact_pane_g4

0xe5c5,	// (0x0008b4f4) cell_myfav_contact_pane_g5_ParamLimits

0xe5c5,	// (0x0008b4f4) cell_myfav_contact_pane_g5

0x0004,

0xf851,	// (0x0008c780) cell_myfav_contact_pane_g_ParamLimits

0xf851,	// (0x0008c780) cell_myfav_contact_pane_g

0x58ec,	// (0x0008281b) main_myfav_hc_pane_g3_ParamLimits

0x58ec,	// (0x0008281b) main_myfav_hc_pane_g3

0x0b4d,	// (0x0007da7c) popup_adpt_find_window

0x5947,	// (0x00082876) afind_page_pane_ParamLimits

0x5947,	// (0x00082876) afind_page_pane

0x595d,	// (0x0008288c) aid_size_cell_afind_ParamLimits

0x595d,	// (0x0008288c) aid_size_cell_afind

0x597b,	// (0x000828aa) bg_popup_sub_pane_cp09_ParamLimits

0x597b,	// (0x000828aa) bg_popup_sub_pane_cp09

0x598d,	// (0x000828bc) find_pane_cp01_ParamLimits

0x598d,	// (0x000828bc) find_pane_cp01

0xe5d1,	// (0x0008b500) grid_afind_control_pane_ParamLimits

0xe5d1,	// (0x0008b500) grid_afind_control_pane

0x59a1,	// (0x000828d0) grid_afind_pane_ParamLimits

0x59a1,	// (0x000828d0) grid_afind_pane

0x59c3,	// (0x000828f2) cell_afind_pane_ParamLimits

0x59c3,	// (0x000828f2) cell_afind_pane

0xaa68,	// (0x00087997) afind_page_pane_g1

0x5a2c,	// (0x0008295b) afind_page_pane_g2

0x5a34,	// (0x00082963) afind_page_pane_g3

0x0002,

0xf85c,	// (0x0008c78b) afind_page_pane_g

0x5a3c,	// (0x0008296b) afind_page_pane_t1

0xe5f7,	// (0x0008b526) cell_afind_grid_control_pane_ParamLimits

0xe5f7,	// (0x0008b526) cell_afind_grid_control_pane

0xe606,	// (0x0008b535) bg_button_pane_cp69_ParamLimits

0xe606,	// (0x0008b535) bg_button_pane_cp69

0x5a4a,	// (0x00082979) cell_afind_pane_g1_ParamLimits

0x5a4a,	// (0x00082979) cell_afind_pane_g1

0x5a57,	// (0x00082986) cell_afind_pane_t1_ParamLimits

0x5a57,	// (0x00082986) cell_afind_pane_t1

0xe612,	// (0x0008b541) bg_button_pane_cp72

0xe61a,	// (0x0008b549) cell_afind_grid_control_pane_g1

0x331f,	// (0x0008024e) aid_image_placing_area_ParamLimits

0x331f,	// (0x0008024e) aid_image_placing_area

0xaa22,	// (0x00087951) field_vitu_entry_pane_g1_ParamLimits

0xaa22,	// (0x00087951) field_vitu_entry_pane_g1

0xaa22,	// (0x00087951) field_vitu_entry_pane_g2_ParamLimits

0xaa22,	// (0x00087951) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0008c0c8) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0008c0c8) field_vitu_entry_pane_g

0xd41d,	// (0x0008a34c) cell_vitu_itu_pane_g1_ParamLimits

0xd400,	// (0x0008a32f) cell_vitu_itu_pane_t3_ParamLimits

0xd400,	// (0x0008a32f) cell_vitu_itu_pane_t3

0xe3ca,	// (0x0008b2f9) mp4_progress_pane_t1_ParamLimits

0xe3e8,	// (0x0008b317) mp4_progress_pane_t2_ParamLimits

0xf7a2,	// (0x0008c6d1) mp4_progress_pane_t_ParamLimits

0xe407,	// (0x0008b336) mup_progress_pane_cp04_ParamLimits

0x5931,	// (0x00082860) main_myfav_hc_pane_t5_ParamLimits

0x5931,	// (0x00082860) main_myfav_hc_pane_t5

0xa6c6,	// (0x000875f5) aid_zoom_text_primary

0x0b4d,	// (0x0007da7c) popup_adpt_find_window_ParamLimits

0xed10,	// (0x0008bc3f) main_cam_set_pane

0x528a,	// (0x000821b9) cam4_zoom_pane_ParamLimits

0x528a,	// (0x000821b9) cam4_zoom_pane

0x5a69,	// (0x00082998) main_cam_set_pane_g1_ParamLimits

0x5a69,	// (0x00082998) main_cam_set_pane_g1

0x5a77,	// (0x000829a6) main_cam_set_pane_g2_ParamLimits

0x5a77,	// (0x000829a6) main_cam_set_pane_g2

0x0001,

0xf863,	// (0x0008c792) main_cam_set_pane_g_ParamLimits

0xf863,	// (0x0008c792) main_cam_set_pane_g

0x5a98,	// (0x000829c7) main_cam_set_pane_t1_ParamLimits

0x5a98,	// (0x000829c7) main_cam_set_pane_t1

0x5ab3,	// (0x000829e2) main_cset_listscroll_pane_ParamLimits

0x5ab3,	// (0x000829e2) main_cset_listscroll_pane

0x5adb,	// (0x00082a0a) main_cset_slider_pane_ParamLimits

0x5adb,	// (0x00082a0a) main_cset_slider_pane

0xe62b,	// (0x0008b55a) main_cset_list_pane_ParamLimits

0xe62b,	// (0x0008b55a) main_cset_list_pane

0xe63b,	// (0x0008b56a) scroll_pane_cp028

0x5b05,	// (0x00082a34) aid_area_touch_slider

0x5b21,	// (0x00082a50) cset_slider_pane

0x5b44,	// (0x00082a73) main_cset_slider_pane_g1

0x5b59,	// (0x00082a88) main_cset_slider_pane_g2

0x0011,

0xf868,	// (0x0008c797) main_cset_slider_pane_g

0xe674,	// (0x0008b5a3) main_cset_slider_pane_t1

0x5c1b,	// (0x00082b4a) main_cset_slider_pane_t2

0x5c35,	// (0x00082b64) main_cset_slider_pane_t3

0x5c4f,	// (0x00082b7e) main_cset_slider_pane_t4

0x5c69,	// (0x00082b98) main_cset_slider_pane_t5

0x5c87,	// (0x00082bb6) main_cset_slider_pane_t6

0x5c9c,	// (0x00082bcb) main_cset_slider_pane_t7

0x000e,

0xf88d,	// (0x0008c7bc) main_cset_slider_pane_t

0x5da8,	// (0x00082cd7) cset_list_set_pane_ParamLimits

0x5da8,	// (0x00082cd7) cset_list_set_pane

0xe70e,	// (0x0008b63d) aid_position_infowindow_above

0xe716,	// (0x0008b645) aid_position_infowindow_below

0x5dbc,	// (0x00082ceb) cset_list_set_pane_g1_ParamLimits

0x5dbc,	// (0x00082ceb) cset_list_set_pane_g1

0x04e1,	// (0x0007d410) cset_list_set_pane_g3_ParamLimits

0x04e1,	// (0x0007d410) cset_list_set_pane_g3

0x0001,

0xf8ac,	// (0x0008c7db) cset_list_set_pane_g_ParamLimits

0xf8ac,	// (0x0008c7db) cset_list_set_pane_g

0x04f0,	// (0x0007d41f) cset_list_set_pane_t1_ParamLimits

0x04f0,	// (0x0007d41f) cset_list_set_pane_t1

0xed10,	// (0x0008bc3f) list_highlight_pane_cp021_ParamLimits

0xed10,	// (0x0008bc3f) list_highlight_pane_cp021

0xb7eb,	// (0x0008871a) cset_slider_pane_g1

0xb7fd,	// (0x0008872c) cset_slider_pane_g2

0xb7f4,	// (0x00088723) cset_slider_pane_g3

0x0002,

0xf8b1,	// (0x0008c7e0) cset_slider_pane_g

0xe71e,	// (0x0008b64d) aid_area_touch_cam4_zoom

0x5dc8,	// (0x00082cf7) cam4_zoom_cont_pane

0x5dd0,	// (0x00082cff) cam4_zoom_pane_g1

0x5dd8,	// (0x00082d07) cam4_zoom_pane_g2

0x5de0,	// (0x00082d0f) cam4_zoom_pane_g3

0x0002,

0xf8b8,	// (0x0008c7e7) cam4_zoom_pane_g

0xe727,	// (0x0008b656) cam4_zoom_cont_pane_g1

0xe730,	// (0x0008b65f) cam4_zoom_cont_pane_g2

0xe739,	// (0x0008b668) cam4_zoom_cont_pane_g3

0x0002,

0xf8bf,	// (0x0008c7ee) cam4_zoom_cont_pane_g

0x50b0,	// (0x00081fdf) call4_image_pane_ParamLimits

0x50b0,	// (0x00081fdf) call4_image_pane

0x511b,	// (0x0008204a) call4_windows_conf_pane_ParamLimits

0x5162,	// (0x00082091) popup_call4_audio_in_window_ParamLimits

0x5162,	// (0x00082091) popup_call4_audio_in_window

0xe26e,	// (0x0008b19d) bg_popup_call2_act_pane_cp02

0xe448,	// (0x0008b377) call4_list_conf_pane

0xaa68,	// (0x00087997) call4_image_pane_g1

0xaa68,	// (0x00087997) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0008bfbb) call4_image_pane_g

0xe742,	// (0x0008b671) list_single_graphic_popup_conf4_pane_ParamLimits

0xe742,	// (0x0008b671) list_single_graphic_popup_conf4_pane

0xe26e,	// (0x0008b19d) list_highlight_pane_cp022

0xe757,	// (0x0008b686) list_single_graphic_popup_conf4_pane_g1

0xb4c0,	// (0x000883ef) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c6,	// (0x0008c7f5) list_single_graphic_popup_conf4_pane_g

0xe75f,	// (0x0008b68e) list_single_graphic_popup_conf4_pane_t1

0x185a,	// (0x0007e789) popup_vtel_slider_window_ParamLimits

0x185a,	// (0x0007e789) popup_vtel_slider_window

0xe41a,	// (0x0008b349) dialer2_ne_pane_t2_ParamLimits

0xe41a,	// (0x0008b349) dialer2_ne_pane_t2

0x0001,

0xf7a7,	// (0x0008c6d6) dialer2_ne_pane_t_ParamLimits

0xf7a7,	// (0x0008c6d6) dialer2_ne_pane_t

0xcafe,	// (0x00089a2d) bg_popup_sub_pane_cp010_ParamLimits

0xcafe,	// (0x00089a2d) bg_popup_sub_pane_cp010

0x5de8,	// (0x00082d17) popup_vtel_slider_window_g1_ParamLimits

0x5de8,	// (0x00082d17) popup_vtel_slider_window_g1

0x5dfb,	// (0x00082d2a) popup_vtel_slider_window_g2_ParamLimits

0x5dfb,	// (0x00082d2a) popup_vtel_slider_window_g2

0x0003,

0xf8cb,	// (0x0008c7fa) popup_vtel_slider_window_g_ParamLimits

0xf8cb,	// (0x0008c7fa) popup_vtel_slider_window_g

0x5e51,	// (0x00082d80) vtel_slider_pane_ParamLimits

0x5e51,	// (0x00082d80) vtel_slider_pane

0x5e73,	// (0x00082da2) vtel_slider_pane_g1_ParamLimits

0x5e73,	// (0x00082da2) vtel_slider_pane_g1

0x5e87,	// (0x00082db6) vtel_slider_pane_g2_ParamLimits

0x5e87,	// (0x00082db6) vtel_slider_pane_g2

0x5e9f,	// (0x00082dce) vtel_slider_pane_g3_ParamLimits

0x5e9f,	// (0x00082dce) vtel_slider_pane_g3

0x5e73,	// (0x00082da2) vtel_slider_pane_g4_ParamLimits

0x5e73,	// (0x00082da2) vtel_slider_pane_g4

0x5eb5,	// (0x00082de4) vtel_slider_pane_g5_ParamLimits

0x5eb5,	// (0x00082de4) vtel_slider_pane_g5

0x0004,

0xf8d4,	// (0x0008c803) vtel_slider_pane_g_ParamLimits

0xf8d4,	// (0x0008c803) vtel_slider_pane_g

0xed10,	// (0x0008bc3f) main_gallery2_pane

0x54a4,	// (0x000823d3) aid_size_row_itut2_dropdow_list_ParamLimits

0x54a4,	// (0x000823d3) aid_size_row_itut2_dropdow_list

0x5526,	// (0x00082455) grid_vitu2_function_top_pane_ParamLimits

0x5526,	// (0x00082455) grid_vitu2_function_top_pane

0x558a,	// (0x000824b9) popup_vitu2_dropdown_list_window_ParamLimits

0x558a,	// (0x000824b9) popup_vitu2_dropdown_list_window

0x55b1,	// (0x000824e0) popup_vitu2_match_list_window

0x5ecb,	// (0x00082dfa) cell_vitu2_function_top_pane_ParamLimits

0x5ecb,	// (0x00082dfa) cell_vitu2_function_top_pane

0x5ee5,	// (0x00082e14) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5ee5,	// (0x00082e14) cell_vitu2_function_top_pane_cp01

0x5f01,	// (0x00082e30) cell_vitu2_function_top_wide_pane_ParamLimits

0x5f01,	// (0x00082e30) cell_vitu2_function_top_wide_pane

0xed10,	// (0x0008bc3f) bg_button_pane_cp012

0x5f1f,	// (0x00082e4e) cell_vitu2_function_top_pane_g1

0xd993,	// (0x0008a8c2) bg_button_pane_cp013_ParamLimits

0xd993,	// (0x0008a8c2) bg_button_pane_cp013

0x5f33,	// (0x00082e62) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5f33,	// (0x00082e62) cell_vitu2_function_top_wide_pane_g1

0xed10,	// (0x0008bc3f) bg_popup_sub_pane_cp20

0x5f4b,	// (0x00082e7a) list_vitu2_match_list_pane

0xe4f7,	// (0x0008b426) bg_popup_sub_pane_cp20_g1

0xe4ff,	// (0x0008b42e) bg_popup_sub_pane_cp20_g2

0xaf35,	// (0x00087e64) bg_popup_sub_pane_cp20_g3

0xe507,	// (0x0008b436) bg_popup_sub_pane_cp20_g4

0xaf15,	// (0x00087e44) bg_popup_sub_pane_cp20_g5

0xe775,	// (0x0008b6a4) bg_popup_sub_pane_cp20_g6

0xe517,	// (0x0008b446) bg_popup_sub_pane_cp20_g7

0xe51f,	// (0x0008b44e) bg_popup_sub_pane_cp20_g8

0xe527,	// (0x0008b456) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8df,	// (0x0008c80e) bg_popup_sub_pane_cp20_g

0xd9af,	// (0x0008a8de) list_vitu2_match_list_item_pane_ParamLimits

0xd9af,	// (0x0008a8de) list_vitu2_match_list_item_pane

0xd9c1,	// (0x0008a8f0) list_vitu2_match_list_item_pane_t1

0xe26e,	// (0x0008b19d) bg_popup_sub_pane_cp21

0xad01,	// (0x00087c30) grid_vitu2_dropdown_list_pane

0x5f63,	// (0x00082e92) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5f63,	// (0x00082e92) cell_vitu2_dropdown_list_char_pane

0x5f85,	// (0x00082eb4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5f85,	// (0x00082eb4) cell_vitu2_dropdown_list_ctrl_pane

0xe77d,	// (0x0008b6ac) cell_vitu2_dropdown_list_char_pane_g1

0xe786,	// (0x0008b6b5) cell_vitu2_dropdown_list_char_pane_g2

0xe78f,	// (0x0008b6be) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f2,	// (0x0008c821) cell_vitu2_dropdown_list_char_pane_g

0x5faf,	// (0x00082ede) cell_vitu2_dropdown_list_char_pane_t1

0x5fbd,	// (0x00082eec) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5fbd,	// (0x00082eec) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5fcd,	// (0x00082efc) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5fcd,	// (0x00082efc) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5fde,	// (0x00082f0d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5fde,	// (0x00082f0d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5fee,	// (0x00082f1d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5fee,	// (0x00082f1d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaa22,	// (0x00087951) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaa22,	// (0x00087951) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f9,	// (0x0008c828) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f9,	// (0x0008c828) cell_vitu2_dropdown_list_ctrl_pane_g

0x600a,	// (0x00082f39) aid_size_cell_gallery2_ParamLimits

0x600a,	// (0x00082f39) aid_size_cell_gallery2

0x6028,	// (0x00082f57) grid_gallery2_pane_ParamLimits

0x6028,	// (0x00082f57) grid_gallery2_pane

0x6042,	// (0x00082f71) scroll_pane_cp029_ParamLimits

0x6042,	// (0x00082f71) scroll_pane_cp029

0x6053,	// (0x00082f82) cell_gallery2_pane_ParamLimits

0x6053,	// (0x00082f82) cell_gallery2_pane

0xe798,	// (0x0008b6c7) cell_gallery2_pane_g2

0x60b7,	// (0x00082fe6) cell_gallery2_pane_g3

0xe7a0,	// (0x0008b6cf) cell_gallery2_pane_g4

0xe7a8,	// (0x0008b6d7) cell_gallery2_pane_g5

0xad01,	// (0x00087c30) grid_highlight_pane_cp10

0x55b1,	// (0x000824e0) popup_vitu2_match_list_window_ParamLimits

0x55c8,	// (0x000824f7) popup_vitu2_query_window_ParamLimits

0x55c8,	// (0x000824f7) popup_vitu2_query_window

0xe26e,	// (0x0008b19d) bg_vitu2_candi_button_pane

0xe77d,	// (0x0008b6ac) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe786,	// (0x0008b6b5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe78f,	// (0x0008b6be) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x60bf,	// (0x00082fee) bg_button_pane_cp015

0x60d6,	// (0x00083005) bg_button_pane_cp016

0x60e2,	// (0x00083011) bg_button_pane_cp017

0xb779,	// (0x000886a8) bg_popup_sub_pane_cp22

0xe7b0,	// (0x0008b6df) popup_vitu2_query_window_g1

0x6123,	// (0x00083052) popup_vitu2_query_window_g2

0x0002,

0xf904,	// (0x0008c833) popup_vitu2_query_window_g

0x6149,	// (0x00083078) popup_vitu2_query_window_t1_ParamLimits

0x6149,	// (0x00083078) popup_vitu2_query_window_t1

0x617e,	// (0x000830ad) popup_vitu2_query_window_t2_ParamLimits

0x617e,	// (0x000830ad) popup_vitu2_query_window_t2

0x6190,	// (0x000830bf) popup_vitu2_query_window_t3_ParamLimits

0x6190,	// (0x000830bf) popup_vitu2_query_window_t3

0x61b8,	// (0x000830e7) popup_vitu2_query_window_t4_ParamLimits

0x61b8,	// (0x000830e7) popup_vitu2_query_window_t4

0x61cc,	// (0x000830fb) popup_vitu2_query_window_t5_ParamLimits

0x61cc,	// (0x000830fb) popup_vitu2_query_window_t5

0x0006,

0xf90b,	// (0x0008c83a) popup_vitu2_query_window_t_ParamLimits

0xf90b,	// (0x0008c83a) popup_vitu2_query_window_t

0xe623,	// (0x0008b552) main_cset_text_pane

0x5b05,	// (0x00082a34) aid_area_touch_slider_ParamLimits

0x5b21,	// (0x00082a50) cset_slider_pane_ParamLimits

0x5b44,	// (0x00082a73) main_cset_slider_pane_g1_ParamLimits

0x5b59,	// (0x00082a88) main_cset_slider_pane_g2_ParamLimits

0xe644,	// (0x0008b573) main_cset_slider_pane_g3_ParamLimits

0xe644,	// (0x0008b573) main_cset_slider_pane_g3

0x5b6e,	// (0x00082a9d) main_cset_slider_pane_g4_ParamLimits

0x5b6e,	// (0x00082a9d) main_cset_slider_pane_g4

0x5b7d,	// (0x00082aac) main_cset_slider_pane_g5_ParamLimits

0x5b7d,	// (0x00082aac) main_cset_slider_pane_g5

0x5b8b,	// (0x00082aba) main_cset_slider_pane_g6_ParamLimits

0x5b8b,	// (0x00082aba) main_cset_slider_pane_g6

0xf868,	// (0x0008c797) main_cset_slider_pane_g_ParamLimits

0xe674,	// (0x0008b5a3) main_cset_slider_pane_t1_ParamLimits

0x5c1b,	// (0x00082b4a) main_cset_slider_pane_t2_ParamLimits

0x5c35,	// (0x00082b64) main_cset_slider_pane_t3_ParamLimits

0x5c4f,	// (0x00082b7e) main_cset_slider_pane_t4_ParamLimits

0x5c69,	// (0x00082b98) main_cset_slider_pane_t5_ParamLimits

0x5c87,	// (0x00082bb6) main_cset_slider_pane_t6_ParamLimits

0x5c9c,	// (0x00082bcb) main_cset_slider_pane_t7_ParamLimits

0x5cca,	// (0x00082bf9) main_cset_slider_pane_t8_ParamLimits

0x5cca,	// (0x00082bf9) main_cset_slider_pane_t8

0x5cf2,	// (0x00082c21) main_cset_slider_pane_t9_ParamLimits

0x5cf2,	// (0x00082c21) main_cset_slider_pane_t9

0x5d1a,	// (0x00082c49) main_cset_slider_pane_t10_ParamLimits

0x5d1a,	// (0x00082c49) main_cset_slider_pane_t10

0x5d42,	// (0x00082c71) main_cset_slider_pane_t11_ParamLimits

0x5d42,	// (0x00082c71) main_cset_slider_pane_t11

0x5d6c,	// (0x00082c9b) main_cset_slider_pane_t12_ParamLimits

0x5d6c,	// (0x00082c9b) main_cset_slider_pane_t12

0x5d89,	// (0x00082cb8) main_cset_slider_pane_t13_ParamLimits

0x5d89,	// (0x00082cb8) main_cset_slider_pane_t13

0xf88d,	// (0x0008c7bc) main_cset_slider_pane_t_ParamLimits

0xe26e,	// (0x0008b19d) bg_popup_sub_pane_cp011

0xe7bc,	// (0x0008b6eb) main_cset_text_pane_g1

0xe7c4,	// (0x0008b6f3) main_cset_text_pane_t1

0xe7d2,	// (0x0008b701) main_cset_text_pane_t2

0xe7e0,	// (0x0008b70f) main_cset_text_pane_t3

0xe7ee,	// (0x0008b71d) main_cset_text_pane_t4

0xe7fc,	// (0x0008b72b) main_cset_text_pane_t5

0xe80a,	// (0x0008b739) main_cset_text_pane_t6

0xe818,	// (0x0008b747) main_cset_text_pane_t7

0x0006,

0xf91a,	// (0x0008c849) main_cset_text_pane_t

0xe26e,	// (0x0008b19d) main_cam4_burst_pane

0xe26e,	// (0x0008b19d) main_cam5_pane

0xe5e5,	// (0x0008b514) bg_button_pane_cp019

0xe5ee,	// (0x0008b51d) bg_button_pane_cp020

0xe650,	// (0x0008b57f) main_cset_slider_pane_g7_ParamLimits

0xe650,	// (0x0008b57f) main_cset_slider_pane_g7

0xe65c,	// (0x0008b58b) main_cset_slider_pane_g8_ParamLimits

0xe65c,	// (0x0008b58b) main_cset_slider_pane_g8

0x5b9f,	// (0x00082ace) main_cset_slider_pane_g9_ParamLimits

0x5b9f,	// (0x00082ace) main_cset_slider_pane_g9

0x5bab,	// (0x00082ada) main_cset_slider_pane_g10_ParamLimits

0x5bab,	// (0x00082ada) main_cset_slider_pane_g10

0x5bb7,	// (0x00082ae6) main_cset_slider_pane_g11_ParamLimits

0x5bb7,	// (0x00082ae6) main_cset_slider_pane_g11

0x5bc3,	// (0x00082af2) main_cset_slider_pane_g12_ParamLimits

0x5bc3,	// (0x00082af2) main_cset_slider_pane_g12

0x5bcf,	// (0x00082afe) main_cset_slider_pane_g13_ParamLimits

0x5bcf,	// (0x00082afe) main_cset_slider_pane_g13

0x5bdb,	// (0x00082b0a) main_cset_slider_pane_g14_ParamLimits

0x5bdb,	// (0x00082b0a) main_cset_slider_pane_g14

0x5be7,	// (0x00082b16) main_cset_slider_pane_g15_ParamLimits

0x5be7,	// (0x00082b16) main_cset_slider_pane_g15

0xe69c,	// (0x0008b5cb) main_cset_slider_pane_t14_ParamLimits

0xe69c,	// (0x0008b5cb) main_cset_slider_pane_t14

0xe6d5,	// (0x0008b604) main_cset_slider_pane_t15_ParamLimits

0xe6d5,	// (0x0008b604) main_cset_slider_pane_t15

0x6236,	// (0x00083165) aid_cam4_burst_size_cell_ParamLimits

0x6236,	// (0x00083165) aid_cam4_burst_size_cell

0x6256,	// (0x00083185) grid_cam4_burst_pane_ParamLimits

0x6256,	// (0x00083185) grid_cam4_burst_pane

0x6290,	// (0x000831bf) linegrid_cam4_burst_pane_ParamLimits

0x6290,	// (0x000831bf) linegrid_cam4_burst_pane

0x62b2,	// (0x000831e1) scroll_pane_cp30_ParamLimits

0x62b2,	// (0x000831e1) scroll_pane_cp30

0x62be,	// (0x000831ed) cell_cam4_burst_pane_ParamLimits

0x62be,	// (0x000831ed) cell_cam4_burst_pane

0xe826,	// (0x0008b755) linegrid_cam4_burst_pane_g1_ParamLimits

0xe826,	// (0x0008b755) linegrid_cam4_burst_pane_g1

0x6313,	// (0x00083242) linegrid_cam4_burst_pane_g2_ParamLimits

0x6313,	// (0x00083242) linegrid_cam4_burst_pane_g2

0xe833,	// (0x0008b762) linegrid_cam4_burst_pane_g3_ParamLimits

0xe833,	// (0x0008b762) linegrid_cam4_burst_pane_g3

0x0002,

0xf929,	// (0x0008c858) linegrid_cam4_burst_pane_g_ParamLimits

0xf929,	// (0x0008c858) linegrid_cam4_burst_pane_g

0x6324,	// (0x00083253) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6324,	// (0x00083253) linegrid_cam4_burst_pane_g3_copy1

0xe840,	// (0x0008b76f) linegrid_cam4_burst_pane_g4_ParamLimits

0xe840,	// (0x0008b76f) linegrid_cam4_burst_pane_g4

0x6342,	// (0x00083271) linegrid_cam4_burst_pane_g5_ParamLimits

0x6342,	// (0x00083271) linegrid_cam4_burst_pane_g5

0x6353,	// (0x00083282) linegrid_cam4_burst_pane_g6_ParamLimits

0x6353,	// (0x00083282) linegrid_cam4_burst_pane_g6

0xe84d,	// (0x0008b77c) linegrid_cam4_burst_pane_g7_ParamLimits

0xe84d,	// (0x0008b77c) linegrid_cam4_burst_pane_g7

0x636a,	// (0x00083299) cell_cam4_burst_pane_g1

0xe866,	// (0x0008b795) main_cam5_pane_t1_ParamLimits

0xe866,	// (0x0008b795) main_cam5_pane_t1

0xe878,	// (0x0008b7a7) main_cam5_pane_t2_ParamLimits

0xe878,	// (0x0008b7a7) main_cam5_pane_t2

0xe88a,	// (0x0008b7b9) main_cam5_pane_t3_ParamLimits

0xe88a,	// (0x0008b7b9) main_cam5_pane_t3

0xe89c,	// (0x0008b7cb) main_cam5_pane_t4_ParamLimits

0xe89c,	// (0x0008b7cb) main_cam5_pane_t4

0xe8b4,	// (0x0008b7e3) main_cam5_pane_t5_ParamLimits

0xe8b4,	// (0x0008b7e3) main_cam5_pane_t5

0xe8c8,	// (0x0008b7f7) main_cam5_pane_t6_ParamLimits

0xe8c8,	// (0x0008b7f7) main_cam5_pane_t6

0xe8dc,	// (0x0008b80b) main_cam5_pane_t7_ParamLimits

0xe8dc,	// (0x0008b80b) main_cam5_pane_t7

0xe8ee,	// (0x0008b81d) main_cam5_pane_t8_ParamLimits

0xe8ee,	// (0x0008b81d) main_cam5_pane_t8

0xe90c,	// (0x0008b83b) main_cam5_pane_t9_ParamLimits

0xe90c,	// (0x0008b83b) main_cam5_pane_t9

0xe91e,	// (0x0008b84d) main_cam5_pane_t10_ParamLimits

0xe91e,	// (0x0008b84d) main_cam5_pane_t10

0xe930,	// (0x0008b85f) main_cam5_pane_t11_ParamLimits

0xe930,	// (0x0008b85f) main_cam5_pane_t11

0xe944,	// (0x0008b873) main_cam5_pane_t12_ParamLimits

0xe944,	// (0x0008b873) main_cam5_pane_t12

0xe95b,	// (0x0008b88a) main_cam5_pane_t13_ParamLimits

0xe95b,	// (0x0008b88a) main_cam5_pane_t13

0x000c,

0xf935,	// (0x0008c864) main_cam5_pane_t_ParamLimits

0xf935,	// (0x0008c864) main_cam5_pane_t

0x0bce,	// (0x0007dafd) popup_scut_keymap_window_ParamLimits

0x0bce,	// (0x0007dafd) popup_scut_keymap_window

0x637d,	// (0x000832ac) aid_size_cell_brow_shortcut

0xad01,	// (0x00087c30) bg_popup_window_pane_cp010

0x6389,	// (0x000832b8) grid_scut_pane

0x6395,	// (0x000832c4) cell_scut_pane_ParamLimits

0x6395,	// (0x000832c4) cell_scut_pane

0x63ae,	// (0x000832dd) cell_scut_pane_g1

0xe97e,	// (0x0008b8ad) cell_scut_pane_t1

0xe98d,	// (0x0008b8bc) cell_scut_pane_t2

0x63b7,	// (0x000832e6) cell_scut_pane_t3

0x0002,

0xf950,	// (0x0008c87f) cell_scut_pane_t

0x42c2,	// (0x000811f1) main_mup3_pane_g8_ParamLimits

0x42c2,	// (0x000811f1) main_mup3_pane_g8

0x54be,	// (0x000823ed) area_vitu2_query_pane_ParamLimits

0x54be,	// (0x000823ed) area_vitu2_query_pane

0x60ee,	// (0x0008301d) input_focus_pane_cp08

0xe99c,	// (0x0008b8cb) area_vitu2_query_pane_g1

0x63c5,	// (0x000832f4) area_vitu2_query_pane_g2

0x0001,

0xf957,	// (0x0008c886) area_vitu2_query_pane_g

0x63da,	// (0x00083309) area_vitu2_query_pane_t1_ParamLimits

0x63da,	// (0x00083309) area_vitu2_query_pane_t1

0x63ee,	// (0x0008331d) area_vitu2_query_pane_t2_ParamLimits

0x63ee,	// (0x0008331d) area_vitu2_query_pane_t2

0x6402,	// (0x00083331) area_vitu2_query_pane_t3_ParamLimits

0x6402,	// (0x00083331) area_vitu2_query_pane_t3

0xe9a8,	// (0x0008b8d7) area_vitu2_query_pane_t4_ParamLimits

0xe9a8,	// (0x0008b8d7) area_vitu2_query_pane_t4

0xe9d0,	// (0x0008b8ff) area_vitu2_query_pane_t5_ParamLimits

0xe9d0,	// (0x0008b8ff) area_vitu2_query_pane_t5

0xe9f8,	// (0x0008b927) area_vitu2_query_pane_t6_ParamLimits

0xe9f8,	// (0x0008b927) area_vitu2_query_pane_t6

0x0006,

0xf95c,	// (0x0008c88b) area_vitu2_query_pane_t_ParamLimits

0xf95c,	// (0x0008c88b) area_vitu2_query_pane_t

0x642e,	// (0x0008335d) bg_button_pane_cp018

0x643a,	// (0x00083369) bg_button_pane_cp021

0x6446,	// (0x00083375) bg_button_pane_cp022

0x6471,	// (0x000833a0) input_focus_pane_cp09

0x2b58,	// (0x0007fa87) aid_size_touch_mv_arrow_left

0x2b81,	// (0x0007fab0) aid_size_touch_mv_arrow_right

0x5bff,	// (0x00082b2e) main_cset_slider_pane_g16_ParamLimits

0x5bff,	// (0x00082b2e) main_cset_slider_pane_g16

0x5c0d,	// (0x00082b3c) main_cset_slider_pane_g17_ParamLimits

0x5c0d,	// (0x00082b3c) main_cset_slider_pane_g17

0x636a,	// (0x00083299) cell_cam4_burst_pane_g1_ParamLimits

0xe26e,	// (0x0008b19d) compa_mode_pane

0x5e0b,	// (0x00082d3a) popup_vtel_slider_window_g3_ParamLimits

0x5e0b,	// (0x00082d3a) popup_vtel_slider_window_g3

0x5e22,	// (0x00082d51) popup_vtel_slider_window_g4_ParamLimits

0x5e22,	// (0x00082d51) popup_vtel_slider_window_g4

0x5e39,	// (0x00082d68) popup_vtel_slider_window_t1_ParamLimits

0x5e39,	// (0x00082d68) popup_vtel_slider_window_t1

0xe26e,	// (0x0008b19d) main_cl_pane

0xc995,	// (0x000898c4) popup_imed_adjust2_window_ParamLimits

0xb779,	// (0x000886a8) bg_tb_trans_pane_cp05_ParamLimits

0xd323,	// (0x0008a252) popup_imed_adjust2_window_g1_ParamLimits

0xd332,	// (0x0008a261) popup_imed_adjust2_window_g2_ParamLimits

0xd332,	// (0x0008a261) popup_imed_adjust2_window_g2

0xd33e,	// (0x0008a26d) popup_imed_adjust2_window_g3_ParamLimits

0xd33e,	// (0x0008a26d) popup_imed_adjust2_window_g3

0x0002,

0xf6d7,	// (0x0008c606) popup_imed_adjust2_window_g_ParamLimits

0xf6d7,	// (0x0008c606) popup_imed_adjust2_window_g

0xd34a,	// (0x0008a279) popup_imed_adjust2_window_t1_ParamLimits

0xd362,	// (0x0008a291) slider_imed_adjust_pane_ParamLimits

0xd376,	// (0x0008a2a5) slider_imed_adjust_pane_g1_ParamLimits

0xd386,	// (0x0008a2b5) slider_imed_adjust_pane_g2_ParamLimits

0xd396,	// (0x0008a2c5) slider_imed_adjust_pane_g3_ParamLimits

0xd3a7,	// (0x0008a2d6) slider_imed_adjust_pane_g4_ParamLimits

0xf6de,	// (0x0008c60d) slider_imed_adjust_pane_g_ParamLimits

0x522a,	// (0x00082159) aid_touch_area_cam4_ParamLimits

0x522a,	// (0x00082159) aid_touch_area_cam4

0xd8a4,	// (0x0008a7d3) battery_pane_cp01

0x52fd,	// (0x0008222c) main_camera4_pane_g6_ParamLimits

0x52fd,	// (0x0008222c) main_camera4_pane_g6

0x5327,	// (0x00082256) main_camera4_pane_t2_ParamLimits

0x5327,	// (0x00082256) main_camera4_pane_t2

0x0001,

0xf7db,	// (0x0008c70a) main_camera4_pane_t_ParamLimits

0xf7db,	// (0x0008c70a) main_camera4_pane_t

0x5370,	// (0x0008229f) aid_touch_area_vid4_ParamLimits

0x5370,	// (0x0008229f) aid_touch_area_vid4

0x53c7,	// (0x000822f6) main_video4_pane_g5_ParamLimits

0x53c7,	// (0x000822f6) main_video4_pane_g5

0x53ed,	// (0x0008231c) vid4_progress_pane_ParamLimits

0x53ed,	// (0x0008231c) vid4_progress_pane

0xe668,	// (0x0008b597) main_cset_slider_pane_g18_ParamLimits

0xe668,	// (0x0008b597) main_cset_slider_pane_g18

0xe85a,	// (0x0008b789) cell_cam4_burst_pane_g2_ParamLimits

0xe85a,	// (0x0008b789) cell_cam4_burst_pane_g2

0x0001,

0xf930,	// (0x0008c85f) cell_cam4_burst_pane_g_ParamLimits

0xf930,	// (0x0008c85f) cell_cam4_burst_pane_g

0xaae0,	// (0x00087a0f) bg_cl_pane_ParamLimits

0xaae0,	// (0x00087a0f) bg_cl_pane

0x6482,	// (0x000833b1) cl_header_pane_ParamLimits

0x6482,	// (0x000833b1) cl_header_pane

0x6496,	// (0x000833c5) cl_listscroll_pane_ParamLimits

0x6496,	// (0x000833c5) cl_listscroll_pane

0xea44,	// (0x0008b973) bg_cl_pane_g1

0xea4c,	// (0x0008b97b) bg_cl_pane_g2

0xea54,	// (0x0008b983) bg_cl_pane_g3

0xea5c,	// (0x0008b98b) bg_cl_pane_g4

0xea64,	// (0x0008b993) bg_cl_pane_g5

0xea6c,	// (0x0008b99b) bg_cl_pane_g6

0xea74,	// (0x0008b9a3) bg_cl_pane_g7

0xea7c,	// (0x0008b9ab) bg_cl_pane_g8

0xea84,	// (0x0008b9b3) bg_cl_pane_g9

0x0008,

0xf96b,	// (0x0008c89a) bg_cl_pane_g

0x64a6,	// (0x000833d5) aid_height_cl_leading_ParamLimits

0x64a6,	// (0x000833d5) aid_height_cl_leading

0x64b2,	// (0x000833e1) aid_height_cl_text_ParamLimits

0x64b2,	// (0x000833e1) aid_height_cl_text

0xed10,	// (0x0008bc3f) bg_cl_header_pane_ParamLimits

0xed10,	// (0x0008bc3f) bg_cl_header_pane

0x64d1,	// (0x00083400) cl_header_pane_g1_ParamLimits

0x64d1,	// (0x00083400) cl_header_pane_g1

0x64e7,	// (0x00083416) cl_header_pane_t1_ParamLimits

0x64e7,	// (0x00083416) cl_header_pane_t1

0xea8c,	// (0x0008b9bb) cl_list_pane

0xe63b,	// (0x0008b56a) hc_scroll_pane_cp01

0xaf15,	// (0x00087e44) bg_cl_header_pane_g1

0xe4f7,	// (0x0008b426) bg_cl_header_pane_g2

0xaf35,	// (0x00087e64) bg_cl_header_pane_g3

0xe507,	// (0x0008b436) bg_cl_header_pane_g4

0xe4ff,	// (0x0008b42e) bg_cl_header_pane_g5

0xe775,	// (0x0008b6a4) bg_cl_header_pane_g6

0xe51f,	// (0x0008b44e) bg_cl_header_pane_g7

0xe527,	// (0x0008b456) bg_cl_header_pane_g8

0xe517,	// (0x0008b446) bg_cl_header_pane_g9

0x0008,

0xf97e,	// (0x0008c8ad) bg_cl_header_pane_g

0x6500,	// (0x0008342f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6500,	// (0x0008342f) hc_cl_list_double_graphic_heading_pane

0x6513,	// (0x00083442) hc_cl_list_single_graphic_pane_ParamLimits

0x6513,	// (0x00083442) hc_cl_list_single_graphic_pane

0x652b,	// (0x0008345a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x652b,	// (0x0008345a) hc_cl_list_single_graphic_pane_g1

0x6537,	// (0x00083466) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6537,	// (0x00083466) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf991,	// (0x0008c8c0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf991,	// (0x0008c8c0) hc_cl_list_single_graphic_pane_g

0x654b,	// (0x0008347a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x654b,	// (0x0008347a) hc_cl_list_single_graphic_pane_t1

0x652b,	// (0x0008345a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x652b,	// (0x0008345a) hc_cl_list_double_graphic_heading_pane_g1

0x6560,	// (0x0008348f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6560,	// (0x0008348f) hc_cl_list_double_graphic_heading_pane_g2

0x6574,	// (0x000834a3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6574,	// (0x000834a3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf996,	// (0x0008c8c5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf996,	// (0x0008c8c5) hc_cl_list_double_graphic_heading_pane_g

0x6588,	// (0x000834b7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6588,	// (0x000834b7) hc_cl_list_double_graphic_heading_pane_t1

0x659d,	// (0x000834cc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x659d,	// (0x000834cc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99d,	// (0x0008c8cc) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99d,	// (0x0008c8cc) hc_cl_list_double_graphic_heading_pane_t

0xea9d,	// (0x0008b9cc) vid4_progress_pane_g1

0xeaad,	// (0x0008b9dc) vid4_progress_pane_g2

0x65b2,	// (0x000834e1) vid4_progress_pane_g3

0xeabd,	// (0x0008b9ec) vid4_progress_pane_g4

0x0004,

0xf9a2,	// (0x0008c8d1) vid4_progress_pane_g

0x65c4,	// (0x000834f3) vid4_progress_pane_t1

0xeadb,	// (0x0008ba0a) vid4_progress_pane_t2

0x0002,

0xf9ad,	// (0x0008c8dc) vid4_progress_pane_t

0x65de,	// (0x0008350d) wait_bar_pane_cp07

0xcc61,	// (0x00089b90) blid_firmament_pane_ParamLimits

0xcca4,	// (0x00089bd3) popup_blid_sat_info2_window_g1

0xccc8,	// (0x00089bf7) popup_blid_sat_info2_window_t3

0xccd6,	// (0x00089c05) popup_blid_sat_info2_window_t4

0xcce4,	// (0x00089c13) popup_blid_sat_info2_window_t5

0xccf2,	// (0x00089c21) popup_blid_sat_info2_window_t6

0xcd02,	// (0x00089c31) popup_blid_sat_info2_window_t7

0xcd10,	// (0x00089c3f) popup_blid_sat_info2_window_t8

0xcd1e,	// (0x00089c4d) popup_blid_sat_info2_window_t9

0xcd2c,	// (0x00089c5b) popup_blid_sat_info2_window_t10

0xcdf3,	// (0x00089d22) aid_firma_cardinal_ParamLimits

0xce07,	// (0x00089d36) blid_firmament_pane_t1_ParamLimits

0xce1e,	// (0x00089d4d) blid_firmament_pane_t2_ParamLimits

0xce35,	// (0x00089d64) blid_firmament_pane_t3_ParamLimits

0xce4c,	// (0x00089d7b) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x0008c4ff) blid_firmament_pane_t_ParamLimits

0xce63,	// (0x00089d92) blid_sat_info_pane_ParamLimits

0xed10,	// (0x0008bc3f) main_cam_set_pane_ParamLimits

0x4a79,	// (0x000819a8) aid_size_cell_colour_35_ParamLimits

0x4a99,	// (0x000819c8) aid_size_cell_colour_112_ParamLimits

0x4ab9,	// (0x000819e8) aid_size_cell_effect_ParamLimits

0xb779,	// (0x000886a8) bg_tb_trans_pane_cp02_ParamLimits

0x4ad9,	// (0x00081a08) heading_imed_pane_ParamLimits

0x4ae5,	// (0x00081a14) listscroll_imed_pane_ParamLimits

0xc0be,	// (0x00088fed) popup_call2_audio_first_window_g5_ParamLimits

0xc0be,	// (0x00088fed) popup_call2_audio_first_window_g5

0x4e2d,	// (0x00081d5c) aid_size_touch_image3_arrow_left_ParamLimits

0x4e2d,	// (0x00081d5c) aid_size_touch_image3_arrow_left

0x4e59,	// (0x00081d88) aid_size_touch_image3_arrow_right_ParamLimits

0x4e59,	// (0x00081d88) aid_size_touch_image3_arrow_right

0xeaf4,	// (0x0008ba23) vid4_progress_pane_t3

0x4c62,	// (0x00081b91) main_hwr_training_symbol_option_pane_ParamLimits

0x4c62,	// (0x00081b91) main_hwr_training_symbol_option_pane

0xd4cb,	// (0x0008a3fa) popup_hwr_training_preview_window_ParamLimits

0xd4cb,	// (0x0008a3fa) popup_hwr_training_preview_window

0x4c82,	// (0x00081bb1) hwr_training_navi_pane_g5_ParamLimits

0x4c82,	// (0x00081bb1) hwr_training_navi_pane_g5

0xe4e5,	// (0x0008b414) popup_char_count_window

0xed10,	// (0x0008bc3f) bg_popup_sub_pane_cp20_ParamLimits

0x5f4b,	// (0x00082e7a) list_vitu2_match_list_pane_ParamLimits

0x5f57,	// (0x00082e86) vitu2_page_scroll_pane_ParamLimits

0x5f57,	// (0x00082e86) vitu2_page_scroll_pane

0xeb1a,	// (0x0008ba49) list_single_hwr_training_symbol_option_pane_ParamLimits

0xeb1a,	// (0x0008ba49) list_single_hwr_training_symbol_option_pane

0xeb2d,	// (0x0008ba5c) list_single_hwr_training_symbol_option_pane_g1

0xeb35,	// (0x0008ba64) list_single_hwr_training_symbol_option_pane_t1

0xeb43,	// (0x0008ba72) bg_button_pane_cp023

0xeb4c,	// (0x0008ba7b) bg_button_pane_cp024

0xeb7f,	// (0x0008baae) vitu2_page_scroll_pane_g1

0xeb87,	// (0x0008bab6) vitu2_page_scroll_pane_g2

0x0001,

0xf9b4,	// (0x0008c8e3) vitu2_page_scroll_pane_g

0xeb8f,	// (0x0008babe) vitu2_page_scroll_pane_t1

0xeb9e,	// (0x0008bacd) popup_char_count_window_g1

0xeba7,	// (0x0008bad6) popup_char_count_window_g2

0xebb0,	// (0x0008badf) popup_char_count_window_g3

0x0002,

0xf9b9,	// (0x0008c8e8) popup_char_count_window_g

0xebb9,	// (0x0008bae8) popup_char_count_window_t1

0xe26e,	// (0x0008b19d) main_vded2_pane

0xd30f,	// (0x0008a23e) aid_size_cell_imed_line

0xd319,	// (0x0008a248) grid_imed_line_width_pane

0xd95e,	// (0x0008a88d) vid4_indicators_pane_g4

0xebc7,	// (0x0008baf6) cell_imed_line_width_pane_ParamLimits

0xebc7,	// (0x0008baf6) cell_imed_line_width_pane

0xebdd,	// (0x0008bb0c) cell_imed_line_width_pane_g1

0xebe6,	// (0x0008bb15) cell_imed_line_width_pane_g2

0x0001,

0xf9c0,	// (0x0008c8ef) cell_imed_line_width_pane_g

0x65f1,	// (0x00083520) main_vded2_pane_g1_ParamLimits

0x65f1,	// (0x00083520) main_vded2_pane_g1

0x660c,	// (0x0008353b) main_vded2_pane_g2_ParamLimits

0x660c,	// (0x0008353b) main_vded2_pane_g2

0x0001,

0xf9c5,	// (0x0008c8f4) main_vded2_pane_g_ParamLimits

0xf9c5,	// (0x0008c8f4) main_vded2_pane_g

0x661e,	// (0x0008354d) vded2_slider_pane_ParamLimits

0x661e,	// (0x0008354d) vded2_slider_pane

0x662e,	// (0x0008355d) aid_size_touch_vded2_end

0x6638,	// (0x00083567) aid_size_touch_vded2_playhead

0xebee,	// (0x0008bb1d) aid_size_touch_vded2_start

0xebf6,	// (0x0008bb25) vded2_slider_bg_pane

0xebff,	// (0x0008bb2e) vded2_slider_pane_g1

0xec08,	// (0x0008bb37) vded2_slider_pane_g2

0x6642,	// (0x00083571) vded2_slider_pane_g3

0x0002,

0xf9ca,	// (0x0008c8f9) vded2_slider_pane_g

0xec10,	// (0x0008bb3f) vded2_slider_bg_pane_g1

0xec19,	// (0x0008bb48) vded2_slider_bg_pane_g2

0xec22,	// (0x0008bb51) vded2_slider_bg_pane_g3

0x0002,

0xf9d1,	// (0x0008c900) vded2_slider_bg_pane_g

0x2f81,	// (0x0007feb0) aid_postcard_touch_down_pane_ParamLimits

0x2f81,	// (0x0007feb0) aid_postcard_touch_down_pane

0x2f99,	// (0x0007fec8) aid_postcard_touch_up_pane_ParamLimits

0x2f99,	// (0x0007fec8) aid_postcard_touch_up_pane

0xe26e,	// (0x0008b19d) main_blid2_pane

0xc977,	// (0x000898a6) popup_blid2_search_window

0xe26e,	// (0x0008b19d) blid2_gps_pane

0xe26e,	// (0x0008b19d) blid2_navig_pane

0xe26e,	// (0x0008b19d) blid2_search_pane

0xe26e,	// (0x0008b19d) blid2_tripm_pane

0x664d,	// (0x0008357c) blid2_search_pane_g1_ParamLimits

0x664d,	// (0x0008357c) blid2_search_pane_g1

0x6660,	// (0x0008358f) blid2_search_pane_t1_ParamLimits

0x6660,	// (0x0008358f) blid2_search_pane_t1

0x6672,	// (0x000835a1) aid_size_cell_blid2_gps_ParamLimits

0x6672,	// (0x000835a1) aid_size_cell_blid2_gps

0x668a,	// (0x000835b9) blid2_gps_pane_g1_ParamLimits

0x668a,	// (0x000835b9) blid2_gps_pane_g1

0x669e,	// (0x000835cd) grid_blid2_satellite_pane_ParamLimits

0x669e,	// (0x000835cd) grid_blid2_satellite_pane

0x66b6,	// (0x000835e5) blid2_navig_pane_g1_ParamLimits

0x66b6,	// (0x000835e5) blid2_navig_pane_g1

0x66c2,	// (0x000835f1) blid2_navig_pane_t1_ParamLimits

0x66c2,	// (0x000835f1) blid2_navig_pane_t1

0x66dd,	// (0x0008360c) blid2_navig_pane_t2_ParamLimits

0x66dd,	// (0x0008360c) blid2_navig_pane_t2

0x0001,

0xf9d8,	// (0x0008c907) blid2_navig_pane_t_ParamLimits

0xf9d8,	// (0x0008c907) blid2_navig_pane_t

0x66f8,	// (0x00083627) blid2_navig_ring_pane_ParamLimits

0x66f8,	// (0x00083627) blid2_navig_ring_pane

0x6713,	// (0x00083642) blid2_speed_pane_ParamLimits

0x6713,	// (0x00083642) blid2_speed_pane

0x671f,	// (0x0008364e) blid2_tripm_pane_g1_ParamLimits

0x671f,	// (0x0008364e) blid2_tripm_pane_g1

0x673a,	// (0x00083669) blid2_tripm_pane_g2_ParamLimits

0x673a,	// (0x00083669) blid2_tripm_pane_g2

0x674d,	// (0x0008367c) blid2_tripm_pane_g3_ParamLimits

0x674d,	// (0x0008367c) blid2_tripm_pane_g3

0x675e,	// (0x0008368d) blid2_tripm_pane_g4_ParamLimits

0x675e,	// (0x0008368d) blid2_tripm_pane_g4

0x676f,	// (0x0008369e) blid2_tripm_pane_g5_ParamLimits

0x676f,	// (0x0008369e) blid2_tripm_pane_g5

0x0005,

0xf9dd,	// (0x0008c90c) blid2_tripm_pane_g_ParamLimits

0xf9dd,	// (0x0008c90c) blid2_tripm_pane_g

0x6795,	// (0x000836c4) blid2_tripm_pane_t1_ParamLimits

0x6795,	// (0x000836c4) blid2_tripm_pane_t1

0x67ae,	// (0x000836dd) blid2_tripm_pane_t2_ParamLimits

0x67ae,	// (0x000836dd) blid2_tripm_pane_t2

0x67c7,	// (0x000836f6) blid2_tripm_pane_t3_ParamLimits

0x67c7,	// (0x000836f6) blid2_tripm_pane_t3

0x0003,

0xf9ea,	// (0x0008c919) blid2_tripm_pane_t_ParamLimits

0xf9ea,	// (0x0008c919) blid2_tripm_pane_t

0x680e,	// (0x0008373d) cell_blid2_satellite_pane_ParamLimits

0x680e,	// (0x0008373d) cell_blid2_satellite_pane

0x682a,	// (0x00083759) cell_blid2_satellite_pane_g1

0xec2b,	// (0x0008bb5a) cell_blid2_satellite_pane_t1

0xaa68,	// (0x00087997) blid2_speed_pane_g1

0xec39,	// (0x0008bb68) blid2_speed_pane_t1

0xec47,	// (0x0008bb76) blid2_speed_pane_t2

0x0001,

0xf9f3,	// (0x0008c922) blid2_speed_pane_t

0xaa68,	// (0x00087997) blid2_navig_ring_pane_g1

0x6833,	// (0x00083762) blid2_navig_ring_pane_g2

0x683b,	// (0x0008376a) blid2_navig_ring_pane_g3

0x6843,	// (0x00083772) blid2_navig_ring_pane_g4

0x684b,	// (0x0008377a) blid2_navig_ring_pane_g5

0x0004,

0xf9f8,	// (0x0008c927) blid2_navig_ring_pane_g

0xe26e,	// (0x0008b19d) bg_popup_window_pane_cp011

0xec55,	// (0x0008bb84) popup_blid2_search_window_g1

0xec5d,	// (0x0008bb8c) popup_blid2_search_window_t1

0xec6b,	// (0x0008bb9a) popup_blid2_search_window_t2

0x0001,

0xfa03,	// (0x0008c932) popup_blid2_search_window_t

0xae24,	// (0x00087d53) main_browser_pane_g1

0xaae0,	// (0x00087a0f) main_browser_pane_ParamLimits

0xed10,	// (0x0008bc3f) bg_button_pane_cp011_ParamLimits

0x57cf,	// (0x000826fe) cell_vitu2_function_pane_g1_ParamLimits

0xb779,	// (0x000886a8) bg_popup_sub_pane_cp22_ParamLimits

0x60ee,	// (0x0008301d) input_focus_pane_cp08_ParamLimits

0x610a,	// (0x00083039) popup_vitu2_query_button_pane_ParamLimits

0x610a,	// (0x00083039) popup_vitu2_query_button_pane

0x6119,	// (0x00083048) popup_vitu2_query_input_button_pane

0xe7b0,	// (0x0008b6df) popup_vitu2_query_window_g1_ParamLimits

0x6123,	// (0x00083052) popup_vitu2_query_window_g2_ParamLimits

0xf904,	// (0x0008c833) popup_vitu2_query_window_g_ParamLimits

0xe26e,	// (0x0008b19d) bg_button_pane_cp026

0x6853,	// (0x00083782) popup_vitu2_query_input_button_pane_g1

0xe26e,	// (0x0008b19d) bg_button_pane_cp025

0xec79,	// (0x0008bba8) popup_vitu2_query_button_pane_t1

0x3ee2,	// (0x00080e11) main_mp3_pane_t6

0x3ef0,	// (0x00080e1f) popup_slider_window_cp01

0xd8c2,	// (0x0008a7f1) cam4_battery_pane

0xd917,	// (0x0008a846) cam4_battery_pane_cp02

0xea95,	// (0x0008b9c4) cam4_battery_pane_cp01

0xea95,	// (0x0008b9c4) cam4_battery_pane_cp03

0xaa68,	// (0x00087997) cam4_battery_pane_g1

0xec87,	// (0x0008bbb6) cam4_battery_pane_g2

0x0001,

0xfa08,	// (0x0008c937) cam4_battery_pane_g

0xcd3a,	// (0x00089c69) popup_blid_sat_info2_window_t11

0x2b58,	// (0x0007fa87) aid_size_touch_mv_arrow_left_ParamLimits

0x2b81,	// (0x0007fab0) aid_size_touch_mv_arrow_right_ParamLimits

0xb5ee,	// (0x0008851d) navi_pane_g1_ParamLimits

0x2bc0,	// (0x0007faef) navi_pane_g2_ParamLimits

0x2bee,	// (0x0007fb1d) navi_pane_g3_ParamLimits

0xf30c,	// (0x0008c23b) navi_pane_g_ParamLimits

0x2c48,	// (0x0007fb77) navi_pane_mv_t1_ParamLimits

0x4af1,	// (0x00081a20) grid_imed_effect_pane_ParamLimits

0x1771,	// (0x0007e6a0) aid_placing_vt_slider_lsc

0xad62,	// (0x00087c91) aid_placing_vt_slider_prt

0xed10,	// (0x0008bc3f) bg_tb_trans_pane_cp01_ParamLimits

0xcfa2,	// (0x00089ed1) popup_image_details_window_g1_ParamLimits

0xcfb5,	// (0x00089ee4) popup_image_details_window_g2_ParamLimits

0xcfca,	// (0x00089ef9) popup_image_details_window_g3_ParamLimits

0xcfca,	// (0x00089ef9) popup_image_details_window_g3

0xf610,	// (0x0008c53f) popup_image_details_window_g_ParamLimits

0xcfde,	// (0x00089f0d) popup_image_details_window_t1_ParamLimits

0xcff0,	// (0x00089f1f) popup_image_details_window_t2_ParamLimits

0xd009,	// (0x00089f38) popup_image_details_window_t3_ParamLimits

0xd01d,	// (0x00089f4c) popup_image_details_window_t4_ParamLimits

0xd038,	// (0x00089f67) popup_image_details_window_t5_ParamLimits

0xf617,	// (0x0008c546) popup_image_details_window_t_ParamLimits

0x64be,	// (0x000833ed) cl_header_name_pane_ParamLimits

0x64be,	// (0x000833ed) cl_header_name_pane

0x685b,	// (0x0008378a) cl_header_name_pane_t1_ParamLimits

0x685b,	// (0x0008378a) cl_header_name_pane_t1

0x687c,	// (0x000837ab) cl_header_name_pane_t2_ParamLimits

0x687c,	// (0x000837ab) cl_header_name_pane_t2

0x68be,	// (0x000837ed) cl_header_name_pane_t3_ParamLimits

0x68be,	// (0x000837ed) cl_header_name_pane_t3

0x0002,

0xfa0d,	// (0x0008c93c) cl_header_name_pane_t_ParamLimits

0xfa0d,	// (0x0008c93c) cl_header_name_pane_t

0x2c19,	// (0x0007fb48) navi_pane_mv_g2_ParamLimits

0xe481,	// (0x0008b3b0) field_vitu2_entry_pane_g1_ParamLimits

0xe48d,	// (0x0008b3bc) field_vitu2_entry_pane_g2_ParamLimits

0xb757,	// (0x00088686) field_vitu2_entry_pane_g3_ParamLimits

0xb757,	// (0x00088686) field_vitu2_entry_pane_g3

0xf80d,	// (0x0008c73c) field_vitu2_entry_pane_g_ParamLimits

0x565f,	// (0x0008258e) cell_vitu2_itu_pane_g1_ParamLimits

0x5677,	// (0x000825a6) cell_vitu2_itu_pane_g2_ParamLimits

0x5677,	// (0x000825a6) cell_vitu2_itu_pane_g2

0x0001,

0xf819,	// (0x0008c748) cell_vitu2_itu_pane_g_ParamLimits

0xf819,	// (0x0008c748) cell_vitu2_itu_pane_g

0xed10,	// (0x0008bc3f) bg_vkb2_func_pane_cp05_ParamLimits

0xed10,	// (0x0008bc3f) bg_vkb2_func_pane_cp05

0xed10,	// (0x0008bc3f) bg_vkb2_func_pane_cp03

0xed10,	// (0x0008bc3f) bg_vkb2_func_pane_cp04

0xed10,	// (0x0008bc3f) bg_vkb2_func_pane_cp10_ParamLimits

0xed10,	// (0x0008bc3f) bg_vkb2_func_pane_cp10

0x645b,	// (0x0008338a) bg_vkb2_func_pane_cp08

0x642e,	// (0x0008335d) bg_vkb2_func_pane_cp06

0x643a,	// (0x00083369) bg_vkb2_func_pane_cp07

0xeb55,	// (0x0008ba84) bg_vkb2_func_pane_cp11_ParamLimits

0xeb55,	// (0x0008ba84) bg_vkb2_func_pane_cp11

0xeb6a,	// (0x0008ba99) bg_vkb2_func_pane_cp12_ParamLimits

0xeb6a,	// (0x0008ba99) bg_vkb2_func_pane_cp12

0xe26e,	// (0x0008b19d) bg_vkb2_func_pane_cp09

0xe4f7,	// (0x0008b426) bg_vkb2_func_pane_g1

0xaf35,	// (0x00087e64) bg_vkb2_func_pane_g2

0xe4ff,	// (0x0008b42e) bg_vkb2_func_pane_g3

0xe507,	// (0x0008b436) bg_vkb2_func_pane_g4

0xe775,	// (0x0008b6a4) bg_vkb2_func_pane_g5

0xe51f,	// (0x0008b44e) bg_vkb2_func_pane_g6

0xe527,	// (0x0008b456) bg_vkb2_func_pane_g7

0xe517,	// (0x0008b446) bg_vkb2_func_pane_g8

0xaf15,	// (0x00087e44) bg_vkb2_func_pane_g9

0x0008,

0xfa14,	// (0x0008c943) bg_vkb2_func_pane_g

0x6783,	// (0x000836b2) blid2_tripm_pane_g6_ParamLimits

0x6783,	// (0x000836b2) blid2_tripm_pane_g6

0xe3c2,	// (0x0008b2f1) mp4_progress_pane_g1

0x67fa,	// (0x00083729) blid2_tripm_values_pane_ParamLimits

0x67fa,	// (0x00083729) blid2_tripm_values_pane

0x68ef,	// (0x0008381e) blid2_tripm_values_pane_t1

0x68fd,	// (0x0008382c) blid2_tripm_values_pane_t2

0xec91,	// (0x0008bbc0) blid2_tripm_values_pane_t3

0x690b,	// (0x0008383a) blid2_tripm_values_pane_t4

0x6919,	// (0x00083848) blid2_tripm_values_pane_t5

0x6927,	// (0x00083856) blid2_tripm_values_pane_t6

0xec9f,	// (0x0008bbce) blid2_tripm_values_pane_t7

0x6935,	// (0x00083864) blid2_tripm_values_pane_t8

0x6943,	// (0x00083872) blid2_tripm_values_pane_t9

0x0008,

0xfa27,	// (0x0008c956) blid2_tripm_values_pane_t

0x17b0,	// (0x0007e6df) call_video_pane_t1_ParamLimits

0x17ca,	// (0x0007e6f9) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0008c0e9) call_video_pane_t_ParamLimits

0x0416,	// (0x0007d345) msg_header_pane_g1_ParamLimits

0xb847,	// (0x00088776) msg_header_pane_g2_ParamLimits

0xb847,	// (0x00088776) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x0008c2d9) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x0008c2d9) msg_header_pane_g

0xaae0,	// (0x00087a0f) main_clock2_pane_ParamLimits

0x47e9,	// (0x00081718) grid_clock2_toolbar_pane_ParamLimits

0x47e9,	// (0x00081718) grid_clock2_toolbar_pane

0x47e9,	// (0x00081718) listscroll_clock2_pane_ParamLimits

0x47e9,	// (0x00081718) listscroll_clock2_pane

0x48c5,	// (0x000817f4) main_clock2_pane_t3_ParamLimits

0x48c5,	// (0x000817f4) main_clock2_pane_t3

0x48e6,	// (0x00081815) main_clock2_pane_t4_ParamLimits

0x48e6,	// (0x00081815) main_clock2_pane_t4

0xecad,	// (0x0008bbdc) cell_clock2_toolbar_pane

0xecb5,	// (0x0008bbe4) cell_clock2_toolbar_pane_cp01

0xecb5,	// (0x0008bbe4) cell_clock2_toolbar_pane_cp02

0xecbd,	// (0x0008bbec) cell_clock2_toolbar_pane_cp03

0xecc5,	// (0x0008bbf4) list_clock2_pane

0xb554,	// (0x00088483) scroll_pane_cp10

0xeccd,	// (0x0008bbfc) list_single_clock2_pane_ParamLimits

0xeccd,	// (0x0008bbfc) list_single_clock2_pane

0xad01,	// (0x00087c30) list_highlight_pane_cp08

0xecda,	// (0x0008bc09) list_single_clock2_pane_t1

0x6951,	// (0x00083880) list_single_clock2_pane_t2

0x0001,

0xfa3a,	// (0x0008c969) list_single_clock2_pane_t

0xe26e,	// (0x0008b19d) bg_button_pane_cp10

0x695f,	// (0x0008388e) cell_clock2_toolbar_pane_g1

0x2f0d,	// (0x0007fe3c) aid_main_viewer_pane_g1_ParamLimits

0x2f0d,	// (0x0007fe3c) aid_main_viewer_pane_g1

0x2f1b,	// (0x0007fe4a) aid_main_viewer_pane_g2_ParamLimits

0x2f1b,	// (0x0007fe4a) aid_main_viewer_pane_g2

0x2f29,	// (0x0007fe58) aid_main_viewer_pane_g3_ParamLimits

0x2f29,	// (0x0007fe58) aid_main_viewer_pane_g3

0x2f38,	// (0x0007fe67) aid_main_viewer_pane_g4_ParamLimits

0x2f38,	// (0x0007fe67) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x0008c2ea) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0008c2ea) aid_main_viewer_pane_g

0x3823,	// (0x00080752) main_calc_pane_ParamLimits

0x3837,	// (0x00080766) main_dialer2_pane_ParamLimits

0xe26e,	// (0x0008b19d) main_cam6_pane

0xe26e,	// (0x0008b19d) main_vid6_pane

0x47f5,	// (0x00081724) listscroll_gen_pane_cp06_ParamLimits

0x47f5,	// (0x00081724) listscroll_gen_pane_cp06

0x4907,	// (0x00081836) main_clock2_pane_t5_ParamLimits

0x4907,	// (0x00081836) main_clock2_pane_t5

0x4965,	// (0x00081894) aid_call2_pane_cp10_ParamLimits

0x4977,	// (0x000818a6) aid_call_pane_cp10_ParamLimits

0xb5c3,	// (0x000884f2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb5c3,	// (0x000884f2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4989,	// (0x000818b8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4989,	// (0x000818b8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb5c3,	// (0x000884f2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cc,	// (0x0008c5fb) popup_clock_analogue_window_cp10_g_ParamLimits

0x499f,	// (0x000818ce) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe42c,	// (0x0008b35b) cell_dialer2_keypad_pane_g2_ParamLimits

0xe42c,	// (0x0008b35b) cell_dialer2_keypad_pane_g2

0x0001,

0xf7ac,	// (0x0008c6db) cell_dialer2_keypad_pane_g_ParamLimits

0xf7ac,	// (0x0008c6db) cell_dialer2_keypad_pane_g

0xaa72,	// (0x000879a1) cell_dialer2_keypad_pane_t1

0x5af7,	// (0x00082a26) main_cset_text2_pane_ParamLimits

0x5af7,	// (0x00082a26) main_cset_text2_pane

0xe99c,	// (0x0008b8cb) area_vitu2_query_pane_g1_ParamLimits

0x63c5,	// (0x000832f4) area_vitu2_query_pane_g2_ParamLimits

0xf957,	// (0x0008c886) area_vitu2_query_pane_g_ParamLimits

0xea20,	// (0x0008b94f) area_vitu2_query_pane_t7_ParamLimits

0xea20,	// (0x0008b94f) area_vitu2_query_pane_t7

0x642e,	// (0x0008335d) bg_button_pane_cp018_ParamLimits

0x643a,	// (0x00083369) bg_button_pane_cp021_ParamLimits

0x6446,	// (0x00083375) bg_button_pane_cp022_ParamLimits

0x645b,	// (0x0008338a) bg_vkb2_func_pane_cp08_ParamLimits

0x642e,	// (0x0008335d) bg_vkb2_func_pane_cp06_ParamLimits

0x643a,	// (0x00083369) bg_vkb2_func_pane_cp07_ParamLimits

0x6471,	// (0x000833a0) input_focus_pane_cp09_ParamLimits

0xece8,	// (0x0008bc17) cam6_autofocus_pane_ParamLimits

0xece8,	// (0x0008bc17) cam6_autofocus_pane

0x6967,	// (0x00083896) cam6_image_uncrop_pane_ParamLimits

0x6967,	// (0x00083896) cam6_image_uncrop_pane

0x6977,	// (0x000838a6) cam6_indi_pane_ParamLimits

0x6977,	// (0x000838a6) cam6_indi_pane

0x698d,	// (0x000838bc) cam6_mode_pane_ParamLimits

0x698d,	// (0x000838bc) cam6_mode_pane

0x699f,	// (0x000838ce) cam6_timer_pane_ParamLimits

0x699f,	// (0x000838ce) cam6_timer_pane

0x69ab,	// (0x000838da) cam6_zoom_pane_ParamLimits

0x69ab,	// (0x000838da) cam6_zoom_pane

0x69b9,	// (0x000838e8) cam6_mode_pane_g1_ParamLimits

0x69b9,	// (0x000838e8) cam6_mode_pane_g1

0x69c9,	// (0x000838f8) cam6_mode_pane_g2_ParamLimits

0x69c9,	// (0x000838f8) cam6_mode_pane_g2

0x69d9,	// (0x00083908) cam6_mode_pane_g3_ParamLimits

0x69d9,	// (0x00083908) cam6_mode_pane_g3

0x69e9,	// (0x00083918) cam6_mode_pane_g4_ParamLimits

0x69e9,	// (0x00083918) cam6_mode_pane_g4

0x0003,

0xfa3f,	// (0x0008c96e) cam6_mode_pane_g_ParamLimits

0xfa3f,	// (0x0008c96e) cam6_mode_pane_g

0xcaf0,	// (0x00089a1f) bg_tb_trans_pane_cp08_ParamLimits

0xcaf0,	// (0x00089a1f) bg_tb_trans_pane_cp08

0x69f9,	// (0x00083928) cam6_battery_pane_ParamLimits

0x69f9,	// (0x00083928) cam6_battery_pane

0x6a0f,	// (0x0008393e) cam6_indi_pane_g1_ParamLimits

0x6a0f,	// (0x0008393e) cam6_indi_pane_g1

0x6a21,	// (0x00083950) cam6_indi_pane_g2_ParamLimits

0x6a21,	// (0x00083950) cam6_indi_pane_g2

0x6a33,	// (0x00083962) cam6_indi_pane_g3_ParamLimits

0x6a33,	// (0x00083962) cam6_indi_pane_g3

0x0002,

0xfa48,	// (0x0008c977) cam6_indi_pane_g_ParamLimits

0xfa48,	// (0x0008c977) cam6_indi_pane_g

0x6a45,	// (0x00083974) cam6_indi_pane_t1_ParamLimits

0x6a45,	// (0x00083974) cam6_indi_pane_t1

0x5432,	// (0x00082361) cam6_autofocus_pane_g1

0x543a,	// (0x00082369) cam6_autofocus_pane_g2

0x5442,	// (0x00082371) cam6_autofocus_pane_g3

0x544a,	// (0x00082379) cam6_autofocus_pane_g4

0x0003,

0xfa4f,	// (0x0008c97e) cam6_autofocus_pane_g

0x6a6b,	// (0x0008399a) cam6_timer_pane_g1

0x6a73,	// (0x000839a2) cam6_timer_pane_t1

0x6a81,	// (0x000839b0) cam6_zoom_cont_pane

0x6a89,	// (0x000839b8) cam6_zoom_pane_g1

0x6a92,	// (0x000839c1) cam6_zoom_pane_g2

0x6a9b,	// (0x000839ca) cam6_zoom_pane_g3

0x0002,

0xfa58,	// (0x0008c987) cam6_zoom_pane_g

0xaa68,	// (0x00087997) cam6_battery_pane_g1

0xaa68,	// (0x00087997) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0008bfbb) cam6_battery_pane_g

0x6a89,	// (0x000839b8) cam6_zoom_cont_pane_g1

0x6a92,	// (0x000839c1) cam6_zoom_cont_pane_g2

0x6aa4,	// (0x000839d3) cam6_zoom_cont_pane_g3

0x0002,

0xfa5f,	// (0x0008c98e) cam6_zoom_cont_pane_g

0x6ac1,	// (0x000839f0) cam6_mode_pane_cp_ParamLimits

0x6ac1,	// (0x000839f0) cam6_mode_pane_cp

0x6ad3,	// (0x00083a02) cam6_zoom_pane_cp_ParamLimits

0x6ad3,	// (0x00083a02) cam6_zoom_pane_cp

0x6ae1,	// (0x00083a10) vid6_image_uncrop_cif_pane_ParamLimits

0x6ae1,	// (0x00083a10) vid6_image_uncrop_cif_pane

0x6af1,	// (0x00083a20) vid6_image_uncrop_nhd_pane_ParamLimits

0x6af1,	// (0x00083a20) vid6_image_uncrop_nhd_pane

0x6b10,	// (0x00083a3f) vid6_image_uncrop_vga_pane_ParamLimits

0x6b10,	// (0x00083a3f) vid6_image_uncrop_vga_pane

0x6b1f,	// (0x00083a4e) vid6_image_uncrop_wvga_pane_ParamLimits

0x6b1f,	// (0x00083a4e) vid6_image_uncrop_wvga_pane

0x6b2e,	// (0x00083a5d) vid6_indi_pane_ParamLimits

0x6b2e,	// (0x00083a5d) vid6_indi_pane

0xcaf0,	// (0x00089a1f) bg_tb_trans_pane_cp09_ParamLimits

0xcaf0,	// (0x00089a1f) bg_tb_trans_pane_cp09

0x6b46,	// (0x00083a75) cam6_battery_pane_cp_ParamLimits

0x6b46,	// (0x00083a75) cam6_battery_pane_cp

0x6b52,	// (0x00083a81) vid6_indi_pane_g1_ParamLimits

0x6b52,	// (0x00083a81) vid6_indi_pane_g1

0x6b64,	// (0x00083a93) vid6_indi_pane_g2_ParamLimits

0x6b64,	// (0x00083a93) vid6_indi_pane_g2

0x6b76,	// (0x00083aa5) vid6_indi_pane_g3_ParamLimits

0x6b76,	// (0x00083aa5) vid6_indi_pane_g3

0x6b8d,	// (0x00083abc) vid6_indi_pane_g4_ParamLimits

0x6b8d,	// (0x00083abc) vid6_indi_pane_g4

0x6ba4,	// (0x00083ad3) vid6_indi_pane_g5_ParamLimits

0x6ba4,	// (0x00083ad3) vid6_indi_pane_g5

0x0004,

0xfa66,	// (0x0008c995) vid6_indi_pane_g_ParamLimits

0xfa66,	// (0x0008c995) vid6_indi_pane_g

0x6bbe,	// (0x00083aed) vid6_indi_pane_t1_ParamLimits

0x6bbe,	// (0x00083aed) vid6_indi_pane_t1

0x6bd4,	// (0x00083b03) vid6_indi_pane_t2_ParamLimits

0x6bd4,	// (0x00083b03) vid6_indi_pane_t2

0x6bfc,	// (0x00083b2b) vid6_indi_pane_t3_ParamLimits

0x6bfc,	// (0x00083b2b) vid6_indi_pane_t3

0x6c24,	// (0x00083b53) vid6_indi_pane_t4_ParamLimits

0x6c24,	// (0x00083b53) vid6_indi_pane_t4

0x0003,

0xfa71,	// (0x0008c9a0) vid6_indi_pane_t_ParamLimits

0xfa71,	// (0x0008c9a0) vid6_indi_pane_t

0x6c48,	// (0x00083b77) wait_bar_pane_cp08

0x6c57,	// (0x00083b86) main_cset_text2_pane_t1_ParamLimits

0x6c57,	// (0x00083b86) main_cset_text2_pane_t1

0x6aac,	// (0x000839db) listscroll_gen_pane_cp06_t1_ParamLimits

0x6aac,	// (0x000839db) listscroll_gen_pane_cp06_t1

0xe26e,	// (0x0008b19d) main_cam6_set_pane

0xaa22,	// (0x00087951) bg_tb_trans_pane_cp06_ParamLimits

0xd8ca,	// (0x0008a7f9) cam4_indicators_pane_g1_ParamLimits

0xd8db,	// (0x0008a80a) cam4_indicators_pane_g2_ParamLimits

0xf7e9,	// (0x0008c718) cam4_indicators_pane_g_ParamLimits

0xd8f3,	// (0x0008a822) cam4_indicators_pane_t1_ParamLimits

0xed10,	// (0x0008bc3f) bg_tb_trans_pane_cp07_ParamLimits

0xd921,	// (0x0008a850) vid4_indicators_pane_g1_ParamLimits

0xd937,	// (0x0008a866) vid4_indicators_pane_g2_ParamLimits

0xd94b,	// (0x0008a87a) vid4_indicators_pane_g3_ParamLimits

0xd95e,	// (0x0008a88d) vid4_indicators_pane_g4_ParamLimits

0xf7fb,	// (0x0008c72a) vid4_indicators_pane_g_ParamLimits

0xd97c,	// (0x0008a8ab) vid4_indicators_pane_t1_ParamLimits

0xea9d,	// (0x0008b9cc) vid4_progress_pane_g1_ParamLimits

0xeaad,	// (0x0008b9dc) vid4_progress_pane_g2_ParamLimits

0x65b2,	// (0x000834e1) vid4_progress_pane_g3_ParamLimits

0xeabd,	// (0x0008b9ec) vid4_progress_pane_g4_ParamLimits

0xf9a2,	// (0x0008c8d1) vid4_progress_pane_g_ParamLimits

0x65c4,	// (0x000834f3) vid4_progress_pane_t1_ParamLimits

0xeadb,	// (0x0008ba0a) vid4_progress_pane_t2_ParamLimits

0xeaf4,	// (0x0008ba23) vid4_progress_pane_t3_ParamLimits

0xf9ad,	// (0x0008c8dc) vid4_progress_pane_t_ParamLimits

0x65de,	// (0x0008350d) wait_bar_pane_cp07_ParamLimits

0x6c78,	// (0x00083ba7) main_cam6_set_pane_g2_ParamLimits

0x6c78,	// (0x00083ba7) main_cam6_set_pane_g2

0x6c9e,	// (0x00083bcd) main_cset6_listscroll_pane_ParamLimits

0x6c9e,	// (0x00083bcd) main_cset6_listscroll_pane

0x6cbc,	// (0x00083beb) main_cset6_slider_pane_ParamLimits

0x6cbc,	// (0x00083beb) main_cset6_slider_pane

0x6cd2,	// (0x00083c01) main_cset6_text2_pane_ParamLimits

0x6cd2,	// (0x00083c01) main_cset6_text2_pane

0x6ce0,	// (0x00083c0f) main_cset6_text_pane

0x6ce8,	// (0x00083c17) main_cset_list_pane_copy1_ParamLimits

0x6ce8,	// (0x00083c17) main_cset_list_pane_copy1

0x6cf8,	// (0x00083c27) scroll_pane_cp028_copy1

0x6d01,	// (0x00083c30) cset_list_set_pane_copy1

0x6d15,	// (0x00083c44) aid_position_infowindow_above_copy1

0x6d1d,	// (0x00083c4c) aid_position_infowindow_below_copy1

0x6d25,	// (0x00083c54) cset_list_set_pane_g1_copy1

0x0519,	// (0x0007d448) cset_list_set_pane_g3_copy1_ParamLimits

0x0519,	// (0x0007d448) cset_list_set_pane_g3_copy1

0x0528,	// (0x0007d457) cset_list_set_pane_t1_copy1_ParamLimits

0x0528,	// (0x0007d457) cset_list_set_pane_t1_copy1

0xed10,	// (0x0008bc3f) list_highlight_pane_cp021_copy1_ParamLimits

0xed10,	// (0x0008bc3f) list_highlight_pane_cp021_copy1

0x6d2d,	// (0x00083c5c) cset6_slider_pane_ParamLimits

0x6d2d,	// (0x00083c5c) cset6_slider_pane

0x6d59,	// (0x00083c88) main_cset6_slider_pane_g1_ParamLimits

0x6d59,	// (0x00083c88) main_cset6_slider_pane_g1

0x6d81,	// (0x00083cb0) main_cset6_slider_pane_g2_ParamLimits

0x6d81,	// (0x00083cb0) main_cset6_slider_pane_g2

0x6da9,	// (0x00083cd8) main_cset6_slider_pane_g3_ParamLimits

0x6da9,	// (0x00083cd8) main_cset6_slider_pane_g3

0x6db5,	// (0x00083ce4) main_cset6_slider_pane_g4_ParamLimits

0x6db5,	// (0x00083ce4) main_cset6_slider_pane_g4

0x6dc1,	// (0x00083cf0) main_cset6_slider_pane_g5_ParamLimits

0x6dc1,	// (0x00083cf0) main_cset6_slider_pane_g5

0xe650,	// (0x0008b57f) main_cset6_slider_pane_g7_ParamLimits

0xe650,	// (0x0008b57f) main_cset6_slider_pane_g7

0xe65c,	// (0x0008b58b) main_cset6_slider_pane_g8_ParamLimits

0xe65c,	// (0x0008b58b) main_cset6_slider_pane_g8

0x5b9f,	// (0x00082ace) main_cset6_slider_pane_g9_ParamLimits

0x5b9f,	// (0x00082ace) main_cset6_slider_pane_g9

0x5bab,	// (0x00082ada) main_cset6_slider_pane_g10_ParamLimits

0x5bab,	// (0x00082ada) main_cset6_slider_pane_g10

0x5bb7,	// (0x00082ae6) main_cset6_slider_pane_g11_ParamLimits

0x5bb7,	// (0x00082ae6) main_cset6_slider_pane_g11

0x5bc3,	// (0x00082af2) main_cset6_slider_pane_g12_ParamLimits

0x5bc3,	// (0x00082af2) main_cset6_slider_pane_g12

0x5bcf,	// (0x00082afe) main_cset6_slider_pane_g13_ParamLimits

0x5bcf,	// (0x00082afe) main_cset6_slider_pane_g13

0x5bdb,	// (0x00082b0a) main_cset6_slider_pane_g14_ParamLimits

0x5bdb,	// (0x00082b0a) main_cset6_slider_pane_g14

0x6dcf,	// (0x00083cfe) main_cset6_slider_pane_g15_ParamLimits

0x6dcf,	// (0x00083cfe) main_cset6_slider_pane_g15

0x5bff,	// (0x00082b2e) main_cset6_slider_pane_g16_ParamLimits

0x5bff,	// (0x00082b2e) main_cset6_slider_pane_g16

0x5c0d,	// (0x00082b3c) main_cset6_slider_pane_g17_ParamLimits

0x5c0d,	// (0x00082b3c) main_cset6_slider_pane_g17

0x0011,

0xfa7a,	// (0x0008c9a9) main_cset6_slider_pane_g_ParamLimits

0xfa7a,	// (0x0008c9a9) main_cset6_slider_pane_g

0x6dff,	// (0x00083d2e) main_cset6_slider_pane_t1_ParamLimits

0x6dff,	// (0x00083d2e) main_cset6_slider_pane_t1

0x6e40,	// (0x00083d6f) main_cset6_slider_pane_t2_ParamLimits

0x6e40,	// (0x00083d6f) main_cset6_slider_pane_t2

0x6e6b,	// (0x00083d9a) main_cset6_slider_pane_t3_ParamLimits

0x6e6b,	// (0x00083d9a) main_cset6_slider_pane_t3

0x6e96,	// (0x00083dc5) main_cset6_slider_pane_t4_ParamLimits

0x6e96,	// (0x00083dc5) main_cset6_slider_pane_t4

0x6ec1,	// (0x00083df0) main_cset6_slider_pane_t5_ParamLimits

0x6ec1,	// (0x00083df0) main_cset6_slider_pane_t5

0x6eee,	// (0x00083e1d) main_cset6_slider_pane_t7_ParamLimits

0x6eee,	// (0x00083e1d) main_cset6_slider_pane_t7

0x6f24,	// (0x00083e53) main_cset6_slider_pane_t8_ParamLimits

0x6f24,	// (0x00083e53) main_cset6_slider_pane_t8

0x6f48,	// (0x00083e77) main_cset6_slider_pane_t9_ParamLimits

0x6f48,	// (0x00083e77) main_cset6_slider_pane_t9

0x6f6c,	// (0x00083e9b) main_cset6_slider_pane_t10_ParamLimits

0x6f6c,	// (0x00083e9b) main_cset6_slider_pane_t10

0x6f90,	// (0x00083ebf) main_cset6_slider_pane_t11_ParamLimits

0x6f90,	// (0x00083ebf) main_cset6_slider_pane_t11

0x6fb6,	// (0x00083ee5) main_cset6_slider_pane_t14_ParamLimits

0x6fb6,	// (0x00083ee5) main_cset6_slider_pane_t14

0x6fef,	// (0x00083f1e) main_cset6_slider_pane_t15_ParamLimits

0x6fef,	// (0x00083f1e) main_cset6_slider_pane_t15

0x000b,

0xfa9f,	// (0x0008c9ce) main_cset6_slider_pane_t_ParamLimits

0xfa9f,	// (0x0008c9ce) main_cset6_slider_pane_t

0xe727,	// (0x0008b656) cset_slider_pane_g1_copy1

0xe730,	// (0x0008b65f) cset_slider_pane_g2_copy1

0xe739,	// (0x0008b668) cset_slider_pane_g3_copy1

0xe26e,	// (0x0008b19d) bg_popup_sub_pane_cp011_copy1

0x7031,	// (0x00083f60) main_cset_text_pane_g1_copy1

0xe7c4,	// (0x0008b6f3) main_cset_text_pane_t1_copy1

0xe7d2,	// (0x0008b701) main_cset_text_pane_t2_copy1

0xe7e0,	// (0x0008b70f) main_cset_text_pane_t3_copy1

0xe7ee,	// (0x0008b71d) main_cset_text_pane_t4_copy1

0xe7fc,	// (0x0008b72b) main_cset_text_pane_t5_copy1

0x7039,	// (0x00083f68) main_cset_text_pane_t6_copy1

0x7047,	// (0x00083f76) main_cset_text_pane_t7_copy1

0x6c57,	// (0x00083b86) main_cset_text2_pane_t1_copy1

0xed10,	// (0x0008bc3f) main_ncimui_pane

0x3ac5,	// (0x000809f4) popup_query_ncimui_window_ParamLimits

0x3ac5,	// (0x000809f4) popup_query_ncimui_window

0xd0d9,	// (0x0008a008) field_cale_ev2_pane_g4_ParamLimits

0xd0d9,	// (0x0008a008) field_cale_ev2_pane_g4

0x4d7e,	// (0x00081cad) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4d7e,	// (0x00081cad) cell_video_dialer_keypad_pane_g2

0x0001,

0xf783,	// (0x0008c6b2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf783,	// (0x0008c6b2) cell_video_dialer_keypad_pane_g

0x4d96,	// (0x00081cc5) cell_video_dialer_keypad_pane_t1

0xe26e,	// (0x0008b19d) bg_popup_window_pane_cp012

0xb44d,	// (0x0008837c) heading_pane_cp06

0x719c,	// (0x000840cb) ncim_query_content_pane

0xe26e,	// (0x0008b19d) bg_popup_heading_pane_cp01

0x71a4,	// (0x000840d3) ncim_heading_pane_t1

0x71b2,	// (0x000840e1) ncim_indicator_popup_pane

0x71c4,	// (0x000840f3) ncim_query_button_pane

0x71e6,	// (0x00084115) ncim_query_content_pane_t1

0x71f8,	// (0x00084127) ncim_query_content_pane_t2

0x0005,

0xfae3,	// (0x0008ca12) ncim_query_content_pane_t

0x72aa,	// (0x000841d9) ncim_query_list_pane

0x72bc,	// (0x000841eb) ncim_query_popup_pane

0x71b2,	// (0x000840e1) ncim_indicator_popup_pane_ParamLimits

0x71cc,	// (0x000840fb) ncim_query_content_pane_g1_ParamLimits

0x71cc,	// (0x000840fb) ncim_query_content_pane_g1

0x71e6,	// (0x00084115) ncim_query_content_pane_t1_ParamLimits

0x71f8,	// (0x00084127) ncim_query_content_pane_t2_ParamLimits

0x720a,	// (0x00084139) ncim_query_content_pane_t3_ParamLimits

0x720a,	// (0x00084139) ncim_query_content_pane_t3

0x7232,	// (0x00084161) ncim_query_content_pane_t4_ParamLimits

0x7232,	// (0x00084161) ncim_query_content_pane_t4

0x725a,	// (0x00084189) ncim_query_content_pane_t5_ParamLimits

0x725a,	// (0x00084189) ncim_query_content_pane_t5

0x7282,	// (0x000841b1) ncim_query_content_pane_t6_ParamLimits

0x7282,	// (0x000841b1) ncim_query_content_pane_t6

0xfae3,	// (0x0008ca12) ncim_query_content_pane_t_ParamLimits

0x72aa,	// (0x000841d9) ncim_query_list_pane_ParamLimits

0x72bc,	// (0x000841eb) ncim_query_popup_pane_ParamLimits

0x72d0,	// (0x000841ff) wait_bar_pane_cp04

0xe26e,	// (0x0008b19d) input_focus_pane_cp011

0x72d8,	// (0x00084207) ncim_query_popup_pane_t1

0x72e6,	// (0x00084215) ncim_list_query_list_pane_ParamLimits

0x72e6,	// (0x00084215) ncim_list_query_list_pane

0xe26e,	// (0x0008b19d) bg_button_pane_cp027

0x72f9,	// (0x00084228) ncim_query_button_pane_g1

0xe26e,	// (0x0008b19d) list_highlight_pane_cp012

0x7303,	// (0x00084232) ncim_list_query_list_pane_g1

0x730b,	// (0x0008423a) ncim_list_query_list_pane_t1

0xd8e7,	// (0x0008a816) cam4_indicators_pane_g3_ParamLimits

0xd8e7,	// (0x0008a816) cam4_indicators_pane_g3

0xd96a,	// (0x0008a899) vid4_indicators_pane_g5_ParamLimits

0xd96a,	// (0x0008a899) vid4_indicators_pane_g5

0xeacc,	// (0x0008b9fb) vid4_progress_pane_g5_ParamLimits

0xeacc,	// (0x0008b9fb) vid4_progress_pane_g5

0x7087,	// (0x00083fb6) main_ncimui_pane_g1

0x70f0,	// (0x0008401f) ncimui_group_query_pane_ParamLimits

0x70f0,	// (0x0008401f) ncimui_group_query_pane

0x7138,	// (0x00084067) ncimui_list_pane_ParamLimits

0x7138,	// (0x00084067) ncimui_list_pane

0x715f,	// (0x0008408e) ncimui_text_pane_ParamLimits

0x715f,	// (0x0008408e) ncimui_text_pane

0x7319,	// (0x00084248) ncimui_text_pane_t1_ParamLimits

0x7319,	// (0x00084248) ncimui_text_pane_t1

0x7337,	// (0x00084266) ncimui_list_single_graphic_pane_ParamLimits

0x7337,	// (0x00084266) ncimui_list_single_graphic_pane

0x7347,	// (0x00084276) ncimui_query_pane_ParamLimits

0x7347,	// (0x00084276) ncimui_query_pane

0xe26e,	// (0x0008b19d) list_highlight_pane_cp013

0x735a,	// (0x00084289) ncim_list_query_list_pane_t1_copy1

0x7303,	// (0x00084232) ncim_list_single_graphic_pane_g1

0x7368,	// (0x00084297) ncim_query_button_pane_cp01

0x7374,	// (0x000842a3) ncim_query_entry_pane_ParamLimits

0x7374,	// (0x000842a3) ncim_query_entry_pane

0x7387,	// (0x000842b6) ncimui_query_pane_g1

0x7393,	// (0x000842c2) ncimui_query_pane_t1_ParamLimits

0x7393,	// (0x000842c2) ncimui_query_pane_t1

0xed10,	// (0x0008bc3f) input_focus_pane_cp012

0x73ac,	// (0x000842db) ncim_query_entry_pane_t1

0xaae0,	// (0x00087a0f) main_im_pane_ParamLimits

0xed10,	// (0x0008bc3f) main_mobtv_pane_ParamLimits

0xed10,	// (0x0008bc3f) main_mobtv_pane

0x6de7,	// (0x00083d16) main_cset6_slider_pane_g18_ParamLimits

0x6de7,	// (0x00083d16) main_cset6_slider_pane_g18

0x6df3,	// (0x00083d22) main_cset6_slider_pane_g19_ParamLimits

0x6df3,	// (0x00083d22) main_cset6_slider_pane_g19

0xaa3e,	// (0x0008796d) bg_main_mobtv_pane_ParamLimits

0xaa3e,	// (0x0008796d) bg_main_mobtv_pane

0x73be,	// (0x000842ed) main_mobtv_info_pane

0x73c9,	// (0x000842f8) main_mobtv_loading_pane_ParamLimits

0x73c9,	// (0x000842f8) main_mobtv_loading_pane

0x73d6,	// (0x00084305) main_mobtv_pg_channel_list_pane

0x73e0,	// (0x0008430f) main_mobtv_pg_hdr_pane

0x73e9,	// (0x00084318) main_mobtv_programe_curr_pane_ParamLimits

0x73e9,	// (0x00084318) main_mobtv_programe_curr_pane

0x73f6,	// (0x00084325) main_mobtv_programe_next_pane_ParamLimits

0x73f6,	// (0x00084325) main_mobtv_programe_next_pane

0x7403,	// (0x00084332) popup_mobtv_noti_window

0xaa68,	// (0x00087997) main_tv_pg_hdr_pane_g1

0x740d,	// (0x0008433c) main_tv_pg_hdr_pane_g2

0x7415,	// (0x00084344) main_tv_pg_hdr_pane_g3

0x741d,	// (0x0008434c) main_tv_pg_hdr_pane_g4

0x7425,	// (0x00084354) main_tv_pg_hdr_pane_g5

0x742f,	// (0x0008435e) main_tv_pg_hdr_pane_g6

0x7439,	// (0x00084368) main_tv_pg_hdr_pane_g7

0x7443,	// (0x00084372) main_tv_pg_hdr_pane_g8

0x744d,	// (0x0008437c) main_tv_pg_hdr_pane_g9

0x7457,	// (0x00084386) main_tv_pg_hdr_pane_g10

0x7461,	// (0x00084390) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf0,	// (0x0008ca1f) main_tv_pg_hdr_pane_g

0x746b,	// (0x0008439a) main_tv_pg_hdr_pane_t1

0x7479,	// (0x000843a8) main_tv_pg_hdr_pane_t2

0x7487,	// (0x000843b6) main_tv_pg_hdr_pane_t3

0x7497,	// (0x000843c6) main_tv_pg_hdr_pane_t4

0x74a7,	// (0x000843d6) main_tv_pg_hdr_pane_t5

0x0004,

0xfb07,	// (0x0008ca36) main_tv_pg_hdr_pane_t

0x74b7,	// (0x000843e6) single_mobtv_pg_channel_pane_ParamLimits

0x74b7,	// (0x000843e6) single_mobtv_pg_channel_pane

0x74c9,	// (0x000843f8) single_mobtv_pg_channel_table_pane

0x74d2,	// (0x00084401) single_mobtv_pg_channel_thumb_pane

0x74db,	// (0x0008440a) single_tv_pg_channel_pane_g1

0x74e4,	// (0x00084413) single_tv_pg_channel_pane_g2

0x0001,

0xfb12,	// (0x0008ca41) single_tv_pg_channel_pane_g

0xaa22,	// (0x00087951) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xaa22,	// (0x00087951) bg_single_mobtv_pg_channel_thumb_pane

0x74ed,	// (0x0008441c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x74ed,	// (0x0008441c) single_mobtv_pg_channel_thumb_pane_g1

0x74fb,	// (0x0008442a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x74fb,	// (0x0008442a) single_mobtv_pg_channel_thumb_pane_g2

0x7507,	// (0x00084436) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x7507,	// (0x00084436) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb17,	// (0x0008ca46) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb17,	// (0x0008ca46) single_mobtv_pg_channel_thumb_pane_g

0x7513,	// (0x00084442) single_mobtv_pg_channel_thumb_pane_t1

0x7521,	// (0x00084450) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb1e,	// (0x0008ca4d) single_mobtv_pg_channel_thumb_pane_t

0xaa68,	// (0x00087997) bg_single_mobtv_pg_channel_table_pane_g1

0xaa68,	// (0x00087997) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0008bfbb) bg_single_mobtv_pg_channel_table_pane_g

0x752f,	// (0x0008445e) single_mobtv_pg_channel_table_pane_t1

0x753d,	// (0x0008446c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb23,	// (0x0008ca52) single_mobtv_pg_channel_table_pane_t

0x7553,	// (0x00084482) main_mobtv_info_pane_g1_ParamLimits

0x7553,	// (0x00084482) main_mobtv_info_pane_g1

0x7571,	// (0x000844a0) main_mobtv_info_pane_t1_ParamLimits

0x7571,	// (0x000844a0) main_mobtv_info_pane_t1

0x75e9,	// (0x00084518) main_mobtv_info_pane_t2_ParamLimits

0x75e9,	// (0x00084518) main_mobtv_info_pane_t2

0x0002,

0xfb2d,	// (0x0008ca5c) main_mobtv_info_pane_t_ParamLimits

0xfb2d,	// (0x0008ca5c) main_mobtv_info_pane_t

0x767a,	// (0x000845a9) wait_bar_pane_cp05

0x768c,	// (0x000845bb) main_mobtv_loading_pane_g1_ParamLimits

0x768c,	// (0x000845bb) main_mobtv_loading_pane_g1

0x769d,	// (0x000845cc) main_mobtv_loading_pane_g2_ParamLimits

0x769d,	// (0x000845cc) main_mobtv_loading_pane_g2

0x76a9,	// (0x000845d8) main_mobtv_loading_pane_g3_ParamLimits

0x76a9,	// (0x000845d8) main_mobtv_loading_pane_g3

0x0002,

0xfb34,	// (0x0008ca63) main_mobtv_loading_pane_g_ParamLimits

0xfb34,	// (0x0008ca63) main_mobtv_loading_pane_g

0x76bc,	// (0x000845eb) main_mobtv_loading_pane_t1_ParamLimits

0x76bc,	// (0x000845eb) main_mobtv_loading_pane_t1

0x76d4,	// (0x00084603) main_mobtv_loading_pane_t2_ParamLimits

0x76d4,	// (0x00084603) main_mobtv_loading_pane_t2

0x0001,

0xfb3b,	// (0x0008ca6a) main_mobtv_loading_pane_t_ParamLimits

0xfb3b,	// (0x0008ca6a) main_mobtv_loading_pane_t

0x76f8,	// (0x00084627) wait_bar_pane_cp06_ParamLimits

0x76f8,	// (0x00084627) wait_bar_pane_cp06

0x7707,	// (0x00084636) main_mobtv_programe_curr_pane_t1

0x7715,	// (0x00084644) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb40,	// (0x0008ca6f) main_mobtv_programe_curr_pane_t

0x7723,	// (0x00084652) main_mobtv_programe_next_pane_t1

0x7731,	// (0x00084660) main_mobtv_programe_next_pane_t2

0x773f,	// (0x0008466e) main_mobtv_programe_next_pane_t3

0x0002,

0xfb45,	// (0x0008ca74) main_mobtv_programe_next_pane_t

0xe26e,	// (0x0008b19d) bg_popup_mobtv_noti_window_pane

0x774d,	// (0x0008467c) popup_mobtv_noti_window_g1

0x7755,	// (0x00084684) popup_mobtv_noti_window_t1

0x7763,	// (0x00084692) popup_mobtv_noti_window_t2

0x0001,

0xfb4c,	// (0x0008ca7b) popup_mobtv_noti_window_t

0xaa68,	// (0x00087997) bg_popup_mobtv_noti_window_pane_g1

0xe26e,	// (0x0008b19d) sc_clock_pane

0xe26e,	// (0x0008b19d) main_fs_bigclock_pane

0x67e4,	// (0x00083713) blid2_tripm_pane_t4_ParamLimits

0x67e4,	// (0x00083713) blid2_tripm_pane_t4

0xaa22,	// (0x00087951) sc_clock_pane_g1_ParamLimits

0xaa22,	// (0x00087951) sc_clock_pane_g1

0xaa72,	// (0x000879a1) sc_clock_pane_t1_ParamLimits

0xaa72,	// (0x000879a1) sc_clock_pane_t1

0xaa72,	// (0x000879a1) sc_clock_pane_t2_ParamLimits

0xaa72,	// (0x000879a1) sc_clock_pane_t2

0xaa72,	// (0x000879a1) sc_clock_pane_t3_ParamLimits

0xaa72,	// (0x000879a1) sc_clock_pane_t3

0x0004,

0xfb51,	// (0x0008ca80) sc_clock_pane_t_ParamLimits

0xfb51,	// (0x0008ca80) sc_clock_pane_t

0x8835,	// (0x00085764) main_fs_bigclock_indicator_pane_ParamLimits

0x8835,	// (0x00085764) main_fs_bigclock_indicator_pane

0x77e2,	// (0x00084711) main_fs_bigclock_pane_g1_ParamLimits

0x77e2,	// (0x00084711) main_fs_bigclock_pane_g1

0x8841,	// (0x00085770) main_fs_bigclock_pane_t1_ParamLimits

0x8841,	// (0x00085770) main_fs_bigclock_pane_t1

0x8853,	// (0x00085782) main_fs_bigclock_pane_t2_ParamLimits

0x8853,	// (0x00085782) main_fs_bigclock_pane_t2

0x8867,	// (0x00085796) main_fs_bigclock_pane_t3_ParamLimits

0x8867,	// (0x00085796) main_fs_bigclock_pane_t3

0x0002,

0xfccf,	// (0x0008cbfe) main_fs_bigclock_pane_t_ParamLimits

0xfccf,	// (0x0008cbfe) main_fs_bigclock_pane_t

0x8879,	// (0x000857a8) main_fs_bigclock_indicator_pane_g1

0x71d8,	// (0x00084107) ncim_query_content_pane_g2_ParamLimits

0x71d8,	// (0x00084107) ncim_query_content_pane_g2

0x0001,

0xfade,	// (0x0008ca0d) ncim_query_content_pane_g_ParamLimits

0xfade,	// (0x0008ca0d) ncim_query_content_pane_g

0xaa72,	// (0x000879a1) sc_clock_pane_t4_ParamLimits

0xaa72,	// (0x000879a1) sc_clock_pane_t4

0xed10,	// (0x0008bc3f) main_radioblah_pane

0xd872,	// (0x0008a7a1) cell_call4_button_pane_t1_copy1_ParamLimits

0xd872,	// (0x0008a7a1) cell_call4_button_pane_t1_copy1

0x709f,	// (0x00083fce) main_ncimui_pane_t1_ParamLimits

0x709f,	// (0x00083fce) main_ncimui_pane_t1

0x70b9,	// (0x00083fe8) main_ncimui_pane_t2_ParamLimits

0x70b9,	// (0x00083fe8) main_ncimui_pane_t2

0x0002,

0xfad7,	// (0x0008ca06) main_ncimui_pane_t_ParamLimits

0xfad7,	// (0x0008ca06) main_ncimui_pane_t

0xb779,	// (0x000886a8) main_radioblah_anim_pane_ParamLimits

0xb779,	// (0x000886a8) main_radioblah_anim_pane

0xb779,	// (0x000886a8) main_radioblah_info_pane_ParamLimits

0xb779,	// (0x000886a8) main_radioblah_info_pane

0xb765,	// (0x00088694) main_radioblah_pane_t1_ParamLimits

0xb765,	// (0x00088694) main_radioblah_pane_t1

0xb765,	// (0x00088694) main_radioblah_pane_t2_ParamLimits

0xb765,	// (0x00088694) main_radioblah_pane_t2

0x0003,

0xfb72,	// (0x0008caa1) main_radioblah_pane_t_ParamLimits

0xfb72,	// (0x0008caa1) main_radioblah_pane_t

0xed10,	// (0x0008bc3f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xed10,	// (0x0008bc3f) main_radioblah_rocker_ctrl_pane

0xcadc,	// (0x00089a0b) main_radioblah_info_pane_t1_ParamLimits

0xcadc,	// (0x00089a0b) main_radioblah_info_pane_t1

0x79a9,	// (0x000848d8) main_radioblah_info_pane_t2_ParamLimits

0x79a9,	// (0x000848d8) main_radioblah_info_pane_t2

0x0003,

0xfb7b,	// (0x0008caaa) main_radioblah_info_pane_t_ParamLimits

0xfb7b,	// (0x0008caaa) main_radioblah_info_pane_t

0xaa68,	// (0x00087997) main_radioblah_rocker_ctrl_pane_g1

0xaa68,	// (0x00087997) main_radioblah_rocker_ctrl_pane_g2

0xaa68,	// (0x00087997) main_radioblah_rocker_ctrl_pane_g3

0xaa68,	// (0x00087997) main_radioblah_rocker_ctrl_pane_g4

0xaa68,	// (0x00087997) main_radioblah_rocker_ctrl_pane_g5

0xaa68,	// (0x00087997) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb84,	// (0x0008cab3) main_radioblah_rocker_ctrl_pane_g

0x6c57,	// (0x00083b86) main_cset_text2_pane_t1_copy1_ParamLimits

0xd8b8,	// (0x0008a7e7) cam4_image_uncrop_qvga_pane

0xd90d,	// (0x0008a83c) vid4_image_uncrop_qcif_pane

0xece8,	// (0x0008bc17) cam6_image_uncrop_qvga_pane_ParamLimits

0xece8,	// (0x0008bc17) cam6_image_uncrop_qvga_pane

0x6b00,	// (0x00083a2f) vid6_image_uncrop_qcif_pane_ParamLimits

0x6b00,	// (0x00083a2f) vid6_image_uncrop_qcif_pane

0xe26e,	// (0x0008b19d) bg_popup_preview_window_pane_cp03

0x7055,	// (0x00083f84) list_cset_text2_pane

0x705d,	// (0x00083f8c) main_cset6_text2_pane_g1

0x7065,	// (0x00083f94) main_cset6_text2_pane_t1

0x79f8,	// (0x00084927) list_cset_text2_pane_t1_ParamLimits

0x79f8,	// (0x00084927) list_cset_text2_pane_t1

0xed10,	// (0x0008bc3f) main_radioblah_pane_ParamLimits

0x7666,	// (0x00084595) main_mobtv_info_pane_t3_ParamLimits

0x7666,	// (0x00084595) main_mobtv_info_pane_t3

0xb757,	// (0x00088686) main_radioblah_pane_g1

0x7979,	// (0x000848a8) main_radioblah_info_pane_g1

0xaa86,	// (0x000879b5) main_radioblah_info_pane_t3_ParamLimits

0xaa86,	// (0x000879b5) main_radioblah_info_pane_t3

0x273b,	// (0x0007f66a) highlight_cell_cale_month_pane_ParamLimits

0x273b,	// (0x0007f66a) highlight_cell_cale_month_pane

0xe26e,	// (0x0008b19d) main_phob_fisheye_pane

0xd159,	// (0x0008a088) scroll_pane_cp0031_ParamLimits

0xd159,	// (0x0008a088) scroll_pane_cp0031

0x6c48,	// (0x00083b77) wait_bar_pane_cp08_ParamLimits

0x6d01,	// (0x00083c30) cset_list_set_pane_copy1_ParamLimits

0x7a12,	// (0x00084941) highlight_cell_cale_month_pane_g1

0x7a1a,	// (0x00084949) highlight_cell_cale_month_pane_t1

0xea8c,	// (0x0008b9bb) list_gen_pane_cp01

0xe63b,	// (0x0008b56a) scroll_pane_01

0x7a28,	// (0x00084957) list_single_double_fisheye_pane

0x7a31,	// (0x00084960) list_double_fisheye_pane_g1_ParamLimits

0x7a31,	// (0x00084960) list_double_fisheye_pane_g1

0x7a3d,	// (0x0008496c) list_double_fisheye_pane_g2_ParamLimits

0x7a3d,	// (0x0008496c) list_double_fisheye_pane_g2

0x7a51,	// (0x00084980) list_double_fisheye_pane_g3_ParamLimits

0x7a51,	// (0x00084980) list_double_fisheye_pane_g3

0x0004,

0xfb91,	// (0x0008cac0) list_double_fisheye_pane_g_ParamLimits

0xfb91,	// (0x0008cac0) list_double_fisheye_pane_g

0x7a7a,	// (0x000849a9) list_double_fisheye_pane_t1_ParamLimits

0x7a7a,	// (0x000849a9) list_double_fisheye_pane_t1

0x7a95,	// (0x000849c4) list_double_fisheye_pane_t2_ParamLimits

0x7a95,	// (0x000849c4) list_double_fisheye_pane_t2

0x0001,

0xfb9c,	// (0x0008cacb) list_double_fisheye_pane_t_ParamLimits

0xfb9c,	// (0x0008cacb) list_double_fisheye_pane_t

0xe26e,	// (0x0008b19d) main_call5_pane

0xed10,	// (0x0008bc3f) sc_swipe_pane_ParamLimits

0xed10,	// (0x0008bc3f) sc_swipe_pane

0x7aca,	// (0x000849f9) call5_image_pane_ParamLimits

0x7aca,	// (0x000849f9) call5_image_pane

0x7ae7,	// (0x00084a16) call5_swipe_1_pane_ParamLimits

0x7ae7,	// (0x00084a16) call5_swipe_1_pane

0x7afa,	// (0x00084a29) call5_swipe_2_pane_ParamLimits

0x7afa,	// (0x00084a29) call5_swipe_2_pane

0x7b25,	// (0x00084a54) popup_call5_audio_first_window_ParamLimits

0x7b25,	// (0x00084a54) popup_call5_audio_first_window

0xaa22,	// (0x00087951) call5_swipe_1_pane_g1_ParamLimits

0xaa22,	// (0x00087951) call5_swipe_1_pane_g1

0x7b3a,	// (0x00084a69) call5_swipe_1_pane_g2_ParamLimits

0x7b3a,	// (0x00084a69) call5_swipe_1_pane_g2

0x0001,

0xfba1,	// (0x0008cad0) call5_swipe_1_pane_g_ParamLimits

0xfba1,	// (0x0008cad0) call5_swipe_1_pane_g

0x7b46,	// (0x00084a75) call5_swipe_1_pane_t1_ParamLimits

0x7b46,	// (0x00084a75) call5_swipe_1_pane_t1

0xaa22,	// (0x00087951) call5_swipe_2_pane_g1_ParamLimits

0xaa22,	// (0x00087951) call5_swipe_2_pane_g1

0x7b5b,	// (0x00084a8a) call5_swipe_2_pane_g2_ParamLimits

0x7b5b,	// (0x00084a8a) call5_swipe_2_pane_g2

0x0001,

0xfba6,	// (0x0008cad5) call5_swipe_2_pane_g_ParamLimits

0xfba6,	// (0x0008cad5) call5_swipe_2_pane_g

0x7b67,	// (0x00084a96) call5_swipe_2_pane_t1_ParamLimits

0x7b67,	// (0x00084a96) call5_swipe_2_pane_t1

0xaa22,	// (0x00087951) sc_swipe_pane_g1_ParamLimits

0xaa22,	// (0x00087951) sc_swipe_pane_g1

0xaa30,	// (0x0008795f) sc_swipe_pane_g2_ParamLimits

0xaa30,	// (0x0008795f) sc_swipe_pane_g2

0x0001,

0xf71f,	// (0x0008c64e) sc_swipe_pane_g_ParamLimits

0xf71f,	// (0x0008c64e) sc_swipe_pane_g

0xaa72,	// (0x000879a1) sc_swipe_pane_t1_ParamLimits

0xaa72,	// (0x000879a1) sc_swipe_pane_t1

0xe26e,	// (0x0008b19d) main_cmail_launcher_pane

0x7b7c,	// (0x00084aab) aid_size_cell_cmail_l_ParamLimits

0x7b7c,	// (0x00084aab) aid_size_cell_cmail_l

0x7b91,	// (0x00084ac0) grid_cmail_l_pane_ParamLimits

0x7b91,	// (0x00084ac0) grid_cmail_l_pane

0x7bab,	// (0x00084ada) cell_cmail_l_pane_ParamLimits

0x7bab,	// (0x00084ada) cell_cmail_l_pane

0x7bcc,	// (0x00084afb) cell_cmail_l_pane_g1_ParamLimits

0x7bcc,	// (0x00084afb) cell_cmail_l_pane_g1

0x7bd8,	// (0x00084b07) cell_cmail_l_pane_t1_ParamLimits

0x7bd8,	// (0x00084b07) cell_cmail_l_pane_t1

0x7bee,	// (0x00084b1d) cell_cmail_l_pane_t2_ParamLimits

0x7bee,	// (0x00084b1d) cell_cmail_l_pane_t2

0x0001,

0xfbab,	// (0x0008cada) cell_cmail_l_pane_t_ParamLimits

0xfbab,	// (0x0008cada) cell_cmail_l_pane_t

0xed10,	// (0x0008bc3f) grid_highlight_pane_cp018_ParamLimits

0xed10,	// (0x0008bc3f) grid_highlight_pane_cp018

0x0ab4,	// (0x0007d9e3) main2_pane_ParamLimits

0x0ab4,	// (0x0007d9e3) main2_pane

0xab9c,	// (0x00087acb) popup_sp_fs_action_menu_bg_pane_g1

0xaba4,	// (0x00087ad3) popup_sp_fs_action_menu_bg_pane_g2

0xabac,	// (0x00087adb) popup_sp_fs_action_menu_bg_pane_g3

0xabb4,	// (0x00087ae3) popup_sp_fs_action_menu_bg_pane_g4

0xabbc,	// (0x00087aeb) popup_sp_fs_action_menu_bg_pane_g5

0xabc4,	// (0x00087af3) popup_sp_fs_action_menu_bg_pane_g6

0xabcc,	// (0x00087afb) popup_sp_fs_action_menu_bg_pane_g7

0xabd4,	// (0x00087b03) popup_sp_fs_action_menu_bg_pane_g8

0xabdc,	// (0x00087b0b) popup_sp_fs_action_menu_bg_pane_g9

0xabe4,	// (0x00087b13) popup_sp_fs_action_menu_bg_pane_g10

0xabe4,	// (0x00087b13) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0008c00c) popup_sp_fs_action_menu_bg_pane_g

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g3_g1

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g3_g2

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0008c0ba) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0008c0ba) list_medium_line_x2_t3_g3_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g3_t1

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g3_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g3_t2

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0008c0c1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0008c0c1) list_medium_line_x2_t3_g3_t

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g2_g1

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0008c0c8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0008c0c8) list_medium_line_x2_t3_g2_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g2_t1

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g2_t2

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0008c0c1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0008c0c1) list_medium_line_x2_t3_g2_t

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g4_g1

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g4_g2

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g4_g3

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0008c0cd) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0008c0cd) list_medium_line_x2_t4_g4_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g4_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g4_t1

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g4_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g4_t2

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g4_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g4_t3

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0008c0d6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0008c0d6) list_medium_line_x2_t4_g4_t

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g4_g1

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g4_g2

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g4_g3

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0008c0cd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0008c0cd) list_medium_line_x2_t2_g4_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g4_t1

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x0008c09d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x0008c09d) list_medium_line_x2_t2_g4_t

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g3_g1

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g3_g2

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0008c0ba) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0008c0ba) list_medium_line_x2_t2_g3_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g3_t1

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x0008c09d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x0008c09d) list_medium_line_x2_t2_g3_t

0x2892,	// (0x0007f7c1) main_sp_fs_list_pane_ParamLimits

0x2892,	// (0x0007f7c1) main_sp_fs_list_pane

0xeff9,	// (0x0008bf28) sp_fs_scroll_pane_ParamLimits

0xeff9,	// (0x0008bf28) sp_fs_scroll_pane

0xb257,	// (0x00088186) list_medium_line_x2_t3_t1

0xb257,	// (0x00088186) list_medium_line_x2_t3_t2

0xb257,	// (0x00088186) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x0008c183) list_medium_line_x2_t3_t

0xb257,	// (0x00088186) list_medium_line_x3_t4_t1

0xb257,	// (0x00088186) list_medium_line_x3_t4_t2

0xb257,	// (0x00088186) list_medium_line_x3_t4_t3

0xb257,	// (0x00088186) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x0008c18a) list_medium_line_x3_t4_t

0xb257,	// (0x00088186) list_medium_line_x4_t5_t1

0xb257,	// (0x00088186) list_medium_line_x4_t5_t2

0xb257,	// (0x00088186) list_medium_line_x4_t5_t3

0xb257,	// (0x00088186) list_medium_line_x4_t5_t4

0xb257,	// (0x00088186) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x0008c193) list_medium_line_x4_t5_t

0xaa22,	// (0x00087951) list_medium_line_t4_g4_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t4_g4_g1

0xaa22,	// (0x00087951) list_medium_line_t4_g4_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t4_g4_g2

0xaa22,	// (0x00087951) list_medium_line_t4_g4_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t4_g4_g3

0xaa22,	// (0x00087951) list_medium_line_t4_g4_g4_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0008c0cd) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0008c0cd) list_medium_line_t4_g4_g

0xaa72,	// (0x000879a1) list_medium_line_t4_g4_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t4_g4_t1

0xaa72,	// (0x000879a1) list_medium_line_t4_g4_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t4_g4_t2

0xaa72,	// (0x000879a1) list_medium_line_t4_g4_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t4_g4_t3

0xaa72,	// (0x000879a1) list_medium_line_t4_g4_t4_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0008c0d6) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0008c0d6) list_medium_line_t4_g4_t

0x2940,	// (0x0007f86f) chi_dic_find_pane_g1

0x384b,	// (0x0008077a) main_tport_pane

0xb257,	// (0x00088186) list_medium_line_plain_t1

0xaa22,	// (0x00087951) list_medium_line_t2_g2_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t2_g2_g1

0xaa22,	// (0x00087951) list_medium_line_t2_g2_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0008c0c8) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0008c0c8) list_medium_line_t2_g2_g

0xaa72,	// (0x000879a1) list_medium_line_t2_g2_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t2_g2_t1

0xaa72,	// (0x000879a1) list_medium_line_t2_g2_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x0008c09d) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x0008c09d) list_medium_line_t2_g2_t

0xd9cf,	// (0x0008a8fe) aid_sp_fs_list_icon_a_sm

0xeb09,	// (0x0008ba38) aid_sp_fs_list_icon_d

0xeb11,	// (0x0008ba40) aid_sp_fs_text_primary

0xd9d7,	// (0x0008a906) aid_sp_fs_text_secondary

0xe26e,	// (0x0008b19d) list_medium_line

0xe26e,	// (0x0008b19d) list_medium_line_g2

0xe26e,	// (0x0008b19d) list_medium_line_g3

0xe26e,	// (0x0008b19d) list_medium_line_plain

0xe26e,	// (0x0008b19d) list_medium_line_plain_t2

0xe26e,	// (0x0008b19d) list_medium_line_plain_t3

0xe26e,	// (0x0008b19d) list_medium_line_right_icon

0xe26e,	// (0x0008b19d) list_medium_line_right_iconx2

0xe26e,	// (0x0008b19d) list_medium_line_t2

0xe26e,	// (0x0008b19d) list_medium_line_t2_g2

0xe26e,	// (0x0008b19d) list_medium_line_t2_g3

0xe26e,	// (0x0008b19d) list_medium_line_t2_right_icon

0xe26e,	// (0x0008b19d) list_medium_line_t2_right_iconx2

0xe26e,	// (0x0008b19d) list_medium_line_t3

0xe26e,	// (0x0008b19d) list_medium_line_t3_g2

0xe26e,	// (0x0008b19d) list_medium_line_t3_g3

0xe26e,	// (0x0008b19d) list_medium_line_t3_right_iconx2

0xe26e,	// (0x0008b19d) list_medium_line_t4_g4

0xe26e,	// (0x0008b19d) list_medium_line_x2

0xe26e,	// (0x0008b19d) list_medium_line_x2_t2_g2

0xe26e,	// (0x0008b19d) list_medium_line_x2_t2_g3

0xe26e,	// (0x0008b19d) list_medium_line_x2_t2_g4

0xe26e,	// (0x0008b19d) list_medium_line_x2_t3

0xe26e,	// (0x0008b19d) list_medium_line_x2_t3_g2

0xe26e,	// (0x0008b19d) list_medium_line_x2_t3_g3

0xe26e,	// (0x0008b19d) list_medium_line_x2_t3_g4

0xe26e,	// (0x0008b19d) list_medium_line_x2_t4_g2

0xe26e,	// (0x0008b19d) list_medium_line_x2_t4_g4

0xe26e,	// (0x0008b19d) list_medium_line_x3

0xe26e,	// (0x0008b19d) list_medium_line_x3_t4

0xe26e,	// (0x0008b19d) list_medium_line_x3_t4_g4

0xe26e,	// (0x0008b19d) list_medium_line_x4_t4

0xe26e,	// (0x0008b19d) list_medium_line_x4_t4_g7

0xe26e,	// (0x0008b19d) list_medium_line_x4_t5

0x0505,	// (0x0007d434) list_single_fs_dyc_pane_ParamLimits

0x0505,	// (0x0007d434) list_single_fs_dyc_pane

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g1

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g2

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g3

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g4_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g4

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g5_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g5

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g6_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x4_t4_g7_g6

0xaa30,	// (0x0008795f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xaa30,	// (0x0008795f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfab8,	// (0x0008c9e7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfab8,	// (0x0008c9e7) list_medium_line_x4_t4_g7_g

0xaa72,	// (0x000879a1) list_medium_line_x4_t4_g7_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x4_t4_g7_t1

0xaa72,	// (0x000879a1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x4_t4_g7_t2

0xaa72,	// (0x000879a1) list_medium_line_x4_t4_g7_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x4_t4_g7_t3

0xaa86,	// (0x000879b5) list_medium_line_x4_t4_g7_t4_ParamLimits

0xaa86,	// (0x000879b5) list_medium_line_x4_t4_g7_t4

0xaa86,	// (0x000879b5) list_medium_line_x4_t4_g7_t5_ParamLimits

0xaa86,	// (0x000879b5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfac7,	// (0x0008c9f6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfac7,	// (0x0008c9f6) list_medium_line_x4_t4_g7_t

0x053d,	// (0x0007d46c) list_single_dyc_row_pane_ParamLimits

0x053d,	// (0x0007d46c) list_single_dyc_row_pane

0x7ab7,	// (0x000849e6) call5_gesture_pane_ParamLimits

0x7ab7,	// (0x000849e6) call5_gesture_pane

0x7b0d,	// (0x00084a3c) call5_windows_pane_ParamLimits

0x7b0d,	// (0x00084a3c) call5_windows_pane

0x7c0b,	// (0x00084b3a) call5_swipe_1_pane_cp_ParamLimits

0x7c0b,	// (0x00084b3a) call5_swipe_1_pane_cp

0x7c17,	// (0x00084b46) call5_swipe_2_pane_cp_ParamLimits

0x7c17,	// (0x00084b46) call5_swipe_2_pane_cp

0xad01,	// (0x00087c30) call5_image_pane_cp

0x7c23,	// (0x00084b52) popup_call5_audio_first_window_cp_ParamLimits

0x7c23,	// (0x00084b52) popup_call5_audio_first_window_cp

0x7c31,	// (0x00084b60) call5_swipe_1_pane_g1_cp_ParamLimits

0x7c31,	// (0x00084b60) call5_swipe_1_pane_g1_cp

0x7c3e,	// (0x00084b6d) call5_swipe_1_pane_g2_cp

0x7c46,	// (0x00084b75) call5_swipe_1_pane_t1_cp_ParamLimits

0x7c46,	// (0x00084b75) call5_swipe_1_pane_t1_cp

0x7c31,	// (0x00084b60) call5_swipe_2_pane_g1_cp_ParamLimits

0x7c31,	// (0x00084b60) call5_swipe_2_pane_g1_cp

0x7c5b,	// (0x00084b8a) call5_swipe_2_pane_g2_cp

0x7c63,	// (0x00084b92) call5_swipe_2_pane_t1_cp_ParamLimits

0x7c63,	// (0x00084b92) call5_swipe_2_pane_t1_cp

0xed10,	// (0x0008bc3f) main_sp_fs_email_pane

0xe71e,	// (0x0008b64d) main_sp_fs_listscroll_pane_te

0x7c78,	// (0x00084ba7) popup_sp_fs_action_menu_pane_ParamLimits

0x7c78,	// (0x00084ba7) popup_sp_fs_action_menu_pane

0xaa68,	// (0x00087997) bg_sp_fs_ctrlbar_pane_g1

0x7cbe,	// (0x00084bed) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7cc7,	// (0x00084bf6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x7cd0,	// (0x00084bff) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xaa68,	// (0x00087997) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbb0,	// (0x0008cadf) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcafe,	// (0x00089a2d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcafe,	// (0x00089a2d) bg_sp_fs_ctrlbar_ddmenu_pane

0x7cd9,	// (0x00084c08) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7cd9,	// (0x00084c08) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x7ce5,	// (0x00084c14) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x7ce5,	// (0x00084c14) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbb9,	// (0x0008cae8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbb9,	// (0x0008cae8) main_sp_fs_ctrlbar_ddmenu_pane_g

0x7cf1,	// (0x00084c20) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x7cf1,	// (0x00084c20) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xaa68,	// (0x00087997) list_medium_line_t2_right_icon_g1

0xb257,	// (0x00088186) list_medium_line_t2_right_icon_t1

0xb257,	// (0x00088186) list_medium_line_t2_right_icon_t2

0x0001,

0xfbbe,	// (0x0008caed) list_medium_line_t2_right_icon_t

0xb779,	// (0x000886a8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb779,	// (0x000886a8) bg_sp_fs_ctrlbar_pane

0x7d92,	// (0x00084cc1) main_sp_fs_ctrlbar_button_pane_cp01

0x7d9c,	// (0x00084ccb) main_sp_fs_ctrlbar_ddmenu_pane

0x7da6,	// (0x00084cd5) main_sp_fs_ctrlbar_pane_g1

0x7db2,	// (0x00084ce1) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbc3,	// (0x0008caf2) main_sp_fs_ctrlbar_pane_g

0x7df2,	// (0x00084d21) main_sp_fs_ctrlbar_pane_t1

0x7e31,	// (0x00084d60) main_sp_fs_ctrlbar_pane

0x7e70,	// (0x00084d9f) main_sp_fs_listscroll_pane_te_cp01

0x055a,	// (0x0007d489) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x055a,	// (0x0007d489) popup_sp_fs_action_menu_pane_cp01

0xed10,	// (0x0008bc3f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xed10,	// (0x0008bc3f) bg_sp_fs_highlight_list_pane_cp01

0xd9e0,	// (0x0008a90f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd9e0,	// (0x0008a90f) sp_fs_action_menu_list_gene_pane_g1

0x7e9c,	// (0x00084dcb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7e9c,	// (0x00084dcb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd1,	// (0x0008cb00) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd1,	// (0x0008cb00) sp_fs_action_menu_list_gene_pane_g

0xd9ef,	// (0x0008a91e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd9ef,	// (0x0008a91e) sp_fs_action_menu_list_gene_pane_t1

0xda07,	// (0x0008a936) sp_fs_action_menu_list_gene_pane_ParamLimits

0xda07,	// (0x0008a936) sp_fs_action_menu_list_gene_pane

0x7ea9,	// (0x00084dd8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7ea9,	// (0x00084dd8) popup_sp_fs_action_menu_bg_pane

0xda2a,	// (0x0008a959) sp_fs_action_menu_list_pane_ParamLimits

0xda2a,	// (0x0008a959) sp_fs_action_menu_list_pane

0x7eb7,	// (0x00084de6) sp_fs_scroll_pane_cp01_ParamLimits

0x7eb7,	// (0x00084de6) sp_fs_scroll_pane_cp01

0xb257,	// (0x00088186) list_medium_line_plain_t2_t1

0xb257,	// (0x00088186) list_medium_line_plain_t2_t2

0x0001,

0xfbbe,	// (0x0008caed) list_medium_line_plain_t2_t

0xb257,	// (0x00088186) list_medium_line_plain_t3_t1

0xb257,	// (0x00088186) list_medium_line_plain_t3_t2

0xb257,	// (0x00088186) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x0008c183) list_medium_line_plain_t3_t

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g2_g1

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0008c0c8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0008c0c8) list_medium_line_x2_t2_g2_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g2_t1

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x0008c09d) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x0008c09d) list_medium_line_x2_t2_g2_t

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g2_g1

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g2_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0008c0c8) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0008c0c8) list_medium_line_x2_t4_g2_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g2_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g2_t1

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g2_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g2_t2

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g2_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g2_t3

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0008c0d6) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0008c0d6) list_medium_line_x2_t4_g2_t

0xaa68,	// (0x00087997) list_medium_line_t3_right_iconx2_g1

0xaa68,	// (0x00087997) list_medium_line_t3_right_iconx2_g2

0xaa68,	// (0x00087997) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x0008c29f) list_medium_line_t3_right_iconx2_g

0xb257,	// (0x00088186) list_medium_line_t3_right_iconx2_t1

0xb257,	// (0x00088186) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0008caed) list_medium_line_t3_right_iconx2_t

0xaa22,	// (0x00087951) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x3_t4_g4_g1

0xaa22,	// (0x00087951) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x3_t4_g4_g2

0xaa22,	// (0x00087951) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x3_t4_g4_g3

0xaa22,	// (0x00087951) list_medium_line_x3_t4_g4_g4_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0008c0cd) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0008c0cd) list_medium_line_x3_t4_g4_g

0xaa72,	// (0x000879a1) list_medium_line_x3_t4_g4_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x3_t4_g4_t1

0xaa72,	// (0x000879a1) list_medium_line_x3_t4_g4_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x3_t4_g4_t2

0xaa72,	// (0x000879a1) list_medium_line_x3_t4_g4_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x3_t4_g4_t3

0xaa72,	// (0x000879a1) list_medium_line_x3_t4_g4_t4_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0008c0d6) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0008c0d6) list_medium_line_x3_t4_g4_t

0x057f,	// (0x0007d4ae) list_single_dyc_row_text_pane_t1_ParamLimits

0x057f,	// (0x0007d4ae) list_single_dyc_row_text_pane_t1

0x05c8,	// (0x0007d4f7) list_single_dyc_row_text_pane_t2_ParamLimits

0x05c8,	// (0x0007d4f7) list_single_dyc_row_text_pane_t2

0xda4e,	// (0x0008a97d) list_single_dyc_row_text_pane_t3_ParamLimits

0xda4e,	// (0x0008a97d) list_single_dyc_row_text_pane_t3

0x0005,

0xfbd6,	// (0x0008cb05) list_single_dyc_row_text_pane_t_ParamLimits

0xfbd6,	// (0x0008cb05) list_single_dyc_row_text_pane_t

0xda72,	// (0x0008a9a1) list_single_dyc_row_pane_g1_ParamLimits

0xda72,	// (0x0008a9a1) list_single_dyc_row_pane_g1

0xda7e,	// (0x0008a9ad) list_single_dyc_row_pane_g2_ParamLimits

0xda7e,	// (0x0008a9ad) list_single_dyc_row_pane_g2

0xda8a,	// (0x0008a9b9) list_single_dyc_row_pane_g3_ParamLimits

0xda8a,	// (0x0008a9b9) list_single_dyc_row_pane_g3

0xda9d,	// (0x0008a9cc) list_single_dyc_row_pane_g4_ParamLimits

0xda9d,	// (0x0008a9cc) list_single_dyc_row_pane_g4

0x0006,

0xfbe3,	// (0x0008cb12) list_single_dyc_row_pane_g_ParamLimits

0xfbe3,	// (0x0008cb12) list_single_dyc_row_pane_g

0xdaef,	// (0x0008aa1e) list_single_dyc_row_text_pane_ParamLimits

0xdaef,	// (0x0008aa1e) list_single_dyc_row_text_pane

0xe26e,	// (0x0008b19d) bg_sp_fs_scroll_pane

0x7edd,	// (0x00084e0c) thumb_sp_fs_scroll_pane

0xaa22,	// (0x00087951) list_medium_line_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_g1

0xaa72,	// (0x000879a1) list_medium_line_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t1

0xaa22,	// (0x00087951) list_medium_line_x2_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_g1

0xaa22,	// (0x00087951) list_medium_line_x2_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0008c0c8) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0008c0c8) list_medium_line_x2_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t1

0xaa22,	// (0x00087951) list_medium_line_x3_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x3_g1

0x7ee6,	// (0x00084e15) list_medium_line_x3_g2_ParamLimits

0x7ee6,	// (0x00084e15) list_medium_line_x3_g2

0x0001,

0xfbf2,	// (0x0008cb21) list_medium_line_x3_g_ParamLimits

0xfbf2,	// (0x0008cb21) list_medium_line_x3_g

0x7ef4,	// (0x00084e23) list_medium_line_x3_t1_ParamLimits

0x7ef4,	// (0x00084e23) list_medium_line_x3_t1

0x7f08,	// (0x00084e37) thumb_sp_fs_scroll_pane_g1

0x7f11,	// (0x00084e40) thumb_sp_fs_scroll_pane_g2

0x7f1a,	// (0x00084e49) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x0008cb26) thumb_sp_fs_scroll_pane_g

0x7f08,	// (0x00084e37) bg_sp_fs_scroll_pane_g1

0x7f11,	// (0x00084e40) bg_sp_fs_scroll_pane_g2

0x7f1a,	// (0x00084e49) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x0008cb26) bg_sp_fs_scroll_pane_g

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g4_g1

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g4_g2

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g4_g3

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0008c0cd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0008c0cd) list_medium_line_x2_t3_g4_g

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g4_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g4_t1

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g4_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g4_t2

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0008c0c1) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0008c0c1) list_medium_line_x2_t3_g4_t

0xaa22,	// (0x00087951) list_medium_line_g2_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_g2_g1

0xaa22,	// (0x00087951) list_medium_line_g2_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0008c0c8) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0008c0c8) list_medium_line_g2_g

0xaa72,	// (0x000879a1) list_medium_line_g2_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_g2_t1

0xaa22,	// (0x00087951) list_medium_line_t3_g2_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t3_g2_g1

0xaa22,	// (0x00087951) list_medium_line_t3_g2_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0008c0c8) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0008c0c8) list_medium_line_t3_g2_g

0xaa72,	// (0x000879a1) list_medium_line_t3_g2_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_g2_t1

0xaa72,	// (0x000879a1) list_medium_line_t3_g2_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_g2_t2

0xaa72,	// (0x000879a1) list_medium_line_t3_g2_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0008c0c1) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0008c0c1) list_medium_line_t3_g2_t

0xaa68,	// (0x00087997) list_medium_line_right_icon_g1

0xb257,	// (0x00088186) list_medium_line_right_icon_t1

0xaa22,	// (0x00087951) list_medium_line_t2_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t2_g1

0xaa72,	// (0x000879a1) list_medium_line_t2_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t2_t1

0xaa72,	// (0x000879a1) list_medium_line_t2_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x0008c09d) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x0008c09d) list_medium_line_t2_t

0xaa22,	// (0x00087951) list_medium_line_t3_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t3_g1

0xaa72,	// (0x000879a1) list_medium_line_t3_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_t1

0xaa72,	// (0x000879a1) list_medium_line_t3_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_t2

0xaa72,	// (0x000879a1) list_medium_line_t3_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0008c0c1) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0008c0c1) list_medium_line_t3_t

0xaa22,	// (0x00087951) list_medium_line_g3_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_g3_g1

0xaa22,	// (0x00087951) list_medium_line_g3_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_g3_g2

0xaa22,	// (0x00087951) list_medium_line_g3_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0008c0ba) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0008c0ba) list_medium_line_g3_g

0xaa72,	// (0x000879a1) list_medium_line_g3_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_g3_t1

0xaa22,	// (0x00087951) list_medium_line_t2_g3_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t2_g3_g1

0xaa22,	// (0x00087951) list_medium_line_t2_g3_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t2_g3_g2

0xaa22,	// (0x00087951) list_medium_line_t2_g3_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0008c0ba) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0008c0ba) list_medium_line_t2_g3_g

0xaa72,	// (0x000879a1) list_medium_line_t2_g3_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t2_g3_t1

0xaa72,	// (0x000879a1) list_medium_line_t2_g3_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x0008c09d) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x0008c09d) list_medium_line_t2_g3_t

0xaa22,	// (0x00087951) list_medium_line_t3_g3_g1_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t3_g3_g1

0xaa22,	// (0x00087951) list_medium_line_t3_g3_g2_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t3_g3_g2

0xaa22,	// (0x00087951) list_medium_line_t3_g3_g3_ParamLimits

0xaa22,	// (0x00087951) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0008c0ba) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0008c0ba) list_medium_line_t3_g3_g

0xaa72,	// (0x000879a1) list_medium_line_t3_g3_t1_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_g3_t1

0xaa72,	// (0x000879a1) list_medium_line_t3_g3_t2_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_g3_t2

0xaa72,	// (0x000879a1) list_medium_line_t3_g3_t3_ParamLimits

0xaa72,	// (0x000879a1) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0008c0c1) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0008c0c1) list_medium_line_t3_g3_t

0xaa68,	// (0x00087997) list_medium_line_right_iconx2_g1

0xaa68,	// (0x00087997) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0008bfbb) list_medium_line_right_iconx2_g

0xb257,	// (0x00088186) list_medium_line_right_iconx2_t1

0xaa68,	// (0x00087997) list_medium_line_t2_right_iconx2_g1

0xaa68,	// (0x00087997) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0008bfbb) list_medium_line_t2_right_iconx2_g

0xb257,	// (0x00088186) list_medium_line_t2_right_iconx2_t1

0xb257,	// (0x00088186) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0008caed) list_medium_line_t2_right_iconx2_t

0xb257,	// (0x00088186) list_medium_line_x4_t4_t1

0xb257,	// (0x00088186) list_medium_line_x4_t4_t2

0xb257,	// (0x00088186) list_medium_line_x4_t4_t3

0xb257,	// (0x00088186) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x0008c18a) list_medium_line_x4_t4_t

0x7f67,	// (0x00084e96) tport_appsw_pane_ParamLimits

0x7f67,	// (0x00084e96) tport_appsw_pane

0x7f7f,	// (0x00084eae) tport_contact_pane_ParamLimits

0x7f7f,	// (0x00084eae) tport_contact_pane

0x7f9a,	// (0x00084ec9) tport_listscroll_pane_ParamLimits

0x7f9a,	// (0x00084ec9) tport_listscroll_pane

0x7fb2,	// (0x00084ee1) cell_tport_appsw_pane_ParamLimits

0x7fb2,	// (0x00084ee1) cell_tport_appsw_pane

0xb757,	// (0x00088686) tport_appsw_pane_g1_ParamLimits

0xb757,	// (0x00088686) tport_appsw_pane_g1

0x7ffc,	// (0x00084f2b) tport_contact_pane_g1

0x8005,	// (0x00084f34) tport_contact_pane_t1

0x8013,	// (0x00084f42) tport_contact_pane_t2

0x0001,

0xfbfe,	// (0x0008cb2d) tport_contact_pane_t

0x8021,	// (0x00084f50) list_tport_pane

0x802a,	// (0x00084f59) scroll_pane_cp_030

0x803b,	// (0x00084f6a) cell_tport_appsw_pane_g1

0x804b,	// (0x00084f7a) cell_tport_appsw_pane_t1

0x8059,	// (0x00084f88) grid_highlight_pane_cp019

0x8061,	// (0x00084f90) list_tport_double_graphic_pane_ParamLimits

0x8061,	// (0x00084f90) list_tport_double_graphic_pane

0xed10,	// (0x0008bc3f) list_highlight_pane_cp023_ParamLimits

0xed10,	// (0x0008bc3f) list_highlight_pane_cp023

0x806e,	// (0x00084f9d) list_tport_double_graphic_pane_g1_ParamLimits

0x806e,	// (0x00084f9d) list_tport_double_graphic_pane_g1

0x807b,	// (0x00084faa) list_tport_double_graphic_pane_t1_ParamLimits

0x807b,	// (0x00084faa) list_tport_double_graphic_pane_t1

0x8090,	// (0x00084fbf) list_tport_double_graphic_pane_t2_ParamLimits

0x8090,	// (0x00084fbf) list_tport_double_graphic_pane_t2

0x0001,

0xfc0a,	// (0x0008cb39) list_tport_double_graphic_pane_t_ParamLimits

0xfc0a,	// (0x0008cb39) list_tport_double_graphic_pane_t

0xe26e,	// (0x0008b19d) main_cale_note_pane

0x5636,	// (0x00082565) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5636,	// (0x00082565) cell_vitu2_function_top_wide_pane_cp01

0x767a,	// (0x000845a9) wait_bar_pane_cp05_ParamLimits

0xed10,	// (0x0008bc3f) listscroll_cmail_pane

0x80aa,	// (0x00084fd9) list_cmail_pane

0x80c1,	// (0x00084ff0) list_cmail_body_pane

0x80d8,	// (0x00085007) list_single_cmail_header_caption_pane

0x80f2,	// (0x00085021) list_single_cmail_header_detail_pane_ParamLimits

0x80f2,	// (0x00085021) list_single_cmail_header_detail_pane

0x8125,	// (0x00085054) list_single_cmail_header_caption_pane_t1

0x06fd,	// (0x0007d62c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x06fd,	// (0x0007d62c) list_single_cmail_header_detail_pane_g1

0xecf6,	// (0x0008bc25) list_single_cmail_header_detail_pane_g2_ParamLimits

0xecf6,	// (0x0008bc25) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc0f,	// (0x0008cb3e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc0f,	// (0x0008cb3e) list_single_cmail_header_detail_pane_g

0x0715,	// (0x0007d644) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0715,	// (0x0007d644) list_single_cmail_header_detail_pane_t1

0x0751,	// (0x0007d680) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0751,	// (0x0007d680) list_single_cmail_header_editor_pane_bg

0x74e4,	// (0x00084413) list_cmail_body_pane_g1

0x8149,	// (0x00085078) list_cmail_body_pane_t1

0xe4f7,	// (0x0008b426) list_single_cmail_header_editor_pane_bg_g1

0xaf35,	// (0x00087e64) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe507,	// (0x0008b436) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe4ff,	// (0x0008b42e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe775,	// (0x0008b6a4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe527,	// (0x0008b456) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe517,	// (0x0008b446) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe51f,	// (0x0008b44e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaf15,	// (0x00087e44) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8157,	// (0x00085086) calenote_gesture_pane_ParamLimits

0x8157,	// (0x00085086) calenote_gesture_pane

0x8177,	// (0x000850a6) calenote_window_pane_ParamLimits

0x8177,	// (0x000850a6) calenote_window_pane

0x8193,	// (0x000850c2) popup_note_window_cp01

0x819c,	// (0x000850cb) calenote_swipe_1_pane_ParamLimits

0x819c,	// (0x000850cb) calenote_swipe_1_pane

0x7c17,	// (0x00084b46) calenote_swipe_2_pane_ParamLimits

0x7c17,	// (0x00084b46) calenote_swipe_2_pane

0x7c31,	// (0x00084b60) calenote_swipe_1_pane_g1_ParamLimits

0x7c31,	// (0x00084b60) calenote_swipe_1_pane_g1

0x81ba,	// (0x000850e9) calenote_swipe_1_pane_g2_ParamLimits

0x81ba,	// (0x000850e9) calenote_swipe_1_pane_g2

0x0001,

0xfc1b,	// (0x0008cb4a) calenote_swipe_1_pane_g_ParamLimits

0xfc1b,	// (0x0008cb4a) calenote_swipe_1_pane_g

0x81c6,	// (0x000850f5) calenote_swipe_1_pane_t1_ParamLimits

0x81c6,	// (0x000850f5) calenote_swipe_1_pane_t1

0x7c31,	// (0x00084b60) calenote_swipe_2_pane_g1_ParamLimits

0x7c31,	// (0x00084b60) calenote_swipe_2_pane_g1

0x81e5,	// (0x00085114) calenote_swipe_2_pane_g2_ParamLimits

0x81e5,	// (0x00085114) calenote_swipe_2_pane_g2

0x0001,

0xfc20,	// (0x0008cb4f) calenote_swipe_2_pane_g_ParamLimits

0xfc20,	// (0x0008cb4f) calenote_swipe_2_pane_g

0x81f1,	// (0x00085120) calenote_swipe_2_pane_t1_ParamLimits

0x81f1,	// (0x00085120) calenote_swipe_2_pane_t1

0xe26e,	// (0x0008b19d) main_mup_navstr_pane

0x4601,	// (0x00081530) main_mup3_pane_t7_ParamLimits

0x4601,	// (0x00081530) main_mup3_pane_t7

0xd63e,	// (0x0008a56d) main_mp4_pane_g6_ParamLimits

0xd63e,	// (0x0008a56d) main_mp4_pane_g6

0xd860,	// (0x0008a78f) main_image3_pane_t4_ParamLimits

0xd860,	// (0x0008a78f) main_image3_pane_t4

0x8218,	// (0x00085147) popup_navstr_preview_pane_ParamLimits

0x8218,	// (0x00085147) popup_navstr_preview_pane

0x8228,	// (0x00085157) scroll_navstr_pane_ParamLimits

0x8228,	// (0x00085157) scroll_navstr_pane

0xe26e,	// (0x0008b19d) bg_popup_preview_window_pane_cp04

0x823c,	// (0x0008516b) popup_navstr_preview_pane_t1

0x824a,	// (0x00085179) scroll_navstr_pane_g1_ParamLimits

0x824a,	// (0x00085179) scroll_navstr_pane_g1

0x825e,	// (0x0008518d) scroll_navstr_pane_t1_ParamLimits

0x825e,	// (0x0008518d) scroll_navstr_pane_t1

0x81b1,	// (0x000850e0) bg_button_pane_cp014

0x81b1,	// (0x000850e0) bg_button_pane_cp030

0x7a5d,	// (0x0008498c) list_double_fisheye_pane_g4_ParamLimits

0x7a5d,	// (0x0008498c) list_double_fisheye_pane_g4

0x7a69,	// (0x00084998) list_double_fisheye_pane_g5_ParamLimits

0x7a69,	// (0x00084998) list_double_fisheye_pane_g5

0xeff9,	// (0x0008bf28) sp_fs_scroll_pane_cp03

0x7da6,	// (0x00084cd5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x7db2,	// (0x00084ce1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbc3,	// (0x0008caf2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7df2,	// (0x00084d21) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x80b9,	// (0x00084fe8) sp_fs_scroll_pane_cp02

0xac5d,	// (0x00087b8c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xac5d,	// (0x00087b8c) popup_sp_fs_calendar_preview_list_single_pane

0xe26e,	// (0x0008b19d) main_cam6_pano_pane

0xed10,	// (0x0008bc3f) main_mup3_pane_ParamLimits

0xe26e,	// (0x0008b19d) main_phacti_pane

0x754b,	// (0x0008447a) bg_button_pane_cp11

0x7565,	// (0x00084494) main_mobtv_info_pane_g2_ParamLimits

0x7565,	// (0x00084494) main_mobtv_info_pane_g2

0x0001,

0xfb28,	// (0x0008ca57) main_mobtv_info_pane_g_ParamLimits

0xfb28,	// (0x0008ca57) main_mobtv_info_pane_g

0xaa72,	// (0x000879a1) sc_clock_pane_t5_ParamLimits

0xaa72,	// (0x000879a1) sc_clock_pane_t5

0xb757,	// (0x00088686) main_radioblah_pane_g1_ParamLimits

0xb765,	// (0x00088694) main_radioblah_pane_t3_ParamLimits

0xb765,	// (0x00088694) main_radioblah_pane_t3

0xb765,	// (0x00088694) main_radioblah_pane_t4_ParamLimits

0xb765,	// (0x00088694) main_radioblah_pane_t4

0xed10,	// (0x0008bc3f) main_radioblah_text_pane_ParamLimits

0xed10,	// (0x0008bc3f) main_radioblah_text_pane

0x7979,	// (0x000848a8) main_radioblah_info_pane_g1_ParamLimits

0x79bd,	// (0x000848ec) main_radioblah_info_pane_t4_ParamLimits

0x79bd,	// (0x000848ec) main_radioblah_info_pane_t4

0xed10,	// (0x0008bc3f) main_sp_fs_calendar_pane

0x8275,	// (0x000851a4) main_phacti_pane_g1

0x8286,	// (0x000851b5) phacti_note_pane_ParamLimits

0x8286,	// (0x000851b5) phacti_note_pane

0x829a,	// (0x000851c9) phacti_term_pane_ParamLimits

0x829a,	// (0x000851c9) phacti_term_pane

0x82af,	// (0x000851de) phacti_note_pane_t1_ParamLimits

0x82af,	// (0x000851de) phacti_note_pane_t1

0xdb38,	// (0x0008aa67) phacti_term_pane_g1

0xdb40,	// (0x0008aa6f) phacti_term_pane_t1_ParamLimits

0xdb40,	// (0x0008aa6f) phacti_term_pane_t1

0x82c6,	// (0x000851f5) popup_sp_fs_calendar_preview_list_single_pane_g1

0x82ce,	// (0x000851fd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc2a,	// (0x0008cb59) popup_sp_fs_calendar_preview_list_single_pane_g

0x82d6,	// (0x00085205) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x82d6,	// (0x00085205) popup_sp_fs_calendar_preview_list_single_pane_t1

0x82ec,	// (0x0008521b) aid_popup_sp_fs_bg_corner_pane

0xaa68,	// (0x00087997) popup_sp_fs_calendar_preview_bg_pane_g1

0xe26e,	// (0x0008b19d) popup_sp_fs_calendar_preview_bg_pane

0x82f4,	// (0x00085223) popup_sp_fs_calendar_preview_list_pane

0x82fc,	// (0x0008522b) bg_main_sp_fs_cale_pane_ParamLimits

0x82fc,	// (0x0008522b) bg_main_sp_fs_cale_pane

0x8314,	// (0x00085243) listscroll_cale_mrui_pane_ParamLimits

0x8314,	// (0x00085243) listscroll_cale_mrui_pane

0xd115,	// (0x0008a044) listscroll_sp_fs_schedule_track_pane

0xdb73,	// (0x0008aaa2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdb73,	// (0x0008aaa2) main_sp_fs_ctrlbar_pane_cp01

0xd115,	// (0x0008a044) main_sp_fs_ribbon_pane

0xdb89,	// (0x0008aab8) popup_sp_fs_cale_preview_window

0x832c,	// (0x0008525b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x832c,	// (0x0008525b) list_single_sp_fs_schedule_track_pane

0xf011,	// (0x0008bf40) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xf011,	// (0x0008bf40) bg_sp_fs_highlight_list_pane_cp03

0xf005,	// (0x0008bf34) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xf005,	// (0x0008bf34) list_single_sp_fs_schedule_track_pane_g1

0xf005,	// (0x0008bf34) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xf005,	// (0x0008bf34) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc2f,	// (0x0008cb5e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc2f,	// (0x0008cb5e) list_single_sp_fs_schedule_track_pane_g

0x8338,	// (0x00085267) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8338,	// (0x00085267) list_single_sp_fs_schedule_track_pane_t1

0x834a,	// (0x00085279) sp_fs_schedule_track_pane_ParamLimits

0x834a,	// (0x00085279) sp_fs_schedule_track_pane

0xd11d,	// (0x0008a04c) sp_fs_schedule_track_pane_g1

0xd11d,	// (0x0008a04c) sp_fs_schedule_track_pane_g2

0xd11d,	// (0x0008a04c) sp_fs_schedule_track_pane_g3

0xd11d,	// (0x0008a04c) sp_fs_schedule_track_pane_g4

0xd11d,	// (0x0008a04c) sp_fs_schedule_track_pane_g5

0x0004,

0xf7c3,	// (0x0008c6f2) sp_fs_schedule_track_pane_g

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g1

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g2

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g3

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g4

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g5

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g6

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g7

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g8

0xd11d,	// (0x0008a04c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc34,	// (0x0008cb63) bg_sp_fs_schedule_viewer_highlight_g

0xd115,	// (0x0008a044) bg_main_sp_fs_ribbon_pane

0xd11d,	// (0x0008a04c) main_sp_fs_ribbon_pane_g1

0x8356,	// (0x00085285) main_sp_fs_ribbon_pane_t1

0x8356,	// (0x00085285) main_sp_fs_ribbon_pane_t2

0x8356,	// (0x00085285) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc47,	// (0x0008cb76) main_sp_fs_ribbon_pane_t

0xd115,	// (0x0008a044) main_sp_fs_ribbon_scheduler_pane

0xd11d,	// (0x0008a04c) bg_main_sp_fs_ribbon_pane_g1

0xd11d,	// (0x0008a04c) bg_main_sp_fs_ribbon_pane_g2

0xd11d,	// (0x0008a04c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf69b,	// (0x0008c5ca) bg_main_sp_fs_ribbon_pane_g

0xd11d,	// (0x0008a04c) main_sp_fs_ribbon_scheduler_pane_g1

0xd11d,	// (0x0008a04c) main_sp_fs_ribbon_scheduler_pane_g2

0xd11d,	// (0x0008a04c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf69b,	// (0x0008c5ca) main_sp_fs_ribbon_scheduler_pane_g

0x8364,	// (0x00085293) list_cale_mrui_pane

0x8371,	// (0x000852a0) sp_fs_scroll_pane_cp07_ParamLimits

0x8371,	// (0x000852a0) sp_fs_scroll_pane_cp07

0xf011,	// (0x0008bf40) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xf011,	// (0x0008bf40) bg_sp_fs_schedule_viewer_highlight

0xd115,	// (0x0008a044) list_single_sp_fs_schedule_track_pane_cp01

0xd115,	// (0x0008a044) list_sp_fs_schedule_track_pane

0x838d,	// (0x000852bc) sp_fs_scroll_pane_cp06_ParamLimits

0x838d,	// (0x000852bc) sp_fs_scroll_pane_cp06

0xaa68,	// (0x00087997) bgmain_sp_fs_calendar_pane_g1

0x0768,	// (0x0007d697) list_single_cale_mrui_pane_ParamLimits

0x0768,	// (0x0007d697) list_single_cale_mrui_pane

0xdb9b,	// (0x0008aaca) list_single_cale_mrui_row_pane_ParamLimits

0xdb9b,	// (0x0008aaca) list_single_cale_mrui_row_pane

0xdba8,	// (0x0008aad7) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdba8,	// (0x0008aad7) list_single_cale_mrui_row_pane_g1

0xdbe0,	// (0x0008ab0f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdbe0,	// (0x0008ab0f) list_single_cale_mrui_row_pane_t1

0x0788,	// (0x0007d6b7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0788,	// (0x0007d6b7) list_single_cale_mrui_row_pane_t2

0xdbf2,	// (0x0008ab21) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdbf2,	// (0x0008ab21) list_single_cale_mrui_row_pane_t3

0xdc21,	// (0x0008ab50) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdc21,	// (0x0008ab50) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc55,	// (0x0008cb84) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc55,	// (0x0008cb84) list_single_cale_mrui_row_pane_t

0x07ee,	// (0x0007d71d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x07ee,	// (0x0007d71d) list_single_cmail_header_editor_pane_bg_cp01

0x081a,	// (0x0007d749) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x081a,	// (0x0007d749) list_single_cmail_header_editor_pane_bg_cp02

0x83ae,	// (0x000852dd) main_radioblah_text_pane_t1_ParamLimits

0x83ae,	// (0x000852dd) main_radioblah_text_pane_t1

0x83c8,	// (0x000852f7) cam6_indi_pane_cp01

0x83d0,	// (0x000852ff) cam6_mode_pane_cp01

0x83d8,	// (0x00085307) cam6_pano_pane

0x83e1,	// (0x00085310) cam6_zoom_pane_cp01

0x83eb,	// (0x0008531a) cam6_pano_image_pane

0x83f4,	// (0x00085323) cam6_pano_pane_g1

0x74e4,	// (0x00084413) cam6_pano_pane_g2

0x83fd,	// (0x0008532c) cam6_pano_pane_g3

0x8406,	// (0x00085335) cam6_pano_pane_g4

0xd3c2,	// (0x0008a2f1) cam6_pano_pane_g5

0x840f,	// (0x0008533e) cam6_pano_pane_g6

0x8417,	// (0x00085346) cam6_pano_pane_g7

0x841f,	// (0x0008534e) cam6_pano_pane_g8

0x8428,	// (0x00085357) cam6_pano_pane_g9

0x0008,

0xfc5e,	// (0x0008cb8d) cam6_pano_pane_g

0xe26e,	// (0x0008b19d) main_browser_tag_pane

0x8210,	// (0x0008513f) grid_navstr_albumart_pane

0x8433,	// (0x00085362) cell_navstr_albumart_pane_ParamLimits

0x8433,	// (0x00085362) cell_navstr_albumart_pane

0x844f,	// (0x0008537e) cell_navstr_albumart_pane_g1

0x8457,	// (0x00085386) cell_navstr_albumart_pane_g2

0x845f,	// (0x0008538e) cell_navstr_albumart_pane_g3

0x8467,	// (0x00085396) cell_navstr_albumart_pane_g4

0x0003,

0xfc71,	// (0x0008cba0) cell_navstr_albumart_pane_g

0x846f,	// (0x0008539e) bt_list_pane_ParamLimits

0x846f,	// (0x0008539e) bt_list_pane

0x8485,	// (0x000853b4) bt_list_pane_t1

0x8494,	// (0x000853c3) bt_list_pane_t2

0x0001,

0xfc7a,	// (0x0008cba9) bt_list_pane_t

0xe26e,	// (0x0008b19d) main_cale_prevew_pane

0x84a3,	// (0x000853d2) popup_cale_preview_window_ParamLimits

0x84a3,	// (0x000853d2) popup_cale_preview_window

0xed10,	// (0x0008bc3f) bg_popup_preview_window_pane_cp05_ParamLimits

0xed10,	// (0x0008bc3f) bg_popup_preview_window_pane_cp05

0x84c0,	// (0x000853ef) list_cale_preview_pane_ParamLimits

0x84c0,	// (0x000853ef) list_cale_preview_pane

0x84cc,	// (0x000853fb) list_double_cale_preview_pane_ParamLimits

0x84cc,	// (0x000853fb) list_double_cale_preview_pane

0x84e0,	// (0x0008540f) list_single_cale_preview_pane_ParamLimits

0x84e0,	// (0x0008540f) list_single_cale_preview_pane

0x84f8,	// (0x00085427) list_single_cale_preview_pane_g1

0x8500,	// (0x0008542f) list_single_cale_preview_pane_t1_ParamLimits

0x8500,	// (0x0008542f) list_single_cale_preview_pane_t1

0x8515,	// (0x00085444) list_double_cale_preview_pane_g1

0x851d,	// (0x0008544c) list_double_cale_preview_pane_t1_ParamLimits

0x851d,	// (0x0008544c) list_double_cale_preview_pane_t1

0x8532,	// (0x00085461) list_double_cale_preview_pane_t2_ParamLimits

0x8532,	// (0x00085461) list_double_cale_preview_pane_t2

0x0001,

0xfc7f,	// (0x0008cbae) list_double_cale_preview_pane_t_ParamLimits

0xfc7f,	// (0x0008cbae) list_double_cale_preview_pane_t

0xe26e,	// (0x0008b19d) main_ezdial_pane

0xed10,	// (0x0008bc3f) main_sp_fs_email_pane_ParamLimits

0x7d0b,	// (0x00084c3a) cmail_ddmenu_btn01_pane_ParamLimits

0x7d0b,	// (0x00084c3a) cmail_ddmenu_btn01_pane

0x7d1e,	// (0x00084c4d) cmail_ddmenu_btn02_pane_ParamLimits

0x7d1e,	// (0x00084c4d) cmail_ddmenu_btn02_pane

0x7d7b,	// (0x00084caa) cmail_ddmenu_btn03_pane_ParamLimits

0x7d7b,	// (0x00084caa) cmail_ddmenu_btn03_pane

0x7e31,	// (0x00084d60) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e70,	// (0x00084d9f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x80c1,	// (0x00084ff0) list_cmail_body_pane_ParamLimits

0x8133,	// (0x00085062) bg_button_pane_cp12

0x813c,	// (0x0008506b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x813c,	// (0x0008506b) list_single_cmail_header_detail_pane_g3

0xdb14,	// (0x0008aa43) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdb14,	// (0x0008aa43) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc16,	// (0x0008cb45) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc16,	// (0x0008cb45) list_single_cmail_header_detail_pane_t

0xdb55,	// (0x0008aa84) phacti_term_pane_t2_ParamLimits

0xdb55,	// (0x0008aa84) phacti_term_pane_t2

0x0001,

0xfc25,	// (0x0008cb54) phacti_term_pane_t_ParamLimits

0xfc25,	// (0x0008cb54) phacti_term_pane_t

0x854a,	// (0x00085479) aid_size_list_single_double

0x8556,	// (0x00085485) popup_ezdial_listscroll_window

0x8572,	// (0x000854a1) popup_number_entry_window_cp01

0xad01,	// (0x00087c30) bg_popup_call_pane_cp09

0x857f,	// (0x000854ae) ezdial_list_pane

0x8587,	// (0x000854b6) scroll_pane_cp23

0xb779,	// (0x000886a8) bg_button_pane_cp028_ParamLimits

0xb779,	// (0x000886a8) bg_button_pane_cp028

0x858f,	// (0x000854be) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x858f,	// (0x000854be) cmail_ddmenu_btn01_pane_g1

0x859e,	// (0x000854cd) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x859e,	// (0x000854cd) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc84,	// (0x0008cbb3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc84,	// (0x0008cbb3) cmail_ddmenu_btn01_pane_g

0x85b4,	// (0x000854e3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x85b4,	// (0x000854e3) cmail_ddmenu_btn01_pane_t1

0xb779,	// (0x000886a8) bg_button_pane_cp029_ParamLimits

0xb779,	// (0x000886a8) bg_button_pane_cp029

0x85ca,	// (0x000854f9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x85ca,	// (0x000854f9) cmail_ddmenu_btn02_pane_g1

0x85e5,	// (0x00085514) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x85e5,	// (0x00085514) cmail_ddmenu_btn02_pane_t1

0xed10,	// (0x0008bc3f) bg_button_pane_cp031_ParamLimits

0xed10,	// (0x0008bc3f) bg_button_pane_cp031

0x85ca,	// (0x000854f9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x85ca,	// (0x000854f9) cmail_ddmenu_btn03_pane_g1

0x85e5,	// (0x00085514) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x85e5,	// (0x00085514) cmail_ddmenu_btn03_pane_t1

0xaa72,	// (0x000879a1) cell_dialer2_keypad_pane_t1_ParamLimits

0xd400,	// (0x0008a32f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xd400,	// (0x0008a32f) cell_dialer2_keypad_pane_t1_copy1

0x70e8,	// (0x00084017) ncimui_group_button_pane

0xed10,	// (0x0008bc3f) main_sp_fs_calendar_pane_ParamLimits

0x80d8,	// (0x00085007) list_single_cmail_header_caption_pane_ParamLimits

0xdb6a,	// (0x0008aa99) aid_recal_txt_sm_pane

0xe26e,	// (0x0008b19d) mian_recal_day_pane

0xdb89,	// (0x0008aab8) popup_sp_fs_cale_preview_window_ParamLimits

0x860c,	// (0x0008553b) list_recal_day_pane

0xdc6e,	// (0x0008ab9d) list_single_recal_day_pane_ParamLimits

0xdc6e,	// (0x0008ab9d) list_single_recal_day_pane

0x8633,	// (0x00085562) list_single_recal_day_pane_g1_ParamLimits

0x8633,	// (0x00085562) list_single_recal_day_pane_g1

0xdc80,	// (0x0008abaf) list_single_recal_day_pane_g2_ParamLimits

0xdc80,	// (0x0008abaf) list_single_recal_day_pane_g2

0xdc8c,	// (0x0008abbb) list_single_recal_day_pane_g3_ParamLimits

0xdc8c,	// (0x0008abbb) list_single_recal_day_pane_g3

0x083a,	// (0x0007d769) list_single_recal_day_pane_g4_ParamLimits

0x083a,	// (0x0007d769) list_single_recal_day_pane_g4

0xdc98,	// (0x0008abc7) list_single_recal_day_pane_g5_ParamLimits

0xdc98,	// (0x0008abc7) list_single_recal_day_pane_g5

0xdca4,	// (0x0008abd3) list_single_recal_day_pane_g6_ParamLimits

0xdca4,	// (0x0008abd3) list_single_recal_day_pane_g6

0x0004,

0xfc93,	// (0x0008cbc2) list_single_recal_day_pane_g_ParamLimits

0xfc93,	// (0x0008cbc2) list_single_recal_day_pane_g

0xdcb8,	// (0x0008abe7) list_single_recal_day_pane_t1

0xdcca,	// (0x0008abf9) list_single_recal_day_pane_t2

0x0001,

0xfc9e,	// (0x0008cbcd) list_single_recal_day_pane_t

0x863f,	// (0x0008556e) ncimui_query_button_pane_ParamLimits

0x863f,	// (0x0008556e) ncimui_query_button_pane

0x864f,	// (0x0008557e) ncimui_query_button_pane_t1_ParamLimits

0x864f,	// (0x0008557e) ncimui_query_button_pane_t1

0x8662,	// (0x00085591) ncimui_query_button_pane_t2_ParamLimits

0x8662,	// (0x00085591) ncimui_query_button_pane_t2

0x0001,

0xfca3,	// (0x0008cbd2) ncimui_query_button_pane_t_ParamLimits

0xfca3,	// (0x0008cbd2) ncimui_query_button_pane_t

0x8675,	// (0x000855a4) query_button_pane_ParamLimits

0x8675,	// (0x000855a4) query_button_pane

0xe26e,	// (0x0008b19d) bg_button_pane_cp0028

0x8688,	// (0x000855b7) query_button_pane_t1

0x384b,	// (0x0008077a) main_tport_pane_ParamLimits

0x7f23,	// (0x00084e52) bg_popup_window_pane_cp01_ParamLimits

0x7f23,	// (0x00084e52) bg_popup_window_pane_cp01

0x7f3c,	// (0x00084e6b) heading_pane_cp08_ParamLimits

0x7f3c,	// (0x00084e6b) heading_pane_cp08

0x7f52,	// (0x00084e81) heading_pane_cp07_ParamLimits

0x7f52,	// (0x00084e81) heading_pane_cp07

0x803b,	// (0x00084f6a) cell_tport_appsw_pane_g2

0x0002,

0xfc03,	// (0x0008cb32) cell_tport_appsw_pane_g

0x03d2,	// (0x0007d301) input_candi_list_open_g1

0xb0f5,	// (0x00088024) list_cale_time_pane_g6_ParamLimits

0xb0f5,	// (0x00088024) list_cale_time_pane_g6

0x3efa,	// (0x00080e29) aid_size_touch_calib_1_ParamLimits

0x3efa,	// (0x00080e29) aid_size_touch_calib_1

0x3f0c,	// (0x00080e3b) aid_size_touch_calib_2_ParamLimits

0x3f0c,	// (0x00080e3b) aid_size_touch_calib_2

0x3f24,	// (0x00080e53) aid_size_touch_calib_3_ParamLimits

0x3f24,	// (0x00080e53) aid_size_touch_calib_3

0x3f42,	// (0x00080e71) aid_size_touch_calib_4_ParamLimits

0x3f42,	// (0x00080e71) aid_size_touch_calib_4

0x3f5a,	// (0x00080e89) main_touch_calib_button_group_pane_ParamLimits

0x3f5a,	// (0x00080e89) main_touch_calib_button_group_pane

0x3f72,	// (0x00080ea1) main_touch_calib_pane_g1_ParamLimits

0x3f84,	// (0x00080eb3) main_touch_calib_pane_g2_ParamLimits

0x3f96,	// (0x00080ec5) main_touch_calib_pane_g3_ParamLimits

0x3fa8,	// (0x00080ed7) main_touch_calib_pane_g4_ParamLimits

0xf649,	// (0x0008c578) main_touch_calib_pane_g_ParamLimits

0x3fba,	// (0x00080ee9) main_touch_calib_pane_t1_ParamLimits

0x3fd4,	// (0x00080f03) main_touch_calib_pane_t2_ParamLimits

0x3fee,	// (0x00080f1d) main_touch_calib_pane_t3_ParamLimits

0x4002,	// (0x00080f31) main_touch_calib_pane_t4_ParamLimits

0x4018,	// (0x00080f47) main_touch_calib_pane_t5_ParamLimits

0xf652,	// (0x0008c581) main_touch_calib_pane_t_ParamLimits

0xd17d,	// (0x0008a0ac) list_single_fp_cale_pane_g3_ParamLimits

0xd17d,	// (0x0008a0ac) list_single_fp_cale_pane_g3

0xed10,	// (0x0008bc3f) bg_button_pane_cp012_ParamLimits

0xed10,	// (0x0008bc3f) bg_vkb2_func_pane_cp03_ParamLimits

0x5f1f,	// (0x00082e4e) cell_vitu2_function_top_pane_g1_ParamLimits

0xed10,	// (0x0008bc3f) bg_vkb2_func_pane_cp04_ParamLimits

0x7073,	// (0x00083fa2) main_ncimui_button_group_pane_ParamLimits

0x7073,	// (0x00083fa2) main_ncimui_button_group_pane

0x70d3,	// (0x00084002) main_ncimui_pane_t3_ParamLimits

0x70d3,	// (0x00084002) main_ncimui_pane_t3

0x827d,	// (0x000851ac) phacti_button_group_pane

0x854a,	// (0x00085479) aid_size_list_single_double_ParamLimits

0x8556,	// (0x00085485) popup_ezdial_listscroll_window_ParamLimits

0x8572,	// (0x000854a1) popup_number_entry_window_cp01_ParamLimits

0x8696,	// (0x000855c5) phacti_button_pane_ParamLimits

0x8696,	// (0x000855c5) phacti_button_pane

0xe26e,	// (0x0008b19d) bg_button_pane_cp14

0x86a7,	// (0x000855d6) phacti_button_pane_t1

0x86b5,	// (0x000855e4) main_touch_calib_button_pane_ParamLimits

0x86b5,	// (0x000855e4) main_touch_calib_button_pane

0xaae0,	// (0x00087a0f) bg_button_pane_cp18_ParamLimits

0xaae0,	// (0x00087a0f) bg_button_pane_cp18

0x86ca,	// (0x000855f9) main_touch_calib_button_pane_t1_ParamLimits

0x86ca,	// (0x000855f9) main_touch_calib_button_pane_t1

0x86e0,	// (0x0008560f) main_touch_calib_button_pane_t2_ParamLimits

0x86e0,	// (0x0008560f) main_touch_calib_button_pane_t2

0x0001,

0xfca8,	// (0x0008cbd7) main_touch_calib_button_pane_t_ParamLimits

0xfca8,	// (0x0008cbd7) main_touch_calib_button_pane_t

0xe26e,	// (0x0008b19d) cell_ncimui_button_pane

0xe26e,	// (0x0008b19d) bg_button_pane_cp032

0x86fe,	// (0x0008562d) cell_ncimui_button_pane_t1

0xd83e,	// (0x0008a76d) image3_infobar_pane_ParamLimits

0xd83e,	// (0x0008a76d) image3_infobar_pane

0x7771,	// (0x000846a0) fs_bigclock_status_pane_ParamLimits

0x7771,	// (0x000846a0) fs_bigclock_status_pane

0x777e,	// (0x000846ad) main_fs_bigclock_clock_pane_ParamLimits

0x777e,	// (0x000846ad) main_fs_bigclock_clock_pane

0x77b0,	// (0x000846df) main_fs_bigclock_indi_pane_ParamLimits

0x77b0,	// (0x000846df) main_fs_bigclock_indi_pane

0x77f0,	// (0x0008471f) main_fs_bigclock_swipe_pane_ParamLimits

0x77f0,	// (0x0008471f) main_fs_bigclock_swipe_pane

0xe26e,	// (0x0008b19d) main_fs_clock_dumped_data

0x783c,	// (0x0008476b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x783c,	// (0x0008476b) list_single_fs_bigclock_indicator_pane_g1

0x7855,	// (0x00084784) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7855,	// (0x00084784) list_single_fs_bigclock_indicator_pane_g2

0x786f,	// (0x0008479e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x786f,	// (0x0008479e) list_single_fs_bigclock_indicator_pane_g3

0x7889,	// (0x000847b8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7889,	// (0x000847b8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb5c,	// (0x0008ca8b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb5c,	// (0x0008ca8b) list_single_fs_bigclock_indicator_pane_g

0x78b8,	// (0x000847e7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x78b8,	// (0x000847e7) list_single_fs_bigclock_indicator_pane_t1

0x78e0,	// (0x0008480f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x78e0,	// (0x0008480f) list_single_fs_bigclock_indicator_pane_t2

0x7908,	// (0x00084837) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7908,	// (0x00084837) list_single_fs_bigclock_indicator_pane_t3

0x7930,	// (0x0008485f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7930,	// (0x0008485f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb67,	// (0x0008ca96) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb67,	// (0x0008ca96) list_single_fs_bigclock_indicator_pane_t

0x870c,	// (0x0008563b) image3_infobar_fav_pane_ParamLimits

0x870c,	// (0x0008563b) image3_infobar_fav_pane

0x871c,	// (0x0008564b) image3_infobar_loc_pane_ParamLimits

0x871c,	// (0x0008564b) image3_infobar_loc_pane

0x8732,	// (0x00085661) image3_infobar_time_pane_ParamLimits

0x8732,	// (0x00085661) image3_infobar_time_pane

0xaa68,	// (0x00087997) image3_infobar_time_pane_g1

0x8742,	// (0x00085671) image3_infobar_time_pane_t1

0xaa68,	// (0x00087997) image3_infobar_loc_pane_g1

0x8750,	// (0x0008567f) image3_infobar_loc_pane_g2

0x0001,

0xfcad,	// (0x0008cbdc) image3_infobar_loc_pane_g

0x8758,	// (0x00085687) image3_infobar_loc_pane_t1

0xaa68,	// (0x00087997) image3_infobar_fav_pane_g1

0x8766,	// (0x00085695) image3_infobar_fav_pane_g2

0x0001,

0xfcb2,	// (0x0008cbe1) image3_infobar_fav_pane_g

0x876e,	// (0x0008569d) fs_bigclock_status_battery_pane

0x8777,	// (0x000856a6) fs_bigclock_status_signal_pane

0x8780,	// (0x000856af) fs_bigclock_status_title_pane

0x8789,	// (0x000856b8) fs_bigclock_status_signal_pane_g1

0x8792,	// (0x000856c1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcb7,	// (0x0008cbe6) fs_bigclock_status_signal_pane_g

0x879a,	// (0x000856c9) fs_bigclock_status_battery_pane_g1

0x87a3,	// (0x000856d2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcbc,	// (0x0008cbeb) fs_bigclock_status_battery_pane_g

0x87ab,	// (0x000856da) fs_bigclock_status_title_pane_t1

0x87b9,	// (0x000856e8) main_fs_bigclock_clock_pane_g1

0x87b9,	// (0x000856e8) main_fs_bigclock_clock_pane_g2

0x87b9,	// (0x000856e8) main_fs_bigclock_clock_pane_g3

0x87b9,	// (0x000856e8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcc1,	// (0x0008cbf0) main_fs_bigclock_clock_pane_g

0x87d1,	// (0x00085700) main_fs_bigclock_clock_pane_t1

0x87e9,	// (0x00085718) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcca,	// (0x0008cbf9) main_fs_bigclock_clock_pane_t

0x8807,	// (0x00085736) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8807,	// (0x00085736) list_single_fs_bigclock_indicator_pane

0x8818,	// (0x00085747) list_single_fs_bigclock_pane_ParamLimits

0x8818,	// (0x00085747) list_single_fs_bigclock_pane

0x8882,	// (0x000857b1) main_fs_bigclock_indicator_pane_t1

0x8891,	// (0x000857c0) list_single_fs_bigclock_pane_g1

0x8899,	// (0x000857c8) list_single_fs_bigclock_pane_t1

0xaa68,	// (0x00087997) main_fs_bigclock_swipe_pane_g1

0x88dc,	// (0x0008580b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcdb,	// (0x0008cc0a) main_fs_bigclock_swipe_pane_g

0x88e4,	// (0x00085813) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x88e4,	// (0x00085813) main_fs_bigclock_swipe_pane_t1

0x289e,	// (0x0007f7cd) call_type_pane_ParamLimits

0xe26e,	// (0x0008b19d) main_btmg_pane

0xdbd4,	// (0x0008ab03) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdbd4,	// (0x0008ab03) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc4e,	// (0x0008cb7d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc4e,	// (0x0008cb7d) list_single_cale_mrui_row_pane_g

0xdc5c,	// (0x0008ab8b) list_recal_vselct_arw_lo_pane

0x862b,	// (0x0008555a) list_recal_vselct_arw_up_pane

0xdc64,	// (0x0008ab93) list_recal_vselct_pane

0x8901,	// (0x00085830) btmg_button_pane

0x890b,	// (0x0008583a) main_btmg_pane_g1

0xe26e,	// (0x0008b19d) bg_button_pane_cp044

0x8915,	// (0x00085844) btmg_button_pane_t1

0xc95b,	// (0x0008988a) aid_listscroll_gen

0xed10,	// (0x0008bc3f) main_cntbar_detail_pane

0x80a2,	// (0x00084fd1) list_cmail_folder_pane

0xeff9,	// (0x0008bf28) sp_fs_scroll_pane_cp03_ParamLimits

0x0852,	// (0x0007d781) list_single_fs_dyc_pane_cp01_ParamLimits

0x0852,	// (0x0007d781) list_single_fs_dyc_pane_cp01

0x8923,	// (0x00085852) aid_size_cmail_indent

0xdcdc,	// (0x0008ac0b) list_single_dyc_row_pane_cp01

0x8960,	// (0x0008588f) cntbar_detail_list_pane_ParamLimits

0x8960,	// (0x0008588f) cntbar_detail_list_pane

0x89b2,	// (0x000858e1) main_cntbar_detail_cont_pane_ParamLimits

0x89b2,	// (0x000858e1) main_cntbar_detail_cont_pane

0xeff9,	// (0x0008bf28) scroll_pane_cp032_ParamLimits

0xeff9,	// (0x0008bf28) scroll_pane_cp032

0x89c6,	// (0x000858f5) cntbar_detail_list_event_pane_ParamLimits

0x89c6,	// (0x000858f5) cntbar_detail_list_event_pane

0x8972,	// (0x000858a1) cntbar_detail_list_shct_pane

0xaf83,	// (0x00087eb2) aid_list_gen

0x89d6,	// (0x00085905) aid_scroll

0x89df,	// (0x0008590e) aid_size_touch_scroll_bar

0x7a28,	// (0x00084957) aid_list_double

0x89e8,	// (0x00085917) aid_list_single

0x89e8,	// (0x00085917) aid_list_single_lg

0x086c,	// (0x0007d79b) aid_list_z_g_a_sm

0x89f1,	// (0x00085920) aid_list_z_g_d

0x0874,	// (0x0007d7a3) aid_txt_z_prm

0x0882,	// (0x0007d7b1) aid_txt_z_prm_cp01

0x0890,	// (0x0007d7bf) aid_txt_z_sec

0x89f9,	// (0x00085928) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89f9,	// (0x00085928) main_cntbar_detail_cont_pane_g1

0x8a0d,	// (0x0008593c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a0d,	// (0x0008593c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfce0,	// (0x0008cc0f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfce0,	// (0x0008cc0f) main_cntbar_detail_cont_pane_g

0x8a1d,	// (0x0008594c) main_cntbar_detail_cont_pane_t1

0x8a2b,	// (0x0008595a) main_cntbar_detail_cont_pane_t2

0x8a39,	// (0x00085968) main_cntbar_detail_cont_pane_t3

0x0002,

0xfce5,	// (0x0008cc14) main_cntbar_detail_cont_pane_t

0x8a47,	// (0x00085976) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a47,	// (0x00085976) cell_cntbar_detail_list_shct_pane

0x8a59,	// (0x00085988) cntbar_detail_list_shct_pane_g1

0x8a62,	// (0x00085991) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcec,	// (0x0008cc1b) cntbar_detail_list_shct_pane_g

0x8a6b,	// (0x0008599a) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a6b,	// (0x0008599a) cntbar_detail_list_event_pane_g1

0x8a77,	// (0x000859a6) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a77,	// (0x000859a6) cntbar_detail_list_event_pane_g2

0x0005,

0xfcf1,	// (0x0008cc20) cntbar_detail_list_event_pane_g_ParamLimits

0xfcf1,	// (0x0008cc20) cntbar_detail_list_event_pane_g

0x8ae5,	// (0x00085a14) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ae5,	// (0x00085a14) cntbar_detail_list_event_pane_t1

0x8afa,	// (0x00085a29) cntbar_detail_list_event_pane_t2_ParamLimits

0x8afa,	// (0x00085a29) cntbar_detail_list_event_pane_t2

0x0002,

0xfcfe,	// (0x0008cc2d) cntbar_detail_list_event_pane_t_ParamLimits

0xfcfe,	// (0x0008cc2d) cntbar_detail_list_event_pane_t

0xaa68,	// (0x00087997) cell_cntbar_detail_list_shct_pane_g1

0x2c38,	// (0x0007fb67) navi_pane_mv_g3

0xed10,	// (0x0008bc3f) main_cntbar_detail_pane_ParamLimits

0xe26e,	// (0x0008b19d) main_notif_wgt_pane

0xd5c8,	// (0x0008a4f7) aid_tch_main_mp4_pane_g4

0xd834,	// (0x0008a763) popup_slider_window_cp02

0xdc52,	// (0x0008ab81) list_recal_day_event_pane

0x892c,	// (0x0008585b) cntbar_detail_btn_pane_ParamLimits

0x892c,	// (0x0008585b) cntbar_detail_btn_pane

0x8945,	// (0x00085874) cntbar_detail_btn_pane_cp01_ParamLimits

0x8945,	// (0x00085874) cntbar_detail_btn_pane_cp01

0x8972,	// (0x000858a1) cntbar_detail_list_shct_pane_ParamLimits

0x8982,	// (0x000858b1) cntbar_detail_pane_g1_ParamLimits

0x8982,	// (0x000858b1) cntbar_detail_pane_g1

0x8996,	// (0x000858c5) cntbar_detail_pane_t1_ParamLimits

0x8996,	// (0x000858c5) cntbar_detail_pane_t1

0x8a83,	// (0x000859b2) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a83,	// (0x000859b2) cntbar_detail_list_event_pane_g3

0x8a9b,	// (0x000859ca) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a9b,	// (0x000859ca) cntbar_detail_list_event_pane_g4

0x8ab3,	// (0x000859e2) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ab3,	// (0x000859e2) cntbar_detail_list_event_pane_g5

0x8acb,	// (0x000859fa) cntbar_detail_list_event_pane_g6_ParamLimits

0x8acb,	// (0x000859fa) cntbar_detail_list_event_pane_g6

0x8b0f,	// (0x00085a3e) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b0f,	// (0x00085a3e) cntbar_detail_list_event_pane_t3

0x8b21,	// (0x00085a50) popup_notif_wgt_window_ParamLimits

0x8b21,	// (0x00085a50) popup_notif_wgt_window

0x8b3a,	// (0x00085a69) popup_submenu_window_cp01_ParamLimits

0x8b3a,	// (0x00085a69) popup_submenu_window_cp01

0xad01,	// (0x00087c30) bg_popup_window_pane_cp10

0x8b4e,	// (0x00085a7d) listscroll_notif_wgt_pane

0x8b60,	// (0x00085a8f) list_notif_wgt_window

0x8b69,	// (0x00085a98) scroll_pane_cp033

0x8b72,	// (0x00085aa1) list_notif_wgt_row_pane_ParamLimits

0x8b72,	// (0x00085aa1) list_notif_wgt_row_pane

0x8b82,	// (0x00085ab1) aid_size_list_notif_wgt_del

0x8b8f,	// (0x00085abe) list_notif_wgt_row_pane_g1

0x8b9b,	// (0x00085aca) list_notif_wgt_row_pane_g2

0x8baa,	// (0x00085ad9) list_notif_wgt_row_pane_g3

0x0002,

0xfd05,	// (0x0008cc34) list_notif_wgt_row_pane_g

0x8bb7,	// (0x00085ae6) list_notif_wgt_row_pane_t1

0x8bcd,	// (0x00085afc) list_notif_wgt_row_pane_t2

0x8bdf,	// (0x00085b0e) list_notif_wgt_row_pane_t3

0x0002,

0xfd0c,	// (0x0008cc3b) list_notif_wgt_row_pane_t

0xe77d,	// (0x0008b6ac) list_recal_day_event_pane_g1

0x8bf1,	// (0x00085b20) list_recal_day_event_pane_t1

0xe26e,	// (0x0008b19d) bg_button_pane_cp045

0x8c00,	// (0x00085b2f) cntbar_detail_btn_pane_t1

0xb779,	// (0x000886a8) main_callh_pane_ParamLimits

0xb779,	// (0x000886a8) main_callh_pane

0xe26e,	// (0x0008b19d) main_coverflow0_pane

0xe26e,	// (0x0008b19d) main_wgtman_pane

0x7811,	// (0x00084740) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7811,	// (0x00084740) main_fs_bigclock_unlock_btn_pane

0x8033,	// (0x00084f62) bg_button_pane_cp16

0x8043,	// (0x00084f72) cell_tport_appsw_pane_g3

0x8c0e,	// (0x00085b3d) cf0_flow_pane_ParamLimits

0x8c0e,	// (0x00085b3d) cf0_flow_pane

0x8c23,	// (0x00085b52) listscroll_cf0_pane

0x8c2e,	// (0x00085b5d) main_cf0_pane_g1

0x8c40,	// (0x00085b6f) main_cf0_pane_t1_ParamLimits

0x8c40,	// (0x00085b6f) main_cf0_pane_t1

0x8c57,	// (0x00085b86) main_cf0_pane_t2_ParamLimits

0x8c57,	// (0x00085b86) main_cf0_pane_t2

0x0001,

0xfd18,	// (0x0008cc47) main_cf0_pane_t_ParamLimits

0xfd18,	// (0x0008cc47) main_cf0_pane_t

0x8c6e,	// (0x00085b9d) scroll_pane_cp11

0x8c79,	// (0x00085ba8) cf0_flow_pane_g1

0x8c85,	// (0x00085bb4) cf0_flow_pane_g2

0x0001,

0xfd1d,	// (0x0008cc4c) cf0_flow_pane_g

0x8c91,	// (0x00085bc0) cf0_flow_pane_t1

0xe26e,	// (0x0008b19d) main_call6_pane

0xe26e,	// (0x0008b19d) main_calllock_pane

0x8ca3,	// (0x00085bd2) call6_btn_grp_pane_ParamLimits

0x8ca3,	// (0x00085bd2) call6_btn_grp_pane

0x8cbd,	// (0x00085bec) call6_pane_g1_ParamLimits

0x8cbd,	// (0x00085bec) call6_pane_g1

0x8cd6,	// (0x00085c05) popup_call6_1st_window_ParamLimits

0x8cd6,	// (0x00085c05) popup_call6_1st_window

0x8cea,	// (0x00085c19) popup_call6_2nd_window_ParamLimits

0x8cea,	// (0x00085c19) popup_call6_2nd_window

0x8cfe,	// (0x00085c2d) cell_call6_btn_pane_ParamLimits

0x8cfe,	// (0x00085c2d) cell_call6_btn_pane

0xad01,	// (0x00087c30) bg_popup_call2_in_pane_cp03

0x8d12,	// (0x00085c41) popup_call6_1st_window_g1

0x8d1a,	// (0x00085c49) popup_call6_1st_window_g2

0x8d22,	// (0x00085c51) popup_call6_1st_window_g3

0x0002,

0xfd22,	// (0x0008cc51) popup_call6_1st_window_g

0x8d2a,	// (0x00085c59) popup_call6_1st_window_t1

0x8d39,	// (0x00085c68) popup_call6_1st_window_t2

0x8d49,	// (0x00085c78) popup_call6_1st_window_t3

0x0002,

0xfd29,	// (0x0008cc58) popup_call6_1st_window_t

0xad01,	// (0x00087c30) bg_popup_call2_in_pane_cp04

0x8d59,	// (0x00085c88) popup_call6_2nd_window_g1

0x8d61,	// (0x00085c90) popup_call6_2nd_window_g2

0x8d69,	// (0x00085c98) popup_call6_2nd_window_g3

0x0002,

0xfd30,	// (0x0008cc5f) popup_call6_2nd_window_g

0x8d71,	// (0x00085ca0) popup_call6_2nd_window_t1

0xe26e,	// (0x0008b19d) bg_button_pane_cp15

0x8d80,	// (0x00085caf) cell_call6_btn_pane_g1

0xdce5,	// (0x0008ac14) cell_call6_btn_pane_t1

0x8d89,	// (0x00085cb8) listscroll_wgtman_pane_ParamLimits

0x8d89,	// (0x00085cb8) listscroll_wgtman_pane

0x8daa,	// (0x00085cd9) wgtman_btn_pane_ParamLimits

0x8daa,	// (0x00085cd9) wgtman_btn_pane

0xb554,	// (0x00088483) aid_scroll_copy1

0x8ded,	// (0x00085d1c) list_wgtman_pane

0x8df7,	// (0x00085d26) wgtman_btn_pane_g1_ParamLimits

0x8df7,	// (0x00085d26) wgtman_btn_pane_g1

0x8e23,	// (0x00085d52) wgtman_btn_pane_t1_ParamLimits

0x8e23,	// (0x00085d52) wgtman_btn_pane_t1

0x8e60,	// (0x00085d8f) wgtman_btn_pane_t2_ParamLimits

0x8e60,	// (0x00085d8f) wgtman_btn_pane_t2

0x0001,

0xfd37,	// (0x0008cc66) wgtman_btn_pane_t_ParamLimits

0xfd37,	// (0x0008cc66) wgtman_btn_pane_t

0x8e77,	// (0x00085da6) listrow_wgtman_pane_ParamLimits

0x8e77,	// (0x00085da6) listrow_wgtman_pane

0x8e8b,	// (0x00085dba) listrow_wgtman_pane_g1

0x8e98,	// (0x00085dc7) listrow_wgtman_pane_g2

0x0001,

0xfd3c,	// (0x0008cc6b) listrow_wgtman_pane_g

0x089e,	// (0x0007d7cd) listrow_wgtman_pane_t1

0x08b6,	// (0x0007d7e5) listrow_wgtman_pane_t2

0x0001,

0xfd41,	// (0x0008cc70) listrow_wgtman_pane_t

0x08dc,	// (0x0007d80b) wait_bar_pane_cp09

0x8eb6,	// (0x00085de5) main_calllock_btn_pane

0x8ec0,	// (0x00085def) main_calllock_pane_g1

0xe26e,	// (0x0008b19d) bg_button_pane_cp17

0x8d80,	// (0x00085caf) main_calllock_btn_pane_g1

0x8ecc,	// (0x00085dfb) main_calllock_btn_pane_t1

0xe26e,	// (0x0008b19d) main_dialer3_pane

0xe26e,	// (0x0008b19d) main_fmrd2_pane

0xaa68,	// (0x00087997) main_fs_bigclock_unlock_btn_pane_g1

0x8ee3,	// (0x00085e12) main_fs_bigclock_unlock_btn_pane_t1

0x8ef1,	// (0x00085e20) area_fmrd2_info_pane_ParamLimits

0x8ef1,	// (0x00085e20) area_fmrd2_info_pane

0x8f02,	// (0x00085e31) area_fmrd2_visual_pane_ParamLimits

0x8f02,	// (0x00085e31) area_fmrd2_visual_pane

0x8f10,	// (0x00085e3f) fmrd2_indi_pane_ParamLimits

0x8f10,	// (0x00085e3f) fmrd2_indi_pane

0x8f1d,	// (0x00085e4c) area_fmrd2_visual_pane_g1

0x8f25,	// (0x00085e54) area_fmrd2_visual_pane_t1

0x8f35,	// (0x00085e64) area_fmrd2_visual_pane_t2

0x8f45,	// (0x00085e74) area_fmrd2_visual_pane_t3

0x0002,

0xfd4b,	// (0x0008cc7a) area_fmrd2_visual_pane_t

0x8f55,	// (0x00085e84) area_fmrd2_info_pane_g1

0x8f5d,	// (0x00085e8c) area_fmrd2_info_pane_t1

0x8f6d,	// (0x00085e9c) area_fmrd2_info_pane_t2

0x8f7d,	// (0x00085eac) area_fmrd2_info_pane_t3

0x8f8d,	// (0x00085ebc) area_fmrd2_info_pane_t4

0x0003,

0xfd52,	// (0x0008cc81) area_fmrd2_info_pane_t

0x8f9d,	// (0x00085ecc) fmrd2_indi_pane_t1

0x8fad,	// (0x00085edc) fmrd2_indi_pane_t2

0x8fbd,	// (0x00085eec) fmrd2_indi_pane_t3

0x0002,

0xfd5b,	// (0x0008cc8a) fmrd2_indi_pane_t

0x789a,	// (0x000847c9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x789a,	// (0x000847c9) list_single_fs_bigclock_indicator_pane_g5

0x794f,	// (0x0008487e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x794f,	// (0x0008487e) list_single_fs_bigclock_indicator_pane_t5

0xe3b6,	// (0x0008b2e5) aid_cell_bcale_month_pane_ParamLimits

0xe3b6,	// (0x0008b2e5) aid_cell_bcale_month_pane

0xe3b6,	// (0x0008b2e5) bcale_month_pane_ParamLimits

0xe3b6,	// (0x0008b2e5) bcale_month_pane

0xf011,	// (0x0008bf40) bcale_preview_pane_ParamLimits

0xf011,	// (0x0008bf40) bcale_preview_pane

0x8899,	// (0x000857c8) list_single_fs_bigclock_pane_t1_ParamLimits

0x88b8,	// (0x000857e7) list_single_fs_bigclock_pane_t2_ParamLimits

0x88b8,	// (0x000857e7) list_single_fs_bigclock_pane_t2

0x0001,

0xfcd6,	// (0x0008cc05) list_single_fs_bigclock_pane_t_ParamLimits

0xfcd6,	// (0x0008cc05) list_single_fs_bigclock_pane_t

0x8edb,	// (0x00085e0a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd46,	// (0x0008cc75) main_fs_bigclock_unlock_btn_pane_g

0x8fcd,	// (0x00085efc) aid_dia3_key_size_ParamLimits

0x8fcd,	// (0x00085efc) aid_dia3_key_size

0x8fe1,	// (0x00085f10) aid_dia3_listrow_size_ParamLimits

0x8fe1,	// (0x00085f10) aid_dia3_listrow_size

0x8ffb,	// (0x00085f2a) dia3_keypad_fun_pane_ParamLimits

0x8ffb,	// (0x00085f2a) dia3_keypad_fun_pane

0x9015,	// (0x00085f44) dia3_keypad_num_pane_ParamLimits

0x9015,	// (0x00085f44) dia3_keypad_num_pane

0x902f,	// (0x00085f5e) dia3_listscroll_pane_ParamLimits

0x902f,	// (0x00085f5e) dia3_listscroll_pane

0x9045,	// (0x00085f74) dia3_numentry_pane_ParamLimits

0x9045,	// (0x00085f74) dia3_numentry_pane

0x905f,	// (0x00085f8e) dia3_list_pane

0x9069,	// (0x00085f98) scroll_pane_cp12

0xe26e,	// (0x0008b19d) bg_dia3_numentry_pane

0x9074,	// (0x00085fa3) dia3_numentry_pane_t1

0xd115,	// (0x0008a044) cell_dia3_key_num_pane

0x9083,	// (0x00085fb2) cell_dia3_key0_fun_pane_ParamLimits

0x9083,	// (0x00085fb2) cell_dia3_key0_fun_pane

0x9097,	// (0x00085fc6) cell_dia3_key1_fun_pane_ParamLimits

0x9097,	// (0x00085fc6) cell_dia3_key1_fun_pane

0x90ac,	// (0x00085fdb) dia3_listrow_pane

0x72f9,	// (0x00084228) bg_dia3_numentry_pane_g1

0xe26e,	// (0x0008b19d) bg_button_pane_cp21

0x90be,	// (0x00085fed) cell_dia3_key_num_pane_t1

0x90cc,	// (0x00085ffb) cell_dia3_key_num_pane_t2

0x90cc,	// (0x00085ffb) cell_dia3_key_num_pane_t3

0x90cc,	// (0x00085ffb) cell_dia3_key_num_pane_t4

0x0003,

0xfd62,	// (0x0008cc91) cell_dia3_key_num_pane_t

0xe26e,	// (0x0008b19d) bg_button_pane_cp19

0x90db,	// (0x0008600a) cell_dia3_key0_fun_pane_g1

0xe26e,	// (0x0008b19d) bg_button_pane_cp20

0x90e3,	// (0x00086012) cell_dia3_key1_fun_pane_g1

0xf011,	// (0x0008bf40) area_left_week_number_pane

0xf011,	// (0x0008bf40) area_top_day_name_pane

0xf011,	// (0x0008bf40) frame_month_view_pane

0xf011,	// (0x0008bf40) grid_month_view_pane

0xf011,	// (0x0008bf40) cell_top_day_name_pane_ParamLimits

0xf011,	// (0x0008bf40) cell_top_day_name_pane

0xf011,	// (0x0008bf40) cell_area_left_week_number_pane_ParamLimits

0xf011,	// (0x0008bf40) cell_area_left_week_number_pane

0xf011,	// (0x0008bf40) cell_month_view_pane_ParamLimits

0xf011,	// (0x0008bf40) cell_month_view_pane

0xf005,	// (0x0008bf34) frm_month_g1

0xf005,	// (0x0008bf34) frm_month_g2

0xf005,	// (0x0008bf34) frm_month_g3

0xf005,	// (0x0008bf34) frm_month_g4

0xf005,	// (0x0008bf34) frm_month_g5

0xf005,	// (0x0008bf34) frm_month_g6

0xf005,	// (0x0008bf34) frm_month_g7

0xf005,	// (0x0008bf34) frm_month_g8

0xf005,	// (0x0008bf34) frm_month_g9

0xf005,	// (0x0008bf34) frm_month_g10

0xf005,	// (0x0008bf34) frm_month_g11

0xf005,	// (0x0008bf34) frm_month_g12

0xf005,	// (0x0008bf34) frm_month_g13

0xf005,	// (0x0008bf34) frm_month_g14

0xf005,	// (0x0008bf34) frm_month_g15

0xf005,	// (0x0008bf34) frm_month_g16

0x000f,

0xfd6b,	// (0x0008cc9a) frm_month_g

0x90eb,	// (0x0008601a) cell_top_day_name_pane_t1

0xf005,	// (0x0008bf34) cell_area_left_week_number_pane_g1

0x90eb,	// (0x0008601a) cell_area_left_week_number_pane_t1

0xf005,	// (0x0008bf34) cell_month_view_pane_g1

0x90eb,	// (0x0008601a) cell_month_view_pane_t1

0xe26e,	// (0x0008b19d) main_fps_pane

0x7d41,	// (0x00084c70) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x7d41,	// (0x00084c70) cmail_ddmenu_btn02_pane_cp1

0x7d5d,	// (0x00084c8c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x7d5d,	// (0x00084c8c) cmail_ddmenu_btn02_pane_cp2

0x85d9,	// (0x00085508) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x85d9,	// (0x00085508) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc89,	// (0x0008cbb8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc89,	// (0x0008cbb8) cmail_ddmenu_btn02_pane_g

0x85fa,	// (0x00085529) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x85fa,	// (0x00085529) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc8e,	// (0x0008cbbd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc8e,	// (0x0008cbbd) cmail_ddmenu_btn02_pane_t

0x90fd,	// (0x0008602c) fps_text_pane_ParamLimits

0x90fd,	// (0x0008602c) fps_text_pane

0x9114,	// (0x00086043) main_fps_pane_g1_ParamLimits

0x9114,	// (0x00086043) main_fps_pane_g1

0x912c,	// (0x0008605b) wait_bar_pane_cp010_ParamLimits

0x912c,	// (0x0008605b) wait_bar_pane_cp010

0x913f,	// (0x0008606e) fps_text_pane_t1_ParamLimits

0x913f,	// (0x0008606e) fps_text_pane_t1

0x5348,	// (0x00082277) cam4_image_uncrop_pane_g1

0x5351,	// (0x00082280) cam4_image_uncrop_pane_g2

0x535c,	// (0x0008228b) cam4_image_uncrop_pane_g3

0x5365,	// (0x00082294) cam4_image_uncrop_pane_g4

0x0003,

0xf7e0,	// (0x0008c70f) cam4_image_uncrop_pane_g

0x90ac,	// (0x00085fdb) dia3_listrow_pane_ParamLimits

0xe26e,	// (0x0008b19d) main_phob2_pane

0x7fcb,	// (0x00084efa) cell_tport_appsw_pane_cp02_ParamLimits

0x7fcb,	// (0x00084efa) cell_tport_appsw_pane_cp02

0x7fdf,	// (0x00084f0e) cell_tport_appsw_pane_cp03_ParamLimits

0x7fdf,	// (0x00084f0e) cell_tport_appsw_pane_cp03

0xe26e,	// (0x0008b19d) phob2_contact_card_pane

0xe26e,	// (0x0008b19d) phob2_listscroll_pane

0x9157,	// (0x00086086) phob2_list_pane

0x915f,	// (0x0008608e) scroll_pane_cp034

0x9167,	// (0x00086096) phob2_cc_data_pane_ParamLimits

0x9167,	// (0x00086096) phob2_cc_data_pane

0x9180,	// (0x000860af) phob2_cc_listscroll_pane_ParamLimits

0x9180,	// (0x000860af) phob2_cc_listscroll_pane

0x91a1,	// (0x000860d0) list_double_large_graphic_phob2_pane_ParamLimits

0x91a1,	// (0x000860d0) list_double_large_graphic_phob2_pane

0x91c2,	// (0x000860f1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x91c2,	// (0x000860f1) list_double_large_graphic_phob2_pane_g1

0x08ee,	// (0x0007d81d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x08ee,	// (0x0007d81d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd8c,	// (0x0008ccbb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd8c,	// (0x0008ccbb) list_double_large_graphic_phob2_pane_g

0x090f,	// (0x0007d83e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x090f,	// (0x0007d83e) list_double_large_graphic_phob2_pane_t1

0x0933,	// (0x0007d862) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0933,	// (0x0007d862) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd95,	// (0x0008ccc4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd95,	// (0x0008ccc4) list_double_large_graphic_phob2_pane_t

0xed10,	// (0x0008bc3f) list_highlight_pane_cp024

0x91e7,	// (0x00086116) phob2_cc_button_pane

0x91f3,	// (0x00086122) phob2_cc_data_pane_g1_ParamLimits

0x91f3,	// (0x00086122) phob2_cc_data_pane_g1

0x920b,	// (0x0008613a) phob2_cc_data_pane_g2_ParamLimits

0x920b,	// (0x0008613a) phob2_cc_data_pane_g2

0x0001,

0xfd9a,	// (0x0008ccc9) phob2_cc_data_pane_g_ParamLimits

0xfd9a,	// (0x0008ccc9) phob2_cc_data_pane_g

0x9223,	// (0x00086152) phob2_cc_data_pane_t1_ParamLimits

0x9223,	// (0x00086152) phob2_cc_data_pane_t1

0x9251,	// (0x00086180) phob2_cc_data_pane_t2_ParamLimits

0x9251,	// (0x00086180) phob2_cc_data_pane_t2

0x9283,	// (0x000861b2) phob2_cc_data_pane_t3_ParamLimits

0x9283,	// (0x000861b2) phob2_cc_data_pane_t3

0x0002,

0xfd9f,	// (0x0008ccce) phob2_cc_data_pane_t_ParamLimits

0xfd9f,	// (0x0008ccce) phob2_cc_data_pane_t

0x92b3,	// (0x000861e2) phob2_cc_list_pane_ParamLimits

0x92b3,	// (0x000861e2) phob2_cc_list_pane

0x62b2,	// (0x000831e1) scroll_pane_cp035_ParamLimits

0x62b2,	// (0x000831e1) scroll_pane_cp035

0xed10,	// (0x0008bc3f) bg_button_pane_cp033

0x92bf,	// (0x000861ee) phob2_cc_button_pane_g1

0x92cb,	// (0x000861fa) phob2_cc_button_pane_t1

0x92e0,	// (0x0008620f) phob2_cc_button_pane_t2

0x0001,

0xfda6,	// (0x0008ccd5) phob2_cc_button_pane_t

0x92f2,	// (0x00086221) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92f2,	// (0x00086221) list_double_large_graphic_phob2_cc_pane

0x9329,	// (0x00086258) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9329,	// (0x00086258) list_double_large_graphic_phob2_cc_pane_g1

0x0954,	// (0x0007d883) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0954,	// (0x0007d883) list_double_large_graphic_phob2_cc_pane_g2

0x0960,	// (0x0007d88f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0960,	// (0x0007d88f) list_double_large_graphic_phob2_cc_pane_g3

0x096c,	// (0x0007d89b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x096c,	// (0x0007d89b) list_double_large_graphic_phob2_cc_pane_g4

0x0978,	// (0x0007d8a7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0978,	// (0x0007d8a7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdab,	// (0x0008ccda) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdab,	// (0x0008ccda) list_double_large_graphic_phob2_cc_pane_g

0x0984,	// (0x0007d8b3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0984,	// (0x0007d8b3) list_double_large_graphic_phob2_cc_pane_t1

0x09ad,	// (0x0007d8dc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x09ad,	// (0x0007d8dc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdb6,	// (0x0008cce5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdb6,	// (0x0008cce5) list_double_large_graphic_phob2_cc_pane_t

0x9335,	// (0x00086264) list_highlight_pane_cp025_ParamLimits

0x9335,	// (0x00086264) list_highlight_pane_cp025

0xed10,	// (0x0008bc3f) bg_button_pane_cp033_ParamLimits

0x92bf,	// (0x000861ee) phob2_cc_button_pane_g1_ParamLimits

0x92cb,	// (0x000861fa) phob2_cc_button_pane_t1_ParamLimits

0x92e0,	// (0x0008620f) phob2_cc_button_pane_t2_ParamLimits

0xfda6,	// (0x0008ccd5) phob2_cc_button_pane_t_ParamLimits

0x0c0e,	// (0x0007db3d) popup_wgtman_window

0xe63b,	// (0x0008b56a) scroll_pane_cp038

0x8dcf,	// (0x00085cfe) wgtman_btn_pane_cp_01_ParamLimits

0x8dcf,	// (0x00085cfe) wgtman_btn_pane_cp_01

0x9343,	// (0x00086272) wgtman_content_pane

0x934c,	// (0x0008627b) wgtman_heading_pane

0xe26e,	// (0x0008b19d) bg_heading_pane_cp02

0x9355,	// (0x00086284) wgtman_heading_pane_g1

0x935d,	// (0x0008628c) wgtman_heading_pane_t1

0x936b,	// (0x0008629a) scroll_pane_cp036

0x9373,	// (0x000862a2) wgtman_list_pane

0x79f8,	// (0x00084927) wgtman_list_pane_t1_ParamLimits

0x79f8,	// (0x00084927) wgtman_list_pane_t1

0xd8ac,	// (0x0008a7db) cam4_grid_pane

0x60bf,	// (0x00082fee) bg_button_pane_cp015_ParamLimits

0x60d6,	// (0x00083005) bg_button_pane_cp016_ParamLimits

0x60e2,	// (0x00083011) bg_button_pane_cp017_ParamLimits

0x613d,	// (0x0008306c) popup_vitu2_query_window_g3_ParamLimits

0x613d,	// (0x0008306c) popup_vitu2_query_window_g3

0x61e0,	// (0x0008310f) popup_vitu2_query_window_t6_ParamLimits

0x61e0,	// (0x0008310f) popup_vitu2_query_window_t6

0x620b,	// (0x0008313a) popup_vitu2_query_window_t7_ParamLimits

0x620b,	// (0x0008313a) popup_vitu2_query_window_t7

0x5348,	// (0x00082277) cam4_grid_pane_g1

0x5351,	// (0x00082280) cam4_grid_pane_g2

0x937b,	// (0x000862aa) cam4_grid_pane_g3

0x9384,	// (0x000862b3) cam4_grid_pane_g4

0x0003,

0xfdbb,	// (0x0008ccea) cam4_grid_pane_g

0x1771,	// (0x0007e6a0) aid_placing_vt_slider_lsc_ParamLimits

0x1a4e,	// (0x0007e97d) vidtel_button_pane_ParamLimits

0x1a4e,	// (0x0007e97d) vidtel_button_pane

0xe26e,	// (0x0008b19d) bg_button_pane_cp034

0x938f,	// (0x000862be) vidtel_button_pane_g1

0x9397,	// (0x000862c6) vidtel_button_pane_t1

0xe76d,	// (0x0008b69c) aid_size_vtel_slider_touch

0x62b2,	// (0x000831e1) scroll_pane_cp039

0x7368,	// (0x00084297) ncim_query_button_pane_cp01_ParamLimits

0x7387,	// (0x000842b6) ncimui_query_pane_g1_ParamLimits

0xed10,	// (0x0008bc3f) input_focus_pane_cp012_ParamLimits

0x73ac,	// (0x000842db) ncim_query_entry_pane_t1_ParamLimits

0x62b2,	// (0x000831e1) scroll_pane_cp039_ParamLimits

0x2baa,	// (0x0007fad9) navi_pane_bcale_mc_g1

0x2bb2,	// (0x0007fae1) navi_pane_bcale_mc_t1

0x7e55,	// (0x00084d84) main_sp_fs_email_pane_g1

0x7e61,	// (0x00084d90) main_sp_fs_email_pane_g2

0x0001,

0xfbcc,	// (0x0008cafb) main_sp_fs_email_pane_g

0x83a1,	// (0x000852d0) list_single_cale_mrui_row_pane_g3_ParamLimits

0x83a1,	// (0x000852d0) list_single_cale_mrui_row_pane_g3

0x0848,	// (0x0007d777) list_single_recal_day_pane_g5_event_pane

0xdcb0,	// (0x0008abdf) list_single_recal_day_pane_g7

0x93ad,	// (0x000862dc) list_recal_day_event_pane_cp01

0x93b6,	// (0x000862e5) list_recal_vselct_arw_lo_pane_cp01

0x93be,	// (0x000862ed) list_recal_vselct_arw_up_pane_cp01

0x93c6,	// (0x000862f5) list_recal_vselct_pane_cp01

0xe77d,	// (0x0008b6ac) list_recal_day_event_pane_cp01_g1

0xdcf4,	// (0x0008ac23) list_recal_day_event_pane_cp01_t1

0xdcb8,	// (0x0008abe7) list_single_recal_day_pane_t1_ParamLimits

0xdcca,	// (0x0008abf9) list_single_recal_day_pane_t2_ParamLimits

0xfc9e,	// (0x0008cbcd) list_single_recal_day_pane_t_ParamLimits

0xa9a7,	// (0x000878d6) bg_notes_pane_ParamLimits

0xaaa4,	// (0x000879d3) list_notes_pane_ParamLimits

0x0d26,	// (0x0007dc55) scroll_pane_cp06_ParamLimits

0xaae0,	// (0x00087a0f) main_notes_pane_ParamLimits

0xed10,	// (0x0008bc3f) main_welc_pane

0x9420,	// (0x0008634f) main_welc_body_pane_ParamLimits

0x9420,	// (0x0008634f) main_welc_body_pane

0x943f,	// (0x0008636e) main_welc_opti_pane_ParamLimits

0x943f,	// (0x0008636e) main_welc_opti_pane

0x94b4,	// (0x000863e3) main_welc_pane_t1_ParamLimits

0x94b4,	// (0x000863e3) main_welc_pane_t1

0x96f7,	// (0x00086626) main_welc_body_row_pane_ParamLimits

0x96f7,	// (0x00086626) main_welc_body_row_pane

0xaa14,	// (0x00087943) main_welc_opti_row_pane_ParamLimits

0xaa14,	// (0x00087943) main_welc_opti_row_pane

0x970b,	// (0x0008663a) main_welc_opti_row_pane_g1

0x9713,	// (0x00086642) main_welc_opti_row_pane_t1

0x9722,	// (0x00086651) main_welc_body_row_pane_t1

0x8b58,	// (0x00085a87) popup_notif_wgt_heading_pane

0x8b82,	// (0x00085ab1) aid_size_list_notif_wgt_del_ParamLimits

0x8b8f,	// (0x00085abe) list_notif_wgt_row_pane_g1_ParamLimits

0x8b9b,	// (0x00085aca) list_notif_wgt_row_pane_g2_ParamLimits

0x8baa,	// (0x00085ad9) list_notif_wgt_row_pane_g3_ParamLimits

0xfd05,	// (0x0008cc34) list_notif_wgt_row_pane_g_ParamLimits

0x8bb7,	// (0x00085ae6) list_notif_wgt_row_pane_t1_ParamLimits

0x8bcd,	// (0x00085afc) list_notif_wgt_row_pane_t2_ParamLimits

0x8bdf,	// (0x00085b0e) list_notif_wgt_row_pane_t3_ParamLimits

0xfd0c,	// (0x0008cc3b) list_notif_wgt_row_pane_t_ParamLimits

0x8e8b,	// (0x00085dba) listrow_wgtman_pane_g1_ParamLimits

0x8e98,	// (0x00085dc7) listrow_wgtman_pane_g2_ParamLimits

0xfd3c,	// (0x0008cc6b) listrow_wgtman_pane_g_ParamLimits

0x089e,	// (0x0007d7cd) listrow_wgtman_pane_t1_ParamLimits

0x08b6,	// (0x0007d7e5) listrow_wgtman_pane_t2_ParamLimits

0xfd41,	// (0x0008cc70) listrow_wgtman_pane_t_ParamLimits

0x08dc,	// (0x0007d80b) wait_bar_pane_cp09_ParamLimits

0xe26e,	// (0x0008b19d) bg_popup_heading_pane_cp02

0x9731,	// (0x00086660) popup_notif_wgt_heading_pane_g1

0x9739,	// (0x00086668) popup_notif_wgt_heading_pane_t1

0xe26e,	// (0x0008b19d) main_vids_pane

0xe26e,	// (0x0008b19d) vids_listscroll_pane

0x9747,	// (0x00086676) scroll_pane_cp040

0xe26e,	// (0x0008b19d) vids_list_pane

0x9752,	// (0x00086681) vids_list_double_pane_ParamLimits

0x9752,	// (0x00086681) vids_list_double_pane

0x9765,	// (0x00086694) vids_list_double_pane_g1

0x976e,	// (0x0008669d) vids_list_double_pane_t1

0x977e,	// (0x000866ad) vids_list_double_pane_t2

0x0001,

0xfdda,	// (0x0008cd09) vids_list_double_pane_t

0xed10,	// (0x0008bc3f) main_ncimui_pane_ParamLimits

0x7087,	// (0x00083fb6) main_ncimui_pane_g1_ParamLimits

0x7093,	// (0x00083fc2) main_ncimui_pane_g2_ParamLimits

0x7093,	// (0x00083fc2) main_ncimui_pane_g2

0x0001,

0xfad2,	// (0x0008ca01) main_ncimui_pane_g_ParamLimits

0xfad2,	// (0x0008ca01) main_ncimui_pane_g

0x945e,	// (0x0008638d) main_welc_pane_g1_ParamLimits

0x945e,	// (0x0008638d) main_welc_pane_g1

0x9473,	// (0x000863a2) main_welc_pane_g2_ParamLimits

0x9473,	// (0x000863a2) main_welc_pane_g2

0x0003,

0xfdc4,	// (0x0008ccf3) main_welc_pane_g_ParamLimits

0xfdc4,	// (0x0008ccf3) main_welc_pane_g

0xa9a7,	// (0x000878d6) listscroll_mce_pane_ParamLimits

0x2c8a,	// (0x0007fbb9) wait_bar_pane_cp10

0xc96b,	// (0x0008989a) main_cale_day_pane_ParamLimits

0xc96b,	// (0x0008989a) main_cale_week_pane_ParamLimits

0xa9a7,	// (0x000878d6) main_messa_pane_ParamLimits

0x4819,	// (0x00081748) main_clock2_btn_pane_ParamLimits

0x4819,	// (0x00081748) main_clock2_btn_pane

0xd1f7,	// (0x0008a126) main_clock2_btn_pane_cp01_ParamLimits

0xd1f7,	// (0x0008a126) main_clock2_btn_pane_cp01

0x8364,	// (0x00085293) list_cale_mrui_pane_ParamLimits

0x8c38,	// (0x00085b67) main_cf0_pane_g2

0x0001,

0xfd13,	// (0x0008cc42) main_cf0_pane_g

0xf011,	// (0x0008bf40) area_left_week_number_pane_ParamLimits

0xf011,	// (0x0008bf40) area_top_day_name_pane_ParamLimits

0xf011,	// (0x0008bf40) frame_month_view_pane_ParamLimits

0xf011,	// (0x0008bf40) grid_month_view_pane_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g1_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g2_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g3_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g4_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g5_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g6_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g7_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g8_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g9_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g10_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g11_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g12_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g13_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g14_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g15_ParamLimits

0xf005,	// (0x0008bf34) frm_month_g16_ParamLimits

0xfd6b,	// (0x0008cc9a) frm_month_g_ParamLimits

0x90eb,	// (0x0008601a) cell_top_day_name_pane_t1_ParamLimits

0xf005,	// (0x0008bf34) cell_area_left_week_number_pane_g1_ParamLimits

0x90eb,	// (0x0008601a) cell_area_left_week_number_pane_t1_ParamLimits

0xf005,	// (0x0008bf34) cell_month_view_pane_g1_ParamLimits

0x90eb,	// (0x0008601a) cell_month_view_pane_t1_ParamLimits

0xa99f,	// (0x000878ce) main_clock2_btn_pane_g1

0x978e,	// (0x000866bd) main_clock2_btn_pane_t1

0xed10,	// (0x0008bc3f) listscroll_cmail_pane_ParamLimits

0x7e55,	// (0x00084d84) main_sp_fs_email_pane_g1_ParamLimits

0x7e61,	// (0x00084d90) main_sp_fs_email_pane_g2_ParamLimits

0xfbcc,	// (0x0008cafb) main_sp_fs_email_pane_g_ParamLimits

0x860c,	// (0x0008553b) list_recal_day_pane_ParamLimits

0x861d,	// (0x0008554c) mian_recal_day_pane_t1

0x063e,	// (0x0007d56d) list_single_dyc_row_text_pane_t4_ParamLimits

0x063e,	// (0x0007d56d) list_single_dyc_row_text_pane_t4

0x0687,	// (0x0007d5b6) list_single_dyc_row_text_pane_t5_ParamLimits

0x0687,	// (0x0007d5b6) list_single_dyc_row_text_pane_t5

0xda60,	// (0x0008a98f) list_single_dyc_row_text_pane_t6_ParamLimits

0xda60,	// (0x0008a98f) list_single_dyc_row_text_pane_t6

0x27f9,	// (0x0007f728) aid_mgn_list_cale_time_pane

0xed10,	// (0x0008bc3f) main_gallery2_pane_ParamLimits

0xd20b,	// (0x0008a13a) main_clock2_pane_cp01_t1

0xd219,	// (0x0008a148) main_clock2_pane_cp01_t3

0x0001,

0xf6bc,	// (0x0008c5eb) main_clock2_pane_cp01_t

0x1189,	// (0x0007e0b8) cale_week_scroll_pane_g16_ParamLimits

0x1189,	// (0x0007e0b8) cale_week_scroll_pane_g16

0xad01,	// (0x00087c30) vorec_slider_pane

0x9397,	// (0x000862c6) vidtel_button_pane_t1_ParamLimits

0x87b9,	// (0x000856e8) main_fs_bigclock_clock_pane_g1_ParamLimits

0x87b9,	// (0x000856e8) main_fs_bigclock_clock_pane_g2_ParamLimits

0x87b9,	// (0x000856e8) main_fs_bigclock_clock_pane_g3_ParamLimits

0x87b9,	// (0x000856e8) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcc1,	// (0x0008cbf0) main_fs_bigclock_clock_pane_g_ParamLimits

0x87d1,	// (0x00085700) main_fs_bigclock_clock_pane_t1_ParamLimits

0x87e9,	// (0x00085718) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcca,	// (0x0008cbf9) main_fs_bigclock_clock_pane_t_ParamLimits

0x40ae,	// (0x00080fdd) main_mup3_lyrics_pane_ParamLimits

0x40ae,	// (0x00080fdd) main_mup3_lyrics_pane

0x97b4,	// (0x000866e3) main_mup3_lyrics_pane_t1_ParamLimits

0x97b4,	// (0x000866e3) main_mup3_lyrics_pane_t1

0xd5b2,	// (0x0008a4e1) aid_main_mp4_pane_t1_area

0xd5bc,	// (0x0008a4eb) aid_main_mp4_pane_t2_area

0xd666,	// (0x0008a595) main_mp4_pane_g7_ParamLimits

0xd666,	// (0x0008a595) main_mp4_pane_g7

0xd672,	// (0x0008a5a1) main_mp4_pane_g8_ParamLimits

0xd672,	// (0x0008a5a1) main_mp4_pane_g8

0x510f,	// (0x0008203e) aid_call6_pane_g1_size

0x9311,	// (0x00086240) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9311,	// (0x00086240) list_double_large_graphic_phob2_other_pane

0xac0e,	// (0x00087b3d) list_double_large_graphic_phob2_other_pane_g1

0xe26e,	// (0x0008b19d) list_highlight_pane_cp026

0xed10,	// (0x0008bc3f) main_welc_pane_ParamLimits

0x7dbe,	// (0x00084ced) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7dbe,	// (0x00084ced) main_sp_fs_ctrlbar_pane_g3

0x7dd8,	// (0x00084d07) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7dd8,	// (0x00084d07) main_sp_fs_ctrlbar_pane_g4

0x7e0c,	// (0x00084d3b) toolbar2_fixed_button_pane_cp01

0x7e17,	// (0x00084d46) toolbar2_fixed_button_pane_cp02

0x7e24,	// (0x00084d53) toolbar2_fixed_button_pane_cp03

0x93f2,	// (0x00086321) list_welc_entry_pane_ParamLimits

0x93f2,	// (0x00086321) list_welc_entry_pane

0x9488,	// (0x000863b7) main_welc_pane_g3_ParamLimits

0x9488,	// (0x000863b7) main_welc_pane_g3

0x94d6,	// (0x00086405) main_welc_pane_t2_ParamLimits

0x94d6,	// (0x00086405) main_welc_pane_t2

0x94f9,	// (0x00086428) main_welc_pane_t3_ParamLimits

0x94f9,	// (0x00086428) main_welc_pane_t3

0x0005,

0xfdcd,	// (0x0008ccfc) main_welc_pane_t_ParamLimits

0xfdcd,	// (0x0008ccfc) main_welc_pane_t

0x9646,	// (0x00086575) welc_button_pane_ParamLimits

0x9646,	// (0x00086575) welc_button_pane

0x96df,	// (0x0008660e) welc_service_logo_pane_ParamLimits

0x96df,	// (0x0008660e) welc_service_logo_pane

0x97cf,	// (0x000866fe) list_single_welc_entry_pane_ParamLimits

0x97cf,	// (0x000866fe) list_single_welc_entry_pane

0x97e0,	// (0x0008670f) list_single_welc_entry_pane_g1

0x97e8,	// (0x00086717) list_single_welc_entry_pane_t1

0x97f6,	// (0x00086725) list_single_welc_entry_pane_t2

0x0001,

0xfddf,	// (0x0008cd0e) list_single_welc_entry_pane_t

0xe26e,	// (0x0008b19d) bg_button_pane_cp035

0x9804,	// (0x00086733) welc_button_pane_t1

0x9812,	// (0x00086741) welc_service_logo_pane_g1

0x981b,	// (0x0008674a) welc_service_logo_pane_g2

0x0001,

0xfde4,	// (0x0008cd13) welc_service_logo_pane_g

0xe26e,	// (0x0008b19d) main_int_radio_pane

0x7028,	// (0x00083f57) list_single_fs_dyc_pane_g1

0x08fd,	// (0x0007d82c) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x08fd,	// (0x0007d82c) list_double_large_graphic_phob2_pane_g3

0x91d4,	// (0x00086103) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x91d4,	// (0x00086103) list_double_large_graphic_phob2_pane_g4

0x9824,	// (0x00086753) main_int_radio1_pane_ParamLimits

0x9824,	// (0x00086753) main_int_radio1_pane

0x9841,	// (0x00086770) find_pane_cp02

0x984a,	// (0x00086779) input_focus_pane_cp12_ParamLimits

0x984a,	// (0x00086779) input_focus_pane_cp12

0x985a,	// (0x00086789) input_focus_pane_cp13_ParamLimits

0x985a,	// (0x00086789) input_focus_pane_cp13

0x986e,	// (0x0008679d) input_focus_pane_cp14_ParamLimits

0x986e,	// (0x0008679d) input_focus_pane_cp14

0x9882,	// (0x000867b1) int_radio1_listscroll_pane

0x988c,	// (0x000867bb) main_int_radio1_pane_g1_ParamLimits

0x988c,	// (0x000867bb) main_int_radio1_pane_g1

0x98a2,	// (0x000867d1) main_int_radio1_pane_t1_ParamLimits

0x98a2,	// (0x000867d1) main_int_radio1_pane_t1

0x98bb,	// (0x000867ea) main_int_radio1_pane_t2_ParamLimits

0x98bb,	// (0x000867ea) main_int_radio1_pane_t2

0x98d6,	// (0x00086805) main_int_radio1_pane_t3_ParamLimits

0x98d6,	// (0x00086805) main_int_radio1_pane_t3

0x98f1,	// (0x00086820) main_int_radio1_pane_t4_ParamLimits

0x98f1,	// (0x00086820) main_int_radio1_pane_t4

0x9903,	// (0x00086832) main_int_radio1_pane_t5_ParamLimits

0x9903,	// (0x00086832) main_int_radio1_pane_t5

0x9915,	// (0x00086844) main_int_radio1_pane_t6_ParamLimits

0x9915,	// (0x00086844) main_int_radio1_pane_t6

0x992a,	// (0x00086859) main_int_radio1_pane_t7_ParamLimits

0x992a,	// (0x00086859) main_int_radio1_pane_t7

0x993f,	// (0x0008686e) main_int_radio1_pane_t8_ParamLimits

0x993f,	// (0x0008686e) main_int_radio1_pane_t8

0x995c,	// (0x0008688b) main_int_radio1_pane_t9_ParamLimits

0x995c,	// (0x0008688b) main_int_radio1_pane_t9

0x996e,	// (0x0008689d) main_int_radio1_pane_t10_ParamLimits

0x996e,	// (0x0008689d) main_int_radio1_pane_t10

0x9994,	// (0x000868c3) main_int_radio1_pane_t11_ParamLimits

0x9994,	// (0x000868c3) main_int_radio1_pane_t11

0x99ba,	// (0x000868e9) main_int_radio1_pane_t12_ParamLimits

0x99ba,	// (0x000868e9) main_int_radio1_pane_t12

0x000b,

0xfde9,	// (0x0008cd18) main_int_radio1_pane_t_ParamLimits

0xfde9,	// (0x0008cd18) main_int_radio1_pane_t

0x9157,	// (0x00086086) int_radio_list_pane

0x915f,	// (0x0008608e) scroll_pane_cp037

0x99cc,	// (0x000868fb) list_double_large_graphic_int_radio_pane_ParamLimits

0x99cc,	// (0x000868fb) list_double_large_graphic_int_radio_pane

0x99e0,	// (0x0008690f) list_double_large_graphic_int_radio_pane_g1

0xdd02,	// (0x0008ac31) list_double_large_graphic_int_radio_pane_t1

0xdd10,	// (0x0008ac3f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe02,	// (0x0008cd31) list_double_large_graphic_int_radio_pane_t

0xe26e,	// (0x0008b19d) list_highlight_pane_cp027

0x940c,	// (0x0008633b) main_button_pane_4

0x949c,	// (0x000863cb) main_welc_pane_g4_ParamLimits

0x949c,	// (0x000863cb) main_welc_pane_g4

0x951c,	// (0x0008644b) main_welc_pane_t4_ParamLimits

0x951c,	// (0x0008644b) main_welc_pane_t4

0x953f,	// (0x0008646e) main_welc_pane_t5_ParamLimits

0x953f,	// (0x0008646e) main_welc_pane_t5

0x957e,	// (0x000864ad) main_welc_pane_t6_ParamLimits

0x957e,	// (0x000864ad) main_welc_pane_t6

0x965a,	// (0x00086589) welc_button_pane_2_ParamLimits

0x965a,	// (0x00086589) welc_button_pane_2

0x9681,	// (0x000865b0) welc_button_pane_3_ParamLimits

0x9681,	// (0x000865b0) welc_button_pane_3

0x940c,	// (0x0008633b) welc_button_pane_4

0x96ab,	// (0x000865da) welc_button_pane_5_ParamLimits

0x96ab,	// (0x000865da) welc_button_pane_5

0x0a12,	// (0x0007d941) main_popup_welc_pane

0x9a01,	// (0x00086930) main_welc_sk_g3

0x9a0b,	// (0x0008693a) main_welc_sk_g4

0x9a15,	// (0x00086944) main_welc_sk_t3

0xdd1e,	// (0x0008ac4d) main_welc_sk_t4

0xdd2e,	// (0x0008ac5d) popup_welc_pane_t4

0xdd3c,	// (0x0008ac6b) popup_welc_pane_t5

0xdd4a,	// (0x0008ac79) popup_welc_pane_t6

0xe26e,	// (0x0008b19d) main_acti_pane

0xe26e,	// (0x0008b19d) main_sso_pane

0x9a25,	// (0x00086954) sso_body_pane_ParamLimits

0x9a25,	// (0x00086954) sso_body_pane

0x9a48,	// (0x00086977) sso_logo_pane_ParamLimits

0x9a48,	// (0x00086977) sso_logo_pane

0x9a86,	// (0x000869b5) sso_sk_pane_ParamLimits

0x9a86,	// (0x000869b5) sso_sk_pane

0x9a98,	// (0x000869c7) main_sso_logo_pane_g1

0x9aa1,	// (0x000869d0) sso_sk_pane_t1_ParamLimits

0x9aa1,	// (0x000869d0) sso_sk_pane_t1

0x9abb,	// (0x000869ea) sso_sk_pane_t2_ParamLimits

0x9abb,	// (0x000869ea) sso_sk_pane_t2

0x0001,

0xfe07,	// (0x0008cd36) sso_sk_pane_t_ParamLimits

0xfe07,	// (0x0008cd36) sso_sk_pane_t

0xdd8c,	// (0x0008acbb) aid_sso_gap

0xdd95,	// (0x0008acc4) aid_sso_txt1

0xdd9f,	// (0x0008acce) aid_sso_txt2

0xdda9,	// (0x0008acd8) aid_sso_txt3

0x0002,

0xfe0c,	// (0x0008cd3b) aid_sso_txt

0xddb3,	// (0x0008ace2) aid_sso_widget

0x9b25,	// (0x00086a54) sso_btn_pane_ParamLimits

0x9b25,	// (0x00086a54) sso_btn_pane

0x9bb9,	// (0x00086ae8) sso_option_pane_ParamLimits

0x9bb9,	// (0x00086ae8) sso_option_pane

0x9c6d,	// (0x00086b9c) sso_query_pane_ParamLimits

0x9c6d,	// (0x00086b9c) sso_query_pane

0x9cc3,	// (0x00086bf2) sso_query_pane_cp01_ParamLimits

0x9cc3,	// (0x00086bf2) sso_query_pane_cp01

0x9d21,	// (0x00086c50) sso_t_hdr_pane_ParamLimits

0x9d21,	// (0x00086c50) sso_t_hdr_pane

0x9d4b,	// (0x00086c7a) sso_t_nml_pane_ParamLimits

0x9d4b,	// (0x00086c7a) sso_t_nml_pane

0xddbd,	// (0x0008acec) sso_t_sub_pane

0x9a5a,	// (0x00086989) sso_popup_window_ParamLimits

0x9a5a,	// (0x00086989) sso_popup_window

0x9ad1,	// (0x00086a00) sso_apps_pane_ParamLimits

0x9ad1,	// (0x00086a00) sso_apps_pane

0x9afb,	// (0x00086a2a) sso_body_pane_g1

0x9b05,	// (0x00086a34) sso_body_pane_t1

0x9b15,	// (0x00086a44) sso_body_pane_t2

0x0001,

0xfe13,	// (0x0008cd42) sso_body_pane_t

0x9b71,	// (0x00086aa0) sso_btn_pane_cp01_ParamLimits

0x9b71,	// (0x00086aa0) sso_btn_pane_cp01

0x9c41,	// (0x00086b70) sso_prog_pane_ParamLimits

0x9c41,	// (0x00086b70) sso_prog_pane

0x9dbd,	// (0x00086cec) sso_t_hdr_pane_t1_ParamLimits

0x9dbd,	// (0x00086cec) sso_t_hdr_pane_t1

0xddd2,	// (0x0008ad01) input_focus_pane_cp10_ParamLimits

0xddd2,	// (0x0008ad01) input_focus_pane_cp10

0xdde6,	// (0x0008ad15) sso_query_pane_t1_ParamLimits

0xdde6,	// (0x0008ad15) sso_query_pane_t1

0xddf9,	// (0x0008ad28) sso_query_pane_t2_ParamLimits

0xddf9,	// (0x0008ad28) sso_query_pane_t2

0xde13,	// (0x0008ad42) sso_query_pane_t3_ParamLimits

0xde13,	// (0x0008ad42) sso_query_pane_t3

0xde3d,	// (0x0008ad6c) sso_query_pane_t4_ParamLimits

0xde3d,	// (0x0008ad6c) sso_query_pane_t4

0x0003,

0xfe18,	// (0x0008cd47) sso_query_pane_t_ParamLimits

0xfe18,	// (0x0008cd47) sso_query_pane_t

0xde61,	// (0x0008ad90) bg_button_pane_cp22

0xde6a,	// (0x0008ad99) sso_btn_pane_t1

0x9dd0,	// (0x00086cff) sso_t_nml_pane_t1_ParamLimits

0x9dd0,	// (0x00086cff) sso_t_nml_pane_t1

0xde79,	// (0x0008ada8) sso_option_row_pane_ParamLimits

0xde79,	// (0x0008ada8) sso_option_row_pane

0xde86,	// (0x0008adb5) sso_t_sub_pane_t1_ParamLimits

0xde86,	// (0x0008adb5) sso_t_sub_pane_t1

0xed10,	// (0x0008bc3f) bg_popup_window_pane_cp11_ParamLimits

0xed10,	// (0x0008bc3f) bg_popup_window_pane_cp11

0xdea3,	// (0x0008add2) popup_sk_window_cp01_ParamLimits

0xdea3,	// (0x0008add2) popup_sk_window_cp01

0xdeb0,	// (0x0008addf) sso_popup_body_pane_ParamLimits

0xdeb0,	// (0x0008addf) sso_popup_body_pane

0xdebd,	// (0x0008adec) scroll_pane_cp21_ParamLimits

0xdebd,	// (0x0008adec) scroll_pane_cp21

0xdeca,	// (0x0008adf9) sso_popup_body_t_pane_ParamLimits

0xdeca,	// (0x0008adf9) sso_popup_body_t_pane

0xded7,	// (0x0008ae06) sso_popup_body_t_hdr_pane_ParamLimits

0xded7,	// (0x0008ae06) sso_popup_body_t_hdr_pane

0x9deb,	// (0x00086d1a) sso_popup_body_t_nml_pane_ParamLimits

0x9deb,	// (0x00086d1a) sso_popup_body_t_nml_pane

0x9e12,	// (0x00086d41) sso_popup_body_t_sub_pane_ParamLimits

0x9e12,	// (0x00086d41) sso_popup_body_t_sub_pane

0xdee9,	// (0x0008ae18) sso_popup_body_t_hdr_pane_t1

0x9e35,	// (0x00086d64) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9e35,	// (0x00086d64) sso_popup_body_t_nml_pane_t1

0xdef9,	// (0x0008ae28) sso_popup_body_t_sub_pane_t1_ParamLimits

0xdef9,	// (0x0008ae28) sso_popup_body_t_sub_pane_t1

0xaa68,	// (0x00087997) sso_prog_pane_g1

0x9e6d,	// (0x00086d9c) sso_apps_pane_comp1_ParamLimits

0x9e6d,	// (0x00086d9c) sso_apps_pane_comp1

0xdf1e,	// (0x0008ae4d) sso_apps_pane_comp1_g1

0xdf26,	// (0x0008ae55) sso_apps_pane_comp1_t1

0xdf42,	// (0x0008ae71) sso_option_row_pane_g1

0xdf5a,	// (0x0008ae89) sso_option_row_pane_t1

0x80aa,	// (0x00084fd9) list_cmail_pane_ParamLimits

0xe26e,	// (0x0008b19d) main_call7_pane

0x93d0,	// (0x000862ff) bg_welc_area_ParamLimits

0x93d0,	// (0x000862ff) bg_welc_area

0x95c1,	// (0x000864f0) sso_t_hdr_pane_a_t1_ParamLimits

0x95c1,	// (0x000864f0) sso_t_hdr_pane_a_t1

0x95dc,	// (0x0008650b) sso_t_nml_pane_a_t1_ParamLimits

0x95dc,	// (0x0008650b) sso_t_nml_pane_a_t1

0x960b,	// (0x0008653a) sso_t_sub_pane_a_t1_ParamLimits

0x960b,	// (0x0008653a) sso_t_sub_pane_a_t1

0x96c6,	// (0x000865f5) welc_button_pane_cp01_ParamLimits

0x96c6,	// (0x000865f5) welc_button_pane_cp01

0x99e9,	// (0x00086918) sso_btn_pane_t1_copy1

0x99f8,	// (0x00086927) welc_button_pane_2_comp1

0xdd5a,	// (0x0008ac89) sso_t_hdr_pane_p_t1

0xdd6a,	// (0x0008ac99) sso_t_nml_pane_p_t1

0xdd7a,	// (0x0008aca9) sso_t_sub_pane_p_t1

0xe26e,	// (0x0008b19d) main_att_pane

0xe26e,	// (0x0008b19d) main_vod_pane

0xddbd,	// (0x0008acec) sso_t_sub_pane_ParamLimits

0xdf34,	// (0x0008ae63) input_focus_pane_cp10_t1

0xdf5a,	// (0x0008ae89) sso_option_row_pane_t1_ParamLimits

0x9e87,	// (0x00086db6) main_att_body_pane_ParamLimits

0x9e87,	// (0x00086db6) main_att_body_pane

0x9e9d,	// (0x00086dcc) att_btn_emg_pane_ParamLimits

0x9e9d,	// (0x00086dcc) att_btn_emg_pane

0x9ebc,	// (0x00086deb) att_btn_pane_ParamLimits

0x9ebc,	// (0x00086deb) att_btn_pane

0x9f2f,	// (0x00086e5e) att_btn_pane_cp01_ParamLimits

0x9f2f,	// (0x00086e5e) att_btn_pane_cp01

0x9f6d,	// (0x00086e9c) att_li_srv_pane_ParamLimits

0x9f6d,	// (0x00086e9c) att_li_srv_pane

0x9f8a,	// (0x00086eb9) att_opt_pane_ParamLimits

0x9f8a,	// (0x00086eb9) att_opt_pane

0x9fd4,	// (0x00086f03) att_query_pane_ParamLimits

0x9fd4,	// (0x00086f03) att_query_pane

0xa04d,	// (0x00086f7c) att_query_pane_cp01_ParamLimits

0xa04d,	// (0x00086f7c) att_query_pane_cp01

0xa099,	// (0x00086fc8) att_t_hdr_pane_ParamLimits

0xa099,	// (0x00086fc8) att_t_hdr_pane

0xa109,	// (0x00087038) att_t_nml_pane_ParamLimits

0xa109,	// (0x00087038) att_t_nml_pane

0xa187,	// (0x000870b6) att_t_nml_pane_cp01_ParamLimits

0xa187,	// (0x000870b6) att_t_nml_pane_cp01

0xa1b5,	// (0x000870e4) att_t_nmlb_pane_ParamLimits

0xa1b5,	// (0x000870e4) att_t_nmlb_pane

0xa224,	// (0x00087153) att_term_pane_ParamLimits

0xa224,	// (0x00087153) att_term_pane

0xa274,	// (0x000871a3) main_att_body_pane_g1_ParamLimits

0xa274,	// (0x000871a3) main_att_body_pane_g1

0xdf76,	// (0x0008aea5) att_t_hdr_pane_t1_ParamLimits

0xdf76,	// (0x0008aea5) att_t_hdr_pane_t1

0xdf89,	// (0x0008aeb8) att_t_nml_pane_t1_ParamLimits

0xdf89,	// (0x0008aeb8) att_t_nml_pane_t1

0xde6a,	// (0x0008ad99) att_btn_pane_t1

0xde61,	// (0x0008ad90) bg_button_pane_cp23

0xa2a0,	// (0x000871cf) att_li_srv_row_pane_ParamLimits

0xa2a0,	// (0x000871cf) att_li_srv_row_pane

0xdfae,	// (0x0008aedd) att_t_nmlb_pane_t1_ParamLimits

0xdfae,	// (0x0008aedd) att_t_nmlb_pane_t1

0xdfca,	// (0x0008aef9) att_query_pane_t1

0xdfd9,	// (0x0008af08) att_query_pane_t2

0xdfe8,	// (0x0008af17) att_query_pane_t3

0x0002,

0xfe26,	// (0x0008cd55) att_query_pane_t

0xdff7,	// (0x0008af26) input_focus_pane_cp11

0xe000,	// (0x0008af2f) att_term_pane_t1_ParamLimits

0xe000,	// (0x0008af2f) att_term_pane_t1

0xe26e,	// (0x0008b19d) att_opt_row_pane

0xe01d,	// (0x0008af4c) att_opt_row_pane_g1

0xe025,	// (0x0008af54) att_opt_row_pane_t1_ParamLimits

0xe025,	// (0x0008af54) att_opt_row_pane_t1

0xa2b0,	// (0x000871df) att_li_srv_row_pane_g1

0xa2b8,	// (0x000871e7) att_li_srv_row_pane_t1_ParamLimits

0xa2b8,	// (0x000871e7) att_li_srv_row_pane_t1

0xa2b8,	// (0x000871e7) att_li_srv_row_pane_t2_ParamLimits

0xa2b8,	// (0x000871e7) att_li_srv_row_pane_t2

0x0001,

0xfe2d,	// (0x0008cd5c) att_li_srv_row_pane_t_ParamLimits

0xfe2d,	// (0x0008cd5c) att_li_srv_row_pane_t

0xe03e,	// (0x0008af6d) att_btn_close_pane_g1

0xe26e,	// (0x0008b19d) bg_button_pane_cp24

0xa2cd,	// (0x000871fc) main_vod_body_pane_ParamLimits

0xa2cd,	// (0x000871fc) main_vod_body_pane

0xa2e1,	// (0x00087210) main_vod_body_pane_g1_ParamLimits

0xa2e1,	// (0x00087210) main_vod_body_pane_g1

0xa315,	// (0x00087244) scroll_pane_cp24_ParamLimits

0xa315,	// (0x00087244) scroll_pane_cp24

0xa363,	// (0x00087292) vod_btn_pane_ParamLimits

0xa363,	// (0x00087292) vod_btn_pane

0xa3a9,	// (0x000872d8) vod_det_pane_ParamLimits

0xa3a9,	// (0x000872d8) vod_det_pane

0xa3dd,	// (0x0008730c) vod_logo_g1_ParamLimits

0xa3dd,	// (0x0008730c) vod_logo_g1

0xa41b,	// (0x0008734a) vod_opt_pane_ParamLimits

0xa41b,	// (0x0008734a) vod_opt_pane

0xa44e,	// (0x0008737d) vod_opt_pane_cp01_ParamLimits

0xa44e,	// (0x0008737d) vod_opt_pane_cp01

0xa47a,	// (0x000873a9) vod_query_pane_ParamLimits

0xa47a,	// (0x000873a9) vod_query_pane

0xa4a5,	// (0x000873d4) vod_query_pane_cp01_ParamLimits

0xa4a5,	// (0x000873d4) vod_query_pane_cp01

0xa4b1,	// (0x000873e0) vod_t_nml_pane_ParamLimits

0xa4b1,	// (0x000873e0) vod_t_nml_pane

0xa562,	// (0x00087491) vod_t_nml_pane_cp01_ParamLimits

0xa562,	// (0x00087491) vod_t_nml_pane_cp01

0xa59e,	// (0x000874cd) vod_t_sub_pane_ParamLimits

0xa59e,	// (0x000874cd) vod_t_sub_pane

0xa5cf,	// (0x000874fe) vod_t_sub_pane_cp01_ParamLimits

0xa5cf,	// (0x000874fe) vod_t_sub_pane_cp01

0xdff7,	// (0x0008af26) vod_query_field_pane

0xe046,	// (0x0008af75) vod_query_pane_t1

0xe055,	// (0x0008af84) bg_button_pane_cp25

0xde6a,	// (0x0008ad99) sso_btn_pane_t1_copy2

0xa5fb,	// (0x0008752a) vod_t_nml_pane_t1_ParamLimits

0xa5fb,	// (0x0008752a) vod_t_nml_pane_t1

0xe05e,	// (0x0008af8d) vod_opt_row_pane_ParamLimits

0xe05e,	// (0x0008af8d) vod_opt_row_pane

0xe070,	// (0x0008af9f) vod_t_sub_pane_t1_ParamLimits

0xe070,	// (0x0008af9f) vod_t_sub_pane_t1

0xe089,	// (0x0008afb8) vod_det_cell_pane_ParamLimits

0xe089,	// (0x0008afb8) vod_det_cell_pane

0xe26e,	// (0x0008b19d) input_focus_pane_cp15

0xe09a,	// (0x0008afc9) vod_query_field_pane_t1

0xe0a8,	// (0x0008afd7) vod_opt_row_pane_g1_ParamLimits

0xe0a8,	// (0x0008afd7) vod_opt_row_pane_g1

0xe0b4,	// (0x0008afe3) vod_opt_row_pane_t1_ParamLimits

0xe0b4,	// (0x0008afe3) vod_opt_row_pane_t1

0xe0d6,	// (0x0008b005) vod_det_cell_field_pane

0xe0df,	// (0x0008b00e) vod_det_cell_pane_g1

0xe0e7,	// (0x0008b016) vod_det_cell_pane_t1

0xe26e,	// (0x0008b19d) input_focus_pane_cp16

0xe0f6,	// (0x0008b025) vod_det_cell_field_pane_t1

0x8ca3,	// (0x00085bd2) call7_btn_grp_pane_ParamLimits

0x8ca3,	// (0x00085bd2) call7_btn_grp_pane

0xed10,	// (0x0008bc3f) call7_bubble_pane_ParamLimits

0xed10,	// (0x0008bc3f) call7_bubble_pane

0xa630,	// (0x0008755f) cell_call7_btn_pane_ParamLimits

0xa630,	// (0x0008755f) cell_call7_btn_pane

0xa644,	// (0x00087573) call7_pane_g1_ParamLimits

0xa644,	// (0x00087573) call7_pane_g1

0xa656,	// (0x00087585) call7_windows_conf_pane_ParamLimits

0xa656,	// (0x00087585) call7_windows_conf_pane

0xa674,	// (0x000875a3) popup_call7_1st_window_ParamLimits

0xa674,	// (0x000875a3) popup_call7_1st_window

0xa686,	// (0x000875b5) popup_call7_2nd_window_ParamLimits

0xa686,	// (0x000875b5) popup_call7_2nd_window

0xa698,	// (0x000875c7) popup_call7_3rd_window_ParamLimits

0xa698,	// (0x000875c7) popup_call7_3rd_window

0xe26e,	// (0x0008b19d) bg_button_pane_cp26

0x8d80,	// (0x00085caf) cell_call7_btn_pane_g1

0xdce5,	// (0x0008ac14) cell_call7_btn_pane_t1

0xe26e,	// (0x0008b19d) bg_popup_window_pane_cp12

0xe104,	// (0x0008b033) popup_call7_1st_window_g1

0xe10c,	// (0x0008b03b) popup_call7_1st_window_g2

0xe114,	// (0x0008b043) popup_call7_1st_window_g3

0x0002,

0xfe32,	// (0x0008cd61) popup_call7_1st_window_g

0xe11c,	// (0x0008b04b) popup_call7_1st_window_t1

0xe12b,	// (0x0008b05a) popup_call7_1st_window_t2

0xe13b,	// (0x0008b06a) popup_call7_1st_window_t3

0x0002,

0xfe39,	// (0x0008cd68) popup_call7_1st_window_t

0xe26e,	// (0x0008b19d) bg_popup_window_pane_cp13

0xe14b,	// (0x0008b07a) popup_call7_2nd_window_g1

0xe153,	// (0x0008b082) popup_call7_2nd_window_g2

0xe15b,	// (0x0008b08a) popup_call7_2nd_window_g3

0x0002,

0xfe40,	// (0x0008cd6f) popup_call7_2nd_window_g

0xe163,	// (0x0008b092) popup_call7_2nd_window_t1

0xe26e,	// (0x0008b19d) bg_popup_window_pane_cp14

0xe172,	// (0x0008b0a1) call7_list_conf_pane

0xe17a,	// (0x0008b0a9) call7_list_conf_row_pane_ParamLimits

0xe17a,	// (0x0008b0a9) call7_list_conf_row_pane

0xe18d,	// (0x0008b0bc) call7_list_conf_row_pane_g1

0xe195,	// (0x0008b0c4) call7_list_conf_row_pane_g2

0x0001,

0xfe47,	// (0x0008cd76) call7_list_conf_row_pane_g

0xe19d,	// (0x0008b0cc) call7_list_conf_row_pane_t1

0xe26e,	// (0x0008b19d) list_highlight_pane_cp22

0x9c0d,	// (0x00086b3c) sso_option_pane_cp01_ParamLimits

0x9c0d,	// (0x00086b3c) sso_option_pane_cp01

0xa9a7,	// (0x000878d6) msg_header_pane_ParamLimits

0xb81e,	// (0x0008874d) bg_button_pane_cp01_ParamLimits

0xb832,	// (0x00088761) input_focus_pane_cp07_ParamLimits

0x7e90,	// (0x00084dbf) popup_email_progress_window

0xaa68,	// (0x00087997) popup_email_progress_window_g1

0xe1ab,	// (0x0008b0da) popup_email_progress_window_g2

0x0001,

0xfe4c,	// (0x0008cd7b) popup_email_progress_window_g

0xe1b3,	// (0x0008b0e2) popup_email_progress_window_t1

0xe26e,	// (0x0008b19d) cmail_conv_pane

0xdab3,	// (0x0008a9e2) list_single_dyc_row_pane_g5_ParamLimits

0xdab3,	// (0x0008a9e2) list_single_dyc_row_pane_g5

0xdabf,	// (0x0008a9ee) list_single_dyc_row_pane_g6_ParamLimits

0xdabf,	// (0x0008a9ee) list_single_dyc_row_pane_g6

0xdad7,	// (0x0008aa06) list_single_dyc_row_pane_g7_ParamLimits

0xdad7,	// (0x0008aa06) list_single_dyc_row_pane_g7

0x9414,	// (0x00086343) main_button_pane_5_ParamLimits

0x9414,	// (0x00086343) main_button_pane_5

0x9a3c,	// (0x0008696b) sso_emg_call_btn_pane_ParamLimits

0x9a3c,	// (0x0008696b) sso_emg_call_btn_pane

0x9da1,	// (0x00086cd0) sso_t_sub_pane_cp01_ParamLimits

0x9da1,	// (0x00086cd0) sso_t_sub_pane_cp01

0xdf42,	// (0x0008ae71) sso_option_row_pane_g1_ParamLimits

0xdf4e,	// (0x0008ae7d) sso_option_row_pane_g2_ParamLimits

0xdf4e,	// (0x0008ae7d) sso_option_row_pane_g2

0x0001,

0xfe21,	// (0x0008cd50) sso_option_row_pane_g_ParamLimits

0xfe21,	// (0x0008cd50) sso_option_row_pane_g

0x9f4b,	// (0x00086e7a) att_btn_pane_cp02_ParamLimits

0x9f4b,	// (0x00086e7a) att_btn_pane_cp02

0xe1c1,	// (0x0008b0f0) cmail_conv_hdr_pane

0xe1ca,	// (0x0008b0f9) list_cmail_conv_pane

0xe1d4,	// (0x0008b103) scroll_pane_cp31

0xe1dc,	// (0x0008b10b) cmail_conv_hdr_pane_t1

0xe1ea,	// (0x0008b119) cmail_conv_hdr_pane_t2

0x0001,

0xfe51,	// (0x0008cd80) cmail_conv_hdr_pane_t

0xe1f8,	// (0x0008b127) bubble_cmail_conv_pane_ParamLimits

0xe1f8,	// (0x0008b127) bubble_cmail_conv_pane

0x82ec,	// (0x0008521b) aid_size_colorization_pane

0xad01,	// (0x00087c30) bg_bubble_cmail_conv_pane

0xe214,	// (0x0008b143) body_bubble_cmail_conv_pane

0xb22f,	// (0x0008815e) bubble_cmail_conv_pane_g1

0xb237,	// (0x00088166) bubble_cmail_conv_pane_g2

0xb23f,	// (0x0008816e) bubble_cmail_conv_pane_g3

0x0002,

0xf24d,	// (0x0008c17c) bubble_cmail_conv_pane_g

0xe21c,	// (0x0008b14b) bubble_cmail_conv_pane_t1

0xe22a,	// (0x0008b159) bg_bubble_cmail_conv_pane_g1

0xe233,	// (0x0008b162) bg_bubble_cmail_conv_pane_g2

0xe23c,	// (0x0008b16b) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe56,	// (0x0008cd85) bg_bubble_cmail_conv_pane_g

0xe245,	// (0x0008b174) body_bubble_cmail_conv_pane_t1_ParamLimits

0xe245,	// (0x0008b174) body_bubble_cmail_conv_pane_t1

0xe25c,	// (0x0008b18b) body_bubble_cmail_conv_pane_t2_ParamLimits

0xe25c,	// (0x0008b18b) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe5d,	// (0x0008cd8c) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe5d,	// (0x0008cd8c) body_bubble_cmail_conv_pane_t

0xed10,	// (0x0008bc3f) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
