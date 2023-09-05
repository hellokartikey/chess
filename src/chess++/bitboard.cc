#include "bitboard.h"

namespace chess {
Bitboard::Bitboard() { value_ = 0ll; }

Bitboard::Bitboard(types::bitboard bitboard) { value_ = bitboard; }

Bitboard::Bitboard(types::bitboard_bitset bitboard) { value_ = bitboard; }

const types::bitboard Bitboard::value() const { return value_.to_ullong(); }

void Bitboard::value(types::bitboard bitboard) { value_ = bitboard; }

bool Bitboard::operator[](square::name square) { return value_[square]; }

bool Bitboard::at(square::name square) { return value_.test(square); }

std::size_t Bitboard::count() const { return value_.count(); }

bool Bitboard::operator==(const Bitboard& rhs) { return value_ == rhs.value_; }

bool Bitboard::operator!=(const Bitboard& rhs) { return value_ != rhs.value_; }

Bitboard Bitboard::operator~() { return (~value_); }

Bitboard Bitboard::operator&(const Bitboard& rhs) {
  return value_ & rhs.value_;
}

Bitboard Bitboard::operator|(const Bitboard& rhs) {
  return value_ | rhs.value_;
}

Bitboard Bitboard::operator^(const Bitboard& rhs) {
  return value_ ^ rhs.value_;
}
}  // namespace chess
