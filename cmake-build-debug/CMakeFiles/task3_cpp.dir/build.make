# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\rando\CLionProjects\task3_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rando\CLionProjects\task3_cpp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task3_cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/task3_cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/task3_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task3_cpp.dir/flags.make

CMakeFiles/task3_cpp.dir/main.cpp.obj: CMakeFiles/task3_cpp.dir/flags.make
CMakeFiles/task3_cpp.dir/main.cpp.obj: C:/Users/rando/CLionProjects/task3_cpp/main.cpp
CMakeFiles/task3_cpp.dir/main.cpp.obj: CMakeFiles/task3_cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rando\CLionProjects\task3_cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task3_cpp.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/task3_cpp.dir/main.cpp.obj -MF CMakeFiles\task3_cpp.dir\main.cpp.obj.d -o CMakeFiles\task3_cpp.dir\main.cpp.obj -c C:\Users\rando\CLionProjects\task3_cpp\main.cpp

CMakeFiles/task3_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task3_cpp.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rando\CLionProjects\task3_cpp\main.cpp > CMakeFiles\task3_cpp.dir\main.cpp.i

CMakeFiles/task3_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task3_cpp.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rando\CLionProjects\task3_cpp\main.cpp -o CMakeFiles\task3_cpp.dir\main.cpp.s

# Object files for target task3_cpp
task3_cpp_OBJECTS = \
"CMakeFiles/task3_cpp.dir/main.cpp.obj"

# External object files for target task3_cpp
task3_cpp_EXTERNAL_OBJECTS =

task3_cpp.exe: CMakeFiles/task3_cpp.dir/main.cpp.obj
task3_cpp.exe: CMakeFiles/task3_cpp.dir/build.make
task3_cpp.exe: CMakeFiles/task3_cpp.dir/linkLibs.rsp
task3_cpp.exe: CMakeFiles/task3_cpp.dir/objects1
task3_cpp.exe: CMakeFiles/task3_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rando\CLionProjects\task3_cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task3_cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task3_cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task3_cpp.dir/build: task3_cpp.exe
.PHONY : CMakeFiles/task3_cpp.dir/build

CMakeFiles/task3_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task3_cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/task3_cpp.dir/clean

CMakeFiles/task3_cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rando\CLionProjects\task3_cpp C:\Users\rando\CLionProjects\task3_cpp C:\Users\rando\CLionProjects\task3_cpp\cmake-build-debug C:\Users\rando\CLionProjects\task3_cpp\cmake-build-debug C:\Users\rando\CLionProjects\task3_cpp\cmake-build-debug\CMakeFiles\task3_cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task3_cpp.dir/depend

