#ifndef CHESSPP_PLY_H
#define CHESSPP_PLY_H

#include <optional>
#include <string_view>

#include "constants.h"
#include "piece.h"

/**API Example
 * Ply ply(e_pawn, move::double_pawn_push, square::E2, square::E4);
 *
 * // Get move type
 * ply.type();
 *
 * // Get player color
 * ply.color();
 *
 * // Get piece type
 * ply.piece_type();
 *
 * // Get piece object (const ref)
 * ply.piece()
 *
 * // Starting square
 * ply.from();
 * ply.from(E2);
 *
 * // Ending square
 * ply.to();
 * ply.to(E4);
 * 
 * // Check if promotion
 * ply.promotion();
 * 
 * // Check if capture
 * ply.capture();
 */

namespace chess {
class Ply {
 public:
  Ply(Piece& piece, move::type type, square::name from, square::name to);

  const move::type type() const;

  const piece::color color() const;

  const piece::type piece_type() const;

  const Piece& piece() const;

  const square::name from() const;
  void from(square::name square);

  const square::name to() const;
  void to(square::name square);

  const bool promotion() const;
  const bool capture() const;

  Ply& operator=(Ply& ply);

 private:
  const Piece& piece_;
  move::type type_;
  square::name from_;
  square::name to_;
};
}  // namespace chess

namespace chess::types {
using PlyOptional = std::optional<Ply>;
using nullply = std::nullopt_t;
}  // namespace chess::types

namespace chess {
constexpr types::PlyOptional nullply = std::nullopt;
}

#endif
