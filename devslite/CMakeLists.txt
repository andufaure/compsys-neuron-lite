cmake_minimum_required (VERSION 2.6)

include_directories(./include)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ./lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ./lib)

add_library(DEVSLite src/Model.cpp)
