#include "piece.hxx"

namespace chess {
Piece::Piece(constants::piece type, constants::color color) {
  _type = type;
  _color = color;
}

constants::piece Piece::type() { return _type; }

constants::color Piece::color() { return _color; }
}  // namespace chess
