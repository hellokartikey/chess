#include "move.h"

namespace chess {
Move::Move(Piece& piece, move::type type, square::name from, square::name to)
    : piece_(piece) {
  type_ = type;
  from_ = from;
  to_ = to;
}

const move::type Move::type() const { return type_; }

const piece::color Move::color() const { return piece_.color(); }

const piece::type Move::piece_type() const { return piece_.type(); }

const Piece& Move::piece() const { return piece_; }

const square::name Move::from() const { return from_; }

void Move::from(square::name square) { from_ = square; }

const square::name Move::to() const { return to_; }

void Move::to(square::name square) { to_ = square; }

const bool Move::promotion() const { return (type_ & 0b1000) >> 3; }

const bool Move::capture() const { return (type_ & 0b0100) >> 2; }

Move& Move::operator=(Move& move) {
  *this = move;
  return *this;
}
}  // namespace chess
