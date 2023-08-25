add_library(
  chess++
  board.hxx       board.cxx
  constants.hxx   constants.cxx
  core.hxx        core.cxx
  move.hxx        move.cxx
  piece.hxx       piece.cxx
  ply.hxx         ply.cxx
  square.hxx      square.cxx
  types.hxx       types.cxx
)

target_link_libraries(
  chess++
  fmt::fmt
)
