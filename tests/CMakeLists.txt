target_sources(
  ${TEST_TARGET}
  PRIVATE constants.cxx
)

target_link_libraries(
  ${TEST_TARGET}
  GTest::gtest_main
  fmt::fmt
  chess++
)

target_include_directories(
  ${TEST_TARGET}
  PUBLIC ../src
)
