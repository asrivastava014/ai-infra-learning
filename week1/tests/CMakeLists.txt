# Build small libs from your example sources so tests can link to the helpers.
add_library(cpp_basics_lib STATIC ../cpp/cpp_basics.cpp)
target_compile_definitions(cpp_basics_lib PRIVATE UNIT_LIB_BUILD)

add_library(cpp_ptrs_lib   STATIC ../cpp/cpp_pointers_arrays.cpp)
target_compile_definitions(cpp_ptrs_lib PRIVATE UNIT_LIB_BUILD)

# Catch2 tests
add_executable(test_basics test_basics.cpp)
target_link_libraries(test_basics PRIVATE cpp_basics_lib Catch2::Catch2WithMain)
add_test(NAME test_basics COMMAND test_basics)

add_executable(test_pointers test_pointers.cpp)
target_link_libraries(test_pointers PRIVATE cpp_ptrs_lib Catch2::Catch2WithMain)
add_test(NAME test_pointers COMMAND test_pointers)
