# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
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
CMAKE_COMMAND = /home/sohail/Softwares/clion-2018.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/sohail/Softwares/clion-2018.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/sohail/CLionProjects/Grade Management System"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/sohail/CLionProjects/Grade Management System/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/GMS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GMS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GMS.dir/flags.make

CMakeFiles/GMS.dir/main.cpp.o: CMakeFiles/GMS.dir/flags.make
CMakeFiles/GMS.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/CLionProjects/Grade Management System/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GMS.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GMS.dir/main.cpp.o -c "/home/sohail/CLionProjects/Grade Management System/main.cpp"

CMakeFiles/GMS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GMS.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/CLionProjects/Grade Management System/main.cpp" > CMakeFiles/GMS.dir/main.cpp.i

CMakeFiles/GMS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GMS.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/CLionProjects/Grade Management System/main.cpp" -o CMakeFiles/GMS.dir/main.cpp.s

CMakeFiles/GMS.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/GMS.dir/main.cpp.o.requires

CMakeFiles/GMS.dir/main.cpp.o.provides: CMakeFiles/GMS.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GMS.dir/build.make CMakeFiles/GMS.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/GMS.dir/main.cpp.o.provides

CMakeFiles/GMS.dir/main.cpp.o.provides.build: CMakeFiles/GMS.dir/main.cpp.o


CMakeFiles/GMS.dir/init.cpp.o: CMakeFiles/GMS.dir/flags.make
CMakeFiles/GMS.dir/init.cpp.o: ../init.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/CLionProjects/Grade Management System/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GMS.dir/init.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GMS.dir/init.cpp.o -c "/home/sohail/CLionProjects/Grade Management System/init.cpp"

CMakeFiles/GMS.dir/init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GMS.dir/init.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/CLionProjects/Grade Management System/init.cpp" > CMakeFiles/GMS.dir/init.cpp.i

CMakeFiles/GMS.dir/init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GMS.dir/init.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/CLionProjects/Grade Management System/init.cpp" -o CMakeFiles/GMS.dir/init.cpp.s

CMakeFiles/GMS.dir/init.cpp.o.requires:

.PHONY : CMakeFiles/GMS.dir/init.cpp.o.requires

CMakeFiles/GMS.dir/init.cpp.o.provides: CMakeFiles/GMS.dir/init.cpp.o.requires
	$(MAKE) -f CMakeFiles/GMS.dir/build.make CMakeFiles/GMS.dir/init.cpp.o.provides.build
.PHONY : CMakeFiles/GMS.dir/init.cpp.o.provides

CMakeFiles/GMS.dir/init.cpp.o.provides.build: CMakeFiles/GMS.dir/init.cpp.o


CMakeFiles/GMS.dir/user.cpp.o: CMakeFiles/GMS.dir/flags.make
CMakeFiles/GMS.dir/user.cpp.o: ../user.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/CLionProjects/Grade Management System/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GMS.dir/user.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GMS.dir/user.cpp.o -c "/home/sohail/CLionProjects/Grade Management System/user.cpp"

CMakeFiles/GMS.dir/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GMS.dir/user.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/CLionProjects/Grade Management System/user.cpp" > CMakeFiles/GMS.dir/user.cpp.i

CMakeFiles/GMS.dir/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GMS.dir/user.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/CLionProjects/Grade Management System/user.cpp" -o CMakeFiles/GMS.dir/user.cpp.s

CMakeFiles/GMS.dir/user.cpp.o.requires:

.PHONY : CMakeFiles/GMS.dir/user.cpp.o.requires

CMakeFiles/GMS.dir/user.cpp.o.provides: CMakeFiles/GMS.dir/user.cpp.o.requires
	$(MAKE) -f CMakeFiles/GMS.dir/build.make CMakeFiles/GMS.dir/user.cpp.o.provides.build
.PHONY : CMakeFiles/GMS.dir/user.cpp.o.provides

CMakeFiles/GMS.dir/user.cpp.o.provides.build: CMakeFiles/GMS.dir/user.cpp.o


CMakeFiles/GMS.dir/utility.cpp.o: CMakeFiles/GMS.dir/flags.make
CMakeFiles/GMS.dir/utility.cpp.o: ../utility.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/CLionProjects/Grade Management System/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GMS.dir/utility.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GMS.dir/utility.cpp.o -c "/home/sohail/CLionProjects/Grade Management System/utility.cpp"

CMakeFiles/GMS.dir/utility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GMS.dir/utility.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/CLionProjects/Grade Management System/utility.cpp" > CMakeFiles/GMS.dir/utility.cpp.i

CMakeFiles/GMS.dir/utility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GMS.dir/utility.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/CLionProjects/Grade Management System/utility.cpp" -o CMakeFiles/GMS.dir/utility.cpp.s

CMakeFiles/GMS.dir/utility.cpp.o.requires:

.PHONY : CMakeFiles/GMS.dir/utility.cpp.o.requires

CMakeFiles/GMS.dir/utility.cpp.o.provides: CMakeFiles/GMS.dir/utility.cpp.o.requires
	$(MAKE) -f CMakeFiles/GMS.dir/build.make CMakeFiles/GMS.dir/utility.cpp.o.provides.build
.PHONY : CMakeFiles/GMS.dir/utility.cpp.o.provides

CMakeFiles/GMS.dir/utility.cpp.o.provides.build: CMakeFiles/GMS.dir/utility.cpp.o


CMakeFiles/GMS.dir/Statistics.cpp.o: CMakeFiles/GMS.dir/flags.make
CMakeFiles/GMS.dir/Statistics.cpp.o: ../Statistics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/CLionProjects/Grade Management System/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GMS.dir/Statistics.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GMS.dir/Statistics.cpp.o -c "/home/sohail/CLionProjects/Grade Management System/Statistics.cpp"

CMakeFiles/GMS.dir/Statistics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GMS.dir/Statistics.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/CLionProjects/Grade Management System/Statistics.cpp" > CMakeFiles/GMS.dir/Statistics.cpp.i

CMakeFiles/GMS.dir/Statistics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GMS.dir/Statistics.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/CLionProjects/Grade Management System/Statistics.cpp" -o CMakeFiles/GMS.dir/Statistics.cpp.s

CMakeFiles/GMS.dir/Statistics.cpp.o.requires:

.PHONY : CMakeFiles/GMS.dir/Statistics.cpp.o.requires

CMakeFiles/GMS.dir/Statistics.cpp.o.provides: CMakeFiles/GMS.dir/Statistics.cpp.o.requires
	$(MAKE) -f CMakeFiles/GMS.dir/build.make CMakeFiles/GMS.dir/Statistics.cpp.o.provides.build
.PHONY : CMakeFiles/GMS.dir/Statistics.cpp.o.provides

CMakeFiles/GMS.dir/Statistics.cpp.o.provides.build: CMakeFiles/GMS.dir/Statistics.cpp.o


CMakeFiles/GMS.dir/Courses.cpp.o: CMakeFiles/GMS.dir/flags.make
CMakeFiles/GMS.dir/Courses.cpp.o: ../Courses.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/CLionProjects/Grade Management System/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/GMS.dir/Courses.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GMS.dir/Courses.cpp.o -c "/home/sohail/CLionProjects/Grade Management System/Courses.cpp"

CMakeFiles/GMS.dir/Courses.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GMS.dir/Courses.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/CLionProjects/Grade Management System/Courses.cpp" > CMakeFiles/GMS.dir/Courses.cpp.i

CMakeFiles/GMS.dir/Courses.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GMS.dir/Courses.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/CLionProjects/Grade Management System/Courses.cpp" -o CMakeFiles/GMS.dir/Courses.cpp.s

CMakeFiles/GMS.dir/Courses.cpp.o.requires:

.PHONY : CMakeFiles/GMS.dir/Courses.cpp.o.requires

CMakeFiles/GMS.dir/Courses.cpp.o.provides: CMakeFiles/GMS.dir/Courses.cpp.o.requires
	$(MAKE) -f CMakeFiles/GMS.dir/build.make CMakeFiles/GMS.dir/Courses.cpp.o.provides.build
.PHONY : CMakeFiles/GMS.dir/Courses.cpp.o.provides

CMakeFiles/GMS.dir/Courses.cpp.o.provides.build: CMakeFiles/GMS.dir/Courses.cpp.o


# Object files for target GMS
GMS_OBJECTS = \
"CMakeFiles/GMS.dir/main.cpp.o" \
"CMakeFiles/GMS.dir/init.cpp.o" \
"CMakeFiles/GMS.dir/user.cpp.o" \
"CMakeFiles/GMS.dir/utility.cpp.o" \
"CMakeFiles/GMS.dir/Statistics.cpp.o" \
"CMakeFiles/GMS.dir/Courses.cpp.o"

# External object files for target GMS
GMS_EXTERNAL_OBJECTS =

GMS: CMakeFiles/GMS.dir/main.cpp.o
GMS: CMakeFiles/GMS.dir/init.cpp.o
GMS: CMakeFiles/GMS.dir/user.cpp.o
GMS: CMakeFiles/GMS.dir/utility.cpp.o
GMS: CMakeFiles/GMS.dir/Statistics.cpp.o
GMS: CMakeFiles/GMS.dir/Courses.cpp.o
GMS: CMakeFiles/GMS.dir/build.make
GMS: CMakeFiles/GMS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/sohail/CLionProjects/Grade Management System/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable GMS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GMS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GMS.dir/build: GMS

.PHONY : CMakeFiles/GMS.dir/build

CMakeFiles/GMS.dir/requires: CMakeFiles/GMS.dir/main.cpp.o.requires
CMakeFiles/GMS.dir/requires: CMakeFiles/GMS.dir/init.cpp.o.requires
CMakeFiles/GMS.dir/requires: CMakeFiles/GMS.dir/user.cpp.o.requires
CMakeFiles/GMS.dir/requires: CMakeFiles/GMS.dir/utility.cpp.o.requires
CMakeFiles/GMS.dir/requires: CMakeFiles/GMS.dir/Statistics.cpp.o.requires
CMakeFiles/GMS.dir/requires: CMakeFiles/GMS.dir/Courses.cpp.o.requires

.PHONY : CMakeFiles/GMS.dir/requires

CMakeFiles/GMS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GMS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GMS.dir/clean

CMakeFiles/GMS.dir/depend:
	cd "/home/sohail/CLionProjects/Grade Management System/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/sohail/CLionProjects/Grade Management System" "/home/sohail/CLionProjects/Grade Management System" "/home/sohail/CLionProjects/Grade Management System/cmake-build-debug" "/home/sohail/CLionProjects/Grade Management System/cmake-build-debug" "/home/sohail/CLionProjects/Grade Management System/cmake-build-debug/CMakeFiles/GMS.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/GMS.dir/depend

