#ifndef CHESSPP_PIECE_H
#define CHESSPP_PIECE_H

#include <vector>

#include "constants.h"

namespace chess {
class Piece {
 public:
  Piece();
  Piece(piece::type type, piece::color color, board::square square,
        piece::state state = piece::ALIVE);

  piece::type type() const;
  void type(piece::type type);

  piece::color color() const;
  void color(const piece::color color);

  board::square square() const;
  void square(const board::square square);

  piece::state state() const;
  void state(const piece::state state);

 private:
  struct {
    piece::type _type : 3;
    piece::color _color : 1;
    board::square _square : 6;
    piece::state _state : 1;
  };
};
}  // namespace chess

namespace chess::types {
using piece_vector = std::vector<Piece>;
}

#endif