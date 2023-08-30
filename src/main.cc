#include <fmt/format.h>

#include <iostream>

#include "chess++/core.h"
#include "chess++/fmt.h"

using namespace chess;
using namespace chess::constants;

int main() {
  Piece piece(constants::pawn, constants::black);
  Square sq(E4, piece);

  fmt::print("{}\n", sq);

  return 0;
}