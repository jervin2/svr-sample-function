# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /home/rhein/Downloads/clion-2018.1.5/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/rhein/Downloads/clion-2018.1.5/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rhein/Desktop/svr-sample-function

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rhein/Desktop/svr-sample-function

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/home/rhein/Downloads/clion-2018.1.5/bin/cmake/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/home/rhein/Downloads/clion-2018.1.5/bin/cmake/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/rhein/Desktop/svr-sample-function/CMakeFiles /home/rhein/Desktop/svr-sample-function/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/rhein/Desktop/svr-sample-function/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named fov

# Build rule for target.
fov: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 fov
.PHONY : fov

# fast build rule for target.
fov/fast:
	$(MAKE) -f CMakeFiles/fov.dir/build.make CMakeFiles/fov.dir/build
.PHONY : fov/fast

fov.o: fov.cpp.o

.PHONY : fov.o

# target to build an object file
fov.cpp.o:
	$(MAKE) -f CMakeFiles/fov.dir/build.make CMakeFiles/fov.dir/fov.cpp.o
.PHONY : fov.cpp.o

fov.i: fov.cpp.i

.PHONY : fov.i

# target to preprocess a source file
fov.cpp.i:
	$(MAKE) -f CMakeFiles/fov.dir/build.make CMakeFiles/fov.dir/fov.cpp.i
.PHONY : fov.cpp.i

fov.s: fov.cpp.s

.PHONY : fov.s

# target to generate assembly for a file
fov.cpp.s:
	$(MAKE) -f CMakeFiles/fov.dir/build.make CMakeFiles/fov.dir/fov.cpp.s
.PHONY : fov.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... fov"
	@echo "... fov.o"
	@echo "... fov.i"
	@echo "... fov.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

