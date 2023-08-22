#include <fmt/format.h>

#include "chess++/core.hxx"

int main() {
  chess::Piece piece(chess::piece::pawn, chess::color::white);

  chess::types::PieceList list;
  list.push_back(piece);

  chess::Square square(chess::square::E4);
  square.set_piece(list[0]);

  return 0;
}