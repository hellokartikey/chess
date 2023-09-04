add_library(
  chess++ 
  core.h
  fen.h       fen.cc
  fmt.h       fmt.cc
  board.h     board.cc
  constants.h constants.cc
  move.h      move.cc 
  piece.h     piece.cc
  square.h    square.cc 
)

target_link_libraries(
  chess++
  fmt::fmt
  lexy
)
