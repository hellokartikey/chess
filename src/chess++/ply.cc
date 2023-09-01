#include "ply.h"

namespace chess {
Ply::Ply(Piece& piece, move::type type, square::name from, square::name to)
    : piece_(piece) {
  type_ = type;
  from_ = from;
  to_ = to;
}

const move::type Ply::type() const { return type_; }

const piece::color Ply::color() const { return piece_.color(); }

const piece::type Ply::piece_type() const { return piece_.type(); }

const Piece& Ply::piece() const { return piece_; }

const square::name Ply::from() const { return from_; }

void Ply::from(square::name square) { from_ = square; }

const square::name Ply::to() const { return to_; }

void Ply::to(square::name square) { to_ = square; }

const bool Ply::promotion() const { return (type_ & 0b1000) >> 3; }

const bool Ply::capture() const { return (type_ & 0b0100) >> 2; }

Ply& Ply::operator=(Ply& ply) {
  *this = ply;
  return *this;
}
}  // namespace chess
