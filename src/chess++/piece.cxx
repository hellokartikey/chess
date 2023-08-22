#include "piece.hxx"

namespace chess {
Piece::Piece(piece::piece type, color::color color) {
  _type = type;
  _color = color;
}

piece::piece Piece::get_type() { return _type; }

color::color Piece::get_color() { return _color; }
}  // namespace chess
