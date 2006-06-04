#---------------------------------------------------------------*
#                                                               *
#                        MAKEFILE                               *
#   for building on MacOSX Sara command line tools for Win32    *
#                                                               *
#---------------------------------------------------------------*

#--- Release and debug versions of galgas
EXECUTABLE := sara.exe
EXECUTABLE_DEBUG := sara_debug.exe

#---------------------------------------------------------------*
#                                                               *
#     Object files directory                                    *
#                                                               *
#---------------------------------------------------------------*

OBJECTS_DIR := objects
DEBUG_OBJECTS_DIR := debug_objects

#---------------------------------------------------------------*

#--- Linker Options for this platform
PLATFORM_LINKER_OPTIONS := -lcomdlg32

#---------------------------------------------------------------*

include ../common_files_for_make/makefile.mke

#---------------------------------------------------------------*
#                                                               *
#     Include MinGW gcc tools definitions for MAC OS X          *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/mingw_on_macosx_gcc_tools_32.mke

#---------------------------------------------------------------*
#                                                               *
#     Include makefile that performs actual work                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke

#---------------------------------------------------------------*
