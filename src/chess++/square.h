#ifndef CHESSPP_SQUARE_H
#define CHESSPP_SQUARE_H

#include <array>
#include <exception>
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
 * // Put piece on (nullpiece to remove)
 * square.piece(piece);
 *
 * // Get piece reference
 * square.piece();
 */

namespace chess::exception {
class square_empty : std::exception {
 public:
  const char* what() const noexcept;
};
}  // namespace chess::exception

namespace chess {
class Square {
 public:
  Square();
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
  types::PieceOptional piece_;
};
}  // namespace chess

namespace chess::types {
using SquareArray = std::array<Square, square::num_squares>;
}  // namespace chess::types

#endif
