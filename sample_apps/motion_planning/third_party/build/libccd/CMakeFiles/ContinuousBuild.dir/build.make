# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party/build

# Utility rule file for ContinuousBuild.

# Include the progress variables for this target.
include libccd/CMakeFiles/ContinuousBuild.dir/progress.make

libccd/CMakeFiles/ContinuousBuild:
	cd /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party/build/libccd && /usr/bin/ctest -D ContinuousBuild

ContinuousBuild: libccd/CMakeFiles/ContinuousBuild
ContinuousBuild: libccd/CMakeFiles/ContinuousBuild.dir/build.make

.PHONY : ContinuousBuild

# Rule to build all files generated by this target.
libccd/CMakeFiles/ContinuousBuild.dir/build: ContinuousBuild

.PHONY : libccd/CMakeFiles/ContinuousBuild.dir/build

libccd/CMakeFiles/ContinuousBuild.dir/clean:
	cd /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party/build/libccd && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousBuild.dir/cmake_clean.cmake
.PHONY : libccd/CMakeFiles/ContinuousBuild.dir/clean

libccd/CMakeFiles/ContinuousBuild.dir/depend:
	cd /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party/libccd /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party/build /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party/build/libccd /home/azureuser/certifier-framework-for-confidential-computing/sample_apps/motion_planning/third_party/build/libccd/CMakeFiles/ContinuousBuild.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libccd/CMakeFiles/ContinuousBuild.dir/depend

