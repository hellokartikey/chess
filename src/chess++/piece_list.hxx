#ifndef CHESSPP_PIECE_LIST_HXX
#define CHESSPP_PIECE_LIST_HXX

#include <vector>

#include "piece.hxx"

namespace chess::types {
class PieceList {
  using size_type = std::size_t;
  std::vector<Piece *> vec;

 public:
  Piece &at(size_type pos);
  Piece &operator[](size_type pos);

  bool empty();
  size_type size();

  void clear();
  void push_back(Piece &piece);
};
}  // namespace chess::types

#endif
