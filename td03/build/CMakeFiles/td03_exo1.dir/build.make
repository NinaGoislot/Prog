# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Winlibs\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\Winlibs\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Nina\Scolarite\IMAC\Cours\Prog\td03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Nina\Scolarite\IMAC\Cours\Prog\td03\build

# Include any dependencies generated for this target.
include CMakeFiles/td03_exo1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/td03_exo1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/td03_exo1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/td03_exo1.dir/flags.make

CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.obj: CMakeFiles/td03_exo1.dir/flags.make
CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.obj: C:/Nina/Scolarite/IMAC/Cours/Prog/td03/src/td03_exo1.cpp
CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.obj: CMakeFiles/td03_exo1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Nina\Scolarite\IMAC\Cours\Prog\td03\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.obj"
	C:\Winlibs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.obj -MF CMakeFiles\td03_exo1.dir\src\td03_exo1.cpp.obj.d -o CMakeFiles\td03_exo1.dir\src\td03_exo1.cpp.obj -c C:\Nina\Scolarite\IMAC\Cours\Prog\td03\src\td03_exo1.cpp

CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.i"
	C:\Winlibs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Nina\Scolarite\IMAC\Cours\Prog\td03\src\td03_exo1.cpp > CMakeFiles\td03_exo1.dir\src\td03_exo1.cpp.i

CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.s"
	C:\Winlibs\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Nina\Scolarite\IMAC\Cours\Prog\td03\src\td03_exo1.cpp -o CMakeFiles\td03_exo1.dir\src\td03_exo1.cpp.s

# Object files for target td03_exo1
td03_exo1_OBJECTS = \
"CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.obj"

# External object files for target td03_exo1
td03_exo1_EXTERNAL_OBJECTS =

td03_exo1.exe: CMakeFiles/td03_exo1.dir/src/td03_exo1.cpp.obj
td03_exo1.exe: CMakeFiles/td03_exo1.dir/build.make
td03_exo1.exe: CMakeFiles/td03_exo1.dir/linkLibs.rsp
td03_exo1.exe: CMakeFiles/td03_exo1.dir/objects1.rsp
td03_exo1.exe: CMakeFiles/td03_exo1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Nina\Scolarite\IMAC\Cours\Prog\td03\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable td03_exo1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\td03_exo1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/td03_exo1.dir/build: td03_exo1.exe
.PHONY : CMakeFiles/td03_exo1.dir/build

CMakeFiles/td03_exo1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\td03_exo1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/td03_exo1.dir/clean

CMakeFiles/td03_exo1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Nina\Scolarite\IMAC\Cours\Prog\td03 C:\Nina\Scolarite\IMAC\Cours\Prog\td03 C:\Nina\Scolarite\IMAC\Cours\Prog\td03\build C:\Nina\Scolarite\IMAC\Cours\Prog\td03\build C:\Nina\Scolarite\IMAC\Cours\Prog\td03\build\CMakeFiles\td03_exo1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/td03_exo1.dir/depend

