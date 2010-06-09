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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002c41b };

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
0x1a7e,	// (0x0002de99) Screen

0x1a8a,	// (0x0002dea5) application_window

0x1aba,	// (0x0002ded5) area_bottom_pane_ParamLimits

0x1aba,	// (0x0002ded5) area_bottom_pane

0x01f6,	// (0x0002c611) area_top_pane_ParamLimits

0x01f6,	// (0x0002c611) area_top_pane

0xad0b,	// (0x00037126) call_video_uplink_pane_ParamLimits

0xad0b,	// (0x00037126) call_video_uplink_pane

0x0284,	// (0x0002c69f) main_pane_ParamLimits

0x0284,	// (0x0002c69f) main_pane

0xdc97,	// (0x0003a0b2) context_pane

0x4962,	// (0x00030d7d) navi_pane

0x4994,	// (0x00030daf) popup_cale_events_window_ParamLimits

0x4994,	// (0x00030daf) popup_cale_events_window

0xdcaa,	// (0x0003a0c5) popup_mup_playback_window

0x49ac,	// (0x00030dc7) signal_pane

0xbbd1,	// (0x00037fec) main_browser_pane

0xbd96,	// (0x000381b1) main_burst_pane

0x067e,	// (0x0002ca99) main_calc_pane

0xdc7d,	// (0x0003a098) main_cale_day_pane

0x0692,	// (0x0002caad) main_cale_month_pane

0xdc7d,	// (0x0003a098) main_cale_week_pane

0xbd96,	// (0x000381b1) main_call_pane

0xb154,	// (0x0003756f) main_call_poc_pane

0xbd96,	// (0x000381b1) main_camera_pane

0xbd96,	// (0x000381b1) main_chi_dic_pane

0xc56d,	// (0x00038988) main_clock_pane

0xb154,	// (0x0003756f) main_fmradio_pane

0xbd96,	// (0x000381b1) main_graph_messa_pane

0xb154,	// (0x0003756f) main_help_pane

0xbbd1,	// (0x00037fec) main_im_pane

0xbb0c,	// (0x00037f27) main_image_pane_ParamLimits

0xbb0c,	// (0x00037f27) main_image_pane

0xb154,	// (0x0003756f) main_location2_pane

0xbd96,	// (0x000381b1) main_location_pane

0xbb0c,	// (0x00037f27) main_messa_pane

0xb154,	// (0x0003756f) main_mp2_pane

0xbd96,	// (0x000381b1) main_mp_pane

0xb154,	// (0x0003756f) main_msg_pane

0xb154,	// (0x0003756f) main_mup_eq_pane

0xb154,	// (0x0003756f) main_mup_pane

0xbbd1,	// (0x00037fec) main_notes_pane

0xb154,	// (0x0003756f) main_pec_pane

0xb154,	// (0x0003756f) main_phob_pane

0xb154,	// (0x0003756f) main_pinb_pane

0xb154,	// (0x0003756f) main_postcard_pane

0xb154,	// (0x0003756f) main_qdial_pane

0xbd96,	// (0x000381b1) main_skin_pane

0xb154,	// (0x0003756f) main_smil2_pane

0xbd96,	// (0x000381b1) main_smil_pane

0xbd96,	// (0x000381b1) main_video_pane

0xbd96,	// (0x000381b1) main_video_tele_pane

0xbb0c,	// (0x00037f27) main_viewer_pane_ParamLimits

0xbb0c,	// (0x00037f27) main_viewer_pane

0xbd96,	// (0x000381b1) main_vorec_pane

0x06e4,	// (0x0002caff) popup_blid_sat_info_window_ParamLimits

0x06e4,	// (0x0002caff) popup_blid_sat_info_window

0x073c,	// (0x0002cb57) popup_dyc_status_message_window_ParamLimits

0x073c,	// (0x0002cb57) popup_dyc_status_message_window

0x0756,	// (0x0002cb71) popup_grid_large_graphic_window_ParamLimits

0x0756,	// (0x0002cb71) popup_grid_large_graphic_window

0x0812,	// (0x0002cc2d) popup_loc_request_window_ParamLimits

0x0812,	// (0x0002cc2d) popup_loc_request_window

0x0908,	// (0x0002cd23) popup_wml_address_window_ParamLimits

0x0908,	// (0x0002cd23) popup_wml_address_window

0x47a6,	// (0x00030bc1) call_muted_g1

0x445b,	// (0x00030876) popup_call_audio_conf_window_ParamLimits

0x445b,	// (0x00030876) popup_call_audio_conf_window

0x47ba,	// (0x00030bd5) popup_call_audio_first_window_ParamLimits

0x47ba,	// (0x00030bd5) popup_call_audio_first_window

0x4830,	// (0x00030c4b) popup_call_audio_in_window_ParamLimits

0x4830,	// (0x00030c4b) popup_call_audio_in_window

0x486c,	// (0x00030c87) popup_call_audio_out_window_ParamLimits

0x486c,	// (0x00030c87) popup_call_audio_out_window

0x48a6,	// (0x00030cc1) popup_call_audio_second_window_ParamLimits

0x48a6,	// (0x00030cc1) popup_call_audio_second_window

0x48fc,	// (0x00030d17) popup_call_audio_wait_window_ParamLimits

0x48fc,	// (0x00030d17) popup_call_audio_wait_window

0x4931,	// (0x00030d4c) popup_number_entry_window_ParamLimits

0x4931,	// (0x00030d4c) popup_number_entry_window

0xad41,	// (0x0003715c) bg_popup_call_pane_cp05_ParamLimits

0xad41,	// (0x0003715c) bg_popup_call_pane_cp05

0xad61,	// (0x0003717c) popup_number_entry_window_t1

0xad74,	// (0x0003718f) popup_number_entry_window_t2

0xad86,	// (0x000371a1) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003b4e5) popup_number_entry_window_t

0xad98,	// (0x000371b3) text_title_cp2

0xadab,	// (0x000371c6) bg_popup_call_pane_cp_ParamLimits

0xadab,	// (0x000371c6) bg_popup_call_pane_cp

0xadb9,	// (0x000371d4) call_thumbnail_pane

0xadc1,	// (0x000371dc) popup_call_audio_in_window_g1_ParamLimits

0xadc1,	// (0x000371dc) popup_call_audio_in_window_g1

0xadcd,	// (0x000371e8) popup_call_audio_in_window_g2_ParamLimits

0xadcd,	// (0x000371e8) popup_call_audio_in_window_g2

0xadd9,	// (0x000371f4) popup_call_audio_in_window_g3_ParamLimits

0xadd9,	// (0x000371f4) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003b4ee) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003b4ee) popup_call_audio_in_window_g

0xade5,	// (0x00037200) popup_call_audio_in_window_t1_ParamLimits

0xade5,	// (0x00037200) popup_call_audio_in_window_t1

0xae01,	// (0x0003721c) popup_call_audio_in_window_t2_ParamLimits

0xae01,	// (0x0003721c) popup_call_audio_in_window_t2

0xae1d,	// (0x00037238) popup_call_audio_in_window_t3_ParamLimits

0xae1d,	// (0x00037238) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003b4f5) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003b4f5) popup_call_audio_in_window_t

0xadab,	// (0x000371c6) bg_popup_call_pane_cp01_ParamLimits

0xadab,	// (0x000371c6) bg_popup_call_pane_cp01

0xadb9,	// (0x000371d4) call_thumbnail_pane_cp02

0xae30,	// (0x0003724b) call_type_pane_cp022

0xae38,	// (0x00037253) popup_call_audio_out_window_g1_ParamLimits

0xae38,	// (0x00037253) popup_call_audio_out_window_g1

0xae4a,	// (0x00037265) popup_call_audio_out_window_g2_ParamLimits

0xae4a,	// (0x00037265) popup_call_audio_out_window_g2

0xae56,	// (0x00037271) popup_call_audio_out_window_g3_ParamLimits

0xae56,	// (0x00037271) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003b4fc) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003b4fc) popup_call_audio_out_window_g

0xae68,	// (0x00037283) popup_call_audio_out_window_t1_ParamLimits

0xae68,	// (0x00037283) popup_call_audio_out_window_t1

0xae80,	// (0x0003729b) popup_call_audio_out_window_t2_ParamLimits

0xae80,	// (0x0003729b) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003b503) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003b503) popup_call_audio_out_window_t

0xae95,	// (0x000372b0) bg_popup_call_pane_ParamLimits

0xae95,	// (0x000372b0) bg_popup_call_pane

0x1b57,	// (0x0002df72) call_thumbnail_pane_cp_ParamLimits

0x1b57,	// (0x0002df72) call_thumbnail_pane_cp

0xaf19,	// (0x00037334) call_type_pane_cp01_ParamLimits

0xaf19,	// (0x00037334) call_type_pane_cp01

0xaf5d,	// (0x00037378) popup_call_audio_first_window_g1_ParamLimits

0xaf5d,	// (0x00037378) popup_call_audio_first_window_g1

0xafa9,	// (0x000373c4) popup_call_audio_first_window_g2_ParamLimits

0xafa9,	// (0x000373c4) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003b508) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003b508) popup_call_audio_first_window_g

0xafed,	// (0x00037408) popup_call_audio_first_window_t1_ParamLimits

0xafed,	// (0x00037408) popup_call_audio_first_window_t1

0xb099,	// (0x000374b4) popup_call_audio_first_window_t4_ParamLimits

0xb099,	// (0x000374b4) popup_call_audio_first_window_t4

0xb125,	// (0x00037540) popup_call_audio_first_window_t5_ParamLimits

0xb125,	// (0x00037540) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003b50d) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003b50d) popup_call_audio_first_window_t

0xb154,	// (0x0003756f) bg_popup_call_pane_cp02

0xb15e,	// (0x00037579) call_type_pane_cp023

0xb166,	// (0x00037581) popup_call_audio_wait_window_g1

0xb16e,	// (0x00037589) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003b514) popup_call_audio_wait_window_g

0xb176,	// (0x00037591) popup_call_audio_wait_window_t3

0xb184,	// (0x0003759f) bg_popup_call_pane_cp03_ParamLimits

0xb184,	// (0x0003759f) bg_popup_call_pane_cp03

0xb1e4,	// (0x000375ff) call_thumbnail_pane_cp011_ParamLimits

0xb1e4,	// (0x000375ff) call_thumbnail_pane_cp011

0xb1f0,	// (0x0003760b) call_type_pane_cp034_ParamLimits

0xb1f0,	// (0x0003760b) call_type_pane_cp034

0xb22c,	// (0x00037647) popup_call_audio_second_window_g1_ParamLimits

0xb22c,	// (0x00037647) popup_call_audio_second_window_g1

0xb268,	// (0x00037683) popup_call_audio_second_window_g2_ParamLimits

0xb268,	// (0x00037683) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003b519) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003b519) popup_call_audio_second_window_g

0xba01,	// (0x00037e1c) popup_call_audio_second_window_t1_ParamLimits

0xba01,	// (0x00037e1c) popup_call_audio_second_window_t1

0xba82,	// (0x00037e9d) popup_call_audio_second_window_t2_ParamLimits

0xba82,	// (0x00037e9d) popup_call_audio_second_window_t2

0xbab8,	// (0x00037ed3) popup_call_audio_second_window_t3_ParamLimits

0xbab8,	// (0x00037ed3) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003b51e) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003b51e) popup_call_audio_second_window_t

0xb154,	// (0x0003756f) bg_popup_call_pane_cp04

0xbaee,	// (0x00037f09) list_conf_pane

0xbaf6,	// (0x00037f11) popup_call_audio_conf_window_t1

0xbb04,	// (0x00037f1f) call_thumbnail_pane_g1

0xbb0c,	// (0x00037f27) bg_pinb_pane_ParamLimits

0xbb0c,	// (0x00037f27) bg_pinb_pane

0xbb1a,	// (0x00037f35) find_pinb_pane

0xbb23,	// (0x00037f3e) listscroll_pinb_pane_ParamLimits

0xbb23,	// (0x00037f3e) listscroll_pinb_pane

0xbb32,	// (0x00037f4d) pinb_bg_pane_g1

0x1b7b,	// (0x0002df96) pinb_bg_pane_g2

0x1b87,	// (0x0002dfa2) pinb_bg_pane_g3

0x1b93,	// (0x0002dfae) pinb_bg_pane_g4

0x1b9f,	// (0x0002dfba) pinb_bg_pane_g5

0x1bab,	// (0x0002dfc6) pinb_bg_pane_g6

0x1bb6,	// (0x0002dfd1) pinb_bg_pane_g7

0x1bc1,	// (0x0002dfdc) pinb_bg_pane_g8

0x1bcc,	// (0x0002dfe7) pinb_bg_pane_g9

0x1bd6,	// (0x0002dff1) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003b525) pinb_bg_pane_g

0x1bf3,	// (0x0002e00e) grid_pinb_pane

0x1bfc,	// (0x0002e017) list_pinb_pane

0x1c05,	// (0x0002e020) scroll_pane_cp01_ParamLimits

0x1c05,	// (0x0002e020) scroll_pane_cp01

0xbb3c,	// (0x00037f57) find_pinb_pane_g1_ParamLimits

0xbb3c,	// (0x00037f57) find_pinb_pane_g1

0xbb54,	// (0x00037f6f) find_pinb_pane_t1

0xbb66,	// (0x00037f81) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003b53f) find_pinb_pane_t

0xbb7b,	// (0x00037f96) input_focus_pane_cp01_ParamLimits

0xbb7b,	// (0x00037f96) input_focus_pane_cp01

0x1c17,	// (0x0002e032) cell_pinb_pane_ParamLimits

0x1c17,	// (0x0002e032) cell_pinb_pane

0x1c40,	// (0x0002e05b) cell_pinb_pane_g1_ParamLimits

0x1c40,	// (0x0002e05b) cell_pinb_pane_g1

0x1c50,	// (0x0002e06b) cell_pinb_pane_g2_ParamLimits

0x1c50,	// (0x0002e06b) cell_pinb_pane_g2

0xbb87,	// (0x00037fa2) cell_pinb_pane_g3_ParamLimits

0xbb87,	// (0x00037fa2) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003b544) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003b544) cell_pinb_pane_g

0xb154,	// (0x0003756f) grid_highlight_pane_cp01

0x1c5c,	// (0x0002e077) list_pinb_item_pane_ParamLimits

0x1c5c,	// (0x0002e077) list_pinb_item_pane

0xb154,	// (0x0003756f) list_highlight_pane_cp02

0x1c6e,	// (0x0002e089) list_pinb_item_pane_g1_ParamLimits

0x1c6e,	// (0x0002e089) list_pinb_item_pane_g1

0x1c7b,	// (0x0002e096) list_pinb_item_pane_g2_ParamLimits

0x1c7b,	// (0x0002e096) list_pinb_item_pane_g2

0x1c87,	// (0x0002e0a2) list_pinb_item_pane_g3_ParamLimits

0x1c87,	// (0x0002e0a2) list_pinb_item_pane_g3

0x1c98,	// (0x0002e0b3) list_pinb_item_pane_g4_ParamLimits

0x1c98,	// (0x0002e0b3) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003b54b) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003b54b) list_pinb_item_pane_g

0x1ca4,	// (0x0002e0bf) list_pinb_item_pane_t1_ParamLimits

0x1ca4,	// (0x0002e0bf) list_pinb_item_pane_t1

0x041e,	// (0x0002c839) calc_display_pane

0x0446,	// (0x0002c861) calc_paper_pane

0x0469,	// (0x0002c884) grid_calc_pane

0xb154,	// (0x0003756f) bg_list_pane_cp01

0x1cbb,	// (0x0002e0d6) clock_g1

0x1cc3,	// (0x0002e0de) clock_g2

0x0001,

0xf139,	// (0x0003b554) clock_g

0x1ccb,	// (0x0002e0e6) clock_t1_ParamLimits

0x1ccb,	// (0x0002e0e6) clock_t1

0x1ce0,	// (0x0002e0fb) clock_t2_ParamLimits

0x1ce0,	// (0x0002e0fb) clock_t2

0x1cf2,	// (0x0002e10d) clock_t3_ParamLimits

0x1cf2,	// (0x0002e10d) clock_t3

0x1d04,	// (0x0002e11f) clock_t4_ParamLimits

0x1d04,	// (0x0002e11f) clock_t4

0x1d16,	// (0x0002e131) clock_t5_ParamLimits

0x1d16,	// (0x0002e131) clock_t5

0x1d2b,	// (0x0002e146) clock_t6_ParamLimits

0x1d2b,	// (0x0002e146) clock_t6

0x1d3d,	// (0x0002e158) clock_t7_ParamLimits

0x1d3d,	// (0x0002e158) clock_t7

0x1d4f,	// (0x0002e16a) clock_t8_ParamLimits

0x1d4f,	// (0x0002e16a) clock_t8

0x1d63,	// (0x0002e17e) clock_t9_ParamLimits

0x1d63,	// (0x0002e17e) clock_t9

0x0008,

0xf13e,	// (0x0003b559) clock_t_ParamLimits

0xf13e,	// (0x0003b559) clock_t

0xbb93,	// (0x00037fae) popup_clock_analogue_window_cp02

0xbb93,	// (0x00037fae) popup_clock_digital_window_cp01

0xbb9b,	// (0x00037fb6) listscroll_help_pane

0xb154,	// (0x0003756f) phob_pre_status_pane

0xbba5,	// (0x00037fc0) grid_qdial_pane

0xbb0c,	// (0x00037f27) listscroll_mce_pane

0xbb0c,	// (0x00037f27) bg_notes_pane

0xbbaf,	// (0x00037fca) list_notes_pane

0x1d77,	// (0x0002e192) scroll_pane_cp06

0xbbbd,	// (0x00037fd8) bg_calc_paper_pane

0xb2ac,	// (0x000376c7) list_calc_pane

0xbbd1,	// (0x00037fec) bg_calc_display_pane

0x0497,	// (0x0002c8b2) calc_display_pane_t1

0x04a9,	// (0x0002c8c4) calc_display_pane_t2

0xb2c6,	// (0x000376e1) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003b56c) calc_display_pane_t

0x04bb,	// (0x0002c8d6) cell_calc_pane_ParamLimits

0x04bb,	// (0x0002c8d6) cell_calc_pane

0xbbdd,	// (0x00037ff8) bg_calc_paper_pane_g1

0xbbe9,	// (0x00038004) bg_calc_paper_pane_g2

0xbbf5,	// (0x00038010) bg_calc_paper_pane_g3

0xbc01,	// (0x0003801c) bg_calc_paper_pane_g4

0xbc0d,	// (0x00038028) bg_calc_paper_pane_g5

0x1d8b,	// (0x0002e1a6) bg_calc_paper_pane_g6

0x1d9a,	// (0x0002e1b5) bg_calc_paper_pane_g7

0x1da9,	// (0x0002e1c4) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003b573) bg_calc_paper_pane_g

0x1dbc,	// (0x0002e1d7) calc_bg_paper_pane_g9

0x1dcf,	// (0x0002e1ea) list_calc_item_pane_ParamLimits

0x1dcf,	// (0x0002e1ea) list_calc_item_pane

0xbc19,	// (0x00038034) list_calc_item_pane_g1

0xb2d8,	// (0x000376f3) list_calc_item_pane_t1_ParamLimits

0xb2d8,	// (0x000376f3) list_calc_item_pane_t1

0x04f0,	// (0x0002c90b) list_calc_item_pane_t2_ParamLimits

0x04f0,	// (0x0002c90b) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003b584) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003b584) list_calc_item_pane_t

0xbc26,	// (0x00038041) cell_calc_pane_g1

0xbc30,	// (0x0003804b) grid_highlight_pane_cp02

0x1de4,	// (0x0002e1ff) bg_calc_display_pane_g1

0x0522,	// (0x0002c93d) bg_calc_display_pane_g2

0x1ded,	// (0x0002e208) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003b58e) bg_calc_display_pane_g

0x052c,	// (0x0002c947) cell_qdial_pane_ParamLimits

0x052c,	// (0x0002c947) cell_qdial_pane

0x1df6,	// (0x0002e211) cell_qdial_pane_g1_ParamLimits

0x1df6,	// (0x0002e211) cell_qdial_pane_g1

0x1e0c,	// (0x0002e227) cell_qdial_pane_g2_ParamLimits

0x1e0c,	// (0x0002e227) cell_qdial_pane_g2

0xbc52,	// (0x0003806d) cell_qdial_pane_g3_ParamLimits

0xbc52,	// (0x0003806d) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003b595) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003b595) cell_qdial_pane_g

0x1e33,	// (0x0002e24e) cell_qdial_pane_t1_ParamLimits

0x1e33,	// (0x0002e24e) cell_qdial_pane_t1

0x1e4b,	// (0x0002e266) cell_qdial_pane_t2_ParamLimits

0x1e4b,	// (0x0002e266) cell_qdial_pane_t2

0x1e5e,	// (0x0002e279) cell_qdial_pane_t3_ParamLimits

0x1e5e,	// (0x0002e279) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003b59e) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003b59e) cell_qdial_pane_t

0xb154,	// (0x0003756f) grid_highlight_pane_cp04

0xbc5e,	// (0x00038079) thumbnail_qdial_pane_ParamLimits

0xbc5e,	// (0x00038079) thumbnail_qdial_pane

0xbcba,	// (0x000380d5) list_help_pane

0xbcc3,	// (0x000380de) scroll_pane_cp02

0x1e71,	// (0x0002e28c) help_list_pane_t1_ParamLimits

0x1e71,	// (0x0002e28c) help_list_pane_t1

0xb2ea,	// (0x00037705) bg_notes_pane_g2

0xb2f2,	// (0x0003770d) bg_notes_pane_g3

0xb2fa,	// (0x00037715) notes_bg_pane_g1

0xb302,	// (0x0003771d) notes_bg_pane_g4

0xb30a,	// (0x00037725) notes_bg_pane_g5

0xb312,	// (0x0003772d) notes_bg_pane_g6

0xb31a,	// (0x00037735) notes_bg_pane_g7

0xb322,	// (0x0003773d) notes_bg_pane_g8

0xb32a,	// (0x00037745) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003b5bc) notes_bg_pane_g

0x1e8e,	// (0x0002e2a9) list_notes_text_pane_ParamLimits

0x1e8e,	// (0x0002e2a9) list_notes_text_pane

0xbccc,	// (0x000380e7) list_notes_text_pane_g1

0x1ea3,	// (0x0002e2be) list_notes_text_pane_t1

0x1eb1,	// (0x0002e2cc) listscroll_cale_week_pane

0x1edd,	// (0x0002e2f8) bg_cale_heading_pane

0xbcef,	// (0x0003810a) bg_cale_pane_cp01

0x1ef5,	// (0x0002e310) cale_week_corner_pane

0x1f14,	// (0x0002e32f) cale_week_day_heading_pane

0x1f31,	// (0x0002e34c) cale_week_scroll_pane_g1

0x1f44,	// (0x0002e35f) cale_week_scroll_pane_g2

0x1f5c,	// (0x0002e377) cale_week_scroll_pane_g3

0x1f74,	// (0x0002e38f) cale_week_scroll_pane_g4

0x1f8c,	// (0x0002e3a7) cale_week_scroll_pane_g5

0x1fac,	// (0x0002e3c7) cale_week_scroll_pane_g6

0x1fcc,	// (0x0002e3e7) cale_week_scroll_pane_g7

0x1fec,	// (0x0002e407) cale_week_scroll_pane_g8

0x2010,	// (0x0002e42b) cale_week_scroll_pane_g9

0x2028,	// (0x0002e443) cale_week_scroll_pane_g10

0x2040,	// (0x0002e45b) cale_week_scroll_pane_g11

0x2058,	// (0x0002e473) cale_week_scroll_pane_g12

0x2070,	// (0x0002e48b) cale_week_scroll_pane_g13

0x2070,	// (0x0002e48b) cale_week_scroll_pane_g14

0x2070,	// (0x0002e48b) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003b5cb) cale_week_scroll_pane_g

0x20ac,	// (0x0002e4c7) cale_week_time_pane

0x20d0,	// (0x0002e4eb) grid_cale_week_pane

0xbd1e,	// (0x00038139) scroll_pane_cp08

0x20f6,	// (0x0002e511) cell_cale_week_pane_ParamLimits

0x20f6,	// (0x0002e511) cell_cale_week_pane

0x2184,	// (0x0002e59f) cale_week_day_heading_pane_t1

0x21ae,	// (0x0002e5c9) cale_week_day_heading_pane_t2

0x21dd,	// (0x0002e5f8) cale_week_day_heading_pane_t3

0x220c,	// (0x0002e627) cale_week_day_heading_pane_t4

0x223b,	// (0x0002e656) cale_week_day_heading_pane_t5

0x2272,	// (0x0002e68d) cale_week_day_heading_pane_t6

0x22a9,	// (0x0002e6c4) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003b5ec) cale_week_day_heading_pane_t

0xbd3b,	// (0x00038156) bg_cale_side_pane

0x0540,	// (0x0002c95b) cale_week_time_pane_t1

0x055a,	// (0x0002c975) cale_week_time_pane_t2

0x0574,	// (0x0002c98f) cale_week_time_pane_t3

0x058e,	// (0x0002c9a9) cale_week_time_pane_t4

0x05a8,	// (0x0002c9c3) cale_week_time_pane_t5

0x05c2,	// (0x0002c9dd) cale_week_time_pane_t6

0x05dc,	// (0x0002c9f7) cale_week_time_pane_t7

0x05f6,	// (0x0002ca11) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003b5fb) cale_week_time_pane_t

0x22d3,	// (0x0002e6ee) cell_cale_week_pane_g2

0x22f2,	// (0x0002e70d) cell_cale_week_pane_g3_ParamLimits

0x22f2,	// (0x0002e70d) cell_cale_week_pane_g3

0xbd49,	// (0x00038164) grid_highlight_pane_cp07

0xbd51,	// (0x0003816c) listscroll_gms_pane

0xbd5b,	// (0x00038176) grid_gms_pane

0xbd64,	// (0x0003817f) listscroll_gms_pane_g1

0xbd6c,	// (0x00038187) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003b60c) listscroll_gms_pane_g

0x230a,	// (0x0002e725) scroll_pane_cp010

0x2315,	// (0x0002e730) cell_gms_pane_ParamLimits

0x2315,	// (0x0002e730) cell_gms_pane

0x2328,	// (0x0002e743) cell_gms_pane_g1

0xbd74,	// (0x0003818f) cell_gms_pane_g2

0xbd7c,	// (0x00038197) cell_gms_pane_g3

0xbd85,	// (0x000381a0) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003b611) cell_gms_pane_g

0xbd8e,	// (0x000381a9) grid_highlight_pane_cp09

0x4750,	// (0x00030b6b) phob_pre_status_pane_g1

0x4758,	// (0x00030b73) phob_pre_status_pane_g2

0x4760,	// (0x00030b7b) phob_pre_status_pane_g3

0x4768,	// (0x00030b83) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003b9fc) phob_pre_status_pane_g

0x4778,	// (0x00030b93) phob_pre_status_pane_t1

0x4786,	// (0x00030ba1) phob_pre_status_pane_t2

0x4796,	// (0x00030bb1) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003ba07) phob_pre_status_pane_t

0xbd96,	// (0x000381b1) bg_list_pane_cp05

0x2338,	// (0x0002e753) grid_vorec_pane

0x2340,	// (0x0002e75b) vorec_t1

0x234e,	// (0x0002e769) vorec_t2

0x235c,	// (0x0002e777) vorec_t3

0x236a,	// (0x0002e785) vorec_t4

0x1a58,	// (0x0002de73) vorec_t5

0x1a66,	// (0x0002de81) vorec_t6

0x0004,

0xf1ff,	// (0x0003b61a) vorec_t

0x1a74,	// (0x0002de8f) wait_bar_pane_cp01

0x2386,	// (0x0002e7a1) cell_vorec_pane_ParamLimits

0x2386,	// (0x0002e7a1) cell_vorec_pane

0xb332,	// (0x0003774d) cell_vorec_pane_g1

0xb154,	// (0x0003756f) grid_highlight_pane_cp05

0x23ae,	// (0x0002e7c9) cams_zoom_pane

0x23bd,	// (0x0002e7d8) image_vga_pane

0x23d7,	// (0x0002e7f2) main_camera_pane_g1

0x23e9,	// (0x0002e804) main_camera_pane_g2

0x23f9,	// (0x0002e814) main_camera_pane_g3

0x2409,	// (0x0002e824) main_camera_pane_g4

0x2419,	// (0x0002e834) main_camera_pane_g5

0x2429,	// (0x0002e844) main_camera_pane_g6

0x243b,	// (0x0002e856) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003b625) main_camera_pane_g

0x244b,	// (0x0002e866) main_camera_pane_t1

0x2461,	// (0x0002e87c) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003b636) main_camera_pane_t

0x249b,	// (0x0002e8b6) cams_zoom_pane_cp_ParamLimits

0x249b,	// (0x0002e8b6) cams_zoom_pane_cp

0x24c3,	// (0x0002e8de) image_cif_pane_ParamLimits

0x24c3,	// (0x0002e8de) image_cif_pane

0x24f9,	// (0x0002e914) image_subqcif_pane

0x2501,	// (0x0002e91c) main_video_pane_g1_ParamLimits

0x2501,	// (0x0002e91c) main_video_pane_g1

0x2525,	// (0x0002e940) main_video_pane_g2_ParamLimits

0x2525,	// (0x0002e940) main_video_pane_g2

0x2559,	// (0x0002e974) main_video_pane_g3_ParamLimits

0x2559,	// (0x0002e974) main_video_pane_g3

0x2587,	// (0x0002e9a2) main_video_pane_g4_ParamLimits

0x2587,	// (0x0002e9a2) main_video_pane_g4

0x25b5,	// (0x0002e9d0) main_video_pane_g5_ParamLimits

0x25b5,	// (0x0002e9d0) main_video_pane_g5

0xbdaa,	// (0x000381c5) main_video_pane_g6_ParamLimits

0xbdaa,	// (0x000381c5) main_video_pane_g6

0x0006,

0xf220,	// (0x0003b63b) main_video_pane_g_ParamLimits

0xf220,	// (0x0003b63b) main_video_pane_g

0x25de,	// (0x0002e9f9) main_video_pane_t1_ParamLimits

0x25de,	// (0x0002e9f9) main_video_pane_t1

0xbdc4,	// (0x000381df) cams_zoom_pane_g1

0xbdcd,	// (0x000381e8) cams_zoom_pane_g2

0xbdd6,	// (0x000381f1) cams_zoom_pane_g3

0xbddf,	// (0x000381fa) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003b64a) cams_zoom_pane_g

0x263b,	// (0x0002ea56) grid_cams_pane

0x2655,	// (0x0002ea70) linegrid_cams_pane

0x2669,	// (0x0002ea84) cell_cams_pane_ParamLimits

0x2669,	// (0x0002ea84) cell_cams_pane

0xbde8,	// (0x00038203) cams_burst_image_pane

0xbdf0,	// (0x0003820b) cell_cams_pane_g1

0xb154,	// (0x0003756f) grid_highlight_pane_cp03

0xbc26,	// (0x00038041) mp_bg_pane_g1

0xb154,	// (0x0003756f) bg_list_pane_cp03

0xdba2,	// (0x00039fbd) bg_mp_pane

0xdbaa,	// (0x00039fc5) grid_mp_pane

0xdbb2,	// (0x00039fcd) media_player_g1

0xdbba,	// (0x00039fd5) media_player_t1

0xdbc8,	// (0x00039fe3) media_player_t2

0xdbd6,	// (0x00039ff1) media_player_t3

0xdbe4,	// (0x00039fff) media_player_t4

0xdbf2,	// (0x0003a00d) media_player_t5

0xdc00,	// (0x0003a01b) media_player_t6

0xdc0e,	// (0x0003a029) media_player_t7

0x0006,

0xf5cb,	// (0x0003b9e6) media_player_t

0xdc1c,	// (0x0003a037) wait_bar_pane_cp02

0xf5b0,	// (0x0003b9cb) main_usb_pane_t

0x4747,	// (0x00030b62) cell_mp_pane

0xbc26,	// (0x00038041) cell_mp_pane_g1

0xb154,	// (0x0003756f) grid_highlight_pane_cp06

0xbdf8,	// (0x00038213) grid_skin_colour_pane

0xbe00,	// (0x0003821b) list_highlight_pane_cp03

0x279f,	// (0x0002ebba) skin_g1

0xbe08,	// (0x00038223) skin_t1

0xbe17,	// (0x00038232) skin_t2

0x0001,

0xf264,	// (0x0003b67f) skin_t

0x27a7,	// (0x0002ebc2) cell_skin_colour_pane_ParamLimits

0x27a7,	// (0x0002ebc2) cell_skin_colour_pane

0xbe25,	// (0x00038240) cell_skin_colour_pane_g1

0x2820,	// (0x0002ec3b) call_video_g1_ParamLimits

0x2820,	// (0x0002ec3b) call_video_g1

0x283c,	// (0x0002ec57) call_video_g2_ParamLimits

0x283c,	// (0x0002ec57) call_video_g2

0x0001,

0xf269,	// (0x0003b684) call_video_g_ParamLimits

0xf269,	// (0x0003b684) call_video_g

0x288e,	// (0x0002eca9) call_video_uplink_pane_cp1_ParamLimits

0x288e,	// (0x0002eca9) call_video_uplink_pane_cp1

0xbe37,	// (0x00038252) call_video_uplink_pane_cp2

0x292d,	// (0x0002ed48) video_down_crop_pane_ParamLimits

0x292d,	// (0x0002ed48) video_down_crop_pane

0x2a24,	// (0x0002ee3f) video_down_pane_ParamLimits

0x2a24,	// (0x0002ee3f) video_down_pane

0xbe3f,	// (0x0003825a) video_down_subqcif_pane_ParamLimits

0xbe3f,	// (0x0003825a) video_down_subqcif_pane

0xbe57,	// (0x00038272) video_down_subqcif_pane_cp_ParamLimits

0xbe57,	// (0x00038272) video_down_subqcif_pane_cp

0xbe7d,	// (0x00038298) im_reading_pane_ParamLimits

0xbe7d,	// (0x00038298) im_reading_pane

0x2b34,	// (0x0002ef4f) im_writing_pane_ParamLimits

0x2b34,	// (0x0002ef4f) im_writing_pane

0x2b4a,	// (0x0002ef65) im_reading_pane_t1

0xbe97,	// (0x000382b2) list_im_pane

0xbea8,	// (0x000382c3) scroll_pane_cp07

0x2b83,	// (0x0002ef9e) im_writing_pane_t1_ParamLimits

0x2b83,	// (0x0002ef9e) im_writing_pane_t1

0xbec1,	// (0x000382dc) im_writing_pane_t2_ParamLimits

0xbec1,	// (0x000382dc) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003b68e) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003b68e) im_writing_pane_t

0xb154,	// (0x0003756f) input_focus_pane_cp04

0xb154,	// (0x0003756f) input_focus_pane_cp05

0x2b98,	// (0x0002efb3) list_im_single_pane_ParamLimits

0x2b98,	// (0x0002efb3) list_im_single_pane

0x2bac,	// (0x0002efc7) list_single_im_pane_t1

0x4707,	// (0x00030b22) blid_accuracy_pane

0x470f,	// (0x00030b2a) blid_compass_pane

0x4719,	// (0x00030b34) main_location_t1

0x4729,	// (0x00030b44) main_location_t2

0x4739,	// (0x00030b54) main_location_t3

0x0002,

0xf5da,	// (0x0003b9f5) main_location_t

0xb154,	// (0x0003756f) aid_levels_location

0xbc26,	// (0x00038041) blid_accuracy_pane_g1

0xbc26,	// (0x00038041) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003b6f0) blid_accuracy_pane_g

0xbf09,	// (0x00038324) wml_content_pane

0xbf47,	// (0x00038362) wml_button_pane_ParamLimits

0xbf47,	// (0x00038362) wml_button_pane

0x2bbb,	// (0x0002efd6) wml_list_single_large_pane_ParamLimits

0x2bbb,	// (0x0002efd6) wml_list_single_large_pane

0x2bd0,	// (0x0002efeb) wml_list_single_medium_pane_ParamLimits

0x2bd0,	// (0x0002efeb) wml_list_single_medium_pane

0x2be6,	// (0x0002f001) wml_list_single_small_pane_ParamLimits

0x2be6,	// (0x0002f001) wml_list_single_small_pane

0xbf5b,	// (0x00038376) wml_selection_box_pane_ParamLimits

0xbf5b,	// (0x00038376) wml_selection_box_pane

0xbf6e,	// (0x00038389) wml_list_single_pane_t1

0xbf7d,	// (0x00038398) wml_list_single_medium_pane_t1

0xbf8c,	// (0x000383a7) wml_list_single_large_pane_t1

0xbf9b,	// (0x000383b6) input_focus_pane_cp02_ParamLimits

0xbf9b,	// (0x000383b6) input_focus_pane_cp02

0xbfae,	// (0x000383c9) wml_selection_box_pane_g1

0xbfb7,	// (0x000383d2) wml_selection_box_pane_t1_ParamLimits

0xbfb7,	// (0x000383d2) wml_selection_box_pane_t1

0xbb0c,	// (0x00037f27) bg_wml_button_pane_ParamLimits

0xbb0c,	// (0x00037f27) bg_wml_button_pane

0xbfcf,	// (0x000383ea) wml_button_pane_g1

0xbfd7,	// (0x000383f2) wml_button_pane_t1

0xbfcf,	// (0x000383ea) wml_button_bg_pane_g1

0xbfe7,	// (0x00038402) wml_button_bg_pane_g2

0xbfef,	// (0x0003840a) wml_button_bg_pane_g3

0xbff7,	// (0x00038412) wml_button_bg_pane_g4

0xbfff,	// (0x0003841a) wml_button_bg_pane_g5

0xc007,	// (0x00038422) wml_button_bg_pane_g6

0xc00f,	// (0x0003842a) wml_button_bg_pane_g7

0xc017,	// (0x00038432) wml_button_bg_pane_g8

0xc01f,	// (0x0003843a) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003b693) wml_button_bg_pane_g

0x2bfe,	// (0x0002f019) bg_list_pane_cp02

0xc027,	// (0x00038442) mce_header_pane_ParamLimits

0xc027,	// (0x00038442) mce_header_pane

0xc03d,	// (0x00038458) mce_icon_pane

0xc03d,	// (0x00038458) mce_image_pane

0xc046,	// (0x00038461) mce_text_pane_ParamLimits

0xc046,	// (0x00038461) mce_text_pane

0x2c06,	// (0x0002f021) scroll_pane_cp03

0xbf3f,	// (0x0003835a) scroll_pane_cp04

0xc059,	// (0x00038474) scroll_pane_cp05_ParamLimits

0xc059,	// (0x00038474) scroll_pane_cp05

0x2c10,	// (0x0002f02b) mce_header_field_pane_ParamLimits

0x2c10,	// (0x0002f02b) mce_header_field_pane

0x2c27,	// (0x0002f042) mce_header_field_pane_2_ParamLimits

0x2c27,	// (0x0002f042) mce_header_field_pane_2

0x2c3d,	// (0x0002f058) mce_header_field_pane_3

0x2c45,	// (0x0002f060) list_single_mce_message_pane_ParamLimits

0x2c45,	// (0x0002f060) list_single_mce_message_pane

0x2c5a,	// (0x0002f075) list_single_mce_smart_pane_ParamLimits

0x2c5a,	// (0x0002f075) list_single_mce_smart_pane

0xc065,	// (0x00038480) input_focus_pane_cp03

0xc06e,	// (0x00038489) list_header_data_pane

0x2c7a,	// (0x0002f095) mce_header_field_pane_t1

0x2c8a,	// (0x0002f0a5) list_single_mce_header_pane_ParamLimits

0x2c8a,	// (0x0002f0a5) list_single_mce_header_pane

0xc076,	// (0x00038491) list_single_mce_header_pane_t1

0xc085,	// (0x000384a0) list_single_mce_message_pane_g1

0xc08d,	// (0x000384a8) list_single_mce_message_pane_t1

0x2cc4,	// (0x0002f0df) bg_cale_heading_pane_cp01_ParamLimits

0x2cc4,	// (0x0002f0df) bg_cale_heading_pane_cp01

0xc09b,	// (0x000384b6) bg_cale_pane_cp02_ParamLimits

0xc09b,	// (0x000384b6) bg_cale_pane_cp02

0x2cfe,	// (0x0002f119) cale_month_corner_pane

0x2d1d,	// (0x0002f138) cale_month_day_heading_pane_ParamLimits

0x2d1d,	// (0x0002f138) cale_month_day_heading_pane

0x2d6f,	// (0x0002f18a) cale_month_pane_g1_ParamLimits

0x2d6f,	// (0x0002f18a) cale_month_pane_g1

0x2d9e,	// (0x0002f1b9) cale_month_pane_g2_ParamLimits

0x2d9e,	// (0x0002f1b9) cale_month_pane_g2

0x2dce,	// (0x0002f1e9) cale_month_pane_g3_ParamLimits

0x2dce,	// (0x0002f1e9) cale_month_pane_g3

0x2e0a,	// (0x0002f225) cale_month_pane_g4_ParamLimits

0x2e0a,	// (0x0002f225) cale_month_pane_g4

0x2e46,	// (0x0002f261) cale_month_pane_g5_ParamLimits

0x2e46,	// (0x0002f261) cale_month_pane_g5

0x2e8e,	// (0x0002f2a9) cale_month_pane_g6_ParamLimits

0x2e8e,	// (0x0002f2a9) cale_month_pane_g6

0x2eda,	// (0x0002f2f5) cale_month_pane_g7_ParamLimits

0x2eda,	// (0x0002f2f5) cale_month_pane_g7

0x2f2e,	// (0x0002f349) cale_month_pane_g8_ParamLimits

0x2f2e,	// (0x0002f349) cale_month_pane_g8

0x2f82,	// (0x0002f39d) cale_month_pane_g9_ParamLimits

0x2f82,	// (0x0002f39d) cale_month_pane_g9

0x2fd4,	// (0x0002f3ef) cale_month_pane_g10_ParamLimits

0x2fd4,	// (0x0002f3ef) cale_month_pane_g10

0x3026,	// (0x0002f441) cale_month_pane_g11_ParamLimits

0x3026,	// (0x0002f441) cale_month_pane_g11

0x3078,	// (0x0002f493) cale_month_pane_g12_ParamLimits

0x3078,	// (0x0002f493) cale_month_pane_g12

0x30ca,	// (0x0002f4e5) cale_month_pane_g13_ParamLimits

0x30ca,	// (0x0002f4e5) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003b6a6) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003b6a6) cale_month_pane_g

0x311c,	// (0x0002f537) cale_month_week_pane

0x3140,	// (0x0002f55b) grid_cale_month_pane_ParamLimits

0x3140,	// (0x0002f55b) grid_cale_month_pane

0x3189,	// (0x0002f5a4) cale_month_day_heading_pane_t1

0x320f,	// (0x0002f62a) cale_month_day_heading_pane_t2

0x3288,	// (0x0002f6a3) cale_month_day_heading_pane_t3

0x3301,	// (0x0002f71c) cale_month_day_heading_pane_t4

0x3382,	// (0x0002f79d) cale_month_day_heading_pane_t5

0x340b,	// (0x0002f826) cale_month_day_heading_pane_t6

0x3494,	// (0x0002f8af) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003b6c1) cale_month_day_heading_pane_t

0xbd3b,	// (0x00038156) bg_cale_side_pane_cp01

0x3525,	// (0x0002f940) cale_month_week_pane_t1

0x353e,	// (0x0002f959) cale_month_week_pane_t2

0x3557,	// (0x0002f972) cale_month_week_pane_t3

0x3570,	// (0x0002f98b) cale_month_week_pane_t4

0x3589,	// (0x0002f9a4) cale_month_week_pane_t5

0x35a2,	// (0x0002f9bd) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003b6d0) cale_month_week_pane_t

0x35bb,	// (0x0002f9d6) cell_cale_month_pane_ParamLimits

0x35bb,	// (0x0002f9d6) cell_cale_month_pane

0xb33c,	// (0x00037757) cell_cale_month_pane_g1

0x0610,	// (0x0002ca2b) cell_cale_month_pane_t1_ParamLimits

0x0610,	// (0x0002ca2b) cell_cale_month_pane_t1

0xbd49,	// (0x00038164) grid_highlight_pane_cp08

0xbc26,	// (0x00038041) main_smil_g1

0x3713,	// (0x0002fb2e) smil_status_pane

0xc0da,	// (0x000384f5) smil_text_pane

0xdac2,	// (0x00039edd) bg_popup_call3_rect_pane_g8

0xdaca,	// (0x00039ee5) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003b989) bg_popup_call3_rect_pane_g

0xdd11,	// (0x0003a12c) smil_status_volume_pane_g1

0xc0e4,	// (0x000384ff) smil_status_pane_t1

0xb486,	// (0x000378a1) volume_smil_pane

0xc0fb,	// (0x00038516) list_smil_text_pane

0x3726,	// (0x0002fb41) scroll_pane_cp011

0x3731,	// (0x0002fb4c) smil_text_list_pane_t1_ParamLimits

0x3731,	// (0x0002fb4c) smil_text_list_pane_t1

0xb348,	// (0x00037763) aid_volume_smil_ParamLimits

0xb348,	// (0x00037763) aid_volume_smil

0xbc26,	// (0x00038041) smil_volume_pane_g1

0xbc26,	// (0x00038041) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003b6f0) smil_volume_pane_g

0x1eb1,	// (0x0002e2cc) listscroll_cale_day_pane

0xc105,	// (0x00038520) bg_cale_pane

0xc11d,	// (0x00038538) list_cale_pane

0xc140,	// (0x0003855b) scroll_pane_cp09

0xc151,	// (0x0003856c) cale_bg_pane_g1

0xc159,	// (0x00038574) cale_bg_pane_g2

0xc161,	// (0x0003857c) cale_bg_pane_g3

0xc169,	// (0x00038584) cale_bg_pane_g4

0xc171,	// (0x0003858c) cale_bg_pane_g5

0xc179,	// (0x00038594) cale_bg_pane_g6

0xc181,	// (0x0003859c) cale_bg_pane_g7

0xc189,	// (0x000385a4) cale_bg_pane_g8

0xc191,	// (0x000385ac) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003b6f5) cale_bg_pane_g

0x3775,	// (0x0002fb90) list_cale_time_pane_ParamLimits

0x3775,	// (0x0002fb90) list_cale_time_pane

0xc199,	// (0x000385b4) list_cale_time_pane_g1_ParamLimits

0xc199,	// (0x000385b4) list_cale_time_pane_g1

0xc1a5,	// (0x000385c0) list_cale_time_pane_g2_ParamLimits

0xc1a5,	// (0x000385c0) list_cale_time_pane_g2

0x378a,	// (0x0002fba5) list_cale_time_pane_g3_ParamLimits

0x378a,	// (0x0002fba5) list_cale_time_pane_g3

0x3798,	// (0x0002fbb3) list_cale_time_pane_g4_ParamLimits

0x3798,	// (0x0002fbb3) list_cale_time_pane_g4

0x37a6,	// (0x0002fbc1) list_cale_time_pane_g5_ParamLimits

0x37a6,	// (0x0002fbc1) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003b708) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003b708) list_cale_time_pane_g

0xc1bf,	// (0x000385da) list_cale_time_pane_t1_ParamLimits

0xc1bf,	// (0x000385da) list_cale_time_pane_t1

0xc1e7,	// (0x00038602) list_cale_time_pane_t2_ParamLimits

0xc1e7,	// (0x00038602) list_cale_time_pane_t2

0x3b07,	// (0x0002ff22) aid_blid_cardinal_pane

0x3b45,	// (0x0002ff60) compass_pane_t4

0xc20f,	// (0x0003862a) list_cale_time_pane_t4_ParamLimits

0xc20f,	// (0x0003862a) list_cale_time_pane_t4

0x3b53,	// (0x0002ff6e) compass_pane_t5

0x3b61,	// (0x0002ff7c) compass_pane_t6

0x3b6f,	// (0x0002ff8a) compass_pane_t7

0xc6b2,	// (0x00038acd) navi_pane_cc_t1

0xc8a9,	// (0x00038cc4) aid_phob_thumbnail_center_pane

0x411f,	// (0x0003053a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003b715) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003b715) list_cale_time_pane_t

0xadab,	// (0x000371c6) bg_popup_window_pane_cp02_ParamLimits

0xadab,	// (0x000371c6) bg_popup_window_pane_cp02

0xc237,	// (0x00038652) heading_pane_cp01_ParamLimits

0xc237,	// (0x00038652) heading_pane_cp01

0xc243,	// (0x0003865e) loc_req_pane_ParamLimits

0xc243,	// (0x0003865e) loc_req_pane

0xc253,	// (0x0003866e) loc_type_pane_ParamLimits

0xc253,	// (0x0003866e) loc_type_pane

0xc265,	// (0x00038680) loc_type_pane_t1_ParamLimits

0xc265,	// (0x00038680) loc_type_pane_t1

0xc277,	// (0x00038692) loc_type_pane_t2_ParamLimits

0xc277,	// (0x00038692) loc_type_pane_t2

0xc289,	// (0x000386a4) loc_type_pane_t3_ParamLimits

0xc289,	// (0x000386a4) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003b71c) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003b71c) loc_type_pane_t

0xc29b,	// (0x000386b6) list_loc_req_pane

0xc2a5,	// (0x000386c0) scroll_pane_cp012

0x37b4,	// (0x0002fbcf) list_single_loc_request_popup_menu_pane_ParamLimits

0x37b4,	// (0x0002fbcf) list_single_loc_request_popup_menu_pane

0xc2b0,	// (0x000386cb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc2b0,	// (0x000386cb) list_single_loc_request_popup_menu_pane_g1

0xc2bc,	// (0x000386d7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc2bc,	// (0x000386d7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003b723) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003b723) list_single_loc_request_popup_menu_pane_g

0xc2c8,	// (0x000386e3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc2c8,	// (0x000386e3) list_single_loc_request_popup_menu_pane_t1

0xbb0c,	// (0x00037f27) bg_popup_window_pane_cp03_ParamLimits

0xbb0c,	// (0x00037f27) bg_popup_window_pane_cp03

0xc6da,	// (0x00038af5) heading_loc_req_pane_ParamLimits

0xc6da,	// (0x00038af5) heading_loc_req_pane

0x37c1,	// (0x0002fbdc) popup_dyc_status_message_window_g1_ParamLimits

0x37c1,	// (0x0002fbdc) popup_dyc_status_message_window_g1

0x37d5,	// (0x0002fbf0) popup_dyc_status_message_window_t1_ParamLimits

0x37d5,	// (0x0002fbf0) popup_dyc_status_message_window_t1

0x37ea,	// (0x0002fc05) popup_dyc_status_message_window_t2_ParamLimits

0x37ea,	// (0x0002fc05) popup_dyc_status_message_window_t2

0x37ff,	// (0x0002fc1a) popup_dyc_status_message_window_t3_ParamLimits

0x37ff,	// (0x0002fc1a) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003b728) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003b728) popup_dyc_status_message_window_t

0xb154,	// (0x0003756f) bg_heading_pane_cp01

0xc2de,	// (0x000386f9) heading_loc_req_pane_g1

0xc2e6,	// (0x00038701) heading_loc_req_pane_g2

0xc2ee,	// (0x00038709) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003b72f) heading_loc_req_pane_g

0xc2f6,	// (0x00038711) heading_loc_req_pane_t1

0xc305,	// (0x00038720) bg_popup_sub_pane_cp01_ParamLimits

0xc305,	// (0x00038720) bg_popup_sub_pane_cp01

0xc313,	// (0x0003872e) popup_cale_events_window_g1_ParamLimits

0xc313,	// (0x0003872e) popup_cale_events_window_g1

0xc333,	// (0x0003874e) popup_cale_events_window_g2_ParamLimits

0xc333,	// (0x0003874e) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003b763) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003b763) popup_cale_events_window_g

0xc353,	// (0x0003876e) popup_cale_events_window_t1_ParamLimits

0xc353,	// (0x0003876e) popup_cale_events_window_t1

0xc365,	// (0x00038780) popup_cale_events_window_t2_ParamLimits

0xc365,	// (0x00038780) popup_cale_events_window_t2

0xc3a3,	// (0x000387be) popup_cale_events_window_t3_ParamLimits

0xc3a3,	// (0x000387be) popup_cale_events_window_t3

0xc3dd,	// (0x000387f8) popup_cale_events_window_t4_ParamLimits

0xc3dd,	// (0x000387f8) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003b768) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003b768) popup_cale_events_window_t

0x3902,	// (0x0002fd1d) call_type_pane

0x3912,	// (0x0002fd2d) popup_call_status_window_g1

0x3926,	// (0x0002fd41) popup_call_status_window_g2

0x393a,	// (0x0002fd55) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003b771) popup_call_status_window_g

0xc413,	// (0x0003882e) call_type_pane_g1

0xc41c,	// (0x00038837) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003b778) call_type_pane_g

0xb154,	// (0x0003756f) bg_popup_sub_pane_cp02

0xc425,	// (0x00038840) listscroll_popup_wml_pane

0xc42d,	// (0x00038848) list_wml_pane

0xc437,	// (0x00038852) scroll_pane_cp013

0xc442,	// (0x0003885d) list_single_graphic_popup_wml_pane_ParamLimits

0xc442,	// (0x0003885d) list_single_graphic_popup_wml_pane

0xbc26,	// (0x00038041) list_single_graphic_popup_wml_pane_g1

0xc456,	// (0x00038871) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003b77d) list_single_graphic_popup_wml_pane_g

0xc45e,	// (0x00038879) list_single_graphic_popup_wml_pane_t1

0xc474,	// (0x0003888f) aid_call_pane

0xbb04,	// (0x00037f1f) popup_clock_analogue_window_g1

0xbb04,	// (0x00037f1f) popup_clock_analogue_window_g2

0xb36a,	// (0x00037785) popup_clock_analogue_window_g3

0xb36a,	// (0x00037785) popup_clock_analogue_window_g4

0xbc26,	// (0x00038041) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003b782) popup_clock_analogue_window_g

0xb372,	// (0x0003778d) popup_clock_analogue_window_t1

0xb380,	// (0x0003779b) clock_digital_number_pane_ParamLimits

0xb380,	// (0x0003779b) clock_digital_number_pane

0xb38c,	// (0x000377a7) clock_digital_number_pane_cp02_ParamLimits

0xb38c,	// (0x000377a7) clock_digital_number_pane_cp02

0xb398,	// (0x000377b3) clock_digital_number_pane_cp03_ParamLimits

0xb398,	// (0x000377b3) clock_digital_number_pane_cp03

0xb3a4,	// (0x000377bf) clock_digital_number_pane_cp04_ParamLimits

0xb3a4,	// (0x000377bf) clock_digital_number_pane_cp04

0xb3b4,	// (0x000377cf) clock_digital_separator_pane_ParamLimits

0xb3b4,	// (0x000377cf) clock_digital_separator_pane

0xb3c0,	// (0x000377db) popup_clock_digital_window_t1

0xbc26,	// (0x00038041) clock_digital_number_pane_g1

0xbc26,	// (0x00038041) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003b6f0) clock_digital_number_pane_g

0xbc26,	// (0x00038041) clock_digital_separator_pane_g1

0xbc26,	// (0x00038041) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003b6f0) clock_digital_separator_pane_g

0xb154,	// (0x0003756f) bg_popup_window_pane_cp04

0xc47c,	// (0x00038897) heading_pane_cp03

0xc484,	// (0x0003889f) listscroll_popup_gms_pane

0xc48c,	// (0x000388a7) grid_large_graphic_popup_pane

0xc496,	// (0x000388b1) listscroll_popup_gms_pane_g1

0xc49e,	// (0x000388b9) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003b78d) listscroll_popup_gms_pane_g

0xbf3f,	// (0x0003835a) scroll_pane_cp014

0x3949,	// (0x0002fd64) cell_large_graphic_popup_pane_ParamLimits

0x3949,	// (0x0002fd64) cell_large_graphic_popup_pane

0x3961,	// (0x0002fd7c) cell_large_graphic_popup_pane_g1_ParamLimits

0x3961,	// (0x0002fd7c) cell_large_graphic_popup_pane_g1

0xc4a6,	// (0x000388c1) cell_large_graphic_popup_pane_g2_ParamLimits

0xc4a6,	// (0x000388c1) cell_large_graphic_popup_pane_g2

0xc4b2,	// (0x000388cd) cell_large_graphic_popup_pane_g3_ParamLimits

0xc4b2,	// (0x000388cd) cell_large_graphic_popup_pane_g3

0xc4bf,	// (0x000388da) cell_large_graphic_popup_pane_g4_ParamLimits

0xc4bf,	// (0x000388da) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003b792) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003b792) cell_large_graphic_popup_pane_g

0xc4cf,	// (0x000388ea) grid_highlight_pane_cp010

0xbc26,	// (0x00038041) bg_popup_call_pane_g1

0xc4d9,	// (0x000388f4) list_single_graphic_popup_conf_pane_ParamLimits

0xc4d9,	// (0x000388f4) list_single_graphic_popup_conf_pane

0xc4ec,	// (0x00038907) list_highlight_pane_cp01

0xc4f5,	// (0x00038910) list_single_graphic_popup_conf_pane_g1

0xc4fd,	// (0x00038918) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003b79b) list_single_graphic_popup_conf_pane_g

0xc505,	// (0x00038920) list_single_graphic_popup_conf_pane_t1

0xc513,	// (0x0003892e) linegrid_cams_pane_g1

0x396d,	// (0x0002fd88) linegrid_cams_pane_g2

0xbd7c,	// (0x00038197) linegrid_cams_pane_g3

0xc51c,	// (0x00038937) linegrid_cams_pane_g4

0x3976,	// (0x0002fd91) linegrid_cams_pane_g5

0x397f,	// (0x0002fd9a) linegrid_cams_pane_g6

0xbd85,	// (0x000381a0) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003b7a0) linegrid_cams_pane_g

0xc525,	// (0x00038940) popup_clock_analogue_window

0xc525,	// (0x00038940) popup_clock_digital_window

0xb154,	// (0x0003756f) popup_phob_thumbnail_window

0xbc26,	// (0x00038041) call_video_uplink_pane_g1

0xc52e,	// (0x00038949) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003b7af) call_video_uplink_pane_g

0xc536,	// (0x00038951) video_uplink_pane

0xc53e,	// (0x00038959) mce_image_pane_g1

0x398a,	// (0x0002fda5) mce_image_pane_g2

0x3994,	// (0x0002fdaf) mce_image_pane_g3

0x399c,	// (0x0002fdb7) mce_image_pane_g4

0x39a4,	// (0x0002fdbf) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003b7b4) mce_image_pane_g

0xc548,	// (0x00038963) control_top_pane_stacon_cp01_ParamLimits

0xc548,	// (0x00038963) control_top_pane_stacon_cp01

0xc55c,	// (0x00038977) uni_indicator_pane_stacon_cp01_ParamLimits

0xc55c,	// (0x00038977) uni_indicator_pane_stacon_cp01

0xc56d,	// (0x00038988) bg_popup_sub_pane_cp03

0xc577,	// (0x00038992) chi_dic_find_pane

0x39ac,	// (0x0002fdc7) listscroll_chi_dic_pane

0xc57f,	// (0x0003899a) main_pane_chidic_g1

0xc587,	// (0x000389a2) chi_dic_find_pane_t1

0xc595,	// (0x000389b0) find_chidic_pane

0xc59e,	// (0x000389b9) chi_dic_list_pane_ParamLimits

0xc59e,	// (0x000389b9) chi_dic_list_pane

0xc5af,	// (0x000389ca) scroll_pane_cp020

0xc5b7,	// (0x000389d2) find_chidic_pane_t1

0xb154,	// (0x0003756f) input_focus_pane_cp06

0x39c0,	// (0x0002fddb) list_chi_dic_pane_ParamLimits

0x39c0,	// (0x0002fddb) list_chi_dic_pane

0x39d2,	// (0x0002fded) list_chi_dic_pane_t1_ParamLimits

0x39d2,	// (0x0002fded) list_chi_dic_pane_t1

0xb154,	// (0x0003756f) list_highlight_pane_cp020

0xc5c6,	// (0x000389e1) bg_cale_heading_pane_g1

0x39e5,	// (0x0002fe00) bg_cale_heading_pane_g2

0x39ed,	// (0x0002fe08) bg_cale_heading_pane_g3

0x39f5,	// (0x0002fe10) bg_cale_heading_pane_g4

0x39ff,	// (0x0002fe1a) bg_cale_heading_pane_g5

0x3a09,	// (0x0002fe24) bg_cale_heading_pane_g6

0x3a11,	// (0x0002fe2c) bg_cale_heading_pane_g7

0x3a19,	// (0x0002fe34) bg_cale_heading_pane_g8

0x3a23,	// (0x0002fe3e) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003b7bf) bg_cale_heading_pane_g

0xc5c6,	// (0x000389e1) bg_cale_side_pane_g1

0x3a2d,	// (0x0002fe48) bg_cale_side_pane_g2

0x3a35,	// (0x0002fe50) bg_cale_side_pane_g3

0x3a3d,	// (0x0002fe58) bg_cale_side_pane_g4

0x3a45,	// (0x0002fe60) bg_cale_side_pane_g5

0x3a4d,	// (0x0002fe68) bg_cale_side_pane_g6

0x3a55,	// (0x0002fe70) bg_cale_side_pane_g7

0x3a5d,	// (0x0002fe78) bg_cale_side_pane_g8

0x3a65,	// (0x0002fe80) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003b7d2) bg_cale_side_pane_g

0x3a6d,	// (0x0002fe88) popup_call_status_window_ParamLimits

0x3a6d,	// (0x0002fe88) popup_call_status_window

0xc5ce,	// (0x000389e9) stacon_top_pane

0xc5d6,	// (0x000389f1) status_pane_ParamLimits

0xc5d6,	// (0x000389f1) status_pane

0xc5eb,	// (0x00038a06) status_small_pane

0xc5f3,	// (0x00038a0e) control_pane

0xb154,	// (0x0003756f) stacon_bottom_pane

0xc5fb,	// (0x00038a16) list_single_mce_smart_pane_t1_ParamLimits

0xc5fb,	// (0x00038a16) list_single_mce_smart_pane_t1

0xc60e,	// (0x00038a29) list_single_mce_smart_pane_t2_ParamLimits

0xc60e,	// (0x00038a29) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003b7e5) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003b7e5) list_single_mce_smart_pane_t

0x3ab6,	// (0x0002fed1) compass_pane

0x3abf,	// (0x0002feda) main_location2_pane_t1

0x3ad1,	// (0x0002feec) main_location2_pane_t2

0x3ae3,	// (0x0002fefe) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003b7ea) main_location2_pane_t

0xc62d,	// (0x00038a48) compass_pane_g1_ParamLimits

0xc62d,	// (0x00038a48) compass_pane_g1

0x3b27,	// (0x0002ff42) compass_pane_t1

0x3b36,	// (0x0002ff51) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003b7f3) compass_pane_t

0x3b7d,	// (0x0002ff98) text_secondary_cp61

0xc6a9,	// (0x00038ac4) navi_pane_cams_g5

0xc73f,	// (0x00038b5a) navi_pane_im_t1

0xc74d,	// (0x00038b68) navi_pane_mp_g1_ParamLimits

0xc74d,	// (0x00038b68) navi_pane_mp_g1

0xc761,	// (0x00038b7c) navi_pane_mp_g2_ParamLimits

0xc761,	// (0x00038b7c) navi_pane_mp_g2

0xc76d,	// (0x00038b88) navi_pane_mp_g3_ParamLimits

0xc76d,	// (0x00038b88) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003b807) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003b807) navi_pane_mp_g

0xc779,	// (0x00038b94) navi_pane_mp_t1

0xc787,	// (0x00038ba2) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003b80e) navi_pane_mp_t

0xc7f2,	// (0x00038c0d) navi_pane_vt_g1

0xc779,	// (0x00038b94) navi_pane_vt_t1

0xc7fa,	// (0x00038c15) navi_slider_pane

0xbd96,	// (0x000381b1) zooming_pane

0xc80a,	// (0x00038c25) navi_slider_pane_g1

0xb3dd,	// (0x000377f8) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003b815) navi_slider_pane_g

0xc82e,	// (0x00038c49) aid_levels_zoom

0xc836,	// (0x00038c51) zooming_pane_g1

0xc83e,	// (0x00038c59) zooming_pane_g2

0xc83e,	// (0x00038c59) zooming_pane_g3

0x0002,

0xf409,	// (0x0003b824) zooming_pane_g

0xc846,	// (0x00038c61) level_10_zoom

0xc84f,	// (0x00038c6a) level_11_zoom

0xc858,	// (0x00038c73) level_1_zoom

0xc861,	// (0x00038c7c) level_2_zoom

0xc86a,	// (0x00038c85) level_3_zoom

0xc873,	// (0x00038c8e) level_4_zoom

0xc87c,	// (0x00038c97) level_5_zoom

0xc885,	// (0x00038ca0) level_6_zoom

0xc88e,	// (0x00038ca9) level_7_zoom

0xc897,	// (0x00038cb2) level_8_zoom

0xc8a0,	// (0x00038cbb) level_9_zoom

0xc8b1,	// (0x00038ccc) popup_phob_thumbnail_window_g1

0xc8b9,	// (0x00038cd4) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003b82b) popup_phob_thumbnail_window_g

0xdc24,	// (0x0003a03f) level_1_location

0xdc2c,	// (0x0003a047) level_2_location

0xdc34,	// (0x0003a04f) level_3_location

0xdc3c,	// (0x0003a057) level_4_location

0xbd96,	// (0x000381b1) level_5_location

0x3bce,	// (0x0002ffe9) mce_icon_pane_g1

0x3bd8,	// (0x0002fff3) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003b830) mce_icon_pane_g

0x3be0,	// (0x0002fffb) main_mup_pane_g1_ParamLimits

0x3be0,	// (0x0002fffb) main_mup_pane_g1

0x3bf6,	// (0x00030011) main_mup_pane_g2_ParamLimits

0x3bf6,	// (0x00030011) main_mup_pane_g2

0x3c0e,	// (0x00030029) main_mup_pane_g3_ParamLimits

0x3c0e,	// (0x00030029) main_mup_pane_g3

0x3c26,	// (0x00030041) main_mup_pane_g4_ParamLimits

0x3c26,	// (0x00030041) main_mup_pane_g4

0x3c3e,	// (0x00030059) main_mup_pane_g5_ParamLimits

0x3c3e,	// (0x00030059) main_mup_pane_g5

0x3c5a,	// (0x00030075) main_mup_pane_g6_ParamLimits

0x3c5a,	// (0x00030075) main_mup_pane_g6

0x3c72,	// (0x0003008d) main_mup_pane_g7_ParamLimits

0x3c72,	// (0x0003008d) main_mup_pane_g7

0x3c8a,	// (0x000300a5) main_mup_pane_g8_ParamLimits

0x3c8a,	// (0x000300a5) main_mup_pane_g8

0x3ca4,	// (0x000300bf) main_mup_pane_g9_ParamLimits

0x3ca4,	// (0x000300bf) main_mup_pane_g9

0x3cbe,	// (0x000300d9) main_mup_pane_g10_ParamLimits

0x3cbe,	// (0x000300d9) main_mup_pane_g10

0x3cd8,	// (0x000300f3) main_mup_pane_g11_ParamLimits

0x3cd8,	// (0x000300f3) main_mup_pane_g11

0x3cec,	// (0x00030107) main_mup_pane_g12_ParamLimits

0x3cec,	// (0x00030107) main_mup_pane_g12

0x3d02,	// (0x0003011d) main_mup_pane_g13_ParamLimits

0x3d02,	// (0x0003011d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003b835) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003b835) main_mup_pane_g

0x3d16,	// (0x00030131) main_mup_pane_t1_ParamLimits

0x3d16,	// (0x00030131) main_mup_pane_t1

0x3d30,	// (0x0003014b) main_mup_pane_t2_ParamLimits

0x3d30,	// (0x0003014b) main_mup_pane_t2

0x3d48,	// (0x00030163) main_mup_pane_t3_ParamLimits

0x3d48,	// (0x00030163) main_mup_pane_t3

0x3d60,	// (0x0003017b) main_mup_pane_t4_ParamLimits

0x3d60,	// (0x0003017b) main_mup_pane_t4

0x3d7e,	// (0x00030199) main_mup_pane_t5_ParamLimits

0x3d7e,	// (0x00030199) main_mup_pane_t5

0x3d93,	// (0x000301ae) main_mup_pane_t6_ParamLimits

0x3d93,	// (0x000301ae) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003b850) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003b850) main_mup_pane_t

0x3da5,	// (0x000301c0) mup_progress_pane_ParamLimits

0x3da5,	// (0x000301c0) mup_progress_pane

0x3db1,	// (0x000301cc) mup_visualizer_pane_ParamLimits

0x3db1,	// (0x000301cc) mup_visualizer_pane

0x3de1,	// (0x000301fc) mup_volume_pane_ParamLimits

0x3de1,	// (0x000301fc) mup_volume_pane

0xc8c1,	// (0x00038cdc) mup_visualizer_pane_g1_ParamLimits

0xc8c1,	// (0x00038cdc) mup_visualizer_pane_g1

0xc8c1,	// (0x00038cdc) mup_visualizer_pane_g2_ParamLimits

0xc8c1,	// (0x00038cdc) mup_visualizer_pane_g2

0xc62d,	// (0x00038a48) mup_visualizer_pane_g3_ParamLimits

0xc62d,	// (0x00038a48) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003b85d) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003b85d) mup_visualizer_pane_g

0xbc26,	// (0x00038041) mup_volume_pane_g1

0xc8d7,	// (0x00038cf2) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003b864) mup_volume_pane_g

0xbc26,	// (0x00038041) mup_progress_pane_g1

0xc8e0,	// (0x00038cfb) mup_progress_pane_g2

0xc8e9,	// (0x00038d04) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003b869) mup_progress_pane_g

0xb154,	// (0x0003756f) bg_popup_window_pane_cp05

0xc8f2,	// (0x00038d0d) heading_pane_cp02_ParamLimits

0xc8f2,	// (0x00038d0d) heading_pane_cp02

0xc90c,	// (0x00038d27) list_popup_blid_pane

0xc914,	// (0x00038d2f) list_blid_sat_info_pane_ParamLimits

0xc914,	// (0x00038d2f) list_blid_sat_info_pane

0xc927,	// (0x00038d42) list_blid_sat_info_pane_g1

0xc92f,	// (0x00038d4a) list_blid_sat_info_pane_t1

0x3ef7,	// (0x00030312) mup_equalizer_pane_ParamLimits

0x3ef7,	// (0x00030312) mup_equalizer_pane

0x3f10,	// (0x0003032b) mup_equalizer_pane_cp1_ParamLimits

0x3f10,	// (0x0003032b) mup_equalizer_pane_cp1

0x3f2d,	// (0x00030348) mup_equalizer_pane_cp2_ParamLimits

0x3f2d,	// (0x00030348) mup_equalizer_pane_cp2

0x3f4a,	// (0x00030365) mup_equalizer_pane_cp3_ParamLimits

0x3f4a,	// (0x00030365) mup_equalizer_pane_cp3

0x3f6b,	// (0x00030386) mup_equalizer_pane_cp4_ParamLimits

0x3f6b,	// (0x00030386) mup_equalizer_pane_cp4

0x3f8c,	// (0x000303a7) mup_equalizer_pane_cp5

0x3fa0,	// (0x000303bb) mup_equalizer_pane_cp6

0x3fb4,	// (0x000303cf) mup_equalizer_pane_cp7

0xdb42,	// (0x00039f5d) bg_popup_call_poc_act_pane_g9

0xdb4a,	// (0x00039f65) bg_popup_call_poc_act_pane_g10

0xdb52,	// (0x00039f6d) bg_popup_call_poc_act_pane_g11

0x000a,

0xbb0c,	// (0x00037f27) mup_scale_pane

0xbc26,	// (0x00038041) mup_scale_pane_g1

0xc93d,	// (0x00038d58) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003b885) mup_scale_pane_g

0xc961,	// (0x00038d7c) msg_data_pane

0xc969,	// (0x00038d84) scroll_pane_cp017

0x3fda,	// (0x000303f5) bg_list_pane_cp04_ParamLimits

0x3fda,	// (0x000303f5) bg_list_pane_cp04

0xc979,	// (0x00038d94) msg_data_pane_g1

0x3ff2,	// (0x0003040d) msg_data_pane_g2

0x3ffc,	// (0x00030417) msg_data_pane_g3

0x4004,	// (0x0003041f) msg_data_pane_g4

0x400c,	// (0x00030427) msg_data_pane_g5

0x4014,	// (0x0003042f) msg_data_pane_g6

0x401c,	// (0x00030437) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003b894) msg_data_pane_g

0x4024,	// (0x0003043f) msg_text_pane_ParamLimits

0x4024,	// (0x0003043f) msg_text_pane

0x404f,	// (0x0003046a) qrid_highlight_pane_cp011_ParamLimits

0x404f,	// (0x0003046a) qrid_highlight_pane_cp011

0xb154,	// (0x0003756f) msg_body_pane

0xb154,	// (0x0003756f) msg_header_pane

0xc98a,	// (0x00038da5) input_focus_pane_cp07

0xc99f,	// (0x00038dba) msg_header_pane_t1_ParamLimits

0xc99f,	// (0x00038dba) msg_header_pane_t1

0xc9b1,	// (0x00038dcc) msg_header_pane_t2_ParamLimits

0xc9b1,	// (0x00038dcc) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003b8a8) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003b8a8) msg_header_pane_t

0xc9c3,	// (0x00038dde) msg_body_pane_g1

0xc9cb,	// (0x00038de6) msg_body_pane_t1_ParamLimits

0xc9cb,	// (0x00038de6) msg_body_pane_t1

0xc9fc,	// (0x00038e17) msg_body_pane_t2_ParamLimits

0xc9fc,	// (0x00038e17) msg_body_pane_t2

0xca0e,	// (0x00038e29) msg_body_pane_t3_ParamLimits

0xca0e,	// (0x00038e29) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003b8ad) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003b8ad) msg_body_pane_t

0x0658,	// (0x0002ca73) main_viewer_pane_g1_ParamLimits

0x0658,	// (0x0002ca73) main_viewer_pane_g1

0x0666,	// (0x0002ca81) main_viewer_pane_g2_ParamLimits

0x0666,	// (0x0002ca81) main_viewer_pane_g2

0x4091,	// (0x000304ac) main_viewer_pane_g3_ParamLimits

0x4091,	// (0x000304ac) main_viewer_pane_g3

0x40a0,	// (0x000304bb) main_viewer_pane_g4_ParamLimits

0x40a0,	// (0x000304bb) main_viewer_pane_g4

0xb407,	// (0x00037822) main_viewer_pane_g5_ParamLimits

0xb407,	// (0x00037822) main_viewer_pane_g5

0xb407,	// (0x00037822) main_viewer_pane_g7_ParamLimits

0xb407,	// (0x00037822) main_viewer_pane_g7

0xc2b0,	// (0x000386cb) main_viewer_pane_g8_ParamLimits

0xc2b0,	// (0x000386cb) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003b8bd) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003b8bd) main_viewer_pane_g

0xca20,	// (0x00038e3b) viewer_content_pane_ParamLimits

0xca20,	// (0x00038e3b) viewer_content_pane

0x40dc,	// (0x000304f7) main_postcard_pane_g1_ParamLimits

0x40dc,	// (0x000304f7) main_postcard_pane_g1

0x40f2,	// (0x0003050d) main_postcard_pane_g2_ParamLimits

0x40f2,	// (0x0003050d) main_postcard_pane_g2

0x4108,	// (0x00030523) main_postcard_pane_g3_ParamLimits

0x4108,	// (0x00030523) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003b8ce) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003b8ce) main_postcard_pane_g

0x411f,	// (0x0003053a) main_postcard_pane_g4

0xdd24,	// (0x0003a13f) smil_status_volume_pane_g2

0x4162,	// (0x0003057d) postcard_pane_ParamLimits

0x4162,	// (0x0003057d) postcard_pane

0xca2e,	// (0x00038e49) postcard_pane_g1_ParamLimits

0xca2e,	// (0x00038e49) postcard_pane_g1

0x41a4,	// (0x000305bf) postcard_pane_g2_ParamLimits

0x41a4,	// (0x000305bf) postcard_pane_g2

0x41b0,	// (0x000305cb) postcard_pane_g3_ParamLimits

0x41b0,	// (0x000305cb) postcard_pane_g3

0xca3c,	// (0x00038e57) postcard_pane_g4_ParamLimits

0xca3c,	// (0x00038e57) postcard_pane_g4

0x41bc,	// (0x000305d7) postcard_pane_g5_ParamLimits

0x41bc,	// (0x000305d7) postcard_pane_g5

0x41d1,	// (0x000305ec) postcard_pane_g6_ParamLimits

0x41d1,	// (0x000305ec) postcard_pane_g6

0xca2e,	// (0x00038e49) postcard_pane_g7_ParamLimits

0xca2e,	// (0x00038e49) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003b8db) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003b8db) postcard_pane_g

0x41e5,	// (0x00030600) main_mp2_pane_g1_ParamLimits

0x41e5,	// (0x00030600) main_mp2_pane_g1

0x41f1,	// (0x0003060c) main_mp2_pane_g2_ParamLimits

0x41f1,	// (0x0003060c) main_mp2_pane_g2

0x41fd,	// (0x00030618) main_mp2_pane_g3_ParamLimits

0x41fd,	// (0x00030618) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003b8ea) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003b8ea) main_mp2_pane_g

0x4209,	// (0x00030624) main_mp2_pane_t1_ParamLimits

0x4209,	// (0x00030624) main_mp2_pane_t1

0x421e,	// (0x00030639) main_mp2_pane_t2_ParamLimits

0x421e,	// (0x00030639) main_mp2_pane_t2

0x4230,	// (0x0003064b) main_mp2_pane_t3_ParamLimits

0x4230,	// (0x0003064b) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003b8f1) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003b8f1) main_mp2_pane_t

0xca4a,	// (0x00038e65) pec_content_pane_ParamLimits

0xca4a,	// (0x00038e65) pec_content_pane

0xbf3f,	// (0x0003835a) scroll_pane_cp015

0xca5c,	// (0x00038e77) pec_attribute_pane_ParamLimits

0xca5c,	// (0x00038e77) pec_attribute_pane

0x4242,	// (0x0003065d) pec_content_pane_g1_ParamLimits

0x4242,	// (0x0003065d) pec_content_pane_g1

0xca6c,	// (0x00038e87) pec_content_pane_t1_ParamLimits

0xca6c,	// (0x00038e87) pec_content_pane_t1

0xca7e,	// (0x00038e99) pec_content_pane_t2_ParamLimits

0xca7e,	// (0x00038e99) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003b8f8) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003b8f8) pec_content_pane_t

0x424e,	// (0x00030669) list_single_graphic_pane_cp01_ParamLimits

0x424e,	// (0x00030669) list_single_graphic_pane_cp01

0xbb0c,	// (0x00037f27) bg_popup_sub_pane_cp04

0xca90,	// (0x00038eab) popup_mup_playback_window_g1

0xca9c,	// (0x00038eb7) popup_mup_playback_window_t1

0xcab1,	// (0x00038ecc) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003b8fd) popup_mup_playback_window_t

0xcae8,	// (0x00038f03) main_image_pane_g1_ParamLimits

0xcae8,	// (0x00038f03) main_image_pane_g1

0xcb2b,	// (0x00038f46) scroll_pane_cp018_ParamLimits

0xcb2b,	// (0x00038f46) scroll_pane_cp018

0xcb43,	// (0x00038f5e) scroll_pane_cp016_ParamLimits

0xcb43,	// (0x00038f5e) scroll_pane_cp016

0x431b,	// (0x00030736) smil2_image_pane_ParamLimits

0x431b,	// (0x00030736) smil2_image_pane

0x434b,	// (0x00030766) smil2_root_pane_ParamLimits

0x434b,	// (0x00030766) smil2_root_pane

0x4383,	// (0x0003079e) smil2_text_pane_ParamLimits

0x4383,	// (0x0003079e) smil2_text_pane

0xb154,	// (0x0003756f) bg_list_pane_cp06

0xcb7f,	// (0x00038f9a) grid_radio_pane

0xb154,	// (0x0003756f) bg_popup_window_pane_cp06

0xcb87,	// (0x00038fa2) main_fmradio_pane_t1

0xc47c,	// (0x00038897) heading_pane_cp04

0xcb95,	// (0x00038fb0) main_fmradio_pane_t2

0xdb5a,	// (0x00039f75) popup_cale_lunar_info_window_g1

0xcba3,	// (0x00038fbe) main_fmradio_pane_t3

0xdb62,	// (0x00039f7d) popup_cale_lunar_info_window_g2

0xcbb1,	// (0x00038fcc) main_fmradio_pane_t4

0x0001,

0xcbbf,	// (0x00038fda) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003b9d8) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003b912) main_fmradio_pane_t

0xcbcd,	// (0x00038fe8) wait_bar_pane_cp03

0xcbd5,	// (0x00038ff0) cell_fmradio_pane_ParamLimits

0xcbd5,	// (0x00038ff0) cell_fmradio_pane

0xca2e,	// (0x00038e49) cell_fmradio_pane_g1_ParamLimits

0xca2e,	// (0x00038e49) cell_fmradio_pane_g1

0xb154,	// (0x0003756f) grid_highlight_pane_cp011

0xcbe8,	// (0x00039003) poc_content_pane_ParamLimits

0xcbe8,	// (0x00039003) poc_content_pane

0xcbfa,	// (0x00039015) scroll_pane_cp019

0x4403,	// (0x0003081e) popup_call_poc_act_window_ParamLimits

0x4403,	// (0x0003081e) popup_call_poc_act_window

0x4427,	// (0x00030842) popup_call_poc_inact_window_ParamLimits

0x4427,	// (0x00030842) popup_call_poc_inact_window

0xf594,	// (0x0003b9af) bg_popup_call_poc_act_pane_g

0xdad2,	// (0x00039eed) bg_popup_call_poc_inact_pane_g1

0xdada,	// (0x00039ef5) bg_popup_call_poc_inact_pane_g2

0xcc02,	// (0x0003901d) popup_call_poc_act_window_g2

0xdae2,	// (0x00039efd) bg_popup_call_poc_inact_pane_g3

0xdaea,	// (0x00039f05) bg_popup_call_poc_inact_pane_g4

0xdaf2,	// (0x00039f0d) bg_popup_call_poc_inact_pane_g5

0xcc0a,	// (0x00039025) popup_call_poc_act_window_t1_ParamLimits

0xcc0a,	// (0x00039025) popup_call_poc_act_window_t1

0xcc32,	// (0x0003904d) popup_call_poc_act_window_t2_ParamLimits

0xcc32,	// (0x0003904d) popup_call_poc_act_window_t2

0xcc5a,	// (0x00039075) popup_call_poc_act_window_t3_ParamLimits

0xcc5a,	// (0x00039075) popup_call_poc_act_window_t3

0xcc82,	// (0x0003909d) popup_call_poc_act_window_t4_ParamLimits

0xcc82,	// (0x0003909d) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003b91d) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003b91d) popup_call_poc_act_window_t

0xdafa,	// (0x00039f15) bg_popup_call_poc_inact_pane_g6

0xdb02,	// (0x00039f1d) bg_popup_call_poc_inact_pane_g7

0xdb0a,	// (0x00039f25) bg_popup_call_poc_inact_pane_g8

0xcc94,	// (0x000390af) popup_call_poc_inact_window_g2

0xdb12,	// (0x00039f2d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003b99c) bg_popup_call_poc_inact_pane_g

0xcc9c,	// (0x000390b7) popup_call_poc_inact_window_t1_ParamLimits

0xcc9c,	// (0x000390b7) popup_call_poc_inact_window_t1

0xccb1,	// (0x000390cc) popup_call_poc_inact_window_t2_ParamLimits

0xccb1,	// (0x000390cc) popup_call_poc_inact_window_t2

0xccc6,	// (0x000390e1) popup_call_poc_inact_window_t3_ParamLimits

0xccc6,	// (0x000390e1) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003b926) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003b926) popup_call_poc_inact_window_t

0xdc97,	// (0x0003a0b2) context_pane_ParamLimits

0x49ac,	// (0x00030dc7) signal_pane_ParamLimits

0xbd96,	// (0x000381b1) main_call2_pane

0xb452,	// (0x0003786d) popup_phob_thumbnail2_window_ParamLimits

0xb452,	// (0x0003786d) popup_phob_thumbnail2_window

0xb3ef,	// (0x0003780a) aid_hotspot_pointer_arrow_pane

0xb3f7,	// (0x00037812) aid_hotspot_pointer_hand_pane

0x4770,	// (0x00030b8b) phob_pre_status_pane_g5

0x23ae,	// (0x0002e7c9) cams_zoom_pane_ParamLimits

0x23bd,	// (0x0002e7d8) image_vga_pane_ParamLimits

0x23d7,	// (0x0002e7f2) main_camera_pane_g1_ParamLimits

0x23e9,	// (0x0002e804) main_camera_pane_g2_ParamLimits

0x23f9,	// (0x0002e814) main_camera_pane_g3_ParamLimits

0x2409,	// (0x0002e824) main_camera_pane_g4_ParamLimits

0x2419,	// (0x0002e834) main_camera_pane_g5_ParamLimits

0x2429,	// (0x0002e844) main_camera_pane_g6_ParamLimits

0x243b,	// (0x0002e856) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003b625) main_camera_pane_g_ParamLimits

0x244b,	// (0x0002e866) main_camera_pane_t1_ParamLimits

0x2461,	// (0x0002e87c) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003b636) main_camera_pane_t_ParamLimits

0xbb0c,	// (0x00037f27) bg_popup_preview_window_pane_cp01_ParamLimits

0xbb0c,	// (0x00037f27) bg_popup_preview_window_pane_cp01

0xccdb,	// (0x000390f6) popup_phob_thumbnail2_window_g1_ParamLimits

0xccdb,	// (0x000390f6) popup_phob_thumbnail2_window_g1

0xb154,	// (0x0003756f) call2_cli_visual_pane

0x445b,	// (0x00030876) popup_call2_audio_conf_window_ParamLimits

0x445b,	// (0x00030876) popup_call2_audio_conf_window

0x447b,	// (0x00030896) popup_call2_audio_first_window_ParamLimits

0x447b,	// (0x00030896) popup_call2_audio_first_window

0x4511,	// (0x0003092c) popup_call2_audio_in_window_ParamLimits

0x4511,	// (0x0003092c) popup_call2_audio_in_window

0x4559,	// (0x00030974) popup_call2_audio_out_window_ParamLimits

0x4559,	// (0x00030974) popup_call2_audio_out_window

0x45c3,	// (0x000309de) popup_call2_audio_second_window_ParamLimits

0x45c3,	// (0x000309de) popup_call2_audio_second_window

0x4629,	// (0x00030a44) popup_call2_audio_wait_window_ParamLimits

0x4629,	// (0x00030a44) popup_call2_audio_wait_window

0xb154,	// (0x0003756f) bg_popup_call2_act_pane_cp03

0xbaee,	// (0x00037f09) list_conf_pane_cp

0xcce7,	// (0x00039102) popup_call2_audio_conf_window_t1

0xc4d9,	// (0x000388f4) list_single_graphic_popup_conf2_pane_ParamLimits

0xc4d9,	// (0x000388f4) list_single_graphic_popup_conf2_pane

0xc4ec,	// (0x00038907) list_highlight_pane_cp04

0xccf5,	// (0x00039110) list_single_graphic_popup_conf2_pane_g1

0xc4fd,	// (0x00038918) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003b92d) list_single_graphic_popup_conf2_pane_g

0xccff,	// (0x0003911a) list_single_graphic_popup_conf2_pane_t1

0xcd0d,	// (0x00039128) bg_popup_call2_act_pane_cp01_ParamLimits

0xcd0d,	// (0x00039128) bg_popup_call2_act_pane_cp01

0xcd97,	// (0x000391b2) call_type_pane_cp05_ParamLimits

0xcd97,	// (0x000391b2) call_type_pane_cp05

0xcdeb,	// (0x00039206) popup_call2_audio_second_window_g1_ParamLimits

0xcdeb,	// (0x00039206) popup_call2_audio_second_window_g1

0xce3f,	// (0x0003925a) popup_call2_audio_second_window_g2_ParamLimits

0xce3f,	// (0x0003925a) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003b932) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003b932) popup_call2_audio_second_window_g

0xcea4,	// (0x000392bf) popup_call2_audio_second_window_t1_ParamLimits

0xcea4,	// (0x000392bf) popup_call2_audio_second_window_t1

0xcf5f,	// (0x0003937a) popup_call2_audio_second_window_t2_ParamLimits

0xcf5f,	// (0x0003937a) popup_call2_audio_second_window_t2

0xcfb2,	// (0x000393cd) popup_call2_audio_second_window_t3_ParamLimits

0xcfb2,	// (0x000393cd) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003b939) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003b939) popup_call2_audio_second_window_t

0xb154,	// (0x0003756f) bg_popup_call2_in_pane_cp02

0xb15e,	// (0x00037579) call_type_pane_cp04

0xb166,	// (0x00037581) popup_call2_audio_wait_window_g1

0xb16e,	// (0x00037589) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003b514) popup_call2_audio_wait_window_g

0xb176,	// (0x00037591) popup_call2_audio_wait_window_t3

0xd0a5,	// (0x000394c0) bg_popup_call2_act_pane_ParamLimits

0xd0a5,	// (0x000394c0) bg_popup_call2_act_pane

0xd165,	// (0x00039580) call_type_pane_cp03_ParamLimits

0xd165,	// (0x00039580) call_type_pane_cp03

0xd1c9,	// (0x000395e4) popup_call2_audio_first_window_g1_ParamLimits

0xd1c9,	// (0x000395e4) popup_call2_audio_first_window_g1

0xd239,	// (0x00039654) popup_call2_audio_first_window_g2_ParamLimits

0xd239,	// (0x00039654) popup_call2_audio_first_window_g2

0xc8c1,	// (0x00038cdc) popup_call2_audio_first_window_g3_ParamLimits

0xc8c1,	// (0x00038cdc) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003b942) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003b942) popup_call2_audio_first_window_g

0xd317,	// (0x00039732) popup_call2_audio_first_window_t1_ParamLimits

0xd317,	// (0x00039732) popup_call2_audio_first_window_t1

0xd41a,	// (0x00039835) popup_call2_audio_first_window_t4_ParamLimits

0xd41a,	// (0x00039835) popup_call2_audio_first_window_t4

0xd4fd,	// (0x00039918) popup_call2_audio_first_window_t5_ParamLimits

0xd4fd,	// (0x00039918) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003b94d) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003b94d) popup_call2_audio_first_window_t

0xbb04,	// (0x00037f1f) bg_popup_call2_act_pane_g1

0xdb6a,	// (0x00039f85) popup_cale_lunar_info_window_t1

0xdb78,	// (0x00039f93) popup_cale_lunar_info_window_t2

0xdb86,	// (0x00039fa1) popup_cale_lunar_info_window_t3

0xb154,	// (0x0003756f) bg_popup_call2_bubble_pane

0xd5fe,	// (0x00039a19) bg_popup_call2_in_pane_cp01_ParamLimits

0xd5fe,	// (0x00039a19) bg_popup_call2_in_pane_cp01

0xae30,	// (0x0003724b) call_type_pane_cp02

0xd646,	// (0x00039a61) popup_call2_audio_out_window_g1_ParamLimits

0xd646,	// (0x00039a61) popup_call2_audio_out_window_g1

0xd672,	// (0x00039a8d) popup_call2_audio_out_window_g2_ParamLimits

0xd672,	// (0x00039a8d) popup_call2_audio_out_window_g2

0xd69a,	// (0x00039ab5) popup_call2_audio_out_window_g3_ParamLimits

0xd69a,	// (0x00039ab5) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003b956) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003b956) popup_call2_audio_out_window_g

0xd6d5,	// (0x00039af0) popup_call2_audio_out_window_t1_ParamLimits

0xd6d5,	// (0x00039af0) popup_call2_audio_out_window_t1

0xd734,	// (0x00039b4f) popup_call2_audio_out_window_t2_ParamLimits

0xd734,	// (0x00039b4f) popup_call2_audio_out_window_t2

0xd788,	// (0x00039ba3) popup_call2_audio_out_window_t3_ParamLimits

0xd788,	// (0x00039ba3) popup_call2_audio_out_window_t3

0xd79e,	// (0x00039bb9) popup_call2_audio_out_window_t4_ParamLimits

0xd79e,	// (0x00039bb9) popup_call2_audio_out_window_t4

0xd7b4,	// (0x00039bcf) popup_call2_audio_out_window_t5_ParamLimits

0xd7b4,	// (0x00039bcf) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003b95f) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003b95f) popup_call2_audio_out_window_t

0xd818,	// (0x00039c33) bg_popup_call2_in_pane_ParamLimits

0xd818,	// (0x00039c33) bg_popup_call2_in_pane

0xd874,	// (0x00039c8f) popup_call2_audio_in_window_g1_ParamLimits

0xd874,	// (0x00039c8f) popup_call2_audio_in_window_g1

0xd8ac,	// (0x00039cc7) popup_call2_audio_in_window_g2_ParamLimits

0xd8ac,	// (0x00039cc7) popup_call2_audio_in_window_g2

0xd8e4,	// (0x00039cff) popup_call2_audio_in_window_g3_ParamLimits

0xd8e4,	// (0x00039cff) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003b96c) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003b96c) popup_call2_audio_in_window_g

0xd93c,	// (0x00039d57) popup_call2_audio_in_window_t1_ParamLimits

0xd93c,	// (0x00039d57) popup_call2_audio_in_window_t1

0xd9bc,	// (0x00039dd7) popup_call2_audio_in_window_t2_ParamLimits

0xd9bc,	// (0x00039dd7) popup_call2_audio_in_window_t2

0xda3c,	// (0x00039e57) popup_call2_audio_in_window_t3_ParamLimits

0xda3c,	// (0x00039e57) popup_call2_audio_in_window_t3

0xda56,	// (0x00039e71) popup_call2_audio_in_window_t4_ParamLimits

0xda56,	// (0x00039e71) popup_call2_audio_in_window_t4

0xda68,	// (0x00039e83) popup_call2_audio_in_window_t5_ParamLimits

0xda68,	// (0x00039e83) popup_call2_audio_in_window_t5

0xda7d,	// (0x00039e98) popup_call2_audio_in_window_t6_ParamLimits

0xda7d,	// (0x00039e98) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003b975) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003b975) popup_call2_audio_in_window_t

0xbb04,	// (0x00037f1f) bg_popup_call2_in_pane_g1

0xdb94,	// (0x00039faf) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003b9dd) popup_cale_lunar_info_window_t

0xbb0c,	// (0x00037f27) bg_popup_call2_rect_pane_ParamLimits

0xbb0c,	// (0x00037f27) bg_popup_call2_rect_pane

0xb154,	// (0x0003756f) call2_cli_visual_graphic_pane

0xb154,	// (0x0003756f) call2_cli_visual_text_pane

0xb479,	// (0x00037894) smil_status_volume_pane_g3

0x0002,

0xbc26,	// (0x00038041) call2_cli_visual_graphic_pane_g1

0xbc26,	// (0x00038041) call2_cli_visual_graphic_pane_g2

0xbc26,	// (0x00038041) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003b982) call2_cli_visual_graphic_pane_g

0xda92,	// (0x00039ead) bg_popup_call2_rect_pane_g1

0xbcb2,	// (0x000380cd) bg_popup_call2_rect_pane_g2

0xda9a,	// (0x00039eb5) bg_popup_call2_rect_pane_g3

0xdaa2,	// (0x00039ebd) bg_popup_call2_rect_pane_g4

0xdaaa,	// (0x00039ec5) bg_popup_call2_rect_pane_g5

0xdab2,	// (0x00039ecd) bg_popup_call2_rect_pane_g6

0xdaba,	// (0x00039ed5) bg_popup_call2_rect_pane_g7

0xdac2,	// (0x00039edd) bg_popup_call2_rect_pane_g8

0xdaca,	// (0x00039ee5) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003b989) bg_popup_call2_rect_pane_g

0xdad2,	// (0x00039eed) bg_popup_call2_bubble_pane_g1

0xdada,	// (0x00039ef5) bg_popup_call2_bubble_pane_g2

0xdae2,	// (0x00039efd) bg_popup_call2_bubble_pane_g3

0xdaea,	// (0x00039f05) bg_popup_call2_bubble_pane_g4

0xdaf2,	// (0x00039f0d) bg_popup_call2_bubble_pane_g5

0xdafa,	// (0x00039f15) bg_popup_call2_bubble_pane_g6

0xdb02,	// (0x00039f1d) bg_popup_call2_bubble_pane_g7

0xdb0a,	// (0x00039f25) bg_popup_call2_bubble_pane_g8

0xdb12,	// (0x00039f2d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003b99c) bg_popup_call2_bubble_pane_g

0x1ec3,	// (0x0002e2de) aid_cale_week_size_cell_pane

0x2477,	// (0x0002e892) aid_cams_cif_uncrop_pane_ParamLimits

0x2477,	// (0x0002e892) aid_cams_cif_uncrop_pane

0x2627,	// (0x0002ea42) aid_cams_size_cell_ParamLimits

0x2627,	// (0x0002ea42) aid_cams_size_cell

0x263b,	// (0x0002ea56) grid_cams_pane_ParamLimits

0x2655,	// (0x0002ea70) linegrid_cams_pane_ParamLimits

0x2852,	// (0x0002ec6d) call_video_pane_t1

0x2870,	// (0x0002ec8b) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003b689) call_video_pane_t

0x2c9e,	// (0x0002f0b9) aid_cale_month_size_cell_pane_ParamLimits

0x2c9e,	// (0x0002f0b9) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003ba26) smil_status_volume_pane_g

0xb486,	// (0x000378a1) volume_smil_pane_ParamLimits

0x1a9e,	// (0x0002deb9) aid_popup2_width_pane

0x1e1d,	// (0x0002e238) cell_qdial_pane_g4_ParamLimits

0x1e1d,	// (0x0002e238) cell_qdial_pane_g4

0x3b07,	// (0x0002ff22) aid_blid_cardinal_pane_ParamLimits

0x3b13,	// (0x0002ff2e) aid_blid_destination_pane_ParamLimits

0x3b13,	// (0x0002ff2e) aid_blid_destination_pane

0xbb0c,	// (0x00037f27) bg_popup_call_poc_act_pane_ParamLimits

0xbb0c,	// (0x00037f27) bg_popup_call_poc_act_pane

0xbb0c,	// (0x00037f27) bg_popup_call_poc_inact_pane_ParamLimits

0xbb0c,	// (0x00037f27) bg_popup_call_poc_inact_pane

0xdb1a,	// (0x00039f35) bg_popup_call_poc_act_pane_g1

0xdb22,	// (0x00039f3d) bg_popup_call_poc_act_pane_g2

0xdb2a,	// (0x00039f45) bg_popup_call_poc_act_pane_g3

0xdaea,	// (0x00039f05) bg_popup_call_poc_act_pane_g4

0xdaf2,	// (0x00039f0d) bg_popup_call_poc_act_pane_g5

0xdb32,	// (0x00039f4d) bg_popup_call_poc_act_pane_g6

0xdb02,	// (0x00039f1d) bg_popup_call_poc_act_pane_g7

0xdb3a,	// (0x00039f55) bg_popup_call_poc_act_pane_g8

0xb154,	// (0x0003756f) main_usb_pane

0xb42d,	// (0x00037848) popup_cale_lunar_info_window

0x2b4a,	// (0x0002ef65) im_reading_pane_t1_ParamLimits

0xbe97,	// (0x000382b2) list_im_pane_ParamLimits

0xbea8,	// (0x000382c3) scroll_pane_cp07_ParamLimits

0xb154,	// (0x0003756f) grid_highlight_pane_cp012

0xbb0c,	// (0x00037f27) mup_scale_pane_ParamLimits

0xca2e,	// (0x00038e49) main_usb_pane_g1_ParamLimits

0xca2e,	// (0x00038e49) main_usb_pane_g1

0x4685,	// (0x00030aa0) main_usb_pane_g2_ParamLimits

0x4685,	// (0x00030aa0) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003b9c6) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003b9c6) main_usb_pane_g

0x469b,	// (0x00030ab6) main_usb_pane_t1_ParamLimits

0x469b,	// (0x00030ab6) main_usb_pane_t1

0x46ad,	// (0x00030ac8) main_usb_pane_t2_ParamLimits

0x46ad,	// (0x00030ac8) main_usb_pane_t2

0x46bf,	// (0x00030ada) main_usb_pane_t3_ParamLimits

0x46bf,	// (0x00030ada) main_usb_pane_t3

0x46d1,	// (0x00030aec) main_usb_pane_t4_ParamLimits

0x46d1,	// (0x00030aec) main_usb_pane_t4

0x46e3,	// (0x00030afe) main_usb_pane_t5_ParamLimits

0x46e3,	// (0x00030afe) main_usb_pane_t5

0x46f5,	// (0x00030b10) main_usb_pane_t6_ParamLimits

0x46f5,	// (0x00030b10) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003b9cb) main_usb_pane_t_ParamLimits

0x3ab6,	// (0x0002fed1) aid_text_placing

0x3abf,	// (0x0002feda) main_location2_pane_t1_ParamLimits

0x3ad1,	// (0x0002feec) main_location2_pane_t2_ParamLimits

0x3ae3,	// (0x0002fefe) main_location2_pane_t3_ParamLimits

0x3af5,	// (0x0002ff10) main_location2_pane_t4_ParamLimits

0x3af5,	// (0x0002ff10) main_location2_pane_t4

0xf3cf,	// (0x0003b7ea) main_location2_pane_t_ParamLimits

0xbb48,	// (0x00037f63) find_pinb_pane_g2_ParamLimits

0xbb48,	// (0x00037f63) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003b53a) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003b53a) find_pinb_pane_g

0xbb54,	// (0x00037f6f) find_pinb_pane_t1_ParamLimits

0xbb66,	// (0x00037f81) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003b53f) find_pinb_pane_t_ParamLimits

0xb154,	// (0x0003756f) main_call3_pane

0x3189,	// (0x0002f5a4) cale_month_day_heading_pane_t1_ParamLimits

0x320f,	// (0x0002f62a) cale_month_day_heading_pane_t2_ParamLimits

0x3288,	// (0x0002f6a3) cale_month_day_heading_pane_t3_ParamLimits

0x3301,	// (0x0002f71c) cale_month_day_heading_pane_t4_ParamLimits

0x3382,	// (0x0002f79d) cale_month_day_heading_pane_t5_ParamLimits

0x340b,	// (0x0002f826) cale_month_day_heading_pane_t6_ParamLimits

0x3494,	// (0x0002f8af) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003b6c1) cale_month_day_heading_pane_t_ParamLimits

0xc0f2,	// (0x0003850d) smil_status_volume_pane

0x4180,	// (0x0003059b) postcard_address_pane_ParamLimits

0x4180,	// (0x0003059b) postcard_address_pane

0x4192,	// (0x000305ad) postcard_message_pane_ParamLimits

0x4192,	// (0x000305ad) postcard_message_pane

0x4663,	// (0x00030a7e) call2_cli_visual_pane_t1_ParamLimits

0x4663,	// (0x00030a7e) call2_cli_visual_pane_t1

0x4bd9,	// (0x00030ff4) postcard_message_pane_t1_ParamLimits

0x4bd9,	// (0x00030ff4) postcard_message_pane_t1

0x4bc2,	// (0x00030fdd) postcard_address_pane_t1_ParamLimits

0x4bc2,	// (0x00030fdd) postcard_address_pane_t1

0x4bae,	// (0x00030fc9) popup_call3_audio_in_window_ParamLimits

0x4bae,	// (0x00030fc9) popup_call3_audio_in_window

0x4a39,	// (0x00030e54) bg_popup_call3_in_pane_ParamLimits

0x4a39,	// (0x00030e54) bg_popup_call3_in_pane

0x4aaf,	// (0x00030eca) popup_call3_audio_in_window_g1_ParamLimits

0x4aaf,	// (0x00030eca) popup_call3_audio_in_window_g1

0x4acf,	// (0x00030eea) popup_call3_audio_in_window_g2_ParamLimits

0x4acf,	// (0x00030eea) popup_call3_audio_in_window_g2

0x4aef,	// (0x00030f0a) popup_call3_audio_in_window_g3_ParamLimits

0x4aef,	// (0x00030f0a) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003ba2d) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003ba2d) popup_call3_audio_in_window_g

0x4b20,	// (0x00030f3b) popup_call3_audio_in_window_t1_ParamLimits

0x4b20,	// (0x00030f3b) popup_call3_audio_in_window_t1

0x4b5e,	// (0x00030f79) popup_call3_audio_in_window_t2_ParamLimits

0x4b5e,	// (0x00030f79) popup_call3_audio_in_window_t2

0x4b9c,	// (0x00030fb7) popup_call3_audio_in_window_t3_ParamLimits

0x4b9c,	// (0x00030fb7) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003ba36) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003ba36) popup_call3_audio_in_window_t

0xbd96,	// (0x000381b1) bg_popup_call3_rect_pane

0xda92,	// (0x00039ead) bg_popup_call3_rect_pane_g1

0xbcb2,	// (0x000380cd) bg_popup_call3_rect_pane_g2

0xda9a,	// (0x00039eb5) bg_popup_call3_rect_pane_g3

0xdaa2,	// (0x00039ebd) bg_popup_call3_rect_pane_g4

0xdaaa,	// (0x00039ec5) bg_popup_call3_rect_pane_g5

0xdab2,	// (0x00039ecd) bg_popup_call3_rect_pane_g6

0xdaba,	// (0x00039ed5) bg_popup_call3_rect_pane_g7

0x3df7,	// (0x00030212) mup_visualizer_osc_pane

0xc8cf,	// (0x00038cea) mup_visualizer_spec_pane

0x4a69,	// (0x00030e84) call3_video_qcif_pane_ParamLimits

0x4a69,	// (0x00030e84) call3_video_qcif_pane

0x4a7c,	// (0x00030e97) call3_video_qcif_uncrop_pane_ParamLimits

0x4a7c,	// (0x00030e97) call3_video_qcif_uncrop_pane

0x4a8a,	// (0x00030ea5) call3_video_subqcif_pane_ParamLimits

0x4a8a,	// (0x00030ea5) call3_video_subqcif_pane

0x4a9e,	// (0x00030eb9) call3_video_subqcif_uncrop_pane_ParamLimits

0x4a9e,	// (0x00030eb9) call3_video_subqcif_uncrop_pane

0x4b0f,	// (0x00030f2a) popup_call3_audio_in_window_g4_ParamLimits

0x4b0f,	// (0x00030f2a) popup_call3_audio_in_window_g4

0x4a28,	// (0x00030e43) mup_spec_half_pane

0x4a31,	// (0x00030e4c) mup_spec_half_pane_cp

0xdcf7,	// (0x0003a112) mup_osc_middle_pane

0xdd00,	// (0x0003a11b) mup_visualizer_osc_pane_g1

0x4a08,	// (0x00030e23) mup_spec_bar_pane_ParamLimits

0x4a08,	// (0x00030e23) mup_spec_bar_pane

0xdce4,	// (0x0003a0ff) mup_spec_bar_pane_g1

0xdcee,	// (0x0003a109) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003ba21) mup_spec_bar_pane_g

0x1ec3,	// (0x0002e2de) aid_cale_week_size_cell_pane_ParamLimits

0x1edd,	// (0x0002e2f8) bg_cale_heading_pane_ParamLimits

0xbcef,	// (0x0003810a) bg_cale_pane_cp01_ParamLimits

0x1ef5,	// (0x0002e310) cale_week_corner_pane_ParamLimits

0x1f14,	// (0x0002e32f) cale_week_day_heading_pane_ParamLimits

0x1f31,	// (0x0002e34c) cale_week_scroll_pane_g1_ParamLimits

0x1f44,	// (0x0002e35f) cale_week_scroll_pane_g2_ParamLimits

0x1f5c,	// (0x0002e377) cale_week_scroll_pane_g3_ParamLimits

0x1f74,	// (0x0002e38f) cale_week_scroll_pane_g4_ParamLimits

0x1f8c,	// (0x0002e3a7) cale_week_scroll_pane_g5_ParamLimits

0x1fac,	// (0x0002e3c7) cale_week_scroll_pane_g6_ParamLimits

0x1fcc,	// (0x0002e3e7) cale_week_scroll_pane_g7_ParamLimits

0x1fec,	// (0x0002e407) cale_week_scroll_pane_g8_ParamLimits

0x2010,	// (0x0002e42b) cale_week_scroll_pane_g9_ParamLimits

0x2028,	// (0x0002e443) cale_week_scroll_pane_g10_ParamLimits

0x2040,	// (0x0002e45b) cale_week_scroll_pane_g11_ParamLimits

0x2058,	// (0x0002e473) cale_week_scroll_pane_g12_ParamLimits

0x2070,	// (0x0002e48b) cale_week_scroll_pane_g13_ParamLimits

0x2070,	// (0x0002e48b) cale_week_scroll_pane_g14_ParamLimits

0x2070,	// (0x0002e48b) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003b5cb) cale_week_scroll_pane_g_ParamLimits

0x20ac,	// (0x0002e4c7) cale_week_time_pane_ParamLimits

0x20d0,	// (0x0002e4eb) grid_cale_week_pane_ParamLimits

0xbd0c,	// (0x00038127) listscroll_cale_week_pane_t1

0xbd1e,	// (0x00038139) scroll_pane_cp08_ParamLimits

0x2cfe,	// (0x0002f119) cale_month_corner_pane_ParamLimits

0xc0c8,	// (0x000384e3) cale_month_pane_t1

0x311c,	// (0x0002f537) cale_month_week_pane_ParamLimits

0x3912,	// (0x0002fd2d) popup_call_status_window_g1_ParamLimits

0x3926,	// (0x0002fd41) popup_call_status_window_g2_ParamLimits

0x393a,	// (0x0002fd55) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003b771) popup_call_status_window_g_ParamLimits

0xc46c,	// (0x00038887) aid_call2_pane

0x4065,	// (0x00030480) msg_header_pane_g1

0x4180,	// (0x0003059b) postcard_address2_pane_ParamLimits

0x4180,	// (0x0003059b) postcard_address2_pane

0x4192,	// (0x000305ad) postcard_message2_pane_ParamLimits

0x4192,	// (0x000305ad) postcard_message2_pane

0x49ba,	// (0x00030dd5) message2_row_pane_ParamLimits

0x49ba,	// (0x00030dd5) message2_row_pane

0x49d6,	// (0x00030df1) address2_row_pane_ParamLimits

0x49d6,	// (0x00030df1) address2_row_pane

0xdcb2,	// (0x0003a0cd) postcard_message2_row_pane_g1

0xdcba,	// (0x0003a0d5) postcard_message2_row_pane_t1

0xdcb2,	// (0x0003a0cd) address2_row_pane_g1

0xdcba,	// (0x0003a0d5) address2_row_pane_t1

0x2330,	// (0x0002e74b) aid_size_cell_vorec

0xb154,	// (0x0003756f) main_rss_pane

0x49e9,	// (0x00030e04) rss_list_single_pane_ParamLimits

0x49e9,	// (0x00030e04) rss_list_single_pane

0xdcc8,	// (0x0003a0e3) rss_list_single_pane_t1

0xdcd6,	// (0x0003a0f1) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003ba1c) rss_list_single_pane_t

0xb154,	// (0x0003756f) main_camera2_pane

0xb154,	// (0x0003756f) main_video2_pane

0x098e,	// (0x0002cda9) cams_zoom_pane_cp2_ParamLimits

0x098e,	// (0x0002cda9) cams_zoom_pane_cp2

0x09ae,	// (0x0002cdc9) image2_vga_pane_ParamLimits

0x09ae,	// (0x0002cdc9) image2_vga_pane

0x09ff,	// (0x0002ce1a) main_camera2_pane_g1_ParamLimits

0x09ff,	// (0x0002ce1a) main_camera2_pane_g1

0x0a1f,	// (0x0002ce3a) main_camera2_pane_g2_ParamLimits

0x0a1f,	// (0x0002ce3a) main_camera2_pane_g2

0x0a3f,	// (0x0002ce5a) main_camera2_pane_g3_ParamLimits

0x0a3f,	// (0x0002ce5a) main_camera2_pane_g3

0x0a5f,	// (0x0002ce7a) main_camera2_pane_g4_ParamLimits

0x0a5f,	// (0x0002ce7a) main_camera2_pane_g4

0x0a7f,	// (0x0002ce9a) main_camera2_pane_g5_ParamLimits

0x0a7f,	// (0x0002ce9a) main_camera2_pane_g5

0x0a9f,	// (0x0002ceba) main_camera2_pane_g6_ParamLimits

0x0a9f,	// (0x0002ceba) main_camera2_pane_g6

0x0abf,	// (0x0002ceda) main_camera2_pane_g7_ParamLimits

0x0abf,	// (0x0002ceda) main_camera2_pane_g7

0x0adf,	// (0x0002cefa) main_camera2_pane_g8_ParamLimits

0x0adf,	// (0x0002cefa) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003ba3d) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003ba3d) main_camera2_pane_g

0x0b1f,	// (0x0002cf3a) main_camera2_pane_t1_ParamLimits

0x0b1f,	// (0x0002cf3a) main_camera2_pane_t1

0x0b54,	// (0x0002cf6f) main_camera2_pane_t2_ParamLimits

0x0b54,	// (0x0002cf6f) main_camera2_pane_t2

0x0b7a,	// (0x0002cf95) main_camera2_pane_t3_ParamLimits

0x0b7a,	// (0x0002cf95) main_camera2_pane_t3

0x0bd8,	// (0x0002cff3) main_camera2_pane_t4_ParamLimits

0x0bd8,	// (0x0002cff3) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003ba50) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003ba50) main_camera2_pane_t

0x0c6a,	// (0x0002d085) cams_zoom_pane_cp4_ParamLimits

0x0c6a,	// (0x0002d085) cams_zoom_pane_cp4

0x0c80,	// (0x0002d09b) image2_cif_pane_ParamLimits

0x0c80,	// (0x0002d09b) image2_cif_pane

0x0cab,	// (0x0002d0c6) image2_subqcif_pane_ParamLimits

0x0cab,	// (0x0002d0c6) image2_subqcif_pane

0x0cc5,	// (0x0002d0e0) main_video2_pane_g1_ParamLimits

0x0cc5,	// (0x0002d0e0) main_video2_pane_g1

0x0cdf,	// (0x0002d0fa) main_video2_pane_g2_ParamLimits

0x0cdf,	// (0x0002d0fa) main_video2_pane_g2

0x0cf5,	// (0x0002d110) main_video2_pane_g3_ParamLimits

0x0cf5,	// (0x0002d110) main_video2_pane_g3

0x0d0b,	// (0x0002d126) main_video2_pane_g4_ParamLimits

0x0d0b,	// (0x0002d126) main_video2_pane_g4

0x0d21,	// (0x0002d13c) main_video2_pane_g5_ParamLimits

0x0d21,	// (0x0002d13c) main_video2_pane_g5

0x0d37,	// (0x0002d152) main_video2_pane_g6_ParamLimits

0x0d37,	// (0x0002d152) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003ba5f) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003ba5f) main_video2_pane_g

0x0d51,	// (0x0002d16c) main_video2_pane_t1_ParamLimits

0x0d51,	// (0x0002d16c) main_video2_pane_t1

0x0d75,	// (0x0002d190) main_video2_pane_t2_ParamLimits

0x0d75,	// (0x0002d190) main_video2_pane_t2

0x0dc3,	// (0x0002d1de) main_video2_pane_t3_ParamLimits

0x0dc3,	// (0x0002d1de) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003ba6c) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003ba6c) main_video2_pane_t

0x47b0,	// (0x00030bcb) call_muted_g2

0x0001,

0xf5f3,	// (0x0003ba0e) call_muted_g

0xb154,	// (0x0003756f) main_mup2_pane

0x4bf4,	// (0x0003100f) main_mup2_pane_g1_ParamLimits

0x4bf4,	// (0x0003100f) main_mup2_pane_g1

0x4c00,	// (0x0003101b) main_mup2_pane_g2_ParamLimits

0x4c00,	// (0x0003101b) main_mup2_pane_g2

0xb4f4,	// (0x0003790f) main_mup_pane_g13_cp1

0xb4fc,	// (0x00037917) mup_volume_pane_cp1

0x4c1c,	// (0x00031037) main_mup2_pane_g4_ParamLimits

0x4c1c,	// (0x00031037) main_mup2_pane_g4

0x4c2e,	// (0x00031049) main_mup2_pane_g5_ParamLimits

0x4c2e,	// (0x00031049) main_mup2_pane_g5

0x4c40,	// (0x0003105b) main_mup2_pane_g6_ParamLimits

0x4c40,	// (0x0003105b) main_mup2_pane_g6

0x4c52,	// (0x0003106d) main_mup2_pane_g7_ParamLimits

0x4c52,	// (0x0003106d) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003ba73) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003ba73) main_mup2_pane_g

0x4c6a,	// (0x00031085) main_mup2_pane_t1_ParamLimits

0x4c6a,	// (0x00031085) main_mup2_pane_t1

0x4c80,	// (0x0003109b) main_mup2_pane_t2_ParamLimits

0x4c80,	// (0x0003109b) main_mup2_pane_t2

0x4c96,	// (0x000310b1) main_mup2_pane_t3_ParamLimits

0x4c96,	// (0x000310b1) main_mup2_pane_t3

0x4cac,	// (0x000310c7) main_mup2_pane_t4_ParamLimits

0x4cac,	// (0x000310c7) main_mup2_pane_t4

0x4cc4,	// (0x000310df) main_mup2_pane_t5_ParamLimits

0x4cc4,	// (0x000310df) main_mup2_pane_t5

0x4cdc,	// (0x000310f7) main_mup2_pane_t6_ParamLimits

0x4cdc,	// (0x000310f7) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003ba82) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003ba82) main_mup2_pane_t

0x4d0c,	// (0x00031127) mup2_visualizer_pane_ParamLimits

0x4d0c,	// (0x00031127) mup2_visualizer_pane

0x4d3a,	// (0x00031155) mup_progress_pane_cp_ParamLimits

0x4d3a,	// (0x00031155) mup_progress_pane_cp

0xb4df,	// (0x000378fa) mup_volume_pane_cp_ParamLimits

0xb4df,	// (0x000378fa) mup_volume_pane_cp

0x4d4e,	// (0x00031169) mup2_visualizer_pane_g1_ParamLimits

0x4d4e,	// (0x00031169) mup2_visualizer_pane_g1

0xdd37,	// (0x0003a152) mup2_visualizer_pane_g2_ParamLimits

0xdd37,	// (0x0003a152) mup2_visualizer_pane_g2

0x4d65,	// (0x00031180) mup2_visualizer_pane_g3_ParamLimits

0x4d65,	// (0x00031180) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003ba8f) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003ba8f) mup2_visualizer_pane_g

0xcb77,	// (0x00038f92) aid_size_cell_fmradio

0x0674,	// (0x0002ca8f) aid_height_parent_landcape

0xbf26,	// (0x00038341) wml_content_pane_cp

0xbf2e,	// (0x00038349) wml_tabs_pane

0xbf37,	// (0x00038352) popup_wml_miniature_window

0xbf3f,	// (0x0003835a) scroll_pane_cp021

0xbf53,	// (0x0003836e) wml_content_pane_comp8

0xb154,	// (0x0003756f) bg_popup_sub_pane_cp05

0xdd55,	// (0x0003a170) popup_wml_miniature_window_g1

0xdd5d,	// (0x0003a178) wml_miniature_view_pane

0x4d71,	// (0x0003118c) aid_size_wml_view

0x4d79,	// (0x00031194) wml_miniature_view_pane_g1

0x4d82,	// (0x0003119d) wml_miniature_view_pane_g2

0x4d8b,	// (0x000311a6) wml_miniature_view_pane_g3

0x4d93,	// (0x000311ae) wml_miniature_view_pane_g4

0x4d9b,	// (0x000311b6) wml_miniature_view_pane_g5

0x4da3,	// (0x000311be) wml_miniature_view_pane_g6

0x4dab,	// (0x000311c6) wml_miniature_view_pane_g7

0x4db3,	// (0x000311ce) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003ba96) wml_miniature_view_pane_g

0xdd65,	// (0x0003a180) background_graphic_ParamLimits

0xdd65,	// (0x0003a180) background_graphic

0xdd71,	// (0x0003a18c) wml_tabs_2_pane

0xdd7a,	// (0x0003a195) wml_tabs_3_pane_ParamLimits

0xdd7a,	// (0x0003a195) wml_tabs_3_pane

0xdd8c,	// (0x0003a1a7) wml_tabs_4_pane_ParamLimits

0xdd8c,	// (0x0003a1a7) wml_tabs_4_pane

0xdda2,	// (0x0003a1bd) wml_tabs_5_pane_ParamLimits

0xdda2,	// (0x0003a1bd) wml_tabs_5_pane

0xddbc,	// (0x0003a1d7) wml_tabs_pane_g2_ParamLimits

0xddbc,	// (0x0003a1d7) wml_tabs_pane_g2

0xddd0,	// (0x0003a1eb) wml_tabs_pane_g3_ParamLimits

0xddd0,	// (0x0003a1eb) wml_tabs_pane_g3

0x4dbb,	// (0x000311d6) wml_tabs_2_active_pane_ParamLimits

0x4dbb,	// (0x000311d6) wml_tabs_2_active_pane

0x4dcf,	// (0x000311ea) wml_tabs_2_passive_pane_ParamLimits

0x4dcf,	// (0x000311ea) wml_tabs_2_passive_pane

0x4de3,	// (0x000311fe) wml_tabs_3_active_pane_cp_ParamLimits

0x4de3,	// (0x000311fe) wml_tabs_3_active_pane_cp

0x4df8,	// (0x00031213) wml_tabs_3_passive_pane_ParamLimits

0x4df8,	// (0x00031213) wml_tabs_3_passive_pane

0x4e0b,	// (0x00031226) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e0b,	// (0x00031226) wml_tabs_3_passive_pane_cp

0x4e22,	// (0x0003123d) tabs_4_active_pane

0x4e2a,	// (0x00031245) tabs_4_passive_pane

0x4e34,	// (0x0003124f) tabs_4_passive_pane_cp

0x4e3c,	// (0x00031257) tabs_4_passive_pane_cp2

0x467d,	// (0x00030a98) aid_height_text

0x3dcd,	// (0x000301e8) mup_volume_cont_pane_ParamLimits

0x3dcd,	// (0x000301e8) mup_volume_cont_pane

0x1be1,	// (0x0002dffc) aid_size_cell_pinb

0x1beb,	// (0x0002e006) aid_size_list_pinb

0x4d26,	// (0x00031141) mup2_volume_cont_pane_ParamLimits

0x4d26,	// (0x00031141) mup2_volume_cont_pane

0xb4cb,	// (0x000378e6) mup2_volume_cont_pane_g1_ParamLimits

0xb4cb,	// (0x000378e6) mup2_volume_cont_pane_g1

0x01c6,	// (0x0002c5e1) aid_size_cell_touch_ParamLimits

0x01c6,	// (0x0002c5e1) aid_size_cell_touch

0x03ae,	// (0x0002c7c9) touch_pane_ParamLimits

0x03ae,	// (0x0002c7c9) touch_pane

0xad37,	// (0x00037152) main_rss2_pane

0xdded,	// (0x0003a208) listscroll_rss2_pane

0xddf6,	// (0x0003a211) rss2_navigation_pane

0xddfe,	// (0x0003a219) list_rss2_pane

0xc5af,	// (0x000389ca) scroll_pane_cp22

0xde06,	// (0x0003a221) rss2_navigation_pane_g1

0xde0f,	// (0x0003a22a) rss2_navigation_pane_g2

0xde17,	// (0x0003a232) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003baa7) rss2_navigation_pane_g

0xde1f,	// (0x0003a23a) rss2_navigation_pane_t1

0x4e46,	// (0x00031261) rss2_list_single_pane_ParamLimits

0x4e46,	// (0x00031261) rss2_list_single_pane

0xde2d,	// (0x0003a248) rss2_list_single_pane_t2

0xde3b,	// (0x0003a256) rss2_list_single_pane_t3_ParamLimits

0xde3b,	// (0x0003a256) rss2_list_single_pane_t3

0xde58,	// (0x0003a273) rss2_list_single_pane_t4

0x371c,	// (0x0002fb37) smil_status_pane_g1

0xad29,	// (0x00037144) main_image2_pane_ParamLimits

0xad29,	// (0x00037144) main_image2_pane

0x0aff,	// (0x0002cf1a) main_camera2_pane_g9_ParamLimits

0x0aff,	// (0x0002cf1a) main_camera2_pane_g9

0x0c2d,	// (0x0002d048) main_camera2_pane_t5_ParamLimits

0x0c2d,	// (0x0002d048) main_camera2_pane_t5

0xb49b,	// (0x000378b6) main_camera2_pane_t6_ParamLimits

0xb49b,	// (0x000378b6) main_camera2_pane_t6

0x4e5b,	// (0x00031276) main_image2_pane_g1_ParamLimits

0x4e5b,	// (0x00031276) main_image2_pane_g1

0x43b9,	// (0x000307d4) smil2_video_pane_ParamLimits

0x43b9,	// (0x000307d4) smil2_video_pane

0x1aaa,	// (0x0002dec5) aid_zoom_text_primary_cp

0xad1f,	// (0x0003713a) popup_preview_fixed_window

0xbe8f,	// (0x000382aa) im_reading_pane_g1

0x0976,	// (0x0002cd91) cams2_bc_adjust_pane_cp_ParamLimits

0x0976,	// (0x0002cd91) cams2_bc_adjust_pane_cp

0x0c5c,	// (0x0002d077) cams2_bc_adjust_pane_ParamLimits

0x0c5c,	// (0x0002d077) cams2_bc_adjust_pane

0x4e71,	// (0x0003128c) cams2_bc_adjust_pane_g1

0xb504,	// (0x0003791f) cams2_slider_pane

0xb50d,	// (0x00037928) cams2_slider_pane_g1

0xb516,	// (0x00037931) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003baae) cams2_slider_pane_g

0x041e,	// (0x0002c839) calc_display_pane_ParamLimits

0x0446,	// (0x0002c861) calc_paper_pane_ParamLimits

0x0469,	// (0x0002c884) grid_calc_pane_ParamLimits

0xb3c0,	// (0x000377db) popup_clock_digital_window_t1_ParamLimits

0xcb14,	// (0x00038f2f) main_image_pane_t1

0x0400,	// (0x0002c81b) aid_size_cell_calc_ParamLimits

0x0400,	// (0x0002c81b) aid_size_cell_calc

0x06cc,	// (0x0002cae7) popup_blid_sat_info2_window_ParamLimits

0x06cc,	// (0x0002cae7) popup_blid_sat_info2_window

0xde6e,	// (0x0003a289) aid_size_cell_blid

0xde76,	// (0x0003a291) bg_popup_window_pane_cp07

0xde99,	// (0x0003a2b4) grid_popup_blid_pane

0xdea3,	// (0x0003a2be) heading_pane_cp05_ParamLimits

0xdea3,	// (0x0003a2be) heading_pane_cp05

0xdf6d,	// (0x0003a388) cell_popup_blid_pane_ParamLimits

0xdf6d,	// (0x0003a388) cell_popup_blid_pane

0xdf91,	// (0x0003a3ac) cell_popup_blid_pane_g1

0xdf99,	// (0x0003a3b4) cell_popup_blid_pane_t1

0x4cf6,	// (0x00031111) mup2_indicator_pane_ParamLimits

0x4cf6,	// (0x00031111) mup2_indicator_pane

0xbd96,	// (0x000381b1) mup2_visualizer_osc_pane

0xdd43,	// (0x0003a15e) mup2_visualizer_spec_pane_ParamLimits

0xdd43,	// (0x0003a15e) mup2_visualizer_spec_pane

0x4e79,	// (0x00031294) mup2_spec_half_pane

0x4e82,	// (0x0003129d) mup2_spec_half_pane_cp

0x4e8a,	// (0x000312a5) mup2_spec_bar_pane_ParamLimits

0x4e8a,	// (0x000312a5) mup2_spec_bar_pane

0xdce4,	// (0x0003a0ff) mup2_spec_bar_pane_g1

0xdcee,	// (0x0003a109) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003ba21) mup2_spec_bar_pane_g

0x4eaa,	// (0x000312c5) mup2_osc_middle_pane

0xdd00,	// (0x0003a11b) mup2_visualizer_osc_pane_g1

0xad61,	// (0x0003717c) popup_number_entry_window_t1_ParamLimits

0xad74,	// (0x0003718f) popup_number_entry_window_t2_ParamLimits

0xad86,	// (0x000371a1) popup_number_entry_window_t3_ParamLimits

0x1b23,	// (0x0002df3e) popup_number_entry_window_t5_ParamLimits

0x1b23,	// (0x0002df3e) popup_number_entry_window_t5

0xf0ca,	// (0x0003b4e5) popup_number_entry_window_t_ParamLimits

0xad98,	// (0x000371b3) text_title_cp2_ParamLimits

0xb3ff,	// (0x0003781a) aid_hotspot_pointer_text2_pane

0xb419,	// (0x00037834) main_viewer_pane_g9_ParamLimits

0xb419,	// (0x00037834) main_viewer_pane_g9

0xc0c8,	// (0x000384e3) cale_month_pane_t1_ParamLimits

0xc105,	// (0x00038520) bg_cale_pane_ParamLimits

0xc11d,	// (0x00038538) list_cale_pane_ParamLimits

0xc12e,	// (0x00038549) listscroll_cale_day_pane_t1

0xc140,	// (0x0003855b) scroll_pane_cp09_ParamLimits

0x3dff,	// (0x0003021a) main_mup_eq_pane_t1_ParamLimits

0x3dff,	// (0x0003021a) main_mup_eq_pane_t1

0x3e19,	// (0x00030234) main_mup_eq_pane_t2_ParamLimits

0x3e19,	// (0x00030234) main_mup_eq_pane_t2

0x3e33,	// (0x0003024e) main_mup_eq_pane_t3_ParamLimits

0x3e33,	// (0x0003024e) main_mup_eq_pane_t3

0x3e4f,	// (0x0003026a) main_mup_eq_pane_t4_ParamLimits

0x3e4f,	// (0x0003026a) main_mup_eq_pane_t4

0x3e6b,	// (0x00030286) main_mup_eq_pane_t5_ParamLimits

0x3e6b,	// (0x00030286) main_mup_eq_pane_t5

0x3e87,	// (0x000302a2) main_mup_eq_pane_t6_ParamLimits

0x3e87,	// (0x000302a2) main_mup_eq_pane_t6

0x3e9b,	// (0x000302b6) main_mup_eq_pane_t7_ParamLimits

0x3e9b,	// (0x000302b6) main_mup_eq_pane_t7

0x3eaf,	// (0x000302ca) main_mup_eq_pane_t8_ParamLimits

0x3eaf,	// (0x000302ca) main_mup_eq_pane_t8

0x3ec3,	// (0x000302de) main_mup_eq_pane_t9_ParamLimits

0x3ec3,	// (0x000302de) main_mup_eq_pane_t9

0x3edd,	// (0x000302f8) main_mup_eq_pane_t10_ParamLimits

0x3edd,	// (0x000302f8) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003b870) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003b870) main_mup_eq_pane_t

0x3f8c,	// (0x000303a7) mup_equalizer_pane_cp5_ParamLimits

0x3fa0,	// (0x000303bb) mup_equalizer_pane_cp6_ParamLimits

0x3fb4,	// (0x000303cf) mup_equalizer_pane_cp7_ParamLimits

0xad37,	// (0x00037152) main_gallery_pane

0xdd09,	// (0x0003a124) smil2_volume_pane

0xdd11,	// (0x0003a12c) smil_status_volume_pane_g1_ParamLimits

0xdd24,	// (0x0003a13f) smil_status_volume_pane_g2_ParamLimits

0xb479,	// (0x00037894) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003ba26) smil_status_volume_pane_g_ParamLimits

0xde76,	// (0x0003a291) bg_popup_window_pane_cp07_ParamLimits

0xde84,	// (0x0003a29f) blid_firmament_pane

0x4eb3,	// (0x000312ce) aid_size_cell_gallery_ParamLimits

0x4eb3,	// (0x000312ce) aid_size_cell_gallery

0x4ec9,	// (0x000312e4) grid_gallery_pane_ParamLimits

0x4ec9,	// (0x000312e4) grid_gallery_pane

0x4ee2,	// (0x000312fd) cell_gallery_pane_ParamLimits

0x4ee2,	// (0x000312fd) cell_gallery_pane

0xdfa7,	// (0x0003a3c2) bg_cell_gallery_focus_pane_ParamLimits

0xdfa7,	// (0x0003a3c2) bg_cell_gallery_focus_pane

0xdfb9,	// (0x0003a3d4) cell_gallery_pane_g1_ParamLimits

0xdfb9,	// (0x0003a3d4) cell_gallery_pane_g1

0x4f2b,	// (0x00031346) cell_gallery_pane_g2_ParamLimits

0x4f2b,	// (0x00031346) cell_gallery_pane_g2

0x4f38,	// (0x00031353) cell_gallery_pane_g3_ParamLimits

0x4f38,	// (0x00031353) cell_gallery_pane_g3

0xdfc5,	// (0x0003a3e0) cell_gallery_pane_g4_ParamLimits

0xdfc5,	// (0x0003a3e0) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003bad4) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003bad4) cell_gallery_pane_g

0xdfd1,	// (0x0003a3ec) bg_cell_gallery_focus_pane_g1

0xdfd9,	// (0x0003a3f4) bg_cell_gallery_focus_pane_g2

0xdfe1,	// (0x0003a3fc) bg_cell_gallery_focus_pane_g3

0xdfe9,	// (0x0003a404) bg_cell_gallery_focus_pane_g4

0xdff1,	// (0x0003a40c) bg_cell_gallery_focus_pane_g5

0xdff9,	// (0x0003a414) bg_cell_gallery_focus_pane_g6

0xe001,	// (0x0003a41c) bg_cell_gallery_focus_pane_g7

0xe009,	// (0x0003a424) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003badd) bg_cell_gallery_focus_pane_g

0xe011,	// (0x0003a42c) aid_firma_cardinal

0xe025,	// (0x0003a440) blid_firmament_pane_t1

0xe03c,	// (0x0003a457) blid_firmament_pane_t2

0xe053,	// (0x0003a46e) blid_firmament_pane_t3

0xe06a,	// (0x0003a485) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003baee) blid_firmament_pane_t

0xe081,	// (0x0003a49c) blid_sat_info_pane

0xe091,	// (0x0003a4ac) blid_sat_info_pane_g1

0xe091,	// (0x0003a4ac) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003baf7) blid_sat_info_pane_g

0xe09b,	// (0x0003a4b6) blid_sat_info_pane_t1

0xe0a9,	// (0x0003a4c4) smil2_volume_content_pane

0xe0b2,	// (0x0003a4cd) smil2_volume_pane_g1

0xe0ba,	// (0x0003a4d5) smil2_volume_content_pane_g1

0xe0c3,	// (0x0003a4de) smil2_volume_content_pane_g2

0xe0cc,	// (0x0003a4e7) smil2_volume_content_pane_g3

0xe0d5,	// (0x0003a4f0) smil2_volume_content_pane_g4

0xe0de,	// (0x0003a4f9) smil2_volume_content_pane_g5

0xe0e7,	// (0x0003a502) smil2_volume_content_pane_g6

0xe0fc,	// (0x0003a517) smil2_volume_content_pane_g7

0xe105,	// (0x0003a520) smil2_volume_content_pane_g8

0xe10e,	// (0x0003a529) smil2_volume_content_pane_g9

0xe117,	// (0x0003a532) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003bafc) smil2_volume_content_pane_g

0x2184,	// (0x0002e59f) cale_week_day_heading_pane_t1_ParamLimits

0x21ae,	// (0x0002e5c9) cale_week_day_heading_pane_t2_ParamLimits

0x21dd,	// (0x0002e5f8) cale_week_day_heading_pane_t3_ParamLimits

0x220c,	// (0x0002e627) cale_week_day_heading_pane_t4_ParamLimits

0x223b,	// (0x0002e656) cale_week_day_heading_pane_t5_ParamLimits

0x2272,	// (0x0002e68d) cale_week_day_heading_pane_t6_ParamLimits

0x22a9,	// (0x0002e6c4) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003b5ec) cale_week_day_heading_pane_t_ParamLimits

0xbd3b,	// (0x00038156) bg_cale_side_pane_ParamLimits

0x0540,	// (0x0002c95b) cale_week_time_pane_t1_ParamLimits

0x055a,	// (0x0002c975) cale_week_time_pane_t2_ParamLimits

0x0574,	// (0x0002c98f) cale_week_time_pane_t3_ParamLimits

0x058e,	// (0x0002c9a9) cale_week_time_pane_t4_ParamLimits

0x05a8,	// (0x0002c9c3) cale_week_time_pane_t5_ParamLimits

0x05c2,	// (0x0002c9dd) cale_week_time_pane_t6_ParamLimits

0x05dc,	// (0x0002c9f7) cale_week_time_pane_t7_ParamLimits

0x05f6,	// (0x0002ca11) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003b5fb) cale_week_time_pane_t_ParamLimits

0x22d3,	// (0x0002e6ee) cell_cale_week_pane_g2_ParamLimits

0xbd3b,	// (0x00038156) bg_cale_side_pane_cp01_ParamLimits

0x3525,	// (0x0002f940) cale_month_week_pane_t1_ParamLimits

0x353e,	// (0x0002f959) cale_month_week_pane_t2_ParamLimits

0x3557,	// (0x0002f972) cale_month_week_pane_t3_ParamLimits

0x3570,	// (0x0002f98b) cale_month_week_pane_t4_ParamLimits

0x3589,	// (0x0002f9a4) cale_month_week_pane_t5_ParamLimits

0x35a2,	// (0x0002f9bd) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003b6d0) cale_month_week_pane_t_ParamLimits

0xb33c,	// (0x00037757) cell_cale_month_pane_g1_ParamLimits

0xad37,	// (0x00037152) main_cale_event_viewer_pane

0xad01,	// (0x0003711c) listscroll_cale_event_viewer_pane

0xe120,	// (0x0003a53b) list_cale_ev_pane

0xe128,	// (0x0003a543) scroll_pane_cp023

0xe134,	// (0x0003a54f) field_cale_ev_pane_ParamLimits

0xe134,	// (0x0003a54f) field_cale_ev_pane

0xe152,	// (0x0003a56d) field_cale_ev_content_pane_ParamLimits

0xe152,	// (0x0003a56d) field_cale_ev_content_pane

0xe15e,	// (0x0003a579) field_cale_ev_pane_g1_ParamLimits

0xe15e,	// (0x0003a579) field_cale_ev_pane_g1

0xe16a,	// (0x0003a585) field_cale_ev_pane_g2_ParamLimits

0xe16a,	// (0x0003a585) field_cale_ev_pane_g2

0xe182,	// (0x0003a59d) field_cale_ev_pane_g3_ParamLimits

0xe182,	// (0x0003a59d) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003bb11) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003bb11) field_cale_ev_pane_g

0xe19a,	// (0x0003a5b5) field_cale_ev_pane_t1_ParamLimits

0xe19a,	// (0x0003a5b5) field_cale_ev_pane_t1

0xe1b1,	// (0x0003a5cc) field_cale_ev_content_pane_t1_ParamLimits

0xe1b1,	// (0x0003a5cc) field_cale_ev_content_pane_t1

0xc981,	// (0x00038d9c) bg_button_pane_cp01

0x1eb1,	// (0x0002e2cc) listscroll_cale_week_pane_ParamLimits

0xbce6,	// (0x00038101) popup_toolbar_window_cp01

0xbd0c,	// (0x00038127) listscroll_cale_week_pane_t1_ParamLimits

0x1eb1,	// (0x0002e2cc) listscroll_cale_day_pane_ParamLimits

0xbce6,	// (0x00038101) popup_toolbar_window_cp02

0xc12e,	// (0x00038549) listscroll_cale_day_pane_t1_ParamLimits

0x0692,	// (0x0002caad) main_cale_month_pane_ParamLimits

0xb464,	// (0x0003787f) popup_toolbar_window_cp03_ParamLimits

0xb464,	// (0x0003787f) popup_toolbar_window_cp03

0x4281,	// (0x0003069c) main_image_pane_g2_ParamLimits

0x4281,	// (0x0003069c) main_image_pane_g2

0x4292,	// (0x000306ad) main_image_pane_g3_ParamLimits

0x4292,	// (0x000306ad) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003b902) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003b902) main_image_pane_g

0xcb14,	// (0x00038f2f) main_image_pane_t1_ParamLimits

0x42a3,	// (0x000306be) main_image_pane_t2_ParamLimits

0x42a3,	// (0x000306be) main_image_pane_t2

0x42b5,	// (0x000306d0) main_image_pane_t3_ParamLimits

0x42b5,	// (0x000306d0) main_image_pane_t3

0x42dd,	// (0x000306f8) main_image_pane_t4_ParamLimits

0x42dd,	// (0x000306f8) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003b909) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003b909) main_image_pane_t

0x42fd,	// (0x00030718) popup_image_details_window_cp01

0x4307,	// (0x00030722) popup_toobar_trans_pane_cp01_ParamLimits

0x4307,	// (0x00030722) popup_toobar_trans_pane_cp01

0x07ab,	// (0x0002cbc6) popup_image_details_window_ParamLimits

0x07ab,	// (0x0002cbc6) popup_image_details_window

0xb437,	// (0x00037852) popup_image_focus_window

0x0930,	// (0x0002cd4b) camera2_autofocus_pane_ParamLimits

0x0930,	// (0x0002cd4b) camera2_autofocus_pane

0xad01,	// (0x0003711c) bg_popup_sub_pane_cp06

0xe1cf,	// (0x0003a5ea) popup_image_focus_window_g1

0xe1d7,	// (0x0003a5f2) popup_image_focus_window_g2

0xe1df,	// (0x0003a5fa) popup_image_focus_window_g3

0xe1e7,	// (0x0003a602) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003bb18) popup_image_focus_window_g

0xe1ef,	// (0x0003a60a) popup_image_focus_window_t1

0xe1fd,	// (0x0003a618) popup_image_focus_window_t2

0xe20d,	// (0x0003a628) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003bb21) popup_image_focus_window_t

0xe21b,	// (0x0003a636) camera2_autofocus_pane_g1

0xc6cc,	// (0x00038ae7) bg_tb_trans_pane_cp01

0xe229,	// (0x0003a644) popup_image_details_window_g1

0xe23c,	// (0x0003a657) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003bb33) popup_image_details_window_g

0xe265,	// (0x0003a680) popup_image_details_window_t1

0xe277,	// (0x0003a692) popup_image_details_window_t2

0xe290,	// (0x0003a6ab) popup_image_details_window_t3

0xe2a4,	// (0x0003a6bf) popup_image_details_window_t4

0xe2bf,	// (0x0003a6da) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003bb3a) popup_image_details_window_t

0xbbbd,	// (0x00037fd8) bg_calc_paper_pane_ParamLimits

0xad37,	// (0x00037152) grid_highlight_pane_cp013

0xb2ac,	// (0x000376c7) list_calc_pane_ParamLimits

0xb2be,	// (0x000376d9) scroll_pane_cp024

0xbbd1,	// (0x00037fec) bg_calc_display_pane_ParamLimits

0x0497,	// (0x0002c8b2) calc_display_pane_t1_ParamLimits

0x04a9,	// (0x0002c8c4) calc_display_pane_t2_ParamLimits

0xb2c6,	// (0x000376e1) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003b56c) calc_display_pane_t_ParamLimits

0x050a,	// (0x0002c925) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003b589) cell_calc_pane_g

0x0513,	// (0x0002c92e) cell_calc_pane_t1

0xbc30,	// (0x0003804b) grid_highlight_pane_cp02_ParamLimits

0xbc46,	// (0x00038061) toolbar_button_pane_cp01_ParamLimits

0xbc46,	// (0x00038061) toolbar_button_pane_cp01

0xcb59,	// (0x00038f74) temp_image_control_pane_ParamLimits

0xcb59,	// (0x00038f74) temp_image_control_pane

0xad29,	// (0x00037144) main_mp3_pane

0xe2d9,	// (0x0003a6f4) temp_image_control_pane_g1_ParamLimits

0xe2d9,	// (0x0003a6f4) temp_image_control_pane_g1

0xe2e7,	// (0x0003a702) temp_image_control_pane_g2_ParamLimits

0xe2e7,	// (0x0003a702) temp_image_control_pane_g2

0xe2f9,	// (0x0003a714) temp_image_control_pane_g3_ParamLimits

0xe2f9,	// (0x0003a714) temp_image_control_pane_g3

0x4f75,	// (0x00031390) temp_image_control_pane_g4_ParamLimits

0x4f75,	// (0x00031390) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003bb45) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003bb45) temp_image_control_pane_g

0xe2d9,	// (0x0003a6f4) main_mp3_pane_g1

0x4f88,	// (0x000313a3) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003bb4e) main_mp3_pane_g

0xe33c,	// (0x0003a757) main_mp3_pane_t1

0xbd9e,	// (0x000381b9) main_camera_pane_g8_ParamLimits

0xbd9e,	// (0x000381b9) main_camera_pane_g8

0x25cd,	// (0x0002e9e8) main_video_pane_g7_ParamLimits

0x25cd,	// (0x0002e9e8) main_video_pane_g7

0xb4b9,	// (0x000378d4) main_camera2_pane_t7_ParamLimits

0xb4b9,	// (0x000378d4) main_camera2_pane_t7

0xbee6,	// (0x00038301) scroll_pane_cp025_ParamLimits

0xbee6,	// (0x00038301) scroll_pane_cp025

0xbefa,	// (0x00038315) scroll_pane_cp026_ParamLimits

0xbefa,	// (0x00038315) scroll_pane_cp026

0xbf09,	// (0x00038324) wml_content_pane_ParamLimits

0xad37,	// (0x00037152) main_touch_calib_pane

0x505c,	// (0x00031477) main_touch_calib_pane_g1

0x506e,	// (0x00031489) main_touch_calib_pane_g2

0x5080,	// (0x0003149b) main_touch_calib_pane_g3

0x5092,	// (0x000314ad) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003bb6c) main_touch_calib_pane_g

0x50a4,	// (0x000314bf) main_touch_calib_pane_t1

0x50be,	// (0x000314d9) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003bb75) main_touch_calib_pane_t

0xc68b,	// (0x00038aa6) mup_progress_pane_cp02

0xc6c0,	// (0x00038adb) navi_pane_g1

0xc795,	// (0x00038bb0) navi_pane_mp_t3

0xad29,	// (0x00037144) main_mp3_pane_ParamLimits

0x4962,	// (0x00030d7d) navi_pane_ParamLimits

0xe2d9,	// (0x0003a6f4) main_mp3_pane_g1_ParamLimits

0x4f88,	// (0x000313a3) main_mp3_pane_g2_ParamLimits

0x4f96,	// (0x000313b1) main_mp3_pane_g3_ParamLimits

0x4f96,	// (0x000313b1) main_mp3_pane_g3

0x4fa4,	// (0x000313bf) main_mp3_pane_g4_ParamLimits

0x4fa4,	// (0x000313bf) main_mp3_pane_g4

0xe309,	// (0x0003a724) main_mp3_pane_g5_ParamLimits

0xe309,	// (0x0003a724) main_mp3_pane_g5

0xe317,	// (0x0003a732) main_mp3_pane_g6_ParamLimits

0xe317,	// (0x0003a732) main_mp3_pane_g6

0xe324,	// (0x0003a73f) main_mp3_pane_g7_ParamLimits

0xe324,	// (0x0003a73f) main_mp3_pane_g7

0xe330,	// (0x0003a74b) main_mp3_pane_g8_ParamLimits

0xe330,	// (0x0003a74b) main_mp3_pane_g8

0xf733,	// (0x0003bb4e) main_mp3_pane_g_ParamLimits

0x4fb0,	// (0x000313cb) main_mp3_pane_t2

0x4fbe,	// (0x000313d9) main_mp3_pane_t3

0xe34a,	// (0x0003a765) main_mp3_pane_t4

0xe358,	// (0x0003a773) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003bb5f) main_mp3_pane_t

0xe366,	// (0x0003a781) mup_progress_pane_cp01

0x1aaa,	// (0x0002dec5) aid_zoom_text_secondary2

0xe120,	// (0x0003a53b) list_cale_ev2_pane

0xe128,	// (0x0003a543) scroll_pane_cp023_ParamLimits

0x5114,	// (0x0003152f) field_cale_ev2_pane_ParamLimits

0x5114,	// (0x0003152f) field_cale_ev2_pane

0x5134,	// (0x0003154f) field_cale_ev2_pane_g1_ParamLimits

0x5134,	// (0x0003154f) field_cale_ev2_pane_g1

0x5140,	// (0x0003155b) field_cale_ev2_pane_g2_ParamLimits

0x5140,	// (0x0003155b) field_cale_ev2_pane_g2

0x5158,	// (0x00031573) field_cale_ev2_pane_g3_ParamLimits

0x5158,	// (0x00031573) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003bb80) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003bb80) field_cale_ev2_pane_g

0x5170,	// (0x0003158b) field_cale_ev2_pane_t1_ParamLimits

0x5170,	// (0x0003158b) field_cale_ev2_pane_t1

0x5187,	// (0x000315a2) field_cale_ev2_pane_t2_ParamLimits

0x5187,	// (0x000315a2) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003bb89) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003bb89) field_cale_ev2_pane_t

0x4136,	// (0x00030551) main_postcard_pane_g5_ParamLimits

0x4136,	// (0x00030551) main_postcard_pane_g5

0x414c,	// (0x00030567) main_postcard_pane_g6_ParamLimits

0x414c,	// (0x00030567) main_postcard_pane_g6

0x2399,	// (0x0002e7b4) camera2_autofocus_pane_cp_ParamLimits

0x2399,	// (0x0002e7b4) camera2_autofocus_pane_cp

0xad29,	// (0x00037144) main_mup3_pane

0x51c0,	// (0x000315db) main_mup3_pane_g1_ParamLimits

0x51c0,	// (0x000315db) main_mup3_pane_g1

0x51e2,	// (0x000315fd) main_mup3_pane_g2_ParamLimits

0x51e2,	// (0x000315fd) main_mup3_pane_g2

0x5260,	// (0x0003167b) main_mup3_pane_g3_ParamLimits

0x5260,	// (0x0003167b) main_mup3_pane_g3

0x52a6,	// (0x000316c1) main_mup3_pane_g4_ParamLimits

0x52a6,	// (0x000316c1) main_mup3_pane_g4

0x52ec,	// (0x00031707) main_mup3_pane_g5_ParamLimits

0x52ec,	// (0x00031707) main_mup3_pane_g5

0x5332,	// (0x0003174d) main_mup3_pane_g6_ParamLimits

0x5332,	// (0x0003174d) main_mup3_pane_g6

0xe39a,	// (0x0003a7b5) main_mup3_pane_g7_ParamLimits

0xe39a,	// (0x0003a7b5) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003bb99) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003bb99) main_mup3_pane_g

0x53b0,	// (0x000317cb) main_mup3_pane_t1_ParamLimits

0x53b0,	// (0x000317cb) main_mup3_pane_t1

0x5424,	// (0x0003183f) main_mup3_pane_t2_ParamLimits

0x5424,	// (0x0003183f) main_mup3_pane_t2

0x54f8,	// (0x00031913) main_mup3_pane_t4_ParamLimits

0x54f8,	// (0x00031913) main_mup3_pane_t4

0x554e,	// (0x00031969) main_mup3_pane_t5_ParamLimits

0x554e,	// (0x00031969) main_mup3_pane_t5

0x560a,	// (0x00031a25) main_mup3_pane_t6_ParamLimits

0x560a,	// (0x00031a25) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003bbaa) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003bbaa) main_mup3_pane_t

0x56c2,	// (0x00031add) mup3_progress_pane_ParamLimits

0x56c2,	// (0x00031add) mup3_progress_pane

0x5758,	// (0x00031b73) popup_mup3_control_window_ParamLimits

0x5758,	// (0x00031b73) popup_mup3_control_window

0xe3a8,	// (0x0003a7c3) popup_mup3_text_window

0x578a,	// (0x00031ba5) mup3_progress_pane_t1

0x57a9,	// (0x00031bc4) mup3_progress_pane_t2

0xe3b0,	// (0x0003a7cb) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003bbb7) mup3_progress_pane_t

0xe3cd,	// (0x0003a7e8) mup_progress_pane_cp03

0xad01,	// (0x0003711c) bg_tb_trans_pane_cp04

0x57c8,	// (0x00031be3) mup3_volume_pane

0x57d0,	// (0x00031beb) popup_mup3_control_window_g1

0x57d9,	// (0x00031bf4) mup3_volume_pane_g1

0x57e2,	// (0x00031bfd) mup3_volume_pane_g2

0x57eb,	// (0x00031c06) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003bbbe) mup3_volume_pane_g

0xad01,	// (0x0003711c) bg_tb_trans_pane_cp03

0xe3dd,	// (0x0003a7f8) popup_mup3_text_window_g1

0xe3e5,	// (0x0003a800) popup_mup3_text_window_t1

0xbc19,	// (0x00038034) list_calc_item_pane_g1_ParamLimits

0xdde4,	// (0x0003a1ff) mup_volume_pane_cp_g1

0x50d8,	// (0x000314f3) main_touch_calib_pane_t3

0x50ec,	// (0x00031507) main_touch_calib_pane_t4

0x5100,	// (0x0003151b) main_touch_calib_pane_t5

0x1a96,	// (0x0002deb1) aid_cell_size_toolbar2

0x1a9e,	// (0x0002deb9) aid_popup3_width_pane

0x1aaa,	// (0x0002dec5) aid_zoom_text_msg_primary

0x2378,	// (0x0002e793) vorec_t7

0xbbdd,	// (0x00037ff8) bg_calc_paper_pane_g1_ParamLimits

0xbbe9,	// (0x00038004) bg_calc_paper_pane_g2_ParamLimits

0xbbf5,	// (0x00038010) bg_calc_paper_pane_g3_ParamLimits

0xbc01,	// (0x0003801c) bg_calc_paper_pane_g4_ParamLimits

0xbc0d,	// (0x00038028) bg_calc_paper_pane_g5_ParamLimits

0x1d8b,	// (0x0002e1a6) bg_calc_paper_pane_g6_ParamLimits

0x1d9a,	// (0x0002e1b5) bg_calc_paper_pane_g7_ParamLimits

0x1da9,	// (0x0002e1c4) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003b573) bg_calc_paper_pane_g_ParamLimits

0x1dbc,	// (0x0002e1d7) calc_bg_paper_pane_g9_ParamLimits

0x24e4,	// (0x0002e8ff) image_qvga_pane_ParamLimits

0x24e4,	// (0x0002e8ff) image_qvga_pane

0xbb0c,	// (0x00037f27) bg_popup_sub_pane_cp04_ParamLimits

0xca90,	// (0x00038eab) popup_mup_playback_window_g1_ParamLimits

0xca9c,	// (0x00038eb7) popup_mup_playback_window_t1_ParamLimits

0xcab1,	// (0x00038ecc) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003b8fd) popup_mup_playback_window_t_ParamLimits

0x4c10,	// (0x0003102b) main_mup2_pane_g3_ParamLimits

0x4c10,	// (0x0003102b) main_mup2_pane_g3

0x28f3,	// (0x0002ed0e) popup_toolbar_window_cp04

0xce93,	// (0x000392ae) popup_call2_audio_second_window_g3_ParamLimits

0xce93,	// (0x000392ae) popup_call2_audio_second_window_g3

0xd29d,	// (0x000396b8) popup_call2_audio_first_window_g4_ParamLimits

0xd29d,	// (0x000396b8) popup_call2_audio_first_window_g4

0xd91c,	// (0x00039d37) popup_call2_audio_in_window_g4_ParamLimits

0xd91c,	// (0x00039d37) popup_call2_audio_in_window_g4

0x4263,	// (0x0003067e) aid_area_sk_bg_cut_ParamLimits

0x4263,	// (0x0003067e) aid_area_sk_bg_cut

0xcac6,	// (0x00038ee1) aid_area_sk_bg_cut_2_ParamLimits

0xcac6,	// (0x00038ee1) aid_area_sk_bg_cut_2

0x4f1b,	// (0x00031336) aid_placing_details_win

0x4f23,	// (0x0003133e) aid_placing_details_win_2

0xe21b,	// (0x0003a636) camera2_autofocus_pane_g1_ParamLimits

0x0353,	// (0x0002c76e) popup_fixed_preview_cale_window_ParamLimits

0x0353,	// (0x0002c76e) popup_fixed_preview_cale_window

0xc813,	// (0x00038c2e) navi_slider_pane_g3

0xc81c,	// (0x00038c37) navi_slider_pane_g4

0xc825,	// (0x00038c40) navi_slider_pane_g5

0xc813,	// (0x00038c2e) navi_slider_pane_g6

0xb3e6,	// (0x00037801) navi_slider_pane_g7

0xc946,	// (0x00038d61) mup_scale_pane_g3

0xc94f,	// (0x00038d6a) mup_scale_pane_g4

0xc958,	// (0x00038d73) mup_scale_pane_g5

0x3fc8,	// (0x000303e3) mup_scale_pane_g6

0x3fd1,	// (0x000303ec) mup_scale_pane_g7

0xc813,	// (0x00038c2e) cams2_slider_pane_g3

0xde66,	// (0x0003a281) cams2_slider_pane_g4

0xb51f,	// (0x0003793a) cams2_slider_pane_g5

0xc813,	// (0x00038c2e) cams2_slider_pane_g6

0xb527,	// (0x00037942) cams2_slider_pane_g7

0xe091,	// (0x0003a4ac) camera2_autofocus_pane_cp_g1

0xdc7d,	// (0x0003a098) bg_popup_preview_window_pane_cp02_ParamLimits

0xdc7d,	// (0x0003a098) bg_popup_preview_window_pane_cp02

0xe3f3,	// (0x0003a80e) list_fp_cale_pane_ParamLimits

0xe3f3,	// (0x0003a80e) list_fp_cale_pane

0xe3ff,	// (0x0003a81a) popup_fixed_preview_cale_window_t1_ParamLimits

0xe3ff,	// (0x0003a81a) popup_fixed_preview_cale_window_t1

0x57f4,	// (0x00031c0f) popup_fixed_preview_cale_window_t2_ParamLimits

0x57f4,	// (0x00031c0f) popup_fixed_preview_cale_window_t2

0x5809,	// (0x00031c24) popup_fixed_preview_cale_window_t3_ParamLimits

0x5809,	// (0x00031c24) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003bbc5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003bbc5) popup_fixed_preview_cale_window_t

0x581e,	// (0x00031c39) list_single_fp_cale_pane_ParamLimits

0x581e,	// (0x00031c39) list_single_fp_cale_pane

0xe41d,	// (0x0003a838) list_single_fp_cale_pane_g1_ParamLimits

0xe41d,	// (0x0003a838) list_single_fp_cale_pane_g1

0xe429,	// (0x0003a844) list_single_fp_cale_pane_g2_ParamLimits

0xe429,	// (0x0003a844) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003bbcc) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003bbcc) list_single_fp_cale_pane_g

0xe442,	// (0x0003a85d) list_single_fp_cale_pane_t1_ParamLimits

0xe442,	// (0x0003a85d) list_single_fp_cale_pane_t1

0xe454,	// (0x0003a86f) list_single_fp_cale_pane_t2_ParamLimits

0xe454,	// (0x0003a86f) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003bbd3) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003bbd3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xad37,	// (0x00037152) main_dialer_pane

0x5833,	// (0x00031c4e) aid_cell_size_keypad

0x583d,	// (0x00031c58) dialer_ne_pane

0x5845,	// (0x00031c60) grid_dialer_command_1_pane

0x584d,	// (0x00031c68) grid_dialer_command_2_pane

0x5855,	// (0x00031c70) grid_dialer_keypad_pane

0x5867,	// (0x00031c82) bg_popup_call_pane_cp06_ParamLimits

0x5867,	// (0x00031c82) bg_popup_call_pane_cp06

0x5873,	// (0x00031c8e) dialer_ne_clear_pane_ParamLimits

0x5873,	// (0x00031c8e) dialer_ne_clear_pane

0xe487,	// (0x0003a8a2) dialer_ne_pane_g1

0xe48f,	// (0x0003a8aa) dialer_ne_pane_t1_ParamLimits

0xe48f,	// (0x0003a8aa) dialer_ne_pane_t1

0x587f,	// (0x00031c9a) dialer_ne_pane_t2_ParamLimits

0x587f,	// (0x00031c9a) dialer_ne_pane_t2

0x58a9,	// (0x00031cc4) dialer_ne_pane_t3_ParamLimits

0x58a9,	// (0x00031cc4) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003bbd8) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003bbd8) dialer_ne_pane_t

0x58d9,	// (0x00031cf4) dialer_ne_pane_t3_copy1_ParamLimits

0x58d9,	// (0x00031cf4) dialer_ne_pane_t3_copy1

0x5908,	// (0x00031d23) cell_dialer_keypad_pane_ParamLimits

0x5908,	// (0x00031d23) cell_dialer_keypad_pane

0x591f,	// (0x00031d3a) cell_dialer_command_1_pane_ParamLimits

0x591f,	// (0x00031d3a) cell_dialer_command_1_pane

0x5935,	// (0x00031d50) cell_dialer_command_2_pane_ParamLimits

0x5935,	// (0x00031d50) cell_dialer_command_2_pane

0xe4a1,	// (0x0003a8bc) bg_button_pane_cp02_ParamLimits

0xe4a1,	// (0x0003a8bc) bg_button_pane_cp02

0x5944,	// (0x00031d5f) cell_dialer_keypad_pane_g1_ParamLimits

0x5944,	// (0x00031d5f) cell_dialer_keypad_pane_g1

0xe4a1,	// (0x0003a8bc) bg_button_pane_cp03_ParamLimits

0xe4a1,	// (0x0003a8bc) bg_button_pane_cp03

0x5958,	// (0x00031d73) cell_dialer_command_1_pane_g1_ParamLimits

0x5958,	// (0x00031d73) cell_dialer_command_1_pane_g1

0xe4ad,	// (0x0003a8c8) bg_button_pane_cp04

0x596c,	// (0x00031d87) cell_dialer_command_2_pane_g1

0xbd96,	// (0x000381b1) bg_button_pane_cp06

0xe4b5,	// (0x0003a8d0) dialer_ne_clear_pane_g1

0xc6e6,	// (0x00038b01) navi_pane_g2

0xc714,	// (0x00038b2f) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003b800) navi_pane_g

0xc7a3,	// (0x00038bbe) navi_pane_mv_g2

0xc7ca,	// (0x00038be5) navi_pane_mv_g5

0x3b8c,	// (0x0002ffa7) navi_pane_mv_t1

0xbbd1,	// (0x00037fec) main_clock2_pane

0x59b9,	// (0x00031dd4) main_clock2_list_pane_ParamLimits

0x59b9,	// (0x00031dd4) main_clock2_list_pane

0x59f1,	// (0x00031e0c) main_clock2_pane_t1_ParamLimits

0x59f1,	// (0x00031e0c) main_clock2_pane_t1

0x5a2d,	// (0x00031e48) main_clock2_pane_t2_ParamLimits

0x5a2d,	// (0x00031e48) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003bbe4) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003bbe4) main_clock2_pane_t

0x5acb,	// (0x00031ee6) popup_clock_analogue_window_cp03_ParamLimits

0x5acb,	// (0x00031ee6) popup_clock_analogue_window_cp03

0x5af0,	// (0x00031f0b) popup_clock_digital_window_cp02_ParamLimits

0x5af0,	// (0x00031f0b) popup_clock_digital_window_cp02

0x5b61,	// (0x00031f7c) main_clock2_list_single_pane_ParamLimits

0x5b61,	// (0x00031f7c) main_clock2_list_single_pane

0xbd96,	// (0x000381b1) list_highlight_pane_cp05

0xe4f3,	// (0x0003a90e) main_clock2_list_single_pane_t1

0x28f3,	// (0x0002ed0e) popup_toolbar_window_cp04_ParamLimits

0x4f45,	// (0x00031360) camera2_autofocus_pane_g2_ParamLimits

0x4f45,	// (0x00031360) camera2_autofocus_pane_g2

0x4f51,	// (0x0003136c) camera2_autofocus_pane_g3_ParamLimits

0x4f51,	// (0x0003136c) camera2_autofocus_pane_g3

0x4f5d,	// (0x00031378) camera2_autofocus_pane_g4_ParamLimits

0x4f5d,	// (0x00031378) camera2_autofocus_pane_g4

0x4f69,	// (0x00031384) camera2_autofocus_pane_g5_ParamLimits

0x4f69,	// (0x00031384) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003bb28) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003bb28) camera2_autofocus_pane_g

0xe37a,	// (0x0003a795) camera2_autofocus_pane_cp_g2

0xe382,	// (0x0003a79d) camera2_autofocus_pane_cp_g3

0xe38a,	// (0x0003a7a5) camera2_autofocus_pane_cp_g4

0xe392,	// (0x0003a7ad) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003bb8e) camera2_autofocus_pane_cp_g

0x585f,	// (0x00031c7a) popup_dialer_spcha_window

0xad01,	// (0x0003711c) bg_popup_sub_pane_cp07

0xe501,	// (0x0003a91c) list_spcha_pane

0xe509,	// (0x0003a924) list_single_spcha_pane_ParamLimits

0xe509,	// (0x0003a924) list_single_spcha_pane

0xad01,	// (0x0003711c) list_highlight_pane_cp06

0xe51a,	// (0x0003a935) list_single_spcha_pane_t1

0xd6c6,	// (0x00039ae1) popup_call2_audio_out_window_g4_ParamLimits

0xd6c6,	// (0x00039ae1) popup_call2_audio_out_window_g4

0xad37,	// (0x00037152) main_imed2_pane

0xb43f,	// (0x0003785a) popup_imed_adjust2_window

0x07c3,	// (0x0002cbde) popup_imed_trans_window_ParamLimits

0x07c3,	// (0x0002cbde) popup_imed_trans_window

0xdecf,	// (0x0003a2ea) popup_blid_sat_info2_window_t1

0xdedd,	// (0x0003a2f8) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003babd) popup_blid_sat_info2_window_t

0x5b73,	// (0x00031f8e) aid_size_cell_colour_35

0x5b93,	// (0x00031fae) aid_size_cell_colour_112

0x5bb3,	// (0x00031fce) aid_size_cell_effect

0xdc89,	// (0x0003a0a4) bg_tb_trans_pane_cp02

0xc237,	// (0x00038652) heading_imed_pane

0x5bd3,	// (0x00031fee) listscroll_imed_pane

0xe528,	// (0x0003a943) heading_imed_pane_g1

0xe530,	// (0x0003a94b) heading_imed_pane_t1

0xe53e,	// (0x0003a959) grid_imed_colour_35_pane_ParamLimits

0xe53e,	// (0x0003a959) grid_imed_colour_35_pane

0x5bdf,	// (0x00031ffa) grid_imed_effect_pane

0xe555,	// (0x0003a970) list_imed_aspect_pane

0x5bf5,	// (0x00032010) scroll_pane_cp027_ParamLimits

0x5bf5,	// (0x00032010) scroll_pane_cp027

0x5c06,	// (0x00032021) cell_imed_effect_pane_ParamLimits

0x5c06,	// (0x00032021) cell_imed_effect_pane

0xe55d,	// (0x0003a978) cell_imed_colour_pane_ParamLimits

0xe55d,	// (0x0003a978) cell_imed_colour_pane

0xe59f,	// (0x0003a9ba) cell_imed_colour_pane_g1_ParamLimits

0xe59f,	// (0x0003a9ba) cell_imed_colour_pane_g1

0xe5b0,	// (0x0003a9cb) hgihlgiht_grid_pane_cp016_ParamLimits

0xe5b0,	// (0x0003a9cb) hgihlgiht_grid_pane_cp016

0x5c2d,	// (0x00032048) cell_imed_effect_pane_g1

0x5c35,	// (0x00032050) grid_highlight_pane_cp017

0xe5c1,	// (0x0003a9dc) list_imed_single_pane_ParamLimits

0xe5c1,	// (0x0003a9dc) list_imed_single_pane

0xad01,	// (0x0003711c) list_highlight_pane_cp07

0xe5d6,	// (0x0003a9f1) list_imed_aspect_pane_comp1_t1

0xdc89,	// (0x0003a0a4) bg_tb_trans_pane_cp05

0xe5f8,	// (0x0003aa13) popup_imed_adjust2_window_g1

0xe61f,	// (0x0003aa3a) popup_imed_adjust2_window_t1

0xe637,	// (0x0003aa52) slider_imed_adjust_pane

0xe64b,	// (0x0003aa66) slider_imed_adjust_pane_g1

0xe65b,	// (0x0003aa76) slider_imed_adjust_pane_g2

0xe66b,	// (0x0003aa86) slider_imed_adjust_pane_g3

0xe67c,	// (0x0003aa97) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003bc01) slider_imed_adjust_pane_g

0x5c3e,	// (0x00032059) aid_size_cell_clipart2

0x5c4a,	// (0x00032065) grid_imed_clipart_pane

0xe68d,	// (0x0003aaa8) scroll_pane_cp031

0x5c54,	// (0x0003206f) cell_imed_clipart_pane_ParamLimits

0x5c54,	// (0x0003206f) cell_imed_clipart_pane

0x5c76,	// (0x00032091) cell_imed_clipart_pane_g1

0xad01,	// (0x0003711c) grid_highlight_pane_cp014

0x59ce,	// (0x00031de9) main_clock2_pane_g1_ParamLimits

0x59ce,	// (0x00031de9) main_clock2_pane_g1

0x5b0c,	// (0x00031f27) aid_call2_pane_cp10

0x5b1e,	// (0x00031f39) aid_call_pane_cp10

0xc62d,	// (0x00038a48) popup_clock_analogue_window_cp10_g1

0xc62d,	// (0x00038a48) popup_clock_analogue_window_cp10_g2

0x5b30,	// (0x00031f4b) popup_clock_analogue_window_cp10_g3

0x5b30,	// (0x00031f4b) popup_clock_analogue_window_cp10_g4

0xc62d,	// (0x00038a48) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003bbef) popup_clock_analogue_window_cp10_g

0x5b42,	// (0x00031f5d) popup_clock_analogue_window_cp10_t1

0x0e07,	// (0x0002d222) clock_digital_number_pane_cp10_ParamLimits

0x0e07,	// (0x0002d222) clock_digital_number_pane_cp10

0x0e1f,	// (0x0002d23a) clock_digital_number_pane_cp11_ParamLimits

0x0e1f,	// (0x0002d23a) clock_digital_number_pane_cp11

0x0e37,	// (0x0002d252) clock_digital_number_pane_cp12_ParamLimits

0x0e37,	// (0x0002d252) clock_digital_number_pane_cp12

0x0e4f,	// (0x0002d26a) clock_digital_number_pane_cp13_ParamLimits

0x0e4f,	// (0x0002d26a) clock_digital_number_pane_cp13

0x0e67,	// (0x0002d282) clock_digital_separator_pane_cp10_ParamLimits

0x0e67,	// (0x0002d282) clock_digital_separator_pane_cp10

0x0e7f,	// (0x0002d29a) popup_clock_digital_window_cp02_t1_ParamLimits

0x0e7f,	// (0x0002d29a) popup_clock_digital_window_cp02_t1

0xbb04,	// (0x00037f1f) clock_digital_number_pane_cp10_g1

0xbb04,	// (0x00037f1f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003bc0a) clock_digital_number_pane_cp10_g

0xbb04,	// (0x00037f1f) clock_digital_separator_pane_cp10_g1

0xbb04,	// (0x00037f1f) clock_digital_separator_pane_g2_cp10

0xc7d2,	// (0x00038bed) navi_pane_vded_g4

0xc7db,	// (0x00038bf6) navi_pane_vded_g5

0xc7e4,	// (0x00038bff) navi_pane_vded_t1

0xad37,	// (0x00037152) main_vded_pane

0x5c7f,	// (0x0003209a) main_vded_pane_g1

0x5c89,	// (0x000320a4) main_vded_pane_g2

0x5c93,	// (0x000320ae) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003bc0f) main_vded_pane_g

0x5c9d,	// (0x000320b8) main_vded_pane_t1

0x5cab,	// (0x000320c6) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003bc16) main_vded_pane_t

0x5cb9,	// (0x000320d4) vded_slider_pane

0x5cc1,	// (0x000320dc) vded_video_pane

0xe695,	// (0x0003aab0) vded_video_pane_g1

0x5cc9,	// (0x000320e4) vded_video_pane_g2

0xe091,	// (0x0003a4ac) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003bc1b) vded_video_pane_g

0xe69f,	// (0x0003aaba) vded_slider_pane_g1

0xdde4,	// (0x0003a1ff) vded_slider_pane_g2

0xe6a8,	// (0x0003aac3) vded_slider_pane_g3

0xe6b1,	// (0x0003aacc) vded_slider_pane_g4

0xe6ba,	// (0x0003aad5) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003bc22) vded_slider_pane_g

0x5740,	// (0x00031b5b) mup3_rocker_pane_ParamLimits

0x5740,	// (0x00031b5b) mup3_rocker_pane

0x5cd2,	// (0x000320ed) mup3_control_keys_pane_g1

0x5cda,	// (0x000320f5) mup3_control_keys_pane_g2

0x5ce2,	// (0x000320fd) mup3_control_keys_pane_g3

0x5cea,	// (0x00032105) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003bc2d) mup3_control_keys_pane_g

0x038a,	// (0x0002c7a5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x038a,	// (0x0002c7a5) popup_toolbar2_fixed_window_cp01

0x5774,	// (0x00031b8f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5774,	// (0x00031b8f) popup_toolbar2_fixed_window_cp02

0xd005,	// (0x00039420) popup_call2_audio_second_window_t4_ParamLimits

0xd005,	// (0x00039420) popup_call2_audio_second_window_t4

0xd533,	// (0x0003994e) popup_call2_audio_first_window_t6_ParamLimits

0xd533,	// (0x0003994e) popup_call2_audio_first_window_t6

0xd7c9,	// (0x00039be4) popup_call2_audio_out_window_t6_ParamLimits

0xd7c9,	// (0x00039be4) popup_call2_audio_out_window_t6

0xad37,	// (0x00037152) main_vitu_pane

0x5cfa,	// (0x00032115) aid_size_cell_itu_ParamLimits

0x5cfa,	// (0x00032115) aid_size_cell_itu

0xc6cc,	// (0x00038ae7) bg_popup_window_pane_cp08_ParamLimits

0xc6cc,	// (0x00038ae7) bg_popup_window_pane_cp08

0x5d10,	// (0x0003212b) field_vitu_entry_pane_ParamLimits

0x5d10,	// (0x0003212b) field_vitu_entry_pane

0x5d27,	// (0x00032142) grid_vitu_function_pane_ParamLimits

0x5d27,	// (0x00032142) grid_vitu_function_pane

0x5d42,	// (0x0003215d) grid_vitu_itu_pane_ParamLimits

0x5d42,	// (0x0003215d) grid_vitu_itu_pane

0x5d60,	// (0x0003217b) cell_vitu_itu_pane_ParamLimits

0x5d60,	// (0x0003217b) cell_vitu_itu_pane

0x5d82,	// (0x0003219d) cell_vitu_function_pane_ParamLimits

0x5d82,	// (0x0003219d) cell_vitu_function_pane

0xc6cc,	// (0x00038ae7) bg_popup_sub_pane_cp08_ParamLimits

0xc6cc,	// (0x00038ae7) bg_popup_sub_pane_cp08

0x5d9b,	// (0x000321b6) field_vitu_entry_pane_t1_ParamLimits

0x5d9b,	// (0x000321b6) field_vitu_entry_pane_t1

0xe6db,	// (0x0003aaf6) field_vitu_entry_pane_t2_ParamLimits

0xe6db,	// (0x0003aaf6) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003bc3b) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003bc3b) field_vitu_entry_pane_t

0xe6f8,	// (0x0003ab13) bg_button_pane_cp05_ParamLimits

0xe6f8,	// (0x0003ab13) bg_button_pane_cp05

0x5db9,	// (0x000321d4) cell_vitu_itu_pane_g1

0x5dd1,	// (0x000321ec) cell_vitu_itu_pane_t1_ParamLimits

0x5dd1,	// (0x000321ec) cell_vitu_itu_pane_t1

0x5de3,	// (0x000321fe) cell_vitu_itu_pane_t2_ParamLimits

0x5de3,	// (0x000321fe) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003bc40) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003bc40) cell_vitu_itu_pane_t

0xe706,	// (0x0003ab21) bg_button_pane_cp07

0x5e18,	// (0x00032233) cell_vitu_function_pane_g1

0xb2a4,	// (0x000376bf) main_calc_pane_g1

0x01ea,	// (0x0002c605) aid_visual_content_pane

0xad37,	// (0x00037152) main_vradio_pane

0x5e21,	// (0x0003223c) main_vradio_pane_g1_ParamLimits

0x5e21,	// (0x0003223c) main_vradio_pane_g1

0xe710,	// (0x0003ab2b) main_vradio_pane_g2_ParamLimits

0xe710,	// (0x0003ab2b) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003bc47) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003bc47) main_vradio_pane_g

0x5e3a,	// (0x00032255) main_vradio_pane_t1_ParamLimits

0x5e3a,	// (0x00032255) main_vradio_pane_t1

0x5e4f,	// (0x0003226a) main_vradio_pane_t2_ParamLimits

0x5e4f,	// (0x0003226a) main_vradio_pane_t2

0xe71d,	// (0x0003ab38) main_vradio_pane_t3_ParamLimits

0xe71d,	// (0x0003ab38) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003bc4c) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003bc4c) main_vradio_pane_t

0x5e64,	// (0x0003227f) vradio_rocker_control_pane_ParamLimits

0x5e64,	// (0x0003227f) vradio_rocker_control_pane

0x5e76,	// (0x00032291) vradio_station_info_pane_ParamLimits

0x5e76,	// (0x00032291) vradio_station_info_pane

0xe731,	// (0x0003ab4c) vradio_frequency_info_pane_ParamLimits

0xe731,	// (0x0003ab4c) vradio_frequency_info_pane

0xe091,	// (0x0003a4ac) vradio_station_info_pane_g1

0xe740,	// (0x0003ab5b) vradio_station_info_pane_t1_ParamLimits

0xe740,	// (0x0003ab5b) vradio_station_info_pane_t1

0xe762,	// (0x0003ab7d) vradio_station_info_pane_t2_ParamLimits

0xe762,	// (0x0003ab7d) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003bc53) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003bc53) vradio_station_info_pane_t

0xe774,	// (0x0003ab8f) vradio_tuning_pane

0xe77c,	// (0x0003ab97) vradio_rocker_control_pane_g1

0xe784,	// (0x0003ab9f) vradio_rocker_control_pane_g2

0xe78c,	// (0x0003aba7) vradio_rocker_control_pane_g3

0xe794,	// (0x0003abaf) vradio_rocker_control_pane_g4

0xe79c,	// (0x0003abb7) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003bc58) vradio_rocker_control_pane_g

0x5e88,	// (0x000322a3) vradio_frequency_info_pane_g1

0xe7a4,	// (0x0003abbf) vradio_frequency_info_pane_t1_ParamLimits

0xe7a4,	// (0x0003abbf) vradio_frequency_info_pane_t1

0x5e92,	// (0x000322ad) vradio_tuning_pane_g1

0x5e9d,	// (0x000322b8) vradio_tuning_pane_t1

0x1af3,	// (0x0002df0e) area_side_right_pane_ParamLimits

0x1af3,	// (0x0002df0e) area_side_right_pane

0xdc44,	// (0x0003a05f) status_small_pane_g1

0xdc4c,	// (0x0003a067) status_small_pane_g2

0xdc55,	// (0x0003a070) status_small_pane_g3

0xdc5e,	// (0x0003a079) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003ba13) status_small_pane_g

0xdc67,	// (0x0003a082) status_small_pane_t1

0xad37,	// (0x00037152) main_video3_pane

0xe7b8,	// (0x0003abd3) cams_zoom_vslider_pane

0xe7c0,	// (0x0003abdb) image3_wide_pane_ParamLimits

0xe7c0,	// (0x0003abdb) image3_wide_pane

0xe7da,	// (0x0003abf5) image3_wide_small_pane

0xe7e6,	// (0x0003ac01) main_video3_pane_g1_ParamLimits

0xe7e6,	// (0x0003ac01) main_video3_pane_g1

0xe802,	// (0x0003ac1d) main_video3_pane_g2_ParamLimits

0xe802,	// (0x0003ac1d) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003bc63) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003bc63) main_video3_pane_g

0xe81e,	// (0x0003ac39) main_video3_pane_t1_ParamLimits

0xe81e,	// (0x0003ac39) main_video3_pane_t1

0xe849,	// (0x0003ac64) main_video3_pane_t2_ParamLimits

0xe849,	// (0x0003ac64) main_video3_pane_t2

0xe874,	// (0x0003ac8f) main_video3_pane_t3_ParamLimits

0xe874,	// (0x0003ac8f) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003bc68) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003bc68) main_video3_pane_t

0xe8a1,	// (0x0003acbc) cams_zoom_vslider_pane_g1

0xe8aa,	// (0x0003acc5) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003bc6f) cams_zoom_vslider_pane_g

0xe8b2,	// (0x0003accd) small_slider_vertical_pane

0xe091,	// (0x0003a4ac) small_slider_vertical_pane_g1

0xe091,	// (0x0003a4ac) small_slider_vertical_pane_g2

0xe8ba,	// (0x0003acd5) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003bc74) small_slider_vertical_pane_g

0xad37,	// (0x00037152) main_hwr_training_pane

0xe8c3,	// (0x0003acde) hwr_training_instruct_pane_ParamLimits

0xe8c3,	// (0x0003acde) hwr_training_instruct_pane

0x5eac,	// (0x000322c7) hwr_training_navi_pane_ParamLimits

0x5eac,	// (0x000322c7) hwr_training_navi_pane

0x5ecb,	// (0x000322e6) hwr_training_write_pane_ParamLimits

0x5ecb,	// (0x000322e6) hwr_training_write_pane

0xad01,	// (0x0003711c) bg_frame_shadow_pane

0xe8fa,	// (0x0003ad15) hwr_training_write_pane_g1

0xe902,	// (0x0003ad1d) hwr_training_write_pane_g2

0xe90a,	// (0x0003ad25) hwr_training_write_pane_g3

0xe912,	// (0x0003ad2d) hwr_training_write_pane_g4

0xe91a,	// (0x0003ad35) hwr_training_write_pane_g5

0xe922,	// (0x0003ad3d) hwr_training_write_pane_g6

0xe92a,	// (0x0003ad45) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003bc7b) hwr_training_write_pane_g

0xb530,	// (0x0003794b) hwr_training_navi_pane_g1_ParamLimits

0xb530,	// (0x0003794b) hwr_training_navi_pane_g1

0xb542,	// (0x0003795d) hwr_training_navi_pane_g2_ParamLimits

0xb542,	// (0x0003795d) hwr_training_navi_pane_g2

0xb554,	// (0x0003796f) hwr_training_navi_pane_g3_ParamLimits

0xb554,	// (0x0003796f) hwr_training_navi_pane_g3

0xb564,	// (0x0003797f) hwr_training_navi_pane_g4_ParamLimits

0xb564,	// (0x0003797f) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003bc8a) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003bc8a) hwr_training_navi_pane_g

0xb571,	// (0x0003798c) hwr_training_navi_pane_t1

0x5f06,	// (0x00032321) list_single_hwr_training_instruct_pane_ParamLimits

0x5f06,	// (0x00032321) list_single_hwr_training_instruct_pane

0xe932,	// (0x0003ad4d) list_single_hwr_training_instruct_pane_t1

0xdfd1,	// (0x0003a3ec) bg_frame_shadow_pane_g1

0xe941,	// (0x0003ad5c) bg_frame_shadow_pane_g2

0xe949,	// (0x0003ad64) bg_frame_shadow_pane_g3

0xe951,	// (0x0003ad6c) bg_frame_shadow_pane_g4

0xe959,	// (0x0003ad74) bg_frame_shadow_pane_g5

0xe961,	// (0x0003ad7c) bg_frame_shadow_pane_g6

0xe969,	// (0x0003ad84) bg_frame_shadow_pane_g7

0xbc8a,	// (0x000380a5) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003bc95) bg_frame_shadow_pane_g

0xad37,	// (0x00037152) main_video_tele_dialer_pane

0x0eab,	// (0x0002d2c6) aid_size_cell_video_keypad_ParamLimits

0x0eab,	// (0x0002d2c6) aid_size_cell_video_keypad

0x0ec5,	// (0x0002d2e0) grid_video_dialer_keypad_pane_ParamLimits

0x0ec5,	// (0x0002d2e0) grid_video_dialer_keypad_pane

0x0f11,	// (0x0002d32c) video_down_pane_cp_ParamLimits

0x0f11,	// (0x0002d32c) video_down_pane_cp

0x0f27,	// (0x0002d342) cell_video_dialer_keypad_pane_ParamLimits

0x0f27,	// (0x0002d342) cell_video_dialer_keypad_pane

0xe971,	// (0x0003ad8c) bg_button_pane_cp08_ParamLimits

0xe971,	// (0x0003ad8c) bg_button_pane_cp08

0x5f37,	// (0x00032352) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f37,	// (0x00032352) cell_video_dialer_keypad_pane_g1

0x572a,	// (0x00031b45) mup3_rocker2_pane_ParamLimits

0x572a,	// (0x00031b45) mup3_rocker2_pane

0xe091,	// (0x0003a4ac) mup3_rocker2_pane_g1

0x06a4,	// (0x0002cabf) main_dialer2_pane

0xad37,	// (0x00037152) main_mp4_pane

0xb587,	// (0x000379a2) main_mp4_pane_g1_ParamLimits

0xb587,	// (0x000379a2) main_mp4_pane_g1

0xb587,	// (0x000379a2) main_mp4_pane_g2_ParamLimits

0xb587,	// (0x000379a2) main_mp4_pane_g2

0x0f49,	// (0x0002d364) main_mp4_pane_g3_ParamLimits

0x0f49,	// (0x0002d364) main_mp4_pane_g3

0xb595,	// (0x000379b0) main_mp4_pane_g4_ParamLimits

0xb595,	// (0x000379b0) main_mp4_pane_g4

0xb5bd,	// (0x000379d8) main_mp4_pane_g5_ParamLimits

0xb5bd,	// (0x000379d8) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003bcb5) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003bcb5) main_mp4_pane_g

0xb60d,	// (0x00037a28) main_mp4_pane_t1_ParamLimits

0xb60d,	// (0x00037a28) main_mp4_pane_t1

0xb669,	// (0x00037a84) main_mp4_pane_t2_ParamLimits

0xb669,	// (0x00037a84) main_mp4_pane_t2

0xe97d,	// (0x0003ad98) main_mp4_pane_t3_ParamLimits

0xe97d,	// (0x0003ad98) main_mp4_pane_t3

0xb6bb,	// (0x00037ad6) main_mp4_pane_t4_ParamLimits

0xb6bb,	// (0x00037ad6) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003bcc2) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003bcc2) main_mp4_pane_t

0xb6ff,	// (0x00037b1a) mp4_progress_pane_ParamLimits

0xb6ff,	// (0x00037b1a) mp4_progress_pane

0xb749,	// (0x00037b64) mp4_rocker_pane_ParamLimits

0xb749,	// (0x00037b64) mp4_rocker_pane

0xe9a5,	// (0x0003adc0) mp4_progress_pane_t1

0xe9be,	// (0x0003add9) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003bccb) mp4_progress_pane_t

0xe9d7,	// (0x0003adf2) mup_progress_pane_cp04

0x5f6e,	// (0x00032389) mp4_rocker_pane_g1

0x0f85,	// (0x0002d3a0) aid_cell_size_keypad2_ParamLimits

0x0f85,	// (0x0002d3a0) aid_cell_size_keypad2

0x0f9b,	// (0x0002d3b6) dialer2_ne_pane_ParamLimits

0x0f9b,	// (0x0002d3b6) dialer2_ne_pane

0x0fb5,	// (0x0002d3d0) grid_dialer2_keypad_pane_ParamLimits

0x0fb5,	// (0x0002d3d0) grid_dialer2_keypad_pane

0xde76,	// (0x0003a291) bg_popup_call_pane_cp07_ParamLimits

0xde76,	// (0x0003a291) bg_popup_call_pane_cp07

0x5f78,	// (0x00032393) dialer2_ne_pane_t1_ParamLimits

0x5f78,	// (0x00032393) dialer2_ne_pane_t1

0x0fd1,	// (0x0002d3ec) cell_dialer2_keypad_pane_ParamLimits

0x0fd1,	// (0x0002d3ec) cell_dialer2_keypad_pane

0xe9f5,	// (0x0003ae10) bg_button_pane_pane_cp04_ParamLimits

0xe9f5,	// (0x0003ae10) bg_button_pane_pane_cp04

0x5fb3,	// (0x000323ce) cell_dialer2_keypad_pane_g1_ParamLimits

0x5fb3,	// (0x000323ce) cell_dialer2_keypad_pane_g1

0x27c7,	// (0x0002ebe2) aid_placing_vt_set_content_ParamLimits

0x27c7,	// (0x0002ebe2) aid_placing_vt_set_content

0x27ef,	// (0x0002ec0a) aid_placing_vt_set_title_ParamLimits

0x27ef,	// (0x0002ec0a) aid_placing_vt_set_title

0xad37,	// (0x00037152) main_image3_pane

0x1051,	// (0x0002d46c) area_side_right_pane_cp01_ParamLimits

0x1051,	// (0x0002d46c) area_side_right_pane_cp01

0xb587,	// (0x000379a2) main_image3_pane_g1_ParamLimits

0xb587,	// (0x000379a2) main_image3_pane_g1

0x1068,	// (0x0002d483) main_image3_pane_g2_ParamLimits

0x1068,	// (0x0002d483) main_image3_pane_g2

0x1090,	// (0x0002d4ab) main_image3_pane_g3_ParamLimits

0x1090,	// (0x0002d4ab) main_image3_pane_g3

0x10ba,	// (0x0002d4d5) main_image3_pane_g4_ParamLimits

0x10ba,	// (0x0002d4d5) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003bcda) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003bcda) main_image3_pane_g

0x10e4,	// (0x0002d4ff) main_image3_pane_t1_ParamLimits

0x10e4,	// (0x0002d4ff) main_image3_pane_t1

0x113c,	// (0x0002d557) main_image3_pane_t2_ParamLimits

0x113c,	// (0x0002d557) main_image3_pane_t2

0x118e,	// (0x0002d5a9) main_image3_pane_t3_ParamLimits

0x118e,	// (0x0002d5a9) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003bce3) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003bce3) main_image3_pane_t

0xc6cc,	// (0x00038ae7) grid_sctrl_middle_pane_cp01_ParamLimits

0xc6cc,	// (0x00038ae7) grid_sctrl_middle_pane_cp01

0x601b,	// (0x00032436) cell_sctrl_middle_pane_cp01_ParamLimits

0x601b,	// (0x00032436) cell_sctrl_middle_pane_cp01

0x6038,	// (0x00032453) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6038,	// (0x00032453) cell_sctrl_middle_pane_cp01_g1

0xad37,	// (0x00037152) main_call4_pane

0x1216,	// (0x0002d631) aid_size_button_call4_ParamLimits

0x1216,	// (0x0002d631) aid_size_button_call4

0x1247,	// (0x0002d662) call4_windows_pane_ParamLimits

0x1247,	// (0x0002d662) call4_windows_pane

0x1267,	// (0x0002d682) grid_call4_button_pane_ParamLimits

0x1267,	// (0x0002d682) grid_call4_button_pane

0xea01,	// (0x0003ae1c) call4_windows_conf_pane

0xea18,	// (0x0003ae33) popup_call4_audio_first_window_ParamLimits

0xea18,	// (0x0003ae33) popup_call4_audio_first_window

0xea60,	// (0x0003ae7b) popup_call4_audio_second_window_ParamLimits

0xea60,	// (0x0003ae7b) popup_call4_audio_second_window

0xea79,	// (0x0003ae94) popup_call4_audio_wait_window_ParamLimits

0xea79,	// (0x0003ae94) popup_call4_audio_wait_window

0x1294,	// (0x0002d6af) cell_call4_button_pane_ParamLimits

0x1294,	// (0x0002d6af) cell_call4_button_pane

0x604e,	// (0x00032469) bg_button_pane_cp09_ParamLimits

0x604e,	// (0x00032469) bg_button_pane_cp09

0x12bd,	// (0x0002d6d8) cell_call4_button_pane_g1_ParamLimits

0x12bd,	// (0x0002d6d8) cell_call4_button_pane_g1

0x12e3,	// (0x0002d6fe) cell_call4_button_pane_t1_ParamLimits

0x12e3,	// (0x0002d6fe) cell_call4_button_pane_t1

0xea8f,	// (0x0003aeaa) popup_call4_audio_conf_window_ParamLimits

0xea8f,	// (0x0003aeaa) popup_call4_audio_conf_window

0x578a,	// (0x00031ba5) mup3_progress_pane_t1_ParamLimits

0x57a9,	// (0x00031bc4) mup3_progress_pane_t2_ParamLimits

0xe3b0,	// (0x0003a7cb) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003bbb7) mup3_progress_pane_t_ParamLimits

0xe3cd,	// (0x0003a7e8) mup_progress_pane_cp03_ParamLimits

0x5cf2,	// (0x0003210d) mup3_control_keys_pane_g4_copy1

0xb72d,	// (0x00037b48) mp4_rocker2_pane_ParamLimits

0xb72d,	// (0x00037b48) mp4_rocker2_pane

0xeaa3,	// (0x0003aebe) mp4_rocker2_pane_g1

0xeaab,	// (0x0003aec6) mp4_rocker2_pane_g2

0xb7cd,	// (0x00037be8) mp4_rocker2_pane_g3

0xb7d5,	// (0x00037bf0) mp4_rocker2_pane_g4

0xb7dd,	// (0x00037bf8) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003bcec) mp4_rocker2_pane_g

0xad37,	// (0x00037152) main_camera4_pane

0xad37,	// (0x00037152) main_video4_pane

0x0edf,	// (0x0002d2fa) main_video_tele_dialer_pane_t1_ParamLimits

0x0edf,	// (0x0002d2fa) main_video_tele_dialer_pane_t1

0x0ef8,	// (0x0002d313) main_video_tele_dialer_pane_t2_ParamLimits

0x0ef8,	// (0x0002d313) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003bca6) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003bca6) main_video_tele_dialer_pane_t

0x1321,	// (0x0002d73c) cam4_autofocus_pane_ParamLimits

0x1321,	// (0x0002d73c) cam4_autofocus_pane

0x1337,	// (0x0002d752) cam4_image_uncrop_pane_ParamLimits

0x1337,	// (0x0002d752) cam4_image_uncrop_pane

0x1351,	// (0x0002d76c) cam4_indicators_pane_ParamLimits

0x1351,	// (0x0002d76c) cam4_indicators_pane

0x137c,	// (0x0002d797) main_camera4_pane_g1_ParamLimits

0x137c,	// (0x0002d797) main_camera4_pane_g1

0x138e,	// (0x0002d7a9) main_camera4_pane_g2_ParamLimits

0x138e,	// (0x0002d7a9) main_camera4_pane_g2

0x13a1,	// (0x0002d7bc) main_camera4_pane_g3_ParamLimits

0x13a1,	// (0x0002d7bc) main_camera4_pane_g3

0x13b4,	// (0x0002d7cf) main_camera4_pane_g4_ParamLimits

0x13b4,	// (0x0002d7cf) main_camera4_pane_g4

0x13c7,	// (0x0002d7e2) main_camera4_pane_g5_ParamLimits

0x13c7,	// (0x0002d7e2) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003bcf7) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003bcf7) main_camera4_pane_g

0x13eb,	// (0x0002d806) main_camera4_pane_t1_ParamLimits

0x13eb,	// (0x0002d806) main_camera4_pane_t1

0xb801,	// (0x00037c1c) bg_tb_trans_pane_cp06

0xb817,	// (0x00037c32) cam4_indicators_pane_g1

0xb828,	// (0x00037c43) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003bd12) cam4_indicators_pane_g

0xb846,	// (0x00037c61) cam4_indicators_pane_t1

0x143b,	// (0x0002d856) main_video4_pane_g1_ParamLimits

0x143b,	// (0x0002d856) main_video4_pane_g1

0x144a,	// (0x0002d865) main_video4_pane_g2_ParamLimits

0x144a,	// (0x0002d865) main_video4_pane_g2

0x1459,	// (0x0002d874) main_video4_pane_g3_ParamLimits

0x1459,	// (0x0002d874) main_video4_pane_g3

0x1468,	// (0x0002d883) main_video4_pane_g4_ParamLimits

0x1468,	// (0x0002d883) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003bd19) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003bd19) main_video4_pane_g

0x1486,	// (0x0002d8a1) vid4_indicators_pane_ParamLimits

0x1486,	// (0x0002d8a1) vid4_indicators_pane

0x14b4,	// (0x0002d8cf) video4_image_uncrop_cif_pane_ParamLimits

0x14b4,	// (0x0002d8cf) video4_image_uncrop_cif_pane

0x14ce,	// (0x0002d8e9) video4_image_uncrop_nhd_pane_ParamLimits

0x14ce,	// (0x0002d8e9) video4_image_uncrop_nhd_pane

0x1337,	// (0x0002d752) video4_image_uncrop_vga_pane_ParamLimits

0x1337,	// (0x0002d752) video4_image_uncrop_vga_pane

0xad29,	// (0x00037144) bg_tb_trans_pane_cp07

0xb872,	// (0x00037c8d) vid4_indicators_pane_g1

0xb886,	// (0x00037ca1) vid4_indicators_pane_g2

0xb89a,	// (0x00037cb5) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003bd24) vid4_indicators_pane_g

0xb8c9,	// (0x00037ce4) vid4_indicators_pane_t1

0x6080,	// (0x0003249b) cam4_autofocus_pane_g1

0x6088,	// (0x000324a3) cam4_autofocus_pane_g2

0x6090,	// (0x000324ab) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003bd2f) cam4_autofocus_pane_g

0x6098,	// (0x000324b3) cam4_autofocus_pane_g3_copy1

0x5f1b,	// (0x00032336) video_down_pane_cp_t1

0x5f29,	// (0x00032344) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003bcab) video_down_pane_cp_t

0xad29,	// (0x00037144) popup_vitu2_window_ParamLimits

0xad29,	// (0x00037144) popup_vitu2_window

0x14e2,	// (0x0002d8fd) aid_size_cell2_itu2_ParamLimits

0x14e2,	// (0x0002d8fd) aid_size_cell2_itu2

0x1508,	// (0x0002d923) aid_size_cell_itu2_ParamLimits

0x1508,	// (0x0002d923) aid_size_cell_itu2

0x1564,	// (0x0002d97f) bg_popup_window_pane_cp09_ParamLimits

0x1564,	// (0x0002d97f) bg_popup_window_pane_cp09

0x1572,	// (0x0002d98d) field_vitu2_entry_pane_ParamLimits

0x1572,	// (0x0002d98d) field_vitu2_entry_pane

0x1598,	// (0x0002d9b3) grid_vitu2_function_pane_ParamLimits

0x1598,	// (0x0002d9b3) grid_vitu2_function_pane

0x15e9,	// (0x0002da04) grid_vitu2_itu_pane_ParamLimits

0x15e9,	// (0x0002da04) grid_vitu2_itu_pane

0x1681,	// (0x0002da9c) cell_vitu2_itu_pane_ParamLimits

0x1681,	// (0x0002da9c) cell_vitu2_itu_pane

0x16ad,	// (0x0002dac8) cell_vitu2_function_pane_ParamLimits

0x16ad,	// (0x0002dac8) cell_vitu2_function_pane

0xeab3,	// (0x0003aece) bg_popup_call_pane_cp08_ParamLimits

0xeab3,	// (0x0003aece) bg_popup_call_pane_cp08

0xeaca,	// (0x0003aee5) field_vitu2_entry_pane_g1

0xead6,	// (0x0003aef1) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003bd36) field_vitu2_entry_pane_g

0x60a0,	// (0x000324bb) field_vitu2_entry_pane_t1_ParamLimits

0x60a0,	// (0x000324bb) field_vitu2_entry_pane_t1

0xeaf0,	// (0x0003af0b) field_vitu2_entry_pane_t2_ParamLimits

0xeaf0,	// (0x0003af0b) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003bd3d) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003bd3d) field_vitu2_entry_pane_t

0x16ec,	// (0x0002db07) bg_button_pane_cp010_ParamLimits

0x16ec,	// (0x0002db07) bg_button_pane_cp010

0xb8e0,	// (0x00037cfb) cell_vitu2_itu_pane_g1

0x1708,	// (0x0002db23) cell_vitu2_itu_pane_t1_ParamLimits

0x1708,	// (0x0002db23) cell_vitu2_itu_pane_t1

0x1766,	// (0x0002db81) cell_vitu2_itu_pane_t2_ParamLimits

0x1766,	// (0x0002db81) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003bd47) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003bd47) cell_vitu2_itu_pane_t

0xad29,	// (0x00037144) bg_button_pane_cp011

0x1852,	// (0x0002dc6d) cell_vitu2_function_pane_g1

0xad37,	// (0x00037152) main_myfav_hc_pane

0x11de,	// (0x0002d5f9) popup_image3_note_pane_ParamLimits

0x11de,	// (0x0002d5f9) popup_image3_note_pane

0x11fa,	// (0x0002d615) popup_image3_tool_bar_pane_ParamLimits

0x11fa,	// (0x0002d615) popup_image3_tool_bar_pane

0x17f4,	// (0x0002dc0f) cell_vitu2_itu_pane_t3_ParamLimits

0x17f4,	// (0x0002dc0f) cell_vitu2_itu_pane_t3

0xad01,	// (0x0003711c) bg_popup_trans_pane

0xeb15,	// (0x0003af30) grid_image3_tool_bar_pane

0xeb1f,	// (0x0003af3a) bg_popup_trans_pane_g1

0xbfef,	// (0x0003840a) bg_popup_trans_pane_g2

0xeb27,	// (0x0003af42) bg_popup_trans_pane_g3

0xeb2f,	// (0x0003af4a) bg_popup_trans_pane_g4

0xeb37,	// (0x0003af52) bg_popup_trans_pane_g5

0xeb3f,	// (0x0003af5a) bg_popup_trans_pane_g6

0xeb47,	// (0x0003af62) bg_popup_trans_pane_g7

0xeb4f,	// (0x0003af6a) bg_popup_trans_pane_g8

0xbfcf,	// (0x000383ea) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003bd4e) bg_popup_trans_pane_g

0xeb57,	// (0x0003af72) cell_image3_tool_bar_pane_ParamLimits

0xeb57,	// (0x0003af72) cell_image3_tool_bar_pane

0xe091,	// (0x0003a4ac) cell_image3_tool_bar_pane_g1

0xad01,	// (0x0003711c) bg_popup_trans_pane_cp1

0xeb6b,	// (0x0003af86) popup_image3_note_pane_t1

0xeb79,	// (0x0003af94) popup_image3_note_pane_t2

0xeb87,	// (0x0003afa2) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003bd61) popup_image3_note_pane_t

0xeb95,	// (0x0003afb0) popup_image3_note_pane_t3_copy1

0x60cf,	// (0x000324ea) bg_myfav_hc_instruction_pane_ParamLimits

0x60cf,	// (0x000324ea) bg_myfav_hc_instruction_pane

0x60e3,	// (0x000324fe) cell_myfav_contact_pane_ParamLimits

0x60e3,	// (0x000324fe) cell_myfav_contact_pane

0x6101,	// (0x0003251c) cell_myfav_contact_pane_cp1_ParamLimits

0x6101,	// (0x0003251c) cell_myfav_contact_pane_cp1

0x6119,	// (0x00032534) cell_myfav_contact_pane_cp2_ParamLimits

0x6119,	// (0x00032534) cell_myfav_contact_pane_cp2

0x6131,	// (0x0003254c) cell_myfav_contact_pane_cp3_ParamLimits

0x6131,	// (0x0003254c) cell_myfav_contact_pane_cp3

0x6148,	// (0x00032563) cell_myfav_contact_pane_cp4_ParamLimits

0x6148,	// (0x00032563) cell_myfav_contact_pane_cp4

0x6160,	// (0x0003257b) cell_myfav_contact_pane_cp5_ParamLimits

0x6160,	// (0x0003257b) cell_myfav_contact_pane_cp5

0x6174,	// (0x0003258f) cell_myfav_contact_pane_cp6_ParamLimits

0x6174,	// (0x0003258f) cell_myfav_contact_pane_cp6

0x618a,	// (0x000325a5) cell_myfav_contact_pane_cp7_ParamLimits

0x618a,	// (0x000325a5) cell_myfav_contact_pane_cp7

0xeba3,	// (0x0003afbe) listscroll_gen_pane_cp05

0x61a4,	// (0x000325bf) main_myfav_hc_pane_g1_ParamLimits

0x61a4,	// (0x000325bf) main_myfav_hc_pane_g1

0x61be,	// (0x000325d9) main_myfav_hc_pane_g2_ParamLimits

0x61be,	// (0x000325d9) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003bd68) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003bd68) main_myfav_hc_pane_g

0x61f0,	// (0x0003260b) main_myfav_hc_pane_t1_ParamLimits

0x61f0,	// (0x0003260b) main_myfav_hc_pane_t1

0xebac,	// (0x0003afc7) main_myfav_hc_pane_t2_ParamLimits

0xebac,	// (0x0003afc7) main_myfav_hc_pane_t2

0xebbe,	// (0x0003afd9) main_myfav_hc_pane_t3_ParamLimits

0xebbe,	// (0x0003afd9) main_myfav_hc_pane_t3

0x6207,	// (0x00032622) main_myfav_hc_pane_t4_ParamLimits

0x6207,	// (0x00032622) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003bd6f) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003bd6f) main_myfav_hc_pane_t

0xe091,	// (0x0003a4ac) bg_myfav_hc_instruction_pane_g1

0xebd0,	// (0x0003afeb) cell_myfav_contact_pane_g1_ParamLimits

0xebd0,	// (0x0003afeb) cell_myfav_contact_pane_g1

0xebd0,	// (0x0003afeb) cell_myfav_contact_pane_g2_ParamLimits

0xebd0,	// (0x0003afeb) cell_myfav_contact_pane_g2

0xebdc,	// (0x0003aff7) cell_myfav_contact_pane_g3_ParamLimits

0xebdc,	// (0x0003aff7) cell_myfav_contact_pane_g3

0xe39a,	// (0x0003a7b5) cell_myfav_contact_pane_g4_ParamLimits

0xe39a,	// (0x0003a7b5) cell_myfav_contact_pane_g4

0xebe9,	// (0x0003b004) cell_myfav_contact_pane_g5_ParamLimits

0xebe9,	// (0x0003b004) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003bd7a) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003bd7a) cell_myfav_contact_pane_g

0x61d8,	// (0x000325f3) main_myfav_hc_pane_g3_ParamLimits

0x61d8,	// (0x000325f3) main_myfav_hc_pane_g3

0x02ec,	// (0x0002c707) popup_adpt_find_window

0x622f,	// (0x0003264a) afind_page_pane_ParamLimits

0x622f,	// (0x0003264a) afind_page_pane

0x6244,	// (0x0003265f) aid_size_cell_afind_ParamLimits

0x6244,	// (0x0003265f) aid_size_cell_afind

0x6262,	// (0x0003267d) bg_popup_sub_pane_cp09_ParamLimits

0x6262,	// (0x0003267d) bg_popup_sub_pane_cp09

0x626f,	// (0x0003268a) find_pane_cp01_ParamLimits

0x626f,	// (0x0003268a) find_pane_cp01

0xebf5,	// (0x0003b010) grid_afind_control_pane_ParamLimits

0xebf5,	// (0x0003b010) grid_afind_control_pane

0x627c,	// (0x00032697) grid_afind_pane_ParamLimits

0x627c,	// (0x00032697) grid_afind_pane

0x629e,	// (0x000326b9) cell_afind_pane_ParamLimits

0x629e,	// (0x000326b9) cell_afind_pane

0xe091,	// (0x0003a4ac) afind_page_pane_g1

0x6305,	// (0x00032720) afind_page_pane_g2

0x630e,	// (0x00032729) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003bd85) afind_page_pane_g

0x6317,	// (0x00032732) afind_page_pane_t1

0xec09,	// (0x0003b024) cell_afind_grid_control_pane_ParamLimits

0xec09,	// (0x0003b024) cell_afind_grid_control_pane

0xe9f5,	// (0x0003ae10) bg_button_pane_cp69_ParamLimits

0xe9f5,	// (0x0003ae10) bg_button_pane_cp69

0x6337,	// (0x00032752) cell_afind_pane_g1_ParamLimits

0x6337,	// (0x00032752) cell_afind_pane_g1

0x6344,	// (0x0003275f) cell_afind_pane_t1_ParamLimits

0x6344,	// (0x0003275f) cell_afind_pane_t1

0xbde8,	// (0x00038203) bg_button_pane_cp72

0xec18,	// (0x0003b033) cell_afind_grid_control_pane_g1

0x4440,	// (0x0003085b) aid_image_placing_area_ParamLimits

0x4440,	// (0x0003085b) aid_image_placing_area

0xe6c3,	// (0x0003aade) field_vitu_entry_pane_g1_ParamLimits

0xe6c3,	// (0x0003aade) field_vitu_entry_pane_g1

0xe6cf,	// (0x0003aaea) field_vitu_entry_pane_g2_ParamLimits

0xe6cf,	// (0x0003aaea) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003bc36) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003bc36) field_vitu_entry_pane_g

0x5db9,	// (0x000321d4) cell_vitu_itu_pane_g1_ParamLimits

0x5dfb,	// (0x00032216) cell_vitu_itu_pane_t3_ParamLimits

0x5dfb,	// (0x00032216) cell_vitu_itu_pane_t3

0xe9a5,	// (0x0003adc0) mp4_progress_pane_t1_ParamLimits

0xe9be,	// (0x0003add9) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003bccb) mp4_progress_pane_t_ParamLimits

0xe9d7,	// (0x0003adf2) mup_progress_pane_cp04_ParamLimits

0x621b,	// (0x00032636) main_myfav_hc_pane_t5_ParamLimits

0x621b,	// (0x00032636) main_myfav_hc_pane_t5

0x1ab2,	// (0x0002decd) aid_zoom_text_primary

0x02ec,	// (0x0002c707) popup_adpt_find_window_ParamLimits

0xad29,	// (0x00037144) main_cam_set_pane

0x1368,	// (0x0002d783) cam4_zoom_pane_ParamLimits

0x1368,	// (0x0002d783) cam4_zoom_pane

0x6356,	// (0x00032771) main_cam_set_pane_g1_ParamLimits

0x6356,	// (0x00032771) main_cam_set_pane_g1

0x6364,	// (0x0003277f) main_cam_set_pane_g2_ParamLimits

0x6364,	// (0x0003277f) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003bd8c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003bd8c) main_cam_set_pane_g

0x6385,	// (0x000327a0) main_cam_set_pane_t1_ParamLimits

0x6385,	// (0x000327a0) main_cam_set_pane_t1

0x63a0,	// (0x000327bb) main_cset_listscroll_pane_ParamLimits

0x63a0,	// (0x000327bb) main_cset_listscroll_pane

0x63c0,	// (0x000327db) main_cset_slider_pane_ParamLimits

0x63c0,	// (0x000327db) main_cset_slider_pane

0xec29,	// (0x0003b044) main_cset_list_pane_ParamLimits

0xec29,	// (0x0003b044) main_cset_list_pane

0xec39,	// (0x0003b054) scroll_pane_cp028

0x63e6,	// (0x00032801) aid_area_touch_slider

0x6402,	// (0x0003281d) cset_slider_pane

0x642c,	// (0x00032847) main_cset_slider_pane_g1

0x6441,	// (0x0003285c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003bd91) main_cset_slider_pane_g

0xec72,	// (0x0003b08d) main_cset_slider_pane_t1

0x64fd,	// (0x00032918) main_cset_slider_pane_t2

0x6517,	// (0x00032932) main_cset_slider_pane_t3

0x6531,	// (0x0003294c) main_cset_slider_pane_t4

0x654b,	// (0x00032966) main_cset_slider_pane_t5

0x6565,	// (0x00032980) main_cset_slider_pane_t6

0x657a,	// (0x00032995) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003bdb6) main_cset_slider_pane_t

0x667e,	// (0x00032a99) cset_list_set_pane_ParamLimits

0x667e,	// (0x00032a99) cset_list_set_pane

0x6690,	// (0x00032aab) aid_position_infowindow_above

0x6698,	// (0x00032ab3) aid_position_infowindow_below

0xed12,	// (0x0003b12d) cset_list_set_pane_g1_ParamLimits

0xed12,	// (0x0003b12d) cset_list_set_pane_g1

0xed1e,	// (0x0003b139) cset_list_set_pane_g3_ParamLimits

0xed1e,	// (0x0003b139) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003bdd5) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003bdd5) cset_list_set_pane_g

0xed2d,	// (0x0003b148) cset_list_set_pane_t1_ParamLimits

0xed2d,	// (0x0003b148) cset_list_set_pane_t1

0xc6cc,	// (0x00038ae7) list_highlight_pane_cp021_ParamLimits

0xc6cc,	// (0x00038ae7) list_highlight_pane_cp021

0xc946,	// (0x00038d61) cset_slider_pane_g1

0xc958,	// (0x00038d73) cset_slider_pane_g2

0xc94f,	// (0x00038d6a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003bdda) cset_slider_pane_g

0xb8f2,	// (0x00037d0d) aid_area_touch_cam4_zoom

0xb8fa,	// (0x00037d15) cam4_zoom_cont_pane

0xb902,	// (0x00037d1d) cam4_zoom_pane_g1

0xb90a,	// (0x00037d25) cam4_zoom_pane_g2

0x1866,	// (0x0002dc81) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003bde1) cam4_zoom_pane_g

0xb912,	// (0x00037d2d) cam4_zoom_cont_pane_g1

0xb91b,	// (0x00037d36) cam4_zoom_cont_pane_g2

0xb924,	// (0x00037d3f) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003bde8) cam4_zoom_cont_pane_g

0x1234,	// (0x0002d64f) call4_image_pane_ParamLimits

0x1234,	// (0x0002d64f) call4_image_pane

0xea01,	// (0x0003ae1c) call4_windows_conf_pane_ParamLimits

0xea3e,	// (0x0003ae59) popup_call4_audio_in_window_ParamLimits

0xea3e,	// (0x0003ae59) popup_call4_audio_in_window

0xad01,	// (0x0003711c) bg_popup_call2_act_pane_cp02

0xea87,	// (0x0003aea2) call4_list_conf_pane

0xe091,	// (0x0003a4ac) call4_image_pane_g1

0xe091,	// (0x0003a4ac) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003baf7) call4_image_pane_g

0xed42,	// (0x0003b15d) list_single_graphic_popup_conf4_pane_ParamLimits

0xed42,	// (0x0003b15d) list_single_graphic_popup_conf4_pane

0xad01,	// (0x0003711c) list_highlight_pane_cp022

0xed55,	// (0x0003b170) list_single_graphic_popup_conf4_pane_g1

0xc4fd,	// (0x00038918) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003bdef) list_single_graphic_popup_conf4_pane_g

0xed5d,	// (0x0003b178) list_single_graphic_popup_conf4_pane_t1

0x2913,	// (0x0002ed2e) popup_vtel_slider_window_ParamLimits

0x2913,	// (0x0002ed2e) popup_vtel_slider_window

0xe9e3,	// (0x0003adfe) dialer2_ne_pane_t2_ParamLimits

0xe9e3,	// (0x0003adfe) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003bcd0) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003bcd0) dialer2_ne_pane_t

0xde76,	// (0x0003a291) bg_popup_sub_pane_cp010_ParamLimits

0xde76,	// (0x0003a291) bg_popup_sub_pane_cp010

0x66a0,	// (0x00032abb) popup_vtel_slider_window_g1_ParamLimits

0x66a0,	// (0x00032abb) popup_vtel_slider_window_g1

0x66b3,	// (0x00032ace) popup_vtel_slider_window_g2_ParamLimits

0x66b3,	// (0x00032ace) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003bdf4) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003bdf4) popup_vtel_slider_window_g

0x6709,	// (0x00032b24) vtel_slider_pane_ParamLimits

0x6709,	// (0x00032b24) vtel_slider_pane

0x672b,	// (0x00032b46) vtel_slider_pane_g1_ParamLimits

0x672b,	// (0x00032b46) vtel_slider_pane_g1

0x673f,	// (0x00032b5a) vtel_slider_pane_g2_ParamLimits

0x673f,	// (0x00032b5a) vtel_slider_pane_g2

0x6757,	// (0x00032b72) vtel_slider_pane_g3_ParamLimits

0x6757,	// (0x00032b72) vtel_slider_pane_g3

0x672b,	// (0x00032b46) vtel_slider_pane_g4_ParamLimits

0x672b,	// (0x00032b46) vtel_slider_pane_g4

0x676d,	// (0x00032b88) vtel_slider_pane_g5_ParamLimits

0x676d,	// (0x00032b88) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003bdfd) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003bdfd) vtel_slider_pane_g

0xad29,	// (0x00037144) main_gallery2_pane

0x1534,	// (0x0002d94f) aid_size_row_itut2_dropdow_list_ParamLimits

0x1534,	// (0x0002d94f) aid_size_row_itut2_dropdow_list

0x15c0,	// (0x0002d9db) grid_vitu2_function_top_pane_ParamLimits

0x15c0,	// (0x0002d9db) grid_vitu2_function_top_pane

0x162a,	// (0x0002da45) popup_vitu2_dropdown_list_window_ParamLimits

0x162a,	// (0x0002da45) popup_vitu2_dropdown_list_window

0x1653,	// (0x0002da6e) popup_vitu2_match_list_window

0x186e,	// (0x0002dc89) cell_vitu2_function_top_pane_ParamLimits

0x186e,	// (0x0002dc89) cell_vitu2_function_top_pane

0x1886,	// (0x0002dca1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1886,	// (0x0002dca1) cell_vitu2_function_top_pane_cp01

0x18a2,	// (0x0002dcbd) cell_vitu2_function_top_wide_pane_ParamLimits

0x18a2,	// (0x0002dcbd) cell_vitu2_function_top_wide_pane

0xad29,	// (0x00037144) bg_button_pane_cp012

0x18be,	// (0x0002dcd9) cell_vitu2_function_top_pane_g1

0xb92d,	// (0x00037d48) bg_button_pane_cp013_ParamLimits

0xb92d,	// (0x00037d48) bg_button_pane_cp013

0x6791,	// (0x00032bac) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6791,	// (0x00032bac) cell_vitu2_function_top_wide_pane_g1

0xad29,	// (0x00037144) bg_popup_sub_pane_cp20

0x18d2,	// (0x0002dced) list_vitu2_match_list_pane

0xeb1f,	// (0x0003af3a) bg_popup_sub_pane_cp20_g1

0xeb27,	// (0x0003af42) bg_popup_sub_pane_cp20_g2

0xbfef,	// (0x0003840a) bg_popup_sub_pane_cp20_g3

0xeb2f,	// (0x0003af4a) bg_popup_sub_pane_cp20_g4

0xbfcf,	// (0x000383ea) bg_popup_sub_pane_cp20_g5

0xed73,	// (0x0003b18e) bg_popup_sub_pane_cp20_g6

0xeb3f,	// (0x0003af5a) bg_popup_sub_pane_cp20_g7

0xeb47,	// (0x0003af62) bg_popup_sub_pane_cp20_g8

0xeb4f,	// (0x0003af6a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003be08) bg_popup_sub_pane_cp20_g

0xb949,	// (0x00037d64) list_vitu2_match_list_item_pane_ParamLimits

0xb949,	// (0x00037d64) list_vitu2_match_list_item_pane

0xb95b,	// (0x00037d76) list_vitu2_match_list_item_pane_t1

0xad37,	// (0x00037152) bg_popup_sub_pane_cp21

0xb969,	// (0x00037d84) grid_vitu2_dropdown_list_pane

0x18f0,	// (0x0002dd0b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x18f0,	// (0x0002dd0b) cell_vitu2_dropdown_list_char_pane

0x1911,	// (0x0002dd2c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1911,	// (0x0002dd2c) cell_vitu2_dropdown_list_ctrl_pane

0xed7b,	// (0x0003b196) cell_vitu2_dropdown_list_char_pane_g1

0xed84,	// (0x0003b19f) cell_vitu2_dropdown_list_char_pane_g2

0xedc4,	// (0x0003b1df) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003be25) cell_vitu2_dropdown_list_char_pane_g

0x193d,	// (0x0002dd58) cell_vitu2_dropdown_list_char_pane_t1

0x67f9,	// (0x00032c14) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x67f9,	// (0x00032c14) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6806,	// (0x00032c21) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6806,	// (0x00032c21) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6813,	// (0x00032c2e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6813,	// (0x00032c2e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x194b,	// (0x0002dd66) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x194b,	// (0x0002dd66) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb801,	// (0x00037c1c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb801,	// (0x00037c1c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003be2c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003be2c) cell_vitu2_dropdown_list_ctrl_pane_g

0x6820,	// (0x00032c3b) aid_size_cell_gallery2_ParamLimits

0x6820,	// (0x00032c3b) aid_size_cell_gallery2

0x683e,	// (0x00032c59) grid_gallery2_pane_ParamLimits

0x683e,	// (0x00032c59) grid_gallery2_pane

0x6858,	// (0x00032c73) scroll_pane_cp029_ParamLimits

0x6858,	// (0x00032c73) scroll_pane_cp029

0x6869,	// (0x00032c84) cell_gallery2_pane_ParamLimits

0x6869,	// (0x00032c84) cell_gallery2_pane

0xedcd,	// (0x0003b1e8) cell_gallery2_pane_g2

0x68c8,	// (0x00032ce3) cell_gallery2_pane_g3

0xedd5,	// (0x0003b1f0) cell_gallery2_pane_g4

0xeddd,	// (0x0003b1f8) cell_gallery2_pane_g5

0xbd96,	// (0x000381b1) grid_highlight_pane_cp10

0x1653,	// (0x0002da6e) popup_vitu2_match_list_window_ParamLimits

0x166a,	// (0x0002da85) popup_vitu2_query_window_ParamLimits

0x166a,	// (0x0002da85) popup_vitu2_query_window

0xad37,	// (0x00037152) bg_vitu2_candi_button_pane

0xed7b,	// (0x0003b196) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed84,	// (0x0003b19f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xedc4,	// (0x0003b1df) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x68d0,	// (0x00032ceb) bg_button_pane_cp015

0x68e2,	// (0x00032cfd) bg_button_pane_cp016

0x68f5,	// (0x00032d10) bg_button_pane_cp017

0xdc89,	// (0x0003a0a4) bg_popup_sub_pane_cp22

0xede5,	// (0x0003b200) popup_vitu2_query_window_g1

0x693a,	// (0x00032d55) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003be37) popup_vitu2_query_window_g

0x6959,	// (0x00032d74) popup_vitu2_query_window_t1_ParamLimits

0x6959,	// (0x00032d74) popup_vitu2_query_window_t1

0x698e,	// (0x00032da9) popup_vitu2_query_window_t2_ParamLimits

0x698e,	// (0x00032da9) popup_vitu2_query_window_t2

0x69a0,	// (0x00032dbb) popup_vitu2_query_window_t3_ParamLimits

0x69a0,	// (0x00032dbb) popup_vitu2_query_window_t3

0x69c8,	// (0x00032de3) popup_vitu2_query_window_t4_ParamLimits

0x69c8,	// (0x00032de3) popup_vitu2_query_window_t4

0x69e9,	// (0x00032e04) popup_vitu2_query_window_t5_ParamLimits

0x69e9,	// (0x00032e04) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003be3e) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003be3e) popup_vitu2_query_window_t

0xec21,	// (0x0003b03c) main_cset_text_pane

0x63e6,	// (0x00032801) aid_area_touch_slider_ParamLimits

0x6402,	// (0x0003281d) cset_slider_pane_ParamLimits

0x642c,	// (0x00032847) main_cset_slider_pane_g1_ParamLimits

0x6441,	// (0x0003285c) main_cset_slider_pane_g2_ParamLimits

0xec42,	// (0x0003b05d) main_cset_slider_pane_g3_ParamLimits

0xec42,	// (0x0003b05d) main_cset_slider_pane_g3

0x6456,	// (0x00032871) main_cset_slider_pane_g4_ParamLimits

0x6456,	// (0x00032871) main_cset_slider_pane_g4

0x6465,	// (0x00032880) main_cset_slider_pane_g5_ParamLimits

0x6465,	// (0x00032880) main_cset_slider_pane_g5

0x6471,	// (0x0003288c) main_cset_slider_pane_g6_ParamLimits

0x6471,	// (0x0003288c) main_cset_slider_pane_g6

0xf976,	// (0x0003bd91) main_cset_slider_pane_g_ParamLimits

0xec72,	// (0x0003b08d) main_cset_slider_pane_t1_ParamLimits

0x64fd,	// (0x00032918) main_cset_slider_pane_t2_ParamLimits

0x6517,	// (0x00032932) main_cset_slider_pane_t3_ParamLimits

0x6531,	// (0x0003294c) main_cset_slider_pane_t4_ParamLimits

0x654b,	// (0x00032966) main_cset_slider_pane_t5_ParamLimits

0x6565,	// (0x00032980) main_cset_slider_pane_t6_ParamLimits

0x657a,	// (0x00032995) main_cset_slider_pane_t7_ParamLimits

0x65a4,	// (0x000329bf) main_cset_slider_pane_t8_ParamLimits

0x65a4,	// (0x000329bf) main_cset_slider_pane_t8

0x65cc,	// (0x000329e7) main_cset_slider_pane_t9_ParamLimits

0x65cc,	// (0x000329e7) main_cset_slider_pane_t9

0x65f4,	// (0x00032a0f) main_cset_slider_pane_t10_ParamLimits

0x65f4,	// (0x00032a0f) main_cset_slider_pane_t10

0x661c,	// (0x00032a37) main_cset_slider_pane_t11_ParamLimits

0x661c,	// (0x00032a37) main_cset_slider_pane_t11

0x6644,	// (0x00032a5f) main_cset_slider_pane_t12_ParamLimits

0x6644,	// (0x00032a5f) main_cset_slider_pane_t12

0x6661,	// (0x00032a7c) main_cset_slider_pane_t13_ParamLimits

0x6661,	// (0x00032a7c) main_cset_slider_pane_t13

0xf99b,	// (0x0003bdb6) main_cset_slider_pane_t_ParamLimits

0xad01,	// (0x0003711c) bg_popup_sub_pane_cp011

0xedf1,	// (0x0003b20c) main_cset_text_pane_g1

0xedf9,	// (0x0003b214) main_cset_text_pane_t1

0xee07,	// (0x0003b222) main_cset_text_pane_t2

0xee15,	// (0x0003b230) main_cset_text_pane_t3

0xee23,	// (0x0003b23e) main_cset_text_pane_t4

0xee31,	// (0x0003b24c) main_cset_text_pane_t5

0xee3f,	// (0x0003b25a) main_cset_text_pane_t6

0xee4d,	// (0x0003b268) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003be4d) main_cset_text_pane_t

0xad37,	// (0x00037152) main_cam4_burst_pane

0xad37,	// (0x00037152) main_cam5_pane

0x6325,	// (0x00032740) bg_button_pane_cp019

0x632e,	// (0x00032749) bg_button_pane_cp020

0xec4e,	// (0x0003b069) main_cset_slider_pane_g7_ParamLimits

0xec4e,	// (0x0003b069) main_cset_slider_pane_g7

0xec5a,	// (0x0003b075) main_cset_slider_pane_g8_ParamLimits

0xec5a,	// (0x0003b075) main_cset_slider_pane_g8

0x6485,	// (0x000328a0) main_cset_slider_pane_g9_ParamLimits

0x6485,	// (0x000328a0) main_cset_slider_pane_g9

0x6491,	// (0x000328ac) main_cset_slider_pane_g10_ParamLimits

0x6491,	// (0x000328ac) main_cset_slider_pane_g10

0x649d,	// (0x000328b8) main_cset_slider_pane_g11_ParamLimits

0x649d,	// (0x000328b8) main_cset_slider_pane_g11

0x64a9,	// (0x000328c4) main_cset_slider_pane_g12_ParamLimits

0x64a9,	// (0x000328c4) main_cset_slider_pane_g12

0x64b5,	// (0x000328d0) main_cset_slider_pane_g13_ParamLimits

0x64b5,	// (0x000328d0) main_cset_slider_pane_g13

0x64c1,	// (0x000328dc) main_cset_slider_pane_g14_ParamLimits

0x64c1,	// (0x000328dc) main_cset_slider_pane_g14

0x64cd,	// (0x000328e8) main_cset_slider_pane_g15_ParamLimits

0x64cd,	// (0x000328e8) main_cset_slider_pane_g15

0xeca0,	// (0x0003b0bb) main_cset_slider_pane_t14_ParamLimits

0xeca0,	// (0x0003b0bb) main_cset_slider_pane_t14

0xecd9,	// (0x0003b0f4) main_cset_slider_pane_t15_ParamLimits

0xecd9,	// (0x0003b0f4) main_cset_slider_pane_t15

0x6a60,	// (0x00032e7b) aid_cam4_burst_size_cell_ParamLimits

0x6a60,	// (0x00032e7b) aid_cam4_burst_size_cell

0x6a80,	// (0x00032e9b) grid_cam4_burst_pane_ParamLimits

0x6a80,	// (0x00032e9b) grid_cam4_burst_pane

0x6ab8,	// (0x00032ed3) linegrid_cam4_burst_pane_ParamLimits

0x6ab8,	// (0x00032ed3) linegrid_cam4_burst_pane

0xee5b,	// (0x0003b276) scroll_pane_cp30_ParamLimits

0xee5b,	// (0x0003b276) scroll_pane_cp30

0x6adc,	// (0x00032ef7) cell_cam4_burst_pane_ParamLimits

0x6adc,	// (0x00032ef7) cell_cam4_burst_pane

0xee67,	// (0x0003b282) linegrid_cam4_burst_pane_g1_ParamLimits

0xee67,	// (0x0003b282) linegrid_cam4_burst_pane_g1

0x6b29,	// (0x00032f44) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b29,	// (0x00032f44) linegrid_cam4_burst_pane_g2

0xee74,	// (0x0003b28f) linegrid_cam4_burst_pane_g3_ParamLimits

0xee74,	// (0x0003b28f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003be5c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003be5c) linegrid_cam4_burst_pane_g

0x6b3a,	// (0x00032f55) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b3a,	// (0x00032f55) linegrid_cam4_burst_pane_g3_copy1

0xee81,	// (0x0003b29c) linegrid_cam4_burst_pane_g4_ParamLimits

0xee81,	// (0x0003b29c) linegrid_cam4_burst_pane_g4

0x6b54,	// (0x00032f6f) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b54,	// (0x00032f6f) linegrid_cam4_burst_pane_g5

0x6b65,	// (0x00032f80) linegrid_cam4_burst_pane_g6_ParamLimits

0x6b65,	// (0x00032f80) linegrid_cam4_burst_pane_g6

0xee8e,	// (0x0003b2a9) linegrid_cam4_burst_pane_g7_ParamLimits

0xee8e,	// (0x0003b2a9) linegrid_cam4_burst_pane_g7

0x6b7c,	// (0x00032f97) cell_cam4_burst_pane_g1

0xeea7,	// (0x0003b2c2) main_cam5_pane_t1_ParamLimits

0xeea7,	// (0x0003b2c2) main_cam5_pane_t1

0xeeb9,	// (0x0003b2d4) main_cam5_pane_t2_ParamLimits

0xeeb9,	// (0x0003b2d4) main_cam5_pane_t2

0xeecb,	// (0x0003b2e6) main_cam5_pane_t3_ParamLimits

0xeecb,	// (0x0003b2e6) main_cam5_pane_t3

0xeedd,	// (0x0003b2f8) main_cam5_pane_t4_ParamLimits

0xeedd,	// (0x0003b2f8) main_cam5_pane_t4

0xeef5,	// (0x0003b310) main_cam5_pane_t5_ParamLimits

0xeef5,	// (0x0003b310) main_cam5_pane_t5

0xef09,	// (0x0003b324) main_cam5_pane_t6_ParamLimits

0xef09,	// (0x0003b324) main_cam5_pane_t6

0xef1d,	// (0x0003b338) main_cam5_pane_t7_ParamLimits

0xef1d,	// (0x0003b338) main_cam5_pane_t7

0xef2f,	// (0x0003b34a) main_cam5_pane_t8_ParamLimits

0xef2f,	// (0x0003b34a) main_cam5_pane_t8

0xef4b,	// (0x0003b366) main_cam5_pane_t9_ParamLimits

0xef4b,	// (0x0003b366) main_cam5_pane_t9

0xef5d,	// (0x0003b378) main_cam5_pane_t10_ParamLimits

0xef5d,	// (0x0003b378) main_cam5_pane_t10

0xef6f,	// (0x0003b38a) main_cam5_pane_t11_ParamLimits

0xef6f,	// (0x0003b38a) main_cam5_pane_t11

0xef81,	// (0x0003b39c) main_cam5_pane_t12_ParamLimits

0xef81,	// (0x0003b39c) main_cam5_pane_t12

0xef96,	// (0x0003b3b1) main_cam5_pane_t13_ParamLimits

0xef96,	// (0x0003b3b1) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003be68) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003be68) main_cam5_pane_t

0x036e,	// (0x0002c789) popup_scut_keymap_window_ParamLimits

0x036e,	// (0x0002c789) popup_scut_keymap_window

0x6b8f,	// (0x00032faa) aid_size_cell_brow_shortcut

0xbd96,	// (0x000381b1) bg_popup_window_pane_cp010

0x6b9b,	// (0x00032fb6) grid_scut_pane

0x6ba7,	// (0x00032fc2) cell_scut_pane_ParamLimits

0x6ba7,	// (0x00032fc2) cell_scut_pane

0x6bbe,	// (0x00032fd9) cell_scut_pane_g1

0xefb3,	// (0x0003b3ce) cell_scut_pane_t1

0xefc2,	// (0x0003b3dd) cell_scut_pane_t2

0x6bc7,	// (0x00032fe2) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003be83) cell_scut_pane_t

0x5343,	// (0x0003175e) main_mup3_pane_g8_ParamLimits

0x5343,	// (0x0003175e) main_mup3_pane_g8

0x154c,	// (0x0002d967) area_vitu2_query_pane_ParamLimits

0x154c,	// (0x0002d967) area_vitu2_query_pane

0x6908,	// (0x00032d23) input_focus_pane_cp08

0xefd1,	// (0x0003b3ec) area_vitu2_query_pane_g1

0x6bd5,	// (0x00032ff0) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003be8a) area_vitu2_query_pane_g

0x6be6,	// (0x00033001) area_vitu2_query_pane_t1_ParamLimits

0x6be6,	// (0x00033001) area_vitu2_query_pane_t1

0x6bfa,	// (0x00033015) area_vitu2_query_pane_t2_ParamLimits

0x6bfa,	// (0x00033015) area_vitu2_query_pane_t2

0x6c0e,	// (0x00033029) area_vitu2_query_pane_t3_ParamLimits

0x6c0e,	// (0x00033029) area_vitu2_query_pane_t3

0xefdd,	// (0x0003b3f8) area_vitu2_query_pane_t4_ParamLimits

0xefdd,	// (0x0003b3f8) area_vitu2_query_pane_t4

0xf005,	// (0x0003b420) area_vitu2_query_pane_t5_ParamLimits

0xf005,	// (0x0003b420) area_vitu2_query_pane_t5

0xf02d,	// (0x0003b448) area_vitu2_query_pane_t6_ParamLimits

0xf02d,	// (0x0003b448) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003be8f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003be8f) area_vitu2_query_pane_t

0x6c36,	// (0x00033051) bg_button_pane_cp018

0x6c44,	// (0x0003305f) bg_button_pane_cp021

0x6c50,	// (0x0003306b) bg_button_pane_cp022

0x6c5f,	// (0x0003307a) input_focus_pane_cp09

0xc639,	// (0x00038a54) aid_size_touch_mv_arrow_left

0xc662,	// (0x00038a7d) aid_size_touch_mv_arrow_right

0x64e5,	// (0x00032900) main_cset_slider_pane_g16_ParamLimits

0x64e5,	// (0x00032900) main_cset_slider_pane_g16

0x64f1,	// (0x0003290c) main_cset_slider_pane_g17_ParamLimits

0x64f1,	// (0x0003290c) main_cset_slider_pane_g17

0x6b7c,	// (0x00032f97) cell_cam4_burst_pane_g1_ParamLimits

0xad01,	// (0x0003711c) compa_mode_pane

0x66c3,	// (0x00032ade) popup_vtel_slider_window_g3_ParamLimits

0x66c3,	// (0x00032ade) popup_vtel_slider_window_g3

0x66da,	// (0x00032af5) popup_vtel_slider_window_g4_ParamLimits

0x66da,	// (0x00032af5) popup_vtel_slider_window_g4

0x66f1,	// (0x00032b0c) popup_vtel_slider_window_t1_ParamLimits

0x66f1,	// (0x00032b0c) popup_vtel_slider_window_t1

0xad37,	// (0x00037152) main_cl_pane

0xb43f,	// (0x0003785a) popup_imed_adjust2_window_ParamLimits

0xdc89,	// (0x0003a0a4) bg_tb_trans_pane_cp05_ParamLimits

0xe5f8,	// (0x0003aa13) popup_imed_adjust2_window_g1_ParamLimits

0xe607,	// (0x0003aa22) popup_imed_adjust2_window_g2_ParamLimits

0xe607,	// (0x0003aa22) popup_imed_adjust2_window_g2

0xe613,	// (0x0003aa2e) popup_imed_adjust2_window_g3_ParamLimits

0xe613,	// (0x0003aa2e) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003bbfa) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003bbfa) popup_imed_adjust2_window_g

0xe61f,	// (0x0003aa3a) popup_imed_adjust2_window_t1_ParamLimits

0xe637,	// (0x0003aa52) slider_imed_adjust_pane_ParamLimits

0xe64b,	// (0x0003aa66) slider_imed_adjust_pane_g1_ParamLimits

0xe65b,	// (0x0003aa76) slider_imed_adjust_pane_g2_ParamLimits

0xe66b,	// (0x0003aa86) slider_imed_adjust_pane_g3_ParamLimits

0xe67c,	// (0x0003aa97) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003bc01) slider_imed_adjust_pane_g_ParamLimits

0x1309,	// (0x0002d724) aid_touch_area_cam4_ParamLimits

0x1309,	// (0x0002d724) aid_touch_area_cam4

0xb7e5,	// (0x00037c00) battery_pane_cp01

0x13d8,	// (0x0002d7f3) main_camera4_pane_g6_ParamLimits

0x13d8,	// (0x0002d7f3) main_camera4_pane_g6

0x1402,	// (0x0002d81d) main_camera4_pane_t2_ParamLimits

0x1402,	// (0x0002d81d) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003bd04) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003bd04) main_camera4_pane_t

0x1423,	// (0x0002d83e) aid_touch_area_vid4_ParamLimits

0x1423,	// (0x0002d83e) aid_touch_area_vid4

0x1477,	// (0x0002d892) main_video4_pane_g5_ParamLimits

0x1477,	// (0x0002d892) main_video4_pane_g5

0x149c,	// (0x0002d8b7) vid4_progress_pane_ParamLimits

0x149c,	// (0x0002d8b7) vid4_progress_pane

0xec66,	// (0x0003b081) main_cset_slider_pane_g18_ParamLimits

0xec66,	// (0x0003b081) main_cset_slider_pane_g18

0xee9b,	// (0x0003b2b6) cell_cam4_burst_pane_g2_ParamLimits

0xee9b,	// (0x0003b2b6) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003be63) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003be63) cell_cam4_burst_pane_g

0xbbd1,	// (0x00037fec) bg_cl_pane_ParamLimits

0xbbd1,	// (0x00037fec) bg_cl_pane

0x6c6e,	// (0x00033089) cl_header_pane_ParamLimits

0x6c6e,	// (0x00033089) cl_header_pane

0x6c82,	// (0x0003309d) cl_listscroll_pane_ParamLimits

0x6c82,	// (0x0003309d) cl_listscroll_pane

0xf079,	// (0x0003b494) bg_cl_pane_g1

0xf081,	// (0x0003b49c) bg_cl_pane_g2

0xf089,	// (0x0003b4a4) bg_cl_pane_g3

0xf091,	// (0x0003b4ac) bg_cl_pane_g4

0xf099,	// (0x0003b4b4) bg_cl_pane_g5

0xf0a1,	// (0x0003b4bc) bg_cl_pane_g6

0xf0a9,	// (0x0003b4c4) bg_cl_pane_g7

0xf0b1,	// (0x0003b4cc) bg_cl_pane_g8

0xf0b9,	// (0x0003b4d4) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003be9e) bg_cl_pane_g

0x6c92,	// (0x000330ad) aid_height_cl_leading_ParamLimits

0x6c92,	// (0x000330ad) aid_height_cl_leading

0x6c9e,	// (0x000330b9) aid_height_cl_text_ParamLimits

0x6c9e,	// (0x000330b9) aid_height_cl_text

0xc6cc,	// (0x00038ae7) bg_cl_header_pane_ParamLimits

0xc6cc,	// (0x00038ae7) bg_cl_header_pane

0x6cbd,	// (0x000330d8) cl_header_pane_g1_ParamLimits

0x6cbd,	// (0x000330d8) cl_header_pane_g1

0x6cd3,	// (0x000330ee) cl_header_pane_t1_ParamLimits

0x6cd3,	// (0x000330ee) cl_header_pane_t1

0xf0c1,	// (0x0003b4dc) cl_list_pane

0xec39,	// (0x0003b054) hc_scroll_pane_cp01

0xbfcf,	// (0x000383ea) bg_cl_header_pane_g1

0xeb1f,	// (0x0003af3a) bg_cl_header_pane_g2

0xbfef,	// (0x0003840a) bg_cl_header_pane_g3

0xeb2f,	// (0x0003af4a) bg_cl_header_pane_g4

0xeb27,	// (0x0003af42) bg_cl_header_pane_g5

0xed73,	// (0x0003b18e) bg_cl_header_pane_g6

0xeb47,	// (0x0003af62) bg_cl_header_pane_g7

0xeb4f,	// (0x0003af6a) bg_cl_header_pane_g8

0xeb3f,	// (0x0003af5a) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003beb1) bg_cl_header_pane_g

0x6cec,	// (0x00033107) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6cec,	// (0x00033107) hc_cl_list_double_graphic_heading_pane

0x6cfd,	// (0x00033118) hc_cl_list_single_graphic_pane_ParamLimits

0x6cfd,	// (0x00033118) hc_cl_list_single_graphic_pane

0x6d13,	// (0x0003312e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d13,	// (0x0003312e) hc_cl_list_single_graphic_pane_g1

0x6d1f,	// (0x0003313a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d1f,	// (0x0003313a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003bec4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003bec4) hc_cl_list_single_graphic_pane_g

0x6d33,	// (0x0003314e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6d33,	// (0x0003314e) hc_cl_list_single_graphic_pane_t1

0x6d13,	// (0x0003312e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d13,	// (0x0003312e) hc_cl_list_double_graphic_heading_pane_g1

0x6d48,	// (0x00033163) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6d48,	// (0x00033163) hc_cl_list_double_graphic_heading_pane_g2

0x6d5c,	// (0x00033177) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6d5c,	// (0x00033177) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003bec9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003bec9) hc_cl_list_double_graphic_heading_pane_g

0x6d70,	// (0x0003318b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d70,	// (0x0003318b) hc_cl_list_double_graphic_heading_pane_t1

0x6d85,	// (0x000331a0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d85,	// (0x000331a0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003bed0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003bed0) hc_cl_list_double_graphic_heading_pane_t

0xb979,	// (0x00037d94) vid4_progress_pane_g1

0xb989,	// (0x00037da4) vid4_progress_pane_g2

0x1967,	// (0x0002dd82) vid4_progress_pane_g3

0xb999,	// (0x00037db4) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003bed5) vid4_progress_pane_g

0x1979,	// (0x0002dd94) vid4_progress_pane_t1

0xb9b1,	// (0x00037dcc) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003bee0) vid4_progress_pane_t

0x1991,	// (0x0002ddac) wait_bar_pane_cp07

0xde84,	// (0x0003a29f) blid_firmament_pane_ParamLimits

0xdec7,	// (0x0003a2e2) popup_blid_sat_info2_window_g1

0xdeeb,	// (0x0003a306) popup_blid_sat_info2_window_t3

0xdef9,	// (0x0003a314) popup_blid_sat_info2_window_t4

0xdf07,	// (0x0003a322) popup_blid_sat_info2_window_t5

0xdf15,	// (0x0003a330) popup_blid_sat_info2_window_t6

0xdf25,	// (0x0003a340) popup_blid_sat_info2_window_t7

0xdf33,	// (0x0003a34e) popup_blid_sat_info2_window_t8

0xdf41,	// (0x0003a35c) popup_blid_sat_info2_window_t9

0xdf4f,	// (0x0003a36a) popup_blid_sat_info2_window_t10

0xe011,	// (0x0003a42c) aid_firma_cardinal_ParamLimits

0xe025,	// (0x0003a440) blid_firmament_pane_t1_ParamLimits

0xe03c,	// (0x0003a457) blid_firmament_pane_t2_ParamLimits

0xe053,	// (0x0003a46e) blid_firmament_pane_t3_ParamLimits

0xe06a,	// (0x0003a485) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003baee) blid_firmament_pane_t_ParamLimits

0xe081,	// (0x0003a49c) blid_sat_info_pane_ParamLimits

0xad29,	// (0x00037144) main_cam_set_pane_ParamLimits

0x5b73,	// (0x00031f8e) aid_size_cell_colour_35_ParamLimits

0x5b93,	// (0x00031fae) aid_size_cell_colour_112_ParamLimits

0x5bb3,	// (0x00031fce) aid_size_cell_effect_ParamLimits

0xdc89,	// (0x0003a0a4) bg_tb_trans_pane_cp02_ParamLimits

0xc237,	// (0x00038652) heading_imed_pane_ParamLimits

0x5bd3,	// (0x00031fee) listscroll_imed_pane_ParamLimits

0xd2af,	// (0x000396ca) popup_call2_audio_first_window_g5_ParamLimits

0xd2af,	// (0x000396ca) popup_call2_audio_first_window_g5

0x0ff3,	// (0x0002d40e) aid_size_touch_image3_arrow_left_ParamLimits

0x0ff3,	// (0x0002d40e) aid_size_touch_image3_arrow_left

0x101f,	// (0x0002d43a) aid_size_touch_image3_arrow_right_ParamLimits

0x101f,	// (0x0002d43a) aid_size_touch_image3_arrow_right

0xb9c6,	// (0x00037de1) vid4_progress_pane_t3

0x5ee6,	// (0x00032301) main_hwr_training_symbol_option_pane_ParamLimits

0x5ee6,	// (0x00032301) main_hwr_training_symbol_option_pane

0xe8e5,	// (0x0003ad00) popup_hwr_training_preview_window_ParamLimits

0xe8e5,	// (0x0003ad00) popup_hwr_training_preview_window

0x0e9e,	// (0x0002d2b9) hwr_training_navi_pane_g5_ParamLimits

0x0e9e,	// (0x0002d2b9) hwr_training_navi_pane_g5

0xeb0d,	// (0x0003af28) popup_char_count_window

0xad29,	// (0x00037144) bg_popup_sub_pane_cp20_ParamLimits

0x18d2,	// (0x0002dced) list_vitu2_match_list_pane_ParamLimits

0x18e1,	// (0x0002dcfc) vitu2_page_scroll_pane_ParamLimits

0x18e1,	// (0x0002dcfc) vitu2_page_scroll_pane

0x6df4,	// (0x0003320f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x6df4,	// (0x0003320f) list_single_hwr_training_symbol_option_pane

0x6e07,	// (0x00033222) list_single_hwr_training_symbol_option_pane_g1

0x6e0f,	// (0x0003322a) list_single_hwr_training_symbol_option_pane_t1

0x6e1d,	// (0x00033238) bg_button_pane_cp023

0x6e26,	// (0x00033241) bg_button_pane_cp024

0x6e59,	// (0x00033274) vitu2_page_scroll_pane_g1

0x6e61,	// (0x0003327c) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003bee7) vitu2_page_scroll_pane_g

0x6e69,	// (0x00033284) vitu2_page_scroll_pane_t1

0xdde4,	// (0x0003a1ff) popup_char_count_window_g1

0x6e78,	// (0x00033293) popup_char_count_window_g2

0x6e81,	// (0x0003329c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003beec) popup_char_count_window_g

0x6e8a,	// (0x000332a5) popup_char_count_window_t1

0xad37,	// (0x00037152) main_vded2_pane

0xe5e4,	// (0x0003a9ff) aid_size_cell_imed_line

0xe5ee,	// (0x0003aa09) grid_imed_line_width_pane

0xb8ab,	// (0x00037cc6) vid4_indicators_pane_g4

0x6e98,	// (0x000332b3) cell_imed_line_width_pane_ParamLimits

0x6e98,	// (0x000332b3) cell_imed_line_width_pane

0x6eac,	// (0x000332c7) cell_imed_line_width_pane_g1

0x4e71,	// (0x0003128c) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003bef3) cell_imed_line_width_pane_g

0x6eb5,	// (0x000332d0) main_vded2_pane_g1_ParamLimits

0x6eb5,	// (0x000332d0) main_vded2_pane_g1

0x6ecb,	// (0x000332e6) main_vded2_pane_g2_ParamLimits

0x6ecb,	// (0x000332e6) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003bef8) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003bef8) main_vded2_pane_g

0x6edd,	// (0x000332f8) vded2_slider_pane_ParamLimits

0x6edd,	// (0x000332f8) vded2_slider_pane

0x6eed,	// (0x00033308) aid_size_touch_vded2_end

0x6ef7,	// (0x00033312) aid_size_touch_vded2_playhead

0x6f01,	// (0x0003331c) aid_size_touch_vded2_start

0x6f09,	// (0x00033324) vded2_slider_bg_pane

0x6f12,	// (0x0003332d) vded2_slider_pane_g1

0x6f1b,	// (0x00033336) vded2_slider_pane_g2

0x6f23,	// (0x0003333e) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003befd) vded2_slider_pane_g

0x6f2e,	// (0x00033349) vded2_slider_bg_pane_g1

0x6f37,	// (0x00033352) vded2_slider_bg_pane_g2

0x6f40,	// (0x0003335b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003bf04) vded2_slider_bg_pane_g

0x40af,	// (0x000304ca) aid_postcard_touch_down_pane_ParamLimits

0x40af,	// (0x000304ca) aid_postcard_touch_down_pane

0x40c5,	// (0x000304e0) aid_postcard_touch_up_pane_ParamLimits

0x40c5,	// (0x000304e0) aid_postcard_touch_up_pane

0xad37,	// (0x00037152) main_blid2_pane

0xb425,	// (0x00037840) popup_blid2_search_window

0xad01,	// (0x0003711c) blid2_gps_pane

0xad01,	// (0x0003711c) blid2_navig_pane

0xad01,	// (0x0003711c) blid2_search_pane

0xad01,	// (0x0003711c) blid2_tripm_pane

0x6f49,	// (0x00033364) blid2_search_pane_g1_ParamLimits

0x6f49,	// (0x00033364) blid2_search_pane_g1

0x6f63,	// (0x0003337e) blid2_search_pane_t1_ParamLimits

0x6f63,	// (0x0003337e) blid2_search_pane_t1

0x6f75,	// (0x00033390) aid_size_cell_blid2_gps_ParamLimits

0x6f75,	// (0x00033390) aid_size_cell_blid2_gps

0x6f8d,	// (0x000333a8) blid2_gps_pane_g1_ParamLimits

0x6f8d,	// (0x000333a8) blid2_gps_pane_g1

0x6fa1,	// (0x000333bc) grid_blid2_satellite_pane_ParamLimits

0x6fa1,	// (0x000333bc) grid_blid2_satellite_pane

0x6fbb,	// (0x000333d6) blid2_navig_pane_g1_ParamLimits

0x6fbb,	// (0x000333d6) blid2_navig_pane_g1

0x6fc7,	// (0x000333e2) blid2_navig_pane_t1_ParamLimits

0x6fc7,	// (0x000333e2) blid2_navig_pane_t1

0x6fe2,	// (0x000333fd) blid2_navig_pane_t2_ParamLimits

0x6fe2,	// (0x000333fd) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003bf0b) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003bf0b) blid2_navig_pane_t

0x6ffd,	// (0x00033418) blid2_navig_ring_pane_ParamLimits

0x6ffd,	// (0x00033418) blid2_navig_ring_pane

0x7016,	// (0x00033431) blid2_speed_pane_ParamLimits

0x7016,	// (0x00033431) blid2_speed_pane

0x7022,	// (0x0003343d) blid2_tripm_pane_g1_ParamLimits

0x7022,	// (0x0003343d) blid2_tripm_pane_g1

0x703b,	// (0x00033456) blid2_tripm_pane_g2_ParamLimits

0x703b,	// (0x00033456) blid2_tripm_pane_g2

0x704f,	// (0x0003346a) blid2_tripm_pane_g3_ParamLimits

0x704f,	// (0x0003346a) blid2_tripm_pane_g3

0x7063,	// (0x0003347e) blid2_tripm_pane_g4_ParamLimits

0x7063,	// (0x0003347e) blid2_tripm_pane_g4

0x7077,	// (0x00033492) blid2_tripm_pane_g5_ParamLimits

0x7077,	// (0x00033492) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003bf10) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003bf10) blid2_tripm_pane_g

0x709d,	// (0x000334b8) blid2_tripm_pane_t1_ParamLimits

0x709d,	// (0x000334b8) blid2_tripm_pane_t1

0x70b8,	// (0x000334d3) blid2_tripm_pane_t2_ParamLimits

0x70b8,	// (0x000334d3) blid2_tripm_pane_t2

0x70d1,	// (0x000334ec) blid2_tripm_pane_t3_ParamLimits

0x70d1,	// (0x000334ec) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003bf1d) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003bf1d) blid2_tripm_pane_t

0x7118,	// (0x00033533) cell_blid2_satellite_pane_ParamLimits

0x7118,	// (0x00033533) cell_blid2_satellite_pane

0x7136,	// (0x00033551) cell_blid2_satellite_pane_g1

0x713f,	// (0x0003355a) cell_blid2_satellite_pane_t1

0xe091,	// (0x0003a4ac) blid2_speed_pane_g1

0x714d,	// (0x00033568) blid2_speed_pane_t1

0x715b,	// (0x00033576) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003bf26) blid2_speed_pane_t

0xe091,	// (0x0003a4ac) blid2_navig_ring_pane_g1

0x7169,	// (0x00033584) blid2_navig_ring_pane_g2

0x7171,	// (0x0003358c) blid2_navig_ring_pane_g3

0x7179,	// (0x00033594) blid2_navig_ring_pane_g4

0x7181,	// (0x0003359c) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003bf2b) blid2_navig_ring_pane_g

0xad01,	// (0x0003711c) bg_popup_window_pane_cp011

0x7189,	// (0x000335a4) popup_blid2_search_window_g1

0x7191,	// (0x000335ac) popup_blid2_search_window_t1

0x719f,	// (0x000335ba) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003bf36) popup_blid2_search_window_t

0xbede,	// (0x000382f9) main_browser_pane_g1

0xbbd1,	// (0x00037fec) main_browser_pane_ParamLimits

0xad29,	// (0x00037144) bg_button_pane_cp011_ParamLimits

0x1852,	// (0x0002dc6d) cell_vitu2_function_pane_g1_ParamLimits

0xdc89,	// (0x0003a0a4) bg_popup_sub_pane_cp22_ParamLimits

0x6908,	// (0x00032d23) input_focus_pane_cp08_ParamLimits

0x691f,	// (0x00032d3a) popup_vitu2_query_button_pane_ParamLimits

0x691f,	// (0x00032d3a) popup_vitu2_query_button_pane

0x6930,	// (0x00032d4b) popup_vitu2_query_input_button_pane

0xede5,	// (0x0003b200) popup_vitu2_query_window_g1_ParamLimits

0x693a,	// (0x00032d55) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003be37) popup_vitu2_query_window_g_ParamLimits

0xad01,	// (0x0003711c) bg_button_pane_cp026

0x71ad,	// (0x000335c8) popup_vitu2_query_input_button_pane_g1

0xad01,	// (0x0003711c) bg_button_pane_cp025

0x71b5,	// (0x000335d0) popup_vitu2_query_button_pane_t1

0x4fcc,	// (0x000313e7) main_mp3_pane_t6

0x4fda,	// (0x000313f5) popup_slider_window_cp01

0xb80f,	// (0x00037c2a) cam4_battery_pane

0xb868,	// (0x00037c83) cam4_battery_pane_cp02

0xb971,	// (0x00037d8c) cam4_battery_pane_cp01

0xb971,	// (0x00037d8c) cam4_battery_pane_cp03

0x5f6e,	// (0x00032389) cam4_battery_pane_g1

0xe091,	// (0x0003a4ac) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003bf3b) cam4_battery_pane_g

0xdf5d,	// (0x0003a378) popup_blid_sat_info2_window_t11

0xc639,	// (0x00038a54) aid_size_touch_mv_arrow_left_ParamLimits

0xc662,	// (0x00038a7d) aid_size_touch_mv_arrow_right_ParamLimits

0xc6c0,	// (0x00038adb) navi_pane_g1_ParamLimits

0xc6e6,	// (0x00038b01) navi_pane_g2_ParamLimits

0xc714,	// (0x00038b2f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003b800) navi_pane_g_ParamLimits

0x3b8c,	// (0x0002ffa7) navi_pane_mv_t1_ParamLimits

0x5bdf,	// (0x00031ffa) grid_imed_effect_pane_ParamLimits

0x2810,	// (0x0002ec2b) aid_placing_vt_slider_lsc

0xbe2d,	// (0x00038248) aid_placing_vt_slider_prt

0xc6cc,	// (0x00038ae7) bg_tb_trans_pane_cp01_ParamLimits

0xe229,	// (0x0003a644) popup_image_details_window_g1_ParamLimits

0xe23c,	// (0x0003a657) popup_image_details_window_g2_ParamLimits

0xe251,	// (0x0003a66c) popup_image_details_window_g3_ParamLimits

0xe251,	// (0x0003a66c) popup_image_details_window_g3

0xf718,	// (0x0003bb33) popup_image_details_window_g_ParamLimits

0xe265,	// (0x0003a680) popup_image_details_window_t1_ParamLimits

0xe277,	// (0x0003a692) popup_image_details_window_t2_ParamLimits

0xe290,	// (0x0003a6ab) popup_image_details_window_t3_ParamLimits

0xe2a4,	// (0x0003a6bf) popup_image_details_window_t4_ParamLimits

0xe2bf,	// (0x0003a6da) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003bb3a) popup_image_details_window_t_ParamLimits

0x6caa,	// (0x000330c5) cl_header_name_pane_ParamLimits

0x6caa,	// (0x000330c5) cl_header_name_pane

0x71c3,	// (0x000335de) cl_header_name_pane_t1_ParamLimits

0x71c3,	// (0x000335de) cl_header_name_pane_t1

0x71e4,	// (0x000335ff) cl_header_name_pane_t2_ParamLimits

0x71e4,	// (0x000335ff) cl_header_name_pane_t2

0x7226,	// (0x00033641) cl_header_name_pane_t3_ParamLimits

0x7226,	// (0x00033641) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003bf40) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003bf40) cl_header_name_pane_t

0xc7a3,	// (0x00038bbe) navi_pane_mv_g2_ParamLimits

0xeaca,	// (0x0003aee5) field_vitu2_entry_pane_g1_ParamLimits

0xead6,	// (0x0003aef1) field_vitu2_entry_pane_g2_ParamLimits

0xeae2,	// (0x0003aefd) field_vitu2_entry_pane_g3_ParamLimits

0xeae2,	// (0x0003aefd) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003bd36) field_vitu2_entry_pane_g_ParamLimits

0xb8e0,	// (0x00037cfb) cell_vitu2_itu_pane_g1_ParamLimits

0x16fa,	// (0x0002db15) cell_vitu2_itu_pane_g2_ParamLimits

0x16fa,	// (0x0002db15) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003bd42) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003bd42) cell_vitu2_itu_pane_g

0xad29,	// (0x00037144) bg_vkb2_func_pane_cp05_ParamLimits

0xad29,	// (0x00037144) bg_vkb2_func_pane_cp05

0xad29,	// (0x00037144) bg_vkb2_func_pane_cp03

0xad29,	// (0x00037144) bg_vkb2_func_pane_cp04

0xad29,	// (0x00037144) bg_vkb2_func_pane_cp10_ParamLimits

0xad29,	// (0x00037144) bg_vkb2_func_pane_cp10

0x6c50,	// (0x0003306b) bg_vkb2_func_pane_cp08

0x6c36,	// (0x00033051) bg_vkb2_func_pane_cp06

0x6c44,	// (0x0003305f) bg_vkb2_func_pane_cp07

0x6e2f,	// (0x0003324a) bg_vkb2_func_pane_cp11_ParamLimits

0x6e2f,	// (0x0003324a) bg_vkb2_func_pane_cp11

0x6e44,	// (0x0003325f) bg_vkb2_func_pane_cp12_ParamLimits

0x6e44,	// (0x0003325f) bg_vkb2_func_pane_cp12

0xad01,	// (0x0003711c) bg_vkb2_func_pane_cp09

0xeb1f,	// (0x0003af3a) bg_vkb2_func_pane_g1

0xbfef,	// (0x0003840a) bg_vkb2_func_pane_g2

0xeb27,	// (0x0003af42) bg_vkb2_func_pane_g3

0xeb2f,	// (0x0003af4a) bg_vkb2_func_pane_g4

0xed73,	// (0x0003b18e) bg_vkb2_func_pane_g5

0xeb47,	// (0x0003af62) bg_vkb2_func_pane_g6

0xeb4f,	// (0x0003af6a) bg_vkb2_func_pane_g7

0xeb3f,	// (0x0003af5a) bg_vkb2_func_pane_g8

0xbfcf,	// (0x000383ea) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003bf47) bg_vkb2_func_pane_g

0x708b,	// (0x000334a6) blid2_tripm_pane_g6_ParamLimits

0x708b,	// (0x000334a6) blid2_tripm_pane_g6

0xe99d,	// (0x0003adb8) mp4_progress_pane_g1

0x7104,	// (0x0003351f) blid2_tripm_values_pane_ParamLimits

0x7104,	// (0x0003351f) blid2_tripm_values_pane

0x7257,	// (0x00033672) blid2_tripm_values_pane_t1

0x7265,	// (0x00033680) blid2_tripm_values_pane_t2

0x7273,	// (0x0003368e) blid2_tripm_values_pane_t3

0x7281,	// (0x0003369c) blid2_tripm_values_pane_t4

0x728f,	// (0x000336aa) blid2_tripm_values_pane_t5

0x729d,	// (0x000336b8) blid2_tripm_values_pane_t6

0x72ab,	// (0x000336c6) blid2_tripm_values_pane_t7

0x72b9,	// (0x000336d4) blid2_tripm_values_pane_t8

0x72c7,	// (0x000336e2) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003bf5a) blid2_tripm_values_pane_t

0x2852,	// (0x0002ec6d) call_video_pane_t1_ParamLimits

0x2870,	// (0x0002ec8b) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003b689) call_video_pane_t_ParamLimits

0x4065,	// (0x00030480) msg_header_pane_g1_ParamLimits

0xc993,	// (0x00038dae) msg_header_pane_g2_ParamLimits

0xc993,	// (0x00038dae) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003b8a3) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003b8a3) msg_header_pane_g

0xbbd1,	// (0x00037fec) main_clock2_pane_ParamLimits

0x5974,	// (0x00031d8f) grid_clock2_toolbar_pane_ParamLimits

0x5974,	// (0x00031d8f) grid_clock2_toolbar_pane

0x5974,	// (0x00031d8f) listscroll_clock2_pane_ParamLimits

0x5974,	// (0x00031d8f) listscroll_clock2_pane

0x5a6b,	// (0x00031e86) main_clock2_pane_t3_ParamLimits

0x5a6b,	// (0x00031e86) main_clock2_pane_t3

0x5a8f,	// (0x00031eaa) main_clock2_pane_t4_ParamLimits

0x5a8f,	// (0x00031eaa) main_clock2_pane_t4

0x72d5,	// (0x000336f0) cell_clock2_toolbar_pane

0x72dd,	// (0x000336f8) cell_clock2_toolbar_pane_cp01

0x72dd,	// (0x000336f8) cell_clock2_toolbar_pane_cp02

0x72e5,	// (0x00033700) cell_clock2_toolbar_pane_cp03

0x72ed,	// (0x00033708) list_clock2_pane

0xc5af,	// (0x000389ca) scroll_pane_cp10

0x72f5,	// (0x00033710) list_single_clock2_pane_ParamLimits

0x72f5,	// (0x00033710) list_single_clock2_pane

0xbd96,	// (0x000381b1) list_highlight_pane_cp08

0x7302,	// (0x0003371d) list_single_clock2_pane_t1

0x7310,	// (0x0003372b) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003bf6d) list_single_clock2_pane_t

0xad01,	// (0x0003711c) bg_button_pane_cp10

0x731e,	// (0x00033739) cell_clock2_toolbar_pane_g1

0x063c,	// (0x0002ca57) aid_main_viewer_pane_g1_ParamLimits

0x063c,	// (0x0002ca57) aid_main_viewer_pane_g1

0x064a,	// (0x0002ca65) aid_main_viewer_pane_g2_ParamLimits

0x064a,	// (0x0002ca65) aid_main_viewer_pane_g2

0x4073,	// (0x0003048e) aid_main_viewer_pane_g3_ParamLimits

0x4073,	// (0x0003048e) aid_main_viewer_pane_g3

0x4082,	// (0x0003049d) aid_main_viewer_pane_g4_ParamLimits

0x4082,	// (0x0003049d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003b8b4) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003b8b4) aid_main_viewer_pane_g

0x067e,	// (0x0002ca99) main_calc_pane_ParamLimits

0x06a4,	// (0x0002cabf) main_dialer2_pane_ParamLimits

0xad37,	// (0x00037152) main_cam6_pane

0xad37,	// (0x00037152) main_vid6_pane

0x5980,	// (0x00031d9b) listscroll_gen_pane_cp06_ParamLimits

0x5980,	// (0x00031d9b) listscroll_gen_pane_cp06

0x5ab2,	// (0x00031ecd) main_clock2_pane_t5_ParamLimits

0x5ab2,	// (0x00031ecd) main_clock2_pane_t5

0x5b0c,	// (0x00031f27) aid_call2_pane_cp10_ParamLimits

0x5b1e,	// (0x00031f39) aid_call_pane_cp10_ParamLimits

0xc62d,	// (0x00038a48) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc62d,	// (0x00038a48) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b30,	// (0x00031f4b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b30,	// (0x00031f4b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc62d,	// (0x00038a48) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003bbef) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b42,	// (0x00031f5d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5fc8,	// (0x000323e3) cell_dialer2_keypad_pane_g2_ParamLimits

0x5fc8,	// (0x000323e3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003bcd5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003bcd5) cell_dialer2_keypad_pane_g

0x5fe4,	// (0x000323ff) cell_dialer2_keypad_pane_t1

0x63d8,	// (0x000327f3) main_cset_text2_pane_ParamLimits

0x63d8,	// (0x000327f3) main_cset_text2_pane

0xefd1,	// (0x0003b3ec) area_vitu2_query_pane_g1_ParamLimits

0x6bd5,	// (0x00032ff0) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003be8a) area_vitu2_query_pane_g_ParamLimits

0xf055,	// (0x0003b470) area_vitu2_query_pane_t7_ParamLimits

0xf055,	// (0x0003b470) area_vitu2_query_pane_t7

0x6c36,	// (0x00033051) bg_button_pane_cp018_ParamLimits

0x6c44,	// (0x0003305f) bg_button_pane_cp021_ParamLimits

0x6c50,	// (0x0003306b) bg_button_pane_cp022_ParamLimits

0x6c50,	// (0x0003306b) bg_vkb2_func_pane_cp08_ParamLimits

0x6c36,	// (0x00033051) bg_vkb2_func_pane_cp06_ParamLimits

0x6c44,	// (0x0003305f) bg_vkb2_func_pane_cp07_ParamLimits

0x6c5f,	// (0x0003307a) input_focus_pane_cp09_ParamLimits

0xb9db,	// (0x00037df6) cam6_autofocus_pane_ParamLimits

0xb9db,	// (0x00037df6) cam6_autofocus_pane

0x19a4,	// (0x0002ddbf) cam6_image_uncrop_pane_ParamLimits

0x19a4,	// (0x0002ddbf) cam6_image_uncrop_pane

0x19b3,	// (0x0002ddce) cam6_indi_pane_ParamLimits

0x19b3,	// (0x0002ddce) cam6_indi_pane

0x19c9,	// (0x0002dde4) cam6_mode_pane_ParamLimits

0x19c9,	// (0x0002dde4) cam6_mode_pane

0x19db,	// (0x0002ddf6) cam6_timer_pane_ParamLimits

0x19db,	// (0x0002ddf6) cam6_timer_pane

0x19e7,	// (0x0002de02) cam6_zoom_pane_ParamLimits

0x19e7,	// (0x0002de02) cam6_zoom_pane

0x7326,	// (0x00033741) cam6_mode_pane_g1_ParamLimits

0x7326,	// (0x00033741) cam6_mode_pane_g1

0x7336,	// (0x00033751) cam6_mode_pane_g2_ParamLimits

0x7336,	// (0x00033751) cam6_mode_pane_g2

0x7346,	// (0x00033761) cam6_mode_pane_g3_ParamLimits

0x7346,	// (0x00033761) cam6_mode_pane_g3

0x7356,	// (0x00033771) cam6_mode_pane_g4_ParamLimits

0x7356,	// (0x00033771) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003bf72) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003bf72) cam6_mode_pane_g

0xed8d,	// (0x0003b1a8) bg_tb_trans_pane_cp08_ParamLimits

0xed8d,	// (0x0003b1a8) bg_tb_trans_pane_cp08

0x7366,	// (0x00033781) cam6_battery_pane_ParamLimits

0x7366,	// (0x00033781) cam6_battery_pane

0x737c,	// (0x00033797) cam6_indi_pane_g1_ParamLimits

0x737c,	// (0x00033797) cam6_indi_pane_g1

0x738e,	// (0x000337a9) cam6_indi_pane_g2_ParamLimits

0x738e,	// (0x000337a9) cam6_indi_pane_g2

0x73a0,	// (0x000337bb) cam6_indi_pane_g3_ParamLimits

0x73a0,	// (0x000337bb) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003bf7b) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003bf7b) cam6_indi_pane_g

0x73b2,	// (0x000337cd) cam6_indi_pane_t1_ParamLimits

0x73b2,	// (0x000337cd) cam6_indi_pane_t1

0x73d8,	// (0x000337f3) cam6_autofocus_pane_g1

0x73e0,	// (0x000337fb) cam6_autofocus_pane_g2

0x73e8,	// (0x00033803) cam6_autofocus_pane_g3

0x73f0,	// (0x0003380b) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003bf82) cam6_autofocus_pane_g

0x73f8,	// (0x00033813) cam6_timer_pane_g1

0x7400,	// (0x0003381b) cam6_timer_pane_t1

0x740e,	// (0x00033829) cam6_zoom_cont_pane

0x7416,	// (0x00033831) cam6_zoom_pane_g1

0x741e,	// (0x00033839) cam6_zoom_pane_g2

0x7426,	// (0x00033841) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003bf8b) cam6_zoom_pane_g

0xe091,	// (0x0003a4ac) cam6_battery_pane_g1

0xe091,	// (0x0003a4ac) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003baf7) cam6_battery_pane_g

0x742e,	// (0x00033849) cam6_zoom_cont_pane_g1

0x7437,	// (0x00033852) cam6_zoom_cont_pane_g2

0x7440,	// (0x0003385b) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003bf92) cam6_zoom_cont_pane_g

0x745d,	// (0x00033878) cam6_mode_pane_cp_ParamLimits

0x745d,	// (0x00033878) cam6_mode_pane_cp

0x746f,	// (0x0003388a) cam6_zoom_pane_cp_ParamLimits

0x746f,	// (0x0003388a) cam6_zoom_pane_cp

0x747b,	// (0x00033896) vid6_image_uncrop_cif_pane_ParamLimits

0x747b,	// (0x00033896) vid6_image_uncrop_cif_pane

0x748b,	// (0x000338a6) vid6_image_uncrop_nhd_pane_ParamLimits

0x748b,	// (0x000338a6) vid6_image_uncrop_nhd_pane

0x74aa,	// (0x000338c5) vid6_image_uncrop_vga_pane_ParamLimits

0x74aa,	// (0x000338c5) vid6_image_uncrop_vga_pane

0x74b9,	// (0x000338d4) vid6_image_uncrop_wvga_pane_ParamLimits

0x74b9,	// (0x000338d4) vid6_image_uncrop_wvga_pane

0x74c8,	// (0x000338e3) vid6_indi_pane_ParamLimits

0x74c8,	// (0x000338e3) vid6_indi_pane

0xed8d,	// (0x0003b1a8) bg_tb_trans_pane_cp09_ParamLimits

0xed8d,	// (0x0003b1a8) bg_tb_trans_pane_cp09

0x74e0,	// (0x000338fb) cam6_battery_pane_cp_ParamLimits

0x74e0,	// (0x000338fb) cam6_battery_pane_cp

0x74ec,	// (0x00033907) vid6_indi_pane_g1_ParamLimits

0x74ec,	// (0x00033907) vid6_indi_pane_g1

0x74fe,	// (0x00033919) vid6_indi_pane_g2_ParamLimits

0x74fe,	// (0x00033919) vid6_indi_pane_g2

0x7510,	// (0x0003392b) vid6_indi_pane_g3_ParamLimits

0x7510,	// (0x0003392b) vid6_indi_pane_g3

0x7525,	// (0x00033940) vid6_indi_pane_g4_ParamLimits

0x7525,	// (0x00033940) vid6_indi_pane_g4

0x753a,	// (0x00033955) vid6_indi_pane_g5_ParamLimits

0x753a,	// (0x00033955) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003bf99) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003bf99) vid6_indi_pane_g

0x7554,	// (0x0003396f) vid6_indi_pane_t1_ParamLimits

0x7554,	// (0x0003396f) vid6_indi_pane_t1

0x756a,	// (0x00033985) vid6_indi_pane_t2_ParamLimits

0x756a,	// (0x00033985) vid6_indi_pane_t2

0x7592,	// (0x000339ad) vid6_indi_pane_t3_ParamLimits

0x7592,	// (0x000339ad) vid6_indi_pane_t3

0x75ba,	// (0x000339d5) vid6_indi_pane_t4_ParamLimits

0x75ba,	// (0x000339d5) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003bfa4) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003bfa4) vid6_indi_pane_t

0x75de,	// (0x000339f9) wait_bar_pane_cp08

0x75ed,	// (0x00033a08) main_cset_text2_pane_t1_ParamLimits

0x75ed,	// (0x00033a08) main_cset_text2_pane_t1

0x7448,	// (0x00033863) listscroll_gen_pane_cp06_t1_ParamLimits

0x7448,	// (0x00033863) listscroll_gen_pane_cp06_t1

0xad37,	// (0x00037152) main_cam6_set_pane

0xb801,	// (0x00037c1c) bg_tb_trans_pane_cp06_ParamLimits

0xb817,	// (0x00037c32) cam4_indicators_pane_g1_ParamLimits

0xb828,	// (0x00037c43) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003bd12) cam4_indicators_pane_g_ParamLimits

0xb846,	// (0x00037c61) cam4_indicators_pane_t1_ParamLimits

0xad29,	// (0x00037144) bg_tb_trans_pane_cp07_ParamLimits

0xb872,	// (0x00037c8d) vid4_indicators_pane_g1_ParamLimits

0xb886,	// (0x00037ca1) vid4_indicators_pane_g2_ParamLimits

0xb89a,	// (0x00037cb5) vid4_indicators_pane_g3_ParamLimits

0xb8ab,	// (0x00037cc6) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003bd24) vid4_indicators_pane_g_ParamLimits

0xb8c9,	// (0x00037ce4) vid4_indicators_pane_t1_ParamLimits

0xb979,	// (0x00037d94) vid4_progress_pane_g1_ParamLimits

0xb989,	// (0x00037da4) vid4_progress_pane_g2_ParamLimits

0x1967,	// (0x0002dd82) vid4_progress_pane_g3_ParamLimits

0xb999,	// (0x00037db4) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003bed5) vid4_progress_pane_g_ParamLimits

0x1979,	// (0x0002dd94) vid4_progress_pane_t1_ParamLimits

0xb9b1,	// (0x00037dcc) vid4_progress_pane_t2_ParamLimits

0xb9c6,	// (0x00037de1) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003bee0) vid4_progress_pane_t_ParamLimits

0x1991,	// (0x0002ddac) wait_bar_pane_cp07_ParamLimits

0x760a,	// (0x00033a25) main_cam6_set_pane_g2_ParamLimits

0x760a,	// (0x00033a25) main_cam6_set_pane_g2

0x762e,	// (0x00033a49) main_cset6_listscroll_pane_ParamLimits

0x762e,	// (0x00033a49) main_cset6_listscroll_pane

0x764e,	// (0x00033a69) main_cset6_slider_pane_ParamLimits

0x764e,	// (0x00033a69) main_cset6_slider_pane

0x7664,	// (0x00033a7f) main_cset6_text2_pane_ParamLimits

0x7664,	// (0x00033a7f) main_cset6_text2_pane

0x7672,	// (0x00033a8d) main_cset6_text_pane

0x767a,	// (0x00033a95) main_cset_list_pane_copy1_ParamLimits

0x767a,	// (0x00033a95) main_cset_list_pane_copy1

0x768a,	// (0x00033aa5) scroll_pane_cp028_copy1

0x7693,	// (0x00033aae) cset_list_set_pane_copy1

0x76a4,	// (0x00033abf) aid_position_infowindow_above_copy1

0x76ac,	// (0x00033ac7) aid_position_infowindow_below_copy1

0x76b4,	// (0x00033acf) cset_list_set_pane_g1_copy1

0x76bc,	// (0x00033ad7) cset_list_set_pane_g3_copy1_ParamLimits

0x76bc,	// (0x00033ad7) cset_list_set_pane_g3_copy1

0x76cb,	// (0x00033ae6) cset_list_set_pane_t1_copy1_ParamLimits

0x76cb,	// (0x00033ae6) cset_list_set_pane_t1_copy1

0xc6cc,	// (0x00038ae7) list_highlight_pane_cp021_copy1_ParamLimits

0xc6cc,	// (0x00038ae7) list_highlight_pane_cp021_copy1

0x76e0,	// (0x00033afb) cset6_slider_pane_ParamLimits

0x76e0,	// (0x00033afb) cset6_slider_pane

0x770c,	// (0x00033b27) main_cset6_slider_pane_g1_ParamLimits

0x770c,	// (0x00033b27) main_cset6_slider_pane_g1

0x7734,	// (0x00033b4f) main_cset6_slider_pane_g2_ParamLimits

0x7734,	// (0x00033b4f) main_cset6_slider_pane_g2

0x775c,	// (0x00033b77) main_cset6_slider_pane_g3_ParamLimits

0x775c,	// (0x00033b77) main_cset6_slider_pane_g3

0x7768,	// (0x00033b83) main_cset6_slider_pane_g4_ParamLimits

0x7768,	// (0x00033b83) main_cset6_slider_pane_g4

0x7774,	// (0x00033b8f) main_cset6_slider_pane_g5_ParamLimits

0x7774,	// (0x00033b8f) main_cset6_slider_pane_g5

0xec4e,	// (0x0003b069) main_cset6_slider_pane_g7_ParamLimits

0xec4e,	// (0x0003b069) main_cset6_slider_pane_g7

0xec5a,	// (0x0003b075) main_cset6_slider_pane_g8_ParamLimits

0xec5a,	// (0x0003b075) main_cset6_slider_pane_g8

0x6485,	// (0x000328a0) main_cset6_slider_pane_g9_ParamLimits

0x6485,	// (0x000328a0) main_cset6_slider_pane_g9

0x6491,	// (0x000328ac) main_cset6_slider_pane_g10_ParamLimits

0x6491,	// (0x000328ac) main_cset6_slider_pane_g10

0x649d,	// (0x000328b8) main_cset6_slider_pane_g11_ParamLimits

0x649d,	// (0x000328b8) main_cset6_slider_pane_g11

0x64a9,	// (0x000328c4) main_cset6_slider_pane_g12_ParamLimits

0x64a9,	// (0x000328c4) main_cset6_slider_pane_g12

0x64b5,	// (0x000328d0) main_cset6_slider_pane_g13_ParamLimits

0x64b5,	// (0x000328d0) main_cset6_slider_pane_g13

0x64c1,	// (0x000328dc) main_cset6_slider_pane_g14_ParamLimits

0x64c1,	// (0x000328dc) main_cset6_slider_pane_g14

0x7780,	// (0x00033b9b) main_cset6_slider_pane_g15_ParamLimits

0x7780,	// (0x00033b9b) main_cset6_slider_pane_g15

0x64e5,	// (0x00032900) main_cset6_slider_pane_g16_ParamLimits

0x64e5,	// (0x00032900) main_cset6_slider_pane_g16

0x64f1,	// (0x0003290c) main_cset6_slider_pane_g17_ParamLimits

0x64f1,	// (0x0003290c) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003bfad) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003bfad) main_cset6_slider_pane_g

0x77b0,	// (0x00033bcb) main_cset6_slider_pane_t1_ParamLimits

0x77b0,	// (0x00033bcb) main_cset6_slider_pane_t1

0x77f1,	// (0x00033c0c) main_cset6_slider_pane_t2_ParamLimits

0x77f1,	// (0x00033c0c) main_cset6_slider_pane_t2

0x781c,	// (0x00033c37) main_cset6_slider_pane_t3_ParamLimits

0x781c,	// (0x00033c37) main_cset6_slider_pane_t3

0x7847,	// (0x00033c62) main_cset6_slider_pane_t4_ParamLimits

0x7847,	// (0x00033c62) main_cset6_slider_pane_t4

0x7872,	// (0x00033c8d) main_cset6_slider_pane_t5_ParamLimits

0x7872,	// (0x00033c8d) main_cset6_slider_pane_t5

0x789d,	// (0x00033cb8) main_cset6_slider_pane_t7_ParamLimits

0x789d,	// (0x00033cb8) main_cset6_slider_pane_t7

0x78d3,	// (0x00033cee) main_cset6_slider_pane_t8_ParamLimits

0x78d3,	// (0x00033cee) main_cset6_slider_pane_t8

0x78f7,	// (0x00033d12) main_cset6_slider_pane_t9_ParamLimits

0x78f7,	// (0x00033d12) main_cset6_slider_pane_t9

0x791b,	// (0x00033d36) main_cset6_slider_pane_t10_ParamLimits

0x791b,	// (0x00033d36) main_cset6_slider_pane_t10

0x793f,	// (0x00033d5a) main_cset6_slider_pane_t11_ParamLimits

0x793f,	// (0x00033d5a) main_cset6_slider_pane_t11

0x7963,	// (0x00033d7e) main_cset6_slider_pane_t14_ParamLimits

0x7963,	// (0x00033d7e) main_cset6_slider_pane_t14

0x799c,	// (0x00033db7) main_cset6_slider_pane_t15_ParamLimits

0x799c,	// (0x00033db7) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003bfd2) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003bfd2) main_cset6_slider_pane_t

0xed9b,	// (0x0003b1b6) cset_slider_pane_g1_copy1

0xeda4,	// (0x0003b1bf) cset_slider_pane_g2_copy1

0xedad,	// (0x0003b1c8) cset_slider_pane_g3_copy1

0xad01,	// (0x0003711c) bg_popup_sub_pane_cp011_copy1

0x7aad,	// (0x00033ec8) main_cset_text_pane_g1_copy1

0xedf9,	// (0x0003b214) main_cset_text_pane_t1_copy1

0xee07,	// (0x0003b222) main_cset_text_pane_t2_copy1

0xee15,	// (0x0003b230) main_cset_text_pane_t3_copy1

0xee23,	// (0x0003b23e) main_cset_text_pane_t4_copy1

0xee31,	// (0x0003b24c) main_cset_text_pane_t5_copy1

0x7ab5,	// (0x00033ed0) main_cset_text_pane_t6_copy1

0x7ac3,	// (0x00033ede) main_cset_text_pane_t7_copy1

0x75ed,	// (0x00033a08) main_cset_text2_pane_t1_copy1

0xad29,	// (0x00037144) main_ncimui_pane

0x08ee,	// (0x0002cd09) popup_query_ncimui_window_ParamLimits

0x08ee,	// (0x0002cd09) popup_query_ncimui_window

0xe36e,	// (0x0003a789) field_cale_ev2_pane_g4_ParamLimits

0xe36e,	// (0x0003a789) field_cale_ev2_pane_g4

0x5f48,	// (0x00032363) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f48,	// (0x00032363) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003bcb0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003bcb0) cell_video_dialer_keypad_pane_g

0x5f60,	// (0x0003237b) cell_video_dialer_keypad_pane_t1

0xad01,	// (0x0003711c) bg_popup_window_pane_cp012

0xc47c,	// (0x00038897) heading_pane_cp06

0x7c18,	// (0x00034033) ncim_query_content_pane

0xad01,	// (0x0003711c) bg_popup_heading_pane_cp01

0x7c20,	// (0x0003403b) ncim_heading_pane_t1

0x7c2e,	// (0x00034049) ncim_indicator_popup_pane

0x7c40,	// (0x0003405b) ncim_query_button_pane

0x7c60,	// (0x0003407b) ncim_query_content_pane_t1

0x7c72,	// (0x0003408d) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003c016) ncim_query_content_pane_t

0x7d24,	// (0x0003413f) ncim_query_list_pane

0x7d36,	// (0x00034151) ncim_query_popup_pane

0x7c2e,	// (0x00034049) ncim_indicator_popup_pane_ParamLimits

0x7c48,	// (0x00034063) ncim_query_content_pane_g1_ParamLimits

0x7c48,	// (0x00034063) ncim_query_content_pane_g1

0x7c60,	// (0x0003407b) ncim_query_content_pane_t1_ParamLimits

0x7c72,	// (0x0003408d) ncim_query_content_pane_t2_ParamLimits

0x7c84,	// (0x0003409f) ncim_query_content_pane_t3_ParamLimits

0x7c84,	// (0x0003409f) ncim_query_content_pane_t3

0x7cac,	// (0x000340c7) ncim_query_content_pane_t4_ParamLimits

0x7cac,	// (0x000340c7) ncim_query_content_pane_t4

0x7cd4,	// (0x000340ef) ncim_query_content_pane_t5_ParamLimits

0x7cd4,	// (0x000340ef) ncim_query_content_pane_t5

0x7cfc,	// (0x00034117) ncim_query_content_pane_t6_ParamLimits

0x7cfc,	// (0x00034117) ncim_query_content_pane_t6

0xfbfb,	// (0x0003c016) ncim_query_content_pane_t_ParamLimits

0x7d24,	// (0x0003413f) ncim_query_list_pane_ParamLimits

0x7d36,	// (0x00034151) ncim_query_popup_pane_ParamLimits

0x7d4a,	// (0x00034165) wait_bar_pane_cp04

0xad01,	// (0x0003711c) input_focus_pane_cp011

0x7d52,	// (0x0003416d) ncim_query_popup_pane_t1

0x7d60,	// (0x0003417b) ncim_list_query_list_pane_ParamLimits

0x7d60,	// (0x0003417b) ncim_list_query_list_pane

0xad01,	// (0x0003711c) bg_button_pane_cp027

0x7d6d,	// (0x00034188) ncim_query_button_pane_g1

0xad01,	// (0x0003711c) list_highlight_pane_cp012

0x7d77,	// (0x00034192) ncim_list_query_list_pane_g1

0x7d7f,	// (0x0003419a) ncim_list_query_list_pane_t1

0xb837,	// (0x00037c52) cam4_indicators_pane_g3_ParamLimits

0xb837,	// (0x00037c52) cam4_indicators_pane_g3

0xb8b7,	// (0x00037cd2) vid4_indicators_pane_g5_ParamLimits

0xb8b7,	// (0x00037cd2) vid4_indicators_pane_g5

0xb9a5,	// (0x00037dc0) vid4_progress_pane_g5_ParamLimits

0xb9a5,	// (0x00037dc0) vid4_progress_pane_g5

0x7b03,	// (0x00033f1e) main_ncimui_pane_g1

0x7b6c,	// (0x00033f87) ncimui_group_query_pane_ParamLimits

0x7b6c,	// (0x00033f87) ncimui_group_query_pane

0x7bb4,	// (0x00033fcf) ncimui_list_pane_ParamLimits

0x7bb4,	// (0x00033fcf) ncimui_list_pane

0x7bdb,	// (0x00033ff6) ncimui_text_pane_ParamLimits

0x7bdb,	// (0x00033ff6) ncimui_text_pane

0x7d8d,	// (0x000341a8) ncimui_text_pane_t1_ParamLimits

0x7d8d,	// (0x000341a8) ncimui_text_pane_t1

0x7dab,	// (0x000341c6) ncimui_list_single_graphic_pane_ParamLimits

0x7dab,	// (0x000341c6) ncimui_list_single_graphic_pane

0x7dbb,	// (0x000341d6) ncimui_query_pane_ParamLimits

0x7dbb,	// (0x000341d6) ncimui_query_pane

0xad01,	// (0x0003711c) list_highlight_pane_cp013

0x7dce,	// (0x000341e9) ncim_list_query_list_pane_t1_copy1

0x7d77,	// (0x00034192) ncim_list_single_graphic_pane_g1

0x7ddc,	// (0x000341f7) ncim_query_button_pane_cp01

0x7de8,	// (0x00034203) ncim_query_entry_pane_ParamLimits

0x7de8,	// (0x00034203) ncim_query_entry_pane

0x7dfb,	// (0x00034216) ncimui_query_pane_g1

0x7e07,	// (0x00034222) ncimui_query_pane_t1_ParamLimits

0x7e07,	// (0x00034222) ncimui_query_pane_t1

0xc6cc,	// (0x00038ae7) input_focus_pane_cp012

0x7e20,	// (0x0003423b) ncim_query_entry_pane_t1

0xbbd1,	// (0x00037fec) main_im_pane_ParamLimits

0xad29,	// (0x00037144) main_mobtv_pane_ParamLimits

0xad29,	// (0x00037144) main_mobtv_pane

0x7798,	// (0x00033bb3) main_cset6_slider_pane_g18_ParamLimits

0x7798,	// (0x00033bb3) main_cset6_slider_pane_g18

0x77a4,	// (0x00033bbf) main_cset6_slider_pane_g19_ParamLimits

0x77a4,	// (0x00033bbf) main_cset6_slider_pane_g19

0x7e32,	// (0x0003424d) bg_main_mobtv_pane_ParamLimits

0x7e32,	// (0x0003424d) bg_main_mobtv_pane

0x7e40,	// (0x0003425b) main_mobtv_info_pane

0x7e49,	// (0x00034264) main_mobtv_loading_pane_ParamLimits

0x7e49,	// (0x00034264) main_mobtv_loading_pane

0x7e56,	// (0x00034271) main_mobtv_pg_channel_list_pane

0x7e60,	// (0x0003427b) main_mobtv_pg_hdr_pane

0x7e69,	// (0x00034284) main_mobtv_programe_curr_pane_ParamLimits

0x7e69,	// (0x00034284) main_mobtv_programe_curr_pane

0x7e76,	// (0x00034291) main_mobtv_programe_next_pane_ParamLimits

0x7e76,	// (0x00034291) main_mobtv_programe_next_pane

0x7e83,	// (0x0003429e) popup_mobtv_noti_window

0xe091,	// (0x0003a4ac) main_tv_pg_hdr_pane_g1

0x7e8b,	// (0x000342a6) main_tv_pg_hdr_pane_g2

0x7e93,	// (0x000342ae) main_tv_pg_hdr_pane_g3

0x7e9b,	// (0x000342b6) main_tv_pg_hdr_pane_g4

0x7ea3,	// (0x000342be) main_tv_pg_hdr_pane_g5

0x7ead,	// (0x000342c8) main_tv_pg_hdr_pane_g6

0x7eb7,	// (0x000342d2) main_tv_pg_hdr_pane_g7

0x7ec1,	// (0x000342dc) main_tv_pg_hdr_pane_g8

0x7ecb,	// (0x000342e6) main_tv_pg_hdr_pane_g9

0x7ed5,	// (0x000342f0) main_tv_pg_hdr_pane_g10

0x7edf,	// (0x000342fa) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003c023) main_tv_pg_hdr_pane_g

0x7ee9,	// (0x00034304) main_tv_pg_hdr_pane_t1

0x7ef7,	// (0x00034312) main_tv_pg_hdr_pane_t2

0x7f05,	// (0x00034320) main_tv_pg_hdr_pane_t3

0x7f15,	// (0x00034330) main_tv_pg_hdr_pane_t4

0x7f25,	// (0x00034340) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003c03a) main_tv_pg_hdr_pane_t

0x7f35,	// (0x00034350) single_mobtv_pg_channel_pane_ParamLimits

0x7f35,	// (0x00034350) single_mobtv_pg_channel_pane

0x7f47,	// (0x00034362) single_mobtv_pg_channel_table_pane

0x7f50,	// (0x0003436b) single_mobtv_pg_channel_thumb_pane

0x7f59,	// (0x00034374) single_tv_pg_channel_pane_g1

0x7f62,	// (0x0003437d) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003c045) single_tv_pg_channel_pane_g

0xe309,	// (0x0003a724) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe309,	// (0x0003a724) bg_single_mobtv_pg_channel_thumb_pane

0x7f6b,	// (0x00034386) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x7f6b,	// (0x00034386) single_mobtv_pg_channel_thumb_pane_g1

0x7f79,	// (0x00034394) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x7f79,	// (0x00034394) single_mobtv_pg_channel_thumb_pane_g2

0x7f85,	// (0x000343a0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x7f85,	// (0x000343a0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003c04a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003c04a) single_mobtv_pg_channel_thumb_pane_g

0x7f91,	// (0x000343ac) single_mobtv_pg_channel_thumb_pane_t1

0x7f9f,	// (0x000343ba) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003c051) single_mobtv_pg_channel_thumb_pane_t

0xe091,	// (0x0003a4ac) bg_single_mobtv_pg_channel_table_pane_g1

0xe091,	// (0x0003a4ac) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003baf7) bg_single_mobtv_pg_channel_table_pane_g

0x7fad,	// (0x000343c8) single_mobtv_pg_channel_table_pane_t1

0x7fbb,	// (0x000343d6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003c056) single_mobtv_pg_channel_table_pane_t

0x7fd1,	// (0x000343ec) main_mobtv_info_pane_g1_ParamLimits

0x7fd1,	// (0x000343ec) main_mobtv_info_pane_g1

0x7fef,	// (0x0003440a) main_mobtv_info_pane_t1_ParamLimits

0x7fef,	// (0x0003440a) main_mobtv_info_pane_t1

0x8067,	// (0x00034482) main_mobtv_info_pane_t2_ParamLimits

0x8067,	// (0x00034482) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003c060) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003c060) main_mobtv_info_pane_t

0x80f6,	// (0x00034511) wait_bar_pane_cp05

0x8108,	// (0x00034523) main_mobtv_loading_pane_g1_ParamLimits

0x8108,	// (0x00034523) main_mobtv_loading_pane_g1

0x811b,	// (0x00034536) main_mobtv_loading_pane_g2_ParamLimits

0x811b,	// (0x00034536) main_mobtv_loading_pane_g2

0x8127,	// (0x00034542) main_mobtv_loading_pane_g3_ParamLimits

0x8127,	// (0x00034542) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003c067) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003c067) main_mobtv_loading_pane_g

0x813a,	// (0x00034555) main_mobtv_loading_pane_t1_ParamLimits

0x813a,	// (0x00034555) main_mobtv_loading_pane_t1

0x8152,	// (0x0003456d) main_mobtv_loading_pane_t2_ParamLimits

0x8152,	// (0x0003456d) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003c06e) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003c06e) main_mobtv_loading_pane_t

0x8176,	// (0x00034591) wait_bar_pane_cp06_ParamLimits

0x8176,	// (0x00034591) wait_bar_pane_cp06

0x8185,	// (0x000345a0) main_mobtv_programe_curr_pane_t1

0x8193,	// (0x000345ae) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003c073) main_mobtv_programe_curr_pane_t

0x81a1,	// (0x000345bc) main_mobtv_programe_next_pane_t1

0x81af,	// (0x000345ca) main_mobtv_programe_next_pane_t2

0x81bd,	// (0x000345d8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003c078) main_mobtv_programe_next_pane_t

0xad01,	// (0x0003711c) bg_popup_mobtv_noti_window_pane

0x81cb,	// (0x000345e6) popup_mobtv_noti_window_g1

0x81d3,	// (0x000345ee) popup_mobtv_noti_window_t1

0x81e1,	// (0x000345fc) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003c07f) popup_mobtv_noti_window_t

0xe091,	// (0x0003a4ac) bg_popup_mobtv_noti_window_pane_g1

0xad37,	// (0x00037152) sc_clock_pane

0xad37,	// (0x00037152) main_fs_bigclock_pane

0x70ee,	// (0x00033509) blid2_tripm_pane_t4_ParamLimits

0x70ee,	// (0x00033509) blid2_tripm_pane_t4

0x81ef,	// (0x0003460a) sc_clock_pane_g1_ParamLimits

0x81ef,	// (0x0003460a) sc_clock_pane_g1

0x8201,	// (0x0003461c) sc_clock_pane_t1_ParamLimits

0x8201,	// (0x0003461c) sc_clock_pane_t1

0x8223,	// (0x0003463e) sc_clock_pane_t2_ParamLimits

0x8223,	// (0x0003463e) sc_clock_pane_t2

0x823b,	// (0x00034656) sc_clock_pane_t3_ParamLimits

0x823b,	// (0x00034656) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003c084) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003c084) sc_clock_pane_t

0x9e09,	// (0x00036224) main_fs_bigclock_indicator_pane_ParamLimits

0x9e09,	// (0x00036224) main_fs_bigclock_indicator_pane

0x82e1,	// (0x000346fc) main_fs_bigclock_pane_g1_ParamLimits

0x82e1,	// (0x000346fc) main_fs_bigclock_pane_g1

0x9e15,	// (0x00036230) main_fs_bigclock_pane_t1_ParamLimits

0x9e15,	// (0x00036230) main_fs_bigclock_pane_t1

0x9e27,	// (0x00036242) main_fs_bigclock_pane_t2_ParamLimits

0x9e27,	// (0x00036242) main_fs_bigclock_pane_t2

0x9e3b,	// (0x00036256) main_fs_bigclock_pane_t3_ParamLimits

0x9e3b,	// (0x00036256) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003c289) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003c289) main_fs_bigclock_pane_t

0x9e4d,	// (0x00036268) main_fs_bigclock_indicator_pane_g1

0x7c54,	// (0x0003406f) ncim_query_content_pane_g2_ParamLimits

0x7c54,	// (0x0003406f) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003c011) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003c011) ncim_query_content_pane_g

0x8254,	// (0x0003466f) sc_clock_pane_t4_ParamLimits

0x8254,	// (0x0003466f) sc_clock_pane_t4

0xad29,	// (0x00037144) main_radioblah_pane

0xb79b,	// (0x00037bb6) cell_call4_button_pane_t1_copy1_ParamLimits

0xb79b,	// (0x00037bb6) cell_call4_button_pane_t1_copy1

0x7b1b,	// (0x00033f36) main_ncimui_pane_t1_ParamLimits

0x7b1b,	// (0x00033f36) main_ncimui_pane_t1

0x7b35,	// (0x00033f50) main_ncimui_pane_t2_ParamLimits

0x7b35,	// (0x00033f50) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003c00a) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003c00a) main_ncimui_pane_t

0x8465,	// (0x00034880) main_radioblah_anim_pane_ParamLimits

0x8465,	// (0x00034880) main_radioblah_anim_pane

0x8476,	// (0x00034891) main_radioblah_info_pane_ParamLimits

0x8476,	// (0x00034891) main_radioblah_info_pane

0x849c,	// (0x000348b7) main_radioblah_pane_t1_ParamLimits

0x849c,	// (0x000348b7) main_radioblah_pane_t1

0x84b8,	// (0x000348d3) main_radioblah_pane_t2_ParamLimits

0x84b8,	// (0x000348d3) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003c0a5) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003c0a5) main_radioblah_pane_t

0x8500,	// (0x0003491b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8500,	// (0x0003491b) main_radioblah_rocker_ctrl_pane

0x8558,	// (0x00034973) main_radioblah_info_pane_t1_ParamLimits

0x8558,	// (0x00034973) main_radioblah_info_pane_t1

0x8592,	// (0x000349ad) main_radioblah_info_pane_t2_ParamLimits

0x8592,	// (0x000349ad) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003c0ae) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003c0ae) main_radioblah_info_pane_t

0xe091,	// (0x0003a4ac) main_radioblah_rocker_ctrl_pane_g1

0x8642,	// (0x00034a5d) main_radioblah_rocker_ctrl_pane_g2

0x864a,	// (0x00034a65) main_radioblah_rocker_ctrl_pane_g3

0x8652,	// (0x00034a6d) main_radioblah_rocker_ctrl_pane_g4

0x865a,	// (0x00034a75) main_radioblah_rocker_ctrl_pane_g5

0x8662,	// (0x00034a7d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003c0b7) main_radioblah_rocker_ctrl_pane_g

0x75ed,	// (0x00033a08) main_cset_text2_pane_t1_copy1_ParamLimits

0xb7f9,	// (0x00037c14) cam4_image_uncrop_qvga_pane

0xb860,	// (0x00037c7b) vid4_image_uncrop_qcif_pane

0xb9db,	// (0x00037df6) cam6_image_uncrop_qvga_pane_ParamLimits

0xb9db,	// (0x00037df6) cam6_image_uncrop_qvga_pane

0x749a,	// (0x000338b5) vid6_image_uncrop_qcif_pane_ParamLimits

0x749a,	// (0x000338b5) vid6_image_uncrop_qcif_pane

0xad01,	// (0x0003711c) bg_popup_preview_window_pane_cp03

0x7ad1,	// (0x00033eec) list_cset_text2_pane

0x7ad9,	// (0x00033ef4) main_cset6_text2_pane_g1

0x7ae1,	// (0x00033efc) main_cset6_text2_pane_t1

0x866a,	// (0x00034a85) list_cset_text2_pane_t1_ParamLimits

0x866a,	// (0x00034a85) list_cset_text2_pane_t1

0xad29,	// (0x00037144) main_radioblah_pane_ParamLimits

0x80e2,	// (0x000344fd) main_mobtv_info_pane_t3_ParamLimits

0x80e2,	// (0x000344fd) main_mobtv_info_pane_t3

0x848a,	// (0x000348a5) main_radioblah_pane_g1

0x8528,	// (0x00034943) main_radioblah_info_pane_g1

0x85e7,	// (0x00034a02) main_radioblah_info_pane_t3_ParamLimits

0x85e7,	// (0x00034a02) main_radioblah_info_pane_t3

0x36c3,	// (0x0002fade) highlight_cell_cale_month_pane_ParamLimits

0x36c3,	// (0x0002fade) highlight_cell_cale_month_pane

0xad37,	// (0x00037152) main_phob_fisheye_pane

0xe411,	// (0x0003a82c) scroll_pane_cp0031_ParamLimits

0xe411,	// (0x0003a82c) scroll_pane_cp0031

0x75de,	// (0x000339f9) wait_bar_pane_cp08_ParamLimits

0x7693,	// (0x00033aae) cset_list_set_pane_copy1_ParamLimits

0x8683,	// (0x00034a9e) highlight_cell_cale_month_pane_g1

0x868b,	// (0x00034aa6) highlight_cell_cale_month_pane_t1

0xf0c1,	// (0x0003b4dc) list_gen_pane_cp01

0xec39,	// (0x0003b054) scroll_pane_01

0x8699,	// (0x00034ab4) list_single_double_fisheye_pane

0x86a2,	// (0x00034abd) list_double_fisheye_pane_g1_ParamLimits

0x86a2,	// (0x00034abd) list_double_fisheye_pane_g1

0x86ae,	// (0x00034ac9) list_double_fisheye_pane_g2_ParamLimits

0x86ae,	// (0x00034ac9) list_double_fisheye_pane_g2

0x86c2,	// (0x00034add) list_double_fisheye_pane_g3_ParamLimits

0x86c2,	// (0x00034add) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003c0c4) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003c0c4) list_double_fisheye_pane_g

0x86eb,	// (0x00034b06) list_double_fisheye_pane_t1_ParamLimits

0x86eb,	// (0x00034b06) list_double_fisheye_pane_t1

0x8706,	// (0x00034b21) list_double_fisheye_pane_t2_ParamLimits

0x8706,	// (0x00034b21) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003c0cf) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003c0cf) list_double_fisheye_pane_t

0xad37,	// (0x00037152) main_call5_pane

0x827f,	// (0x0003469a) sc_swipe_pane_ParamLimits

0x827f,	// (0x0003469a) sc_swipe_pane

0x873b,	// (0x00034b56) call5_image_pane_ParamLimits

0x873b,	// (0x00034b56) call5_image_pane

0x8758,	// (0x00034b73) call5_swipe_1_pane_ParamLimits

0x8758,	// (0x00034b73) call5_swipe_1_pane

0x876b,	// (0x00034b86) call5_swipe_2_pane_ParamLimits

0x876b,	// (0x00034b86) call5_swipe_2_pane

0x8796,	// (0x00034bb1) popup_call5_audio_first_window_ParamLimits

0x8796,	// (0x00034bb1) popup_call5_audio_first_window

0xe309,	// (0x0003a724) call5_swipe_1_pane_g1_ParamLimits

0xe309,	// (0x0003a724) call5_swipe_1_pane_g1

0x87a7,	// (0x00034bc2) call5_swipe_1_pane_g2_ParamLimits

0x87a7,	// (0x00034bc2) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003c0d4) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003c0d4) call5_swipe_1_pane_g

0x87b3,	// (0x00034bce) call5_swipe_1_pane_t1_ParamLimits

0x87b3,	// (0x00034bce) call5_swipe_1_pane_t1

0xe309,	// (0x0003a724) call5_swipe_2_pane_g1_ParamLimits

0xe309,	// (0x0003a724) call5_swipe_2_pane_g1

0x87c8,	// (0x00034be3) call5_swipe_2_pane_g2_ParamLimits

0x87c8,	// (0x00034be3) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003c0d9) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003c0d9) call5_swipe_2_pane_g

0x87d4,	// (0x00034bef) call5_swipe_2_pane_t1_ParamLimits

0x87d4,	// (0x00034bef) call5_swipe_2_pane_t1

0x87e9,	// (0x00034c04) sc_swipe_pane_g1_ParamLimits

0x87e9,	// (0x00034c04) sc_swipe_pane_g1

0x87f6,	// (0x00034c11) sc_swipe_pane_g2_ParamLimits

0x87f6,	// (0x00034c11) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003c0de) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003c0de) sc_swipe_pane_g

0x8802,	// (0x00034c1d) sc_swipe_pane_t1_ParamLimits

0x8802,	// (0x00034c1d) sc_swipe_pane_t1

0xad37,	// (0x00037152) main_cmail_launcher_pane

0x8817,	// (0x00034c32) aid_size_cell_cmail_l_ParamLimits

0x8817,	// (0x00034c32) aid_size_cell_cmail_l

0x8825,	// (0x00034c40) grid_cmail_l_pane_ParamLimits

0x8825,	// (0x00034c40) grid_cmail_l_pane

0x883f,	// (0x00034c5a) cell_cmail_l_pane_ParamLimits

0x883f,	// (0x00034c5a) cell_cmail_l_pane

0x8859,	// (0x00034c74) cell_cmail_l_pane_g1_ParamLimits

0x8859,	// (0x00034c74) cell_cmail_l_pane_g1

0x8865,	// (0x00034c80) cell_cmail_l_pane_t1_ParamLimits

0x8865,	// (0x00034c80) cell_cmail_l_pane_t1

0x887b,	// (0x00034c96) cell_cmail_l_pane_t2_ParamLimits

0x887b,	// (0x00034c96) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003c0e3) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003c0e3) cell_cmail_l_pane_t

0xc6cc,	// (0x00038ae7) grid_highlight_pane_cp018_ParamLimits

0xc6cc,	// (0x00038ae7) grid_highlight_pane_cp018

0x0253,	// (0x0002c66e) main2_pane_ParamLimits

0x0253,	// (0x0002c66e) main2_pane

0xbc6a,	// (0x00038085) popup_sp_fs_action_menu_bg_pane_g1

0xbc72,	// (0x0003808d) popup_sp_fs_action_menu_bg_pane_g2

0xbc7a,	// (0x00038095) popup_sp_fs_action_menu_bg_pane_g3

0xbc82,	// (0x0003809d) popup_sp_fs_action_menu_bg_pane_g4

0xbc8a,	// (0x000380a5) popup_sp_fs_action_menu_bg_pane_g5

0xbc92,	// (0x000380ad) popup_sp_fs_action_menu_bg_pane_g6

0xbc9a,	// (0x000380b5) popup_sp_fs_action_menu_bg_pane_g7

0xbca2,	// (0x000380bd) popup_sp_fs_action_menu_bg_pane_g8

0xbcaa,	// (0x000380c5) popup_sp_fs_action_menu_bg_pane_g9

0xbcb2,	// (0x000380cd) popup_sp_fs_action_menu_bg_pane_g10

0xbcb2,	// (0x000380cd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003b5a5) popup_sp_fs_action_menu_bg_pane_g

0x2689,	// (0x0002eaa4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_t3_g3_g1

0x2695,	// (0x0002eab0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2695,	// (0x0002eab0) list_medium_line_x2_t3_g3_g2

0x26a1,	// (0x0002eabc) list_medium_line_x2_t3_g3_g3_ParamLimits

0x26a1,	// (0x0002eabc) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003b653) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003b653) list_medium_line_x2_t3_g3_g

0x26ad,	// (0x0002eac8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x26ad,	// (0x0002eac8) list_medium_line_x2_t3_g3_t1

0x26c2,	// (0x0002eadd) list_medium_line_x2_t3_g3_t2_ParamLimits

0x26c2,	// (0x0002eadd) list_medium_line_x2_t3_g3_t2

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003b65a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003b65a) list_medium_line_x2_t3_g3_t

0x2689,	// (0x0002eaa4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_t3_g2_g1

0x26a1,	// (0x0002eabc) list_medium_line_x2_t3_g2_g2_ParamLimits

0x26a1,	// (0x0002eabc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003b661) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003b661) list_medium_line_x2_t3_g2_g

0x26eb,	// (0x0002eb06) list_medium_line_x2_t3_g2_t1_ParamLimits

0x26eb,	// (0x0002eb06) list_medium_line_x2_t3_g2_t1

0x2701,	// (0x0002eb1c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2701,	// (0x0002eb1c) list_medium_line_x2_t3_g2_t2

0x2713,	// (0x0002eb2e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2713,	// (0x0002eb2e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003b666) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003b666) list_medium_line_x2_t3_g2_t

0x2689,	// (0x0002eaa4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_t4_g4_g1

0x2730,	// (0x0002eb4b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2730,	// (0x0002eb4b) list_medium_line_x2_t4_g4_g2

0x2695,	// (0x0002eab0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2695,	// (0x0002eab0) list_medium_line_x2_t4_g4_g3

0x273c,	// (0x0002eb57) list_medium_line_x2_t4_g4_g4_ParamLimits

0x273c,	// (0x0002eb57) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003b66d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003b66d) list_medium_line_x2_t4_g4_g

0x2748,	// (0x0002eb63) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2748,	// (0x0002eb63) list_medium_line_x2_t4_g4_t1

0x2762,	// (0x0002eb7d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2762,	// (0x0002eb7d) list_medium_line_x2_t4_g4_t2

0x2778,	// (0x0002eb93) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2778,	// (0x0002eb93) list_medium_line_x2_t4_g4_t3

0x278d,	// (0x0002eba8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x278d,	// (0x0002eba8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003b676) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003b676) list_medium_line_x2_t4_g4_t

0x2689,	// (0x0002eaa4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_t2_g4_g1

0x2730,	// (0x0002eb4b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2730,	// (0x0002eb4b) list_medium_line_x2_t2_g4_g2

0x2695,	// (0x0002eab0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2695,	// (0x0002eab0) list_medium_line_x2_t2_g4_g3

0x26a1,	// (0x0002eabc) list_medium_line_x2_t2_g4_g4_ParamLimits

0x26a1,	// (0x0002eabc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003b6dd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003b6dd) list_medium_line_x2_t2_g4_g

0x36e9,	// (0x0002fb04) list_medium_line_x2_t2_g4_t1_ParamLimits

0x36e9,	// (0x0002fb04) list_medium_line_x2_t2_g4_t1

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003b6e6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003b6e6) list_medium_line_x2_t2_g4_t

0x2689,	// (0x0002eaa4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_t2_g3_g1

0x2695,	// (0x0002eab0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2695,	// (0x0002eab0) list_medium_line_x2_t2_g3_g2

0x26a1,	// (0x0002eabc) list_medium_line_x2_t2_g3_g3_ParamLimits

0x26a1,	// (0x0002eabc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003b653) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003b653) list_medium_line_x2_t2_g3_g

0x36fe,	// (0x0002fb19) list_medium_line_x2_t2_g3_t1_ParamLimits

0x36fe,	// (0x0002fb19) list_medium_line_x2_t2_g3_t1

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003b6eb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003b6eb) list_medium_line_x2_t2_g3_t

0x381b,	// (0x0002fc36) main_sp_fs_list_pane_ParamLimits

0x381b,	// (0x0002fc36) main_sp_fs_list_pane

0xe0f0,	// (0x0003a50b) sp_fs_scroll_pane_ParamLimits

0xe0f0,	// (0x0003a50b) sp_fs_scroll_pane

0x3827,	// (0x0002fc42) list_medium_line_x2_t3_t1

0x3837,	// (0x0002fc52) list_medium_line_x2_t3_t2

0x3845,	// (0x0002fc60) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003b736) list_medium_line_x2_t3_t

0x3853,	// (0x0002fc6e) list_medium_line_x3_t4_t1

0x3863,	// (0x0002fc7e) list_medium_line_x3_t4_t2

0x3871,	// (0x0002fc8c) list_medium_line_x3_t4_t3

0x3845,	// (0x0002fc60) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003b73d) list_medium_line_x3_t4_t

0x387f,	// (0x0002fc9a) list_medium_line_x4_t5_t1

0x388f,	// (0x0002fcaa) list_medium_line_x4_t5_t2

0x3871,	// (0x0002fc8c) list_medium_line_x4_t5_t3

0x389d,	// (0x0002fcb8) list_medium_line_x4_t5_t4

0x3845,	// (0x0002fc60) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003b746) list_medium_line_x4_t5_t

0x2689,	// (0x0002eaa4) list_medium_line_t4_g4_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_t4_g4_g1

0x38ab,	// (0x0002fcc6) list_medium_line_t4_g4_g2_ParamLimits

0x38ab,	// (0x0002fcc6) list_medium_line_t4_g4_g2

0x38b7,	// (0x0002fcd2) list_medium_line_t4_g4_g3_ParamLimits

0x38b7,	// (0x0002fcd2) list_medium_line_t4_g4_g3

0x26a1,	// (0x0002eabc) list_medium_line_t4_g4_g4_ParamLimits

0x26a1,	// (0x0002eabc) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003b751) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003b751) list_medium_line_t4_g4_g

0x38c3,	// (0x0002fcde) list_medium_line_t4_g4_t1_ParamLimits

0x38c3,	// (0x0002fcde) list_medium_line_t4_g4_t1

0x38d8,	// (0x0002fcf3) list_medium_line_t4_g4_t2_ParamLimits

0x38d8,	// (0x0002fcf3) list_medium_line_t4_g4_t2

0x38ed,	// (0x0002fd08) list_medium_line_t4_g4_t3_ParamLimits

0x38ed,	// (0x0002fd08) list_medium_line_t4_g4_t3

0x26d6,	// (0x0002eaf1) list_medium_line_t4_g4_t4_ParamLimits

0x26d6,	// (0x0002eaf1) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003b75a) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003b75a) list_medium_line_t4_g4_t

0x39b5,	// (0x0002fdd0) chi_dic_find_pane_g1

0x06b8,	// (0x0002cad3) main_tport_pane

0x6783,	// (0x00032b9e) list_medium_line_plain_t1

0x67a9,	// (0x00032bc4) list_medium_line_t2_g2_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_t2_g2_g1

0x67b5,	// (0x00032bd0) list_medium_line_t2_g2_g2_ParamLimits

0x67b5,	// (0x00032bd0) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003be1b) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003be1b) list_medium_line_t2_g2_g

0x67c1,	// (0x00032bdc) list_medium_line_t2_g2_t1_ParamLimits

0x67c1,	// (0x00032bdc) list_medium_line_t2_g2_t1

0x67db,	// (0x00032bf6) list_medium_line_t2_g2_t2_ParamLimits

0x67db,	// (0x00032bf6) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003be20) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003be20) list_medium_line_t2_g2_t

0x6d9a,	// (0x000331b5) aid_sp_fs_list_icon_a_sm

0x6da2,	// (0x000331bd) aid_sp_fs_list_icon_d

0x6daa,	// (0x000331c5) aid_sp_fs_text_primary

0x6db3,	// (0x000331ce) aid_sp_fs_text_secondary

0x6dbc,	// (0x000331d7) list_medium_line

0x6dbc,	// (0x000331d7) list_medium_line_g2

0x6dbc,	// (0x000331d7) list_medium_line_g3

0x6dbc,	// (0x000331d7) list_medium_line_plain

0x6dbc,	// (0x000331d7) list_medium_line_plain_t2

0x6dbc,	// (0x000331d7) list_medium_line_plain_t3

0x6dbc,	// (0x000331d7) list_medium_line_right_icon

0x6dbc,	// (0x000331d7) list_medium_line_right_iconx2

0x6dbc,	// (0x000331d7) list_medium_line_t2

0x6dbc,	// (0x000331d7) list_medium_line_t2_g2

0x6dbc,	// (0x000331d7) list_medium_line_t2_g3

0x6dbc,	// (0x000331d7) list_medium_line_t2_right_icon

0x6dbc,	// (0x000331d7) list_medium_line_t2_right_iconx2

0x6dbc,	// (0x000331d7) list_medium_line_t3

0x6dbc,	// (0x000331d7) list_medium_line_t3_g2

0x6dbc,	// (0x000331d7) list_medium_line_t3_g3

0x6dbc,	// (0x000331d7) list_medium_line_t3_right_iconx2

0x6dc5,	// (0x000331e0) list_medium_line_t4_g4

0x6dce,	// (0x000331e9) list_medium_line_x2

0x6dce,	// (0x000331e9) list_medium_line_x2_t2_g2

0x6dce,	// (0x000331e9) list_medium_line_x2_t2_g3

0x6dce,	// (0x000331e9) list_medium_line_x2_t2_g4

0x6dce,	// (0x000331e9) list_medium_line_x2_t3

0x6dce,	// (0x000331e9) list_medium_line_x2_t3_g2

0x6dce,	// (0x000331e9) list_medium_line_x2_t3_g3

0x6dce,	// (0x000331e9) list_medium_line_x2_t3_g4

0x6dce,	// (0x000331e9) list_medium_line_x2_t4_g2

0x6dce,	// (0x000331e9) list_medium_line_x2_t4_g4

0x6dd7,	// (0x000331f2) list_medium_line_x3

0x6dd7,	// (0x000331f2) list_medium_line_x3_t4

0x6dd7,	// (0x000331f2) list_medium_line_x3_t4_g4

0x6dc5,	// (0x000331e0) list_medium_line_x4_t4

0x6dc5,	// (0x000331e0) list_medium_line_x4_t4_g7

0x6dc5,	// (0x000331e0) list_medium_line_x4_t5

0x6de0,	// (0x000331fb) list_single_fs_dyc_pane_ParamLimits

0x6de0,	// (0x000331fb) list_single_fs_dyc_pane

0x2689,	// (0x0002eaa4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x4_t4_g7_g1

0x79d5,	// (0x00033df0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x79d5,	// (0x00033df0) list_medium_line_x4_t4_g7_g2

0x79e1,	// (0x00033dfc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x79e1,	// (0x00033dfc) list_medium_line_x4_t4_g7_g3

0x79f0,	// (0x00033e0b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x79f0,	// (0x00033e0b) list_medium_line_x4_t4_g7_g4

0x79fc,	// (0x00033e17) list_medium_line_x4_t4_g7_g5_ParamLimits

0x79fc,	// (0x00033e17) list_medium_line_x4_t4_g7_g5

0x7a0b,	// (0x00033e26) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7a0b,	// (0x00033e26) list_medium_line_x4_t4_g7_g6

0x7a1a,	// (0x00033e35) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7a1a,	// (0x00033e35) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003bfeb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003bfeb) list_medium_line_x4_t4_g7_g

0x7a26,	// (0x00033e41) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7a26,	// (0x00033e41) list_medium_line_x4_t4_g7_t1

0x7a3b,	// (0x00033e56) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7a3b,	// (0x00033e56) list_medium_line_x4_t4_g7_t2

0x7a50,	// (0x00033e6b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7a50,	// (0x00033e6b) list_medium_line_x4_t4_g7_t3

0x7a65,	// (0x00033e80) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7a65,	// (0x00033e80) list_medium_line_x4_t4_g7_t4

0x7a77,	// (0x00033e92) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7a77,	// (0x00033e92) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003bffa) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003bffa) list_medium_line_x4_t4_g7_t

0x7a89,	// (0x00033ea4) list_single_dyc_row_pane_ParamLimits

0x7a89,	// (0x00033ea4) list_single_dyc_row_pane

0x8728,	// (0x00034b43) call5_gesture_pane_ParamLimits

0x8728,	// (0x00034b43) call5_gesture_pane

0x877e,	// (0x00034b99) call5_windows_pane_ParamLimits

0x877e,	// (0x00034b99) call5_windows_pane

0x8898,	// (0x00034cb3) call5_swipe_1_pane_cp_ParamLimits

0x8898,	// (0x00034cb3) call5_swipe_1_pane_cp

0x88a4,	// (0x00034cbf) call5_swipe_2_pane_cp_ParamLimits

0x88a4,	// (0x00034cbf) call5_swipe_2_pane_cp

0xbd96,	// (0x000381b1) call5_image_pane_cp

0x88b0,	// (0x00034ccb) popup_call5_audio_first_window_cp_ParamLimits

0x88b0,	// (0x00034ccb) popup_call5_audio_first_window_cp

0x87e9,	// (0x00034c04) call5_swipe_1_pane_g1_cp_ParamLimits

0x87e9,	// (0x00034c04) call5_swipe_1_pane_g1_cp

0x88be,	// (0x00034cd9) call5_swipe_1_pane_g2_cp

0x8802,	// (0x00034c1d) call5_swipe_1_pane_t1_cp_ParamLimits

0x8802,	// (0x00034c1d) call5_swipe_1_pane_t1_cp

0x87e9,	// (0x00034c04) call5_swipe_2_pane_g1_cp_ParamLimits

0x87e9,	// (0x00034c04) call5_swipe_2_pane_g1_cp

0x88c6,	// (0x00034ce1) call5_swipe_2_pane_g2_cp

0x88ce,	// (0x00034ce9) call5_swipe_2_pane_t1_cp_ParamLimits

0x88ce,	// (0x00034ce9) call5_swipe_2_pane_t1_cp

0xc6cc,	// (0x00038ae7) main_sp_fs_email_pane

0x88e3,	// (0x00034cfe) main_sp_fs_listscroll_pane_te

0x88ec,	// (0x00034d07) popup_sp_fs_action_menu_pane_ParamLimits

0x88ec,	// (0x00034d07) popup_sp_fs_action_menu_pane

0xe091,	// (0x0003a4ac) bg_sp_fs_ctrlbar_pane_g1

0x8930,	// (0x00034d4b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x8939,	// (0x00034d54) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x8942,	// (0x00034d5d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe091,	// (0x0003a4ac) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003c0e8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xde76,	// (0x0003a291) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xde76,	// (0x0003a291) bg_sp_fs_ctrlbar_ddmenu_pane

0x894b,	// (0x00034d66) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x894b,	// (0x00034d66) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x8957,	// (0x00034d72) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x8957,	// (0x00034d72) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003c0f1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003c0f1) main_sp_fs_ctrlbar_ddmenu_pane_g

0x8963,	// (0x00034d7e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x8963,	// (0x00034d7e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x897d,	// (0x00034d98) list_medium_line_t2_right_icon_g1

0x8985,	// (0x00034da0) list_medium_line_t2_right_icon_t1

0x8995,	// (0x00034db0) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003c0f6) list_medium_line_t2_right_icon_t

0xdc89,	// (0x0003a0a4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdc89,	// (0x0003a0a4) bg_sp_fs_ctrlbar_pane

0x8a27,	// (0x00034e42) main_sp_fs_ctrlbar_button_pane_cp01

0x8a31,	// (0x00034e4c) main_sp_fs_ctrlbar_ddmenu_pane

0x8a3b,	// (0x00034e56) main_sp_fs_ctrlbar_pane_g1

0x8a47,	// (0x00034e62) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003c0fb) main_sp_fs_ctrlbar_pane_g

0x8a53,	// (0x00034e6e) main_sp_fs_ctrlbar_pane_t1

0x8a68,	// (0x00034e83) main_sp_fs_ctrlbar_pane

0x8aa7,	// (0x00034ec2) main_sp_fs_listscroll_pane_te_cp01

0x8ac7,	// (0x00034ee2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8ac7,	// (0x00034ee2) popup_sp_fs_action_menu_pane_cp01

0xc6cc,	// (0x00038ae7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc6cc,	// (0x00038ae7) bg_sp_fs_highlight_list_pane_cp01

0x8af7,	// (0x00034f12) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8af7,	// (0x00034f12) sp_fs_action_menu_list_gene_pane_g1

0x8b06,	// (0x00034f21) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x8b06,	// (0x00034f21) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003c105) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003c105) sp_fs_action_menu_list_gene_pane_g

0x8b13,	// (0x00034f2e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8b13,	// (0x00034f2e) sp_fs_action_menu_list_gene_pane_t1

0x8b2b,	// (0x00034f46) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8b2b,	// (0x00034f46) sp_fs_action_menu_list_gene_pane

0x8b4c,	// (0x00034f67) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x8b4c,	// (0x00034f67) popup_sp_fs_action_menu_bg_pane

0x8b5a,	// (0x00034f75) sp_fs_action_menu_list_pane_ParamLimits

0x8b5a,	// (0x00034f75) sp_fs_action_menu_list_pane

0x8b7c,	// (0x00034f97) sp_fs_scroll_pane_cp01_ParamLimits

0x8b7c,	// (0x00034f97) sp_fs_scroll_pane_cp01

0x8ba2,	// (0x00034fbd) list_medium_line_plain_t2_t1

0x8bb2,	// (0x00034fcd) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003c10a) list_medium_line_plain_t2_t

0x8bc2,	// (0x00034fdd) list_medium_line_plain_t3_t1

0x8bd2,	// (0x00034fed) list_medium_line_plain_t3_t2

0x8be0,	// (0x00034ffb) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003c10f) list_medium_line_plain_t3_t

0x2689,	// (0x0002eaa4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_t2_g2_g1

0x26a1,	// (0x0002eabc) list_medium_line_x2_t2_g2_g2_ParamLimits

0x26a1,	// (0x0002eabc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003b661) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003b661) list_medium_line_x2_t2_g2_g

0x38c3,	// (0x0002fcde) list_medium_line_x2_t2_g2_t1_ParamLimits

0x38c3,	// (0x0002fcde) list_medium_line_x2_t2_g2_t1

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003c116) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003c116) list_medium_line_x2_t2_g2_t

0x2689,	// (0x0002eaa4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_t4_g2_g1

0x26a1,	// (0x0002eabc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x26a1,	// (0x0002eabc) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003b661) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003b661) list_medium_line_x2_t4_g2_g

0x8bee,	// (0x00035009) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8bee,	// (0x00035009) list_medium_line_x2_t4_g2_t1

0x8c08,	// (0x00035023) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8c08,	// (0x00035023) list_medium_line_x2_t4_g2_t2

0x8c1e,	// (0x00035039) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8c1e,	// (0x00035039) list_medium_line_x2_t4_g2_t3

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003c11b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003c11b) list_medium_line_x2_t4_g2_t

0x8c33,	// (0x0003504e) list_medium_line_t3_right_iconx2_g1

0x897d,	// (0x00034d98) list_medium_line_t3_right_iconx2_g2

0x8c3b,	// (0x00035056) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003c124) list_medium_line_t3_right_iconx2_g

0x8c45,	// (0x00035060) list_medium_line_t3_right_iconx2_t1

0x8c55,	// (0x00035070) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003c12b) list_medium_line_t3_right_iconx2_t

0x2689,	// (0x0002eaa4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x3_t4_g4_g1

0x2695,	// (0x0002eab0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2695,	// (0x0002eab0) list_medium_line_x3_t4_g4_g2

0x38ab,	// (0x0002fcc6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x38ab,	// (0x0002fcc6) list_medium_line_x3_t4_g4_g3

0x8c63,	// (0x0003507e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8c63,	// (0x0003507e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003c130) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003c130) list_medium_line_x3_t4_g4_g

0x8c6f,	// (0x0003508a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8c6f,	// (0x0003508a) list_medium_line_x3_t4_g4_t1

0x8c86,	// (0x000350a1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8c86,	// (0x000350a1) list_medium_line_x3_t4_g4_t2

0x38d8,	// (0x0002fcf3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x38d8,	// (0x0002fcf3) list_medium_line_x3_t4_g4_t3

0x8ca1,	// (0x000350bc) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8ca1,	// (0x000350bc) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003c139) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003c139) list_medium_line_x3_t4_g4_t

0x8cbe,	// (0x000350d9) list_single_dyc_row_text_pane_t1_ParamLimits

0x8cbe,	// (0x000350d9) list_single_dyc_row_text_pane_t1

0x8d07,	// (0x00035122) list_single_dyc_row_text_pane_t2_ParamLimits

0x8d07,	// (0x00035122) list_single_dyc_row_text_pane_t2

0x8d7d,	// (0x00035198) list_single_dyc_row_text_pane_t3_ParamLimits

0x8d7d,	// (0x00035198) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003c142) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003c142) list_single_dyc_row_text_pane_t

0x8e60,	// (0x0003527b) list_single_dyc_row_pane_g1_ParamLimits

0x8e60,	// (0x0003527b) list_single_dyc_row_pane_g1

0x8e6c,	// (0x00035287) list_single_dyc_row_pane_g2_ParamLimits

0x8e6c,	// (0x00035287) list_single_dyc_row_pane_g2

0x8e78,	// (0x00035293) list_single_dyc_row_pane_g3_ParamLimits

0x8e78,	// (0x00035293) list_single_dyc_row_pane_g3

0x8e84,	// (0x0003529f) list_single_dyc_row_pane_g4_ParamLimits

0x8e84,	// (0x0003529f) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003c14f) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003c14f) list_single_dyc_row_pane_g

0x8e90,	// (0x000352ab) list_single_dyc_row_text_pane_ParamLimits

0x8e90,	// (0x000352ab) list_single_dyc_row_text_pane

0xad01,	// (0x0003711c) bg_sp_fs_scroll_pane

0x8eaf,	// (0x000352ca) thumb_sp_fs_scroll_pane

0x67a9,	// (0x00032bc4) list_medium_line_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_g1

0x8eb8,	// (0x000352d3) list_medium_line_t1_ParamLimits

0x8eb8,	// (0x000352d3) list_medium_line_t1

0x2689,	// (0x0002eaa4) list_medium_line_x2_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_g1

0x2695,	// (0x0002eab0) list_medium_line_x2_g2_ParamLimits

0x2695,	// (0x0002eab0) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003c158) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003c158) list_medium_line_x2_g

0x8ecd,	// (0x000352e8) list_medium_line_x2_t1_ParamLimits

0x8ecd,	// (0x000352e8) list_medium_line_x2_t1

0x2689,	// (0x0002eaa4) list_medium_line_x3_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x3_g1

0x2695,	// (0x0002eab0) list_medium_line_x3_g2_ParamLimits

0x2695,	// (0x0002eab0) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003c158) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003c158) list_medium_line_x3_g

0x8ecd,	// (0x000352e8) list_medium_line_x3_t1_ParamLimits

0x8ecd,	// (0x000352e8) list_medium_line_x3_t1

0x8ee3,	// (0x000352fe) thumb_sp_fs_scroll_pane_g1

0x8eec,	// (0x00035307) thumb_sp_fs_scroll_pane_g2

0x8ef5,	// (0x00035310) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003c15d) thumb_sp_fs_scroll_pane_g

0x8ee3,	// (0x000352fe) bg_sp_fs_scroll_pane_g1

0x8eec,	// (0x00035307) bg_sp_fs_scroll_pane_g2

0x8ef5,	// (0x00035310) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003c15d) bg_sp_fs_scroll_pane_g

0x2689,	// (0x0002eaa4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2689,	// (0x0002eaa4) list_medium_line_x2_t3_g4_g1

0x2730,	// (0x0002eb4b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2730,	// (0x0002eb4b) list_medium_line_x2_t3_g4_g2

0x2695,	// (0x0002eab0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2695,	// (0x0002eab0) list_medium_line_x2_t3_g4_g3

0x26a1,	// (0x0002eabc) list_medium_line_x2_t3_g4_g4_ParamLimits

0x26a1,	// (0x0002eabc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003b6dd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003b6dd) list_medium_line_x2_t3_g4_g

0x8efe,	// (0x00035319) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8efe,	// (0x00035319) list_medium_line_x2_t3_g4_t1

0x8f18,	// (0x00035333) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8f18,	// (0x00035333) list_medium_line_x2_t3_g4_t2

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x26d6,	// (0x0002eaf1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003c164) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003c164) list_medium_line_x2_t3_g4_t

0x67a9,	// (0x00032bc4) list_medium_line_g2_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_g2_g1

0x67b5,	// (0x00032bd0) list_medium_line_g2_g2_ParamLimits

0x67b5,	// (0x00032bd0) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003be1b) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003be1b) list_medium_line_g2_g

0x8f32,	// (0x0003534d) list_medium_line_g2_t1_ParamLimits

0x8f32,	// (0x0003534d) list_medium_line_g2_t1

0x67a9,	// (0x00032bc4) list_medium_line_t3_g2_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_t3_g2_g1

0x67b5,	// (0x00032bd0) list_medium_line_t3_g2_g2_ParamLimits

0x67b5,	// (0x00032bd0) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003be1b) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003be1b) list_medium_line_t3_g2_g

0x8f47,	// (0x00035362) list_medium_line_t3_g2_t1_ParamLimits

0x8f47,	// (0x00035362) list_medium_line_t3_g2_t1

0x8f61,	// (0x0003537c) list_medium_line_t3_g2_t2_ParamLimits

0x8f61,	// (0x0003537c) list_medium_line_t3_g2_t2

0x8f77,	// (0x00035392) list_medium_line_t3_g2_t3_ParamLimits

0x8f77,	// (0x00035392) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003c16b) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003c16b) list_medium_line_t3_g2_t

0x897d,	// (0x00034d98) list_medium_line_right_icon_g1

0x8f91,	// (0x000353ac) list_medium_line_right_icon_t1

0x67a9,	// (0x00032bc4) list_medium_line_t2_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_t2_g1

0x8f9f,	// (0x000353ba) list_medium_line_t2_t1_ParamLimits

0x8f9f,	// (0x000353ba) list_medium_line_t2_t1

0x8fb9,	// (0x000353d4) list_medium_line_t2_t2_ParamLimits

0x8fb9,	// (0x000353d4) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003c172) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003c172) list_medium_line_t2_t

0x67a9,	// (0x00032bc4) list_medium_line_t3_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_t3_g1

0x8fd2,	// (0x000353ed) list_medium_line_t3_t1_ParamLimits

0x8fd2,	// (0x000353ed) list_medium_line_t3_t1

0x8fec,	// (0x00035407) list_medium_line_t3_t2_ParamLimits

0x8fec,	// (0x00035407) list_medium_line_t3_t2

0x9002,	// (0x0003541d) list_medium_line_t3_t3_ParamLimits

0x9002,	// (0x0003541d) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003c177) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003c177) list_medium_line_t3_t

0x67a9,	// (0x00032bc4) list_medium_line_g3_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_g3_g1

0x9017,	// (0x00035432) list_medium_line_g3_g2_ParamLimits

0x9017,	// (0x00035432) list_medium_line_g3_g2

0x67b5,	// (0x00032bd0) list_medium_line_g3_g3_ParamLimits

0x67b5,	// (0x00032bd0) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003c17e) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003c17e) list_medium_line_g3_g

0x9023,	// (0x0003543e) list_medium_line_g3_t1_ParamLimits

0x9023,	// (0x0003543e) list_medium_line_g3_t1

0x67a9,	// (0x00032bc4) list_medium_line_t2_g3_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_t2_g3_g1

0x9017,	// (0x00035432) list_medium_line_t2_g3_g2_ParamLimits

0x9017,	// (0x00035432) list_medium_line_t2_g3_g2

0x67b5,	// (0x00032bd0) list_medium_line_t2_g3_g3_ParamLimits

0x67b5,	// (0x00032bd0) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003c17e) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003c17e) list_medium_line_t2_g3_g

0x9038,	// (0x00035453) list_medium_line_t2_g3_t1_ParamLimits

0x9038,	// (0x00035453) list_medium_line_t2_g3_t1

0x9052,	// (0x0003546d) list_medium_line_t2_g3_t2_ParamLimits

0x9052,	// (0x0003546d) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003c185) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003c185) list_medium_line_t2_g3_t

0x67a9,	// (0x00032bc4) list_medium_line_t3_g3_g1_ParamLimits

0x67a9,	// (0x00032bc4) list_medium_line_t3_g3_g1

0x9017,	// (0x00035432) list_medium_line_t3_g3_g2_ParamLimits

0x9017,	// (0x00035432) list_medium_line_t3_g3_g2

0x67b5,	// (0x00032bd0) list_medium_line_t3_g3_g3_ParamLimits

0x67b5,	// (0x00032bd0) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003c17e) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003c17e) list_medium_line_t3_g3_g

0x9070,	// (0x0003548b) list_medium_line_t3_g3_t1_ParamLimits

0x9070,	// (0x0003548b) list_medium_line_t3_g3_t1

0x9089,	// (0x000354a4) list_medium_line_t3_g3_t2_ParamLimits

0x9089,	// (0x000354a4) list_medium_line_t3_g3_t2

0x909f,	// (0x000354ba) list_medium_line_t3_g3_t3_ParamLimits

0x909f,	// (0x000354ba) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003c18a) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003c18a) list_medium_line_t3_g3_t

0x8c33,	// (0x0003504e) list_medium_line_right_iconx2_g1

0x897d,	// (0x00034d98) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003c191) list_medium_line_right_iconx2_g

0x90b9,	// (0x000354d4) list_medium_line_right_iconx2_t1

0x8c33,	// (0x0003504e) list_medium_line_t2_right_iconx2_g1

0x897d,	// (0x00034d98) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003c191) list_medium_line_t2_right_iconx2_g

0x90c7,	// (0x000354e2) list_medium_line_t2_right_iconx2_t1

0x90d7,	// (0x000354f2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003c196) list_medium_line_t2_right_iconx2_t

0x90e9,	// (0x00035504) list_medium_line_x4_t4_t1

0x90f7,	// (0x00035512) list_medium_line_x4_t4_t2

0x9107,	// (0x00035522) list_medium_line_x4_t4_t3

0x9117,	// (0x00035532) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003c19b) list_medium_line_x4_t4_t

0x916a,	// (0x00035585) tport_appsw_pane_ParamLimits

0x916a,	// (0x00035585) tport_appsw_pane

0x9182,	// (0x0003559d) tport_contact_pane_ParamLimits

0x9182,	// (0x0003559d) tport_contact_pane

0x919a,	// (0x000355b5) tport_listscroll_pane_ParamLimits

0x919a,	// (0x000355b5) tport_listscroll_pane

0x91b4,	// (0x000355cf) cell_tport_appsw_pane_ParamLimits

0x91b4,	// (0x000355cf) cell_tport_appsw_pane

0xeae2,	// (0x0003aefd) tport_appsw_pane_g1_ParamLimits

0xeae2,	// (0x0003aefd) tport_appsw_pane_g1

0x91f4,	// (0x0003560f) tport_contact_pane_g1

0x7d52,	// (0x0003416d) tport_contact_pane_t1

0x91fd,	// (0x00035618) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003c1a4) tport_contact_pane_t

0x920b,	// (0x00035626) list_tport_pane

0x9214,	// (0x0003562f) scroll_pane_cp_030

0x9225,	// (0x00035640) cell_tport_appsw_pane_g1

0x9235,	// (0x00035650) cell_tport_appsw_pane_t1

0x9243,	// (0x0003565e) grid_highlight_pane_cp019

0x924b,	// (0x00035666) list_tport_double_graphic_pane_ParamLimits

0x924b,	// (0x00035666) list_tport_double_graphic_pane

0xc6cc,	// (0x00038ae7) list_highlight_pane_cp023_ParamLimits

0xc6cc,	// (0x00038ae7) list_highlight_pane_cp023

0x9258,	// (0x00035673) list_tport_double_graphic_pane_g1_ParamLimits

0x9258,	// (0x00035673) list_tport_double_graphic_pane_g1

0x9265,	// (0x00035680) list_tport_double_graphic_pane_t1_ParamLimits

0x9265,	// (0x00035680) list_tport_double_graphic_pane_t1

0x927a,	// (0x00035695) list_tport_double_graphic_pane_t2_ParamLimits

0x927a,	// (0x00035695) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003c1b0) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003c1b0) list_tport_double_graphic_pane_t

0xad01,	// (0x0003711c) main_cale_note_pane

0x16d2,	// (0x0002daed) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x16d2,	// (0x0002daed) cell_vitu2_function_top_wide_pane_cp01

0x80f6,	// (0x00034511) wait_bar_pane_cp05_ParamLimits

0xc6cc,	// (0x00038ae7) listscroll_cmail_pane

0x928c,	// (0x000356a7) list_cmail_pane

0x929c,	// (0x000356b7) list_cmail_body_pane

0x92b1,	// (0x000356cc) list_single_cmail_header_caption_pane

0x92c7,	// (0x000356e2) list_single_cmail_header_detail_pane_ParamLimits

0x92c7,	// (0x000356e2) list_single_cmail_header_detail_pane

0x92f0,	// (0x0003570b) list_single_cmail_header_caption_pane_t1

0x9307,	// (0x00035722) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9307,	// (0x00035722) list_single_cmail_header_detail_pane_g1

0x931f,	// (0x0003573a) list_single_cmail_header_detail_pane_g2_ParamLimits

0x931f,	// (0x0003573a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003c1b5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003c1b5) list_single_cmail_header_detail_pane_g

0x9338,	// (0x00035753) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9338,	// (0x00035753) list_single_cmail_header_detail_pane_t1

0x9398,	// (0x000357b3) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9398,	// (0x000357b3) list_single_cmail_header_editor_pane_bg

0x7f62,	// (0x0003437d) list_cmail_body_pane_g1

0x93af,	// (0x000357ca) list_cmail_body_pane_t1

0xeb1f,	// (0x0003af3a) list_single_cmail_header_editor_pane_bg_g1

0xbfef,	// (0x0003840a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeb2f,	// (0x0003af4a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeb27,	// (0x0003af42) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed73,	// (0x0003b18e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeb4f,	// (0x0003af6a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeb3f,	// (0x0003af5a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeb47,	// (0x0003af62) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xbfcf,	// (0x000383ea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93bd,	// (0x000357d8) calenote_gesture_pane_ParamLimits

0x93bd,	// (0x000357d8) calenote_gesture_pane

0x93dd,	// (0x000357f8) calenote_window_pane_ParamLimits

0x93dd,	// (0x000357f8) calenote_window_pane

0x93f9,	// (0x00035814) popup_note_window_cp01

0x9402,	// (0x0003581d) calenote_swipe_1_pane_ParamLimits

0x9402,	// (0x0003581d) calenote_swipe_1_pane

0x88a4,	// (0x00034cbf) calenote_swipe_2_pane_ParamLimits

0x88a4,	// (0x00034cbf) calenote_swipe_2_pane

0x87e9,	// (0x00034c04) calenote_swipe_1_pane_g1_ParamLimits

0x87e9,	// (0x00034c04) calenote_swipe_1_pane_g1

0x87f6,	// (0x00034c11) calenote_swipe_1_pane_g2_ParamLimits

0x87f6,	// (0x00034c11) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003c0de) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003c0de) calenote_swipe_1_pane_g

0x9420,	// (0x0003583b) calenote_swipe_1_pane_t1_ParamLimits

0x9420,	// (0x0003583b) calenote_swipe_1_pane_t1

0x87e9,	// (0x00034c04) calenote_swipe_2_pane_g1_ParamLimits

0x87e9,	// (0x00034c04) calenote_swipe_2_pane_g1

0x943f,	// (0x0003585a) calenote_swipe_2_pane_g2_ParamLimits

0x943f,	// (0x0003585a) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003c1c1) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003c1c1) calenote_swipe_2_pane_g

0x944b,	// (0x00035866) calenote_swipe_2_pane_t1_ParamLimits

0x944b,	// (0x00035866) calenote_swipe_2_pane_t1

0xad01,	// (0x0003711c) main_mup_navstr_pane

0x561c,	// (0x00031a37) main_mup3_pane_t7_ParamLimits

0x561c,	// (0x00031a37) main_mup3_pane_t7

0xb5e5,	// (0x00037a00) main_mp4_pane_g6_ParamLimits

0xb5e5,	// (0x00037a00) main_mp4_pane_g6

0xb789,	// (0x00037ba4) main_image3_pane_t4_ParamLimits

0xb789,	// (0x00037ba4) main_image3_pane_t4

0x9472,	// (0x0003588d) popup_navstr_preview_pane_ParamLimits

0x9472,	// (0x0003588d) popup_navstr_preview_pane

0x9486,	// (0x000358a1) scroll_navstr_pane_ParamLimits

0x9486,	// (0x000358a1) scroll_navstr_pane

0xad01,	// (0x0003711c) bg_popup_preview_window_pane_cp04

0x949a,	// (0x000358b5) popup_navstr_preview_pane_t1

0x94a8,	// (0x000358c3) scroll_navstr_pane_g1_ParamLimits

0x94a8,	// (0x000358c3) scroll_navstr_pane_g1

0x94bc,	// (0x000358d7) scroll_navstr_pane_t1_ParamLimits

0x94bc,	// (0x000358d7) scroll_navstr_pane_t1

0x9417,	// (0x00035832) bg_button_pane_cp014

0x9417,	// (0x00035832) bg_button_pane_cp030

0x86ce,	// (0x00034ae9) list_double_fisheye_pane_g4_ParamLimits

0x86ce,	// (0x00034ae9) list_double_fisheye_pane_g4

0x86da,	// (0x00034af5) list_double_fisheye_pane_g5_ParamLimits

0x86da,	// (0x00034af5) list_double_fisheye_pane_g5

0xe0f0,	// (0x0003a50b) sp_fs_scroll_pane_cp03

0x8a3b,	// (0x00034e56) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x8a47,	// (0x00034e62) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003c0fb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8a53,	// (0x00034e6e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9294,	// (0x000356af) sp_fs_scroll_pane_cp02

0xbcd5,	// (0x000380f0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbcd5,	// (0x000380f0) popup_sp_fs_calendar_preview_list_single_pane

0xad01,	// (0x0003711c) main_cam6_pano_pane

0xad29,	// (0x00037144) main_mup3_pane_ParamLimits

0xad01,	// (0x0003711c) main_phacti_pane

0x7fc9,	// (0x000343e4) bg_button_pane_cp11

0x7fe3,	// (0x000343fe) main_mobtv_info_pane_g2_ParamLimits

0x7fe3,	// (0x000343fe) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003c05b) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003c05b) main_mobtv_info_pane_g

0x8266,	// (0x00034681) sc_clock_pane_t5_ParamLimits

0x8266,	// (0x00034681) sc_clock_pane_t5

0x848a,	// (0x000348a5) main_radioblah_pane_g1_ParamLimits

0x84d0,	// (0x000348eb) main_radioblah_pane_t3_ParamLimits

0x84d0,	// (0x000348eb) main_radioblah_pane_t3

0x84e8,	// (0x00034903) main_radioblah_pane_t4_ParamLimits

0x84e8,	// (0x00034903) main_radioblah_pane_t4

0x8516,	// (0x00034931) main_radioblah_text_pane_ParamLimits

0x8516,	// (0x00034931) main_radioblah_text_pane

0x8528,	// (0x00034943) main_radioblah_info_pane_g1_ParamLimits

0x85fb,	// (0x00034a16) main_radioblah_info_pane_t4_ParamLimits

0x85fb,	// (0x00034a16) main_radioblah_info_pane_t4

0xc6cc,	// (0x00038ae7) main_sp_fs_calendar_pane

0x94d3,	// (0x000358ee) main_phacti_pane_g1

0x94e4,	// (0x000358ff) phacti_note_pane_ParamLimits

0x94e4,	// (0x000358ff) phacti_note_pane

0x94f8,	// (0x00035913) phacti_term_pane_ParamLimits

0x94f8,	// (0x00035913) phacti_term_pane

0x950d,	// (0x00035928) phacti_note_pane_t1_ParamLimits

0x950d,	// (0x00035928) phacti_note_pane_t1

0x9524,	// (0x0003593f) phacti_term_pane_g1

0x952c,	// (0x00035947) phacti_term_pane_t1_ParamLimits

0x952c,	// (0x00035947) phacti_term_pane_t1

0x9556,	// (0x00035971) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbd74,	// (0x0003818f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003c1cb) popup_sp_fs_calendar_preview_list_single_pane_g

0x955e,	// (0x00035979) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x955e,	// (0x00035979) popup_sp_fs_calendar_preview_list_single_pane_t1

0x9574,	// (0x0003598f) aid_popup_sp_fs_bg_corner_pane

0xe091,	// (0x0003a4ac) popup_sp_fs_calendar_preview_bg_pane_g1

0xad01,	// (0x0003711c) popup_sp_fs_calendar_preview_bg_pane

0x957c,	// (0x00035997) popup_sp_fs_calendar_preview_list_pane

0xdc89,	// (0x0003a0a4) bg_main_sp_fs_cale_pane_ParamLimits

0xdc89,	// (0x0003a0a4) bg_main_sp_fs_cale_pane

0x95ee,	// (0x00035a09) listscroll_cale_mrui_pane_ParamLimits

0x95ee,	// (0x00035a09) listscroll_cale_mrui_pane

0xeba3,	// (0x0003afbe) listscroll_sp_fs_schedule_track_pane

0x9603,	// (0x00035a1e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x9603,	// (0x00035a1e) main_sp_fs_ctrlbar_pane_cp01

0x9616,	// (0x00035a31) main_sp_fs_ribbon_pane

0x961e,	// (0x00035a39) popup_sp_fs_cale_preview_window

0x9630,	// (0x00035a4b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9630,	// (0x00035a4b) list_single_sp_fs_schedule_track_pane

0xc6cc,	// (0x00038ae7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc6cc,	// (0x00038ae7) bg_sp_fs_highlight_list_pane_cp03

0x9643,	// (0x00035a5e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9643,	// (0x00035a5e) list_single_sp_fs_schedule_track_pane_g1

0x964f,	// (0x00035a6a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x964f,	// (0x00035a6a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003c1d0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003c1d0) list_single_sp_fs_schedule_track_pane_g

0x965b,	// (0x00035a76) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x965b,	// (0x00035a76) list_single_sp_fs_schedule_track_pane_t1

0x9675,	// (0x00035a90) sp_fs_schedule_track_pane_ParamLimits

0x9675,	// (0x00035a90) sp_fs_schedule_track_pane

0x9686,	// (0x00035aa1) sp_fs_schedule_track_pane_g1

0x968e,	// (0x00035aa9) sp_fs_schedule_track_pane_g2

0x9696,	// (0x00035ab1) sp_fs_schedule_track_pane_g3

0x969e,	// (0x00035ab9) sp_fs_schedule_track_pane_g4

0x96a6,	// (0x00035ac1) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003c1d5) sp_fs_schedule_track_pane_g

0xeb1f,	// (0x0003af3a) bg_sp_fs_schedule_viewer_highlight_g1

0xbfef,	// (0x0003840a) bg_sp_fs_schedule_viewer_highlight_g2

0xeb27,	// (0x0003af42) bg_sp_fs_schedule_viewer_highlight_g3

0xeb2f,	// (0x0003af4a) bg_sp_fs_schedule_viewer_highlight_g4

0xed73,	// (0x0003b18e) bg_sp_fs_schedule_viewer_highlight_g5

0xeb3f,	// (0x0003af5a) bg_sp_fs_schedule_viewer_highlight_g6

0xeb47,	// (0x0003af62) bg_sp_fs_schedule_viewer_highlight_g7

0xeb4f,	// (0x0003af6a) bg_sp_fs_schedule_viewer_highlight_g8

0xbfcf,	// (0x000383ea) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003c1e0) bg_sp_fs_schedule_viewer_highlight_g

0xad01,	// (0x0003711c) bg_main_sp_fs_ribbon_pane

0x96ae,	// (0x00035ac9) main_sp_fs_ribbon_pane_g1

0x96b7,	// (0x00035ad2) main_sp_fs_ribbon_pane_t1

0x96c6,	// (0x00035ae1) main_sp_fs_ribbon_pane_t2

0x96d5,	// (0x00035af0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003c1f3) main_sp_fs_ribbon_pane_t

0x96e4,	// (0x00035aff) main_sp_fs_ribbon_scheduler_pane

0x96ec,	// (0x00035b07) bg_main_sp_fs_ribbon_pane_g1

0x96f5,	// (0x00035b10) bg_main_sp_fs_ribbon_pane_g2

0x96fe,	// (0x00035b19) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003c1fa) bg_main_sp_fs_ribbon_pane_g

0x9706,	// (0x00035b21) main_sp_fs_ribbon_scheduler_pane_g1

0x970f,	// (0x00035b2a) main_sp_fs_ribbon_scheduler_pane_g2

0x9718,	// (0x00035b33) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003c201) main_sp_fs_ribbon_scheduler_pane_g

0x9721,	// (0x00035b3c) list_cale_mrui_pane

0x972e,	// (0x00035b49) sp_fs_scroll_pane_cp07_ParamLimits

0x972e,	// (0x00035b49) sp_fs_scroll_pane_cp07

0x974a,	// (0x00035b65) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x974a,	// (0x00035b65) bg_sp_fs_schedule_viewer_highlight

0x975a,	// (0x00035b75) list_single_sp_fs_schedule_track_pane_cp01

0x9762,	// (0x00035b7d) list_sp_fs_schedule_track_pane

0x976a,	// (0x00035b85) sp_fs_scroll_pane_cp06_ParamLimits

0x976a,	// (0x00035b85) sp_fs_scroll_pane_cp06

0xe091,	// (0x0003a4ac) bgmain_sp_fs_calendar_pane_g1

0x977c,	// (0x00035b97) list_single_cale_mrui_pane_ParamLimits

0x977c,	// (0x00035b97) list_single_cale_mrui_pane

0x979d,	// (0x00035bb8) list_single_cale_mrui_row_pane_ParamLimits

0x979d,	// (0x00035bb8) list_single_cale_mrui_row_pane

0x97aa,	// (0x00035bc5) list_single_cale_mrui_row_pane_g1_ParamLimits

0x97aa,	// (0x00035bc5) list_single_cale_mrui_row_pane_g1

0x97ef,	// (0x00035c0a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x97ef,	// (0x00035c0a) list_single_cale_mrui_row_pane_t1

0x9801,	// (0x00035c1c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9801,	// (0x00035c1c) list_single_cale_mrui_row_pane_t2

0x9869,	// (0x00035c84) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9869,	// (0x00035c84) list_single_cale_mrui_row_pane_t3

0x9898,	// (0x00035cb3) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9898,	// (0x00035cb3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003c20f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003c20f) list_single_cale_mrui_row_pane_t

0x98c7,	// (0x00035ce2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x98c7,	// (0x00035ce2) list_single_cmail_header_editor_pane_bg_cp01

0x98ed,	// (0x00035d08) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x98ed,	// (0x00035d08) list_single_cmail_header_editor_pane_bg_cp02

0x990d,	// (0x00035d28) main_radioblah_text_pane_t1_ParamLimits

0x990d,	// (0x00035d28) main_radioblah_text_pane_t1

0x9927,	// (0x00035d42) cam6_indi_pane_cp01

0x992f,	// (0x00035d4a) cam6_mode_pane_cp01

0x9937,	// (0x00035d52) cam6_pano_pane

0x9940,	// (0x00035d5b) cam6_zoom_pane_cp01

0x9948,	// (0x00035d63) cam6_pano_image_pane

0x9953,	// (0x00035d6e) cam6_pano_pane_g1

0x7f62,	// (0x0003437d) cam6_pano_pane_g2

0x995c,	// (0x00035d77) cam6_pano_pane_g3

0x9965,	// (0x00035d80) cam6_pano_pane_g4

0xe695,	// (0x0003aab0) cam6_pano_pane_g5

0x996e,	// (0x00035d89) cam6_pano_pane_g6

0x9978,	// (0x00035d93) cam6_pano_pane_g7

0x9980,	// (0x00035d9b) cam6_pano_pane_g8

0x9989,	// (0x00035da4) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003c218) cam6_pano_pane_g

0xad01,	// (0x0003711c) main_browser_tag_pane

0x946a,	// (0x00035885) grid_navstr_albumart_pane

0x9994,	// (0x00035daf) cell_navstr_albumart_pane_ParamLimits

0x9994,	// (0x00035daf) cell_navstr_albumart_pane

0x99b4,	// (0x00035dcf) cell_navstr_albumart_pane_g1

0xda9a,	// (0x00039eb5) cell_navstr_albumart_pane_g2

0xdaaa,	// (0x00039ec5) cell_navstr_albumart_pane_g3

0xdaa2,	// (0x00039ebd) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003c22b) cell_navstr_albumart_pane_g

0x99bc,	// (0x00035dd7) bt_list_pane_ParamLimits

0x99bc,	// (0x00035dd7) bt_list_pane

0x99d0,	// (0x00035deb) bt_list_pane_t1

0x99df,	// (0x00035dfa) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003c234) bt_list_pane_t

0xad01,	// (0x0003711c) main_cale_prevew_pane

0x99ee,	// (0x00035e09) popup_cale_preview_window_ParamLimits

0x99ee,	// (0x00035e09) popup_cale_preview_window

0xc6cc,	// (0x00038ae7) bg_popup_preview_window_pane_cp05_ParamLimits

0xc6cc,	// (0x00038ae7) bg_popup_preview_window_pane_cp05

0x9a09,	// (0x00035e24) list_cale_preview_pane_ParamLimits

0x9a09,	// (0x00035e24) list_cale_preview_pane

0x9a15,	// (0x00035e30) list_double_cale_preview_pane_ParamLimits

0x9a15,	// (0x00035e30) list_double_cale_preview_pane

0x9a27,	// (0x00035e42) list_single_cale_preview_pane_ParamLimits

0x9a27,	// (0x00035e42) list_single_cale_preview_pane

0x9a3d,	// (0x00035e58) list_single_cale_preview_pane_g1

0x9a45,	// (0x00035e60) list_single_cale_preview_pane_t1_ParamLimits

0x9a45,	// (0x00035e60) list_single_cale_preview_pane_t1

0x9a5a,	// (0x00035e75) list_double_cale_preview_pane_g1

0x9a62,	// (0x00035e7d) list_double_cale_preview_pane_t1_ParamLimits

0x9a62,	// (0x00035e7d) list_double_cale_preview_pane_t1

0x9a77,	// (0x00035e92) list_double_cale_preview_pane_t2_ParamLimits

0x9a77,	// (0x00035e92) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003c239) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003c239) list_double_cale_preview_pane_t

0xad01,	// (0x0003711c) main_ezdial_pane

0xc6cc,	// (0x00038ae7) main_sp_fs_email_pane_ParamLimits

0x89a7,	// (0x00034dc2) cmail_ddmenu_btn01_pane_ParamLimits

0x89a7,	// (0x00034dc2) cmail_ddmenu_btn01_pane

0x89ba,	// (0x00034dd5) cmail_ddmenu_btn02_pane_ParamLimits

0x89ba,	// (0x00034dd5) cmail_ddmenu_btn02_pane

0x8a15,	// (0x00034e30) cmail_ddmenu_btn03_pane_ParamLimits

0x8a15,	// (0x00034e30) cmail_ddmenu_btn03_pane

0x8a68,	// (0x00034e83) main_sp_fs_ctrlbar_pane_ParamLimits

0x8aa7,	// (0x00034ec2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x929c,	// (0x000356b7) list_cmail_body_pane_ParamLimits

0x92fe,	// (0x00035719) bg_button_pane_cp12

0x932b,	// (0x00035746) list_single_cmail_header_detail_pane_g3_ParamLimits

0x932b,	// (0x00035746) list_single_cmail_header_detail_pane_g3

0x9374,	// (0x0003578f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9374,	// (0x0003578f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003c1bc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003c1bc) list_single_cmail_header_detail_pane_t

0x9541,	// (0x0003595c) phacti_term_pane_t2_ParamLimits

0x9541,	// (0x0003595c) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003c1c6) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003c1c6) phacti_term_pane_t

0x9a8f,	// (0x00035eaa) aid_size_list_single_double

0x9a9b,	// (0x00035eb6) popup_ezdial_listscroll_window

0x9ab7,	// (0x00035ed2) popup_number_entry_window_cp01

0xbd96,	// (0x000381b1) bg_popup_call_pane_cp09

0x9ac5,	// (0x00035ee0) ezdial_list_pane

0x9acd,	// (0x00035ee8) scroll_pane_cp23

0xdc89,	// (0x0003a0a4) bg_button_pane_cp028_ParamLimits

0xdc89,	// (0x0003a0a4) bg_button_pane_cp028

0x9ad5,	// (0x00035ef0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9ad5,	// (0x00035ef0) cmail_ddmenu_btn01_pane_g1

0x9ae1,	// (0x00035efc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9ae1,	// (0x00035efc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003c23e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003c23e) cmail_ddmenu_btn01_pane_g

0x9aed,	// (0x00035f08) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x9aed,	// (0x00035f08) cmail_ddmenu_btn01_pane_t1

0xdc89,	// (0x0003a0a4) bg_button_pane_cp029_ParamLimits

0xdc89,	// (0x0003a0a4) bg_button_pane_cp029

0x9b02,	// (0x00035f1d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9b02,	// (0x00035f1d) cmail_ddmenu_btn02_pane_g1

0x9b1b,	// (0x00035f36) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9b1b,	// (0x00035f36) cmail_ddmenu_btn02_pane_t1

0xc6cc,	// (0x00038ae7) bg_button_pane_cp031_ParamLimits

0xc6cc,	// (0x00038ae7) bg_button_pane_cp031

0x9b02,	// (0x00035f1d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9b02,	// (0x00035f1d) cmail_ddmenu_btn03_pane_g1

0x9b1b,	// (0x00035f36) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9b1b,	// (0x00035f36) cmail_ddmenu_btn03_pane_t1

0x5fe4,	// (0x000323ff) cell_dialer2_keypad_pane_t1_ParamLimits

0x5ffe,	// (0x00032419) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5ffe,	// (0x00032419) cell_dialer2_keypad_pane_t1_copy1

0x7b64,	// (0x00033f7f) ncimui_group_button_pane

0xc6cc,	// (0x00038ae7) main_sp_fs_calendar_pane_ParamLimits

0x92b1,	// (0x000356cc) list_single_cmail_header_caption_pane_ParamLimits

0x95a2,	// (0x000359bd) aid_recal_txt_sm_pane

0xad01,	// (0x0003711c) mian_recal_day_pane

0x961e,	// (0x00035a39) popup_sp_fs_cale_preview_window_ParamLimits

0x9b3f,	// (0x00035f5a) list_recal_day_pane

0x9b81,	// (0x00035f9c) list_single_recal_day_pane_ParamLimits

0x9b81,	// (0x00035f9c) list_single_recal_day_pane

0x9b93,	// (0x00035fae) list_single_recal_day_pane_g1_ParamLimits

0x9b93,	// (0x00035fae) list_single_recal_day_pane_g1

0x9b9f,	// (0x00035fba) list_single_recal_day_pane_g2_ParamLimits

0x9b9f,	// (0x00035fba) list_single_recal_day_pane_g2

0x9bab,	// (0x00035fc6) list_single_recal_day_pane_g3_ParamLimits

0x9bab,	// (0x00035fc6) list_single_recal_day_pane_g3

0x9bb7,	// (0x00035fd2) list_single_recal_day_pane_g4_ParamLimits

0x9bb7,	// (0x00035fd2) list_single_recal_day_pane_g4

0x9bc5,	// (0x00035fe0) list_single_recal_day_pane_g5_ParamLimits

0x9bc5,	// (0x00035fe0) list_single_recal_day_pane_g5

0x9bdb,	// (0x00035ff6) list_single_recal_day_pane_g6_ParamLimits

0x9bdb,	// (0x00035ff6) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003c24d) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003c24d) list_single_recal_day_pane_g

0x9bef,	// (0x0003600a) list_single_recal_day_pane_t1

0x9c01,	// (0x0003601c) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003c258) list_single_recal_day_pane_t

0x9c13,	// (0x0003602e) ncimui_query_button_pane_ParamLimits

0x9c13,	// (0x0003602e) ncimui_query_button_pane

0x9c23,	// (0x0003603e) ncimui_query_button_pane_t1_ParamLimits

0x9c23,	// (0x0003603e) ncimui_query_button_pane_t1

0x9c36,	// (0x00036051) ncimui_query_button_pane_t2_ParamLimits

0x9c36,	// (0x00036051) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003c25d) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003c25d) ncimui_query_button_pane_t

0x9c49,	// (0x00036064) query_button_pane_ParamLimits

0x9c49,	// (0x00036064) query_button_pane

0xad01,	// (0x0003711c) bg_button_pane_cp0028

0x9c5c,	// (0x00036077) query_button_pane_t1

0x06b8,	// (0x0002cad3) main_tport_pane_ParamLimits

0x9127,	// (0x00035542) bg_popup_window_pane_cp01_ParamLimits

0x9127,	// (0x00035542) bg_popup_window_pane_cp01

0x9142,	// (0x0003555d) heading_pane_cp08_ParamLimits

0x9142,	// (0x0003555d) heading_pane_cp08

0x9155,	// (0x00035570) heading_pane_cp07_ParamLimits

0x9155,	// (0x00035570) heading_pane_cp07

0x9225,	// (0x00035640) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003c1a9) cell_tport_appsw_pane_g

0xc971,	// (0x00038d8c) input_candi_list_open_g1

0xc1b2,	// (0x000385cd) list_cale_time_pane_g6_ParamLimits

0xc1b2,	// (0x000385cd) list_cale_time_pane_g6

0x4fe4,	// (0x000313ff) aid_size_touch_calib_1_ParamLimits

0x4fe4,	// (0x000313ff) aid_size_touch_calib_1

0x4ff6,	// (0x00031411) aid_size_touch_calib_2_ParamLimits

0x4ff6,	// (0x00031411) aid_size_touch_calib_2

0x500e,	// (0x00031429) aid_size_touch_calib_3_ParamLimits

0x500e,	// (0x00031429) aid_size_touch_calib_3

0x502c,	// (0x00031447) aid_size_touch_calib_4_ParamLimits

0x502c,	// (0x00031447) aid_size_touch_calib_4

0x5044,	// (0x0003145f) main_touch_calib_button_group_pane_ParamLimits

0x5044,	// (0x0003145f) main_touch_calib_button_group_pane

0x505c,	// (0x00031477) main_touch_calib_pane_g1_ParamLimits

0x506e,	// (0x00031489) main_touch_calib_pane_g2_ParamLimits

0x5080,	// (0x0003149b) main_touch_calib_pane_g3_ParamLimits

0x5092,	// (0x000314ad) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003bb6c) main_touch_calib_pane_g_ParamLimits

0x50a4,	// (0x000314bf) main_touch_calib_pane_t1_ParamLimits

0x50be,	// (0x000314d9) main_touch_calib_pane_t2_ParamLimits

0x50d8,	// (0x000314f3) main_touch_calib_pane_t3_ParamLimits

0x50ec,	// (0x00031507) main_touch_calib_pane_t4_ParamLimits

0x5100,	// (0x0003151b) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003bb75) main_touch_calib_pane_t_ParamLimits

0xe435,	// (0x0003a850) list_single_fp_cale_pane_g3_ParamLimits

0xe435,	// (0x0003a850) list_single_fp_cale_pane_g3

0xad29,	// (0x00037144) bg_button_pane_cp012_ParamLimits

0xad29,	// (0x00037144) bg_vkb2_func_pane_cp03_ParamLimits

0x18be,	// (0x0002dcd9) cell_vitu2_function_top_pane_g1_ParamLimits

0xad29,	// (0x00037144) bg_vkb2_func_pane_cp04_ParamLimits

0x7aef,	// (0x00033f0a) main_ncimui_button_group_pane_ParamLimits

0x7aef,	// (0x00033f0a) main_ncimui_button_group_pane

0x7b4f,	// (0x00033f6a) main_ncimui_pane_t3_ParamLimits

0x7b4f,	// (0x00033f6a) main_ncimui_pane_t3

0x94db,	// (0x000358f6) phacti_button_group_pane

0x9a8f,	// (0x00035eaa) aid_size_list_single_double_ParamLimits

0x9a9b,	// (0x00035eb6) popup_ezdial_listscroll_window_ParamLimits

0x9ab7,	// (0x00035ed2) popup_number_entry_window_cp01_ParamLimits

0x9c6a,	// (0x00036085) phacti_button_pane_ParamLimits

0x9c6a,	// (0x00036085) phacti_button_pane

0xad01,	// (0x0003711c) bg_button_pane_cp14

0x9c7b,	// (0x00036096) phacti_button_pane_t1

0x9c89,	// (0x000360a4) main_touch_calib_button_pane_ParamLimits

0x9c89,	// (0x000360a4) main_touch_calib_button_pane

0xbbd1,	// (0x00037fec) bg_button_pane_cp18_ParamLimits

0xbbd1,	// (0x00037fec) bg_button_pane_cp18

0x9c9e,	// (0x000360b9) main_touch_calib_button_pane_t1_ParamLimits

0x9c9e,	// (0x000360b9) main_touch_calib_button_pane_t1

0x9cb4,	// (0x000360cf) main_touch_calib_button_pane_t2_ParamLimits

0x9cb4,	// (0x000360cf) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003c262) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003c262) main_touch_calib_button_pane_t

0xad01,	// (0x0003711c) cell_ncimui_button_pane

0xad01,	// (0x0003711c) bg_button_pane_cp032

0x9cd2,	// (0x000360ed) cell_ncimui_button_pane_t1

0xb769,	// (0x00037b84) image3_infobar_pane_ParamLimits

0xb769,	// (0x00037b84) image3_infobar_pane

0x8292,	// (0x000346ad) fs_bigclock_status_pane_ParamLimits

0x8292,	// (0x000346ad) fs_bigclock_status_pane

0x829f,	// (0x000346ba) main_fs_bigclock_clock_pane_ParamLimits

0x829f,	// (0x000346ba) main_fs_bigclock_clock_pane

0x82bd,	// (0x000346d8) main_fs_bigclock_indi_pane_ParamLimits

0x82bd,	// (0x000346d8) main_fs_bigclock_indi_pane

0x82ef,	// (0x0003470a) main_fs_bigclock_swipe_pane_ParamLimits

0x82ef,	// (0x0003470a) main_fs_bigclock_swipe_pane

0xad01,	// (0x0003711c) main_fs_clock_dumped_data

0x832e,	// (0x00034749) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x832e,	// (0x00034749) list_single_fs_bigclock_indicator_pane_g1

0x8349,	// (0x00034764) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8349,	// (0x00034764) list_single_fs_bigclock_indicator_pane_g2

0x8363,	// (0x0003477e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8363,	// (0x0003477e) list_single_fs_bigclock_indicator_pane_g3

0x837d,	// (0x00034798) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x837d,	// (0x00034798) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003c08f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003c08f) list_single_fs_bigclock_indicator_pane_g

0x83a8,	// (0x000347c3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x83a8,	// (0x000347c3) list_single_fs_bigclock_indicator_pane_t1

0x83d0,	// (0x000347eb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x83d0,	// (0x000347eb) list_single_fs_bigclock_indicator_pane_t2

0x83f8,	// (0x00034813) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x83f8,	// (0x00034813) list_single_fs_bigclock_indicator_pane_t3

0x8420,	// (0x0003483b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8420,	// (0x0003483b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003c09a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003c09a) list_single_fs_bigclock_indicator_pane_t

0x9ce0,	// (0x000360fb) image3_infobar_fav_pane_ParamLimits

0x9ce0,	// (0x000360fb) image3_infobar_fav_pane

0x9cf0,	// (0x0003610b) image3_infobar_loc_pane_ParamLimits

0x9cf0,	// (0x0003610b) image3_infobar_loc_pane

0x9d04,	// (0x0003611f) image3_infobar_time_pane_ParamLimits

0x9d04,	// (0x0003611f) image3_infobar_time_pane

0xe091,	// (0x0003a4ac) image3_infobar_time_pane_g1

0x9d14,	// (0x0003612f) image3_infobar_time_pane_t1

0xe091,	// (0x0003a4ac) image3_infobar_loc_pane_g1

0x9d22,	// (0x0003613d) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003c267) image3_infobar_loc_pane_g

0x9d2a,	// (0x00036145) image3_infobar_loc_pane_t1

0xe091,	// (0x0003a4ac) image3_infobar_fav_pane_g1

0x9d38,	// (0x00036153) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003c26c) image3_infobar_fav_pane_g

0x9d40,	// (0x0003615b) fs_bigclock_status_battery_pane

0x9d49,	// (0x00036164) fs_bigclock_status_signal_pane

0x9d52,	// (0x0003616d) fs_bigclock_status_title_pane

0x9d5b,	// (0x00036176) fs_bigclock_status_signal_pane_g1

0x9d64,	// (0x0003617f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003c271) fs_bigclock_status_signal_pane_g

0x9d6c,	// (0x00036187) fs_bigclock_status_battery_pane_g1

0x9d75,	// (0x00036190) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003c276) fs_bigclock_status_battery_pane_g

0x9d7d,	// (0x00036198) fs_bigclock_status_title_pane_t1

0x9d8b,	// (0x000361a6) main_fs_bigclock_clock_pane_g1

0x9d8b,	// (0x000361a6) main_fs_bigclock_clock_pane_g2

0x9d9c,	// (0x000361b7) main_fs_bigclock_clock_pane_g3

0x9d9c,	// (0x000361b7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003c27b) main_fs_bigclock_clock_pane_g

0x9daf,	// (0x000361ca) main_fs_bigclock_clock_pane_t1

0x9dc5,	// (0x000361e0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003c284) main_fs_bigclock_clock_pane_t

0x9ddb,	// (0x000361f6) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9ddb,	// (0x000361f6) list_single_fs_bigclock_indicator_pane

0x9dec,	// (0x00036207) list_single_fs_bigclock_pane_ParamLimits

0x9dec,	// (0x00036207) list_single_fs_bigclock_pane

0x9e56,	// (0x00036271) main_fs_bigclock_indicator_pane_t1

0x9e65,	// (0x00036280) list_single_fs_bigclock_pane_g1

0x9e6d,	// (0x00036288) list_single_fs_bigclock_pane_t1

0xe091,	// (0x0003a4ac) main_fs_bigclock_swipe_pane_g1

0x9eb0,	// (0x000362cb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003c295) main_fs_bigclock_swipe_pane_g

0x9eb8,	// (0x000362d3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x9eb8,	// (0x000362d3) main_fs_bigclock_swipe_pane_t1

0x3902,	// (0x0002fd1d) call_type_pane_ParamLimits

0xad01,	// (0x0003711c) main_btmg_pane

0x97d6,	// (0x00035bf1) list_single_cale_mrui_row_pane_g2_ParamLimits

0x97d6,	// (0x00035bf1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003c208) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003c208) list_single_cale_mrui_row_pane_g

0x9b68,	// (0x00035f83) list_recal_vselct_arw_lo_pane

0x9b70,	// (0x00035f8b) list_recal_vselct_arw_up_pane

0x9b78,	// (0x00035f93) list_recal_vselct_pane

0x9ed5,	// (0x000362f0) btmg_button_pane

0x9edf,	// (0x000362fa) main_btmg_pane_g1

0xad01,	// (0x0003711c) bg_button_pane_cp044

0x9ee9,	// (0x00036304) btmg_button_pane_t1

0xdc75,	// (0x0003a090) aid_listscroll_gen

0xc6cc,	// (0x00038ae7) main_cntbar_detail_pane

0x928c,	// (0x000356a7) list_cmail_folder_pane

0xe0f0,	// (0x0003a50b) sp_fs_scroll_pane_cp03_ParamLimits

0x92b1,	// (0x000356cc) list_single_fs_dyc_pane_cp01_ParamLimits

0x92b1,	// (0x000356cc) list_single_fs_dyc_pane_cp01

0x9ef7,	// (0x00036312) aid_size_cmail_indent

0x9f00,	// (0x0003631b) list_single_dyc_row_pane_cp01

0x9f3b,	// (0x00036356) cntbar_detail_list_pane_ParamLimits

0x9f3b,	// (0x00036356) cntbar_detail_list_pane

0x9f87,	// (0x000363a2) main_cntbar_detail_cont_pane_ParamLimits

0x9f87,	// (0x000363a2) main_cntbar_detail_cont_pane

0xe0f0,	// (0x0003a50b) scroll_pane_cp032_ParamLimits

0xe0f0,	// (0x0003a50b) scroll_pane_cp032

0x9f9b,	// (0x000363b6) cntbar_detail_list_event_pane_ParamLimits

0x9f9b,	// (0x000363b6) cntbar_detail_list_event_pane

0x9f4b,	// (0x00036366) cntbar_detail_list_shct_pane

0xc03d,	// (0x00038458) aid_list_gen

0x9fab,	// (0x000363c6) aid_scroll

0x9fb4,	// (0x000363cf) aid_size_touch_scroll_bar

0x6dce,	// (0x000331e9) aid_list_double

0x6dbc,	// (0x000331d7) aid_list_single

0x6dbc,	// (0x000331d7) aid_list_single_lg

0x9fbd,	// (0x000363d8) aid_list_z_g_a_sm

0x9fc5,	// (0x000363e0) aid_list_z_g_d

0x9fcd,	// (0x000363e8) aid_txt_z_prm

0x9fdb,	// (0x000363f6) aid_txt_z_prm_cp01

0x9fe9,	// (0x00036404) aid_txt_z_sec

0x9ff7,	// (0x00036412) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9ff7,	// (0x00036412) main_cntbar_detail_cont_pane_g1

0xa00b,	// (0x00036426) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa00b,	// (0x00036426) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003c29a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003c29a) main_cntbar_detail_cont_pane_g

0xa01b,	// (0x00036436) main_cntbar_detail_cont_pane_t1

0xa029,	// (0x00036444) main_cntbar_detail_cont_pane_t2

0xa037,	// (0x00036452) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003c29f) main_cntbar_detail_cont_pane_t

0xa045,	// (0x00036460) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa045,	// (0x00036460) cell_cntbar_detail_list_shct_pane

0xa059,	// (0x00036474) cntbar_detail_list_shct_pane_g1

0xa062,	// (0x0003647d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003c2a6) cntbar_detail_list_shct_pane_g

0xa06b,	// (0x00036486) cntbar_detail_list_event_pane_g1_ParamLimits

0xa06b,	// (0x00036486) cntbar_detail_list_event_pane_g1

0xa077,	// (0x00036492) cntbar_detail_list_event_pane_g2_ParamLimits

0xa077,	// (0x00036492) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003c2ab) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003c2ab) cntbar_detail_list_event_pane_g

0xa0e3,	// (0x000364fe) cntbar_detail_list_event_pane_t1_ParamLimits

0xa0e3,	// (0x000364fe) cntbar_detail_list_event_pane_t1

0xa0f8,	// (0x00036513) cntbar_detail_list_event_pane_t2_ParamLimits

0xa0f8,	// (0x00036513) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003c2b8) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003c2b8) cntbar_detail_list_event_pane_t

0xe091,	// (0x0003a4ac) cell_cntbar_detail_list_shct_pane_g1

0xc7c2,	// (0x00038bdd) navi_pane_mv_g3

0xc6cc,	// (0x00038ae7) main_cntbar_detail_pane_ParamLimits

0xad01,	// (0x0003711c) main_notif_wgt_pane

0xb57f,	// (0x0003799a) aid_tch_main_mp4_pane_g4

0xb761,	// (0x00037b7c) popup_slider_window_cp02

0x9b5e,	// (0x00035f79) list_recal_day_event_pane

0x9f09,	// (0x00036324) cntbar_detail_btn_pane_ParamLimits

0x9f09,	// (0x00036324) cntbar_detail_btn_pane

0x9f22,	// (0x0003633d) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f22,	// (0x0003633d) cntbar_detail_btn_pane_cp01

0x9f4b,	// (0x00036366) cntbar_detail_list_shct_pane_ParamLimits

0x9f5b,	// (0x00036376) cntbar_detail_pane_g1_ParamLimits

0x9f5b,	// (0x00036376) cntbar_detail_pane_g1

0x9f6b,	// (0x00036386) cntbar_detail_pane_t1_ParamLimits

0x9f6b,	// (0x00036386) cntbar_detail_pane_t1

0xa083,	// (0x0003649e) cntbar_detail_list_event_pane_g3_ParamLimits

0xa083,	// (0x0003649e) cntbar_detail_list_event_pane_g3

0xa09b,	// (0x000364b6) cntbar_detail_list_event_pane_g4_ParamLimits

0xa09b,	// (0x000364b6) cntbar_detail_list_event_pane_g4

0xa0b3,	// (0x000364ce) cntbar_detail_list_event_pane_g5_ParamLimits

0xa0b3,	// (0x000364ce) cntbar_detail_list_event_pane_g5

0xa0cb,	// (0x000364e6) cntbar_detail_list_event_pane_g6_ParamLimits

0xa0cb,	// (0x000364e6) cntbar_detail_list_event_pane_g6

0xa10d,	// (0x00036528) cntbar_detail_list_event_pane_t3_ParamLimits

0xa10d,	// (0x00036528) cntbar_detail_list_event_pane_t3

0xa11f,	// (0x0003653a) popup_notif_wgt_window_ParamLimits

0xa11f,	// (0x0003653a) popup_notif_wgt_window

0xa138,	// (0x00036553) popup_submenu_window_cp01_ParamLimits

0xa138,	// (0x00036553) popup_submenu_window_cp01

0xbd96,	// (0x000381b1) bg_popup_window_pane_cp10

0xa14e,	// (0x00036569) listscroll_notif_wgt_pane

0xa160,	// (0x0003657b) list_notif_wgt_window

0xa169,	// (0x00036584) scroll_pane_cp033

0xa172,	// (0x0003658d) list_notif_wgt_row_pane_ParamLimits

0xa172,	// (0x0003658d) list_notif_wgt_row_pane

0xa182,	// (0x0003659d) aid_size_list_notif_wgt_del

0xa18f,	// (0x000365aa) list_notif_wgt_row_pane_g1

0xa19b,	// (0x000365b6) list_notif_wgt_row_pane_g2

0xa1aa,	// (0x000365c5) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003c2bf) list_notif_wgt_row_pane_g

0xa1b7,	// (0x000365d2) list_notif_wgt_row_pane_t1

0xa1cd,	// (0x000365e8) list_notif_wgt_row_pane_t2

0xa1df,	// (0x000365fa) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003c2c6) list_notif_wgt_row_pane_t

0xedc4,	// (0x0003b1df) list_recal_day_event_pane_g1

0xa1f1,	// (0x0003660c) list_recal_day_event_pane_t1

0xad01,	// (0x0003711c) bg_button_pane_cp045

0xa200,	// (0x0003661b) cntbar_detail_btn_pane_t1

0xdc89,	// (0x0003a0a4) main_callh_pane_ParamLimits

0xdc89,	// (0x0003a0a4) main_callh_pane

0xad01,	// (0x0003711c) main_coverflow0_pane

0xad01,	// (0x0003711c) main_wgtman_pane

0x8307,	// (0x00034722) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8307,	// (0x00034722) main_fs_bigclock_unlock_btn_pane

0x921d,	// (0x00035638) bg_button_pane_cp16

0x922d,	// (0x00035648) cell_tport_appsw_pane_g3

0xa20e,	// (0x00036629) cf0_flow_pane_ParamLimits

0xa20e,	// (0x00036629) cf0_flow_pane

0xa223,	// (0x0003663e) listscroll_cf0_pane

0xa22e,	// (0x00036649) main_cf0_pane_g1

0xa240,	// (0x0003665b) main_cf0_pane_t1_ParamLimits

0xa240,	// (0x0003665b) main_cf0_pane_t1

0xa257,	// (0x00036672) main_cf0_pane_t2_ParamLimits

0xa257,	// (0x00036672) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003c2d2) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003c2d2) main_cf0_pane_t

0xa26e,	// (0x00036689) scroll_pane_cp11

0xa279,	// (0x00036694) cf0_flow_pane_g1

0xa281,	// (0x0003669c) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003c2d7) cf0_flow_pane_g

0xa289,	// (0x000366a4) cf0_flow_pane_t1

0xad01,	// (0x0003711c) main_call6_pane

0xad01,	// (0x0003711c) main_calllock_pane

0x19f3,	// (0x0002de0e) call6_btn_grp_pane_ParamLimits

0x19f3,	// (0x0002de0e) call6_btn_grp_pane

0x1a0d,	// (0x0002de28) call6_pane_g1_ParamLimits

0x1a0d,	// (0x0002de28) call6_pane_g1

0x1a23,	// (0x0002de3e) popup_call6_1st_window_ParamLimits

0x1a23,	// (0x0002de3e) popup_call6_1st_window

0x1a34,	// (0x0002de4f) popup_call6_2nd_window_ParamLimits

0x1a34,	// (0x0002de4f) popup_call6_2nd_window

0x1a45,	// (0x0002de60) cell_call6_btn_pane_ParamLimits

0x1a45,	// (0x0002de60) cell_call6_btn_pane

0xbd96,	// (0x000381b1) bg_popup_call2_in_pane_cp03

0xa297,	// (0x000366b2) popup_call6_1st_window_g1

0xa29f,	// (0x000366ba) popup_call6_1st_window_g2

0xa2a7,	// (0x000366c2) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003c2dc) popup_call6_1st_window_g

0xa2af,	// (0x000366ca) popup_call6_1st_window_t1

0xa2be,	// (0x000366d9) popup_call6_1st_window_t2

0xa2cc,	// (0x000366e7) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003c2e3) popup_call6_1st_window_t

0xbd96,	// (0x000381b1) bg_popup_call2_in_pane_cp04

0xa297,	// (0x000366b2) popup_call6_2nd_window_g1

0xa29f,	// (0x000366ba) popup_call6_2nd_window_g2

0xa2a7,	// (0x000366c2) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003c2dc) popup_call6_2nd_window_g

0xa2af,	// (0x000366ca) popup_call6_2nd_window_t1

0xad37,	// (0x00037152) bg_button_pane_cp15

0xb9e9,	// (0x00037e04) cell_call6_btn_pane_g1

0xb9f2,	// (0x00037e0d) cell_call6_btn_pane_t1

0xa2da,	// (0x000366f5) listscroll_wgtman_pane_ParamLimits

0xa2da,	// (0x000366f5) listscroll_wgtman_pane

0xa2fb,	// (0x00036716) wgtman_btn_pane_ParamLimits

0xa2fb,	// (0x00036716) wgtman_btn_pane

0xc5af,	// (0x000389ca) aid_scroll_copy1

0xa33e,	// (0x00036759) list_wgtman_pane

0xa348,	// (0x00036763) wgtman_btn_pane_g1_ParamLimits

0xa348,	// (0x00036763) wgtman_btn_pane_g1

0xa374,	// (0x0003678f) wgtman_btn_pane_t1_ParamLimits

0xa374,	// (0x0003678f) wgtman_btn_pane_t1

0xa3b1,	// (0x000367cc) wgtman_btn_pane_t2_ParamLimits

0xa3b1,	// (0x000367cc) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003c2ea) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003c2ea) wgtman_btn_pane_t

0xa3c8,	// (0x000367e3) listrow_wgtman_pane_ParamLimits

0xa3c8,	// (0x000367e3) listrow_wgtman_pane

0xa3da,	// (0x000367f5) listrow_wgtman_pane_g1

0xa3e7,	// (0x00036802) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003c2ef) listrow_wgtman_pane_g

0xa405,	// (0x00036820) listrow_wgtman_pane_t1

0xa41d,	// (0x00036838) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003c2f4) listrow_wgtman_pane_t

0xa443,	// (0x0003685e) wait_bar_pane_cp09

0xa455,	// (0x00036870) main_calllock_btn_pane

0xa45f,	// (0x0003687a) main_calllock_pane_g1

0xad01,	// (0x0003711c) bg_button_pane_cp17

0xa46b,	// (0x00036886) main_calllock_btn_pane_g1

0xa474,	// (0x0003688f) main_calllock_btn_pane_t1

0xad01,	// (0x0003711c) main_dialer3_pane

0xad01,	// (0x0003711c) main_fmrd2_pane

0xe091,	// (0x0003a4ac) main_fs_bigclock_unlock_btn_pane_g1

0xa48b,	// (0x000368a6) main_fs_bigclock_unlock_btn_pane_t1

0xa499,	// (0x000368b4) area_fmrd2_info_pane_ParamLimits

0xa499,	// (0x000368b4) area_fmrd2_info_pane

0xa4aa,	// (0x000368c5) area_fmrd2_visual_pane_ParamLimits

0xa4aa,	// (0x000368c5) area_fmrd2_visual_pane

0xa4b8,	// (0x000368d3) fmrd2_indi_pane_ParamLimits

0xa4b8,	// (0x000368d3) fmrd2_indi_pane

0xa4c5,	// (0x000368e0) area_fmrd2_visual_pane_g1

0xa4cd,	// (0x000368e8) area_fmrd2_visual_pane_t1

0xa4dd,	// (0x000368f8) area_fmrd2_visual_pane_t2

0xa4ed,	// (0x00036908) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003c2fe) area_fmrd2_visual_pane_t

0xa4fd,	// (0x00036918) area_fmrd2_info_pane_g1

0xa505,	// (0x00036920) area_fmrd2_info_pane_t1

0xa515,	// (0x00036930) area_fmrd2_info_pane_t2

0xa525,	// (0x00036940) area_fmrd2_info_pane_t3

0xa535,	// (0x00036950) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003c305) area_fmrd2_info_pane_t

0xa543,	// (0x0003695e) fmrd2_indi_pane_t1

0xa553,	// (0x0003696e) fmrd2_indi_pane_t2

0xa563,	// (0x0003697e) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003c30e) fmrd2_indi_pane_t

0x838c,	// (0x000347a7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x838c,	// (0x000347a7) list_single_fs_bigclock_indicator_pane_g5

0x843d,	// (0x00034858) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x843d,	// (0x00034858) list_single_fs_bigclock_indicator_pane_t5

0x9584,	// (0x0003599f) aid_cell_bcale_month_pane_ParamLimits

0x9584,	// (0x0003599f) aid_cell_bcale_month_pane

0x95ab,	// (0x000359c6) bcale_month_pane_ParamLimits

0x95ab,	// (0x000359c6) bcale_month_pane

0x95cf,	// (0x000359ea) bcale_preview_pane_ParamLimits

0x95cf,	// (0x000359ea) bcale_preview_pane

0x9e6d,	// (0x00036288) list_single_fs_bigclock_pane_t1_ParamLimits

0x9e8c,	// (0x000362a7) list_single_fs_bigclock_pane_t2_ParamLimits

0x9e8c,	// (0x000362a7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003c290) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003c290) list_single_fs_bigclock_pane_t

0xa483,	// (0x0003689e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003c2f9) main_fs_bigclock_unlock_btn_pane_g

0xa573,	// (0x0003698e) aid_dia3_key_size_ParamLimits

0xa573,	// (0x0003698e) aid_dia3_key_size

0xa582,	// (0x0003699d) aid_dia3_listrow_size_ParamLimits

0xa582,	// (0x0003699d) aid_dia3_listrow_size

0xa597,	// (0x000369b2) dia3_keypad_fun_pane_ParamLimits

0xa597,	// (0x000369b2) dia3_keypad_fun_pane

0xa5b3,	// (0x000369ce) dia3_keypad_num_pane_ParamLimits

0xa5b3,	// (0x000369ce) dia3_keypad_num_pane

0xa5ce,	// (0x000369e9) dia3_listscroll_pane_ParamLimits

0xa5ce,	// (0x000369e9) dia3_listscroll_pane

0xa5e1,	// (0x000369fc) dia3_numentry_pane_ParamLimits

0xa5e1,	// (0x000369fc) dia3_numentry_pane

0xa5f5,	// (0x00036a10) dia3_list_pane

0xa600,	// (0x00036a1b) scroll_pane_cp12

0xad01,	// (0x0003711c) bg_dia3_numentry_pane

0xa60b,	// (0x00036a26) dia3_numentry_pane_t1

0xa61a,	// (0x00036a35) cell_dia3_key_num_pane

0xa622,	// (0x00036a3d) cell_dia3_key0_fun_pane_ParamLimits

0xa622,	// (0x00036a3d) cell_dia3_key0_fun_pane

0xa636,	// (0x00036a51) cell_dia3_key1_fun_pane_ParamLimits

0xa636,	// (0x00036a51) cell_dia3_key1_fun_pane

0xa64e,	// (0x00036a69) dia3_listrow_pane

0x7d6d,	// (0x00034188) bg_dia3_numentry_pane_g1

0xad01,	// (0x0003711c) bg_button_pane_cp21

0xa660,	// (0x00036a7b) cell_dia3_key_num_pane_t1

0xa66e,	// (0x00036a89) cell_dia3_key_num_pane_t2

0xa67d,	// (0x00036a98) cell_dia3_key_num_pane_t3

0xa68c,	// (0x00036aa7) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003c315) cell_dia3_key_num_pane_t

0xad01,	// (0x0003711c) bg_button_pane_cp19

0xa69b,	// (0x00036ab6) cell_dia3_key0_fun_pane_g1

0xad01,	// (0x0003711c) bg_button_pane_cp20

0xa6a3,	// (0x00036abe) cell_dia3_key1_fun_pane_g1

0xa6ab,	// (0x00036ac6) area_left_week_number_pane

0xa6b7,	// (0x00036ad2) area_top_day_name_pane

0xa6ca,	// (0x00036ae5) frame_month_view_pane

0xa6dd,	// (0x00036af8) grid_month_view_pane

0xa6eb,	// (0x00036b06) cell_top_day_name_pane_ParamLimits

0xa6eb,	// (0x00036b06) cell_top_day_name_pane

0xa718,	// (0x00036b33) cell_area_left_week_number_pane_ParamLimits

0xa718,	// (0x00036b33) cell_area_left_week_number_pane

0xa72c,	// (0x00036b47) cell_month_view_pane_ParamLimits

0xa72c,	// (0x00036b47) cell_month_view_pane

0xa759,	// (0x00036b74) frm_month_g1

0xa766,	// (0x00036b81) frm_month_g2

0xa779,	// (0x00036b94) frm_month_g3

0xa78c,	// (0x00036ba7) frm_month_g4

0xa79f,	// (0x00036bba) frm_month_g5

0xa7b2,	// (0x00036bcd) frm_month_g6

0xa7c5,	// (0x00036be0) frm_month_g7

0xa7d8,	// (0x00036bf3) frm_month_g8

0xa7e5,	// (0x00036c00) frm_month_g9

0xa7f5,	// (0x00036c10) frm_month_g10

0xa805,	// (0x00036c20) frm_month_g11

0xa815,	// (0x00036c30) frm_month_g12

0xa827,	// (0x00036c42) frm_month_g13

0xa839,	// (0x00036c54) frm_month_g14

0xa84d,	// (0x00036c68) frm_month_g15

0xa861,	// (0x00036c7c) frm_month_g16

0x000f,

0xff03,	// (0x0003c31e) frm_month_g

0xa875,	// (0x00036c90) cell_top_day_name_pane_t1

0xa888,	// (0x00036ca3) cell_area_left_week_number_pane_g1

0xa894,	// (0x00036caf) cell_area_left_week_number_pane_t1

0xe309,	// (0x0003a724) cell_month_view_pane_g1

0xa8a7,	// (0x00036cc2) cell_month_view_pane_t1

0xad01,	// (0x0003711c) main_fps_pane

0x89dd,	// (0x00034df8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x89dd,	// (0x00034df8) cmail_ddmenu_btn02_pane_cp1

0x89f9,	// (0x00034e14) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x89f9,	// (0x00034e14) cmail_ddmenu_btn02_pane_cp2

0x9b0e,	// (0x00035f29) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9b0e,	// (0x00035f29) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003c243) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003c243) cmail_ddmenu_btn02_pane_g

0x9b2d,	// (0x00035f48) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9b2d,	// (0x00035f48) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003c248) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003c248) cmail_ddmenu_btn02_pane_t

0xa8ba,	// (0x00036cd5) fps_text_pane_ParamLimits

0xa8ba,	// (0x00036cd5) fps_text_pane

0xa8d1,	// (0x00036cec) main_fps_pane_g1_ParamLimits

0xa8d1,	// (0x00036cec) main_fps_pane_g1

0xa8eb,	// (0x00036d06) wait_bar_pane_cp010_ParamLimits

0xa8eb,	// (0x00036d06) wait_bar_pane_cp010

0xa8fc,	// (0x00036d17) fps_text_pane_t1_ParamLimits

0xa8fc,	// (0x00036d17) fps_text_pane_t1

0x605a,	// (0x00032475) cam4_image_uncrop_pane_g1

0x6063,	// (0x0003247e) cam4_image_uncrop_pane_g2

0x606c,	// (0x00032487) cam4_image_uncrop_pane_g3

0x6075,	// (0x00032490) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003bd09) cam4_image_uncrop_pane_g

0xa64e,	// (0x00036a69) dia3_listrow_pane_ParamLimits

0xad01,	// (0x0003711c) main_phob2_pane

0x91c5,	// (0x000355e0) cell_tport_appsw_pane_cp02_ParamLimits

0x91c5,	// (0x000355e0) cell_tport_appsw_pane_cp02

0x91d9,	// (0x000355f4) cell_tport_appsw_pane_cp03_ParamLimits

0x91d9,	// (0x000355f4) cell_tport_appsw_pane_cp03

0xad01,	// (0x0003711c) phob2_contact_card_pane

0xad01,	// (0x0003711c) phob2_listscroll_pane

0xa914,	// (0x00036d2f) phob2_list_pane

0xa91c,	// (0x00036d37) scroll_pane_cp034

0xa924,	// (0x00036d3f) phob2_cc_data_pane_ParamLimits

0xa924,	// (0x00036d3f) phob2_cc_data_pane

0xa943,	// (0x00036d5e) phob2_cc_listscroll_pane_ParamLimits

0xa943,	// (0x00036d5e) phob2_cc_listscroll_pane

0xa3c8,	// (0x000367e3) list_double_large_graphic_phob2_pane_ParamLimits

0xa3c8,	// (0x000367e3) list_double_large_graphic_phob2_pane

0xa961,	// (0x00036d7c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa961,	// (0x00036d7c) list_double_large_graphic_phob2_pane_g1

0xa977,	// (0x00036d92) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa977,	// (0x00036d92) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003c33f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003c33f) list_double_large_graphic_phob2_pane_g

0xa983,	// (0x00036d9e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa983,	// (0x00036d9e) list_double_large_graphic_phob2_pane_t1

0xa998,	// (0x00036db3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa998,	// (0x00036db3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003c344) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003c344) list_double_large_graphic_phob2_pane_t

0xad01,	// (0x0003711c) list_highlight_pane_cp024

0xa9aa,	// (0x00036dc5) phob2_cc_button_pane

0xa9b2,	// (0x00036dcd) phob2_cc_data_pane_g1_ParamLimits

0xa9b2,	// (0x00036dcd) phob2_cc_data_pane_g1

0xa9c7,	// (0x00036de2) phob2_cc_data_pane_g2_ParamLimits

0xa9c7,	// (0x00036de2) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003c349) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003c349) phob2_cc_data_pane_g

0xa9d7,	// (0x00036df2) phob2_cc_data_pane_t1_ParamLimits

0xa9d7,	// (0x00036df2) phob2_cc_data_pane_t1

0xa9ef,	// (0x00036e0a) phob2_cc_data_pane_t2_ParamLimits

0xa9ef,	// (0x00036e0a) phob2_cc_data_pane_t2

0xaa07,	// (0x00036e22) phob2_cc_data_pane_t3_ParamLimits

0xaa07,	// (0x00036e22) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003c34e) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003c34e) phob2_cc_data_pane_t

0xaa1f,	// (0x00036e3a) phob2_cc_list_pane_ParamLimits

0xaa1f,	// (0x00036e3a) phob2_cc_list_pane

0xee5b,	// (0x0003b276) scroll_pane_cp035_ParamLimits

0xee5b,	// (0x0003b276) scroll_pane_cp035

0xc6cc,	// (0x00038ae7) bg_button_pane_cp033

0xaa2b,	// (0x00036e46) phob2_cc_button_pane_g1

0xaa37,	// (0x00036e52) phob2_cc_button_pane_t1

0xaa4c,	// (0x00036e67) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003c355) phob2_cc_button_pane_t

0xaa5e,	// (0x00036e79) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaa5e,	// (0x00036e79) list_double_large_graphic_phob2_cc_pane

0xaa70,	// (0x00036e8b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaa70,	// (0x00036e8b) list_double_large_graphic_phob2_cc_pane_g1

0xaa7c,	// (0x00036e97) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaa7c,	// (0x00036e97) list_double_large_graphic_phob2_cc_pane_g2

0xaa88,	// (0x00036ea3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaa88,	// (0x00036ea3) list_double_large_graphic_phob2_cc_pane_g3

0xaa94,	// (0x00036eaf) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaa94,	// (0x00036eaf) list_double_large_graphic_phob2_cc_pane_g4

0xaaa0,	// (0x00036ebb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaaa0,	// (0x00036ebb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003c35a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003c35a) list_double_large_graphic_phob2_cc_pane_g

0xaaac,	// (0x00036ec7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaaac,	// (0x00036ec7) list_double_large_graphic_phob2_cc_pane_t1

0xaad5,	// (0x00036ef0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaad5,	// (0x00036ef0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003c365) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003c365) list_double_large_graphic_phob2_cc_pane_t

0xaafe,	// (0x00036f19) list_highlight_pane_cp025_ParamLimits

0xaafe,	// (0x00036f19) list_highlight_pane_cp025

0xc6cc,	// (0x00038ae7) bg_button_pane_cp033_ParamLimits

0xaa2b,	// (0x00036e46) phob2_cc_button_pane_g1_ParamLimits

0xaa37,	// (0x00036e52) phob2_cc_button_pane_t1_ParamLimits

0xaa4c,	// (0x00036e67) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003c355) phob2_cc_button_pane_t_ParamLimits

0x1b17,	// (0x0002df32) popup_wgtman_window

0xec39,	// (0x0003b054) scroll_pane_cp038

0xa320,	// (0x0003673b) wgtman_btn_pane_cp_01_ParamLimits

0xa320,	// (0x0003673b) wgtman_btn_pane_cp_01

0xab0c,	// (0x00036f27) wgtman_content_pane

0xab15,	// (0x00036f30) wgtman_heading_pane

0xad01,	// (0x0003711c) bg_heading_pane_cp02

0xab1e,	// (0x00036f39) wgtman_heading_pane_g1

0xab26,	// (0x00036f41) wgtman_heading_pane_t1

0xab34,	// (0x00036f4f) scroll_pane_cp036

0xab3c,	// (0x00036f57) wgtman_list_pane

0xab44,	// (0x00036f5f) wgtman_list_pane_t1_ParamLimits

0xab44,	// (0x00036f5f) wgtman_list_pane_t1

0xb7ed,	// (0x00037c08) cam4_grid_pane

0x68d0,	// (0x00032ceb) bg_button_pane_cp015_ParamLimits

0x68e2,	// (0x00032cfd) bg_button_pane_cp016_ParamLimits

0x68f5,	// (0x00032d10) bg_button_pane_cp017_ParamLimits

0x694d,	// (0x00032d68) popup_vitu2_query_window_g3_ParamLimits

0x694d,	// (0x00032d68) popup_vitu2_query_window_g3

0x6a0a,	// (0x00032e25) popup_vitu2_query_window_t6_ParamLimits

0x6a0a,	// (0x00032e25) popup_vitu2_query_window_t6

0x6a35,	// (0x00032e50) popup_vitu2_query_window_t7_ParamLimits

0x6a35,	// (0x00032e50) popup_vitu2_query_window_t7

0x605a,	// (0x00032475) cam4_grid_pane_g1

0x6063,	// (0x0003247e) cam4_grid_pane_g2

0xab5e,	// (0x00036f79) cam4_grid_pane_g3

0xab67,	// (0x00036f82) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003c36a) cam4_grid_pane_g

0x2810,	// (0x0002ec2b) aid_placing_vt_slider_lsc_ParamLimits

0x2b1b,	// (0x0002ef36) vidtel_button_pane_ParamLimits

0x2b1b,	// (0x0002ef36) vidtel_button_pane

0xad01,	// (0x0003711c) bg_button_pane_cp034

0xab72,	// (0x00036f8d) vidtel_button_pane_g1

0xab7a,	// (0x00036f95) vidtel_button_pane_t1

0xed6b,	// (0x0003b186) aid_size_vtel_slider_touch

0xee5b,	// (0x0003b276) scroll_pane_cp039

0x7ddc,	// (0x000341f7) ncim_query_button_pane_cp01_ParamLimits

0x7dfb,	// (0x00034216) ncimui_query_pane_g1_ParamLimits

0xc6cc,	// (0x00038ae7) input_focus_pane_cp012_ParamLimits

0x7e20,	// (0x0003423b) ncim_query_entry_pane_t1_ParamLimits

0xee5b,	// (0x0003b276) scroll_pane_cp039_ParamLimits

0xc693,	// (0x00038aae) navi_pane_bcale_mc_g1

0xc69b,	// (0x00038ab6) navi_pane_bcale_mc_t1

0x8a8c,	// (0x00034ea7) main_sp_fs_email_pane_g1

0x8a98,	// (0x00034eb3) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003c100) main_sp_fs_email_pane_g

0x97e2,	// (0x00035bfd) list_single_cale_mrui_row_pane_g3_ParamLimits

0x97e2,	// (0x00035bfd) list_single_cale_mrui_row_pane_g3

0x9bd1,	// (0x00035fec) list_single_recal_day_pane_g5_event_pane

0x9be7,	// (0x00036002) list_single_recal_day_pane_g7

0xab90,	// (0x00036fab) list_recal_day_event_pane_cp01

0xab99,	// (0x00036fb4) list_recal_vselct_arw_lo_pane_cp01

0xaba1,	// (0x00036fbc) list_recal_vselct_arw_up_pane_cp01

0xaba9,	// (0x00036fc4) list_recal_vselct_pane_cp01

0xedc4,	// (0x0003b1df) list_recal_day_event_pane_cp01_g1

0xabb3,	// (0x00036fce) list_recal_day_event_pane_cp01_t1

0x9bef,	// (0x0003600a) list_single_recal_day_pane_t1_ParamLimits

0x9c01,	// (0x0003601c) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003c258) list_single_recal_day_pane_t_ParamLimits

0xbb0c,	// (0x00037f27) bg_notes_pane_ParamLimits

0xbbaf,	// (0x00037fca) list_notes_pane_ParamLimits

0x1d77,	// (0x0002e192) scroll_pane_cp06_ParamLimits

0xbbd1,	// (0x00037fec) main_notes_pane_ParamLimits

0xad01,	// (0x0003711c) main_welc_pane

0xabc1,	// (0x00036fdc) main_welc_body_pane_ParamLimits

0xabc1,	// (0x00036fdc) main_welc_body_pane

0xabdf,	// (0x00036ffa) main_welc_opti_pane_ParamLimits

0xabdf,	// (0x00036ffa) main_welc_opti_pane

0xac24,	// (0x0003703f) main_welc_pane_t1_ParamLimits

0xac24,	// (0x0003703f) main_welc_pane_t1

0xac42,	// (0x0003705d) main_welc_body_row_pane_ParamLimits

0xac42,	// (0x0003705d) main_welc_body_row_pane

0xedb6,	// (0x0003b1d1) main_welc_opti_row_pane_ParamLimits

0xedb6,	// (0x0003b1d1) main_welc_opti_row_pane

0xac56,	// (0x00037071) main_welc_opti_row_pane_g1

0xac5e,	// (0x00037079) main_welc_opti_row_pane_t1

0xac6d,	// (0x00037088) main_welc_body_row_pane_t1

0xa158,	// (0x00036573) popup_notif_wgt_heading_pane

0xa182,	// (0x0003659d) aid_size_list_notif_wgt_del_ParamLimits

0xa18f,	// (0x000365aa) list_notif_wgt_row_pane_g1_ParamLimits

0xa19b,	// (0x000365b6) list_notif_wgt_row_pane_g2_ParamLimits

0xa1aa,	// (0x000365c5) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003c2bf) list_notif_wgt_row_pane_g_ParamLimits

0xa1b7,	// (0x000365d2) list_notif_wgt_row_pane_t1_ParamLimits

0xa1cd,	// (0x000365e8) list_notif_wgt_row_pane_t2_ParamLimits

0xa1df,	// (0x000365fa) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003c2c6) list_notif_wgt_row_pane_t_ParamLimits

0xa3da,	// (0x000367f5) listrow_wgtman_pane_g1_ParamLimits

0xa3e7,	// (0x00036802) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003c2ef) listrow_wgtman_pane_g_ParamLimits

0xa405,	// (0x00036820) listrow_wgtman_pane_t1_ParamLimits

0xa41d,	// (0x00036838) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003c2f4) listrow_wgtman_pane_t_ParamLimits

0xa443,	// (0x0003685e) wait_bar_pane_cp09_ParamLimits

0xad01,	// (0x0003711c) bg_popup_heading_pane_cp02

0xac7c,	// (0x00037097) popup_notif_wgt_heading_pane_g1

0xac84,	// (0x0003709f) popup_notif_wgt_heading_pane_t1

0xad01,	// (0x0003711c) main_vids_pane

0xad01,	// (0x0003711c) vids_listscroll_pane

0xac92,	// (0x000370ad) scroll_pane_cp040

0xad01,	// (0x0003711c) vids_list_pane

0xac9d,	// (0x000370b8) vids_list_double_pane_ParamLimits

0xac9d,	// (0x000370b8) vids_list_double_pane

0xacae,	// (0x000370c9) vids_list_double_pane_g1

0xacb7,	// (0x000370d2) vids_list_double_pane_t1

0xacc7,	// (0x000370e2) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003c378) vids_list_double_pane_t

0xad29,	// (0x00037144) main_ncimui_pane_ParamLimits

0x7b03,	// (0x00033f1e) main_ncimui_pane_g1_ParamLimits

0x7b0f,	// (0x00033f2a) main_ncimui_pane_g2_ParamLimits

0x7b0f,	// (0x00033f2a) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003c005) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003c005) main_ncimui_pane_g

0xabfa,	// (0x00037015) main_welc_pane_g1_ParamLimits

0xabfa,	// (0x00037015) main_welc_pane_g1

0xac0f,	// (0x0003702a) main_welc_pane_g2_ParamLimits

0xac0f,	// (0x0003702a) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003c373) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003c373) main_welc_pane_g

0xbb0c,	// (0x00037f27) listscroll_mce_pane_ParamLimits

0xc802,	// (0x00038c1d) wait_bar_pane_cp10

0xdc7d,	// (0x0003a098) main_cale_day_pane_ParamLimits

0xdc7d,	// (0x0003a098) main_cale_week_pane_ParamLimits

0xbb0c,	// (0x00037f27) main_messa_pane_ParamLimits

0x59a8,	// (0x00031dc3) main_clock2_btn_pane_ParamLimits

0x59a8,	// (0x00031dc3) main_clock2_btn_pane

0xe4bd,	// (0x0003a8d8) main_clock2_btn_pane_cp01_ParamLimits

0xe4bd,	// (0x0003a8d8) main_clock2_btn_pane_cp01

0x9721,	// (0x00035b3c) list_cale_mrui_pane_ParamLimits

0xa238,	// (0x00036653) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003c2cd) main_cf0_pane_g

0xa6ab,	// (0x00036ac6) area_left_week_number_pane_ParamLimits

0xa6b7,	// (0x00036ad2) area_top_day_name_pane_ParamLimits

0xa6ca,	// (0x00036ae5) frame_month_view_pane_ParamLimits

0xa6dd,	// (0x00036af8) grid_month_view_pane_ParamLimits

0xa759,	// (0x00036b74) frm_month_g1_ParamLimits

0xa766,	// (0x00036b81) frm_month_g2_ParamLimits

0xa779,	// (0x00036b94) frm_month_g3_ParamLimits

0xa78c,	// (0x00036ba7) frm_month_g4_ParamLimits

0xa79f,	// (0x00036bba) frm_month_g5_ParamLimits

0xa7b2,	// (0x00036bcd) frm_month_g6_ParamLimits

0xa7c5,	// (0x00036be0) frm_month_g7_ParamLimits

0xa7d8,	// (0x00036bf3) frm_month_g8_ParamLimits

0xa7e5,	// (0x00036c00) frm_month_g9_ParamLimits

0xa7f5,	// (0x00036c10) frm_month_g10_ParamLimits

0xa805,	// (0x00036c20) frm_month_g11_ParamLimits

0xa815,	// (0x00036c30) frm_month_g12_ParamLimits

0xa827,	// (0x00036c42) frm_month_g13_ParamLimits

0xa839,	// (0x00036c54) frm_month_g14_ParamLimits

0xa84d,	// (0x00036c68) frm_month_g15_ParamLimits

0xa861,	// (0x00036c7c) frm_month_g16_ParamLimits

0xff03,	// (0x0003c31e) frm_month_g_ParamLimits

0xa875,	// (0x00036c90) cell_top_day_name_pane_t1_ParamLimits

0xa888,	// (0x00036ca3) cell_area_left_week_number_pane_g1_ParamLimits

0xa894,	// (0x00036caf) cell_area_left_week_number_pane_t1_ParamLimits

0xe309,	// (0x0003a724) cell_month_view_pane_g1_ParamLimits

0xa8a7,	// (0x00036cc2) cell_month_view_pane_t1_ParamLimits

0xbb04,	// (0x00037f1f) main_clock2_btn_pane_g1

0xacd7,	// (0x000370f2) main_clock2_btn_pane_t1

0xc6cc,	// (0x00038ae7) listscroll_cmail_pane_ParamLimits

0x8a8c,	// (0x00034ea7) main_sp_fs_email_pane_g1_ParamLimits

0x8a98,	// (0x00034eb3) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003c100) main_sp_fs_email_pane_g_ParamLimits

0x9b3f,	// (0x00035f5a) list_recal_day_pane_ParamLimits

0x9b50,	// (0x00035f6b) mian_recal_day_pane_t1

0x8d8f,	// (0x000351aa) list_single_dyc_row_text_pane_t4_ParamLimits

0x8d8f,	// (0x000351aa) list_single_dyc_row_text_pane_t4

0x8dd8,	// (0x000351f3) list_single_dyc_row_text_pane_t5_ParamLimits

0x8dd8,	// (0x000351f3) list_single_dyc_row_text_pane_t5

0x8e4e,	// (0x00035269) list_single_dyc_row_text_pane_t6_ParamLimits

0x8e4e,	// (0x00035269) list_single_dyc_row_text_pane_t6

0x376d,	// (0x0002fb88) aid_mgn_list_cale_time_pane

0xad29,	// (0x00037144) main_gallery2_pane_ParamLimits

0xe4d3,	// (0x0003a8ee) main_clock2_pane_cp01_t1

0xe4e3,	// (0x0003a8fe) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003bbdf) main_clock2_pane_cp01_t

0x2088,	// (0x0002e4a3) cale_week_scroll_pane_g16_ParamLimits

0x2088,	// (0x0002e4a3) cale_week_scroll_pane_g16

0xbd96,	// (0x000381b1) vorec_slider_pane

0xab7a,	// (0x00036f95) vidtel_button_pane_t1_ParamLimits

0x9d8b,	// (0x000361a6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9d8b,	// (0x000361a6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9d9c,	// (0x000361b7) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9d9c,	// (0x000361b7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0003c27b) main_fs_bigclock_clock_pane_g_ParamLimits

0x9daf,	// (0x000361ca) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9dc5,	// (0x000361e0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0003c284) main_fs_bigclock_clock_pane_t_ParamLimits

0x519c,	// (0x000315b7) main_mup3_lyrics_pane_ParamLimits

0x519c,	// (0x000315b7) main_mup3_lyrics_pane

0xace5,	// (0x00037100) main_mup3_lyrics_pane_t1_ParamLimits

0xace5,	// (0x00037100) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
