#include <fmt/format.h>

#include <iostream>
#include <lexy/action/parse.hpp>
#include <lexy/input/string_input.hpp>
#include <string>

#include "chess++/core.h"
#include "chess++/fmt.h"

using namespace chess;

auto main() -> int {
  Bitboard bitboard(0xaa55aa55aa55aa55);
  Board board;
  Piece piece(piece::white | piece::pawn);
  Move move(piece, move::quiet, square::E2, square::E2);
  Square square;

  fmt::print("Bitboard {}\n", sizeof(bitboard));
  fmt::print("Board    {}\n", sizeof(board));
  fmt::print("Piece    {}\n", sizeof(piece));
  fmt::print("Move     {}\n", sizeof(move));
  fmt::print("Square   {}\n", sizeof(square));
  fmt::print("PieceOpt {}\n", sizeof(types::PieceOptional));
  fmt::print("PieceVec {}\n", sizeof(types::PieceVector));

  fmt::print("{}", bitboard);
  fmt::print("{}", board);
  return 0;
}