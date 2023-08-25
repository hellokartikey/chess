#ifndef CHESSPP_BOARD_HXX
#define CHESSPP_BOARD_HXX

#include <array>

#include "types.hxx"

namespace chess {
class Board {
  std::array<Square*, constants::num_squares> _board;
  std::vector<std::reference_wrapper<Piece>> _piece_list;

 public:
  Board();
};
}  // namespace chess

#endif
