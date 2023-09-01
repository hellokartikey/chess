#include <fmt/format.h>

#include <iostream>

#include "chess++/core.h"
#include "chess++/fmt.h"

using namespace chess;
using namespace chess::piece;
using namespace chess::square;
using namespace chess::move;

int main() {
  Piece piece(pawn, black);
  Ply ply1(piece, queen_promotion_capture, E2, E4);
  Ply ply2(piece, queen_promotion_capture, E2, E4);

  Move move1;

  Move move(ply1, ply2);

  fmt::print("{}\n", move);

  return 0;
}