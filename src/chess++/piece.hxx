#ifndef CHESSPP_PIECE_HXX
#define CHESSPP_PIECE_HXX

#include <cstdint>
#include <vector>

#include "constants.hxx"

namespace chess {
class Piece {
  piece::piece _type;
  color::color _color;

 public:
  Piece(piece::piece type, color::color color);

  piece::piece get_type();
  color::color get_color();
};
}  // namespace chess

#endif
