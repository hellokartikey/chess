#ifndef CHESSPP_MOVE_HXX
#define CHESSPP_MOVE_HXX

namespace chess {
class Move {
  piece::piece _type;
  square::square _from;
  square::square _to;
};
}  // namespace chess

#endif
