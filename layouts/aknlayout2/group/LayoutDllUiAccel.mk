#
# Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
# All rights reserved.
# This component and the accompanying materials are made available
# under the terms of "Eclipse Public License v1.0"
# which accompanies this distribution, and is available
# at the URL "http://www.eclipse.org/legal/epl-v10.html".
#
# Initial Contributors:
# Nokia Corporation - initial contribution.
#
# Contributors:
#
# Description:
#

include layoutConfig.mk

layout_gen_dir = $(gen_dir)\$(name)_uiaccel$(delivery)

Elaf_Portrait_Pack_Contents=\
        EAknLayoutIdELAF \
        AknLayoutScalable_Elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_$$ZOOM

Abrw_Portrait_Pack_Contents=\
        EAknLayoutIdABRW \
        AknLayoutScalable_Abrw_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_$$ZOOM

Apac_Portrait_Pack_Contents=\
        EAknLayoutIdAPAC \
        AknLayoutScalable_Elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_$$ZOOM

Elaf_Landscape_Pack_Contents=\
        EAknLayoutIdELAF \
        AknLayoutScalable_Elaf_h$(land_code)_c_$(short)_lsc$(touch)$(delivery)_$$ZOOM

Abrw_Landscape_Pack_Contents=\
	EAknLayoutIdABRW \
        AknLayoutScalable_Abrw_h$(land_code)_c_$(short)_lsc$(touch)$(delivery)_$$ZOOM

Apac_Landscape_Pack_Contents=\
        EAknLayoutIdAPAC \
        AknLayoutScalable_Elaf_h$(land_code)_c_$(short)_lsc$(touch)$(delivery)_$$ZOOM


pkg = @AknLayoutCompiler -p$(layout_gen_dir) LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d$(delivery) -p$(priority) -a$(appUid)

Elaf_portrait :
	$(pkg) UiAccel_Elaf_$(name)_$$ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Elaf_Portrait_Pack_Contents) >> $(layout_gen_dir)\uiaccel_instances.txt

Abrw_portrait :
	$(pkg) UiAccel_Abrw_$(name)_$$ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Abrw_Portrait_Pack_Contents) >> $(layout_gen_dir)\uiaccel_instances.txt

Apac_portrait :
	$(pkg) UiAccel_Apac_$(name)_$$ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Apac_Portrait_Pack_Contents) >> $(layout_gen_dir)\uiaccel_instances.txt

Elaf_landscape :
	$(pkg) UiAccel_Elaf_$(name)_land_$$ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Elaf_Landscape_Pack_Contents) >> $(layout_gen_dir)\uiaccel_instances.txt

Abrw_landscape :
	$(pkg) UiAccel_Abrw_$(name)_land_$$ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Abrw_Landscape_Pack_Contents) >> $(layout_gen_dir)\uiaccel_instances.txt

Apac_landscape :
	$(pkg) UiAccel_Apac_$(name)_land_$$ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Apac_Landscape_Pack_Contents) >> $(layout_gen_dir)\uiaccel_instances.txt

clean_inst_list : 
	@-del /q $(layout_gen_dir)\uiaccel_instances.txt > nul 2>&1

layout_packages : \
	clean_inst_list \
	Elaf_portrait \
	Abrw_portrait \
	Apac_portrait \
	Elaf_landscape \
	Abrw_landscape \
	Apac_landscape

do_nothing :
	@rem do_nothing

standard_flags = -p$(layout_gen_dir) MLCompCdl2InstO -i$(layout_gen_dir)\uiaccel_instances.txt -z..\generated\LayoutZoomFactorConfig.txt -allparams -d$(delivery)

make_layout_gen_dir : make_gen_dir
	@-md $(layout_gen_dir) > nul 2>&1


# Note: AknLayoutScalable_Elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_normal.cpp
# acts as a proxy for all uiaccel scalable instance source code
uiaccel_scalable_instances_cpp=\
    $(layout_gen_dir)\AknLayoutScalable_Elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery)_normal.cpp

ifndef delivery
delivery_dir=_all
endif
ifdef delivery
delivery_dir=$(delivery)
endif

uiaccel_scalable_instances_dep=\
    ..\generated\LayoutZoomFactorConfig.txt \
    ..\cdl\AknLayoutScalable_UiAccel.cdl \
    ..\xml\c\$(delivery_dir)\h$(prt_code)_c_$(short)_prt$(touch)$(delivery)\display_eur_compData.xml \
    ..\xml\c\$(delivery_dir)\h$(prt_code)_c_$(short)_prt$(touch)$(delivery)\display_arabic_hebrew_compData.xml \
    ..\xml\c\$(delivery_dir)\h$(land_code)_c_$(short)_lsc$(touch)$(delivery)\display_eur_compData.xml \
    ..\xml\c\$(delivery_dir)\h$(land_code)_c_$(short)_lsc$(touch)$(delivery)\display_arabic_hebrew_compData.xml \
    ..\xml\c\$(delivery_dir)\h$(prt_code)_c_$(short)_prt$(touch)$(delivery)\display_eur_attributes.xml \
    ..\xml\c\$(delivery_dir)\h$(prt_code)_c_$(short)_prt$(touch)$(delivery)\display_arabic_hebrew_attributes.xml \
    ..\xml\c\$(delivery_dir)\h$(land_code)_c_$(short)_lsc$(touch)$(delivery)\display_eur_attributes.xml \
    ..\xml\c\$(delivery_dir)\h$(land_code)_c_$(short)_lsc$(touch)$(delivery)\display_arabic_hebrew_attributes.xml


$(uiaccel_scalable_instances_cpp): $(uiaccel_scalable_instances_dep)
	@rem
	@rem instance source for ui accelerator scalable layout APIs
	@rem
	@rem force rebuild of target cpp file
	@-del /q $(uiaccel_scalable_instances_cpp) > nul 2>&1
	@AknLayoutCompiler $(standard_flags) ..\cdl\AknLayoutScalable_UiAccel.cdl \
            -a \
            ..\xml\c\$(delivery_dir)\h$(prt_code)_c_$(short)_prt$(touch)$(delivery)\display_eur_compData.xml AknLayoutScalable_Elaf_h$(prt_code)_c_$(short)_prt$(touch)$(delivery) \
            -m..\xml\c\$(delivery_dir)\h$(prt_code)_c_$(short)_prt$(touch)$(delivery)\display_arabic_hebrew_compData.xml AknLayoutScalable_Abrw_h$(prt_code)_c_$(short)_prt$(touch)$(delivery) \
            ..\xml\c\$(delivery_dir)\h$(land_code)_c_$(short)_lsc$(touch)$(delivery)\display_eur_compData.xml AknLayoutScalable_Elaf_h$(land_code)_c_$(short)_lsc$(touch)$(delivery) \
            -m..\xml\c\$(delivery_dir)\h$(land_code)_c_$(short)_lsc$(touch)$(delivery)\display_arabic_hebrew_compData.xml AknLayoutScalable_Abrw_h$(land_code)_c_$(short)_lsc$(touch)$(delivery)


INSTANCES: \
    $(uiaccel_scalable_instances_cpp)


DLL:
	@rem
	@rem the DLL
	@rem
	@CdlCompiler dll \
		-n$(dllversion) \
		\
		-p$(layout_gen_dir) \
		\
		-laknlayout2scalable.lib \
		-lcdlengine.lib \
		\
		-s..\..\decodelib\Aknlayout2scalabledecode.cpp \
		\
		"-esysteminclude .."\
		\
		UiAccel_LayoutInst_$(name)$(delivery) $(uid) \
		\
		@$(layout_gen_dir)\uiaccel_instances.txt

MAKMAKE : \
	make_layout_gen_dir \
	layout_packages \
	INSTANCES \
	DLL
	
BLD : do_nothing

CLEAN :

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES : do_nothing

FINAL : do_nothing


