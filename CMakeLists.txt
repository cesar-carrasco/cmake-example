# Documentation: http://www.cmake.org/cmake/help/v3.2/manual/cmake-commands.7.html

# Specify minimum required version of cmake
cmake_minimum_required(VERSION 3.2)

# Set name and version of the project with default languages C and CXX (C++)
project(example VERSION 1.0)

# set the config file input and output (uses variable substitution)
configure_file("${PROJECT_SOURCE_DIR}/config.h.in" "${PROJECT_BINARY_DIR}/config.h")

# add the path to config.h to the include directories
include_directories("${PROJECT_BINARY_DIR}")

# Add an executable target named "example" built from example.cxx
add_executable(example example.cxx)
