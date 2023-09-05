#ifndef CHESSPP_BITBOARD_H
#define CHESSPP_BITBOARD_H

#include <bitset>
#include <cstdint>

#include "constants.h"

namespace chess::types {
using bitboard = std::uint64_t;
using bitboard_bitset = std::bitset<square::num_squares>;
}  // namespace chess::types

namespace chess {
class Bitboard {
 public:
  Bitboard();
  Bitboard(types::bitboard bitboard);
  Bitboard(types::bitboard_bitset bitboard);

  const types::bitboard value() const;
  void value(types::bitboard bitboard);

  bool operator[](square::name square);
  bool at(square::name square);

  std::size_t count() const;

  bool operator==(const Bitboard& rhs);
  bool operator!=(const Bitboard& rhs);

  Bitboard operator~();
  Bitboard operator&(const Bitboard& rhs);
  Bitboard operator|(const Bitboard& rhs);
  Bitboard operator^(const Bitboard& rhs);

 private:
  types::bitboard_bitset value_;
};

}  // namespace chess

#endif
