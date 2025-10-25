# Add this at the very top (after the file starts)
include(GoogleTest)   # <-- REQUIRED for gtest_discover_tests

# Build small libs from your demo sources so tests can link to helpers.
add_library(cpp_basics_lib STATIC ../src/cpp_basics.cpp)
target_compile_definitions(cpp_basics_lib PRIVATE UNIT_LIB_BUILD)

add_library(cpp_ptrs_lib STATIC ../src/cpp_pointers_arrays.cpp)
target_compile_definitions(cpp_ptrs_lib PRIVATE UNIT_LIB_BUILD)

# Test binaries
add_executable(test_basics test_basics.cpp)
target_link_libraries(test_basics PRIVATE cpp_basics_lib GTest::gtest_main)
gtest_discover_tests(test_basics)

add_executable(test_pointers test_pointers.cpp)
target_link_libraries(test_pointers PRIVATE cpp_ptrs_lib GTest::gtest_main)
gtest_discover_tests(test_pointers)
