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
std::string format_as(Move move) {
  return fmt::format("{} {}", move.ply(piece::black), move.ply(piece::white));
}

std::string format_as(Piece piece) {
  std::array<std::string, 2> rep = {"PNBRQK", "pnbrqk"};
  return fmt::format("{}", rep[piece.color()][piece.type()]);
}

std::string format_as(Ply ply) {
  std::array<std::string, 2> capture = {"", "x"};
  return fmt::format("{}{}{}{}", ply.piece(), ply.from(),
                     capture[ply.capture()], ply.to());
}

std::string format_as(Square sq) {
  return fmt::format("  {}\n+---+\n| {} | {}\n+---+", sq.file(), sq.rank(),
                     sq.piece());
}
}  // namespace chess
