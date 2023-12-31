#ifndef CHESSPP_CONSTANTS_H
#define CHESSPP_CONSTANTS_H

#include <cstdint>

/**API Example
 *
 * // Squares
 * square::A1
 * square::H5
 *
 * // Files
 * square::A
 * square::E
 *
 * // Ranks
 * square::R4
 * square::R8
 *
 * // Pieces
 * piece::pawn
 * piece::knight
 * piece::bishop
 * piece::rook
 * piece::queen
 * piece::king
 *
 * // Colors
 * piece::white
 * piece::black
 */

namespace chess::board {
constexpr int NUM_SQUARES = 64;

// clang-format off
enum square : std::uint8_t {
  A1, B1, C1, D1, E1, F1, G1, H1,
  A2, B2, C2, D2, E2, F2, G2, H2,
  A3, B3, C3, D3, E3, F3, G3, H3,
  A4, B4, C4, D4, E4, F4, G4, H4,
  A5, B5, C5, D5, E5, F5, G5, H5,
  A6, B6, C6, D6, E6, F6, G6, H6,
  A7, B7, C7, D7, E7, F7, G7, H7,
  A8, B8, C8, D8, E8, F8, G8, H8,

  NA
};
// clang-format on

enum file : std::uint8_t {
  A = 0,
  B = 1,
  C = 2,
  D = 3,
  E = 4,
  F = 5,
  G = 6,
  H = 7
};

enum rank : std::uint8_t {
  R1 = 0,
  R2 = 1,
  R3 = 2,
  R4 = 3,
  R5 = 4,
  R6 = 5,
  R7 = 6,
  R8 = 7
};
}  // namespace chess::board

namespace chess::piece {
enum type : std::uint8_t {
  PAWN = 0x00,
  KNIGHT = 0x01,
  BISHOP = 0x02,
  ROOK = 0x03,
  QUEEN = 0x04,
  KING = 0x05,
  EMPTY = 0x06
};

enum color : std::uint8_t { WHITE = 0, BLACK = 1, BLANK = 3 };

enum state : std::uint8_t { DEAD = 0, ALIVE = 1 };
}  // namespace chess::piece

namespace chess::move {
enum move : std::int8_t {
  north = -8,
  south = +8,
  east = +1,
  west = -1,
  double_north = -16,
  double_south = +16,
  knight_ne,
  knight_nw,
  knight_se,
  knight_sw,
  knight_en,
  knight_es,
  knight_wn,
  knight_ws
};

enum type : std::uint8_t {
  quiet = 0,
  double_pawn_push = 1,
  king_castle = 2,
  queen_castle = 3,
  capture = 4,
  en_passant = 5,
  knight_promotion = 8,
  bishop_promoiton = 9,
  rook_promotion = 10,
  queen_promotion = 11,
  knight_promotion_capture = 12,
  bishop_promoiton_capture = 13,
  rook_promotion_capture = 14,
  queen_promotion_capture = 15
};
}  // namespace chess::move

#endif
