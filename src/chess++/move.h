#ifndef CHESSPP_MOVE_H
#define CHESSPP_MOVE_H

#include <array>
#include <optional>
#include <string_view>

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
  Move(Ply& ply_white, Ply& ply_black);

  void ply(constants::color color, Ply& ply);
  Ply& ply(constants::color color);

 private:
  int index_;
  std::array<std::optional<Ply>, 2> ply_;
};
}  // namespace chess

#endif
