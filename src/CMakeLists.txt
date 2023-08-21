target_sources(
  ${BUILD_TARGET}
  PRIVATE main.cxx
)

add_subdirectory(chess++)

target_link_libraries(
  ${BUILD_TARGET}
  fmt::fmt
  chess++
)
