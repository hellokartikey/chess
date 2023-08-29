add_library(
  chess++ 
  core.h
  board.h     board.cc
  constants.h constants.cc
  move.h      move.cc 
  piece.h     piece.cc
  ply.h       ply.cc
  square.h    square.cc 
)

target_link_libraries(
  chess++
  fmt::fmt
)
