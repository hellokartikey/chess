#ifndef CHESSPP_CHESS_H
#define CHESSPP_CHESS_H

#include <string>

#include "constants.h"
#include "piece.h"

namespace chess {
class Chess {
public:
  Piece piece(piece::color color, piece::type type) const;
  Piece piece(board::square square);

  std::string fen() const;
  void fen(std::string fen);

  void move(/** Move move */);
  void unmove();

  bool move_legal(/** Move move */) const;
  piece::color check() const;

private:
  types::piece_vector _pieces;

  board::square _en_passant = board::NA;

  struct {
    bool _castle_white_king : 1;
    bool _castle_white_queen : 1;
    bool _castle_black_king : 1;
    bool _castle_black_queen : 1;

    piece::color _side : 1;
  };

  std::uint16_t _count_half = 0;
  std::uint16_t _count_moves = 1;
};
}

#endif