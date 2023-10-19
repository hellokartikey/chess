#include "piece.h"

namespace chess {
Piece::Piece() {
  type(piece::PAWN);
  color(piece::WHITE);
  square(board::A1);
  state(piece::ALIVE);
}

Piece::Piece(piece::type type, piece::color color, board::square square,
             piece::state state) {
  this->type(type);
  this->color(color);
  this->square(square);
  this->state(state);
}

piece::type Piece::type() const { return _type; }

void Piece::type(piece::type type) { _type = type; }

piece::color Piece::color() const { return _color; }

void Piece::color(const piece::color color) { _color = color; }

board::square Piece::square() const { return _square; }

void Piece::square(const board::square square) { _square = square; }

piece::state Piece::state() const { return _state; }

void Piece::state(const piece::state state) { _state = state; }
}  // namespace chess
