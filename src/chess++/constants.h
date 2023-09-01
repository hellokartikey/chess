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
 * file::A
 * file::E
 *
 * // Ranks
 * rank::R4
 * rank::R8
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
 * color::white
 * color::black
 */

namespace chess::square {
constexpr int num_squares = 64;

enum name {  // clang-format off
  A1, B1, C1, D1, E1, F1, G1, H1,
  A2, B2, C2, D2, E2, F2, G2, H2,
  A3, B3, C3, D3, E3, F3, G3, H3,
  A4, B4, C4, D4, E4, F4, G4, H4,
  A5, B5, C5, D5, E5, F5, G5, H5,
  A6, B6, C6, D6, E6, F6, G6, H6,
  A7, B7, C7, D7, E7, F7, G7, H7,
  A8, B8, C8, D8, E8, F8, G8, H8
};  // clang-format on

enum file { A = 0, B = 1, C = 2, D = 3, E = 4, F = 5, G = 6, H = 7 };

enum rank { R1 = 0, R2 = 1, R3 = 2, R4 = 3, R5 = 4, R6 = 5, R7 = 6, R8 = 7 };
}  // namespace chess::square

namespace chess::piece {
enum type { pawn, knight, bishop, rook, queen, king };

enum color { white = 0, black = 1 };
}  // namespace chess::piece

namespace chess::move {
enum move {
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

enum type {
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
