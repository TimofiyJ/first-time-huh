# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\1\Desktop\path

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\1\Desktop\path\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\path.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\path.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\path.dir\flags.make

CMakeFiles\path.dir\main.c.obj: CMakeFiles\path.dir\flags.make
CMakeFiles\path.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\1\Desktop\path\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/path.dir/main.c.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\path.dir\main.c.obj /FdCMakeFiles\path.dir\ /FS -c C:\Users\1\Desktop\path\main.c
<<

CMakeFiles\path.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/path.dir/main.c.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\path.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\1\Desktop\path\main.c
<<

CMakeFiles\path.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/path.dir/main.c.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\path.dir\main.c.s /c C:\Users\1\Desktop\path\main.c
<<

CMakeFiles\path.dir\func.c.obj: CMakeFiles\path.dir\flags.make
CMakeFiles\path.dir\func.c.obj: ..\func.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\1\Desktop\path\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/path.dir/func.c.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\path.dir\func.c.obj /FdCMakeFiles\path.dir\ /FS -c C:\Users\1\Desktop\path\func.c
<<

CMakeFiles\path.dir\func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/path.dir/func.c.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\path.dir\func.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\1\Desktop\path\func.c
<<

CMakeFiles\path.dir\func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/path.dir/func.c.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\path.dir\func.c.s /c C:\Users\1\Desktop\path\func.c
<<

# Object files for target path
path_OBJECTS = \
"CMakeFiles\path.dir\main.c.obj" \
"CMakeFiles\path.dir\func.c.obj"

# External object files for target path
path_EXTERNAL_OBJECTS =

path.exe: CMakeFiles\path.dir\main.c.obj
path.exe: CMakeFiles\path.dir\func.c.obj
path.exe: CMakeFiles\path.dir\build.make
path.exe: CMakeFiles\path.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\1\Desktop\path\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable path.exe"
	"D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\path.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\path.dir\objects1.rsp @<<
 /out:path.exe /implib:path.lib /pdb:C:\Users\1\Desktop\path\cmake-build-debug\path.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\path.dir\build: path.exe
.PHONY : CMakeFiles\path.dir\build

CMakeFiles\path.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\path.dir\cmake_clean.cmake
.PHONY : CMakeFiles\path.dir\clean

CMakeFiles\path.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\1\Desktop\path C:\Users\1\Desktop\path C:\Users\1\Desktop\path\cmake-build-debug C:\Users\1\Desktop\path\cmake-build-debug C:\Users\1\Desktop\path\cmake-build-debug\CMakeFiles\path.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\path.dir\depend

