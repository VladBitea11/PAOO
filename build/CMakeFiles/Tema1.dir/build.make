# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/build

# Include any dependencies generated for this target.
include CMakeFiles/Tema1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Tema1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Tema1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tema1.dir/flags.make

CMakeFiles/Tema1.dir/main.cpp.o: CMakeFiles/Tema1.dir/flags.make
CMakeFiles/Tema1.dir/main.cpp.o: /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/main.cpp
CMakeFiles/Tema1.dir/main.cpp.o: CMakeFiles/Tema1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tema1.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Tema1.dir/main.cpp.o -MF CMakeFiles/Tema1.dir/main.cpp.o.d -o CMakeFiles/Tema1.dir/main.cpp.o -c /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/main.cpp

CMakeFiles/Tema1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Tema1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/main.cpp > CMakeFiles/Tema1.dir/main.cpp.i

CMakeFiles/Tema1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Tema1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/main.cpp -o CMakeFiles/Tema1.dir/main.cpp.s

CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o: CMakeFiles/Tema1.dir/flags.make
CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o: /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/src/FootballPlayer.cpp
CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o: CMakeFiles/Tema1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o -MF CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o.d -o CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o -c /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/src/FootballPlayer.cpp

CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/src/FootballPlayer.cpp > CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.i

CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/src/FootballPlayer.cpp -o CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.s

# Object files for target Tema1
Tema1_OBJECTS = \
"CMakeFiles/Tema1.dir/main.cpp.o" \
"CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o"

# External object files for target Tema1
Tema1_EXTERNAL_OBJECTS =

Tema1: CMakeFiles/Tema1.dir/main.cpp.o
Tema1: CMakeFiles/Tema1.dir/src/FootballPlayer.cpp.o
Tema1: CMakeFiles/Tema1.dir/build.make
Tema1: CMakeFiles/Tema1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Tema1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tema1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tema1.dir/build: Tema1
.PHONY : CMakeFiles/Tema1.dir/build

CMakeFiles/Tema1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tema1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tema1.dir/clean

CMakeFiles/Tema1.dir/depend:
	cd /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1 /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1 /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/build /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/build /mnt/c/Users/vladb/Desktop/facultate/PAOO/Tema1/build/CMakeFiles/Tema1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Tema1.dir/depend

