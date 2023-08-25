#ifndef CHESSPP_TYPES_HXX
#define CHESSPP_TYPES_HXX

#include <array>
#include <vector>

#include "constants.hxx"
#include "move.hxx"
#include "piece.hxx"
#include "square.hxx"

namespace chess::types {
using move_list = std::vector<Move>;
}  // namespace chess::types

#endif
