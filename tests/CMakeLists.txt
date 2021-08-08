
#Create executables for tests
enable_testing()
#Basic testing without a framework
add_executable(test_pass test_pass.c)
add_test(test_pass test_pass)

add_executable(test_fail test_fail.c)
add_test(test_fail test_fail)

#Testing using the Unity Framework
add_executable(test_example_lib_b test_example_lib_b.c)
target_link_libraries(test_example_lib_b PRIVATE unity)
target_link_libraries(test_example_lib_b PRIVATE lib_b)

add_test(test_example_lib_b test_example_lib_b)
