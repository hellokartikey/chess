#ifndef CHESSPP_PIECE_H
#define CHESSPP_PIECE_H

#include <optional>
#include <vector>

#include "constants.h"

/**API Example
 * Piece piece(piece::rook | piece::black);
 *
 * // Get piece type
 * piece.type();
 *
 * // Set piece type
 * piece.type(piece::knight);
 *
 * // Get piece color
 * piece.color();
 *
 * // Set piece color
 * piece.color(piece::white);
 *
 * // Get underlying enum
 * piece.piece();
 *
 * // Set underlying enum directly
 * piece.piece(white_knight);
 *
 * piece.color();
 */

namespace chess {
class Piece {
 public:
  Piece(piece::piece type);

  const piece::piece piece() const;
  void piece(piece::piece piece);

  const piece::attr color() const;
  void color(piece::attr color);

  const piece::attr type() const;
  void type(piece::attr type);

 private:
  piece::piece piece_;
};
}  // namespace chess

namespace chess::types {
using PieceOptional = std::optional<Piece>;
using PieceVector = std::vector<Piece>;
using nullpiece = std::nullopt_t;
}  // namespace chess::types

namespace chess {
constexpr types::nullpiece nullpiece = std::nullopt;
}

#endif
