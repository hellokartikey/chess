#include <fmt/format.h>

#include "chess++/core.h"

using namespace chess;
using namespace chess::constants;

int main() {
  Board board;

  Square sq(H8);
  fmt::print("({}) sq.has_piece()\n", sq.has_piece());

  return 0;
}