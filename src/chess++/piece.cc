#include "piece.h"

namespace chess {
Piece::Piece(constants::piece type, constants::color color) {
  type_ = type;
  color_ = color;
}

constants::piece Piece::type() { return type_; }

void Piece::type(constants::piece piece) { type_ = piece; }

constants::color Piece::color() { return color_; }

void Piece::color(constants::color color) { color_ = color; }
}  // namespace chess
