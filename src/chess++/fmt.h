#ifndef CHESSPP_FMT_H
#define CHESSPP_FMT_H

#include <array>
#include <map>
#include <string>

#include "board.h"
#include "constants.h"
#include "move.h"
#include "piece.h"
#include "square.h"

namespace chess::square {
std::string format_as(square::name square);
std::string format_as(square::file file);
std::string format_as(square::rank rank);
}  // namespace chess::square

namespace chess::piece {
std::string format_as(piece piece);
std::string format_as(attr attr);
}  // namespace chess::piece

namespace chess {
std::string format_as(Board board);
std::string format_as(Move move);
std::string format_as(Piece piece);
std::string format_as(Square square);
}  // namespace chess

namespace chess::types {
std::string format_as(nullpiece np);
}

#endif
