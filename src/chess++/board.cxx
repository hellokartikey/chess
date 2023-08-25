#include "board.hxx"

namespace chess {
Board::Board() {
  for (auto* sq : _board) {
    sq = nullptr;
  }
}
}  // namespace chess
