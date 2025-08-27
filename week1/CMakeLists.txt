cmake_minimum_required(VERSION 3.20)
project(ai_infra_week1 CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.6.0
)
FetchContent_MakeAvailable(catch2)

enable_testing()

# tests/ is directly under week1/, so use this path (NOT week1/tests)
add_subdirectory(tests)
