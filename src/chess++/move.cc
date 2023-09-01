#include "move.h"

namespace chess {
Move::Move() {}

Move::Move(Ply& white, Ply& black) {
  ply_[piece::white] = white;
  ply_[piece::black] = black;
}

void Move::ply(piece::color color, Ply& ply) { ply_[color] = ply; }

const Ply& Move::ply(piece::color color) const { return ply_[color].value(); }
}  // namespace chess
