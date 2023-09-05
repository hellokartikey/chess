#include "board.h"

namespace chess {
Board::Board() {
  for (int i = 0; i < square::num_squares; i++) {
    board_[i] = Square(square::name(i));
  }

  pieces_.reserve(32);
}

Board::Board(std::string_view fen) {}

const Square& Board::square(square::name square) const {
  return board_[square];
}

Square& Board::operator[](square::name square) { return board_[square]; }
}  // namespace chess