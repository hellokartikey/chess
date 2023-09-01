#include <fmt/format.h>

#include <iostream>

#include "chess++/core.h"
#include "chess++/fmt.h"

using namespace chess;
using namespace chess::piece;
using namespace chess::square;
using namespace chess::move;

int main() {
  Board board;
  Piece piece(pawn, black);
  Square sq(E4, piece);

  fmt::print("{}\n", board);

  return 0;
}