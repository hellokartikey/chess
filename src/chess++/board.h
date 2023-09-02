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
 * Board board(fen); // TODO
 *
 * // Get reference to square object
 * board.square(square::D4);
 * board[square::E4] = sq;
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

  Square& operator[](square::name square);

 private:
  types::SquareArray board_;
  types::PieceVector pieces_;
};
}  // namespace chess

#endif
