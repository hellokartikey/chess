#ifndef CHESSPP_FMT_H
#define CHESSPP_FMT_H

#include <array>
#include <string>

#include "constants.h"
#include "move.h"
#include "piece.h"
#include "ply.h"
#include "square.h"

namespace chess::square {
std::string format_as(square::name square);
std::string format_as(square::file file);
std::string format_as(square::rank rank);
}  // namespace chess::square

namespace chess::piece {
std::string format_as(piece::type piece);
std::string format_as(piece::color color);
}  // namespace chess::piece

namespace chess {
std::string format_as(Move move);
std::string format_as(Piece piece);
std::string format_as(Ply ply);
std::string format_as(Square square);
}  // namespace chess

#endif
