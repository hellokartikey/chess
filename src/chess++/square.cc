#include "square.h"

namespace chess {
Square::Square(constants::square square) {
  name_ = square;
  piece_ = nullpiece;
}

Square::Square(constants::square square, Piece& piece) {
  name_ = square;
  piece_ = piece;
}

constants::square Square::name() { return name_; }

constants::file Square::file() { return constants::file(name_ % 8); }

constants::rank Square::rank() { return constants::rank(name_ / 8); }

Piece& Square::piece() { return piece_.value(); }

void Square::piece(Piece& piece) { piece_ = piece; }

void Square::piece(types::nullpiece nullpiece) { piece_ = nullpiece; }

bool Square::has_piece() { return piece_.has_value(); }
}  // namespace chess