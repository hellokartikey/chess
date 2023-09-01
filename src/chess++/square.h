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
  Square(square::name square);

  Square(square::name square, Piece& piece);

  const square::name name() const;
  const square::file file() const;
  const square::rank rank() const;

  const Piece& piece() const;
  void piece(Piece& piece);
  void piece(types::nullpiece nullpiece);
  const bool has_piece() const;

 private:
  square::name name_;
  types::piece_optional piece_;
};
}  // namespace chess

namespace chess::types {
using square_vector = std::vector<Square>;
}

#endif
