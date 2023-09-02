#ifndef CHESSPP_MOVE_H
#define CHESSPP_MOVE_H

#include <optional>
#include <string_view>

#include "constants.h"
#include "piece.h"

/**API Example
 * Move move(e_pawn, move::double_pawn_push, square::E2, square::E4);
 *
 * // Get move type
 * move.type();
 *
 * // Get player color
 * move.color();
 *
 * // Get piece type
 * move.piece_type();
 *
 * // Get piece object (const ref)
 * move.piece()
 *
 * // Starting square
 * move.from();
 * move.from(E2);
 *
 * // Ending square
 * move.to();
 * move.to(E4);
 *
 * // Check if promotion
 * move.promotion();
 *
 * // Check if capture
 * move.capture();
 */

namespace chess {
class Move {
 public:
  Move(Piece& piece, move::type type, square::name from, square::name to);

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

  Move& operator=(Move& move);

 private:
  const Piece& piece_;
  move::type type_;
  square::name from_;
  square::name to_;
};
}  // namespace chess

namespace chess::types {
using MoveList = std::vector<Move>;
}  // namespace chess::types

#endif
