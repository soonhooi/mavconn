# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pixhawk/pixhawk/mavconn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pixhawk/pixhawk/mavconn/light-release

# Include any dependencies generated for this target.
include src/planning/CMakeFiles/mavconn-missionplanner-new.dir/depend.make

# Include the progress variables for this target.
include src/planning/CMakeFiles/mavconn-missionplanner-new.dir/progress.make

# Include the compile flags for this target's objects.
include src/planning/CMakeFiles/mavconn-missionplanner-new.dir/flags.make

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o: src/planning/CMakeFiles/mavconn-missionplanner-new.dir/flags.make
src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o: ../src/planning/mavconn-missionplanner-new.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pixhawk/pixhawk/mavconn/light-release/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o"
	cd /home/pixhawk/pixhawk/mavconn/light-release/src/planning && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o -c /home/pixhawk/pixhawk/mavconn/src/planning/mavconn-missionplanner-new.cc

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.i"
	cd /home/pixhawk/pixhawk/mavconn/light-release/src/planning && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pixhawk/pixhawk/mavconn/src/planning/mavconn-missionplanner-new.cc > CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.i

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.s"
	cd /home/pixhawk/pixhawk/mavconn/light-release/src/planning && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pixhawk/pixhawk/mavconn/src/planning/mavconn-missionplanner-new.cc -o CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.s

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.requires:
.PHONY : src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.requires

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.provides: src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.requires
	$(MAKE) -f src/planning/CMakeFiles/mavconn-missionplanner-new.dir/build.make src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.provides.build
.PHONY : src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.provides

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.provides.build: src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o
.PHONY : src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.provides.build

# Object files for target mavconn-missionplanner-new
mavconn__missionplanner__new_OBJECTS = \
"CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o"

# External object files for target mavconn-missionplanner-new
mavconn__missionplanner__new_EXTERNAL_OBJECTS =

bin/mavconn-missionplanner-new: src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o
bin/mavconn-missionplanner-new: /usr/lib/libglib-2.0.so
bin/mavconn-missionplanner-new: /usr/lib/libgthread-2.0.so
bin/mavconn-missionplanner-new: lib/libmavconn_lcm.so
bin/mavconn-missionplanner-new: /usr/lib/libboost_program_options-mt.so
bin/mavconn-missionplanner-new: /usr/local/lib/liblcm.so
bin/mavconn-missionplanner-new: src/planning/CMakeFiles/mavconn-missionplanner-new.dir/build.make
bin/mavconn-missionplanner-new: src/planning/CMakeFiles/mavconn-missionplanner-new.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/mavconn-missionplanner-new"
	cd /home/pixhawk/pixhawk/mavconn/light-release/src/planning && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mavconn-missionplanner-new.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/planning/CMakeFiles/mavconn-missionplanner-new.dir/build: bin/mavconn-missionplanner-new
.PHONY : src/planning/CMakeFiles/mavconn-missionplanner-new.dir/build

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/requires: src/planning/CMakeFiles/mavconn-missionplanner-new.dir/mavconn-missionplanner-new.cc.o.requires
.PHONY : src/planning/CMakeFiles/mavconn-missionplanner-new.dir/requires

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/clean:
	cd /home/pixhawk/pixhawk/mavconn/light-release/src/planning && $(CMAKE_COMMAND) -P CMakeFiles/mavconn-missionplanner-new.dir/cmake_clean.cmake
.PHONY : src/planning/CMakeFiles/mavconn-missionplanner-new.dir/clean

src/planning/CMakeFiles/mavconn-missionplanner-new.dir/depend:
	cd /home/pixhawk/pixhawk/mavconn/light-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pixhawk/pixhawk/mavconn /home/pixhawk/pixhawk/mavconn/src/planning /home/pixhawk/pixhawk/mavconn/light-release /home/pixhawk/pixhawk/mavconn/light-release/src/planning /home/pixhawk/pixhawk/mavconn/light-release/src/planning/CMakeFiles/mavconn-missionplanner-new.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/planning/CMakeFiles/mavconn-missionplanner-new.dir/depend
