#include "square.hxx"

namespace chess {
Square::Square(square::square square) {
  _name = square;
  _piece = nullptr;
}

Square::Square(square::square square, Piece &piece) {
  _name = square;
  set_piece(piece);
}

square::square Square::name() { return _name; }

file::file Square::file() { return file::file(_name % 8); }

rank::rank Square::rank() { return rank::rank(_name / 8); }

Piece &Square::get_piece() { return *_piece; }

void Square::set_piece(Piece &piece) { _piece = &piece; }
}  // namespace chess