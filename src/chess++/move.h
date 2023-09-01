#ifndef CHESSPP_MOVE_H
#define CHESSPP_MOVE_H

#include <array>
#include <optional>
#include <string_view>

#include "constants.h"
#include "ply.h"

/**API Example
 * Move move(ply_w, ply_b);
 *
 * move.white();
 * move.white(ply_w);
 * move.has_white();
 *
 * move.black();
 * move.black(ply_w);
 * move.has_black();
 *
 * move.index();
 * move.index(10);
 */

namespace chess {
class Move {
 public:
  Move();
  Move(Ply& white, Ply& black);

  void ply(piece::color color, Ply& ply);
  const Ply& ply(piece::color color) const;

 private:
  std::array<types::ply_optional, 2> ply_;
};
}  // namespace chess

#endif
