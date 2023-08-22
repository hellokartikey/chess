add_library(
  chess++
  board.hxx       board.cxx
  constants.hxx   constants.cxx
  core.hxx        core.cxx
  move.hxx        move.cxx
  piece_list.hxx  piece_list.cxx
  piece.hxx       piece.cxx
  square.hxx      square.cxx
  types.hxx       types.cxx
)

target_link_libraries(
  chess++
  fmt::fmt
)
