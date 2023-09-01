#include "square.h"

namespace chess::exception {
const char* square_empty::what() const noexcept {
  return "Square does not conain any piece\n";
}
}  // namespace chess::exception

namespace chess {
Square::Square(square::name square) {
  name_ = square;
  piece_ = nullpiece;
}

Square::Square(square::name square, Piece& piece) {
  name_ = square;
  piece_ = piece;
}

const square::name Square::name() const { return name_; }

const square::file Square::file() const { return square::file(name_ % 8); }

const square::rank Square::rank() const { return square::rank(name_ / 8); }

const Piece& Square::piece() const {
  if (has_piece()) {
    return piece_.value();
  } else {
    throw exception::square_empty();
  }
}

void Square::piece(Piece& piece) { piece_ = piece; }

void Square::piece(types::nullpiece nullpiece) { piece_ = nullpiece; }

const bool Square::has_piece() const { return piece_.has_value(); }
}  // namespace chess
