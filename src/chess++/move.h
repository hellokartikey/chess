#ifndef CHESSPP_MOVE_H
#define CHESSPP_MOVE_H

#include <array>
#include <optional>
#include <string_view>

#include "constants.h"
#include "ply.h"

/**API Example
 * Move move;
 * Move move(ply_w, ply_b);
 *
 * Get particular ply
 * move.ply(piece::white);
 * 
 * Set particular ply
 * move.ply(piece::black, ply);
 */

namespace chess {
class Move {
 public:
  Move();
  Move(Ply& white, Ply& black);

  void ply(piece::color color, Ply& ply);
  const Ply& ply(piece::color color) const;

 private:
  std::array<types::PlyOptional, 2> ply_;
};
}  // namespace chess

#endif
