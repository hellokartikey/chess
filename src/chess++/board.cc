#include "board.h"

namespace chess {
Board::Board() {
  for (int i = 0; i < square::num_squares; i++) {
    board_.push_back(Square(square::name(i)));
  }
}

Board::Board(std::string_view fen) {}

const Square& Board::square(square::name square) const {
  return board_[square];
}
}  // namespace chess