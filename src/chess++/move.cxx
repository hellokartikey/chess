#include "move.hxx"

#include <utility>

#include "constants.hxx"

namespace chess {
Move::Move() {
  _ply[constants::color::black] = nullptr;
  _ply[constants::color::white] = nullptr;
}

Move::Move(Ply& ply_black, Ply& ply_white) {
  ply(constants::color::black, ply_black);
  ply(constants::color::white, ply_white);
}

void Move::ply(constants::color color, Ply& ply) { _ply[color] = &ply; }

Ply& Move::ply(constants::color color) { return *_ply[color]; }
}  // namespace chess
