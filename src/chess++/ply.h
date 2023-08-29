#ifndef CHESSPP_PLY_H
#define CHESSPP_PLY_H

#include <string_view>

#include "constants.h"

/**API Example
 * Ply ply(white, pawn, E2, E4);
 * Ply ply(san)
 *
 * // Player color
 * ply.color();
 * ply.color(black);
 *
 * // Moved piece type
 * ply.piece();
 * ply.piece(knight);
 *
 * // Starting square
 * ply.from();
 * ply.from(E2);
 *
 * // Ending square
 * ply.to();
 * ply.to(E4);
 *
 * // Get SAN notation
 * ply.san();
 *
 */

namespace chess {
class Ply {
 public:
  Ply(constants::color color, constants::piece piece, constants::square from,
      constants::square to);
  Ply(std::string_view SAN);

  constants::color color();
  void color(constants::color color);

  constants::piece piece();
  void piece(constants::piece piece);

  constants::square from();
  void from(constants::square square);

  constants::square to();
  void to(constants::square square);

  std::string_view san();

 private:
  constants::color color_;
  constants::piece piece_;
  constants::square from_;
  constants::square to_;
};
}  // namespace chess

#endif
