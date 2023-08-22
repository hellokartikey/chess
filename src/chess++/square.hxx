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
  square::square _name;
  Piece *_piece;

 public:
  Square(square::square square);
  Square(square::square square, Piece &piece);

  square::square name();
  file::file file();
  rank::rank rank();

  Piece &get_piece();
  void set_piece(Piece &piece);
};
}  // namespace chess

#endif
