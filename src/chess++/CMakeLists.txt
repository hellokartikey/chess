add_library(
  chess++
  square.hxx    square.cxx
  constants.hxx constants.cxx
)

target_link_libraries(
  chess++
  fmt::fmt
)
