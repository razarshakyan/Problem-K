# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/razmik_arshakyan/Desktop/main/sd/Problem-K

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/razmik_arshakyan/Desktop/main/sd/Problem-K/build

# Include any dependencies generated for this target.
include CMakeFiles/spreadsheet.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/spreadsheet.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/spreadsheet.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spreadsheet.dir/flags.make

CMakeFiles/spreadsheet.dir/main.cpp.o: CMakeFiles/spreadsheet.dir/flags.make
CMakeFiles/spreadsheet.dir/main.cpp.o: ../main.cpp
CMakeFiles/spreadsheet.dir/main.cpp.o: CMakeFiles/spreadsheet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/razmik_arshakyan/Desktop/main/sd/Problem-K/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spreadsheet.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/spreadsheet.dir/main.cpp.o -MF CMakeFiles/spreadsheet.dir/main.cpp.o.d -o CMakeFiles/spreadsheet.dir/main.cpp.o -c /home/razmik_arshakyan/Desktop/main/sd/Problem-K/main.cpp

CMakeFiles/spreadsheet.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spreadsheet.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/razmik_arshakyan/Desktop/main/sd/Problem-K/main.cpp > CMakeFiles/spreadsheet.dir/main.cpp.i

CMakeFiles/spreadsheet.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spreadsheet.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/razmik_arshakyan/Desktop/main/sd/Problem-K/main.cpp -o CMakeFiles/spreadsheet.dir/main.cpp.s

CMakeFiles/spreadsheet.dir/src/cell.cpp.o: CMakeFiles/spreadsheet.dir/flags.make
CMakeFiles/spreadsheet.dir/src/cell.cpp.o: ../src/cell.cpp
CMakeFiles/spreadsheet.dir/src/cell.cpp.o: CMakeFiles/spreadsheet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/razmik_arshakyan/Desktop/main/sd/Problem-K/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/spreadsheet.dir/src/cell.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/spreadsheet.dir/src/cell.cpp.o -MF CMakeFiles/spreadsheet.dir/src/cell.cpp.o.d -o CMakeFiles/spreadsheet.dir/src/cell.cpp.o -c /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/cell.cpp

CMakeFiles/spreadsheet.dir/src/cell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spreadsheet.dir/src/cell.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/cell.cpp > CMakeFiles/spreadsheet.dir/src/cell.cpp.i

CMakeFiles/spreadsheet.dir/src/cell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spreadsheet.dir/src/cell.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/cell.cpp -o CMakeFiles/spreadsheet.dir/src/cell.cpp.s

CMakeFiles/spreadsheet.dir/src/parser.cpp.o: CMakeFiles/spreadsheet.dir/flags.make
CMakeFiles/spreadsheet.dir/src/parser.cpp.o: ../src/parser.cpp
CMakeFiles/spreadsheet.dir/src/parser.cpp.o: CMakeFiles/spreadsheet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/razmik_arshakyan/Desktop/main/sd/Problem-K/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/spreadsheet.dir/src/parser.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/spreadsheet.dir/src/parser.cpp.o -MF CMakeFiles/spreadsheet.dir/src/parser.cpp.o.d -o CMakeFiles/spreadsheet.dir/src/parser.cpp.o -c /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/parser.cpp

CMakeFiles/spreadsheet.dir/src/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spreadsheet.dir/src/parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/parser.cpp > CMakeFiles/spreadsheet.dir/src/parser.cpp.i

CMakeFiles/spreadsheet.dir/src/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spreadsheet.dir/src/parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/parser.cpp -o CMakeFiles/spreadsheet.dir/src/parser.cpp.s

CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o: CMakeFiles/spreadsheet.dir/flags.make
CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o: ../src/spreadsheet.cpp
CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o: CMakeFiles/spreadsheet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/razmik_arshakyan/Desktop/main/sd/Problem-K/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o -MF CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o.d -o CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o -c /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/spreadsheet.cpp

CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/spreadsheet.cpp > CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.i

CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/razmik_arshakyan/Desktop/main/sd/Problem-K/src/spreadsheet.cpp -o CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.s

# Object files for target spreadsheet
spreadsheet_OBJECTS = \
"CMakeFiles/spreadsheet.dir/main.cpp.o" \
"CMakeFiles/spreadsheet.dir/src/cell.cpp.o" \
"CMakeFiles/spreadsheet.dir/src/parser.cpp.o" \
"CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o"

# External object files for target spreadsheet
spreadsheet_EXTERNAL_OBJECTS =

spreadsheet: CMakeFiles/spreadsheet.dir/main.cpp.o
spreadsheet: CMakeFiles/spreadsheet.dir/src/cell.cpp.o
spreadsheet: CMakeFiles/spreadsheet.dir/src/parser.cpp.o
spreadsheet: CMakeFiles/spreadsheet.dir/src/spreadsheet.cpp.o
spreadsheet: CMakeFiles/spreadsheet.dir/build.make
spreadsheet: CMakeFiles/spreadsheet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/razmik_arshakyan/Desktop/main/sd/Problem-K/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable spreadsheet"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spreadsheet.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spreadsheet.dir/build: spreadsheet
.PHONY : CMakeFiles/spreadsheet.dir/build

CMakeFiles/spreadsheet.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/spreadsheet.dir/cmake_clean.cmake
.PHONY : CMakeFiles/spreadsheet.dir/clean

CMakeFiles/spreadsheet.dir/depend:
	cd /home/razmik_arshakyan/Desktop/main/sd/Problem-K/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/razmik_arshakyan/Desktop/main/sd/Problem-K /home/razmik_arshakyan/Desktop/main/sd/Problem-K /home/razmik_arshakyan/Desktop/main/sd/Problem-K/build /home/razmik_arshakyan/Desktop/main/sd/Problem-K/build /home/razmik_arshakyan/Desktop/main/sd/Problem-K/build/CMakeFiles/spreadsheet.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/spreadsheet.dir/depend

