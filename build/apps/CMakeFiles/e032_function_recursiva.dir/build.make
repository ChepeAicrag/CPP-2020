# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/619/bin/cmake

# The command to remove a file.
RM = /snap/cmake/619/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chepeaicrag/Escritorio/CPP-2020/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chepeaicrag/Escritorio/CPP-2020/build

# Include any dependencies generated for this target.
include apps/CMakeFiles/e032_function_recursiva.dir/depend.make

# Include the progress variables for this target.
include apps/CMakeFiles/e032_function_recursiva.dir/progress.make

# Include the compile flags for this target's objects.
include apps/CMakeFiles/e032_function_recursiva.dir/flags.make

apps/CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.o: apps/CMakeFiles/e032_function_recursiva.dir/flags.make
apps/CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.o: /home/chepeaicrag/Escritorio/CPP-2020/src/apps/e032_function_recursiva.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chepeaicrag/Escritorio/CPP-2020/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object apps/CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.o"
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.o -c /home/chepeaicrag/Escritorio/CPP-2020/src/apps/e032_function_recursiva.cpp

apps/CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.i"
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chepeaicrag/Escritorio/CPP-2020/src/apps/e032_function_recursiva.cpp > CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.i

apps/CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.s"
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chepeaicrag/Escritorio/CPP-2020/src/apps/e032_function_recursiva.cpp -o CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.s

# Object files for target e032_function_recursiva
e032_function_recursiva_OBJECTS = \
"CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.o"

# External object files for target e032_function_recursiva
e032_function_recursiva_EXTERNAL_OBJECTS =

apps/e032_function_recursiva: apps/CMakeFiles/e032_function_recursiva.dir/e032_function_recursiva.cpp.o
apps/e032_function_recursiva: apps/CMakeFiles/e032_function_recursiva.dir/build.make
apps/e032_function_recursiva: apps/CMakeFiles/e032_function_recursiva.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chepeaicrag/Escritorio/CPP-2020/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable e032_function_recursiva"
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/e032_function_recursiva.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/CMakeFiles/e032_function_recursiva.dir/build: apps/e032_function_recursiva

.PHONY : apps/CMakeFiles/e032_function_recursiva.dir/build

apps/CMakeFiles/e032_function_recursiva.dir/clean:
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && $(CMAKE_COMMAND) -P CMakeFiles/e032_function_recursiva.dir/cmake_clean.cmake
.PHONY : apps/CMakeFiles/e032_function_recursiva.dir/clean

apps/CMakeFiles/e032_function_recursiva.dir/depend:
	cd /home/chepeaicrag/Escritorio/CPP-2020/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chepeaicrag/Escritorio/CPP-2020/src /home/chepeaicrag/Escritorio/CPP-2020/src/apps /home/chepeaicrag/Escritorio/CPP-2020/build /home/chepeaicrag/Escritorio/CPP-2020/build/apps /home/chepeaicrag/Escritorio/CPP-2020/build/apps/CMakeFiles/e032_function_recursiva.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/CMakeFiles/e032_function_recursiva.dir/depend
