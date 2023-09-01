#ifndef CHESSPP_BOARD_H
#define CHESSPP_BOARD_H

#include <array>
#include <string_view>

#include "constants.h"
#include "move.h"
#include "piece.h"
#include "square.h"

/**API Example
 * Board board;
 * Board board(fen);
 *
 * // Get reference to square object
 * board.square(constants::D4);
 *
 * // Get FEN string for current board state
 * board.fen();
 *
 * // Set board state to FEN string
 * board.fen(fen);
 */

namespace chess {
class Board {
 public:
  Board();
  Board(std::string_view fen);

  const Square& square(square::name square) const;

  std::string_view fen() const;
  void fen(std::string_view fen);

 private:
  types::square_vector board_;
  types::piece_vector pieces_;
};
}  // namespace chess

#endif
