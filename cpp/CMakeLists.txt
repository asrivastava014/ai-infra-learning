add_library(hostlib
    src/cpp_basics.cpp
    src/cpp_pointers_arrays.cpp
    src/main.cpp
    src/ranges_pipeline.cpp
)
target_include_directories(hostlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_options(hostlib PRIVATE -Wall -Wextra -pedantic)

# optional sample executable to run snippets
#add_executable(snippets cpp_snippets.cpp)
#target_link_libraries(snippets PRIVATE hostlib)

if(BUILD_TESTING)
  include(FetchContent)
  FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  )
  FetchContent_MakeAvailable(googletest)
  enable_testing()
  add_subdirectory(tests)
endif()
