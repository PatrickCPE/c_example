#Set min version
cmake_minimum_required(VERSION 3.20)

#Set project name, version, and support languages
project(c_example VERSION 0.1 LANGUAGES C)
#For example to support C and C++
#project(c_example C C++)

#Use C 11 and disable compiler extensions
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

#Or set the standard for a particular library
#set_target_properties(lib_a PROPERTIES
#        C_STANDARD          11
#        C_STANDARD_REQUIRED ON
#        C_EXTENSIONS        OFF
#)

#Set compiler flags for all versions
set(CMAKE_C_FLAGS "-Wall -Wextra")

#include(Ctest)
enable_testing()
add_subdirectory(src/libs)
add_subdirectory(src)
add_subdirectory(tests)

#Example setup for GNU Make for the release directory
#cmake -G "Unix Makefiles" -S . -B ../build/release/
#cd ../build/release
#make

#Example setup for Ninja for the debug directory
#cmake -G Ninja -S . -B ../build/debug/
#cd ../build/debug
#ninja

#Or just use CMake to avoid the low level build tools for either
#cmake --build ../build/debug/ --config Release --target test