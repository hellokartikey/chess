#include "board.h"

namespace chess {
Board::Board() {
  for (int i = 0; i < constants::num_squares; i++) {
    board_.push_back(Square(constants::square(i)));
  }
}

Board::Board(std::string_view fen) {}

Square& Board::square(constants::square square) { return board_[square]; }
}  // namespace chess