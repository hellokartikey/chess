#include "piece.h"

namespace chess {
Piece::Piece(piece::piece piece) { piece_ = piece; }

const piece::piece Piece::piece() const { return piece_; }

void Piece::piece(piece::piece piece) { piece_ = piece; }

const piece::attr Piece::color() const { return piece::attr(piece_ & 0xf0); }

void Piece::color(piece::attr color) {
  piece_ = piece::piece((piece_ & 0x0f) | color);
}

const piece::attr Piece::type() const { return piece::attr(piece_ & 0x0f); }

void Piece::type(piece::attr type) {
  piece_ = piece::piece((piece_ & 0xf0) | type);
}
}  // namespace chess
