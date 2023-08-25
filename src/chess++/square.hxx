#ifndef CHESSPP_SQUARE_HXX
#define CHESSPP_SQUARE_HXX

#include "constants.hxx"
#include "piece.hxx"

/**API Reference
 * Square square(square::A1);
 *
 * std::cout << square.name(); // 0
 * std::cout << square.file(); // 0
 * std::cout << square.rank(); // 0
 *
 */

namespace chess {
class Square {
  constants::square _name;
  Piece* _piece;

 public:
  Square(constants::square square);
  Square(constants::square square, Piece& piece);

  constants::square name();
  constants::file file();
  constants::rank rank();

  Piece& piece();
  void piece(Piece& piece);
};
}  // namespace chess

#endif
