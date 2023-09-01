#include "piece.h"

namespace chess {
Piece::Piece(piece::type type, piece::color color) {
  type_ = type;
  color_ = color;
}

const piece::type Piece::type() const { return type_; }

void Piece::type(piece::type piece) { type_ = piece; }

const piece::color Piece::color() const { return color_; }

void Piece::color(piece::color color) { color_ = color; }
}  // namespace chess
