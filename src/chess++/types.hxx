#ifndef CHESSPP_TYPES_HXX
#define CHESSPP_TYPES_HXX

#include <array>
#include <vector>

#include "constants.hxx"
#include "move.hxx"
#include "square.hxx"

namespace chess::types {
using move_list = std::vector<Move>;
using board = std::array<Square, constants::num_squares>;
}  // namespace chess::types

#endif
