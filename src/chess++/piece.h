#ifndef CHESSPP_PIECE_H
#define CHESSPP_PIECE_H

#include <functional>
#include <optional>
#include <vector>

#include "constants.h"

/**API Example
 * Piece piece(type, color);
 *
 * // Get piece information
 * piece.type();
 * piece.color();
 */

namespace chess {
class Piece {
 public:
  Piece(constants::piece type, constants::color color);

  constants::piece type();
  void type(constants::piece piece);

  constants::color color();
  void color(constants::color color);

 private:
  constants::piece type_;
  constants::color color_;
};
}  // namespace chess

namespace chess::types {
using piece_optional = std::optional<std::reference_wrapper<Piece>>;
using piece_vector = std::vector<std::reference_wrapper<Piece>>;
using nullpiece = std::nullopt_t;
}  // namespace chess::types

namespace chess {
constexpr std::nullopt_t nullpiece = std::nullopt;
}

#endif