#Set compiler flags
set(CMAKE_C_FLAGS "-Wall -Wextra")

add_executable(main main.c)
target_link_libraries(main PRIVATE lib_b)

add_subdirectory(libs/Unity)
