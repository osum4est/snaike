# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/osum4est/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/163.10154.43/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/osum4est/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/163.10154.43/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/osum4est/gdrive/snaike

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/osum4est/gdrive/snaike/cmake-build-debug

# Include any dependencies generated for this target.
include glad-0.1.13a0/CMakeFiles/glad.dir/depend.make

# Include the progress variables for this target.
include glad-0.1.13a0/CMakeFiles/glad.dir/progress.make

# Include the compile flags for this target's objects.
include glad-0.1.13a0/CMakeFiles/glad.dir/flags.make

glad-0.1.13a0/src/glad.c:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/osum4est/gdrive/snaike/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating GLAD"
	cd /home/osum4est/gdrive/snaike/glad-0.1.13a0 && /usr/bin/python -m glad --profile=compatibility --out-path=/home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0 --api= --generator=c --extensions= --spec=gl

glad-0.1.13a0/include/glad/glad.h: glad-0.1.13a0/src/glad.c
	@$(CMAKE_COMMAND) -E touch_nocreate glad-0.1.13a0/include/glad/glad.h

glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o: glad-0.1.13a0/CMakeFiles/glad.dir/flags.make
glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o: glad-0.1.13a0/src/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/osum4est/gdrive/snaike/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o"
	cd /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0 && /usr/lib/hardening-wrapper/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/glad.dir/src/glad.c.o   -c /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0/src/glad.c

glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glad.dir/src/glad.c.i"
	cd /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0 && /usr/lib/hardening-wrapper/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0/src/glad.c > CMakeFiles/glad.dir/src/glad.c.i

glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glad.dir/src/glad.c.s"
	cd /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0 && /usr/lib/hardening-wrapper/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0/src/glad.c -o CMakeFiles/glad.dir/src/glad.c.s

glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o.requires:

.PHONY : glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o.requires

glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o.provides: glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o.requires
	$(MAKE) -f glad-0.1.13a0/CMakeFiles/glad.dir/build.make glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o.provides.build
.PHONY : glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o.provides

glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o.provides.build: glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o


# Object files for target glad
glad_OBJECTS = \
"CMakeFiles/glad.dir/src/glad.c.o"

# External object files for target glad
glad_EXTERNAL_OBJECTS =

glad-0.1.13a0/libglad.a: glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o
glad-0.1.13a0/libglad.a: glad-0.1.13a0/CMakeFiles/glad.dir/build.make
glad-0.1.13a0/libglad.a: glad-0.1.13a0/CMakeFiles/glad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/osum4est/gdrive/snaike/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libglad.a"
	cd /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0 && $(CMAKE_COMMAND) -P CMakeFiles/glad.dir/cmake_clean_target.cmake
	cd /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glad.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
glad-0.1.13a0/CMakeFiles/glad.dir/build: glad-0.1.13a0/libglad.a

.PHONY : glad-0.1.13a0/CMakeFiles/glad.dir/build

glad-0.1.13a0/CMakeFiles/glad.dir/requires: glad-0.1.13a0/CMakeFiles/glad.dir/src/glad.c.o.requires

.PHONY : glad-0.1.13a0/CMakeFiles/glad.dir/requires

glad-0.1.13a0/CMakeFiles/glad.dir/clean:
	cd /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0 && $(CMAKE_COMMAND) -P CMakeFiles/glad.dir/cmake_clean.cmake
.PHONY : glad-0.1.13a0/CMakeFiles/glad.dir/clean

glad-0.1.13a0/CMakeFiles/glad.dir/depend: glad-0.1.13a0/src/glad.c
glad-0.1.13a0/CMakeFiles/glad.dir/depend: glad-0.1.13a0/include/glad/glad.h
	cd /home/osum4est/gdrive/snaike/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/osum4est/gdrive/snaike /home/osum4est/gdrive/snaike/glad-0.1.13a0 /home/osum4est/gdrive/snaike/cmake-build-debug /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0 /home/osum4est/gdrive/snaike/cmake-build-debug/glad-0.1.13a0/CMakeFiles/glad.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : glad-0.1.13a0/CMakeFiles/glad.dir/depend

