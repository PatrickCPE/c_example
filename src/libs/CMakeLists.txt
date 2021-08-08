add_library(lib_a example_lib_a.c)
add_library(lib_b example_lib_b.c)

target_link_libraries(lib_b PRIVATE lib_a)
