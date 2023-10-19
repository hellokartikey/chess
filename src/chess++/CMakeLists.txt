add_library(
  chess++ 
  core.h
  constants.h
  piece.h     piece.cc
)

target_link_libraries(
  chess++
  fmt::fmt
)
