#ifndef CHESSPP_FMT_H
#define CHESSPP_FMT_H

#include <array>
#include <string>
#include <string_view>

#include "constants.h"
#include "piece.h"
#include "square.h"

namespace chess::constants {
std::string format_as(constants::square square);
std::string format_as(constants::file file);
std::string format_as(constants::rank rank);
std::string format_as(constants::piece piece);
std::string format_as(constants::color color);
}  // namespace chess::constants

namespace chess {
std::string format_as(Piece piece);
std::string format_as(Square square);
}  // namespace chess

#endif
