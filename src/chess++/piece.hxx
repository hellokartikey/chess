#ifndef CHESSPP_PIECE_HXX
#define CHESSPP_PIECE_HXX

#include <cstdint>
#include <vector>

#include "constants.hxx"

namespace chess {
class Piece {
  constants::piece _type;
  constants::color _color;

 public:
  Piece(constants::piece type, constants::color color);

  constants::piece type();
  constants::color color();
};
}  // namespace chess

#endif
