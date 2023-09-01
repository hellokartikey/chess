#ifndef CHESSPP_PIECE_H
#define CHESSPP_PIECE_H

#include <optional>
#include <vector>

#include "constants.h"

/**API Example
 * Piece piece(piece::rook, piece::black);
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
 * piece.color();
 */

namespace chess {
class Piece {
 public:
  Piece(piece::type type, piece::color color);

  const piece::type type() const;
  void type(piece::type piece);

  const piece::color color() const;
  void color(piece::color color);

 private:
  piece::type type_;
  piece::color color_;
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
