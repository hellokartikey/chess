#ifndef CHESSPP_MOVE_HXX
#define CHESSPP_MOVE_HXX

#include <array>

#include "ply.hxx"

namespace chess {
class Move {
  std::array<Ply*, 2> _ply;

 public:
  Move();
  Move(Ply& ply_black, Ply& ply_white);

  void ply(constants::color color, Ply& ply);
  Ply& ply(constants::color color);
};
}  // namespace chess

#endif
