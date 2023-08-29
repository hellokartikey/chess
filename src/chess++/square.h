#ifndef CHESSPP_SQUARE_H
#define CHESSPP_SQUARE_H

#include <vector>

#include "constants.h"
#include "piece.h"

/**API Example
 * Square square(square::A1);
 * Square square(square::C5, piece);
 *
 * // Get square information
 * square.name();
 * square.file();
 * square.rank();
 *
 * // Check if square has a piece on it
 * square.has_piece();
 *
 * // Put piece on
 * square.piece(piece);
 *
 * // Get piece reference
 * square.piece();
 */

namespace chess {
class Square {
 public:
  Square(constants::square square);

  Square(constants::square square, Piece& piece);

  constants::square name();
  constants::file file();
  constants::rank rank();

  Piece& piece();
  void piece(Piece& piece);
  void piece(types::nullpiece nullpiece);
  bool has_piece();

 private:
  constants::square name_;
  types::piece_optional piece_;
};
}  // namespace chess

namespace chess::types {
using square_vector = std::vector<Square>;
}

#endif
