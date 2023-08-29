#include "move.h"

namespace chess {
Move::Move() { index_ = 0; }

Move::Move(Ply& ply_white, Ply& ply_black) {
  ply_[constants::white] = ply_white;
  ply_[constants::black] = ply_black;
}

void Move::ply(constants::color color, Ply& ply) { ply_[color] = ply; }

Ply& Move::ply(constants::color color) { return ply_[color].value(); }
}  // namespace chess
