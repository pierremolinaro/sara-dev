#---------------------------------------------------------------*
#                                                               *
# MAKEFILE for building sara command line tools                 *
# for i386 Linux, compiled on Mac OS X                          *
#                                                               *
#---------------------------------------------------------------*

#--- Release and debug versions of common_sources_makefile.mke
EXECUTABLE := sara
EXECUTABLE_DEBUG := sara_debug

#---------------------------------------------------------------*
#                                                               *
#     Object files directory                                    *
#                                                               *
#---------------------------------------------------------------*

OBJECTS_DIR := objects
DEBUG_OBJECTS_DIR := debug_objects

#--- Install directory (for "install" goal)
INSTALL_DIR := /usr/bin

#---------------------------------------------------------------*

#--- Linker Options for this platform
PLATFORM_LINKER_OPTIONS :=

#---------------------------------------------------------------*

include ../common_files_for_make/makefile.mke

#---------------------------------------------------------------*
#                                                               *
#     Include gcc tools for i386 Linux on MAC OS X              *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/x86linux_on_macosx_gcc_tools_32.mke

#---------------------------------------------------------------*
#                                                               *
#     Include makefile that performs actual work                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke

#---------------------------------------------------------------*
