add_library(
  chess++ 
  core.h
  bitboard.h  bitboard.cc
  board.h     board.cc
  constants.h constants.cc
  fen.h       fen.cc
  fmt.h       fmt.cc
  move.h      move.cc 
  piece.h     piece.cc
  square.h    square.cc 
)

target_link_libraries(
  chess++
  fmt::fmt
  lexy
)
