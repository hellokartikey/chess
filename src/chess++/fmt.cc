#include "fmt.h"

#include <fmt/format.h>

namespace chess::constants {
std::string format_as(constants::square square) {
  return fmt::format("{}{}", constants::file(square % 8),
                     constants::rank(square / 8));
}

std::string format_as(constants::file file) {
  std::string rep = "ABCDEFGH";
  return fmt::format("{}", rep[file]);
}

std::string format_as(constants::rank rank) {
  std::string rep = "12345678";
  return fmt::format("{}", rep[rank]);
}

std::string format_as(constants::piece piece) {
  std::array<std::string, 6> rep = {"pawn", "knight", "bishop",
                                    "rook", "queen",  "king"};
  return rep[piece];
}

std::string format_as(constants::color color) {
  std::array<std::string, 2> rep = {"white", "black"};
  return rep[color];
}
}  // namespace chess::constants

namespace chess {
std::string format_as(Piece piece) {
  std::array<std::string, 2> rep = {"PNBRQK", "pnbrqk"};
  return fmt::format("{}", rep[piece.color()][piece.type()]);
}

std::string format_as(Square sq) {
  return fmt::format("  {}\n+---+\n| {} | {}\n+---+", sq.file(), sq.rank(),
                     sq.piece());
}
}  // namespace chess
