#include "square.hxx"

namespace chess {
Square::Square(constants::square square) {
  _name = square;
  _piece = nullptr;
}

Square::Square(constants::square square, Piece& piece) {
  _name = square;
  this->piece(piece);
}

constants::square Square::name() { return _name; }

constants::file Square::file() { return constants::file(_name % 8); }

constants::rank Square::rank() { return constants::rank(_name / 8); }

Piece& Square::piece() { return *_piece; }

void Square::piece(Piece& piece) { _piece = &piece; }
}  // namespace chess