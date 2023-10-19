#include <fmt/core.h>

#include "chess++/core.h"

using namespace chess;

auto main() -> int {
  Piece piece(piece::ROOK, piece::BLACK, board::E4, piece::DEAD);

  fmt::print("type {}\n", piece.type() == piece::ROOK);
  fmt::print("color {}\n", piece.color() == piece::BLACK);
  fmt::print("square {}\n", piece.square() == board::E4);
  fmt::print("status {}\n", piece.state() == piece::DEAD);

  fmt::print("{}\n", sizeof(piece));
  return 0;
}