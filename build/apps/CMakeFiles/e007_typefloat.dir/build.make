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
include apps/CMakeFiles/e007_typefloat.dir/depend.make

# Include the progress variables for this target.
include apps/CMakeFiles/e007_typefloat.dir/progress.make

# Include the compile flags for this target's objects.
include apps/CMakeFiles/e007_typefloat.dir/flags.make

apps/CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.o: apps/CMakeFiles/e007_typefloat.dir/flags.make
apps/CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.o: /home/chepeaicrag/Escritorio/CPP-2020/src/apps/e007_typefloat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chepeaicrag/Escritorio/CPP-2020/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object apps/CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.o"
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.o -c /home/chepeaicrag/Escritorio/CPP-2020/src/apps/e007_typefloat.cpp

apps/CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.i"
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chepeaicrag/Escritorio/CPP-2020/src/apps/e007_typefloat.cpp > CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.i

apps/CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.s"
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chepeaicrag/Escritorio/CPP-2020/src/apps/e007_typefloat.cpp -o CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.s

# Object files for target e007_typefloat
e007_typefloat_OBJECTS = \
"CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.o"

# External object files for target e007_typefloat
e007_typefloat_EXTERNAL_OBJECTS =

apps/e007_typefloat: apps/CMakeFiles/e007_typefloat.dir/e007_typefloat.cpp.o
apps/e007_typefloat: apps/CMakeFiles/e007_typefloat.dir/build.make
apps/e007_typefloat: apps/CMakeFiles/e007_typefloat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chepeaicrag/Escritorio/CPP-2020/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable e007_typefloat"
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/e007_typefloat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/CMakeFiles/e007_typefloat.dir/build: apps/e007_typefloat

.PHONY : apps/CMakeFiles/e007_typefloat.dir/build

apps/CMakeFiles/e007_typefloat.dir/clean:
	cd /home/chepeaicrag/Escritorio/CPP-2020/build/apps && $(CMAKE_COMMAND) -P CMakeFiles/e007_typefloat.dir/cmake_clean.cmake
.PHONY : apps/CMakeFiles/e007_typefloat.dir/clean

apps/CMakeFiles/e007_typefloat.dir/depend:
	cd /home/chepeaicrag/Escritorio/CPP-2020/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chepeaicrag/Escritorio/CPP-2020/src /home/chepeaicrag/Escritorio/CPP-2020/src/apps /home/chepeaicrag/Escritorio/CPP-2020/build /home/chepeaicrag/Escritorio/CPP-2020/build/apps /home/chepeaicrag/Escritorio/CPP-2020/build/apps/CMakeFiles/e007_typefloat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/CMakeFiles/e007_typefloat.dir/depend
