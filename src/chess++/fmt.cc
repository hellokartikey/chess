#include "fmt.h"

#include <fmt/format.h>

namespace chess::square {
std::string format_as(square::name square) {
  return fmt::format("{}{}", square::file(square % 8),
                     square::rank(square / 8));
}

std::string format_as(square::file file) {
  std::string rep = "abcdefgh";
  return fmt::format("{}", rep[file]);
}

std::string format_as(square::rank rank) {
  std::string rep = "12345678";
  return fmt::format("{}", rep[rank]);
}
}  // namespace chess::square

namespace chess::piece {
std::string format_as(piece::type piece) {
  std::array<std::string, 6> rep = {"pawn", "knight", "bishop",
                                    "rook", "queen",  "king"};
  return rep[piece];
}

std::string format_as(piece::color color) {
  std::array<std::string, 2> rep = {"white", "black"};
  return rep[color];
}
}  // namespace chess::piece

namespace chess {
std::string format_as(Board board) {
  std::string files = "ABCDEFGH";
  std::string head = "  ";
  for (int i = 0; i < 8; i++) {
    head += files[i];
    head += "   ";
  }
  head += "\n";

  std::string hr = "+";
  for (int i = 0; i < 8; i++) {
    hr += "---+";
  }

  std::string f = head + hr + "\n";

  for (int i = 0; i < 8; i++) {
    f += "|";
    for (int j = 0; j < 8; j++) {
      square::name sq = square::name(i * 8 + j);
      if (board.square(sq).has_piece()) {
        f += fmt::format(" {} |", board.square(sq).piece());
      } else {
        f += "   |";
      }
    }
    f += fmt::format(" {}\n", board.square(square::name(i * 8)).rank());
    f += hr + "\n";
  }

  return f;
}

std::string format_as(Piece piece) {
  std::array<std::string, 2> rep = {"PNBRQK", "pnbrqk"};
  return fmt::format("{}", rep[piece.color()][piece.type()]);
}

std::string format_as(Move move) {
  std::array<std::string, 2> capture = {"", "x"};
  return fmt::format("{}{}{}{}", move.piece(), move.from(),
                     capture[move.capture()], move.to());
}

std::string format_as(Square square) {
  std::string f = fmt::format("  {}\n", square.file());
  f += "+---+\n";
  if (square.has_piece()) {
    f += fmt::format("| {} | {}\n", square.piece(), square.rank());
  } else {
    f += fmt::format("|   | {}\n", square.rank());
  }
  f += "+---+";

  return f;
}
}  // namespace chess

namespace chess::types {
std::string format_as(nullpiece np) { return " "; }
}  // namespace chess::types
