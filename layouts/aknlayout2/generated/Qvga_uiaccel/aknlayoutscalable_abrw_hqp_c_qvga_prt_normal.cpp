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

// This customisation implements the interface defined in AknLayoutScalable_UiAccel.cdl

#include "aknlayoutscalable_abrw_hqp_c_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_UiAccel { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_hqp_c_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_hqp_c_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_UiAccel::KByteCodedData_AknLayoutScalable_Elaf_hqp_c_qvga_prt + 0x00000000 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize] =
	{
0x0000,

0x0000,

0x0000,

0x0000,

0x0000,	// (0x00000000) Screen

0x000a,	// (0x0000000a) application_window

0x0014,	// (0x00000014) area_bottom_pane_ParamLimits

0x0014,	// (0x00000014) area_bottom_pane

0x003a,	// (0x0000003a) area_top_pane_ParamLimits

0x003a,	// (0x0000003a) area_top_pane

0x0050,	// (0x00000050) main_pane_ParamLimits

0x0050,	// (0x00000050) main_pane

0x000a,	// (0x0000000a) main_hc_listscroll_pane

0x00e2,	// (0x000000e2) hc_list_pane

0x00f3,	// (0x000000f3) hc_scroll_pane

0x0157,	// (0x00000157) hc_list_double2_graphic_pane

0x0157,	// (0x00000157) hc_list_double2_large_graphic_pane

0x0157,	// (0x00000157) hc_list_double2_pane

0x0160,	// (0x00000160) hc_list_double_graphic_pane

0x0160,	// (0x00000160) hc_list_double_heading_pane

0x0160,	// (0x00000160) hc_list_double_large_graphic_pane

0x0160,	// (0x00000160) hc_list_double_pane

0x0169,	// (0x00000169) hc_list_single_graphic_pane

0x0171,	// (0x00000171) hc_list_single_heading_pane

0x0157,	// (0x00000157) hc_list_single_large_graphic_pane

0x0171,	// (0x00000171) hc_list_single_pane

0x01cc,	// (0x000001cc) hc_list_single_pane_g1_ParamLimits

0x01cc,	// (0x000001cc) hc_list_single_pane_g1

0x01d8,	// (0x000001d8) hc_list_single_pane_g2_ParamLimits

0x01d8,	// (0x000001d8) hc_list_single_pane_g2

0x0001,

0x116c,	// (0x0000116c) hc_list_single_pane_g_ParamLimits

0x116c,	// (0x0000116c) hc_list_single_pane_g

0x01ec,	// (0x000001ec) hc_list_single_pane_t1_ParamLimits

0x01ec,	// (0x000001ec) hc_list_single_pane_t1

0x0203,	// (0x00000203) hc_list_single_graphic_pane_g1_ParamLimits

0x0203,	// (0x00000203) hc_list_single_graphic_pane_g1

0x020f,	// (0x0000020f) hc_list_single_graphic_pane_g2_ParamLimits

0x020f,	// (0x0000020f) hc_list_single_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_single_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_single_graphic_pane_g3

0x0002,

0x1171,	// (0x00001171) hc_list_single_graphic_pane_g_ParamLimits

0x1171,	// (0x00001171) hc_list_single_graphic_pane_g

0x021e,	// (0x0000021e) hc_list_single_graphic_pane_t1_ParamLimits

0x021e,	// (0x0000021e) hc_list_single_graphic_pane_t1

0x01cc,	// (0x000001cc) hc_list_single_heading_pane_g1_ParamLimits

0x01cc,	// (0x000001cc) hc_list_single_heading_pane_g1

0x01d8,	// (0x000001d8) hc_list_single_heading_pane_g2_ParamLimits

0x01d8,	// (0x000001d8) hc_list_single_heading_pane_g2

0x0001,

0x116c,	// (0x0000116c) hc_list_single_heading_pane_g_ParamLimits

0x116c,	// (0x0000116c) hc_list_single_heading_pane_g

0x0234,	// (0x00000234) hc_list_single_heading_pane_t1_ParamLimits

0x0234,	// (0x00000234) hc_list_single_heading_pane_t1

0x0246,	// (0x00000246) hc_list_single_heading_pane_t2_ParamLimits

0x0246,	// (0x00000246) hc_list_single_heading_pane_t2

0x0001,

0x1178,	// (0x00001178) hc_list_single_heading_pane_t_ParamLimits

0x1178,	// (0x00001178) hc_list_single_heading_pane_t

0x025c,	// (0x0000025c) hc_list_single_large_graphic_pane_g1_ParamLimits

0x025c,	// (0x0000025c) hc_list_single_large_graphic_pane_g1

0x0268,	// (0x00000268) hc_list_single_large_graphic_pane_g2_ParamLimits

0x0268,	// (0x00000268) hc_list_single_large_graphic_pane_g2

0x0274,	// (0x00000274) hc_list_single_large_graphic_pane_g3_ParamLimits

0x0274,	// (0x00000274) hc_list_single_large_graphic_pane_g3

0x0002,

0x117d,	// (0x0000117d) hc_list_single_large_graphic_pane_g_ParamLimits

0x117d,	// (0x0000117d) hc_list_single_large_graphic_pane_g

0x0288,	// (0x00000288) hc_list_single_large_graphic_pane_t1_ParamLimits

0x0288,	// (0x00000288) hc_list_single_large_graphic_pane_t1

0x01cc,	// (0x000001cc) hc_list_double_pane_g1_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double_pane_g1

0x01d8,	// (0x000001d8) hc_list_double_pane_g2_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double_pane_g2

0x0001,

0x116c,	// (0x0000116c) hc_list_double_pane_g_ParamLimits

0x116c,	// (0x0000116c) hc_list_double_pane_g

0x029e,	// (0x0000029e) hc_list_double_pane_t1_ParamLimits

0x029e,	// (0x0000029e) hc_list_double_pane_t1

0x02b4,	// (0x000002b4) hc_list_double_pane_t2_ParamLimits

0x02b4,	// (0x000002b4) hc_list_double_pane_t2

0x0001,

0x1184,	// (0x00001184) hc_list_double_pane_t_ParamLimits

0x1184,	// (0x00001184) hc_list_double_pane_t

0x02c6,	// (0x000002c6) hc_list_double_graphic_pane_g1_ParamLimits

0x02c6,	// (0x000002c6) hc_list_double_graphic_pane_g1

0x01cc,	// (0x000001cc) hc_list_double_graphic_pane_g2_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_double_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double_graphic_pane_g3

0x0002,

0x1189,	// (0x00001189) hc_list_double_graphic_pane_g_ParamLimits

0x1189,	// (0x00001189) hc_list_double_graphic_pane_g

0x02d2,	// (0x000002d2) hc_list_double_graphic_pane_t1_ParamLimits

0x02d2,	// (0x000002d2) hc_list_double_graphic_pane_t1

0x02e8,	// (0x000002e8) hc_list_double_graphic_pane_t2_ParamLimits

0x02e8,	// (0x000002e8) hc_list_double_graphic_pane_t2

0x0001,

0x1190,	// (0x00001190) hc_list_double_graphic_pane_t_ParamLimits

0x1190,	// (0x00001190) hc_list_double_graphic_pane_t

0x02fa,	// (0x000002fa) hc_list_double_heading_pane_g1_ParamLimits

0x02fa,	// (0x000002fa) hc_list_double_heading_pane_g1

0x0306,	// (0x00000306) hc_list_double_heading_pane_g2_ParamLimits

0x0306,	// (0x00000306) hc_list_double_heading_pane_g2

0x0001,

0x1195,	// (0x00001195) hc_list_double_heading_pane_g_ParamLimits

0x1195,	// (0x00001195) hc_list_double_heading_pane_g

0x031a,	// (0x0000031a) hc_list_double_heading_pane_t1_ParamLimits

0x031a,	// (0x0000031a) hc_list_double_heading_pane_t1

0x032c,	// (0x0000032c) hc_list_double_heading_pane_t2_ParamLimits

0x032c,	// (0x0000032c) hc_list_double_heading_pane_t2

0x0001,

0x119a,	// (0x0000119a) hc_list_double_heading_pane_t_ParamLimits

0x119a,	// (0x0000119a) hc_list_double_heading_pane_t

0x0342,	// (0x00000342) hc_list_double_large_graphic_pane_g1_ParamLimits

0x0342,	// (0x00000342) hc_list_double_large_graphic_pane_g1

0x01cc,	// (0x000001cc) hc_list_double_large_graphic_pane_g2_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double_large_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_double_large_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double_large_graphic_pane_g3

0x0002,

0x119f,	// (0x0000119f) hc_list_double_large_graphic_pane_g_ParamLimits

0x119f,	// (0x0000119f) hc_list_double_large_graphic_pane_g

0x034e,	// (0x0000034e) hc_list_double_large_graphic_pane_t1_ParamLimits

0x034e,	// (0x0000034e) hc_list_double_large_graphic_pane_t1

0x0364,	// (0x00000364) hc_list_double_large_graphic_pane_t2_ParamLimits

0x0364,	// (0x00000364) hc_list_double_large_graphic_pane_t2

0x0001,

0x11a6,	// (0x000011a6) hc_list_double_large_graphic_pane_t_ParamLimits

0x11a6,	// (0x000011a6) hc_list_double_large_graphic_pane_t

0x01cc,	// (0x000001cc) hc_list_double2_pane_g1_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double2_pane_g1

0x01d8,	// (0x000001d8) hc_list_double2_pane_g2_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double2_pane_g2

0x0001,

0x116c,	// (0x0000116c) hc_list_double2_pane_g_ParamLimits

0x116c,	// (0x0000116c) hc_list_double2_pane_g

0x029e,	// (0x0000029e) hc_list_double2_pane_t1_ParamLimits

0x029e,	// (0x0000029e) hc_list_double2_pane_t1

0x0376,	// (0x00000376) hc_list_double2_pane_t2_ParamLimits

0x0376,	// (0x00000376) hc_list_double2_pane_t2

0x0001,

0x11ab,	// (0x000011ab) hc_list_double2_pane_t_ParamLimits

0x11ab,	// (0x000011ab) hc_list_double2_pane_t

0x02c6,	// (0x000002c6) hc_list_double2_graphic_pane_g1_ParamLimits

0x02c6,	// (0x000002c6) hc_list_double2_graphic_pane_g1

0x01cc,	// (0x000001cc) hc_list_double2_graphic_pane_g2_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double2_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_double2_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double2_graphic_pane_g3

0x0002,

0x1189,	// (0x00001189) hc_list_double2_graphic_pane_g_ParamLimits

0x1189,	// (0x00001189) hc_list_double2_graphic_pane_g

0x02d2,	// (0x000002d2) hc_list_double2_graphic_pane_t1_ParamLimits

0x02d2,	// (0x000002d2) hc_list_double2_graphic_pane_t1

0x0388,	// (0x00000388) hc_list_double2_graphic_pane_t2_ParamLimits

0x0388,	// (0x00000388) hc_list_double2_graphic_pane_t2

0x0001,

0x11b0,	// (0x000011b0) hc_list_double2_graphic_pane_t_ParamLimits

0x11b0,	// (0x000011b0) hc_list_double2_graphic_pane_t

0x025c,	// (0x0000025c) hc_list_double2_large_graphic_pane_g1_ParamLimits

0x025c,	// (0x0000025c) hc_list_double2_large_graphic_pane_g1

0x01cc,	// (0x000001cc) hc_list_double2_large_graphic_pane_g2_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double2_large_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_double2_large_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double2_large_graphic_pane_g3

0x0002,

0x11b5,	// (0x000011b5) hc_list_double2_large_graphic_pane_g_ParamLimits

0x11b5,	// (0x000011b5) hc_list_double2_large_graphic_pane_g

0x034e,	// (0x0000034e) hc_list_double2_large_graphic_pane_t1_ParamLimits

0x034e,	// (0x0000034e) hc_list_double2_large_graphic_pane_t1

0x039a,	// (0x0000039a) hc_list_double2_large_graphic_pane_t2_ParamLimits

0x039a,	// (0x0000039a) hc_list_double2_large_graphic_pane_t2

0x0001,

0x11bc,	// (0x000011bc) hc_list_double2_large_graphic_pane_t_ParamLimits

0x11bc,	// (0x000011bc) hc_list_double2_large_graphic_pane_t

0x000a,	// (0x0000000a) main_hc_button_pane

0x00b1,	// (0x000000b1) aid_hc_size_touch_scroll_bar_ParamLimits

0x00b1,	// (0x000000b1) aid_hc_size_touch_scroll_bar

0x00ce,	// (0x000000ce) aid_hc_size_touch_scroll_bar_cp01_ParamLimits

0x00ce,	// (0x000000ce) aid_hc_size_touch_scroll_bar_cp01

0x00eb,	// (0x000000eb) hc_popup_scroll_hotspot_window

0x00f3,	// (0x000000f3) hc_scroll_pane_ParamLimits

0x0123,	// (0x00000123) hc_scroll_pane_cp01_ParamLimits

0x0123,	// (0x00000123) hc_scroll_pane_cp01

0x0139,	// (0x00000139) main_hc_listscroll_pane_g1_ParamLimits

0x0139,	// (0x00000139) main_hc_listscroll_pane_g1

0x014b,	// (0x0000014b) main_hc_listscroll_pane_g2_ParamLimits

0x014b,	// (0x0000014b) main_hc_listscroll_pane_g2

0x0001,

0x1167,	// (0x00001167) main_hc_listscroll_pane_g_ParamLimits

0x1167,	// (0x00001167) main_hc_listscroll_pane_g

0x0160,	// (0x00000160) hc_list_double_graphic_heading_pane

0x017a,	// (0x0000017a) aid_hc_size_max_handle_ParamLimits

0x017a,	// (0x0000017a) aid_hc_size_max_handle

0x0190,	// (0x00000190) aid_hc_size_min_handle_ParamLimits

0x0190,	// (0x00000190) aid_hc_size_min_handle

0x00a3,	// (0x000000a3) hc_scroll_bg_pane_ParamLimits

0x00a3,	// (0x000000a3) hc_scroll_bg_pane

0x01a4,	// (0x000001a4) hc_scroll_handle_pane_ParamLimits

0x01a4,	// (0x000001a4) hc_scroll_handle_pane

0x01b8,	// (0x000001b8) hc_scroll_pane_g1_ParamLimits

0x01b8,	// (0x000001b8) hc_scroll_pane_g1

0x01b8,	// (0x000001b8) hc_scroll_bg_pane_g1_ParamLimits

0x01b8,	// (0x000001b8) hc_scroll_bg_pane_g1

0x03ac,	// (0x000003ac) hc_scroll_bg_pane_g2_ParamLimits

0x03ac,	// (0x000003ac) hc_scroll_bg_pane_g2

0x03c4,	// (0x000003c4) hc_scroll_bg_pane_g3_ParamLimits

0x03c4,	// (0x000003c4) hc_scroll_bg_pane_g3

0x0002,

0x11c1,	// (0x000011c1) hc_scroll_bg_pane_g_ParamLimits

0x11c1,	// (0x000011c1) hc_scroll_bg_pane_g

0x01b8,	// (0x000001b8) hc_scroll_handle_pane_g1_ParamLimits

0x01b8,	// (0x000001b8) hc_scroll_handle_pane_g1

0x03ac,	// (0x000003ac) hc_scroll_handle_pane_g2_ParamLimits

0x03ac,	// (0x000003ac) hc_scroll_handle_pane_g2

0x03c4,	// (0x000003c4) hc_scroll_handle_pane_g3_ParamLimits

0x03c4,	// (0x000003c4) hc_scroll_handle_pane_g3

0x0002,

0x11c1,	// (0x000011c1) hc_scroll_handle_pane_g_ParamLimits

0x11c1,	// (0x000011c1) hc_scroll_handle_pane_g

0x000a,	// (0x0000000a) bg_hc_secondary_window

0x03dc,	// (0x000003dc) qfn_secondary_cp6

0x03ea,	// (0x000003ea) hc_button_pane

0x0095,	// (0x00000095) bg_hc_button_pane_ParamLimits

0x0095,	// (0x00000095) bg_hc_button_pane

0x03f2,	// (0x000003f2) hc_button_pane_g1_ParamLimits

0x03f2,	// (0x000003f2) hc_button_pane_g1

0x040d,	// (0x0000040d) hc_button_pane_t1_ParamLimits

0x040d,	// (0x0000040d) hc_button_pane_t1

0x042b,	// (0x0000042b) bg_hc_button_pane_g1

0x0433,	// (0x00000433) bg_hc_button_pane_g2

0x043b,	// (0x0000043b) bg_hc_button_pane_g3

0x0443,	// (0x00000443) bg_hc_button_pane_g4

0x044b,	// (0x0000044b) bg_hc_button_pane_g5

0x0453,	// (0x00000453) bg_hc_button_pane_g6

0x045b,	// (0x0000045b) bg_hc_button_pane_g7

0x0463,	// (0x00000463) bg_hc_button_pane_g8

0x046b,	// (0x0000046b) bg_hc_button_pane_g9

0x0008,

0x11c8,	// (0x000011c8) bg_hc_button_pane_g

0x02c6,	// (0x000002c6) hc_list_double_graphic_heading_pane_g1_ParamLimits

0x02c6,	// (0x000002c6) hc_list_double_graphic_heading_pane_g1

0x02fa,	// (0x000002fa) hc_list_double_graphic_heading_pane_g2_ParamLimits

0x02fa,	// (0x000002fa) hc_list_double_graphic_heading_pane_g2

0x0306,	// (0x00000306) hc_list_double_graphic_heading_pane_g3_ParamLimits

0x0306,	// (0x00000306) hc_list_double_graphic_heading_pane_g3

0x0002,

0x11db,	// (0x000011db) hc_list_double_graphic_heading_pane_g_ParamLimits

0x11db,	// (0x000011db) hc_list_double_graphic_heading_pane_g

0x0473,	// (0x00000473) hc_list_double_graphic_heading_pane_t1_ParamLimits

0x0473,	// (0x00000473) hc_list_double_graphic_heading_pane_t1

0x0485,	// (0x00000485) hc_list_double_graphic_heading_pane_t2_ParamLimits

0x0485,	// (0x00000485) hc_list_double_graphic_heading_pane_t2

0x0001,

0x11e2,	// (0x000011e2) hc_list_double_graphic_heading_pane_t_ParamLimits

0x11e2,	// (0x000011e2) hc_list_double_graphic_heading_pane_t

0x000a,	// (0x0000000a) main_hc_gridscroll_pane

0x000a,	// (0x0000000a) bg_hc_highlight_list_pane

0x049b,	// (0x0000049b) aid_hc_grid_cell_size_ParamLimits

0x049b,	// (0x0000049b) aid_hc_grid_cell_size

0x04b1,	// (0x000004b1) hc_scroll_pane_cp02_ParamLimits

0x04b1,	// (0x000004b1) hc_scroll_pane_cp02

0x04be,	// (0x000004be) main_hc_grid_pane_ParamLimits

0x04be,	// (0x000004be) main_hc_grid_pane

0x04d8,	// (0x000004d8) cell_hc_grid_pane_ParamLimits

0x04d8,	// (0x000004d8) cell_hc_grid_pane

0x0506,	// (0x00000506) bg_hc_highlight_grid_pane_ParamLimits

0x0506,	// (0x00000506) bg_hc_highlight_grid_pane

0x0514,	// (0x00000514) cell_hc_grid_pane_g1_ParamLimits

0x0514,	// (0x00000514) cell_hc_grid_pane_g1

0x0530,	// (0x00000530) cell_hc_grid_pane_t1_ParamLimits

0x0530,	// (0x00000530) cell_hc_grid_pane_t1

0x054a,	// (0x0000054a) bg_hc_highlight_grid_pane_g1_ParamLimits

0x054a,	// (0x0000054a) bg_hc_highlight_grid_pane_g1

0x0556,	// (0x00000556) bg_hc_highlight_grid_pane_g2_ParamLimits

0x0556,	// (0x00000556) bg_hc_highlight_grid_pane_g2

0x0562,	// (0x00000562) bg_hc_highlight_grid_pane_g3_ParamLimits

0x0562,	// (0x00000562) bg_hc_highlight_grid_pane_g3

0x056e,	// (0x0000056e) bg_hc_highlight_grid_pane_g4_ParamLimits

0x056e,	// (0x0000056e) bg_hc_highlight_grid_pane_g4

0x057a,	// (0x0000057a) bg_hc_highlight_grid_pane_g5_ParamLimits

0x057a,	// (0x0000057a) bg_hc_highlight_grid_pane_g5

0x0586,	// (0x00000586) bg_hc_highlight_grid_pane_g6_ParamLimits

0x0586,	// (0x00000586) bg_hc_highlight_grid_pane_g6

0x0592,	// (0x00000592) bg_hc_highlight_grid_pane_g7_ParamLimits

0x0592,	// (0x00000592) bg_hc_highlight_grid_pane_g7

0x059e,	// (0x0000059e) bg_hc_highlight_grid_pane_g8_ParamLimits

0x059e,	// (0x0000059e) bg_hc_highlight_grid_pane_g8

0x05aa,	// (0x000005aa) bg_hc_highlight_grid_pane_g9_ParamLimits

0x05aa,	// (0x000005aa) bg_hc_highlight_grid_pane_g9

0x05b6,	// (0x000005b6) bg_hc_highlight_grid_pane_g10_ParamLimits

0x05b6,	// (0x000005b6) bg_hc_highlight_grid_pane_g10

0x0009,

0x11e7,	// (0x000011e7) bg_hc_highlight_grid_pane_g_ParamLimits

0x11e7,	// (0x000011e7) bg_hc_highlight_grid_pane_g

0x0556,	// (0x00000556) bg_hc_highlight_list_pane_g1_ParamLimits

0x0556,	// (0x00000556) bg_hc_highlight_list_pane_g1

0x0556,	// (0x00000556) bg_hc_highlight_list_pane_g2_ParamLimits

0x0556,	// (0x00000556) bg_hc_highlight_list_pane_g2

0x0562,	// (0x00000562) bg_hc_highlight_list_pane_g3_ParamLimits

0x0562,	// (0x00000562) bg_hc_highlight_list_pane_g3

0x056e,	// (0x0000056e) bg_hc_highlight_list_pane_g4_ParamLimits

0x056e,	// (0x0000056e) bg_hc_highlight_list_pane_g4

0x057a,	// (0x0000057a) bg_hc_highlight_list_pane_g5_ParamLimits

0x057a,	// (0x0000057a) bg_hc_highlight_list_pane_g5

0x0586,	// (0x00000586) bg_hc_highlight_list_pane_g6_ParamLimits

0x0586,	// (0x00000586) bg_hc_highlight_list_pane_g6

0x0592,	// (0x00000592) bg_hc_highlight_list_pane_g7_ParamLimits

0x0592,	// (0x00000592) bg_hc_highlight_list_pane_g7

0x059e,	// (0x0000059e) bg_hc_highlight_list_pane_g8_ParamLimits

0x059e,	// (0x0000059e) bg_hc_highlight_list_pane_g8

0x05aa,	// (0x000005aa) bg_hc_highlight_list_pane_g9_ParamLimits

0x05aa,	// (0x000005aa) bg_hc_highlight_list_pane_g9

0x05b6,	// (0x000005b6) bg_hc_highlight_list_pane_g10_ParamLimits

0x05b6,	// (0x000005b6) bg_hc_highlight_list_pane_g10

0x0009,

0x11fc,	// (0x000011fc) bg_hc_highlight_list_pane_g_ParamLimits

0x11fc,	// (0x000011fc) bg_hc_highlight_list_pane_g

0x002d,	// (0x0000002d) area_side_right_pane_ParamLimits

0x002d,	// (0x0000002d) area_side_right_pane

0x007a,	// (0x0000007a) popup_toolbar2_fixed_window_cp001

0x0087,	// (0x00000087) main_aa_coverflow_pane

0x000a,	// (0x0000000a) main_aa_empty_pane

0x000a,	// (0x0000000a) main_aa_fastscroll_pane

0x0095,	// (0x00000095) main_aa_gridscroll_pane_ParamLimits

0x0095,	// (0x00000095) main_aa_gridscroll_pane

0x000a,	// (0x0000000a) main_aa_listscroll_pane

0x00a3,	// (0x000000a3) main_aa_metadata_pane

0x00a3,	// (0x000000a3) main_aa_slider_pane

0x05c8,	// (0x000005c8) aacf_image_pane_ParamLimits

0x05c8,	// (0x000005c8) aacf_image_pane

0x0601,	// (0x00000601) aacf_image_pane_cp001_ParamLimits

0x0601,	// (0x00000601) aacf_image_pane_cp001

0x062f,	// (0x0000062f) aacf_image_pane_cp002_ParamLimits

0x062f,	// (0x0000062f) aacf_image_pane_cp002

0x067f,	// (0x0000067f) aacf_slider_pane

0x0694,	// (0x00000694) main_aa_coverflow_pane_t1_ParamLimits

0x0694,	// (0x00000694) main_aa_coverflow_pane_t1

0x06a6,	// (0x000006a6) aacf_image_pane_g1_ParamLimits

0x06a6,	// (0x000006a6) aacf_image_pane_g1

0x065d,	// (0x0000065d) aacf_image_title_pane_ParamLimits

0x065d,	// (0x0000065d) aacf_image_title_pane

0x06b3,	// (0x000006b3) aacf_slider_pane_g1

0x06bb,	// (0x000006bb) aacf_slider_pane_g1_cp001

0x06c3,	// (0x000006c3) aaslider_bg_pane

0x06cb,	// (0x000006cb) aacf_image_title_pane_g1_ParamLimits

0x06cb,	// (0x000006cb) aacf_image_title_pane_g1

0x06d9,	// (0x000006d9) aacf_image_title_pane_t1_ParamLimits

0x06d9,	// (0x000006d9) aacf_image_title_pane_t1

0x06eb,	// (0x000006eb) aacf_image_title_pane_t2_ParamLimits

0x06eb,	// (0x000006eb) aacf_image_title_pane_t2

0x0001,

0x1211,	// (0x00001211) aacf_image_title_pane_t_ParamLimits

0x1211,	// (0x00001211) aacf_image_title_pane_t

0x06fd,	// (0x000006fd) aafs_strip_pane_ParamLimits

0x06fd,	// (0x000006fd) aafs_strip_pane

0x0710,	// (0x00000710) main_aa_fastscroll_pane_g1_ParamLimits

0x0710,	// (0x00000710) main_aa_fastscroll_pane_g1

0x071f,	// (0x0000071f) main_aa_fastscroll_pane_g2_ParamLimits

0x071f,	// (0x0000071f) main_aa_fastscroll_pane_g2

0x0001,

0x1216,	// (0x00001216) main_aa_fastscroll_pane_g_ParamLimits

0x1216,	// (0x00001216) main_aa_fastscroll_pane_g

0x072c,	// (0x0000072c) aafs_strip_grid_pane_ParamLimits

0x072c,	// (0x0000072c) aafs_strip_grid_pane

0x00a3,	// (0x000000a3) aafs_strip_shadow_pane_ParamLimits

0x00a3,	// (0x000000a3) aafs_strip_shadow_pane

0x073a,	// (0x0000073a) aafs_strip_grid_pane_g1_ParamLimits

0x073a,	// (0x0000073a) aafs_strip_grid_pane_g1

0x0765,	// (0x00000765) aa_scroll_pane

0x076e,	// (0x0000076e) aalist_gene_pane_ParamLimits

0x076e,	// (0x0000076e) aalist_gene_pane

0x0786,	// (0x00000786) aalist_double_entry_pane_ParamLimits

0x0786,	// (0x00000786) aalist_double_entry_pane

0x0786,	// (0x00000786) aalist_double_graphic_pane_ParamLimits

0x0786,	// (0x00000786) aalist_double_graphic_pane

0x0786,	// (0x00000786) aalist_double_pane_ParamLimits

0x0786,	// (0x00000786) aalist_double_pane

0x0786,	// (0x00000786) aalist_double_progress_pane_ParamLimits

0x0786,	// (0x00000786) aalist_double_progress_pane

0x0786,	// (0x00000786) aalist_gene_ad_pane_ParamLimits

0x0786,	// (0x00000786) aalist_gene_ad_pane

0x0797,	// (0x00000797) aalist_single_pane_ParamLimits

0x0797,	// (0x00000797) aalist_single_pane

0x07b4,	// (0x000007b4) aalist_single_pane_g1_ParamLimits

0x07b4,	// (0x000007b4) aalist_single_pane_g1

0x07c0,	// (0x000007c0) aalist_single_pane_g2_ParamLimits

0x07c0,	// (0x000007c0) aalist_single_pane_g2

0x0004,

0x121b,	// (0x0000121b) aalist_single_pane_g_ParamLimits

0x121b,	// (0x0000121b) aalist_single_pane_g

0x07fc,	// (0x000007fc) aalist_single_pane_t1_ParamLimits

0x07fc,	// (0x000007fc) aalist_single_pane_t1

0x081a,	// (0x0000081a) aalist_double_pane_g1_ParamLimits

0x081a,	// (0x0000081a) aalist_double_pane_g1

0x0826,	// (0x00000826) aalist_double_pane_g2_ParamLimits

0x0826,	// (0x00000826) aalist_double_pane_g2

0x0001,

0x1226,	// (0x00001226) aalist_double_pane_g_ParamLimits

0x1226,	// (0x00001226) aalist_double_pane_g

0x083a,	// (0x0000083a) aalist_double_pane_t1_ParamLimits

0x083a,	// (0x0000083a) aalist_double_pane_t1

0x0850,	// (0x00000850) aalist_double_pane_t2_ParamLimits

0x0850,	// (0x00000850) aalist_double_pane_t2

0x0001,

0x122b,	// (0x0000122b) aalist_double_pane_t_ParamLimits

0x122b,	// (0x0000122b) aalist_double_pane_t

0x0862,	// (0x00000862) aalist_double_graphic_pane_g1_ParamLimits

0x0862,	// (0x00000862) aalist_double_graphic_pane_g1

0x0877,	// (0x00000877) aalist_double_graphic_pane_g2_ParamLimits

0x0877,	// (0x00000877) aalist_double_graphic_pane_g2

0x0897,	// (0x00000897) aalist_double_graphic_pane_g3_ParamLimits

0x0897,	// (0x00000897) aalist_double_graphic_pane_g3

0x08b3,	// (0x000008b3) aalist_double_graphic_pane_g4_ParamLimits

0x08b3,	// (0x000008b3) aalist_double_graphic_pane_g4

0x08d3,	// (0x000008d3) aalist_double_graphic_pane_g5_ParamLimits

0x08d3,	// (0x000008d3) aalist_double_graphic_pane_g5

0x08f3,	// (0x000008f3) aalist_double_graphic_pane_g6_ParamLimits

0x08f3,	// (0x000008f3) aalist_double_graphic_pane_g6

0x0920,	// (0x00000920) aalist_double_graphic_pane_g7_ParamLimits

0x0920,	// (0x00000920) aalist_double_graphic_pane_g7

0x094d,	// (0x0000094d) aalist_double_graphic_pane_g8_ParamLimits

0x094d,	// (0x0000094d) aalist_double_graphic_pane_g8

0x0971,	// (0x00000971) aalist_double_graphic_pane_g9_ParamLimits

0x0971,	// (0x00000971) aalist_double_graphic_pane_g9

0x0995,	// (0x00000995) aalist_double_graphic_pane_g10_ParamLimits

0x0995,	// (0x00000995) aalist_double_graphic_pane_g10

0x09b9,	// (0x000009b9) aalist_double_graphic_pane_g11_ParamLimits

0x09b9,	// (0x000009b9) aalist_double_graphic_pane_g11

0x000a,

0x1230,	// (0x00001230) aalist_double_graphic_pane_g_ParamLimits

0x1230,	// (0x00001230) aalist_double_graphic_pane_g

0x09dd,	// (0x000009dd) aalist_double_graphic_pane_t1_ParamLimits

0x09dd,	// (0x000009dd) aalist_double_graphic_pane_t1

0x09f7,	// (0x000009f7) aalist_double_graphic_pane_t2_ParamLimits

0x09f7,	// (0x000009f7) aalist_double_graphic_pane_t2

0x0001,

0x1247,	// (0x00001247) aalist_double_graphic_pane_t_ParamLimits

0x1247,	// (0x00001247) aalist_double_graphic_pane_t

0x0a11,	// (0x00000a11) aalist_double_entry_pane_t1

0x0a1f,	// (0x00000a1f) aalist_entry_pane

0x0a27,	// (0x00000a27) aalist_entry_pane_t1

0x000a,	// (0x0000000a) input_focus_pane_cp001

0x0a35,	// (0x00000a35) aalist_double_progress_pane_g1_ParamLimits

0x0a35,	// (0x00000a35) aalist_double_progress_pane_g1

0x0a66,	// (0x00000a66) aalist_double_progress_pane_g2_ParamLimits

0x0a66,	// (0x00000a66) aalist_double_progress_pane_g2

0x0a96,	// (0x00000a96) aalist_double_progress_pane_g3_ParamLimits

0x0a96,	// (0x00000a96) aalist_double_progress_pane_g3

0x0002,

0x124c,	// (0x0000124c) aalist_double_progress_pane_g_ParamLimits

0x124c,	// (0x0000124c) aalist_double_progress_pane_g

0x0ac6,	// (0x00000ac6) aalist_double_progress_pane_t1_ParamLimits

0x0ac6,	// (0x00000ac6) aalist_double_progress_pane_t1

0x0aea,	// (0x00000aea) aalist_double_progress_pane_t2_ParamLimits

0x0aea,	// (0x00000aea) aalist_double_progress_pane_t2

0x0afc,	// (0x00000afc) aalist_double_progress_pane_t3_ParamLimits

0x0afc,	// (0x00000afc) aalist_double_progress_pane_t3

0x0002,

0x1253,	// (0x00001253) aalist_double_progress_pane_t_ParamLimits

0x1253,	// (0x00001253) aalist_double_progress_pane_t

0x0b0e,	// (0x00000b0e) aalist_progress_pane_ParamLimits

0x0b0e,	// (0x00000b0e) aalist_progress_pane

0x0b30,	// (0x00000b30) aalist_progress_pane_g1

0x0b39,	// (0x00000b39) aalist_progress_pane_g2

0x0b42,	// (0x00000b42) aalist_progress_pane_g3

0x0003,

0x125a,	// (0x0000125a) aalist_progress_pane_g

0x0b4b,	// (0x00000b4b) aalist_gene_ad_pane_g1

0x0b54,	// (0x00000b54) main_aa_empty_pane_t1

0x0b62,	// (0x00000b62) main_aa_empty_pane_t2

0x0b70,	// (0x00000b70) main_aa_empty_pane_t3

0x0b7e,	// (0x00000b7e) main_aa_empty_pane_t4

0x0003,

0x1263,	// (0x00001263) main_aa_empty_pane_t

0x0b8c,	// (0x00000b8c) aa_scroll_pane_cp001_ParamLimits

0x0b8c,	// (0x00000b8c) aa_scroll_pane_cp001

0x0ba7,	// (0x00000ba7) aa_taskswapper_pane_ParamLimits

0x0ba7,	// (0x00000ba7) aa_taskswapper_pane

0x0bb3,	// (0x00000bb3) aagrid_gene_pane_ParamLimits

0x0bb3,	// (0x00000bb3) aagrid_gene_pane

0x0bcd,	// (0x00000bcd) aagrid_cell_image_pane_ParamLimits

0x0bcd,	// (0x00000bcd) aagrid_cell_image_pane

0x0c4f,	// (0x00000c4f) aagrid_cell_image_pane_g1_ParamLimits

0x0c4f,	// (0x00000c4f) aagrid_cell_image_pane_g1

0x0c79,	// (0x00000c79) aagrid_cell_image_pane_g2_ParamLimits

0x0c79,	// (0x00000c79) aagrid_cell_image_pane_g2

0x0c9d,	// (0x00000c9d) aagrid_cell_image_pane_g3_ParamLimits

0x0c9d,	// (0x00000c9d) aagrid_cell_image_pane_g3

0x0cb6,	// (0x00000cb6) aagrid_cell_image_pane_g4_ParamLimits

0x0cb6,	// (0x00000cb6) aagrid_cell_image_pane_g4

0x0003,

0x126c,	// (0x0000126c) aagrid_cell_image_pane_g_ParamLimits

0x126c,	// (0x0000126c) aagrid_cell_image_pane_g

0x0ccf,	// (0x00000ccf) aagrid_cell_image_pane_t1_ParamLimits

0x0ccf,	// (0x00000ccf) aagrid_cell_image_pane_t1

0x0506,	// (0x00000506) grid_highlight_pane_cp001_ParamLimits

0x0506,	// (0x00000506) grid_highlight_pane_cp001

0x0ce1,	// (0x00000ce1) aa_taskswapper_pane_g1_ParamLimits

0x0ce1,	// (0x00000ce1) aa_taskswapper_pane_g1

0x0cee,	// (0x00000cee) aa_taskswapper_pane_t1_ParamLimits

0x0cee,	// (0x00000cee) aa_taskswapper_pane_t1

0x0d00,	// (0x00000d00) aatasksw_grid_pane_ParamLimits

0x0d00,	// (0x00000d00) aatasksw_grid_pane

0x0d0e,	// (0x00000d0e) aatasksw_cell_pane_ParamLimits

0x0d0e,	// (0x00000d0e) aatasksw_cell_pane

0x0d21,	// (0x00000d21) aatasksw_cell_pane_g1

0x000a,	// (0x0000000a) grid_highlight_pane_cp002

0x0d2a,	// (0x00000d2a) aamd_info_pane

0x0d33,	// (0x00000d33) aamd_list_pane

0x0d3b,	// (0x00000d3b) aamd_list_double_pane_ParamLimits

0x0d3b,	// (0x00000d3b) aamd_list_double_pane

0x0d4d,	// (0x00000d4d) aamd_list_single_pane_ParamLimits

0x0d4d,	// (0x00000d4d) aamd_list_single_pane

0x0d63,	// (0x00000d63) aamd_list_single_pane_g1_ParamLimits

0x0d63,	// (0x00000d63) aamd_list_single_pane_g1

0x0d70,	// (0x00000d70) aamd_list_single_pane_g2_ParamLimits

0x0d70,	// (0x00000d70) aamd_list_single_pane_g2

0x0d7c,	// (0x00000d7c) aamd_list_single_pane_g3_ParamLimits

0x0d7c,	// (0x00000d7c) aamd_list_single_pane_g3

0x0002,

0x1275,	// (0x00001275) aamd_list_single_pane_g_ParamLimits

0x1275,	// (0x00001275) aamd_list_single_pane_g

0x0d94,	// (0x00000d94) aamd_list_single_pane_t1_ParamLimits

0x0d94,	// (0x00000d94) aamd_list_single_pane_t1

0x0d63,	// (0x00000d63) aamd_list_double_pane_g1_ParamLimits

0x0d63,	// (0x00000d63) aamd_list_double_pane_g1

0x0dae,	// (0x00000dae) aamd_list_double_pane_g2_ParamLimits

0x0dae,	// (0x00000dae) aamd_list_double_pane_g2

0x0dba,	// (0x00000dba) aamd_list_double_pane_g3_ParamLimits

0x0dba,	// (0x00000dba) aamd_list_double_pane_g3

0x0002,

0x127c,	// (0x0000127c) aamd_list_double_pane_g_ParamLimits

0x127c,	// (0x0000127c) aamd_list_double_pane_g

0x0dd2,	// (0x00000dd2) aamd_list_double_pane_t1_ParamLimits

0x0dd2,	// (0x00000dd2) aamd_list_double_pane_t1

0x0de9,	// (0x00000de9) aamd_list_double_pane_t2_ParamLimits

0x0de9,	// (0x00000de9) aamd_list_double_pane_t2

0x0001,

0x1283,	// (0x00001283) aamd_list_double_pane_t_ParamLimits

0x1283,	// (0x00001283) aamd_list_double_pane_t

0x0e00,	// (0x00000e00) aamd_info_pane_g1_ParamLimits

0x0e00,	// (0x00000e00) aamd_info_pane_g1

0x0e0e,	// (0x00000e0e) aamd_info_pane_g2_ParamLimits

0x0e0e,	// (0x00000e0e) aamd_info_pane_g2

0x0e1a,	// (0x00000e1a) aamd_info_pane_g3_ParamLimits

0x0e1a,	// (0x00000e1a) aamd_info_pane_g3

0x0002,

0x1288,	// (0x00001288) aamd_info_pane_g_ParamLimits

0x1288,	// (0x00001288) aamd_info_pane_g

0x0e26,	// (0x00000e26) aamd_info_pane_t1_ParamLimits

0x0e26,	// (0x00000e26) aamd_info_pane_t1

0x0e3b,	// (0x00000e3b) aamd_info_pane_t2_ParamLimits

0x0e3b,	// (0x00000e3b) aamd_info_pane_t2

0x0e5a,	// (0x00000e5a) aamd_info_pane_t3_ParamLimits

0x0e5a,	// (0x00000e5a) aamd_info_pane_t3

0x0002,

0x128f,	// (0x0000128f) aamd_info_pane_t_ParamLimits

0x128f,	// (0x0000128f) aamd_info_pane_t

0x0b30,	// (0x00000b30) aaslider_bg_pane_g1

0x0b42,	// (0x00000b42) aaslider_bg_pane_g2

0x0001,

0x1296,	// (0x00001296) aaslider_bg_pane_g

0x0b39,	// (0x00000b39) aaslider_bg_pane_g2_copy1

0x1c99,	// (0x00001c99) aaslider_pane_ParamLimits

0x1c99,	// (0x00001c99) aaslider_pane

0x0e9e,	// (0x00000e9e) aaslider_bg_pane_cp001_ParamLimits

0x0e9e,	// (0x00000e9e) aaslider_bg_pane_cp001

0x0ed2,	// (0x00000ed2) aaslider_pane_g1_ParamLimits

0x0ed2,	// (0x00000ed2) aaslider_pane_g1

0x0eec,	// (0x00000eec) aaslider_pane_g2_ParamLimits

0x0eec,	// (0x00000eec) aaslider_pane_g2

0x0f10,	// (0x00000f10) aaslider_pane_g3_ParamLimits

0x0f10,	// (0x00000f10) aaslider_pane_g3

0x0004,

0x129b,	// (0x0000129b) aaslider_pane_g_ParamLimits

0x129b,	// (0x0000129b) aaslider_pane_g

0x0f42,	// (0x00000f42) aaslider_pane_t1_ParamLimits

0x0f42,	// (0x00000f42) aaslider_pane_t1

0x0f58,	// (0x00000f58) aaslider_pane_t2_ParamLimits

0x0f58,	// (0x00000f58) aaslider_pane_t2

0x0f6e,	// (0x00000f6e) aaslider_pane_t3_ParamLimits

0x0f6e,	// (0x00000f6e) aaslider_pane_t3

0x0002,

0x12a6,	// (0x000012a6) aaslider_pane_t_ParamLimits

0x12a6,	// (0x000012a6) aaslider_pane_t

0x0f8c,	// (0x00000f8c) aid_touch_size_slider_marker_ParamLimits

0x0f8c,	// (0x00000f8c) aid_touch_size_slider_marker

0x0797,	// (0x00000797) aalist_list_sub_pane_ParamLimits

0x0797,	// (0x00000797) aalist_list_sub_pane

0x07d8,	// (0x000007d8) aalist_single_pane_g3_ParamLimits

0x07d8,	// (0x000007d8) aalist_single_pane_g3

0x07e4,	// (0x000007e4) aalist_single_pane_g4_ParamLimits

0x07e4,	// (0x000007e4) aalist_single_pane_g4

0x0087,	// (0x00000087) list_highlight_pane_cp001

0x0feb,	// (0x00000feb) aalist_list_sub_pane_g1_ParamLimits

0x0feb,	// (0x00000feb) aalist_list_sub_pane_g1

0x0ff7,	// (0x00000ff7) aalist_list_sub_pane_g2_ParamLimits

0x0ff7,	// (0x00000ff7) aalist_list_sub_pane_g2

0x1003,	// (0x00001003) aalist_list_sub_pane_g3_ParamLimits

0x1003,	// (0x00001003) aalist_list_sub_pane_g3

0x100f,	// (0x0000100f) aalist_list_sub_pane_g4_ParamLimits

0x100f,	// (0x0000100f) aalist_list_sub_pane_g4

0x101b,	// (0x0000101b) aalist_list_sub_pane_g5_ParamLimits

0x101b,	// (0x0000101b) aalist_list_sub_pane_g5

0x104b,	// (0x0000104b) aalist_list_sub_pane_g7_ParamLimits

0x104b,	// (0x0000104b) aalist_list_sub_pane_g7

0x0005,

0x12b4,	// (0x000012b4) aalist_list_sub_pane_g_ParamLimits

0x12b4,	// (0x000012b4) aalist_list_sub_pane_g

0x1083,	// (0x00001083) aalist_list_sub_pane_t1_ParamLimits

0x1083,	// (0x00001083) aalist_list_sub_pane_t1

0x1098,	// (0x00001098) aalist_list_sub_pane_t2_ParamLimits

0x1098,	// (0x00001098) aalist_list_sub_pane_t2

0x0001,

0x12c1,	// (0x000012c1) aalist_list_sub_pane_t_ParamLimits

0x12c1,	// (0x000012c1) aalist_list_sub_pane_t

0x0087,	// (0x00000087) main_aa_coverflow_pane_ParamLimits

0x00a3,	// (0x000000a3) main_aa_metadata_pane_ParamLimits

0x07f0,	// (0x000007f0) aalist_single_pane_g5_ParamLimits

0x07f0,	// (0x000007f0) aalist_single_pane_g5

0x0087,	// (0x00000087) list_highlight_pane_cp001_ParamLimits

0x067f,	// (0x0000067f) aacf_slider_pane_ParamLimits

0x000a,	// (0x0000000a) main_aa_video_pane

0x077e,	// (0x0000077e) aid_size_touch_aascroll_bar

0x0786,	// (0x00000786) aalist_single_large_graphic_pane_ParamLimits

0x0786,	// (0x00000786) aalist_single_large_graphic_pane

0x0f22,	// (0x00000f22) aaslider_pane_g4_ParamLimits

0x0f22,	// (0x00000f22) aaslider_pane_g4

0x0f32,	// (0x00000f32) aaslider_pane_g5_ParamLimits

0x0f32,	// (0x00000f32) aaslider_pane_g5

0x0fb0,	// (0x00000fb0) aid_touch_size_slider_max_ParamLimits

0x0fb0,	// (0x00000fb0) aid_touch_size_slider_max

0x0fc0,	// (0x00000fc0) aid_touch_size_slider_min_ParamLimits

0x0fc0,	// (0x00000fc0) aid_touch_size_slider_min

0x1114,	// (0x00001114) aalist_single_large_graphic_pane_g1_ParamLimits

0x1114,	// (0x00001114) aalist_single_large_graphic_pane_g1

0x1121,	// (0x00001121) aalist_single_large_graphic_pane_g2_ParamLimits

0x1121,	// (0x00001121) aalist_single_large_graphic_pane_g2

0x112d,	// (0x0000112d) aalist_single_large_graphic_pane_g3_ParamLimits

0x112d,	// (0x0000112d) aalist_single_large_graphic_pane_g3

0x0002,

0x12c6,	// (0x000012c6) aalist_single_large_graphic_pane_g_ParamLimits

0x12c6,	// (0x000012c6) aalist_single_large_graphic_pane_g

0x1141,	// (0x00001141) aalist_single_large_graphic_pane_t1_ParamLimits

0x1141,	// (0x00001141) aalist_single_large_graphic_pane_t1

0x1157,	// (0x00001157) main_aa_video_pane_g1_ParamLimits

0x1157,	// (0x00001157) main_aa_video_pane_g1

0x068c,	// (0x0000068c) main_aa_coverflow_pane_g1

0x07ab,	// (0x000007ab) aid_size_min_handle_cp002

0x007a,	// (0x0000007a) popup_toolbar2_fixed_window_cp001_ParamLimits

0x00a3,	// (0x000000a3) main_aa_slider_pane_ParamLimits

0x07ab,	// (0x000007ab) aid_size_min_handle_cp001

0x0fd0,	// (0x00000fd0) aaslider_bg_pane_cp001_g1

0x0fd9,	// (0x00000fd9) aaslider_bg_pane_cp001_g2

0x0fe2,	// (0x00000fe2) aaslider_bg_pane_cp001_g3

0x0002,

0x12ad,	// (0x000012ad) aaslider_bg_pane_cp001_g

0x0b30,	// (0x00000b30) aalist_progress_pane_g4

0x0f84,	// (0x00000f84) aid_aaslider_pane_rect_inner
};


const AknLayoutScalable_UiAccel::SCdlImpl KCdlImpl = 
	{
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_hqp_c_qvga_prt_Normal
