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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001675f };

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
0x845d,	// (0x0001ebbc) Screen

0x8469,	// (0x0001ebc8) application_window

0x8475,	// (0x0001ebd4) area_bottom_pane_ParamLimits

0x8475,	// (0x0001ebd4) area_bottom_pane

0x6c96,	// (0x0001d3f5) area_top_pane_ParamLimits

0x6c96,	// (0x0001d3f5) area_top_pane

0x6cfa,	// (0x0001d459) call_video_uplink_pane_ParamLimits

0x6cfa,	// (0x0001d459) call_video_uplink_pane

0x6d39,	// (0x0001d498) main_pane_ParamLimits

0x6d39,	// (0x0001d498) main_pane

0x2d86,	// (0x000194e5) context_pane

0xaddd,	// (0x0002153c) navi_pane

0xae06,	// (0x00021565) popup_cale_events_window_ParamLimits

0xae06,	// (0x00021565) popup_cale_events_window

0x2d99,	// (0x000194f8) popup_mup_playback_window

0xae1e,	// (0x0002157d) signal_pane

0x0d41,	// (0x000174a0) main_browser_pane

0x0f54,	// (0x000176b3) main_burst_pane

0x7358,	// (0x0001dab7) main_calc_pane

0x2d22,	// (0x00019481) main_cale_day_pane

0x7365,	// (0x0001dac4) main_cale_month_pane

0x2d22,	// (0x00019481) main_cale_week_pane

0x0f54,	// (0x000176b3) main_call_pane

0x09d7,	// (0x00017136) main_call_poc_pane

0x0f54,	// (0x000176b3) main_camera_pane

0x0f54,	// (0x000176b3) main_chi_dic_pane

0x17e9,	// (0x00017f48) main_clock_pane

0x09d7,	// (0x00017136) main_fmradio_pane

0x0f54,	// (0x000176b3) main_graph_messa_pane

0x09d7,	// (0x00017136) main_help_pane

0x0d41,	// (0x000174a0) main_im_pane

0x0c32,	// (0x00017391) main_image_pane_ParamLimits

0x0c32,	// (0x00017391) main_image_pane

0x09d7,	// (0x00017136) main_location2_pane

0x0f54,	// (0x000176b3) main_location_pane

0x0c32,	// (0x00017391) main_messa_pane

0x09d7,	// (0x00017136) main_mp2_pane

0x0f54,	// (0x000176b3) main_mp_pane

0x09d7,	// (0x00017136) main_msg_pane

0x09d7,	// (0x00017136) main_mup_eq_pane

0x09d7,	// (0x00017136) main_mup_pane

0x0d41,	// (0x000174a0) main_notes_pane

0x09d7,	// (0x00017136) main_pec_pane

0x09d7,	// (0x00017136) main_phob_pane

0x09d7,	// (0x00017136) main_pinb_pane

0x09d7,	// (0x00017136) main_postcard_pane

0x09d7,	// (0x00017136) main_qdial_pane

0x0f54,	// (0x000176b3) main_skin_pane

0x09d7,	// (0x00017136) main_smil2_pane

0x0f54,	// (0x000176b3) main_smil_pane

0x0f54,	// (0x000176b3) main_video_pane

0x0f54,	// (0x000176b3) main_video_tele_pane

0x0c32,	// (0x00017391) main_viewer_pane_ParamLimits

0x0c32,	// (0x00017391) main_viewer_pane

0x0f54,	// (0x000176b3) main_vorec_pane

0x73c4,	// (0x0001db23) popup_blid_sat_info_window_ParamLimits

0x73c4,	// (0x0001db23) popup_blid_sat_info_window

0x73ea,	// (0x0001db49) popup_dyc_status_message_window_ParamLimits

0x73ea,	// (0x0001db49) popup_dyc_status_message_window

0x73fa,	// (0x0001db59) popup_grid_large_graphic_window_ParamLimits

0x73fa,	// (0x0001db59) popup_grid_large_graphic_window

0x748f,	// (0x0001dbee) popup_loc_request_window_ParamLimits

0x748f,	// (0x0001dbee) popup_loc_request_window

0x74e8,	// (0x0001dc47) popup_wml_address_window_ParamLimits

0x74e8,	// (0x0001dc47) popup_wml_address_window

0xacbf,	// (0x0002141e) call_muted_g1

0xa937,	// (0x00021096) popup_call_audio_conf_window_ParamLimits

0xa937,	// (0x00021096) popup_call_audio_conf_window

0xaccf,	// (0x0002142e) popup_call_audio_first_window_ParamLimits

0xaccf,	// (0x0002142e) popup_call_audio_first_window

0xad0f,	// (0x0002146e) popup_call_audio_in_window_ParamLimits

0xad0f,	// (0x0002146e) popup_call_audio_in_window

0xad33,	// (0x00021492) popup_call_audio_out_window_ParamLimits

0xad33,	// (0x00021492) popup_call_audio_out_window

0xad55,	// (0x000214b4) popup_call_audio_second_window_ParamLimits

0xad55,	// (0x000214b4) popup_call_audio_second_window

0xad85,	// (0x000214e4) popup_call_audio_wait_window_ParamLimits

0xad85,	// (0x000214e4) popup_call_audio_wait_window

0xada6,	// (0x00021505) popup_number_entry_window_ParamLimits

0xada6,	// (0x00021505) popup_number_entry_window

0x058f,	// (0x00016cee) bg_popup_call_pane_cp05_ParamLimits

0x058f,	// (0x00016cee) bg_popup_call_pane_cp05

0x05af,	// (0x00016d0e) popup_number_entry_window_t1

0x05c2,	// (0x00016d21) popup_number_entry_window_t2

0x05d4,	// (0x00016d33) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x000257e4) popup_number_entry_window_t

0x061b,	// (0x00016d7a) text_title_cp2

0x062e,	// (0x00016d8d) bg_popup_call_pane_cp_ParamLimits

0x062e,	// (0x00016d8d) bg_popup_call_pane_cp

0x063c,	// (0x00016d9b) call_thumbnail_pane

0x0644,	// (0x00016da3) popup_call_audio_in_window_g1_ParamLimits

0x0644,	// (0x00016da3) popup_call_audio_in_window_g1

0x0650,	// (0x00016daf) popup_call_audio_in_window_g2_ParamLimits

0x0650,	// (0x00016daf) popup_call_audio_in_window_g2

0x065c,	// (0x00016dbb) popup_call_audio_in_window_g3_ParamLimits

0x065c,	// (0x00016dbb) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x000257ed) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x000257ed) popup_call_audio_in_window_g

0x0668,	// (0x00016dc7) popup_call_audio_in_window_t1_ParamLimits

0x0668,	// (0x00016dc7) popup_call_audio_in_window_t1

0x0684,	// (0x00016de3) popup_call_audio_in_window_t2_ParamLimits

0x0684,	// (0x00016de3) popup_call_audio_in_window_t2

0x06a0,	// (0x00016dff) popup_call_audio_in_window_t3_ParamLimits

0x06a0,	// (0x00016dff) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x000257f4) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x000257f4) popup_call_audio_in_window_t

0x062e,	// (0x00016d8d) bg_popup_call_pane_cp01_ParamLimits

0x062e,	// (0x00016d8d) bg_popup_call_pane_cp01

0x063c,	// (0x00016d9b) call_thumbnail_pane_cp02

0x06b3,	// (0x00016e12) call_type_pane_cp022

0x06bb,	// (0x00016e1a) popup_call_audio_out_window_g1_ParamLimits

0x06bb,	// (0x00016e1a) popup_call_audio_out_window_g1

0x06cd,	// (0x00016e2c) popup_call_audio_out_window_g2_ParamLimits

0x06cd,	// (0x00016e2c) popup_call_audio_out_window_g2

0x06d9,	// (0x00016e38) popup_call_audio_out_window_g3_ParamLimits

0x06d9,	// (0x00016e38) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x000257fb) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x000257fb) popup_call_audio_out_window_g

0x06eb,	// (0x00016e4a) popup_call_audio_out_window_t1_ParamLimits

0x06eb,	// (0x00016e4a) popup_call_audio_out_window_t1

0x0703,	// (0x00016e62) popup_call_audio_out_window_t2_ParamLimits

0x0703,	// (0x00016e62) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00025802) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00025802) popup_call_audio_out_window_t

0x0718,	// (0x00016e77) bg_popup_call_pane_ParamLimits

0x0718,	// (0x00016e77) bg_popup_call_pane

0x84b6,	// (0x0001ec15) call_thumbnail_pane_cp_ParamLimits

0x84b6,	// (0x0001ec15) call_thumbnail_pane_cp

0x079c,	// (0x00016efb) call_type_pane_cp01_ParamLimits

0x079c,	// (0x00016efb) call_type_pane_cp01

0x07e0,	// (0x00016f3f) popup_call_audio_first_window_g1_ParamLimits

0x07e0,	// (0x00016f3f) popup_call_audio_first_window_g1

0x082c,	// (0x00016f8b) popup_call_audio_first_window_g2_ParamLimits

0x082c,	// (0x00016f8b) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00025807) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00025807) popup_call_audio_first_window_g

0x0870,	// (0x00016fcf) popup_call_audio_first_window_t1_ParamLimits

0x0870,	// (0x00016fcf) popup_call_audio_first_window_t1

0x091c,	// (0x0001707b) popup_call_audio_first_window_t4_ParamLimits

0x091c,	// (0x0001707b) popup_call_audio_first_window_t4

0x09a8,	// (0x00017107) popup_call_audio_first_window_t5_ParamLimits

0x09a8,	// (0x00017107) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0002580c) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0002580c) popup_call_audio_first_window_t

0x09d7,	// (0x00017136) bg_popup_call_pane_cp02

0x09e1,	// (0x00017140) call_type_pane_cp023

0x09e9,	// (0x00017148) popup_call_audio_wait_window_g1

0x09f1,	// (0x00017150) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00025813) popup_call_audio_wait_window_g

0x09f9,	// (0x00017158) popup_call_audio_wait_window_t3

0x0a07,	// (0x00017166) bg_popup_call_pane_cp03_ParamLimits

0x0a07,	// (0x00017166) bg_popup_call_pane_cp03

0x0a67,	// (0x000171c6) call_thumbnail_pane_cp011_ParamLimits

0x0a67,	// (0x000171c6) call_thumbnail_pane_cp011

0x0a73,	// (0x000171d2) call_type_pane_cp034_ParamLimits

0x0a73,	// (0x000171d2) call_type_pane_cp034

0x0aaf,	// (0x0001720e) popup_call_audio_second_window_g1_ParamLimits

0x0aaf,	// (0x0001720e) popup_call_audio_second_window_g1

0x0aeb,	// (0x0001724a) popup_call_audio_second_window_g2_ParamLimits

0x0aeb,	// (0x0001724a) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00025818) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00025818) popup_call_audio_second_window_g

0x0b27,	// (0x00017286) popup_call_audio_second_window_t1_ParamLimits

0x0b27,	// (0x00017286) popup_call_audio_second_window_t1

0x0ba8,	// (0x00017307) popup_call_audio_second_window_t2_ParamLimits

0x0ba8,	// (0x00017307) popup_call_audio_second_window_t2

0x0bde,	// (0x0001733d) popup_call_audio_second_window_t3_ParamLimits

0x0bde,	// (0x0001733d) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0002581d) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0002581d) popup_call_audio_second_window_t

0x09d7,	// (0x00017136) bg_popup_call_pane_cp04

0x0c14,	// (0x00017373) list_conf_pane

0x0c1c,	// (0x0001737b) popup_call_audio_conf_window_t1

0x0c2a,	// (0x00017389) call_thumbnail_pane_g1

0x0c32,	// (0x00017391) bg_pinb_pane_ParamLimits

0x0c32,	// (0x00017391) bg_pinb_pane

0x0c40,	// (0x0001739f) find_pinb_pane

0x0c32,	// (0x00017391) listscroll_pinb_pane_ParamLimits

0x0c32,	// (0x00017391) listscroll_pinb_pane

0x0c4a,	// (0x000173a9) pinb_bg_pane_g1

0x0c4a,	// (0x000173a9) pinb_bg_pane_g2

0x0c4a,	// (0x000173a9) pinb_bg_pane_g3

0x0c4a,	// (0x000173a9) pinb_bg_pane_g4

0x0c4a,	// (0x000173a9) pinb_bg_pane_g5

0x0c4a,	// (0x000173a9) pinb_bg_pane_g6

0x0c4a,	// (0x000173a9) pinb_bg_pane_g7

0x0c4a,	// (0x000173a9) pinb_bg_pane_g8

0x0c4a,	// (0x000173a9) pinb_bg_pane_g9

0x0c4a,	// (0x000173a9) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00025824) pinb_bg_pane_g

0x050c,	// (0x00016c6b) grid_pinb_pane

0x050c,	// (0x00016c6b) list_pinb_pane

0x0581,	// (0x00016ce0) scroll_pane_cp01_ParamLimits

0x0581,	// (0x00016ce0) scroll_pane_cp01

0x0c54,	// (0x000173b3) find_pinb_pane_g1_ParamLimits

0x0c54,	// (0x000173b3) find_pinb_pane_g1

0x0c6c,	// (0x000173cb) find_pinb_pane_t1

0x0c7e,	// (0x000173dd) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0002583e) find_pinb_pane_t

0x0c93,	// (0x000173f2) input_focus_pane_cp01_ParamLimits

0x0c93,	// (0x000173f2) input_focus_pane_cp01

0x0c9f,	// (0x000173fe) cell_pinb_pane_ParamLimits

0x0c9f,	// (0x000173fe) cell_pinb_pane

0x0cad,	// (0x0001740c) cell_pinb_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) cell_pinb_pane_g1

0x0cbb,	// (0x0001741a) cell_pinb_pane_g2_ParamLimits

0x0cbb,	// (0x0001741a) cell_pinb_pane_g2

0x0cbb,	// (0x0001741a) cell_pinb_pane_g3_ParamLimits

0x0cbb,	// (0x0001741a) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00025843) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00025843) cell_pinb_pane_g

0x09d7,	// (0x00017136) grid_highlight_pane_cp01

0x0c9f,	// (0x000173fe) list_pinb_item_pane_ParamLimits

0x0c9f,	// (0x000173fe) list_pinb_item_pane

0x050c,	// (0x00016c6b) list_highlight_pane_cp02

0x0cc9,	// (0x00017428) list_pinb_item_pane_g1_ParamLimits

0x0cc9,	// (0x00017428) list_pinb_item_pane_g1

0x0cbb,	// (0x0001741a) list_pinb_item_pane_g2_ParamLimits

0x0cbb,	// (0x0001741a) list_pinb_item_pane_g2

0x0cad,	// (0x0001740c) list_pinb_item_pane_g3_ParamLimits

0x0cad,	// (0x0001740c) list_pinb_item_pane_g3

0x0cbb,	// (0x0001741a) list_pinb_item_pane_g4_ParamLimits

0x0cbb,	// (0x0001741a) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0002584a) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0002584a) list_pinb_item_pane_g

0x0cd7,	// (0x00017436) list_pinb_item_pane_t1_ParamLimits

0x0cd7,	// (0x00017436) list_pinb_item_pane_t1

0x6f28,	// (0x0001d687) calc_display_pane

0x6f46,	// (0x0001d6a5) calc_paper_pane

0x6f62,	// (0x0001d6c1) grid_calc_pane

0x09d7,	// (0x00017136) bg_list_pane_cp01

0x84da,	// (0x0001ec39) clock_g1

0x84e2,	// (0x0001ec41) clock_g2

0x0001,

0xf0f4,	// (0x00025853) clock_g

0x84ec,	// (0x0001ec4b) clock_t1_ParamLimits

0x84ec,	// (0x0001ec4b) clock_t1

0x8501,	// (0x0001ec60) clock_t2_ParamLimits

0x8501,	// (0x0001ec60) clock_t2

0x8513,	// (0x0001ec72) clock_t3_ParamLimits

0x8513,	// (0x0001ec72) clock_t3

0x8525,	// (0x0001ec84) clock_t4_ParamLimits

0x8525,	// (0x0001ec84) clock_t4

0x8537,	// (0x0001ec96) clock_t5_ParamLimits

0x8537,	// (0x0001ec96) clock_t5

0x854c,	// (0x0001ecab) clock_t6_ParamLimits

0x854c,	// (0x0001ecab) clock_t6

0x855e,	// (0x0001ecbd) clock_t7_ParamLimits

0x855e,	// (0x0001ecbd) clock_t7

0x8570,	// (0x0001eccf) clock_t8_ParamLimits

0x8570,	// (0x0001eccf) clock_t8

0x8586,	// (0x0001ece5) clock_t9_ParamLimits

0x8586,	// (0x0001ece5) clock_t9

0x0008,

0xf0f9,	// (0x00025858) clock_t_ParamLimits

0xf0f9,	// (0x00025858) clock_t

0x0cf3,	// (0x00017452) popup_clock_analogue_window_cp02

0x0cf3,	// (0x00017452) popup_clock_digital_window_cp01

0x09d7,	// (0x00017136) listscroll_help_pane

0x09d7,	// (0x00017136) phob_pre_status_pane

0x0cfb,	// (0x0001745a) grid_qdial_pane

0x0c32,	// (0x00017391) listscroll_mce_pane

0x0c32,	// (0x00017391) bg_notes_pane

0x0d05,	// (0x00017464) list_notes_pane

0x859c,	// (0x0001ecfb) scroll_pane_cp06

0x0d13,	// (0x00017472) bg_calc_paper_pane

0x6f8e,	// (0x0001d6ed) list_calc_pane

0x0d41,	// (0x000174a0) bg_calc_display_pane

0x6fa8,	// (0x0001d707) calc_display_pane_t1

0x6fbd,	// (0x0001d71c) calc_display_pane_t2

0x6fd2,	// (0x0001d731) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0002586b) calc_display_pane_t

0x6fe4,	// (0x0001d743) cell_calc_pane_ParamLimits

0x6fe4,	// (0x0001d743) cell_calc_pane

0x0d5f,	// (0x000174be) bg_calc_paper_pane_g1

0x0d77,	// (0x000174d6) bg_calc_paper_pane_g2

0x0d6b,	// (0x000174ca) bg_calc_paper_pane_g3

0x0d8f,	// (0x000174ee) bg_calc_paper_pane_g4

0x0d83,	// (0x000174e2) bg_calc_paper_pane_g5

0x85ab,	// (0x0001ed0a) bg_calc_paper_pane_g6

0x85bc,	// (0x0001ed1b) bg_calc_paper_pane_g7

0x85cd,	// (0x0001ed2c) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00025872) bg_calc_paper_pane_g

0x85de,	// (0x0001ed3d) calc_bg_paper_pane_g9

0x85ef,	// (0x0001ed4e) list_calc_item_pane_ParamLimits

0x85ef,	// (0x0001ed4e) list_calc_item_pane

0x0d9b,	// (0x000174fa) list_calc_item_pane_g1

0x7013,	// (0x0001d772) list_calc_item_pane_t1_ParamLimits

0x7013,	// (0x0001d772) list_calc_item_pane_t1

0x7025,	// (0x0001d784) list_calc_item_pane_t2_ParamLimits

0x7025,	// (0x0001d784) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00025883) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00025883) list_calc_item_pane_t

0x0c4a,	// (0x000173a9) cell_calc_pane_g1

0x0dba,	// (0x00017519) grid_highlight_pane_cp02

0x3cf4,	// (0x0001a453) bg_calc_display_pane_g1

0x7055,	// (0x0001d7b4) bg_calc_display_pane_g2

0x3ceb,	// (0x0001a44a) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0002588d) bg_calc_display_pane_g

0x705f,	// (0x0001d7be) cell_qdial_pane_ParamLimits

0x705f,	// (0x0001d7be) cell_qdial_pane

0x8610,	// (0x0001ed6f) cell_qdial_pane_g1_ParamLimits

0x8610,	// (0x0001ed6f) cell_qdial_pane_g1

0x861d,	// (0x0001ed7c) cell_qdial_pane_g2_ParamLimits

0x861d,	// (0x0001ed7c) cell_qdial_pane_g2

0x0de5,	// (0x00017544) cell_qdial_pane_g3_ParamLimits

0x0de5,	// (0x00017544) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00025894) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00025894) cell_qdial_pane_g

0x863b,	// (0x0001ed9a) cell_qdial_pane_t1_ParamLimits

0x863b,	// (0x0001ed9a) cell_qdial_pane_t1

0x8653,	// (0x0001edb2) cell_qdial_pane_t2_ParamLimits

0x8653,	// (0x0001edb2) cell_qdial_pane_t2

0x8666,	// (0x0001edc5) cell_qdial_pane_t3_ParamLimits

0x8666,	// (0x0001edc5) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0002589d) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0002589d) cell_qdial_pane_t

0x09d7,	// (0x00017136) grid_highlight_pane_cp04

0x0df1,	// (0x00017550) thumbnail_qdial_pane_ParamLimits

0x0df1,	// (0x00017550) thumbnail_qdial_pane

0x0e4d,	// (0x000175ac) list_help_pane

0x0e56,	// (0x000175b5) scroll_pane_cp02

0x8679,	// (0x0001edd8) help_list_pane_t1_ParamLimits

0x8679,	// (0x0001edd8) help_list_pane_t1

0x7075,	// (0x0001d7d4) bg_notes_pane_g2

0x707d,	// (0x0001d7dc) bg_notes_pane_g3

0x7085,	// (0x0001d7e4) notes_bg_pane_g1

0x708d,	// (0x0001d7ec) notes_bg_pane_g4

0x7095,	// (0x0001d7f4) notes_bg_pane_g5

0x709d,	// (0x0001d7fc) notes_bg_pane_g6

0x70a5,	// (0x0001d804) notes_bg_pane_g7

0x70ad,	// (0x0001d80c) notes_bg_pane_g8

0x70b5,	// (0x0001d814) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x000258bb) notes_bg_pane_g

0x86a0,	// (0x0001edff) list_notes_text_pane_ParamLimits

0x86a0,	// (0x0001edff) list_notes_text_pane

0x0ea7,	// (0x00017606) list_notes_text_pane_g1

0x86c8,	// (0x0001ee27) list_notes_text_pane_t1

0x86d6,	// (0x0001ee35) listscroll_cale_week_pane

0x8702,	// (0x0001ee61) bg_cale_heading_pane

0x872b,	// (0x0001ee8a) bg_cale_pane_cp01

0x874d,	// (0x0001eeac) cale_week_corner_pane

0x876c,	// (0x0001eecb) cale_week_day_heading_pane

0x879a,	// (0x0001eef9) cale_week_scroll_pane_g1

0x87be,	// (0x0001ef1d) cale_week_scroll_pane_g2

0x87d6,	// (0x0001ef35) cale_week_scroll_pane_g3

0x87ee,	// (0x0001ef4d) cale_week_scroll_pane_g4

0x8806,	// (0x0001ef65) cale_week_scroll_pane_g5

0x881e,	// (0x0001ef7d) cale_week_scroll_pane_g6

0x883e,	// (0x0001ef9d) cale_week_scroll_pane_g7

0x885e,	// (0x0001efbd) cale_week_scroll_pane_g8

0x887e,	// (0x0001efdd) cale_week_scroll_pane_g9

0x889b,	// (0x0001effa) cale_week_scroll_pane_g10

0x88b8,	// (0x0001f017) cale_week_scroll_pane_g11

0x88d7,	// (0x0001f036) cale_week_scroll_pane_g12

0x88fc,	// (0x0001f05b) cale_week_scroll_pane_g13

0x8925,	// (0x0001f084) cale_week_scroll_pane_g14

0x894e,	// (0x0001f0ad) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x000258ca) cale_week_scroll_pane_g

0x8997,	// (0x0001f0f6) cale_week_time_pane

0x89b7,	// (0x0001f116) grid_cale_week_pane

0x0edc,	// (0x0001763b) scroll_pane_cp08

0x89e8,	// (0x0001f147) cell_cale_week_pane_ParamLimits

0x89e8,	// (0x0001f147) cell_cale_week_pane

0x8a78,	// (0x0001f1d7) cale_week_day_heading_pane_t1

0x8aa0,	// (0x0001f1ff) cale_week_day_heading_pane_t2

0x8acd,	// (0x0001f22c) cale_week_day_heading_pane_t3

0x8afa,	// (0x0001f259) cale_week_day_heading_pane_t4

0x8b27,	// (0x0001f286) cale_week_day_heading_pane_t5

0x8b54,	// (0x0001f2b3) cale_week_day_heading_pane_t6

0x8b81,	// (0x0001f2e0) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x000258eb) cale_week_day_heading_pane_t

0x0ef9,	// (0x00017658) bg_cale_side_pane

0x70bd,	// (0x0001d81c) cale_week_time_pane_t1

0x70e1,	// (0x0001d840) cale_week_time_pane_t2

0x7105,	// (0x0001d864) cale_week_time_pane_t3

0x7129,	// (0x0001d888) cale_week_time_pane_t4

0x714d,	// (0x0001d8ac) cale_week_time_pane_t5

0x7173,	// (0x0001d8d2) cale_week_time_pane_t6

0x719b,	// (0x0001d8fa) cale_week_time_pane_t7

0x71c7,	// (0x0001d926) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x000258fa) cale_week_time_pane_t

0x8ba9,	// (0x0001f308) cell_cale_week_pane_g2

0x8bcd,	// (0x0001f32c) cell_cale_week_pane_g3_ParamLimits

0x8bcd,	// (0x0001f32c) cell_cale_week_pane_g3

0x0f07,	// (0x00017666) grid_highlight_pane_cp07

0x0f0f,	// (0x0001766e) listscroll_gms_pane

0x0f19,	// (0x00017678) grid_gms_pane

0x0f22,	// (0x00017681) listscroll_gms_pane_g1

0x0f2a,	// (0x00017689) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0002590b) listscroll_gms_pane_g

0x8be5,	// (0x0001f344) scroll_pane_cp010

0x8bf0,	// (0x0001f34f) cell_gms_pane_ParamLimits

0x8bf0,	// (0x0001f34f) cell_gms_pane

0x8c03,	// (0x0001f362) cell_gms_pane_g1

0x0f32,	// (0x00017691) cell_gms_pane_g2

0x0f3a,	// (0x00017699) cell_gms_pane_g3

0x0f43,	// (0x000176a2) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00025910) cell_gms_pane_g

0x0f4c,	// (0x000176ab) grid_highlight_pane_cp09

0xac43,	// (0x000213a2) phob_pre_status_pane_g1

0xac4b,	// (0x000213aa) phob_pre_status_pane_g2

0xac53,	// (0x000213b2) phob_pre_status_pane_g3

0xac5b,	// (0x000213ba) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x00025cd9) phob_pre_status_pane_g

0xac6b,	// (0x000213ca) phob_pre_status_pane_t1

0xac7b,	// (0x000213da) phob_pre_status_pane_t2

0xac8b,	// (0x000213ea) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x00025ce4) phob_pre_status_pane_t

0x0f54,	// (0x000176b3) bg_list_pane_cp05

0x8c13,	// (0x0001f372) grid_vorec_pane

0x8c1d,	// (0x0001f37c) vorec_t1

0x8c2b,	// (0x0001f38a) vorec_t2

0x8c39,	// (0x0001f398) vorec_t3

0x8c47,	// (0x0001f3a6) vorec_t4

0x8437,	// (0x0001eb96) vorec_t5

0x8445,	// (0x0001eba4) vorec_t6

0x0004,

0xf1ba,	// (0x00025919) vorec_t

0x8453,	// (0x0001ebb2) wait_bar_pane_cp01

0x8c63,	// (0x0001f3c2) cell_vorec_pane_ParamLimits

0x8c63,	// (0x0001f3c2) cell_vorec_pane

0x71f7,	// (0x0001d956) cell_vorec_pane_g1

0x09d7,	// (0x00017136) grid_highlight_pane_cp05

0x0c9f,	// (0x000173fe) cams_zoom_pane

0x0c9f,	// (0x000173fe) image_vga_pane

0x0cbb,	// (0x0001741a) main_camera_pane_g1

0x0cbb,	// (0x0001741a) main_camera_pane_g2

0x0cbb,	// (0x0001741a) main_camera_pane_g3

0x0cbb,	// (0x0001741a) main_camera_pane_g4

0x0cbb,	// (0x0001741a) main_camera_pane_g5

0x0cbb,	// (0x0001741a) main_camera_pane_g6

0x0cbb,	// (0x0001741a) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00025924) main_camera_pane_g

0x1a32,	// (0x00018191) main_camera_pane_t1

0x1a32,	// (0x00018191) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00025935) main_camera_pane_t

0x8c78,	// (0x0001f3d7) cams_zoom_pane_cp_ParamLimits

0x8c78,	// (0x0001f3d7) cams_zoom_pane_cp

0x8ca6,	// (0x0001f405) image_cif_pane_ParamLimits

0x8ca6,	// (0x0001f405) image_cif_pane

0x050c,	// (0x00016c6b) image_subqcif_pane

0x8cb4,	// (0x0001f413) main_video_pane_g1_ParamLimits

0x8cb4,	// (0x0001f413) main_video_pane_g1

0x8cdc,	// (0x0001f43b) main_video_pane_g2_ParamLimits

0x8cdc,	// (0x0001f43b) main_video_pane_g2

0x8d0f,	// (0x0001f46e) main_video_pane_g3_ParamLimits

0x8d0f,	// (0x0001f46e) main_video_pane_g3

0x8d0f,	// (0x0001f46e) main_video_pane_g4_ParamLimits

0x8d0f,	// (0x0001f46e) main_video_pane_g4

0x8d3d,	// (0x0001f49c) main_video_pane_g5_ParamLimits

0x8d3d,	// (0x0001f49c) main_video_pane_g5

0x0f8f,	// (0x000176ee) main_video_pane_g6_ParamLimits

0x0f8f,	// (0x000176ee) main_video_pane_g6

0x0006,

0xf1db,	// (0x0002593a) main_video_pane_g_ParamLimits

0xf1db,	// (0x0002593a) main_video_pane_g

0x8d59,	// (0x0001f4b8) main_video_pane_t1_ParamLimits

0x8d59,	// (0x0001f4b8) main_video_pane_t1

0x0fa9,	// (0x00017708) cams_zoom_pane_g1

0x0fa9,	// (0x00017708) cams_zoom_pane_g2

0x0fa9,	// (0x00017708) cams_zoom_pane_g3

0x0fa9,	// (0x00017708) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00025949) cams_zoom_pane_g

0x8d9f,	// (0x0001f4fe) grid_cams_pane

0x8dad,	// (0x0001f50c) linegrid_cams_pane

0x8db9,	// (0x0001f518) cell_cams_pane_ParamLimits

0x8db9,	// (0x0001f518) cell_cams_pane

0x0fb3,	// (0x00017712) cams_burst_image_pane

0x0fbb,	// (0x0001771a) cell_cams_pane_g1

0x09d7,	// (0x00017136) grid_highlight_pane_cp03

0x0c4a,	// (0x000173a9) mp_bg_pane_g1

0x050c,	// (0x00016c6b) bg_list_pane_cp03

0x050c,	// (0x00016c6b) bg_mp_pane

0x050c,	// (0x00016c6b) grid_mp_pane

0x0fa9,	// (0x00017708) media_player_g1

0x150f,	// (0x00017c6e) media_player_t1

0x150f,	// (0x00017c6e) media_player_t2

0x150f,	// (0x00017c6e) media_player_t3

0x150f,	// (0x00017c6e) media_player_t4

0x150f,	// (0x00017c6e) media_player_t5

0x150f,	// (0x00017c6e) media_player_t6

0x150f,	// (0x00017c6e) media_player_t7

0x0006,

0xf564,	// (0x00025cc3) media_player_t

0x050c,	// (0x00016c6b) wait_bar_pane_cp02

0xf549,	// (0x00025ca8) main_usb_pane_t

0x17e9,	// (0x00017f48) cell_mp_pane

0x0c4a,	// (0x000173a9) cell_mp_pane_g1

0x09d7,	// (0x00017136) grid_highlight_pane_cp06

0x0fc3,	// (0x00017722) grid_skin_colour_pane

0x0fcb,	// (0x0001772a) list_highlight_pane_cp03

0x8dce,	// (0x0001f52d) skin_g1

0x0fd3,	// (0x00017732) skin_t1

0x0fe2,	// (0x00017741) skin_t2

0x0001,

0xf218,	// (0x00025977) skin_t

0x8dd8,	// (0x0001f537) cell_skin_colour_pane_ParamLimits

0x8dd8,	// (0x0001f537) cell_skin_colour_pane

0x0ff0,	// (0x0001774f) cell_skin_colour_pane_g1

0x8e58,	// (0x0001f5b7) call_video_g1_ParamLimits

0x8e58,	// (0x0001f5b7) call_video_g1

0x8e68,	// (0x0001f5c7) call_video_g2_ParamLimits

0x8e68,	// (0x0001f5c7) call_video_g2

0x0001,

0xf21d,	// (0x0002597c) call_video_g_ParamLimits

0xf21d,	// (0x0002597c) call_video_g

0x8eb8,	// (0x0001f617) call_video_uplink_pane_cp1_ParamLimits

0x8eb8,	// (0x0001f617) call_video_uplink_pane_cp1

0x1002,	// (0x00017761) call_video_uplink_pane_cp2

0x8f86,	// (0x0001f6e5) video_down_crop_pane_ParamLimits

0x8f86,	// (0x0001f6e5) video_down_crop_pane

0x9078,	// (0x0001f7d7) video_down_pane_ParamLimits

0x9078,	// (0x0001f7d7) video_down_pane

0x100a,	// (0x00017769) video_down_subqcif_pane_ParamLimits

0x100a,	// (0x00017769) video_down_subqcif_pane

0x1024,	// (0x00017783) video_down_subqcif_pane_cp_ParamLimits

0x1024,	// (0x00017783) video_down_subqcif_pane_cp

0x104c,	// (0x000177ab) im_reading_pane_ParamLimits

0x104c,	// (0x000177ab) im_reading_pane

0x9195,	// (0x0001f8f4) im_writing_pane_ParamLimits

0x9195,	// (0x0001f8f4) im_writing_pane

0x91b3,	// (0x0001f912) im_reading_pane_t1

0x1066,	// (0x000177c5) list_im_pane

0x1077,	// (0x000177d6) scroll_pane_cp07

0x91f5,	// (0x0001f954) im_writing_pane_t1_ParamLimits

0x91f5,	// (0x0001f954) im_writing_pane_t1

0x1090,	// (0x000177ef) im_writing_pane_t2_ParamLimits

0x1090,	// (0x000177ef) im_writing_pane_t2

0x0001,

0xf227,	// (0x00025986) im_writing_pane_t_ParamLimits

0xf227,	// (0x00025986) im_writing_pane_t

0x09d7,	// (0x00017136) input_focus_pane_cp04

0x09d7,	// (0x00017136) input_focus_pane_cp05

0x9207,	// (0x0001f966) list_im_single_pane_ParamLimits

0x9207,	// (0x0001f966) list_im_single_pane

0x9220,	// (0x0001f97f) list_single_im_pane_t1

0x0f54,	// (0x000176b3) blid_accuracy_pane

0x0f54,	// (0x000176b3) blid_compass_pane

0x2cda,	// (0x00019439) main_location_t1

0x2cda,	// (0x00019439) main_location_t2

0x2cda,	// (0x00019439) main_location_t3

0x0002,

0xf573,	// (0x00025cd2) main_location_t

0x09d7,	// (0x00017136) aid_levels_location

0x0c4a,	// (0x000173a9) blid_accuracy_pane_g1

0x0c4a,	// (0x000173a9) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x000259da) blid_accuracy_pane_g

0x10d8,	// (0x00017837) wml_content_pane

0x1116,	// (0x00017875) wml_button_pane_ParamLimits

0x1116,	// (0x00017875) wml_button_pane

0x922f,	// (0x0001f98e) wml_list_single_large_pane_ParamLimits

0x922f,	// (0x0001f98e) wml_list_single_large_pane

0x9251,	// (0x0001f9b0) wml_list_single_medium_pane_ParamLimits

0x9251,	// (0x0001f9b0) wml_list_single_medium_pane

0x9274,	// (0x0001f9d3) wml_list_single_small_pane_ParamLimits

0x9274,	// (0x0001f9d3) wml_list_single_small_pane

0x112a,	// (0x00017889) wml_selection_box_pane_ParamLimits

0x112a,	// (0x00017889) wml_selection_box_pane

0x113d,	// (0x0001789c) wml_list_single_pane_t1

0x114c,	// (0x000178ab) wml_list_single_medium_pane_t1

0x115b,	// (0x000178ba) wml_list_single_large_pane_t1

0x116a,	// (0x000178c9) input_focus_pane_cp02_ParamLimits

0x116a,	// (0x000178c9) input_focus_pane_cp02

0x117d,	// (0x000178dc) wml_selection_box_pane_g1

0x1186,	// (0x000178e5) wml_selection_box_pane_t1_ParamLimits

0x1186,	// (0x000178e5) wml_selection_box_pane_t1

0x0c32,	// (0x00017391) bg_wml_button_pane_ParamLimits

0x0c32,	// (0x00017391) bg_wml_button_pane

0x119e,	// (0x000178fd) wml_button_pane_g1

0x11a6,	// (0x00017905) wml_button_pane_t1

0x119e,	// (0x000178fd) wml_button_bg_pane_g1

0x11b6,	// (0x00017915) wml_button_bg_pane_g2

0x11be,	// (0x0001791d) wml_button_bg_pane_g3

0x11c6,	// (0x00017925) wml_button_bg_pane_g4

0x11ce,	// (0x0001792d) wml_button_bg_pane_g5

0x11d6,	// (0x00017935) wml_button_bg_pane_g6

0x11de,	// (0x0001793d) wml_button_bg_pane_g7

0x11e6,	// (0x00017945) wml_button_bg_pane_g8

0x11ee,	// (0x0001794d) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0002598b) wml_button_bg_pane_g

0x929c,	// (0x0001f9fb) bg_list_pane_cp02

0x11f6,	// (0x00017955) mce_header_pane_ParamLimits

0x11f6,	// (0x00017955) mce_header_pane

0x120c,	// (0x0001796b) mce_icon_pane

0x120c,	// (0x0001796b) mce_image_pane

0x1215,	// (0x00017974) mce_text_pane_ParamLimits

0x1215,	// (0x00017974) mce_text_pane

0x92a6,	// (0x0001fa05) scroll_pane_cp03

0x110e,	// (0x0001786d) scroll_pane_cp04

0x1228,	// (0x00017987) scroll_pane_cp05_ParamLimits

0x1228,	// (0x00017987) scroll_pane_cp05

0x92b0,	// (0x0001fa0f) mce_header_field_pane_ParamLimits

0x92b0,	// (0x0001fa0f) mce_header_field_pane

0x92d2,	// (0x0001fa31) mce_header_field_pane_2_ParamLimits

0x92d2,	// (0x0001fa31) mce_header_field_pane_2

0x92e8,	// (0x0001fa47) mce_header_field_pane_3

0x92f0,	// (0x0001fa4f) list_single_mce_message_pane_ParamLimits

0x92f0,	// (0x0001fa4f) list_single_mce_message_pane

0x930f,	// (0x0001fa6e) list_single_mce_smart_pane_ParamLimits

0x930f,	// (0x0001fa6e) list_single_mce_smart_pane

0x1234,	// (0x00017993) input_focus_pane_cp03

0x123d,	// (0x0001799c) list_header_data_pane

0x9339,	// (0x0001fa98) mce_header_field_pane_t1

0x9349,	// (0x0001faa8) list_single_mce_header_pane_ParamLimits

0x9349,	// (0x0001faa8) list_single_mce_header_pane

0x1245,	// (0x000179a4) list_single_mce_header_pane_t1

0x1254,	// (0x000179b3) list_single_mce_message_pane_g1

0x125c,	// (0x000179bb) list_single_mce_message_pane_t1

0x938d,	// (0x0001faec) bg_cale_heading_pane_cp01_ParamLimits

0x938d,	// (0x0001faec) bg_cale_heading_pane_cp01

0x126a,	// (0x000179c9) bg_cale_pane_cp02_ParamLimits

0x126a,	// (0x000179c9) bg_cale_pane_cp02

0x93df,	// (0x0001fb3e) cale_month_corner_pane

0x93fe,	// (0x0001fb5d) cale_month_day_heading_pane_ParamLimits

0x93fe,	// (0x0001fb5d) cale_month_day_heading_pane

0x9460,	// (0x0001fbbf) cale_month_pane_g1_ParamLimits

0x9460,	// (0x0001fbbf) cale_month_pane_g1

0x94a7,	// (0x0001fc06) cale_month_pane_g2_ParamLimits

0x94a7,	// (0x0001fc06) cale_month_pane_g2

0x94df,	// (0x0001fc3e) cale_month_pane_g3_ParamLimits

0x94df,	// (0x0001fc3e) cale_month_pane_g3

0x9533,	// (0x0001fc92) cale_month_pane_g4_ParamLimits

0x9533,	// (0x0001fc92) cale_month_pane_g4

0x9587,	// (0x0001fce6) cale_month_pane_g5_ParamLimits

0x9587,	// (0x0001fce6) cale_month_pane_g5

0x95db,	// (0x0001fd3a) cale_month_pane_g6_ParamLimits

0x95db,	// (0x0001fd3a) cale_month_pane_g6

0x963f,	// (0x0001fd9e) cale_month_pane_g7_ParamLimits

0x963f,	// (0x0001fd9e) cale_month_pane_g7

0x96a3,	// (0x0001fe02) cale_month_pane_g8_ParamLimits

0x96a3,	// (0x0001fe02) cale_month_pane_g8

0x9707,	// (0x0001fe66) cale_month_pane_g9_ParamLimits

0x9707,	// (0x0001fe66) cale_month_pane_g9

0x9761,	// (0x0001fec0) cale_month_pane_g10_ParamLimits

0x9761,	// (0x0001fec0) cale_month_pane_g10

0x97b3,	// (0x0001ff12) cale_month_pane_g11_ParamLimits

0x97b3,	// (0x0001ff12) cale_month_pane_g11

0x9801,	// (0x0001ff60) cale_month_pane_g12_ParamLimits

0x9801,	// (0x0001ff60) cale_month_pane_g12

0x9851,	// (0x0001ffb0) cale_month_pane_g13_ParamLimits

0x9851,	// (0x0001ffb0) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0002599e) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0002599e) cale_month_pane_g

0x98a1,	// (0x00020000) cale_month_week_pane

0x98c1,	// (0x00020020) grid_cale_month_pane_ParamLimits

0x98c1,	// (0x00020020) grid_cale_month_pane

0x991a,	// (0x00020079) cale_month_day_heading_pane_t1

0x999c,	// (0x000200fb) cale_month_day_heading_pane_t2

0x9a15,	// (0x00020174) cale_month_day_heading_pane_t3

0x9a8e,	// (0x000201ed) cale_month_day_heading_pane_t4

0x9b07,	// (0x00020266) cale_month_day_heading_pane_t5

0x9b88,	// (0x000202e7) cale_month_day_heading_pane_t6

0x9c11,	// (0x00020370) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x000259b9) cale_month_day_heading_pane_t

0x0ef9,	// (0x00017658) bg_cale_side_pane_cp01

0x9c9a,	// (0x000203f9) cale_month_week_pane_t1

0x9cb3,	// (0x00020412) cale_month_week_pane_t2

0x9ccc,	// (0x0002042b) cale_month_week_pane_t3

0x9ce5,	// (0x00020444) cale_month_week_pane_t4

0x9cfe,	// (0x0002045d) cale_month_week_pane_t5

0x9d1b,	// (0x0002047a) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x000259c8) cale_month_week_pane_t

0x9d3e,	// (0x0002049d) cell_cale_month_pane_ParamLimits

0x9d3e,	// (0x0002049d) cell_cale_month_pane

0x7201,	// (0x0001d960) cell_cale_month_pane_g1

0x720d,	// (0x0001d96c) cell_cale_month_pane_t1_ParamLimits

0x720d,	// (0x0001d96c) cell_cale_month_pane_t1

0x0f07,	// (0x00017666) grid_highlight_pane_cp08

0x0c4a,	// (0x000173a9) main_smil_g1

0x9e6c,	// (0x000205cb) smil_status_pane

0x12b5,	// (0x00017a14) smil_text_pane

0x2bf0,	// (0x0001934f) bg_popup_call3_rect_pane_g8

0x2bf8,	// (0x00019357) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x00025c66) bg_popup_call3_rect_pane_g

0x2e21,	// (0x00019580) smil_status_volume_pane_g1

0x12bf,	// (0x00017a1e) smil_status_pane_t1

0x7521,	// (0x0001dc80) volume_smil_pane

0x12d6,	// (0x00017a35) list_smil_text_pane

0x9e7f,	// (0x000205de) scroll_pane_cp011

0x9e8a,	// (0x000205e9) smil_text_list_pane_t1_ParamLimits

0x9e8a,	// (0x000205e9) smil_text_list_pane_t1

0x7239,	// (0x0001d998) aid_volume_smil_ParamLimits

0x7239,	// (0x0001d998) aid_volume_smil

0x0c4a,	// (0x000173a9) smil_volume_pane_g1

0x0c4a,	// (0x000173a9) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x000259da) smil_volume_pane_g

0x86d6,	// (0x0001ee35) listscroll_cale_day_pane

0x1302,	// (0x00017a61) bg_cale_pane

0x131a,	// (0x00017a79) list_cale_pane

0x133d,	// (0x00017a9c) scroll_pane_cp09

0x134e,	// (0x00017aad) cale_bg_pane_g1

0x1356,	// (0x00017ab5) cale_bg_pane_g2

0x135e,	// (0x00017abd) cale_bg_pane_g3

0x1366,	// (0x00017ac5) cale_bg_pane_g4

0x136e,	// (0x00017acd) cale_bg_pane_g5

0x1376,	// (0x00017ad5) cale_bg_pane_g6

0x137e,	// (0x00017add) cale_bg_pane_g7

0x1386,	// (0x00017ae5) cale_bg_pane_g8

0x138e,	// (0x00017aed) cale_bg_pane_g9

0x0008,

0xf280,	// (0x000259df) cale_bg_pane_g

0x9ee6,	// (0x00020645) list_cale_time_pane_ParamLimits

0x9ee6,	// (0x00020645) list_cale_time_pane

0x1396,	// (0x00017af5) list_cale_time_pane_g1_ParamLimits

0x1396,	// (0x00017af5) list_cale_time_pane_g1

0x13a2,	// (0x00017b01) list_cale_time_pane_g2_ParamLimits

0x13a2,	// (0x00017b01) list_cale_time_pane_g2

0x9efd,	// (0x0002065c) list_cale_time_pane_g3_ParamLimits

0x9efd,	// (0x0002065c) list_cale_time_pane_g3

0x9f0b,	// (0x0002066a) list_cale_time_pane_g4_ParamLimits

0x9f0b,	// (0x0002066a) list_cale_time_pane_g4

0x9f19,	// (0x00020678) list_cale_time_pane_g5_ParamLimits

0x9f19,	// (0x00020678) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x000259f2) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x000259f2) list_cale_time_pane_g

0x13bc,	// (0x00017b1b) list_cale_time_pane_t1_ParamLimits

0x13bc,	// (0x00017b1b) list_cale_time_pane_t1

0x13e4,	// (0x00017b43) list_cale_time_pane_t2_ParamLimits

0x13e4,	// (0x00017b43) list_cale_time_pane_t2

0xa167,	// (0x000208c6) aid_blid_cardinal_pane

0xa1a9,	// (0x00020908) compass_pane_t4

0x140c,	// (0x00017b6b) list_cale_time_pane_t4_ParamLimits

0x140c,	// (0x00017b6b) list_cale_time_pane_t4

0xa1b7,	// (0x00020916) compass_pane_t5

0xa1c7,	// (0x00020926) compass_pane_t6

0xa1d5,	// (0x00020934) compass_pane_t7

0x1899,	// (0x00017ff8) navi_pane_cc_t1

0x19f8,	// (0x00018157) aid_phob_thumbnail_center_pane

0xa6d7,	// (0x00020e36) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x000259ff) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x000259ff) list_cale_time_pane_t

0x062e,	// (0x00016d8d) bg_popup_window_pane_cp02_ParamLimits

0x062e,	// (0x00016d8d) bg_popup_window_pane_cp02

0x1434,	// (0x00017b93) heading_pane_cp01_ParamLimits

0x1434,	// (0x00017b93) heading_pane_cp01

0x1440,	// (0x00017b9f) loc_req_pane_ParamLimits

0x1440,	// (0x00017b9f) loc_req_pane

0x1450,	// (0x00017baf) loc_type_pane_ParamLimits

0x1450,	// (0x00017baf) loc_type_pane

0x1462,	// (0x00017bc1) loc_type_pane_t1_ParamLimits

0x1462,	// (0x00017bc1) loc_type_pane_t1

0x1474,	// (0x00017bd3) loc_type_pane_t2_ParamLimits

0x1474,	// (0x00017bd3) loc_type_pane_t2

0x1486,	// (0x00017be5) loc_type_pane_t3_ParamLimits

0x1486,	// (0x00017be5) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00025a06) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00025a06) loc_type_pane_t

0x1498,	// (0x00017bf7) list_loc_req_pane

0x14a2,	// (0x00017c01) scroll_pane_cp012

0x9f27,	// (0x00020686) list_single_loc_request_popup_menu_pane_ParamLimits

0x9f27,	// (0x00020686) list_single_loc_request_popup_menu_pane

0x14ad,	// (0x00017c0c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x14ad,	// (0x00017c0c) list_single_loc_request_popup_menu_pane_g1

0x14b9,	// (0x00017c18) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x14b9,	// (0x00017c18) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00025a0d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00025a0d) list_single_loc_request_popup_menu_pane_g

0x14c5,	// (0x00017c24) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x14c5,	// (0x00017c24) list_single_loc_request_popup_menu_pane_t1

0x9f39,	// (0x00020698) bg_popup_window_pane_cp03_ParamLimits

0x9f39,	// (0x00020698) bg_popup_window_pane_cp03

0x9f47,	// (0x000206a6) heading_loc_req_pane_ParamLimits

0x9f47,	// (0x000206a6) heading_loc_req_pane

0x9f53,	// (0x000206b2) popup_dyc_status_message_window_g1_ParamLimits

0x9f53,	// (0x000206b2) popup_dyc_status_message_window_g1

0x9f5f,	// (0x000206be) popup_dyc_status_message_window_t1_ParamLimits

0x9f5f,	// (0x000206be) popup_dyc_status_message_window_t1

0x9f71,	// (0x000206d0) popup_dyc_status_message_window_t2_ParamLimits

0x9f71,	// (0x000206d0) popup_dyc_status_message_window_t2

0x9f83,	// (0x000206e2) popup_dyc_status_message_window_t3_ParamLimits

0x9f83,	// (0x000206e2) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00025a12) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00025a12) popup_dyc_status_message_window_t

0x09d7,	// (0x00017136) bg_heading_pane_cp01

0x14e7,	// (0x00017c46) heading_loc_req_pane_g1

0x14ef,	// (0x00017c4e) heading_loc_req_pane_g2

0x14f7,	// (0x00017c56) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00025a19) heading_loc_req_pane_g

0x14ff,	// (0x00017c5e) heading_loc_req_pane_t1

0x151f,	// (0x00017c7e) bg_popup_sub_pane_cp01_ParamLimits

0x151f,	// (0x00017c7e) bg_popup_sub_pane_cp01

0x152d,	// (0x00017c8c) popup_cale_events_window_g1_ParamLimits

0x152d,	// (0x00017c8c) popup_cale_events_window_g1

0x154d,	// (0x00017cac) popup_cale_events_window_g2_ParamLimits

0x154d,	// (0x00017cac) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x00025a3b) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x00025a3b) popup_cale_events_window_g

0x156d,	// (0x00017ccc) popup_cale_events_window_t1_ParamLimits

0x156d,	// (0x00017ccc) popup_cale_events_window_t1

0x157f,	// (0x00017cde) popup_cale_events_window_t2_ParamLimits

0x157f,	// (0x00017cde) popup_cale_events_window_t2

0x15bd,	// (0x00017d1c) popup_cale_events_window_t3_ParamLimits

0x15bd,	// (0x00017d1c) popup_cale_events_window_t3

0x15f7,	// (0x00017d56) popup_cale_events_window_t4_ParamLimits

0x15f7,	// (0x00017d56) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x00025a40) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x00025a40) popup_cale_events_window_t

0x9fad,	// (0x0002070c) call_type_pane

0x2415,	// (0x00018b74) popup_call_status_window_g1

0x9fb9,	// (0x00020718) popup_call_status_window_g2

0x9fc5,	// (0x00020724) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x00025a49) popup_call_status_window_g

0x162d,	// (0x00017d8c) call_type_pane_g1

0x1636,	// (0x00017d95) call_type_pane_g2

0x0001,

0xf2f1,	// (0x00025a50) call_type_pane_g

0x09d7,	// (0x00017136) bg_popup_sub_pane_cp02

0x163f,	// (0x00017d9e) listscroll_popup_wml_pane

0x1647,	// (0x00017da6) list_wml_pane

0x1651,	// (0x00017db0) scroll_pane_cp013

0x165c,	// (0x00017dbb) list_single_graphic_popup_wml_pane_ParamLimits

0x165c,	// (0x00017dbb) list_single_graphic_popup_wml_pane

0x0c4a,	// (0x000173a9) list_single_graphic_popup_wml_pane_g1

0x1670,	// (0x00017dcf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x00025a55) list_single_graphic_popup_wml_pane_g

0x1678,	// (0x00017dd7) list_single_graphic_popup_wml_pane_t1

0x1686,	// (0x00017de5) aid_call_pane

0x0c2a,	// (0x00017389) popup_clock_analogue_window_g1

0x0c2a,	// (0x00017389) popup_clock_analogue_window_g2

0x725b,	// (0x0001d9ba) popup_clock_analogue_window_g3

0x725b,	// (0x0001d9ba) popup_clock_analogue_window_g4

0x0c4a,	// (0x000173a9) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x00025a5a) popup_clock_analogue_window_g

0x7263,	// (0x0001d9c2) popup_clock_analogue_window_t1

0x7271,	// (0x0001d9d0) clock_digital_number_pane_ParamLimits

0x7271,	// (0x0001d9d0) clock_digital_number_pane

0x727d,	// (0x0001d9dc) clock_digital_number_pane_cp02_ParamLimits

0x727d,	// (0x0001d9dc) clock_digital_number_pane_cp02

0x7289,	// (0x0001d9e8) clock_digital_number_pane_cp03_ParamLimits

0x7289,	// (0x0001d9e8) clock_digital_number_pane_cp03

0x7295,	// (0x0001d9f4) clock_digital_number_pane_cp04_ParamLimits

0x7295,	// (0x0001d9f4) clock_digital_number_pane_cp04

0x72a1,	// (0x0001da00) clock_digital_separator_pane_ParamLimits

0x72a1,	// (0x0001da00) clock_digital_separator_pane

0x72ad,	// (0x0001da0c) popup_clock_digital_window_t1

0x0c4a,	// (0x000173a9) clock_digital_number_pane_g1

0x0c4a,	// (0x000173a9) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x000259da) clock_digital_number_pane_g

0x0c4a,	// (0x000173a9) clock_digital_separator_pane_g1

0x0c4a,	// (0x000173a9) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x000259da) clock_digital_separator_pane_g

0x09d7,	// (0x00017136) bg_popup_window_pane_cp04

0x1705,	// (0x00017e64) heading_pane_cp03

0x0f54,	// (0x000176b3) listscroll_popup_gms_pane

0x09d7,	// (0x00017136) grid_large_graphic_popup_pane

0x170e,	// (0x00017e6d) listscroll_popup_gms_pane_g1

0x1717,	// (0x00017e76) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x00025a65) listscroll_popup_gms_pane_g

0x1720,	// (0x00017e7f) scroll_pane_cp014

0x0c9f,	// (0x000173fe) cell_large_graphic_popup_pane_ParamLimits

0x0c9f,	// (0x000173fe) cell_large_graphic_popup_pane

0x0cad,	// (0x0001740c) cell_large_graphic_popup_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) cell_large_graphic_popup_pane_g1

0x1729,	// (0x00017e88) cell_large_graphic_popup_pane_g2_ParamLimits

0x1729,	// (0x00017e88) cell_large_graphic_popup_pane_g2

0x1737,	// (0x00017e96) cell_large_graphic_popup_pane_g3_ParamLimits

0x1737,	// (0x00017e96) cell_large_graphic_popup_pane_g3

0x1745,	// (0x00017ea4) cell_large_graphic_popup_pane_g4_ParamLimits

0x1745,	// (0x00017ea4) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x00025a6a) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x00025a6a) cell_large_graphic_popup_pane_g

0x09d7,	// (0x00017136) grid_highlight_pane_cp010

0x0c4a,	// (0x000173a9) bg_popup_call_pane_g1

0x1756,	// (0x00017eb5) list_single_graphic_popup_conf_pane_ParamLimits

0x1756,	// (0x00017eb5) list_single_graphic_popup_conf_pane

0x1768,	// (0x00017ec7) list_highlight_pane_cp01

0x1771,	// (0x00017ed0) list_single_graphic_popup_conf_pane_g1

0x1779,	// (0x00017ed8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x00025a73) list_single_graphic_popup_conf_pane_g

0x1781,	// (0x00017ee0) list_single_graphic_popup_conf_pane_t1

0x178f,	// (0x00017eee) linegrid_cams_pane_g1

0x9fd1,	// (0x00020730) linegrid_cams_pane_g2

0x0f3a,	// (0x00017699) linegrid_cams_pane_g3

0x1798,	// (0x00017ef7) linegrid_cams_pane_g4

0x9fda,	// (0x00020739) linegrid_cams_pane_g5

0x9fe3,	// (0x00020742) linegrid_cams_pane_g6

0x0f43,	// (0x000176a2) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x00025a78) linegrid_cams_pane_g

0x17a1,	// (0x00017f00) popup_clock_analogue_window

0x17a1,	// (0x00017f00) popup_clock_digital_window

0x09d7,	// (0x00017136) popup_phob_thumbnail_window

0x0c4a,	// (0x000173a9) call_video_uplink_pane_g1

0x17aa,	// (0x00017f09) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x00025a87) call_video_uplink_pane_g

0x17b2,	// (0x00017f11) video_uplink_pane

0x17ba,	// (0x00017f19) mce_image_pane_g1

0x9fee,	// (0x0002074d) mce_image_pane_g2

0x9ff8,	// (0x00020757) mce_image_pane_g3

0xa002,	// (0x00020761) mce_image_pane_g4

0xa00a,	// (0x00020769) mce_image_pane_g5

0x0004,

0xf32d,	// (0x00025a8c) mce_image_pane_g

0x17c4,	// (0x00017f23) control_top_pane_stacon_cp01_ParamLimits

0x17c4,	// (0x00017f23) control_top_pane_stacon_cp01

0x17d8,	// (0x00017f37) uni_indicator_pane_stacon_cp01_ParamLimits

0x17d8,	// (0x00017f37) uni_indicator_pane_stacon_cp01

0x17e9,	// (0x00017f48) bg_popup_sub_pane_cp03

0xa012,	// (0x00020771) chi_dic_find_pane

0xa01a,	// (0x00020779) listscroll_chi_dic_pane

0xa023,	// (0x00020782) main_pane_chidic_g1

0xa036,	// (0x00020795) chi_dic_find_pane_t1

0x17f3,	// (0x00017f52) find_chidic_pane

0x17fc,	// (0x00017f5b) chi_dic_list_pane_ParamLimits

0x17fc,	// (0x00017f5b) chi_dic_list_pane

0x180d,	// (0x00017f6c) scroll_pane_cp020

0xa044,	// (0x000207a3) find_chidic_pane_t1

0x09d7,	// (0x00017136) input_focus_pane_cp06

0x0f5c,	// (0x000176bb) list_chi_dic_pane_ParamLimits

0x0f5c,	// (0x000176bb) list_chi_dic_pane

0xa053,	// (0x000207b2) list_chi_dic_pane_t1_ParamLimits

0xa053,	// (0x000207b2) list_chi_dic_pane_t1

0x09d7,	// (0x00017136) list_highlight_pane_cp020

0x1815,	// (0x00017f74) bg_cale_heading_pane_g1

0xa066,	// (0x000207c5) bg_cale_heading_pane_g2

0xa06e,	// (0x000207cd) bg_cale_heading_pane_g3

0xa076,	// (0x000207d5) bg_cale_heading_pane_g4

0xa080,	// (0x000207df) bg_cale_heading_pane_g5

0xa08a,	// (0x000207e9) bg_cale_heading_pane_g6

0xa092,	// (0x000207f1) bg_cale_heading_pane_g7

0xa09a,	// (0x000207f9) bg_cale_heading_pane_g8

0xa0a4,	// (0x00020803) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x00025a97) bg_cale_heading_pane_g

0x1815,	// (0x00017f74) bg_cale_side_pane_g1

0xa0ae,	// (0x0002080d) bg_cale_side_pane_g2

0xa0b8,	// (0x00020817) bg_cale_side_pane_g3

0xa0c2,	// (0x00020821) bg_cale_side_pane_g4

0xa0cc,	// (0x0002082b) bg_cale_side_pane_g5

0xa0d6,	// (0x00020835) bg_cale_side_pane_g6

0xa0e0,	// (0x0002083f) bg_cale_side_pane_g7

0xa0ea,	// (0x00020849) bg_cale_side_pane_g8

0xa0f2,	// (0x00020851) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x00025aaa) bg_cale_side_pane_g

0xa0fa,	// (0x00020859) popup_call_status_window_ParamLimits

0xa0fa,	// (0x00020859) popup_call_status_window

0x181d,	// (0x00017f7c) stacon_top_pane

0x1825,	// (0x00017f84) status_pane_ParamLimits

0x1825,	// (0x00017f84) status_pane

0x183a,	// (0x00017f99) status_small_pane

0x1842,	// (0x00017fa1) control_pane

0x09d7,	// (0x00017136) stacon_bottom_pane

0x184a,	// (0x00017fa9) list_single_mce_smart_pane_t1_ParamLimits

0x184a,	// (0x00017fa9) list_single_mce_smart_pane_t1

0x185d,	// (0x00017fbc) list_single_mce_smart_pane_t2_ParamLimits

0x185d,	// (0x00017fbc) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x00025abd) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x00025abd) list_single_mce_smart_pane_t

0xa106,	// (0x00020865) compass_pane

0xa111,	// (0x00020870) main_location2_pane_t1

0xa127,	// (0x00020886) main_location2_pane_t2

0xa13d,	// (0x0002089c) main_location2_pane_t3

0x0003,

0xf363,	// (0x00025ac2) main_location2_pane_t

0x187c,	// (0x00017fdb) compass_pane_g1_ParamLimits

0x187c,	// (0x00017fdb) compass_pane_g1

0xa18b,	// (0x000208ea) compass_pane_t1

0xa19a,	// (0x000208f9) compass_pane_t2

0x0005,

0xf36c,	// (0x00025acb) compass_pane_t

0xa1e5,	// (0x00020944) text_secondary_cp61

0x1890,	// (0x00017fef) navi_pane_cams_g5

0x18b3,	// (0x00018012) navi_pane_im_t1

0x18c1,	// (0x00018020) navi_pane_mp_g1_ParamLimits

0x18c1,	// (0x00018020) navi_pane_mp_g1

0x18d5,	// (0x00018034) navi_pane_mp_g2_ParamLimits

0x18d5,	// (0x00018034) navi_pane_mp_g2

0x18e1,	// (0x00018040) navi_pane_mp_g3_ParamLimits

0x18e1,	// (0x00018040) navi_pane_mp_g3

0x0002,

0xf380,	// (0x00025adf) navi_pane_mp_g_ParamLimits

0xf380,	// (0x00025adf) navi_pane_mp_g

0x18ed,	// (0x0001804c) navi_pane_mp_t1

0x18fb,	// (0x0001805a) navi_pane_mp_t2

0x0002,

0xf387,	// (0x00025ae6) navi_pane_mp_t

0x1937,	// (0x00018096) navi_pane_vt_g1

0x18ed,	// (0x0001804c) navi_pane_vt_t1

0x193f,	// (0x0001809e) navi_slider_pane

0x0f54,	// (0x000176b3) zooming_pane

0x1947,	// (0x000180a6) navi_slider_pane_g1

0x72ca,	// (0x0001da29) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x00025aed) navi_slider_pane_g

0x197d,	// (0x000180dc) aid_levels_zoom

0x1985,	// (0x000180e4) zooming_pane_g1

0x198d,	// (0x000180ec) zooming_pane_g2

0x198d,	// (0x000180ec) zooming_pane_g3

0x0002,

0xf39d,	// (0x00025afc) zooming_pane_g

0x1995,	// (0x000180f4) level_10_zoom

0x199e,	// (0x000180fd) level_11_zoom

0x19a7,	// (0x00018106) level_1_zoom

0x19b0,	// (0x0001810f) level_2_zoom

0x19b9,	// (0x00018118) level_3_zoom

0x19c2,	// (0x00018121) level_4_zoom

0x19cb,	// (0x0001812a) level_5_zoom

0x19d4,	// (0x00018133) level_6_zoom

0x19dd,	// (0x0001813c) level_7_zoom

0x19e6,	// (0x00018145) level_8_zoom

0x19ef,	// (0x0001814e) level_9_zoom

0x1a00,	// (0x0001815f) popup_phob_thumbnail_window_g1

0x1a08,	// (0x00018167) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x00025b03) popup_phob_thumbnail_window_g

0xac9b,	// (0x000213fa) level_1_location

0xaca3,	// (0x00021402) level_2_location

0xacab,	// (0x0002140a) level_3_location

0xacb5,	// (0x00021414) level_4_location

0x0f54,	// (0x000176b3) level_5_location

0xa31a,	// (0x00020a79) mce_icon_pane_g1

0xa322,	// (0x00020a81) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x00025b08) mce_icon_pane_g

0xa32a,	// (0x00020a89) main_mup_pane_g1_ParamLimits

0xa32a,	// (0x00020a89) main_mup_pane_g1

0x0cc9,	// (0x00017428) main_mup_pane_g2_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g2

0x0cc9,	// (0x00017428) main_mup_pane_g3_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g3

0x0cc9,	// (0x00017428) main_mup_pane_g4_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g4

0x0cc9,	// (0x00017428) main_mup_pane_g5_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g5

0x0cc9,	// (0x00017428) main_mup_pane_g6_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g6

0x0cc9,	// (0x00017428) main_mup_pane_g7_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g7

0x0cc9,	// (0x00017428) main_mup_pane_g8_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g8

0x0cc9,	// (0x00017428) main_mup_pane_g9_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g9

0x0cc9,	// (0x00017428) main_mup_pane_g10_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g10

0x0cc9,	// (0x00017428) main_mup_pane_g11_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g11

0x0cbb,	// (0x0001741a) main_mup_pane_g12_ParamLimits

0x0cbb,	// (0x0001741a) main_mup_pane_g12

0x0cc9,	// (0x00017428) main_mup_pane_g13_ParamLimits

0x0cc9,	// (0x00017428) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x00025b0d) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x00025b0d) main_mup_pane_g

0x0cd7,	// (0x00017436) main_mup_pane_t1_ParamLimits

0x0cd7,	// (0x00017436) main_mup_pane_t1

0x0cd7,	// (0x00017436) main_mup_pane_t2_ParamLimits

0x0cd7,	// (0x00017436) main_mup_pane_t2

0x0cd7,	// (0x00017436) main_mup_pane_t3_ParamLimits

0x0cd7,	// (0x00017436) main_mup_pane_t3

0x1a32,	// (0x00018191) main_mup_pane_t4_ParamLimits

0x1a32,	// (0x00018191) main_mup_pane_t4

0x1a32,	// (0x00018191) main_mup_pane_t5_ParamLimits

0x1a32,	// (0x00018191) main_mup_pane_t5

0x0f7b,	// (0x000176da) main_mup_pane_t6_ParamLimits

0x0f7b,	// (0x000176da) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x00025b28) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x00025b28) main_mup_pane_t

0x0581,	// (0x00016ce0) mup_progress_pane_ParamLimits

0x0581,	// (0x00016ce0) mup_progress_pane

0x2eba,	// (0x00019619) mup_visualizer_pane_ParamLimits

0x2eba,	// (0x00019619) mup_visualizer_pane

0x2eba,	// (0x00019619) mup_volume_pane_ParamLimits

0x2eba,	// (0x00019619) mup_volume_pane

0x0cbb,	// (0x0001741a) mup_visualizer_pane_g1_ParamLimits

0x0cbb,	// (0x0001741a) mup_visualizer_pane_g1

0x1a54,	// (0x000181b3) mup_visualizer_pane_g2_ParamLimits

0x1a54,	// (0x000181b3) mup_visualizer_pane_g2

0x0cad,	// (0x0001740c) mup_visualizer_pane_g3_ParamLimits

0x0cad,	// (0x0001740c) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x00025b35) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x00025b35) mup_visualizer_pane_g

0x0fa9,	// (0x00017708) mup_volume_pane_g1

0x0fa9,	// (0x00017708) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x00025b3c) mup_volume_pane_g

0x0fa9,	// (0x00017708) mup_progress_pane_g1

0x0fa9,	// (0x00017708) mup_progress_pane_g2

0x0fa9,	// (0x00017708) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x00025b41) mup_progress_pane_g

0x09d7,	// (0x00017136) bg_popup_window_pane_cp05

0x1a62,	// (0x000181c1) heading_pane_cp02_ParamLimits

0x1a62,	// (0x000181c1) heading_pane_cp02

0x1a7e,	// (0x000181dd) list_popup_blid_pane

0x1a86,	// (0x000181e5) list_blid_sat_info_pane_ParamLimits

0x1a86,	// (0x000181e5) list_blid_sat_info_pane

0x1a99,	// (0x000181f8) list_blid_sat_info_pane_g1

0x1aa1,	// (0x00018200) list_blid_sat_info_pane_t1

0xa439,	// (0x00020b98) mup_equalizer_pane_ParamLimits

0xa439,	// (0x00020b98) mup_equalizer_pane

0xa45a,	// (0x00020bb9) mup_equalizer_pane_cp1_ParamLimits

0xa45a,	// (0x00020bb9) mup_equalizer_pane_cp1

0xa47b,	// (0x00020bda) mup_equalizer_pane_cp2_ParamLimits

0xa47b,	// (0x00020bda) mup_equalizer_pane_cp2

0xa49c,	// (0x00020bfb) mup_equalizer_pane_cp3_ParamLimits

0xa49c,	// (0x00020bfb) mup_equalizer_pane_cp3

0xa4c1,	// (0x00020c20) mup_equalizer_pane_cp4_ParamLimits

0xa4c1,	// (0x00020c20) mup_equalizer_pane_cp4

0xa4e6,	// (0x00020c45) mup_equalizer_pane_cp5

0xa4fe,	// (0x00020c5d) mup_equalizer_pane_cp6

0xa516,	// (0x00020c75) mup_equalizer_pane_cp7

0x2c70,	// (0x000193cf) bg_popup_call_poc_act_pane_g9

0x2c78,	// (0x000193d7) bg_popup_call_poc_act_pane_g10

0x2c80,	// (0x000193df) bg_popup_call_poc_act_pane_g11

0x000a,

0x0c32,	// (0x00017391) mup_scale_pane

0x0c4a,	// (0x000173a9) mup_scale_pane_g1

0x1aaf,	// (0x0001820e) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x00025b5d) mup_scale_pane_g

0x1ad3,	// (0x00018232) msg_data_pane

0x1adb,	// (0x0001823a) scroll_pane_cp017

0xa540,	// (0x00020c9f) bg_list_pane_cp04_ParamLimits

0xa540,	// (0x00020c9f) bg_list_pane_cp04

0x1aeb,	// (0x0001824a) msg_data_pane_g1

0xa560,	// (0x00020cbf) msg_data_pane_g2

0xa56a,	// (0x00020cc9) msg_data_pane_g3

0xa574,	// (0x00020cd3) msg_data_pane_g4

0xa57c,	// (0x00020cdb) msg_data_pane_g5

0xa584,	// (0x00020ce3) msg_data_pane_g6

0xa58c,	// (0x00020ceb) msg_data_pane_g7

0x0006,

0xf40d,	// (0x00025b6c) msg_data_pane_g

0xa594,	// (0x00020cf3) msg_text_pane_ParamLimits

0xa594,	// (0x00020cf3) msg_text_pane

0xa5c5,	// (0x00020d24) qrid_highlight_pane_cp011_ParamLimits

0xa5c5,	// (0x00020d24) qrid_highlight_pane_cp011

0x09d7,	// (0x00017136) msg_body_pane

0x09d7,	// (0x00017136) msg_header_pane

0x1afc,	// (0x0001825b) input_focus_pane_cp07

0xa5e9,	// (0x00020d48) msg_header_pane_t1_ParamLimits

0xa5e9,	// (0x00020d48) msg_header_pane_t1

0xa5ff,	// (0x00020d5e) msg_header_pane_t2_ParamLimits

0xa5ff,	// (0x00020d5e) msg_header_pane_t2

0x0001,

0xf421,	// (0x00025b80) msg_header_pane_t_ParamLimits

0xf421,	// (0x00025b80) msg_header_pane_t

0x1b11,	// (0x00018270) msg_body_pane_g1

0xa616,	// (0x00020d75) msg_body_pane_t1_ParamLimits

0xa616,	// (0x00020d75) msg_body_pane_t1

0x1b19,	// (0x00018278) msg_body_pane_t2_ParamLimits

0x1b19,	// (0x00018278) msg_body_pane_t2

0x1b2b,	// (0x0001828a) msg_body_pane_t3_ParamLimits

0x1b2b,	// (0x0001828a) msg_body_pane_t3

0x0002,

0xf426,	// (0x00025b85) msg_body_pane_t_ParamLimits

0xf426,	// (0x00025b85) msg_body_pane_t

0x730c,	// (0x0001da6b) main_viewer_pane_g1_ParamLimits

0x730c,	// (0x0001da6b) main_viewer_pane_g1

0x7318,	// (0x0001da77) main_viewer_pane_g2_ParamLimits

0x7318,	// (0x0001da77) main_viewer_pane_g2

0xa669,	// (0x00020dc8) main_viewer_pane_g3_ParamLimits

0xa669,	// (0x00020dc8) main_viewer_pane_g3

0xa67a,	// (0x00020dd9) main_viewer_pane_g4_ParamLimits

0xa67a,	// (0x00020dd9) main_viewer_pane_g4

0x7324,	// (0x0001da83) main_viewer_pane_g5_ParamLimits

0x7324,	// (0x0001da83) main_viewer_pane_g5

0x7324,	// (0x0001da83) main_viewer_pane_g7_ParamLimits

0x7324,	// (0x0001da83) main_viewer_pane_g7

0x7336,	// (0x0001da95) main_viewer_pane_g8_ParamLimits

0x7336,	// (0x0001da95) main_viewer_pane_g8

0x0007,

0xf436,	// (0x00025b95) main_viewer_pane_g_ParamLimits

0xf436,	// (0x00025b95) main_viewer_pane_g

0x1b7f,	// (0x000182de) viewer_content_pane_ParamLimits

0x1b7f,	// (0x000182de) viewer_content_pane

0xa6ab,	// (0x00020e0a) main_postcard_pane_g1_ParamLimits

0xa6ab,	// (0x00020e0a) main_postcard_pane_g1

0xa6b9,	// (0x00020e18) main_postcard_pane_g2_ParamLimits

0xa6b9,	// (0x00020e18) main_postcard_pane_g2

0xa6c7,	// (0x00020e26) main_postcard_pane_g3_ParamLimits

0xa6c7,	// (0x00020e26) main_postcard_pane_g3

0x0005,

0xf447,	// (0x00025ba6) main_postcard_pane_g_ParamLimits

0xf447,	// (0x00025ba6) main_postcard_pane_g

0xa6d7,	// (0x00020e36) main_postcard_pane_g4

0x2e0e,	// (0x0001956d) smil_status_volume_pane_g2

0xa703,	// (0x00020e62) postcard_pane_ParamLimits

0xa703,	// (0x00020e62) postcard_pane

0x2415,	// (0x00018b74) postcard_pane_g1_ParamLimits

0x2415,	// (0x00018b74) postcard_pane_g1

0xa73d,	// (0x00020e9c) postcard_pane_g2_ParamLimits

0xa73d,	// (0x00020e9c) postcard_pane_g2

0xa749,	// (0x00020ea8) postcard_pane_g3_ParamLimits

0xa749,	// (0x00020ea8) postcard_pane_g3

0x1b9b,	// (0x000182fa) postcard_pane_g4_ParamLimits

0x1b9b,	// (0x000182fa) postcard_pane_g4

0xa755,	// (0x00020eb4) postcard_pane_g5_ParamLimits

0xa755,	// (0x00020eb4) postcard_pane_g5

0xa761,	// (0x00020ec0) postcard_pane_g6_ParamLimits

0xa761,	// (0x00020ec0) postcard_pane_g6

0x1b8d,	// (0x000182ec) postcard_pane_g7_ParamLimits

0x1b8d,	// (0x000182ec) postcard_pane_g7

0x0006,

0xf454,	// (0x00025bb3) postcard_pane_g_ParamLimits

0xf454,	// (0x00025bb3) postcard_pane_g

0xa76f,	// (0x00020ece) main_mp2_pane_g1_ParamLimits

0xa76f,	// (0x00020ece) main_mp2_pane_g1

0xa77d,	// (0x00020edc) main_mp2_pane_g2_ParamLimits

0xa77d,	// (0x00020edc) main_mp2_pane_g2

0xa789,	// (0x00020ee8) main_mp2_pane_g3_ParamLimits

0xa789,	// (0x00020ee8) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00025bc2) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00025bc2) main_mp2_pane_g

0xa795,	// (0x00020ef4) main_mp2_pane_t1_ParamLimits

0xa795,	// (0x00020ef4) main_mp2_pane_t1

0xa7ac,	// (0x00020f0b) main_mp2_pane_t2_ParamLimits

0xa7ac,	// (0x00020f0b) main_mp2_pane_t2

0xa7c0,	// (0x00020f1f) main_mp2_pane_t3_ParamLimits

0xa7c0,	// (0x00020f1f) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x00025bc9) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x00025bc9) main_mp2_pane_t

0x1ba9,	// (0x00018308) pec_content_pane_ParamLimits

0x1ba9,	// (0x00018308) pec_content_pane

0x110e,	// (0x0001786d) scroll_pane_cp015

0x1bbb,	// (0x0001831a) pec_attribute_pane_ParamLimits

0x1bbb,	// (0x0001831a) pec_attribute_pane

0xa7d2,	// (0x00020f31) pec_content_pane_g1_ParamLimits

0xa7d2,	// (0x00020f31) pec_content_pane_g1

0x1bcb,	// (0x0001832a) pec_content_pane_t1_ParamLimits

0x1bcb,	// (0x0001832a) pec_content_pane_t1

0x1bdd,	// (0x0001833c) pec_content_pane_t2_ParamLimits

0x1bdd,	// (0x0001833c) pec_content_pane_t2

0x0001,

0xf471,	// (0x00025bd0) pec_content_pane_t_ParamLimits

0xf471,	// (0x00025bd0) pec_content_pane_t

0xa7de,	// (0x00020f3d) list_single_graphic_pane_cp01_ParamLimits

0xa7de,	// (0x00020f3d) list_single_graphic_pane_cp01

0x0c32,	// (0x00017391) bg_popup_sub_pane_cp04

0x1bef,	// (0x0001834e) popup_mup_playback_window_g1

0x1bfb,	// (0x0001835a) popup_mup_playback_window_t1

0x1c10,	// (0x0001836f) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x00025bd5) popup_mup_playback_window_t

0x1c47,	// (0x000183a6) main_image_pane_g1_ParamLimits

0x1c47,	// (0x000183a6) main_image_pane_g1

0x1c8a,	// (0x000183e9) scroll_pane_cp018_ParamLimits

0x1c8a,	// (0x000183e9) scroll_pane_cp018

0x1ca2,	// (0x00018401) scroll_pane_cp016_ParamLimits

0x1ca2,	// (0x00018401) scroll_pane_cp016

0xa86c,	// (0x00020fcb) smil2_image_pane_ParamLimits

0xa86c,	// (0x00020fcb) smil2_image_pane

0xa8a2,	// (0x00021001) smil2_root_pane_ParamLimits

0xa8a2,	// (0x00021001) smil2_root_pane

0xa8ce,	// (0x0002102d) smil2_text_pane_ParamLimits

0xa8ce,	// (0x0002102d) smil2_text_pane

0x09d7,	// (0x00017136) bg_list_pane_cp06

0x1cde,	// (0x0001843d) grid_radio_pane

0x09d7,	// (0x00017136) bg_popup_window_pane_cp06

0x1ce8,	// (0x00018447) main_fmradio_pane_t1

0x2c88,	// (0x000193e7) heading_pane_cp04

0x1cf6,	// (0x00018455) main_fmradio_pane_t2

0x2c90,	// (0x000193ef) popup_cale_lunar_info_window_g1

0x1d04,	// (0x00018463) main_fmradio_pane_t3

0x2c98,	// (0x000193f7) popup_cale_lunar_info_window_g2

0x1d14,	// (0x00018473) main_fmradio_pane_t4

0x0001,

0x1d22,	// (0x00018481) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x00025cb5) popup_cale_lunar_info_window_g

0xf48b,	// (0x00025bea) main_fmradio_pane_t

0x1d30,	// (0x0001848f) wait_bar_pane_cp03

0x1d38,	// (0x00018497) cell_fmradio_pane_ParamLimits

0x1d38,	// (0x00018497) cell_fmradio_pane

0x1b8d,	// (0x000182ec) cell_fmradio_pane_g1_ParamLimits

0x1b8d,	// (0x000182ec) cell_fmradio_pane_g1

0x09d7,	// (0x00017136) grid_highlight_pane_cp011

0x1d4d,	// (0x000184ac) poc_content_pane_ParamLimits

0x1d4d,	// (0x000184ac) poc_content_pane

0x1d5f,	// (0x000184be) scroll_pane_cp019

0xa90e,	// (0x0002106d) popup_call_poc_act_window_ParamLimits

0xa90e,	// (0x0002106d) popup_call_poc_act_window

0xa91b,	// (0x0002107a) popup_call_poc_inact_window_ParamLimits

0xa91b,	// (0x0002107a) popup_call_poc_inact_window

0xf52d,	// (0x00025c8c) bg_popup_call_poc_act_pane_g

0x2c00,	// (0x0001935f) bg_popup_call_poc_inact_pane_g1

0x2c08,	// (0x00019367) bg_popup_call_poc_inact_pane_g2

0x1d67,	// (0x000184c6) popup_call_poc_act_window_g2

0x2c10,	// (0x0001936f) bg_popup_call_poc_inact_pane_g3

0x2c18,	// (0x00019377) bg_popup_call_poc_inact_pane_g4

0x2c20,	// (0x0001937f) bg_popup_call_poc_inact_pane_g5

0x1d6f,	// (0x000184ce) popup_call_poc_act_window_t1_ParamLimits

0x1d6f,	// (0x000184ce) popup_call_poc_act_window_t1

0x1d97,	// (0x000184f6) popup_call_poc_act_window_t2_ParamLimits

0x1d97,	// (0x000184f6) popup_call_poc_act_window_t2

0x1dbf,	// (0x0001851e) popup_call_poc_act_window_t3_ParamLimits

0x1dbf,	// (0x0001851e) popup_call_poc_act_window_t3

0x1de7,	// (0x00018546) popup_call_poc_act_window_t4_ParamLimits

0x1de7,	// (0x00018546) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x00025bf5) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x00025bf5) popup_call_poc_act_window_t

0x2c28,	// (0x00019387) bg_popup_call_poc_inact_pane_g6

0x2c30,	// (0x0001938f) bg_popup_call_poc_inact_pane_g7

0x2c38,	// (0x00019397) bg_popup_call_poc_inact_pane_g8

0x1df9,	// (0x00018558) popup_call_poc_inact_window_g2

0x2c40,	// (0x0001939f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x00025c79) bg_popup_call_poc_inact_pane_g

0x1e01,	// (0x00018560) popup_call_poc_inact_window_t1_ParamLimits

0x1e01,	// (0x00018560) popup_call_poc_inact_window_t1

0x1e16,	// (0x00018575) popup_call_poc_inact_window_t2_ParamLimits

0x1e16,	// (0x00018575) popup_call_poc_inact_window_t2

0x1e2b,	// (0x0001858a) popup_call_poc_inact_window_t3_ParamLimits

0x1e2b,	// (0x0001858a) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x00025bfe) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x00025bfe) popup_call_poc_inact_window_t

0x2d86,	// (0x000194e5) context_pane_ParamLimits

0xae1e,	// (0x0002157d) signal_pane_ParamLimits

0x0f54,	// (0x000176b3) main_call2_pane

0x74c1,	// (0x0001dc20) popup_phob_thumbnail2_window_ParamLimits

0x74c1,	// (0x0001dc20) popup_phob_thumbnail2_window

0x72dc,	// (0x0001da3b) aid_hotspot_pointer_arrow_pane

0x72e4,	// (0x0001da43) aid_hotspot_pointer_hand_pane

0xac63,	// (0x000213c2) phob_pre_status_pane_g5

0x0c9f,	// (0x000173fe) cams_zoom_pane_ParamLimits

0x0c9f,	// (0x000173fe) image_vga_pane_ParamLimits

0x0cbb,	// (0x0001741a) main_camera_pane_g1_ParamLimits

0x0cbb,	// (0x0001741a) main_camera_pane_g2_ParamLimits

0x0cbb,	// (0x0001741a) main_camera_pane_g3_ParamLimits

0x0cbb,	// (0x0001741a) main_camera_pane_g4_ParamLimits

0x0cbb,	// (0x0001741a) main_camera_pane_g5_ParamLimits

0x0cbb,	// (0x0001741a) main_camera_pane_g6_ParamLimits

0x0cbb,	// (0x0001741a) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00025924) main_camera_pane_g_ParamLimits

0x1a32,	// (0x00018191) main_camera_pane_t1_ParamLimits

0x1a32,	// (0x00018191) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00025935) main_camera_pane_t_ParamLimits

0x0c32,	// (0x00017391) bg_popup_preview_window_pane_cp01_ParamLimits

0x0c32,	// (0x00017391) bg_popup_preview_window_pane_cp01

0x1e40,	// (0x0001859f) popup_phob_thumbnail2_window_g1_ParamLimits

0x1e40,	// (0x0001859f) popup_phob_thumbnail2_window_g1

0x09d7,	// (0x00017136) call2_cli_visual_pane

0xa937,	// (0x00021096) popup_call2_audio_conf_window_ParamLimits

0xa937,	// (0x00021096) popup_call2_audio_conf_window

0xa950,	// (0x000210af) popup_call2_audio_first_window_ParamLimits

0xa950,	// (0x000210af) popup_call2_audio_first_window

0xa9ee,	// (0x0002114d) popup_call2_audio_in_window_ParamLimits

0xa9ee,	// (0x0002114d) popup_call2_audio_in_window

0xaa32,	// (0x00021191) popup_call2_audio_out_window_ParamLimits

0xaa32,	// (0x00021191) popup_call2_audio_out_window

0xaa9c,	// (0x000211fb) popup_call2_audio_second_window_ParamLimits

0xaa9c,	// (0x000211fb) popup_call2_audio_second_window

0xaafa,	// (0x00021259) popup_call2_audio_wait_window_ParamLimits

0xaafa,	// (0x00021259) popup_call2_audio_wait_window

0x09d7,	// (0x00017136) bg_popup_call2_act_pane_cp03

0x0c14,	// (0x00017373) list_conf_pane_cp

0x1e4c,	// (0x000185ab) popup_call2_audio_conf_window_t1

0x1e5a,	// (0x000185b9) list_single_graphic_popup_conf2_pane_ParamLimits

0x1e5a,	// (0x000185b9) list_single_graphic_popup_conf2_pane

0x1768,	// (0x00017ec7) list_highlight_pane_cp04

0x1e6d,	// (0x000185cc) list_single_graphic_popup_conf2_pane_g1

0x1779,	// (0x00017ed8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x00025c05) list_single_graphic_popup_conf2_pane_g

0x1e77,	// (0x000185d6) list_single_graphic_popup_conf2_pane_t1

0x1e85,	// (0x000185e4) bg_popup_call2_act_pane_cp01_ParamLimits

0x1e85,	// (0x000185e4) bg_popup_call2_act_pane_cp01

0x1f0f,	// (0x0001866e) call_type_pane_cp05_ParamLimits

0x1f0f,	// (0x0001866e) call_type_pane_cp05

0x1f63,	// (0x000186c2) popup_call2_audio_second_window_g1_ParamLimits

0x1f63,	// (0x000186c2) popup_call2_audio_second_window_g1

0x1fb7,	// (0x00018716) popup_call2_audio_second_window_g2_ParamLimits

0x1fb7,	// (0x00018716) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x00025c0a) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x00025c0a) popup_call2_audio_second_window_g

0x201c,	// (0x0001877b) popup_call2_audio_second_window_t1_ParamLimits

0x201c,	// (0x0001877b) popup_call2_audio_second_window_t1

0x20d7,	// (0x00018836) popup_call2_audio_second_window_t2_ParamLimits

0x20d7,	// (0x00018836) popup_call2_audio_second_window_t2

0x212a,	// (0x00018889) popup_call2_audio_second_window_t3_ParamLimits

0x212a,	// (0x00018889) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x00025c11) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x00025c11) popup_call2_audio_second_window_t

0x09d7,	// (0x00017136) bg_popup_call2_in_pane_cp02

0x09e1,	// (0x00017140) call_type_pane_cp04

0xab39,	// (0x00021298) popup_call2_audio_wait_window_g1

0xab41,	// (0x000212a0) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x00025c1a) popup_call2_audio_wait_window_g

0x09f9,	// (0x00017158) popup_call2_audio_wait_window_t3

0x221d,	// (0x0001897c) bg_popup_call2_act_pane_ParamLimits

0x221d,	// (0x0001897c) bg_popup_call2_act_pane

0x22dd,	// (0x00018a3c) call_type_pane_cp03_ParamLimits

0x22dd,	// (0x00018a3c) call_type_pane_cp03

0x2341,	// (0x00018aa0) popup_call2_audio_first_window_g1_ParamLimits

0x2341,	// (0x00018aa0) popup_call2_audio_first_window_g1

0x23b1,	// (0x00018b10) popup_call2_audio_first_window_g2_ParamLimits

0x23b1,	// (0x00018b10) popup_call2_audio_first_window_g2

0x2415,	// (0x00018b74) popup_call2_audio_first_window_g3_ParamLimits

0x2415,	// (0x00018b74) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x00025c1f) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x00025c1f) popup_call2_audio_first_window_g

0x249d,	// (0x00018bfc) popup_call2_audio_first_window_t1_ParamLimits

0x249d,	// (0x00018bfc) popup_call2_audio_first_window_t1

0x25a0,	// (0x00018cff) popup_call2_audio_first_window_t4_ParamLimits

0x25a0,	// (0x00018cff) popup_call2_audio_first_window_t4

0x2683,	// (0x00018de2) popup_call2_audio_first_window_t5_ParamLimits

0x2683,	// (0x00018de2) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x00025c2a) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x00025c2a) popup_call2_audio_first_window_t

0x0c2a,	// (0x00017389) bg_popup_call2_act_pane_g1

0x2ca2,	// (0x00019401) popup_cale_lunar_info_window_t1

0x2cb0,	// (0x0001940f) popup_cale_lunar_info_window_t2

0x2cbe,	// (0x0001941d) popup_cale_lunar_info_window_t3

0x09d7,	// (0x00017136) bg_popup_call2_bubble_pane

0x2784,	// (0x00018ee3) bg_popup_call2_in_pane_cp01_ParamLimits

0x2784,	// (0x00018ee3) bg_popup_call2_in_pane_cp01

0x06b3,	// (0x00016e12) call_type_pane_cp02

0xab49,	// (0x000212a8) popup_call2_audio_out_window_g1_ParamLimits

0xab49,	// (0x000212a8) popup_call2_audio_out_window_g1

0x27cc,	// (0x00018f2b) popup_call2_audio_out_window_g2_ParamLimits

0x27cc,	// (0x00018f2b) popup_call2_audio_out_window_g2

0xab75,	// (0x000212d4) popup_call2_audio_out_window_g3_ParamLimits

0xab75,	// (0x000212d4) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x00025c33) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x00025c33) popup_call2_audio_out_window_g

0x2803,	// (0x00018f62) popup_call2_audio_out_window_t1_ParamLimits

0x2803,	// (0x00018f62) popup_call2_audio_out_window_t1

0x2862,	// (0x00018fc1) popup_call2_audio_out_window_t2_ParamLimits

0x2862,	// (0x00018fc1) popup_call2_audio_out_window_t2

0x28b6,	// (0x00019015) popup_call2_audio_out_window_t3_ParamLimits

0x28b6,	// (0x00019015) popup_call2_audio_out_window_t3

0x28cc,	// (0x0001902b) popup_call2_audio_out_window_t4_ParamLimits

0x28cc,	// (0x0001902b) popup_call2_audio_out_window_t4

0x28e2,	// (0x00019041) popup_call2_audio_out_window_t5_ParamLimits

0x28e2,	// (0x00019041) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x00025c3c) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x00025c3c) popup_call2_audio_out_window_t

0x2946,	// (0x000190a5) bg_popup_call2_in_pane_ParamLimits

0x2946,	// (0x000190a5) bg_popup_call2_in_pane

0x29a2,	// (0x00019101) popup_call2_audio_in_window_g1_ParamLimits

0x29a2,	// (0x00019101) popup_call2_audio_in_window_g1

0x29da,	// (0x00019139) popup_call2_audio_in_window_g2_ParamLimits

0x29da,	// (0x00019139) popup_call2_audio_in_window_g2

0x2a12,	// (0x00019171) popup_call2_audio_in_window_g3_ParamLimits

0x2a12,	// (0x00019171) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x00025c49) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x00025c49) popup_call2_audio_in_window_g

0x2a6a,	// (0x000191c9) popup_call2_audio_in_window_t1_ParamLimits

0x2a6a,	// (0x000191c9) popup_call2_audio_in_window_t1

0x2aea,	// (0x00019249) popup_call2_audio_in_window_t2_ParamLimits

0x2aea,	// (0x00019249) popup_call2_audio_in_window_t2

0x2b6a,	// (0x000192c9) popup_call2_audio_in_window_t3_ParamLimits

0x2b6a,	// (0x000192c9) popup_call2_audio_in_window_t3

0x2b84,	// (0x000192e3) popup_call2_audio_in_window_t4_ParamLimits

0x2b84,	// (0x000192e3) popup_call2_audio_in_window_t4

0x2b96,	// (0x000192f5) popup_call2_audio_in_window_t5_ParamLimits

0x2b96,	// (0x000192f5) popup_call2_audio_in_window_t5

0x2bab,	// (0x0001930a) popup_call2_audio_in_window_t6_ParamLimits

0x2bab,	// (0x0001930a) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x00025c52) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x00025c52) popup_call2_audio_in_window_t

0x0c2a,	// (0x00017389) bg_popup_call2_in_pane_g1

0x2ccc,	// (0x0001942b) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x00025cba) popup_cale_lunar_info_window_t

0x0c32,	// (0x00017391) bg_popup_call2_rect_pane_ParamLimits

0x0c32,	// (0x00017391) bg_popup_call2_rect_pane

0x09d7,	// (0x00017136) call2_cli_visual_graphic_pane

0x09d7,	// (0x00017136) call2_cli_visual_text_pane

0x7514,	// (0x0001dc73) smil_status_volume_pane_g3

0x0002,

0x0c4a,	// (0x000173a9) call2_cli_visual_graphic_pane_g1

0x0c4a,	// (0x000173a9) call2_cli_visual_graphic_pane_g2

0x0c4a,	// (0x000173a9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x00025c5f) call2_cli_visual_graphic_pane_g

0x2bc0,	// (0x0001931f) bg_popup_call2_rect_pane_g1

0x0e45,	// (0x000175a4) bg_popup_call2_rect_pane_g2

0x2bc8,	// (0x00019327) bg_popup_call2_rect_pane_g3

0x2bd0,	// (0x0001932f) bg_popup_call2_rect_pane_g4

0x2bd8,	// (0x00019337) bg_popup_call2_rect_pane_g5

0x2be0,	// (0x0001933f) bg_popup_call2_rect_pane_g6

0x2be8,	// (0x00019347) bg_popup_call2_rect_pane_g7

0x2bf0,	// (0x0001934f) bg_popup_call2_rect_pane_g8

0x2bf8,	// (0x00019357) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x00025c66) bg_popup_call2_rect_pane_g

0x2c00,	// (0x0001935f) bg_popup_call2_bubble_pane_g1

0x2c08,	// (0x00019367) bg_popup_call2_bubble_pane_g2

0x2c10,	// (0x0001936f) bg_popup_call2_bubble_pane_g3

0x2c18,	// (0x00019377) bg_popup_call2_bubble_pane_g4

0x2c20,	// (0x0001937f) bg_popup_call2_bubble_pane_g5

0x2c28,	// (0x00019387) bg_popup_call2_bubble_pane_g6

0x2c30,	// (0x0001938f) bg_popup_call2_bubble_pane_g7

0x2c38,	// (0x00019397) bg_popup_call2_bubble_pane_g8

0x2c40,	// (0x0001939f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x00025c79) bg_popup_call2_bubble_pane_g

0x86e8,	// (0x0001ee47) aid_cale_week_size_cell_pane

0x0c32,	// (0x00017391) aid_cams_cif_uncrop_pane_ParamLimits

0x0c32,	// (0x00017391) aid_cams_cif_uncrop_pane

0x8d93,	// (0x0001f4f2) aid_cams_size_cell_ParamLimits

0x8d93,	// (0x0001f4f2) aid_cams_size_cell

0x8d9f,	// (0x0001f4fe) grid_cams_pane_ParamLimits

0x8dad,	// (0x0001f50c) linegrid_cams_pane_ParamLimits

0x8e7e,	// (0x0001f5dd) call_video_pane_t1

0x8e9b,	// (0x0001f5fa) call_video_pane_t2

0x0001,

0xf222,	// (0x00025981) call_video_pane_t

0x9367,	// (0x0001fac6) aid_cale_month_size_cell_pane_ParamLimits

0x9367,	// (0x0001fac6) aid_cale_month_size_cell_pane

0xf59f,	// (0x00025cfe) smil_status_volume_pane_g

0x7521,	// (0x0001dc80) volume_smil_pane_ParamLimits

0x6c1d,	// (0x0001d37c) aid_popup2_width_pane

0x862e,	// (0x0001ed8d) cell_qdial_pane_g4_ParamLimits

0x862e,	// (0x0001ed8d) cell_qdial_pane_g4

0xa167,	// (0x000208c6) aid_blid_cardinal_pane_ParamLimits

0xa177,	// (0x000208d6) aid_blid_destination_pane_ParamLimits

0xa177,	// (0x000208d6) aid_blid_destination_pane

0x0c32,	// (0x00017391) bg_popup_call_poc_act_pane_ParamLimits

0x0c32,	// (0x00017391) bg_popup_call_poc_act_pane

0x0c32,	// (0x00017391) bg_popup_call_poc_inact_pane_ParamLimits

0x0c32,	// (0x00017391) bg_popup_call_poc_inact_pane

0x2c48,	// (0x000193a7) bg_popup_call_poc_act_pane_g1

0x2c50,	// (0x000193af) bg_popup_call_poc_act_pane_g2

0x2c58,	// (0x000193b7) bg_popup_call_poc_act_pane_g3

0x2c18,	// (0x00019377) bg_popup_call_poc_act_pane_g4

0x2c20,	// (0x0001937f) bg_popup_call_poc_act_pane_g5

0x2c60,	// (0x000193bf) bg_popup_call_poc_act_pane_g6

0x2c30,	// (0x0001938f) bg_popup_call_poc_act_pane_g7

0x2c68,	// (0x000193c7) bg_popup_call_poc_act_pane_g8

0x09d7,	// (0x00017136) main_usb_pane

0x73de,	// (0x0001db3d) popup_cale_lunar_info_window

0x91b3,	// (0x0001f912) im_reading_pane_t1_ParamLimits

0x1066,	// (0x000177c5) list_im_pane_ParamLimits

0x1077,	// (0x000177d6) scroll_pane_cp07_ParamLimits

0x09d7,	// (0x00017136) grid_highlight_pane_cp012

0x0c32,	// (0x00017391) mup_scale_pane_ParamLimits

0x2415,	// (0x00018b74) main_usb_pane_g1_ParamLimits

0x2415,	// (0x00018b74) main_usb_pane_g1

0xabcb,	// (0x0002132a) main_usb_pane_g2_ParamLimits

0xabcb,	// (0x0002132a) main_usb_pane_g2

0x0001,

0xf544,	// (0x00025ca3) main_usb_pane_g_ParamLimits

0xf544,	// (0x00025ca3) main_usb_pane_g

0xabd7,	// (0x00021336) main_usb_pane_t1_ParamLimits

0xabd7,	// (0x00021336) main_usb_pane_t1

0xabe9,	// (0x00021348) main_usb_pane_t2_ParamLimits

0xabe9,	// (0x00021348) main_usb_pane_t2

0xabfb,	// (0x0002135a) main_usb_pane_t3_ParamLimits

0xabfb,	// (0x0002135a) main_usb_pane_t3

0xac0d,	// (0x0002136c) main_usb_pane_t4_ParamLimits

0xac0d,	// (0x0002136c) main_usb_pane_t4

0xac1f,	// (0x0002137e) main_usb_pane_t5_ParamLimits

0xac1f,	// (0x0002137e) main_usb_pane_t5

0xac31,	// (0x00021390) main_usb_pane_t6_ParamLimits

0xac31,	// (0x00021390) main_usb_pane_t6

0x0005,

0xf549,	// (0x00025ca8) main_usb_pane_t_ParamLimits

0xa106,	// (0x00020865) aid_text_placing

0xa111,	// (0x00020870) main_location2_pane_t1_ParamLimits

0xa127,	// (0x00020886) main_location2_pane_t2_ParamLimits

0xa13d,	// (0x0002089c) main_location2_pane_t3_ParamLimits

0xa153,	// (0x000208b2) main_location2_pane_t4_ParamLimits

0xa153,	// (0x000208b2) main_location2_pane_t4

0xf363,	// (0x00025ac2) main_location2_pane_t_ParamLimits

0x0c60,	// (0x000173bf) find_pinb_pane_g2_ParamLimits

0x0c60,	// (0x000173bf) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00025839) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00025839) find_pinb_pane_g

0x0c6c,	// (0x000173cb) find_pinb_pane_t1_ParamLimits

0x0c7e,	// (0x000173dd) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0002583e) find_pinb_pane_t_ParamLimits

0x09d7,	// (0x00017136) main_call3_pane

0x991a,	// (0x00020079) cale_month_day_heading_pane_t1_ParamLimits

0x999c,	// (0x000200fb) cale_month_day_heading_pane_t2_ParamLimits

0x9a15,	// (0x00020174) cale_month_day_heading_pane_t3_ParamLimits

0x9a8e,	// (0x000201ed) cale_month_day_heading_pane_t4_ParamLimits

0x9b07,	// (0x00020266) cale_month_day_heading_pane_t5_ParamLimits

0x9b88,	// (0x000202e7) cale_month_day_heading_pane_t6_ParamLimits

0x9c11,	// (0x00020370) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x000259b9) cale_month_day_heading_pane_t_ParamLimits

0x12cd,	// (0x00017a2c) smil_status_volume_pane

0xa721,	// (0x00020e80) postcard_address_pane_ParamLimits

0xa721,	// (0x00020e80) postcard_address_pane

0xa72f,	// (0x00020e8e) postcard_message_pane_ParamLimits

0xa72f,	// (0x00020e8e) postcard_message_pane

0xaba1,	// (0x00021300) call2_cli_visual_pane_t1_ParamLimits

0xaba1,	// (0x00021300) call2_cli_visual_pane_t1

0x2e6e,	// (0x000195cd) postcard_message_pane_t1_ParamLimits

0x2e6e,	// (0x000195cd) postcard_message_pane_t1

0x2e56,	// (0x000195b5) postcard_address_pane_t1_ParamLimits

0x2e56,	// (0x000195b5) postcard_address_pane_t1

0xaf68,	// (0x000216c7) popup_call3_audio_in_window_ParamLimits

0xaf68,	// (0x000216c7) popup_call3_audio_in_window

0xae46,	// (0x000215a5) bg_popup_call3_in_pane_ParamLimits

0xae46,	// (0x000215a5) bg_popup_call3_in_pane

0xaeae,	// (0x0002160d) popup_call3_audio_in_window_g1_ParamLimits

0xaeae,	// (0x0002160d) popup_call3_audio_in_window_g1

0xaec6,	// (0x00021625) popup_call3_audio_in_window_g2_ParamLimits

0xaec6,	// (0x00021625) popup_call3_audio_in_window_g2

0xaede,	// (0x0002163d) popup_call3_audio_in_window_g3_ParamLimits

0xaede,	// (0x0002163d) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x00025d05) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x00025d05) popup_call3_audio_in_window_g

0xaf06,	// (0x00021665) popup_call3_audio_in_window_t1_ParamLimits

0xaf06,	// (0x00021665) popup_call3_audio_in_window_t1

0xaf2e,	// (0x0002168d) popup_call3_audio_in_window_t2_ParamLimits

0xaf2e,	// (0x0002168d) popup_call3_audio_in_window_t2

0xaf56,	// (0x000216b5) popup_call3_audio_in_window_t3_ParamLimits

0xaf56,	// (0x000216b5) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x00025d0e) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x00025d0e) popup_call3_audio_in_window_t

0x0f54,	// (0x000176b3) bg_popup_call3_rect_pane

0x2bc0,	// (0x0001931f) bg_popup_call3_rect_pane_g1

0x0e45,	// (0x000175a4) bg_popup_call3_rect_pane_g2

0x2bc8,	// (0x00019327) bg_popup_call3_rect_pane_g3

0x2bd0,	// (0x0001932f) bg_popup_call3_rect_pane_g4

0x2bd8,	// (0x00019337) bg_popup_call3_rect_pane_g5

0x2be0,	// (0x0001933f) bg_popup_call3_rect_pane_g6

0x2be8,	// (0x00019347) bg_popup_call3_rect_pane_g7

0x050c,	// (0x00016c6b) mup_visualizer_osc_pane

0x050c,	// (0x00016c6b) mup_visualizer_spec_pane

0xae66,	// (0x000215c5) call3_video_qcif_pane_ParamLimits

0xae66,	// (0x000215c5) call3_video_qcif_pane

0xae78,	// (0x000215d7) call3_video_qcif_uncrop_pane_ParamLimits

0xae78,	// (0x000215d7) call3_video_qcif_uncrop_pane

0xae88,	// (0x000215e7) call3_video_subqcif_pane_ParamLimits

0xae88,	// (0x000215e7) call3_video_subqcif_pane

0xae9c,	// (0x000215fb) call3_video_subqcif_uncrop_pane_ParamLimits

0xae9c,	// (0x000215fb) call3_video_subqcif_uncrop_pane

0xaef6,	// (0x00021655) popup_call3_audio_in_window_g4_ParamLimits

0xaef6,	// (0x00021655) popup_call3_audio_in_window_g4

0x050c,	// (0x00016c6b) mup_spec_half_pane

0x050c,	// (0x00016c6b) mup_spec_half_pane_cp

0x050c,	// (0x00016c6b) mup_osc_middle_pane

0x0fa9,	// (0x00017708) mup_visualizer_osc_pane_g1

0x2de7,	// (0x00019546) mup_spec_bar_pane_ParamLimits

0x2de7,	// (0x00019546) mup_spec_bar_pane

0x0fa9,	// (0x00017708) mup_spec_bar_pane_g1

0x0fa9,	// (0x00017708) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x00025b3c) mup_spec_bar_pane_g

0x86e8,	// (0x0001ee47) aid_cale_week_size_cell_pane_ParamLimits

0x8702,	// (0x0001ee61) bg_cale_heading_pane_ParamLimits

0x872b,	// (0x0001ee8a) bg_cale_pane_cp01_ParamLimits

0x874d,	// (0x0001eeac) cale_week_corner_pane_ParamLimits

0x876c,	// (0x0001eecb) cale_week_day_heading_pane_ParamLimits

0x879a,	// (0x0001eef9) cale_week_scroll_pane_g1_ParamLimits

0x87be,	// (0x0001ef1d) cale_week_scroll_pane_g2_ParamLimits

0x87d6,	// (0x0001ef35) cale_week_scroll_pane_g3_ParamLimits

0x87ee,	// (0x0001ef4d) cale_week_scroll_pane_g4_ParamLimits

0x8806,	// (0x0001ef65) cale_week_scroll_pane_g5_ParamLimits

0x881e,	// (0x0001ef7d) cale_week_scroll_pane_g6_ParamLimits

0x883e,	// (0x0001ef9d) cale_week_scroll_pane_g7_ParamLimits

0x885e,	// (0x0001efbd) cale_week_scroll_pane_g8_ParamLimits

0x887e,	// (0x0001efdd) cale_week_scroll_pane_g9_ParamLimits

0x889b,	// (0x0001effa) cale_week_scroll_pane_g10_ParamLimits

0x88b8,	// (0x0001f017) cale_week_scroll_pane_g11_ParamLimits

0x88d7,	// (0x0001f036) cale_week_scroll_pane_g12_ParamLimits

0x88fc,	// (0x0001f05b) cale_week_scroll_pane_g13_ParamLimits

0x8925,	// (0x0001f084) cale_week_scroll_pane_g14_ParamLimits

0x894e,	// (0x0001f0ad) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x000258ca) cale_week_scroll_pane_g_ParamLimits

0x8997,	// (0x0001f0f6) cale_week_time_pane_ParamLimits

0x89b7,	// (0x0001f116) grid_cale_week_pane_ParamLimits

0x0eca,	// (0x00017629) listscroll_cale_week_pane_t1

0x0edc,	// (0x0001763b) scroll_pane_cp08_ParamLimits

0x93df,	// (0x0001fb3e) cale_month_corner_pane_ParamLimits

0x1297,	// (0x000179f6) cale_month_pane_t1

0x98a1,	// (0x00020000) cale_month_week_pane_ParamLimits

0x2415,	// (0x00018b74) popup_call_status_window_g1_ParamLimits

0x9fb9,	// (0x00020718) popup_call_status_window_g2_ParamLimits

0x9fc5,	// (0x00020724) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x00025a49) popup_call_status_window_g_ParamLimits

0x168e,	// (0x00017ded) aid_call2_pane

0xa5db,	// (0x00020d3a) msg_header_pane_g1

0xa721,	// (0x00020e80) postcard_address2_pane_ParamLimits

0xa721,	// (0x00020e80) postcard_address2_pane

0xa72f,	// (0x00020e8e) postcard_message2_pane_ParamLimits

0xa72f,	// (0x00020e8e) postcard_message2_pane

0xae2c,	// (0x0002158b) message2_row_pane_ParamLimits

0xae2c,	// (0x0002158b) message2_row_pane

0x2da1,	// (0x00019500) address2_row_pane_ParamLimits

0x2da1,	// (0x00019500) address2_row_pane

0x2db4,	// (0x00019513) postcard_message2_row_pane_g1

0x2dbc,	// (0x0001951b) postcard_message2_row_pane_t1

0x2db4,	// (0x00019513) address2_row_pane_g1

0x2dbc,	// (0x0001951b) address2_row_pane_t1

0x8c0b,	// (0x0001f36a) aid_size_cell_vorec

0x09d7,	// (0x00017136) main_rss_pane

0x2dca,	// (0x00019529) rss_list_single_pane_ParamLimits

0x2dca,	// (0x00019529) rss_list_single_pane

0x2dd8,	// (0x00019537) rss_list_single_pane_t1

0x2dd8,	// (0x00019537) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x00025cf9) rss_list_single_pane_t

0x09d7,	// (0x00017136) main_camera2_pane

0x09d7,	// (0x00017136) main_video2_pane

0x6e9f,	// (0x0001d5fe) cams_zoom_pane_cp2_ParamLimits

0x6e9f,	// (0x0001d5fe) cams_zoom_pane_cp2

0x6e9f,	// (0x0001d5fe) image2_vga_pane_ParamLimits

0x6e9f,	// (0x0001d5fe) image2_vga_pane

0x1729,	// (0x00017e88) main_camera2_pane_g1_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g1

0x1729,	// (0x00017e88) main_camera2_pane_g2_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g2

0x1729,	// (0x00017e88) main_camera2_pane_g3_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g3

0x1729,	// (0x00017e88) main_camera2_pane_g4_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g4

0x1729,	// (0x00017e88) main_camera2_pane_g5_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g5

0x1729,	// (0x00017e88) main_camera2_pane_g6_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g6

0x1729,	// (0x00017e88) main_camera2_pane_g7_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g7

0x1729,	// (0x00017e88) main_camera2_pane_g8_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x00025d15) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x00025d15) main_camera2_pane_g

0x7544,	// (0x0001dca3) main_camera2_pane_t1_ParamLimits

0x7544,	// (0x0001dca3) main_camera2_pane_t1

0x7544,	// (0x0001dca3) main_camera2_pane_t2_ParamLimits

0x7544,	// (0x0001dca3) main_camera2_pane_t2

0x7544,	// (0x0001dca3) main_camera2_pane_t3_ParamLimits

0x7544,	// (0x0001dca3) main_camera2_pane_t3

0x7544,	// (0x0001dca3) main_camera2_pane_t4_ParamLimits

0x7544,	// (0x0001dca3) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x00025d28) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x00025d28) main_camera2_pane_t

0x756c,	// (0x0001dccb) cams_zoom_pane_cp4_ParamLimits

0x756c,	// (0x0001dccb) cams_zoom_pane_cp4

0x7377,	// (0x0001dad6) image2_cif_pane_ParamLimits

0x7377,	// (0x0001dad6) image2_cif_pane

0x6e9f,	// (0x0001d5fe) image2_subqcif_pane_ParamLimits

0x6e9f,	// (0x0001d5fe) image2_subqcif_pane

0x757a,	// (0x0001dcd9) main_video2_pane_g1_ParamLimits

0x757a,	// (0x0001dcd9) main_video2_pane_g1

0x757a,	// (0x0001dcd9) main_video2_pane_g2_ParamLimits

0x757a,	// (0x0001dcd9) main_video2_pane_g2

0x757a,	// (0x0001dcd9) main_video2_pane_g3_ParamLimits

0x757a,	// (0x0001dcd9) main_video2_pane_g3

0x757a,	// (0x0001dcd9) main_video2_pane_g4_ParamLimits

0x757a,	// (0x0001dcd9) main_video2_pane_g4

0x757a,	// (0x0001dcd9) main_video2_pane_g5_ParamLimits

0x757a,	// (0x0001dcd9) main_video2_pane_g5

0x757a,	// (0x0001dcd9) main_video2_pane_g6_ParamLimits

0x757a,	// (0x0001dcd9) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x00025d37) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x00025d37) main_video2_pane_g

0x7588,	// (0x0001dce7) main_video2_pane_t1_ParamLimits

0x7588,	// (0x0001dce7) main_video2_pane_t1

0x7588,	// (0x0001dce7) main_video2_pane_t2_ParamLimits

0x7588,	// (0x0001dce7) main_video2_pane_t2

0x7588,	// (0x0001dce7) main_video2_pane_t3_ParamLimits

0x7588,	// (0x0001dce7) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x00025d44) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x00025d44) main_video2_pane_t

0xacc7,	// (0x00021426) call_muted_g2

0x0001,

0xf58c,	// (0x00025ceb) call_muted_g

0x09d7,	// (0x00017136) main_mup2_pane

0x0cc9,	// (0x00017428) main_mup2_pane_g1_ParamLimits

0x0cc9,	// (0x00017428) main_mup2_pane_g1

0x0cc9,	// (0x00017428) main_mup2_pane_g2_ParamLimits

0x0cc9,	// (0x00017428) main_mup2_pane_g2

0x46dc,	// (0x0001ae3b) main_mup_pane_g13_cp1

0x6ead,	// (0x0001d60c) mup_volume_pane_cp1

0x0cc9,	// (0x00017428) main_mup2_pane_g4_ParamLimits

0x0cc9,	// (0x00017428) main_mup2_pane_g4

0x0cc9,	// (0x00017428) main_mup2_pane_g5_ParamLimits

0x0cc9,	// (0x00017428) main_mup2_pane_g5

0x0cc9,	// (0x00017428) main_mup2_pane_g6_ParamLimits

0x0cc9,	// (0x00017428) main_mup2_pane_g6

0x0cc9,	// (0x00017428) main_mup2_pane_g7_ParamLimits

0x0cc9,	// (0x00017428) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x00025d4b) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x00025d4b) main_mup2_pane_g

0x0cd7,	// (0x00017436) main_mup2_pane_t1_ParamLimits

0x0cd7,	// (0x00017436) main_mup2_pane_t1

0x0cd7,	// (0x00017436) main_mup2_pane_t2_ParamLimits

0x0cd7,	// (0x00017436) main_mup2_pane_t2

0x0cd7,	// (0x00017436) main_mup2_pane_t3_ParamLimits

0x0cd7,	// (0x00017436) main_mup2_pane_t3

0x0cd7,	// (0x00017436) main_mup2_pane_t4_ParamLimits

0x0cd7,	// (0x00017436) main_mup2_pane_t4

0x0cd7,	// (0x00017436) main_mup2_pane_t5_ParamLimits

0x0cd7,	// (0x00017436) main_mup2_pane_t5

0x0cd7,	// (0x00017436) main_mup2_pane_t6_ParamLimits

0x0cd7,	// (0x00017436) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x00025d5a) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x00025d5a) main_mup2_pane_t

0x2eba,	// (0x00019619) mup2_visualizer_pane_ParamLimits

0x2eba,	// (0x00019619) mup2_visualizer_pane

0x2eba,	// (0x00019619) mup_progress_pane_cp_ParamLimits

0x2eba,	// (0x00019619) mup_progress_pane_cp

0x75b2,	// (0x0001dd11) mup_volume_pane_cp_ParamLimits

0x75b2,	// (0x0001dd11) mup_volume_pane_cp

0x0cad,	// (0x0001740c) mup2_visualizer_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) mup2_visualizer_pane_g1

0x0cbb,	// (0x0001741a) mup2_visualizer_pane_g2_ParamLimits

0x0cbb,	// (0x0001741a) mup2_visualizer_pane_g2

0x0cbb,	// (0x0001741a) mup2_visualizer_pane_g3_ParamLimits

0x0cbb,	// (0x0001741a) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00025843) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00025843) mup2_visualizer_pane_g

0x1cd6,	// (0x00018435) aid_size_cell_fmradio

0x734e,	// (0x0001daad) aid_height_parent_landcape

0x10f5,	// (0x00017854) wml_content_pane_cp

0x10fd,	// (0x0001785c) wml_tabs_pane

0x1106,	// (0x00017865) popup_wml_miniature_window

0x110e,	// (0x0001786d) scroll_pane_cp021

0x1122,	// (0x00017881) wml_content_pane_comp8

0x09d7,	// (0x00017136) bg_popup_sub_pane_cp05

0x2ede,	// (0x0001963d) popup_wml_miniature_window_g1

0x2ee6,	// (0x00019645) wml_miniature_view_pane

0xaf77,	// (0x000216d6) aid_size_wml_view

0xaf7f,	// (0x000216de) wml_miniature_view_pane_g1

0xaf88,	// (0x000216e7) wml_miniature_view_pane_g2

0xaf91,	// (0x000216f0) wml_miniature_view_pane_g3

0xaf99,	// (0x000216f8) wml_miniature_view_pane_g4

0xafa1,	// (0x00021700) wml_miniature_view_pane_g5

0xafa9,	// (0x00021708) wml_miniature_view_pane_g6

0xafb1,	// (0x00021710) wml_miniature_view_pane_g7

0xafb9,	// (0x00021718) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x00025d67) wml_miniature_view_pane_g

0x2eee,	// (0x0001964d) background_graphic_ParamLimits

0x2eee,	// (0x0001964d) background_graphic

0x2efa,	// (0x00019659) wml_tabs_2_pane

0x2f03,	// (0x00019662) wml_tabs_3_pane_ParamLimits

0x2f03,	// (0x00019662) wml_tabs_3_pane

0x2f15,	// (0x00019674) wml_tabs_4_pane_ParamLimits

0x2f15,	// (0x00019674) wml_tabs_4_pane

0x2f2b,	// (0x0001968a) wml_tabs_5_pane_ParamLimits

0x2f2b,	// (0x0001968a) wml_tabs_5_pane

0x2f45,	// (0x000196a4) wml_tabs_pane_g2_ParamLimits

0x2f45,	// (0x000196a4) wml_tabs_pane_g2

0x2f5a,	// (0x000196b9) wml_tabs_pane_g3_ParamLimits

0x2f5a,	// (0x000196b9) wml_tabs_pane_g3

0x2f6f,	// (0x000196ce) wml_tabs_2_active_pane_ParamLimits

0x2f6f,	// (0x000196ce) wml_tabs_2_active_pane

0x2f6f,	// (0x000196ce) wml_tabs_2_passive_pane_ParamLimits

0x2f6f,	// (0x000196ce) wml_tabs_2_passive_pane

0xafc1,	// (0x00021720) wml_tabs_3_active_pane_cp_ParamLimits

0xafc1,	// (0x00021720) wml_tabs_3_active_pane_cp

0xafd4,	// (0x00021733) wml_tabs_3_passive_pane_ParamLimits

0xafd4,	// (0x00021733) wml_tabs_3_passive_pane

0xafe5,	// (0x00021744) wml_tabs_3_passive_pane_cp_ParamLimits

0xafe5,	// (0x00021744) wml_tabs_3_passive_pane_cp

0xaffa,	// (0x00021759) tabs_4_active_pane

0xb002,	// (0x00021761) tabs_4_passive_pane

0xb00a,	// (0x00021769) tabs_4_passive_pane_cp

0xb012,	// (0x00021771) tabs_4_passive_pane_cp2

0xabc3,	// (0x00021322) aid_height_text

0x2eba,	// (0x00019619) mup_volume_cont_pane_ParamLimits

0x2eba,	// (0x00019619) mup_volume_cont_pane

0x050c,	// (0x00016c6b) aid_size_cell_pinb

0x050c,	// (0x00016c6b) aid_size_list_pinb

0x2eba,	// (0x00019619) mup2_volume_cont_pane_ParamLimits

0x2eba,	// (0x00019619) mup2_volume_cont_pane

0x759c,	// (0x0001dcfb) mup2_volume_cont_pane_g1_ParamLimits

0x759c,	// (0x0001dcfb) mup2_volume_cont_pane_g1

0x6c29,	// (0x0001d388) aid_size_cell_touch_ParamLimits

0x6c29,	// (0x0001d388) aid_size_cell_touch

0x6eb7,	// (0x0001d616) touch_pane_ParamLimits

0x6eb7,	// (0x0001d616) touch_pane

0x6ead,	// (0x0001d60c) main_rss2_pane

0x2f9c,	// (0x000196fb) listscroll_rss2_pane

0x2fa5,	// (0x00019704) rss2_navigation_pane

0x2fad,	// (0x0001970c) list_rss2_pane

0x180d,	// (0x00017f6c) scroll_pane_cp22

0x2fb5,	// (0x00019714) rss2_navigation_pane_g1

0x2fbe,	// (0x0001971d) rss2_navigation_pane_g2

0x2fc6,	// (0x00019725) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x00025d78) rss2_navigation_pane_g

0x2fce,	// (0x0001972d) rss2_navigation_pane_t1

0xb01c,	// (0x0002177b) rss2_list_single_pane_ParamLimits

0xb01c,	// (0x0002177b) rss2_list_single_pane

0x2fdc,	// (0x0001973b) rss2_list_single_pane_t2

0x2fea,	// (0x00019749) rss2_list_single_pane_t3_ParamLimits

0x2fea,	// (0x00019749) rss2_list_single_pane_t3

0x3007,	// (0x00019766) rss2_list_single_pane_t4

0x9e77,	// (0x000205d6) smil_status_pane_g1

0x7377,	// (0x0001dad6) main_image2_pane_ParamLimits

0x7377,	// (0x0001dad6) main_image2_pane

0x1729,	// (0x00017e88) main_camera2_pane_g9_ParamLimits

0x1729,	// (0x00017e88) main_camera2_pane_g9

0x7544,	// (0x0001dca3) main_camera2_pane_t5_ParamLimits

0x7544,	// (0x0001dca3) main_camera2_pane_t5

0x7558,	// (0x0001dcb7) main_camera2_pane_t6_ParamLimits

0x7558,	// (0x0001dcb7) main_camera2_pane_t6

0xb03f,	// (0x0002179e) main_image2_pane_g1_ParamLimits

0xb03f,	// (0x0002179e) main_image2_pane_g1

0xa8f8,	// (0x00021057) smil2_video_pane_ParamLimits

0xa8f8,	// (0x00021057) smil2_video_pane

0x6c5d,	// (0x0001d3bc) aid_zoom_text_primary_cp

0x6e54,	// (0x0001d5b3) popup_preview_fixed_window

0x105e,	// (0x000177bd) im_reading_pane_g1

0x7536,	// (0x0001dc95) cams2_bc_adjust_pane_cp_ParamLimits

0x7536,	// (0x0001dc95) cams2_bc_adjust_pane_cp

0x6e9f,	// (0x0001d5fe) cams2_bc_adjust_pane_ParamLimits

0x6e9f,	// (0x0001d5fe) cams2_bc_adjust_pane

0x46dc,	// (0x0001ae3b) cams2_bc_adjust_pane_g1

0x6ead,	// (0x0001d60c) cams2_slider_pane

0x46dc,	// (0x0001ae3b) cams2_slider_pane_g1

0x46dc,	// (0x0001ae3b) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x00025d7f) cams2_slider_pane_g

0x6f28,	// (0x0001d687) calc_display_pane_ParamLimits

0x6f46,	// (0x0001d6a5) calc_paper_pane_ParamLimits

0x6f62,	// (0x0001d6c1) grid_calc_pane_ParamLimits

0x72ad,	// (0x0001da0c) popup_clock_digital_window_t1_ParamLimits

0x1c73,	// (0x000183d2) main_image_pane_t1

0x6f0e,	// (0x0001d66d) aid_size_cell_calc_ParamLimits

0x6f0e,	// (0x0001d66d) aid_size_cell_calc

0x73b4,	// (0x0001db13) popup_blid_sat_info2_window_ParamLimits

0x73b4,	// (0x0001db13) popup_blid_sat_info2_window

0x3015,	// (0x00019774) aid_size_cell_blid

0x2eba,	// (0x00019619) bg_popup_window_pane_cp07

0x3032,	// (0x00019791) grid_popup_blid_pane

0x303c,	// (0x0001979b) heading_pane_cp05_ParamLimits

0x303c,	// (0x0001979b) heading_pane_cp05

0x3106,	// (0x00019865) cell_popup_blid_pane_ParamLimits

0x3106,	// (0x00019865) cell_popup_blid_pane

0x3130,	// (0x0001988f) cell_popup_blid_pane_g1

0x3138,	// (0x00019897) cell_popup_blid_pane_t1

0x2eba,	// (0x00019619) mup2_indicator_pane_ParamLimits

0x2eba,	// (0x00019619) mup2_indicator_pane

0x050c,	// (0x00016c6b) mup2_visualizer_osc_pane

0x2ec8,	// (0x00019627) mup2_visualizer_spec_pane_ParamLimits

0x2ec8,	// (0x00019627) mup2_visualizer_spec_pane

0x050c,	// (0x00016c6b) mup2_spec_half_pane

0x050c,	// (0x00016c6b) mup2_spec_half_pane_cp

0x3146,	// (0x000198a5) mup2_spec_bar_pane_ParamLimits

0x3146,	// (0x000198a5) mup2_spec_bar_pane

0x0fa9,	// (0x00017708) mup2_spec_bar_pane_g1

0x3165,	// (0x000198c4) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x00025da5) mup2_spec_bar_pane_g

0x050c,	// (0x00016c6b) mup2_osc_middle_pane

0x0fa9,	// (0x00017708) mup2_visualizer_osc_pane_g1

0x05af,	// (0x00016d0e) popup_number_entry_window_t1_ParamLimits

0x05c2,	// (0x00016d21) popup_number_entry_window_t2_ParamLimits

0x05d4,	// (0x00016d33) popup_number_entry_window_t3_ParamLimits

0x05e6,	// (0x00016d45) popup_number_entry_window_t5_ParamLimits

0x05e6,	// (0x00016d45) popup_number_entry_window_t5

0xf085,	// (0x000257e4) popup_number_entry_window_t_ParamLimits

0x061b,	// (0x00016d7a) text_title_cp2_ParamLimits

0x72ec,	// (0x0001da4b) aid_hotspot_pointer_text2_pane

0x7342,	// (0x0001daa1) main_viewer_pane_g9_ParamLimits

0x7342,	// (0x0001daa1) main_viewer_pane_g9

0x1297,	// (0x000179f6) cale_month_pane_t1_ParamLimits

0x1302,	// (0x00017a61) bg_cale_pane_ParamLimits

0x131a,	// (0x00017a79) list_cale_pane_ParamLimits

0x132b,	// (0x00017a8a) listscroll_cale_day_pane_t1

0x133d,	// (0x00017a9c) scroll_pane_cp09_ParamLimits

0xa33d,	// (0x00020a9c) main_mup_eq_pane_t1_ParamLimits

0xa33d,	// (0x00020a9c) main_mup_eq_pane_t1

0xa359,	// (0x00020ab8) main_mup_eq_pane_t2_ParamLimits

0xa359,	// (0x00020ab8) main_mup_eq_pane_t2

0xa375,	// (0x00020ad4) main_mup_eq_pane_t3_ParamLimits

0xa375,	// (0x00020ad4) main_mup_eq_pane_t3

0xa38f,	// (0x00020aee) main_mup_eq_pane_t4_ParamLimits

0xa38f,	// (0x00020aee) main_mup_eq_pane_t4

0xa3a9,	// (0x00020b08) main_mup_eq_pane_t5_ParamLimits

0xa3a9,	// (0x00020b08) main_mup_eq_pane_t5

0xa3c3,	// (0x00020b22) main_mup_eq_pane_t6_ParamLimits

0xa3c3,	// (0x00020b22) main_mup_eq_pane_t6

0xa3d9,	// (0x00020b38) main_mup_eq_pane_t7_ParamLimits

0xa3d9,	// (0x00020b38) main_mup_eq_pane_t7

0xa3ef,	// (0x00020b4e) main_mup_eq_pane_t8_ParamLimits

0xa3ef,	// (0x00020b4e) main_mup_eq_pane_t8

0xa405,	// (0x00020b64) main_mup_eq_pane_t9_ParamLimits

0xa405,	// (0x00020b64) main_mup_eq_pane_t9

0xa421,	// (0x00020b80) main_mup_eq_pane_t10_ParamLimits

0xa421,	// (0x00020b80) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x00025b48) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x00025b48) main_mup_eq_pane_t

0xa4e6,	// (0x00020c45) mup_equalizer_pane_cp5_ParamLimits

0xa4fe,	// (0x00020c5d) mup_equalizer_pane_cp6_ParamLimits

0xa516,	// (0x00020c75) mup_equalizer_pane_cp7_ParamLimits

0x6ead,	// (0x0001d60c) main_gallery_pane

0x2e06,	// (0x00019565) smil2_volume_pane

0x2e21,	// (0x00019580) smil_status_volume_pane_g1_ParamLimits

0x2e0e,	// (0x0001956d) smil_status_volume_pane_g2_ParamLimits

0x7514,	// (0x0001dc73) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x00025cfe) smil_status_volume_pane_g_ParamLimits

0x2eba,	// (0x00019619) bg_popup_window_pane_cp07_ParamLimits

0x301d,	// (0x0001977c) blid_firmament_pane

0x0c9f,	// (0x000173fe) aid_size_cell_gallery_ParamLimits

0x0c9f,	// (0x000173fe) aid_size_cell_gallery

0x0c9f,	// (0x000173fe) grid_gallery_pane_ParamLimits

0x0c9f,	// (0x000173fe) grid_gallery_pane

0x1a46,	// (0x000181a5) cell_gallery_pane_ParamLimits

0x1a46,	// (0x000181a5) cell_gallery_pane

0x0581,	// (0x00016ce0) bg_cell_gallery_focus_pane_ParamLimits

0x0581,	// (0x00016ce0) bg_cell_gallery_focus_pane

0x0cad,	// (0x0001740c) cell_gallery_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) cell_gallery_pane_g1

0x0cad,	// (0x0001740c) cell_gallery_pane_g2_ParamLimits

0x0cad,	// (0x0001740c) cell_gallery_pane_g2

0x0cad,	// (0x0001740c) cell_gallery_pane_g3_ParamLimits

0x0cad,	// (0x0001740c) cell_gallery_pane_g3

0x0cbb,	// (0x0001741a) cell_gallery_pane_g4_ParamLimits

0x0cbb,	// (0x0001741a) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x00025daa) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x00025daa) cell_gallery_pane_g

0x316f,	// (0x000198ce) bg_cell_gallery_focus_pane_g1

0x3177,	// (0x000198d6) bg_cell_gallery_focus_pane_g2

0x317f,	// (0x000198de) bg_cell_gallery_focus_pane_g3

0x3187,	// (0x000198e6) bg_cell_gallery_focus_pane_g4

0x318f,	// (0x000198ee) bg_cell_gallery_focus_pane_g5

0x3197,	// (0x000198f6) bg_cell_gallery_focus_pane_g6

0x319f,	// (0x000198fe) bg_cell_gallery_focus_pane_g7

0x31a7,	// (0x00019906) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x00025db3) bg_cell_gallery_focus_pane_g

0x31af,	// (0x0001990e) aid_firma_cardinal

0x31c3,	// (0x00019922) blid_firmament_pane_t1

0x31da,	// (0x00019939) blid_firmament_pane_t2

0x31f1,	// (0x00019950) blid_firmament_pane_t3

0x3208,	// (0x00019967) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x00025dc4) blid_firmament_pane_t

0x321f,	// (0x0001997e) blid_sat_info_pane

0x0fa9,	// (0x00017708) blid_sat_info_pane_g1

0x0fa9,	// (0x00017708) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x00025b3c) blid_sat_info_pane_g

0x322f,	// (0x0001998e) blid_sat_info_pane_t1

0x323d,	// (0x0001999c) smil2_volume_content_pane

0x3246,	// (0x000199a5) smil2_volume_pane_g1

0x0ddc,	// (0x0001753b) smil2_volume_content_pane_g1

0x324e,	// (0x000199ad) smil2_volume_content_pane_g2

0x3257,	// (0x000199b6) smil2_volume_content_pane_g3

0x3260,	// (0x000199bf) smil2_volume_content_pane_g4

0x3269,	// (0x000199c8) smil2_volume_content_pane_g5

0x3272,	// (0x000199d1) smil2_volume_content_pane_g6

0x327b,	// (0x000199da) smil2_volume_content_pane_g7

0x3284,	// (0x000199e3) smil2_volume_content_pane_g8

0x328d,	// (0x000199ec) smil2_volume_content_pane_g9

0x3296,	// (0x000199f5) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x00025dcd) smil2_volume_content_pane_g

0x8a78,	// (0x0001f1d7) cale_week_day_heading_pane_t1_ParamLimits

0x8aa0,	// (0x0001f1ff) cale_week_day_heading_pane_t2_ParamLimits

0x8acd,	// (0x0001f22c) cale_week_day_heading_pane_t3_ParamLimits

0x8afa,	// (0x0001f259) cale_week_day_heading_pane_t4_ParamLimits

0x8b27,	// (0x0001f286) cale_week_day_heading_pane_t5_ParamLimits

0x8b54,	// (0x0001f2b3) cale_week_day_heading_pane_t6_ParamLimits

0x8b81,	// (0x0001f2e0) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x000258eb) cale_week_day_heading_pane_t_ParamLimits

0x0ef9,	// (0x00017658) bg_cale_side_pane_ParamLimits

0x70bd,	// (0x0001d81c) cale_week_time_pane_t1_ParamLimits

0x70e1,	// (0x0001d840) cale_week_time_pane_t2_ParamLimits

0x7105,	// (0x0001d864) cale_week_time_pane_t3_ParamLimits

0x7129,	// (0x0001d888) cale_week_time_pane_t4_ParamLimits

0x714d,	// (0x0001d8ac) cale_week_time_pane_t5_ParamLimits

0x7173,	// (0x0001d8d2) cale_week_time_pane_t6_ParamLimits

0x719b,	// (0x0001d8fa) cale_week_time_pane_t7_ParamLimits

0x71c7,	// (0x0001d926) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x000258fa) cale_week_time_pane_t_ParamLimits

0x8ba9,	// (0x0001f308) cell_cale_week_pane_g2_ParamLimits

0x0ef9,	// (0x00017658) bg_cale_side_pane_cp01_ParamLimits

0x9c9a,	// (0x000203f9) cale_month_week_pane_t1_ParamLimits

0x9cb3,	// (0x00020412) cale_month_week_pane_t2_ParamLimits

0x9ccc,	// (0x0002042b) cale_month_week_pane_t3_ParamLimits

0x9ce5,	// (0x00020444) cale_month_week_pane_t4_ParamLimits

0x9cfe,	// (0x0002045d) cale_month_week_pane_t5_ParamLimits

0x9d1b,	// (0x0002047a) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x000259c8) cale_month_week_pane_t_ParamLimits

0x7201,	// (0x0001d960) cell_cale_month_pane_g1_ParamLimits

0x6ead,	// (0x0001d60c) main_cale_event_viewer_pane

0x050c,	// (0x00016c6b) listscroll_cale_event_viewer_pane

0x329f,	// (0x000199fe) list_cale_ev_pane

0x32a7,	// (0x00019a06) scroll_pane_cp023

0xb04b,	// (0x000217aa) field_cale_ev_pane_ParamLimits

0xb04b,	// (0x000217aa) field_cale_ev_pane

0x32b3,	// (0x00019a12) field_cale_ev_content_pane_ParamLimits

0x32b3,	// (0x00019a12) field_cale_ev_content_pane

0x32bf,	// (0x00019a1e) field_cale_ev_pane_g1_ParamLimits

0x32bf,	// (0x00019a1e) field_cale_ev_pane_g1

0x32cb,	// (0x00019a2a) field_cale_ev_pane_g2_ParamLimits

0x32cb,	// (0x00019a2a) field_cale_ev_pane_g2

0x32e3,	// (0x00019a42) field_cale_ev_pane_g3_ParamLimits

0x32e3,	// (0x00019a42) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x00025de2) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x00025de2) field_cale_ev_pane_g

0x32fb,	// (0x00019a5a) field_cale_ev_pane_t1_ParamLimits

0x32fb,	// (0x00019a5a) field_cale_ev_pane_t1

0xb06f,	// (0x000217ce) field_cale_ev_content_pane_t1_ParamLimits

0xb06f,	// (0x000217ce) field_cale_ev_content_pane_t1

0x1af3,	// (0x00018252) bg_button_pane_cp01

0x86d6,	// (0x0001ee35) listscroll_cale_week_pane_ParamLimits

0x0ec1,	// (0x00017620) popup_toolbar_window_cp01

0x0eca,	// (0x00017629) listscroll_cale_week_pane_t1_ParamLimits

0x86d6,	// (0x0001ee35) listscroll_cale_day_pane_ParamLimits

0x0ec1,	// (0x00017620) popup_toolbar_window_cp02

0x132b,	// (0x00017a8a) listscroll_cale_day_pane_t1_ParamLimits

0x7365,	// (0x0001dac4) main_cale_month_pane_ParamLimits

0x74d3,	// (0x0001dc32) popup_toolbar_window_cp03_ParamLimits

0x74d3,	// (0x0001dc32) popup_toolbar_window_cp03

0xa808,	// (0x00020f67) main_image_pane_g2_ParamLimits

0xa808,	// (0x00020f67) main_image_pane_g2

0xa814,	// (0x00020f73) main_image_pane_g3_ParamLimits

0xa814,	// (0x00020f73) main_image_pane_g3

0x0002,

0xf47b,	// (0x00025bda) main_image_pane_g_ParamLimits

0xf47b,	// (0x00025bda) main_image_pane_g

0x1c73,	// (0x000183d2) main_image_pane_t1_ParamLimits

0xa820,	// (0x00020f7f) main_image_pane_t2_ParamLimits

0xa820,	// (0x00020f7f) main_image_pane_t2

0xa832,	// (0x00020f91) main_image_pane_t3_ParamLimits

0xa832,	// (0x00020f91) main_image_pane_t3

0xa844,	// (0x00020fa3) main_image_pane_t4_ParamLimits

0xa844,	// (0x00020fa3) main_image_pane_t4

0x0003,

0xf482,	// (0x00025be1) main_image_pane_t_ParamLimits

0xf482,	// (0x00025be1) main_image_pane_t

0xa856,	// (0x00020fb5) popup_image_details_window_cp01

0xa860,	// (0x00020fbf) popup_toobar_trans_pane_cp01_ParamLimits

0xa860,	// (0x00020fbf) popup_toobar_trans_pane_cp01

0x7415,	// (0x0001db74) popup_image_details_window_ParamLimits

0x7415,	// (0x0001db74) popup_image_details_window

0x7423,	// (0x0001db82) popup_image_focus_window

0x6e9f,	// (0x0001d5fe) camera2_autofocus_pane_ParamLimits

0x6e9f,	// (0x0001d5fe) camera2_autofocus_pane

0x050c,	// (0x00016c6b) bg_popup_sub_pane_cp06

0x3312,	// (0x00019a71) popup_image_focus_window_g1

0x331a,	// (0x00019a79) popup_image_focus_window_g2

0x3322,	// (0x00019a81) popup_image_focus_window_g3

0x332a,	// (0x00019a89) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x00025de9) popup_image_focus_window_g

0x3332,	// (0x00019a91) popup_image_focus_window_t1

0x3340,	// (0x00019a9f) popup_image_focus_window_t2

0x3350,	// (0x00019aaf) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x00025df2) popup_image_focus_window_t

0x0cad,	// (0x0001740c) camera2_autofocus_pane_g1

0x0581,	// (0x00016ce0) bg_tb_trans_pane_cp01

0x335e,	// (0x00019abd) popup_image_details_window_g1

0x3371,	// (0x00019ad0) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x00025e04) popup_image_details_window_g

0x339a,	// (0x00019af9) popup_image_details_window_t1

0x33ac,	// (0x00019b0b) popup_image_details_window_t2

0x33c5,	// (0x00019b24) popup_image_details_window_t3

0x33d9,	// (0x00019b38) popup_image_details_window_t4

0x33f4,	// (0x00019b53) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x00025e0b) popup_image_details_window_t

0x0d13,	// (0x00017472) bg_calc_paper_pane_ParamLimits

0x6ead,	// (0x0001d60c) grid_highlight_pane_cp013

0x6f8e,	// (0x0001d6ed) list_calc_pane_ParamLimits

0x6fa0,	// (0x0001d6ff) scroll_pane_cp024

0x0d41,	// (0x000174a0) bg_calc_display_pane_ParamLimits

0x6fa8,	// (0x0001d707) calc_display_pane_t1_ParamLimits

0x6fbd,	// (0x0001d71c) calc_display_pane_t2_ParamLimits

0x6fd2,	// (0x0001d731) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0002586b) calc_display_pane_t_ParamLimits

0x703d,	// (0x0001d79c) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00025888) cell_calc_pane_g

0x7046,	// (0x0001d7a5) cell_calc_pane_t1

0x0dba,	// (0x00017519) grid_highlight_pane_cp02_ParamLimits

0x0dd0,	// (0x0001752f) toolbar_button_pane_cp01_ParamLimits

0x0dd0,	// (0x0001752f) toolbar_button_pane_cp01

0x1cb8,	// (0x00018417) temp_image_control_pane_ParamLimits

0x1cb8,	// (0x00018417) temp_image_control_pane

0x7377,	// (0x0001dad6) main_mp3_pane

0x340e,	// (0x00019b6d) temp_image_control_pane_g1_ParamLimits

0x340e,	// (0x00019b6d) temp_image_control_pane_g1

0x341c,	// (0x00019b7b) temp_image_control_pane_g2_ParamLimits

0x341c,	// (0x00019b7b) temp_image_control_pane_g2

0x342e,	// (0x00019b8d) temp_image_control_pane_g3_ParamLimits

0x342e,	// (0x00019b8d) temp_image_control_pane_g3

0xb08a,	// (0x000217e9) temp_image_control_pane_g4_ParamLimits

0xb08a,	// (0x000217e9) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x00025e16) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x00025e16) temp_image_control_pane_g

0x340e,	// (0x00019b6d) main_mp3_pane_g1

0xb09b,	// (0x000217fa) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x00025e1f) main_mp3_pane_g

0x3463,	// (0x00019bc2) main_mp3_pane_t1

0x0cbb,	// (0x0001741a) main_camera_pane_g8_ParamLimits

0x0cbb,	// (0x0001741a) main_camera_pane_g8

0x8d4b,	// (0x0001f4aa) main_video_pane_g7_ParamLimits

0x8d4b,	// (0x0001f4aa) main_video_pane_g7

0x7544,	// (0x0001dca3) main_camera2_pane_t7_ParamLimits

0x7544,	// (0x0001dca3) main_camera2_pane_t7

0x10b5,	// (0x00017814) scroll_pane_cp025_ParamLimits

0x10b5,	// (0x00017814) scroll_pane_cp025

0x10c9,	// (0x00017828) scroll_pane_cp026_ParamLimits

0x10c9,	// (0x00017828) scroll_pane_cp026

0x10d8,	// (0x00017837) wml_content_pane_ParamLimits

0x6ead,	// (0x0001d60c) main_touch_calib_pane

0xb13f,	// (0x0002189e) main_touch_calib_pane_g1

0xb14b,	// (0x000218aa) main_touch_calib_pane_g2

0xb157,	// (0x000218b6) main_touch_calib_pane_g3

0xb163,	// (0x000218c2) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x00025e3d) main_touch_calib_pane_g

0xb16f,	// (0x000218ce) main_touch_calib_pane_t1

0xb186,	// (0x000218e5) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x00025e46) main_touch_calib_pane_t

0x1888,	// (0x00017fe7) mup_progress_pane_cp02

0x18a7,	// (0x00018006) navi_pane_g1

0x1909,	// (0x00018068) navi_pane_mp_t3

0x7377,	// (0x0001dad6) main_mp3_pane_ParamLimits

0xaddd,	// (0x0002153c) navi_pane_ParamLimits

0x340e,	// (0x00019b6d) main_mp3_pane_g1_ParamLimits

0xb09b,	// (0x000217fa) main_mp3_pane_g2_ParamLimits

0xb0a7,	// (0x00021806) main_mp3_pane_g3_ParamLimits

0xb0a7,	// (0x00021806) main_mp3_pane_g3

0xb0b3,	// (0x00021812) main_mp3_pane_g4_ParamLimits

0xb0b3,	// (0x00021812) main_mp3_pane_g4

0x0cad,	// (0x0001740c) main_mp3_pane_g5_ParamLimits

0x0cad,	// (0x0001740c) main_mp3_pane_g5

0x343e,	// (0x00019b9d) main_mp3_pane_g6_ParamLimits

0x343e,	// (0x00019b9d) main_mp3_pane_g6

0x344b,	// (0x00019baa) main_mp3_pane_g7_ParamLimits

0x344b,	// (0x00019baa) main_mp3_pane_g7

0x3457,	// (0x00019bb6) main_mp3_pane_g8_ParamLimits

0x3457,	// (0x00019bb6) main_mp3_pane_g8

0xf6c0,	// (0x00025e1f) main_mp3_pane_g_ParamLimits

0xb0bf,	// (0x0002181e) main_mp3_pane_t2

0xb0cf,	// (0x0002182e) main_mp3_pane_t3

0x3471,	// (0x00019bd0) main_mp3_pane_t4

0x347f,	// (0x00019bde) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x00025e30) main_mp3_pane_t

0x348d,	// (0x00019bec) mup_progress_pane_cp01

0x6c5d,	// (0x0001d3bc) aid_zoom_text_secondary2

0x329f,	// (0x000199fe) list_cale_ev2_pane

0x32a7,	// (0x00019a06) scroll_pane_cp023_ParamLimits

0xb1e1,	// (0x00021940) field_cale_ev2_pane_ParamLimits

0xb1e1,	// (0x00021940) field_cale_ev2_pane

0xb1fc,	// (0x0002195b) field_cale_ev2_pane_g1_ParamLimits

0xb1fc,	// (0x0002195b) field_cale_ev2_pane_g1

0xb208,	// (0x00021967) field_cale_ev2_pane_g2_ParamLimits

0xb208,	// (0x00021967) field_cale_ev2_pane_g2

0xb220,	// (0x0002197f) field_cale_ev2_pane_g3_ParamLimits

0xb220,	// (0x0002197f) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x00025e51) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x00025e51) field_cale_ev2_pane_g

0xb238,	// (0x00021997) field_cale_ev2_pane_t1_ParamLimits

0xb238,	// (0x00021997) field_cale_ev2_pane_t1

0xb24f,	// (0x000219ae) field_cale_ev2_pane_t2_ParamLimits

0xb24f,	// (0x000219ae) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x00025e5a) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x00025e5a) field_cale_ev2_pane_t

0xa6e7,	// (0x00020e46) main_postcard_pane_g5_ParamLimits

0xa6e7,	// (0x00020e46) main_postcard_pane_g5

0xa6f5,	// (0x00020e54) main_postcard_pane_g6_ParamLimits

0xa6f5,	// (0x00020e54) main_postcard_pane_g6

0x0c9f,	// (0x000173fe) camera2_autofocus_pane_cp_ParamLimits

0x0c9f,	// (0x000173fe) camera2_autofocus_pane_cp

0x7377,	// (0x0001dad6) main_mup3_pane

0xb2a7,	// (0x00021a06) main_mup3_pane_g1_ParamLimits

0xb2a7,	// (0x00021a06) main_mup3_pane_g1

0xb2c8,	// (0x00021a27) main_mup3_pane_g2_ParamLimits

0xb2c8,	// (0x00021a27) main_mup3_pane_g2

0xb33c,	// (0x00021a9b) main_mup3_pane_g3_ParamLimits

0xb33c,	// (0x00021a9b) main_mup3_pane_g3

0xb3a1,	// (0x00021b00) main_mup3_pane_g4_ParamLimits

0xb3a1,	// (0x00021b00) main_mup3_pane_g4

0xb406,	// (0x00021b65) main_mup3_pane_g5_ParamLimits

0xb406,	// (0x00021b65) main_mup3_pane_g5

0xb46b,	// (0x00021bca) main_mup3_pane_g6_ParamLimits

0xb46b,	// (0x00021bca) main_mup3_pane_g6

0x0cbb,	// (0x0001741a) main_mup3_pane_g7_ParamLimits

0x0cbb,	// (0x0001741a) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x00025e6a) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x00025e6a) main_mup3_pane_g

0xb4e5,	// (0x00021c44) main_mup3_pane_t1_ParamLimits

0xb4e5,	// (0x00021c44) main_mup3_pane_t1

0xb550,	// (0x00021caf) main_mup3_pane_t2_ParamLimits

0xb550,	// (0x00021caf) main_mup3_pane_t2

0xb619,	// (0x00021d78) main_mup3_pane_t4_ParamLimits

0xb619,	// (0x00021d78) main_mup3_pane_t4

0xb66d,	// (0x00021dcc) main_mup3_pane_t5_ParamLimits

0xb66d,	// (0x00021dcc) main_mup3_pane_t5

0xb725,	// (0x00021e84) main_mup3_pane_t6_ParamLimits

0xb725,	// (0x00021e84) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x00025e7b) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x00025e7b) main_mup3_pane_t

0xb7cf,	// (0x00021f2e) mup3_progress_pane_ParamLimits

0xb7cf,	// (0x00021f2e) mup3_progress_pane

0xb84d,	// (0x00021fac) popup_mup3_control_window_ParamLimits

0xb84d,	// (0x00021fac) popup_mup3_control_window

0x34a1,	// (0x00019c00) popup_mup3_text_window

0xb86a,	// (0x00021fc9) mup3_progress_pane_t1

0xb888,	// (0x00021fe7) mup3_progress_pane_t2

0x34a9,	// (0x00019c08) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x00025e88) mup3_progress_pane_t

0x34c6,	// (0x00019c25) mup_progress_pane_cp03

0x050c,	// (0x00016c6b) bg_tb_trans_pane_cp04

0xb8a6,	// (0x00022005) mup3_volume_pane

0xb8ae,	// (0x0002200d) popup_mup3_control_window_g1

0x3cfd,	// (0x0001a45c) mup3_volume_pane_g1

0x3d06,	// (0x0001a465) mup3_volume_pane_g2

0x3d0f,	// (0x0001a46e) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x00025e8f) mup3_volume_pane_g

0x050c,	// (0x00016c6b) bg_tb_trans_pane_cp03

0x34d6,	// (0x00019c35) popup_mup3_text_window_g1

0x34de,	// (0x00019c3d) popup_mup3_text_window_t1

0x0d9b,	// (0x000174fa) list_calc_item_pane_g1_ParamLimits

0x2f93,	// (0x000196f2) mup_volume_pane_cp_g1

0xb19f,	// (0x000218fe) main_touch_calib_pane_t3

0xb1b5,	// (0x00021914) main_touch_calib_pane_t4

0xb1cb,	// (0x0002192a) main_touch_calib_pane_t5

0x6c15,	// (0x0001d374) aid_cell_size_toolbar2

0x6c1d,	// (0x0001d37c) aid_popup3_width_pane

0x6c5d,	// (0x0001d3bc) aid_zoom_text_msg_primary

0x8c55,	// (0x0001f3b4) vorec_t7

0x0d5f,	// (0x000174be) bg_calc_paper_pane_g1_ParamLimits

0x0d77,	// (0x000174d6) bg_calc_paper_pane_g2_ParamLimits

0x0d6b,	// (0x000174ca) bg_calc_paper_pane_g3_ParamLimits

0x0d8f,	// (0x000174ee) bg_calc_paper_pane_g4_ParamLimits

0x0d83,	// (0x000174e2) bg_calc_paper_pane_g5_ParamLimits

0x85ab,	// (0x0001ed0a) bg_calc_paper_pane_g6_ParamLimits

0x85bc,	// (0x0001ed1b) bg_calc_paper_pane_g7_ParamLimits

0x85cd,	// (0x0001ed2c) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00025872) bg_calc_paper_pane_g_ParamLimits

0x85de,	// (0x0001ed3d) calc_bg_paper_pane_g9_ParamLimits

0x0c9f,	// (0x000173fe) image_qvga_pane_ParamLimits

0x0c9f,	// (0x000173fe) image_qvga_pane

0x0c32,	// (0x00017391) bg_popup_sub_pane_cp04_ParamLimits

0x1bef,	// (0x0001834e) popup_mup_playback_window_g1_ParamLimits

0x1bfb,	// (0x0001835a) popup_mup_playback_window_t1_ParamLimits

0x1c10,	// (0x0001836f) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x00025bd5) popup_mup_playback_window_t_ParamLimits

0x0cad,	// (0x0001740c) main_mup2_pane_g3_ParamLimits

0x0cad,	// (0x0001740c) main_mup2_pane_g3

0x8f24,	// (0x0001f683) popup_toolbar_window_cp04

0x200b,	// (0x0001876a) popup_call2_audio_second_window_g3_ParamLimits

0x200b,	// (0x0001876a) popup_call2_audio_second_window_g3

0x2423,	// (0x00018b82) popup_call2_audio_first_window_g4_ParamLimits

0x2423,	// (0x00018b82) popup_call2_audio_first_window_g4

0x2a4a,	// (0x000191a9) popup_call2_audio_in_window_g4_ParamLimits

0x2a4a,	// (0x000191a9) popup_call2_audio_in_window_g4

0xa7fb,	// (0x00020f5a) aid_area_sk_bg_cut_ParamLimits

0xa7fb,	// (0x00020f5a) aid_area_sk_bg_cut

0x1c25,	// (0x00018384) aid_area_sk_bg_cut_2_ParamLimits

0x1c25,	// (0x00018384) aid_area_sk_bg_cut_2

0x050c,	// (0x00016c6b) aid_placing_details_win

0x050c,	// (0x00016c6b) aid_placing_details_win_2

0x0cad,	// (0x0001740c) camera2_autofocus_pane_g1_ParamLimits

0x6e45,	// (0x0001d5a4) popup_fixed_preview_cale_window_ParamLimits

0x6e45,	// (0x0001d5a4) popup_fixed_preview_cale_window

0x196b,	// (0x000180ca) navi_slider_pane_g3

0x1962,	// (0x000180c1) navi_slider_pane_g4

0x1959,	// (0x000180b8) navi_slider_pane_g5

0x196b,	// (0x000180ca) navi_slider_pane_g6

0x72d3,	// (0x0001da32) navi_slider_pane_g7

0x1ab8,	// (0x00018217) mup_scale_pane_g3

0x1ac1,	// (0x00018220) mup_scale_pane_g4

0x1aca,	// (0x00018229) mup_scale_pane_g5

0xa52e,	// (0x00020c8d) mup_scale_pane_g6

0xa537,	// (0x00020c96) mup_scale_pane_g7

0x46dc,	// (0x0001ae3b) cams2_slider_pane_g3

0x46dc,	// (0x0001ae3b) cams2_slider_pane_g4

0x46dc,	// (0x0001ae3b) cams2_slider_pane_g5

0x46dc,	// (0x0001ae3b) cams2_slider_pane_g6

0x46dc,	// (0x0001ae3b) cams2_slider_pane_g7

0x0fa9,	// (0x00017708) camera2_autofocus_pane_cp_g1

0x2d22,	// (0x00019481) bg_popup_preview_window_pane_cp02_ParamLimits

0x2d22,	// (0x00019481) bg_popup_preview_window_pane_cp02

0x34ec,	// (0x00019c4b) list_fp_cale_pane_ParamLimits

0x34ec,	// (0x00019c4b) list_fp_cale_pane

0x34f8,	// (0x00019c57) popup_fixed_preview_cale_window_t1_ParamLimits

0x34f8,	// (0x00019c57) popup_fixed_preview_cale_window_t1

0xb8b7,	// (0x00022016) popup_fixed_preview_cale_window_t2_ParamLimits

0xb8b7,	// (0x00022016) popup_fixed_preview_cale_window_t2

0xb8cc,	// (0x0002202b) popup_fixed_preview_cale_window_t3_ParamLimits

0xb8cc,	// (0x0002202b) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x00025e96) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x00025e96) popup_fixed_preview_cale_window_t

0xb8e1,	// (0x00022040) list_single_fp_cale_pane_ParamLimits

0xb8e1,	// (0x00022040) list_single_fp_cale_pane

0x3516,	// (0x00019c75) list_single_fp_cale_pane_g1_ParamLimits

0x3516,	// (0x00019c75) list_single_fp_cale_pane_g1

0x3522,	// (0x00019c81) list_single_fp_cale_pane_g2_ParamLimits

0x3522,	// (0x00019c81) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x00025e9d) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x00025e9d) list_single_fp_cale_pane_g

0x353b,	// (0x00019c9a) list_single_fp_cale_pane_t1_ParamLimits

0x353b,	// (0x00019c9a) list_single_fp_cale_pane_t1

0x354d,	// (0x00019cac) list_single_fp_cale_pane_t2_ParamLimits

0x354d,	// (0x00019cac) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x00025ea4) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x00025ea4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6ead,	// (0x0001d60c) main_dialer_pane

0x050c,	// (0x00016c6b) aid_cell_size_keypad

0x050c,	// (0x00016c6b) dialer_ne_pane

0x050c,	// (0x00016c6b) grid_dialer_command_1_pane

0x050c,	// (0x00016c6b) grid_dialer_command_2_pane

0x050c,	// (0x00016c6b) grid_dialer_keypad_pane

0x2eba,	// (0x00019619) bg_popup_call_pane_cp06_ParamLimits

0x2eba,	// (0x00019619) bg_popup_call_pane_cp06

0x2eba,	// (0x00019619) dialer_ne_clear_pane_ParamLimits

0x2eba,	// (0x00019619) dialer_ne_clear_pane

0x0fa9,	// (0x00017708) dialer_ne_pane_g1

0x1a32,	// (0x00018191) dialer_ne_pane_t1_ParamLimits

0x1a32,	// (0x00018191) dialer_ne_pane_t1

0x37a9,	// (0x00019f08) dialer_ne_pane_t2_ParamLimits

0x37a9,	// (0x00019f08) dialer_ne_pane_t2

0xb8f1,	// (0x00022050) dialer_ne_pane_t3_ParamLimits

0xb8f1,	// (0x00022050) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x00025ea9) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x00025ea9) dialer_ne_pane_t

0xb8f1,	// (0x00022050) dialer_ne_pane_t3_copy1_ParamLimits

0xb8f1,	// (0x00022050) dialer_ne_pane_t3_copy1

0x3580,	// (0x00019cdf) cell_dialer_keypad_pane_ParamLimits

0x3580,	// (0x00019cdf) cell_dialer_keypad_pane

0x0581,	// (0x00016ce0) cell_dialer_command_1_pane_ParamLimits

0x0581,	// (0x00016ce0) cell_dialer_command_1_pane

0x3597,	// (0x00019cf6) cell_dialer_command_2_pane_ParamLimits

0x3597,	// (0x00019cf6) cell_dialer_command_2_pane

0x0581,	// (0x00016ce0) bg_button_pane_cp02_ParamLimits

0x0581,	// (0x00016ce0) bg_button_pane_cp02

0x0cad,	// (0x0001740c) cell_dialer_keypad_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) cell_dialer_keypad_pane_g1

0x0581,	// (0x00016ce0) bg_button_pane_cp03_ParamLimits

0x0581,	// (0x00016ce0) bg_button_pane_cp03

0x0cad,	// (0x0001740c) cell_dialer_command_1_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) cell_dialer_command_1_pane_g1

0x050c,	// (0x00016c6b) bg_button_pane_cp04

0x0fa9,	// (0x00017708) cell_dialer_command_2_pane_g1

0x050c,	// (0x00016c6b) bg_button_pane_cp06

0x0fa9,	// (0x00017708) dialer_ne_clear_pane_g1

0xa25e,	// (0x000209bd) navi_pane_g2

0xa28c,	// (0x000209eb) navi_pane_g3

0x0002,

0xf379,	// (0x00025ad8) navi_pane_g

0xa2b7,	// (0x00020a16) navi_pane_mv_g2

0xa2de,	// (0x00020a3d) navi_pane_mv_g5

0xa2e6,	// (0x00020a45) navi_pane_mv_t1

0x0d41,	// (0x000174a0) main_clock2_pane

0x0c9f,	// (0x000173fe) main_clock2_list_pane_ParamLimits

0x0c9f,	// (0x000173fe) main_clock2_list_pane

0xb966,	// (0x000220c5) main_clock2_pane_t1_ParamLimits

0xb966,	// (0x000220c5) main_clock2_pane_t1

0xb994,	// (0x000220f3) main_clock2_pane_t2_ParamLimits

0xb994,	// (0x000220f3) main_clock2_pane_t2

0x0004,

0xf756,	// (0x00025eb5) main_clock2_pane_t_ParamLimits

0xf756,	// (0x00025eb5) main_clock2_pane_t

0xb9f9,	// (0x00022158) popup_clock_analogue_window_cp03_ParamLimits

0xb9f9,	// (0x00022158) popup_clock_analogue_window_cp03

0xba17,	// (0x00022176) popup_clock_digital_window_cp02_ParamLimits

0xba17,	// (0x00022176) popup_clock_digital_window_cp02

0xba8c,	// (0x000221eb) main_clock2_list_single_pane_ParamLimits

0xba8c,	// (0x000221eb) main_clock2_list_single_pane

0x0f54,	// (0x000176b3) list_highlight_pane_cp05

0x35d8,	// (0x00019d37) main_clock2_list_single_pane_t1

0x8f24,	// (0x0001f683) popup_toolbar_window_cp04_ParamLimits

0x0cbb,	// (0x0001741a) camera2_autofocus_pane_g2_ParamLimits

0x0cbb,	// (0x0001741a) camera2_autofocus_pane_g2

0x0cbb,	// (0x0001741a) camera2_autofocus_pane_g3_ParamLimits

0x0cbb,	// (0x0001741a) camera2_autofocus_pane_g3

0x0cbb,	// (0x0001741a) camera2_autofocus_pane_g4_ParamLimits

0x0cbb,	// (0x0001741a) camera2_autofocus_pane_g4

0x0cbb,	// (0x0001741a) camera2_autofocus_pane_g5_ParamLimits

0x0cbb,	// (0x0001741a) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x00025df9) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x00025df9) camera2_autofocus_pane_g

0xb264,	// (0x000219c3) camera2_autofocus_pane_cp_g2

0xb26c,	// (0x000219cb) camera2_autofocus_pane_cp_g3

0xb274,	// (0x000219d3) camera2_autofocus_pane_cp_g4

0xb27c,	// (0x000219db) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x00025e5f) camera2_autofocus_pane_cp_g

0x050c,	// (0x00016c6b) popup_dialer_spcha_window

0x050c,	// (0x00016c6b) bg_popup_sub_pane_cp07

0x050c,	// (0x00016c6b) list_spcha_pane

0x35e6,	// (0x00019d45) list_single_spcha_pane_ParamLimits

0x35e6,	// (0x00019d45) list_single_spcha_pane

0x050c,	// (0x00016c6b) list_highlight_pane_cp06

0x150f,	// (0x00017c6e) list_single_spcha_pane_t1

0x27f4,	// (0x00018f53) popup_call2_audio_out_window_g4_ParamLimits

0x27f4,	// (0x00018f53) popup_call2_audio_out_window_g4

0x6ead,	// (0x0001d60c) main_imed2_pane

0x742d,	// (0x0001db8c) popup_imed_adjust2_window

0x7440,	// (0x0001db9f) popup_imed_trans_window_ParamLimits

0x7440,	// (0x0001db9f) popup_imed_trans_window

0x3068,	// (0x000197c7) popup_blid_sat_info2_window_t1

0x3076,	// (0x000197d5) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x00025d8e) popup_blid_sat_info2_window_t

0xba9e,	// (0x000221fd) aid_size_cell_colour_35

0xbab8,	// (0x00022217) aid_size_cell_colour_112

0xbacf,	// (0x0002222e) aid_size_cell_effect

0x0581,	// (0x00016ce0) bg_tb_trans_pane_cp02

0x14db,	// (0x00017c3a) heading_imed_pane

0xbae9,	// (0x00022248) listscroll_imed_pane

0x35f8,	// (0x00019d57) heading_imed_pane_g1

0x3600,	// (0x00019d5f) heading_imed_pane_t1

0x360e,	// (0x00019d6d) grid_imed_colour_35_pane_ParamLimits

0x360e,	// (0x00019d6d) grid_imed_colour_35_pane

0xbaf5,	// (0x00022254) grid_imed_effect_pane

0x362a,	// (0x00019d89) list_imed_aspect_pane

0xbb05,	// (0x00022264) scroll_pane_cp027_ParamLimits

0xbb05,	// (0x00022264) scroll_pane_cp027

0xbb11,	// (0x00022270) cell_imed_effect_pane_ParamLimits

0xbb11,	// (0x00022270) cell_imed_effect_pane

0x3632,	// (0x00019d91) cell_imed_colour_pane_ParamLimits

0x3632,	// (0x00019d91) cell_imed_colour_pane

0x367c,	// (0x00019ddb) cell_imed_colour_pane_g1_ParamLimits

0x367c,	// (0x00019ddb) cell_imed_colour_pane_g1

0x368d,	// (0x00019dec) hgihlgiht_grid_pane_cp016_ParamLimits

0x368d,	// (0x00019dec) hgihlgiht_grid_pane_cp016

0xbb2d,	// (0x0002228c) cell_imed_effect_pane_g1

0xbb35,	// (0x00022294) grid_highlight_pane_cp017

0x369e,	// (0x00019dfd) list_imed_single_pane_ParamLimits

0x369e,	// (0x00019dfd) list_imed_single_pane

0x050c,	// (0x00016c6b) list_highlight_pane_cp07

0x36b2,	// (0x00019e11) list_imed_aspect_pane_comp1_t1

0x1a46,	// (0x000181a5) bg_tb_trans_pane_cp05

0x36d4,	// (0x00019e33) popup_imed_adjust2_window_g1

0x36fb,	// (0x00019e5a) popup_imed_adjust2_window_t1

0x3713,	// (0x00019e72) slider_imed_adjust_pane

0x3727,	// (0x00019e86) slider_imed_adjust_pane_g1

0x3737,	// (0x00019e96) slider_imed_adjust_pane_g2

0x3747,	// (0x00019ea6) slider_imed_adjust_pane_g3

0x3758,	// (0x00019eb7) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x00025ed2) slider_imed_adjust_pane_g

0xbb3e,	// (0x0002229d) aid_size_cell_clipart2

0x3769,	// (0x00019ec8) grid_imed_clipart_pane

0x3773,	// (0x00019ed2) scroll_pane_cp031

0xbb4a,	// (0x000222a9) cell_imed_clipart_pane_ParamLimits

0xbb4a,	// (0x000222a9) cell_imed_clipart_pane

0xbb68,	// (0x000222c7) cell_imed_clipart_pane_g1

0x050c,	// (0x00016c6b) grid_highlight_pane_cp014

0xb948,	// (0x000220a7) main_clock2_pane_g1_ParamLimits

0xb948,	// (0x000220a7) main_clock2_pane_g1

0xba33,	// (0x00022192) aid_call2_pane_cp10

0xba45,	// (0x000221a4) aid_call_pane_cp10

0x187c,	// (0x00017fdb) popup_clock_analogue_window_cp10_g1

0x187c,	// (0x00017fdb) popup_clock_analogue_window_cp10_g2

0xba57,	// (0x000221b6) popup_clock_analogue_window_cp10_g3

0xba57,	// (0x000221b6) popup_clock_analogue_window_cp10_g4

0x187c,	// (0x00017fdb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x00025ec0) popup_clock_analogue_window_cp10_g

0xba6d,	// (0x000221cc) popup_clock_analogue_window_cp10_t1

0x75c8,	// (0x0001dd27) clock_digital_number_pane_cp10_ParamLimits

0x75c8,	// (0x0001dd27) clock_digital_number_pane_cp10

0x75e2,	// (0x0001dd41) clock_digital_number_pane_cp11_ParamLimits

0x75e2,	// (0x0001dd41) clock_digital_number_pane_cp11

0x75fc,	// (0x0001dd5b) clock_digital_number_pane_cp12_ParamLimits

0x75fc,	// (0x0001dd5b) clock_digital_number_pane_cp12

0x7616,	// (0x0001dd75) clock_digital_number_pane_cp13_ParamLimits

0x7616,	// (0x0001dd75) clock_digital_number_pane_cp13

0x7632,	// (0x0001dd91) clock_digital_separator_pane_cp10_ParamLimits

0x7632,	// (0x0001dd91) clock_digital_separator_pane_cp10

0x764c,	// (0x0001ddab) popup_clock_digital_window_cp02_t1_ParamLimits

0x764c,	// (0x0001ddab) popup_clock_digital_window_cp02_t1

0x0c2a,	// (0x00017389) clock_digital_number_pane_cp10_g1

0x0c2a,	// (0x00017389) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x00025edb) clock_digital_number_pane_cp10_g

0x0c2a,	// (0x00017389) clock_digital_separator_pane_cp10_g1

0x0c2a,	// (0x00017389) clock_digital_separator_pane_g2_cp10

0x1917,	// (0x00018076) navi_pane_vded_g4

0x1920,	// (0x0001807f) navi_pane_vded_g5

0x1929,	// (0x00018088) navi_pane_vded_t1

0x6ead,	// (0x0001d60c) main_vded_pane

0xbb71,	// (0x000222d0) main_vded_pane_g1

0xbb7d,	// (0x000222dc) main_vded_pane_g2

0xbb87,	// (0x000222e6) main_vded_pane_g3

0x0002,

0xf781,	// (0x00025ee0) main_vded_pane_g

0xbb91,	// (0x000222f0) main_vded_pane_t1

0xbb9f,	// (0x000222fe) main_vded_pane_t2

0x0001,

0xf788,	// (0x00025ee7) main_vded_pane_t

0xbbad,	// (0x0002230c) vded_slider_pane

0xbbb7,	// (0x00022316) vded_video_pane

0x377b,	// (0x00019eda) vded_video_pane_g1

0xbbc3,	// (0x00022322) vded_video_pane_g2

0x0fa9,	// (0x00017708) vded_video_pane_g3

0x0002,

0xf78d,	// (0x00025eec) vded_video_pane_g

0x3785,	// (0x00019ee4) vded_slider_pane_g1

0x2f93,	// (0x000196f2) vded_slider_pane_g2

0x378e,	// (0x00019eed) vded_slider_pane_g3

0x3797,	// (0x00019ef6) vded_slider_pane_g4

0x37a0,	// (0x00019eff) vded_slider_pane_g5

0x0004,

0xf794,	// (0x00025ef3) vded_slider_pane_g

0xb841,	// (0x00021fa0) mup3_rocker_pane_ParamLimits

0xb841,	// (0x00021fa0) mup3_rocker_pane

0xbbcc,	// (0x0002232b) mup3_control_keys_pane_g1

0xbbd4,	// (0x00022333) mup3_control_keys_pane_g2

0xbbdc,	// (0x0002233b) mup3_control_keys_pane_g3

0xbbe4,	// (0x00022343) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x00025efe) mup3_control_keys_pane_g

0x6e6d,	// (0x0001d5cc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6e6d,	// (0x0001d5cc) popup_toolbar2_fixed_window_cp01

0xb85d,	// (0x00021fbc) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb85d,	// (0x00021fbc) popup_toolbar2_fixed_window_cp02

0x217d,	// (0x000188dc) popup_call2_audio_second_window_t4_ParamLimits

0x217d,	// (0x000188dc) popup_call2_audio_second_window_t4

0x26b9,	// (0x00018e18) popup_call2_audio_first_window_t6_ParamLimits

0x26b9,	// (0x00018e18) popup_call2_audio_first_window_t6

0x28f7,	// (0x00019056) popup_call2_audio_out_window_t6_ParamLimits

0x28f7,	// (0x00019056) popup_call2_audio_out_window_t6

0x6ead,	// (0x0001d60c) main_vitu_pane

0x0c9f,	// (0x000173fe) aid_size_cell_itu_ParamLimits

0x0c9f,	// (0x000173fe) aid_size_cell_itu

0x0c9f,	// (0x000173fe) bg_popup_window_pane_cp08_ParamLimits

0x0c9f,	// (0x000173fe) bg_popup_window_pane_cp08

0x0c9f,	// (0x000173fe) field_vitu_entry_pane_ParamLimits

0x0c9f,	// (0x000173fe) field_vitu_entry_pane

0x0c9f,	// (0x000173fe) grid_vitu_function_pane_ParamLimits

0x0c9f,	// (0x000173fe) grid_vitu_function_pane

0x0c9f,	// (0x000173fe) grid_vitu_itu_pane_ParamLimits

0x0c9f,	// (0x000173fe) grid_vitu_itu_pane

0x0c9f,	// (0x000173fe) cell_vitu_itu_pane_ParamLimits

0x0c9f,	// (0x000173fe) cell_vitu_itu_pane

0x0c9f,	// (0x000173fe) cell_vitu_function_pane_ParamLimits

0x0c9f,	// (0x000173fe) cell_vitu_function_pane

0x0581,	// (0x00016ce0) bg_popup_sub_pane_cp08_ParamLimits

0x0581,	// (0x00016ce0) bg_popup_sub_pane_cp08

0x0f7b,	// (0x000176da) field_vitu_entry_pane_t1_ParamLimits

0x0f7b,	// (0x000176da) field_vitu_entry_pane_t1

0x37a9,	// (0x00019f08) field_vitu_entry_pane_t2_ParamLimits

0x37a9,	// (0x00019f08) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x00025f07) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x00025f07) field_vitu_entry_pane_t

0x2eba,	// (0x00019619) bg_button_pane_cp05_ParamLimits

0x2eba,	// (0x00019619) bg_button_pane_cp05

0x37c6,	// (0x00019f25) cell_vitu_itu_pane_g1

0x1a1e,	// (0x0001817d) cell_vitu_itu_pane_t1_ParamLimits

0x1a1e,	// (0x0001817d) cell_vitu_itu_pane_t1

0x1a1e,	// (0x0001817d) cell_vitu_itu_pane_t2_ParamLimits

0x1a1e,	// (0x0001817d) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x00025f0c) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x00025f0c) cell_vitu_itu_pane_t

0x050c,	// (0x00016c6b) bg_button_pane_cp07

0x0fa9,	// (0x00017708) cell_vitu_function_pane_g1

0x6f86,	// (0x0001d6e5) main_calc_pane_g1

0x6c51,	// (0x0001d3b0) aid_visual_content_pane

0x6ead,	// (0x0001d60c) main_vradio_pane

0x0cbb,	// (0x0001741a) main_vradio_pane_g1_ParamLimits

0x0cbb,	// (0x0001741a) main_vradio_pane_g1

0x0cbb,	// (0x0001741a) main_vradio_pane_g2_ParamLimits

0x0cbb,	// (0x0001741a) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x00025f13) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x00025f13) main_vradio_pane_g

0x1a32,	// (0x00018191) main_vradio_pane_t1_ParamLimits

0x1a32,	// (0x00018191) main_vradio_pane_t1

0x1a32,	// (0x00018191) main_vradio_pane_t2_ParamLimits

0x1a32,	// (0x00018191) main_vradio_pane_t2

0x1a32,	// (0x00018191) main_vradio_pane_t3_ParamLimits

0x1a32,	// (0x00018191) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x00025f18) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x00025f18) main_vradio_pane_t

0x0c9f,	// (0x000173fe) vradio_rocker_control_pane_ParamLimits

0x0c9f,	// (0x000173fe) vradio_rocker_control_pane

0x0c9f,	// (0x000173fe) vradio_station_info_pane_ParamLimits

0x0c9f,	// (0x000173fe) vradio_station_info_pane

0x0581,	// (0x00016ce0) vradio_frequency_info_pane_ParamLimits

0x0581,	// (0x00016ce0) vradio_frequency_info_pane

0x0fa9,	// (0x00017708) vradio_station_info_pane_g1

0x1a1e,	// (0x0001817d) vradio_station_info_pane_t1_ParamLimits

0x1a1e,	// (0x0001817d) vradio_station_info_pane_t1

0x1a32,	// (0x00018191) vradio_station_info_pane_t2_ParamLimits

0x1a32,	// (0x00018191) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x00025f1f) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x00025f1f) vradio_station_info_pane_t

0x050c,	// (0x00016c6b) vradio_tuning_pane

0xbbf4,	// (0x00022353) vradio_rocker_control_pane_g1

0x37e2,	// (0x00019f41) vradio_rocker_control_pane_g2

0xbbfc,	// (0x0002235b) vradio_rocker_control_pane_g3

0xbc04,	// (0x00022363) vradio_rocker_control_pane_g4

0xbc0e,	// (0x0002236d) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x00025f24) vradio_rocker_control_pane_g

0x0fa9,	// (0x00017708) vradio_frequency_info_pane_g1

0x0f7b,	// (0x000176da) vradio_frequency_info_pane_t1_ParamLimits

0x0f7b,	// (0x000176da) vradio_frequency_info_pane_t1

0xbc16,	// (0x00022375) vradio_tuning_pane_g1

0xbc23,	// (0x00022382) vradio_tuning_pane_t1

0x6c6d,	// (0x0001d3cc) area_side_right_pane_ParamLimits

0x6c6d,	// (0x0001d3cc) area_side_right_pane

0x2ce9,	// (0x00019448) status_small_pane_g1

0x2cf1,	// (0x00019450) status_small_pane_g2

0x2cfa,	// (0x00019459) status_small_pane_g3

0x2d03,	// (0x00019462) status_small_pane_g4

0x0003,

0xf591,	// (0x00025cf0) status_small_pane_g

0x2d0c,	// (0x0001946b) status_small_pane_t1

0x6ead,	// (0x0001d60c) main_video3_pane

0x37ea,	// (0x00019f49) cams_zoom_vslider_pane

0x37f2,	// (0x00019f51) image3_wide_pane_ParamLimits

0x37f2,	// (0x00019f51) image3_wide_pane

0x380c,	// (0x00019f6b) image3_wide_small_pane

0x3818,	// (0x00019f77) main_video3_pane_g1_ParamLimits

0x3818,	// (0x00019f77) main_video3_pane_g1

0x3834,	// (0x00019f93) main_video3_pane_g2_ParamLimits

0x3834,	// (0x00019f93) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x00025f2f) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x00025f2f) main_video3_pane_g

0x3850,	// (0x00019faf) main_video3_pane_t1_ParamLimits

0x3850,	// (0x00019faf) main_video3_pane_t1

0x387b,	// (0x00019fda) main_video3_pane_t2_ParamLimits

0x387b,	// (0x00019fda) main_video3_pane_t2

0x38a8,	// (0x0001a007) main_video3_pane_t3_ParamLimits

0x38a8,	// (0x0001a007) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x00025f34) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x00025f34) main_video3_pane_t

0x38d5,	// (0x0001a034) cams_zoom_vslider_pane_g1

0x38de,	// (0x0001a03d) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x00025f3b) cams_zoom_vslider_pane_g

0x38e6,	// (0x0001a045) small_slider_vertical_pane

0x0fa9,	// (0x00017708) small_slider_vertical_pane_g1

0x0fa9,	// (0x00017708) small_slider_vertical_pane_g2

0x38ee,	// (0x0001a04d) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x00025f40) small_slider_vertical_pane_g

0x6ead,	// (0x0001d60c) main_hwr_training_pane

0x38f7,	// (0x0001a056) hwr_training_instruct_pane_ParamLimits

0x38f7,	// (0x0001a056) hwr_training_instruct_pane

0xbc32,	// (0x00022391) hwr_training_navi_pane_ParamLimits

0xbc32,	// (0x00022391) hwr_training_navi_pane

0xbc4c,	// (0x000223ab) hwr_training_write_pane_ParamLimits

0xbc4c,	// (0x000223ab) hwr_training_write_pane

0x050c,	// (0x00016c6b) bg_frame_shadow_pane

0x392e,	// (0x0001a08d) hwr_training_write_pane_g1

0x3936,	// (0x0001a095) hwr_training_write_pane_g2

0x393e,	// (0x0001a09d) hwr_training_write_pane_g3

0x3946,	// (0x0001a0a5) hwr_training_write_pane_g4

0x394e,	// (0x0001a0ad) hwr_training_write_pane_g5

0x3956,	// (0x0001a0b5) hwr_training_write_pane_g6

0x395e,	// (0x0001a0bd) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x00025f47) hwr_training_write_pane_g

0x766d,	// (0x0001ddcc) hwr_training_navi_pane_g1_ParamLimits

0x766d,	// (0x0001ddcc) hwr_training_navi_pane_g1

0x767f,	// (0x0001ddde) hwr_training_navi_pane_g2_ParamLimits

0x767f,	// (0x0001ddde) hwr_training_navi_pane_g2

0x7691,	// (0x0001ddf0) hwr_training_navi_pane_g3_ParamLimits

0x7691,	// (0x0001ddf0) hwr_training_navi_pane_g3

0x76a1,	// (0x0001de00) hwr_training_navi_pane_g4_ParamLimits

0x76a1,	// (0x0001de00) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x00025f56) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x00025f56) hwr_training_navi_pane_g

0x76bb,	// (0x0001de1a) hwr_training_navi_pane_t1

0xbc84,	// (0x000223e3) list_single_hwr_training_instruct_pane_ParamLimits

0xbc84,	// (0x000223e3) list_single_hwr_training_instruct_pane

0x39b5,	// (0x0001a114) list_single_hwr_training_instruct_pane_t1

0x316f,	// (0x000198ce) bg_frame_shadow_pane_g1

0x39c4,	// (0x0001a123) bg_frame_shadow_pane_g2

0x39cc,	// (0x0001a12b) bg_frame_shadow_pane_g3

0x39d4,	// (0x0001a133) bg_frame_shadow_pane_g4

0x39dc,	// (0x0001a13b) bg_frame_shadow_pane_g5

0x39e4,	// (0x0001a143) bg_frame_shadow_pane_g6

0x39ec,	// (0x0001a14b) bg_frame_shadow_pane_g7

0x0e1d,	// (0x0001757c) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x00025f61) bg_frame_shadow_pane_g

0x6ead,	// (0x0001d60c) main_video_tele_dialer_pane

0x76c9,	// (0x0001de28) aid_size_cell_video_keypad_ParamLimits

0x76c9,	// (0x0001de28) aid_size_cell_video_keypad

0x76d9,	// (0x0001de38) grid_video_dialer_keypad_pane_ParamLimits

0x76d9,	// (0x0001de38) grid_video_dialer_keypad_pane

0x76e7,	// (0x0001de46) video_down_pane_cp_ParamLimits

0x76e7,	// (0x0001de46) video_down_pane_cp

0x76f5,	// (0x0001de54) cell_video_dialer_keypad_pane_ParamLimits

0x76f5,	// (0x0001de54) cell_video_dialer_keypad_pane

0x39f4,	// (0x0001a153) bg_button_pane_cp08_ParamLimits

0x39f4,	// (0x0001a153) bg_button_pane_cp08

0xbcdd,	// (0x0002243c) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbcdd,	// (0x0002243c) cell_video_dialer_keypad_pane_g1

0xb835,	// (0x00021f94) mup3_rocker2_pane_ParamLimits

0xb835,	// (0x00021f94) mup3_rocker2_pane

0x0fa9,	// (0x00017708) mup3_rocker2_pane_g1

0x7385,	// (0x0001dae4) main_dialer2_pane

0x6ead,	// (0x0001d60c) main_mp4_pane

0x772a,	// (0x0001de89) main_mp4_pane_g1_ParamLimits

0x772a,	// (0x0001de89) main_mp4_pane_g1

0x7738,	// (0x0001de97) main_mp4_pane_g2_ParamLimits

0x7738,	// (0x0001de97) main_mp4_pane_g2

0x7746,	// (0x0001dea5) main_mp4_pane_g3_ParamLimits

0x7746,	// (0x0001dea5) main_mp4_pane_g3

0x7799,	// (0x0001def8) main_mp4_pane_g4_ParamLimits

0x7799,	// (0x0001def8) main_mp4_pane_g4

0x77c7,	// (0x0001df26) main_mp4_pane_g5_ParamLimits

0x77c7,	// (0x0001df26) main_mp4_pane_g5

0x0007,

0xf822,	// (0x00025f81) main_mp4_pane_g_ParamLimits

0xf822,	// (0x00025f81) main_mp4_pane_g

0x783b,	// (0x0001df9a) main_mp4_pane_t1_ParamLimits

0x783b,	// (0x0001df9a) main_mp4_pane_t1

0x7897,	// (0x0001dff6) main_mp4_pane_t2_ParamLimits

0x7897,	// (0x0001dff6) main_mp4_pane_t2

0x3b7c,	// (0x0001a2db) main_mp4_pane_t3_ParamLimits

0x3b7c,	// (0x0001a2db) main_mp4_pane_t3

0x78e9,	// (0x0001e048) main_mp4_pane_t4_ParamLimits

0x78e9,	// (0x0001e048) main_mp4_pane_t4

0x0003,

0xf833,	// (0x00025f92) main_mp4_pane_t_ParamLimits

0xf833,	// (0x00025f92) main_mp4_pane_t

0x7929,	// (0x0001e088) mp4_progress_pane_ParamLimits

0x7929,	// (0x0001e088) mp4_progress_pane

0x7973,	// (0x0001e0d2) mp4_rocker_pane_ParamLimits

0x7973,	// (0x0001e0d2) mp4_rocker_pane

0x3c54,	// (0x0001a3b3) mp4_progress_pane_t1

0x3c6d,	// (0x0001a3cc) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x00025f9b) mp4_progress_pane_t

0x3c86,	// (0x0001a3e5) mup_progress_pane_cp04

0x46dc,	// (0x0001ae3b) mp4_rocker_pane_g1

0x7993,	// (0x0001e0f2) aid_cell_size_keypad2_ParamLimits

0x7993,	// (0x0001e0f2) aid_cell_size_keypad2

0x79a3,	// (0x0001e102) dialer2_ne_pane_ParamLimits

0x79a3,	// (0x0001e102) dialer2_ne_pane

0x79af,	// (0x0001e10e) grid_dialer2_keypad_pane_ParamLimits

0x79af,	// (0x0001e10e) grid_dialer2_keypad_pane

0x2eac,	// (0x0001960b) bg_popup_call_pane_cp07_ParamLimits

0x2eac,	// (0x0001960b) bg_popup_call_pane_cp07

0xbd18,	// (0x00022477) dialer2_ne_pane_t1_ParamLimits

0xbd18,	// (0x00022477) dialer2_ne_pane_t1

0x79bd,	// (0x0001e11c) cell_dialer2_keypad_pane_ParamLimits

0x79bd,	// (0x0001e11c) cell_dialer2_keypad_pane

0x3cab,	// (0x0001a40a) bg_button_pane_pane_cp04_ParamLimits

0x3cab,	// (0x0001a40a) bg_button_pane_pane_cp04

0xbd3d,	// (0x0002249c) cell_dialer2_keypad_pane_g1_ParamLimits

0xbd3d,	// (0x0002249c) cell_dialer2_keypad_pane_g1

0x8df6,	// (0x0001f555) aid_placing_vt_set_content_ParamLimits

0x8df6,	// (0x0001f555) aid_placing_vt_set_content

0x8e1e,	// (0x0001f57d) aid_placing_vt_set_title_ParamLimits

0x8e1e,	// (0x0001f57d) aid_placing_vt_set_title

0x6ead,	// (0x0001d60c) main_image3_pane

0x7a06,	// (0x0001e165) area_side_right_pane_cp01_ParamLimits

0x7a06,	// (0x0001e165) area_side_right_pane_cp01

0x7a35,	// (0x0001e194) main_image3_pane_g1_ParamLimits

0x7a35,	// (0x0001e194) main_image3_pane_g1

0x7a43,	// (0x0001e1a2) main_image3_pane_g2_ParamLimits

0x7a43,	// (0x0001e1a2) main_image3_pane_g2

0x7a5c,	// (0x0001e1bb) main_image3_pane_g3_ParamLimits

0x7a5c,	// (0x0001e1bb) main_image3_pane_g3

0x7a75,	// (0x0001e1d4) main_image3_pane_g4_ParamLimits

0x7a75,	// (0x0001e1d4) main_image3_pane_g4

0x0003,

0xf84b,	// (0x00025faa) main_image3_pane_g_ParamLimits

0xf84b,	// (0x00025faa) main_image3_pane_g

0x7a8e,	// (0x0001e1ed) main_image3_pane_t1_ParamLimits

0x7a8e,	// (0x0001e1ed) main_image3_pane_t1

0x7ab3,	// (0x0001e212) main_image3_pane_t2_ParamLimits

0x7ab3,	// (0x0001e212) main_image3_pane_t2

0x7ad2,	// (0x0001e231) main_image3_pane_t3_ParamLimits

0x7ad2,	// (0x0001e231) main_image3_pane_t3

0x0003,

0xf854,	// (0x00025fb3) main_image3_pane_t_ParamLimits

0xf854,	// (0x00025fb3) main_image3_pane_t

0x0c9f,	// (0x000173fe) grid_sctrl_middle_pane_cp01_ParamLimits

0x0c9f,	// (0x000173fe) grid_sctrl_middle_pane_cp01

0xbda5,	// (0x00022504) cell_sctrl_middle_pane_cp01_ParamLimits

0xbda5,	// (0x00022504) cell_sctrl_middle_pane_cp01

0xbdb6,	// (0x00022515) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbdb6,	// (0x00022515) cell_sctrl_middle_pane_cp01_g1

0x6ead,	// (0x0001d60c) main_call4_pane

0x7b33,	// (0x0001e292) aid_size_button_call4_ParamLimits

0x7b33,	// (0x0001e292) aid_size_button_call4

0x7b69,	// (0x0001e2c8) call4_windows_pane_ParamLimits

0x7b69,	// (0x0001e2c8) call4_windows_pane

0x7b7e,	// (0x0001e2dd) grid_call4_button_pane_ParamLimits

0x7b7e,	// (0x0001e2dd) grid_call4_button_pane

0xbdcf,	// (0x0002252e) call4_windows_conf_pane

0xbde8,	// (0x00022547) popup_call4_audio_first_window_ParamLimits

0xbde8,	// (0x00022547) popup_call4_audio_first_window

0xbe38,	// (0x00022597) popup_call4_audio_second_window_ParamLimits

0xbe38,	// (0x00022597) popup_call4_audio_second_window

0xbe51,	// (0x000225b0) popup_call4_audio_wait_window_ParamLimits

0xbe51,	// (0x000225b0) popup_call4_audio_wait_window

0x7ba2,	// (0x0001e301) cell_call4_button_pane_ParamLimits

0x7ba2,	// (0x0001e301) cell_call4_button_pane

0xbe5f,	// (0x000225be) bg_button_pane_cp09_ParamLimits

0xbe5f,	// (0x000225be) bg_button_pane_cp09

0x7bc5,	// (0x0001e324) cell_call4_button_pane_g1_ParamLimits

0x7bc5,	// (0x0001e324) cell_call4_button_pane_g1

0xbe6b,	// (0x000225ca) cell_call4_button_pane_t1_ParamLimits

0xbe6b,	// (0x000225ca) cell_call4_button_pane_t1

0x3d60,	// (0x0001a4bf) popup_call4_audio_conf_window_ParamLimits

0x3d60,	// (0x0001a4bf) popup_call4_audio_conf_window

0xb86a,	// (0x00021fc9) mup3_progress_pane_t1_ParamLimits

0xb888,	// (0x00021fe7) mup3_progress_pane_t2_ParamLimits

0x34a9,	// (0x00019c08) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x00025e88) mup3_progress_pane_t_ParamLimits

0x34c6,	// (0x00019c25) mup_progress_pane_cp03_ParamLimits

0xbbec,	// (0x0002234b) mup3_control_keys_pane_g4_copy1

0x7957,	// (0x0001e0b6) mp4_rocker2_pane_ParamLimits

0x7957,	// (0x0001e0b6) mp4_rocker2_pane

0x3d82,	// (0x0001a4e1) mp4_rocker2_pane_g1

0x3d7a,	// (0x0001a4d9) mp4_rocker2_pane_g2

0x7c04,	// (0x0001e363) mp4_rocker2_pane_g3

0x7c0c,	// (0x0001e36b) mp4_rocker2_pane_g4

0x7c14,	// (0x0001e373) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x00025fbc) mp4_rocker2_pane_g

0x6ead,	// (0x0001d60c) main_camera4_pane

0x6ead,	// (0x0001d60c) main_video4_pane

0xbc9d,	// (0x000223fc) main_video_tele_dialer_pane_t1_ParamLimits

0xbc9d,	// (0x000223fc) main_video_tele_dialer_pane_t1

0xbcaf,	// (0x0002240e) main_video_tele_dialer_pane_t2_ParamLimits

0xbcaf,	// (0x0002240e) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x00025f72) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x00025f72) main_video_tele_dialer_pane_t

0x7c34,	// (0x0001e393) cam4_autofocus_pane_ParamLimits

0x7c34,	// (0x0001e393) cam4_autofocus_pane

0x7c4c,	// (0x0001e3ab) cam4_image_uncrop_pane_ParamLimits

0x7c4c,	// (0x0001e3ab) cam4_image_uncrop_pane

0x7c65,	// (0x0001e3c4) cam4_indicators_pane_ParamLimits

0x7c65,	// (0x0001e3c4) cam4_indicators_pane

0x7c81,	// (0x0001e3e0) main_camera4_pane_g1_ParamLimits

0x7c81,	// (0x0001e3e0) main_camera4_pane_g1

0x7c8d,	// (0x0001e3ec) main_camera4_pane_g2_ParamLimits

0x7c8d,	// (0x0001e3ec) main_camera4_pane_g2

0x7c8d,	// (0x0001e3ec) main_camera4_pane_g3_ParamLimits

0x7c8d,	// (0x0001e3ec) main_camera4_pane_g3

0x7c99,	// (0x0001e3f8) main_camera4_pane_g4_ParamLimits

0x7c99,	// (0x0001e3f8) main_camera4_pane_g4

0x7ca5,	// (0x0001e404) main_camera4_pane_g5_ParamLimits

0x7ca5,	// (0x0001e404) main_camera4_pane_g5

0x0005,

0xf868,	// (0x00025fc7) main_camera4_pane_g_ParamLimits

0xf868,	// (0x00025fc7) main_camera4_pane_g

0x7cbf,	// (0x0001e41e) main_camera4_pane_t1_ParamLimits

0x7cbf,	// (0x0001e41e) main_camera4_pane_t1

0x5184,	// (0x0001b8e3) bg_tb_trans_pane_cp06

0x7ceb,	// (0x0001e44a) cam4_indicators_pane_g1

0x7cfc,	// (0x0001e45b) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x00025fe2) cam4_indicators_pane_g

0x7d14,	// (0x0001e473) cam4_indicators_pane_t1

0x7d3e,	// (0x0001e49d) main_video4_pane_g1_ParamLimits

0x7d3e,	// (0x0001e49d) main_video4_pane_g1

0x7d4a,	// (0x0001e4a9) main_video4_pane_g2_ParamLimits

0x7d4a,	// (0x0001e4a9) main_video4_pane_g2

0x7d56,	// (0x0001e4b5) main_video4_pane_g3_ParamLimits

0x7d56,	// (0x0001e4b5) main_video4_pane_g3

0x7d62,	// (0x0001e4c1) main_video4_pane_g4_ParamLimits

0x7d62,	// (0x0001e4c1) main_video4_pane_g4

0x0004,

0xf88a,	// (0x00025fe9) main_video4_pane_g_ParamLimits

0xf88a,	// (0x00025fe9) main_video4_pane_g

0x7d84,	// (0x0001e4e3) vid4_indicators_pane_ParamLimits

0x7d84,	// (0x0001e4e3) vid4_indicators_pane

0x7da3,	// (0x0001e502) video4_image_uncrop_cif_pane_ParamLimits

0x7da3,	// (0x0001e502) video4_image_uncrop_cif_pane

0x7db2,	// (0x0001e511) video4_image_uncrop_nhd_pane_ParamLimits

0x7db2,	// (0x0001e511) video4_image_uncrop_nhd_pane

0x7c4c,	// (0x0001e3ab) video4_image_uncrop_vga_pane_ParamLimits

0x7c4c,	// (0x0001e3ab) video4_image_uncrop_vga_pane

0x7377,	// (0x0001dad6) bg_tb_trans_pane_cp07

0x7dcb,	// (0x0001e52a) vid4_indicators_pane_g1

0x7de1,	// (0x0001e540) vid4_indicators_pane_g2

0x7df5,	// (0x0001e554) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x00025ff4) vid4_indicators_pane_g

0x7e26,	// (0x0001e585) vid4_indicators_pane_t1

0xbea3,	// (0x00022602) cam4_autofocus_pane_g1

0xbeab,	// (0x0002260a) cam4_autofocus_pane_g2

0xbeb3,	// (0x00022612) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x00025fff) cam4_autofocus_pane_g

0xbebb,	// (0x0002261a) cam4_autofocus_pane_g3_copy1

0xbcc1,	// (0x00022420) video_down_pane_cp_t1

0xbccf,	// (0x0002242e) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x00025f77) video_down_pane_cp_t

0x6e9f,	// (0x0001d5fe) popup_vitu2_window_ParamLimits

0x6e9f,	// (0x0001d5fe) popup_vitu2_window

0x7e3d,	// (0x0001e59c) aid_size_cell2_itu2_ParamLimits

0x7e3d,	// (0x0001e59c) aid_size_cell2_itu2

0x7e59,	// (0x0001e5b8) aid_size_cell_itu2_ParamLimits

0x7e59,	// (0x0001e5b8) aid_size_cell_itu2

0x7e93,	// (0x0001e5f2) bg_popup_window_pane_cp09_ParamLimits

0x7e93,	// (0x0001e5f2) bg_popup_window_pane_cp09

0x7ea1,	// (0x0001e600) field_vitu2_entry_pane_ParamLimits

0x7ea1,	// (0x0001e600) field_vitu2_entry_pane

0x7ebf,	// (0x0001e61e) grid_vitu2_function_pane_ParamLimits

0x7ebf,	// (0x0001e61e) grid_vitu2_function_pane

0x7eff,	// (0x0001e65e) grid_vitu2_itu_pane_ParamLimits

0x7eff,	// (0x0001e65e) grid_vitu2_itu_pane

0x7f61,	// (0x0001e6c0) cell_vitu2_itu_pane_ParamLimits

0x7f61,	// (0x0001e6c0) cell_vitu2_itu_pane

0x7f7c,	// (0x0001e6db) cell_vitu2_function_pane_ParamLimits

0x7f7c,	// (0x0001e6db) cell_vitu2_function_pane

0x3e91,	// (0x0001a5f0) bg_popup_call_pane_cp08_ParamLimits

0x3e91,	// (0x0001a5f0) bg_popup_call_pane_cp08

0x3ea8,	// (0x0001a607) field_vitu2_entry_pane_g1

0x3eb4,	// (0x0001a613) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x00026006) field_vitu2_entry_pane_g

0x3ec0,	// (0x0001a61f) field_vitu2_entry_pane_t1_ParamLimits

0x3ec0,	// (0x0001a61f) field_vitu2_entry_pane_t1

0x3eef,	// (0x0001a64e) field_vitu2_entry_pane_t2_ParamLimits

0x3eef,	// (0x0001a64e) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x0002600d) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x0002600d) field_vitu2_entry_pane_t

0x7536,	// (0x0001dc95) bg_button_pane_cp010_ParamLimits

0x7536,	// (0x0001dc95) bg_button_pane_cp010

0x7fc0,	// (0x0001e71f) cell_vitu2_itu_pane_g1

0x7fe6,	// (0x0001e745) cell_vitu2_itu_pane_t1_ParamLimits

0x7fe6,	// (0x0001e745) cell_vitu2_itu_pane_t1

0x8032,	// (0x0001e791) cell_vitu2_itu_pane_t2_ParamLimits

0x8032,	// (0x0001e791) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x00026017) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x00026017) cell_vitu2_itu_pane_t

0x7377,	// (0x0001dad6) bg_button_pane_cp011

0x80fa,	// (0x0001e859) cell_vitu2_function_pane_g1

0x6ead,	// (0x0001d60c) main_myfav_hc_pane

0x7b14,	// (0x0001e273) popup_image3_note_pane_ParamLimits

0x7b14,	// (0x0001e273) popup_image3_note_pane

0x7b22,	// (0x0001e281) popup_image3_tool_bar_pane_ParamLimits

0x7b22,	// (0x0001e281) popup_image3_tool_bar_pane

0x80a8,	// (0x0001e807) cell_vitu2_itu_pane_t3_ParamLimits

0x80a8,	// (0x0001e807) cell_vitu2_itu_pane_t3

0x050c,	// (0x00016c6b) bg_popup_trans_pane

0x3f14,	// (0x0001a673) grid_image3_tool_bar_pane

0x3f1e,	// (0x0001a67d) bg_popup_trans_pane_g1

0x11be,	// (0x0001791d) bg_popup_trans_pane_g2

0x3f26,	// (0x0001a685) bg_popup_trans_pane_g3

0x3f2e,	// (0x0001a68d) bg_popup_trans_pane_g4

0x3f36,	// (0x0001a695) bg_popup_trans_pane_g5

0x3f3e,	// (0x0001a69d) bg_popup_trans_pane_g6

0x3f46,	// (0x0001a6a5) bg_popup_trans_pane_g7

0x3f4e,	// (0x0001a6ad) bg_popup_trans_pane_g8

0x119e,	// (0x000178fd) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x0002601e) bg_popup_trans_pane_g

0x3f56,	// (0x0001a6b5) cell_image3_tool_bar_pane_ParamLimits

0x3f56,	// (0x0001a6b5) cell_image3_tool_bar_pane

0x0fa9,	// (0x00017708) cell_image3_tool_bar_pane_g1

0x050c,	// (0x00016c6b) bg_popup_trans_pane_cp1

0x3f6c,	// (0x0001a6cb) popup_image3_note_pane_t1

0x3f7a,	// (0x0001a6d9) popup_image3_note_pane_t2

0x3f88,	// (0x0001a6e7) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x00026031) popup_image3_note_pane_t

0x3f98,	// (0x0001a6f7) popup_image3_note_pane_t3_copy1

0xbec3,	// (0x00022622) bg_myfav_hc_instruction_pane_ParamLimits

0xbec3,	// (0x00022622) bg_myfav_hc_instruction_pane

0xbedb,	// (0x0002263a) cell_myfav_contact_pane_ParamLimits

0xbedb,	// (0x0002263a) cell_myfav_contact_pane

0xbef5,	// (0x00022654) cell_myfav_contact_pane_cp1_ParamLimits

0xbef5,	// (0x00022654) cell_myfav_contact_pane_cp1

0xbf0d,	// (0x0002266c) cell_myfav_contact_pane_cp2_ParamLimits

0xbf0d,	// (0x0002266c) cell_myfav_contact_pane_cp2

0xbf25,	// (0x00022684) cell_myfav_contact_pane_cp3_ParamLimits

0xbf25,	// (0x00022684) cell_myfav_contact_pane_cp3

0xbf3c,	// (0x0002269b) cell_myfav_contact_pane_cp4_ParamLimits

0xbf3c,	// (0x0002269b) cell_myfav_contact_pane_cp4

0xbf52,	// (0x000226b1) cell_myfav_contact_pane_cp5_ParamLimits

0xbf52,	// (0x000226b1) cell_myfav_contact_pane_cp5

0xbf66,	// (0x000226c5) cell_myfav_contact_pane_cp6_ParamLimits

0xbf66,	// (0x000226c5) cell_myfav_contact_pane_cp6

0xbf7a,	// (0x000226d9) cell_myfav_contact_pane_cp7_ParamLimits

0xbf7a,	// (0x000226d9) cell_myfav_contact_pane_cp7

0x3fa6,	// (0x0001a705) listscroll_gen_pane_cp05

0xbf92,	// (0x000226f1) main_myfav_hc_pane_g1_ParamLimits

0xbf92,	// (0x000226f1) main_myfav_hc_pane_g1

0xbfac,	// (0x0002270b) main_myfav_hc_pane_g2_ParamLimits

0xbfac,	// (0x0002270b) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x00026038) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x00026038) main_myfav_hc_pane_g

0xbfde,	// (0x0002273d) main_myfav_hc_pane_t1_ParamLimits

0xbfde,	// (0x0002273d) main_myfav_hc_pane_t1

0x3faf,	// (0x0001a70e) main_myfav_hc_pane_t2_ParamLimits

0x3faf,	// (0x0001a70e) main_myfav_hc_pane_t2

0x3fc1,	// (0x0001a720) main_myfav_hc_pane_t3_ParamLimits

0x3fc1,	// (0x0001a720) main_myfav_hc_pane_t3

0xbff5,	// (0x00022754) main_myfav_hc_pane_t4_ParamLimits

0xbff5,	// (0x00022754) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x0002603f) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x0002603f) main_myfav_hc_pane_t

0x0fa9,	// (0x00017708) bg_myfav_hc_instruction_pane_g1

0x3fd3,	// (0x0001a732) cell_myfav_contact_pane_g1_ParamLimits

0x3fd3,	// (0x0001a732) cell_myfav_contact_pane_g1

0x3fd3,	// (0x0001a732) cell_myfav_contact_pane_g2_ParamLimits

0x3fd3,	// (0x0001a732) cell_myfav_contact_pane_g2

0x3fdf,	// (0x0001a73e) cell_myfav_contact_pane_g3_ParamLimits

0x3fdf,	// (0x0001a73e) cell_myfav_contact_pane_g3

0x0cbb,	// (0x0001741a) cell_myfav_contact_pane_g4_ParamLimits

0x0cbb,	// (0x0001741a) cell_myfav_contact_pane_g4

0x3fec,	// (0x0001a74b) cell_myfav_contact_pane_g5_ParamLimits

0x3fec,	// (0x0001a74b) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x0002604a) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x0002604a) cell_myfav_contact_pane_g

0xbfc6,	// (0x00022725) main_myfav_hc_pane_g3_ParamLimits

0xbfc6,	// (0x00022725) main_myfav_hc_pane_g3

0x6da7,	// (0x0001d506) popup_adpt_find_window

0xc01f,	// (0x0002277e) afind_page_pane_ParamLimits

0xc01f,	// (0x0002277e) afind_page_pane

0xc02c,	// (0x0002278b) aid_size_cell_afind_ParamLimits

0xc02c,	// (0x0002278b) aid_size_cell_afind

0xc046,	// (0x000227a5) bg_popup_sub_pane_cp09_ParamLimits

0xc046,	// (0x000227a5) bg_popup_sub_pane_cp09

0xc053,	// (0x000227b2) find_pane_cp01_ParamLimits

0xc053,	// (0x000227b2) find_pane_cp01

0x3ff8,	// (0x0001a757) grid_afind_control_pane_ParamLimits

0x3ff8,	// (0x0001a757) grid_afind_control_pane

0xc060,	// (0x000227bf) grid_afind_pane_ParamLimits

0xc060,	// (0x000227bf) grid_afind_pane

0xc07c,	// (0x000227db) cell_afind_pane_ParamLimits

0xc07c,	// (0x000227db) cell_afind_pane

0x0fa9,	// (0x00017708) afind_page_pane_g1

0xc0c8,	// (0x00022827) afind_page_pane_g2

0xc0d1,	// (0x00022830) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x00026055) afind_page_pane_g

0xc0da,	// (0x00022839) afind_page_pane_t1

0x400c,	// (0x0001a76b) cell_afind_grid_control_pane_ParamLimits

0x400c,	// (0x0001a76b) cell_afind_grid_control_pane

0x3cab,	// (0x0001a40a) bg_button_pane_cp69_ParamLimits

0x3cab,	// (0x0001a40a) bg_button_pane_cp69

0xc0fa,	// (0x00022859) cell_afind_pane_g1_ParamLimits

0xc0fa,	// (0x00022859) cell_afind_pane_g1

0xc107,	// (0x00022866) cell_afind_pane_t1_ParamLimits

0xc107,	// (0x00022866) cell_afind_pane_t1

0x0fb3,	// (0x00017712) bg_button_pane_cp72

0x401b,	// (0x0001a77a) cell_afind_grid_control_pane_g1

0xa928,	// (0x00021087) aid_image_placing_area_ParamLimits

0xa928,	// (0x00021087) aid_image_placing_area

0x0cad,	// (0x0001740c) field_vitu_entry_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) field_vitu_entry_pane_g1

0x0cad,	// (0x0001740c) field_vitu_entry_pane_g2_ParamLimits

0x0cad,	// (0x0001740c) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00025960) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00025960) field_vitu_entry_pane_g

0x37c6,	// (0x00019f25) cell_vitu_itu_pane_g1_ParamLimits

0x37a9,	// (0x00019f08) cell_vitu_itu_pane_t3_ParamLimits

0x37a9,	// (0x00019f08) cell_vitu_itu_pane_t3

0x3c54,	// (0x0001a3b3) mp4_progress_pane_t1_ParamLimits

0x3c6d,	// (0x0001a3cc) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x00025f9b) mp4_progress_pane_t_ParamLimits

0x3c86,	// (0x0001a3e5) mup_progress_pane_cp04_ParamLimits

0xc009,	// (0x00022768) main_myfav_hc_pane_t5_ParamLimits

0xc009,	// (0x00022768) main_myfav_hc_pane_t5

0x6c65,	// (0x0001d3c4) aid_zoom_text_primary

0x6da7,	// (0x0001d506) popup_adpt_find_window_ParamLimits

0x7377,	// (0x0001dad6) main_cam_set_pane

0x7c73,	// (0x0001e3d2) cam4_zoom_pane_ParamLimits

0x7c73,	// (0x0001e3d2) cam4_zoom_pane

0xc119,	// (0x00022878) main_cam_set_pane_g1_ParamLimits

0xc119,	// (0x00022878) main_cam_set_pane_g1

0xc127,	// (0x00022886) main_cam_set_pane_g2_ParamLimits

0xc127,	// (0x00022886) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x0002605c) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x0002605c) main_cam_set_pane_g

0xc133,	// (0x00022892) main_cam_set_pane_t1_ParamLimits

0xc133,	// (0x00022892) main_cam_set_pane_t1

0xc14f,	// (0x000228ae) main_cset_listscroll_pane_ParamLimits

0xc14f,	// (0x000228ae) main_cset_listscroll_pane

0xc183,	// (0x000228e2) main_cset_slider_pane_ParamLimits

0xc183,	// (0x000228e2) main_cset_slider_pane

0x402c,	// (0x0001a78b) main_cset_list_pane_ParamLimits

0x402c,	// (0x0001a78b) main_cset_list_pane

0x403c,	// (0x0001a79b) scroll_pane_cp028

0xc1a4,	// (0x00022903) aid_area_touch_slider

0xc1c0,	// (0x0002291f) cset_slider_pane

0xc1e3,	// (0x00022942) main_cset_slider_pane_g1

0xc1f8,	// (0x00022957) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x00026061) main_cset_slider_pane_g

0x4075,	// (0x0001a7d4) main_cset_slider_pane_t1

0xc2b4,	// (0x00022a13) main_cset_slider_pane_t2

0xc2ce,	// (0x00022a2d) main_cset_slider_pane_t3

0xc2e8,	// (0x00022a47) main_cset_slider_pane_t4

0xc302,	// (0x00022a61) main_cset_slider_pane_t5

0xc31c,	// (0x00022a7b) main_cset_slider_pane_t6

0xc331,	// (0x00022a90) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x00026086) main_cset_slider_pane_t

0xc435,	// (0x00022b94) cset_list_set_pane_ParamLimits

0xc435,	// (0x00022b94) cset_list_set_pane

0x410f,	// (0x0001a86e) aid_position_infowindow_above

0x4117,	// (0x0001a876) aid_position_infowindow_below

0xc446,	// (0x00022ba5) cset_list_set_pane_g1_ParamLimits

0xc446,	// (0x00022ba5) cset_list_set_pane_g1

0xc452,	// (0x00022bb1) cset_list_set_pane_g3_ParamLimits

0xc452,	// (0x00022bb1) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x000260a5) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x000260a5) cset_list_set_pane_g

0xc461,	// (0x00022bc0) cset_list_set_pane_t1_ParamLimits

0xc461,	// (0x00022bc0) cset_list_set_pane_t1

0x0581,	// (0x00016ce0) list_highlight_pane_cp021_ParamLimits

0x0581,	// (0x00016ce0) list_highlight_pane_cp021

0x1ab8,	// (0x00018217) cset_slider_pane_g1

0x1aca,	// (0x00018229) cset_slider_pane_g2

0x1ac1,	// (0x00018220) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x000260aa) cset_slider_pane_g

0x1720,	// (0x00017e7f) aid_area_touch_cam4_zoom

0x810e,	// (0x0001e86d) cam4_zoom_cont_pane

0x8116,	// (0x0001e875) cam4_zoom_pane_g1

0x811e,	// (0x0001e87d) cam4_zoom_pane_g2

0x8126,	// (0x0001e885) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x000260b1) cam4_zoom_pane_g

0x812e,	// (0x0001e88d) cam4_zoom_cont_pane_g1

0x8137,	// (0x0001e896) cam4_zoom_cont_pane_g2

0x8140,	// (0x0001e89f) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x000260b8) cam4_zoom_cont_pane_g

0x7b4d,	// (0x0001e2ac) call4_image_pane_ParamLimits

0x7b4d,	// (0x0001e2ac) call4_image_pane

0xbdcf,	// (0x0002252e) call4_windows_conf_pane_ParamLimits

0xbe16,	// (0x00022575) popup_call4_audio_in_window_ParamLimits

0xbe16,	// (0x00022575) popup_call4_audio_in_window

0x050c,	// (0x00016c6b) bg_popup_call2_act_pane_cp02

0x3d58,	// (0x0001a4b7) call4_list_conf_pane

0x0fa9,	// (0x00017708) call4_image_pane_g1

0x0fa9,	// (0x00017708) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x00025b3c) call4_image_pane_g

0x4143,	// (0x0001a8a2) list_single_graphic_popup_conf4_pane_ParamLimits

0x4143,	// (0x0001a8a2) list_single_graphic_popup_conf4_pane

0x050c,	// (0x00016c6b) list_highlight_pane_cp022

0x4158,	// (0x0001a8b7) list_single_graphic_popup_conf4_pane_g1

0x1779,	// (0x00017ed8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x000260bf) list_single_graphic_popup_conf4_pane_g

0x4160,	// (0x0001a8bf) list_single_graphic_popup_conf4_pane_t1

0x8f78,	// (0x0001f6d7) popup_vtel_slider_window_ParamLimits

0x8f78,	// (0x0001f6d7) popup_vtel_slider_window

0x3c99,	// (0x0001a3f8) dialer2_ne_pane_t2_ParamLimits

0x3c99,	// (0x0001a3f8) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x00025fa0) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x00025fa0) dialer2_ne_pane_t

0x0581,	// (0x00016ce0) bg_popup_sub_pane_cp010_ParamLimits

0x0581,	// (0x00016ce0) bg_popup_sub_pane_cp010

0xc476,	// (0x00022bd5) popup_vtel_slider_window_g1_ParamLimits

0xc476,	// (0x00022bd5) popup_vtel_slider_window_g1

0xc482,	// (0x00022be1) popup_vtel_slider_window_g2_ParamLimits

0xc482,	// (0x00022be1) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x000260c4) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x000260c4) popup_vtel_slider_window_g

0xc4ca,	// (0x00022c29) vtel_slider_pane_ParamLimits

0xc4ca,	// (0x00022c29) vtel_slider_pane

0xc4d9,	// (0x00022c38) vtel_slider_pane_g1_ParamLimits

0xc4d9,	// (0x00022c38) vtel_slider_pane_g1

0xc4e6,	// (0x00022c45) vtel_slider_pane_g2_ParamLimits

0xc4e6,	// (0x00022c45) vtel_slider_pane_g2

0xc4f3,	// (0x00022c52) vtel_slider_pane_g3_ParamLimits

0xc4f3,	// (0x00022c52) vtel_slider_pane_g3

0xc4d9,	// (0x00022c38) vtel_slider_pane_g4_ParamLimits

0xc4d9,	// (0x00022c38) vtel_slider_pane_g4

0xc500,	// (0x00022c5f) vtel_slider_pane_g5_ParamLimits

0xc500,	// (0x00022c5f) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x000260cd) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x000260cd) vtel_slider_pane_g

0x7377,	// (0x0001dad6) main_gallery2_pane

0x7e75,	// (0x0001e5d4) aid_size_row_itut2_dropdow_list_ParamLimits

0x7e75,	// (0x0001e5d4) aid_size_row_itut2_dropdow_list

0x7edf,	// (0x0001e63e) grid_vitu2_function_top_pane_ParamLimits

0x7edf,	// (0x0001e63e) grid_vitu2_function_top_pane

0x7f2f,	// (0x0001e68e) popup_vitu2_dropdown_list_window_ParamLimits

0x7f2f,	// (0x0001e68e) popup_vitu2_dropdown_list_window

0x7f4d,	// (0x0001e6ac) popup_vitu2_match_list_window

0x8149,	// (0x0001e8a8) cell_vitu2_function_top_pane_ParamLimits

0x8149,	// (0x0001e8a8) cell_vitu2_function_top_pane

0x8163,	// (0x0001e8c2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8163,	// (0x0001e8c2) cell_vitu2_function_top_pane_cp01

0x817f,	// (0x0001e8de) cell_vitu2_function_top_wide_pane_ParamLimits

0x817f,	// (0x0001e8de) cell_vitu2_function_top_wide_pane

0x7377,	// (0x0001dad6) bg_button_pane_cp012

0x819d,	// (0x0001e8fc) cell_vitu2_function_top_pane_g1

0x81b1,	// (0x0001e910) bg_button_pane_cp013_ParamLimits

0x81b1,	// (0x0001e910) bg_button_pane_cp013

0xc50d,	// (0x00022c6c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc50d,	// (0x00022c6c) cell_vitu2_function_top_wide_pane_g1

0x6e9f,	// (0x0001d5fe) bg_popup_sub_pane_cp20

0x81cd,	// (0x0001e92c) list_vitu2_match_list_pane

0x3f1e,	// (0x0001a67d) bg_popup_sub_pane_cp20_g1

0x3f26,	// (0x0001a685) bg_popup_sub_pane_cp20_g2

0x11be,	// (0x0001791d) bg_popup_sub_pane_cp20_g3

0x3f2e,	// (0x0001a68d) bg_popup_sub_pane_cp20_g4

0x119e,	// (0x000178fd) bg_popup_sub_pane_cp20_g5

0x4192,	// (0x0001a8f1) bg_popup_sub_pane_cp20_g6

0x3f3e,	// (0x0001a69d) bg_popup_sub_pane_cp20_g7

0x3f46,	// (0x0001a6a5) bg_popup_sub_pane_cp20_g8

0x3f4e,	// (0x0001a6ad) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x000260d8) bg_popup_sub_pane_cp20_g

0x81e5,	// (0x0001e944) list_vitu2_match_list_item_pane_ParamLimits

0x81e5,	// (0x0001e944) list_vitu2_match_list_item_pane

0x81f7,	// (0x0001e956) list_vitu2_match_list_item_pane_t1

0x6ead,	// (0x0001d60c) bg_popup_sub_pane_cp21

0x0f54,	// (0x000176b3) grid_vitu2_dropdown_list_pane

0x8205,	// (0x0001e964) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8205,	// (0x0001e964) cell_vitu2_dropdown_list_char_pane

0x822a,	// (0x0001e989) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x822a,	// (0x0001e989) cell_vitu2_dropdown_list_ctrl_pane

0x41cc,	// (0x0001a92b) cell_vitu2_dropdown_list_char_pane_g1

0x41c3,	// (0x0001a922) cell_vitu2_dropdown_list_char_pane_g2

0x41ba,	// (0x0001a919) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x000260eb) cell_vitu2_dropdown_list_char_pane_g

0x8256,	// (0x0001e9b5) cell_vitu2_dropdown_list_char_pane_t1

0xc525,	// (0x00022c84) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc525,	// (0x00022c84) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc535,	// (0x00022c94) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc535,	// (0x00022c94) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc546,	// (0x00022ca5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc546,	// (0x00022ca5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8264,	// (0x0001e9c3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8264,	// (0x0001e9c3) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5184,	// (0x0001b8e3) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5184,	// (0x0001b8e3) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x000260f2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x000260f2) cell_vitu2_dropdown_list_ctrl_pane_g

0xc556,	// (0x00022cb5) aid_size_cell_gallery2_ParamLimits

0xc556,	// (0x00022cb5) aid_size_cell_gallery2

0xc570,	// (0x00022ccf) grid_gallery2_pane_ParamLimits

0xc570,	// (0x00022ccf) grid_gallery2_pane

0xc587,	// (0x00022ce6) scroll_pane_cp029_ParamLimits

0xc587,	// (0x00022ce6) scroll_pane_cp029

0xc597,	// (0x00022cf6) cell_gallery2_pane_ParamLimits

0xc597,	// (0x00022cf6) cell_gallery2_pane

0x41d5,	// (0x0001a934) cell_gallery2_pane_g2

0xc5ee,	// (0x00022d4d) cell_gallery2_pane_g3

0x41dd,	// (0x0001a93c) cell_gallery2_pane_g4

0x41e5,	// (0x0001a944) cell_gallery2_pane_g5

0x0f54,	// (0x000176b3) grid_highlight_pane_cp10

0x7f4d,	// (0x0001e6ac) popup_vitu2_match_list_window_ParamLimits

0x7e83,	// (0x0001e5e2) popup_vitu2_query_window_ParamLimits

0x7e83,	// (0x0001e5e2) popup_vitu2_query_window

0x6ead,	// (0x0001d60c) bg_vitu2_candi_button_pane

0x41cc,	// (0x0001a92b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x41c3,	// (0x0001a922) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x41ba,	// (0x0001a919) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc5f6,	// (0x00022d55) bg_button_pane_cp015

0xc608,	// (0x00022d67) bg_button_pane_cp016

0xc61b,	// (0x00022d7a) bg_button_pane_cp017

0x1a46,	// (0x000181a5) bg_popup_sub_pane_cp22

0x41ed,	// (0x0001a94c) popup_vitu2_query_window_g1

0xc660,	// (0x00022dbf) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x000260fd) popup_vitu2_query_window_g

0xc67d,	// (0x00022ddc) popup_vitu2_query_window_t1_ParamLimits

0xc67d,	// (0x00022ddc) popup_vitu2_query_window_t1

0xc6b0,	// (0x00022e0f) popup_vitu2_query_window_t2_ParamLimits

0xc6b0,	// (0x00022e0f) popup_vitu2_query_window_t2

0xc6c2,	// (0x00022e21) popup_vitu2_query_window_t3_ParamLimits

0xc6c2,	// (0x00022e21) popup_vitu2_query_window_t3

0xc6ea,	// (0x00022e49) popup_vitu2_query_window_t4_ParamLimits

0xc6ea,	// (0x00022e49) popup_vitu2_query_window_t4

0xc70d,	// (0x00022e6c) popup_vitu2_query_window_t5_ParamLimits

0xc70d,	// (0x00022e6c) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x00026104) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x00026104) popup_vitu2_query_window_t

0x4024,	// (0x0001a783) main_cset_text_pane

0xc1a4,	// (0x00022903) aid_area_touch_slider_ParamLimits

0xc1c0,	// (0x0002291f) cset_slider_pane_ParamLimits

0xc1e3,	// (0x00022942) main_cset_slider_pane_g1_ParamLimits

0xc1f8,	// (0x00022957) main_cset_slider_pane_g2_ParamLimits

0x4045,	// (0x0001a7a4) main_cset_slider_pane_g3_ParamLimits

0x4045,	// (0x0001a7a4) main_cset_slider_pane_g3

0xc20d,	// (0x0002296c) main_cset_slider_pane_g4_ParamLimits

0xc20d,	// (0x0002296c) main_cset_slider_pane_g4

0xc21c,	// (0x0002297b) main_cset_slider_pane_g5_ParamLimits

0xc21c,	// (0x0002297b) main_cset_slider_pane_g5

0xc228,	// (0x00022987) main_cset_slider_pane_g6_ParamLimits

0xc228,	// (0x00022987) main_cset_slider_pane_g6

0xf902,	// (0x00026061) main_cset_slider_pane_g_ParamLimits

0x4075,	// (0x0001a7d4) main_cset_slider_pane_t1_ParamLimits

0xc2b4,	// (0x00022a13) main_cset_slider_pane_t2_ParamLimits

0xc2ce,	// (0x00022a2d) main_cset_slider_pane_t3_ParamLimits

0xc2e8,	// (0x00022a47) main_cset_slider_pane_t4_ParamLimits

0xc302,	// (0x00022a61) main_cset_slider_pane_t5_ParamLimits

0xc31c,	// (0x00022a7b) main_cset_slider_pane_t6_ParamLimits

0xc331,	// (0x00022a90) main_cset_slider_pane_t7_ParamLimits

0xc35b,	// (0x00022aba) main_cset_slider_pane_t8_ParamLimits

0xc35b,	// (0x00022aba) main_cset_slider_pane_t8

0xc383,	// (0x00022ae2) main_cset_slider_pane_t9_ParamLimits

0xc383,	// (0x00022ae2) main_cset_slider_pane_t9

0xc3ab,	// (0x00022b0a) main_cset_slider_pane_t10_ParamLimits

0xc3ab,	// (0x00022b0a) main_cset_slider_pane_t10

0xc3d3,	// (0x00022b32) main_cset_slider_pane_t11_ParamLimits

0xc3d3,	// (0x00022b32) main_cset_slider_pane_t11

0xc3fb,	// (0x00022b5a) main_cset_slider_pane_t12_ParamLimits

0xc3fb,	// (0x00022b5a) main_cset_slider_pane_t12

0xc418,	// (0x00022b77) main_cset_slider_pane_t13_ParamLimits

0xc418,	// (0x00022b77) main_cset_slider_pane_t13

0xf927,	// (0x00026086) main_cset_slider_pane_t_ParamLimits

0x050c,	// (0x00016c6b) bg_popup_sub_pane_cp011

0x41f9,	// (0x0001a958) main_cset_text_pane_g1

0x4201,	// (0x0001a960) main_cset_text_pane_t1

0x420f,	// (0x0001a96e) main_cset_text_pane_t2

0x421d,	// (0x0001a97c) main_cset_text_pane_t3

0x422b,	// (0x0001a98a) main_cset_text_pane_t4

0x4239,	// (0x0001a998) main_cset_text_pane_t5

0x4247,	// (0x0001a9a6) main_cset_text_pane_t6

0x4255,	// (0x0001a9b4) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x00026113) main_cset_text_pane_t

0x6ead,	// (0x0001d60c) main_cam4_burst_pane

0x6ead,	// (0x0001d60c) main_cam5_pane

0xc0e8,	// (0x00022847) bg_button_pane_cp019

0xc0f1,	// (0x00022850) bg_button_pane_cp020

0x4051,	// (0x0001a7b0) main_cset_slider_pane_g7_ParamLimits

0x4051,	// (0x0001a7b0) main_cset_slider_pane_g7

0x405d,	// (0x0001a7bc) main_cset_slider_pane_g8_ParamLimits

0x405d,	// (0x0001a7bc) main_cset_slider_pane_g8

0xc23c,	// (0x0002299b) main_cset_slider_pane_g9_ParamLimits

0xc23c,	// (0x0002299b) main_cset_slider_pane_g9

0xc248,	// (0x000229a7) main_cset_slider_pane_g10_ParamLimits

0xc248,	// (0x000229a7) main_cset_slider_pane_g10

0xc254,	// (0x000229b3) main_cset_slider_pane_g11_ParamLimits

0xc254,	// (0x000229b3) main_cset_slider_pane_g11

0xc260,	// (0x000229bf) main_cset_slider_pane_g12_ParamLimits

0xc260,	// (0x000229bf) main_cset_slider_pane_g12

0xc26c,	// (0x000229cb) main_cset_slider_pane_g13_ParamLimits

0xc26c,	// (0x000229cb) main_cset_slider_pane_g13

0xc278,	// (0x000229d7) main_cset_slider_pane_g14_ParamLimits

0xc278,	// (0x000229d7) main_cset_slider_pane_g14

0xc284,	// (0x000229e3) main_cset_slider_pane_g15_ParamLimits

0xc284,	// (0x000229e3) main_cset_slider_pane_g15

0x409d,	// (0x0001a7fc) main_cset_slider_pane_t14_ParamLimits

0x409d,	// (0x0001a7fc) main_cset_slider_pane_t14

0x40d6,	// (0x0001a835) main_cset_slider_pane_t15_ParamLimits

0x40d6,	// (0x0001a835) main_cset_slider_pane_t15

0xc786,	// (0x00022ee5) aid_cam4_burst_size_cell_ParamLimits

0xc786,	// (0x00022ee5) aid_cam4_burst_size_cell

0xc7a2,	// (0x00022f01) grid_cam4_burst_pane_ParamLimits

0xc7a2,	// (0x00022f01) grid_cam4_burst_pane

0xc7d4,	// (0x00022f33) linegrid_cam4_burst_pane_ParamLimits

0xc7d4,	// (0x00022f33) linegrid_cam4_burst_pane

0xc7f2,	// (0x00022f51) scroll_pane_cp30_ParamLimits

0xc7f2,	// (0x00022f51) scroll_pane_cp30

0xc7fe,	// (0x00022f5d) cell_cam4_burst_pane_ParamLimits

0xc7fe,	// (0x00022f5d) cell_cam4_burst_pane

0x426f,	// (0x0001a9ce) linegrid_cam4_burst_pane_g1_ParamLimits

0x426f,	// (0x0001a9ce) linegrid_cam4_burst_pane_g1

0xc83e,	// (0x00022f9d) linegrid_cam4_burst_pane_g2_ParamLimits

0xc83e,	// (0x00022f9d) linegrid_cam4_burst_pane_g2

0x427c,	// (0x0001a9db) linegrid_cam4_burst_pane_g3_ParamLimits

0x427c,	// (0x0001a9db) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x00026122) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x00026122) linegrid_cam4_burst_pane_g

0xc84f,	// (0x00022fae) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc84f,	// (0x00022fae) linegrid_cam4_burst_pane_g3_copy1

0x4289,	// (0x0001a9e8) linegrid_cam4_burst_pane_g4_ParamLimits

0x4289,	// (0x0001a9e8) linegrid_cam4_burst_pane_g4

0xc869,	// (0x00022fc8) linegrid_cam4_burst_pane_g5_ParamLimits

0xc869,	// (0x00022fc8) linegrid_cam4_burst_pane_g5

0xc87a,	// (0x00022fd9) linegrid_cam4_burst_pane_g6_ParamLimits

0xc87a,	// (0x00022fd9) linegrid_cam4_burst_pane_g6

0x4296,	// (0x0001a9f5) linegrid_cam4_burst_pane_g7_ParamLimits

0x4296,	// (0x0001a9f5) linegrid_cam4_burst_pane_g7

0xc891,	// (0x00022ff0) cell_cam4_burst_pane_g1

0x42af,	// (0x0001aa0e) main_cam5_pane_t1_ParamLimits

0x42af,	// (0x0001aa0e) main_cam5_pane_t1

0x42c1,	// (0x0001aa20) main_cam5_pane_t2_ParamLimits

0x42c1,	// (0x0001aa20) main_cam5_pane_t2

0x42d3,	// (0x0001aa32) main_cam5_pane_t3_ParamLimits

0x42d3,	// (0x0001aa32) main_cam5_pane_t3

0x42e5,	// (0x0001aa44) main_cam5_pane_t4_ParamLimits

0x42e5,	// (0x0001aa44) main_cam5_pane_t4

0x42fd,	// (0x0001aa5c) main_cam5_pane_t5_ParamLimits

0x42fd,	// (0x0001aa5c) main_cam5_pane_t5

0x4311,	// (0x0001aa70) main_cam5_pane_t6_ParamLimits

0x4311,	// (0x0001aa70) main_cam5_pane_t6

0x4325,	// (0x0001aa84) main_cam5_pane_t7_ParamLimits

0x4325,	// (0x0001aa84) main_cam5_pane_t7

0x4337,	// (0x0001aa96) main_cam5_pane_t8_ParamLimits

0x4337,	// (0x0001aa96) main_cam5_pane_t8

0x4355,	// (0x0001aab4) main_cam5_pane_t9_ParamLimits

0x4355,	// (0x0001aab4) main_cam5_pane_t9

0x4367,	// (0x0001aac6) main_cam5_pane_t10_ParamLimits

0x4367,	// (0x0001aac6) main_cam5_pane_t10

0x4379,	// (0x0001aad8) main_cam5_pane_t11_ParamLimits

0x4379,	// (0x0001aad8) main_cam5_pane_t11

0x438d,	// (0x0001aaec) main_cam5_pane_t12_ParamLimits

0x438d,	// (0x0001aaec) main_cam5_pane_t12

0x43a4,	// (0x0001ab03) main_cam5_pane_t13_ParamLimits

0x43a4,	// (0x0001ab03) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x0002612e) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x0002612e) main_cam5_pane_t

0x6e5e,	// (0x0001d5bd) popup_scut_keymap_window_ParamLimits

0x6e5e,	// (0x0001d5bd) popup_scut_keymap_window

0xc8a4,	// (0x00023003) aid_size_cell_brow_shortcut

0x0f54,	// (0x000176b3) bg_popup_window_pane_cp010

0xc8b0,	// (0x0002300f) grid_scut_pane

0xc8bc,	// (0x0002301b) cell_scut_pane_ParamLimits

0xc8bc,	// (0x0002301b) cell_scut_pane

0xc8d7,	// (0x00023036) cell_scut_pane_g1

0x43c7,	// (0x0001ab26) cell_scut_pane_t1

0x43d6,	// (0x0001ab35) cell_scut_pane_t2

0xc8e0,	// (0x0002303f) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x00026149) cell_scut_pane_t

0xb479,	// (0x00021bd8) main_mup3_pane_g8_ParamLimits

0xb479,	// (0x00021bd8) main_mup3_pane_g8

0x7e83,	// (0x0001e5e2) area_vitu2_query_pane_ParamLimits

0x7e83,	// (0x0001e5e2) area_vitu2_query_pane

0xc62e,	// (0x00022d8d) input_focus_pane_cp08

0x43e5,	// (0x0001ab44) area_vitu2_query_pane_g1

0xc8ee,	// (0x0002304d) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x00026150) area_vitu2_query_pane_g

0xc8ff,	// (0x0002305e) area_vitu2_query_pane_t1_ParamLimits

0xc8ff,	// (0x0002305e) area_vitu2_query_pane_t1

0xc915,	// (0x00023074) area_vitu2_query_pane_t2_ParamLimits

0xc915,	// (0x00023074) area_vitu2_query_pane_t2

0xc92b,	// (0x0002308a) area_vitu2_query_pane_t3_ParamLimits

0xc92b,	// (0x0002308a) area_vitu2_query_pane_t3

0x43f1,	// (0x0001ab50) area_vitu2_query_pane_t4_ParamLimits

0x43f1,	// (0x0001ab50) area_vitu2_query_pane_t4

0x4419,	// (0x0001ab78) area_vitu2_query_pane_t5_ParamLimits

0x4419,	// (0x0001ab78) area_vitu2_query_pane_t5

0x4441,	// (0x0001aba0) area_vitu2_query_pane_t6_ParamLimits

0x4441,	// (0x0001aba0) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x00026155) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x00026155) area_vitu2_query_pane_t

0xc953,	// (0x000230b2) bg_button_pane_cp018

0xc961,	// (0x000230c0) bg_button_pane_cp021

0xc96d,	// (0x000230cc) bg_button_pane_cp022

0xc97e,	// (0x000230dd) input_focus_pane_cp09

0xa1f4,	// (0x00020953) aid_size_touch_mv_arrow_left

0xa21f,	// (0x0002097e) aid_size_touch_mv_arrow_right

0xc29c,	// (0x000229fb) main_cset_slider_pane_g16_ParamLimits

0xc29c,	// (0x000229fb) main_cset_slider_pane_g16

0xc2a8,	// (0x00022a07) main_cset_slider_pane_g17_ParamLimits

0xc2a8,	// (0x00022a07) main_cset_slider_pane_g17

0xc891,	// (0x00022ff0) cell_cam4_burst_pane_g1_ParamLimits

0x050c,	// (0x00016c6b) compa_mode_pane

0xc48e,	// (0x00022bed) popup_vtel_slider_window_g3_ParamLimits

0xc48e,	// (0x00022bed) popup_vtel_slider_window_g3

0xc4a2,	// (0x00022c01) popup_vtel_slider_window_g4_ParamLimits

0xc4a2,	// (0x00022c01) popup_vtel_slider_window_g4

0xc4b6,	// (0x00022c15) popup_vtel_slider_window_t1_ParamLimits

0xc4b6,	// (0x00022c15) popup_vtel_slider_window_t1

0x6ead,	// (0x0001d60c) main_cl_pane

0x742d,	// (0x0001db8c) popup_imed_adjust2_window_ParamLimits

0x1a46,	// (0x000181a5) bg_tb_trans_pane_cp05_ParamLimits

0x36d4,	// (0x00019e33) popup_imed_adjust2_window_g1_ParamLimits

0x36e3,	// (0x00019e42) popup_imed_adjust2_window_g2_ParamLimits

0x36e3,	// (0x00019e42) popup_imed_adjust2_window_g2

0x36ef,	// (0x00019e4e) popup_imed_adjust2_window_g3_ParamLimits

0x36ef,	// (0x00019e4e) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x00025ecb) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x00025ecb) popup_imed_adjust2_window_g

0x36fb,	// (0x00019e5a) popup_imed_adjust2_window_t1_ParamLimits

0x3713,	// (0x00019e72) slider_imed_adjust_pane_ParamLimits

0x3727,	// (0x00019e86) slider_imed_adjust_pane_g1_ParamLimits

0x3737,	// (0x00019e96) slider_imed_adjust_pane_g2_ParamLimits

0x3747,	// (0x00019ea6) slider_imed_adjust_pane_g3_ParamLimits

0x3758,	// (0x00019eb7) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x00025ed2) slider_imed_adjust_pane_g_ParamLimits

0x7c1c,	// (0x0001e37b) aid_touch_area_cam4_ParamLimits

0x7c1c,	// (0x0001e37b) aid_touch_area_cam4

0x7c2c,	// (0x0001e38b) battery_pane_cp01

0x7cb3,	// (0x0001e412) main_camera4_pane_g6_ParamLimits

0x7cb3,	// (0x0001e412) main_camera4_pane_g6

0x7cd1,	// (0x0001e430) main_camera4_pane_t2_ParamLimits

0x7cd1,	// (0x0001e430) main_camera4_pane_t2

0x0001,

0xf875,	// (0x00025fd4) main_camera4_pane_t_ParamLimits

0xf875,	// (0x00025fd4) main_camera4_pane_t

0x7d2e,	// (0x0001e48d) aid_touch_area_vid4_ParamLimits

0x7d2e,	// (0x0001e48d) aid_touch_area_vid4

0x7d6e,	// (0x0001e4cd) main_video4_pane_g5_ParamLimits

0x7d6e,	// (0x0001e4cd) main_video4_pane_g5

0x7d94,	// (0x0001e4f3) vid4_progress_pane_ParamLimits

0x7d94,	// (0x0001e4f3) vid4_progress_pane

0x4069,	// (0x0001a7c8) main_cset_slider_pane_g18_ParamLimits

0x4069,	// (0x0001a7c8) main_cset_slider_pane_g18

0x42a3,	// (0x0001aa02) cell_cam4_burst_pane_g2_ParamLimits

0x42a3,	// (0x0001aa02) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x00026129) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x00026129) cell_cam4_burst_pane_g

0xc98f,	// (0x000230ee) bg_cl_pane_ParamLimits

0xc98f,	// (0x000230ee) bg_cl_pane

0xc99b,	// (0x000230fa) cl_header_pane_ParamLimits

0xc99b,	// (0x000230fa) cl_header_pane

0xc9a7,	// (0x00023106) cl_listscroll_pane_ParamLimits

0xc9a7,	// (0x00023106) cl_listscroll_pane

0x448d,	// (0x0001abec) bg_cl_pane_g1

0x4495,	// (0x0001abf4) bg_cl_pane_g2

0x449d,	// (0x0001abfc) bg_cl_pane_g3

0x44a5,	// (0x0001ac04) bg_cl_pane_g4

0x44ad,	// (0x0001ac0c) bg_cl_pane_g5

0x44b5,	// (0x0001ac14) bg_cl_pane_g6

0x44bd,	// (0x0001ac1c) bg_cl_pane_g7

0x44c5,	// (0x0001ac24) bg_cl_pane_g8

0x44cd,	// (0x0001ac2c) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x00026164) bg_cl_pane_g

0xc9b3,	// (0x00023112) aid_height_cl_leading_ParamLimits

0xc9b3,	// (0x00023112) aid_height_cl_leading

0xc9bf,	// (0x0002311e) aid_height_cl_text_ParamLimits

0xc9bf,	// (0x0002311e) aid_height_cl_text

0x0c9f,	// (0x000173fe) bg_cl_header_pane_ParamLimits

0x0c9f,	// (0x000173fe) bg_cl_header_pane

0xc9d7,	// (0x00023136) cl_header_pane_g1_ParamLimits

0xc9d7,	// (0x00023136) cl_header_pane_g1

0xc9e4,	// (0x00023143) cl_header_pane_t1_ParamLimits

0xc9e4,	// (0x00023143) cl_header_pane_t1

0x44d5,	// (0x0001ac34) cl_list_pane

0x403c,	// (0x0001a79b) hc_scroll_pane_cp01

0x119e,	// (0x000178fd) bg_cl_header_pane_g1

0x3f1e,	// (0x0001a67d) bg_cl_header_pane_g2

0x11be,	// (0x0001791d) bg_cl_header_pane_g3

0x3f2e,	// (0x0001a68d) bg_cl_header_pane_g4

0x3f26,	// (0x0001a685) bg_cl_header_pane_g5

0x4192,	// (0x0001a8f1) bg_cl_header_pane_g6

0x3f46,	// (0x0001a6a5) bg_cl_header_pane_g7

0x3f4e,	// (0x0001a6ad) bg_cl_header_pane_g8

0x3f3e,	// (0x0001a69d) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x00026177) bg_cl_header_pane_g

0xc9f6,	// (0x00023155) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc9f6,	// (0x00023155) hc_cl_list_double_graphic_heading_pane

0xca06,	// (0x00023165) hc_cl_list_single_graphic_pane_ParamLimits

0xca06,	// (0x00023165) hc_cl_list_single_graphic_pane

0xca18,	// (0x00023177) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xca18,	// (0x00023177) hc_cl_list_single_graphic_pane_g1

0xca24,	// (0x00023183) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xca24,	// (0x00023183) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x0002618a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x0002618a) hc_cl_list_single_graphic_pane_g

0xca38,	// (0x00023197) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xca38,	// (0x00023197) hc_cl_list_single_graphic_pane_t1

0xca18,	// (0x00023177) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xca18,	// (0x00023177) hc_cl_list_double_graphic_heading_pane_g1

0xca4d,	// (0x000231ac) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xca4d,	// (0x000231ac) hc_cl_list_double_graphic_heading_pane_g2

0xca61,	// (0x000231c0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xca61,	// (0x000231c0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x0002618f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x0002618f) hc_cl_list_double_graphic_heading_pane_g

0xca75,	// (0x000231d4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xca75,	// (0x000231d4) hc_cl_list_double_graphic_heading_pane_t1

0xca8a,	// (0x000231e9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xca8a,	// (0x000231e9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x00026196) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x00026196) hc_cl_list_double_graphic_heading_pane_t

0x8285,	// (0x0001e9e4) vid4_progress_pane_g1

0x8295,	// (0x0001e9f4) vid4_progress_pane_g2

0x82a5,	// (0x0001ea04) vid4_progress_pane_g3

0x82b7,	// (0x0001ea16) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x0002619b) vid4_progress_pane_g

0x82d5,	// (0x0001ea34) vid4_progress_pane_t1

0x82ef,	// (0x0001ea4e) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x000261a6) vid4_progress_pane_t

0x8319,	// (0x0001ea78) wait_bar_pane_cp07

0x301d,	// (0x0001977c) blid_firmament_pane_ParamLimits

0x3060,	// (0x000197bf) popup_blid_sat_info2_window_g1

0x3084,	// (0x000197e3) popup_blid_sat_info2_window_t3

0x3092,	// (0x000197f1) popup_blid_sat_info2_window_t4

0x30a0,	// (0x000197ff) popup_blid_sat_info2_window_t5

0x30ae,	// (0x0001980d) popup_blid_sat_info2_window_t6

0x30be,	// (0x0001981d) popup_blid_sat_info2_window_t7

0x30cc,	// (0x0001982b) popup_blid_sat_info2_window_t8

0x30da,	// (0x00019839) popup_blid_sat_info2_window_t9

0x30e8,	// (0x00019847) popup_blid_sat_info2_window_t10

0x31af,	// (0x0001990e) aid_firma_cardinal_ParamLimits

0x31c3,	// (0x00019922) blid_firmament_pane_t1_ParamLimits

0x31da,	// (0x00019939) blid_firmament_pane_t2_ParamLimits

0x31f1,	// (0x00019950) blid_firmament_pane_t3_ParamLimits

0x3208,	// (0x00019967) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x00025dc4) blid_firmament_pane_t_ParamLimits

0x321f,	// (0x0001997e) blid_sat_info_pane_ParamLimits

0x7377,	// (0x0001dad6) main_cam_set_pane_ParamLimits

0xba9e,	// (0x000221fd) aid_size_cell_colour_35_ParamLimits

0xbab8,	// (0x00022217) aid_size_cell_colour_112_ParamLimits

0xbacf,	// (0x0002222e) aid_size_cell_effect_ParamLimits

0x0581,	// (0x00016ce0) bg_tb_trans_pane_cp02_ParamLimits

0x14db,	// (0x00017c3a) heading_imed_pane_ParamLimits

0xbae9,	// (0x00022248) listscroll_imed_pane_ParamLimits

0x2435,	// (0x00018b94) popup_call2_audio_first_window_g5_ParamLimits

0x2435,	// (0x00018b94) popup_call2_audio_first_window_g5

0x79d4,	// (0x0001e133) aid_size_touch_image3_arrow_left_ParamLimits

0x79d4,	// (0x0001e133) aid_size_touch_image3_arrow_left

0x79ea,	// (0x0001e149) aid_size_touch_image3_arrow_right_ParamLimits

0x79ea,	// (0x0001e149) aid_size_touch_image3_arrow_right

0x8304,	// (0x0001ea63) vid4_progress_pane_t3

0xbc64,	// (0x000223c3) main_hwr_training_symbol_option_pane_ParamLimits

0xbc64,	// (0x000223c3) main_hwr_training_symbol_option_pane

0x3919,	// (0x0001a078) popup_hwr_training_preview_window_ParamLimits

0x3919,	// (0x0001a078) popup_hwr_training_preview_window

0x76ae,	// (0x0001de0d) hwr_training_navi_pane_g5_ParamLimits

0x76ae,	// (0x0001de0d) hwr_training_navi_pane_g5

0x3f0c,	// (0x0001a66b) popup_char_count_window

0x6e9f,	// (0x0001d5fe) bg_popup_sub_pane_cp20_ParamLimits

0x81cd,	// (0x0001e92c) list_vitu2_match_list_pane_ParamLimits

0x81d9,	// (0x0001e938) vitu2_page_scroll_pane_ParamLimits

0x81d9,	// (0x0001e938) vitu2_page_scroll_pane

0x459c,	// (0x0001acfb) list_single_hwr_training_symbol_option_pane_ParamLimits

0x459c,	// (0x0001acfb) list_single_hwr_training_symbol_option_pane

0x45af,	// (0x0001ad0e) list_single_hwr_training_symbol_option_pane_g1

0x45b7,	// (0x0001ad16) list_single_hwr_training_symbol_option_pane_t1

0x45c5,	// (0x0001ad24) bg_button_pane_cp023

0x45ce,	// (0x0001ad2d) bg_button_pane_cp024

0x4601,	// (0x0001ad60) vitu2_page_scroll_pane_g1

0x4609,	// (0x0001ad68) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x000261ad) vitu2_page_scroll_pane_g

0x4611,	// (0x0001ad70) vitu2_page_scroll_pane_t1

0x3ceb,	// (0x0001a44a) popup_char_count_window_g1

0x4620,	// (0x0001ad7f) popup_char_count_window_g2

0x3cf4,	// (0x0001a453) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x000261b2) popup_char_count_window_g

0x4629,	// (0x0001ad88) popup_char_count_window_t1

0x6ead,	// (0x0001d60c) main_vded2_pane

0x36c0,	// (0x00019e1f) aid_size_cell_imed_line

0x36ca,	// (0x00019e29) grid_imed_line_width_pane

0x7e08,	// (0x0001e567) vid4_indicators_pane_g4

0x4637,	// (0x0001ad96) cell_imed_line_width_pane_ParamLimits

0x4637,	// (0x0001ad96) cell_imed_line_width_pane

0x464d,	// (0x0001adac) cell_imed_line_width_pane_g1

0x4656,	// (0x0001adb5) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x000261b9) cell_imed_line_width_pane_g

0xcab3,	// (0x00023212) main_vded2_pane_g1_ParamLimits

0xcab3,	// (0x00023212) main_vded2_pane_g1

0xcac2,	// (0x00023221) main_vded2_pane_g2_ParamLimits

0xcac2,	// (0x00023221) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x000261be) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x000261be) main_vded2_pane_g

0xcad0,	// (0x0002322f) vded2_slider_pane_ParamLimits

0xcad0,	// (0x0002322f) vded2_slider_pane

0xcadd,	// (0x0002323c) aid_size_touch_vded2_end

0xcae7,	// (0x00023246) aid_size_touch_vded2_playhead

0x465e,	// (0x0001adbd) aid_size_touch_vded2_start

0x4666,	// (0x0001adc5) vded2_slider_bg_pane

0x466f,	// (0x0001adce) vded2_slider_pane_g1

0x4678,	// (0x0001add7) vded2_slider_pane_g2

0xcaef,	// (0x0002324e) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x000261c3) vded2_slider_pane_g

0x3cfd,	// (0x0001a45c) vded2_slider_bg_pane_g1

0x3d06,	// (0x0001a465) vded2_slider_bg_pane_g2

0x3d0f,	// (0x0001a46e) vded2_slider_bg_pane_g3

0x0002,

0xf730,	// (0x00025e8f) vded2_slider_bg_pane_g

0xa68b,	// (0x00020dea) aid_postcard_touch_down_pane_ParamLimits

0xa68b,	// (0x00020dea) aid_postcard_touch_down_pane

0xa69b,	// (0x00020dfa) aid_postcard_touch_up_pane_ParamLimits

0xa69b,	// (0x00020dfa) aid_postcard_touch_up_pane

0x6ead,	// (0x0001d60c) main_blid2_pane

0x73ac,	// (0x0001db0b) popup_blid2_search_window

0x050c,	// (0x00016c6b) blid2_gps_pane

0x050c,	// (0x00016c6b) blid2_navig_pane

0x050c,	// (0x00016c6b) blid2_search_pane

0x050c,	// (0x00016c6b) blid2_tripm_pane

0xcaf8,	// (0x00023257) blid2_search_pane_g1_ParamLimits

0xcaf8,	// (0x00023257) blid2_search_pane_g1

0xcb04,	// (0x00023263) blid2_search_pane_t1_ParamLimits

0xcb04,	// (0x00023263) blid2_search_pane_t1

0xcb16,	// (0x00023275) aid_size_cell_blid2_gps_ParamLimits

0xcb16,	// (0x00023275) aid_size_cell_blid2_gps

0xcb26,	// (0x00023285) blid2_gps_pane_g1_ParamLimits

0xcb26,	// (0x00023285) blid2_gps_pane_g1

0xcb32,	// (0x00023291) grid_blid2_satellite_pane_ParamLimits

0xcb32,	// (0x00023291) grid_blid2_satellite_pane

0xcb40,	// (0x0002329f) blid2_navig_pane_g1_ParamLimits

0xcb40,	// (0x0002329f) blid2_navig_pane_g1

0xcb4c,	// (0x000232ab) blid2_navig_pane_t1_ParamLimits

0xcb4c,	// (0x000232ab) blid2_navig_pane_t1

0xcb5e,	// (0x000232bd) blid2_navig_pane_t2_ParamLimits

0xcb5e,	// (0x000232bd) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x000261ca) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x000261ca) blid2_navig_pane_t

0xcb70,	// (0x000232cf) blid2_navig_ring_pane_ParamLimits

0xcb70,	// (0x000232cf) blid2_navig_ring_pane

0xcb80,	// (0x000232df) blid2_speed_pane_ParamLimits

0xcb80,	// (0x000232df) blid2_speed_pane

0xcb8c,	// (0x000232eb) blid2_tripm_pane_g1_ParamLimits

0xcb8c,	// (0x000232eb) blid2_tripm_pane_g1

0xcb9c,	// (0x000232fb) blid2_tripm_pane_g2_ParamLimits

0xcb9c,	// (0x000232fb) blid2_tripm_pane_g2

0xcba8,	// (0x00023307) blid2_tripm_pane_g3_ParamLimits

0xcba8,	// (0x00023307) blid2_tripm_pane_g3

0xcbb4,	// (0x00023313) blid2_tripm_pane_g4_ParamLimits

0xcbb4,	// (0x00023313) blid2_tripm_pane_g4

0xcbc0,	// (0x0002331f) blid2_tripm_pane_g5_ParamLimits

0xcbc0,	// (0x0002331f) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x000261cf) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x000261cf) blid2_tripm_pane_g

0xcbdc,	// (0x0002333b) blid2_tripm_pane_t1_ParamLimits

0xcbdc,	// (0x0002333b) blid2_tripm_pane_t1

0xcbee,	// (0x0002334d) blid2_tripm_pane_t2_ParamLimits

0xcbee,	// (0x0002334d) blid2_tripm_pane_t2

0xcc00,	// (0x0002335f) blid2_tripm_pane_t3_ParamLimits

0xcc00,	// (0x0002335f) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x000261dc) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x000261dc) blid2_tripm_pane_t

0xcc32,	// (0x00023391) cell_blid2_satellite_pane_ParamLimits

0xcc32,	// (0x00023391) cell_blid2_satellite_pane

0xcc50,	// (0x000233af) cell_blid2_satellite_pane_g1

0x4680,	// (0x0001addf) cell_blid2_satellite_pane_t1

0x0fa9,	// (0x00017708) blid2_speed_pane_g1

0x468e,	// (0x0001aded) blid2_speed_pane_t1

0x469c,	// (0x0001adfb) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x000261e5) blid2_speed_pane_t

0x0fa9,	// (0x00017708) blid2_navig_ring_pane_g1

0xcc59,	// (0x000233b8) blid2_navig_ring_pane_g2

0xcc61,	// (0x000233c0) blid2_navig_ring_pane_g3

0xcc69,	// (0x000233c8) blid2_navig_ring_pane_g4

0xcc71,	// (0x000233d0) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x000261ea) blid2_navig_ring_pane_g

0x050c,	// (0x00016c6b) bg_popup_window_pane_cp011

0x46aa,	// (0x0001ae09) popup_blid2_search_window_g1

0x46b2,	// (0x0001ae11) popup_blid2_search_window_t1

0x46c0,	// (0x0001ae1f) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x000261f5) popup_blid2_search_window_t

0x10ad,	// (0x0001780c) main_browser_pane_g1

0x0d41,	// (0x000174a0) main_browser_pane_ParamLimits

0x7377,	// (0x0001dad6) bg_button_pane_cp011_ParamLimits

0x80fa,	// (0x0001e859) cell_vitu2_function_pane_g1_ParamLimits

0x1a46,	// (0x000181a5) bg_popup_sub_pane_cp22_ParamLimits

0xc62e,	// (0x00022d8d) input_focus_pane_cp08_ParamLimits

0xc645,	// (0x00022da4) popup_vitu2_query_button_pane_ParamLimits

0xc645,	// (0x00022da4) popup_vitu2_query_button_pane

0xc656,	// (0x00022db5) popup_vitu2_query_input_button_pane

0x41ed,	// (0x0001a94c) popup_vitu2_query_window_g1_ParamLimits

0xc660,	// (0x00022dbf) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x000260fd) popup_vitu2_query_window_g_ParamLimits

0x050c,	// (0x00016c6b) bg_button_pane_cp026

0xcc79,	// (0x000233d8) popup_vitu2_query_input_button_pane_g1

0x050c,	// (0x00016c6b) bg_button_pane_cp025

0x46ce,	// (0x0001ae2d) popup_vitu2_query_button_pane_t1

0xb0df,	// (0x0002183e) main_mp3_pane_t6

0xb0ef,	// (0x0002184e) popup_slider_window_cp01

0x7ce3,	// (0x0001e442) cam4_battery_pane

0x7dc1,	// (0x0001e520) cam4_battery_pane_cp02

0x827d,	// (0x0001e9dc) cam4_battery_pane_cp01

0x827d,	// (0x0001e9dc) cam4_battery_pane_cp03

0x46dc,	// (0x0001ae3b) cam4_battery_pane_g1

0x0fa9,	// (0x00017708) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x000261fa) cam4_battery_pane_g

0x30f6,	// (0x00019855) popup_blid_sat_info2_window_t11

0xa1f4,	// (0x00020953) aid_size_touch_mv_arrow_left_ParamLimits

0xa21f,	// (0x0002097e) aid_size_touch_mv_arrow_right_ParamLimits

0x18a7,	// (0x00018006) navi_pane_g1_ParamLimits

0xa25e,	// (0x000209bd) navi_pane_g2_ParamLimits

0xa28c,	// (0x000209eb) navi_pane_g3_ParamLimits

0xf379,	// (0x00025ad8) navi_pane_g_ParamLimits

0xa2e6,	// (0x00020a45) navi_pane_mv_t1_ParamLimits

0xbaf5,	// (0x00022254) grid_imed_effect_pane_ParamLimits

0x8e40,	// (0x0001f59f) aid_placing_vt_slider_lsc

0x0ff8,	// (0x00017757) aid_placing_vt_slider_prt

0x0581,	// (0x00016ce0) bg_tb_trans_pane_cp01_ParamLimits

0x335e,	// (0x00019abd) popup_image_details_window_g1_ParamLimits

0x3371,	// (0x00019ad0) popup_image_details_window_g2_ParamLimits

0x3386,	// (0x00019ae5) popup_image_details_window_g3_ParamLimits

0x3386,	// (0x00019ae5) popup_image_details_window_g3

0xf6a5,	// (0x00025e04) popup_image_details_window_g_ParamLimits

0x339a,	// (0x00019af9) popup_image_details_window_t1_ParamLimits

0x33ac,	// (0x00019b0b) popup_image_details_window_t2_ParamLimits

0x33c5,	// (0x00019b24) popup_image_details_window_t3_ParamLimits

0x33d9,	// (0x00019b38) popup_image_details_window_t4_ParamLimits

0x33f4,	// (0x00019b53) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x00025e0b) popup_image_details_window_t_ParamLimits

0xc9cb,	// (0x0002312a) cl_header_name_pane_ParamLimits

0xc9cb,	// (0x0002312a) cl_header_name_pane

0xcc81,	// (0x000233e0) cl_header_name_pane_t1_ParamLimits

0xcc81,	// (0x000233e0) cl_header_name_pane_t1

0xcc98,	// (0x000233f7) cl_header_name_pane_t2_ParamLimits

0xcc98,	// (0x000233f7) cl_header_name_pane_t2

0xccc2,	// (0x00023421) cl_header_name_pane_t3_ParamLimits

0xccc2,	// (0x00023421) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x000261ff) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x000261ff) cl_header_name_pane_t

0xa2b7,	// (0x00020a16) navi_pane_mv_g2_ParamLimits

0x3ea8,	// (0x0001a607) field_vitu2_entry_pane_g1_ParamLimits

0x3eb4,	// (0x0001a613) field_vitu2_entry_pane_g2_ParamLimits

0x1a10,	// (0x0001816f) field_vitu2_entry_pane_g3_ParamLimits

0x1a10,	// (0x0001816f) field_vitu2_entry_pane_g3

0xf8a7,	// (0x00026006) field_vitu2_entry_pane_g_ParamLimits

0x7fc0,	// (0x0001e71f) cell_vitu2_itu_pane_g1_ParamLimits

0x7fd8,	// (0x0001e737) cell_vitu2_itu_pane_g2_ParamLimits

0x7fd8,	// (0x0001e737) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x00026012) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x00026012) cell_vitu2_itu_pane_g

0x7377,	// (0x0001dad6) bg_vkb2_func_pane_cp05_ParamLimits

0x7377,	// (0x0001dad6) bg_vkb2_func_pane_cp05

0x7377,	// (0x0001dad6) bg_vkb2_func_pane_cp03

0x7377,	// (0x0001dad6) bg_vkb2_func_pane_cp04

0x7377,	// (0x0001dad6) bg_vkb2_func_pane_cp10_ParamLimits

0x7377,	// (0x0001dad6) bg_vkb2_func_pane_cp10

0xc96d,	// (0x000230cc) bg_vkb2_func_pane_cp08

0xc953,	// (0x000230b2) bg_vkb2_func_pane_cp06

0xc961,	// (0x000230c0) bg_vkb2_func_pane_cp07

0x45d7,	// (0x0001ad36) bg_vkb2_func_pane_cp11_ParamLimits

0x45d7,	// (0x0001ad36) bg_vkb2_func_pane_cp11

0x45ec,	// (0x0001ad4b) bg_vkb2_func_pane_cp12_ParamLimits

0x45ec,	// (0x0001ad4b) bg_vkb2_func_pane_cp12

0x050c,	// (0x00016c6b) bg_vkb2_func_pane_cp09

0x3f1e,	// (0x0001a67d) bg_vkb2_func_pane_g1

0x11be,	// (0x0001791d) bg_vkb2_func_pane_g2

0x3f26,	// (0x0001a685) bg_vkb2_func_pane_g3

0x3f2e,	// (0x0001a68d) bg_vkb2_func_pane_g4

0x4192,	// (0x0001a8f1) bg_vkb2_func_pane_g5

0x3f46,	// (0x0001a6a5) bg_vkb2_func_pane_g6

0x3f4e,	// (0x0001a6ad) bg_vkb2_func_pane_g7

0x3f3e,	// (0x0001a69d) bg_vkb2_func_pane_g8

0x119e,	// (0x000178fd) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x00026206) bg_vkb2_func_pane_g

0xcbce,	// (0x0002332d) blid2_tripm_pane_g6_ParamLimits

0xcbce,	// (0x0002332d) blid2_tripm_pane_g6

0x3c4c,	// (0x0001a3ab) mp4_progress_pane_g1

0xcc26,	// (0x00023385) blid2_tripm_values_pane_ParamLimits

0xcc26,	// (0x00023385) blid2_tripm_values_pane

0xcce7,	// (0x00023446) blid2_tripm_values_pane_t1

0xccf5,	// (0x00023454) blid2_tripm_values_pane_t2

0xcd03,	// (0x00023462) blid2_tripm_values_pane_t3

0xcd11,	// (0x00023470) blid2_tripm_values_pane_t4

0xcd1f,	// (0x0002347e) blid2_tripm_values_pane_t5

0xcd2d,	// (0x0002348c) blid2_tripm_values_pane_t6

0xcd3b,	// (0x0002349a) blid2_tripm_values_pane_t7

0xcd49,	// (0x000234a8) blid2_tripm_values_pane_t8

0xcd57,	// (0x000234b6) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x00026219) blid2_tripm_values_pane_t

0x8e7e,	// (0x0001f5dd) call_video_pane_t1_ParamLimits

0x8e9b,	// (0x0001f5fa) call_video_pane_t2_ParamLimits

0xf222,	// (0x00025981) call_video_pane_t_ParamLimits

0xa5db,	// (0x00020d3a) msg_header_pane_g1_ParamLimits

0x1b05,	// (0x00018264) msg_header_pane_g2_ParamLimits

0x1b05,	// (0x00018264) msg_header_pane_g2

0x0001,

0xf41c,	// (0x00025b7b) msg_header_pane_g_ParamLimits

0xf41c,	// (0x00025b7b) msg_header_pane_g

0x0d41,	// (0x000174a0) main_clock2_pane_ParamLimits

0xb913,	// (0x00022072) grid_clock2_toolbar_pane_ParamLimits

0xb913,	// (0x00022072) grid_clock2_toolbar_pane

0xb913,	// (0x00022072) listscroll_clock2_pane_ParamLimits

0xb913,	// (0x00022072) listscroll_clock2_pane

0xb9c2,	// (0x00022121) main_clock2_pane_t3_ParamLimits

0xb9c2,	// (0x00022121) main_clock2_pane_t3

0xb9d4,	// (0x00022133) main_clock2_pane_t4_ParamLimits

0xb9d4,	// (0x00022133) main_clock2_pane_t4

0x46e6,	// (0x0001ae45) cell_clock2_toolbar_pane

0x46ee,	// (0x0001ae4d) cell_clock2_toolbar_pane_cp01

0x46ee,	// (0x0001ae4d) cell_clock2_toolbar_pane_cp02

0x46f6,	// (0x0001ae55) cell_clock2_toolbar_pane_cp03

0x46fe,	// (0x0001ae5d) list_clock2_pane

0x180d,	// (0x00017f6c) scroll_pane_cp10

0x4706,	// (0x0001ae65) list_single_clock2_pane_ParamLimits

0x4706,	// (0x0001ae65) list_single_clock2_pane

0x0f54,	// (0x000176b3) list_highlight_pane_cp08

0x4713,	// (0x0001ae72) list_single_clock2_pane_t1

0x4721,	// (0x0001ae80) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x0002622c) list_single_clock2_pane_t

0x050c,	// (0x00016c6b) bg_button_pane_cp10

0x472f,	// (0x0001ae8e) cell_clock2_toolbar_pane_g1

0x72f4,	// (0x0001da53) aid_main_viewer_pane_g1_ParamLimits

0x72f4,	// (0x0001da53) aid_main_viewer_pane_g1

0x7300,	// (0x0001da5f) aid_main_viewer_pane_g2_ParamLimits

0x7300,	// (0x0001da5f) aid_main_viewer_pane_g2

0xa647,	// (0x00020da6) aid_main_viewer_pane_g3_ParamLimits

0xa647,	// (0x00020da6) aid_main_viewer_pane_g3

0xa658,	// (0x00020db7) aid_main_viewer_pane_g4_ParamLimits

0xa658,	// (0x00020db7) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x00025b8c) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x00025b8c) aid_main_viewer_pane_g

0x7358,	// (0x0001dab7) main_calc_pane_ParamLimits

0x7385,	// (0x0001dae4) main_dialer2_pane_ParamLimits

0x6ead,	// (0x0001d60c) main_cam6_pane

0x6ead,	// (0x0001d60c) main_vid6_pane

0xb91f,	// (0x0002207e) listscroll_gen_pane_cp06_ParamLimits

0xb91f,	// (0x0002207e) listscroll_gen_pane_cp06

0xb9e6,	// (0x00022145) main_clock2_pane_t5_ParamLimits

0xb9e6,	// (0x00022145) main_clock2_pane_t5

0xba33,	// (0x00022192) aid_call2_pane_cp10_ParamLimits

0xba45,	// (0x000221a4) aid_call_pane_cp10_ParamLimits

0x187c,	// (0x00017fdb) popup_clock_analogue_window_cp10_g1_ParamLimits

0x187c,	// (0x00017fdb) popup_clock_analogue_window_cp10_g2_ParamLimits

0xba57,	// (0x000221b6) popup_clock_analogue_window_cp10_g3_ParamLimits

0xba57,	// (0x000221b6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x187c,	// (0x00017fdb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x00025ec0) popup_clock_analogue_window_cp10_g_ParamLimits

0xba6d,	// (0x000221cc) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbd52,	// (0x000224b1) cell_dialer2_keypad_pane_g2_ParamLimits

0xbd52,	// (0x000224b1) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x00025fa5) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x00025fa5) cell_dialer2_keypad_pane_g

0xbd6e,	// (0x000224cd) cell_dialer2_keypad_pane_t1

0xc191,	// (0x000228f0) main_cset_text2_pane_ParamLimits

0xc191,	// (0x000228f0) main_cset_text2_pane

0x43e5,	// (0x0001ab44) area_vitu2_query_pane_g1_ParamLimits

0xc8ee,	// (0x0002304d) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x00026150) area_vitu2_query_pane_g_ParamLimits

0x4469,	// (0x0001abc8) area_vitu2_query_pane_t7_ParamLimits

0x4469,	// (0x0001abc8) area_vitu2_query_pane_t7

0xc953,	// (0x000230b2) bg_button_pane_cp018_ParamLimits

0xc961,	// (0x000230c0) bg_button_pane_cp021_ParamLimits

0xc96d,	// (0x000230cc) bg_button_pane_cp022_ParamLimits

0xc96d,	// (0x000230cc) bg_vkb2_func_pane_cp08_ParamLimits

0xc953,	// (0x000230b2) bg_vkb2_func_pane_cp06_ParamLimits

0xc961,	// (0x000230c0) bg_vkb2_func_pane_cp07_ParamLimits

0xc97e,	// (0x000230dd) input_focus_pane_cp09_ParamLimits

0x832c,	// (0x0001ea8b) cam6_autofocus_pane_ParamLimits

0x832c,	// (0x0001ea8b) cam6_autofocus_pane

0x834e,	// (0x0001eaad) cam6_image_uncrop_pane_ParamLimits

0x834e,	// (0x0001eaad) cam6_image_uncrop_pane

0x837b,	// (0x0001eada) cam6_indi_pane_ParamLimits

0x837b,	// (0x0001eada) cam6_indi_pane

0x8395,	// (0x0001eaf4) cam6_mode_pane_ParamLimits

0x8395,	// (0x0001eaf4) cam6_mode_pane

0x83a9,	// (0x0001eb08) cam6_timer_pane_ParamLimits

0x83a9,	// (0x0001eb08) cam6_timer_pane

0x83b5,	// (0x0001eb14) cam6_zoom_pane_ParamLimits

0x83b5,	// (0x0001eb14) cam6_zoom_pane

0xcd65,	// (0x000234c4) cam6_mode_pane_g1_ParamLimits

0xcd65,	// (0x000234c4) cam6_mode_pane_g1

0xcd71,	// (0x000234d0) cam6_mode_pane_g2_ParamLimits

0xcd71,	// (0x000234d0) cam6_mode_pane_g2

0xcd7d,	// (0x000234dc) cam6_mode_pane_g3_ParamLimits

0xcd7d,	// (0x000234dc) cam6_mode_pane_g3

0xcd89,	// (0x000234e8) cam6_mode_pane_g4_ParamLimits

0xcd89,	// (0x000234e8) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x00026231) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x00026231) cam6_mode_pane_g

0x2eac,	// (0x0001960b) bg_tb_trans_pane_cp08_ParamLimits

0x2eac,	// (0x0001960b) bg_tb_trans_pane_cp08

0x4745,	// (0x0001aea4) cam6_battery_pane_ParamLimits

0x4745,	// (0x0001aea4) cam6_battery_pane

0x475b,	// (0x0001aeba) cam6_indi_pane_g1_ParamLimits

0x475b,	// (0x0001aeba) cam6_indi_pane_g1

0x476d,	// (0x0001aecc) cam6_indi_pane_g2_ParamLimits

0x476d,	// (0x0001aecc) cam6_indi_pane_g2

0x477f,	// (0x0001aede) cam6_indi_pane_g3_ParamLimits

0x477f,	// (0x0001aede) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x0002623a) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x0002623a) cam6_indi_pane_g

0x4791,	// (0x0001aef0) cam6_indi_pane_t1_ParamLimits

0x4791,	// (0x0001aef0) cam6_indi_pane_t1

0xbeab,	// (0x0002260a) cam6_autofocus_pane_g1

0xbea3,	// (0x00022602) cam6_autofocus_pane_g2

0xbebb,	// (0x0002261a) cam6_autofocus_pane_g3

0xbeb3,	// (0x00022612) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x00026241) cam6_autofocus_pane_g

0x47b7,	// (0x0001af16) cam6_timer_pane_g1

0x47bf,	// (0x0001af1e) cam6_timer_pane_t1

0x47cd,	// (0x0001af2c) cam6_zoom_cont_pane

0x47d5,	// (0x0001af34) cam6_zoom_pane_g1

0x47dd,	// (0x0001af3c) cam6_zoom_pane_g2

0xcd95,	// (0x000234f4) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x0002624a) cam6_zoom_pane_g

0x0fa9,	// (0x00017708) cam6_battery_pane_g1

0x0fa9,	// (0x00017708) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x00025b3c) cam6_battery_pane_g

0x47e5,	// (0x0001af44) cam6_zoom_cont_pane_g1

0x47ee,	// (0x0001af4d) cam6_zoom_cont_pane_g2

0x47f7,	// (0x0001af56) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x00026251) cam6_zoom_cont_pane_g

0xcdb2,	// (0x00023511) cam6_mode_pane_cp_ParamLimits

0xcdb2,	// (0x00023511) cam6_mode_pane_cp

0xcdc6,	// (0x00023525) cam6_zoom_pane_cp_ParamLimits

0xcdc6,	// (0x00023525) cam6_zoom_pane_cp

0xcde2,	// (0x00023541) vid6_image_uncrop_cif_pane_ParamLimits

0xcde2,	// (0x00023541) vid6_image_uncrop_cif_pane

0xce0e,	// (0x0002356d) vid6_image_uncrop_nhd_pane_ParamLimits

0xce0e,	// (0x0002356d) vid6_image_uncrop_nhd_pane

0xce2d,	// (0x0002358c) vid6_image_uncrop_vga_pane_ParamLimits

0xce2d,	// (0x0002358c) vid6_image_uncrop_vga_pane

0xce4c,	// (0x000235ab) vid6_image_uncrop_wvga_pane_ParamLimits

0xce4c,	// (0x000235ab) vid6_image_uncrop_wvga_pane

0xce6b,	// (0x000235ca) vid6_indi_pane_ParamLimits

0xce6b,	// (0x000235ca) vid6_indi_pane

0x2eac,	// (0x0001960b) bg_tb_trans_pane_cp09_ParamLimits

0x2eac,	// (0x0001960b) bg_tb_trans_pane_cp09

0x480f,	// (0x0001af6e) cam6_battery_pane_cp_ParamLimits

0x480f,	// (0x0001af6e) cam6_battery_pane_cp

0x481b,	// (0x0001af7a) vid6_indi_pane_g1_ParamLimits

0x481b,	// (0x0001af7a) vid6_indi_pane_g1

0x482d,	// (0x0001af8c) vid6_indi_pane_g2_ParamLimits

0x482d,	// (0x0001af8c) vid6_indi_pane_g2

0x483f,	// (0x0001af9e) vid6_indi_pane_g3_ParamLimits

0x483f,	// (0x0001af9e) vid6_indi_pane_g3

0x4856,	// (0x0001afb5) vid6_indi_pane_g4_ParamLimits

0x4856,	// (0x0001afb5) vid6_indi_pane_g4

0x486d,	// (0x0001afcc) vid6_indi_pane_g5_ParamLimits

0x486d,	// (0x0001afcc) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x00026258) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x00026258) vid6_indi_pane_g

0x4887,	// (0x0001afe6) vid6_indi_pane_t1_ParamLimits

0x4887,	// (0x0001afe6) vid6_indi_pane_t1

0x489d,	// (0x0001affc) vid6_indi_pane_t2_ParamLimits

0x489d,	// (0x0001affc) vid6_indi_pane_t2

0x48c5,	// (0x0001b024) vid6_indi_pane_t3_ParamLimits

0x48c5,	// (0x0001b024) vid6_indi_pane_t3

0x48ed,	// (0x0001b04c) vid6_indi_pane_t4_ParamLimits

0x48ed,	// (0x0001b04c) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x00026263) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x00026263) vid6_indi_pane_t

0x4911,	// (0x0001b070) wait_bar_pane_cp08

0xce90,	// (0x000235ef) main_cset_text2_pane_t1_ParamLimits

0xce90,	// (0x000235ef) main_cset_text2_pane_t1

0xcd9d,	// (0x000234fc) listscroll_gen_pane_cp06_t1_ParamLimits

0xcd9d,	// (0x000234fc) listscroll_gen_pane_cp06_t1

0x6ead,	// (0x0001d60c) main_cam6_set_pane

0x5184,	// (0x0001b8e3) bg_tb_trans_pane_cp06_ParamLimits

0x7ceb,	// (0x0001e44a) cam4_indicators_pane_g1_ParamLimits

0x7cfc,	// (0x0001e45b) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x00025fe2) cam4_indicators_pane_g_ParamLimits

0x7d14,	// (0x0001e473) cam4_indicators_pane_t1_ParamLimits

0x7377,	// (0x0001dad6) bg_tb_trans_pane_cp07_ParamLimits

0x7dcb,	// (0x0001e52a) vid4_indicators_pane_g1_ParamLimits

0x7de1,	// (0x0001e540) vid4_indicators_pane_g2_ParamLimits

0x7df5,	// (0x0001e554) vid4_indicators_pane_g3_ParamLimits

0x7e08,	// (0x0001e567) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x00025ff4) vid4_indicators_pane_g_ParamLimits

0x7e26,	// (0x0001e585) vid4_indicators_pane_t1_ParamLimits

0x8285,	// (0x0001e9e4) vid4_progress_pane_g1_ParamLimits

0x8295,	// (0x0001e9f4) vid4_progress_pane_g2_ParamLimits

0x82a5,	// (0x0001ea04) vid4_progress_pane_g3_ParamLimits

0x82b7,	// (0x0001ea16) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x0002619b) vid4_progress_pane_g_ParamLimits

0x82d5,	// (0x0001ea34) vid4_progress_pane_t1_ParamLimits

0x82ef,	// (0x0001ea4e) vid4_progress_pane_t2_ParamLimits

0x8304,	// (0x0001ea63) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x000261a6) vid4_progress_pane_t_ParamLimits

0x8319,	// (0x0001ea78) wait_bar_pane_cp07_ParamLimits

0xceb7,	// (0x00023616) main_cam6_set_pane_g2_ParamLimits

0xceb7,	// (0x00023616) main_cam6_set_pane_g2

0xcec3,	// (0x00023622) main_cset6_listscroll_pane_ParamLimits

0xcec3,	// (0x00023622) main_cset6_listscroll_pane

0xcef0,	// (0x0002364f) main_cset6_slider_pane_ParamLimits

0xcef0,	// (0x0002364f) main_cset6_slider_pane

0xcefc,	// (0x0002365b) main_cset6_text2_pane_ParamLimits

0xcefc,	// (0x0002365b) main_cset6_text2_pane

0x4920,	// (0x0001b07f) main_cset6_text_pane

0x4928,	// (0x0001b087) main_cset_list_pane_copy1_ParamLimits

0x4928,	// (0x0001b087) main_cset_list_pane_copy1

0x4938,	// (0x0001b097) scroll_pane_cp028_copy1

0xcf0f,	// (0x0002366e) cset_list_set_pane_copy1

0xcf1f,	// (0x0002367e) aid_position_infowindow_above_copy1

0xcf27,	// (0x00023686) aid_position_infowindow_below_copy1

0xcf2f,	// (0x0002368e) cset_list_set_pane_g1_copy1

0xcf37,	// (0x00023696) cset_list_set_pane_g3_copy1_ParamLimits

0xcf37,	// (0x00023696) cset_list_set_pane_g3_copy1

0xcf46,	// (0x000236a5) cset_list_set_pane_t1_copy1_ParamLimits

0xcf46,	// (0x000236a5) cset_list_set_pane_t1_copy1

0x0581,	// (0x00016ce0) list_highlight_pane_cp021_copy1_ParamLimits

0x0581,	// (0x00016ce0) list_highlight_pane_cp021_copy1

0x4941,	// (0x0001b0a0) cset6_slider_pane_ParamLimits

0x4941,	// (0x0001b0a0) cset6_slider_pane

0x496d,	// (0x0001b0cc) main_cset6_slider_pane_g1_ParamLimits

0x496d,	// (0x0001b0cc) main_cset6_slider_pane_g1

0xcf5b,	// (0x000236ba) main_cset6_slider_pane_g2_ParamLimits

0xcf5b,	// (0x000236ba) main_cset6_slider_pane_g2

0x4995,	// (0x0001b0f4) main_cset6_slider_pane_g3_ParamLimits

0x4995,	// (0x0001b0f4) main_cset6_slider_pane_g3

0xcf83,	// (0x000236e2) main_cset6_slider_pane_g4_ParamLimits

0xcf83,	// (0x000236e2) main_cset6_slider_pane_g4

0xcf8f,	// (0x000236ee) main_cset6_slider_pane_g5_ParamLimits

0xcf8f,	// (0x000236ee) main_cset6_slider_pane_g5

0x4051,	// (0x0001a7b0) main_cset6_slider_pane_g7_ParamLimits

0x4051,	// (0x0001a7b0) main_cset6_slider_pane_g7

0x405d,	// (0x0001a7bc) main_cset6_slider_pane_g8_ParamLimits

0x405d,	// (0x0001a7bc) main_cset6_slider_pane_g8

0xcf9b,	// (0x000236fa) main_cset6_slider_pane_g9_ParamLimits

0xcf9b,	// (0x000236fa) main_cset6_slider_pane_g9

0xcfa7,	// (0x00023706) main_cset6_slider_pane_g10_ParamLimits

0xcfa7,	// (0x00023706) main_cset6_slider_pane_g10

0xcfb3,	// (0x00023712) main_cset6_slider_pane_g11_ParamLimits

0xcfb3,	// (0x00023712) main_cset6_slider_pane_g11

0xcfbf,	// (0x0002371e) main_cset6_slider_pane_g12_ParamLimits

0xcfbf,	// (0x0002371e) main_cset6_slider_pane_g12

0xcfcb,	// (0x0002372a) main_cset6_slider_pane_g13_ParamLimits

0xcfcb,	// (0x0002372a) main_cset6_slider_pane_g13

0xcfd7,	// (0x00023736) main_cset6_slider_pane_g14_ParamLimits

0xcfd7,	// (0x00023736) main_cset6_slider_pane_g14

0xcfe3,	// (0x00023742) main_cset6_slider_pane_g15_ParamLimits

0xcfe3,	// (0x00023742) main_cset6_slider_pane_g15

0xcffb,	// (0x0002375a) main_cset6_slider_pane_g16_ParamLimits

0xcffb,	// (0x0002375a) main_cset6_slider_pane_g16

0xd007,	// (0x00023766) main_cset6_slider_pane_g17_ParamLimits

0xd007,	// (0x00023766) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x0002626c) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x0002626c) main_cset6_slider_pane_g

0x49a1,	// (0x0001b100) main_cset6_slider_pane_t1_ParamLimits

0x49a1,	// (0x0001b100) main_cset6_slider_pane_t1

0xd02b,	// (0x0002378a) main_cset6_slider_pane_t2_ParamLimits

0xd02b,	// (0x0002378a) main_cset6_slider_pane_t2

0xd056,	// (0x000237b5) main_cset6_slider_pane_t3_ParamLimits

0xd056,	// (0x000237b5) main_cset6_slider_pane_t3

0xd081,	// (0x000237e0) main_cset6_slider_pane_t4_ParamLimits

0xd081,	// (0x000237e0) main_cset6_slider_pane_t4

0xd0ac,	// (0x0002380b) main_cset6_slider_pane_t5_ParamLimits

0xd0ac,	// (0x0002380b) main_cset6_slider_pane_t5

0x49e2,	// (0x0001b141) main_cset6_slider_pane_t7_ParamLimits

0x49e2,	// (0x0001b141) main_cset6_slider_pane_t7

0xd0d7,	// (0x00023836) main_cset6_slider_pane_t8_ParamLimits

0xd0d7,	// (0x00023836) main_cset6_slider_pane_t8

0xd0fb,	// (0x0002385a) main_cset6_slider_pane_t9_ParamLimits

0xd0fb,	// (0x0002385a) main_cset6_slider_pane_t9

0xd11f,	// (0x0002387e) main_cset6_slider_pane_t10_ParamLimits

0xd11f,	// (0x0002387e) main_cset6_slider_pane_t10

0xd143,	// (0x000238a2) main_cset6_slider_pane_t11_ParamLimits

0xd143,	// (0x000238a2) main_cset6_slider_pane_t11

0x4a18,	// (0x0001b177) main_cset6_slider_pane_t14_ParamLimits

0x4a18,	// (0x0001b177) main_cset6_slider_pane_t14

0x4a51,	// (0x0001b1b0) main_cset6_slider_pane_t15_ParamLimits

0x4a51,	// (0x0001b1b0) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x00026291) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x00026291) main_cset6_slider_pane_t

0x4a8a,	// (0x0001b1e9) cset_slider_pane_g1_copy1

0x4a93,	// (0x0001b1f2) cset_slider_pane_g2_copy1

0x4a9c,	// (0x0001b1fb) cset_slider_pane_g3_copy1

0x050c,	// (0x00016c6b) bg_popup_sub_pane_cp011_copy1

0x4aae,	// (0x0001b20d) main_cset_text_pane_g1_copy1

0x4201,	// (0x0001a960) main_cset_text_pane_t1_copy1

0x420f,	// (0x0001a96e) main_cset_text_pane_t2_copy1

0x421d,	// (0x0001a97c) main_cset_text_pane_t3_copy1

0x422b,	// (0x0001a98a) main_cset_text_pane_t4_copy1

0x4239,	// (0x0001a998) main_cset_text_pane_t5_copy1

0x4ab6,	// (0x0001b215) main_cset_text_pane_t6_copy1

0x4ac4,	// (0x0001b223) main_cset_text_pane_t7_copy1

0xd184,	// (0x000238e3) main_cset_text2_pane_t1_copy1

0x7377,	// (0x0001dad6) main_ncimui_pane

0x73ea,	// (0x0001db49) popup_query_ncimui_window_ParamLimits

0x73ea,	// (0x0001db49) popup_query_ncimui_window

0x3495,	// (0x00019bf4) field_cale_ev2_pane_g4_ParamLimits

0x3495,	// (0x00019bf4) field_cale_ev2_pane_g4

0xbcf2,	// (0x00022451) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbcf2,	// (0x00022451) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x00025f7c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x00025f7c) cell_video_dialer_keypad_pane_g

0xbd0a,	// (0x00022469) cell_video_dialer_keypad_pane_t1

0x050c,	// (0x00016c6b) bg_popup_window_pane_cp012

0x2c88,	// (0x000193e7) heading_pane_cp06

0x4af0,	// (0x0001b24f) ncim_query_content_pane

0x050c,	// (0x00016c6b) bg_popup_heading_pane_cp01

0x4af8,	// (0x0001b257) ncim_heading_pane_t1

0x4b06,	// (0x0001b265) ncim_indicator_popup_pane

0x4b18,	// (0x0001b277) ncim_query_button_pane

0x4b2e,	// (0x0001b28d) ncim_query_content_pane_t1

0x4b40,	// (0x0001b29f) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x000262d5) ncim_query_content_pane_t

0x4b7a,	// (0x0001b2d9) ncim_query_list_pane

0x4b8c,	// (0x0001b2eb) ncim_query_popup_pane

0x4b06,	// (0x0001b265) ncim_indicator_popup_pane_ParamLimits

0xd2e0,	// (0x00023a3f) ncim_query_content_pane_g1_ParamLimits

0xd2e0,	// (0x00023a3f) ncim_query_content_pane_g1

0x4b2e,	// (0x0001b28d) ncim_query_content_pane_t1_ParamLimits

0x4b40,	// (0x0001b29f) ncim_query_content_pane_t2_ParamLimits

0xd2ec,	// (0x00023a4b) ncim_query_content_pane_t3_ParamLimits

0xd2ec,	// (0x00023a4b) ncim_query_content_pane_t3

0xd309,	// (0x00023a68) ncim_query_content_pane_t4_ParamLimits

0xd309,	// (0x00023a68) ncim_query_content_pane_t4

0xd326,	// (0x00023a85) ncim_query_content_pane_t5_ParamLimits

0xd326,	// (0x00023a85) ncim_query_content_pane_t5

0x4b52,	// (0x0001b2b1) ncim_query_content_pane_t6_ParamLimits

0x4b52,	// (0x0001b2b1) ncim_query_content_pane_t6

0xfb76,	// (0x000262d5) ncim_query_content_pane_t_ParamLimits

0x4b7a,	// (0x0001b2d9) ncim_query_list_pane_ParamLimits

0x4b8c,	// (0x0001b2eb) ncim_query_popup_pane_ParamLimits

0x4ba0,	// (0x0001b2ff) wait_bar_pane_cp04

0x050c,	// (0x00016c6b) input_focus_pane_cp011

0x4ba8,	// (0x0001b307) ncim_query_popup_pane_t1

0x4bb6,	// (0x0001b315) ncim_list_query_list_pane_ParamLimits

0x4bb6,	// (0x0001b315) ncim_list_query_list_pane

0x050c,	// (0x00016c6b) bg_button_pane_cp027

0x4bc9,	// (0x0001b328) ncim_query_button_pane_g1

0x050c,	// (0x00016c6b) list_highlight_pane_cp012

0x4bd3,	// (0x0001b332) ncim_list_query_list_pane_g1

0x4bdb,	// (0x0001b33a) ncim_list_query_list_pane_t1

0x7d08,	// (0x0001e467) cam4_indicators_pane_g3_ParamLimits

0x7d08,	// (0x0001e467) cam4_indicators_pane_g3

0x7e14,	// (0x0001e573) vid4_indicators_pane_g5_ParamLimits

0x7e14,	// (0x0001e573) vid4_indicators_pane_g5

0x82c6,	// (0x0001ea25) vid4_progress_pane_g5_ParamLimits

0x82c6,	// (0x0001ea25) vid4_progress_pane_g5

0xd1b6,	// (0x00023915) main_ncimui_pane_g1

0xd222,	// (0x00023981) ncimui_group_query_pane_ParamLimits

0xd222,	// (0x00023981) ncimui_group_query_pane

0xd27c,	// (0x000239db) ncimui_list_pane_ParamLimits

0xd27c,	// (0x000239db) ncimui_list_pane

0xd2a3,	// (0x00023a02) ncimui_text_pane_ParamLimits

0xd2a3,	// (0x00023a02) ncimui_text_pane

0xd343,	// (0x00023aa2) ncimui_text_pane_t1_ParamLimits

0xd343,	// (0x00023aa2) ncimui_text_pane_t1

0x4be9,	// (0x0001b348) ncimui_list_single_graphic_pane_ParamLimits

0x4be9,	// (0x0001b348) ncimui_list_single_graphic_pane

0xd362,	// (0x00023ac1) ncimui_query_pane_ParamLimits

0xd362,	// (0x00023ac1) ncimui_query_pane

0x050c,	// (0x00016c6b) list_highlight_pane_cp013

0x4bf9,	// (0x0001b358) ncim_list_query_list_pane_t1_copy1

0x4bd3,	// (0x0001b332) ncim_list_single_graphic_pane_g1

0xd375,	// (0x00023ad4) ncim_query_button_pane_cp01

0xd381,	// (0x00023ae0) ncim_query_entry_pane_ParamLimits

0xd381,	// (0x00023ae0) ncim_query_entry_pane

0xd394,	// (0x00023af3) ncimui_query_pane_g1

0xd3a0,	// (0x00023aff) ncimui_query_pane_t1_ParamLimits

0xd3a0,	// (0x00023aff) ncimui_query_pane_t1

0x0581,	// (0x00016ce0) input_focus_pane_cp012

0x4c07,	// (0x0001b366) ncim_query_entry_pane_t1

0x0d41,	// (0x000174a0) main_im_pane_ParamLimits

0x7377,	// (0x0001dad6) main_mobtv_pane_ParamLimits

0x7377,	// (0x0001dad6) main_mobtv_pane

0xd013,	// (0x00023772) main_cset6_slider_pane_g18_ParamLimits

0xd013,	// (0x00023772) main_cset6_slider_pane_g18

0xd01f,	// (0x0002377e) main_cset6_slider_pane_g19_ParamLimits

0xd01f,	// (0x0002377e) main_cset6_slider_pane_g19

0x1a10,	// (0x0001816f) bg_main_mobtv_pane_ParamLimits

0x1a10,	// (0x0001816f) bg_main_mobtv_pane

0xd3b9,	// (0x00023b18) main_mobtv_info_pane

0xd3c4,	// (0x00023b23) main_mobtv_loading_pane_ParamLimits

0xd3c4,	// (0x00023b23) main_mobtv_loading_pane

0x4c19,	// (0x0001b378) main_mobtv_pg_channel_list_pane

0x4c23,	// (0x0001b382) main_mobtv_pg_hdr_pane

0xd3d1,	// (0x00023b30) main_mobtv_programe_curr_pane_ParamLimits

0xd3d1,	// (0x00023b30) main_mobtv_programe_curr_pane

0xd3de,	// (0x00023b3d) main_mobtv_programe_next_pane_ParamLimits

0xd3de,	// (0x00023b3d) main_mobtv_programe_next_pane

0x4c2c,	// (0x0001b38b) popup_mobtv_noti_window

0x0fa9,	// (0x00017708) main_tv_pg_hdr_pane_g1

0x4c36,	// (0x0001b395) main_tv_pg_hdr_pane_g2

0x4c3e,	// (0x0001b39d) main_tv_pg_hdr_pane_g3

0x4c46,	// (0x0001b3a5) main_tv_pg_hdr_pane_g4

0x4c4e,	// (0x0001b3ad) main_tv_pg_hdr_pane_g5

0x4c58,	// (0x0001b3b7) main_tv_pg_hdr_pane_g6

0x4c62,	// (0x0001b3c1) main_tv_pg_hdr_pane_g7

0x4c6c,	// (0x0001b3cb) main_tv_pg_hdr_pane_g8

0x4c76,	// (0x0001b3d5) main_tv_pg_hdr_pane_g9

0x4c80,	// (0x0001b3df) main_tv_pg_hdr_pane_g10

0x4c8a,	// (0x0001b3e9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x000262e2) main_tv_pg_hdr_pane_g

0x4c94,	// (0x0001b3f3) main_tv_pg_hdr_pane_t1

0x4ca2,	// (0x0001b401) main_tv_pg_hdr_pane_t2

0x4cb0,	// (0x0001b40f) main_tv_pg_hdr_pane_t3

0x4cc0,	// (0x0001b41f) main_tv_pg_hdr_pane_t4

0x4cd0,	// (0x0001b42f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x000262f9) main_tv_pg_hdr_pane_t

0x4ce0,	// (0x0001b43f) single_mobtv_pg_channel_pane_ParamLimits

0x4ce0,	// (0x0001b43f) single_mobtv_pg_channel_pane

0x4cf2,	// (0x0001b451) single_mobtv_pg_channel_table_pane

0x4cfb,	// (0x0001b45a) single_mobtv_pg_channel_thumb_pane

0x4d04,	// (0x0001b463) single_tv_pg_channel_pane_g1

0x4d0d,	// (0x0001b46c) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x00026304) single_tv_pg_channel_pane_g

0x0cad,	// (0x0001740c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0cad,	// (0x0001740c) bg_single_mobtv_pg_channel_thumb_pane

0x4d16,	// (0x0001b475) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4d16,	// (0x0001b475) single_mobtv_pg_channel_thumb_pane_g1

0x4d24,	// (0x0001b483) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4d24,	// (0x0001b483) single_mobtv_pg_channel_thumb_pane_g2

0x4d30,	// (0x0001b48f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4d30,	// (0x0001b48f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x00026309) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x00026309) single_mobtv_pg_channel_thumb_pane_g

0x4d3c,	// (0x0001b49b) single_mobtv_pg_channel_thumb_pane_t1

0x4d4a,	// (0x0001b4a9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x00026310) single_mobtv_pg_channel_thumb_pane_t

0x0fa9,	// (0x00017708) bg_single_mobtv_pg_channel_table_pane_g1

0x0fa9,	// (0x00017708) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x00025b3c) bg_single_mobtv_pg_channel_table_pane_g

0x4d58,	// (0x0001b4b7) single_mobtv_pg_channel_table_pane_t1

0x4d66,	// (0x0001b4c5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x00026315) single_mobtv_pg_channel_table_pane_t

0xd3f3,	// (0x00023b52) main_mobtv_info_pane_g1_ParamLimits

0xd3f3,	// (0x00023b52) main_mobtv_info_pane_g1

0xd40f,	// (0x00023b6e) main_mobtv_info_pane_t1_ParamLimits

0xd40f,	// (0x00023b6e) main_mobtv_info_pane_t1

0xd487,	// (0x00023be6) main_mobtv_info_pane_t2_ParamLimits

0xd487,	// (0x00023be6) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x0002631f) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x0002631f) main_mobtv_info_pane_t

0xd518,	// (0x00023c77) wait_bar_pane_cp05

0xd52a,	// (0x00023c89) main_mobtv_loading_pane_g1_ParamLimits

0xd52a,	// (0x00023c89) main_mobtv_loading_pane_g1

0xd536,	// (0x00023c95) main_mobtv_loading_pane_g2_ParamLimits

0xd536,	// (0x00023c95) main_mobtv_loading_pane_g2

0xd542,	// (0x00023ca1) main_mobtv_loading_pane_g3_ParamLimits

0xd542,	// (0x00023ca1) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x00026326) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x00026326) main_mobtv_loading_pane_g

0x4d74,	// (0x0001b4d3) main_mobtv_loading_pane_t1_ParamLimits

0x4d74,	// (0x0001b4d3) main_mobtv_loading_pane_t1

0x4d8c,	// (0x0001b4eb) main_mobtv_loading_pane_t2_ParamLimits

0x4d8c,	// (0x0001b4eb) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x0002632d) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x0002632d) main_mobtv_loading_pane_t

0xd550,	// (0x00023caf) wait_bar_pane_cp06_ParamLimits

0xd550,	// (0x00023caf) wait_bar_pane_cp06

0x4db0,	// (0x0001b50f) main_mobtv_programe_curr_pane_t1

0x4dbe,	// (0x0001b51d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x00026332) main_mobtv_programe_curr_pane_t

0x4dcc,	// (0x0001b52b) main_mobtv_programe_next_pane_t1

0x4dda,	// (0x0001b539) main_mobtv_programe_next_pane_t2

0x4de8,	// (0x0001b547) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x00026337) main_mobtv_programe_next_pane_t

0x050c,	// (0x00016c6b) bg_popup_mobtv_noti_window_pane

0x4df6,	// (0x0001b555) popup_mobtv_noti_window_g1

0x4dfe,	// (0x0001b55d) popup_mobtv_noti_window_t1

0x4e0c,	// (0x0001b56b) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x0002633e) popup_mobtv_noti_window_t

0x0fa9,	// (0x00017708) bg_popup_mobtv_noti_window_pane_g1

0x6ead,	// (0x0001d60c) sc_clock_pane

0x6ead,	// (0x0001d60c) main_fs_bigclock_pane

0xcc14,	// (0x00023373) blid2_tripm_pane_t4_ParamLimits

0xcc14,	// (0x00023373) blid2_tripm_pane_t4

0xd55c,	// (0x00023cbb) sc_clock_pane_g1_ParamLimits

0xd55c,	// (0x00023cbb) sc_clock_pane_g1

0xd56a,	// (0x00023cc9) sc_clock_pane_t1_ParamLimits

0xd56a,	// (0x00023cc9) sc_clock_pane_t1

0xd57f,	// (0x00023cde) sc_clock_pane_t2_ParamLimits

0xd57f,	// (0x00023cde) sc_clock_pane_t2

0xd591,	// (0x00023cf0) sc_clock_pane_t3_ParamLimits

0xd591,	// (0x00023cf0) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x00026343) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x00026343) sc_clock_pane_t

0xe2f0,	// (0x00024a4f) main_fs_bigclock_indicator_pane_ParamLimits

0xe2f0,	// (0x00024a4f) main_fs_bigclock_indicator_pane

0xd620,	// (0x00023d7f) main_fs_bigclock_pane_g1_ParamLimits

0xd620,	// (0x00023d7f) main_fs_bigclock_pane_g1

0xe2fc,	// (0x00024a5b) main_fs_bigclock_pane_t1_ParamLimits

0xe2fc,	// (0x00024a5b) main_fs_bigclock_pane_t1

0xe30e,	// (0x00024a6d) main_fs_bigclock_pane_t2_ParamLimits

0xe30e,	// (0x00024a6d) main_fs_bigclock_pane_t2

0xe322,	// (0x00024a81) main_fs_bigclock_pane_t3_ParamLimits

0xe322,	// (0x00024a81) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x000264d4) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x000264d4) main_fs_bigclock_pane_t

0x589e,	// (0x0001bffd) main_fs_bigclock_indicator_pane_g1

0x4b20,	// (0x0001b27f) ncim_query_content_pane_g2_ParamLimits

0x4b20,	// (0x0001b27f) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x000262d0) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x000262d0) ncim_query_content_pane_g

0xd5a3,	// (0x00023d02) sc_clock_pane_t4_ParamLimits

0xd5a3,	// (0x00023d02) sc_clock_pane_t4

0x7377,	// (0x0001dad6) main_radioblah_pane

0x7bd2,	// (0x0001e331) cell_call4_button_pane_t1_copy1_ParamLimits

0x7bd2,	// (0x0001e331) cell_call4_button_pane_t1_copy1

0xd1d2,	// (0x00023931) main_ncimui_pane_t1_ParamLimits

0xd1d2,	// (0x00023931) main_ncimui_pane_t1

0xd1ec,	// (0x0002394b) main_ncimui_pane_t2_ParamLimits

0xd1ec,	// (0x0002394b) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x000262c9) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x000262c9) main_ncimui_pane_t

0x4e1a,	// (0x0001b579) main_radioblah_anim_pane_ParamLimits

0x4e1a,	// (0x0001b579) main_radioblah_anim_pane

0x4e2b,	// (0x0001b58a) main_radioblah_info_pane_ParamLimits

0x4e2b,	// (0x0001b58a) main_radioblah_info_pane

0x4e3f,	// (0x0001b59e) main_radioblah_pane_t1_ParamLimits

0x4e3f,	// (0x0001b59e) main_radioblah_pane_t1

0x4e5b,	// (0x0001b5ba) main_radioblah_pane_t2_ParamLimits

0x4e5b,	// (0x0001b5ba) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x00026364) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x00026364) main_radioblah_pane_t

0xd7bf,	// (0x00023f1e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd7bf,	// (0x00023f1e) main_radioblah_rocker_ctrl_pane

0x4ea3,	// (0x0001b602) main_radioblah_info_pane_t1_ParamLimits

0x4ea3,	// (0x0001b602) main_radioblah_info_pane_t1

0xd808,	// (0x00023f67) main_radioblah_info_pane_t2_ParamLimits

0xd808,	// (0x00023f67) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x0002636d) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x0002636d) main_radioblah_info_pane_t

0x0fa9,	// (0x00017708) main_radioblah_rocker_ctrl_pane_g1

0xd8b8,	// (0x00024017) main_radioblah_rocker_ctrl_pane_g2

0xd8c0,	// (0x0002401f) main_radioblah_rocker_ctrl_pane_g3

0xd8c8,	// (0x00024027) main_radioblah_rocker_ctrl_pane_g4

0xd8d0,	// (0x0002402f) main_radioblah_rocker_ctrl_pane_g5

0xd8d8,	// (0x00024037) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x00026376) main_radioblah_rocker_ctrl_pane_g

0xd184,	// (0x000238e3) main_cset_text2_pane_t1_copy1_ParamLimits

0x7c5b,	// (0x0001e3ba) cam4_image_uncrop_qvga_pane

0x7d7a,	// (0x0001e4d9) vid4_image_uncrop_qcif_pane

0x836d,	// (0x0001eacc) cam6_image_uncrop_qvga_pane_ParamLimits

0x836d,	// (0x0001eacc) cam6_image_uncrop_qvga_pane

0x47ff,	// (0x0001af5e) vid6_image_uncrop_qcif_pane_ParamLimits

0x47ff,	// (0x0001af5e) vid6_image_uncrop_qcif_pane

0x050c,	// (0x00016c6b) bg_popup_preview_window_pane_cp03

0x4ad2,	// (0x0001b231) list_cset_text2_pane

0x4ada,	// (0x0001b239) main_cset6_text2_pane_g1

0x4ae2,	// (0x0001b241) main_cset6_text2_pane_t1

0xd8e0,	// (0x0002403f) list_cset_text2_pane_t1_ParamLimits

0xd8e0,	// (0x0002403f) list_cset_text2_pane_t1

0x7377,	// (0x0001dad6) main_radioblah_pane_ParamLimits

0xd504,	// (0x00023c63) main_mobtv_info_pane_t3_ParamLimits

0xd504,	// (0x00023c63) main_mobtv_info_pane_t3

0xd7ad,	// (0x00023f0c) main_radioblah_pane_g1

0xd7d8,	// (0x00023f37) main_radioblah_info_pane_g1

0xd85d,	// (0x00023fbc) main_radioblah_info_pane_t3_ParamLimits

0xd85d,	// (0x00023fbc) main_radioblah_info_pane_t3

0x9e46,	// (0x000205a5) highlight_cell_cale_month_pane_ParamLimits

0x9e46,	// (0x000205a5) highlight_cell_cale_month_pane

0x6ead,	// (0x0001d60c) main_phob_fisheye_pane

0x350a,	// (0x00019c69) scroll_pane_cp0031_ParamLimits

0x350a,	// (0x00019c69) scroll_pane_cp0031

0x4911,	// (0x0001b070) wait_bar_pane_cp08_ParamLimits

0xcf0f,	// (0x0002366e) cset_list_set_pane_copy1_ParamLimits

0x4edd,	// (0x0001b63c) highlight_cell_cale_month_pane_g1

0xd8f7,	// (0x00024056) highlight_cell_cale_month_pane_t1

0x44d5,	// (0x0001ac34) list_gen_pane_cp01

0x403c,	// (0x0001a79b) scroll_pane_01

0xd905,	// (0x00024064) list_single_double_fisheye_pane

0xd90e,	// (0x0002406d) list_double_fisheye_pane_g1_ParamLimits

0xd90e,	// (0x0002406d) list_double_fisheye_pane_g1

0xd91a,	// (0x00024079) list_double_fisheye_pane_g2_ParamLimits

0xd91a,	// (0x00024079) list_double_fisheye_pane_g2

0xd92e,	// (0x0002408d) list_double_fisheye_pane_g3_ParamLimits

0xd92e,	// (0x0002408d) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x00026383) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x00026383) list_double_fisheye_pane_g

0xd957,	// (0x000240b6) list_double_fisheye_pane_t1_ParamLimits

0xd957,	// (0x000240b6) list_double_fisheye_pane_t1

0xd972,	// (0x000240d1) list_double_fisheye_pane_t2_ParamLimits

0xd972,	// (0x000240d1) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x0002638e) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x0002638e) list_double_fisheye_pane_t

0x6ead,	// (0x0001d60c) main_call5_pane

0xd5c9,	// (0x00023d28) sc_swipe_pane_ParamLimits

0xd5c9,	// (0x00023d28) sc_swipe_pane

0xd9a0,	// (0x000240ff) call5_image_pane_ParamLimits

0xd9a0,	// (0x000240ff) call5_image_pane

0xd9b2,	// (0x00024111) call5_swipe_1_pane_ParamLimits

0xd9b2,	// (0x00024111) call5_swipe_1_pane

0xd9be,	// (0x0002411d) call5_swipe_2_pane_ParamLimits

0xd9be,	// (0x0002411d) call5_swipe_2_pane

0xd9d8,	// (0x00024137) popup_call5_audio_first_window_ParamLimits

0xd9d8,	// (0x00024137) popup_call5_audio_first_window

0x0cad,	// (0x0001740c) call5_swipe_1_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) call5_swipe_1_pane_g1

0x4ee5,	// (0x0001b644) call5_swipe_1_pane_g2_ParamLimits

0x4ee5,	// (0x0001b644) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x00026393) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x00026393) call5_swipe_1_pane_g

0x4ef1,	// (0x0001b650) call5_swipe_1_pane_t1_ParamLimits

0x4ef1,	// (0x0001b650) call5_swipe_1_pane_t1

0x0cad,	// (0x0001740c) call5_swipe_2_pane_g1_ParamLimits

0x0cad,	// (0x0001740c) call5_swipe_2_pane_g1

0x4f06,	// (0x0001b665) call5_swipe_2_pane_g2_ParamLimits

0x4f06,	// (0x0001b665) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x00026398) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x00026398) call5_swipe_2_pane_g

0x4f12,	// (0x0001b671) call5_swipe_2_pane_t1_ParamLimits

0x4f12,	// (0x0001b671) call5_swipe_2_pane_t1

0x4f27,	// (0x0001b686) sc_swipe_pane_g1_ParamLimits

0x4f27,	// (0x0001b686) sc_swipe_pane_g1

0x4f34,	// (0x0001b693) sc_swipe_pane_g2_ParamLimits

0x4f34,	// (0x0001b693) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x0002639d) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x0002639d) sc_swipe_pane_g

0x4f40,	// (0x0001b69f) sc_swipe_pane_t1_ParamLimits

0x4f40,	// (0x0001b69f) sc_swipe_pane_t1

0x6ead,	// (0x0001d60c) main_cmail_launcher_pane

0xd9e8,	// (0x00024147) aid_size_cell_cmail_l_ParamLimits

0xd9e8,	// (0x00024147) aid_size_cell_cmail_l

0xd9f6,	// (0x00024155) grid_cmail_l_pane_ParamLimits

0xd9f6,	// (0x00024155) grid_cmail_l_pane

0xda06,	// (0x00024165) cell_cmail_l_pane_ParamLimits

0xda06,	// (0x00024165) cell_cmail_l_pane

0x4f55,	// (0x0001b6b4) cell_cmail_l_pane_g1_ParamLimits

0x4f55,	// (0x0001b6b4) cell_cmail_l_pane_g1

0x4f61,	// (0x0001b6c0) cell_cmail_l_pane_t1_ParamLimits

0x4f61,	// (0x0001b6c0) cell_cmail_l_pane_t1

0x4f77,	// (0x0001b6d6) cell_cmail_l_pane_t2_ParamLimits

0x4f77,	// (0x0001b6d6) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x000263a2) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x000263a2) cell_cmail_l_pane_t

0x0581,	// (0x00016ce0) grid_highlight_pane_cp018_ParamLimits

0x0581,	// (0x00016ce0) grid_highlight_pane_cp018

0x6d0e,	// (0x0001d46d) main2_pane_ParamLimits

0x6d0e,	// (0x0001d46d) main2_pane

0x0dfd,	// (0x0001755c) popup_sp_fs_action_menu_bg_pane_g1

0x0e05,	// (0x00017564) popup_sp_fs_action_menu_bg_pane_g2

0x0e0d,	// (0x0001756c) popup_sp_fs_action_menu_bg_pane_g3

0x0e15,	// (0x00017574) popup_sp_fs_action_menu_bg_pane_g4

0x0e1d,	// (0x0001757c) popup_sp_fs_action_menu_bg_pane_g5

0x0e25,	// (0x00017584) popup_sp_fs_action_menu_bg_pane_g6

0x0e2d,	// (0x0001758c) popup_sp_fs_action_menu_bg_pane_g7

0x0e35,	// (0x00017594) popup_sp_fs_action_menu_bg_pane_g8

0x0e3d,	// (0x0001759c) popup_sp_fs_action_menu_bg_pane_g9

0x0e45,	// (0x000175a4) popup_sp_fs_action_menu_bg_pane_g10

0x0e45,	// (0x000175a4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x000258a4) popup_sp_fs_action_menu_bg_pane_g

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g3_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g3_g2

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00025952) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00025952) list_medium_line_x2_t3_g3_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g3_t1

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g3_t2

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00025959) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00025959) list_medium_line_x2_t3_g3_t

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g2_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00025960) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00025960) list_medium_line_x2_t3_g2_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g2_t1

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g2_t2

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00025959) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00025959) list_medium_line_x2_t3_g2_t

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g4_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g4_g2

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g4_g3

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00025965) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00025965) list_medium_line_x2_t4_g4_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g4_t1

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g4_t2

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g4_t3

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0002596e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0002596e) list_medium_line_x2_t4_g4_t

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g4_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g4_g2

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g4_g3

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00025965) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00025965) list_medium_line_x2_t2_g4_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g4_t1

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x000259d5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x000259d5) list_medium_line_x2_t2_g4_t

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g3_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g3_g2

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00025952) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00025952) list_medium_line_x2_t2_g3_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g3_t1

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x000259d5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x000259d5) list_medium_line_x2_t2_g3_t

0x9f95,	// (0x000206f4) main_sp_fs_list_pane_ParamLimits

0x9f95,	// (0x000206f4) main_sp_fs_list_pane

0x9fa1,	// (0x00020700) sp_fs_scroll_pane_ParamLimits

0x9fa1,	// (0x00020700) sp_fs_scroll_pane

0x150f,	// (0x00017c6e) list_medium_line_x2_t3_t1

0x150f,	// (0x00017c6e) list_medium_line_x2_t3_t2

0x150f,	// (0x00017c6e) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00025a20) list_medium_line_x2_t3_t

0x150f,	// (0x00017c6e) list_medium_line_x3_t4_t1

0x150f,	// (0x00017c6e) list_medium_line_x3_t4_t2

0x150f,	// (0x00017c6e) list_medium_line_x3_t4_t3

0x150f,	// (0x00017c6e) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00025a27) list_medium_line_x3_t4_t

0x150f,	// (0x00017c6e) list_medium_line_x4_t5_t1

0x150f,	// (0x00017c6e) list_medium_line_x4_t5_t2

0x150f,	// (0x00017c6e) list_medium_line_x4_t5_t3

0x150f,	// (0x00017c6e) list_medium_line_x4_t5_t4

0x150f,	// (0x00017c6e) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00025a30) list_medium_line_x4_t5_t

0x0cad,	// (0x0001740c) list_medium_line_t4_g4_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t4_g4_g1

0x0cad,	// (0x0001740c) list_medium_line_t4_g4_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t4_g4_g2

0x0cad,	// (0x0001740c) list_medium_line_t4_g4_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t4_g4_g3

0x0cad,	// (0x0001740c) list_medium_line_t4_g4_g4_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00025965) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00025965) list_medium_line_t4_g4_g

0x0f7b,	// (0x000176da) list_medium_line_t4_g4_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t4_g4_t1

0x0f7b,	// (0x000176da) list_medium_line_t4_g4_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t4_g4_t2

0x0f7b,	// (0x000176da) list_medium_line_t4_g4_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t4_g4_t3

0x0f7b,	// (0x000176da) list_medium_line_t4_g4_t4_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0002596e) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0002596e) list_medium_line_t4_g4_t

0xa02b,	// (0x0002078a) chi_dic_find_pane_g1

0x739f,	// (0x0001dafe) main_tport_pane

0x150f,	// (0x00017c6e) list_medium_line_plain_t1

0x0cad,	// (0x0001740c) list_medium_line_t2_g2_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t2_g2_g1

0x0cad,	// (0x0001740c) list_medium_line_t2_g2_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00025960) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00025960) list_medium_line_t2_g2_g

0x0f7b,	// (0x000176da) list_medium_line_t2_g2_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t2_g2_t1

0x0f7b,	// (0x000176da) list_medium_line_t2_g2_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x000259d5) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x000259d5) list_medium_line_t2_g2_t

0x457a,	// (0x0001acd9) aid_sp_fs_list_icon_a_sm

0x4582,	// (0x0001ace1) aid_sp_fs_list_icon_d

0x458a,	// (0x0001ace9) aid_sp_fs_text_primary

0x4593,	// (0x0001acf2) aid_sp_fs_text_secondary

0x050c,	// (0x00016c6b) list_medium_line

0x050c,	// (0x00016c6b) list_medium_line_g2

0x050c,	// (0x00016c6b) list_medium_line_g3

0x050c,	// (0x00016c6b) list_medium_line_plain

0x050c,	// (0x00016c6b) list_medium_line_plain_t2

0x050c,	// (0x00016c6b) list_medium_line_plain_t3

0x050c,	// (0x00016c6b) list_medium_line_right_icon

0x050c,	// (0x00016c6b) list_medium_line_right_iconx2

0x050c,	// (0x00016c6b) list_medium_line_t2

0x050c,	// (0x00016c6b) list_medium_line_t2_g2

0x050c,	// (0x00016c6b) list_medium_line_t2_g3

0x050c,	// (0x00016c6b) list_medium_line_t2_right_icon

0x050c,	// (0x00016c6b) list_medium_line_t2_right_iconx2

0x050c,	// (0x00016c6b) list_medium_line_t3

0x050c,	// (0x00016c6b) list_medium_line_t3_g2

0x050c,	// (0x00016c6b) list_medium_line_t3_g3

0x050c,	// (0x00016c6b) list_medium_line_t3_right_iconx2

0x050c,	// (0x00016c6b) list_medium_line_t4_g4

0x050c,	// (0x00016c6b) list_medium_line_x2

0x050c,	// (0x00016c6b) list_medium_line_x2_t2_g2

0x050c,	// (0x00016c6b) list_medium_line_x2_t2_g3

0x050c,	// (0x00016c6b) list_medium_line_x2_t2_g4

0x050c,	// (0x00016c6b) list_medium_line_x2_t3

0x050c,	// (0x00016c6b) list_medium_line_x2_t3_g2

0x050c,	// (0x00016c6b) list_medium_line_x2_t3_g3

0x050c,	// (0x00016c6b) list_medium_line_x2_t3_g4

0x050c,	// (0x00016c6b) list_medium_line_x2_t4_g2

0x050c,	// (0x00016c6b) list_medium_line_x2_t4_g4

0x050c,	// (0x00016c6b) list_medium_line_x3

0x050c,	// (0x00016c6b) list_medium_line_x3_t4

0x050c,	// (0x00016c6b) list_medium_line_x3_t4_g4

0x050c,	// (0x00016c6b) list_medium_line_x4_t4

0x050c,	// (0x00016c6b) list_medium_line_x4_t4_g7

0x050c,	// (0x00016c6b) list_medium_line_x4_t5

0xca9f,	// (0x000231fe) list_single_fs_dyc_pane_ParamLimits

0xca9f,	// (0x000231fe) list_single_fs_dyc_pane

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g1

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g2

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g3

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g4

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g5

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x4_t4_g7_g6

0x0cbb,	// (0x0001741a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0cbb,	// (0x0001741a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x000262aa) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x000262aa) list_medium_line_x4_t4_g7_g

0x0f7b,	// (0x000176da) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x4_t4_g7_t1

0x0f7b,	// (0x000176da) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x4_t4_g7_t2

0x0f7b,	// (0x000176da) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x4_t4_g7_t3

0x1a32,	// (0x00018191) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1a32,	// (0x00018191) list_medium_line_x4_t4_g7_t4

0x1a32,	// (0x00018191) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1a32,	// (0x00018191) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x000262b9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x000262b9) list_medium_line_x4_t4_g7_t

0xd167,	// (0x000238c6) list_single_dyc_row_pane_ParamLimits

0xd167,	// (0x000238c6) list_single_dyc_row_pane

0xd994,	// (0x000240f3) call5_gesture_pane_ParamLimits

0xd994,	// (0x000240f3) call5_gesture_pane

0xd9ca,	// (0x00024129) call5_windows_pane_ParamLimits

0xd9ca,	// (0x00024129) call5_windows_pane

0xda1b,	// (0x0002417a) call5_swipe_1_pane_cp_ParamLimits

0xda1b,	// (0x0002417a) call5_swipe_1_pane_cp

0xda27,	// (0x00024186) call5_swipe_2_pane_cp_ParamLimits

0xda27,	// (0x00024186) call5_swipe_2_pane_cp

0x0f54,	// (0x000176b3) call5_image_pane_cp

0xda33,	// (0x00024192) popup_call5_audio_first_window_cp_ParamLimits

0xda33,	// (0x00024192) popup_call5_audio_first_window_cp

0x4f27,	// (0x0001b686) call5_swipe_1_pane_g1_cp_ParamLimits

0x4f27,	// (0x0001b686) call5_swipe_1_pane_g1_cp

0x4f94,	// (0x0001b6f3) call5_swipe_1_pane_g2_cp

0x4f40,	// (0x0001b69f) call5_swipe_1_pane_t1_cp_ParamLimits

0x4f40,	// (0x0001b69f) call5_swipe_1_pane_t1_cp

0x4f27,	// (0x0001b686) call5_swipe_2_pane_g1_cp_ParamLimits

0x4f27,	// (0x0001b686) call5_swipe_2_pane_g1_cp

0x4f9c,	// (0x0001b6fb) call5_swipe_2_pane_g2_cp

0x4fa4,	// (0x0001b703) call5_swipe_2_pane_t1_cp_ParamLimits

0x4fa4,	// (0x0001b703) call5_swipe_2_pane_t1_cp

0x0581,	// (0x00016ce0) main_sp_fs_email_pane

0x411f,	// (0x0001a87e) main_sp_fs_listscroll_pane_te

0xda41,	// (0x000241a0) popup_sp_fs_action_menu_pane_ParamLimits

0xda41,	// (0x000241a0) popup_sp_fs_action_menu_pane

0x0fa9,	// (0x00017708) bg_sp_fs_ctrlbar_pane_g1

0x4fb9,	// (0x0001b718) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4fc2,	// (0x0001b721) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4fcb,	// (0x0001b72a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0fa9,	// (0x00017708) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x000263a7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2eba,	// (0x00019619) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2eba,	// (0x00019619) bg_sp_fs_ctrlbar_ddmenu_pane

0x4fd4,	// (0x0001b733) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4fd4,	// (0x0001b733) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4fe0,	// (0x0001b73f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4fe0,	// (0x0001b73f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x000263b0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x000263b0) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4fec,	// (0x0001b74b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4fec,	// (0x0001b74b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0fa9,	// (0x00017708) list_medium_line_t2_right_icon_g1

0x150f,	// (0x00017c6e) list_medium_line_t2_right_icon_t1

0x150f,	// (0x00017c6e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x000263b5) list_medium_line_t2_right_icon_t

0x1a46,	// (0x000181a5) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1a46,	// (0x000181a5) bg_sp_fs_ctrlbar_pane

0xdae0,	// (0x0002423f) main_sp_fs_ctrlbar_button_pane_cp01

0xdae8,	// (0x00024247) main_sp_fs_ctrlbar_ddmenu_pane

0x5040,	// (0x0001b79f) main_sp_fs_ctrlbar_pane_g1

0x504c,	// (0x0001b7ab) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x000263ba) main_sp_fs_ctrlbar_pane_g

0xdb26,	// (0x00024285) main_sp_fs_ctrlbar_pane_t1

0xdb63,	// (0x000242c2) main_sp_fs_ctrlbar_pane

0xdb7d,	// (0x000242dc) main_sp_fs_listscroll_pane_te_cp01

0xdb8e,	// (0x000242ed) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdb8e,	// (0x000242ed) popup_sp_fs_action_menu_pane_cp01

0x0581,	// (0x00016ce0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0581,	// (0x00016ce0) bg_sp_fs_highlight_list_pane_cp01

0x5073,	// (0x0001b7d2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5073,	// (0x0001b7d2) sp_fs_action_menu_list_gene_pane_g1

0x5082,	// (0x0001b7e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5082,	// (0x0001b7e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x000263c8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x000263c8) sp_fs_action_menu_list_gene_pane_g

0x508f,	// (0x0001b7ee) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x508f,	// (0x0001b7ee) sp_fs_action_menu_list_gene_pane_t1

0x50a7,	// (0x0001b806) sp_fs_action_menu_list_gene_pane_ParamLimits

0x50a7,	// (0x0001b806) sp_fs_action_menu_list_gene_pane

0x50ca,	// (0x0001b829) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x50ca,	// (0x0001b829) popup_sp_fs_action_menu_bg_pane

0x50d8,	// (0x0001b837) sp_fs_action_menu_list_pane_ParamLimits

0x50d8,	// (0x0001b837) sp_fs_action_menu_list_pane

0xdbae,	// (0x0002430d) sp_fs_scroll_pane_cp01_ParamLimits

0xdbae,	// (0x0002430d) sp_fs_scroll_pane_cp01

0x150f,	// (0x00017c6e) list_medium_line_plain_t2_t1

0x150f,	// (0x00017c6e) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x000263b5) list_medium_line_plain_t2_t

0x150f,	// (0x00017c6e) list_medium_line_plain_t3_t1

0x150f,	// (0x00017c6e) list_medium_line_plain_t3_t2

0x150f,	// (0x00017c6e) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x00025a20) list_medium_line_plain_t3_t

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g2_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00025960) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00025960) list_medium_line_x2_t2_g2_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g2_t1

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x000259d5) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x000259d5) list_medium_line_x2_t2_g2_t

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g2_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00025960) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00025960) list_medium_line_x2_t4_g2_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g2_t1

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g2_t2

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g2_t3

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0002596e) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0002596e) list_medium_line_x2_t4_g2_t

0x0fa9,	// (0x00017708) list_medium_line_t3_right_iconx2_g1

0x0fa9,	// (0x00017708) list_medium_line_t3_right_iconx2_g2

0x0fa9,	// (0x00017708) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x00025b41) list_medium_line_t3_right_iconx2_g

0x150f,	// (0x00017c6e) list_medium_line_t3_right_iconx2_t1

0x150f,	// (0x00017c6e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x000263b5) list_medium_line_t3_right_iconx2_t

0x0cad,	// (0x0001740c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x3_t4_g4_g1

0x0cad,	// (0x0001740c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x3_t4_g4_g2

0x0cad,	// (0x0001740c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x3_t4_g4_g3

0x0cad,	// (0x0001740c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00025965) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00025965) list_medium_line_x3_t4_g4_g

0x0f7b,	// (0x000176da) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x3_t4_g4_t1

0x0f7b,	// (0x000176da) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x3_t4_g4_t2

0x0f7b,	// (0x000176da) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x3_t4_g4_t3

0x0f7b,	// (0x000176da) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0002596e) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0002596e) list_medium_line_x3_t4_g4_t

0xdbd4,	// (0x00024333) list_single_dyc_row_text_pane_t1_ParamLimits

0xdbd4,	// (0x00024333) list_single_dyc_row_text_pane_t1

0xdc13,	// (0x00024372) list_single_dyc_row_text_pane_t2_ParamLimits

0xdc13,	// (0x00024372) list_single_dyc_row_text_pane_t2

0x50fc,	// (0x0001b85b) list_single_dyc_row_text_pane_t3_ParamLimits

0x50fc,	// (0x0001b85b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x000263cd) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x000263cd) list_single_dyc_row_text_pane_t

0x512c,	// (0x0001b88b) list_single_dyc_row_pane_g1_ParamLimits

0x512c,	// (0x0001b88b) list_single_dyc_row_pane_g1

0x5138,	// (0x0001b897) list_single_dyc_row_pane_g2_ParamLimits

0x5138,	// (0x0001b897) list_single_dyc_row_pane_g2

0x5144,	// (0x0001b8a3) list_single_dyc_row_pane_g3_ParamLimits

0x5144,	// (0x0001b8a3) list_single_dyc_row_pane_g3

0x5150,	// (0x0001b8af) list_single_dyc_row_pane_g4_ParamLimits

0x5150,	// (0x0001b8af) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x000263da) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x000263da) list_single_dyc_row_pane_g

0x515c,	// (0x0001b8bb) list_single_dyc_row_text_pane_ParamLimits

0x515c,	// (0x0001b8bb) list_single_dyc_row_text_pane

0x050c,	// (0x00016c6b) bg_sp_fs_scroll_pane

0x517b,	// (0x0001b8da) thumb_sp_fs_scroll_pane

0x0cad,	// (0x0001740c) list_medium_line_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_g1

0x0f7b,	// (0x000176da) list_medium_line_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t1

0x0cad,	// (0x0001740c) list_medium_line_x2_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00025960) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00025960) list_medium_line_x2_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t1

0x0cad,	// (0x0001740c) list_medium_line_x3_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x3_g1

0x5184,	// (0x0001b8e3) list_medium_line_x3_g2_ParamLimits

0x5184,	// (0x0001b8e3) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x000263e3) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x000263e3) list_medium_line_x3_g

0x5192,	// (0x0001b8f1) list_medium_line_x3_t1_ParamLimits

0x5192,	// (0x0001b8f1) list_medium_line_x3_t1

0x51a6,	// (0x0001b905) thumb_sp_fs_scroll_pane_g1

0x51af,	// (0x0001b90e) thumb_sp_fs_scroll_pane_g2

0x51b8,	// (0x0001b917) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x000263e8) thumb_sp_fs_scroll_pane_g

0x51a6,	// (0x0001b905) bg_sp_fs_scroll_pane_g1

0x51af,	// (0x0001b90e) bg_sp_fs_scroll_pane_g2

0x51b8,	// (0x0001b917) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x000263e8) bg_sp_fs_scroll_pane_g

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g4_g1

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g4_g2

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g4_g3

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00025965) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00025965) list_medium_line_x2_t3_g4_g

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g4_t1

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g4_t2

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00025959) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00025959) list_medium_line_x2_t3_g4_t

0x0cad,	// (0x0001740c) list_medium_line_g2_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_g2_g1

0x0cad,	// (0x0001740c) list_medium_line_g2_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00025960) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00025960) list_medium_line_g2_g

0x0f7b,	// (0x000176da) list_medium_line_g2_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_g2_t1

0x0cad,	// (0x0001740c) list_medium_line_t3_g2_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t3_g2_g1

0x0cad,	// (0x0001740c) list_medium_line_t3_g2_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00025960) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00025960) list_medium_line_t3_g2_g

0x0f7b,	// (0x000176da) list_medium_line_t3_g2_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_g2_t1

0x0f7b,	// (0x000176da) list_medium_line_t3_g2_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_g2_t2

0x0f7b,	// (0x000176da) list_medium_line_t3_g2_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00025959) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00025959) list_medium_line_t3_g2_t

0x0fa9,	// (0x00017708) list_medium_line_right_icon_g1

0x150f,	// (0x00017c6e) list_medium_line_right_icon_t1

0x0cad,	// (0x0001740c) list_medium_line_t2_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t2_g1

0x0f7b,	// (0x000176da) list_medium_line_t2_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t2_t1

0x0f7b,	// (0x000176da) list_medium_line_t2_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x000259d5) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x000259d5) list_medium_line_t2_t

0x0cad,	// (0x0001740c) list_medium_line_t3_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t3_g1

0x0f7b,	// (0x000176da) list_medium_line_t3_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_t1

0x0f7b,	// (0x000176da) list_medium_line_t3_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_t2

0x0f7b,	// (0x000176da) list_medium_line_t3_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00025959) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00025959) list_medium_line_t3_t

0x0cad,	// (0x0001740c) list_medium_line_g3_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_g3_g1

0x0cad,	// (0x0001740c) list_medium_line_g3_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_g3_g2

0x0cad,	// (0x0001740c) list_medium_line_g3_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00025952) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00025952) list_medium_line_g3_g

0x0f7b,	// (0x000176da) list_medium_line_g3_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_g3_t1

0x0cad,	// (0x0001740c) list_medium_line_t2_g3_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t2_g3_g1

0x0cad,	// (0x0001740c) list_medium_line_t2_g3_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t2_g3_g2

0x0cad,	// (0x0001740c) list_medium_line_t2_g3_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00025952) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00025952) list_medium_line_t2_g3_g

0x0f7b,	// (0x000176da) list_medium_line_t2_g3_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t2_g3_t1

0x0f7b,	// (0x000176da) list_medium_line_t2_g3_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x000259d5) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x000259d5) list_medium_line_t2_g3_t

0x0cad,	// (0x0001740c) list_medium_line_t3_g3_g1_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t3_g3_g1

0x0cad,	// (0x0001740c) list_medium_line_t3_g3_g2_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t3_g3_g2

0x0cad,	// (0x0001740c) list_medium_line_t3_g3_g3_ParamLimits

0x0cad,	// (0x0001740c) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00025952) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00025952) list_medium_line_t3_g3_g

0x0f7b,	// (0x000176da) list_medium_line_t3_g3_t1_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_g3_t1

0x0f7b,	// (0x000176da) list_medium_line_t3_g3_t2_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_g3_t2

0x0f7b,	// (0x000176da) list_medium_line_t3_g3_t3_ParamLimits

0x0f7b,	// (0x000176da) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00025959) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00025959) list_medium_line_t3_g3_t

0x0fa9,	// (0x00017708) list_medium_line_right_iconx2_g1

0x0fa9,	// (0x00017708) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00025b3c) list_medium_line_right_iconx2_g

0x150f,	// (0x00017c6e) list_medium_line_right_iconx2_t1

0x0fa9,	// (0x00017708) list_medium_line_t2_right_iconx2_g1

0x0fa9,	// (0x00017708) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00025b3c) list_medium_line_t2_right_iconx2_g

0x150f,	// (0x00017c6e) list_medium_line_t2_right_iconx2_t1

0x150f,	// (0x00017c6e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x000263b5) list_medium_line_t2_right_iconx2_t

0x150f,	// (0x00017c6e) list_medium_line_x4_t4_t1

0x150f,	// (0x00017c6e) list_medium_line_x4_t4_t2

0x150f,	// (0x00017c6e) list_medium_line_x4_t4_t3

0x150f,	// (0x00017c6e) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00025a27) list_medium_line_x4_t4_t

0xdd68,	// (0x000244c7) tport_appsw_pane_ParamLimits

0xdd68,	// (0x000244c7) tport_appsw_pane

0xdd76,	// (0x000244d5) tport_contact_pane_ParamLimits

0xdd76,	// (0x000244d5) tport_contact_pane

0xdd86,	// (0x000244e5) tport_listscroll_pane_ParamLimits

0xdd86,	// (0x000244e5) tport_listscroll_pane

0xdd95,	// (0x000244f4) cell_tport_appsw_pane_ParamLimits

0xdd95,	// (0x000244f4) cell_tport_appsw_pane

0x0cbb,	// (0x0001741a) tport_appsw_pane_g1_ParamLimits

0x0cbb,	// (0x0001741a) tport_appsw_pane_g1

0x51c1,	// (0x0001b920) tport_contact_pane_g1

0x51ca,	// (0x0001b929) tport_contact_pane_t1

0x51d8,	// (0x0001b937) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x000263ef) tport_contact_pane_t

0x51e6,	// (0x0001b945) list_tport_pane

0x51ef,	// (0x0001b94e) scroll_pane_cp_030

0xddca,	// (0x00024529) cell_tport_appsw_pane_g1

0xddda,	// (0x00024539) cell_tport_appsw_pane_t1

0xdde8,	// (0x00024547) grid_highlight_pane_cp019

0xddf0,	// (0x0002454f) list_tport_double_graphic_pane_ParamLimits

0xddf0,	// (0x0002454f) list_tport_double_graphic_pane

0x0581,	// (0x00016ce0) list_highlight_pane_cp023_ParamLimits

0x0581,	// (0x00016ce0) list_highlight_pane_cp023

0xde0d,	// (0x0002456c) list_tport_double_graphic_pane_g1_ParamLimits

0xde0d,	// (0x0002456c) list_tport_double_graphic_pane_g1

0xde1a,	// (0x00024579) list_tport_double_graphic_pane_t1_ParamLimits

0xde1a,	// (0x00024579) list_tport_double_graphic_pane_t1

0xde2f,	// (0x0002458e) list_tport_double_graphic_pane_t2_ParamLimits

0xde2f,	// (0x0002458e) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x000263fb) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x000263fb) list_tport_double_graphic_pane_t

0x050c,	// (0x00016c6b) main_cale_note_pane

0x7fa5,	// (0x0001e704) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7fa5,	// (0x0001e704) cell_vitu2_function_top_wide_pane_cp01

0xd518,	// (0x00023c77) wait_bar_pane_cp05_ParamLimits

0x0581,	// (0x00016ce0) listscroll_cmail_pane

0x51f8,	// (0x0001b957) list_cmail_pane

0xde41,	// (0x000245a0) list_cmail_body_pane

0xde5b,	// (0x000245ba) list_single_cmail_header_caption_pane

0x5208,	// (0x0001b967) list_single_cmail_header_detail_pane_ParamLimits

0x5208,	// (0x0001b967) list_single_cmail_header_detail_pane

0x523a,	// (0x0001b999) list_single_cmail_header_caption_pane_t1

0xde7b,	// (0x000245da) list_single_cmail_header_detail_pane_g1_ParamLimits

0xde7b,	// (0x000245da) list_single_cmail_header_detail_pane_g1

0x5251,	// (0x0001b9b0) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5251,	// (0x0001b9b0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x00026400) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x00026400) list_single_cmail_header_detail_pane_g

0x526a,	// (0x0001b9c9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x526a,	// (0x0001b9c9) list_single_cmail_header_detail_pane_t1

0x52ca,	// (0x0001ba29) list_single_cmail_header_editor_pane_bg_ParamLimits

0x52ca,	// (0x0001ba29) list_single_cmail_header_editor_pane_bg

0x4d0d,	// (0x0001b46c) list_cmail_body_pane_g1

0x52e1,	// (0x0001ba40) list_cmail_body_pane_t1

0x3f1e,	// (0x0001a67d) list_single_cmail_header_editor_pane_bg_g1

0x11be,	// (0x0001791d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3f2e,	// (0x0001a68d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3f26,	// (0x0001a685) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4192,	// (0x0001a8f1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3f4e,	// (0x0001a6ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3f3e,	// (0x0001a69d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3f46,	// (0x0001a6a5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x119e,	// (0x000178fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xde93,	// (0x000245f2) calenote_gesture_pane_ParamLimits

0xde93,	// (0x000245f2) calenote_gesture_pane

0xdead,	// (0x0002460c) calenote_window_pane_ParamLimits

0xdead,	// (0x0002460c) calenote_window_pane

0x52ef,	// (0x0001ba4e) popup_note_window_cp01

0xdec5,	// (0x00024624) calenote_swipe_1_pane_ParamLimits

0xdec5,	// (0x00024624) calenote_swipe_1_pane

0xda27,	// (0x00024186) calenote_swipe_2_pane_ParamLimits

0xda27,	// (0x00024186) calenote_swipe_2_pane

0x4f27,	// (0x0001b686) calenote_swipe_1_pane_g1_ParamLimits

0x4f27,	// (0x0001b686) calenote_swipe_1_pane_g1

0x4f34,	// (0x0001b693) calenote_swipe_1_pane_g2_ParamLimits

0x4f34,	// (0x0001b693) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x0002639d) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x0002639d) calenote_swipe_1_pane_g

0x5301,	// (0x0001ba60) calenote_swipe_1_pane_t1_ParamLimits

0x5301,	// (0x0001ba60) calenote_swipe_1_pane_t1

0x4f27,	// (0x0001b686) calenote_swipe_2_pane_g1_ParamLimits

0x4f27,	// (0x0001b686) calenote_swipe_2_pane_g1

0x5320,	// (0x0001ba7f) calenote_swipe_2_pane_g2_ParamLimits

0x5320,	// (0x0001ba7f) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x0002640c) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x0002640c) calenote_swipe_2_pane_g

0x532c,	// (0x0001ba8b) calenote_swipe_2_pane_t1_ParamLimits

0x532c,	// (0x0001ba8b) calenote_swipe_2_pane_t1

0x050c,	// (0x00016c6b) main_mup_navstr_pane

0xb737,	// (0x00021e96) main_mup3_pane_t7_ParamLimits

0xb737,	// (0x00021e96) main_mup3_pane_t7

0x77f5,	// (0x0001df54) main_mp4_pane_g6_ParamLimits

0x77f5,	// (0x0001df54) main_mp4_pane_g6

0x7b02,	// (0x0001e261) main_image3_pane_t4_ParamLimits

0x7b02,	// (0x0001e261) main_image3_pane_t4

0xded8,	// (0x00024637) popup_navstr_preview_pane_ParamLimits

0xded8,	// (0x00024637) popup_navstr_preview_pane

0xdee4,	// (0x00024643) scroll_navstr_pane_ParamLimits

0xdee4,	// (0x00024643) scroll_navstr_pane

0x050c,	// (0x00016c6b) bg_popup_preview_window_pane_cp04

0x5353,	// (0x0001bab2) popup_navstr_preview_pane_t1

0xdef0,	// (0x0002464f) scroll_navstr_pane_g1_ParamLimits

0xdef0,	// (0x0002464f) scroll_navstr_pane_g1

0xdefd,	// (0x0002465c) scroll_navstr_pane_t1_ParamLimits

0xdefd,	// (0x0002465c) scroll_navstr_pane_t1

0x52f8,	// (0x0001ba57) bg_button_pane_cp014

0x52f8,	// (0x0001ba57) bg_button_pane_cp030

0xd93a,	// (0x00024099) list_double_fisheye_pane_g4_ParamLimits

0xd93a,	// (0x00024099) list_double_fisheye_pane_g4

0xd946,	// (0x000240a5) list_double_fisheye_pane_g5_ParamLimits

0xd946,	// (0x000240a5) list_double_fisheye_pane_g5

0x510e,	// (0x0001b86d) sp_fs_scroll_pane_cp03

0x5040,	// (0x0001b79f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x504c,	// (0x0001b7ab) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x000263ba) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdb26,	// (0x00024285) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x5200,	// (0x0001b95f) sp_fs_scroll_pane_cp02

0x0eb0,	// (0x0001760f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0eb0,	// (0x0001760f) popup_sp_fs_calendar_preview_list_single_pane

0x050c,	// (0x00016c6b) main_cam6_pano_pane

0x7377,	// (0x0001dad6) main_mup3_pane_ParamLimits

0x050c,	// (0x00016c6b) main_phacti_pane

0xd3eb,	// (0x00023b4a) bg_button_pane_cp11

0xd403,	// (0x00023b62) main_mobtv_info_pane_g2_ParamLimits

0xd403,	// (0x00023b62) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x0002631a) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x0002631a) main_mobtv_info_pane_g

0xd5b5,	// (0x00023d14) sc_clock_pane_t5_ParamLimits

0xd5b5,	// (0x00023d14) sc_clock_pane_t5

0xd7ad,	// (0x00023f0c) main_radioblah_pane_g1_ParamLimits

0x4e73,	// (0x0001b5d2) main_radioblah_pane_t3_ParamLimits

0x4e73,	// (0x0001b5d2) main_radioblah_pane_t3

0x4e8b,	// (0x0001b5ea) main_radioblah_pane_t4_ParamLimits

0x4e8b,	// (0x0001b5ea) main_radioblah_pane_t4

0xd7cb,	// (0x00023f2a) main_radioblah_text_pane_ParamLimits

0xd7cb,	// (0x00023f2a) main_radioblah_text_pane

0xd7d8,	// (0x00023f37) main_radioblah_info_pane_g1_ParamLimits

0xd871,	// (0x00023fd0) main_radioblah_info_pane_t4_ParamLimits

0xd871,	// (0x00023fd0) main_radioblah_info_pane_t4

0x0581,	// (0x00016ce0) main_sp_fs_calendar_pane

0xdf0f,	// (0x0002466e) main_phacti_pane_g1

0xdf17,	// (0x00024676) phacti_note_pane_ParamLimits

0xdf17,	// (0x00024676) phacti_note_pane

0x536a,	// (0x0001bac9) phacti_term_pane_ParamLimits

0x536a,	// (0x0001bac9) phacti_term_pane

0x537f,	// (0x0001bade) phacti_note_pane_t1_ParamLimits

0x537f,	// (0x0001bade) phacti_note_pane_t1

0x5396,	// (0x0001baf5) phacti_term_pane_g1

0x539e,	// (0x0001bafd) phacti_term_pane_t1_ParamLimits

0x539e,	// (0x0001bafd) phacti_term_pane_t1

0x53c8,	// (0x0001bb27) popup_sp_fs_calendar_preview_list_single_pane_g1

0x53d0,	// (0x0001bb2f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x00026416) popup_sp_fs_calendar_preview_list_single_pane_g

0x53d8,	// (0x0001bb37) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x53d8,	// (0x0001bb37) popup_sp_fs_calendar_preview_list_single_pane_t1

0x53ee,	// (0x0001bb4d) aid_popup_sp_fs_bg_corner_pane

0x0fa9,	// (0x00017708) popup_sp_fs_calendar_preview_bg_pane_g1

0x050c,	// (0x00016c6b) popup_sp_fs_calendar_preview_bg_pane

0x53f6,	// (0x0001bb55) popup_sp_fs_calendar_preview_list_pane

0x1a46,	// (0x000181a5) bg_main_sp_fs_cale_pane_ParamLimits

0x1a46,	// (0x000181a5) bg_main_sp_fs_cale_pane

0x5407,	// (0x0001bb66) listscroll_cale_mrui_pane_ParamLimits

0x5407,	// (0x0001bb66) listscroll_cale_mrui_pane

0x541c,	// (0x0001bb7b) listscroll_sp_fs_schedule_track_pane

0x5425,	// (0x0001bb84) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5425,	// (0x0001bb84) main_sp_fs_ctrlbar_pane_cp01

0x5438,	// (0x0001bb97) main_sp_fs_ribbon_pane

0x5440,	// (0x0001bb9f) popup_sp_fs_cale_preview_window

0x5b22,	// (0x0001c281) list_single_sp_fs_schedule_track_pane_ParamLimits

0x5b22,	// (0x0001c281) list_single_sp_fs_schedule_track_pane

0x0c9f,	// (0x000173fe) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0c9f,	// (0x000173fe) bg_sp_fs_highlight_list_pane_cp03

0xdf7a,	// (0x000246d9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdf7a,	// (0x000246d9) list_single_sp_fs_schedule_track_pane_g1

0xdf86,	// (0x000246e5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdf86,	// (0x000246e5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x0002641b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x0002641b) list_single_sp_fs_schedule_track_pane_g

0xdf92,	// (0x000246f1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdf92,	// (0x000246f1) list_single_sp_fs_schedule_track_pane_t1

0xdfb0,	// (0x0002470f) sp_fs_schedule_track_pane_ParamLimits

0xdfb0,	// (0x0002470f) sp_fs_schedule_track_pane

0x5452,	// (0x0001bbb1) sp_fs_schedule_track_pane_g1

0x545a,	// (0x0001bbb9) sp_fs_schedule_track_pane_g2

0x5462,	// (0x0001bbc1) sp_fs_schedule_track_pane_g3

0x546a,	// (0x0001bbc9) sp_fs_schedule_track_pane_g4

0x5472,	// (0x0001bbd1) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x00026420) sp_fs_schedule_track_pane_g

0x3f1e,	// (0x0001a67d) bg_sp_fs_schedule_viewer_highlight_g1

0x11be,	// (0x0001791d) bg_sp_fs_schedule_viewer_highlight_g2

0x3f26,	// (0x0001a685) bg_sp_fs_schedule_viewer_highlight_g3

0x3f2e,	// (0x0001a68d) bg_sp_fs_schedule_viewer_highlight_g4

0x4192,	// (0x0001a8f1) bg_sp_fs_schedule_viewer_highlight_g5

0x3f3e,	// (0x0001a69d) bg_sp_fs_schedule_viewer_highlight_g6

0x3f46,	// (0x0001a6a5) bg_sp_fs_schedule_viewer_highlight_g7

0x3f4e,	// (0x0001a6ad) bg_sp_fs_schedule_viewer_highlight_g8

0x119e,	// (0x000178fd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x0002642b) bg_sp_fs_schedule_viewer_highlight_g

0x050c,	// (0x00016c6b) bg_main_sp_fs_ribbon_pane

0xdfc2,	// (0x00024721) main_sp_fs_ribbon_pane_g1

0x547a,	// (0x0001bbd9) main_sp_fs_ribbon_pane_t1

0xdfcb,	// (0x0002472a) main_sp_fs_ribbon_pane_t2

0x5489,	// (0x0001bbe8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x0002643e) main_sp_fs_ribbon_pane_t

0x5498,	// (0x0001bbf7) main_sp_fs_ribbon_scheduler_pane

0x54a0,	// (0x0001bbff) bg_main_sp_fs_ribbon_pane_g1

0x54a9,	// (0x0001bc08) bg_main_sp_fs_ribbon_pane_g2

0x54b2,	// (0x0001bc11) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x00026445) bg_main_sp_fs_ribbon_pane_g

0x54ba,	// (0x0001bc19) main_sp_fs_ribbon_scheduler_pane_g1

0x54c3,	// (0x0001bc22) main_sp_fs_ribbon_scheduler_pane_g2

0x54cc,	// (0x0001bc2b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x0002644c) main_sp_fs_ribbon_scheduler_pane_g

0x54d5,	// (0x0001bc34) list_cale_mrui_pane

0xdfda,	// (0x00024739) sp_fs_scroll_pane_cp07_ParamLimits

0xdfda,	// (0x00024739) sp_fs_scroll_pane_cp07

0xdff6,	// (0x00024755) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdff6,	// (0x00024755) bg_sp_fs_schedule_viewer_highlight

0x54e2,	// (0x0001bc41) list_single_sp_fs_schedule_track_pane_cp01

0x54ea,	// (0x0001bc49) list_sp_fs_schedule_track_pane

0x54f2,	// (0x0001bc51) sp_fs_scroll_pane_cp06_ParamLimits

0x54f2,	// (0x0001bc51) sp_fs_scroll_pane_cp06

0x0fa9,	// (0x00017708) bgmain_sp_fs_calendar_pane_g1

0xe003,	// (0x00024762) list_single_cale_mrui_pane_ParamLimits

0xe003,	// (0x00024762) list_single_cale_mrui_pane

0x5504,	// (0x0001bc63) list_single_cale_mrui_row_pane_ParamLimits

0x5504,	// (0x0001bc63) list_single_cale_mrui_row_pane

0x5511,	// (0x0001bc70) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5511,	// (0x0001bc70) list_single_cale_mrui_row_pane_g1

0x5556,	// (0x0001bcb5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5556,	// (0x0001bcb5) list_single_cale_mrui_row_pane_t1

0xe026,	// (0x00024785) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe026,	// (0x00024785) list_single_cale_mrui_row_pane_t2

0x5568,	// (0x0001bcc7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5568,	// (0x0001bcc7) list_single_cale_mrui_row_pane_t3

0x5597,	// (0x0001bcf6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5597,	// (0x0001bcf6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x0002645a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x0002645a) list_single_cale_mrui_row_pane_t

0xe08c,	// (0x000247eb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe08c,	// (0x000247eb) list_single_cmail_header_editor_pane_bg_cp01

0xe0ae,	// (0x0002480d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe0ae,	// (0x0002480d) list_single_cmail_header_editor_pane_bg_cp02

0xe0ca,	// (0x00024829) main_radioblah_text_pane_t1_ParamLimits

0xe0ca,	// (0x00024829) main_radioblah_text_pane_t1

0x55c8,	// (0x0001bd27) cam6_indi_pane_cp01

0x55d0,	// (0x0001bd2f) cam6_mode_pane_cp01

0x55d8,	// (0x0001bd37) cam6_pano_pane

0x55e1,	// (0x0001bd40) cam6_zoom_pane_cp01

0x55eb,	// (0x0001bd4a) cam6_pano_image_pane

0x55f4,	// (0x0001bd53) cam6_pano_pane_g1

0x4d0d,	// (0x0001b46c) cam6_pano_pane_g2

0x55fd,	// (0x0001bd5c) cam6_pano_pane_g3

0x5606,	// (0x0001bd65) cam6_pano_pane_g4

0x377b,	// (0x00019eda) cam6_pano_pane_g5

0x560f,	// (0x0001bd6e) cam6_pano_pane_g6

0x5617,	// (0x0001bd76) cam6_pano_pane_g7

0x561f,	// (0x0001bd7e) cam6_pano_pane_g8

0x5628,	// (0x0001bd87) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x00026463) cam6_pano_pane_g

0x050c,	// (0x00016c6b) main_browser_tag_pane

0x534b,	// (0x0001baaa) grid_navstr_albumart_pane

0x5633,	// (0x0001bd92) cell_navstr_albumart_pane_ParamLimits

0x5633,	// (0x0001bd92) cell_navstr_albumart_pane

0x564f,	// (0x0001bdae) cell_navstr_albumart_pane_g1

0x2bc8,	// (0x00019327) cell_navstr_albumart_pane_g2

0x2bd8,	// (0x00019337) cell_navstr_albumart_pane_g3

0x2bd0,	// (0x0001932f) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x00026476) cell_navstr_albumart_pane_g

0xe0e4,	// (0x00024843) bt_list_pane_ParamLimits

0xe0e4,	// (0x00024843) bt_list_pane

0xe0fd,	// (0x0002485c) bt_list_pane_t1

0xe10c,	// (0x0002486b) bt_list_pane_t2

0x0001,

0xfd20,	// (0x0002647f) bt_list_pane_t

0x050c,	// (0x00016c6b) main_cale_prevew_pane

0xe11b,	// (0x0002487a) popup_cale_preview_window_ParamLimits

0xe11b,	// (0x0002487a) popup_cale_preview_window

0x0581,	// (0x00016ce0) bg_popup_preview_window_pane_cp05_ParamLimits

0x0581,	// (0x00016ce0) bg_popup_preview_window_pane_cp05

0x5657,	// (0x0001bdb6) list_cale_preview_pane_ParamLimits

0x5657,	// (0x0001bdb6) list_cale_preview_pane

0xe138,	// (0x00024897) list_double_cale_preview_pane_ParamLimits

0xe138,	// (0x00024897) list_double_cale_preview_pane

0xe14c,	// (0x000248ab) list_single_cale_preview_pane_ParamLimits

0xe14c,	// (0x000248ab) list_single_cale_preview_pane

0xe164,	// (0x000248c3) list_single_cale_preview_pane_g1

0xe16c,	// (0x000248cb) list_single_cale_preview_pane_t1_ParamLimits

0xe16c,	// (0x000248cb) list_single_cale_preview_pane_t1

0xe181,	// (0x000248e0) list_double_cale_preview_pane_g1

0xe189,	// (0x000248e8) list_double_cale_preview_pane_t1_ParamLimits

0xe189,	// (0x000248e8) list_double_cale_preview_pane_t1

0xe19e,	// (0x000248fd) list_double_cale_preview_pane_t2_ParamLimits

0xe19e,	// (0x000248fd) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x00026484) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x00026484) list_double_cale_preview_pane_t

0x050c,	// (0x00016c6b) main_ezdial_pane

0x0581,	// (0x00016ce0) main_sp_fs_email_pane_ParamLimits

0xda87,	// (0x000241e6) cmail_ddmenu_btn01_pane_ParamLimits

0xda87,	// (0x000241e6) cmail_ddmenu_btn01_pane

0xdaa4,	// (0x00024203) cmail_ddmenu_btn02_pane_ParamLimits

0xdaa4,	// (0x00024203) cmail_ddmenu_btn02_pane

0xdac2,	// (0x00024221) cmail_ddmenu_btn03_pane_ParamLimits

0xdac2,	// (0x00024221) cmail_ddmenu_btn03_pane

0xdb63,	// (0x000242c2) main_sp_fs_ctrlbar_pane_ParamLimits

0xdb7d,	// (0x000242dc) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xde41,	// (0x000245a0) list_cmail_body_pane_ParamLimits

0x5248,	// (0x0001b9a7) bg_button_pane_cp12

0x525d,	// (0x0001b9bc) list_single_cmail_header_detail_pane_g3_ParamLimits

0x525d,	// (0x0001b9bc) list_single_cmail_header_detail_pane_g3

0x52a6,	// (0x0001ba05) list_single_cmail_header_detail_pane_t2_ParamLimits

0x52a6,	// (0x0001ba05) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x00026407) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x00026407) list_single_cmail_header_detail_pane_t

0x53b3,	// (0x0001bb12) phacti_term_pane_t2_ParamLimits

0x53b3,	// (0x0001bb12) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x00026411) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x00026411) phacti_term_pane_t

0x5663,	// (0x0001bdc2) aid_size_list_single_double

0xe1b6,	// (0x00024915) popup_ezdial_listscroll_window

0xe1d8,	// (0x00024937) popup_number_entry_window_cp01

0x0f54,	// (0x000176b3) bg_popup_call_pane_cp09

0x566f,	// (0x0001bdce) ezdial_list_pane

0x5677,	// (0x0001bdd6) scroll_pane_cp23

0x2eba,	// (0x00019619) bg_button_pane_cp028_ParamLimits

0x2eba,	// (0x00019619) bg_button_pane_cp028

0xe1e6,	// (0x00024945) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe1e6,	// (0x00024945) cmail_ddmenu_btn01_pane_g1

0xe1f8,	// (0x00024957) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe1f8,	// (0x00024957) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x00026489) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x00026489) cmail_ddmenu_btn01_pane_g

0x567f,	// (0x0001bdde) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x567f,	// (0x0001bdde) cmail_ddmenu_btn01_pane_t1

0x1a46,	// (0x000181a5) bg_button_pane_cp029_ParamLimits

0x1a46,	// (0x000181a5) bg_button_pane_cp029

0xe204,	// (0x00024963) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe204,	// (0x00024963) cmail_ddmenu_btn02_pane_g1

0xe21c,	// (0x0002497b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe21c,	// (0x0002497b) cmail_ddmenu_btn02_pane_t1

0x0c9f,	// (0x000173fe) bg_button_pane_cp031_ParamLimits

0x0c9f,	// (0x000173fe) bg_button_pane_cp031

0xe204,	// (0x00024963) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe204,	// (0x00024963) cmail_ddmenu_btn03_pane_g1

0xe21c,	// (0x0002497b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe21c,	// (0x0002497b) cmail_ddmenu_btn03_pane_t1

0xbd6e,	// (0x000224cd) cell_dialer2_keypad_pane_t1_ParamLimits

0xbd88,	// (0x000224e7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbd88,	// (0x000224e7) cell_dialer2_keypad_pane_t1_copy1

0xd218,	// (0x00023977) ncimui_group_button_pane

0x0581,	// (0x00016ce0) main_sp_fs_calendar_pane_ParamLimits

0xde5b,	// (0x000245ba) list_single_cmail_header_caption_pane_ParamLimits

0x53fe,	// (0x0001bb5d) aid_recal_txt_sm_pane

0x050c,	// (0x00016c6b) mian_recal_day_pane

0x5440,	// (0x0001bb9f) popup_sp_fs_cale_preview_window_ParamLimits

0x5695,	// (0x0001bdf4) list_recal_day_pane

0x56d8,	// (0x0001be37) list_single_recal_day_pane_ParamLimits

0x56d8,	// (0x0001be37) list_single_recal_day_pane

0x56ea,	// (0x0001be49) list_single_recal_day_pane_g1_ParamLimits

0x56ea,	// (0x0001be49) list_single_recal_day_pane_g1

0x56f6,	// (0x0001be55) list_single_recal_day_pane_g2_ParamLimits

0x56f6,	// (0x0001be55) list_single_recal_day_pane_g2

0x5702,	// (0x0001be61) list_single_recal_day_pane_g3_ParamLimits

0x5702,	// (0x0001be61) list_single_recal_day_pane_g3

0xe240,	// (0x0002499f) list_single_recal_day_pane_g4_ParamLimits

0xe240,	// (0x0002499f) list_single_recal_day_pane_g4

0x570e,	// (0x0001be6d) list_single_recal_day_pane_g5_ParamLimits

0x570e,	// (0x0001be6d) list_single_recal_day_pane_g5

0x571a,	// (0x0001be79) list_single_recal_day_pane_g6_ParamLimits

0x571a,	// (0x0001be79) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x00026498) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x00026498) list_single_recal_day_pane_g

0x572e,	// (0x0001be8d) list_single_recal_day_pane_t1

0x5740,	// (0x0001be9f) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x000264a3) list_single_recal_day_pane_t

0xe258,	// (0x000249b7) ncimui_query_button_pane_ParamLimits

0xe258,	// (0x000249b7) ncimui_query_button_pane

0xe268,	// (0x000249c7) ncimui_query_button_pane_t1_ParamLimits

0xe268,	// (0x000249c7) ncimui_query_button_pane_t1

0x5752,	// (0x0001beb1) ncimui_query_button_pane_t2_ParamLimits

0x5752,	// (0x0001beb1) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x000264a8) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x000264a8) ncimui_query_button_pane_t

0xe27b,	// (0x000249da) query_button_pane_ParamLimits

0xe27b,	// (0x000249da) query_button_pane

0x050c,	// (0x00016c6b) bg_button_pane_cp0028

0x5765,	// (0x0001bec4) query_button_pane_t1

0x739f,	// (0x0001dafe) main_tport_pane_ParamLimits

0xdd3e,	// (0x0002449d) bg_popup_window_pane_cp01_ParamLimits

0xdd3e,	// (0x0002449d) bg_popup_window_pane_cp01

0xdd4c,	// (0x000244ab) heading_pane_cp08_ParamLimits

0xdd4c,	// (0x000244ab) heading_pane_cp08

0xdd5a,	// (0x000244b9) heading_pane_cp07_ParamLimits

0xdd5a,	// (0x000244b9) heading_pane_cp07

0xddca,	// (0x00024529) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x000263f4) cell_tport_appsw_pane_g

0x1ae3,	// (0x00018242) input_candi_list_open_g1

0x13af,	// (0x00017b0e) list_cale_time_pane_g6_ParamLimits

0x13af,	// (0x00017b0e) list_cale_time_pane_g6

0xb0f9,	// (0x00021858) aid_size_touch_calib_1_ParamLimits

0xb0f9,	// (0x00021858) aid_size_touch_calib_1

0xb105,	// (0x00021864) aid_size_touch_calib_2_ParamLimits

0xb105,	// (0x00021864) aid_size_touch_calib_2

0xb113,	// (0x00021872) aid_size_touch_calib_3_ParamLimits

0xb113,	// (0x00021872) aid_size_touch_calib_3

0xb123,	// (0x00021882) aid_size_touch_calib_4_ParamLimits

0xb123,	// (0x00021882) aid_size_touch_calib_4

0xb131,	// (0x00021890) main_touch_calib_button_group_pane_ParamLimits

0xb131,	// (0x00021890) main_touch_calib_button_group_pane

0xb13f,	// (0x0002189e) main_touch_calib_pane_g1_ParamLimits

0xb14b,	// (0x000218aa) main_touch_calib_pane_g2_ParamLimits

0xb157,	// (0x000218b6) main_touch_calib_pane_g3_ParamLimits

0xb163,	// (0x000218c2) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x00025e3d) main_touch_calib_pane_g_ParamLimits

0xb16f,	// (0x000218ce) main_touch_calib_pane_t1_ParamLimits

0xb186,	// (0x000218e5) main_touch_calib_pane_t2_ParamLimits

0xb19f,	// (0x000218fe) main_touch_calib_pane_t3_ParamLimits

0xb1b5,	// (0x00021914) main_touch_calib_pane_t4_ParamLimits

0xb1cb,	// (0x0002192a) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x00025e46) main_touch_calib_pane_t_ParamLimits

0x352e,	// (0x00019c8d) list_single_fp_cale_pane_g3_ParamLimits

0x352e,	// (0x00019c8d) list_single_fp_cale_pane_g3

0x7377,	// (0x0001dad6) bg_button_pane_cp012_ParamLimits

0x7377,	// (0x0001dad6) bg_vkb2_func_pane_cp03_ParamLimits

0x819d,	// (0x0001e8fc) cell_vitu2_function_top_pane_g1_ParamLimits

0x7377,	// (0x0001dad6) bg_vkb2_func_pane_cp04_ParamLimits

0xd19e,	// (0x000238fd) main_ncimui_button_group_pane_ParamLimits

0xd19e,	// (0x000238fd) main_ncimui_button_group_pane

0xd206,	// (0x00023965) main_ncimui_pane_t3_ParamLimits

0xd206,	// (0x00023965) main_ncimui_pane_t3

0x5361,	// (0x0001bac0) phacti_button_group_pane

0x5663,	// (0x0001bdc2) aid_size_list_single_double_ParamLimits

0xe1b6,	// (0x00024915) popup_ezdial_listscroll_window_ParamLimits

0xe1d8,	// (0x00024937) popup_number_entry_window_cp01_ParamLimits

0xe288,	// (0x000249e7) phacti_button_pane_ParamLimits

0xe288,	// (0x000249e7) phacti_button_pane

0x050c,	// (0x00016c6b) bg_button_pane_cp14

0x5773,	// (0x0001bed2) phacti_button_pane_t1

0xe299,	// (0x000249f8) main_touch_calib_button_pane_ParamLimits

0xe299,	// (0x000249f8) main_touch_calib_button_pane

0x0d41,	// (0x000174a0) bg_button_pane_cp18_ParamLimits

0x0d41,	// (0x000174a0) bg_button_pane_cp18

0x5781,	// (0x0001bee0) main_touch_calib_button_pane_t1_ParamLimits

0x5781,	// (0x0001bee0) main_touch_calib_button_pane_t1

0x5797,	// (0x0001bef6) main_touch_calib_button_pane_t2_ParamLimits

0x5797,	// (0x0001bef6) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x000264ad) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x000264ad) main_touch_calib_button_pane_t

0x050c,	// (0x00016c6b) cell_ncimui_button_pane

0x050c,	// (0x00016c6b) bg_button_pane_cp032

0x57b5,	// (0x0001bf14) cell_ncimui_button_pane_t1

0x7a13,	// (0x0001e172) image3_infobar_pane_ParamLimits

0x7a13,	// (0x0001e172) image3_infobar_pane

0xd5d7,	// (0x00023d36) fs_bigclock_status_pane_ParamLimits

0xd5d7,	// (0x00023d36) fs_bigclock_status_pane

0xd5e4,	// (0x00023d43) main_fs_bigclock_clock_pane_ParamLimits

0xd5e4,	// (0x00023d43) main_fs_bigclock_clock_pane

0xd600,	// (0x00023d5f) main_fs_bigclock_indi_pane_ParamLimits

0xd600,	// (0x00023d5f) main_fs_bigclock_indi_pane

0xd62e,	// (0x00023d8d) main_fs_bigclock_swipe_pane_ParamLimits

0xd62e,	// (0x00023d8d) main_fs_bigclock_swipe_pane

0x050c,	// (0x00016c6b) main_fs_clock_dumped_data

0xd668,	// (0x00023dc7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd668,	// (0x00023dc7) list_single_fs_bigclock_indicator_pane_g1

0xd687,	// (0x00023de6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd687,	// (0x00023de6) list_single_fs_bigclock_indicator_pane_g2

0xd6a1,	// (0x00023e00) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd6a1,	// (0x00023e00) list_single_fs_bigclock_indicator_pane_g3

0xd6bd,	// (0x00023e1c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd6bd,	// (0x00023e1c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x0002634e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x0002634e) list_single_fs_bigclock_indicator_pane_g

0xd6ec,	// (0x00023e4b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd6ec,	// (0x00023e4b) list_single_fs_bigclock_indicator_pane_t1

0xd714,	// (0x00023e73) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd714,	// (0x00023e73) list_single_fs_bigclock_indicator_pane_t2

0xd73c,	// (0x00023e9b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd73c,	// (0x00023e9b) list_single_fs_bigclock_indicator_pane_t3

0xd764,	// (0x00023ec3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd764,	// (0x00023ec3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x00026359) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x00026359) list_single_fs_bigclock_indicator_pane_t

0x57c3,	// (0x0001bf22) image3_infobar_fav_pane_ParamLimits

0x57c3,	// (0x0001bf22) image3_infobar_fav_pane

0x57d3,	// (0x0001bf32) image3_infobar_loc_pane_ParamLimits

0x57d3,	// (0x0001bf32) image3_infobar_loc_pane

0x57e9,	// (0x0001bf48) image3_infobar_time_pane_ParamLimits

0x57e9,	// (0x0001bf48) image3_infobar_time_pane

0x0fa9,	// (0x00017708) image3_infobar_time_pane_g1

0x57f9,	// (0x0001bf58) image3_infobar_time_pane_t1

0x0fa9,	// (0x00017708) image3_infobar_loc_pane_g1

0x5807,	// (0x0001bf66) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x000264b2) image3_infobar_loc_pane_g

0x580f,	// (0x0001bf6e) image3_infobar_loc_pane_t1

0x0fa9,	// (0x00017708) image3_infobar_fav_pane_g1

0x581d,	// (0x0001bf7c) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x000264b7) image3_infobar_fav_pane_g

0x5825,	// (0x0001bf84) fs_bigclock_status_battery_pane

0x582e,	// (0x0001bf8d) fs_bigclock_status_signal_pane

0x5837,	// (0x0001bf96) fs_bigclock_status_title_pane

0x5840,	// (0x0001bf9f) fs_bigclock_status_signal_pane_g1

0x5849,	// (0x0001bfa8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x000264bc) fs_bigclock_status_signal_pane_g

0x5851,	// (0x0001bfb0) fs_bigclock_status_battery_pane_g1

0x585a,	// (0x0001bfb9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x000264c1) fs_bigclock_status_battery_pane_g

0x5862,	// (0x0001bfc1) fs_bigclock_status_title_pane_t1

0xe2a9,	// (0x00024a08) main_fs_bigclock_clock_pane_g1

0xe2a9,	// (0x00024a08) main_fs_bigclock_clock_pane_g2

0xe2b8,	// (0x00024a17) main_fs_bigclock_clock_pane_g3

0xe2b8,	// (0x00024a17) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x000264c6) main_fs_bigclock_clock_pane_g

0xe2c8,	// (0x00024a27) main_fs_bigclock_clock_pane_t1

0xe2dd,	// (0x00024a3c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x000264cf) main_fs_bigclock_clock_pane_t

0x5870,	// (0x0001bfcf) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5870,	// (0x0001bfcf) list_single_fs_bigclock_indicator_pane

0x5881,	// (0x0001bfe0) list_single_fs_bigclock_pane_ParamLimits

0x5881,	// (0x0001bfe0) list_single_fs_bigclock_pane

0x58a7,	// (0x0001c006) main_fs_bigclock_indicator_pane_t1

0x58b6,	// (0x0001c015) list_single_fs_bigclock_pane_g1

0x58be,	// (0x0001c01d) list_single_fs_bigclock_pane_t1

0x0fa9,	// (0x00017708) main_fs_bigclock_swipe_pane_g1

0x5901,	// (0x0001c060) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x000264e0) main_fs_bigclock_swipe_pane_g

0x5909,	// (0x0001c068) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5909,	// (0x0001c068) main_fs_bigclock_swipe_pane_t1

0x9fad,	// (0x0002070c) call_type_pane_ParamLimits

0x050c,	// (0x00016c6b) main_btmg_pane

0x553d,	// (0x0001bc9c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x553d,	// (0x0001bc9c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x00026453) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x00026453) list_single_cale_mrui_row_pane_g

0x56be,	// (0x0001be1d) list_recal_vselct_arw_lo_pane

0x56c6,	// (0x0001be25) list_recal_vselct_arw_up_pane

0x56ce,	// (0x0001be2d) list_recal_vselct_pane

0xe334,	// (0x00024a93) btmg_button_pane

0xe340,	// (0x00024a9f) main_btmg_pane_g1

0x050c,	// (0x00016c6b) bg_button_pane_cp044

0x5926,	// (0x0001c085) btmg_button_pane_t1

0x2d1a,	// (0x00019479) aid_listscroll_gen

0x0581,	// (0x00016ce0) main_cntbar_detail_pane

0x51f8,	// (0x0001b957) list_cmail_folder_pane

0x510e,	// (0x0001b86d) sp_fs_scroll_pane_cp03_ParamLimits

0x5934,	// (0x0001c093) list_single_fs_dyc_pane_cp01_ParamLimits

0x5934,	// (0x0001c093) list_single_fs_dyc_pane_cp01

0x5951,	// (0x0001c0b0) aid_size_cmail_indent

0x595a,	// (0x0001c0b9) list_single_dyc_row_pane_cp01

0xe368,	// (0x00024ac7) cntbar_detail_list_pane_ParamLimits

0xe368,	// (0x00024ac7) cntbar_detail_list_pane

0xe3a8,	// (0x00024b07) main_cntbar_detail_cont_pane_ParamLimits

0xe3a8,	// (0x00024b07) main_cntbar_detail_cont_pane

0x9fa1,	// (0x00020700) scroll_pane_cp032_ParamLimits

0x9fa1,	// (0x00020700) scroll_pane_cp032

0xe3b4,	// (0x00024b13) cntbar_detail_list_event_pane_ParamLimits

0xe3b4,	// (0x00024b13) cntbar_detail_list_event_pane

0xe376,	// (0x00024ad5) cntbar_detail_list_shct_pane

0x120c,	// (0x0001796b) aid_list_gen

0x5963,	// (0x0001c0c2) aid_scroll

0x596c,	// (0x0001c0cb) aid_size_touch_scroll_bar

0xe3c4,	// (0x00024b23) aid_list_double

0xe3cd,	// (0x00024b2c) aid_list_single

0xe3cd,	// (0x00024b2c) aid_list_single_lg

0xe3d6,	// (0x00024b35) aid_list_z_g_a_sm

0xe3de,	// (0x00024b3d) aid_list_z_g_d

0xe3e6,	// (0x00024b45) aid_txt_z_prm

0xe3f4,	// (0x00024b53) aid_txt_z_prm_cp01

0xe402,	// (0x00024b61) aid_txt_z_sec

0xe410,	// (0x00024b6f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe410,	// (0x00024b6f) main_cntbar_detail_cont_pane_g1

0xe41d,	// (0x00024b7c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe41d,	// (0x00024b7c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x000264e5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x000264e5) main_cntbar_detail_cont_pane_g

0x5975,	// (0x0001c0d4) main_cntbar_detail_cont_pane_t1

0x5983,	// (0x0001c0e2) main_cntbar_detail_cont_pane_t2

0x5991,	// (0x0001c0f0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x000264ea) main_cntbar_detail_cont_pane_t

0xe429,	// (0x00024b88) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe429,	// (0x00024b88) cell_cntbar_detail_list_shct_pane

0x599f,	// (0x0001c0fe) cntbar_detail_list_shct_pane_g1

0x59a8,	// (0x0001c107) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x000264f1) cntbar_detail_list_shct_pane_g

0xe43d,	// (0x00024b9c) cntbar_detail_list_event_pane_g1_ParamLimits

0xe43d,	// (0x00024b9c) cntbar_detail_list_event_pane_g1

0xe449,	// (0x00024ba8) cntbar_detail_list_event_pane_g2_ParamLimits

0xe449,	// (0x00024ba8) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x000264f6) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x000264f6) cntbar_detail_list_event_pane_g

0xe4b7,	// (0x00024c16) cntbar_detail_list_event_pane_t1_ParamLimits

0xe4b7,	// (0x00024c16) cntbar_detail_list_event_pane_t1

0xe4cc,	// (0x00024c2b) cntbar_detail_list_event_pane_t2_ParamLimits

0xe4cc,	// (0x00024c2b) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x00026503) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x00026503) cntbar_detail_list_event_pane_t

0x0fa9,	// (0x00017708) cell_cntbar_detail_list_shct_pane_g1

0xa2d6,	// (0x00020a35) navi_pane_mv_g3

0x0581,	// (0x00016ce0) main_cntbar_detail_pane_ParamLimits

0x050c,	// (0x00016c6b) main_notif_wgt_pane

0x7722,	// (0x0001de81) aid_tch_main_mp4_pane_g4

0x798b,	// (0x0001e0ea) popup_slider_window_cp02

0x56b4,	// (0x0001be13) list_recal_day_event_pane

0xe348,	// (0x00024aa7) cntbar_detail_btn_pane_ParamLimits

0xe348,	// (0x00024aa7) cntbar_detail_btn_pane

0xe358,	// (0x00024ab7) cntbar_detail_btn_pane_cp01_ParamLimits

0xe358,	// (0x00024ab7) cntbar_detail_btn_pane_cp01

0xe376,	// (0x00024ad5) cntbar_detail_list_shct_pane_ParamLimits

0xe382,	// (0x00024ae1) cntbar_detail_pane_g1_ParamLimits

0xe382,	// (0x00024ae1) cntbar_detail_pane_g1

0xe392,	// (0x00024af1) cntbar_detail_pane_t1_ParamLimits

0xe392,	// (0x00024af1) cntbar_detail_pane_t1

0xe455,	// (0x00024bb4) cntbar_detail_list_event_pane_g3_ParamLimits

0xe455,	// (0x00024bb4) cntbar_detail_list_event_pane_g3

0xe46d,	// (0x00024bcc) cntbar_detail_list_event_pane_g4_ParamLimits

0xe46d,	// (0x00024bcc) cntbar_detail_list_event_pane_g4

0xe485,	// (0x00024be4) cntbar_detail_list_event_pane_g5_ParamLimits

0xe485,	// (0x00024be4) cntbar_detail_list_event_pane_g5

0xe49d,	// (0x00024bfc) cntbar_detail_list_event_pane_g6_ParamLimits

0xe49d,	// (0x00024bfc) cntbar_detail_list_event_pane_g6

0xe4e1,	// (0x00024c40) cntbar_detail_list_event_pane_t3_ParamLimits

0xe4e1,	// (0x00024c40) cntbar_detail_list_event_pane_t3

0xe4f3,	// (0x00024c52) popup_notif_wgt_window_ParamLimits

0xe4f3,	// (0x00024c52) popup_notif_wgt_window

0xe503,	// (0x00024c62) popup_submenu_window_cp01_ParamLimits

0xe503,	// (0x00024c62) popup_submenu_window_cp01

0x0f54,	// (0x000176b3) bg_popup_window_pane_cp10

0x59b1,	// (0x0001c110) listscroll_notif_wgt_pane

0x59c3,	// (0x0001c122) list_notif_wgt_window

0x59cc,	// (0x0001c12b) scroll_pane_cp033

0xe513,	// (0x00024c72) list_notif_wgt_row_pane_ParamLimits

0xe513,	// (0x00024c72) list_notif_wgt_row_pane

0x59d5,	// (0x0001c134) aid_size_list_notif_wgt_del

0x59e2,	// (0x0001c141) list_notif_wgt_row_pane_g1

0x59ee,	// (0x0001c14d) list_notif_wgt_row_pane_g2

0x59fd,	// (0x0001c15c) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x0002650a) list_notif_wgt_row_pane_g

0x5a0a,	// (0x0001c169) list_notif_wgt_row_pane_t1

0x5a20,	// (0x0001c17f) list_notif_wgt_row_pane_t2

0x5a32,	// (0x0001c191) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x00026511) list_notif_wgt_row_pane_t

0x41ba,	// (0x0001a919) list_recal_day_event_pane_g1

0x5a44,	// (0x0001c1a3) list_recal_day_event_pane_t1

0x050c,	// (0x00016c6b) bg_button_pane_cp045

0xe527,	// (0x00024c86) cntbar_detail_btn_pane_t1

0x1a46,	// (0x000181a5) main_callh_pane_ParamLimits

0x1a46,	// (0x000181a5) main_callh_pane

0x050c,	// (0x00016c6b) main_coverflow0_pane

0x050c,	// (0x00016c6b) main_wgtman_pane

0xd646,	// (0x00023da5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd646,	// (0x00023da5) main_fs_bigclock_unlock_btn_pane

0xddc2,	// (0x00024521) bg_button_pane_cp16

0xddd2,	// (0x00024531) cell_tport_appsw_pane_g3

0xe535,	// (0x00024c94) cf0_flow_pane_ParamLimits

0xe535,	// (0x00024c94) cf0_flow_pane

0x5a53,	// (0x0001c1b2) listscroll_cf0_pane

0x5a5e,	// (0x0001c1bd) main_cf0_pane_g1

0xe544,	// (0x00024ca3) main_cf0_pane_t1_ParamLimits

0xe544,	// (0x00024ca3) main_cf0_pane_t1

0xe558,	// (0x00024cb7) main_cf0_pane_t2_ParamLimits

0xe558,	// (0x00024cb7) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x0002651d) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x0002651d) main_cf0_pane_t

0x5a70,	// (0x0001c1cf) scroll_pane_cp11

0xe56c,	// (0x00024ccb) cf0_flow_pane_g1

0xe574,	// (0x00024cd3) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x00026522) cf0_flow_pane_g

0xe57c,	// (0x00024cdb) cf0_flow_pane_t1

0x050c,	// (0x00016c6b) main_call6_pane

0x050c,	// (0x00016c6b) main_calllock_pane

0x83d1,	// (0x0001eb30) call6_btn_grp_pane_ParamLimits

0x83d1,	// (0x0001eb30) call6_btn_grp_pane

0x83de,	// (0x0001eb3d) call6_pane_g1_ParamLimits

0x83de,	// (0x0001eb3d) call6_pane_g1

0x83ee,	// (0x0001eb4d) popup_call6_1st_window_ParamLimits

0x83ee,	// (0x0001eb4d) popup_call6_1st_window

0x83fe,	// (0x0001eb5d) popup_call6_2nd_window_ParamLimits

0x83fe,	// (0x0001eb5d) popup_call6_2nd_window

0x840e,	// (0x0001eb6d) cell_call6_btn_pane_ParamLimits

0x840e,	// (0x0001eb6d) cell_call6_btn_pane

0x0f54,	// (0x000176b3) bg_popup_call2_in_pane_cp03

0x5a7b,	// (0x0001c1da) popup_call6_1st_window_g1

0x5a83,	// (0x0001c1e2) popup_call6_1st_window_g2

0x5a8b,	// (0x0001c1ea) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x00026527) popup_call6_1st_window_g

0x5a93,	// (0x0001c1f2) popup_call6_1st_window_t1

0x5aa2,	// (0x0001c201) popup_call6_1st_window_t2

0x5ab2,	// (0x0001c211) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x0002652e) popup_call6_1st_window_t

0x0f54,	// (0x000176b3) bg_popup_call2_in_pane_cp04

0x5ac2,	// (0x0001c221) popup_call6_2nd_window_g1

0x5aca,	// (0x0001c229) popup_call6_2nd_window_g2

0x5ad2,	// (0x0001c231) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x00026535) popup_call6_2nd_window_g

0x5ada,	// (0x0001c239) popup_call6_2nd_window_t1

0x6ead,	// (0x0001d60c) bg_button_pane_cp15

0x841f,	// (0x0001eb7e) cell_call6_btn_pane_g1

0x8428,	// (0x0001eb87) cell_call6_btn_pane_t1

0xe58a,	// (0x00024ce9) listscroll_wgtman_pane_ParamLimits

0xe58a,	// (0x00024ce9) listscroll_wgtman_pane

0xe5a6,	// (0x00024d05) wgtman_btn_pane_ParamLimits

0xe5a6,	// (0x00024d05) wgtman_btn_pane

0x180d,	// (0x00017f6c) aid_scroll_copy1

0x5b01,	// (0x0001c260) list_wgtman_pane

0xe5db,	// (0x00024d3a) wgtman_btn_pane_g1_ParamLimits

0xe5db,	// (0x00024d3a) wgtman_btn_pane_g1

0xe603,	// (0x00024d62) wgtman_btn_pane_t1_ParamLimits

0xe603,	// (0x00024d62) wgtman_btn_pane_t1

0x5b0b,	// (0x0001c26a) wgtman_btn_pane_t2_ParamLimits

0x5b0b,	// (0x0001c26a) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x0002653c) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x0002653c) wgtman_btn_pane_t

0xe63a,	// (0x00024d99) listrow_wgtman_pane_ParamLimits

0xe63a,	// (0x00024d99) listrow_wgtman_pane

0xe651,	// (0x00024db0) listrow_wgtman_pane_g1

0xe65e,	// (0x00024dbd) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x00026541) listrow_wgtman_pane_g

0xe67c,	// (0x00024ddb) listrow_wgtman_pane_t1

0xe694,	// (0x00024df3) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x00026546) listrow_wgtman_pane_t

0xe6ba,	// (0x00024e19) wait_bar_pane_cp09

0x5b67,	// (0x0001c2c6) main_calllock_btn_pane

0x5b71,	// (0x0001c2d0) main_calllock_pane_g1

0x050c,	// (0x00016c6b) bg_button_pane_cp17

0x5ae9,	// (0x0001c248) main_calllock_btn_pane_g1

0x5b7d,	// (0x0001c2dc) main_calllock_btn_pane_t1

0x050c,	// (0x00016c6b) main_dialer3_pane

0x050c,	// (0x00016c6b) main_fmrd2_pane

0x0fa9,	// (0x00017708) main_fs_bigclock_unlock_btn_pane_g1

0xe6d4,	// (0x00024e33) main_fs_bigclock_unlock_btn_pane_t1

0xe6e2,	// (0x00024e41) area_fmrd2_info_pane_ParamLimits

0xe6e2,	// (0x00024e41) area_fmrd2_info_pane

0xe6ee,	// (0x00024e4d) area_fmrd2_visual_pane_ParamLimits

0xe6ee,	// (0x00024e4d) area_fmrd2_visual_pane

0xe6fc,	// (0x00024e5b) fmrd2_indi_pane_ParamLimits

0xe6fc,	// (0x00024e5b) fmrd2_indi_pane

0xe709,	// (0x00024e68) area_fmrd2_visual_pane_g1

0xe711,	// (0x00024e70) area_fmrd2_visual_pane_t1

0xe721,	// (0x00024e80) area_fmrd2_visual_pane_t2

0xe731,	// (0x00024e90) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x00026550) area_fmrd2_visual_pane_t

0xe741,	// (0x00024ea0) area_fmrd2_info_pane_g1

0xe749,	// (0x00024ea8) area_fmrd2_info_pane_t1

0xe759,	// (0x00024eb8) area_fmrd2_info_pane_t2

0xe769,	// (0x00024ec8) area_fmrd2_info_pane_t3

0xe779,	// (0x00024ed8) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x00026557) area_fmrd2_info_pane_t

0xe789,	// (0x00024ee8) fmrd2_indi_pane_t1

0xe799,	// (0x00024ef8) fmrd2_indi_pane_t2

0xe7a9,	// (0x00024f08) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x00026560) fmrd2_indi_pane_t

0xd6ce,	// (0x00023e2d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd6ce,	// (0x00023e2d) list_single_fs_bigclock_indicator_pane_g5

0xd783,	// (0x00023ee2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd783,	// (0x00023ee2) list_single_fs_bigclock_indicator_pane_t5

0xdf2d,	// (0x0002468c) aid_cell_bcale_month_pane_ParamLimits

0xdf2d,	// (0x0002468c) aid_cell_bcale_month_pane

0xdf4b,	// (0x000246aa) bcale_month_pane_ParamLimits

0xdf4b,	// (0x000246aa) bcale_month_pane

0xdf69,	// (0x000246c8) bcale_preview_pane_ParamLimits

0xdf69,	// (0x000246c8) bcale_preview_pane

0x58be,	// (0x0001c01d) list_single_fs_bigclock_pane_t1_ParamLimits

0x58dd,	// (0x0001c03c) list_single_fs_bigclock_pane_t2_ParamLimits

0x58dd,	// (0x0001c03c) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x000264db) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x000264db) list_single_fs_bigclock_pane_t

0xe6cc,	// (0x00024e2b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x0002654b) main_fs_bigclock_unlock_btn_pane_g

0xe7b9,	// (0x00024f18) aid_dia3_key_size_ParamLimits

0xe7b9,	// (0x00024f18) aid_dia3_key_size

0xe7c5,	// (0x00024f24) aid_dia3_listrow_size_ParamLimits

0xe7c5,	// (0x00024f24) aid_dia3_listrow_size

0xe7d5,	// (0x00024f34) dia3_keypad_fun_pane_ParamLimits

0xe7d5,	// (0x00024f34) dia3_keypad_fun_pane

0xe7e5,	// (0x00024f44) dia3_keypad_num_pane_ParamLimits

0xe7e5,	// (0x00024f44) dia3_keypad_num_pane

0xe7f5,	// (0x00024f54) dia3_listscroll_pane_ParamLimits

0xe7f5,	// (0x00024f54) dia3_listscroll_pane

0xe803,	// (0x00024f62) dia3_numentry_pane_ParamLimits

0xe803,	// (0x00024f62) dia3_numentry_pane

0x5b8c,	// (0x0001c2eb) dia3_list_pane

0xe811,	// (0x00024f70) scroll_pane_cp12

0x050c,	// (0x00016c6b) bg_dia3_numentry_pane

0xe81c,	// (0x00024f7b) dia3_numentry_pane_t1

0xe82b,	// (0x00024f8a) cell_dia3_key_num_pane

0xe833,	// (0x00024f92) cell_dia3_key0_fun_pane_ParamLimits

0xe833,	// (0x00024f92) cell_dia3_key0_fun_pane

0xe840,	// (0x00024f9f) cell_dia3_key1_fun_pane_ParamLimits

0xe840,	// (0x00024f9f) cell_dia3_key1_fun_pane

0xe84d,	// (0x00024fac) dia3_listrow_pane

0x4bc9,	// (0x0001b328) bg_dia3_numentry_pane_g1

0x050c,	// (0x00016c6b) bg_button_pane_cp21

0xe85a,	// (0x00024fb9) cell_dia3_key_num_pane_t1

0xe868,	// (0x00024fc7) cell_dia3_key_num_pane_t2

0xe877,	// (0x00024fd6) cell_dia3_key_num_pane_t3

0xe886,	// (0x00024fe5) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x00026567) cell_dia3_key_num_pane_t

0x050c,	// (0x00016c6b) bg_button_pane_cp19

0xe895,	// (0x00024ff4) cell_dia3_key0_fun_pane_g1

0x050c,	// (0x00016c6b) bg_button_pane_cp20

0xe89d,	// (0x00024ffc) cell_dia3_key1_fun_pane_g1

0xe8a5,	// (0x00025004) area_left_week_number_pane

0xe8b8,	// (0x00025017) area_top_day_name_pane

0xe8c6,	// (0x00025025) frame_month_view_pane

0x5b97,	// (0x0001c2f6) grid_month_view_pane

0xe8db,	// (0x0002503a) cell_top_day_name_pane_ParamLimits

0xe8db,	// (0x0002503a) cell_top_day_name_pane

0xe8f7,	// (0x00025056) cell_area_left_week_number_pane_ParamLimits

0xe8f7,	// (0x00025056) cell_area_left_week_number_pane

0xe918,	// (0x00025077) cell_month_view_pane_ParamLimits

0xe918,	// (0x00025077) cell_month_view_pane

0x5ba5,	// (0x0001c304) frm_month_g1

0xe944,	// (0x000250a3) frm_month_g2

0xe955,	// (0x000250b4) frm_month_g3

0xe966,	// (0x000250c5) frm_month_g4

0xe977,	// (0x000250d6) frm_month_g5

0xe988,	// (0x000250e7) frm_month_g6

0xe99b,	// (0x000250fa) frm_month_g7

0x5bb2,	// (0x0001c311) frm_month_g8

0xe9ae,	// (0x0002510d) frm_month_g9

0xe9bb,	// (0x0002511a) frm_month_g10

0xe9c8,	// (0x00025127) frm_month_g11

0xe9d5,	// (0x00025134) frm_month_g12

0xe9e2,	// (0x00025141) frm_month_g13

0xe9f1,	// (0x00025150) frm_month_g14

0xea00,	// (0x0002515f) frm_month_g15

0xea0f,	// (0x0002516e) frm_month_g16

0x000f,

0xfe11,	// (0x00026570) frm_month_g

0x5bbf,	// (0x0001c31e) cell_top_day_name_pane_t1

0xea1e,	// (0x0002517d) cell_area_left_week_number_pane_g1

0xea2d,	// (0x0002518c) cell_area_left_week_number_pane_t1

0x0cad,	// (0x0001740c) cell_month_view_pane_g1

0xea43,	// (0x000251a2) cell_month_view_pane_t1

0x050c,	// (0x00016c6b) main_fps_pane

0x5006,	// (0x0001b765) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5006,	// (0x0001b765) cmail_ddmenu_btn02_pane_cp1

0x5022,	// (0x0001b781) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5022,	// (0x0001b781) cmail_ddmenu_btn02_pane_cp2

0xe210,	// (0x0002496f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe210,	// (0x0002496f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x0002648e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x0002648e) cmail_ddmenu_btn02_pane_g

0xe22e,	// (0x0002498d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe22e,	// (0x0002498d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x00026493) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x00026493) cmail_ddmenu_btn02_pane_t

0xea59,	// (0x000251b8) fps_text_pane_ParamLimits

0xea59,	// (0x000251b8) fps_text_pane

0xea66,	// (0x000251c5) main_fps_pane_g1_ParamLimits

0xea66,	// (0x000251c5) main_fps_pane_g1

0xea72,	// (0x000251d1) wait_bar_pane_cp010_ParamLimits

0xea72,	// (0x000251d1) wait_bar_pane_cp010

0xea7e,	// (0x000251dd) fps_text_pane_t1_ParamLimits

0xea7e,	// (0x000251dd) fps_text_pane_t1

0xbe7d,	// (0x000225dc) cam4_image_uncrop_pane_g1

0xbe86,	// (0x000225e5) cam4_image_uncrop_pane_g2

0xbe8f,	// (0x000225ee) cam4_image_uncrop_pane_g3

0xbe98,	// (0x000225f7) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x00025fd9) cam4_image_uncrop_pane_g

0xe84d,	// (0x00024fac) dia3_listrow_pane_ParamLimits

0x050c,	// (0x00016c6b) main_phob2_pane

0xdda4,	// (0x00024503) cell_tport_appsw_pane_cp02_ParamLimits

0xdda4,	// (0x00024503) cell_tport_appsw_pane_cp02

0xddb3,	// (0x00024512) cell_tport_appsw_pane_cp03_ParamLimits

0xddb3,	// (0x00024512) cell_tport_appsw_pane_cp03

0x050c,	// (0x00016c6b) phob2_contact_card_pane

0x050c,	// (0x00016c6b) phob2_listscroll_pane

0x5bd2,	// (0x0001c331) phob2_list_pane

0x5bda,	// (0x0001c339) scroll_pane_cp034

0xea97,	// (0x000251f6) phob2_cc_data_pane_ParamLimits

0xea97,	// (0x000251f6) phob2_cc_data_pane

0xeaae,	// (0x0002520d) phob2_cc_listscroll_pane_ParamLimits

0xeaae,	// (0x0002520d) phob2_cc_listscroll_pane

0xe63a,	// (0x00024d99) list_double_large_graphic_phob2_pane_ParamLimits

0xe63a,	// (0x00024d99) list_double_large_graphic_phob2_pane

0xeaca,	// (0x00025229) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeaca,	// (0x00025229) list_double_large_graphic_phob2_pane_g1

0xead7,	// (0x00025236) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xead7,	// (0x00025236) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x00026591) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x00026591) list_double_large_graphic_phob2_pane_g

0xeafd,	// (0x0002525c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xeafd,	// (0x0002525c) list_double_large_graphic_phob2_pane_t1

0xeb12,	// (0x00025271) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xeb12,	// (0x00025271) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x0002659a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x0002659a) list_double_large_graphic_phob2_pane_t

0x050c,	// (0x00016c6b) list_highlight_pane_cp024

0xeb27,	// (0x00025286) phob2_cc_button_pane

0xeb2f,	// (0x0002528e) phob2_cc_data_pane_g1_ParamLimits

0xeb2f,	// (0x0002528e) phob2_cc_data_pane_g1

0xeb44,	// (0x000252a3) phob2_cc_data_pane_g2_ParamLimits

0xeb44,	// (0x000252a3) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x0002659f) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x0002659f) phob2_cc_data_pane_g

0xeb54,	// (0x000252b3) phob2_cc_data_pane_t1_ParamLimits

0xeb54,	// (0x000252b3) phob2_cc_data_pane_t1

0xeb6d,	// (0x000252cc) phob2_cc_data_pane_t2_ParamLimits

0xeb6d,	// (0x000252cc) phob2_cc_data_pane_t2

0xeb86,	// (0x000252e5) phob2_cc_data_pane_t3_ParamLimits

0xeb86,	// (0x000252e5) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x000265a4) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x000265a4) phob2_cc_data_pane_t

0x5be2,	// (0x0001c341) phob2_cc_list_pane_ParamLimits

0x5be2,	// (0x0001c341) phob2_cc_list_pane

0x4263,	// (0x0001a9c2) scroll_pane_cp035_ParamLimits

0x4263,	// (0x0001a9c2) scroll_pane_cp035

0x0581,	// (0x00016ce0) bg_button_pane_cp033

0x5bee,	// (0x0001c34d) phob2_cc_button_pane_g1

0x5bfa,	// (0x0001c359) phob2_cc_button_pane_t1

0x5c0f,	// (0x0001c36e) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x000265ab) phob2_cc_button_pane_t

0xeb9f,	// (0x000252fe) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xeb9f,	// (0x000252fe) list_double_large_graphic_phob2_cc_pane

0xebee,	// (0x0002534d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xebee,	// (0x0002534d) list_double_large_graphic_phob2_cc_pane_g1

0xebff,	// (0x0002535e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xebff,	// (0x0002535e) list_double_large_graphic_phob2_cc_pane_g2

0xec0e,	// (0x0002536d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xec0e,	// (0x0002536d) list_double_large_graphic_phob2_cc_pane_g3

0xec1d,	// (0x0002537c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xec1d,	// (0x0002537c) list_double_large_graphic_phob2_cc_pane_g4

0xec2e,	// (0x0002538d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xec2e,	// (0x0002538d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x000265b0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x000265b0) list_double_large_graphic_phob2_cc_pane_g

0xec3d,	// (0x0002539c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xec3d,	// (0x0002539c) list_double_large_graphic_phob2_cc_pane_t1

0xec66,	// (0x000253c5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xec66,	// (0x000253c5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x000265bb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x000265bb) list_double_large_graphic_phob2_cc_pane_t

0x5c21,	// (0x0001c380) list_highlight_pane_cp025_ParamLimits

0x5c21,	// (0x0001c380) list_highlight_pane_cp025

0x0581,	// (0x00016ce0) bg_button_pane_cp033_ParamLimits

0x5bee,	// (0x0001c34d) phob2_cc_button_pane_g1_ParamLimits

0x5bfa,	// (0x0001c359) phob2_cc_button_pane_t1_ParamLimits

0x5c0f,	// (0x0001c36e) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x000265ab) phob2_cc_button_pane_t_ParamLimits

0x84aa,	// (0x0001ec09) popup_wgtman_window

0x403c,	// (0x0001a79b) scroll_pane_cp038

0xe5c3,	// (0x00024d22) wgtman_btn_pane_cp_01_ParamLimits

0xe5c3,	// (0x00024d22) wgtman_btn_pane_cp_01

0x5c2f,	// (0x0001c38e) wgtman_content_pane

0x5c38,	// (0x0001c397) wgtman_heading_pane

0x050c,	// (0x00016c6b) bg_heading_pane_cp02

0x5c41,	// (0x0001c3a0) wgtman_heading_pane_g1

0x5c49,	// (0x0001c3a8) wgtman_heading_pane_t1

0x5c57,	// (0x0001c3b6) scroll_pane_cp036

0x5c5f,	// (0x0001c3be) wgtman_list_pane

0x5b4d,	// (0x0001c2ac) wgtman_list_pane_t1_ParamLimits

0x5b4d,	// (0x0001c2ac) wgtman_list_pane_t1

0x7c40,	// (0x0001e39f) cam4_grid_pane

0xc5f6,	// (0x00022d55) bg_button_pane_cp015_ParamLimits

0xc608,	// (0x00022d67) bg_button_pane_cp016_ParamLimits

0xc61b,	// (0x00022d7a) bg_button_pane_cp017_ParamLimits

0xc671,	// (0x00022dd0) popup_vitu2_query_window_g3_ParamLimits

0xc671,	// (0x00022dd0) popup_vitu2_query_window_g3

0xc730,	// (0x00022e8f) popup_vitu2_query_window_t6_ParamLimits

0xc730,	// (0x00022e8f) popup_vitu2_query_window_t6

0xc75b,	// (0x00022eba) popup_vitu2_query_window_t7_ParamLimits

0xc75b,	// (0x00022eba) popup_vitu2_query_window_t7

0x5b39,	// (0x0001c298) cam4_grid_pane_g1

0x5b42,	// (0x0001c2a1) cam4_grid_pane_g2

0x5c67,	// (0x0001c3c6) cam4_grid_pane_g3

0x5c70,	// (0x0001c3cf) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x000265c0) cam4_grid_pane_g

0x8e40,	// (0x0001f59f) aid_placing_vt_slider_lsc_ParamLimits

0x9173,	// (0x0001f8d2) vidtel_button_pane_ParamLimits

0x9173,	// (0x0001f8d2) vidtel_button_pane

0x050c,	// (0x00016c6b) bg_button_pane_cp034

0x5c7b,	// (0x0001c3da) vidtel_button_pane_g1

0x5c83,	// (0x0001c3e2) vidtel_button_pane_t1

0x416e,	// (0x0001a8cd) aid_size_vtel_slider_touch

0x4263,	// (0x0001a9c2) scroll_pane_cp039

0xd375,	// (0x00023ad4) ncim_query_button_pane_cp01_ParamLimits

0xd394,	// (0x00023af3) ncimui_query_pane_g1_ParamLimits

0x0581,	// (0x00016ce0) input_focus_pane_cp012_ParamLimits

0x4c07,	// (0x0001b366) ncim_query_entry_pane_t1_ParamLimits

0x4263,	// (0x0001a9c2) scroll_pane_cp039_ParamLimits

0xa248,	// (0x000209a7) navi_pane_bcale_mc_g1

0xa250,	// (0x000209af) navi_pane_bcale_mc_t1

0x5058,	// (0x0001b7b7) main_sp_fs_email_pane_g1

0x5064,	// (0x0001b7c3) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x000263c3) main_sp_fs_email_pane_g

0x5549,	// (0x0001bca8) list_single_cale_mrui_row_pane_g3_ParamLimits

0x5549,	// (0x0001bca8) list_single_cale_mrui_row_pane_g3

0xe24e,	// (0x000249ad) list_single_recal_day_pane_g5_event_pane

0x5726,	// (0x0001be85) list_single_recal_day_pane_g7

0x5c99,	// (0x0001c3f8) list_recal_day_event_pane_cp01

0x5ca2,	// (0x0001c401) list_recal_vselct_arw_lo_pane_cp01

0x5caa,	// (0x0001c409) list_recal_vselct_arw_up_pane_cp01

0x5cb2,	// (0x0001c411) list_recal_vselct_pane_cp01

0x41ba,	// (0x0001a919) list_recal_day_event_pane_cp01_g1

0x5cbc,	// (0x0001c41b) list_recal_day_event_pane_cp01_t1

0x572e,	// (0x0001be8d) list_single_recal_day_pane_t1_ParamLimits

0x5740,	// (0x0001be9f) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x000264a3) list_single_recal_day_pane_t_ParamLimits

0x0c32,	// (0x00017391) bg_notes_pane_ParamLimits

0x0d05,	// (0x00017464) list_notes_pane_ParamLimits

0x859c,	// (0x0001ecfb) scroll_pane_cp06_ParamLimits

0x0d41,	// (0x000174a0) main_notes_pane_ParamLimits

0x0581,	// (0x00016ce0) main_welc_pane

0xec9e,	// (0x000253fd) main_welc_body_pane_ParamLimits

0xec9e,	// (0x000253fd) main_welc_body_pane

0xecb9,	// (0x00025418) main_welc_opti_pane_ParamLimits

0xecb9,	// (0x00025418) main_welc_opti_pane

0xed1a,	// (0x00025479) main_welc_pane_t1_ParamLimits

0xed1a,	// (0x00025479) main_welc_pane_t1

0xee40,	// (0x0002559f) main_welc_body_row_pane_ParamLimits

0xee40,	// (0x0002559f) main_welc_body_row_pane

0x0c9f,	// (0x000173fe) main_welc_opti_row_pane_ParamLimits

0x0c9f,	// (0x000173fe) main_welc_opti_row_pane

0x5cd2,	// (0x0001c431) main_welc_opti_row_pane_g1

0xee5a,	// (0x000255b9) main_welc_opti_row_pane_t1

0x5cda,	// (0x0001c439) main_welc_body_row_pane_t1

0x59bb,	// (0x0001c11a) popup_notif_wgt_heading_pane

0x59d5,	// (0x0001c134) aid_size_list_notif_wgt_del_ParamLimits

0x59e2,	// (0x0001c141) list_notif_wgt_row_pane_g1_ParamLimits

0x59ee,	// (0x0001c14d) list_notif_wgt_row_pane_g2_ParamLimits

0x59fd,	// (0x0001c15c) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x0002650a) list_notif_wgt_row_pane_g_ParamLimits

0x5a0a,	// (0x0001c169) list_notif_wgt_row_pane_t1_ParamLimits

0x5a20,	// (0x0001c17f) list_notif_wgt_row_pane_t2_ParamLimits

0x5a32,	// (0x0001c191) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x00026511) list_notif_wgt_row_pane_t_ParamLimits

0xe651,	// (0x00024db0) listrow_wgtman_pane_g1_ParamLimits

0xe65e,	// (0x00024dbd) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x00026541) listrow_wgtman_pane_g_ParamLimits

0xe67c,	// (0x00024ddb) listrow_wgtman_pane_t1_ParamLimits

0xe694,	// (0x00024df3) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x00026546) listrow_wgtman_pane_t_ParamLimits

0xe6ba,	// (0x00024e19) wait_bar_pane_cp09_ParamLimits

0x050c,	// (0x00016c6b) bg_popup_heading_pane_cp02

0x5ce9,	// (0x0001c448) popup_notif_wgt_heading_pane_g1

0x5cf1,	// (0x0001c450) popup_notif_wgt_heading_pane_t1

0x050c,	// (0x00016c6b) main_vids_pane

0x050c,	// (0x00016c6b) vids_listscroll_pane

0xee69,	// (0x000255c8) scroll_pane_cp040

0x050c,	// (0x00016c6b) vids_list_pane

0xee74,	// (0x000255d3) vids_list_double_pane_ParamLimits

0xee74,	// (0x000255d3) vids_list_double_pane

0xee88,	// (0x000255e7) vids_list_double_pane_g1

0xee91,	// (0x000255f0) vids_list_double_pane_t1

0xeea1,	// (0x00025600) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x000265df) vids_list_double_pane_t

0x7377,	// (0x0001dad6) main_ncimui_pane_ParamLimits

0xd1b6,	// (0x00023915) main_ncimui_pane_g1_ParamLimits

0xd1c4,	// (0x00023923) main_ncimui_pane_g2_ParamLimits

0xd1c4,	// (0x00023923) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x000262c4) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x000262c4) main_ncimui_pane_g

0xecd4,	// (0x00025433) main_welc_pane_g1_ParamLimits

0xecd4,	// (0x00025433) main_welc_pane_g1

0xece0,	// (0x0002543f) main_welc_pane_g2_ParamLimits

0xece0,	// (0x0002543f) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x000265c9) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x000265c9) main_welc_pane_g

0x0c32,	// (0x00017391) listscroll_mce_pane_ParamLimits

0xa312,	// (0x00020a71) wait_bar_pane_cp10

0x2d22,	// (0x00019481) main_cale_day_pane_ParamLimits

0x2d22,	// (0x00019481) main_cale_week_pane_ParamLimits

0x0c32,	// (0x00017391) main_messa_pane_ParamLimits

0xb93c,	// (0x0002209b) main_clock2_btn_pane_ParamLimits

0xb93c,	// (0x0002209b) main_clock2_btn_pane

0x35a8,	// (0x00019d07) main_clock2_btn_pane_cp01_ParamLimits

0x35a8,	// (0x00019d07) main_clock2_btn_pane_cp01

0x54d5,	// (0x0001bc34) list_cale_mrui_pane_ParamLimits

0x5a68,	// (0x0001c1c7) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x00026518) main_cf0_pane_g

0xe8a5,	// (0x00025004) area_left_week_number_pane_ParamLimits

0xe8b8,	// (0x00025017) area_top_day_name_pane_ParamLimits

0xe8c6,	// (0x00025025) frame_month_view_pane_ParamLimits

0x5b97,	// (0x0001c2f6) grid_month_view_pane_ParamLimits

0x5ba5,	// (0x0001c304) frm_month_g1_ParamLimits

0xe944,	// (0x000250a3) frm_month_g2_ParamLimits

0xe955,	// (0x000250b4) frm_month_g3_ParamLimits

0xe966,	// (0x000250c5) frm_month_g4_ParamLimits

0xe977,	// (0x000250d6) frm_month_g5_ParamLimits

0xe988,	// (0x000250e7) frm_month_g6_ParamLimits

0xe99b,	// (0x000250fa) frm_month_g7_ParamLimits

0x5bb2,	// (0x0001c311) frm_month_g8_ParamLimits

0xe9ae,	// (0x0002510d) frm_month_g9_ParamLimits

0xe9bb,	// (0x0002511a) frm_month_g10_ParamLimits

0xe9c8,	// (0x00025127) frm_month_g11_ParamLimits

0xe9d5,	// (0x00025134) frm_month_g12_ParamLimits

0xe9e2,	// (0x00025141) frm_month_g13_ParamLimits

0xe9f1,	// (0x00025150) frm_month_g14_ParamLimits

0xea00,	// (0x0002515f) frm_month_g15_ParamLimits

0xea0f,	// (0x0002516e) frm_month_g16_ParamLimits

0xfe11,	// (0x00026570) frm_month_g_ParamLimits

0x5bbf,	// (0x0001c31e) cell_top_day_name_pane_t1_ParamLimits

0xea1e,	// (0x0002517d) cell_area_left_week_number_pane_g1_ParamLimits

0xea2d,	// (0x0002518c) cell_area_left_week_number_pane_t1_ParamLimits

0x0cad,	// (0x0001740c) cell_month_view_pane_g1_ParamLimits

0xea43,	// (0x000251a2) cell_month_view_pane_t1_ParamLimits

0x0c2a,	// (0x00017389) main_clock2_btn_pane_g1

0x5cff,	// (0x0001c45e) main_clock2_btn_pane_t1

0x0581,	// (0x00016ce0) listscroll_cmail_pane_ParamLimits

0x5058,	// (0x0001b7b7) main_sp_fs_email_pane_g1_ParamLimits

0x5064,	// (0x0001b7c3) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x000263c3) main_sp_fs_email_pane_g_ParamLimits

0x5695,	// (0x0001bdf4) list_recal_day_pane_ParamLimits

0x56a6,	// (0x0001be05) mian_recal_day_pane_t1

0xdc89,	// (0x000243e8) list_single_dyc_row_text_pane_t4_ParamLimits

0xdc89,	// (0x000243e8) list_single_dyc_row_text_pane_t4

0xdcc8,	// (0x00024427) list_single_dyc_row_text_pane_t5_ParamLimits

0xdcc8,	// (0x00024427) list_single_dyc_row_text_pane_t5

0x511a,	// (0x0001b879) list_single_dyc_row_text_pane_t6_ParamLimits

0x511a,	// (0x0001b879) list_single_dyc_row_text_pane_t6

0x9ede,	// (0x0002063d) aid_mgn_list_cale_time_pane

0x7377,	// (0x0001dad6) main_gallery2_pane_ParamLimits

0x35bc,	// (0x00019d1b) main_clock2_pane_cp01_t1

0x35ca,	// (0x00019d29) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x00025eb0) main_clock2_pane_cp01_t

0x8977,	// (0x0001f0d6) cale_week_scroll_pane_g16_ParamLimits

0x8977,	// (0x0001f0d6) cale_week_scroll_pane_g16

0x0f54,	// (0x000176b3) vorec_slider_pane

0x5c83,	// (0x0001c3e2) vidtel_button_pane_t1_ParamLimits

0xe2a9,	// (0x00024a08) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe2a9,	// (0x00024a08) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe2b8,	// (0x00024a17) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe2b8,	// (0x00024a17) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x000264c6) main_fs_bigclock_clock_pane_g_ParamLimits

0xe2c8,	// (0x00024a27) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe2dd,	// (0x00024a3c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x000264cf) main_fs_bigclock_clock_pane_t_ParamLimits

0xb284,	// (0x000219e3) main_mup3_lyrics_pane_ParamLimits

0xb284,	// (0x000219e3) main_mup3_lyrics_pane

0xeeb1,	// (0x00025610) main_mup3_lyrics_pane_t1_ParamLimits

0xeeb1,	// (0x00025610) main_mup3_lyrics_pane_t1

0x770c,	// (0x0001de6b) aid_main_mp4_pane_t1_area

0x7716,	// (0x0001de75) aid_main_mp4_pane_t2_area

0x7823,	// (0x0001df82) main_mp4_pane_g7_ParamLimits

0x7823,	// (0x0001df82) main_mp4_pane_g7

0x782f,	// (0x0001df8e) main_mp4_pane_g8_ParamLimits

0x782f,	// (0x0001df8e) main_mp4_pane_g8

0xbdc3,	// (0x00022522) aid_call6_pane_g1_size

0xebcd,	// (0x0002532c) list_double_large_graphic_phob2_other_pane_ParamLimits

0xebcd,	// (0x0002532c) list_double_large_graphic_phob2_other_pane

0xeed8,	// (0x00025637) list_double_large_graphic_phob2_other_pane_g1

0x050c,	// (0x00016c6b) list_highlight_pane_cp026

0x0581,	// (0x00016ce0) main_welc_pane_ParamLimits

0xdaf2,	// (0x00024251) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xdaf2,	// (0x00024251) main_sp_fs_ctrlbar_pane_g3

0xdb0c,	// (0x0002426b) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xdb0c,	// (0x0002426b) main_sp_fs_ctrlbar_pane_g4

0xdb3e,	// (0x0002429d) toolbar2_fixed_button_pane_cp01

0xdb49,	// (0x000242a8) toolbar2_fixed_button_pane_cp02

0xdb56,	// (0x000242b5) toolbar2_fixed_button_pane_cp03

0xec8f,	// (0x000253ee) list_welc_entry_pane_ParamLimits

0xec8f,	// (0x000253ee) list_welc_entry_pane

0xecee,	// (0x0002544d) main_welc_pane_g3_ParamLimits

0xecee,	// (0x0002544d) main_welc_pane_g3

0xed38,	// (0x00025497) main_welc_pane_t2_ParamLimits

0xed38,	// (0x00025497) main_welc_pane_t2

0xed4c,	// (0x000254ab) main_welc_pane_t3_ParamLimits

0xed4c,	// (0x000254ab) main_welc_pane_t3

0x0005,

0xfe73,	// (0x000265d2) main_welc_pane_t_ParamLimits

0xfe73,	// (0x000265d2) main_welc_pane_t

0xedde,	// (0x0002553d) welc_button_pane_ParamLimits

0xedde,	// (0x0002553d) welc_button_pane

0xee32,	// (0x00025591) welc_service_logo_pane_ParamLimits

0xee32,	// (0x00025591) welc_service_logo_pane

0xeee0,	// (0x0002563f) list_single_welc_entry_pane_ParamLimits

0xeee0,	// (0x0002563f) list_single_welc_entry_pane

0xeef1,	// (0x00025650) list_single_welc_entry_pane_g1

0xeef9,	// (0x00025658) list_single_welc_entry_pane_t1

0xef07,	// (0x00025666) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x000265e4) list_single_welc_entry_pane_t

0x050c,	// (0x00016c6b) bg_button_pane_cp035

0x5d0d,	// (0x0001c46c) welc_button_pane_t1

0x5d1b,	// (0x0001c47a) welc_service_logo_pane_g1

0x5d24,	// (0x0001c483) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x000265e9) welc_service_logo_pane_g

0x6ead,	// (0x0001d60c) main_int_radio_pane

0x4aa5,	// (0x0001b204) list_single_fs_dyc_pane_g1

0xeae3,	// (0x00025242) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xeae3,	// (0x00025242) list_double_large_graphic_phob2_pane_g3

0xeaef,	// (0x0002524e) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xeaef,	// (0x0002524e) list_double_large_graphic_phob2_pane_g4

0xef15,	// (0x00025674) main_int_radio1_pane_ParamLimits

0xef15,	// (0x00025674) main_int_radio1_pane

0x5d2d,	// (0x0001c48c) find_pane_cp02

0xef2b,	// (0x0002568a) input_focus_pane_cp12_ParamLimits

0xef2b,	// (0x0002568a) input_focus_pane_cp12

0xef37,	// (0x00025696) input_focus_pane_cp13_ParamLimits

0xef37,	// (0x00025696) input_focus_pane_cp13

0xef4f,	// (0x000256ae) input_focus_pane_cp14_ParamLimits

0xef4f,	// (0x000256ae) input_focus_pane_cp14

0x5d36,	// (0x0001c495) int_radio1_listscroll_pane

0xef67,	// (0x000256c6) main_int_radio1_pane_g1_ParamLimits

0xef67,	// (0x000256c6) main_int_radio1_pane_g1

0xef73,	// (0x000256d2) main_int_radio1_pane_t1_ParamLimits

0xef73,	// (0x000256d2) main_int_radio1_pane_t1

0xef85,	// (0x000256e4) main_int_radio1_pane_t2_ParamLimits

0xef85,	// (0x000256e4) main_int_radio1_pane_t2

0xef99,	// (0x000256f8) main_int_radio1_pane_t3_ParamLimits

0xef99,	// (0x000256f8) main_int_radio1_pane_t3

0xefad,	// (0x0002570c) main_int_radio1_pane_t4_ParamLimits

0xefad,	// (0x0002570c) main_int_radio1_pane_t4

0x5d40,	// (0x0001c49f) main_int_radio1_pane_t5_ParamLimits

0x5d40,	// (0x0001c49f) main_int_radio1_pane_t5

0xefc4,	// (0x00025723) main_int_radio1_pane_t6_ParamLimits

0xefc4,	// (0x00025723) main_int_radio1_pane_t6

0xefd6,	// (0x00025735) main_int_radio1_pane_t7_ParamLimits

0xefd6,	// (0x00025735) main_int_radio1_pane_t7

0xefe8,	// (0x00025747) main_int_radio1_pane_t8_ParamLimits

0xefe8,	// (0x00025747) main_int_radio1_pane_t8

0xeffa,	// (0x00025759) main_int_radio1_pane_t9_ParamLimits

0xeffa,	// (0x00025759) main_int_radio1_pane_t9

0xf00c,	// (0x0002576b) main_int_radio1_pane_t10_ParamLimits

0xf00c,	// (0x0002576b) main_int_radio1_pane_t10

0xf03d,	// (0x0002579c) main_int_radio1_pane_t11_ParamLimits

0xf03d,	// (0x0002579c) main_int_radio1_pane_t11

0xf06e,	// (0x000257cd) main_int_radio1_pane_t12_ParamLimits

0xf06e,	// (0x000257cd) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x000265ee) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x000265ee) main_int_radio1_pane_t

0x5bd2,	// (0x0001c331) int_radio_list_pane

0x5bda,	// (0x0001c339) scroll_pane_cp037

0x5d52,	// (0x0001c4b1) list_double_large_graphic_int_radio_pane_ParamLimits

0x5d52,	// (0x0001c4b1) list_double_large_graphic_int_radio_pane

0x5d66,	// (0x0001c4c5) list_double_large_graphic_int_radio_pane_g1

0x5d6f,	// (0x0001c4ce) list_double_large_graphic_int_radio_pane_t1

0x5d7d,	// (0x0001c4dc) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x00026607) list_double_large_graphic_int_radio_pane_t

0x050c,	// (0x00016c6b) list_highlight_pane_cp027

0x5cca,	// (0x0001c429) main_button_pane_4

0xecfe,	// (0x0002545d) main_welc_pane_g4_ParamLimits

0xecfe,	// (0x0002545d) main_welc_pane_g4

0xed60,	// (0x000254bf) main_welc_pane_t4_ParamLimits

0xed60,	// (0x000254bf) main_welc_pane_t4

0xed72,	// (0x000254d1) main_welc_pane_t5_ParamLimits

0xed72,	// (0x000254d1) main_welc_pane_t5

0xedaa,	// (0x00025509) main_welc_pane_t6_ParamLimits

0xedaa,	// (0x00025509) main_welc_pane_t6

0xedec,	// (0x0002554b) welc_button_pane_2_ParamLimits

0xedec,	// (0x0002554b) welc_button_pane_2

0xee06,	// (0x00025565) welc_button_pane_3_ParamLimits

0xee06,	// (0x00025565) welc_button_pane_3

0x5cca,	// (0x0001c429) welc_button_pane_4

0xee22,	// (0x00025581) welc_button_pane_5_ParamLimits

0xee22,	// (0x00025581) welc_button_pane_5

0x7393,	// (0x0001daf2) main_popup_welc_pane

0x5d8b,	// (0x0001c4ea) main_welc_sk_g3

0x5d95,	// (0x0001c4f4) main_welc_sk_g4

0x5d9f,	// (0x0001c4fe) main_welc_sk_t3

0x5daf,	// (0x0001c50e) main_welc_sk_t4

0x5dbf,	// (0x0001c51e) popup_welc_pane_t4

0x5dcd,	// (0x0001c52c) popup_welc_pane_t5

0x5ddb,	// (0x0001c53a) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
