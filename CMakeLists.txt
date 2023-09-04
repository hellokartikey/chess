cmake_minimum_required(VERSION 3.27.1)

set(BUILD_TARGET "chess")
set(TEST_TARGET "testchess")

project(${BUILD_TARGET} VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if (CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
  cmake_policy(SET CMP0135 NEW)
endif()

include(cmake/clang-format.cmake)
include(cmake/clang-tidy.cmake)

include(FetchContent)
Set(FETCHCONTENT_QUIET FALSE)

include(cmake/fmt.cmake)
include(cmake/gtest.cmake)
include(cmake/lexy.cmake)

add_executable(${BUILD_TARGET})

enable_testing()
add_executable(${TEST_TARGET})
include(GoogleTest)
gtest_discover_tests(${TEST_TARGET})

add_subdirectory(src)
add_subdirectory(tests)
