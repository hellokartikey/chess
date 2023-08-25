#ifndef CHESSPP_PLY_HXX
#define CHESSPP_PLY_HXX

#include "constants.hxx"

namespace chess {
class Ply {
  constants::color _color;
  constants::piece _piece_type;
  constants::square _from;
  constants::square _to;
};
}  // namespace chess

#endif
